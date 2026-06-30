#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E8780
// Address: 0x3e8780 - 0x3e9130
void sub_003E8780_0x3e8780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8780_0x3e8780");
#endif

    switch (ctx->pc) {
        case 0x3e8780u: goto label_3e8780;
        case 0x3e8784u: goto label_3e8784;
        case 0x3e8788u: goto label_3e8788;
        case 0x3e878cu: goto label_3e878c;
        case 0x3e8790u: goto label_3e8790;
        case 0x3e8794u: goto label_3e8794;
        case 0x3e8798u: goto label_3e8798;
        case 0x3e879cu: goto label_3e879c;
        case 0x3e87a0u: goto label_3e87a0;
        case 0x3e87a4u: goto label_3e87a4;
        case 0x3e87a8u: goto label_3e87a8;
        case 0x3e87acu: goto label_3e87ac;
        case 0x3e87b0u: goto label_3e87b0;
        case 0x3e87b4u: goto label_3e87b4;
        case 0x3e87b8u: goto label_3e87b8;
        case 0x3e87bcu: goto label_3e87bc;
        case 0x3e87c0u: goto label_3e87c0;
        case 0x3e87c4u: goto label_3e87c4;
        case 0x3e87c8u: goto label_3e87c8;
        case 0x3e87ccu: goto label_3e87cc;
        case 0x3e87d0u: goto label_3e87d0;
        case 0x3e87d4u: goto label_3e87d4;
        case 0x3e87d8u: goto label_3e87d8;
        case 0x3e87dcu: goto label_3e87dc;
        case 0x3e87e0u: goto label_3e87e0;
        case 0x3e87e4u: goto label_3e87e4;
        case 0x3e87e8u: goto label_3e87e8;
        case 0x3e87ecu: goto label_3e87ec;
        case 0x3e87f0u: goto label_3e87f0;
        case 0x3e87f4u: goto label_3e87f4;
        case 0x3e87f8u: goto label_3e87f8;
        case 0x3e87fcu: goto label_3e87fc;
        case 0x3e8800u: goto label_3e8800;
        case 0x3e8804u: goto label_3e8804;
        case 0x3e8808u: goto label_3e8808;
        case 0x3e880cu: goto label_3e880c;
        case 0x3e8810u: goto label_3e8810;
        case 0x3e8814u: goto label_3e8814;
        case 0x3e8818u: goto label_3e8818;
        case 0x3e881cu: goto label_3e881c;
        case 0x3e8820u: goto label_3e8820;
        case 0x3e8824u: goto label_3e8824;
        case 0x3e8828u: goto label_3e8828;
        case 0x3e882cu: goto label_3e882c;
        case 0x3e8830u: goto label_3e8830;
        case 0x3e8834u: goto label_3e8834;
        case 0x3e8838u: goto label_3e8838;
        case 0x3e883cu: goto label_3e883c;
        case 0x3e8840u: goto label_3e8840;
        case 0x3e8844u: goto label_3e8844;
        case 0x3e8848u: goto label_3e8848;
        case 0x3e884cu: goto label_3e884c;
        case 0x3e8850u: goto label_3e8850;
        case 0x3e8854u: goto label_3e8854;
        case 0x3e8858u: goto label_3e8858;
        case 0x3e885cu: goto label_3e885c;
        case 0x3e8860u: goto label_3e8860;
        case 0x3e8864u: goto label_3e8864;
        case 0x3e8868u: goto label_3e8868;
        case 0x3e886cu: goto label_3e886c;
        case 0x3e8870u: goto label_3e8870;
        case 0x3e8874u: goto label_3e8874;
        case 0x3e8878u: goto label_3e8878;
        case 0x3e887cu: goto label_3e887c;
        case 0x3e8880u: goto label_3e8880;
        case 0x3e8884u: goto label_3e8884;
        case 0x3e8888u: goto label_3e8888;
        case 0x3e888cu: goto label_3e888c;
        case 0x3e8890u: goto label_3e8890;
        case 0x3e8894u: goto label_3e8894;
        case 0x3e8898u: goto label_3e8898;
        case 0x3e889cu: goto label_3e889c;
        case 0x3e88a0u: goto label_3e88a0;
        case 0x3e88a4u: goto label_3e88a4;
        case 0x3e88a8u: goto label_3e88a8;
        case 0x3e88acu: goto label_3e88ac;
        case 0x3e88b0u: goto label_3e88b0;
        case 0x3e88b4u: goto label_3e88b4;
        case 0x3e88b8u: goto label_3e88b8;
        case 0x3e88bcu: goto label_3e88bc;
        case 0x3e88c0u: goto label_3e88c0;
        case 0x3e88c4u: goto label_3e88c4;
        case 0x3e88c8u: goto label_3e88c8;
        case 0x3e88ccu: goto label_3e88cc;
        case 0x3e88d0u: goto label_3e88d0;
        case 0x3e88d4u: goto label_3e88d4;
        case 0x3e88d8u: goto label_3e88d8;
        case 0x3e88dcu: goto label_3e88dc;
        case 0x3e88e0u: goto label_3e88e0;
        case 0x3e88e4u: goto label_3e88e4;
        case 0x3e88e8u: goto label_3e88e8;
        case 0x3e88ecu: goto label_3e88ec;
        case 0x3e88f0u: goto label_3e88f0;
        case 0x3e88f4u: goto label_3e88f4;
        case 0x3e88f8u: goto label_3e88f8;
        case 0x3e88fcu: goto label_3e88fc;
        case 0x3e8900u: goto label_3e8900;
        case 0x3e8904u: goto label_3e8904;
        case 0x3e8908u: goto label_3e8908;
        case 0x3e890cu: goto label_3e890c;
        case 0x3e8910u: goto label_3e8910;
        case 0x3e8914u: goto label_3e8914;
        case 0x3e8918u: goto label_3e8918;
        case 0x3e891cu: goto label_3e891c;
        case 0x3e8920u: goto label_3e8920;
        case 0x3e8924u: goto label_3e8924;
        case 0x3e8928u: goto label_3e8928;
        case 0x3e892cu: goto label_3e892c;
        case 0x3e8930u: goto label_3e8930;
        case 0x3e8934u: goto label_3e8934;
        case 0x3e8938u: goto label_3e8938;
        case 0x3e893cu: goto label_3e893c;
        case 0x3e8940u: goto label_3e8940;
        case 0x3e8944u: goto label_3e8944;
        case 0x3e8948u: goto label_3e8948;
        case 0x3e894cu: goto label_3e894c;
        case 0x3e8950u: goto label_3e8950;
        case 0x3e8954u: goto label_3e8954;
        case 0x3e8958u: goto label_3e8958;
        case 0x3e895cu: goto label_3e895c;
        case 0x3e8960u: goto label_3e8960;
        case 0x3e8964u: goto label_3e8964;
        case 0x3e8968u: goto label_3e8968;
        case 0x3e896cu: goto label_3e896c;
        case 0x3e8970u: goto label_3e8970;
        case 0x3e8974u: goto label_3e8974;
        case 0x3e8978u: goto label_3e8978;
        case 0x3e897cu: goto label_3e897c;
        case 0x3e8980u: goto label_3e8980;
        case 0x3e8984u: goto label_3e8984;
        case 0x3e8988u: goto label_3e8988;
        case 0x3e898cu: goto label_3e898c;
        case 0x3e8990u: goto label_3e8990;
        case 0x3e8994u: goto label_3e8994;
        case 0x3e8998u: goto label_3e8998;
        case 0x3e899cu: goto label_3e899c;
        case 0x3e89a0u: goto label_3e89a0;
        case 0x3e89a4u: goto label_3e89a4;
        case 0x3e89a8u: goto label_3e89a8;
        case 0x3e89acu: goto label_3e89ac;
        case 0x3e89b0u: goto label_3e89b0;
        case 0x3e89b4u: goto label_3e89b4;
        case 0x3e89b8u: goto label_3e89b8;
        case 0x3e89bcu: goto label_3e89bc;
        case 0x3e89c0u: goto label_3e89c0;
        case 0x3e89c4u: goto label_3e89c4;
        case 0x3e89c8u: goto label_3e89c8;
        case 0x3e89ccu: goto label_3e89cc;
        case 0x3e89d0u: goto label_3e89d0;
        case 0x3e89d4u: goto label_3e89d4;
        case 0x3e89d8u: goto label_3e89d8;
        case 0x3e89dcu: goto label_3e89dc;
        case 0x3e89e0u: goto label_3e89e0;
        case 0x3e89e4u: goto label_3e89e4;
        case 0x3e89e8u: goto label_3e89e8;
        case 0x3e89ecu: goto label_3e89ec;
        case 0x3e89f0u: goto label_3e89f0;
        case 0x3e89f4u: goto label_3e89f4;
        case 0x3e89f8u: goto label_3e89f8;
        case 0x3e89fcu: goto label_3e89fc;
        case 0x3e8a00u: goto label_3e8a00;
        case 0x3e8a04u: goto label_3e8a04;
        case 0x3e8a08u: goto label_3e8a08;
        case 0x3e8a0cu: goto label_3e8a0c;
        case 0x3e8a10u: goto label_3e8a10;
        case 0x3e8a14u: goto label_3e8a14;
        case 0x3e8a18u: goto label_3e8a18;
        case 0x3e8a1cu: goto label_3e8a1c;
        case 0x3e8a20u: goto label_3e8a20;
        case 0x3e8a24u: goto label_3e8a24;
        case 0x3e8a28u: goto label_3e8a28;
        case 0x3e8a2cu: goto label_3e8a2c;
        case 0x3e8a30u: goto label_3e8a30;
        case 0x3e8a34u: goto label_3e8a34;
        case 0x3e8a38u: goto label_3e8a38;
        case 0x3e8a3cu: goto label_3e8a3c;
        case 0x3e8a40u: goto label_3e8a40;
        case 0x3e8a44u: goto label_3e8a44;
        case 0x3e8a48u: goto label_3e8a48;
        case 0x3e8a4cu: goto label_3e8a4c;
        case 0x3e8a50u: goto label_3e8a50;
        case 0x3e8a54u: goto label_3e8a54;
        case 0x3e8a58u: goto label_3e8a58;
        case 0x3e8a5cu: goto label_3e8a5c;
        case 0x3e8a60u: goto label_3e8a60;
        case 0x3e8a64u: goto label_3e8a64;
        case 0x3e8a68u: goto label_3e8a68;
        case 0x3e8a6cu: goto label_3e8a6c;
        case 0x3e8a70u: goto label_3e8a70;
        case 0x3e8a74u: goto label_3e8a74;
        case 0x3e8a78u: goto label_3e8a78;
        case 0x3e8a7cu: goto label_3e8a7c;
        case 0x3e8a80u: goto label_3e8a80;
        case 0x3e8a84u: goto label_3e8a84;
        case 0x3e8a88u: goto label_3e8a88;
        case 0x3e8a8cu: goto label_3e8a8c;
        case 0x3e8a90u: goto label_3e8a90;
        case 0x3e8a94u: goto label_3e8a94;
        case 0x3e8a98u: goto label_3e8a98;
        case 0x3e8a9cu: goto label_3e8a9c;
        case 0x3e8aa0u: goto label_3e8aa0;
        case 0x3e8aa4u: goto label_3e8aa4;
        case 0x3e8aa8u: goto label_3e8aa8;
        case 0x3e8aacu: goto label_3e8aac;
        case 0x3e8ab0u: goto label_3e8ab0;
        case 0x3e8ab4u: goto label_3e8ab4;
        case 0x3e8ab8u: goto label_3e8ab8;
        case 0x3e8abcu: goto label_3e8abc;
        case 0x3e8ac0u: goto label_3e8ac0;
        case 0x3e8ac4u: goto label_3e8ac4;
        case 0x3e8ac8u: goto label_3e8ac8;
        case 0x3e8accu: goto label_3e8acc;
        case 0x3e8ad0u: goto label_3e8ad0;
        case 0x3e8ad4u: goto label_3e8ad4;
        case 0x3e8ad8u: goto label_3e8ad8;
        case 0x3e8adcu: goto label_3e8adc;
        case 0x3e8ae0u: goto label_3e8ae0;
        case 0x3e8ae4u: goto label_3e8ae4;
        case 0x3e8ae8u: goto label_3e8ae8;
        case 0x3e8aecu: goto label_3e8aec;
        case 0x3e8af0u: goto label_3e8af0;
        case 0x3e8af4u: goto label_3e8af4;
        case 0x3e8af8u: goto label_3e8af8;
        case 0x3e8afcu: goto label_3e8afc;
        case 0x3e8b00u: goto label_3e8b00;
        case 0x3e8b04u: goto label_3e8b04;
        case 0x3e8b08u: goto label_3e8b08;
        case 0x3e8b0cu: goto label_3e8b0c;
        case 0x3e8b10u: goto label_3e8b10;
        case 0x3e8b14u: goto label_3e8b14;
        case 0x3e8b18u: goto label_3e8b18;
        case 0x3e8b1cu: goto label_3e8b1c;
        case 0x3e8b20u: goto label_3e8b20;
        case 0x3e8b24u: goto label_3e8b24;
        case 0x3e8b28u: goto label_3e8b28;
        case 0x3e8b2cu: goto label_3e8b2c;
        case 0x3e8b30u: goto label_3e8b30;
        case 0x3e8b34u: goto label_3e8b34;
        case 0x3e8b38u: goto label_3e8b38;
        case 0x3e8b3cu: goto label_3e8b3c;
        case 0x3e8b40u: goto label_3e8b40;
        case 0x3e8b44u: goto label_3e8b44;
        case 0x3e8b48u: goto label_3e8b48;
        case 0x3e8b4cu: goto label_3e8b4c;
        case 0x3e8b50u: goto label_3e8b50;
        case 0x3e8b54u: goto label_3e8b54;
        case 0x3e8b58u: goto label_3e8b58;
        case 0x3e8b5cu: goto label_3e8b5c;
        case 0x3e8b60u: goto label_3e8b60;
        case 0x3e8b64u: goto label_3e8b64;
        case 0x3e8b68u: goto label_3e8b68;
        case 0x3e8b6cu: goto label_3e8b6c;
        case 0x3e8b70u: goto label_3e8b70;
        case 0x3e8b74u: goto label_3e8b74;
        case 0x3e8b78u: goto label_3e8b78;
        case 0x3e8b7cu: goto label_3e8b7c;
        case 0x3e8b80u: goto label_3e8b80;
        case 0x3e8b84u: goto label_3e8b84;
        case 0x3e8b88u: goto label_3e8b88;
        case 0x3e8b8cu: goto label_3e8b8c;
        case 0x3e8b90u: goto label_3e8b90;
        case 0x3e8b94u: goto label_3e8b94;
        case 0x3e8b98u: goto label_3e8b98;
        case 0x3e8b9cu: goto label_3e8b9c;
        case 0x3e8ba0u: goto label_3e8ba0;
        case 0x3e8ba4u: goto label_3e8ba4;
        case 0x3e8ba8u: goto label_3e8ba8;
        case 0x3e8bacu: goto label_3e8bac;
        case 0x3e8bb0u: goto label_3e8bb0;
        case 0x3e8bb4u: goto label_3e8bb4;
        case 0x3e8bb8u: goto label_3e8bb8;
        case 0x3e8bbcu: goto label_3e8bbc;
        case 0x3e8bc0u: goto label_3e8bc0;
        case 0x3e8bc4u: goto label_3e8bc4;
        case 0x3e8bc8u: goto label_3e8bc8;
        case 0x3e8bccu: goto label_3e8bcc;
        case 0x3e8bd0u: goto label_3e8bd0;
        case 0x3e8bd4u: goto label_3e8bd4;
        case 0x3e8bd8u: goto label_3e8bd8;
        case 0x3e8bdcu: goto label_3e8bdc;
        case 0x3e8be0u: goto label_3e8be0;
        case 0x3e8be4u: goto label_3e8be4;
        case 0x3e8be8u: goto label_3e8be8;
        case 0x3e8becu: goto label_3e8bec;
        case 0x3e8bf0u: goto label_3e8bf0;
        case 0x3e8bf4u: goto label_3e8bf4;
        case 0x3e8bf8u: goto label_3e8bf8;
        case 0x3e8bfcu: goto label_3e8bfc;
        case 0x3e8c00u: goto label_3e8c00;
        case 0x3e8c04u: goto label_3e8c04;
        case 0x3e8c08u: goto label_3e8c08;
        case 0x3e8c0cu: goto label_3e8c0c;
        case 0x3e8c10u: goto label_3e8c10;
        case 0x3e8c14u: goto label_3e8c14;
        case 0x3e8c18u: goto label_3e8c18;
        case 0x3e8c1cu: goto label_3e8c1c;
        case 0x3e8c20u: goto label_3e8c20;
        case 0x3e8c24u: goto label_3e8c24;
        case 0x3e8c28u: goto label_3e8c28;
        case 0x3e8c2cu: goto label_3e8c2c;
        case 0x3e8c30u: goto label_3e8c30;
        case 0x3e8c34u: goto label_3e8c34;
        case 0x3e8c38u: goto label_3e8c38;
        case 0x3e8c3cu: goto label_3e8c3c;
        case 0x3e8c40u: goto label_3e8c40;
        case 0x3e8c44u: goto label_3e8c44;
        case 0x3e8c48u: goto label_3e8c48;
        case 0x3e8c4cu: goto label_3e8c4c;
        case 0x3e8c50u: goto label_3e8c50;
        case 0x3e8c54u: goto label_3e8c54;
        case 0x3e8c58u: goto label_3e8c58;
        case 0x3e8c5cu: goto label_3e8c5c;
        case 0x3e8c60u: goto label_3e8c60;
        case 0x3e8c64u: goto label_3e8c64;
        case 0x3e8c68u: goto label_3e8c68;
        case 0x3e8c6cu: goto label_3e8c6c;
        case 0x3e8c70u: goto label_3e8c70;
        case 0x3e8c74u: goto label_3e8c74;
        case 0x3e8c78u: goto label_3e8c78;
        case 0x3e8c7cu: goto label_3e8c7c;
        case 0x3e8c80u: goto label_3e8c80;
        case 0x3e8c84u: goto label_3e8c84;
        case 0x3e8c88u: goto label_3e8c88;
        case 0x3e8c8cu: goto label_3e8c8c;
        case 0x3e8c90u: goto label_3e8c90;
        case 0x3e8c94u: goto label_3e8c94;
        case 0x3e8c98u: goto label_3e8c98;
        case 0x3e8c9cu: goto label_3e8c9c;
        case 0x3e8ca0u: goto label_3e8ca0;
        case 0x3e8ca4u: goto label_3e8ca4;
        case 0x3e8ca8u: goto label_3e8ca8;
        case 0x3e8cacu: goto label_3e8cac;
        case 0x3e8cb0u: goto label_3e8cb0;
        case 0x3e8cb4u: goto label_3e8cb4;
        case 0x3e8cb8u: goto label_3e8cb8;
        case 0x3e8cbcu: goto label_3e8cbc;
        case 0x3e8cc0u: goto label_3e8cc0;
        case 0x3e8cc4u: goto label_3e8cc4;
        case 0x3e8cc8u: goto label_3e8cc8;
        case 0x3e8cccu: goto label_3e8ccc;
        case 0x3e8cd0u: goto label_3e8cd0;
        case 0x3e8cd4u: goto label_3e8cd4;
        case 0x3e8cd8u: goto label_3e8cd8;
        case 0x3e8cdcu: goto label_3e8cdc;
        case 0x3e8ce0u: goto label_3e8ce0;
        case 0x3e8ce4u: goto label_3e8ce4;
        case 0x3e8ce8u: goto label_3e8ce8;
        case 0x3e8cecu: goto label_3e8cec;
        case 0x3e8cf0u: goto label_3e8cf0;
        case 0x3e8cf4u: goto label_3e8cf4;
        case 0x3e8cf8u: goto label_3e8cf8;
        case 0x3e8cfcu: goto label_3e8cfc;
        case 0x3e8d00u: goto label_3e8d00;
        case 0x3e8d04u: goto label_3e8d04;
        case 0x3e8d08u: goto label_3e8d08;
        case 0x3e8d0cu: goto label_3e8d0c;
        case 0x3e8d10u: goto label_3e8d10;
        case 0x3e8d14u: goto label_3e8d14;
        case 0x3e8d18u: goto label_3e8d18;
        case 0x3e8d1cu: goto label_3e8d1c;
        case 0x3e8d20u: goto label_3e8d20;
        case 0x3e8d24u: goto label_3e8d24;
        case 0x3e8d28u: goto label_3e8d28;
        case 0x3e8d2cu: goto label_3e8d2c;
        case 0x3e8d30u: goto label_3e8d30;
        case 0x3e8d34u: goto label_3e8d34;
        case 0x3e8d38u: goto label_3e8d38;
        case 0x3e8d3cu: goto label_3e8d3c;
        case 0x3e8d40u: goto label_3e8d40;
        case 0x3e8d44u: goto label_3e8d44;
        case 0x3e8d48u: goto label_3e8d48;
        case 0x3e8d4cu: goto label_3e8d4c;
        case 0x3e8d50u: goto label_3e8d50;
        case 0x3e8d54u: goto label_3e8d54;
        case 0x3e8d58u: goto label_3e8d58;
        case 0x3e8d5cu: goto label_3e8d5c;
        case 0x3e8d60u: goto label_3e8d60;
        case 0x3e8d64u: goto label_3e8d64;
        case 0x3e8d68u: goto label_3e8d68;
        case 0x3e8d6cu: goto label_3e8d6c;
        case 0x3e8d70u: goto label_3e8d70;
        case 0x3e8d74u: goto label_3e8d74;
        case 0x3e8d78u: goto label_3e8d78;
        case 0x3e8d7cu: goto label_3e8d7c;
        case 0x3e8d80u: goto label_3e8d80;
        case 0x3e8d84u: goto label_3e8d84;
        case 0x3e8d88u: goto label_3e8d88;
        case 0x3e8d8cu: goto label_3e8d8c;
        case 0x3e8d90u: goto label_3e8d90;
        case 0x3e8d94u: goto label_3e8d94;
        case 0x3e8d98u: goto label_3e8d98;
        case 0x3e8d9cu: goto label_3e8d9c;
        case 0x3e8da0u: goto label_3e8da0;
        case 0x3e8da4u: goto label_3e8da4;
        case 0x3e8da8u: goto label_3e8da8;
        case 0x3e8dacu: goto label_3e8dac;
        case 0x3e8db0u: goto label_3e8db0;
        case 0x3e8db4u: goto label_3e8db4;
        case 0x3e8db8u: goto label_3e8db8;
        case 0x3e8dbcu: goto label_3e8dbc;
        case 0x3e8dc0u: goto label_3e8dc0;
        case 0x3e8dc4u: goto label_3e8dc4;
        case 0x3e8dc8u: goto label_3e8dc8;
        case 0x3e8dccu: goto label_3e8dcc;
        case 0x3e8dd0u: goto label_3e8dd0;
        case 0x3e8dd4u: goto label_3e8dd4;
        case 0x3e8dd8u: goto label_3e8dd8;
        case 0x3e8ddcu: goto label_3e8ddc;
        case 0x3e8de0u: goto label_3e8de0;
        case 0x3e8de4u: goto label_3e8de4;
        case 0x3e8de8u: goto label_3e8de8;
        case 0x3e8decu: goto label_3e8dec;
        case 0x3e8df0u: goto label_3e8df0;
        case 0x3e8df4u: goto label_3e8df4;
        case 0x3e8df8u: goto label_3e8df8;
        case 0x3e8dfcu: goto label_3e8dfc;
        case 0x3e8e00u: goto label_3e8e00;
        case 0x3e8e04u: goto label_3e8e04;
        case 0x3e8e08u: goto label_3e8e08;
        case 0x3e8e0cu: goto label_3e8e0c;
        case 0x3e8e10u: goto label_3e8e10;
        case 0x3e8e14u: goto label_3e8e14;
        case 0x3e8e18u: goto label_3e8e18;
        case 0x3e8e1cu: goto label_3e8e1c;
        case 0x3e8e20u: goto label_3e8e20;
        case 0x3e8e24u: goto label_3e8e24;
        case 0x3e8e28u: goto label_3e8e28;
        case 0x3e8e2cu: goto label_3e8e2c;
        case 0x3e8e30u: goto label_3e8e30;
        case 0x3e8e34u: goto label_3e8e34;
        case 0x3e8e38u: goto label_3e8e38;
        case 0x3e8e3cu: goto label_3e8e3c;
        case 0x3e8e40u: goto label_3e8e40;
        case 0x3e8e44u: goto label_3e8e44;
        case 0x3e8e48u: goto label_3e8e48;
        case 0x3e8e4cu: goto label_3e8e4c;
        case 0x3e8e50u: goto label_3e8e50;
        case 0x3e8e54u: goto label_3e8e54;
        case 0x3e8e58u: goto label_3e8e58;
        case 0x3e8e5cu: goto label_3e8e5c;
        case 0x3e8e60u: goto label_3e8e60;
        case 0x3e8e64u: goto label_3e8e64;
        case 0x3e8e68u: goto label_3e8e68;
        case 0x3e8e6cu: goto label_3e8e6c;
        case 0x3e8e70u: goto label_3e8e70;
        case 0x3e8e74u: goto label_3e8e74;
        case 0x3e8e78u: goto label_3e8e78;
        case 0x3e8e7cu: goto label_3e8e7c;
        case 0x3e8e80u: goto label_3e8e80;
        case 0x3e8e84u: goto label_3e8e84;
        case 0x3e8e88u: goto label_3e8e88;
        case 0x3e8e8cu: goto label_3e8e8c;
        case 0x3e8e90u: goto label_3e8e90;
        case 0x3e8e94u: goto label_3e8e94;
        case 0x3e8e98u: goto label_3e8e98;
        case 0x3e8e9cu: goto label_3e8e9c;
        case 0x3e8ea0u: goto label_3e8ea0;
        case 0x3e8ea4u: goto label_3e8ea4;
        case 0x3e8ea8u: goto label_3e8ea8;
        case 0x3e8eacu: goto label_3e8eac;
        case 0x3e8eb0u: goto label_3e8eb0;
        case 0x3e8eb4u: goto label_3e8eb4;
        case 0x3e8eb8u: goto label_3e8eb8;
        case 0x3e8ebcu: goto label_3e8ebc;
        case 0x3e8ec0u: goto label_3e8ec0;
        case 0x3e8ec4u: goto label_3e8ec4;
        case 0x3e8ec8u: goto label_3e8ec8;
        case 0x3e8eccu: goto label_3e8ecc;
        case 0x3e8ed0u: goto label_3e8ed0;
        case 0x3e8ed4u: goto label_3e8ed4;
        case 0x3e8ed8u: goto label_3e8ed8;
        case 0x3e8edcu: goto label_3e8edc;
        case 0x3e8ee0u: goto label_3e8ee0;
        case 0x3e8ee4u: goto label_3e8ee4;
        case 0x3e8ee8u: goto label_3e8ee8;
        case 0x3e8eecu: goto label_3e8eec;
        case 0x3e8ef0u: goto label_3e8ef0;
        case 0x3e8ef4u: goto label_3e8ef4;
        case 0x3e8ef8u: goto label_3e8ef8;
        case 0x3e8efcu: goto label_3e8efc;
        case 0x3e8f00u: goto label_3e8f00;
        case 0x3e8f04u: goto label_3e8f04;
        case 0x3e8f08u: goto label_3e8f08;
        case 0x3e8f0cu: goto label_3e8f0c;
        case 0x3e8f10u: goto label_3e8f10;
        case 0x3e8f14u: goto label_3e8f14;
        case 0x3e8f18u: goto label_3e8f18;
        case 0x3e8f1cu: goto label_3e8f1c;
        case 0x3e8f20u: goto label_3e8f20;
        case 0x3e8f24u: goto label_3e8f24;
        case 0x3e8f28u: goto label_3e8f28;
        case 0x3e8f2cu: goto label_3e8f2c;
        case 0x3e8f30u: goto label_3e8f30;
        case 0x3e8f34u: goto label_3e8f34;
        case 0x3e8f38u: goto label_3e8f38;
        case 0x3e8f3cu: goto label_3e8f3c;
        case 0x3e8f40u: goto label_3e8f40;
        case 0x3e8f44u: goto label_3e8f44;
        case 0x3e8f48u: goto label_3e8f48;
        case 0x3e8f4cu: goto label_3e8f4c;
        case 0x3e8f50u: goto label_3e8f50;
        case 0x3e8f54u: goto label_3e8f54;
        case 0x3e8f58u: goto label_3e8f58;
        case 0x3e8f5cu: goto label_3e8f5c;
        case 0x3e8f60u: goto label_3e8f60;
        case 0x3e8f64u: goto label_3e8f64;
        case 0x3e8f68u: goto label_3e8f68;
        case 0x3e8f6cu: goto label_3e8f6c;
        case 0x3e8f70u: goto label_3e8f70;
        case 0x3e8f74u: goto label_3e8f74;
        case 0x3e8f78u: goto label_3e8f78;
        case 0x3e8f7cu: goto label_3e8f7c;
        case 0x3e8f80u: goto label_3e8f80;
        case 0x3e8f84u: goto label_3e8f84;
        case 0x3e8f88u: goto label_3e8f88;
        case 0x3e8f8cu: goto label_3e8f8c;
        case 0x3e8f90u: goto label_3e8f90;
        case 0x3e8f94u: goto label_3e8f94;
        case 0x3e8f98u: goto label_3e8f98;
        case 0x3e8f9cu: goto label_3e8f9c;
        case 0x3e8fa0u: goto label_3e8fa0;
        case 0x3e8fa4u: goto label_3e8fa4;
        case 0x3e8fa8u: goto label_3e8fa8;
        case 0x3e8facu: goto label_3e8fac;
        case 0x3e8fb0u: goto label_3e8fb0;
        case 0x3e8fb4u: goto label_3e8fb4;
        case 0x3e8fb8u: goto label_3e8fb8;
        case 0x3e8fbcu: goto label_3e8fbc;
        case 0x3e8fc0u: goto label_3e8fc0;
        case 0x3e8fc4u: goto label_3e8fc4;
        case 0x3e8fc8u: goto label_3e8fc8;
        case 0x3e8fccu: goto label_3e8fcc;
        case 0x3e8fd0u: goto label_3e8fd0;
        case 0x3e8fd4u: goto label_3e8fd4;
        case 0x3e8fd8u: goto label_3e8fd8;
        case 0x3e8fdcu: goto label_3e8fdc;
        case 0x3e8fe0u: goto label_3e8fe0;
        case 0x3e8fe4u: goto label_3e8fe4;
        case 0x3e8fe8u: goto label_3e8fe8;
        case 0x3e8fecu: goto label_3e8fec;
        case 0x3e8ff0u: goto label_3e8ff0;
        case 0x3e8ff4u: goto label_3e8ff4;
        case 0x3e8ff8u: goto label_3e8ff8;
        case 0x3e8ffcu: goto label_3e8ffc;
        case 0x3e9000u: goto label_3e9000;
        case 0x3e9004u: goto label_3e9004;
        case 0x3e9008u: goto label_3e9008;
        case 0x3e900cu: goto label_3e900c;
        case 0x3e9010u: goto label_3e9010;
        case 0x3e9014u: goto label_3e9014;
        case 0x3e9018u: goto label_3e9018;
        case 0x3e901cu: goto label_3e901c;
        case 0x3e9020u: goto label_3e9020;
        case 0x3e9024u: goto label_3e9024;
        case 0x3e9028u: goto label_3e9028;
        case 0x3e902cu: goto label_3e902c;
        case 0x3e9030u: goto label_3e9030;
        case 0x3e9034u: goto label_3e9034;
        case 0x3e9038u: goto label_3e9038;
        case 0x3e903cu: goto label_3e903c;
        case 0x3e9040u: goto label_3e9040;
        case 0x3e9044u: goto label_3e9044;
        case 0x3e9048u: goto label_3e9048;
        case 0x3e904cu: goto label_3e904c;
        case 0x3e9050u: goto label_3e9050;
        case 0x3e9054u: goto label_3e9054;
        case 0x3e9058u: goto label_3e9058;
        case 0x3e905cu: goto label_3e905c;
        case 0x3e9060u: goto label_3e9060;
        case 0x3e9064u: goto label_3e9064;
        case 0x3e9068u: goto label_3e9068;
        case 0x3e906cu: goto label_3e906c;
        case 0x3e9070u: goto label_3e9070;
        case 0x3e9074u: goto label_3e9074;
        case 0x3e9078u: goto label_3e9078;
        case 0x3e907cu: goto label_3e907c;
        case 0x3e9080u: goto label_3e9080;
        case 0x3e9084u: goto label_3e9084;
        case 0x3e9088u: goto label_3e9088;
        case 0x3e908cu: goto label_3e908c;
        case 0x3e9090u: goto label_3e9090;
        case 0x3e9094u: goto label_3e9094;
        case 0x3e9098u: goto label_3e9098;
        case 0x3e909cu: goto label_3e909c;
        case 0x3e90a0u: goto label_3e90a0;
        case 0x3e90a4u: goto label_3e90a4;
        case 0x3e90a8u: goto label_3e90a8;
        case 0x3e90acu: goto label_3e90ac;
        case 0x3e90b0u: goto label_3e90b0;
        case 0x3e90b4u: goto label_3e90b4;
        case 0x3e90b8u: goto label_3e90b8;
        case 0x3e90bcu: goto label_3e90bc;
        case 0x3e90c0u: goto label_3e90c0;
        case 0x3e90c4u: goto label_3e90c4;
        case 0x3e90c8u: goto label_3e90c8;
        case 0x3e90ccu: goto label_3e90cc;
        case 0x3e90d0u: goto label_3e90d0;
        case 0x3e90d4u: goto label_3e90d4;
        case 0x3e90d8u: goto label_3e90d8;
        case 0x3e90dcu: goto label_3e90dc;
        case 0x3e90e0u: goto label_3e90e0;
        case 0x3e90e4u: goto label_3e90e4;
        case 0x3e90e8u: goto label_3e90e8;
        case 0x3e90ecu: goto label_3e90ec;
        case 0x3e90f0u: goto label_3e90f0;
        case 0x3e90f4u: goto label_3e90f4;
        case 0x3e90f8u: goto label_3e90f8;
        case 0x3e90fcu: goto label_3e90fc;
        case 0x3e9100u: goto label_3e9100;
        case 0x3e9104u: goto label_3e9104;
        case 0x3e9108u: goto label_3e9108;
        case 0x3e910cu: goto label_3e910c;
        case 0x3e9110u: goto label_3e9110;
        case 0x3e9114u: goto label_3e9114;
        case 0x3e9118u: goto label_3e9118;
        case 0x3e911cu: goto label_3e911c;
        case 0x3e9120u: goto label_3e9120;
        case 0x3e9124u: goto label_3e9124;
        case 0x3e9128u: goto label_3e9128;
        case 0x3e912cu: goto label_3e912c;
        default: break;
    }

    ctx->pc = 0x3e8780u;

label_3e8780:
    // 0x3e8780: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x3e8780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_3e8784:
    // 0x3e8784: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3e8784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e8788:
    // 0x3e8788: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3e8788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3e878c:
    // 0x3e878c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3e878cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3e8790:
    // 0x3e8790: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3e8790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3e8794:
    // 0x3e8794: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3e8794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3e8798:
    // 0x3e8798: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3e8798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3e879c:
    // 0x3e879c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3e879cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3e87a0:
    // 0x3e87a0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3e87a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e87a4:
    // 0x3e87a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e87a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3e87a8:
    // 0x3e87a8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3e87a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e87ac:
    // 0x3e87ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e87acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3e87b0:
    // 0x3e87b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e87b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e87b4:
    // 0x3e87b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3e87b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e87b8:
    // 0x3e87b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e87b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e87bc:
    // 0x3e87bc: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x3e87bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e87c0:
    // 0x3e87c0: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x3e87c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
label_3e87c4:
    // 0x3e87c4: 0xafa600fc  sw          $a2, 0xFC($sp)
    ctx->pc = 0x3e87c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 6));
label_3e87c8:
    // 0x3e87c8: 0xafa700f8  sw          $a3, 0xF8($sp)
    ctx->pc = 0x3e87c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 7));
label_3e87cc:
    // 0x3e87cc: 0xa0800054  sb          $zero, 0x54($a0)
    ctx->pc = 0x3e87ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 0));
label_3e87d0:
    // 0x3e87d0: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x3e87d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_3e87d4:
    // 0x3e87d4: 0x10000228  b           . + 4 + (0x228 << 2)
label_3e87d8:
    if (ctx->pc == 0x3E87D8u) {
        ctx->pc = 0x3E87D8u;
            // 0x3e87d8: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->pc = 0x3E87DCu;
        goto label_3e87dc;
    }
    ctx->pc = 0x3E87D4u;
    {
        const bool branch_taken_0x3e87d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E87D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E87D4u;
            // 0x3e87d8: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e87d4) {
            ctx->pc = 0x3E9078u;
            goto label_3e9078;
        }
    }
    ctx->pc = 0x3E87DCu;
label_3e87dc:
    // 0x3e87dc: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x3e87dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_3e87e0:
    // 0x3e87e0: 0x92a50006  lbu         $a1, 0x6($s5)
    ctx->pc = 0x3e87e0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
label_3e87e4:
    // 0x3e87e4: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x3e87e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3e87e8:
    // 0x3e87e8: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x3e87e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_3e87ec:
    // 0x3e87ec: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x3e87ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_3e87f0:
    // 0x3e87f0: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x3e87f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_3e87f4:
    // 0x3e87f4: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x3e87f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_3e87f8:
    // 0x3e87f8: 0x8c560010  lw          $s6, 0x10($v0)
    ctx->pc = 0x3e87f8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3e87fc:
    // 0x3e87fc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x3e87fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3e8800:
    // 0x3e8800: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x3e8800u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3e8804:
    // 0x3e8804: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3e8808:
    if (ctx->pc == 0x3E8808u) {
        ctx->pc = 0x3E8808u;
            // 0x3e8808: 0x64f023  subu        $fp, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->pc = 0x3E880Cu;
        goto label_3e880c;
    }
    ctx->pc = 0x3E8804u;
    {
        const bool branch_taken_0x3e8804 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8804u;
            // 0x3e8808: 0x64f023  subu        $fp, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8804) {
            ctx->pc = 0x3E8810u;
            goto label_3e8810;
        }
    }
    ctx->pc = 0x3E880Cu;
label_3e880c:
    // 0x3e880c: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x3e880cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
label_3e8810:
    // 0x3e8810: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x3e8810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_3e8814:
    // 0x3e8814: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3e8814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3e8818:
    // 0x3e8818: 0x5e1821  addu        $v1, $v0, $fp
    ctx->pc = 0x3e8818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_3e881c:
    // 0x3e881c: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x3e881cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_3e8820:
    // 0x3e8820: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x3e8820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
label_3e8824:
    // 0x3e8824: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x3e8824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3e8828:
    // 0x3e8828: 0x5e1821  addu        $v1, $v0, $fp
    ctx->pc = 0x3e8828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_3e882c:
    // 0x3e882c: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x3e882cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_3e8830:
    // 0x3e8830: 0x1fc00011  bgtz        $fp, . + 4 + (0x11 << 2)
label_3e8834:
    if (ctx->pc == 0x3E8834u) {
        ctx->pc = 0x3E8834u;
            // 0x3e8834: 0xac430020  sw          $v1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
        ctx->pc = 0x3E8838u;
        goto label_3e8838;
    }
    ctx->pc = 0x3E8830u;
    {
        const bool branch_taken_0x3e8830 = (GPR_S32(ctx, 30) > 0);
        ctx->pc = 0x3E8834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8830u;
            // 0x3e8834: 0xac430020  sw          $v1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8830) {
            ctx->pc = 0x3E8878u;
            goto label_3e8878;
        }
    }
    ctx->pc = 0x3E8838u;
label_3e8838:
    // 0x3e8838: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x3e8838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3e883c:
    // 0x3e883c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3e8840:
    if (ctx->pc == 0x3E8840u) {
        ctx->pc = 0x3E8844u;
        goto label_3e8844;
    }
    ctx->pc = 0x3E883Cu;
    {
        const bool branch_taken_0x3e883c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e883c) {
            ctx->pc = 0x3E8868u;
            goto label_3e8868;
        }
    }
    ctx->pc = 0x3E8844u;
label_3e8844:
    // 0x3e8844: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x3e8844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_3e8848:
    // 0x3e8848: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x3e8848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3e884c:
    // 0x3e884c: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x3e884cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_3e8850:
    // 0x3e8850: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3e8850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3e8854:
    // 0x3e8854: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3e8858:
    if (ctx->pc == 0x3E8858u) {
        ctx->pc = 0x3E885Cu;
        goto label_3e885c;
    }
    ctx->pc = 0x3E8854u;
    {
        const bool branch_taken_0x3e8854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e8854) {
            ctx->pc = 0x3E8868u;
            goto label_3e8868;
        }
    }
    ctx->pc = 0x3E885Cu;
label_3e885c:
    // 0x3e885c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3e8860:
    if (ctx->pc == 0x3E8860u) {
        ctx->pc = 0x3E8860u;
            // 0x3e8860: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E8864u;
        goto label_3e8864;
    }
    ctx->pc = 0x3E885Cu;
    {
        const bool branch_taken_0x3e885c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E885Cu;
            // 0x3e8860: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e885c) {
            ctx->pc = 0x3E8870u;
            goto label_3e8870;
        }
    }
    ctx->pc = 0x3E8864u;
label_3e8864:
    // 0x3e8864: 0x0  nop
    ctx->pc = 0x3e8864u;
    // NOP
label_3e8868:
    // 0x3e8868: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e8868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e886c:
    // 0x3e886c: 0x0  nop
    ctx->pc = 0x3e886cu;
    // NOP
label_3e8870:
    // 0x3e8870: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3e8874:
    if (ctx->pc == 0x3E8874u) {
        ctx->pc = 0x3E8878u;
        goto label_3e8878;
    }
    ctx->pc = 0x3E8870u;
    {
        const bool branch_taken_0x3e8870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8870) {
            ctx->pc = 0x3E8880u;
            goto label_3e8880;
        }
    }
    ctx->pc = 0x3E8878u;
label_3e8878:
    // 0x3e8878: 0x1000000f  b           . + 4 + (0xF << 2)
label_3e887c:
    if (ctx->pc == 0x3E887Cu) {
        ctx->pc = 0x3E8880u;
        goto label_3e8880;
    }
    ctx->pc = 0x3E8878u;
    {
        const bool branch_taken_0x3e8878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8878) {
            ctx->pc = 0x3E88B8u;
            goto label_3e88b8;
        }
    }
    ctx->pc = 0x3E8880u;
label_3e8880:
    // 0x3e8880: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e8880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e8884:
    // 0x3e8884: 0x8c4267f0  lw          $v0, 0x67F0($v0)
    ctx->pc = 0x3e8884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26608)));
label_3e8888:
    // 0x3e8888: 0x40f809  jalr        $v0
label_3e888c:
    if (ctx->pc == 0x3E888Cu) {
        ctx->pc = 0x3E888Cu;
            // 0x3e888c: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x3E8890u;
        goto label_3e8890;
    }
    ctx->pc = 0x3E8888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E8890u);
        ctx->pc = 0x3E888Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8888u;
            // 0x3e888c: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E8890u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E8890u; }
            if (ctx->pc != 0x3E8890u) { return; }
        }
        }
    }
    ctx->pc = 0x3E8890u;
label_3e8890:
    // 0x3e8890: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x3e8890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_3e8894:
    // 0x3e8894: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3e8894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e8898:
    // 0x3e8898: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3e8898u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3e889c:
    // 0x3e889c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3e889cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3e88a0:
    // 0x3e88a0: 0x5440ffcf  bnel        $v0, $zero, . + 4 + (-0x31 << 2)
label_3e88a4:
    if (ctx->pc == 0x3E88A4u) {
        ctx->pc = 0x3E88A4u;
            // 0x3e88a4: 0x8fa200fc  lw          $v0, 0xFC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
        ctx->pc = 0x3E88A8u;
        goto label_3e88a8;
    }
    ctx->pc = 0x3E88A0u;
    {
        const bool branch_taken_0x3e88a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e88a0) {
            ctx->pc = 0x3E88A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E88A0u;
            // 0x3e88a4: 0x8fa200fc  lw          $v0, 0xFC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E87E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e87e0;
        }
    }
    ctx->pc = 0x3E88A8u;
label_3e88a8:
    // 0x3e88a8: 0x2402ff3c  addiu       $v0, $zero, -0xC4
    ctx->pc = 0x3e88a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967100));
label_3e88ac:
    // 0x3e88ac: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3e88acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e88b0:
    // 0x3e88b0: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3e88b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_3e88b4:
    // 0x3e88b4: 0x0  nop
    ctx->pc = 0x3e88b4u;
    // NOP
label_3e88b8:
    // 0x3e88b8: 0x52c0020f  beql        $s6, $zero, . + 4 + (0x20F << 2)
label_3e88bc:
    if (ctx->pc == 0x3E88BCu) {
        ctx->pc = 0x3E88BCu;
            // 0x3e88bc: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x3E88C0u;
        goto label_3e88c0;
    }
    ctx->pc = 0x3E88B8u;
    {
        const bool branch_taken_0x3e88b8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e88b8) {
            ctx->pc = 0x3E88BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E88B8u;
            // 0x3e88bc: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E90F8u;
            goto label_3e90f8;
        }
    }
    ctx->pc = 0x3E88C0u;
label_3e88c0:
    // 0x3e88c0: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x3e88c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_3e88c4:
    // 0x3e88c4: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x3e88c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3e88c8:
    // 0x3e88c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3e88cc:
    if (ctx->pc == 0x3E88CCu) {
        ctx->pc = 0x3E88D0u;
        goto label_3e88d0;
    }
    ctx->pc = 0x3E88C8u;
    {
        const bool branch_taken_0x3e88c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e88c8) {
            ctx->pc = 0x3E88F0u;
            goto label_3e88f0;
        }
    }
    ctx->pc = 0x3E88D0u;
label_3e88d0:
    // 0x3e88d0: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x3e88d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_3e88d4:
    // 0x3e88d4: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x3e88d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3e88d8:
    // 0x3e88d8: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x3e88d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_3e88dc:
    // 0x3e88dc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3e88dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3e88e0:
    // 0x3e88e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3e88e4:
    if (ctx->pc == 0x3E88E4u) {
        ctx->pc = 0x3E88E8u;
        goto label_3e88e8;
    }
    ctx->pc = 0x3E88E0u;
    {
        const bool branch_taken_0x3e88e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e88e0) {
            ctx->pc = 0x3E88F0u;
            goto label_3e88f0;
        }
    }
    ctx->pc = 0x3E88E8u;
label_3e88e8:
    // 0x3e88e8: 0x10000003  b           . + 4 + (0x3 << 2)
label_3e88ec:
    if (ctx->pc == 0x3E88ECu) {
        ctx->pc = 0x3E88ECu;
            // 0x3e88ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E88F0u;
        goto label_3e88f0;
    }
    ctx->pc = 0x3E88E8u;
    {
        const bool branch_taken_0x3e88e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E88ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E88E8u;
            // 0x3e88ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e88e8) {
            ctx->pc = 0x3E88F8u;
            goto label_3e88f8;
        }
    }
    ctx->pc = 0x3E88F0u;
label_3e88f0:
    // 0x3e88f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e88f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e88f4:
    // 0x3e88f4: 0x0  nop
    ctx->pc = 0x3e88f4u;
    // NOP
label_3e88f8:
    // 0x3e88f8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3e88f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3e88fc:
    // 0x3e88fc: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3e88fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3e8900:
    // 0x3e8900: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x3e8900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_3e8904:
    // 0x3e8904: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3e8908:
    if (ctx->pc == 0x3E8908u) {
        ctx->pc = 0x3E890Cu;
        goto label_3e890c;
    }
    ctx->pc = 0x3E8904u;
    {
        const bool branch_taken_0x3e8904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8904) {
            ctx->pc = 0x3E8928u;
            goto label_3e8928;
        }
    }
    ctx->pc = 0x3E890Cu;
label_3e890c:
    // 0x3e890c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x3e890cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3e8910:
    // 0x3e8910: 0x2c2b023  subu        $s6, $s6, $v0
    ctx->pc = 0x3e8910u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_3e8914:
    // 0x3e8914: 0x3c2f021  addu        $fp, $fp, $v0
    ctx->pc = 0x3e8914u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_3e8918:
    // 0x3e8918: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x3e8918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_3e891c:
    // 0x3e891c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3e891cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e8920:
    // 0x3e8920: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x3e8920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_3e8924:
    // 0x3e8924: 0x0  nop
    ctx->pc = 0x3e8924u;
    // NOP
label_3e8928:
    // 0x3e8928: 0x16400019  bnez        $s2, . + 4 + (0x19 << 2)
label_3e892c:
    if (ctx->pc == 0x3E892Cu) {
        ctx->pc = 0x3E8930u;
        goto label_3e8930;
    }
    ctx->pc = 0x3E8928u;
    {
        const bool branch_taken_0x3e8928 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e8928) {
            ctx->pc = 0x3E8990u;
            goto label_3e8990;
        }
    }
    ctx->pc = 0x3E8930u;
label_3e8930:
    // 0x3e8930: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x3e8930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_3e8934:
    // 0x3e8934: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3e8934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3e8938:
    // 0x3e8938: 0x8e930014  lw          $s3, 0x14($s4)
    ctx->pc = 0x3e8938u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3e893c:
    // 0x3e893c: 0x629023  subu        $s2, $v1, $v0
    ctx->pc = 0x3e893cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e8940:
    // 0x3e8940: 0x13102b  sltu        $v0, $zero, $s3
    ctx->pc = 0x3e8940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_3e8944:
    // 0x3e8944: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3e8944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3e8948:
    // 0x3e8948: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3e894c:
    if (ctx->pc == 0x3E894Cu) {
        ctx->pc = 0x3E8950u;
        goto label_3e8950;
    }
    ctx->pc = 0x3E8948u;
    {
        const bool branch_taken_0x3e8948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e8948) {
            ctx->pc = 0x3E8958u;
            goto label_3e8958;
        }
    }
    ctx->pc = 0x3E8950u;
label_3e8950:
    // 0x3e8950: 0x1000000d  b           . + 4 + (0xD << 2)
label_3e8954:
    if (ctx->pc == 0x3E8954u) {
        ctx->pc = 0x3E8958u;
        goto label_3e8958;
    }
    ctx->pc = 0x3E8950u;
    {
        const bool branch_taken_0x3e8950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8950) {
            ctx->pc = 0x3E8988u;
            goto label_3e8988;
        }
    }
    ctx->pc = 0x3E8958u;
label_3e8958:
    // 0x3e8958: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e8958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e895c:
    // 0x3e895c: 0x8c4267f0  lw          $v0, 0x67F0($v0)
    ctx->pc = 0x3e895cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26608)));
label_3e8960:
    // 0x3e8960: 0x40f809  jalr        $v0
label_3e8964:
    if (ctx->pc == 0x3E8964u) {
        ctx->pc = 0x3E8964u;
            // 0x3e8964: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x3E8968u;
        goto label_3e8968;
    }
    ctx->pc = 0x3E8960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E8968u);
        ctx->pc = 0x3E8964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8960u;
            // 0x3e8964: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E8968u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E8968u; }
            if (ctx->pc != 0x3E8968u) { return; }
        }
        }
    }
    ctx->pc = 0x3E8968u;
label_3e8968:
    // 0x3e8968: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x3e8968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_3e896c:
    // 0x3e896c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3e896cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e8970:
    // 0x3e8970: 0x1040ffef  beqz        $v0, . + 4 + (-0x11 << 2)
label_3e8974:
    if (ctx->pc == 0x3E8974u) {
        ctx->pc = 0x3E8978u;
        goto label_3e8978;
    }
    ctx->pc = 0x3E8970u;
    {
        const bool branch_taken_0x3e8970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8970) {
            ctx->pc = 0x3E8930u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e8930;
        }
    }
    ctx->pc = 0x3E8978u;
label_3e8978:
    // 0x3e8978: 0x2402ff3c  addiu       $v0, $zero, -0xC4
    ctx->pc = 0x3e8978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967100));
label_3e897c:
    // 0x3e897c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3e897cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e8980:
    // 0x3e8980: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3e8980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_3e8984:
    // 0x3e8984: 0x0  nop
    ctx->pc = 0x3e8984u;
    // NOP
label_3e8988:
    // 0x3e8988: 0x126001da  beqz        $s3, . + 4 + (0x1DA << 2)
label_3e898c:
    if (ctx->pc == 0x3E898Cu) {
        ctx->pc = 0x3E8990u;
        goto label_3e8990;
    }
    ctx->pc = 0x3E8988u;
    {
        const bool branch_taken_0x3e8988 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8988) {
            ctx->pc = 0x3E90F4u;
            goto label_3e90f4;
        }
    }
    ctx->pc = 0x3E8990u;
label_3e8990:
    // 0x3e8990: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x3e8990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e8994:
    // 0x3e8994: 0x106000a8  beqz        $v1, . + 4 + (0xA8 << 2)
label_3e8998:
    if (ctx->pc == 0x3E8998u) {
        ctx->pc = 0x3E899Cu;
        goto label_3e899c;
    }
    ctx->pc = 0x3E8994u;
    {
        const bool branch_taken_0x3e8994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8994) {
            ctx->pc = 0x3E8C38u;
            goto label_3e8c38;
        }
    }
    ctx->pc = 0x3E899Cu;
label_3e899c:
    // 0x3e899c: 0x92a20054  lbu         $v0, 0x54($s5)
    ctx->pc = 0x3e899cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 84)));
label_3e89a0:
    // 0x3e89a0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_3e89a4:
    if (ctx->pc == 0x3E89A4u) {
        ctx->pc = 0x3E89A8u;
        goto label_3e89a8;
    }
    ctx->pc = 0x3E89A0u;
    {
        const bool branch_taken_0x3e89a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e89a0) {
            ctx->pc = 0x3E8A28u;
            goto label_3e8a28;
        }
    }
    ctx->pc = 0x3E89A8u;
label_3e89a8:
    // 0x3e89a8: 0x1e400003  bgtz        $s2, . + 4 + (0x3 << 2)
label_3e89ac:
    if (ctx->pc == 0x3E89ACu) {
        ctx->pc = 0x3E89B0u;
        goto label_3e89b0;
    }
    ctx->pc = 0x3E89A8u;
    {
        const bool branch_taken_0x3e89a8 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x3e89a8) {
            ctx->pc = 0x3E89B8u;
            goto label_3e89b8;
        }
    }
    ctx->pc = 0x3E89B0u;
label_3e89b0:
    // 0x3e89b0: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_3e89b4:
    if (ctx->pc == 0x3E89B4u) {
        ctx->pc = 0x3E89B4u;
            // 0x3e89b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E89B8u;
        goto label_3e89b8;
    }
    ctx->pc = 0x3E89B0u;
    {
        const bool branch_taken_0x3e89b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E89B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E89B0u;
            // 0x3e89b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e89b0) {
            ctx->pc = 0x3E8C40u;
            goto label_3e8c40;
        }
    }
    ctx->pc = 0x3E89B8u;
label_3e89b8:
    // 0x3e89b8: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x3e89b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_3e89bc:
    // 0x3e89bc: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
label_3e89c0:
    if (ctx->pc == 0x3E89C0u) {
        ctx->pc = 0x3E89C4u;
        goto label_3e89c4;
    }
    ctx->pc = 0x3E89BCu;
    {
        const bool branch_taken_0x3e89bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e89bc) {
            ctx->pc = 0x3E89F0u;
            goto label_3e89f0;
        }
    }
    ctx->pc = 0x3E89C4u;
label_3e89c4:
    // 0x3e89c4: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3e89c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e89c8:
    // 0x3e89c8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e89c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3e89cc:
    // 0x3e89cc: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x3e89ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
label_3e89d0:
    // 0x3e89d0: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3e89d0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e89d4:
    // 0x3e89d4: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3e89d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e89d8:
    // 0x3e89d8: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x3e89d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_3e89dc:
    // 0x3e89dc: 0xaea2004c  sw          $v0, 0x4C($s5)
    ctx->pc = 0x3e89dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
label_3e89e0:
    // 0x3e89e0: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3e89e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e89e4:
    // 0x3e89e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e89e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e89e8:
    // 0x3e89e8: 0x1000000d  b           . + 4 + (0xD << 2)
label_3e89ec:
    if (ctx->pc == 0x3E89ECu) {
        ctx->pc = 0x3E89ECu;
            // 0x3e89ec: 0xaea20050  sw          $v0, 0x50($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x3E89F0u;
        goto label_3e89f0;
    }
    ctx->pc = 0x3E89E8u;
    {
        const bool branch_taken_0x3e89e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E89ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E89E8u;
            // 0x3e89ec: 0xaea20050  sw          $v0, 0x50($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e89e8) {
            ctx->pc = 0x3E8A20u;
            goto label_3e8a20;
        }
    }
    ctx->pc = 0x3E89F0u;
label_3e89f0:
    // 0x3e89f0: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x3e89f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e89f4:
    // 0x3e89f4: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x3e89f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3e89f8:
    // 0x3e89f8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3e89f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e89fc:
    // 0x3e89fc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3e89fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e8a00:
    // 0x3e8a00: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x3e8a00u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3e8a04:
    // 0x3e8a04: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x3e8a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3e8a08:
    // 0x3e8a08: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x3e8a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_3e8a0c:
    // 0x3e8a0c: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3e8a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e8a10:
    // 0x3e8a10: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3e8a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e8a14:
    // 0x3e8a14: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3e8a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e8a18:
    // 0x3e8a18: 0x30510007  andi        $s1, $v0, 0x7
    ctx->pc = 0x3e8a18u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_3e8a1c:
    // 0x3e8a1c: 0x0  nop
    ctx->pc = 0x3e8a1cu;
    // NOP
label_3e8a20:
    // 0x3e8a20: 0xa2a00054  sb          $zero, 0x54($s5)
    ctx->pc = 0x3e8a20u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 84), (uint8_t)GPR_U32(ctx, 0));
label_3e8a24:
    // 0x3e8a24: 0x0  nop
    ctx->pc = 0x3e8a24u;
    // NOP
label_3e8a28:
    // 0x3e8a28: 0x8ea5004c  lw          $a1, 0x4C($s5)
    ctx->pc = 0x3e8a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e8a2c:
    // 0x3e8a2c: 0x10a00082  beqz        $a1, . + 4 + (0x82 << 2)
label_3e8a30:
    if (ctx->pc == 0x3E8A30u) {
        ctx->pc = 0x3E8A34u;
        goto label_3e8a34;
    }
    ctx->pc = 0x3E8A2Cu;
    {
        const bool branch_taken_0x3e8a2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8a2c) {
            ctx->pc = 0x3E8C38u;
            goto label_3e8c38;
        }
    }
    ctx->pc = 0x3E8A34u;
label_3e8a34:
    // 0x3e8a34: 0x0  nop
    ctx->pc = 0x3e8a34u;
    // NOP
label_3e8a38:
    // 0x3e8a38: 0x1e400003  bgtz        $s2, . + 4 + (0x3 << 2)
label_3e8a3c:
    if (ctx->pc == 0x3E8A3Cu) {
        ctx->pc = 0x3E8A40u;
        goto label_3e8a40;
    }
    ctx->pc = 0x3E8A38u;
    {
        const bool branch_taken_0x3e8a38 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x3e8a38) {
            ctx->pc = 0x3E8A48u;
            goto label_3e8a48;
        }
    }
    ctx->pc = 0x3E8A40u;
label_3e8a40:
    // 0x3e8a40: 0x1000007f  b           . + 4 + (0x7F << 2)
label_3e8a44:
    if (ctx->pc == 0x3E8A44u) {
        ctx->pc = 0x3E8A44u;
            // 0x3e8a44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E8A48u;
        goto label_3e8a48;
    }
    ctx->pc = 0x3E8A40u;
    {
        const bool branch_taken_0x3e8a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8A40u;
            // 0x3e8a44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8a40) {
            ctx->pc = 0x3E8C40u;
            goto label_3e8c40;
        }
    }
    ctx->pc = 0x3E8A48u;
label_3e8a48:
    // 0x3e8a48: 0x2ca10009  sltiu       $at, $a1, 0x9
    ctx->pc = 0x3e8a48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_3e8a4c:
    // 0x3e8a4c: 0x1420002e  bnez        $at, . + 4 + (0x2E << 2)
label_3e8a50:
    if (ctx->pc == 0x3E8A50u) {
        ctx->pc = 0x3E8A54u;
        goto label_3e8a54;
    }
    ctx->pc = 0x3E8A4Cu;
    {
        const bool branch_taken_0x3e8a4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e8a4c) {
            ctx->pc = 0x3E8B08u;
            goto label_3e8b08;
        }
    }
    ctx->pc = 0x3E8A54u;
label_3e8a54:
    // 0x3e8a54: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3e8a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e8a58:
    // 0x3e8a58: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
label_3e8a5c:
    if (ctx->pc == 0x3E8A5Cu) {
        ctx->pc = 0x3E8A60u;
        goto label_3e8a60;
    }
    ctx->pc = 0x3E8A58u;
    {
        const bool branch_taken_0x3e8a58 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e8a58) {
            ctx->pc = 0x3E8A88u;
            goto label_3e8a88;
        }
    }
    ctx->pc = 0x3E8A60u;
label_3e8a60:
    // 0x3e8a60: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3e8a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e8a64:
    // 0x3e8a64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e8a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e8a68:
    // 0x3e8a68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e8a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e8a6c:
    // 0x3e8a6c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3e8a6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3e8a70:
    // 0x3e8a70: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e8a70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3e8a74:
    // 0x3e8a74: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3e8a74u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e8a78:
    // 0x3e8a78: 0xc0aad30  jal         func_2AB4C0
label_3e8a7c:
    if (ctx->pc == 0x3E8A7Cu) {
        ctx->pc = 0x3E8A7Cu;
            // 0x3e8a7c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x3E8A80u;
        goto label_3e8a80;
    }
    ctx->pc = 0x3E8A78u;
    SET_GPR_U32(ctx, 31, 0x3E8A80u);
    ctx->pc = 0x3E8A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8A78u;
            // 0x3e8a7c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB4C0u;
    if (runtime->hasFunction(0x2AB4C0u)) {
        auto targetFn = runtime->lookupFunction(0x2AB4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8A80u; }
        if (ctx->pc != 0x3E8A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB4C0_0x2ab4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8A80u; }
        if (ctx->pc != 0x3E8A80u) { return; }
    }
    ctx->pc = 0x3E8A80u;
label_3e8a80:
    // 0x3e8a80: 0x10000019  b           . + 4 + (0x19 << 2)
label_3e8a84:
    if (ctx->pc == 0x3E8A84u) {
        ctx->pc = 0x3E8A88u;
        goto label_3e8a88;
    }
    ctx->pc = 0x3E8A80u;
    {
        const bool branch_taken_0x3e8a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8a80) {
            ctx->pc = 0x3E8AE8u;
            goto label_3e8ae8;
        }
    }
    ctx->pc = 0x3E8A88u;
label_3e8a88:
    // 0x3e8a88: 0x8ea60050  lw          $a2, 0x50($s5)
    ctx->pc = 0x3e8a88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e8a8c:
    // 0x3e8a8c: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x3e8a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3e8a90:
    // 0x3e8a90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e8a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e8a94:
    // 0x3e8a94: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3e8a94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3e8a98:
    // 0x3e8a98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e8a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e8a9c:
    // 0x3e8a9c: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x3e8a9cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3e8aa0:
    // 0x3e8aa0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3e8aa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3e8aa4:
    // 0x3e8aa4: 0x661807  srav        $v1, $a2, $v1
    ctx->pc = 0x3e8aa4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
label_3e8aa8:
    // 0x3e8aa8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3e8aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3e8aac:
    // 0x3e8aac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3e8aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3e8ab0:
    // 0x3e8ab0: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3e8ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e8ab4:
    // 0x3e8ab4: 0xc0aad30  jal         func_2AB4C0
label_3e8ab8:
    if (ctx->pc == 0x3E8AB8u) {
        ctx->pc = 0x3E8AB8u;
            // 0x3e8ab8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x3E8ABCu;
        goto label_3e8abc;
    }
    ctx->pc = 0x3E8AB4u;
    SET_GPR_U32(ctx, 31, 0x3E8ABCu);
    ctx->pc = 0x3E8AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8AB4u;
            // 0x3e8ab8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB4C0u;
    if (runtime->hasFunction(0x2AB4C0u)) {
        auto targetFn = runtime->lookupFunction(0x2AB4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8ABCu; }
        if (ctx->pc != 0x3E8ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB4C0_0x2ab4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8ABCu; }
        if (ctx->pc != 0x3E8ABCu) { return; }
    }
    ctx->pc = 0x3E8ABCu;
label_3e8abc:
    // 0x3e8abc: 0x1a400006  blez        $s2, . + 4 + (0x6 << 2)
label_3e8ac0:
    if (ctx->pc == 0x3E8AC0u) {
        ctx->pc = 0x3E8AC4u;
        goto label_3e8ac4;
    }
    ctx->pc = 0x3E8ABCu;
    {
        const bool branch_taken_0x3e8abc = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3e8abc) {
            ctx->pc = 0x3E8AD8u;
            goto label_3e8ad8;
        }
    }
    ctx->pc = 0x3E8AC4u;
label_3e8ac4:
    // 0x3e8ac4: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3e8ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e8ac8:
    // 0x3e8ac8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e8ac8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3e8acc:
    // 0x3e8acc: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x3e8accu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
label_3e8ad0:
    // 0x3e8ad0: 0x10000005  b           . + 4 + (0x5 << 2)
label_3e8ad4:
    if (ctx->pc == 0x3E8AD4u) {
        ctx->pc = 0x3E8AD4u;
            // 0x3e8ad4: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3E8AD8u;
        goto label_3e8ad8;
    }
    ctx->pc = 0x3E8AD0u;
    {
        const bool branch_taken_0x3e8ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8AD0u;
            // 0x3e8ad4: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8ad0) {
            ctx->pc = 0x3E8AE8u;
            goto label_3e8ae8;
        }
    }
    ctx->pc = 0x3E8AD8u;
label_3e8ad8:
    // 0x3e8ad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e8ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e8adc:
    // 0x3e8adc: 0xa2a20054  sb          $v0, 0x54($s5)
    ctx->pc = 0x3e8adcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 84), (uint8_t)GPR_U32(ctx, 2));
label_3e8ae0:
    // 0x3e8ae0: 0x10000057  b           . + 4 + (0x57 << 2)
label_3e8ae4:
    if (ctx->pc == 0x3E8AE4u) {
        ctx->pc = 0x3E8AE4u;
            // 0x3e8ae4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E8AE8u;
        goto label_3e8ae8;
    }
    ctx->pc = 0x3E8AE0u;
    {
        const bool branch_taken_0x3e8ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8AE0u;
            // 0x3e8ae4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8ae0) {
            ctx->pc = 0x3E8C40u;
            goto label_3e8c40;
        }
    }
    ctx->pc = 0x3E8AE8u;
label_3e8ae8:
    // 0x3e8ae8: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3e8ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e8aec:
    // 0x3e8aec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e8aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e8af0:
    // 0x3e8af0: 0xaea20050  sw          $v0, 0x50($s5)
    ctx->pc = 0x3e8af0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
label_3e8af4:
    // 0x3e8af4: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3e8af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e8af8:
    // 0x3e8af8: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x3e8af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_3e8afc:
    // 0x3e8afc: 0x1000004a  b           . + 4 + (0x4A << 2)
label_3e8b00:
    if (ctx->pc == 0x3E8B00u) {
        ctx->pc = 0x3E8B00u;
            // 0x3e8b00: 0xaea2004c  sw          $v0, 0x4C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x3E8B04u;
        goto label_3e8b04;
    }
    ctx->pc = 0x3E8AFCu;
    {
        const bool branch_taken_0x3e8afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8AFCu;
            // 0x3e8b00: 0xaea2004c  sw          $v0, 0x4C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8afc) {
            ctx->pc = 0x3E8C28u;
            goto label_3e8c28;
        }
    }
    ctx->pc = 0x3E8B04u;
label_3e8b04:
    // 0x3e8b04: 0x0  nop
    ctx->pc = 0x3e8b04u;
    // NOP
label_3e8b08:
    // 0x3e8b08: 0x225082b  sltu        $at, $s1, $a1
    ctx->pc = 0x3e8b08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3e8b0c:
    // 0x3e8b0c: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
label_3e8b10:
    if (ctx->pc == 0x3E8B10u) {
        ctx->pc = 0x3E8B14u;
        goto label_3e8b14;
    }
    ctx->pc = 0x3E8B0Cu;
    {
        const bool branch_taken_0x3e8b0c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e8b0c) {
            ctx->pc = 0x3E8B98u;
            goto label_3e8b98;
        }
    }
    ctx->pc = 0x3E8B14u;
label_3e8b14:
    // 0x3e8b14: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3e8b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e8b18:
    // 0x3e8b18: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
label_3e8b1c:
    if (ctx->pc == 0x3E8B1Cu) {
        ctx->pc = 0x3E8B20u;
        goto label_3e8b20;
    }
    ctx->pc = 0x3E8B18u;
    {
        const bool branch_taken_0x3e8b18 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e8b18) {
            ctx->pc = 0x3E8B40u;
            goto label_3e8b40;
        }
    }
    ctx->pc = 0x3E8B20u;
label_3e8b20:
    // 0x3e8b20: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x3e8b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e8b24:
    // 0x3e8b24: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x3e8b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3e8b28:
    // 0x3e8b28: 0x2251023  subu        $v0, $s1, $a1
    ctx->pc = 0x3e8b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_3e8b2c:
    // 0x3e8b2c: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x3e8b2cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3e8b30:
    // 0x3e8b30: 0x641807  srav        $v1, $a0, $v1
    ctx->pc = 0x3e8b30u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_3e8b34:
    // 0x3e8b34: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x3e8b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_3e8b38:
    // 0x3e8b38: 0x1000000b  b           . + 4 + (0xB << 2)
label_3e8b3c:
    if (ctx->pc == 0x3E8B3Cu) {
        ctx->pc = 0x3E8B3Cu;
            // 0x3e8b3c: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3E8B40u;
        goto label_3e8b40;
    }
    ctx->pc = 0x3E8B38u;
    {
        const bool branch_taken_0x3e8b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8B38u;
            // 0x3e8b3c: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8b38) {
            ctx->pc = 0x3E8B68u;
            goto label_3e8b68;
        }
    }
    ctx->pc = 0x3E8B40u;
label_3e8b40:
    // 0x3e8b40: 0x452023  subu        $a0, $v0, $a1
    ctx->pc = 0x3e8b40u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3e8b44:
    // 0x3e8b44: 0x2251823  subu        $v1, $s1, $a1
    ctx->pc = 0x3e8b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_3e8b48:
    // 0x3e8b48: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3e8b48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3e8b4c:
    // 0x3e8b4c: 0x8ea50050  lw          $a1, 0x50($s5)
    ctx->pc = 0x3e8b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e8b50:
    // 0x3e8b50: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x3e8b50u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3e8b54:
    // 0x3e8b54: 0x852007  srav        $a0, $a1, $a0
    ctx->pc = 0x3e8b54u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_3e8b58:
    // 0x3e8b58: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x3e8b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_3e8b5c:
    // 0x3e8b5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3e8b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3e8b60:
    // 0x3e8b60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3e8b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3e8b64:
    // 0x3e8b64: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3e8b64u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e8b68:
    // 0x3e8b68: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3e8b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e8b6c:
    // 0x3e8b6c: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x3e8b6cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3e8b70:
    // 0x3e8b70: 0x1e20002b  bgtz        $s1, . + 4 + (0x2B << 2)
label_3e8b74:
    if (ctx->pc == 0x3E8B74u) {
        ctx->pc = 0x3E8B78u;
        goto label_3e8b78;
    }
    ctx->pc = 0x3E8B70u;
    {
        const bool branch_taken_0x3e8b70 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x3e8b70) {
            ctx->pc = 0x3E8C20u;
            goto label_3e8c20;
        }
    }
    ctx->pc = 0x3E8B78u;
label_3e8b78:
    // 0x3e8b78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e8b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e8b7c:
    // 0x3e8b7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e8b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e8b80:
    // 0x3e8b80: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3e8b80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3e8b84:
    // 0x3e8b84: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3e8b84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3e8b88:
    // 0x3e8b88: 0xc0aad30  jal         func_2AB4C0
label_3e8b8c:
    if (ctx->pc == 0x3E8B8Cu) {
        ctx->pc = 0x3E8B8Cu;
            // 0x3e8b8c: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3E8B90u;
        goto label_3e8b90;
    }
    ctx->pc = 0x3E8B88u;
    SET_GPR_U32(ctx, 31, 0x3E8B90u);
    ctx->pc = 0x3E8B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8B88u;
            // 0x3e8b8c: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB4C0u;
    if (runtime->hasFunction(0x2AB4C0u)) {
        auto targetFn = runtime->lookupFunction(0x2AB4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8B90u; }
        if (ctx->pc != 0x3E8B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB4C0_0x2ab4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8B90u; }
        if (ctx->pc != 0x3E8B90u) { return; }
    }
    ctx->pc = 0x3E8B90u;
label_3e8b90:
    // 0x3e8b90: 0x10000023  b           . + 4 + (0x23 << 2)
label_3e8b94:
    if (ctx->pc == 0x3E8B94u) {
        ctx->pc = 0x3E8B98u;
        goto label_3e8b98;
    }
    ctx->pc = 0x3E8B90u;
    {
        const bool branch_taken_0x3e8b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8b90) {
            ctx->pc = 0x3E8C20u;
            goto label_3e8c20;
        }
    }
    ctx->pc = 0x3E8B98u;
label_3e8b98:
    // 0x3e8b98: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x3e8b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e8b9c:
    // 0x3e8b9c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3e8b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e8ba0:
    // 0x3e8ba0: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3e8ba0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3e8ba4:
    // 0x3e8ba4: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x3e8ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3e8ba8:
    // 0x3e8ba8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e8ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e8bac:
    // 0x3e8bac: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x3e8bacu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3e8bb0:
    // 0x3e8bb0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3e8bb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3e8bb4:
    // 0x3e8bb4: 0x661807  srav        $v1, $a2, $v1
    ctx->pc = 0x3e8bb4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
label_3e8bb8:
    // 0x3e8bb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e8bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e8bbc:
    // 0x3e8bbc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3e8bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3e8bc0:
    // 0x3e8bc0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3e8bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3e8bc4:
    // 0x3e8bc4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3e8bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e8bc8:
    // 0x3e8bc8: 0xc0aad30  jal         func_2AB4C0
label_3e8bcc:
    if (ctx->pc == 0x3E8BCCu) {
        ctx->pc = 0x3E8BCCu;
            // 0x3e8bcc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x3E8BD0u;
        goto label_3e8bd0;
    }
    ctx->pc = 0x3E8BC8u;
    SET_GPR_U32(ctx, 31, 0x3E8BD0u);
    ctx->pc = 0x3E8BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8BC8u;
            // 0x3e8bcc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB4C0u;
    if (runtime->hasFunction(0x2AB4C0u)) {
        auto targetFn = runtime->lookupFunction(0x2AB4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8BD0u; }
        if (ctx->pc != 0x3E8BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB4C0_0x2ab4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8BD0u; }
        if (ctx->pc != 0x3E8BD0u) { return; }
    }
    ctx->pc = 0x3E8BD0u;
label_3e8bd0:
    // 0x3e8bd0: 0x1a40000f  blez        $s2, . + 4 + (0xF << 2)
label_3e8bd4:
    if (ctx->pc == 0x3E8BD4u) {
        ctx->pc = 0x3E8BD8u;
        goto label_3e8bd8;
    }
    ctx->pc = 0x3E8BD0u;
    {
        const bool branch_taken_0x3e8bd0 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3e8bd0) {
            ctx->pc = 0x3E8C10u;
            goto label_3e8c10;
        }
    }
    ctx->pc = 0x3E8BD8u;
label_3e8bd8:
    // 0x3e8bd8: 0x8ea5004c  lw          $a1, 0x4C($s5)
    ctx->pc = 0x3e8bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e8bdc:
    // 0x3e8bdc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3e8bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e8be0:
    // 0x3e8be0: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3e8be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e8be4:
    // 0x3e8be4: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x3e8be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3e8be8:
    // 0x3e8be8: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x3e8be8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3e8bec:
    // 0x3e8bec: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3e8becu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3e8bf0:
    // 0x3e8bf0: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x3e8bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_3e8bf4:
    // 0x3e8bf4: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x3e8bf4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_3e8bf8:
    // 0x3e8bf8: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x3e8bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_3e8bfc:
    // 0x3e8bfc: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3e8bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e8c00:
    // 0x3e8c00: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3e8c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e8c04:
    // 0x3e8c04: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3e8c04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e8c08:
    // 0x3e8c08: 0x10000005  b           . + 4 + (0x5 << 2)
label_3e8c0c:
    if (ctx->pc == 0x3E8C0Cu) {
        ctx->pc = 0x3E8C0Cu;
            // 0x3e8c0c: 0x30510007  andi        $s1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->pc = 0x3E8C10u;
        goto label_3e8c10;
    }
    ctx->pc = 0x3E8C08u;
    {
        const bool branch_taken_0x3e8c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8C08u;
            // 0x3e8c0c: 0x30510007  andi        $s1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8c08) {
            ctx->pc = 0x3E8C20u;
            goto label_3e8c20;
        }
    }
    ctx->pc = 0x3E8C10u;
label_3e8c10:
    // 0x3e8c10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e8c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e8c14:
    // 0x3e8c14: 0xa2a20054  sb          $v0, 0x54($s5)
    ctx->pc = 0x3e8c14u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 84), (uint8_t)GPR_U32(ctx, 2));
label_3e8c18:
    // 0x3e8c18: 0x10000009  b           . + 4 + (0x9 << 2)
label_3e8c1c:
    if (ctx->pc == 0x3E8C1Cu) {
        ctx->pc = 0x3E8C1Cu;
            // 0x3e8c1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E8C20u;
        goto label_3e8c20;
    }
    ctx->pc = 0x3E8C18u;
    {
        const bool branch_taken_0x3e8c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8C18u;
            // 0x3e8c1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8c18) {
            ctx->pc = 0x3E8C40u;
            goto label_3e8c40;
        }
    }
    ctx->pc = 0x3E8C20u;
label_3e8c20:
    // 0x3e8c20: 0xaea0004c  sw          $zero, 0x4C($s5)
    ctx->pc = 0x3e8c20u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 0));
label_3e8c24:
    // 0x3e8c24: 0x0  nop
    ctx->pc = 0x3e8c24u;
    // NOP
label_3e8c28:
    // 0x3e8c28: 0x8ea5004c  lw          $a1, 0x4C($s5)
    ctx->pc = 0x3e8c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e8c2c:
    // 0x3e8c2c: 0x14a0ff82  bnez        $a1, . + 4 + (-0x7E << 2)
label_3e8c30:
    if (ctx->pc == 0x3E8C30u) {
        ctx->pc = 0x3E8C34u;
        goto label_3e8c34;
    }
    ctx->pc = 0x3E8C2Cu;
    {
        const bool branch_taken_0x3e8c2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e8c2c) {
            ctx->pc = 0x3E8A38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e8a38;
        }
    }
    ctx->pc = 0x3E8C34u;
label_3e8c34:
    // 0x3e8c34: 0x0  nop
    ctx->pc = 0x3e8c34u;
    // NOP
label_3e8c38:
    // 0x3e8c38: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x3e8c38u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3e8c3c:
    // 0x3e8c3c: 0x0  nop
    ctx->pc = 0x3e8c3cu;
    // NOP
label_3e8c40:
    // 0x3e8c40: 0x1040ff39  beqz        $v0, . + 4 + (-0xC7 << 2)
label_3e8c44:
    if (ctx->pc == 0x3E8C44u) {
        ctx->pc = 0x3E8C48u;
        goto label_3e8c48;
    }
    ctx->pc = 0x3E8C40u;
    {
        const bool branch_taken_0x3e8c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8c40) {
            ctx->pc = 0x3E8928u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e8928;
        }
    }
    ctx->pc = 0x3E8C48u;
label_3e8c48:
    // 0x3e8c48: 0x1bc0010b  blez        $fp, . + 4 + (0x10B << 2)
label_3e8c4c:
    if (ctx->pc == 0x3E8C4Cu) {
        ctx->pc = 0x3E8C50u;
        goto label_3e8c50;
    }
    ctx->pc = 0x3E8C48u;
    {
        const bool branch_taken_0x3e8c48 = (GPR_S32(ctx, 30) <= 0);
        if (branch_taken_0x3e8c48) {
            ctx->pc = 0x3E9078u;
            goto label_3e9078;
        }
    }
    ctx->pc = 0x3E8C50u;
label_3e8c50:
    // 0x3e8c50: 0x92a40006  lbu         $a0, 0x6($s5)
    ctx->pc = 0x3e8c50u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
label_3e8c54:
    // 0x3e8c54: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x3e8c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3e8c58:
    // 0x3e8c58: 0x2de1021  addu        $v0, $s6, $fp
    ctx->pc = 0x3e8c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
label_3e8c5c:
    // 0x3e8c5c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3e8c5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3e8c60:
    // 0x3e8c60: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_3e8c64:
    if (ctx->pc == 0x3E8C64u) {
        ctx->pc = 0x3E8C64u;
            // 0x3e8c64: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E8C68u;
        goto label_3e8c68;
    }
    ctx->pc = 0x3E8C60u;
    {
        const bool branch_taken_0x3e8c60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E8C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8C60u;
            // 0x3e8c64: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8c60) {
            ctx->pc = 0x3E8C70u;
            goto label_3e8c70;
        }
    }
    ctx->pc = 0x3E8C68u;
label_3e8c68:
    // 0x3e8c68: 0x10000003  b           . + 4 + (0x3 << 2)
label_3e8c6c:
    if (ctx->pc == 0x3E8C6Cu) {
        ctx->pc = 0x3E8C6Cu;
            // 0x3e8c6c: 0x2c41823  subu        $v1, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->pc = 0x3E8C70u;
        goto label_3e8c70;
    }
    ctx->pc = 0x3E8C68u;
    {
        const bool branch_taken_0x3e8c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8C68u;
            // 0x3e8c6c: 0x2c41823  subu        $v1, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8c68) {
            ctx->pc = 0x3E8C78u;
            goto label_3e8c78;
        }
    }
    ctx->pc = 0x3E8C70u;
label_3e8c70:
    // 0x3e8c70: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x3e8c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3e8c74:
    // 0x3e8c74: 0x2c31823  subu        $v1, $s6, $v1
    ctx->pc = 0x3e8c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_3e8c78:
    // 0x3e8c78: 0x76082b  sltu        $at, $v1, $s6
    ctx->pc = 0x3e8c78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_3e8c7c:
    // 0x3e8c7c: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
label_3e8c80:
    if (ctx->pc == 0x3E8C80u) {
        ctx->pc = 0x3E8C84u;
        goto label_3e8c84;
    }
    ctx->pc = 0x3E8C7Cu;
    {
        const bool branch_taken_0x3e8c7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8c7c) {
            ctx->pc = 0x3E8D40u;
            goto label_3e8d40;
        }
    }
    ctx->pc = 0x3E8C84u;
label_3e8c84:
    // 0x3e8c84: 0x92c80000  lbu         $t0, 0x0($s6)
    ctx->pc = 0x3e8c84u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_3e8c88:
    // 0x3e8c88: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x3e8c88u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3e8c8c:
    // 0x3e8c8c: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x3e8c8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3e8c90:
    // 0x3e8c90: 0x14880027  bne         $a0, $t0, . + 4 + (0x27 << 2)
label_3e8c94:
    if (ctx->pc == 0x3E8C94u) {
        ctx->pc = 0x3E8C94u;
            // 0x3e8c94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E8C98u;
        goto label_3e8c98;
    }
    ctx->pc = 0x3E8C90u;
    {
        const bool branch_taken_0x3e8c90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        ctx->pc = 0x3E8C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8C90u;
            // 0x3e8c94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8c90) {
            ctx->pc = 0x3E8D30u;
            goto label_3e8d30;
        }
    }
    ctx->pc = 0x3E8C98u;
label_3e8c98:
    // 0x3e8c98: 0x92a70008  lbu         $a3, 0x8($s5)
    ctx->pc = 0x3e8c98u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 8)));
label_3e8c9c:
    // 0x3e8c9c: 0x2c32823  subu        $a1, $s6, $v1
    ctx->pc = 0x3e8c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_3e8ca0:
    // 0x3e8ca0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3e8ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3e8ca4:
    // 0x3e8ca4: 0x207202b  sltu        $a0, $s0, $a3
    ctx->pc = 0x3e8ca4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_3e8ca8:
    // 0x3e8ca8: 0x14800013  bnez        $a0, . + 4 + (0x13 << 2)
label_3e8cac:
    if (ctx->pc == 0x3E8CACu) {
        ctx->pc = 0x3E8CB0u;
        goto label_3e8cb0;
    }
    ctx->pc = 0x3E8CA8u;
    {
        const bool branch_taken_0x3e8ca8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e8ca8) {
            ctx->pc = 0x3E8CF8u;
            goto label_3e8cf8;
        }
    }
    ctx->pc = 0x3E8CB0u;
label_3e8cb0:
    // 0x3e8cb0: 0x2f0082b  sltu        $at, $s7, $s0
    ctx->pc = 0x3e8cb0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3e8cb4:
    // 0x3e8cb4: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_3e8cb8:
    if (ctx->pc == 0x3E8CB8u) {
        ctx->pc = 0x3E8CBCu;
        goto label_3e8cbc;
    }
    ctx->pc = 0x3E8CB4u;
    {
        const bool branch_taken_0x3e8cb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8cb4) {
            ctx->pc = 0x3E8CF8u;
            goto label_3e8cf8;
        }
    }
    ctx->pc = 0x3E8CBCu;
label_3e8cbc:
    // 0x3e8cbc: 0x92a40007  lbu         $a0, 0x7($s5)
    ctx->pc = 0x3e8cbcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 7)));
label_3e8cc0:
    // 0x3e8cc0: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x3e8cc0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e8cc4:
    // 0x3e8cc4: 0x204202b  sltu        $a0, $s0, $a0
    ctx->pc = 0x3e8cc4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3e8cc8:
    // 0x3e8cc8: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
label_3e8ccc:
    if (ctx->pc == 0x3E8CCCu) {
        ctx->pc = 0x3E8CCCu;
            // 0x3e8ccc: 0xafa500bc  sw          $a1, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 5));
        ctx->pc = 0x3E8CD0u;
        goto label_3e8cd0;
    }
    ctx->pc = 0x3E8CC8u;
    {
        const bool branch_taken_0x3e8cc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E8CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8CC8u;
            // 0x3e8ccc: 0xafa500bc  sw          $a1, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8cc8) {
            ctx->pc = 0x3E8CF8u;
            goto label_3e8cf8;
        }
    }
    ctx->pc = 0x3E8CD0u;
label_3e8cd0:
    // 0x3e8cd0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3e8cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3e8cd4:
    // 0x3e8cd4: 0xc0fa458  jal         func_3E9160
label_3e8cd8:
    if (ctx->pc == 0x3E8CD8u) {
        ctx->pc = 0x3E8CD8u;
            // 0x3e8cd8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E8CDCu;
        goto label_3e8cdc;
    }
    ctx->pc = 0x3E8CD4u;
    SET_GPR_U32(ctx, 31, 0x3E8CDCu);
    ctx->pc = 0x3E8CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8CD4u;
            // 0x3e8cd8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E9160u;
    if (runtime->hasFunction(0x3E9160u)) {
        auto targetFn = runtime->lookupFunction(0x3E9160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8CDCu; }
        if (ctx->pc != 0x3E8CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E9160_0x3e9160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8CDCu; }
        if (ctx->pc != 0x3E8CDCu) { return; }
    }
    ctx->pc = 0x3E8CDCu;
label_3e8cdc:
    // 0x3e8cdc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x3e8cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3e8ce0:
    // 0x3e8ce0: 0x3d0f023  subu        $fp, $fp, $s0
    ctx->pc = 0x3e8ce0u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
label_3e8ce4:
    // 0x3e8ce4: 0x2d0b021  addu        $s6, $s6, $s0
    ctx->pc = 0x3e8ce4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_3e8ce8:
    // 0x3e8ce8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3e8ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3e8cec:
    // 0x3e8cec: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x3e8cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_3e8cf0:
    // 0x3e8cf0: 0x10000029  b           . + 4 + (0x29 << 2)
label_3e8cf4:
    if (ctx->pc == 0x3E8CF4u) {
        ctx->pc = 0x3E8CF4u;
            // 0x3e8cf4: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3E8CF8u;
        goto label_3e8cf8;
    }
    ctx->pc = 0x3E8CF0u;
    {
        const bool branch_taken_0x3e8cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8CF0u;
            // 0x3e8cf4: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8cf0) {
            ctx->pc = 0x3E8D98u;
            goto label_3e8d98;
        }
    }
    ctx->pc = 0x3E8CF8u;
label_3e8cf8:
    // 0x3e8cf8: 0x2d03021  addu        $a2, $s6, $s0
    ctx->pc = 0x3e8cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_3e8cfc:
    // 0x3e8cfc: 0xc2202b  sltu        $a0, $a2, $v0
    ctx->pc = 0x3e8cfcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3e8d00:
    // 0x3e8d00: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_3e8d04:
    if (ctx->pc == 0x3E8D04u) {
        ctx->pc = 0x3E8D04u;
            // 0x3e8d04: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->pc = 0x3E8D08u;
        goto label_3e8d08;
    }
    ctx->pc = 0x3E8D00u;
    {
        const bool branch_taken_0x3e8d00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E8D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8D00u;
            // 0x3e8d04: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8d00) {
            ctx->pc = 0x3E8D20u;
            goto label_3e8d20;
        }
    }
    ctx->pc = 0x3E8D08u;
label_3e8d08:
    // 0x3e8d08: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3e8d08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3e8d0c:
    // 0x3e8d0c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_3e8d10:
    if (ctx->pc == 0x3E8D10u) {
        ctx->pc = 0x3E8D14u;
        goto label_3e8d14;
    }
    ctx->pc = 0x3E8D0Cu;
    {
        const bool branch_taken_0x3e8d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e8d0c) {
            ctx->pc = 0x3E8D40u;
            goto label_3e8d40;
        }
    }
    ctx->pc = 0x3E8D14u;
label_3e8d14:
    // 0x3e8d14: 0x10000020  b           . + 4 + (0x20 << 2)
label_3e8d18:
    if (ctx->pc == 0x3E8D18u) {
        ctx->pc = 0x3E8D18u;
            // 0x3e8d18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E8D1Cu;
        goto label_3e8d1c;
    }
    ctx->pc = 0x3E8D14u;
    {
        const bool branch_taken_0x3e8d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8D14u;
            // 0x3e8d18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8d14) {
            ctx->pc = 0x3E8D98u;
            goto label_3e8d98;
        }
    }
    ctx->pc = 0x3E8D1Cu;
label_3e8d1c:
    // 0x3e8d1c: 0x0  nop
    ctx->pc = 0x3e8d1cu;
    // NOP
label_3e8d20:
    // 0x3e8d20: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x3e8d20u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3e8d24:
    // 0x3e8d24: 0x91260000  lbu         $a2, 0x0($t1)
    ctx->pc = 0x3e8d24u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_3e8d28:
    // 0x3e8d28: 0x10c4ffdd  beq         $a2, $a0, . + 4 + (-0x23 << 2)
label_3e8d2c:
    if (ctx->pc == 0x3E8D2Cu) {
        ctx->pc = 0x3E8D30u;
        goto label_3e8d30;
    }
    ctx->pc = 0x3E8D28u;
    {
        const bool branch_taken_0x3e8d28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x3e8d28) {
            ctx->pc = 0x3E8CA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e8ca0;
        }
    }
    ctx->pc = 0x3E8D30u;
label_3e8d30:
    // 0x3e8d30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e8d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3e8d34:
    // 0x3e8d34: 0x76202b  sltu        $a0, $v1, $s6
    ctx->pc = 0x3e8d34u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_3e8d38:
    // 0x3e8d38: 0x1480ffd3  bnez        $a0, . + 4 + (-0x2D << 2)
label_3e8d3c:
    if (ctx->pc == 0x3E8D3Cu) {
        ctx->pc = 0x3E8D40u;
        goto label_3e8d40;
    }
    ctx->pc = 0x3E8D38u;
    {
        const bool branch_taken_0x3e8d38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e8d38) {
            ctx->pc = 0x3E8C88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e8c88;
        }
    }
    ctx->pc = 0x3E8D40u;
label_3e8d40:
    // 0x3e8d40: 0x12e0000b  beqz        $s7, . + 4 + (0xB << 2)
label_3e8d44:
    if (ctx->pc == 0x3E8D44u) {
        ctx->pc = 0x3E8D48u;
        goto label_3e8d48;
    }
    ctx->pc = 0x3E8D40u;
    {
        const bool branch_taken_0x3e8d40 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8d40) {
            ctx->pc = 0x3E8D70u;
            goto label_3e8d70;
        }
    }
    ctx->pc = 0x3E8D48u;
label_3e8d48:
    // 0x3e8d48: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x3e8d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_3e8d4c:
    // 0x3e8d4c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3e8d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3e8d50:
    // 0x3e8d50: 0xc0fa458  jal         func_3E9160
label_3e8d54:
    if (ctx->pc == 0x3E8D54u) {
        ctx->pc = 0x3E8D54u;
            // 0x3e8d54: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E8D58u;
        goto label_3e8d58;
    }
    ctx->pc = 0x3E8D50u;
    SET_GPR_U32(ctx, 31, 0x3E8D58u);
    ctx->pc = 0x3E8D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8D50u;
            // 0x3e8d54: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E9160u;
    if (runtime->hasFunction(0x3E9160u)) {
        auto targetFn = runtime->lookupFunction(0x3E9160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8D58u; }
        if (ctx->pc != 0x3E8D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E9160_0x3e9160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8D58u; }
        if (ctx->pc != 0x3E8D58u) { return; }
    }
    ctx->pc = 0x3E8D58u;
label_3e8d58:
    // 0x3e8d58: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x3e8d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3e8d5c:
    // 0x3e8d5c: 0x3d7f023  subu        $fp, $fp, $s7
    ctx->pc = 0x3e8d5cu;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
label_3e8d60:
    // 0x3e8d60: 0x2d7b021  addu        $s6, $s6, $s7
    ctx->pc = 0x3e8d60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
label_3e8d64:
    // 0x3e8d64: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x3e8d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_3e8d68:
    // 0x3e8d68: 0x10000009  b           . + 4 + (0x9 << 2)
label_3e8d6c:
    if (ctx->pc == 0x3E8D6Cu) {
        ctx->pc = 0x3E8D6Cu;
            // 0x3e8d6c: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->pc = 0x3E8D70u;
        goto label_3e8d70;
    }
    ctx->pc = 0x3E8D68u;
    {
        const bool branch_taken_0x3e8d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8D68u;
            // 0x3e8d6c: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8d68) {
            ctx->pc = 0x3E8D90u;
            goto label_3e8d90;
        }
    }
    ctx->pc = 0x3E8D70u;
label_3e8d70:
    // 0x3e8d70: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x3e8d70u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_3e8d74:
    // 0x3e8d74: 0xc0fa44c  jal         func_3E9130
label_3e8d78:
    if (ctx->pc == 0x3E8D78u) {
        ctx->pc = 0x3E8D78u;
            // 0x3e8d78: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E8D7Cu;
        goto label_3e8d7c;
    }
    ctx->pc = 0x3E8D74u;
    SET_GPR_U32(ctx, 31, 0x3E8D7Cu);
    ctx->pc = 0x3E8D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8D74u;
            // 0x3e8d78: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E9130u;
    if (runtime->hasFunction(0x3E9130u)) {
        auto targetFn = runtime->lookupFunction(0x3E9130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8D7Cu; }
        if (ctx->pc != 0x3E8D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E9130_0x3e9130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8D7Cu; }
        if (ctx->pc != 0x3E8D7Cu) { return; }
    }
    ctx->pc = 0x3E8D7Cu;
label_3e8d7c:
    // 0x3e8d7c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x3e8d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3e8d80:
    // 0x3e8d80: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x3e8d80u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
label_3e8d84:
    // 0x3e8d84: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3e8d84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3e8d88:
    // 0x3e8d88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e8d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e8d8c:
    // 0x3e8d8c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x3e8d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_3e8d90:
    // 0x3e8d90: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x3e8d90u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3e8d94:
    // 0x3e8d94: 0x0  nop
    ctx->pc = 0x3e8d94u;
    // NOP
label_3e8d98:
    // 0x3e8d98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3e8d9c:
    if (ctx->pc == 0x3E8D9Cu) {
        ctx->pc = 0x3E8DA0u;
        goto label_3e8da0;
    }
    ctx->pc = 0x3E8D98u;
    {
        const bool branch_taken_0x3e8d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e8d98) {
            ctx->pc = 0x3E8DA8u;
            goto label_3e8da8;
        }
    }
    ctx->pc = 0x3E8DA0u;
label_3e8da0:
    // 0x3e8da0: 0xafbe00dc  sw          $fp, 0xDC($sp)
    ctx->pc = 0x3e8da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 30));
label_3e8da4:
    // 0x3e8da4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x3e8da4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e8da8:
    // 0x3e8da8: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x3e8da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e8dac:
    // 0x3e8dac: 0x106000a8  beqz        $v1, . + 4 + (0xA8 << 2)
label_3e8db0:
    if (ctx->pc == 0x3E8DB0u) {
        ctx->pc = 0x3E8DB4u;
        goto label_3e8db4;
    }
    ctx->pc = 0x3E8DACu;
    {
        const bool branch_taken_0x3e8dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8dac) {
            ctx->pc = 0x3E9050u;
            goto label_3e9050;
        }
    }
    ctx->pc = 0x3E8DB4u;
label_3e8db4:
    // 0x3e8db4: 0x92a20054  lbu         $v0, 0x54($s5)
    ctx->pc = 0x3e8db4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 84)));
label_3e8db8:
    // 0x3e8db8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_3e8dbc:
    if (ctx->pc == 0x3E8DBCu) {
        ctx->pc = 0x3E8DC0u;
        goto label_3e8dc0;
    }
    ctx->pc = 0x3E8DB8u;
    {
        const bool branch_taken_0x3e8db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8db8) {
            ctx->pc = 0x3E8E40u;
            goto label_3e8e40;
        }
    }
    ctx->pc = 0x3E8DC0u;
label_3e8dc0:
    // 0x3e8dc0: 0x1e400003  bgtz        $s2, . + 4 + (0x3 << 2)
label_3e8dc4:
    if (ctx->pc == 0x3E8DC4u) {
        ctx->pc = 0x3E8DC8u;
        goto label_3e8dc8;
    }
    ctx->pc = 0x3E8DC0u;
    {
        const bool branch_taken_0x3e8dc0 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x3e8dc0) {
            ctx->pc = 0x3E8DD0u;
            goto label_3e8dd0;
        }
    }
    ctx->pc = 0x3E8DC8u;
label_3e8dc8:
    // 0x3e8dc8: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_3e8dcc:
    if (ctx->pc == 0x3E8DCCu) {
        ctx->pc = 0x3E8DCCu;
            // 0x3e8dcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E8DD0u;
        goto label_3e8dd0;
    }
    ctx->pc = 0x3E8DC8u;
    {
        const bool branch_taken_0x3e8dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8DC8u;
            // 0x3e8dcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8dc8) {
            ctx->pc = 0x3E9058u;
            goto label_3e9058;
        }
    }
    ctx->pc = 0x3E8DD0u;
label_3e8dd0:
    // 0x3e8dd0: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x3e8dd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_3e8dd4:
    // 0x3e8dd4: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
label_3e8dd8:
    if (ctx->pc == 0x3E8DD8u) {
        ctx->pc = 0x3E8DDCu;
        goto label_3e8ddc;
    }
    ctx->pc = 0x3E8DD4u;
    {
        const bool branch_taken_0x3e8dd4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e8dd4) {
            ctx->pc = 0x3E8E08u;
            goto label_3e8e08;
        }
    }
    ctx->pc = 0x3E8DDCu;
label_3e8ddc:
    // 0x3e8ddc: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3e8ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e8de0:
    // 0x3e8de0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e8de0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3e8de4:
    // 0x3e8de4: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x3e8de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
label_3e8de8:
    // 0x3e8de8: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3e8de8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e8dec:
    // 0x3e8dec: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3e8decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e8df0:
    // 0x3e8df0: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x3e8df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_3e8df4:
    // 0x3e8df4: 0xaea2004c  sw          $v0, 0x4C($s5)
    ctx->pc = 0x3e8df4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
label_3e8df8:
    // 0x3e8df8: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3e8df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e8dfc:
    // 0x3e8dfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e8dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e8e00:
    // 0x3e8e00: 0x1000000d  b           . + 4 + (0xD << 2)
label_3e8e04:
    if (ctx->pc == 0x3E8E04u) {
        ctx->pc = 0x3E8E04u;
            // 0x3e8e04: 0xaea20050  sw          $v0, 0x50($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x3E8E08u;
        goto label_3e8e08;
    }
    ctx->pc = 0x3E8E00u;
    {
        const bool branch_taken_0x3e8e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8E00u;
            // 0x3e8e04: 0xaea20050  sw          $v0, 0x50($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8e00) {
            ctx->pc = 0x3E8E38u;
            goto label_3e8e38;
        }
    }
    ctx->pc = 0x3E8E08u;
label_3e8e08:
    // 0x3e8e08: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x3e8e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e8e0c:
    // 0x3e8e0c: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x3e8e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3e8e10:
    // 0x3e8e10: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3e8e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e8e14:
    // 0x3e8e14: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3e8e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e8e18:
    // 0x3e8e18: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x3e8e18u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3e8e1c:
    // 0x3e8e1c: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x3e8e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3e8e20:
    // 0x3e8e20: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x3e8e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_3e8e24:
    // 0x3e8e24: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3e8e24u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e8e28:
    // 0x3e8e28: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3e8e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e8e2c:
    // 0x3e8e2c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3e8e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e8e30:
    // 0x3e8e30: 0x30510007  andi        $s1, $v0, 0x7
    ctx->pc = 0x3e8e30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_3e8e34:
    // 0x3e8e34: 0x0  nop
    ctx->pc = 0x3e8e34u;
    // NOP
label_3e8e38:
    // 0x3e8e38: 0xa2a00054  sb          $zero, 0x54($s5)
    ctx->pc = 0x3e8e38u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 84), (uint8_t)GPR_U32(ctx, 0));
label_3e8e3c:
    // 0x3e8e3c: 0x0  nop
    ctx->pc = 0x3e8e3cu;
    // NOP
label_3e8e40:
    // 0x3e8e40: 0x8ea5004c  lw          $a1, 0x4C($s5)
    ctx->pc = 0x3e8e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e8e44:
    // 0x3e8e44: 0x10a00082  beqz        $a1, . + 4 + (0x82 << 2)
label_3e8e48:
    if (ctx->pc == 0x3E8E48u) {
        ctx->pc = 0x3E8E4Cu;
        goto label_3e8e4c;
    }
    ctx->pc = 0x3E8E44u;
    {
        const bool branch_taken_0x3e8e44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8e44) {
            ctx->pc = 0x3E9050u;
            goto label_3e9050;
        }
    }
    ctx->pc = 0x3E8E4Cu;
label_3e8e4c:
    // 0x3e8e4c: 0x0  nop
    ctx->pc = 0x3e8e4cu;
    // NOP
label_3e8e50:
    // 0x3e8e50: 0x1e400003  bgtz        $s2, . + 4 + (0x3 << 2)
label_3e8e54:
    if (ctx->pc == 0x3E8E54u) {
        ctx->pc = 0x3E8E58u;
        goto label_3e8e58;
    }
    ctx->pc = 0x3E8E50u;
    {
        const bool branch_taken_0x3e8e50 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x3e8e50) {
            ctx->pc = 0x3E8E60u;
            goto label_3e8e60;
        }
    }
    ctx->pc = 0x3E8E58u;
label_3e8e58:
    // 0x3e8e58: 0x1000007f  b           . + 4 + (0x7F << 2)
label_3e8e5c:
    if (ctx->pc == 0x3E8E5Cu) {
        ctx->pc = 0x3E8E5Cu;
            // 0x3e8e5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E8E60u;
        goto label_3e8e60;
    }
    ctx->pc = 0x3E8E58u;
    {
        const bool branch_taken_0x3e8e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8E58u;
            // 0x3e8e5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8e58) {
            ctx->pc = 0x3E9058u;
            goto label_3e9058;
        }
    }
    ctx->pc = 0x3E8E60u;
label_3e8e60:
    // 0x3e8e60: 0x2ca10009  sltiu       $at, $a1, 0x9
    ctx->pc = 0x3e8e60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_3e8e64:
    // 0x3e8e64: 0x1420002e  bnez        $at, . + 4 + (0x2E << 2)
label_3e8e68:
    if (ctx->pc == 0x3E8E68u) {
        ctx->pc = 0x3E8E6Cu;
        goto label_3e8e6c;
    }
    ctx->pc = 0x3E8E64u;
    {
        const bool branch_taken_0x3e8e64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e8e64) {
            ctx->pc = 0x3E8F20u;
            goto label_3e8f20;
        }
    }
    ctx->pc = 0x3E8E6Cu;
label_3e8e6c:
    // 0x3e8e6c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3e8e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e8e70:
    // 0x3e8e70: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
label_3e8e74:
    if (ctx->pc == 0x3E8E74u) {
        ctx->pc = 0x3E8E78u;
        goto label_3e8e78;
    }
    ctx->pc = 0x3E8E70u;
    {
        const bool branch_taken_0x3e8e70 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e8e70) {
            ctx->pc = 0x3E8EA0u;
            goto label_3e8ea0;
        }
    }
    ctx->pc = 0x3E8E78u;
label_3e8e78:
    // 0x3e8e78: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3e8e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e8e7c:
    // 0x3e8e7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e8e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e8e80:
    // 0x3e8e80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e8e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e8e84:
    // 0x3e8e84: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3e8e84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3e8e88:
    // 0x3e8e88: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e8e88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3e8e8c:
    // 0x3e8e8c: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3e8e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e8e90:
    // 0x3e8e90: 0xc0aad30  jal         func_2AB4C0
label_3e8e94:
    if (ctx->pc == 0x3E8E94u) {
        ctx->pc = 0x3E8E94u;
            // 0x3e8e94: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x3E8E98u;
        goto label_3e8e98;
    }
    ctx->pc = 0x3E8E90u;
    SET_GPR_U32(ctx, 31, 0x3E8E98u);
    ctx->pc = 0x3E8E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8E90u;
            // 0x3e8e94: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB4C0u;
    if (runtime->hasFunction(0x2AB4C0u)) {
        auto targetFn = runtime->lookupFunction(0x2AB4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8E98u; }
        if (ctx->pc != 0x3E8E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB4C0_0x2ab4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8E98u; }
        if (ctx->pc != 0x3E8E98u) { return; }
    }
    ctx->pc = 0x3E8E98u;
label_3e8e98:
    // 0x3e8e98: 0x10000019  b           . + 4 + (0x19 << 2)
label_3e8e9c:
    if (ctx->pc == 0x3E8E9Cu) {
        ctx->pc = 0x3E8EA0u;
        goto label_3e8ea0;
    }
    ctx->pc = 0x3E8E98u;
    {
        const bool branch_taken_0x3e8e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8e98) {
            ctx->pc = 0x3E8F00u;
            goto label_3e8f00;
        }
    }
    ctx->pc = 0x3E8EA0u;
label_3e8ea0:
    // 0x3e8ea0: 0x8ea60050  lw          $a2, 0x50($s5)
    ctx->pc = 0x3e8ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e8ea4:
    // 0x3e8ea4: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x3e8ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3e8ea8:
    // 0x3e8ea8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e8ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e8eac:
    // 0x3e8eac: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3e8eacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3e8eb0:
    // 0x3e8eb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e8eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e8eb4:
    // 0x3e8eb4: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x3e8eb4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3e8eb8:
    // 0x3e8eb8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3e8eb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3e8ebc:
    // 0x3e8ebc: 0x661807  srav        $v1, $a2, $v1
    ctx->pc = 0x3e8ebcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
label_3e8ec0:
    // 0x3e8ec0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3e8ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3e8ec4:
    // 0x3e8ec4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3e8ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3e8ec8:
    // 0x3e8ec8: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3e8ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e8ecc:
    // 0x3e8ecc: 0xc0aad30  jal         func_2AB4C0
label_3e8ed0:
    if (ctx->pc == 0x3E8ED0u) {
        ctx->pc = 0x3E8ED0u;
            // 0x3e8ed0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x3E8ED4u;
        goto label_3e8ed4;
    }
    ctx->pc = 0x3E8ECCu;
    SET_GPR_U32(ctx, 31, 0x3E8ED4u);
    ctx->pc = 0x3E8ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8ECCu;
            // 0x3e8ed0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB4C0u;
    if (runtime->hasFunction(0x2AB4C0u)) {
        auto targetFn = runtime->lookupFunction(0x2AB4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8ED4u; }
        if (ctx->pc != 0x3E8ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB4C0_0x2ab4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8ED4u; }
        if (ctx->pc != 0x3E8ED4u) { return; }
    }
    ctx->pc = 0x3E8ED4u;
label_3e8ed4:
    // 0x3e8ed4: 0x1a400006  blez        $s2, . + 4 + (0x6 << 2)
label_3e8ed8:
    if (ctx->pc == 0x3E8ED8u) {
        ctx->pc = 0x3E8EDCu;
        goto label_3e8edc;
    }
    ctx->pc = 0x3E8ED4u;
    {
        const bool branch_taken_0x3e8ed4 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3e8ed4) {
            ctx->pc = 0x3E8EF0u;
            goto label_3e8ef0;
        }
    }
    ctx->pc = 0x3E8EDCu;
label_3e8edc:
    // 0x3e8edc: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3e8edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e8ee0:
    // 0x3e8ee0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e8ee0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3e8ee4:
    // 0x3e8ee4: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x3e8ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
label_3e8ee8:
    // 0x3e8ee8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3e8eec:
    if (ctx->pc == 0x3E8EECu) {
        ctx->pc = 0x3E8EECu;
            // 0x3e8eec: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3E8EF0u;
        goto label_3e8ef0;
    }
    ctx->pc = 0x3E8EE8u;
    {
        const bool branch_taken_0x3e8ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8EE8u;
            // 0x3e8eec: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8ee8) {
            ctx->pc = 0x3E8F00u;
            goto label_3e8f00;
        }
    }
    ctx->pc = 0x3E8EF0u;
label_3e8ef0:
    // 0x3e8ef0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e8ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e8ef4:
    // 0x3e8ef4: 0xa2a20054  sb          $v0, 0x54($s5)
    ctx->pc = 0x3e8ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 84), (uint8_t)GPR_U32(ctx, 2));
label_3e8ef8:
    // 0x3e8ef8: 0x10000057  b           . + 4 + (0x57 << 2)
label_3e8efc:
    if (ctx->pc == 0x3E8EFCu) {
        ctx->pc = 0x3E8EFCu;
            // 0x3e8efc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E8F00u;
        goto label_3e8f00;
    }
    ctx->pc = 0x3E8EF8u;
    {
        const bool branch_taken_0x3e8ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8EF8u;
            // 0x3e8efc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8ef8) {
            ctx->pc = 0x3E9058u;
            goto label_3e9058;
        }
    }
    ctx->pc = 0x3E8F00u;
label_3e8f00:
    // 0x3e8f00: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3e8f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e8f04:
    // 0x3e8f04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e8f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e8f08:
    // 0x3e8f08: 0xaea20050  sw          $v0, 0x50($s5)
    ctx->pc = 0x3e8f08u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
label_3e8f0c:
    // 0x3e8f0c: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3e8f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e8f10:
    // 0x3e8f10: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x3e8f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_3e8f14:
    // 0x3e8f14: 0x1000004a  b           . + 4 + (0x4A << 2)
label_3e8f18:
    if (ctx->pc == 0x3E8F18u) {
        ctx->pc = 0x3E8F18u;
            // 0x3e8f18: 0xaea2004c  sw          $v0, 0x4C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x3E8F1Cu;
        goto label_3e8f1c;
    }
    ctx->pc = 0x3E8F14u;
    {
        const bool branch_taken_0x3e8f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8F14u;
            // 0x3e8f18: 0xaea2004c  sw          $v0, 0x4C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8f14) {
            ctx->pc = 0x3E9040u;
            goto label_3e9040;
        }
    }
    ctx->pc = 0x3E8F1Cu;
label_3e8f1c:
    // 0x3e8f1c: 0x0  nop
    ctx->pc = 0x3e8f1cu;
    // NOP
label_3e8f20:
    // 0x3e8f20: 0x225082b  sltu        $at, $s1, $a1
    ctx->pc = 0x3e8f20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3e8f24:
    // 0x3e8f24: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
label_3e8f28:
    if (ctx->pc == 0x3E8F28u) {
        ctx->pc = 0x3E8F2Cu;
        goto label_3e8f2c;
    }
    ctx->pc = 0x3E8F24u;
    {
        const bool branch_taken_0x3e8f24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e8f24) {
            ctx->pc = 0x3E8FB0u;
            goto label_3e8fb0;
        }
    }
    ctx->pc = 0x3E8F2Cu;
label_3e8f2c:
    // 0x3e8f2c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3e8f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e8f30:
    // 0x3e8f30: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
label_3e8f34:
    if (ctx->pc == 0x3E8F34u) {
        ctx->pc = 0x3E8F38u;
        goto label_3e8f38;
    }
    ctx->pc = 0x3E8F30u;
    {
        const bool branch_taken_0x3e8f30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e8f30) {
            ctx->pc = 0x3E8F58u;
            goto label_3e8f58;
        }
    }
    ctx->pc = 0x3E8F38u;
label_3e8f38:
    // 0x3e8f38: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x3e8f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e8f3c:
    // 0x3e8f3c: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x3e8f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3e8f40:
    // 0x3e8f40: 0x2251023  subu        $v0, $s1, $a1
    ctx->pc = 0x3e8f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_3e8f44:
    // 0x3e8f44: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x3e8f44u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3e8f48:
    // 0x3e8f48: 0x641807  srav        $v1, $a0, $v1
    ctx->pc = 0x3e8f48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_3e8f4c:
    // 0x3e8f4c: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x3e8f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_3e8f50:
    // 0x3e8f50: 0x1000000b  b           . + 4 + (0xB << 2)
label_3e8f54:
    if (ctx->pc == 0x3E8F54u) {
        ctx->pc = 0x3E8F54u;
            // 0x3e8f54: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3E8F58u;
        goto label_3e8f58;
    }
    ctx->pc = 0x3E8F50u;
    {
        const bool branch_taken_0x3e8f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8F50u;
            // 0x3e8f54: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8f50) {
            ctx->pc = 0x3E8F80u;
            goto label_3e8f80;
        }
    }
    ctx->pc = 0x3E8F58u;
label_3e8f58:
    // 0x3e8f58: 0x452023  subu        $a0, $v0, $a1
    ctx->pc = 0x3e8f58u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3e8f5c:
    // 0x3e8f5c: 0x2251823  subu        $v1, $s1, $a1
    ctx->pc = 0x3e8f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_3e8f60:
    // 0x3e8f60: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3e8f60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3e8f64:
    // 0x3e8f64: 0x8ea50050  lw          $a1, 0x50($s5)
    ctx->pc = 0x3e8f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e8f68:
    // 0x3e8f68: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x3e8f68u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3e8f6c:
    // 0x3e8f6c: 0x852007  srav        $a0, $a1, $a0
    ctx->pc = 0x3e8f6cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_3e8f70:
    // 0x3e8f70: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x3e8f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_3e8f74:
    // 0x3e8f74: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3e8f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3e8f78:
    // 0x3e8f78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3e8f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3e8f7c:
    // 0x3e8f7c: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3e8f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e8f80:
    // 0x3e8f80: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3e8f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e8f84:
    // 0x3e8f84: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x3e8f84u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3e8f88:
    // 0x3e8f88: 0x1e20002b  bgtz        $s1, . + 4 + (0x2B << 2)
label_3e8f8c:
    if (ctx->pc == 0x3E8F8Cu) {
        ctx->pc = 0x3E8F90u;
        goto label_3e8f90;
    }
    ctx->pc = 0x3E8F88u;
    {
        const bool branch_taken_0x3e8f88 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x3e8f88) {
            ctx->pc = 0x3E9038u;
            goto label_3e9038;
        }
    }
    ctx->pc = 0x3E8F90u;
label_3e8f90:
    // 0x3e8f90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e8f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e8f94:
    // 0x3e8f94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e8f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e8f98:
    // 0x3e8f98: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3e8f98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3e8f9c:
    // 0x3e8f9c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3e8f9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3e8fa0:
    // 0x3e8fa0: 0xc0aad30  jal         func_2AB4C0
label_3e8fa4:
    if (ctx->pc == 0x3E8FA4u) {
        ctx->pc = 0x3E8FA4u;
            // 0x3e8fa4: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3E8FA8u;
        goto label_3e8fa8;
    }
    ctx->pc = 0x3E8FA0u;
    SET_GPR_U32(ctx, 31, 0x3E8FA8u);
    ctx->pc = 0x3E8FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8FA0u;
            // 0x3e8fa4: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB4C0u;
    if (runtime->hasFunction(0x2AB4C0u)) {
        auto targetFn = runtime->lookupFunction(0x2AB4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8FA8u; }
        if (ctx->pc != 0x3E8FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB4C0_0x2ab4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8FA8u; }
        if (ctx->pc != 0x3E8FA8u) { return; }
    }
    ctx->pc = 0x3E8FA8u;
label_3e8fa8:
    // 0x3e8fa8: 0x10000023  b           . + 4 + (0x23 << 2)
label_3e8fac:
    if (ctx->pc == 0x3E8FACu) {
        ctx->pc = 0x3E8FB0u;
        goto label_3e8fb0;
    }
    ctx->pc = 0x3E8FA8u;
    {
        const bool branch_taken_0x3e8fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8fa8) {
            ctx->pc = 0x3E9038u;
            goto label_3e9038;
        }
    }
    ctx->pc = 0x3E8FB0u;
label_3e8fb0:
    // 0x3e8fb0: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x3e8fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e8fb4:
    // 0x3e8fb4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3e8fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e8fb8:
    // 0x3e8fb8: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3e8fb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3e8fbc:
    // 0x3e8fbc: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x3e8fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3e8fc0:
    // 0x3e8fc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e8fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e8fc4:
    // 0x3e8fc4: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x3e8fc4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3e8fc8:
    // 0x3e8fc8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3e8fc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3e8fcc:
    // 0x3e8fcc: 0x661807  srav        $v1, $a2, $v1
    ctx->pc = 0x3e8fccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
label_3e8fd0:
    // 0x3e8fd0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e8fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e8fd4:
    // 0x3e8fd4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3e8fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3e8fd8:
    // 0x3e8fd8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3e8fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3e8fdc:
    // 0x3e8fdc: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3e8fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e8fe0:
    // 0x3e8fe0: 0xc0aad30  jal         func_2AB4C0
label_3e8fe4:
    if (ctx->pc == 0x3E8FE4u) {
        ctx->pc = 0x3E8FE4u;
            // 0x3e8fe4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x3E8FE8u;
        goto label_3e8fe8;
    }
    ctx->pc = 0x3E8FE0u;
    SET_GPR_U32(ctx, 31, 0x3E8FE8u);
    ctx->pc = 0x3E8FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8FE0u;
            // 0x3e8fe4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB4C0u;
    if (runtime->hasFunction(0x2AB4C0u)) {
        auto targetFn = runtime->lookupFunction(0x2AB4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8FE8u; }
        if (ctx->pc != 0x3E8FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB4C0_0x2ab4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8FE8u; }
        if (ctx->pc != 0x3E8FE8u) { return; }
    }
    ctx->pc = 0x3E8FE8u;
label_3e8fe8:
    // 0x3e8fe8: 0x1a40000f  blez        $s2, . + 4 + (0xF << 2)
label_3e8fec:
    if (ctx->pc == 0x3E8FECu) {
        ctx->pc = 0x3E8FF0u;
        goto label_3e8ff0;
    }
    ctx->pc = 0x3E8FE8u;
    {
        const bool branch_taken_0x3e8fe8 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3e8fe8) {
            ctx->pc = 0x3E9028u;
            goto label_3e9028;
        }
    }
    ctx->pc = 0x3E8FF0u;
label_3e8ff0:
    // 0x3e8ff0: 0x8ea5004c  lw          $a1, 0x4C($s5)
    ctx->pc = 0x3e8ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e8ff4:
    // 0x3e8ff4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3e8ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e8ff8:
    // 0x3e8ff8: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3e8ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e8ffc:
    // 0x3e8ffc: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x3e8ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3e9000:
    // 0x3e9000: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x3e9000u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3e9004:
    // 0x3e9004: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3e9004u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3e9008:
    // 0x3e9008: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x3e9008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_3e900c:
    // 0x3e900c: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x3e900cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_3e9010:
    // 0x3e9010: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x3e9010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_3e9014:
    // 0x3e9014: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3e9014u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e9018:
    // 0x3e9018: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3e9018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e901c:
    // 0x3e901c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3e901cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e9020:
    // 0x3e9020: 0x10000005  b           . + 4 + (0x5 << 2)
label_3e9024:
    if (ctx->pc == 0x3E9024u) {
        ctx->pc = 0x3E9024u;
            // 0x3e9024: 0x30510007  andi        $s1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->pc = 0x3E9028u;
        goto label_3e9028;
    }
    ctx->pc = 0x3E9020u;
    {
        const bool branch_taken_0x3e9020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9020u;
            // 0x3e9024: 0x30510007  andi        $s1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9020) {
            ctx->pc = 0x3E9038u;
            goto label_3e9038;
        }
    }
    ctx->pc = 0x3E9028u;
label_3e9028:
    // 0x3e9028: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e9028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e902c:
    // 0x3e902c: 0xa2a20054  sb          $v0, 0x54($s5)
    ctx->pc = 0x3e902cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 84), (uint8_t)GPR_U32(ctx, 2));
label_3e9030:
    // 0x3e9030: 0x10000009  b           . + 4 + (0x9 << 2)
label_3e9034:
    if (ctx->pc == 0x3E9034u) {
        ctx->pc = 0x3E9034u;
            // 0x3e9034: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E9038u;
        goto label_3e9038;
    }
    ctx->pc = 0x3E9030u;
    {
        const bool branch_taken_0x3e9030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9030u;
            // 0x3e9034: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9030) {
            ctx->pc = 0x3E9058u;
            goto label_3e9058;
        }
    }
    ctx->pc = 0x3E9038u;
label_3e9038:
    // 0x3e9038: 0xaea0004c  sw          $zero, 0x4C($s5)
    ctx->pc = 0x3e9038u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 0));
label_3e903c:
    // 0x3e903c: 0x0  nop
    ctx->pc = 0x3e903cu;
    // NOP
label_3e9040:
    // 0x3e9040: 0x8ea5004c  lw          $a1, 0x4C($s5)
    ctx->pc = 0x3e9040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e9044:
    // 0x3e9044: 0x14a0ff82  bnez        $a1, . + 4 + (-0x7E << 2)
label_3e9048:
    if (ctx->pc == 0x3E9048u) {
        ctx->pc = 0x3E904Cu;
        goto label_3e904c;
    }
    ctx->pc = 0x3E9044u;
    {
        const bool branch_taken_0x3e9044 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9044) {
            ctx->pc = 0x3E8E50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e8e50;
        }
    }
    ctx->pc = 0x3E904Cu;
label_3e904c:
    // 0x3e904c: 0x0  nop
    ctx->pc = 0x3e904cu;
    // NOP
label_3e9050:
    // 0x3e9050: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x3e9050u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3e9054:
    // 0x3e9054: 0x0  nop
    ctx->pc = 0x3e9054u;
    // NOP
label_3e9058:
    // 0x3e9058: 0x1040fe33  beqz        $v0, . + 4 + (-0x1CD << 2)
label_3e905c:
    if (ctx->pc == 0x3E905Cu) {
        ctx->pc = 0x3E9060u;
        goto label_3e9060;
    }
    ctx->pc = 0x3E9058u;
    {
        const bool branch_taken_0x3e9058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9058) {
            ctx->pc = 0x3E8928u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e8928;
        }
    }
    ctx->pc = 0x3E9060u;
label_3e9060:
    // 0x3e9060: 0x1bc00005  blez        $fp, . + 4 + (0x5 << 2)
label_3e9064:
    if (ctx->pc == 0x3E9064u) {
        ctx->pc = 0x3E9068u;
        goto label_3e9068;
    }
    ctx->pc = 0x3E9060u;
    {
        const bool branch_taken_0x3e9060 = (GPR_S32(ctx, 30) <= 0);
        if (branch_taken_0x3e9060) {
            ctx->pc = 0x3E9078u;
            goto label_3e9078;
        }
    }
    ctx->pc = 0x3E9068u;
label_3e9068:
    // 0x3e9068: 0x1e40fef9  bgtz        $s2, . + 4 + (-0x107 << 2)
label_3e906c:
    if (ctx->pc == 0x3E906Cu) {
        ctx->pc = 0x3E9070u;
        goto label_3e9070;
    }
    ctx->pc = 0x3E9068u;
    {
        const bool branch_taken_0x3e9068 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x3e9068) {
            ctx->pc = 0x3E8C50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e8c50;
        }
    }
    ctx->pc = 0x3E9070u;
label_3e9070:
    // 0x3e9070: 0x1000fe2d  b           . + 4 + (-0x1D3 << 2)
label_3e9074:
    if (ctx->pc == 0x3E9074u) {
        ctx->pc = 0x3E9078u;
        goto label_3e9078;
    }
    ctx->pc = 0x3E9070u;
    {
        const bool branch_taken_0x3e9070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9070) {
            ctx->pc = 0x3E8928u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e8928;
        }
    }
    ctx->pc = 0x3E9078u;
label_3e9078:
    // 0x3e9078: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x3e9078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_3e907c:
    // 0x3e907c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x3e907cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3e9080:
    // 0x3e9080: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3e9080u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3e9084:
    // 0x3e9084: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3e9084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3e9088:
    // 0x3e9088: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3e908c:
    if (ctx->pc == 0x3E908Cu) {
        ctx->pc = 0x3E9090u;
        goto label_3e9090;
    }
    ctx->pc = 0x3E9088u;
    {
        const bool branch_taken_0x3e9088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9088) {
            ctx->pc = 0x3E90B0u;
            goto label_3e90b0;
        }
    }
    ctx->pc = 0x3E9090u;
label_3e9090:
    // 0x3e9090: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x3e9090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_3e9094:
    // 0x3e9094: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x3e9094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3e9098:
    // 0x3e9098: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x3e9098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_3e909c:
    // 0x3e909c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3e909cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3e90a0:
    // 0x3e90a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3e90a4:
    if (ctx->pc == 0x3E90A4u) {
        ctx->pc = 0x3E90A8u;
        goto label_3e90a8;
    }
    ctx->pc = 0x3E90A0u;
    {
        const bool branch_taken_0x3e90a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e90a0) {
            ctx->pc = 0x3E90B0u;
            goto label_3e90b0;
        }
    }
    ctx->pc = 0x3E90A8u;
label_3e90a8:
    // 0x3e90a8: 0x10000003  b           . + 4 + (0x3 << 2)
label_3e90ac:
    if (ctx->pc == 0x3E90ACu) {
        ctx->pc = 0x3E90ACu;
            // 0x3e90ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E90B0u;
        goto label_3e90b0;
    }
    ctx->pc = 0x3E90A8u;
    {
        const bool branch_taken_0x3e90a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E90ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E90A8u;
            // 0x3e90ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e90a8) {
            ctx->pc = 0x3E90B8u;
            goto label_3e90b8;
        }
    }
    ctx->pc = 0x3E90B0u;
label_3e90b0:
    // 0x3e90b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e90b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e90b4:
    // 0x3e90b4: 0x0  nop
    ctx->pc = 0x3e90b4u;
    // NOP
label_3e90b8:
    // 0x3e90b8: 0x1040fdc8  beqz        $v0, . + 4 + (-0x238 << 2)
label_3e90bc:
    if (ctx->pc == 0x3E90BCu) {
        ctx->pc = 0x3E90C0u;
        goto label_3e90c0;
    }
    ctx->pc = 0x3E90B8u;
    {
        const bool branch_taken_0x3e90b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e90b8) {
            ctx->pc = 0x3E87DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e87dc;
        }
    }
    ctx->pc = 0x3E90C0u;
label_3e90c0:
    // 0x3e90c0: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x3e90c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_3e90c4:
    // 0x3e90c4: 0x50200008  beql        $at, $zero, . + 4 + (0x8 << 2)
label_3e90c8:
    if (ctx->pc == 0x3E90C8u) {
        ctx->pc = 0x3E90C8u;
            // 0x3e90c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E90CCu;
        goto label_3e90cc;
    }
    ctx->pc = 0x3E90C4u;
    {
        const bool branch_taken_0x3e90c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e90c4) {
            ctx->pc = 0x3E90C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E90C4u;
            // 0x3e90c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E90E8u;
            goto label_3e90e8;
        }
    }
    ctx->pc = 0x3E90CCu;
label_3e90cc:
    // 0x3e90cc: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x3e90ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3e90d0:
    // 0x3e90d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e90d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e90d4:
    // 0x3e90d4: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3e90d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3e90d8:
    // 0x3e90d8: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3e90d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3e90dc:
    // 0x3e90dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e90dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e90e0:
    // 0x3e90e0: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x3e90e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
label_3e90e4:
    // 0x3e90e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e90e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e90e8:
    // 0x3e90e8: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x3e90e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
label_3e90ec:
    // 0x3e90ec: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3e90ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3e90f0:
    // 0x3e90f0: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3e90f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_3e90f4:
    // 0x3e90f4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3e90f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3e90f8:
    // 0x3e90f8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3e90f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3e90fc:
    // 0x3e90fc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3e90fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3e9100:
    // 0x3e9100: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3e9100u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e9104:
    // 0x3e9104: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3e9104u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e9108:
    // 0x3e9108: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3e9108u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e910c:
    // 0x3e910c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3e910cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e9110:
    // 0x3e9110: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e9110u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e9114:
    // 0x3e9114: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e9114u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e9118:
    // 0x3e9118: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e9118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e911c:
    // 0x3e911c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e911cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e9120:
    // 0x3e9120: 0x3e00008  jr          $ra
label_3e9124:
    if (ctx->pc == 0x3E9124u) {
        ctx->pc = 0x3E9124u;
            // 0x3e9124: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x3E9128u;
        goto label_3e9128;
    }
    ctx->pc = 0x3E9120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E9124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9120u;
            // 0x3e9124: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E9128u;
label_3e9128:
    // 0x3e9128: 0x0  nop
    ctx->pc = 0x3e9128u;
    // NOP
label_3e912c:
    // 0x3e912c: 0x0  nop
    ctx->pc = 0x3e912cu;
    // NOP
}
