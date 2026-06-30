#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C8780
// Address: 0x3c8780 - 0x3c8d70
void sub_003C8780_0x3c8780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C8780_0x3c8780");
#endif

    switch (ctx->pc) {
        case 0x3c8780u: goto label_3c8780;
        case 0x3c8784u: goto label_3c8784;
        case 0x3c8788u: goto label_3c8788;
        case 0x3c878cu: goto label_3c878c;
        case 0x3c8790u: goto label_3c8790;
        case 0x3c8794u: goto label_3c8794;
        case 0x3c8798u: goto label_3c8798;
        case 0x3c879cu: goto label_3c879c;
        case 0x3c87a0u: goto label_3c87a0;
        case 0x3c87a4u: goto label_3c87a4;
        case 0x3c87a8u: goto label_3c87a8;
        case 0x3c87acu: goto label_3c87ac;
        case 0x3c87b0u: goto label_3c87b0;
        case 0x3c87b4u: goto label_3c87b4;
        case 0x3c87b8u: goto label_3c87b8;
        case 0x3c87bcu: goto label_3c87bc;
        case 0x3c87c0u: goto label_3c87c0;
        case 0x3c87c4u: goto label_3c87c4;
        case 0x3c87c8u: goto label_3c87c8;
        case 0x3c87ccu: goto label_3c87cc;
        case 0x3c87d0u: goto label_3c87d0;
        case 0x3c87d4u: goto label_3c87d4;
        case 0x3c87d8u: goto label_3c87d8;
        case 0x3c87dcu: goto label_3c87dc;
        case 0x3c87e0u: goto label_3c87e0;
        case 0x3c87e4u: goto label_3c87e4;
        case 0x3c87e8u: goto label_3c87e8;
        case 0x3c87ecu: goto label_3c87ec;
        case 0x3c87f0u: goto label_3c87f0;
        case 0x3c87f4u: goto label_3c87f4;
        case 0x3c87f8u: goto label_3c87f8;
        case 0x3c87fcu: goto label_3c87fc;
        case 0x3c8800u: goto label_3c8800;
        case 0x3c8804u: goto label_3c8804;
        case 0x3c8808u: goto label_3c8808;
        case 0x3c880cu: goto label_3c880c;
        case 0x3c8810u: goto label_3c8810;
        case 0x3c8814u: goto label_3c8814;
        case 0x3c8818u: goto label_3c8818;
        case 0x3c881cu: goto label_3c881c;
        case 0x3c8820u: goto label_3c8820;
        case 0x3c8824u: goto label_3c8824;
        case 0x3c8828u: goto label_3c8828;
        case 0x3c882cu: goto label_3c882c;
        case 0x3c8830u: goto label_3c8830;
        case 0x3c8834u: goto label_3c8834;
        case 0x3c8838u: goto label_3c8838;
        case 0x3c883cu: goto label_3c883c;
        case 0x3c8840u: goto label_3c8840;
        case 0x3c8844u: goto label_3c8844;
        case 0x3c8848u: goto label_3c8848;
        case 0x3c884cu: goto label_3c884c;
        case 0x3c8850u: goto label_3c8850;
        case 0x3c8854u: goto label_3c8854;
        case 0x3c8858u: goto label_3c8858;
        case 0x3c885cu: goto label_3c885c;
        case 0x3c8860u: goto label_3c8860;
        case 0x3c8864u: goto label_3c8864;
        case 0x3c8868u: goto label_3c8868;
        case 0x3c886cu: goto label_3c886c;
        case 0x3c8870u: goto label_3c8870;
        case 0x3c8874u: goto label_3c8874;
        case 0x3c8878u: goto label_3c8878;
        case 0x3c887cu: goto label_3c887c;
        case 0x3c8880u: goto label_3c8880;
        case 0x3c8884u: goto label_3c8884;
        case 0x3c8888u: goto label_3c8888;
        case 0x3c888cu: goto label_3c888c;
        case 0x3c8890u: goto label_3c8890;
        case 0x3c8894u: goto label_3c8894;
        case 0x3c8898u: goto label_3c8898;
        case 0x3c889cu: goto label_3c889c;
        case 0x3c88a0u: goto label_3c88a0;
        case 0x3c88a4u: goto label_3c88a4;
        case 0x3c88a8u: goto label_3c88a8;
        case 0x3c88acu: goto label_3c88ac;
        case 0x3c88b0u: goto label_3c88b0;
        case 0x3c88b4u: goto label_3c88b4;
        case 0x3c88b8u: goto label_3c88b8;
        case 0x3c88bcu: goto label_3c88bc;
        case 0x3c88c0u: goto label_3c88c0;
        case 0x3c88c4u: goto label_3c88c4;
        case 0x3c88c8u: goto label_3c88c8;
        case 0x3c88ccu: goto label_3c88cc;
        case 0x3c88d0u: goto label_3c88d0;
        case 0x3c88d4u: goto label_3c88d4;
        case 0x3c88d8u: goto label_3c88d8;
        case 0x3c88dcu: goto label_3c88dc;
        case 0x3c88e0u: goto label_3c88e0;
        case 0x3c88e4u: goto label_3c88e4;
        case 0x3c88e8u: goto label_3c88e8;
        case 0x3c88ecu: goto label_3c88ec;
        case 0x3c88f0u: goto label_3c88f0;
        case 0x3c88f4u: goto label_3c88f4;
        case 0x3c88f8u: goto label_3c88f8;
        case 0x3c88fcu: goto label_3c88fc;
        case 0x3c8900u: goto label_3c8900;
        case 0x3c8904u: goto label_3c8904;
        case 0x3c8908u: goto label_3c8908;
        case 0x3c890cu: goto label_3c890c;
        case 0x3c8910u: goto label_3c8910;
        case 0x3c8914u: goto label_3c8914;
        case 0x3c8918u: goto label_3c8918;
        case 0x3c891cu: goto label_3c891c;
        case 0x3c8920u: goto label_3c8920;
        case 0x3c8924u: goto label_3c8924;
        case 0x3c8928u: goto label_3c8928;
        case 0x3c892cu: goto label_3c892c;
        case 0x3c8930u: goto label_3c8930;
        case 0x3c8934u: goto label_3c8934;
        case 0x3c8938u: goto label_3c8938;
        case 0x3c893cu: goto label_3c893c;
        case 0x3c8940u: goto label_3c8940;
        case 0x3c8944u: goto label_3c8944;
        case 0x3c8948u: goto label_3c8948;
        case 0x3c894cu: goto label_3c894c;
        case 0x3c8950u: goto label_3c8950;
        case 0x3c8954u: goto label_3c8954;
        case 0x3c8958u: goto label_3c8958;
        case 0x3c895cu: goto label_3c895c;
        case 0x3c8960u: goto label_3c8960;
        case 0x3c8964u: goto label_3c8964;
        case 0x3c8968u: goto label_3c8968;
        case 0x3c896cu: goto label_3c896c;
        case 0x3c8970u: goto label_3c8970;
        case 0x3c8974u: goto label_3c8974;
        case 0x3c8978u: goto label_3c8978;
        case 0x3c897cu: goto label_3c897c;
        case 0x3c8980u: goto label_3c8980;
        case 0x3c8984u: goto label_3c8984;
        case 0x3c8988u: goto label_3c8988;
        case 0x3c898cu: goto label_3c898c;
        case 0x3c8990u: goto label_3c8990;
        case 0x3c8994u: goto label_3c8994;
        case 0x3c8998u: goto label_3c8998;
        case 0x3c899cu: goto label_3c899c;
        case 0x3c89a0u: goto label_3c89a0;
        case 0x3c89a4u: goto label_3c89a4;
        case 0x3c89a8u: goto label_3c89a8;
        case 0x3c89acu: goto label_3c89ac;
        case 0x3c89b0u: goto label_3c89b0;
        case 0x3c89b4u: goto label_3c89b4;
        case 0x3c89b8u: goto label_3c89b8;
        case 0x3c89bcu: goto label_3c89bc;
        case 0x3c89c0u: goto label_3c89c0;
        case 0x3c89c4u: goto label_3c89c4;
        case 0x3c89c8u: goto label_3c89c8;
        case 0x3c89ccu: goto label_3c89cc;
        case 0x3c89d0u: goto label_3c89d0;
        case 0x3c89d4u: goto label_3c89d4;
        case 0x3c89d8u: goto label_3c89d8;
        case 0x3c89dcu: goto label_3c89dc;
        case 0x3c89e0u: goto label_3c89e0;
        case 0x3c89e4u: goto label_3c89e4;
        case 0x3c89e8u: goto label_3c89e8;
        case 0x3c89ecu: goto label_3c89ec;
        case 0x3c89f0u: goto label_3c89f0;
        case 0x3c89f4u: goto label_3c89f4;
        case 0x3c89f8u: goto label_3c89f8;
        case 0x3c89fcu: goto label_3c89fc;
        case 0x3c8a00u: goto label_3c8a00;
        case 0x3c8a04u: goto label_3c8a04;
        case 0x3c8a08u: goto label_3c8a08;
        case 0x3c8a0cu: goto label_3c8a0c;
        case 0x3c8a10u: goto label_3c8a10;
        case 0x3c8a14u: goto label_3c8a14;
        case 0x3c8a18u: goto label_3c8a18;
        case 0x3c8a1cu: goto label_3c8a1c;
        case 0x3c8a20u: goto label_3c8a20;
        case 0x3c8a24u: goto label_3c8a24;
        case 0x3c8a28u: goto label_3c8a28;
        case 0x3c8a2cu: goto label_3c8a2c;
        case 0x3c8a30u: goto label_3c8a30;
        case 0x3c8a34u: goto label_3c8a34;
        case 0x3c8a38u: goto label_3c8a38;
        case 0x3c8a3cu: goto label_3c8a3c;
        case 0x3c8a40u: goto label_3c8a40;
        case 0x3c8a44u: goto label_3c8a44;
        case 0x3c8a48u: goto label_3c8a48;
        case 0x3c8a4cu: goto label_3c8a4c;
        case 0x3c8a50u: goto label_3c8a50;
        case 0x3c8a54u: goto label_3c8a54;
        case 0x3c8a58u: goto label_3c8a58;
        case 0x3c8a5cu: goto label_3c8a5c;
        case 0x3c8a60u: goto label_3c8a60;
        case 0x3c8a64u: goto label_3c8a64;
        case 0x3c8a68u: goto label_3c8a68;
        case 0x3c8a6cu: goto label_3c8a6c;
        case 0x3c8a70u: goto label_3c8a70;
        case 0x3c8a74u: goto label_3c8a74;
        case 0x3c8a78u: goto label_3c8a78;
        case 0x3c8a7cu: goto label_3c8a7c;
        case 0x3c8a80u: goto label_3c8a80;
        case 0x3c8a84u: goto label_3c8a84;
        case 0x3c8a88u: goto label_3c8a88;
        case 0x3c8a8cu: goto label_3c8a8c;
        case 0x3c8a90u: goto label_3c8a90;
        case 0x3c8a94u: goto label_3c8a94;
        case 0x3c8a98u: goto label_3c8a98;
        case 0x3c8a9cu: goto label_3c8a9c;
        case 0x3c8aa0u: goto label_3c8aa0;
        case 0x3c8aa4u: goto label_3c8aa4;
        case 0x3c8aa8u: goto label_3c8aa8;
        case 0x3c8aacu: goto label_3c8aac;
        case 0x3c8ab0u: goto label_3c8ab0;
        case 0x3c8ab4u: goto label_3c8ab4;
        case 0x3c8ab8u: goto label_3c8ab8;
        case 0x3c8abcu: goto label_3c8abc;
        case 0x3c8ac0u: goto label_3c8ac0;
        case 0x3c8ac4u: goto label_3c8ac4;
        case 0x3c8ac8u: goto label_3c8ac8;
        case 0x3c8accu: goto label_3c8acc;
        case 0x3c8ad0u: goto label_3c8ad0;
        case 0x3c8ad4u: goto label_3c8ad4;
        case 0x3c8ad8u: goto label_3c8ad8;
        case 0x3c8adcu: goto label_3c8adc;
        case 0x3c8ae0u: goto label_3c8ae0;
        case 0x3c8ae4u: goto label_3c8ae4;
        case 0x3c8ae8u: goto label_3c8ae8;
        case 0x3c8aecu: goto label_3c8aec;
        case 0x3c8af0u: goto label_3c8af0;
        case 0x3c8af4u: goto label_3c8af4;
        case 0x3c8af8u: goto label_3c8af8;
        case 0x3c8afcu: goto label_3c8afc;
        case 0x3c8b00u: goto label_3c8b00;
        case 0x3c8b04u: goto label_3c8b04;
        case 0x3c8b08u: goto label_3c8b08;
        case 0x3c8b0cu: goto label_3c8b0c;
        case 0x3c8b10u: goto label_3c8b10;
        case 0x3c8b14u: goto label_3c8b14;
        case 0x3c8b18u: goto label_3c8b18;
        case 0x3c8b1cu: goto label_3c8b1c;
        case 0x3c8b20u: goto label_3c8b20;
        case 0x3c8b24u: goto label_3c8b24;
        case 0x3c8b28u: goto label_3c8b28;
        case 0x3c8b2cu: goto label_3c8b2c;
        case 0x3c8b30u: goto label_3c8b30;
        case 0x3c8b34u: goto label_3c8b34;
        case 0x3c8b38u: goto label_3c8b38;
        case 0x3c8b3cu: goto label_3c8b3c;
        case 0x3c8b40u: goto label_3c8b40;
        case 0x3c8b44u: goto label_3c8b44;
        case 0x3c8b48u: goto label_3c8b48;
        case 0x3c8b4cu: goto label_3c8b4c;
        case 0x3c8b50u: goto label_3c8b50;
        case 0x3c8b54u: goto label_3c8b54;
        case 0x3c8b58u: goto label_3c8b58;
        case 0x3c8b5cu: goto label_3c8b5c;
        case 0x3c8b60u: goto label_3c8b60;
        case 0x3c8b64u: goto label_3c8b64;
        case 0x3c8b68u: goto label_3c8b68;
        case 0x3c8b6cu: goto label_3c8b6c;
        case 0x3c8b70u: goto label_3c8b70;
        case 0x3c8b74u: goto label_3c8b74;
        case 0x3c8b78u: goto label_3c8b78;
        case 0x3c8b7cu: goto label_3c8b7c;
        case 0x3c8b80u: goto label_3c8b80;
        case 0x3c8b84u: goto label_3c8b84;
        case 0x3c8b88u: goto label_3c8b88;
        case 0x3c8b8cu: goto label_3c8b8c;
        case 0x3c8b90u: goto label_3c8b90;
        case 0x3c8b94u: goto label_3c8b94;
        case 0x3c8b98u: goto label_3c8b98;
        case 0x3c8b9cu: goto label_3c8b9c;
        case 0x3c8ba0u: goto label_3c8ba0;
        case 0x3c8ba4u: goto label_3c8ba4;
        case 0x3c8ba8u: goto label_3c8ba8;
        case 0x3c8bacu: goto label_3c8bac;
        case 0x3c8bb0u: goto label_3c8bb0;
        case 0x3c8bb4u: goto label_3c8bb4;
        case 0x3c8bb8u: goto label_3c8bb8;
        case 0x3c8bbcu: goto label_3c8bbc;
        case 0x3c8bc0u: goto label_3c8bc0;
        case 0x3c8bc4u: goto label_3c8bc4;
        case 0x3c8bc8u: goto label_3c8bc8;
        case 0x3c8bccu: goto label_3c8bcc;
        case 0x3c8bd0u: goto label_3c8bd0;
        case 0x3c8bd4u: goto label_3c8bd4;
        case 0x3c8bd8u: goto label_3c8bd8;
        case 0x3c8bdcu: goto label_3c8bdc;
        case 0x3c8be0u: goto label_3c8be0;
        case 0x3c8be4u: goto label_3c8be4;
        case 0x3c8be8u: goto label_3c8be8;
        case 0x3c8becu: goto label_3c8bec;
        case 0x3c8bf0u: goto label_3c8bf0;
        case 0x3c8bf4u: goto label_3c8bf4;
        case 0x3c8bf8u: goto label_3c8bf8;
        case 0x3c8bfcu: goto label_3c8bfc;
        case 0x3c8c00u: goto label_3c8c00;
        case 0x3c8c04u: goto label_3c8c04;
        case 0x3c8c08u: goto label_3c8c08;
        case 0x3c8c0cu: goto label_3c8c0c;
        case 0x3c8c10u: goto label_3c8c10;
        case 0x3c8c14u: goto label_3c8c14;
        case 0x3c8c18u: goto label_3c8c18;
        case 0x3c8c1cu: goto label_3c8c1c;
        case 0x3c8c20u: goto label_3c8c20;
        case 0x3c8c24u: goto label_3c8c24;
        case 0x3c8c28u: goto label_3c8c28;
        case 0x3c8c2cu: goto label_3c8c2c;
        case 0x3c8c30u: goto label_3c8c30;
        case 0x3c8c34u: goto label_3c8c34;
        case 0x3c8c38u: goto label_3c8c38;
        case 0x3c8c3cu: goto label_3c8c3c;
        case 0x3c8c40u: goto label_3c8c40;
        case 0x3c8c44u: goto label_3c8c44;
        case 0x3c8c48u: goto label_3c8c48;
        case 0x3c8c4cu: goto label_3c8c4c;
        case 0x3c8c50u: goto label_3c8c50;
        case 0x3c8c54u: goto label_3c8c54;
        case 0x3c8c58u: goto label_3c8c58;
        case 0x3c8c5cu: goto label_3c8c5c;
        case 0x3c8c60u: goto label_3c8c60;
        case 0x3c8c64u: goto label_3c8c64;
        case 0x3c8c68u: goto label_3c8c68;
        case 0x3c8c6cu: goto label_3c8c6c;
        case 0x3c8c70u: goto label_3c8c70;
        case 0x3c8c74u: goto label_3c8c74;
        case 0x3c8c78u: goto label_3c8c78;
        case 0x3c8c7cu: goto label_3c8c7c;
        case 0x3c8c80u: goto label_3c8c80;
        case 0x3c8c84u: goto label_3c8c84;
        case 0x3c8c88u: goto label_3c8c88;
        case 0x3c8c8cu: goto label_3c8c8c;
        case 0x3c8c90u: goto label_3c8c90;
        case 0x3c8c94u: goto label_3c8c94;
        case 0x3c8c98u: goto label_3c8c98;
        case 0x3c8c9cu: goto label_3c8c9c;
        case 0x3c8ca0u: goto label_3c8ca0;
        case 0x3c8ca4u: goto label_3c8ca4;
        case 0x3c8ca8u: goto label_3c8ca8;
        case 0x3c8cacu: goto label_3c8cac;
        case 0x3c8cb0u: goto label_3c8cb0;
        case 0x3c8cb4u: goto label_3c8cb4;
        case 0x3c8cb8u: goto label_3c8cb8;
        case 0x3c8cbcu: goto label_3c8cbc;
        case 0x3c8cc0u: goto label_3c8cc0;
        case 0x3c8cc4u: goto label_3c8cc4;
        case 0x3c8cc8u: goto label_3c8cc8;
        case 0x3c8cccu: goto label_3c8ccc;
        case 0x3c8cd0u: goto label_3c8cd0;
        case 0x3c8cd4u: goto label_3c8cd4;
        case 0x3c8cd8u: goto label_3c8cd8;
        case 0x3c8cdcu: goto label_3c8cdc;
        case 0x3c8ce0u: goto label_3c8ce0;
        case 0x3c8ce4u: goto label_3c8ce4;
        case 0x3c8ce8u: goto label_3c8ce8;
        case 0x3c8cecu: goto label_3c8cec;
        case 0x3c8cf0u: goto label_3c8cf0;
        case 0x3c8cf4u: goto label_3c8cf4;
        case 0x3c8cf8u: goto label_3c8cf8;
        case 0x3c8cfcu: goto label_3c8cfc;
        case 0x3c8d00u: goto label_3c8d00;
        case 0x3c8d04u: goto label_3c8d04;
        case 0x3c8d08u: goto label_3c8d08;
        case 0x3c8d0cu: goto label_3c8d0c;
        case 0x3c8d10u: goto label_3c8d10;
        case 0x3c8d14u: goto label_3c8d14;
        case 0x3c8d18u: goto label_3c8d18;
        case 0x3c8d1cu: goto label_3c8d1c;
        case 0x3c8d20u: goto label_3c8d20;
        case 0x3c8d24u: goto label_3c8d24;
        case 0x3c8d28u: goto label_3c8d28;
        case 0x3c8d2cu: goto label_3c8d2c;
        case 0x3c8d30u: goto label_3c8d30;
        case 0x3c8d34u: goto label_3c8d34;
        case 0x3c8d38u: goto label_3c8d38;
        case 0x3c8d3cu: goto label_3c8d3c;
        case 0x3c8d40u: goto label_3c8d40;
        case 0x3c8d44u: goto label_3c8d44;
        case 0x3c8d48u: goto label_3c8d48;
        case 0x3c8d4cu: goto label_3c8d4c;
        case 0x3c8d50u: goto label_3c8d50;
        case 0x3c8d54u: goto label_3c8d54;
        case 0x3c8d58u: goto label_3c8d58;
        case 0x3c8d5cu: goto label_3c8d5c;
        case 0x3c8d60u: goto label_3c8d60;
        case 0x3c8d64u: goto label_3c8d64;
        case 0x3c8d68u: goto label_3c8d68;
        case 0x3c8d6cu: goto label_3c8d6c;
        default: break;
    }

    ctx->pc = 0x3c8780u;

label_3c8780:
    // 0x3c8780: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c8780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3c8784:
    // 0x3c8784: 0x3e00008  jr          $ra
label_3c8788:
    if (ctx->pc == 0x3C8788u) {
        ctx->pc = 0x3C8788u;
            // 0x3c8788: 0xac6065a8  sw          $zero, 0x65A8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 26024), GPR_U32(ctx, 0));
        ctx->pc = 0x3C878Cu;
        goto label_3c878c;
    }
    ctx->pc = 0x3C8784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C8788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8784u;
            // 0x3c8788: 0xac6065a8  sw          $zero, 0x65A8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 26024), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C878Cu;
label_3c878c:
    // 0x3c878c: 0x0  nop
    ctx->pc = 0x3c878cu;
    // NOP
label_3c8790:
    // 0x3c8790: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3c8790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3c8794:
    // 0x3c8794: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3c8794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3c8798:
    // 0x3c8798: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3c8798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3c879c:
    // 0x3c879c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3c879cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3c87a0:
    // 0x3c87a0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3c87a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3c87a4:
    // 0x3c87a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3c87a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3c87a8:
    // 0x3c87a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3c87a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3c87ac:
    // 0x3c87ac: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3c87acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c87b0:
    // 0x3c87b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3c87b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3c87b4:
    // 0x3c87b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c87b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c87b8:
    // 0x3c87b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c87b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c87bc:
    // 0x3c87bc: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x3c87bcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_3c87c0:
    // 0x3c87c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c87c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c87c4:
    // 0x3c87c4: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x3c87c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
label_3c87c8:
    // 0x3c87c8: 0x90930060  lbu         $s3, 0x60($a0)
    ctx->pc = 0x3c87c8u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 96)));
label_3c87cc:
    // 0x3c87cc: 0x2652a6e0  addiu       $s2, $s2, -0x5920
    ctx->pc = 0x3c87ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294944480));
label_3c87d0:
    // 0x3c87d0: 0x84960062  lh          $s6, 0x62($a0)
    ctx->pc = 0x3c87d0u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 98)));
label_3c87d4:
    // 0x3c87d4: 0x84970064  lh          $s7, 0x64($a0)
    ctx->pc = 0x3c87d4u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_3c87d8:
    // 0x3c87d8: 0x8c7489e0  lw          $s4, -0x7620($v1)
    ctx->pc = 0x3c87d8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_3c87dc:
    // 0x3c87dc: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x3c87dcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3c87e0:
    // 0x3c87e0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3c87e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c87e4:
    // 0x3c87e4: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_3c87e8:
    if (ctx->pc == 0x3C87E8u) {
        ctx->pc = 0x3C87E8u;
            // 0x3c87e8: 0x2631210c  addiu       $s1, $s1, 0x210C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8460));
        ctx->pc = 0x3C87ECu;
        goto label_3c87ec;
    }
    ctx->pc = 0x3C87E4u;
    {
        const bool branch_taken_0x3c87e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C87E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C87E4u;
            // 0x3c87e8: 0x2631210c  addiu       $s1, $s1, 0x210C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8460));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c87e4) {
            ctx->pc = 0x3C8800u;
            goto label_3c8800;
        }
    }
    ctx->pc = 0x3C87ECu;
label_3c87ec:
    // 0x3c87ec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c87ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c87f0:
    // 0x3c87f0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_3c87f4:
    if (ctx->pc == 0x3C87F4u) {
        ctx->pc = 0x3C87F8u;
        goto label_3c87f8;
    }
    ctx->pc = 0x3C87F0u;
    {
        const bool branch_taken_0x3c87f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c87f0) {
            ctx->pc = 0x3C8800u;
            goto label_3c8800;
        }
    }
    ctx->pc = 0x3C87F8u;
label_3c87f8:
    // 0x3c87f8: 0x10000081  b           . + 4 + (0x81 << 2)
label_3c87fc:
    if (ctx->pc == 0x3C87FCu) {
        ctx->pc = 0x3C87FCu;
            // 0x3c87fc: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x3C8800u;
        goto label_3c8800;
    }
    ctx->pc = 0x3C87F8u;
    {
        const bool branch_taken_0x3c87f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C87FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C87F8u;
            // 0x3c87fc: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c87f8) {
            ctx->pc = 0x3C8A00u;
            goto label_3c8a00;
        }
    }
    ctx->pc = 0x3C8800u;
label_3c8800:
    // 0x3c8800: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c8800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c8804:
    // 0x3c8804: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3c8804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3c8808:
    // 0x3c8808: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3c8808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3c880c:
    // 0x3c880c: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x3c880cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_3c8810:
    // 0x3c8810: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_3c8814:
    if (ctx->pc == 0x3C8814u) {
        ctx->pc = 0x3C8818u;
        goto label_3c8818;
    }
    ctx->pc = 0x3C8810u;
    {
        const bool branch_taken_0x3c8810 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8810) {
            ctx->pc = 0x3C8834u;
            goto label_3c8834;
        }
    }
    ctx->pc = 0x3C8818u;
label_3c8818:
    // 0x3c8818: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x3c8818u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3c881c:
    // 0x3c881c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3c881cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c8820:
    // 0x3c8820: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c8820u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c8824:
    // 0x3c8824: 0x320f809  jalr        $t9
label_3c8828:
    if (ctx->pc == 0x3C8828u) {
        ctx->pc = 0x3C8828u;
            // 0x3c8828: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C882Cu;
        goto label_3c882c;
    }
    ctx->pc = 0x3C8824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C882Cu);
        ctx->pc = 0x3C8828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8824u;
            // 0x3c8828: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C882Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C882Cu; }
            if (ctx->pc != 0x3C882Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3C882Cu;
label_3c882c:
    // 0x3c882c: 0x10000073  b           . + 4 + (0x73 << 2)
label_3c8830:
    if (ctx->pc == 0x3C8830u) {
        ctx->pc = 0x3C8834u;
        goto label_3c8834;
    }
    ctx->pc = 0x3C882Cu;
    {
        const bool branch_taken_0x3c882c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c882c) {
            ctx->pc = 0x3C89FCu;
            goto label_3c89fc;
        }
    }
    ctx->pc = 0x3C8834u;
label_3c8834:
    // 0x3c8834: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c8834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c8838:
    // 0x3c8838: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3c8838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3c883c:
    // 0x3c883c: 0xc0506ac  jal         func_141AB0
label_3c8840:
    if (ctx->pc == 0x3C8840u) {
        ctx->pc = 0x3C8840u;
            // 0x3c8840: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3C8844u;
        goto label_3c8844;
    }
    ctx->pc = 0x3C883Cu;
    SET_GPR_U32(ctx, 31, 0x3C8844u);
    ctx->pc = 0x3C8840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C883Cu;
            // 0x3c8840: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8844u; }
        if (ctx->pc != 0x3C8844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8844u; }
        if (ctx->pc != 0x3C8844u) { return; }
    }
    ctx->pc = 0x3C8844u;
label_3c8844:
    // 0x3c8844: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x3c8844u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3c8848:
    // 0x3c8848: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c8848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c884c:
    // 0x3c884c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3c884cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3c8850:
    // 0x3c8850: 0x320f809  jalr        $t9
label_3c8854:
    if (ctx->pc == 0x3C8854u) {
        ctx->pc = 0x3C8854u;
            // 0x3c8854: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3C8858u;
        goto label_3c8858;
    }
    ctx->pc = 0x3C8850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C8858u);
        ctx->pc = 0x3C8854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8850u;
            // 0x3c8854: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C8858u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C8858u; }
            if (ctx->pc != 0x3C8858u) { return; }
        }
        }
    }
    ctx->pc = 0x3C8858u;
label_3c8858:
    // 0x3c8858: 0x8ea2005c  lw          $v0, 0x5C($s5)
    ctx->pc = 0x3c8858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
label_3c885c:
    // 0x3c885c: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x3c885cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_3c8860:
    // 0x3c8860: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
label_3c8864:
    if (ctx->pc == 0x3C8864u) {
        ctx->pc = 0x3C8864u;
            // 0x3c8864: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3C8868u;
        goto label_3c8868;
    }
    ctx->pc = 0x3C8860u;
    {
        const bool branch_taken_0x3c8860 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8860) {
            ctx->pc = 0x3C8864u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8860u;
            // 0x3c8864: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C8878u;
            goto label_3c8878;
        }
    }
    ctx->pc = 0x3C8868u;
label_3c8868:
    // 0x3c8868: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x3c8868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_3c886c:
    // 0x3c886c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3c886cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3c8870:
    // 0x3c8870: 0x10000003  b           . + 4 + (0x3 << 2)
label_3c8874:
    if (ctx->pc == 0x3C8874u) {
        ctx->pc = 0x3C8874u;
            // 0x3c8874: 0x2428021  addu        $s0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->pc = 0x3C8878u;
        goto label_3c8878;
    }
    ctx->pc = 0x3C8870u;
    {
        const bool branch_taken_0x3c8870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8870u;
            // 0x3c8874: 0x2428021  addu        $s0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8870) {
            ctx->pc = 0x3C8880u;
            goto label_3c8880;
        }
    }
    ctx->pc = 0x3C8878u;
label_3c8878:
    // 0x3c8878: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3c8878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3c887c:
    // 0x3c887c: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x3c887cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3c8880:
    // 0x3c8880: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x3c8880u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_3c8884:
    // 0x3c8884: 0xc6a40068  lwc1        $f4, 0x68($s5)
    ctx->pc = 0x3c8884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3c8888:
    // 0x3c8888: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x3c8888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c888c:
    // 0x3c888c: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x3c888cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_3c8890:
    // 0x3c8890: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3c8890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3c8894:
    // 0x3c8894: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c8894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c8898:
    // 0x3c8898: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3c8898u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c889c:
    // 0x3c889c: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x3c889cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3c88a0:
    // 0x3c88a0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3c88a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3c88a4:
    // 0x3c88a4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3c88a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3c88a8:
    // 0x3c88a8: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x3c88a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_3c88ac:
    // 0x3c88ac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3c88acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c88b0:
    // 0x3c88b0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c88b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c88b4:
    // 0x3c88b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c88b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c88b8:
    // 0x3c88b8: 0x46040802  mul.s       $f0, $f1, $f4
    ctx->pc = 0x3c88b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_3c88bc:
    // 0x3c88bc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3c88bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3c88c0:
    // 0x3c88c0: 0x0  nop
    ctx->pc = 0x3c88c0u;
    // NOP
label_3c88c4:
    // 0x3c88c4: 0x46001882  mul.s       $f2, $f3, $f0
    ctx->pc = 0x3c88c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_3c88c8:
    // 0x3c88c8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3c88c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3c88cc:
    // 0x3c88cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c88ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c88d0:
    // 0x3c88d0: 0x0  nop
    ctx->pc = 0x3c88d0u;
    // NOP
label_3c88d4:
    // 0x3c88d4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3c88d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3c88d8:
    // 0x3c88d8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x3c88d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c88dc:
    // 0x3c88dc: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x3c88dcu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c88e0:
    // 0x3c88e0: 0x0  nop
    ctx->pc = 0x3c88e0u;
    // NOP
label_3c88e4:
    // 0x3c88e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c88e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3c88e8:
    // 0x3c88e8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3c88e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_3c88ec:
    // 0x3c88ec: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c88ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_3c88f0:
    // 0x3c88f0: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x3c88f0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3c88f4:
    // 0x3c88f4: 0x46010380  add.s       $f14, $f0, $f1
    ctx->pc = 0x3c88f4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3c88f8:
    // 0x3c88f8: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x3c88f8u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c88fc:
    // 0x3c88fc: 0x0  nop
    ctx->pc = 0x3c88fcu;
    // NOP
label_3c8900:
    // 0x3c8900: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c8900u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3c8904:
    // 0x3c8904: 0x46020341  sub.s       $f13, $f0, $f2
    ctx->pc = 0x3c8904u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_3c8908:
    // 0x3c8908: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3c8908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3c890c:
    // 0x3c890c: 0xc0bc284  jal         func_2F0A10
label_3c8910:
    if (ctx->pc == 0x3C8910u) {
        ctx->pc = 0x3C8910u;
            // 0x3c8910: 0x460203c0  add.s       $f15, $f0, $f2 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x3C8914u;
        goto label_3c8914;
    }
    ctx->pc = 0x3C890Cu;
    SET_GPR_U32(ctx, 31, 0x3C8914u);
    ctx->pc = 0x3C8910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C890Cu;
            // 0x3c8910: 0x460203c0  add.s       $f15, $f0, $f2 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8914u; }
        if (ctx->pc != 0x3C8914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8914u; }
        if (ctx->pc != 0x3C8914u) { return; }
    }
    ctx->pc = 0x3C8914u;
label_3c8914:
    // 0x3c8914: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x3c8914u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c8918:
    // 0x3c8918: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3c8918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3c891c:
    // 0x3c891c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3c891cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3c8920:
    // 0x3c8920: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3c8920u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3c8924:
    // 0x3c8924: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x3c8924u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c8928:
    // 0x3c8928: 0xc6a60068  lwc1        $f6, 0x68($s5)
    ctx->pc = 0x3c8928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3c892c:
    // 0x3c892c: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x3c892cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3c8930:
    // 0x3c8930: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x3c8930u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_3c8934:
    // 0x3c8934: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x3c8934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3c8938:
    // 0x3c8938: 0x0  nop
    ctx->pc = 0x3c8938u;
    // NOP
label_3c893c:
    // 0x3c893c: 0x460628c2  mul.s       $f3, $f5, $f6
    ctx->pc = 0x3c893cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
label_3c8940:
    // 0x3c8940: 0x8ea2005c  lw          $v0, 0x5C($s5)
    ctx->pc = 0x3c8940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
label_3c8944:
    // 0x3c8944: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x3c8944u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_3c8948:
    // 0x3c8948: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c8948u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3c894c:
    // 0x3c894c: 0x460320dc  madd.s      $f3, $f4, $f3
    ctx->pc = 0x3c894cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_3c8950:
    // 0x3c8950: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x3c8950u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3c8954:
    // 0x3c8954: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c8954u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c8958:
    // 0x3c8958: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x3c8958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c895c:
    // 0x3c895c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3c895cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3c8960:
    // 0x3c8960: 0x46060802  mul.s       $f0, $f1, $f6
    ctx->pc = 0x3c8960u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_3c8964:
    // 0x3c8964: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x3c8964u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
label_3c8968:
    // 0x3c8968: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c8968u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c896c:
    // 0x3c896c: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x3c896cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_3c8970:
    // 0x3c8970: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3c8974:
    if (ctx->pc == 0x3C8974u) {
        ctx->pc = 0x3C8974u;
            // 0x3c8974: 0x26450100  addiu       $a1, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->pc = 0x3C8978u;
        goto label_3c8978;
    }
    ctx->pc = 0x3C8970u;
    {
        const bool branch_taken_0x3c8970 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8970) {
            ctx->pc = 0x3C8974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8970u;
            // 0x3c8974: 0x26450100  addiu       $a1, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C8984u;
            goto label_3c8984;
        }
    }
    ctx->pc = 0x3C8978u;
label_3c8978:
    // 0x3c8978: 0x2442000d  addiu       $v0, $v0, 0xD
    ctx->pc = 0x3c8978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
label_3c897c:
    // 0x3c897c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3c897cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3c8980:
    // 0x3c8980: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x3c8980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3c8984:
    // 0x3c8984: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c8984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c8988:
    // 0x3c8988: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3c8988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3c898c:
    // 0x3c898c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x3c898cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_3c8990:
    // 0x3c8990: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x3c8990u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_3c8994:
    // 0x3c8994: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x3c8994u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_3c8998:
    // 0x3c8998: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c8998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c899c:
    // 0x3c899c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3c899cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c89a0:
    // 0x3c89a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c89a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c89a4:
    // 0x3c89a4: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3c89a4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c89a8:
    // 0x3c89a8: 0x0  nop
    ctx->pc = 0x3c89a8u;
    // NOP
label_3c89ac:
    // 0x3c89ac: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x3c89acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_3c89b0:
    // 0x3c89b0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3c89b0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c89b4:
    // 0x3c89b4: 0x0  nop
    ctx->pc = 0x3c89b4u;
    // NOP
label_3c89b8:
    // 0x3c89b8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3c89b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3c89bc:
    // 0x3c89bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c89bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c89c0:
    // 0x3c89c0: 0x0  nop
    ctx->pc = 0x3c89c0u;
    // NOP
label_3c89c4:
    // 0x3c89c4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3c89c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3c89c8:
    // 0x3c89c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c89c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c89cc:
    // 0x3c89cc: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x3c89ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c89d0:
    // 0x3c89d0: 0x460f0018  adda.s      $f0, $f15
    ctx->pc = 0x3c89d0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[15]);
label_3c89d4:
    // 0x3c89d4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3c89d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3c89d8:
    // 0x3c89d8: 0x46060b5d  msub.s      $f13, $f1, $f6
    ctx->pc = 0x3c89d8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[6]));
label_3c89dc:
    // 0x3c89dc: 0x460c0018  adda.s      $f0, $f12
    ctx->pc = 0x3c89dcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_3c89e0:
    // 0x3c89e0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3c89e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c89e4:
    // 0x3c89e4: 0xc0bc284  jal         func_2F0A10
label_3c89e8:
    if (ctx->pc == 0x3C89E8u) {
        ctx->pc = 0x3C89E8u;
            // 0x3c89e8: 0x4606039c  madd.s      $f14, $f0, $f6 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[6]));
        ctx->pc = 0x3C89ECu;
        goto label_3c89ec;
    }
    ctx->pc = 0x3C89E4u;
    SET_GPR_U32(ctx, 31, 0x3C89ECu);
    ctx->pc = 0x3C89E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C89E4u;
            // 0x3c89e8: 0x4606039c  madd.s      $f14, $f0, $f6 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[6]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C89ECu; }
        if (ctx->pc != 0x3C89ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C89ECu; }
        if (ctx->pc != 0x3C89ECu) { return; }
    }
    ctx->pc = 0x3C89ECu;
label_3c89ec:
    // 0x3c89ec: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x3c89ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3c89f0:
    // 0x3c89f0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3c89f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3c89f4:
    // 0x3c89f4: 0x320f809  jalr        $t9
label_3c89f8:
    if (ctx->pc == 0x3C89F8u) {
        ctx->pc = 0x3C89F8u;
            // 0x3c89f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C89FCu;
        goto label_3c89fc;
    }
    ctx->pc = 0x3C89F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C89FCu);
        ctx->pc = 0x3C89F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C89F4u;
            // 0x3c89f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C89FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C89FCu; }
            if (ctx->pc != 0x3C89FCu) { return; }
        }
        }
    }
    ctx->pc = 0x3C89FCu;
label_3c89fc:
    // 0x3c89fc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3c89fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3c8a00:
    // 0x3c8a00: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3c8a00u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c8a04:
    // 0x3c8a04: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3c8a04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c8a08:
    // 0x3c8a08: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3c8a08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c8a0c:
    // 0x3c8a0c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3c8a0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c8a10:
    // 0x3c8a10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3c8a10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c8a14:
    // 0x3c8a14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c8a14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c8a18:
    // 0x3c8a18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c8a18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c8a1c:
    // 0x3c8a1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c8a1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c8a20:
    // 0x3c8a20: 0x3e00008  jr          $ra
label_3c8a24:
    if (ctx->pc == 0x3C8A24u) {
        ctx->pc = 0x3C8A24u;
            // 0x3c8a24: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3C8A28u;
        goto label_3c8a28;
    }
    ctx->pc = 0x3C8A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C8A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8A20u;
            // 0x3c8a24: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C8A28u;
label_3c8a28:
    // 0x3c8a28: 0x0  nop
    ctx->pc = 0x3c8a28u;
    // NOP
label_3c8a2c:
    // 0x3c8a2c: 0x0  nop
    ctx->pc = 0x3c8a2cu;
    // NOP
label_3c8a30:
    // 0x3c8a30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c8a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3c8a34:
    // 0x3c8a34: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x3c8a34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_3c8a38:
    // 0x3c8a38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c8a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3c8a3c:
    // 0x3c8a3c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c8a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3c8a40:
    // 0x3c8a40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c8a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c8a44:
    // 0x3c8a44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c8a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c8a48:
    // 0x3c8a48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c8a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c8a4c:
    // 0x3c8a4c: 0x8ca78a08  lw          $a3, -0x75F8($a1)
    ctx->pc = 0x3c8a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294937096)));
label_3c8a50:
    // 0x3c8a50: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x3c8a50u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3c8a54:
    // 0x3c8a54: 0x8c710eac  lw          $s1, 0xEAC($v1)
    ctx->pc = 0x3c8a54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3756)));
label_3c8a58:
    // 0x3c8a58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c8a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c8a5c:
    // 0x3c8a5c: 0x10c5006f  beq         $a2, $a1, . + 4 + (0x6F << 2)
label_3c8a60:
    if (ctx->pc == 0x3C8A60u) {
        ctx->pc = 0x3C8A60u;
            // 0x3c8a60: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C8A64u;
        goto label_3c8a64;
    }
    ctx->pc = 0x3C8A5Cu;
    {
        const bool branch_taken_0x3c8a5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x3C8A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8A5Cu;
            // 0x3c8a60: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8a5c) {
            ctx->pc = 0x3C8C1Cu;
            goto label_3c8c1c;
        }
    }
    ctx->pc = 0x3C8A64u;
label_3c8a64:
    // 0x3c8a64: 0x50c00068  beql        $a2, $zero, . + 4 + (0x68 << 2)
label_3c8a68:
    if (ctx->pc == 0x3C8A68u) {
        ctx->pc = 0x3C8A68u;
            // 0x3c8a68: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3C8A6Cu;
        goto label_3c8a6c;
    }
    ctx->pc = 0x3C8A64u;
    {
        const bool branch_taken_0x3c8a64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8a64) {
            ctx->pc = 0x3C8A68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8A64u;
            // 0x3c8a68: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C8C08u;
            goto label_3c8c08;
        }
    }
    ctx->pc = 0x3C8A6Cu;
label_3c8a6c:
    // 0x3c8a6c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3c8a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c8a70:
    // 0x3c8a70: 0x10c30034  beq         $a2, $v1, . + 4 + (0x34 << 2)
label_3c8a74:
    if (ctx->pc == 0x3C8A74u) {
        ctx->pc = 0x3C8A78u;
        goto label_3c8a78;
    }
    ctx->pc = 0x3C8A70u;
    {
        const bool branch_taken_0x3c8a70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c8a70) {
            ctx->pc = 0x3C8B44u;
            goto label_3c8b44;
        }
    }
    ctx->pc = 0x3C8A78u;
label_3c8a78:
    // 0x3c8a78: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c8a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c8a7c:
    // 0x3c8a7c: 0x10c30017  beq         $a2, $v1, . + 4 + (0x17 << 2)
label_3c8a80:
    if (ctx->pc == 0x3C8A80u) {
        ctx->pc = 0x3C8A84u;
        goto label_3c8a84;
    }
    ctx->pc = 0x3C8A7Cu;
    {
        const bool branch_taken_0x3c8a7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c8a7c) {
            ctx->pc = 0x3C8ADCu;
            goto label_3c8adc;
        }
    }
    ctx->pc = 0x3C8A84u;
label_3c8a84:
    // 0x3c8a84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c8a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c8a88:
    // 0x3c8a88: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
label_3c8a8c:
    if (ctx->pc == 0x3C8A8Cu) {
        ctx->pc = 0x3C8A90u;
        goto label_3c8a90;
    }
    ctx->pc = 0x3C8A88u;
    {
        const bool branch_taken_0x3c8a88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c8a88) {
            ctx->pc = 0x3C8A98u;
            goto label_3c8a98;
        }
    }
    ctx->pc = 0x3C8A90u;
label_3c8a90:
    // 0x3c8a90: 0x10000098  b           . + 4 + (0x98 << 2)
label_3c8a94:
    if (ctx->pc == 0x3C8A94u) {
        ctx->pc = 0x3C8A94u;
            // 0x3c8a94: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x3C8A98u;
        goto label_3c8a98;
    }
    ctx->pc = 0x3C8A90u;
    {
        const bool branch_taken_0x3c8a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8A90u;
            // 0x3c8a94: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8a90) {
            ctx->pc = 0x3C8CF4u;
            goto label_3c8cf4;
        }
    }
    ctx->pc = 0x3C8A98u;
label_3c8a98:
    // 0x3c8a98: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c8a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c8a9c:
    // 0x3c8a9c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3c8a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3c8aa0:
    // 0x3c8aa0: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3c8aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3c8aa4:
    // 0x3c8aa4: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x3c8aa4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_3c8aa8:
    // 0x3c8aa8: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_3c8aac:
    if (ctx->pc == 0x3C8AACu) {
        ctx->pc = 0x3C8AACu;
            // 0x3c8aac: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3C8AB0u;
        goto label_3c8ab0;
    }
    ctx->pc = 0x3C8AA8u;
    {
        const bool branch_taken_0x3c8aa8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8aa8) {
            ctx->pc = 0x3C8AACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8AA8u;
            // 0x3c8aac: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C8AC8u;
            goto label_3c8ac8;
        }
    }
    ctx->pc = 0x3C8AB0u;
label_3c8ab0:
    // 0x3c8ab0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c8ab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c8ab4:
    // 0x3c8ab4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c8ab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c8ab8:
    // 0x3c8ab8: 0x320f809  jalr        $t9
label_3c8abc:
    if (ctx->pc == 0x3C8ABCu) {
        ctx->pc = 0x3C8ABCu;
            // 0x3c8abc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C8AC0u;
        goto label_3c8ac0;
    }
    ctx->pc = 0x3C8AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C8AC0u);
        ctx->pc = 0x3C8ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8AB8u;
            // 0x3c8abc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C8AC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C8AC0u; }
            if (ctx->pc != 0x3C8AC0u) { return; }
        }
        }
    }
    ctx->pc = 0x3C8AC0u;
label_3c8ac0:
    // 0x3c8ac0: 0x1000008b  b           . + 4 + (0x8B << 2)
label_3c8ac4:
    if (ctx->pc == 0x3C8AC4u) {
        ctx->pc = 0x3C8AC8u;
        goto label_3c8ac8;
    }
    ctx->pc = 0x3C8AC0u;
    {
        const bool branch_taken_0x3c8ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8ac0) {
            ctx->pc = 0x3C8CF0u;
            goto label_3c8cf0;
        }
    }
    ctx->pc = 0x3C8AC8u;
label_3c8ac8:
    // 0x3c8ac8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3c8ac8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3c8acc:
    // 0x3c8acc: 0x320f809  jalr        $t9
label_3c8ad0:
    if (ctx->pc == 0x3C8AD0u) {
        ctx->pc = 0x3C8AD4u;
        goto label_3c8ad4;
    }
    ctx->pc = 0x3C8ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C8AD4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C8AD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C8AD4u; }
            if (ctx->pc != 0x3C8AD4u) { return; }
        }
        }
    }
    ctx->pc = 0x3C8AD4u;
label_3c8ad4:
    // 0x3c8ad4: 0x10000086  b           . + 4 + (0x86 << 2)
label_3c8ad8:
    if (ctx->pc == 0x3C8AD8u) {
        ctx->pc = 0x3C8ADCu;
        goto label_3c8adc;
    }
    ctx->pc = 0x3C8AD4u;
    {
        const bool branch_taken_0x3c8ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8ad4) {
            ctx->pc = 0x3C8CF0u;
            goto label_3c8cf0;
        }
    }
    ctx->pc = 0x3C8ADCu;
label_3c8adc:
    // 0x3c8adc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c8adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3c8ae0:
    // 0x3c8ae0: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3c8ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3c8ae4:
    // 0x3c8ae4: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3c8ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_3c8ae8:
    // 0x3c8ae8: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x3c8ae8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_3c8aec:
    // 0x3c8aec: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_3c8af0:
    if (ctx->pc == 0x3C8AF0u) {
        ctx->pc = 0x3C8AF0u;
            // 0x3c8af0: 0xc4e10018  lwc1        $f1, 0x18($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3C8AF4u;
        goto label_3c8af4;
    }
    ctx->pc = 0x3C8AECu;
    {
        const bool branch_taken_0x3c8aec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8aec) {
            ctx->pc = 0x3C8AF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8AECu;
            // 0x3c8af0: 0xc4e10018  lwc1        $f1, 0x18($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C8B0Cu;
            goto label_3c8b0c;
        }
    }
    ctx->pc = 0x3C8AF4u;
label_3c8af4:
    // 0x3c8af4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c8af4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c8af8:
    // 0x3c8af8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c8af8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c8afc:
    // 0x3c8afc: 0x320f809  jalr        $t9
label_3c8b00:
    if (ctx->pc == 0x3C8B00u) {
        ctx->pc = 0x3C8B00u;
            // 0x3c8b00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C8B04u;
        goto label_3c8b04;
    }
    ctx->pc = 0x3C8AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C8B04u);
        ctx->pc = 0x3C8B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8AFCu;
            // 0x3c8b00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C8B04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C8B04u; }
            if (ctx->pc != 0x3C8B04u) { return; }
        }
        }
    }
    ctx->pc = 0x3C8B04u;
label_3c8b04:
    // 0x3c8b04: 0x1000007a  b           . + 4 + (0x7A << 2)
label_3c8b08:
    if (ctx->pc == 0x3C8B08u) {
        ctx->pc = 0x3C8B0Cu;
        goto label_3c8b0c;
    }
    ctx->pc = 0x3C8B04u;
    {
        const bool branch_taken_0x3c8b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8b04) {
            ctx->pc = 0x3C8CF0u;
            goto label_3c8cf0;
        }
    }
    ctx->pc = 0x3C8B0Cu;
label_3c8b0c:
    // 0x3c8b0c: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x3c8b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c8b10:
    // 0x3c8b10: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x3c8b10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3c8b14:
    // 0x3c8b14: 0xe6410054  swc1        $f1, 0x54($s2)
    ctx->pc = 0x3c8b14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
label_3c8b18:
    // 0x3c8b18: 0xc640006c  lwc1        $f0, 0x6C($s2)
    ctx->pc = 0x3c8b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c8b1c:
    // 0x3c8b1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c8b1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c8b20:
    // 0x3c8b20: 0x45010073  bc1t        . + 4 + (0x73 << 2)
label_3c8b24:
    if (ctx->pc == 0x3C8B24u) {
        ctx->pc = 0x3C8B28u;
        goto label_3c8b28;
    }
    ctx->pc = 0x3C8B20u;
    {
        const bool branch_taken_0x3c8b20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c8b20) {
            ctx->pc = 0x3C8CF0u;
            goto label_3c8cf0;
        }
    }
    ctx->pc = 0x3C8B28u;
label_3c8b28:
    // 0x3c8b28: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x3c8b28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
label_3c8b2c:
    // 0x3c8b2c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c8b2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c8b30:
    // 0x3c8b30: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3c8b30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3c8b34:
    // 0x3c8b34: 0x320f809  jalr        $t9
label_3c8b38:
    if (ctx->pc == 0x3C8B38u) {
        ctx->pc = 0x3C8B3Cu;
        goto label_3c8b3c;
    }
    ctx->pc = 0x3C8B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C8B3Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C8B3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C8B3Cu; }
            if (ctx->pc != 0x3C8B3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3C8B3Cu;
label_3c8b3c:
    // 0x3c8b3c: 0x1000006c  b           . + 4 + (0x6C << 2)
label_3c8b40:
    if (ctx->pc == 0x3C8B40u) {
        ctx->pc = 0x3C8B44u;
        goto label_3c8b44;
    }
    ctx->pc = 0x3C8B3Cu;
    {
        const bool branch_taken_0x3c8b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8b3c) {
            ctx->pc = 0x3C8CF0u;
            goto label_3c8cf0;
        }
    }
    ctx->pc = 0x3C8B44u;
label_3c8b44:
    // 0x3c8b44: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c8b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3c8b48:
    // 0x3c8b48: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3c8b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3c8b4c:
    // 0x3c8b4c: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3c8b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_3c8b50:
    // 0x3c8b50: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x3c8b50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_3c8b54:
    // 0x3c8b54: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_3c8b58:
    if (ctx->pc == 0x3C8B58u) {
        ctx->pc = 0x3C8B58u;
            // 0x3c8b58: 0xc4e10018  lwc1        $f1, 0x18($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3C8B5Cu;
        goto label_3c8b5c;
    }
    ctx->pc = 0x3C8B54u;
    {
        const bool branch_taken_0x3c8b54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8b54) {
            ctx->pc = 0x3C8B58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8B54u;
            // 0x3c8b58: 0xc4e10018  lwc1        $f1, 0x18($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C8B74u;
            goto label_3c8b74;
        }
    }
    ctx->pc = 0x3C8B5Cu;
label_3c8b5c:
    // 0x3c8b5c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c8b5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c8b60:
    // 0x3c8b60: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c8b60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c8b64:
    // 0x3c8b64: 0x320f809  jalr        $t9
label_3c8b68:
    if (ctx->pc == 0x3C8B68u) {
        ctx->pc = 0x3C8B68u;
            // 0x3c8b68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C8B6Cu;
        goto label_3c8b6c;
    }
    ctx->pc = 0x3C8B64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C8B6Cu);
        ctx->pc = 0x3C8B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8B64u;
            // 0x3c8b68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C8B6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C8B6Cu; }
            if (ctx->pc != 0x3C8B6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3C8B6Cu;
label_3c8b6c:
    // 0x3c8b6c: 0x10000060  b           . + 4 + (0x60 << 2)
label_3c8b70:
    if (ctx->pc == 0x3C8B70u) {
        ctx->pc = 0x3C8B74u;
        goto label_3c8b74;
    }
    ctx->pc = 0x3C8B6Cu;
    {
        const bool branch_taken_0x3c8b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8b6c) {
            ctx->pc = 0x3C8CF0u;
            goto label_3c8cf0;
        }
    }
    ctx->pc = 0x3C8B74u;
label_3c8b74:
    // 0x3c8b74: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x3c8b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c8b78:
    // 0x3c8b78: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x3c8b78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3c8b7c:
    // 0x3c8b7c: 0xe6410054  swc1        $f1, 0x54($s2)
    ctx->pc = 0x3c8b7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
label_3c8b80:
    // 0x3c8b80: 0xc6400070  lwc1        $f0, 0x70($s2)
    ctx->pc = 0x3c8b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c8b84:
    // 0x3c8b84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c8b84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c8b88:
    // 0x3c8b88: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_3c8b8c:
    if (ctx->pc == 0x3C8B8Cu) {
        ctx->pc = 0x3C8B8Cu;
            // 0x3c8b8c: 0xc6420054  lwc1        $f2, 0x54($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x3C8B90u;
        goto label_3c8b90;
    }
    ctx->pc = 0x3C8B88u;
    {
        const bool branch_taken_0x3c8b88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c8b88) {
            ctx->pc = 0x3C8B8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8B88u;
            // 0x3c8b8c: 0xc6420054  lwc1        $f2, 0x54($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C8BA8u;
            goto label_3c8ba8;
        }
    }
    ctx->pc = 0x3C8B90u;
label_3c8b90:
    // 0x3c8b90: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x3c8b90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
label_3c8b94:
    // 0x3c8b94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c8b94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c8b98:
    // 0x3c8b98: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c8b98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c8b9c:
    // 0x3c8b9c: 0x320f809  jalr        $t9
label_3c8ba0:
    if (ctx->pc == 0x3C8BA0u) {
        ctx->pc = 0x3C8BA0u;
            // 0x3c8ba0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C8BA4u;
        goto label_3c8ba4;
    }
    ctx->pc = 0x3C8B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C8BA4u);
        ctx->pc = 0x3C8BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8B9Cu;
            // 0x3c8ba0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C8BA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C8BA4u; }
            if (ctx->pc != 0x3C8BA4u) { return; }
        }
        }
    }
    ctx->pc = 0x3C8BA4u;
label_3c8ba4:
    // 0x3c8ba4: 0xc6420054  lwc1        $f2, 0x54($s2)
    ctx->pc = 0x3c8ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c8ba8:
    // 0x3c8ba8: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x3c8ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_3c8bac:
    // 0x3c8bac: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x3c8bacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3c8bb0:
    // 0x3c8bb0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3c8bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3c8bb4:
    // 0x3c8bb4: 0xc6410070  lwc1        $f1, 0x70($s2)
    ctx->pc = 0x3c8bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c8bb8:
    // 0x3c8bb8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3c8bb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3c8bbc:
    // 0x3c8bbc: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3c8bbcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_3c8bc0:
    // 0x3c8bc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c8bc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c8bc4:
    // 0x3c8bc4: 0x0  nop
    ctx->pc = 0x3c8bc4u;
    // NOP
label_3c8bc8:
    // 0x3c8bc8: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x3c8bc8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_3c8bcc:
    // 0x3c8bcc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c8bccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c8bd0:
    // 0x3c8bd0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3c8bd4:
    if (ctx->pc == 0x3C8BD4u) {
        ctx->pc = 0x3C8BD4u;
            // 0x3c8bd4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3C8BD8u;
        goto label_3c8bd8;
    }
    ctx->pc = 0x3C8BD0u;
    {
        const bool branch_taken_0x3c8bd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c8bd0) {
            ctx->pc = 0x3C8BD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8BD0u;
            // 0x3c8bd4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C8BE8u;
            goto label_3c8be8;
        }
    }
    ctx->pc = 0x3C8BD8u;
label_3c8bd8:
    // 0x3c8bd8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c8bd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c8bdc:
    // 0x3c8bdc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3c8bdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3c8be0:
    // 0x3c8be0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3c8be4:
    if (ctx->pc == 0x3C8BE4u) {
        ctx->pc = 0x3C8BE4u;
            // 0x3c8be4: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3C8BE8u;
        goto label_3c8be8;
    }
    ctx->pc = 0x3C8BE0u;
    {
        const bool branch_taken_0x3c8be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8BE0u;
            // 0x3c8be4: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8be0) {
            ctx->pc = 0x3C8C00u;
            goto label_3c8c00;
        }
    }
    ctx->pc = 0x3C8BE8u;
label_3c8be8:
    // 0x3c8be8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3c8be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3c8bec:
    // 0x3c8bec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c8becu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c8bf0:
    // 0x3c8bf0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3c8bf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3c8bf4:
    // 0x3c8bf4: 0x0  nop
    ctx->pc = 0x3c8bf4u;
    // NOP
label_3c8bf8:
    // 0x3c8bf8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3c8bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3c8bfc:
    // 0x3c8bfc: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3c8bfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3c8c00:
    // 0x3c8c00: 0x1000003b  b           . + 4 + (0x3B << 2)
label_3c8c04:
    if (ctx->pc == 0x3C8C04u) {
        ctx->pc = 0x3C8C04u;
            // 0x3c8c04: 0xa2440060  sb          $a0, 0x60($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 96), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x3C8C08u;
        goto label_3c8c08;
    }
    ctx->pc = 0x3C8C00u;
    {
        const bool branch_taken_0x3c8c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8C00u;
            // 0x3c8c04: 0xa2440060  sb          $a0, 0x60($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 96), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8c00) {
            ctx->pc = 0x3C8CF0u;
            goto label_3c8cf0;
        }
    }
    ctx->pc = 0x3C8C08u;
label_3c8c08:
    // 0x3c8c08: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3c8c08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3c8c0c:
    // 0x3c8c0c: 0x320f809  jalr        $t9
label_3c8c10:
    if (ctx->pc == 0x3C8C10u) {
        ctx->pc = 0x3C8C14u;
        goto label_3c8c14;
    }
    ctx->pc = 0x3C8C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C8C14u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C8C14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C8C14u; }
            if (ctx->pc != 0x3C8C14u) { return; }
        }
        }
    }
    ctx->pc = 0x3C8C14u;
label_3c8c14:
    // 0x3c8c14: 0x10000036  b           . + 4 + (0x36 << 2)
label_3c8c18:
    if (ctx->pc == 0x3C8C18u) {
        ctx->pc = 0x3C8C1Cu;
        goto label_3c8c1c;
    }
    ctx->pc = 0x3C8C14u;
    {
        const bool branch_taken_0x3c8c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8c14) {
            ctx->pc = 0x3C8CF0u;
            goto label_3c8cf0;
        }
    }
    ctx->pc = 0x3C8C1Cu;
label_3c8c1c:
    // 0x3c8c1c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3c8c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3c8c20:
    // 0x3c8c20: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c8c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3c8c24:
    // 0x3c8c24: 0x8c4489d0  lw          $a0, -0x7630($v0)
    ctx->pc = 0x3c8c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_3c8c28:
    // 0x3c8c28: 0x8c700e80  lw          $s0, 0xE80($v1)
    ctx->pc = 0x3c8c28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3c8c2c:
    // 0x3c8c2c: 0x8c850084  lw          $a1, 0x84($a0)
    ctx->pc = 0x3c8c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_3c8c30:
    // 0x3c8c30: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3c8c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3c8c34:
    // 0x3c8c34: 0x10a30019  beq         $a1, $v1, . + 4 + (0x19 << 2)
label_3c8c38:
    if (ctx->pc == 0x3C8C38u) {
        ctx->pc = 0x3C8C3Cu;
        goto label_3c8c3c;
    }
    ctx->pc = 0x3C8C34u;
    {
        const bool branch_taken_0x3c8c34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c8c34) {
            ctx->pc = 0x3C8C9Cu;
            goto label_3c8c9c;
        }
    }
    ctx->pc = 0x3C8C3Cu;
label_3c8c3c:
    // 0x3c8c3c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3c8c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c8c40:
    // 0x3c8c40: 0x10a20012  beq         $a1, $v0, . + 4 + (0x12 << 2)
label_3c8c44:
    if (ctx->pc == 0x3C8C44u) {
        ctx->pc = 0x3C8C48u;
        goto label_3c8c48;
    }
    ctx->pc = 0x3C8C40u;
    {
        const bool branch_taken_0x3c8c40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c8c40) {
            ctx->pc = 0x3C8C8Cu;
            goto label_3c8c8c;
        }
    }
    ctx->pc = 0x3C8C48u;
label_3c8c48:
    // 0x3c8c48: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3c8c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3c8c4c:
    // 0x3c8c4c: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
label_3c8c50:
    if (ctx->pc == 0x3C8C50u) {
        ctx->pc = 0x3C8C54u;
        goto label_3c8c54;
    }
    ctx->pc = 0x3C8C4Cu;
    {
        const bool branch_taken_0x3c8c4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c8c4c) {
            ctx->pc = 0x3C8C74u;
            goto label_3c8c74;
        }
    }
    ctx->pc = 0x3C8C54u;
label_3c8c54:
    // 0x3c8c54: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3c8c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c8c58:
    // 0x3c8c58: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_3c8c5c:
    if (ctx->pc == 0x3C8C5Cu) {
        ctx->pc = 0x3C8C60u;
        goto label_3c8c60;
    }
    ctx->pc = 0x3C8C58u;
    {
        const bool branch_taken_0x3c8c58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c8c58) {
            ctx->pc = 0x3C8C74u;
            goto label_3c8c74;
        }
    }
    ctx->pc = 0x3C8C60u;
label_3c8c60:
    // 0x3c8c60: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3c8c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3c8c64:
    // 0x3c8c64: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_3c8c68:
    if (ctx->pc == 0x3C8C68u) {
        ctx->pc = 0x3C8C6Cu;
        goto label_3c8c6c;
    }
    ctx->pc = 0x3C8C64u;
    {
        const bool branch_taken_0x3c8c64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c8c64) {
            ctx->pc = 0x3C8C74u;
            goto label_3c8c74;
        }
    }
    ctx->pc = 0x3C8C6Cu;
label_3c8c6c:
    // 0x3c8c6c: 0x1000000d  b           . + 4 + (0xD << 2)
label_3c8c70:
    if (ctx->pc == 0x3C8C70u) {
        ctx->pc = 0x3C8C74u;
        goto label_3c8c74;
    }
    ctx->pc = 0x3C8C6Cu;
    {
        const bool branch_taken_0x3c8c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8c6c) {
            ctx->pc = 0x3C8CA4u;
            goto label_3c8ca4;
        }
    }
    ctx->pc = 0x3C8C74u;
label_3c8c74:
    // 0x3c8c74: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3c8c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3c8c78:
    // 0x3c8c78: 0x8c4489d0  lw          $a0, -0x7630($v0)
    ctx->pc = 0x3c8c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_3c8c7c:
    // 0x3c8c7c: 0xc0b909c  jal         func_2E4270
label_3c8c80:
    if (ctx->pc == 0x3C8C80u) {
        ctx->pc = 0x3C8C80u;
            // 0x3c8c80: 0x8e050968  lw          $a1, 0x968($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
        ctx->pc = 0x3C8C84u;
        goto label_3c8c84;
    }
    ctx->pc = 0x3C8C7Cu;
    SET_GPR_U32(ctx, 31, 0x3C8C84u);
    ctx->pc = 0x3C8C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8C7Cu;
            // 0x3c8c80: 0x8e050968  lw          $a1, 0x968($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4270u;
    if (runtime->hasFunction(0x2E4270u)) {
        auto targetFn = runtime->lookupFunction(0x2E4270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8C84u; }
        if (ctx->pc != 0x3C8C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4270_0x2e4270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8C84u; }
        if (ctx->pc != 0x3C8C84u) { return; }
    }
    ctx->pc = 0x3C8C84u;
label_3c8c84:
    // 0x3c8c84: 0x10000008  b           . + 4 + (0x8 << 2)
label_3c8c88:
    if (ctx->pc == 0x3C8C88u) {
        ctx->pc = 0x3C8C88u;
            // 0x3c8c88: 0x8e03078c  lw          $v1, 0x78C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1932)));
        ctx->pc = 0x3C8C8Cu;
        goto label_3c8c8c;
    }
    ctx->pc = 0x3C8C84u;
    {
        const bool branch_taken_0x3c8c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8C84u;
            // 0x3c8c88: 0x8e03078c  lw          $v1, 0x78C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8c84) {
            ctx->pc = 0x3C8CA8u;
            goto label_3c8ca8;
        }
    }
    ctx->pc = 0x3C8C8Cu;
label_3c8c8c:
    // 0x3c8c8c: 0xc0b8c3c  jal         func_2E30F0
label_3c8c90:
    if (ctx->pc == 0x3C8C90u) {
        ctx->pc = 0x3C8C94u;
        goto label_3c8c94;
    }
    ctx->pc = 0x3C8C8Cu;
    SET_GPR_U32(ctx, 31, 0x3C8C94u);
    ctx->pc = 0x2E30F0u;
    if (runtime->hasFunction(0x2E30F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E30F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8C94u; }
        if (ctx->pc != 0x3C8C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E30F0_0x2e30f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8C94u; }
        if (ctx->pc != 0x3C8C94u) { return; }
    }
    ctx->pc = 0x3C8C94u;
label_3c8c94:
    // 0x3c8c94: 0x10000003  b           . + 4 + (0x3 << 2)
label_3c8c98:
    if (ctx->pc == 0x3C8C98u) {
        ctx->pc = 0x3C8C9Cu;
        goto label_3c8c9c;
    }
    ctx->pc = 0x3C8C94u;
    {
        const bool branch_taken_0x3c8c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8c94) {
            ctx->pc = 0x3C8CA4u;
            goto label_3c8ca4;
        }
    }
    ctx->pc = 0x3C8C9Cu;
label_3c8c9c:
    // 0x3c8c9c: 0xc0b8c14  jal         func_2E3050
label_3c8ca0:
    if (ctx->pc == 0x3C8CA0u) {
        ctx->pc = 0x3C8CA4u;
        goto label_3c8ca4;
    }
    ctx->pc = 0x3C8C9Cu;
    SET_GPR_U32(ctx, 31, 0x3C8CA4u);
    ctx->pc = 0x2E3050u;
    if (runtime->hasFunction(0x2E3050u)) {
        auto targetFn = runtime->lookupFunction(0x2E3050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8CA4u; }
        if (ctx->pc != 0x3C8CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E3050_0x2e3050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8CA4u; }
        if (ctx->pc != 0x3C8CA4u) { return; }
    }
    ctx->pc = 0x3C8CA4u;
label_3c8ca4:
    // 0x3c8ca4: 0x8e03078c  lw          $v1, 0x78C($s0)
    ctx->pc = 0x3c8ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1932)));
label_3c8ca8:
    // 0x3c8ca8: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_3c8cac:
    if (ctx->pc == 0x3C8CACu) {
        ctx->pc = 0x3C8CB0u;
        goto label_3c8cb0;
    }
    ctx->pc = 0x3C8CA8u;
    {
        const bool branch_taken_0x3c8ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c8ca8) {
            ctx->pc = 0x3C8CDCu;
            goto label_3c8cdc;
        }
    }
    ctx->pc = 0x3C8CB0u;
label_3c8cb0:
    // 0x3c8cb0: 0x8e230110  lw          $v1, 0x110($s1)
    ctx->pc = 0x3c8cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_3c8cb4:
    // 0x3c8cb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c8cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c8cb8:
    // 0x3c8cb8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_3c8cbc:
    if (ctx->pc == 0x3C8CBCu) {
        ctx->pc = 0x3C8CC0u;
        goto label_3c8cc0;
    }
    ctx->pc = 0x3C8CB8u;
    {
        const bool branch_taken_0x3c8cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c8cb8) {
            ctx->pc = 0x3C8CDCu;
            goto label_3c8cdc;
        }
    }
    ctx->pc = 0x3C8CC0u;
label_3c8cc0:
    // 0x3c8cc0: 0xc040180  jal         func_100600
label_3c8cc4:
    if (ctx->pc == 0x3C8CC4u) {
        ctx->pc = 0x3C8CC4u;
            // 0x3c8cc4: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x3C8CC8u;
        goto label_3c8cc8;
    }
    ctx->pc = 0x3C8CC0u;
    SET_GPR_U32(ctx, 31, 0x3C8CC8u);
    ctx->pc = 0x3C8CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8CC0u;
            // 0x3c8cc4: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8CC8u; }
        if (ctx->pc != 0x3C8CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8CC8u; }
        if (ctx->pc != 0x3C8CC8u) { return; }
    }
    ctx->pc = 0x3C8CC8u;
label_3c8cc8:
    // 0x3c8cc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3c8ccc:
    if (ctx->pc == 0x3C8CCCu) {
        ctx->pc = 0x3C8CD0u;
        goto label_3c8cd0;
    }
    ctx->pc = 0x3C8CC8u;
    {
        const bool branch_taken_0x3c8cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8cc8) {
            ctx->pc = 0x3C8CDCu;
            goto label_3c8cdc;
        }
    }
    ctx->pc = 0x3C8CD0u;
label_3c8cd0:
    // 0x3c8cd0: 0x8e450058  lw          $a1, 0x58($s2)
    ctx->pc = 0x3c8cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_3c8cd4:
    // 0x3c8cd4: 0xc0f3a30  jal         func_3CE8C0
label_3c8cd8:
    if (ctx->pc == 0x3C8CD8u) {
        ctx->pc = 0x3C8CD8u;
            // 0x3c8cd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C8CDCu;
        goto label_3c8cdc;
    }
    ctx->pc = 0x3C8CD4u;
    SET_GPR_U32(ctx, 31, 0x3C8CDCu);
    ctx->pc = 0x3C8CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8CD4u;
            // 0x3c8cd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3CE8C0u;
    if (runtime->hasFunction(0x3CE8C0u)) {
        auto targetFn = runtime->lookupFunction(0x3CE8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8CDCu; }
        if (ctx->pc != 0x3C8CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CE8C0_0x3ce8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8CDCu; }
        if (ctx->pc != 0x3C8CDCu) { return; }
    }
    ctx->pc = 0x3C8CDCu;
label_3c8cdc:
    // 0x3c8cdc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3c8cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3c8ce0:
    // 0x3c8ce0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c8ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c8ce4:
    // 0x3c8ce4: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3c8ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3c8ce8:
    // 0x3c8ce8: 0xc057b7c  jal         func_15EDF0
label_3c8cec:
    if (ctx->pc == 0x3C8CECu) {
        ctx->pc = 0x3C8CECu;
            // 0x3c8cec: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3C8CF0u;
        goto label_3c8cf0;
    }
    ctx->pc = 0x3C8CE8u;
    SET_GPR_U32(ctx, 31, 0x3C8CF0u);
    ctx->pc = 0x3C8CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8CE8u;
            // 0x3c8cec: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8CF0u; }
        if (ctx->pc != 0x3C8CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8CF0u; }
        if (ctx->pc != 0x3C8CF0u) { return; }
    }
    ctx->pc = 0x3C8CF0u;
label_3c8cf0:
    // 0x3c8cf0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c8cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3c8cf4:
    // 0x3c8cf4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c8cf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c8cf8:
    // 0x3c8cf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c8cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c8cfc:
    // 0x3c8cfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c8cfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c8d00:
    // 0x3c8d00: 0x3e00008  jr          $ra
label_3c8d04:
    if (ctx->pc == 0x3C8D04u) {
        ctx->pc = 0x3C8D04u;
            // 0x3c8d04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3C8D08u;
        goto label_3c8d08;
    }
    ctx->pc = 0x3C8D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C8D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8D00u;
            // 0x3c8d04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C8D08u;
label_3c8d08:
    // 0x3c8d08: 0x0  nop
    ctx->pc = 0x3c8d08u;
    // NOP
label_3c8d0c:
    // 0x3c8d0c: 0x0  nop
    ctx->pc = 0x3c8d0cu;
    // NOP
label_3c8d10:
    // 0x3c8d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c8d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3c8d14:
    // 0x3c8d14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c8d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3c8d18:
    // 0x3c8d18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c8d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c8d1c:
    // 0x3c8d1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c8d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c8d20:
    // 0x3c8d20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c8d20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c8d24:
    // 0x3c8d24: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_3c8d28:
    if (ctx->pc == 0x3C8D28u) {
        ctx->pc = 0x3C8D28u;
            // 0x3c8d28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C8D2Cu;
        goto label_3c8d2c;
    }
    ctx->pc = 0x3C8D24u;
    {
        const bool branch_taken_0x3c8d24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8D24u;
            // 0x3c8d28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8d24) {
            ctx->pc = 0x3C8D58u;
            goto label_3c8d58;
        }
    }
    ctx->pc = 0x3C8D2Cu;
label_3c8d2c:
    // 0x3c8d2c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3c8d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3c8d30:
    // 0x3c8d30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c8d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c8d34:
    // 0x3c8d34: 0x24428e40  addiu       $v0, $v0, -0x71C0
    ctx->pc = 0x3c8d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938176));
label_3c8d38:
    // 0x3c8d38: 0xc0ee744  jal         func_3B9D10
label_3c8d3c:
    if (ctx->pc == 0x3C8D3Cu) {
        ctx->pc = 0x3C8D3Cu;
            // 0x3c8d3c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3C8D40u;
        goto label_3c8d40;
    }
    ctx->pc = 0x3C8D38u;
    SET_GPR_U32(ctx, 31, 0x3C8D40u);
    ctx->pc = 0x3C8D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8D38u;
            // 0x3c8d3c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D10u;
    if (runtime->hasFunction(0x3B9D10u)) {
        auto targetFn = runtime->lookupFunction(0x3B9D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8D40u; }
        if (ctx->pc != 0x3C8D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9D10_0x3b9d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8D40u; }
        if (ctx->pc != 0x3C8D40u) { return; }
    }
    ctx->pc = 0x3C8D40u;
label_3c8d40:
    // 0x3c8d40: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3c8d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3c8d44:
    // 0x3c8d44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3c8d44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3c8d48:
    // 0x3c8d48: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3c8d4c:
    if (ctx->pc == 0x3C8D4Cu) {
        ctx->pc = 0x3C8D4Cu;
            // 0x3c8d4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C8D50u;
        goto label_3c8d50;
    }
    ctx->pc = 0x3C8D48u;
    {
        const bool branch_taken_0x3c8d48 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3c8d48) {
            ctx->pc = 0x3C8D4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8D48u;
            // 0x3c8d4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C8D5Cu;
            goto label_3c8d5c;
        }
    }
    ctx->pc = 0x3C8D50u;
label_3c8d50:
    // 0x3c8d50: 0xc0400a8  jal         func_1002A0
label_3c8d54:
    if (ctx->pc == 0x3C8D54u) {
        ctx->pc = 0x3C8D54u;
            // 0x3c8d54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C8D58u;
        goto label_3c8d58;
    }
    ctx->pc = 0x3C8D50u;
    SET_GPR_U32(ctx, 31, 0x3C8D58u);
    ctx->pc = 0x3C8D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8D50u;
            // 0x3c8d54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8D58u; }
        if (ctx->pc != 0x3C8D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8D58u; }
        if (ctx->pc != 0x3C8D58u) { return; }
    }
    ctx->pc = 0x3C8D58u;
label_3c8d58:
    // 0x3c8d58: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3c8d58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c8d5c:
    // 0x3c8d5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c8d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3c8d60:
    // 0x3c8d60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c8d60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c8d64:
    // 0x3c8d64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c8d64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c8d68:
    // 0x3c8d68: 0x3e00008  jr          $ra
label_3c8d6c:
    if (ctx->pc == 0x3C8D6Cu) {
        ctx->pc = 0x3C8D6Cu;
            // 0x3c8d6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3C8D70u;
        goto label_fallthrough_0x3c8d68;
    }
    ctx->pc = 0x3C8D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C8D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8D68u;
            // 0x3c8d6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3c8d68:
    ctx->pc = 0x3C8D70u;
}
