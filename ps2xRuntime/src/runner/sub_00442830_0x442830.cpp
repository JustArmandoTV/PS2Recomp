#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00442830
// Address: 0x442830 - 0x443570
void sub_00442830_0x442830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00442830_0x442830");
#endif

    switch (ctx->pc) {
        case 0x442830u: goto label_442830;
        case 0x442834u: goto label_442834;
        case 0x442838u: goto label_442838;
        case 0x44283cu: goto label_44283c;
        case 0x442840u: goto label_442840;
        case 0x442844u: goto label_442844;
        case 0x442848u: goto label_442848;
        case 0x44284cu: goto label_44284c;
        case 0x442850u: goto label_442850;
        case 0x442854u: goto label_442854;
        case 0x442858u: goto label_442858;
        case 0x44285cu: goto label_44285c;
        case 0x442860u: goto label_442860;
        case 0x442864u: goto label_442864;
        case 0x442868u: goto label_442868;
        case 0x44286cu: goto label_44286c;
        case 0x442870u: goto label_442870;
        case 0x442874u: goto label_442874;
        case 0x442878u: goto label_442878;
        case 0x44287cu: goto label_44287c;
        case 0x442880u: goto label_442880;
        case 0x442884u: goto label_442884;
        case 0x442888u: goto label_442888;
        case 0x44288cu: goto label_44288c;
        case 0x442890u: goto label_442890;
        case 0x442894u: goto label_442894;
        case 0x442898u: goto label_442898;
        case 0x44289cu: goto label_44289c;
        case 0x4428a0u: goto label_4428a0;
        case 0x4428a4u: goto label_4428a4;
        case 0x4428a8u: goto label_4428a8;
        case 0x4428acu: goto label_4428ac;
        case 0x4428b0u: goto label_4428b0;
        case 0x4428b4u: goto label_4428b4;
        case 0x4428b8u: goto label_4428b8;
        case 0x4428bcu: goto label_4428bc;
        case 0x4428c0u: goto label_4428c0;
        case 0x4428c4u: goto label_4428c4;
        case 0x4428c8u: goto label_4428c8;
        case 0x4428ccu: goto label_4428cc;
        case 0x4428d0u: goto label_4428d0;
        case 0x4428d4u: goto label_4428d4;
        case 0x4428d8u: goto label_4428d8;
        case 0x4428dcu: goto label_4428dc;
        case 0x4428e0u: goto label_4428e0;
        case 0x4428e4u: goto label_4428e4;
        case 0x4428e8u: goto label_4428e8;
        case 0x4428ecu: goto label_4428ec;
        case 0x4428f0u: goto label_4428f0;
        case 0x4428f4u: goto label_4428f4;
        case 0x4428f8u: goto label_4428f8;
        case 0x4428fcu: goto label_4428fc;
        case 0x442900u: goto label_442900;
        case 0x442904u: goto label_442904;
        case 0x442908u: goto label_442908;
        case 0x44290cu: goto label_44290c;
        case 0x442910u: goto label_442910;
        case 0x442914u: goto label_442914;
        case 0x442918u: goto label_442918;
        case 0x44291cu: goto label_44291c;
        case 0x442920u: goto label_442920;
        case 0x442924u: goto label_442924;
        case 0x442928u: goto label_442928;
        case 0x44292cu: goto label_44292c;
        case 0x442930u: goto label_442930;
        case 0x442934u: goto label_442934;
        case 0x442938u: goto label_442938;
        case 0x44293cu: goto label_44293c;
        case 0x442940u: goto label_442940;
        case 0x442944u: goto label_442944;
        case 0x442948u: goto label_442948;
        case 0x44294cu: goto label_44294c;
        case 0x442950u: goto label_442950;
        case 0x442954u: goto label_442954;
        case 0x442958u: goto label_442958;
        case 0x44295cu: goto label_44295c;
        case 0x442960u: goto label_442960;
        case 0x442964u: goto label_442964;
        case 0x442968u: goto label_442968;
        case 0x44296cu: goto label_44296c;
        case 0x442970u: goto label_442970;
        case 0x442974u: goto label_442974;
        case 0x442978u: goto label_442978;
        case 0x44297cu: goto label_44297c;
        case 0x442980u: goto label_442980;
        case 0x442984u: goto label_442984;
        case 0x442988u: goto label_442988;
        case 0x44298cu: goto label_44298c;
        case 0x442990u: goto label_442990;
        case 0x442994u: goto label_442994;
        case 0x442998u: goto label_442998;
        case 0x44299cu: goto label_44299c;
        case 0x4429a0u: goto label_4429a0;
        case 0x4429a4u: goto label_4429a4;
        case 0x4429a8u: goto label_4429a8;
        case 0x4429acu: goto label_4429ac;
        case 0x4429b0u: goto label_4429b0;
        case 0x4429b4u: goto label_4429b4;
        case 0x4429b8u: goto label_4429b8;
        case 0x4429bcu: goto label_4429bc;
        case 0x4429c0u: goto label_4429c0;
        case 0x4429c4u: goto label_4429c4;
        case 0x4429c8u: goto label_4429c8;
        case 0x4429ccu: goto label_4429cc;
        case 0x4429d0u: goto label_4429d0;
        case 0x4429d4u: goto label_4429d4;
        case 0x4429d8u: goto label_4429d8;
        case 0x4429dcu: goto label_4429dc;
        case 0x4429e0u: goto label_4429e0;
        case 0x4429e4u: goto label_4429e4;
        case 0x4429e8u: goto label_4429e8;
        case 0x4429ecu: goto label_4429ec;
        case 0x4429f0u: goto label_4429f0;
        case 0x4429f4u: goto label_4429f4;
        case 0x4429f8u: goto label_4429f8;
        case 0x4429fcu: goto label_4429fc;
        case 0x442a00u: goto label_442a00;
        case 0x442a04u: goto label_442a04;
        case 0x442a08u: goto label_442a08;
        case 0x442a0cu: goto label_442a0c;
        case 0x442a10u: goto label_442a10;
        case 0x442a14u: goto label_442a14;
        case 0x442a18u: goto label_442a18;
        case 0x442a1cu: goto label_442a1c;
        case 0x442a20u: goto label_442a20;
        case 0x442a24u: goto label_442a24;
        case 0x442a28u: goto label_442a28;
        case 0x442a2cu: goto label_442a2c;
        case 0x442a30u: goto label_442a30;
        case 0x442a34u: goto label_442a34;
        case 0x442a38u: goto label_442a38;
        case 0x442a3cu: goto label_442a3c;
        case 0x442a40u: goto label_442a40;
        case 0x442a44u: goto label_442a44;
        case 0x442a48u: goto label_442a48;
        case 0x442a4cu: goto label_442a4c;
        case 0x442a50u: goto label_442a50;
        case 0x442a54u: goto label_442a54;
        case 0x442a58u: goto label_442a58;
        case 0x442a5cu: goto label_442a5c;
        case 0x442a60u: goto label_442a60;
        case 0x442a64u: goto label_442a64;
        case 0x442a68u: goto label_442a68;
        case 0x442a6cu: goto label_442a6c;
        case 0x442a70u: goto label_442a70;
        case 0x442a74u: goto label_442a74;
        case 0x442a78u: goto label_442a78;
        case 0x442a7cu: goto label_442a7c;
        case 0x442a80u: goto label_442a80;
        case 0x442a84u: goto label_442a84;
        case 0x442a88u: goto label_442a88;
        case 0x442a8cu: goto label_442a8c;
        case 0x442a90u: goto label_442a90;
        case 0x442a94u: goto label_442a94;
        case 0x442a98u: goto label_442a98;
        case 0x442a9cu: goto label_442a9c;
        case 0x442aa0u: goto label_442aa0;
        case 0x442aa4u: goto label_442aa4;
        case 0x442aa8u: goto label_442aa8;
        case 0x442aacu: goto label_442aac;
        case 0x442ab0u: goto label_442ab0;
        case 0x442ab4u: goto label_442ab4;
        case 0x442ab8u: goto label_442ab8;
        case 0x442abcu: goto label_442abc;
        case 0x442ac0u: goto label_442ac0;
        case 0x442ac4u: goto label_442ac4;
        case 0x442ac8u: goto label_442ac8;
        case 0x442accu: goto label_442acc;
        case 0x442ad0u: goto label_442ad0;
        case 0x442ad4u: goto label_442ad4;
        case 0x442ad8u: goto label_442ad8;
        case 0x442adcu: goto label_442adc;
        case 0x442ae0u: goto label_442ae0;
        case 0x442ae4u: goto label_442ae4;
        case 0x442ae8u: goto label_442ae8;
        case 0x442aecu: goto label_442aec;
        case 0x442af0u: goto label_442af0;
        case 0x442af4u: goto label_442af4;
        case 0x442af8u: goto label_442af8;
        case 0x442afcu: goto label_442afc;
        case 0x442b00u: goto label_442b00;
        case 0x442b04u: goto label_442b04;
        case 0x442b08u: goto label_442b08;
        case 0x442b0cu: goto label_442b0c;
        case 0x442b10u: goto label_442b10;
        case 0x442b14u: goto label_442b14;
        case 0x442b18u: goto label_442b18;
        case 0x442b1cu: goto label_442b1c;
        case 0x442b20u: goto label_442b20;
        case 0x442b24u: goto label_442b24;
        case 0x442b28u: goto label_442b28;
        case 0x442b2cu: goto label_442b2c;
        case 0x442b30u: goto label_442b30;
        case 0x442b34u: goto label_442b34;
        case 0x442b38u: goto label_442b38;
        case 0x442b3cu: goto label_442b3c;
        case 0x442b40u: goto label_442b40;
        case 0x442b44u: goto label_442b44;
        case 0x442b48u: goto label_442b48;
        case 0x442b4cu: goto label_442b4c;
        case 0x442b50u: goto label_442b50;
        case 0x442b54u: goto label_442b54;
        case 0x442b58u: goto label_442b58;
        case 0x442b5cu: goto label_442b5c;
        case 0x442b60u: goto label_442b60;
        case 0x442b64u: goto label_442b64;
        case 0x442b68u: goto label_442b68;
        case 0x442b6cu: goto label_442b6c;
        case 0x442b70u: goto label_442b70;
        case 0x442b74u: goto label_442b74;
        case 0x442b78u: goto label_442b78;
        case 0x442b7cu: goto label_442b7c;
        case 0x442b80u: goto label_442b80;
        case 0x442b84u: goto label_442b84;
        case 0x442b88u: goto label_442b88;
        case 0x442b8cu: goto label_442b8c;
        case 0x442b90u: goto label_442b90;
        case 0x442b94u: goto label_442b94;
        case 0x442b98u: goto label_442b98;
        case 0x442b9cu: goto label_442b9c;
        case 0x442ba0u: goto label_442ba0;
        case 0x442ba4u: goto label_442ba4;
        case 0x442ba8u: goto label_442ba8;
        case 0x442bacu: goto label_442bac;
        case 0x442bb0u: goto label_442bb0;
        case 0x442bb4u: goto label_442bb4;
        case 0x442bb8u: goto label_442bb8;
        case 0x442bbcu: goto label_442bbc;
        case 0x442bc0u: goto label_442bc0;
        case 0x442bc4u: goto label_442bc4;
        case 0x442bc8u: goto label_442bc8;
        case 0x442bccu: goto label_442bcc;
        case 0x442bd0u: goto label_442bd0;
        case 0x442bd4u: goto label_442bd4;
        case 0x442bd8u: goto label_442bd8;
        case 0x442bdcu: goto label_442bdc;
        case 0x442be0u: goto label_442be0;
        case 0x442be4u: goto label_442be4;
        case 0x442be8u: goto label_442be8;
        case 0x442becu: goto label_442bec;
        case 0x442bf0u: goto label_442bf0;
        case 0x442bf4u: goto label_442bf4;
        case 0x442bf8u: goto label_442bf8;
        case 0x442bfcu: goto label_442bfc;
        case 0x442c00u: goto label_442c00;
        case 0x442c04u: goto label_442c04;
        case 0x442c08u: goto label_442c08;
        case 0x442c0cu: goto label_442c0c;
        case 0x442c10u: goto label_442c10;
        case 0x442c14u: goto label_442c14;
        case 0x442c18u: goto label_442c18;
        case 0x442c1cu: goto label_442c1c;
        case 0x442c20u: goto label_442c20;
        case 0x442c24u: goto label_442c24;
        case 0x442c28u: goto label_442c28;
        case 0x442c2cu: goto label_442c2c;
        case 0x442c30u: goto label_442c30;
        case 0x442c34u: goto label_442c34;
        case 0x442c38u: goto label_442c38;
        case 0x442c3cu: goto label_442c3c;
        case 0x442c40u: goto label_442c40;
        case 0x442c44u: goto label_442c44;
        case 0x442c48u: goto label_442c48;
        case 0x442c4cu: goto label_442c4c;
        case 0x442c50u: goto label_442c50;
        case 0x442c54u: goto label_442c54;
        case 0x442c58u: goto label_442c58;
        case 0x442c5cu: goto label_442c5c;
        case 0x442c60u: goto label_442c60;
        case 0x442c64u: goto label_442c64;
        case 0x442c68u: goto label_442c68;
        case 0x442c6cu: goto label_442c6c;
        case 0x442c70u: goto label_442c70;
        case 0x442c74u: goto label_442c74;
        case 0x442c78u: goto label_442c78;
        case 0x442c7cu: goto label_442c7c;
        case 0x442c80u: goto label_442c80;
        case 0x442c84u: goto label_442c84;
        case 0x442c88u: goto label_442c88;
        case 0x442c8cu: goto label_442c8c;
        case 0x442c90u: goto label_442c90;
        case 0x442c94u: goto label_442c94;
        case 0x442c98u: goto label_442c98;
        case 0x442c9cu: goto label_442c9c;
        case 0x442ca0u: goto label_442ca0;
        case 0x442ca4u: goto label_442ca4;
        case 0x442ca8u: goto label_442ca8;
        case 0x442cacu: goto label_442cac;
        case 0x442cb0u: goto label_442cb0;
        case 0x442cb4u: goto label_442cb4;
        case 0x442cb8u: goto label_442cb8;
        case 0x442cbcu: goto label_442cbc;
        case 0x442cc0u: goto label_442cc0;
        case 0x442cc4u: goto label_442cc4;
        case 0x442cc8u: goto label_442cc8;
        case 0x442cccu: goto label_442ccc;
        case 0x442cd0u: goto label_442cd0;
        case 0x442cd4u: goto label_442cd4;
        case 0x442cd8u: goto label_442cd8;
        case 0x442cdcu: goto label_442cdc;
        case 0x442ce0u: goto label_442ce0;
        case 0x442ce4u: goto label_442ce4;
        case 0x442ce8u: goto label_442ce8;
        case 0x442cecu: goto label_442cec;
        case 0x442cf0u: goto label_442cf0;
        case 0x442cf4u: goto label_442cf4;
        case 0x442cf8u: goto label_442cf8;
        case 0x442cfcu: goto label_442cfc;
        case 0x442d00u: goto label_442d00;
        case 0x442d04u: goto label_442d04;
        case 0x442d08u: goto label_442d08;
        case 0x442d0cu: goto label_442d0c;
        case 0x442d10u: goto label_442d10;
        case 0x442d14u: goto label_442d14;
        case 0x442d18u: goto label_442d18;
        case 0x442d1cu: goto label_442d1c;
        case 0x442d20u: goto label_442d20;
        case 0x442d24u: goto label_442d24;
        case 0x442d28u: goto label_442d28;
        case 0x442d2cu: goto label_442d2c;
        case 0x442d30u: goto label_442d30;
        case 0x442d34u: goto label_442d34;
        case 0x442d38u: goto label_442d38;
        case 0x442d3cu: goto label_442d3c;
        case 0x442d40u: goto label_442d40;
        case 0x442d44u: goto label_442d44;
        case 0x442d48u: goto label_442d48;
        case 0x442d4cu: goto label_442d4c;
        case 0x442d50u: goto label_442d50;
        case 0x442d54u: goto label_442d54;
        case 0x442d58u: goto label_442d58;
        case 0x442d5cu: goto label_442d5c;
        case 0x442d60u: goto label_442d60;
        case 0x442d64u: goto label_442d64;
        case 0x442d68u: goto label_442d68;
        case 0x442d6cu: goto label_442d6c;
        case 0x442d70u: goto label_442d70;
        case 0x442d74u: goto label_442d74;
        case 0x442d78u: goto label_442d78;
        case 0x442d7cu: goto label_442d7c;
        case 0x442d80u: goto label_442d80;
        case 0x442d84u: goto label_442d84;
        case 0x442d88u: goto label_442d88;
        case 0x442d8cu: goto label_442d8c;
        case 0x442d90u: goto label_442d90;
        case 0x442d94u: goto label_442d94;
        case 0x442d98u: goto label_442d98;
        case 0x442d9cu: goto label_442d9c;
        case 0x442da0u: goto label_442da0;
        case 0x442da4u: goto label_442da4;
        case 0x442da8u: goto label_442da8;
        case 0x442dacu: goto label_442dac;
        case 0x442db0u: goto label_442db0;
        case 0x442db4u: goto label_442db4;
        case 0x442db8u: goto label_442db8;
        case 0x442dbcu: goto label_442dbc;
        case 0x442dc0u: goto label_442dc0;
        case 0x442dc4u: goto label_442dc4;
        case 0x442dc8u: goto label_442dc8;
        case 0x442dccu: goto label_442dcc;
        case 0x442dd0u: goto label_442dd0;
        case 0x442dd4u: goto label_442dd4;
        case 0x442dd8u: goto label_442dd8;
        case 0x442ddcu: goto label_442ddc;
        case 0x442de0u: goto label_442de0;
        case 0x442de4u: goto label_442de4;
        case 0x442de8u: goto label_442de8;
        case 0x442decu: goto label_442dec;
        case 0x442df0u: goto label_442df0;
        case 0x442df4u: goto label_442df4;
        case 0x442df8u: goto label_442df8;
        case 0x442dfcu: goto label_442dfc;
        case 0x442e00u: goto label_442e00;
        case 0x442e04u: goto label_442e04;
        case 0x442e08u: goto label_442e08;
        case 0x442e0cu: goto label_442e0c;
        case 0x442e10u: goto label_442e10;
        case 0x442e14u: goto label_442e14;
        case 0x442e18u: goto label_442e18;
        case 0x442e1cu: goto label_442e1c;
        case 0x442e20u: goto label_442e20;
        case 0x442e24u: goto label_442e24;
        case 0x442e28u: goto label_442e28;
        case 0x442e2cu: goto label_442e2c;
        case 0x442e30u: goto label_442e30;
        case 0x442e34u: goto label_442e34;
        case 0x442e38u: goto label_442e38;
        case 0x442e3cu: goto label_442e3c;
        case 0x442e40u: goto label_442e40;
        case 0x442e44u: goto label_442e44;
        case 0x442e48u: goto label_442e48;
        case 0x442e4cu: goto label_442e4c;
        case 0x442e50u: goto label_442e50;
        case 0x442e54u: goto label_442e54;
        case 0x442e58u: goto label_442e58;
        case 0x442e5cu: goto label_442e5c;
        case 0x442e60u: goto label_442e60;
        case 0x442e64u: goto label_442e64;
        case 0x442e68u: goto label_442e68;
        case 0x442e6cu: goto label_442e6c;
        case 0x442e70u: goto label_442e70;
        case 0x442e74u: goto label_442e74;
        case 0x442e78u: goto label_442e78;
        case 0x442e7cu: goto label_442e7c;
        case 0x442e80u: goto label_442e80;
        case 0x442e84u: goto label_442e84;
        case 0x442e88u: goto label_442e88;
        case 0x442e8cu: goto label_442e8c;
        case 0x442e90u: goto label_442e90;
        case 0x442e94u: goto label_442e94;
        case 0x442e98u: goto label_442e98;
        case 0x442e9cu: goto label_442e9c;
        case 0x442ea0u: goto label_442ea0;
        case 0x442ea4u: goto label_442ea4;
        case 0x442ea8u: goto label_442ea8;
        case 0x442eacu: goto label_442eac;
        case 0x442eb0u: goto label_442eb0;
        case 0x442eb4u: goto label_442eb4;
        case 0x442eb8u: goto label_442eb8;
        case 0x442ebcu: goto label_442ebc;
        case 0x442ec0u: goto label_442ec0;
        case 0x442ec4u: goto label_442ec4;
        case 0x442ec8u: goto label_442ec8;
        case 0x442eccu: goto label_442ecc;
        case 0x442ed0u: goto label_442ed0;
        case 0x442ed4u: goto label_442ed4;
        case 0x442ed8u: goto label_442ed8;
        case 0x442edcu: goto label_442edc;
        case 0x442ee0u: goto label_442ee0;
        case 0x442ee4u: goto label_442ee4;
        case 0x442ee8u: goto label_442ee8;
        case 0x442eecu: goto label_442eec;
        case 0x442ef0u: goto label_442ef0;
        case 0x442ef4u: goto label_442ef4;
        case 0x442ef8u: goto label_442ef8;
        case 0x442efcu: goto label_442efc;
        case 0x442f00u: goto label_442f00;
        case 0x442f04u: goto label_442f04;
        case 0x442f08u: goto label_442f08;
        case 0x442f0cu: goto label_442f0c;
        case 0x442f10u: goto label_442f10;
        case 0x442f14u: goto label_442f14;
        case 0x442f18u: goto label_442f18;
        case 0x442f1cu: goto label_442f1c;
        case 0x442f20u: goto label_442f20;
        case 0x442f24u: goto label_442f24;
        case 0x442f28u: goto label_442f28;
        case 0x442f2cu: goto label_442f2c;
        case 0x442f30u: goto label_442f30;
        case 0x442f34u: goto label_442f34;
        case 0x442f38u: goto label_442f38;
        case 0x442f3cu: goto label_442f3c;
        case 0x442f40u: goto label_442f40;
        case 0x442f44u: goto label_442f44;
        case 0x442f48u: goto label_442f48;
        case 0x442f4cu: goto label_442f4c;
        case 0x442f50u: goto label_442f50;
        case 0x442f54u: goto label_442f54;
        case 0x442f58u: goto label_442f58;
        case 0x442f5cu: goto label_442f5c;
        case 0x442f60u: goto label_442f60;
        case 0x442f64u: goto label_442f64;
        case 0x442f68u: goto label_442f68;
        case 0x442f6cu: goto label_442f6c;
        case 0x442f70u: goto label_442f70;
        case 0x442f74u: goto label_442f74;
        case 0x442f78u: goto label_442f78;
        case 0x442f7cu: goto label_442f7c;
        case 0x442f80u: goto label_442f80;
        case 0x442f84u: goto label_442f84;
        case 0x442f88u: goto label_442f88;
        case 0x442f8cu: goto label_442f8c;
        case 0x442f90u: goto label_442f90;
        case 0x442f94u: goto label_442f94;
        case 0x442f98u: goto label_442f98;
        case 0x442f9cu: goto label_442f9c;
        case 0x442fa0u: goto label_442fa0;
        case 0x442fa4u: goto label_442fa4;
        case 0x442fa8u: goto label_442fa8;
        case 0x442facu: goto label_442fac;
        case 0x442fb0u: goto label_442fb0;
        case 0x442fb4u: goto label_442fb4;
        case 0x442fb8u: goto label_442fb8;
        case 0x442fbcu: goto label_442fbc;
        case 0x442fc0u: goto label_442fc0;
        case 0x442fc4u: goto label_442fc4;
        case 0x442fc8u: goto label_442fc8;
        case 0x442fccu: goto label_442fcc;
        case 0x442fd0u: goto label_442fd0;
        case 0x442fd4u: goto label_442fd4;
        case 0x442fd8u: goto label_442fd8;
        case 0x442fdcu: goto label_442fdc;
        case 0x442fe0u: goto label_442fe0;
        case 0x442fe4u: goto label_442fe4;
        case 0x442fe8u: goto label_442fe8;
        case 0x442fecu: goto label_442fec;
        case 0x442ff0u: goto label_442ff0;
        case 0x442ff4u: goto label_442ff4;
        case 0x442ff8u: goto label_442ff8;
        case 0x442ffcu: goto label_442ffc;
        case 0x443000u: goto label_443000;
        case 0x443004u: goto label_443004;
        case 0x443008u: goto label_443008;
        case 0x44300cu: goto label_44300c;
        case 0x443010u: goto label_443010;
        case 0x443014u: goto label_443014;
        case 0x443018u: goto label_443018;
        case 0x44301cu: goto label_44301c;
        case 0x443020u: goto label_443020;
        case 0x443024u: goto label_443024;
        case 0x443028u: goto label_443028;
        case 0x44302cu: goto label_44302c;
        case 0x443030u: goto label_443030;
        case 0x443034u: goto label_443034;
        case 0x443038u: goto label_443038;
        case 0x44303cu: goto label_44303c;
        case 0x443040u: goto label_443040;
        case 0x443044u: goto label_443044;
        case 0x443048u: goto label_443048;
        case 0x44304cu: goto label_44304c;
        case 0x443050u: goto label_443050;
        case 0x443054u: goto label_443054;
        case 0x443058u: goto label_443058;
        case 0x44305cu: goto label_44305c;
        case 0x443060u: goto label_443060;
        case 0x443064u: goto label_443064;
        case 0x443068u: goto label_443068;
        case 0x44306cu: goto label_44306c;
        case 0x443070u: goto label_443070;
        case 0x443074u: goto label_443074;
        case 0x443078u: goto label_443078;
        case 0x44307cu: goto label_44307c;
        case 0x443080u: goto label_443080;
        case 0x443084u: goto label_443084;
        case 0x443088u: goto label_443088;
        case 0x44308cu: goto label_44308c;
        case 0x443090u: goto label_443090;
        case 0x443094u: goto label_443094;
        case 0x443098u: goto label_443098;
        case 0x44309cu: goto label_44309c;
        case 0x4430a0u: goto label_4430a0;
        case 0x4430a4u: goto label_4430a4;
        case 0x4430a8u: goto label_4430a8;
        case 0x4430acu: goto label_4430ac;
        case 0x4430b0u: goto label_4430b0;
        case 0x4430b4u: goto label_4430b4;
        case 0x4430b8u: goto label_4430b8;
        case 0x4430bcu: goto label_4430bc;
        case 0x4430c0u: goto label_4430c0;
        case 0x4430c4u: goto label_4430c4;
        case 0x4430c8u: goto label_4430c8;
        case 0x4430ccu: goto label_4430cc;
        case 0x4430d0u: goto label_4430d0;
        case 0x4430d4u: goto label_4430d4;
        case 0x4430d8u: goto label_4430d8;
        case 0x4430dcu: goto label_4430dc;
        case 0x4430e0u: goto label_4430e0;
        case 0x4430e4u: goto label_4430e4;
        case 0x4430e8u: goto label_4430e8;
        case 0x4430ecu: goto label_4430ec;
        case 0x4430f0u: goto label_4430f0;
        case 0x4430f4u: goto label_4430f4;
        case 0x4430f8u: goto label_4430f8;
        case 0x4430fcu: goto label_4430fc;
        case 0x443100u: goto label_443100;
        case 0x443104u: goto label_443104;
        case 0x443108u: goto label_443108;
        case 0x44310cu: goto label_44310c;
        case 0x443110u: goto label_443110;
        case 0x443114u: goto label_443114;
        case 0x443118u: goto label_443118;
        case 0x44311cu: goto label_44311c;
        case 0x443120u: goto label_443120;
        case 0x443124u: goto label_443124;
        case 0x443128u: goto label_443128;
        case 0x44312cu: goto label_44312c;
        case 0x443130u: goto label_443130;
        case 0x443134u: goto label_443134;
        case 0x443138u: goto label_443138;
        case 0x44313cu: goto label_44313c;
        case 0x443140u: goto label_443140;
        case 0x443144u: goto label_443144;
        case 0x443148u: goto label_443148;
        case 0x44314cu: goto label_44314c;
        case 0x443150u: goto label_443150;
        case 0x443154u: goto label_443154;
        case 0x443158u: goto label_443158;
        case 0x44315cu: goto label_44315c;
        case 0x443160u: goto label_443160;
        case 0x443164u: goto label_443164;
        case 0x443168u: goto label_443168;
        case 0x44316cu: goto label_44316c;
        case 0x443170u: goto label_443170;
        case 0x443174u: goto label_443174;
        case 0x443178u: goto label_443178;
        case 0x44317cu: goto label_44317c;
        case 0x443180u: goto label_443180;
        case 0x443184u: goto label_443184;
        case 0x443188u: goto label_443188;
        case 0x44318cu: goto label_44318c;
        case 0x443190u: goto label_443190;
        case 0x443194u: goto label_443194;
        case 0x443198u: goto label_443198;
        case 0x44319cu: goto label_44319c;
        case 0x4431a0u: goto label_4431a0;
        case 0x4431a4u: goto label_4431a4;
        case 0x4431a8u: goto label_4431a8;
        case 0x4431acu: goto label_4431ac;
        case 0x4431b0u: goto label_4431b0;
        case 0x4431b4u: goto label_4431b4;
        case 0x4431b8u: goto label_4431b8;
        case 0x4431bcu: goto label_4431bc;
        case 0x4431c0u: goto label_4431c0;
        case 0x4431c4u: goto label_4431c4;
        case 0x4431c8u: goto label_4431c8;
        case 0x4431ccu: goto label_4431cc;
        case 0x4431d0u: goto label_4431d0;
        case 0x4431d4u: goto label_4431d4;
        case 0x4431d8u: goto label_4431d8;
        case 0x4431dcu: goto label_4431dc;
        case 0x4431e0u: goto label_4431e0;
        case 0x4431e4u: goto label_4431e4;
        case 0x4431e8u: goto label_4431e8;
        case 0x4431ecu: goto label_4431ec;
        case 0x4431f0u: goto label_4431f0;
        case 0x4431f4u: goto label_4431f4;
        case 0x4431f8u: goto label_4431f8;
        case 0x4431fcu: goto label_4431fc;
        case 0x443200u: goto label_443200;
        case 0x443204u: goto label_443204;
        case 0x443208u: goto label_443208;
        case 0x44320cu: goto label_44320c;
        case 0x443210u: goto label_443210;
        case 0x443214u: goto label_443214;
        case 0x443218u: goto label_443218;
        case 0x44321cu: goto label_44321c;
        case 0x443220u: goto label_443220;
        case 0x443224u: goto label_443224;
        case 0x443228u: goto label_443228;
        case 0x44322cu: goto label_44322c;
        case 0x443230u: goto label_443230;
        case 0x443234u: goto label_443234;
        case 0x443238u: goto label_443238;
        case 0x44323cu: goto label_44323c;
        case 0x443240u: goto label_443240;
        case 0x443244u: goto label_443244;
        case 0x443248u: goto label_443248;
        case 0x44324cu: goto label_44324c;
        case 0x443250u: goto label_443250;
        case 0x443254u: goto label_443254;
        case 0x443258u: goto label_443258;
        case 0x44325cu: goto label_44325c;
        case 0x443260u: goto label_443260;
        case 0x443264u: goto label_443264;
        case 0x443268u: goto label_443268;
        case 0x44326cu: goto label_44326c;
        case 0x443270u: goto label_443270;
        case 0x443274u: goto label_443274;
        case 0x443278u: goto label_443278;
        case 0x44327cu: goto label_44327c;
        case 0x443280u: goto label_443280;
        case 0x443284u: goto label_443284;
        case 0x443288u: goto label_443288;
        case 0x44328cu: goto label_44328c;
        case 0x443290u: goto label_443290;
        case 0x443294u: goto label_443294;
        case 0x443298u: goto label_443298;
        case 0x44329cu: goto label_44329c;
        case 0x4432a0u: goto label_4432a0;
        case 0x4432a4u: goto label_4432a4;
        case 0x4432a8u: goto label_4432a8;
        case 0x4432acu: goto label_4432ac;
        case 0x4432b0u: goto label_4432b0;
        case 0x4432b4u: goto label_4432b4;
        case 0x4432b8u: goto label_4432b8;
        case 0x4432bcu: goto label_4432bc;
        case 0x4432c0u: goto label_4432c0;
        case 0x4432c4u: goto label_4432c4;
        case 0x4432c8u: goto label_4432c8;
        case 0x4432ccu: goto label_4432cc;
        case 0x4432d0u: goto label_4432d0;
        case 0x4432d4u: goto label_4432d4;
        case 0x4432d8u: goto label_4432d8;
        case 0x4432dcu: goto label_4432dc;
        case 0x4432e0u: goto label_4432e0;
        case 0x4432e4u: goto label_4432e4;
        case 0x4432e8u: goto label_4432e8;
        case 0x4432ecu: goto label_4432ec;
        case 0x4432f0u: goto label_4432f0;
        case 0x4432f4u: goto label_4432f4;
        case 0x4432f8u: goto label_4432f8;
        case 0x4432fcu: goto label_4432fc;
        case 0x443300u: goto label_443300;
        case 0x443304u: goto label_443304;
        case 0x443308u: goto label_443308;
        case 0x44330cu: goto label_44330c;
        case 0x443310u: goto label_443310;
        case 0x443314u: goto label_443314;
        case 0x443318u: goto label_443318;
        case 0x44331cu: goto label_44331c;
        case 0x443320u: goto label_443320;
        case 0x443324u: goto label_443324;
        case 0x443328u: goto label_443328;
        case 0x44332cu: goto label_44332c;
        case 0x443330u: goto label_443330;
        case 0x443334u: goto label_443334;
        case 0x443338u: goto label_443338;
        case 0x44333cu: goto label_44333c;
        case 0x443340u: goto label_443340;
        case 0x443344u: goto label_443344;
        case 0x443348u: goto label_443348;
        case 0x44334cu: goto label_44334c;
        case 0x443350u: goto label_443350;
        case 0x443354u: goto label_443354;
        case 0x443358u: goto label_443358;
        case 0x44335cu: goto label_44335c;
        case 0x443360u: goto label_443360;
        case 0x443364u: goto label_443364;
        case 0x443368u: goto label_443368;
        case 0x44336cu: goto label_44336c;
        case 0x443370u: goto label_443370;
        case 0x443374u: goto label_443374;
        case 0x443378u: goto label_443378;
        case 0x44337cu: goto label_44337c;
        case 0x443380u: goto label_443380;
        case 0x443384u: goto label_443384;
        case 0x443388u: goto label_443388;
        case 0x44338cu: goto label_44338c;
        case 0x443390u: goto label_443390;
        case 0x443394u: goto label_443394;
        case 0x443398u: goto label_443398;
        case 0x44339cu: goto label_44339c;
        case 0x4433a0u: goto label_4433a0;
        case 0x4433a4u: goto label_4433a4;
        case 0x4433a8u: goto label_4433a8;
        case 0x4433acu: goto label_4433ac;
        case 0x4433b0u: goto label_4433b0;
        case 0x4433b4u: goto label_4433b4;
        case 0x4433b8u: goto label_4433b8;
        case 0x4433bcu: goto label_4433bc;
        case 0x4433c0u: goto label_4433c0;
        case 0x4433c4u: goto label_4433c4;
        case 0x4433c8u: goto label_4433c8;
        case 0x4433ccu: goto label_4433cc;
        case 0x4433d0u: goto label_4433d0;
        case 0x4433d4u: goto label_4433d4;
        case 0x4433d8u: goto label_4433d8;
        case 0x4433dcu: goto label_4433dc;
        case 0x4433e0u: goto label_4433e0;
        case 0x4433e4u: goto label_4433e4;
        case 0x4433e8u: goto label_4433e8;
        case 0x4433ecu: goto label_4433ec;
        case 0x4433f0u: goto label_4433f0;
        case 0x4433f4u: goto label_4433f4;
        case 0x4433f8u: goto label_4433f8;
        case 0x4433fcu: goto label_4433fc;
        case 0x443400u: goto label_443400;
        case 0x443404u: goto label_443404;
        case 0x443408u: goto label_443408;
        case 0x44340cu: goto label_44340c;
        case 0x443410u: goto label_443410;
        case 0x443414u: goto label_443414;
        case 0x443418u: goto label_443418;
        case 0x44341cu: goto label_44341c;
        case 0x443420u: goto label_443420;
        case 0x443424u: goto label_443424;
        case 0x443428u: goto label_443428;
        case 0x44342cu: goto label_44342c;
        case 0x443430u: goto label_443430;
        case 0x443434u: goto label_443434;
        case 0x443438u: goto label_443438;
        case 0x44343cu: goto label_44343c;
        case 0x443440u: goto label_443440;
        case 0x443444u: goto label_443444;
        case 0x443448u: goto label_443448;
        case 0x44344cu: goto label_44344c;
        case 0x443450u: goto label_443450;
        case 0x443454u: goto label_443454;
        case 0x443458u: goto label_443458;
        case 0x44345cu: goto label_44345c;
        case 0x443460u: goto label_443460;
        case 0x443464u: goto label_443464;
        case 0x443468u: goto label_443468;
        case 0x44346cu: goto label_44346c;
        case 0x443470u: goto label_443470;
        case 0x443474u: goto label_443474;
        case 0x443478u: goto label_443478;
        case 0x44347cu: goto label_44347c;
        case 0x443480u: goto label_443480;
        case 0x443484u: goto label_443484;
        case 0x443488u: goto label_443488;
        case 0x44348cu: goto label_44348c;
        case 0x443490u: goto label_443490;
        case 0x443494u: goto label_443494;
        case 0x443498u: goto label_443498;
        case 0x44349cu: goto label_44349c;
        case 0x4434a0u: goto label_4434a0;
        case 0x4434a4u: goto label_4434a4;
        case 0x4434a8u: goto label_4434a8;
        case 0x4434acu: goto label_4434ac;
        case 0x4434b0u: goto label_4434b0;
        case 0x4434b4u: goto label_4434b4;
        case 0x4434b8u: goto label_4434b8;
        case 0x4434bcu: goto label_4434bc;
        case 0x4434c0u: goto label_4434c0;
        case 0x4434c4u: goto label_4434c4;
        case 0x4434c8u: goto label_4434c8;
        case 0x4434ccu: goto label_4434cc;
        case 0x4434d0u: goto label_4434d0;
        case 0x4434d4u: goto label_4434d4;
        case 0x4434d8u: goto label_4434d8;
        case 0x4434dcu: goto label_4434dc;
        case 0x4434e0u: goto label_4434e0;
        case 0x4434e4u: goto label_4434e4;
        case 0x4434e8u: goto label_4434e8;
        case 0x4434ecu: goto label_4434ec;
        case 0x4434f0u: goto label_4434f0;
        case 0x4434f4u: goto label_4434f4;
        case 0x4434f8u: goto label_4434f8;
        case 0x4434fcu: goto label_4434fc;
        case 0x443500u: goto label_443500;
        case 0x443504u: goto label_443504;
        case 0x443508u: goto label_443508;
        case 0x44350cu: goto label_44350c;
        case 0x443510u: goto label_443510;
        case 0x443514u: goto label_443514;
        case 0x443518u: goto label_443518;
        case 0x44351cu: goto label_44351c;
        case 0x443520u: goto label_443520;
        case 0x443524u: goto label_443524;
        case 0x443528u: goto label_443528;
        case 0x44352cu: goto label_44352c;
        case 0x443530u: goto label_443530;
        case 0x443534u: goto label_443534;
        case 0x443538u: goto label_443538;
        case 0x44353cu: goto label_44353c;
        case 0x443540u: goto label_443540;
        case 0x443544u: goto label_443544;
        case 0x443548u: goto label_443548;
        case 0x44354cu: goto label_44354c;
        case 0x443550u: goto label_443550;
        case 0x443554u: goto label_443554;
        case 0x443558u: goto label_443558;
        case 0x44355cu: goto label_44355c;
        case 0x443560u: goto label_443560;
        case 0x443564u: goto label_443564;
        case 0x443568u: goto label_443568;
        case 0x44356cu: goto label_44356c;
        default: break;
    }

    ctx->pc = 0x442830u;

label_442830:
    // 0x442830: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x442830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_442834:
    // 0x442834: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x442834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_442838:
    // 0x442838: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x442838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_44283c:
    // 0x44283c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x44283cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_442840:
    // 0x442840: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x442840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_442844:
    // 0x442844: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x442844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_442848:
    // 0x442848: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x442848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_44284c:
    // 0x44284c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x44284cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_442850:
    // 0x442850: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x442850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_442854:
    // 0x442854: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x442854u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_442858:
    // 0x442858: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x442858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_44285c:
    // 0x44285c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x44285cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_442860:
    // 0x442860: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x442860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_442864:
    // 0x442864: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x442864u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_442868:
    // 0x442868: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x442868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44286c:
    // 0x44286c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x44286cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_442870:
    // 0x442870: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x442870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_442874:
    // 0x442874: 0x8c66d130  lw          $a2, -0x2ED0($v1)
    ctx->pc = 0x442874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_442878:
    // 0x442878: 0x8cc60130  lw          $a2, 0x130($a2)
    ctx->pc = 0x442878u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_44287c:
    // 0x44287c: 0x9083004d  lbu         $v1, 0x4D($a0)
    ctx->pc = 0x44287cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
label_442880:
    // 0x442880: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x442880u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
label_442884:
    // 0x442884: 0xa02827  not         $a1, $a1
    ctx->pc = 0x442884u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
label_442888:
    // 0x442888: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x442888u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_44288c:
    // 0x44288c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x44288cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_442890:
    // 0x442890: 0xa083004d  sb          $v1, 0x4D($a0)
    ctx->pc = 0x442890u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 3));
label_442894:
    // 0x442894: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x442894u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_442898:
    // 0x442898: 0x106000fc  beqz        $v1, . + 4 + (0xFC << 2)
label_44289c:
    if (ctx->pc == 0x44289Cu) {
        ctx->pc = 0x44289Cu;
            // 0x44289c: 0x120902d  daddu       $s2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4428A0u;
        goto label_4428a0;
    }
    ctx->pc = 0x442898u;
    {
        const bool branch_taken_0x442898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44289Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x442898u;
            // 0x44289c: 0x120902d  daddu       $s2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442898) {
            ctx->pc = 0x442C8Cu;
            goto label_442c8c;
        }
    }
    ctx->pc = 0x4428A0u;
label_4428a0:
    // 0x4428a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4428a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4428a4:
    // 0x4428a4: 0xc04f278  jal         func_13C9E0
label_4428a8:
    if (ctx->pc == 0x4428A8u) {
        ctx->pc = 0x4428A8u;
            // 0x4428a8: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x4428ACu;
        goto label_4428ac;
    }
    ctx->pc = 0x4428A4u;
    SET_GPR_U32(ctx, 31, 0x4428ACu);
    ctx->pc = 0x4428A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4428A4u;
            // 0x4428a8: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4428ACu; }
        if (ctx->pc != 0x4428ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4428ACu; }
        if (ctx->pc != 0x4428ACu) { return; }
    }
    ctx->pc = 0x4428ACu;
label_4428ac:
    // 0x4428ac: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x4428acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_4428b0:
    // 0x4428b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4428b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4428b4:
    // 0x4428b4: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x4428b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_4428b8:
    // 0x4428b8: 0xc6a002a8  lwc1        $f0, 0x2A8($s5)
    ctx->pc = 0x4428b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4428bc:
    // 0x4428bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4428bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4428c0:
    // 0x4428c0: 0x0  nop
    ctx->pc = 0x4428c0u;
    // NOP
label_4428c4:
    // 0x4428c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4428c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4428c8:
    // 0x4428c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4428c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4428cc:
    // 0x4428cc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x4428ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_4428d0:
    // 0x4428d0: 0xc04cdf0  jal         func_1337C0
label_4428d4:
    if (ctx->pc == 0x4428D4u) {
        ctx->pc = 0x4428D4u;
            // 0x4428d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4428D8u;
        goto label_4428d8;
    }
    ctx->pc = 0x4428D0u;
    SET_GPR_U32(ctx, 31, 0x4428D8u);
    ctx->pc = 0x4428D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4428D0u;
            // 0x4428d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4428D8u; }
        if (ctx->pc != 0x4428D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4428D8u; }
        if (ctx->pc != 0x4428D8u) { return; }
    }
    ctx->pc = 0x4428D8u;
label_4428d8:
    // 0x4428d8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x4428d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_4428dc:
    // 0x4428dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4428dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4428e0:
    // 0x4428e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4428e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4428e4:
    // 0x4428e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4428e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4428e8:
    // 0x4428e8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4428e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4428ec:
    // 0x4428ec: 0xc04ce50  jal         func_133940
label_4428f0:
    if (ctx->pc == 0x4428F0u) {
        ctx->pc = 0x4428F0u;
            // 0x4428f0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4428F4u;
        goto label_4428f4;
    }
    ctx->pc = 0x4428ECu;
    SET_GPR_U32(ctx, 31, 0x4428F4u);
    ctx->pc = 0x4428F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4428ECu;
            // 0x4428f0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4428F4u; }
        if (ctx->pc != 0x4428F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4428F4u; }
        if (ctx->pc != 0x4428F4u) { return; }
    }
    ctx->pc = 0x4428F4u;
label_4428f4:
    // 0x4428f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4428f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4428f8:
    // 0x4428f8: 0xc04ce80  jal         func_133A00
label_4428fc:
    if (ctx->pc == 0x4428FCu) {
        ctx->pc = 0x4428FCu;
            // 0x4428fc: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x442900u;
        goto label_442900;
    }
    ctx->pc = 0x4428F8u;
    SET_GPR_U32(ctx, 31, 0x442900u);
    ctx->pc = 0x4428FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4428F8u;
            // 0x4428fc: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442900u; }
        if (ctx->pc != 0x442900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442900u; }
        if (ctx->pc != 0x442900u) { return; }
    }
    ctx->pc = 0x442900u;
label_442900:
    // 0x442900: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x442900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_442904:
    // 0x442904: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x442904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_442908:
    // 0x442908: 0x8c500130  lw          $s0, 0x130($v0)
    ctx->pc = 0x442908u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_44290c:
    // 0x44290c: 0xc0d4108  jal         func_350420
label_442910:
    if (ctx->pc == 0x442910u) {
        ctx->pc = 0x442910u;
            // 0x442910: 0x8e960000  lw          $s6, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x442914u;
        goto label_442914;
    }
    ctx->pc = 0x44290Cu;
    SET_GPR_U32(ctx, 31, 0x442914u);
    ctx->pc = 0x442910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44290Cu;
            // 0x442910: 0x8e960000  lw          $s6, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442914u; }
        if (ctx->pc != 0x442914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442914u; }
        if (ctx->pc != 0x442914u) { return; }
    }
    ctx->pc = 0x442914u;
label_442914:
    // 0x442914: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x442914u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_442918:
    // 0x442918: 0xc0d4104  jal         func_350410
label_44291c:
    if (ctx->pc == 0x44291Cu) {
        ctx->pc = 0x44291Cu;
            // 0x44291c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x442920u;
        goto label_442920;
    }
    ctx->pc = 0x442918u;
    SET_GPR_U32(ctx, 31, 0x442920u);
    ctx->pc = 0x44291Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442918u;
            // 0x44291c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442920u; }
        if (ctx->pc != 0x442920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442920u; }
        if (ctx->pc != 0x442920u) { return; }
    }
    ctx->pc = 0x442920u;
label_442920:
    // 0x442920: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x442920u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_442924:
    // 0x442924: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x442924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_442928:
    // 0x442928: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x442928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_44292c:
    // 0x44292c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x44292cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_442930:
    // 0x442930: 0xc44cd440  lwc1        $f12, -0x2BC0($v0)
    ctx->pc = 0x442930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_442934:
    // 0x442934: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x442934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_442938:
    // 0x442938: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x442938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_44293c:
    // 0x44293c: 0xc0d40ac  jal         func_3502B0
label_442940:
    if (ctx->pc == 0x442940u) {
        ctx->pc = 0x442940u;
            // 0x442940: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x442944u;
        goto label_442944;
    }
    ctx->pc = 0x44293Cu;
    SET_GPR_U32(ctx, 31, 0x442944u);
    ctx->pc = 0x442940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44293Cu;
            // 0x442940: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442944u; }
        if (ctx->pc != 0x442944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442944u; }
        if (ctx->pc != 0x442944u) { return; }
    }
    ctx->pc = 0x442944u;
label_442944:
    // 0x442944: 0xaea20044  sw          $v0, 0x44($s5)
    ctx->pc = 0x442944u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
label_442948:
    // 0x442948: 0x28560002  slti        $s6, $v0, 0x2
    ctx->pc = 0x442948u;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_44294c:
    // 0x44294c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44294cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_442950:
    // 0x442950: 0x26a4004d  addiu       $a0, $s5, 0x4D
    ctx->pc = 0x442950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 77));
label_442954:
    // 0x442954: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x442954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
label_442958:
    // 0x442958: 0x27a500dc  addiu       $a1, $sp, 0xDC
    ctx->pc = 0x442958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_44295c:
    // 0x44295c: 0x561018  mult        $v0, $v0, $s6
    ctx->pc = 0x44295cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_442960:
    // 0x442960: 0xc0d590c  jal         func_356430
label_442964:
    if (ctx->pc == 0x442964u) {
        ctx->pc = 0x442964u;
            // 0x442964: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
        ctx->pc = 0x442968u;
        goto label_442968;
    }
    ctx->pc = 0x442960u;
    SET_GPR_U32(ctx, 31, 0x442968u);
    ctx->pc = 0x442964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442960u;
            // 0x442964: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x356430u;
    if (runtime->hasFunction(0x356430u)) {
        auto targetFn = runtime->lookupFunction(0x356430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442968u; }
        if (ctx->pc != 0x442968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00356430_0x356430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442968u; }
        if (ctx->pc != 0x442968u) { return; }
    }
    ctx->pc = 0x442968u;
label_442968:
    // 0x442968: 0x52c000c9  beql        $s6, $zero, . + 4 + (0xC9 << 2)
label_44296c:
    if (ctx->pc == 0x44296Cu) {
        ctx->pc = 0x44296Cu;
            // 0x44296c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x442970u;
        goto label_442970;
    }
    ctx->pc = 0x442968u;
    {
        const bool branch_taken_0x442968 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x442968) {
            ctx->pc = 0x44296Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x442968u;
            // 0x44296c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x442C90u;
            goto label_442c90;
        }
    }
    ctx->pc = 0x442970u;
label_442970:
    // 0x442970: 0x8ea400d8  lw          $a0, 0xD8($s5)
    ctx->pc = 0x442970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 216)));
label_442974:
    // 0x442974: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x442974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_442978:
    // 0x442978: 0x5083009b  beql        $a0, $v1, . + 4 + (0x9B << 2)
label_44297c:
    if (ctx->pc == 0x44297Cu) {
        ctx->pc = 0x44297Cu;
            // 0x44297c: 0x8e840014  lw          $a0, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->pc = 0x442980u;
        goto label_442980;
    }
    ctx->pc = 0x442978u;
    {
        const bool branch_taken_0x442978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x442978) {
            ctx->pc = 0x44297Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x442978u;
            // 0x44297c: 0x8e840014  lw          $a0, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x442BE8u;
            goto label_442be8;
        }
    }
    ctx->pc = 0x442980u;
label_442980:
    // 0x442980: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x442980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_442984:
    // 0x442984: 0x50830053  beql        $a0, $v1, . + 4 + (0x53 << 2)
label_442988:
    if (ctx->pc == 0x442988u) {
        ctx->pc = 0x442988u;
            // 0x442988: 0x8ea302f0  lw          $v1, 0x2F0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 752)));
        ctx->pc = 0x44298Cu;
        goto label_44298c;
    }
    ctx->pc = 0x442984u;
    {
        const bool branch_taken_0x442984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x442984) {
            ctx->pc = 0x442988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x442984u;
            // 0x442988: 0x8ea302f0  lw          $v1, 0x2F0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 752)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x442AD4u;
            goto label_442ad4;
        }
    }
    ctx->pc = 0x44298Cu;
label_44298c:
    // 0x44298c: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_442990:
    if (ctx->pc == 0x442990u) {
        ctx->pc = 0x442990u;
            // 0x442990: 0x3c02bf33  lui         $v0, 0xBF33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48947 << 16));
        ctx->pc = 0x442994u;
        goto label_442994;
    }
    ctx->pc = 0x44298Cu;
    {
        const bool branch_taken_0x44298c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44298c) {
            ctx->pc = 0x442990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44298Cu;
            // 0x442990: 0x3c02bf33  lui         $v0, 0xBF33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48947 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44299Cu;
            goto label_44299c;
        }
    }
    ctx->pc = 0x442994u;
label_442994:
    // 0x442994: 0x100000bd  b           . + 4 + (0xBD << 2)
label_442998:
    if (ctx->pc == 0x442998u) {
        ctx->pc = 0x44299Cu;
        goto label_44299c;
    }
    ctx->pc = 0x442994u;
    {
        const bool branch_taken_0x442994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x442994) {
            ctx->pc = 0x442C8Cu;
            goto label_442c8c;
        }
    }
    ctx->pc = 0x44299Cu;
label_44299c:
    // 0x44299c: 0x8e940000  lw          $s4, 0x0($s4)
    ctx->pc = 0x44299cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4429a0:
    // 0x4429a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4429a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4429a4:
    // 0x4429a4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x4429a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_4429a8:
    // 0x4429a8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4429a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4429ac:
    // 0x4429ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4429acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4429b0:
    // 0x4429b0: 0xc04f3fc  jal         func_13CFF0
label_4429b4:
    if (ctx->pc == 0x4429B4u) {
        ctx->pc = 0x4429B4u;
            // 0x4429b4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4429B8u;
        goto label_4429b8;
    }
    ctx->pc = 0x4429B0u;
    SET_GPR_U32(ctx, 31, 0x4429B8u);
    ctx->pc = 0x4429B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4429B0u;
            // 0x4429b4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4429B8u; }
        if (ctx->pc != 0x4429B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4429B8u; }
        if (ctx->pc != 0x4429B8u) { return; }
    }
    ctx->pc = 0x4429B8u;
label_4429b8:
    // 0x4429b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4429b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4429bc:
    // 0x4429bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4429bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4429c0:
    // 0x4429c0: 0xc04cd60  jal         func_133580
label_4429c4:
    if (ctx->pc == 0x4429C4u) {
        ctx->pc = 0x4429C4u;
            // 0x4429c4: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4429C8u;
        goto label_4429c8;
    }
    ctx->pc = 0x4429C0u;
    SET_GPR_U32(ctx, 31, 0x4429C8u);
    ctx->pc = 0x4429C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4429C0u;
            // 0x4429c4: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4429C8u; }
        if (ctx->pc != 0x4429C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4429C8u; }
        if (ctx->pc != 0x4429C8u) { return; }
    }
    ctx->pc = 0x4429C8u;
label_4429c8:
    // 0x4429c8: 0x8ea302f0  lw          $v1, 0x2F0($s5)
    ctx->pc = 0x4429c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 752)));
label_4429cc:
    // 0x4429cc: 0x26a402b0  addiu       $a0, $s5, 0x2B0
    ctx->pc = 0x4429ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 688));
label_4429d0:
    // 0x4429d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4429d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4429d4:
    // 0x4429d4: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x4429d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_4429d8:
    // 0x4429d8: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x4429d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
label_4429dc:
    // 0x4429dc: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x4429dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_4429e0:
    // 0x4429e0: 0x8ea302f4  lw          $v1, 0x2F4($s5)
    ctx->pc = 0x4429e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 756)));
label_4429e4:
    // 0x4429e4: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x4429e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_4429e8:
    // 0x4429e8: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x4429e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
label_4429ec:
    // 0x4429ec: 0xc04cce8  jal         func_1333A0
label_4429f0:
    if (ctx->pc == 0x4429F0u) {
        ctx->pc = 0x4429F0u;
            // 0x4429f0: 0xa4620064  sh          $v0, 0x64($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4429F4u;
        goto label_4429f4;
    }
    ctx->pc = 0x4429ECu;
    SET_GPR_U32(ctx, 31, 0x4429F4u);
    ctx->pc = 0x4429F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4429ECu;
            // 0x4429f0: 0xa4620064  sh          $v0, 0x64($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4429F4u; }
        if (ctx->pc != 0x4429F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4429F4u; }
        if (ctx->pc != 0x4429F4u) { return; }
    }
    ctx->pc = 0x4429F4u;
label_4429f4:
    // 0x4429f4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4429f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4429f8:
    // 0x4429f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4429f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4429fc:
    // 0x4429fc: 0x8c65e3c0  lw          $a1, -0x1C40($v1)
    ctx->pc = 0x4429fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_442a00:
    // 0x442a00: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x442a00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_442a04:
    // 0x442a04: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x442a04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_442a08:
    // 0x442a08: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x442a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_442a0c:
    // 0x442a0c: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x442a0cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_442a10:
    // 0x442a10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x442a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_442a14:
    // 0x442a14: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x442a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_442a18:
    // 0x442a18: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x442a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_442a1c:
    // 0x442a1c: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x442a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_442a20:
    // 0x442a20: 0x868021  addu        $s0, $a0, $a2
    ctx->pc = 0x442a20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_442a24:
    // 0x442a24: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x442a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_442a28:
    // 0x442a28: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x442a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_442a2c:
    // 0x442a2c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x442a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_442a30:
    // 0x442a30: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x442a30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
label_442a34:
    // 0x442a34: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x442a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_442a38:
    // 0x442a38: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x442a38u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_442a3c:
    // 0x442a3c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x442a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_442a40:
    // 0x442a40: 0x8c48e378  lw          $t0, -0x1C88($v0)
    ctx->pc = 0x442a40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_442a44:
    // 0x442a44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x442a44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_442a48:
    // 0x442a48: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x442a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_442a4c:
    // 0x442a4c: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x442a4cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_442a50:
    // 0x442a50: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x442a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_442a54:
    // 0x442a54: 0x1098821  addu        $s1, $t0, $t1
    ctx->pc = 0x442a54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_442a58:
    // 0x442a58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x442a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_442a5c:
    // 0x442a5c: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x442a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_442a60:
    // 0x442a60: 0xad110000  sw          $s1, 0x0($t0)
    ctx->pc = 0x442a60u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 17));
label_442a64:
    // 0x442a64: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x442a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_442a68:
    // 0x442a68: 0x8e880028  lw          $t0, 0x28($s4)
    ctx->pc = 0x442a68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_442a6c:
    // 0x442a6c: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x442a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_442a70:
    // 0x442a70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x442a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_442a74:
    // 0x442a74: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x442a74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_442a78:
    // 0x442a78: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x442a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_442a7c:
    // 0x442a7c: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x442a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_442a80:
    // 0x442a80: 0x8e850028  lw          $a1, 0x28($s4)
    ctx->pc = 0x442a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_442a84:
    // 0x442a84: 0xc04e4a4  jal         func_139290
label_442a88:
    if (ctx->pc == 0x442A88u) {
        ctx->pc = 0x442A88u;
            // 0x442a88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x442A8Cu;
        goto label_442a8c;
    }
    ctx->pc = 0x442A84u;
    SET_GPR_U32(ctx, 31, 0x442A8Cu);
    ctx->pc = 0x442A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442A84u;
            // 0x442a88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442A8Cu; }
        if (ctx->pc != 0x442A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442A8Cu; }
        if (ctx->pc != 0x442A8Cu) { return; }
    }
    ctx->pc = 0x442A8Cu;
label_442a8c:
    // 0x442a8c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x442a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_442a90:
    // 0x442a90: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x442a90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_442a94:
    // 0x442a94: 0xc04cd60  jal         func_133580
label_442a98:
    if (ctx->pc == 0x442A98u) {
        ctx->pc = 0x442A98u;
            // 0x442a98: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x442A9Cu;
        goto label_442a9c;
    }
    ctx->pc = 0x442A94u;
    SET_GPR_U32(ctx, 31, 0x442A9Cu);
    ctx->pc = 0x442A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442A94u;
            // 0x442a98: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442A9Cu; }
        if (ctx->pc != 0x442A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442A9Cu; }
        if (ctx->pc != 0x442A9Cu) { return; }
    }
    ctx->pc = 0x442A9Cu;
label_442a9c:
    // 0x442a9c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x442a9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_442aa0:
    // 0x442aa0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x442aa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_442aa4:
    // 0x442aa4: 0x320f809  jalr        $t9
label_442aa8:
    if (ctx->pc == 0x442AA8u) {
        ctx->pc = 0x442AA8u;
            // 0x442aa8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x442AACu;
        goto label_442aac;
    }
    ctx->pc = 0x442AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x442AACu);
        ctx->pc = 0x442AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x442AA4u;
            // 0x442aa8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x442AACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x442AACu; }
            if (ctx->pc != 0x442AACu) { return; }
        }
        }
    }
    ctx->pc = 0x442AACu;
label_442aac:
    // 0x442aac: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x442aacu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_442ab0:
    // 0x442ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x442ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_442ab4:
    // 0x442ab4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x442ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_442ab8:
    // 0x442ab8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x442ab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_442abc:
    // 0x442abc: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x442abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_442ac0:
    // 0x442ac0: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x442ac0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_442ac4:
    // 0x442ac4: 0xc04cfcc  jal         func_133F30
label_442ac8:
    if (ctx->pc == 0x442AC8u) {
        ctx->pc = 0x442AC8u;
            // 0x442ac8: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x442ACCu;
        goto label_442acc;
    }
    ctx->pc = 0x442AC4u;
    SET_GPR_U32(ctx, 31, 0x442ACCu);
    ctx->pc = 0x442AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442AC4u;
            // 0x442ac8: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442ACCu; }
        if (ctx->pc != 0x442ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442ACCu; }
        if (ctx->pc != 0x442ACCu) { return; }
    }
    ctx->pc = 0x442ACCu;
label_442acc:
    // 0x442acc: 0x1000006f  b           . + 4 + (0x6F << 2)
label_442ad0:
    if (ctx->pc == 0x442AD0u) {
        ctx->pc = 0x442AD4u;
        goto label_442ad4;
    }
    ctx->pc = 0x442ACCu;
    {
        const bool branch_taken_0x442acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x442acc) {
            ctx->pc = 0x442C8Cu;
            goto label_442c8c;
        }
    }
    ctx->pc = 0x442AD4u;
label_442ad4:
    // 0x442ad4: 0x26a402b0  addiu       $a0, $s5, 0x2B0
    ctx->pc = 0x442ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 688));
label_442ad8:
    // 0x442ad8: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x442ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_442adc:
    // 0x442adc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x442adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_442ae0:
    // 0x442ae0: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x442ae0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_442ae4:
    // 0x442ae4: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x442ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
label_442ae8:
    // 0x442ae8: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x442ae8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_442aec:
    // 0x442aec: 0x8ea302f4  lw          $v1, 0x2F4($s5)
    ctx->pc = 0x442aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 756)));
label_442af0:
    // 0x442af0: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x442af0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_442af4:
    // 0x442af4: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x442af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
label_442af8:
    // 0x442af8: 0xc04cce8  jal         func_1333A0
label_442afc:
    if (ctx->pc == 0x442AFCu) {
        ctx->pc = 0x442AFCu;
            // 0x442afc: 0xa4620064  sh          $v0, 0x64($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x442B00u;
        goto label_442b00;
    }
    ctx->pc = 0x442AF8u;
    SET_GPR_U32(ctx, 31, 0x442B00u);
    ctx->pc = 0x442AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442AF8u;
            // 0x442afc: 0xa4620064  sh          $v0, 0x64($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442B00u; }
        if (ctx->pc != 0x442B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442B00u; }
        if (ctx->pc != 0x442B00u) { return; }
    }
    ctx->pc = 0x442B00u;
label_442b00:
    // 0x442b00: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x442b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_442b04:
    // 0x442b04: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x442b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_442b08:
    // 0x442b08: 0x8c65e3c0  lw          $a1, -0x1C40($v1)
    ctx->pc = 0x442b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_442b0c:
    // 0x442b0c: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x442b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_442b10:
    // 0x442b10: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x442b10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_442b14:
    // 0x442b14: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x442b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_442b18:
    // 0x442b18: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x442b18u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_442b1c:
    // 0x442b1c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x442b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_442b20:
    // 0x442b20: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x442b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_442b24:
    // 0x442b24: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x442b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_442b28:
    // 0x442b28: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x442b28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_442b2c:
    // 0x442b2c: 0x86b021  addu        $s6, $a0, $a2
    ctx->pc = 0x442b2cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_442b30:
    // 0x442b30: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x442b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_442b34:
    // 0x442b34: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x442b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_442b38:
    // 0x442b38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x442b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_442b3c:
    // 0x442b3c: 0xacb60000  sw          $s6, 0x0($a1)
    ctx->pc = 0x442b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 22));
label_442b40:
    // 0x442b40: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x442b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_442b44:
    // 0x442b44: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x442b44u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_442b48:
    // 0x442b48: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x442b48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_442b4c:
    // 0x442b4c: 0x8c48e378  lw          $t0, -0x1C88($v0)
    ctx->pc = 0x442b4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_442b50:
    // 0x442b50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x442b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_442b54:
    // 0x442b54: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x442b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_442b58:
    // 0x442b58: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x442b58u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_442b5c:
    // 0x442b5c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x442b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_442b60:
    // 0x442b60: 0x1098021  addu        $s0, $t0, $t1
    ctx->pc = 0x442b60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_442b64:
    // 0x442b64: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x442b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_442b68:
    // 0x442b68: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x442b68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_442b6c:
    // 0x442b6c: 0xad100000  sw          $s0, 0x0($t0)
    ctx->pc = 0x442b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 16));
label_442b70:
    // 0x442b70: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x442b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_442b74:
    // 0x442b74: 0x8e280028  lw          $t0, 0x28($s1)
    ctx->pc = 0x442b74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_442b78:
    // 0x442b78: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x442b78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_442b7c:
    // 0x442b7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x442b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_442b80:
    // 0x442b80: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x442b80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_442b84:
    // 0x442b84: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x442b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_442b88:
    // 0x442b88: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x442b88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_442b8c:
    // 0x442b8c: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x442b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_442b90:
    // 0x442b90: 0xc04e4a4  jal         func_139290
label_442b94:
    if (ctx->pc == 0x442B94u) {
        ctx->pc = 0x442B94u;
            // 0x442b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x442B98u;
        goto label_442b98;
    }
    ctx->pc = 0x442B90u;
    SET_GPR_U32(ctx, 31, 0x442B98u);
    ctx->pc = 0x442B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442B90u;
            // 0x442b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442B98u; }
        if (ctx->pc != 0x442B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442B98u; }
        if (ctx->pc != 0x442B98u) { return; }
    }
    ctx->pc = 0x442B98u;
label_442b98:
    // 0x442b98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x442b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_442b9c:
    // 0x442b9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x442b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_442ba0:
    // 0x442ba0: 0xc04cd60  jal         func_133580
label_442ba4:
    if (ctx->pc == 0x442BA4u) {
        ctx->pc = 0x442BA4u;
            // 0x442ba4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x442BA8u;
        goto label_442ba8;
    }
    ctx->pc = 0x442BA0u;
    SET_GPR_U32(ctx, 31, 0x442BA8u);
    ctx->pc = 0x442BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442BA0u;
            // 0x442ba4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442BA8u; }
        if (ctx->pc != 0x442BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442BA8u; }
        if (ctx->pc != 0x442BA8u) { return; }
    }
    ctx->pc = 0x442BA8u;
label_442ba8:
    // 0x442ba8: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x442ba8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_442bac:
    // 0x442bac: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x442bacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_442bb0:
    // 0x442bb0: 0x320f809  jalr        $t9
label_442bb4:
    if (ctx->pc == 0x442BB4u) {
        ctx->pc = 0x442BB4u;
            // 0x442bb4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x442BB8u;
        goto label_442bb8;
    }
    ctx->pc = 0x442BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x442BB8u);
        ctx->pc = 0x442BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x442BB0u;
            // 0x442bb4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x442BB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x442BB8u; }
            if (ctx->pc != 0x442BB8u) { return; }
        }
        }
    }
    ctx->pc = 0x442BB8u;
label_442bb8:
    // 0x442bb8: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x442bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_442bbc:
    // 0x442bbc: 0xc6ac0298  lwc1        $f12, 0x298($s5)
    ctx->pc = 0x442bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_442bc0:
    // 0x442bc0: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x442bc0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_442bc4:
    // 0x442bc4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x442bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_442bc8:
    // 0x442bc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x442bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_442bcc:
    // 0x442bcc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x442bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_442bd0:
    // 0x442bd0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x442bd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_442bd4:
    // 0x442bd4: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x442bd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_442bd8:
    // 0x442bd8: 0xc04cff4  jal         func_133FD0
label_442bdc:
    if (ctx->pc == 0x442BDCu) {
        ctx->pc = 0x442BDCu;
            // 0x442bdc: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x442BE0u;
        goto label_442be0;
    }
    ctx->pc = 0x442BD8u;
    SET_GPR_U32(ctx, 31, 0x442BE0u);
    ctx->pc = 0x442BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442BD8u;
            // 0x442bdc: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442BE0u; }
        if (ctx->pc != 0x442BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442BE0u; }
        if (ctx->pc != 0x442BE0u) { return; }
    }
    ctx->pc = 0x442BE0u;
label_442be0:
    // 0x442be0: 0x1000002a  b           . + 4 + (0x2A << 2)
label_442be4:
    if (ctx->pc == 0x442BE4u) {
        ctx->pc = 0x442BE8u;
        goto label_442be8;
    }
    ctx->pc = 0x442BE0u;
    {
        const bool branch_taken_0x442be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x442be0) {
            ctx->pc = 0x442C8Cu;
            goto label_442c8c;
        }
    }
    ctx->pc = 0x442BE8u;
label_442be8:
    // 0x442be8: 0xc04e738  jal         func_139CE0
label_442bec:
    if (ctx->pc == 0x442BECu) {
        ctx->pc = 0x442BECu;
            // 0x442bec: 0x8e900010  lw          $s0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->pc = 0x442BF0u;
        goto label_442bf0;
    }
    ctx->pc = 0x442BE8u;
    SET_GPR_U32(ctx, 31, 0x442BF0u);
    ctx->pc = 0x442BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442BE8u;
            // 0x442bec: 0x8e900010  lw          $s0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442BF0u; }
        if (ctx->pc != 0x442BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442BF0u; }
        if (ctx->pc != 0x442BF0u) { return; }
    }
    ctx->pc = 0x442BF0u;
label_442bf0:
    // 0x442bf0: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x442bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_442bf4:
    // 0x442bf4: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x442bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_442bf8:
    // 0x442bf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x442bf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_442bfc:
    // 0x442bfc: 0x26a402b0  addiu       $a0, $s5, 0x2B0
    ctx->pc = 0x442bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 688));
label_442c00:
    // 0x442c00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x442c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_442c04:
    // 0x442c04: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x442c04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_442c08:
    // 0x442c08: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x442c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_442c0c:
    // 0x442c0c: 0x8ea302f0  lw          $v1, 0x2F0($s5)
    ctx->pc = 0x442c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 752)));
label_442c10:
    // 0x442c10: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x442c10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_442c14:
    // 0x442c14: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x442c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
label_442c18:
    // 0x442c18: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x442c18u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_442c1c:
    // 0x442c1c: 0x8ea302f4  lw          $v1, 0x2F4($s5)
    ctx->pc = 0x442c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 756)));
label_442c20:
    // 0x442c20: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x442c20u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_442c24:
    // 0x442c24: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x442c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
label_442c28:
    // 0x442c28: 0xc04cce8  jal         func_1333A0
label_442c2c:
    if (ctx->pc == 0x442C2Cu) {
        ctx->pc = 0x442C2Cu;
            // 0x442c2c: 0xa4620064  sh          $v0, 0x64($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x442C30u;
        goto label_442c30;
    }
    ctx->pc = 0x442C28u;
    SET_GPR_U32(ctx, 31, 0x442C30u);
    ctx->pc = 0x442C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442C28u;
            // 0x442c2c: 0xa4620064  sh          $v0, 0x64($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442C30u; }
        if (ctx->pc != 0x442C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442C30u; }
        if (ctx->pc != 0x442C30u) { return; }
    }
    ctx->pc = 0x442C30u;
label_442c30:
    // 0x442c30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x442c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_442c34:
    // 0x442c34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x442c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_442c38:
    // 0x442c38: 0xc04cd60  jal         func_133580
label_442c3c:
    if (ctx->pc == 0x442C3Cu) {
        ctx->pc = 0x442C3Cu;
            // 0x442c3c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x442C40u;
        goto label_442c40;
    }
    ctx->pc = 0x442C38u;
    SET_GPR_U32(ctx, 31, 0x442C40u);
    ctx->pc = 0x442C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442C38u;
            // 0x442c3c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442C40u; }
        if (ctx->pc != 0x442C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442C40u; }
        if (ctx->pc != 0x442C40u) { return; }
    }
    ctx->pc = 0x442C40u;
label_442c40:
    // 0x442c40: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x442c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_442c44:
    // 0x442c44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x442c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_442c48:
    // 0x442c48: 0xc04e4a4  jal         func_139290
label_442c4c:
    if (ctx->pc == 0x442C4Cu) {
        ctx->pc = 0x442C4Cu;
            // 0x442c4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x442C50u;
        goto label_442c50;
    }
    ctx->pc = 0x442C48u;
    SET_GPR_U32(ctx, 31, 0x442C50u);
    ctx->pc = 0x442C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442C48u;
            // 0x442c4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442C50u; }
        if (ctx->pc != 0x442C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442C50u; }
        if (ctx->pc != 0x442C50u) { return; }
    }
    ctx->pc = 0x442C50u;
label_442c50:
    // 0x442c50: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x442c50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_442c54:
    // 0x442c54: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x442c54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_442c58:
    // 0x442c58: 0x320f809  jalr        $t9
label_442c5c:
    if (ctx->pc == 0x442C5Cu) {
        ctx->pc = 0x442C5Cu;
            // 0x442c5c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x442C60u;
        goto label_442c60;
    }
    ctx->pc = 0x442C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x442C60u);
        ctx->pc = 0x442C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x442C58u;
            // 0x442c5c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x442C60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x442C60u; }
            if (ctx->pc != 0x442C60u) { return; }
        }
        }
    }
    ctx->pc = 0x442C60u;
label_442c60:
    // 0x442c60: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x442c60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_442c64:
    // 0x442c64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x442c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_442c68:
    // 0x442c68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x442c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_442c6c:
    // 0x442c6c: 0xc054fd4  jal         func_153F50
label_442c70:
    if (ctx->pc == 0x442C70u) {
        ctx->pc = 0x442C70u;
            // 0x442c70: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x442C74u;
        goto label_442c74;
    }
    ctx->pc = 0x442C6Cu;
    SET_GPR_U32(ctx, 31, 0x442C74u);
    ctx->pc = 0x442C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442C6Cu;
            // 0x442c70: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442C74u; }
        if (ctx->pc != 0x442C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442C74u; }
        if (ctx->pc != 0x442C74u) { return; }
    }
    ctx->pc = 0x442C74u;
label_442c74:
    // 0x442c74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x442c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_442c78:
    // 0x442c78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x442c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_442c7c:
    // 0x442c7c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x442c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_442c80:
    // 0x442c80: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x442c80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_442c84:
    // 0x442c84: 0xc0550f8  jal         func_1543E0
label_442c88:
    if (ctx->pc == 0x442C88u) {
        ctx->pc = 0x442C88u;
            // 0x442c88: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x442C8Cu;
        goto label_442c8c;
    }
    ctx->pc = 0x442C84u;
    SET_GPR_U32(ctx, 31, 0x442C8Cu);
    ctx->pc = 0x442C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442C84u;
            // 0x442c88: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1543E0u;
    if (runtime->hasFunction(0x1543E0u)) {
        auto targetFn = runtime->lookupFunction(0x1543E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442C8Cu; }
        if (ctx->pc != 0x442C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001543E0_0x1543e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442C8Cu; }
        if (ctx->pc != 0x442C8Cu) { return; }
    }
    ctx->pc = 0x442C8Cu;
label_442c8c:
    // 0x442c8c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x442c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_442c90:
    // 0x442c90: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x442c90u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_442c94:
    // 0x442c94: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x442c94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_442c98:
    // 0x442c98: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x442c98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_442c9c:
    // 0x442c9c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x442c9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_442ca0:
    // 0x442ca0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x442ca0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_442ca4:
    // 0x442ca4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x442ca4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_442ca8:
    // 0x442ca8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x442ca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_442cac:
    // 0x442cac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x442cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_442cb0:
    // 0x442cb0: 0x3e00008  jr          $ra
label_442cb4:
    if (ctx->pc == 0x442CB4u) {
        ctx->pc = 0x442CB4u;
            // 0x442cb4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x442CB8u;
        goto label_442cb8;
    }
    ctx->pc = 0x442CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x442CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x442CB0u;
            // 0x442cb4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x442CB8u;
label_442cb8:
    // 0x442cb8: 0x0  nop
    ctx->pc = 0x442cb8u;
    // NOP
label_442cbc:
    // 0x442cbc: 0x0  nop
    ctx->pc = 0x442cbcu;
    // NOP
label_442cc0:
    // 0x442cc0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x442cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_442cc4:
    // 0x442cc4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x442cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_442cc8:
    // 0x442cc8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x442cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_442ccc:
    // 0x442ccc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x442cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_442cd0:
    // 0x442cd0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x442cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_442cd4:
    // 0x442cd4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x442cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_442cd8:
    // 0x442cd8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x442cd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_442cdc:
    // 0x442cdc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x442cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_442ce0:
    // 0x442ce0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x442ce0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_442ce4:
    // 0x442ce4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x442ce4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_442ce8:
    // 0x442ce8: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x442ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_442cec:
    // 0x442cec: 0x10a30215  beq         $a1, $v1, . + 4 + (0x215 << 2)
label_442cf0:
    if (ctx->pc == 0x442CF0u) {
        ctx->pc = 0x442CF0u;
            // 0x442cf0: 0x265100e0  addiu       $s1, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->pc = 0x442CF4u;
        goto label_442cf4;
    }
    ctx->pc = 0x442CECu;
    {
        const bool branch_taken_0x442cec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x442CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x442CECu;
            // 0x442cf0: 0x265100e0  addiu       $s1, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442cec) {
            ctx->pc = 0x443544u;
            goto label_443544;
        }
    }
    ctx->pc = 0x442CF4u;
label_442cf4:
    // 0x442cf4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x442cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_442cf8:
    // 0x442cf8: 0x50a30053  beql        $a1, $v1, . + 4 + (0x53 << 2)
label_442cfc:
    if (ctx->pc == 0x442CFCu) {
        ctx->pc = 0x442CFCu;
            // 0x442cfc: 0x8e500050  lw          $s0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->pc = 0x442D00u;
        goto label_442d00;
    }
    ctx->pc = 0x442CF8u;
    {
        const bool branch_taken_0x442cf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x442cf8) {
            ctx->pc = 0x442CFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x442CF8u;
            // 0x442cfc: 0x8e500050  lw          $s0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x442E48u;
            goto label_442e48;
        }
    }
    ctx->pc = 0x442D00u;
label_442d00:
    // 0x442d00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x442d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_442d04:
    // 0x442d04: 0x10a30029  beq         $a1, $v1, . + 4 + (0x29 << 2)
label_442d08:
    if (ctx->pc == 0x442D08u) {
        ctx->pc = 0x442D0Cu;
        goto label_442d0c;
    }
    ctx->pc = 0x442D04u;
    {
        const bool branch_taken_0x442d04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x442d04) {
            ctx->pc = 0x442DACu;
            goto label_442dac;
        }
    }
    ctx->pc = 0x442D0Cu;
label_442d0c:
    // 0x442d0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x442d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_442d10:
    // 0x442d10: 0x50a3020d  beql        $a1, $v1, . + 4 + (0x20D << 2)
label_442d14:
    if (ctx->pc == 0x442D14u) {
        ctx->pc = 0x442D14u;
            // 0x442d14: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x442D18u;
        goto label_442d18;
    }
    ctx->pc = 0x442D10u;
    {
        const bool branch_taken_0x442d10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x442d10) {
            ctx->pc = 0x442D14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x442D10u;
            // 0x442d14: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x443548u;
            goto label_443548;
        }
    }
    ctx->pc = 0x442D18u;
label_442d18:
    // 0x442d18: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_442d1c:
    if (ctx->pc == 0x442D1Cu) {
        ctx->pc = 0x442D1Cu;
            // 0x442d1c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x442D20u;
        goto label_442d20;
    }
    ctx->pc = 0x442D18u;
    {
        const bool branch_taken_0x442d18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x442d18) {
            ctx->pc = 0x442D1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x442D18u;
            // 0x442d1c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x442D28u;
            goto label_442d28;
        }
    }
    ctx->pc = 0x442D20u;
label_442d20:
    // 0x442d20: 0x10000208  b           . + 4 + (0x208 << 2)
label_442d24:
    if (ctx->pc == 0x442D24u) {
        ctx->pc = 0x442D28u;
        goto label_442d28;
    }
    ctx->pc = 0x442D20u;
    {
        const bool branch_taken_0x442d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x442d20) {
            ctx->pc = 0x443544u;
            goto label_443544;
        }
    }
    ctx->pc = 0x442D28u;
label_442d28:
    // 0x442d28: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x442d28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_442d2c:
    // 0x442d2c: 0x320f809  jalr        $t9
label_442d30:
    if (ctx->pc == 0x442D30u) {
        ctx->pc = 0x442D34u;
        goto label_442d34;
    }
    ctx->pc = 0x442D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x442D34u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x442D34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x442D34u; }
            if (ctx->pc != 0x442D34u) { return; }
        }
        }
    }
    ctx->pc = 0x442D34u;
label_442d34:
    // 0x442d34: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x442d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_442d38:
    // 0x442d38: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x442d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_442d3c:
    // 0x442d3c: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x442d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_442d40:
    // 0x442d40: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x442d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_442d44:
    // 0x442d44: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x442d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_442d48:
    // 0x442d48: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x442d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_442d4c:
    // 0x442d4c: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x442d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_442d50:
    // 0x442d50: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x442d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
label_442d54:
    // 0x442d54: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x442d54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_442d58:
    // 0x442d58: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x442d58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_442d5c:
    // 0x442d5c: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x442d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_442d60:
    // 0x442d60: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x442d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_442d64:
    // 0x442d64: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x442d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_442d68:
    // 0x442d68: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x442d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_442d6c:
    // 0x442d6c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x442d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_442d70:
    // 0x442d70: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x442d70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_442d74:
    // 0x442d74: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x442d74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_442d78:
    // 0x442d78: 0xc0892b0  jal         func_224AC0
label_442d7c:
    if (ctx->pc == 0x442D7Cu) {
        ctx->pc = 0x442D7Cu;
            // 0x442d7c: 0xe7a3010c  swc1        $f3, 0x10C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
        ctx->pc = 0x442D80u;
        goto label_442d80;
    }
    ctx->pc = 0x442D78u;
    SET_GPR_U32(ctx, 31, 0x442D80u);
    ctx->pc = 0x442D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442D78u;
            // 0x442d7c: 0xe7a3010c  swc1        $f3, 0x10C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442D80u; }
        if (ctx->pc != 0x442D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442D80u; }
        if (ctx->pc != 0x442D80u) { return; }
    }
    ctx->pc = 0x442D80u;
label_442d80:
    // 0x442d80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x442d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_442d84:
    // 0x442d84: 0xae4300d0  sw          $v1, 0xD0($s2)
    ctx->pc = 0x442d84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 3));
label_442d88:
    // 0x442d88: 0x8e4402f0  lw          $a0, 0x2F0($s2)
    ctx->pc = 0x442d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 752)));
label_442d8c:
    // 0x442d8c: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x442d8cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_442d90:
    // 0x442d90: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x442d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_442d94:
    // 0x442d94: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x442d94u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_442d98:
    // 0x442d98: 0x8e4402f4  lw          $a0, 0x2F4($s2)
    ctx->pc = 0x442d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 756)));
label_442d9c:
    // 0x442d9c: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x442d9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_442da0:
    // 0x442da0: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x442da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_442da4:
    // 0x442da4: 0x100001e7  b           . + 4 + (0x1E7 << 2)
label_442da8:
    if (ctx->pc == 0x442DA8u) {
        ctx->pc = 0x442DA8u;
            // 0x442da8: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x442DACu;
        goto label_442dac;
    }
    ctx->pc = 0x442DA4u;
    {
        const bool branch_taken_0x442da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x442DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x442DA4u;
            // 0x442da8: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442da4) {
            ctx->pc = 0x443544u;
            goto label_443544;
        }
    }
    ctx->pc = 0x442DACu;
label_442dac:
    // 0x442dac: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x442dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_442db0:
    // 0x442db0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x442db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_442db4:
    // 0x442db4: 0xc620012c  lwc1        $f0, 0x12C($s1)
    ctx->pc = 0x442db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_442db8:
    // 0x442db8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x442db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_442dbc:
    // 0x442dbc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x442dbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_442dc0:
    // 0x442dc0: 0xe621012c  swc1        $f1, 0x12C($s1)
    ctx->pc = 0x442dc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
label_442dc4:
    // 0x442dc4: 0xc6200128  lwc1        $f0, 0x128($s1)
    ctx->pc = 0x442dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_442dc8:
    // 0x442dc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x442dc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_442dcc:
    // 0x442dcc: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_442dd0:
    if (ctx->pc == 0x442DD0u) {
        ctx->pc = 0x442DD0u;
            // 0x442dd0: 0x8e4502f0  lw          $a1, 0x2F0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 752)));
        ctx->pc = 0x442DD4u;
        goto label_442dd4;
    }
    ctx->pc = 0x442DCCu;
    {
        const bool branch_taken_0x442dcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x442dcc) {
            ctx->pc = 0x442DD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x442DCCu;
            // 0x442dd0: 0x8e4502f0  lw          $a1, 0x2F0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 752)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x442DE4u;
            goto label_442de4;
        }
    }
    ctx->pc = 0x442DD4u;
label_442dd4:
    // 0x442dd4: 0xae20012c  sw          $zero, 0x12C($s1)
    ctx->pc = 0x442dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 0));
label_442dd8:
    // 0x442dd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x442dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_442ddc:
    // 0x442ddc: 0xae230130  sw          $v1, 0x130($s1)
    ctx->pc = 0x442ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 3));
label_442de0:
    // 0x442de0: 0x8e4502f0  lw          $a1, 0x2F0($s2)
    ctx->pc = 0x442de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 752)));
label_442de4:
    // 0x442de4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x442de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_442de8:
    // 0x442de8: 0x94a40064  lhu         $a0, 0x64($a1)
    ctx->pc = 0x442de8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 100)));
label_442dec:
    // 0x442dec: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x442decu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_442df0:
    // 0x442df0: 0xa4a40064  sh          $a0, 0x64($a1)
    ctx->pc = 0x442df0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 100), (uint16_t)GPR_U32(ctx, 4));
label_442df4:
    // 0x442df4: 0x8e4502f4  lw          $a1, 0x2F4($s2)
    ctx->pc = 0x442df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 756)));
label_442df8:
    // 0x442df8: 0x94a40064  lhu         $a0, 0x64($a1)
    ctx->pc = 0x442df8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 100)));
label_442dfc:
    // 0x442dfc: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x442dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_442e00:
    // 0x442e00: 0xa4a40064  sh          $a0, 0x64($a1)
    ctx->pc = 0x442e00u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 100), (uint16_t)GPR_U32(ctx, 4));
label_442e04:
    // 0x442e04: 0x8e440210  lw          $a0, 0x210($s2)
    ctx->pc = 0x442e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 528)));
label_442e08:
    // 0x442e08: 0x148301ce  bne         $a0, $v1, . + 4 + (0x1CE << 2)
label_442e0c:
    if (ctx->pc == 0x442E0Cu) {
        ctx->pc = 0x442E10u;
        goto label_442e10;
    }
    ctx->pc = 0x442E08u;
    {
        const bool branch_taken_0x442e08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x442e08) {
            ctx->pc = 0x443544u;
            goto label_443544;
        }
    }
    ctx->pc = 0x442E10u;
label_442e10:
    // 0x442e10: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x442e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_442e14:
    // 0x442e14: 0xae4200d0  sw          $v0, 0xD0($s2)
    ctx->pc = 0x442e14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 2));
label_442e18:
    // 0x442e18: 0x8e4402f0  lw          $a0, 0x2F0($s2)
    ctx->pc = 0x442e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 752)));
label_442e1c:
    // 0x442e1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x442e1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_442e20:
    // 0x442e20: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x442e20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_442e24:
    // 0x442e24: 0x320f809  jalr        $t9
label_442e28:
    if (ctx->pc == 0x442E28u) {
        ctx->pc = 0x442E2Cu;
        goto label_442e2c;
    }
    ctx->pc = 0x442E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x442E2Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x442E2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x442E2Cu; }
            if (ctx->pc != 0x442E2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x442E2Cu;
label_442e2c:
    // 0x442e2c: 0x8e4402f4  lw          $a0, 0x2F4($s2)
    ctx->pc = 0x442e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 756)));
label_442e30:
    // 0x442e30: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x442e30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_442e34:
    // 0x442e34: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x442e34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_442e38:
    // 0x442e38: 0x320f809  jalr        $t9
label_442e3c:
    if (ctx->pc == 0x442E3Cu) {
        ctx->pc = 0x442E40u;
        goto label_442e40;
    }
    ctx->pc = 0x442E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x442E40u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x442E40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x442E40u; }
            if (ctx->pc != 0x442E40u) { return; }
        }
        }
    }
    ctx->pc = 0x442E40u;
label_442e40:
    // 0x442e40: 0x100001c0  b           . + 4 + (0x1C0 << 2)
label_442e44:
    if (ctx->pc == 0x442E44u) {
        ctx->pc = 0x442E48u;
        goto label_442e48;
    }
    ctx->pc = 0x442E40u;
    {
        const bool branch_taken_0x442e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x442e40) {
            ctx->pc = 0x443544u;
            goto label_443544;
        }
    }
    ctx->pc = 0x442E48u;
label_442e48:
    // 0x442e48: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x442e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_442e4c:
    // 0x442e4c: 0xc0dc9bc  jal         func_3726F0
label_442e50:
    if (ctx->pc == 0x442E50u) {
        ctx->pc = 0x442E50u;
            // 0x442e50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x442E54u;
        goto label_442e54;
    }
    ctx->pc = 0x442E4Cu;
    SET_GPR_U32(ctx, 31, 0x442E54u);
    ctx->pc = 0x442E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442E4Cu;
            // 0x442e50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442E54u; }
        if (ctx->pc != 0x442E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442E54u; }
        if (ctx->pc != 0x442E54u) { return; }
    }
    ctx->pc = 0x442E54u;
label_442e54:
    // 0x442e54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x442e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_442e58:
    // 0x442e58: 0xc0dc9a0  jal         func_372680
label_442e5c:
    if (ctx->pc == 0x442E5Cu) {
        ctx->pc = 0x442E5Cu;
            // 0x442e5c: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x442E60u;
        goto label_442e60;
    }
    ctx->pc = 0x442E58u;
    SET_GPR_U32(ctx, 31, 0x442E60u);
    ctx->pc = 0x442E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442E58u;
            // 0x442e5c: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442E60u; }
        if (ctx->pc != 0x442E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442E60u; }
        if (ctx->pc != 0x442E60u) { return; }
    }
    ctx->pc = 0x442E60u;
label_442e60:
    // 0x442e60: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x442e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_442e64:
    // 0x442e64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x442e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_442e68:
    // 0x442e68: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x442e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_442e6c:
    // 0x442e6c: 0xc620012c  lwc1        $f0, 0x12C($s1)
    ctx->pc = 0x442e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_442e70:
    // 0x442e70: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x442e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_442e74:
    // 0x442e74: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x442e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_442e78:
    // 0x442e78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x442e78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_442e7c:
    // 0x442e7c: 0xc110e9c  jal         func_443A70
label_442e80:
    if (ctx->pc == 0x442E80u) {
        ctx->pc = 0x442E80u;
            // 0x442e80: 0xe620012c  swc1        $f0, 0x12C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
        ctx->pc = 0x442E84u;
        goto label_442e84;
    }
    ctx->pc = 0x442E7Cu;
    SET_GPR_U32(ctx, 31, 0x442E84u);
    ctx->pc = 0x442E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442E7Cu;
            // 0x442e80: 0xe620012c  swc1        $f0, 0x12C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A70u;
    if (runtime->hasFunction(0x443A70u)) {
        auto targetFn = runtime->lookupFunction(0x443A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442E84u; }
        if (ctx->pc != 0x442E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A70_0x443a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442E84u; }
        if (ctx->pc != 0x442E84u) { return; }
    }
    ctx->pc = 0x442E84u;
label_442e84:
    // 0x442e84: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x442e84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_442e88:
    // 0x442e88: 0x50200191  beql        $at, $zero, . + 4 + (0x191 << 2)
label_442e8c:
    if (ctx->pc == 0x442E8Cu) {
        ctx->pc = 0x442E8Cu;
            // 0x442e8c: 0x8e4502f0  lw          $a1, 0x2F0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 752)));
        ctx->pc = 0x442E90u;
        goto label_442e90;
    }
    ctx->pc = 0x442E88u;
    {
        const bool branch_taken_0x442e88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x442e88) {
            ctx->pc = 0x442E8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x442E88u;
            // 0x442e8c: 0x8e4502f0  lw          $a1, 0x2F0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 752)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4434D0u;
            goto label_4434d0;
        }
    }
    ctx->pc = 0x442E90u;
label_442e90:
    // 0x442e90: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x442e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_442e94:
    // 0x442e94: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x442e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_442e98:
    // 0x442e98: 0x2484d460  addiu       $a0, $a0, -0x2BA0
    ctx->pc = 0x442e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956128));
label_442e9c:
    // 0x442e9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x442e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_442ea0:
    // 0x442ea0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x442ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_442ea4:
    // 0x442ea4: 0x600008  jr          $v1
label_442ea8:
    if (ctx->pc == 0x442EA8u) {
        ctx->pc = 0x442EACu;
        goto label_442eac;
    }
    ctx->pc = 0x442EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x442EACu: goto label_442eac;
            case 0x443078u: goto label_443078;
            case 0x4431E4u: goto label_4431e4;
            case 0x443294u: goto label_443294;
            case 0x4433E8u: goto label_4433e8;
            case 0x44344Cu: goto label_44344c;
            case 0x4434CCu: goto label_4434cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x442EACu;
label_442eac:
    // 0x442eac: 0xc0dc408  jal         func_371020
label_442eb0:
    if (ctx->pc == 0x442EB0u) {
        ctx->pc = 0x442EB0u;
            // 0x442eb0: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x442EB4u;
        goto label_442eb4;
    }
    ctx->pc = 0x442EACu;
    SET_GPR_U32(ctx, 31, 0x442EB4u);
    ctx->pc = 0x442EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442EACu;
            // 0x442eb0: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442EB4u; }
        if (ctx->pc != 0x442EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442EB4u; }
        if (ctx->pc != 0x442EB4u) { return; }
    }
    ctx->pc = 0x442EB4u;
label_442eb4:
    // 0x442eb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x442eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_442eb8:
    // 0x442eb8: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x442eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_442ebc:
    // 0x442ebc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x442ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_442ec0:
    // 0x442ec0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x442ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_442ec4:
    // 0x442ec4: 0xc0d88a4  jal         func_362290
label_442ec8:
    if (ctx->pc == 0x442EC8u) {
        ctx->pc = 0x442EC8u;
            // 0x442ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x442ECCu;
        goto label_442ecc;
    }
    ctx->pc = 0x442EC4u;
    SET_GPR_U32(ctx, 31, 0x442ECCu);
    ctx->pc = 0x442EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442EC4u;
            // 0x442ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362290u;
    if (runtime->hasFunction(0x362290u)) {
        auto targetFn = runtime->lookupFunction(0x362290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442ECCu; }
        if (ctx->pc != 0x442ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362290_0x362290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442ECCu; }
        if (ctx->pc != 0x442ECCu) { return; }
    }
    ctx->pc = 0x442ECCu;
label_442ecc:
    // 0x442ecc: 0xc0e5f68  jal         func_397DA0
label_442ed0:
    if (ctx->pc == 0x442ED0u) {
        ctx->pc = 0x442ED0u;
            // 0x442ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x442ED4u;
        goto label_442ed4;
    }
    ctx->pc = 0x442ECCu;
    SET_GPR_U32(ctx, 31, 0x442ED4u);
    ctx->pc = 0x442ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442ECCu;
            // 0x442ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442ED4u; }
        if (ctx->pc != 0x442ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442ED4u; }
        if (ctx->pc != 0x442ED4u) { return; }
    }
    ctx->pc = 0x442ED4u;
label_442ed4:
    // 0x442ed4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x442ed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_442ed8:
    // 0x442ed8: 0xc110e98  jal         func_443A60
label_442edc:
    if (ctx->pc == 0x442EDCu) {
        ctx->pc = 0x442EDCu;
            // 0x442edc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x442EE0u;
        goto label_442ee0;
    }
    ctx->pc = 0x442ED8u;
    SET_GPR_U32(ctx, 31, 0x442EE0u);
    ctx->pc = 0x442EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442ED8u;
            // 0x442edc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A60u;
    if (runtime->hasFunction(0x443A60u)) {
        auto targetFn = runtime->lookupFunction(0x443A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442EE0u; }
        if (ctx->pc != 0x442EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A60_0x443a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442EE0u; }
        if (ctx->pc != 0x442EE0u) { return; }
    }
    ctx->pc = 0x442EE0u;
label_442ee0:
    // 0x442ee0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x442ee0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_442ee4:
    // 0x442ee4: 0xc110e94  jal         func_443A50
label_442ee8:
    if (ctx->pc == 0x442EE8u) {
        ctx->pc = 0x442EE8u;
            // 0x442ee8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x442EECu;
        goto label_442eec;
    }
    ctx->pc = 0x442EE4u;
    SET_GPR_U32(ctx, 31, 0x442EECu);
    ctx->pc = 0x442EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442EE4u;
            // 0x442ee8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A50u;
    if (runtime->hasFunction(0x443A50u)) {
        auto targetFn = runtime->lookupFunction(0x443A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442EECu; }
        if (ctx->pc != 0x442EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A50_0x443a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442EECu; }
        if (ctx->pc != 0x442EECu) { return; }
    }
    ctx->pc = 0x442EECu;
label_442eec:
    // 0x442eec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x442eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_442ef0:
    // 0x442ef0: 0xc110e98  jal         func_443A60
label_442ef4:
    if (ctx->pc == 0x442EF4u) {
        ctx->pc = 0x442EF4u;
            // 0x442ef4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x442EF8u;
        goto label_442ef8;
    }
    ctx->pc = 0x442EF0u;
    SET_GPR_U32(ctx, 31, 0x442EF8u);
    ctx->pc = 0x442EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442EF0u;
            // 0x442ef4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A60u;
    if (runtime->hasFunction(0x443A60u)) {
        auto targetFn = runtime->lookupFunction(0x443A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442EF8u; }
        if (ctx->pc != 0x442EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A60_0x443a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442EF8u; }
        if (ctx->pc != 0x442EF8u) { return; }
    }
    ctx->pc = 0x442EF8u;
label_442ef8:
    // 0x442ef8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x442ef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_442efc:
    // 0x442efc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x442efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_442f00:
    // 0x442f00: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x442f00u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_442f04:
    // 0x442f04: 0xc0d1c10  jal         func_347040
label_442f08:
    if (ctx->pc == 0x442F08u) {
        ctx->pc = 0x442F08u;
            // 0x442f08: 0x4614ad5d  msub.s      $f21, $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[20]));
        ctx->pc = 0x442F0Cu;
        goto label_442f0c;
    }
    ctx->pc = 0x442F04u;
    SET_GPR_U32(ctx, 31, 0x442F0Cu);
    ctx->pc = 0x442F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442F04u;
            // 0x442f08: 0x4614ad5d  msub.s      $f21, $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[20]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442F0Cu; }
        if (ctx->pc != 0x442F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442F0Cu; }
        if (ctx->pc != 0x442F0Cu) { return; }
    }
    ctx->pc = 0x442F0Cu;
label_442f0c:
    // 0x442f0c: 0x8e44029c  lw          $a0, 0x29C($s2)
    ctx->pc = 0x442f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 668)));
label_442f10:
    // 0x442f10: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x442f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_442f14:
    // 0x442f14: 0xc122d2c  jal         func_48B4B0
label_442f18:
    if (ctx->pc == 0x442F18u) {
        ctx->pc = 0x442F18u;
            // 0x442f18: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x442F1Cu;
        goto label_442f1c;
    }
    ctx->pc = 0x442F14u;
    SET_GPR_U32(ctx, 31, 0x442F1Cu);
    ctx->pc = 0x442F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442F14u;
            // 0x442f18: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442F1Cu; }
        if (ctx->pc != 0x442F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442F1Cu; }
        if (ctx->pc != 0x442F1Cu) { return; }
    }
    ctx->pc = 0x442F1Cu;
label_442f1c:
    // 0x442f1c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x442f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_442f20:
    // 0x442f20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x442f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_442f24:
    // 0x442f24: 0x0  nop
    ctx->pc = 0x442f24u;
    // NOP
label_442f28:
    // 0x442f28: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x442f28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_442f2c:
    // 0x442f2c: 0x4502004e  bc1fl       . + 4 + (0x4E << 2)
label_442f30:
    if (ctx->pc == 0x442F30u) {
        ctx->pc = 0x442F30u;
            // 0x442f30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x442F34u;
        goto label_442f34;
    }
    ctx->pc = 0x442F2Cu;
    {
        const bool branch_taken_0x442f2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x442f2c) {
            ctx->pc = 0x442F30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x442F2Cu;
            // 0x442f30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x443068u;
            goto label_443068;
        }
    }
    ctx->pc = 0x442F34u;
label_442f34:
    // 0x442f34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x442f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_442f38:
    // 0x442f38: 0xc110e90  jal         func_443A40
label_442f3c:
    if (ctx->pc == 0x442F3Cu) {
        ctx->pc = 0x442F3Cu;
            // 0x442f3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x442F40u;
        goto label_442f40;
    }
    ctx->pc = 0x442F38u;
    SET_GPR_U32(ctx, 31, 0x442F40u);
    ctx->pc = 0x442F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442F38u;
            // 0x442f3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A40u;
    if (runtime->hasFunction(0x443A40u)) {
        auto targetFn = runtime->lookupFunction(0x443A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442F40u; }
        if (ctx->pc != 0x442F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A40_0x443a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442F40u; }
        if (ctx->pc != 0x442F40u) { return; }
    }
    ctx->pc = 0x442F40u;
label_442f40:
    // 0x442f40: 0x3c023f02  lui         $v0, 0x3F02
    ctx->pc = 0x442f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16130 << 16));
label_442f44:
    // 0x442f44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x442f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_442f48:
    // 0x442f48: 0x34425ed1  ori         $v0, $v0, 0x5ED1
    ctx->pc = 0x442f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24273);
label_442f4c:
    // 0x442f4c: 0xae4300d8  sw          $v1, 0xD8($s2)
    ctx->pc = 0x442f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 3));
label_442f50:
    // 0x442f50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x442f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_442f54:
    // 0x442f54: 0xc0e11cc  jal         func_384730
label_442f58:
    if (ctx->pc == 0x442F58u) {
        ctx->pc = 0x442F58u;
            // 0x442f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x442F5Cu;
        goto label_442f5c;
    }
    ctx->pc = 0x442F54u;
    SET_GPR_U32(ctx, 31, 0x442F5Cu);
    ctx->pc = 0x442F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442F54u;
            // 0x442f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384730u;
    if (runtime->hasFunction(0x384730u)) {
        auto targetFn = runtime->lookupFunction(0x384730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442F5Cu; }
        if (ctx->pc != 0x442F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384730_0x384730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442F5Cu; }
        if (ctx->pc != 0x442F5Cu) { return; }
    }
    ctx->pc = 0x442F5Cu;
label_442f5c:
    // 0x442f5c: 0xc110e8c  jal         func_443A30
label_442f60:
    if (ctx->pc == 0x442F60u) {
        ctx->pc = 0x442F64u;
        goto label_442f64;
    }
    ctx->pc = 0x442F5Cu;
    SET_GPR_U32(ctx, 31, 0x442F64u);
    ctx->pc = 0x443A30u;
    if (runtime->hasFunction(0x443A30u)) {
        auto targetFn = runtime->lookupFunction(0x443A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442F64u; }
        if (ctx->pc != 0x442F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A30_0x443a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442F64u; }
        if (ctx->pc != 0x442F64u) { return; }
    }
    ctx->pc = 0x442F64u;
label_442f64:
    // 0x442f64: 0xc110e88  jal         func_443A20
label_442f68:
    if (ctx->pc == 0x442F68u) {
        ctx->pc = 0x442F68u;
            // 0x442f68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x442F6Cu;
        goto label_442f6c;
    }
    ctx->pc = 0x442F64u;
    SET_GPR_U32(ctx, 31, 0x442F6Cu);
    ctx->pc = 0x442F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442F64u;
            // 0x442f68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A20u;
    if (runtime->hasFunction(0x443A20u)) {
        auto targetFn = runtime->lookupFunction(0x443A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442F6Cu; }
        if (ctx->pc != 0x442F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A20_0x443a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442F6Cu; }
        if (ctx->pc != 0x442F6Cu) { return; }
    }
    ctx->pc = 0x442F6Cu;
label_442f6c:
    // 0x442f6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x442f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_442f70:
    // 0x442f70: 0xc0e1130  jal         func_3844C0
label_442f74:
    if (ctx->pc == 0x442F74u) {
        ctx->pc = 0x442F74u;
            // 0x442f74: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x442F78u;
        goto label_442f78;
    }
    ctx->pc = 0x442F70u;
    SET_GPR_U32(ctx, 31, 0x442F78u);
    ctx->pc = 0x442F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442F70u;
            // 0x442f74: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3844C0u;
    if (runtime->hasFunction(0x3844C0u)) {
        auto targetFn = runtime->lookupFunction(0x3844C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442F78u; }
        if (ctx->pc != 0x442F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003844C0_0x3844c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442F78u; }
        if (ctx->pc != 0x442F78u) { return; }
    }
    ctx->pc = 0x442F78u;
label_442f78:
    // 0x442f78: 0x0  nop
    ctx->pc = 0x442f78u;
    // NOP
label_442f7c:
    // 0x442f7c: 0x0  nop
    ctx->pc = 0x442f7cu;
    // NOP
label_442f80:
    // 0x442f80: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x442f80u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[0] = ctx->f[21] / ctx->f[0];
label_442f84:
    // 0x442f84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x442f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_442f88:
    // 0x442f88: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x442f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_442f8c:
    // 0x442f8c: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x442f8cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
label_442f90:
    // 0x442f90: 0x0  nop
    ctx->pc = 0x442f90u;
    // NOP
label_442f94:
    // 0x442f94: 0x0  nop
    ctx->pc = 0x442f94u;
    // NOP
label_442f98:
    // 0x442f98: 0xc110e74  jal         func_4439D0
label_442f9c:
    if (ctx->pc == 0x442F9Cu) {
        ctx->pc = 0x442F9Cu;
            // 0x442f9c: 0xe6400294  swc1        $f0, 0x294($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 660), bits); }
        ctx->pc = 0x442FA0u;
        goto label_442fa0;
    }
    ctx->pc = 0x442F98u;
    SET_GPR_U32(ctx, 31, 0x442FA0u);
    ctx->pc = 0x442F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442F98u;
            // 0x442f9c: 0xe6400294  swc1        $f0, 0x294($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 660), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x4439D0u;
    if (runtime->hasFunction(0x4439D0u)) {
        auto targetFn = runtime->lookupFunction(0x4439D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442FA0u; }
        if (ctx->pc != 0x442FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004439D0_0x4439d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442FA0u; }
        if (ctx->pc != 0x442FA0u) { return; }
    }
    ctx->pc = 0x442FA0u;
label_442fa0:
    // 0x442fa0: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x442fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_442fa4:
    // 0x442fa4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x442fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_442fa8:
    // 0x442fa8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x442fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_442fac:
    // 0x442fac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x442facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_442fb0:
    // 0x442fb0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x442fb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_442fb4:
    // 0x442fb4: 0xc111004  jal         func_444010
label_442fb8:
    if (ctx->pc == 0x442FB8u) {
        ctx->pc = 0x442FB8u;
            // 0x442fb8: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x442FBCu;
        goto label_442fbc;
    }
    ctx->pc = 0x442FB4u;
    SET_GPR_U32(ctx, 31, 0x442FBCu);
    ctx->pc = 0x442FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442FB4u;
            // 0x442fb8: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x444010u;
    if (runtime->hasFunction(0x444010u)) {
        auto targetFn = runtime->lookupFunction(0x444010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442FBCu; }
        if (ctx->pc != 0x442FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00444010_0x444010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442FBCu; }
        if (ctx->pc != 0x442FBCu) { return; }
    }
    ctx->pc = 0x442FBCu;
label_442fbc:
    // 0x442fbc: 0x8e44029c  lw          $a0, 0x29C($s2)
    ctx->pc = 0x442fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 668)));
label_442fc0:
    // 0x442fc0: 0xc122c5c  jal         func_48B170
label_442fc4:
    if (ctx->pc == 0x442FC4u) {
        ctx->pc = 0x442FC4u;
            // 0x442fc4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x442FC8u;
        goto label_442fc8;
    }
    ctx->pc = 0x442FC0u;
    SET_GPR_U32(ctx, 31, 0x442FC8u);
    ctx->pc = 0x442FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442FC0u;
            // 0x442fc4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442FC8u; }
        if (ctx->pc != 0x442FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B170_0x48b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442FC8u; }
        if (ctx->pc != 0x442FC8u) { return; }
    }
    ctx->pc = 0x442FC8u;
label_442fc8:
    // 0x442fc8: 0xc0d1c10  jal         func_347040
label_442fcc:
    if (ctx->pc == 0x442FCCu) {
        ctx->pc = 0x442FCCu;
            // 0x442fcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x442FD0u;
        goto label_442fd0;
    }
    ctx->pc = 0x442FC8u;
    SET_GPR_U32(ctx, 31, 0x442FD0u);
    ctx->pc = 0x442FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442FC8u;
            // 0x442fcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442FD0u; }
        if (ctx->pc != 0x442FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442FD0u; }
        if (ctx->pc != 0x442FD0u) { return; }
    }
    ctx->pc = 0x442FD0u;
label_442fd0:
    // 0x442fd0: 0x8e44029c  lw          $a0, 0x29C($s2)
    ctx->pc = 0x442fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 668)));
label_442fd4:
    // 0x442fd4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x442fd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_442fd8:
    // 0x442fd8: 0xc122d2c  jal         func_48B4B0
label_442fdc:
    if (ctx->pc == 0x442FDCu) {
        ctx->pc = 0x442FDCu;
            // 0x442fdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x442FE0u;
        goto label_442fe0;
    }
    ctx->pc = 0x442FD8u;
    SET_GPR_U32(ctx, 31, 0x442FE0u);
    ctx->pc = 0x442FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442FD8u;
            // 0x442fdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442FE0u; }
        if (ctx->pc != 0x442FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442FE0u; }
        if (ctx->pc != 0x442FE0u) { return; }
    }
    ctx->pc = 0x442FE0u;
label_442fe0:
    // 0x442fe0: 0xae4002ac  sw          $zero, 0x2AC($s2)
    ctx->pc = 0x442fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 684), GPR_U32(ctx, 0));
label_442fe4:
    // 0x442fe4: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x442fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_442fe8:
    // 0x442fe8: 0x8e4402f0  lw          $a0, 0x2F0($s2)
    ctx->pc = 0x442fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 752)));
label_442fec:
    // 0x442fec: 0xc110e70  jal         func_4439C0
label_442ff0:
    if (ctx->pc == 0x442FF0u) {
        ctx->pc = 0x442FF0u;
            // 0x442ff0: 0x24a502e0  addiu       $a1, $a1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 736));
        ctx->pc = 0x442FF4u;
        goto label_442ff4;
    }
    ctx->pc = 0x442FECu;
    SET_GPR_U32(ctx, 31, 0x442FF4u);
    ctx->pc = 0x442FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442FECu;
            // 0x442ff0: 0x24a502e0  addiu       $a1, $a1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4439C0u;
    if (runtime->hasFunction(0x4439C0u)) {
        auto targetFn = runtime->lookupFunction(0x4439C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442FF4u; }
        if (ctx->pc != 0x442FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004439C0_0x4439c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x442FF4u; }
        if (ctx->pc != 0x442FF4u) { return; }
    }
    ctx->pc = 0x442FF4u;
label_442ff4:
    // 0x442ff4: 0x8e4402f4  lw          $a0, 0x2F4($s2)
    ctx->pc = 0x442ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 756)));
label_442ff8:
    // 0x442ff8: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x442ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_442ffc:
    // 0x442ffc: 0xc110e70  jal         func_4439C0
label_443000:
    if (ctx->pc == 0x443000u) {
        ctx->pc = 0x443000u;
            // 0x443000: 0x24a50320  addiu       $a1, $a1, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 800));
        ctx->pc = 0x443004u;
        goto label_443004;
    }
    ctx->pc = 0x442FFCu;
    SET_GPR_U32(ctx, 31, 0x443004u);
    ctx->pc = 0x443000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x442FFCu;
            // 0x443000: 0x24a50320  addiu       $a1, $a1, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4439C0u;
    if (runtime->hasFunction(0x4439C0u)) {
        auto targetFn = runtime->lookupFunction(0x4439C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443004u; }
        if (ctx->pc != 0x443004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004439C0_0x4439c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443004u; }
        if (ctx->pc != 0x443004u) { return; }
    }
    ctx->pc = 0x443004u;
label_443004:
    // 0x443004: 0xc110e8c  jal         func_443A30
label_443008:
    if (ctx->pc == 0x443008u) {
        ctx->pc = 0x44300Cu;
        goto label_44300c;
    }
    ctx->pc = 0x443004u;
    SET_GPR_U32(ctx, 31, 0x44300Cu);
    ctx->pc = 0x443A30u;
    if (runtime->hasFunction(0x443A30u)) {
        auto targetFn = runtime->lookupFunction(0x443A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44300Cu; }
        if (ctx->pc != 0x44300Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A30_0x443a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44300Cu; }
        if (ctx->pc != 0x44300Cu) { return; }
    }
    ctx->pc = 0x44300Cu;
label_44300c:
    // 0x44300c: 0xc110e6c  jal         func_4439B0
label_443010:
    if (ctx->pc == 0x443010u) {
        ctx->pc = 0x443010u;
            // 0x443010: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x443014u;
        goto label_443014;
    }
    ctx->pc = 0x44300Cu;
    SET_GPR_U32(ctx, 31, 0x443014u);
    ctx->pc = 0x443010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44300Cu;
            // 0x443010: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4439B0u;
    if (runtime->hasFunction(0x4439B0u)) {
        auto targetFn = runtime->lookupFunction(0x4439B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443014u; }
        if (ctx->pc != 0x443014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004439B0_0x4439b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443014u; }
        if (ctx->pc != 0x443014u) { return; }
    }
    ctx->pc = 0x443014u;
label_443014:
    // 0x443014: 0xc110e8c  jal         func_443A30
label_443018:
    if (ctx->pc == 0x443018u) {
        ctx->pc = 0x443018u;
            // 0x443018: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44301Cu;
        goto label_44301c;
    }
    ctx->pc = 0x443014u;
    SET_GPR_U32(ctx, 31, 0x44301Cu);
    ctx->pc = 0x443018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443014u;
            // 0x443018: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A30u;
    if (runtime->hasFunction(0x443A30u)) {
        auto targetFn = runtime->lookupFunction(0x443A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44301Cu; }
        if (ctx->pc != 0x44301Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A30_0x443a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44301Cu; }
        if (ctx->pc != 0x44301Cu) { return; }
    }
    ctx->pc = 0x44301Cu;
label_44301c:
    // 0x44301c: 0xc110e6c  jal         func_4439B0
label_443020:
    if (ctx->pc == 0x443020u) {
        ctx->pc = 0x443020u;
            // 0x443020: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x443024u;
        goto label_443024;
    }
    ctx->pc = 0x44301Cu;
    SET_GPR_U32(ctx, 31, 0x443024u);
    ctx->pc = 0x443020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44301Cu;
            // 0x443020: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4439B0u;
    if (runtime->hasFunction(0x4439B0u)) {
        auto targetFn = runtime->lookupFunction(0x4439B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443024u; }
        if (ctx->pc != 0x443024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004439B0_0x4439b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443024u; }
        if (ctx->pc != 0x443024u) { return; }
    }
    ctx->pc = 0x443024u;
label_443024:
    // 0x443024: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x443024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_443028:
    // 0x443028: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x443028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_44302c:
    // 0x44302c: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x44302cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_443030:
    // 0x443030: 0xc111324  jal         func_444C90
label_443034:
    if (ctx->pc == 0x443034u) {
        ctx->pc = 0x443034u;
            // 0x443034: 0x26470298  addiu       $a3, $s2, 0x298 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 664));
        ctx->pc = 0x443038u;
        goto label_443038;
    }
    ctx->pc = 0x443030u;
    SET_GPR_U32(ctx, 31, 0x443038u);
    ctx->pc = 0x443034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443030u;
            // 0x443034: 0x26470298  addiu       $a3, $s2, 0x298 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x444C90u;
    if (runtime->hasFunction(0x444C90u)) {
        auto targetFn = runtime->lookupFunction(0x444C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443038u; }
        if (ctx->pc != 0x443038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00444C90_0x444c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443038u; }
        if (ctx->pc != 0x443038u) { return; }
    }
    ctx->pc = 0x443038u;
label_443038:
    // 0x443038: 0xc0dc408  jal         func_371020
label_44303c:
    if (ctx->pc == 0x44303Cu) {
        ctx->pc = 0x44303Cu;
            // 0x44303c: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x443040u;
        goto label_443040;
    }
    ctx->pc = 0x443038u;
    SET_GPR_U32(ctx, 31, 0x443040u);
    ctx->pc = 0x44303Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443038u;
            // 0x44303c: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443040u; }
        if (ctx->pc != 0x443040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443040u; }
        if (ctx->pc != 0x443040u) { return; }
    }
    ctx->pc = 0x443040u;
label_443040:
    // 0x443040: 0xc110e8c  jal         func_443A30
label_443044:
    if (ctx->pc == 0x443044u) {
        ctx->pc = 0x443044u;
            // 0x443044: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x443048u;
        goto label_443048;
    }
    ctx->pc = 0x443040u;
    SET_GPR_U32(ctx, 31, 0x443048u);
    ctx->pc = 0x443044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443040u;
            // 0x443044: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A30u;
    if (runtime->hasFunction(0x443A30u)) {
        auto targetFn = runtime->lookupFunction(0x443A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443048u; }
        if (ctx->pc != 0x443048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A30_0x443a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443048u; }
        if (ctx->pc != 0x443048u) { return; }
    }
    ctx->pc = 0x443048u;
label_443048:
    // 0x443048: 0xc110e68  jal         func_4439A0
label_44304c:
    if (ctx->pc == 0x44304Cu) {
        ctx->pc = 0x44304Cu;
            // 0x44304c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x443050u;
        goto label_443050;
    }
    ctx->pc = 0x443048u;
    SET_GPR_U32(ctx, 31, 0x443050u);
    ctx->pc = 0x44304Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443048u;
            // 0x44304c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4439A0u;
    if (runtime->hasFunction(0x4439A0u)) {
        auto targetFn = runtime->lookupFunction(0x4439A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443050u; }
        if (ctx->pc != 0x443050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004439A0_0x4439a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443050u; }
        if (ctx->pc != 0x443050u) { return; }
    }
    ctx->pc = 0x443050u;
label_443050:
    // 0x443050: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x443050u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_443054:
    // 0x443054: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x443054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_443058:
    // 0x443058: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x443058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_44305c:
    // 0x44305c: 0x320f809  jalr        $t9
label_443060:
    if (ctx->pc == 0x443060u) {
        ctx->pc = 0x443060u;
            // 0x443060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x443064u;
        goto label_443064;
    }
    ctx->pc = 0x44305Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x443064u);
        ctx->pc = 0x443060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44305Cu;
            // 0x443060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x443064u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x443064u; }
            if (ctx->pc != 0x443064u) { return; }
        }
        }
    }
    ctx->pc = 0x443064u;
label_443064:
    // 0x443064: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x443064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_443068:
    // 0x443068: 0xc110edc  jal         func_443B70
label_44306c:
    if (ctx->pc == 0x44306Cu) {
        ctx->pc = 0x443070u;
        goto label_443070;
    }
    ctx->pc = 0x443068u;
    SET_GPR_U32(ctx, 31, 0x443070u);
    ctx->pc = 0x443B70u;
    if (runtime->hasFunction(0x443B70u)) {
        auto targetFn = runtime->lookupFunction(0x443B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443070u; }
        if (ctx->pc != 0x443070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443B70_0x443b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443070u; }
        if (ctx->pc != 0x443070u) { return; }
    }
    ctx->pc = 0x443070u;
label_443070:
    // 0x443070: 0x10000116  b           . + 4 + (0x116 << 2)
label_443074:
    if (ctx->pc == 0x443074u) {
        ctx->pc = 0x443078u;
        goto label_443078;
    }
    ctx->pc = 0x443070u;
    {
        const bool branch_taken_0x443070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x443070) {
            ctx->pc = 0x4434CCu;
            goto label_4434cc;
        }
    }
    ctx->pc = 0x443078u;
label_443078:
    // 0x443078: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x443078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_44307c:
    // 0x44307c: 0xc110e74  jal         func_4439D0
label_443080:
    if (ctx->pc == 0x443080u) {
        ctx->pc = 0x443080u;
            // 0x443080: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x443084u;
        goto label_443084;
    }
    ctx->pc = 0x44307Cu;
    SET_GPR_U32(ctx, 31, 0x443084u);
    ctx->pc = 0x443080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44307Cu;
            // 0x443080: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4439D0u;
    if (runtime->hasFunction(0x4439D0u)) {
        auto targetFn = runtime->lookupFunction(0x4439D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443084u; }
        if (ctx->pc != 0x443084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004439D0_0x4439d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443084u; }
        if (ctx->pc != 0x443084u) { return; }
    }
    ctx->pc = 0x443084u;
label_443084:
    // 0x443084: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x443084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_443088:
    // 0x443088: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x443088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_44308c:
    // 0x44308c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x44308cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_443090:
    // 0x443090: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x443090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_443094:
    // 0x443094: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x443094u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_443098:
    // 0x443098: 0xc111004  jal         func_444010
label_44309c:
    if (ctx->pc == 0x44309Cu) {
        ctx->pc = 0x44309Cu;
            // 0x44309c: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4430A0u;
        goto label_4430a0;
    }
    ctx->pc = 0x443098u;
    SET_GPR_U32(ctx, 31, 0x4430A0u);
    ctx->pc = 0x44309Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443098u;
            // 0x44309c: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x444010u;
    if (runtime->hasFunction(0x444010u)) {
        auto targetFn = runtime->lookupFunction(0x444010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4430A0u; }
        if (ctx->pc != 0x4430A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00444010_0x444010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4430A0u; }
        if (ctx->pc != 0x4430A0u) { return; }
    }
    ctx->pc = 0x4430A0u;
label_4430a0:
    // 0x4430a0: 0xc110e58  jal         func_443960
label_4430a4:
    if (ctx->pc == 0x4430A4u) {
        ctx->pc = 0x4430A4u;
            // 0x4430a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4430A8u;
        goto label_4430a8;
    }
    ctx->pc = 0x4430A0u;
    SET_GPR_U32(ctx, 31, 0x4430A8u);
    ctx->pc = 0x4430A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4430A0u;
            // 0x4430a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443960u;
    if (runtime->hasFunction(0x443960u)) {
        auto targetFn = runtime->lookupFunction(0x443960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4430A8u; }
        if (ctx->pc != 0x4430A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443960_0x443960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4430A8u; }
        if (ctx->pc != 0x4430A8u) { return; }
    }
    ctx->pc = 0x4430A8u;
label_4430a8:
    // 0x4430a8: 0xc0dc408  jal         func_371020
label_4430ac:
    if (ctx->pc == 0x4430ACu) {
        ctx->pc = 0x4430ACu;
            // 0x4430ac: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x4430B0u;
        goto label_4430b0;
    }
    ctx->pc = 0x4430A8u;
    SET_GPR_U32(ctx, 31, 0x4430B0u);
    ctx->pc = 0x4430ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4430A8u;
            // 0x4430ac: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4430B0u; }
        if (ctx->pc != 0x4430B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4430B0u; }
        if (ctx->pc != 0x4430B0u) { return; }
    }
    ctx->pc = 0x4430B0u;
label_4430b0:
    // 0x4430b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4430b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4430b4:
    // 0x4430b4: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x4430b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_4430b8:
    // 0x4430b8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4430b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4430bc:
    // 0x4430bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4430bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4430c0:
    // 0x4430c0: 0xc0d88a4  jal         func_362290
label_4430c4:
    if (ctx->pc == 0x4430C4u) {
        ctx->pc = 0x4430C4u;
            // 0x4430c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4430C8u;
        goto label_4430c8;
    }
    ctx->pc = 0x4430C0u;
    SET_GPR_U32(ctx, 31, 0x4430C8u);
    ctx->pc = 0x4430C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4430C0u;
            // 0x4430c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362290u;
    if (runtime->hasFunction(0x362290u)) {
        auto targetFn = runtime->lookupFunction(0x362290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4430C8u; }
        if (ctx->pc != 0x4430C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362290_0x362290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4430C8u; }
        if (ctx->pc != 0x4430C8u) { return; }
    }
    ctx->pc = 0x4430C8u;
label_4430c8:
    // 0x4430c8: 0xc111064  jal         func_444190
label_4430cc:
    if (ctx->pc == 0x4430CCu) {
        ctx->pc = 0x4430CCu;
            // 0x4430cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4430D0u;
        goto label_4430d0;
    }
    ctx->pc = 0x4430C8u;
    SET_GPR_U32(ctx, 31, 0x4430D0u);
    ctx->pc = 0x4430CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4430C8u;
            // 0x4430cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x444190u;
    if (runtime->hasFunction(0x444190u)) {
        auto targetFn = runtime->lookupFunction(0x444190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4430D0u; }
        if (ctx->pc != 0x4430D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00444190_0x444190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4430D0u; }
        if (ctx->pc != 0x4430D0u) { return; }
    }
    ctx->pc = 0x4430D0u;
label_4430d0:
    // 0x4430d0: 0xc0dd890  jal         func_376240
label_4430d4:
    if (ctx->pc == 0x4430D4u) {
        ctx->pc = 0x4430D4u;
            // 0x4430d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4430D8u;
        goto label_4430d8;
    }
    ctx->pc = 0x4430D0u;
    SET_GPR_U32(ctx, 31, 0x4430D8u);
    ctx->pc = 0x4430D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4430D0u;
            // 0x4430d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x376240u;
    if (runtime->hasFunction(0x376240u)) {
        auto targetFn = runtime->lookupFunction(0x376240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4430D8u; }
        if (ctx->pc != 0x4430D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376240_0x376240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4430D8u; }
        if (ctx->pc != 0x4430D8u) { return; }
    }
    ctx->pc = 0x4430D8u;
label_4430d8:
    // 0x4430d8: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_4430dc:
    if (ctx->pc == 0x4430DCu) {
        ctx->pc = 0x4430DCu;
            // 0x4430dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4430E0u;
        goto label_4430e0;
    }
    ctx->pc = 0x4430D8u;
    {
        const bool branch_taken_0x4430d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4430d8) {
            ctx->pc = 0x4430DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4430D8u;
            // 0x4430dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x443144u;
            goto label_443144;
        }
    }
    ctx->pc = 0x4430E0u;
label_4430e0:
    // 0x4430e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4430e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4430e4:
    // 0x4430e4: 0xc110e74  jal         func_4439D0
label_4430e8:
    if (ctx->pc == 0x4430E8u) {
        ctx->pc = 0x4430E8u;
            // 0x4430e8: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4430ECu;
        goto label_4430ec;
    }
    ctx->pc = 0x4430E4u;
    SET_GPR_U32(ctx, 31, 0x4430ECu);
    ctx->pc = 0x4430E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4430E4u;
            // 0x4430e8: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4439D0u;
    if (runtime->hasFunction(0x4439D0u)) {
        auto targetFn = runtime->lookupFunction(0x4439D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4430ECu; }
        if (ctx->pc != 0x4430ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004439D0_0x4439d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4430ECu; }
        if (ctx->pc != 0x4430ECu) { return; }
    }
    ctx->pc = 0x4430ECu;
label_4430ec:
    // 0x4430ec: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x4430ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_4430f0:
    // 0x4430f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4430f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4430f4:
    // 0x4430f4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4430f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4430f8:
    // 0x4430f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4430f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4430fc:
    // 0x4430fc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x4430fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_443100:
    // 0x443100: 0xc111004  jal         func_444010
label_443104:
    if (ctx->pc == 0x443104u) {
        ctx->pc = 0x443104u;
            // 0x443104: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x443108u;
        goto label_443108;
    }
    ctx->pc = 0x443100u;
    SET_GPR_U32(ctx, 31, 0x443108u);
    ctx->pc = 0x443104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443100u;
            // 0x443104: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x444010u;
    if (runtime->hasFunction(0x444010u)) {
        auto targetFn = runtime->lookupFunction(0x444010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443108u; }
        if (ctx->pc != 0x443108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00444010_0x444010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443108u; }
        if (ctx->pc != 0x443108u) { return; }
    }
    ctx->pc = 0x443108u;
label_443108:
    // 0x443108: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x443108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_44310c:
    // 0x44310c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x44310cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_443110:
    // 0x443110: 0xc110e90  jal         func_443A40
label_443114:
    if (ctx->pc == 0x443114u) {
        ctx->pc = 0x443114u;
            // 0x443114: 0xae4002a0  sw          $zero, 0x2A0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 672), GPR_U32(ctx, 0));
        ctx->pc = 0x443118u;
        goto label_443118;
    }
    ctx->pc = 0x443110u;
    SET_GPR_U32(ctx, 31, 0x443118u);
    ctx->pc = 0x443114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443110u;
            // 0x443114: 0xae4002a0  sw          $zero, 0x2A0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 672), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A40u;
    if (runtime->hasFunction(0x443A40u)) {
        auto targetFn = runtime->lookupFunction(0x443A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443118u; }
        if (ctx->pc != 0x443118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A40_0x443a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443118u; }
        if (ctx->pc != 0x443118u) { return; }
    }
    ctx->pc = 0x443118u;
label_443118:
    // 0x443118: 0xc110e8c  jal         func_443A30
label_44311c:
    if (ctx->pc == 0x44311Cu) {
        ctx->pc = 0x44311Cu;
            // 0x44311c: 0xae4000d8  sw          $zero, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
        ctx->pc = 0x443120u;
        goto label_443120;
    }
    ctx->pc = 0x443118u;
    SET_GPR_U32(ctx, 31, 0x443120u);
    ctx->pc = 0x44311Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443118u;
            // 0x44311c: 0xae4000d8  sw          $zero, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A30u;
    if (runtime->hasFunction(0x443A30u)) {
        auto targetFn = runtime->lookupFunction(0x443A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443120u; }
        if (ctx->pc != 0x443120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A30_0x443a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443120u; }
        if (ctx->pc != 0x443120u) { return; }
    }
    ctx->pc = 0x443120u;
label_443120:
    // 0x443120: 0xc110e6c  jal         func_4439B0
label_443124:
    if (ctx->pc == 0x443124u) {
        ctx->pc = 0x443124u;
            // 0x443124: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x443128u;
        goto label_443128;
    }
    ctx->pc = 0x443120u;
    SET_GPR_U32(ctx, 31, 0x443128u);
    ctx->pc = 0x443124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443120u;
            // 0x443124: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4439B0u;
    if (runtime->hasFunction(0x4439B0u)) {
        auto targetFn = runtime->lookupFunction(0x4439B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443128u; }
        if (ctx->pc != 0x443128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004439B0_0x4439b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443128u; }
        if (ctx->pc != 0x443128u) { return; }
    }
    ctx->pc = 0x443128u;
label_443128:
    // 0x443128: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x443128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44312c:
    // 0x44312c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x44312cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_443130:
    // 0x443130: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x443130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_443134:
    // 0x443134: 0xc111324  jal         func_444C90
label_443138:
    if (ctx->pc == 0x443138u) {
        ctx->pc = 0x443138u;
            // 0x443138: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44313Cu;
        goto label_44313c;
    }
    ctx->pc = 0x443134u;
    SET_GPR_U32(ctx, 31, 0x44313Cu);
    ctx->pc = 0x443138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443134u;
            // 0x443138: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x444C90u;
    if (runtime->hasFunction(0x444C90u)) {
        auto targetFn = runtime->lookupFunction(0x444C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44313Cu; }
        if (ctx->pc != 0x44313Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00444C90_0x444c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44313Cu; }
        if (ctx->pc != 0x44313Cu) { return; }
    }
    ctx->pc = 0x44313Cu;
label_44313c:
    // 0x44313c: 0x10000025  b           . + 4 + (0x25 << 2)
label_443140:
    if (ctx->pc == 0x443140u) {
        ctx->pc = 0x443140u;
            // 0x443140: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x443144u;
        goto label_443144;
    }
    ctx->pc = 0x44313Cu;
    {
        const bool branch_taken_0x44313c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x443140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44313Cu;
            // 0x443140: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44313c) {
            ctx->pc = 0x4431D4u;
            goto label_4431d4;
        }
    }
    ctx->pc = 0x443144u;
label_443144:
    // 0x443144: 0xc0e5f68  jal         func_397DA0
label_443148:
    if (ctx->pc == 0x443148u) {
        ctx->pc = 0x44314Cu;
        goto label_44314c;
    }
    ctx->pc = 0x443144u;
    SET_GPR_U32(ctx, 31, 0x44314Cu);
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44314Cu; }
        if (ctx->pc != 0x44314Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44314Cu; }
        if (ctx->pc != 0x44314Cu) { return; }
    }
    ctx->pc = 0x44314Cu;
label_44314c:
    // 0x44314c: 0xc0775b8  jal         func_1DD6E0
label_443150:
    if (ctx->pc == 0x443150u) {
        ctx->pc = 0x443154u;
        goto label_443154;
    }
    ctx->pc = 0x44314Cu;
    SET_GPR_U32(ctx, 31, 0x443154u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443154u; }
        if (ctx->pc != 0x443154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443154u; }
        if (ctx->pc != 0x443154u) { return; }
    }
    ctx->pc = 0x443154u;
label_443154:
    // 0x443154: 0xc0775b4  jal         func_1DD6D0
label_443158:
    if (ctx->pc == 0x443158u) {
        ctx->pc = 0x443158u;
            // 0x443158: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x44315Cu;
        goto label_44315c;
    }
    ctx->pc = 0x443154u;
    SET_GPR_U32(ctx, 31, 0x44315Cu);
    ctx->pc = 0x443158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443154u;
            // 0x443158: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44315Cu; }
        if (ctx->pc != 0x44315Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44315Cu; }
        if (ctx->pc != 0x44315Cu) { return; }
    }
    ctx->pc = 0x44315Cu;
label_44315c:
    // 0x44315c: 0xc64202ac  lwc1        $f2, 0x2AC($s2)
    ctx->pc = 0x44315cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_443160:
    // 0x443160: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x443160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_443164:
    // 0x443164: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x443164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_443168:
    // 0x443168: 0x0  nop
    ctx->pc = 0x443168u;
    // NOP
label_44316c:
    // 0x44316c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x44316cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_443170:
    // 0x443170: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x443170u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_443174:
    // 0x443174: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_443178:
    if (ctx->pc == 0x443178u) {
        ctx->pc = 0x443178u;
            // 0x443178: 0xe64002ac  swc1        $f0, 0x2AC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 684), bits); }
        ctx->pc = 0x44317Cu;
        goto label_44317c;
    }
    ctx->pc = 0x443174u;
    {
        const bool branch_taken_0x443174 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x443178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x443174u;
            // 0x443178: 0xe64002ac  swc1        $f0, 0x2AC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 684), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x443174) {
            ctx->pc = 0x4431D0u;
            goto label_4431d0;
        }
    }
    ctx->pc = 0x44317Cu;
label_44317c:
    // 0x44317c: 0xae4002ac  sw          $zero, 0x2AC($s2)
    ctx->pc = 0x44317cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 684), GPR_U32(ctx, 0));
label_443180:
    // 0x443180: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x443180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_443184:
    // 0x443184: 0x8c500e80  lw          $s0, 0xE80($v0)
    ctx->pc = 0x443184u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_443188:
    // 0x443188: 0xc040180  jal         func_100600
label_44318c:
    if (ctx->pc == 0x44318Cu) {
        ctx->pc = 0x44318Cu;
            // 0x44318c: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->pc = 0x443190u;
        goto label_443190;
    }
    ctx->pc = 0x443188u;
    SET_GPR_U32(ctx, 31, 0x443190u);
    ctx->pc = 0x44318Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443188u;
            // 0x44318c: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443190u; }
        if (ctx->pc != 0x443190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443190u; }
        if (ctx->pc != 0x443190u) { return; }
    }
    ctx->pc = 0x443190u;
label_443190:
    // 0x443190: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x443190u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_443194:
    // 0x443194: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
label_443198:
    if (ctx->pc == 0x443198u) {
        ctx->pc = 0x44319Cu;
        goto label_44319c;
    }
    ctx->pc = 0x443194u;
    {
        const bool branch_taken_0x443194 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x443194) {
            ctx->pc = 0x4431D0u;
            goto label_4431d0;
        }
    }
    ctx->pc = 0x44319Cu;
label_44319c:
    // 0x44319c: 0xc110e54  jal         func_443950
label_4431a0:
    if (ctx->pc == 0x4431A0u) {
        ctx->pc = 0x4431A0u;
            // 0x4431a0: 0x26040054  addiu       $a0, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->pc = 0x4431A4u;
        goto label_4431a4;
    }
    ctx->pc = 0x44319Cu;
    SET_GPR_U32(ctx, 31, 0x4431A4u);
    ctx->pc = 0x4431A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44319Cu;
            // 0x4431a0: 0x26040054  addiu       $a0, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443950u;
    if (runtime->hasFunction(0x443950u)) {
        auto targetFn = runtime->lookupFunction(0x443950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4431A4u; }
        if (ctx->pc != 0x4431A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443950_0x443950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4431A4u; }
        if (ctx->pc != 0x4431A4u) { return; }
    }
    ctx->pc = 0x4431A4u;
label_4431a4:
    // 0x4431a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4431a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4431a8:
    // 0x4431a8: 0xc0d1c10  jal         func_347040
label_4431ac:
    if (ctx->pc == 0x4431ACu) {
        ctx->pc = 0x4431ACu;
            // 0x4431ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4431B0u;
        goto label_4431b0;
    }
    ctx->pc = 0x4431A8u;
    SET_GPR_U32(ctx, 31, 0x4431B0u);
    ctx->pc = 0x4431ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4431A8u;
            // 0x4431ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4431B0u; }
        if (ctx->pc != 0x4431B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4431B0u; }
        if (ctx->pc != 0x4431B0u) { return; }
    }
    ctx->pc = 0x4431B0u;
label_4431b0:
    // 0x4431b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4431b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4431b4:
    // 0x4431b4: 0xc0d1c14  jal         func_347050
label_4431b8:
    if (ctx->pc == 0x4431B8u) {
        ctx->pc = 0x4431B8u;
            // 0x4431b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4431BCu;
        goto label_4431bc;
    }
    ctx->pc = 0x4431B4u;
    SET_GPR_U32(ctx, 31, 0x4431BCu);
    ctx->pc = 0x4431B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4431B4u;
            // 0x4431b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4431BCu; }
        if (ctx->pc != 0x4431BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4431BCu; }
        if (ctx->pc != 0x4431BCu) { return; }
    }
    ctx->pc = 0x4431BCu;
label_4431bc:
    // 0x4431bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4431bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4431c0:
    // 0x4431c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4431c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4431c4:
    // 0x4431c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4431c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4431c8:
    // 0x4431c8: 0xc0f24ec  jal         func_3C93B0
label_4431cc:
    if (ctx->pc == 0x4431CCu) {
        ctx->pc = 0x4431CCu;
            // 0x4431cc: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4431D0u;
        goto label_4431d0;
    }
    ctx->pc = 0x4431C8u;
    SET_GPR_U32(ctx, 31, 0x4431D0u);
    ctx->pc = 0x4431CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4431C8u;
            // 0x4431cc: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C93B0u;
    if (runtime->hasFunction(0x3C93B0u)) {
        auto targetFn = runtime->lookupFunction(0x3C93B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4431D0u; }
        if (ctx->pc != 0x4431D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C93B0_0x3c93b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4431D0u; }
        if (ctx->pc != 0x4431D0u) { return; }
    }
    ctx->pc = 0x4431D0u;
label_4431d0:
    // 0x4431d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4431d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4431d4:
    // 0x4431d4: 0xc110edc  jal         func_443B70
label_4431d8:
    if (ctx->pc == 0x4431D8u) {
        ctx->pc = 0x4431DCu;
        goto label_4431dc;
    }
    ctx->pc = 0x4431D4u;
    SET_GPR_U32(ctx, 31, 0x4431DCu);
    ctx->pc = 0x443B70u;
    if (runtime->hasFunction(0x443B70u)) {
        auto targetFn = runtime->lookupFunction(0x443B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4431DCu; }
        if (ctx->pc != 0x4431DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443B70_0x443b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4431DCu; }
        if (ctx->pc != 0x4431DCu) { return; }
    }
    ctx->pc = 0x4431DCu;
label_4431dc:
    // 0x4431dc: 0x100000bb  b           . + 4 + (0xBB << 2)
label_4431e0:
    if (ctx->pc == 0x4431E0u) {
        ctx->pc = 0x4431E4u;
        goto label_4431e4;
    }
    ctx->pc = 0x4431DCu;
    {
        const bool branch_taken_0x4431dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4431dc) {
            ctx->pc = 0x4434CCu;
            goto label_4434cc;
        }
    }
    ctx->pc = 0x4431E4u;
label_4431e4:
    // 0x4431e4: 0xc110e58  jal         func_443960
label_4431e8:
    if (ctx->pc == 0x4431E8u) {
        ctx->pc = 0x4431E8u;
            // 0x4431e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4431ECu;
        goto label_4431ec;
    }
    ctx->pc = 0x4431E4u;
    SET_GPR_U32(ctx, 31, 0x4431ECu);
    ctx->pc = 0x4431E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4431E4u;
            // 0x4431e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443960u;
    if (runtime->hasFunction(0x443960u)) {
        auto targetFn = runtime->lookupFunction(0x443960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4431ECu; }
        if (ctx->pc != 0x4431ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443960_0x443960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4431ECu; }
        if (ctx->pc != 0x4431ECu) { return; }
    }
    ctx->pc = 0x4431ECu;
label_4431ec:
    // 0x4431ec: 0xc0775b8  jal         func_1DD6E0
label_4431f0:
    if (ctx->pc == 0x4431F0u) {
        ctx->pc = 0x4431F4u;
        goto label_4431f4;
    }
    ctx->pc = 0x4431ECu;
    SET_GPR_U32(ctx, 31, 0x4431F4u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4431F4u; }
        if (ctx->pc != 0x4431F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4431F4u; }
        if (ctx->pc != 0x4431F4u) { return; }
    }
    ctx->pc = 0x4431F4u;
label_4431f4:
    // 0x4431f4: 0xc0775b4  jal         func_1DD6D0
label_4431f8:
    if (ctx->pc == 0x4431F8u) {
        ctx->pc = 0x4431F8u;
            // 0x4431f8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4431FCu;
        goto label_4431fc;
    }
    ctx->pc = 0x4431F4u;
    SET_GPR_U32(ctx, 31, 0x4431FCu);
    ctx->pc = 0x4431F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4431F4u;
            // 0x4431f8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4431FCu; }
        if (ctx->pc != 0x4431FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4431FCu; }
        if (ctx->pc != 0x4431FCu) { return; }
    }
    ctx->pc = 0x4431FCu;
label_4431fc:
    // 0x4431fc: 0xc64202a0  lwc1        $f2, 0x2A0($s2)
    ctx->pc = 0x4431fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_443200:
    // 0x443200: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x443200u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_443204:
    // 0x443204: 0x0  nop
    ctx->pc = 0x443204u;
    // NOP
label_443208:
    // 0x443208: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x443208u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_44320c:
    // 0x44320c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x44320cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_443210:
    // 0x443210: 0x450000ae  bc1f        . + 4 + (0xAE << 2)
label_443214:
    if (ctx->pc == 0x443214u) {
        ctx->pc = 0x443214u;
            // 0x443214: 0xe64002a0  swc1        $f0, 0x2A0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 672), bits); }
        ctx->pc = 0x443218u;
        goto label_443218;
    }
    ctx->pc = 0x443210u;
    {
        const bool branch_taken_0x443210 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x443214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x443210u;
            // 0x443214: 0xe64002a0  swc1        $f0, 0x2A0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 672), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x443210) {
            ctx->pc = 0x4434CCu;
            goto label_4434cc;
        }
    }
    ctx->pc = 0x443218u;
label_443218:
    // 0x443218: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x443218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_44321c:
    // 0x44321c: 0xc110e14  jal         func_443850
label_443220:
    if (ctx->pc == 0x443220u) {
        ctx->pc = 0x443220u;
            // 0x443220: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x443224u;
        goto label_443224;
    }
    ctx->pc = 0x44321Cu;
    SET_GPR_U32(ctx, 31, 0x443224u);
    ctx->pc = 0x443220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44321Cu;
            // 0x443220: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443850u;
    if (runtime->hasFunction(0x443850u)) {
        auto targetFn = runtime->lookupFunction(0x443850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443224u; }
        if (ctx->pc != 0x443224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443850_0x443850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443224u; }
        if (ctx->pc != 0x443224u) { return; }
    }
    ctx->pc = 0x443224u;
label_443224:
    // 0x443224: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x443224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_443228:
    // 0x443228: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x443228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_44322c:
    // 0x44322c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x44322cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_443230:
    // 0x443230: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x443230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_443234:
    // 0x443234: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x443234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_443238:
    // 0x443238: 0xc111004  jal         func_444010
label_44323c:
    if (ctx->pc == 0x44323Cu) {
        ctx->pc = 0x44323Cu;
            // 0x44323c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x443240u;
        goto label_443240;
    }
    ctx->pc = 0x443238u;
    SET_GPR_U32(ctx, 31, 0x443240u);
    ctx->pc = 0x44323Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443238u;
            // 0x44323c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x444010u;
    if (runtime->hasFunction(0x444010u)) {
        auto targetFn = runtime->lookupFunction(0x444010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443240u; }
        if (ctx->pc != 0x443240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00444010_0x444010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443240u; }
        if (ctx->pc != 0x443240u) { return; }
    }
    ctx->pc = 0x443240u;
label_443240:
    // 0x443240: 0x3c023f6d  lui         $v0, 0x3F6D
    ctx->pc = 0x443240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16237 << 16));
label_443244:
    // 0x443244: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x443244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_443248:
    // 0x443248: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x443248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_44324c:
    // 0x44324c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x44324cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_443250:
    // 0x443250: 0xc110dec  jal         func_4437B0
label_443254:
    if (ctx->pc == 0x443254u) {
        ctx->pc = 0x443254u;
            // 0x443254: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x443258u;
        goto label_443258;
    }
    ctx->pc = 0x443250u;
    SET_GPR_U32(ctx, 31, 0x443258u);
    ctx->pc = 0x443254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443250u;
            // 0x443254: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4437B0u;
    if (runtime->hasFunction(0x4437B0u)) {
        auto targetFn = runtime->lookupFunction(0x4437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443258u; }
        if (ctx->pc != 0x443258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004437B0_0x4437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443258u; }
        if (ctx->pc != 0x443258u) { return; }
    }
    ctx->pc = 0x443258u;
label_443258:
    // 0x443258: 0x26440280  addiu       $a0, $s2, 0x280
    ctx->pc = 0x443258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 640));
label_44325c:
    // 0x44325c: 0xc04cc04  jal         func_133010
label_443260:
    if (ctx->pc == 0x443260u) {
        ctx->pc = 0x443260u;
            // 0x443260: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x443264u;
        goto label_443264;
    }
    ctx->pc = 0x44325Cu;
    SET_GPR_U32(ctx, 31, 0x443264u);
    ctx->pc = 0x443260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44325Cu;
            // 0x443260: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443264u; }
        if (ctx->pc != 0x443264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443264u; }
        if (ctx->pc != 0x443264u) { return; }
    }
    ctx->pc = 0x443264u;
label_443264:
    // 0x443264: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x443264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_443268:
    // 0x443268: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x443268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_44326c:
    // 0x44326c: 0xc0dc408  jal         func_371020
label_443270:
    if (ctx->pc == 0x443270u) {
        ctx->pc = 0x443270u;
            // 0x443270: 0xae4202ac  sw          $v0, 0x2AC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 684), GPR_U32(ctx, 2));
        ctx->pc = 0x443274u;
        goto label_443274;
    }
    ctx->pc = 0x44326Cu;
    SET_GPR_U32(ctx, 31, 0x443274u);
    ctx->pc = 0x443270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44326Cu;
            // 0x443270: 0xae4202ac  sw          $v0, 0x2AC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443274u; }
        if (ctx->pc != 0x443274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443274u; }
        if (ctx->pc != 0x443274u) { return; }
    }
    ctx->pc = 0x443274u;
label_443274:
    // 0x443274: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x443274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_443278:
    // 0x443278: 0xc0dd810  jal         func_376040
label_44327c:
    if (ctx->pc == 0x44327Cu) {
        ctx->pc = 0x44327Cu;
            // 0x44327c: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x443280u;
        goto label_443280;
    }
    ctx->pc = 0x443278u;
    SET_GPR_U32(ctx, 31, 0x443280u);
    ctx->pc = 0x44327Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443278u;
            // 0x44327c: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x376040u;
    if (runtime->hasFunction(0x376040u)) {
        auto targetFn = runtime->lookupFunction(0x376040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443280u; }
        if (ctx->pc != 0x443280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376040_0x376040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443280u; }
        if (ctx->pc != 0x443280u) { return; }
    }
    ctx->pc = 0x443280u;
label_443280:
    // 0x443280: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x443280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_443284:
    // 0x443284: 0xc110e90  jal         func_443A40
label_443288:
    if (ctx->pc == 0x443288u) {
        ctx->pc = 0x443288u;
            // 0x443288: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x44328Cu;
        goto label_44328c;
    }
    ctx->pc = 0x443284u;
    SET_GPR_U32(ctx, 31, 0x44328Cu);
    ctx->pc = 0x443288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443284u;
            // 0x443288: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A40u;
    if (runtime->hasFunction(0x443A40u)) {
        auto targetFn = runtime->lookupFunction(0x443A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44328Cu; }
        if (ctx->pc != 0x44328Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A40_0x443a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44328Cu; }
        if (ctx->pc != 0x44328Cu) { return; }
    }
    ctx->pc = 0x44328Cu;
label_44328c:
    // 0x44328c: 0x1000008f  b           . + 4 + (0x8F << 2)
label_443290:
    if (ctx->pc == 0x443290u) {
        ctx->pc = 0x443290u;
            // 0x443290: 0xae4000d8  sw          $zero, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
        ctx->pc = 0x443294u;
        goto label_443294;
    }
    ctx->pc = 0x44328Cu;
    {
        const bool branch_taken_0x44328c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x443290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44328Cu;
            // 0x443290: 0xae4000d8  sw          $zero, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44328c) {
            ctx->pc = 0x4434CCu;
            goto label_4434cc;
        }
    }
    ctx->pc = 0x443294u;
label_443294:
    // 0x443294: 0xc0d1c10  jal         func_347040
label_443298:
    if (ctx->pc == 0x443298u) {
        ctx->pc = 0x443298u;
            // 0x443298: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44329Cu;
        goto label_44329c;
    }
    ctx->pc = 0x443294u;
    SET_GPR_U32(ctx, 31, 0x44329Cu);
    ctx->pc = 0x443298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443294u;
            // 0x443298: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44329Cu; }
        if (ctx->pc != 0x44329Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44329Cu; }
        if (ctx->pc != 0x44329Cu) { return; }
    }
    ctx->pc = 0x44329Cu;
label_44329c:
    // 0x44329c: 0x8e44029c  lw          $a0, 0x29C($s2)
    ctx->pc = 0x44329cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 668)));
label_4432a0:
    // 0x4432a0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4432a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4432a4:
    // 0x4432a4: 0xc122d2c  jal         func_48B4B0
label_4432a8:
    if (ctx->pc == 0x4432A8u) {
        ctx->pc = 0x4432A8u;
            // 0x4432a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4432ACu;
        goto label_4432ac;
    }
    ctx->pc = 0x4432A4u;
    SET_GPR_U32(ctx, 31, 0x4432ACu);
    ctx->pc = 0x4432A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4432A4u;
            // 0x4432a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4432ACu; }
        if (ctx->pc != 0x4432ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4432ACu; }
        if (ctx->pc != 0x4432ACu) { return; }
    }
    ctx->pc = 0x4432ACu;
label_4432ac:
    // 0x4432ac: 0xc110d84  jal         func_443610
label_4432b0:
    if (ctx->pc == 0x4432B0u) {
        ctx->pc = 0x4432B0u;
            // 0x4432b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4432B4u;
        goto label_4432b4;
    }
    ctx->pc = 0x4432ACu;
    SET_GPR_U32(ctx, 31, 0x4432B4u);
    ctx->pc = 0x4432B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4432ACu;
            // 0x4432b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443610u;
    if (runtime->hasFunction(0x443610u)) {
        auto targetFn = runtime->lookupFunction(0x443610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4432B4u; }
        if (ctx->pc != 0x4432B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443610_0x443610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4432B4u; }
        if (ctx->pc != 0x4432B4u) { return; }
    }
    ctx->pc = 0x4432B4u;
label_4432b4:
    // 0x4432b4: 0xc110e58  jal         func_443960
label_4432b8:
    if (ctx->pc == 0x4432B8u) {
        ctx->pc = 0x4432B8u;
            // 0x4432b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4432BCu;
        goto label_4432bc;
    }
    ctx->pc = 0x4432B4u;
    SET_GPR_U32(ctx, 31, 0x4432BCu);
    ctx->pc = 0x4432B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4432B4u;
            // 0x4432b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443960u;
    if (runtime->hasFunction(0x443960u)) {
        auto targetFn = runtime->lookupFunction(0x443960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4432BCu; }
        if (ctx->pc != 0x4432BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443960_0x443960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4432BCu; }
        if (ctx->pc != 0x4432BCu) { return; }
    }
    ctx->pc = 0x4432BCu;
label_4432bc:
    // 0x4432bc: 0xc64102ac  lwc1        $f1, 0x2AC($s2)
    ctx->pc = 0x4432bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4432c0:
    // 0x4432c0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4432c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_4432c4:
    // 0x4432c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4432c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4432c8:
    // 0x4432c8: 0x0  nop
    ctx->pc = 0x4432c8u;
    // NOP
label_4432cc:
    // 0x4432cc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4432ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4432d0:
    // 0x4432d0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4432d4:
    if (ctx->pc == 0x4432D4u) {
        ctx->pc = 0x4432D4u;
            // 0x4432d4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4432D8u;
        goto label_4432d8;
    }
    ctx->pc = 0x4432D0u;
    {
        const bool branch_taken_0x4432d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4432d0) {
            ctx->pc = 0x4432D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4432D0u;
            // 0x4432d4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4432E8u;
            goto label_4432e8;
        }
    }
    ctx->pc = 0x4432D8u;
label_4432d8:
    // 0x4432d8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4432d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4432dc:
    // 0x4432dc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4432dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4432e0:
    // 0x4432e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_4432e4:
    if (ctx->pc == 0x4432E4u) {
        ctx->pc = 0x4432E4u;
            // 0x4432e4: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x4432E8u;
        goto label_4432e8;
    }
    ctx->pc = 0x4432E0u;
    {
        const bool branch_taken_0x4432e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4432E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4432E0u;
            // 0x4432e4: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4432e0) {
            ctx->pc = 0x443300u;
            goto label_443300;
        }
    }
    ctx->pc = 0x4432E8u;
label_4432e8:
    // 0x4432e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4432e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4432ec:
    // 0x4432ec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4432ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4432f0:
    // 0x4432f0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4432f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4432f4:
    // 0x4432f4: 0x0  nop
    ctx->pc = 0x4432f4u;
    // NOP
label_4432f8:
    // 0x4432f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4432f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4432fc:
    // 0x4432fc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x4432fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_443300:
    // 0x443300: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_443304:
    if (ctx->pc == 0x443304u) {
        ctx->pc = 0x443308u;
        goto label_443308;
    }
    ctx->pc = 0x443300u;
    {
        const bool branch_taken_0x443300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x443300) {
            ctx->pc = 0x443330u;
            goto label_443330;
        }
    }
    ctx->pc = 0x443308u;
label_443308:
    // 0x443308: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x443308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_44330c:
    // 0x44330c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x44330cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_443310:
    // 0x443310: 0xc110ef0  jal         func_443BC0
label_443314:
    if (ctx->pc == 0x443314u) {
        ctx->pc = 0x443314u;
            // 0x443314: 0x26460280  addiu       $a2, $s2, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 640));
        ctx->pc = 0x443318u;
        goto label_443318;
    }
    ctx->pc = 0x443310u;
    SET_GPR_U32(ctx, 31, 0x443318u);
    ctx->pc = 0x443314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443310u;
            // 0x443314: 0x26460280  addiu       $a2, $s2, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443BC0u;
    if (runtime->hasFunction(0x443BC0u)) {
        auto targetFn = runtime->lookupFunction(0x443BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443318u; }
        if (ctx->pc != 0x443318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443BC0_0x443bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443318u; }
        if (ctx->pc != 0x443318u) { return; }
    }
    ctx->pc = 0x443318u;
label_443318:
    // 0x443318: 0x3c023f6d  lui         $v0, 0x3F6D
    ctx->pc = 0x443318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16237 << 16));
label_44331c:
    // 0x44331c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x44331cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_443320:
    // 0x443320: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x443320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_443324:
    // 0x443324: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x443324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_443328:
    // 0x443328: 0xc110dec  jal         func_4437B0
label_44332c:
    if (ctx->pc == 0x44332Cu) {
        ctx->pc = 0x44332Cu;
            // 0x44332c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x443330u;
        goto label_443330;
    }
    ctx->pc = 0x443328u;
    SET_GPR_U32(ctx, 31, 0x443330u);
    ctx->pc = 0x44332Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443328u;
            // 0x44332c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4437B0u;
    if (runtime->hasFunction(0x4437B0u)) {
        auto targetFn = runtime->lookupFunction(0x4437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443330u; }
        if (ctx->pc != 0x443330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004437B0_0x4437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443330u; }
        if (ctx->pc != 0x443330u) { return; }
    }
    ctx->pc = 0x443330u;
label_443330:
    // 0x443330: 0xc0775b8  jal         func_1DD6E0
label_443334:
    if (ctx->pc == 0x443334u) {
        ctx->pc = 0x443338u;
        goto label_443338;
    }
    ctx->pc = 0x443330u;
    SET_GPR_U32(ctx, 31, 0x443338u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443338u; }
        if (ctx->pc != 0x443338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443338u; }
        if (ctx->pc != 0x443338u) { return; }
    }
    ctx->pc = 0x443338u;
label_443338:
    // 0x443338: 0xc0775b4  jal         func_1DD6D0
label_44333c:
    if (ctx->pc == 0x44333Cu) {
        ctx->pc = 0x44333Cu;
            // 0x44333c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x443340u;
        goto label_443340;
    }
    ctx->pc = 0x443338u;
    SET_GPR_U32(ctx, 31, 0x443340u);
    ctx->pc = 0x44333Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443338u;
            // 0x44333c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443340u; }
        if (ctx->pc != 0x443340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443340u; }
        if (ctx->pc != 0x443340u) { return; }
    }
    ctx->pc = 0x443340u;
label_443340:
    // 0x443340: 0xc64102ac  lwc1        $f1, 0x2AC($s2)
    ctx->pc = 0x443340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_443344:
    // 0x443344: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x443344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_443348:
    // 0x443348: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x443348u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_44334c:
    // 0x44334c: 0xc04f26c  jal         func_13C9B0
label_443350:
    if (ctx->pc == 0x443350u) {
        ctx->pc = 0x443350u;
            // 0x443350: 0xe64002ac  swc1        $f0, 0x2AC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 684), bits); }
        ctx->pc = 0x443354u;
        goto label_443354;
    }
    ctx->pc = 0x44334Cu;
    SET_GPR_U32(ctx, 31, 0x443354u);
    ctx->pc = 0x443350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44334Cu;
            // 0x443350: 0xe64002ac  swc1        $f0, 0x2AC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 684), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443354u; }
        if (ctx->pc != 0x443354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443354u; }
        if (ctx->pc != 0x443354u) { return; }
    }
    ctx->pc = 0x443354u;
label_443354:
    // 0x443354: 0xc0d1c14  jal         func_347050
label_443358:
    if (ctx->pc == 0x443358u) {
        ctx->pc = 0x443358u;
            // 0x443358: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44335Cu;
        goto label_44335c;
    }
    ctx->pc = 0x443354u;
    SET_GPR_U32(ctx, 31, 0x44335Cu);
    ctx->pc = 0x443358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443354u;
            // 0x443358: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44335Cu; }
        if (ctx->pc != 0x44335Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44335Cu; }
        if (ctx->pc != 0x44335Cu) { return; }
    }
    ctx->pc = 0x44335Cu;
label_44335c:
    // 0x44335c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x44335cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_443360:
    // 0x443360: 0xc04f278  jal         func_13C9E0
label_443364:
    if (ctx->pc == 0x443364u) {
        ctx->pc = 0x443364u;
            // 0x443364: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x443368u;
        goto label_443368;
    }
    ctx->pc = 0x443360u;
    SET_GPR_U32(ctx, 31, 0x443368u);
    ctx->pc = 0x443364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443360u;
            // 0x443364: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443368u; }
        if (ctx->pc != 0x443368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443368u; }
        if (ctx->pc != 0x443368u) { return; }
    }
    ctx->pc = 0x443368u;
label_443368:
    // 0x443368: 0xc0d1c10  jal         func_347040
label_44336c:
    if (ctx->pc == 0x44336Cu) {
        ctx->pc = 0x44336Cu;
            // 0x44336c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x443370u;
        goto label_443370;
    }
    ctx->pc = 0x443368u;
    SET_GPR_U32(ctx, 31, 0x443370u);
    ctx->pc = 0x44336Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443368u;
            // 0x44336c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443370u; }
        if (ctx->pc != 0x443370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443370u; }
        if (ctx->pc != 0x443370u) { return; }
    }
    ctx->pc = 0x443370u;
label_443370:
    // 0x443370: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x443370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_443374:
    // 0x443374: 0xc04ce80  jal         func_133A00
label_443378:
    if (ctx->pc == 0x443378u) {
        ctx->pc = 0x443378u;
            // 0x443378: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x44337Cu;
        goto label_44337c;
    }
    ctx->pc = 0x443374u;
    SET_GPR_U32(ctx, 31, 0x44337Cu);
    ctx->pc = 0x443378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443374u;
            // 0x443378: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44337Cu; }
        if (ctx->pc != 0x44337Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44337Cu; }
        if (ctx->pc != 0x44337Cu) { return; }
    }
    ctx->pc = 0x44337Cu;
label_44337c:
    // 0x44337c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x44337cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_443380:
    // 0x443380: 0xc04ccf4  jal         func_1333D0
label_443384:
    if (ctx->pc == 0x443384u) {
        ctx->pc = 0x443384u;
            // 0x443384: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x443388u;
        goto label_443388;
    }
    ctx->pc = 0x443380u;
    SET_GPR_U32(ctx, 31, 0x443388u);
    ctx->pc = 0x443384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443380u;
            // 0x443384: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443388u; }
        if (ctx->pc != 0x443388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443388u; }
        if (ctx->pc != 0x443388u) { return; }
    }
    ctx->pc = 0x443388u;
label_443388:
    // 0x443388: 0xc077264  jal         func_1DC990
label_44338c:
    if (ctx->pc == 0x44338Cu) {
        ctx->pc = 0x44338Cu;
            // 0x44338c: 0x8e440290  lw          $a0, 0x290($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 656)));
        ctx->pc = 0x443390u;
        goto label_443390;
    }
    ctx->pc = 0x443388u;
    SET_GPR_U32(ctx, 31, 0x443390u);
    ctx->pc = 0x44338Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443388u;
            // 0x44338c: 0x8e440290  lw          $a0, 0x290($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 656)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443390u; }
        if (ctx->pc != 0x443390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443390u; }
        if (ctx->pc != 0x443390u) { return; }
    }
    ctx->pc = 0x443390u;
label_443390:
    // 0x443390: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x443390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_443394:
    // 0x443394: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x443394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_443398:
    // 0x443398: 0xc04cca0  jal         func_133280
label_44339c:
    if (ctx->pc == 0x44339Cu) {
        ctx->pc = 0x44339Cu;
            // 0x44339c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4433A0u;
        goto label_4433a0;
    }
    ctx->pc = 0x443398u;
    SET_GPR_U32(ctx, 31, 0x4433A0u);
    ctx->pc = 0x44339Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443398u;
            // 0x44339c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4433A0u; }
        if (ctx->pc != 0x4433A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4433A0u; }
        if (ctx->pc != 0x4433A0u) { return; }
    }
    ctx->pc = 0x4433A0u;
label_4433a0:
    // 0x4433a0: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x4433a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4433a4:
    // 0x4433a4: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x4433a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
label_4433a8:
    // 0x4433a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4433a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4433ac:
    // 0x4433ac: 0x0  nop
    ctx->pc = 0x4433acu;
    // NOP
label_4433b0:
    // 0x4433b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4433b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4433b4:
    // 0x4433b4: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_4433b8:
    if (ctx->pc == 0x4433B8u) {
        ctx->pc = 0x4433B8u;
            // 0x4433b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4433BCu;
        goto label_4433bc;
    }
    ctx->pc = 0x4433B4u;
    {
        const bool branch_taken_0x4433b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4433b4) {
            ctx->pc = 0x4433B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4433B4u;
            // 0x4433b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4433D8u;
            goto label_4433d8;
        }
    }
    ctx->pc = 0x4433BCu;
label_4433bc:
    // 0x4433bc: 0xc110f34  jal         func_443CD0
label_4433c0:
    if (ctx->pc == 0x4433C0u) {
        ctx->pc = 0x4433C0u;
            // 0x4433c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4433C4u;
        goto label_4433c4;
    }
    ctx->pc = 0x4433BCu;
    SET_GPR_U32(ctx, 31, 0x4433C4u);
    ctx->pc = 0x4433C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4433BCu;
            // 0x4433c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443CD0u;
    if (runtime->hasFunction(0x443CD0u)) {
        auto targetFn = runtime->lookupFunction(0x443CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4433C4u; }
        if (ctx->pc != 0x4433C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443CD0_0x443cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4433C4u; }
        if (ctx->pc != 0x4433C4u) { return; }
    }
    ctx->pc = 0x4433C4u;
label_4433c4:
    // 0x4433c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4433c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4433c8:
    // 0x4433c8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4433c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4433cc:
    // 0x4433cc: 0xc110e90  jal         func_443A40
label_4433d0:
    if (ctx->pc == 0x4433D0u) {
        ctx->pc = 0x4433D0u;
            // 0x4433d0: 0xae4000d8  sw          $zero, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
        ctx->pc = 0x4433D4u;
        goto label_4433d4;
    }
    ctx->pc = 0x4433CCu;
    SET_GPR_U32(ctx, 31, 0x4433D4u);
    ctx->pc = 0x4433D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4433CCu;
            // 0x4433d0: 0xae4000d8  sw          $zero, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A40u;
    if (runtime->hasFunction(0x443A40u)) {
        auto targetFn = runtime->lookupFunction(0x443A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4433D4u; }
        if (ctx->pc != 0x4433D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A40_0x443a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4433D4u; }
        if (ctx->pc != 0x4433D4u) { return; }
    }
    ctx->pc = 0x4433D4u;
label_4433d4:
    // 0x4433d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4433d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4433d8:
    // 0x4433d8: 0xc110edc  jal         func_443B70
label_4433dc:
    if (ctx->pc == 0x4433DCu) {
        ctx->pc = 0x4433E0u;
        goto label_4433e0;
    }
    ctx->pc = 0x4433D8u;
    SET_GPR_U32(ctx, 31, 0x4433E0u);
    ctx->pc = 0x443B70u;
    if (runtime->hasFunction(0x443B70u)) {
        auto targetFn = runtime->lookupFunction(0x443B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4433E0u; }
        if (ctx->pc != 0x4433E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443B70_0x443b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4433E0u; }
        if (ctx->pc != 0x4433E0u) { return; }
    }
    ctx->pc = 0x4433E0u;
label_4433e0:
    // 0x4433e0: 0x1000003a  b           . + 4 + (0x3A << 2)
label_4433e4:
    if (ctx->pc == 0x4433E4u) {
        ctx->pc = 0x4433E8u;
        goto label_4433e8;
    }
    ctx->pc = 0x4433E0u;
    {
        const bool branch_taken_0x4433e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4433e0) {
            ctx->pc = 0x4434CCu;
            goto label_4434cc;
        }
    }
    ctx->pc = 0x4433E8u;
label_4433e8:
    // 0x4433e8: 0xc110d84  jal         func_443610
label_4433ec:
    if (ctx->pc == 0x4433ECu) {
        ctx->pc = 0x4433ECu;
            // 0x4433ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4433F0u;
        goto label_4433f0;
    }
    ctx->pc = 0x4433E8u;
    SET_GPR_U32(ctx, 31, 0x4433F0u);
    ctx->pc = 0x4433ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4433E8u;
            // 0x4433ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443610u;
    if (runtime->hasFunction(0x443610u)) {
        auto targetFn = runtime->lookupFunction(0x443610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4433F0u; }
        if (ctx->pc != 0x4433F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443610_0x443610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4433F0u; }
        if (ctx->pc != 0x4433F0u) { return; }
    }
    ctx->pc = 0x4433F0u;
label_4433f0:
    // 0x4433f0: 0xc110e58  jal         func_443960
label_4433f4:
    if (ctx->pc == 0x4433F4u) {
        ctx->pc = 0x4433F4u;
            // 0x4433f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4433F8u;
        goto label_4433f8;
    }
    ctx->pc = 0x4433F0u;
    SET_GPR_U32(ctx, 31, 0x4433F8u);
    ctx->pc = 0x4433F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4433F0u;
            // 0x4433f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443960u;
    if (runtime->hasFunction(0x443960u)) {
        auto targetFn = runtime->lookupFunction(0x443960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4433F8u; }
        if (ctx->pc != 0x4433F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443960_0x443960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4433F8u; }
        if (ctx->pc != 0x4433F8u) { return; }
    }
    ctx->pc = 0x4433F8u;
label_4433f8:
    // 0x4433f8: 0xc0d1c10  jal         func_347040
label_4433fc:
    if (ctx->pc == 0x4433FCu) {
        ctx->pc = 0x4433FCu;
            // 0x4433fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x443400u;
        goto label_443400;
    }
    ctx->pc = 0x4433F8u;
    SET_GPR_U32(ctx, 31, 0x443400u);
    ctx->pc = 0x4433FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4433F8u;
            // 0x4433fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443400u; }
        if (ctx->pc != 0x443400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443400u; }
        if (ctx->pc != 0x443400u) { return; }
    }
    ctx->pc = 0x443400u;
label_443400:
    // 0x443400: 0x26440270  addiu       $a0, $s2, 0x270
    ctx->pc = 0x443400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 624));
label_443404:
    // 0x443404: 0xc04cc34  jal         func_1330D0
label_443408:
    if (ctx->pc == 0x443408u) {
        ctx->pc = 0x443408u;
            // 0x443408: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44340Cu;
        goto label_44340c;
    }
    ctx->pc = 0x443404u;
    SET_GPR_U32(ctx, 31, 0x44340Cu);
    ctx->pc = 0x443408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443404u;
            // 0x443408: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44340Cu; }
        if (ctx->pc != 0x44340Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44340Cu; }
        if (ctx->pc != 0x44340Cu) { return; }
    }
    ctx->pc = 0x44340Cu;
label_44340c:
    // 0x44340c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x44340cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_443410:
    // 0x443410: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x443410u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_443414:
    // 0x443414: 0x0  nop
    ctx->pc = 0x443414u;
    // NOP
label_443418:
    // 0x443418: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x443418u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_44341c:
    // 0x44341c: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
label_443420:
    if (ctx->pc == 0x443420u) {
        ctx->pc = 0x443424u;
        goto label_443424;
    }
    ctx->pc = 0x44341Cu;
    {
        const bool branch_taken_0x44341c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x44341c) {
            ctx->pc = 0x4434CCu;
            goto label_4434cc;
        }
    }
    ctx->pc = 0x443424u;
label_443424:
    // 0x443424: 0xc110d60  jal         func_443580
label_443428:
    if (ctx->pc == 0x443428u) {
        ctx->pc = 0x443428u;
            // 0x443428: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44342Cu;
        goto label_44342c;
    }
    ctx->pc = 0x443424u;
    SET_GPR_U32(ctx, 31, 0x44342Cu);
    ctx->pc = 0x443428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443424u;
            // 0x443428: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443580u;
    if (runtime->hasFunction(0x443580u)) {
        auto targetFn = runtime->lookupFunction(0x443580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44342Cu; }
        if (ctx->pc != 0x44342Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443580_0x443580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44342Cu; }
        if (ctx->pc != 0x44342Cu) { return; }
    }
    ctx->pc = 0x44342Cu;
label_44342c:
    // 0x44342c: 0x8e44029c  lw          $a0, 0x29C($s2)
    ctx->pc = 0x44342cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 668)));
label_443430:
    // 0x443430: 0xc122c5c  jal         func_48B170
label_443434:
    if (ctx->pc == 0x443434u) {
        ctx->pc = 0x443434u;
            // 0x443434: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x443438u;
        goto label_443438;
    }
    ctx->pc = 0x443430u;
    SET_GPR_U32(ctx, 31, 0x443438u);
    ctx->pc = 0x443434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443430u;
            // 0x443434: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443438u; }
        if (ctx->pc != 0x443438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B170_0x48b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443438u; }
        if (ctx->pc != 0x443438u) { return; }
    }
    ctx->pc = 0x443438u;
label_443438:
    // 0x443438: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x443438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_44343c:
    // 0x44343c: 0xc110e90  jal         func_443A40
label_443440:
    if (ctx->pc == 0x443440u) {
        ctx->pc = 0x443440u;
            // 0x443440: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x443444u;
        goto label_443444;
    }
    ctx->pc = 0x44343Cu;
    SET_GPR_U32(ctx, 31, 0x443444u);
    ctx->pc = 0x443440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44343Cu;
            // 0x443440: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A40u;
    if (runtime->hasFunction(0x443A40u)) {
        auto targetFn = runtime->lookupFunction(0x443A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443444u; }
        if (ctx->pc != 0x443444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A40_0x443a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443444u; }
        if (ctx->pc != 0x443444u) { return; }
    }
    ctx->pc = 0x443444u;
label_443444:
    // 0x443444: 0x10000021  b           . + 4 + (0x21 << 2)
label_443448:
    if (ctx->pc == 0x443448u) {
        ctx->pc = 0x44344Cu;
        goto label_44344c;
    }
    ctx->pc = 0x443444u;
    {
        const bool branch_taken_0x443444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x443444) {
            ctx->pc = 0x4434CCu;
            goto label_4434cc;
        }
    }
    ctx->pc = 0x44344Cu;
label_44344c:
    // 0x44344c: 0xc110d84  jal         func_443610
label_443450:
    if (ctx->pc == 0x443450u) {
        ctx->pc = 0x443450u;
            // 0x443450: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x443454u;
        goto label_443454;
    }
    ctx->pc = 0x44344Cu;
    SET_GPR_U32(ctx, 31, 0x443454u);
    ctx->pc = 0x443450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44344Cu;
            // 0x443450: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443610u;
    if (runtime->hasFunction(0x443610u)) {
        auto targetFn = runtime->lookupFunction(0x443610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443454u; }
        if (ctx->pc != 0x443454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443610_0x443610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443454u; }
        if (ctx->pc != 0x443454u) { return; }
    }
    ctx->pc = 0x443454u;
label_443454:
    // 0x443454: 0xc110e58  jal         func_443960
label_443458:
    if (ctx->pc == 0x443458u) {
        ctx->pc = 0x443458u;
            // 0x443458: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44345Cu;
        goto label_44345c;
    }
    ctx->pc = 0x443454u;
    SET_GPR_U32(ctx, 31, 0x44345Cu);
    ctx->pc = 0x443458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443454u;
            // 0x443458: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443960u;
    if (runtime->hasFunction(0x443960u)) {
        auto targetFn = runtime->lookupFunction(0x443960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44345Cu; }
        if (ctx->pc != 0x44345Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443960_0x443960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44345Cu; }
        if (ctx->pc != 0x44345Cu) { return; }
    }
    ctx->pc = 0x44345Cu;
label_44345c:
    // 0x44345c: 0xc0dc408  jal         func_371020
label_443460:
    if (ctx->pc == 0x443460u) {
        ctx->pc = 0x443460u;
            // 0x443460: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x443464u;
        goto label_443464;
    }
    ctx->pc = 0x44345Cu;
    SET_GPR_U32(ctx, 31, 0x443464u);
    ctx->pc = 0x443460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44345Cu;
            // 0x443460: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443464u; }
        if (ctx->pc != 0x443464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443464u; }
        if (ctx->pc != 0x443464u) { return; }
    }
    ctx->pc = 0x443464u;
label_443464:
    // 0x443464: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x443464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_443468:
    // 0x443468: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x443468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_44346c:
    // 0x44346c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x44346cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_443470:
    // 0x443470: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x443470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_443474:
    // 0x443474: 0xc0d88a4  jal         func_362290
label_443478:
    if (ctx->pc == 0x443478u) {
        ctx->pc = 0x443478u;
            // 0x443478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44347Cu;
        goto label_44347c;
    }
    ctx->pc = 0x443474u;
    SET_GPR_U32(ctx, 31, 0x44347Cu);
    ctx->pc = 0x443478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443474u;
            // 0x443478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362290u;
    if (runtime->hasFunction(0x362290u)) {
        auto targetFn = runtime->lookupFunction(0x362290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44347Cu; }
        if (ctx->pc != 0x44347Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362290_0x362290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44347Cu; }
        if (ctx->pc != 0x44347Cu) { return; }
    }
    ctx->pc = 0x44347Cu;
label_44347c:
    // 0x44347c: 0xc0dd890  jal         func_376240
label_443480:
    if (ctx->pc == 0x443480u) {
        ctx->pc = 0x443480u;
            // 0x443480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x443484u;
        goto label_443484;
    }
    ctx->pc = 0x44347Cu;
    SET_GPR_U32(ctx, 31, 0x443484u);
    ctx->pc = 0x443480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44347Cu;
            // 0x443480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x376240u;
    if (runtime->hasFunction(0x376240u)) {
        auto targetFn = runtime->lookupFunction(0x376240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443484u; }
        if (ctx->pc != 0x443484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376240_0x376240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443484u; }
        if (ctx->pc != 0x443484u) { return; }
    }
    ctx->pc = 0x443484u;
label_443484:
    // 0x443484: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_443488:
    if (ctx->pc == 0x443488u) {
        ctx->pc = 0x44348Cu;
        goto label_44348c;
    }
    ctx->pc = 0x443484u;
    {
        const bool branch_taken_0x443484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x443484) {
            ctx->pc = 0x4434CCu;
            goto label_4434cc;
        }
    }
    ctx->pc = 0x44348Cu;
label_44348c:
    // 0x44348c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x44348cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_443490:
    // 0x443490: 0xc110d5c  jal         func_443570
label_443494:
    if (ctx->pc == 0x443494u) {
        ctx->pc = 0x443494u;
            // 0x443494: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x443498u;
        goto label_443498;
    }
    ctx->pc = 0x443490u;
    SET_GPR_U32(ctx, 31, 0x443498u);
    ctx->pc = 0x443494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443490u;
            // 0x443494: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443570u;
    if (runtime->hasFunction(0x443570u)) {
        auto targetFn = runtime->lookupFunction(0x443570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443498u; }
        if (ctx->pc != 0x443498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443570_0x443570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443498u; }
        if (ctx->pc != 0x443498u) { return; }
    }
    ctx->pc = 0x443498u;
label_443498:
    // 0x443498: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x443498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_44349c:
    // 0x44349c: 0xc110e90  jal         func_443A40
label_4434a0:
    if (ctx->pc == 0x4434A0u) {
        ctx->pc = 0x4434A0u;
            // 0x4434a0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x4434A4u;
        goto label_4434a4;
    }
    ctx->pc = 0x44349Cu;
    SET_GPR_U32(ctx, 31, 0x4434A4u);
    ctx->pc = 0x4434A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44349Cu;
            // 0x4434a0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A40u;
    if (runtime->hasFunction(0x443A40u)) {
        auto targetFn = runtime->lookupFunction(0x443A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4434A4u; }
        if (ctx->pc != 0x4434A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A40_0x443a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4434A4u; }
        if (ctx->pc != 0x4434A4u) { return; }
    }
    ctx->pc = 0x4434A4u;
label_4434a4:
    // 0x4434a4: 0x8e4402f0  lw          $a0, 0x2F0($s2)
    ctx->pc = 0x4434a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 752)));
label_4434a8:
    // 0x4434a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4434a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4434ac:
    // 0x4434ac: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4434acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4434b0:
    // 0x4434b0: 0x320f809  jalr        $t9
label_4434b4:
    if (ctx->pc == 0x4434B4u) {
        ctx->pc = 0x4434B8u;
        goto label_4434b8;
    }
    ctx->pc = 0x4434B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4434B8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4434B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4434B8u; }
            if (ctx->pc != 0x4434B8u) { return; }
        }
        }
    }
    ctx->pc = 0x4434B8u;
label_4434b8:
    // 0x4434b8: 0x8e4402f4  lw          $a0, 0x2F4($s2)
    ctx->pc = 0x4434b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 756)));
label_4434bc:
    // 0x4434bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4434bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4434c0:
    // 0x4434c0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4434c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4434c4:
    // 0x4434c4: 0x320f809  jalr        $t9
label_4434c8:
    if (ctx->pc == 0x4434C8u) {
        ctx->pc = 0x4434CCu;
        goto label_4434cc;
    }
    ctx->pc = 0x4434C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4434CCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4434CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4434CCu; }
            if (ctx->pc != 0x4434CCu) { return; }
        }
        }
    }
    ctx->pc = 0x4434CCu;
label_4434cc:
    // 0x4434cc: 0x8e4502f0  lw          $a1, 0x2F0($s2)
    ctx->pc = 0x4434ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 752)));
label_4434d0:
    // 0x4434d0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x4434d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4434d4:
    // 0x4434d4: 0x94a40064  lhu         $a0, 0x64($a1)
    ctx->pc = 0x4434d4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 100)));
label_4434d8:
    // 0x4434d8: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x4434d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_4434dc:
    // 0x4434dc: 0xa4a40064  sh          $a0, 0x64($a1)
    ctx->pc = 0x4434dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 100), (uint16_t)GPR_U32(ctx, 4));
label_4434e0:
    // 0x4434e0: 0x8e4502f4  lw          $a1, 0x2F4($s2)
    ctx->pc = 0x4434e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 756)));
label_4434e4:
    // 0x4434e4: 0x94a40064  lhu         $a0, 0x64($a1)
    ctx->pc = 0x4434e4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 100)));
label_4434e8:
    // 0x4434e8: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x4434e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_4434ec:
    // 0x4434ec: 0xa4a40064  sh          $a0, 0x64($a1)
    ctx->pc = 0x4434ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 100), (uint16_t)GPR_U32(ctx, 4));
label_4434f0:
    // 0x4434f0: 0x8e4400d4  lw          $a0, 0xD4($s2)
    ctx->pc = 0x4434f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_4434f4:
    // 0x4434f4: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
label_4434f8:
    if (ctx->pc == 0x4434F8u) {
        ctx->pc = 0x4434FCu;
        goto label_4434fc;
    }
    ctx->pc = 0x4434F4u;
    {
        const bool branch_taken_0x4434f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4434f4) {
            ctx->pc = 0x443544u;
            goto label_443544;
        }
    }
    ctx->pc = 0x4434FCu;
label_4434fc:
    // 0x4434fc: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x4434fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_443500:
    // 0x443500: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x443500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_443504:
    // 0x443504: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x443504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_443508:
    // 0x443508: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x443508u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_44350c:
    // 0x44350c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x44350cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_443510:
    // 0x443510: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x443510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_443514:
    // 0x443514: 0xc08bff0  jal         func_22FFC0
label_443518:
    if (ctx->pc == 0x443518u) {
        ctx->pc = 0x443518u;
            // 0x443518: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44351Cu;
        goto label_44351c;
    }
    ctx->pc = 0x443514u;
    SET_GPR_U32(ctx, 31, 0x44351Cu);
    ctx->pc = 0x443518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443514u;
            // 0x443518: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44351Cu; }
        if (ctx->pc != 0x44351Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44351Cu; }
        if (ctx->pc != 0x44351Cu) { return; }
    }
    ctx->pc = 0x44351Cu;
label_44351c:
    // 0x44351c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x44351cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_443520:
    // 0x443520: 0xae4300d0  sw          $v1, 0xD0($s2)
    ctx->pc = 0x443520u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 3));
label_443524:
    // 0x443524: 0x8e4402f0  lw          $a0, 0x2F0($s2)
    ctx->pc = 0x443524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 752)));
label_443528:
    // 0x443528: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x443528u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_44352c:
    // 0x44352c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x44352cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_443530:
    // 0x443530: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x443530u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_443534:
    // 0x443534: 0x8e4402f4  lw          $a0, 0x2F4($s2)
    ctx->pc = 0x443534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 756)));
label_443538:
    // 0x443538: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x443538u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_44353c:
    // 0x44353c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x44353cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_443540:
    // 0x443540: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x443540u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_443544:
    // 0x443544: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x443544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_443548:
    // 0x443548: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x443548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_44354c:
    // 0x44354c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x44354cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_443550:
    // 0x443550: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x443550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_443554:
    // 0x443554: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x443554u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_443558:
    // 0x443558: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x443558u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44355c:
    // 0x44355c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x44355cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_443560:
    // 0x443560: 0x3e00008  jr          $ra
label_443564:
    if (ctx->pc == 0x443564u) {
        ctx->pc = 0x443564u;
            // 0x443564: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x443568u;
        goto label_443568;
    }
    ctx->pc = 0x443560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x443560u;
            // 0x443564: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x443568u;
label_443568:
    // 0x443568: 0x0  nop
    ctx->pc = 0x443568u;
    // NOP
label_44356c:
    // 0x44356c: 0x0  nop
    ctx->pc = 0x44356cu;
    // NOP
}
