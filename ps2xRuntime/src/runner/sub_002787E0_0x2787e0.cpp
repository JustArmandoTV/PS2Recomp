#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002787E0
// Address: 0x2787e0 - 0x2793d0
void sub_002787E0_0x2787e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002787E0_0x2787e0");
#endif

    switch (ctx->pc) {
        case 0x2787e0u: goto label_2787e0;
        case 0x2787e4u: goto label_2787e4;
        case 0x2787e8u: goto label_2787e8;
        case 0x2787ecu: goto label_2787ec;
        case 0x2787f0u: goto label_2787f0;
        case 0x2787f4u: goto label_2787f4;
        case 0x2787f8u: goto label_2787f8;
        case 0x2787fcu: goto label_2787fc;
        case 0x278800u: goto label_278800;
        case 0x278804u: goto label_278804;
        case 0x278808u: goto label_278808;
        case 0x27880cu: goto label_27880c;
        case 0x278810u: goto label_278810;
        case 0x278814u: goto label_278814;
        case 0x278818u: goto label_278818;
        case 0x27881cu: goto label_27881c;
        case 0x278820u: goto label_278820;
        case 0x278824u: goto label_278824;
        case 0x278828u: goto label_278828;
        case 0x27882cu: goto label_27882c;
        case 0x278830u: goto label_278830;
        case 0x278834u: goto label_278834;
        case 0x278838u: goto label_278838;
        case 0x27883cu: goto label_27883c;
        case 0x278840u: goto label_278840;
        case 0x278844u: goto label_278844;
        case 0x278848u: goto label_278848;
        case 0x27884cu: goto label_27884c;
        case 0x278850u: goto label_278850;
        case 0x278854u: goto label_278854;
        case 0x278858u: goto label_278858;
        case 0x27885cu: goto label_27885c;
        case 0x278860u: goto label_278860;
        case 0x278864u: goto label_278864;
        case 0x278868u: goto label_278868;
        case 0x27886cu: goto label_27886c;
        case 0x278870u: goto label_278870;
        case 0x278874u: goto label_278874;
        case 0x278878u: goto label_278878;
        case 0x27887cu: goto label_27887c;
        case 0x278880u: goto label_278880;
        case 0x278884u: goto label_278884;
        case 0x278888u: goto label_278888;
        case 0x27888cu: goto label_27888c;
        case 0x278890u: goto label_278890;
        case 0x278894u: goto label_278894;
        case 0x278898u: goto label_278898;
        case 0x27889cu: goto label_27889c;
        case 0x2788a0u: goto label_2788a0;
        case 0x2788a4u: goto label_2788a4;
        case 0x2788a8u: goto label_2788a8;
        case 0x2788acu: goto label_2788ac;
        case 0x2788b0u: goto label_2788b0;
        case 0x2788b4u: goto label_2788b4;
        case 0x2788b8u: goto label_2788b8;
        case 0x2788bcu: goto label_2788bc;
        case 0x2788c0u: goto label_2788c0;
        case 0x2788c4u: goto label_2788c4;
        case 0x2788c8u: goto label_2788c8;
        case 0x2788ccu: goto label_2788cc;
        case 0x2788d0u: goto label_2788d0;
        case 0x2788d4u: goto label_2788d4;
        case 0x2788d8u: goto label_2788d8;
        case 0x2788dcu: goto label_2788dc;
        case 0x2788e0u: goto label_2788e0;
        case 0x2788e4u: goto label_2788e4;
        case 0x2788e8u: goto label_2788e8;
        case 0x2788ecu: goto label_2788ec;
        case 0x2788f0u: goto label_2788f0;
        case 0x2788f4u: goto label_2788f4;
        case 0x2788f8u: goto label_2788f8;
        case 0x2788fcu: goto label_2788fc;
        case 0x278900u: goto label_278900;
        case 0x278904u: goto label_278904;
        case 0x278908u: goto label_278908;
        case 0x27890cu: goto label_27890c;
        case 0x278910u: goto label_278910;
        case 0x278914u: goto label_278914;
        case 0x278918u: goto label_278918;
        case 0x27891cu: goto label_27891c;
        case 0x278920u: goto label_278920;
        case 0x278924u: goto label_278924;
        case 0x278928u: goto label_278928;
        case 0x27892cu: goto label_27892c;
        case 0x278930u: goto label_278930;
        case 0x278934u: goto label_278934;
        case 0x278938u: goto label_278938;
        case 0x27893cu: goto label_27893c;
        case 0x278940u: goto label_278940;
        case 0x278944u: goto label_278944;
        case 0x278948u: goto label_278948;
        case 0x27894cu: goto label_27894c;
        case 0x278950u: goto label_278950;
        case 0x278954u: goto label_278954;
        case 0x278958u: goto label_278958;
        case 0x27895cu: goto label_27895c;
        case 0x278960u: goto label_278960;
        case 0x278964u: goto label_278964;
        case 0x278968u: goto label_278968;
        case 0x27896cu: goto label_27896c;
        case 0x278970u: goto label_278970;
        case 0x278974u: goto label_278974;
        case 0x278978u: goto label_278978;
        case 0x27897cu: goto label_27897c;
        case 0x278980u: goto label_278980;
        case 0x278984u: goto label_278984;
        case 0x278988u: goto label_278988;
        case 0x27898cu: goto label_27898c;
        case 0x278990u: goto label_278990;
        case 0x278994u: goto label_278994;
        case 0x278998u: goto label_278998;
        case 0x27899cu: goto label_27899c;
        case 0x2789a0u: goto label_2789a0;
        case 0x2789a4u: goto label_2789a4;
        case 0x2789a8u: goto label_2789a8;
        case 0x2789acu: goto label_2789ac;
        case 0x2789b0u: goto label_2789b0;
        case 0x2789b4u: goto label_2789b4;
        case 0x2789b8u: goto label_2789b8;
        case 0x2789bcu: goto label_2789bc;
        case 0x2789c0u: goto label_2789c0;
        case 0x2789c4u: goto label_2789c4;
        case 0x2789c8u: goto label_2789c8;
        case 0x2789ccu: goto label_2789cc;
        case 0x2789d0u: goto label_2789d0;
        case 0x2789d4u: goto label_2789d4;
        case 0x2789d8u: goto label_2789d8;
        case 0x2789dcu: goto label_2789dc;
        case 0x2789e0u: goto label_2789e0;
        case 0x2789e4u: goto label_2789e4;
        case 0x2789e8u: goto label_2789e8;
        case 0x2789ecu: goto label_2789ec;
        case 0x2789f0u: goto label_2789f0;
        case 0x2789f4u: goto label_2789f4;
        case 0x2789f8u: goto label_2789f8;
        case 0x2789fcu: goto label_2789fc;
        case 0x278a00u: goto label_278a00;
        case 0x278a04u: goto label_278a04;
        case 0x278a08u: goto label_278a08;
        case 0x278a0cu: goto label_278a0c;
        case 0x278a10u: goto label_278a10;
        case 0x278a14u: goto label_278a14;
        case 0x278a18u: goto label_278a18;
        case 0x278a1cu: goto label_278a1c;
        case 0x278a20u: goto label_278a20;
        case 0x278a24u: goto label_278a24;
        case 0x278a28u: goto label_278a28;
        case 0x278a2cu: goto label_278a2c;
        case 0x278a30u: goto label_278a30;
        case 0x278a34u: goto label_278a34;
        case 0x278a38u: goto label_278a38;
        case 0x278a3cu: goto label_278a3c;
        case 0x278a40u: goto label_278a40;
        case 0x278a44u: goto label_278a44;
        case 0x278a48u: goto label_278a48;
        case 0x278a4cu: goto label_278a4c;
        case 0x278a50u: goto label_278a50;
        case 0x278a54u: goto label_278a54;
        case 0x278a58u: goto label_278a58;
        case 0x278a5cu: goto label_278a5c;
        case 0x278a60u: goto label_278a60;
        case 0x278a64u: goto label_278a64;
        case 0x278a68u: goto label_278a68;
        case 0x278a6cu: goto label_278a6c;
        case 0x278a70u: goto label_278a70;
        case 0x278a74u: goto label_278a74;
        case 0x278a78u: goto label_278a78;
        case 0x278a7cu: goto label_278a7c;
        case 0x278a80u: goto label_278a80;
        case 0x278a84u: goto label_278a84;
        case 0x278a88u: goto label_278a88;
        case 0x278a8cu: goto label_278a8c;
        case 0x278a90u: goto label_278a90;
        case 0x278a94u: goto label_278a94;
        case 0x278a98u: goto label_278a98;
        case 0x278a9cu: goto label_278a9c;
        case 0x278aa0u: goto label_278aa0;
        case 0x278aa4u: goto label_278aa4;
        case 0x278aa8u: goto label_278aa8;
        case 0x278aacu: goto label_278aac;
        case 0x278ab0u: goto label_278ab0;
        case 0x278ab4u: goto label_278ab4;
        case 0x278ab8u: goto label_278ab8;
        case 0x278abcu: goto label_278abc;
        case 0x278ac0u: goto label_278ac0;
        case 0x278ac4u: goto label_278ac4;
        case 0x278ac8u: goto label_278ac8;
        case 0x278accu: goto label_278acc;
        case 0x278ad0u: goto label_278ad0;
        case 0x278ad4u: goto label_278ad4;
        case 0x278ad8u: goto label_278ad8;
        case 0x278adcu: goto label_278adc;
        case 0x278ae0u: goto label_278ae0;
        case 0x278ae4u: goto label_278ae4;
        case 0x278ae8u: goto label_278ae8;
        case 0x278aecu: goto label_278aec;
        case 0x278af0u: goto label_278af0;
        case 0x278af4u: goto label_278af4;
        case 0x278af8u: goto label_278af8;
        case 0x278afcu: goto label_278afc;
        case 0x278b00u: goto label_278b00;
        case 0x278b04u: goto label_278b04;
        case 0x278b08u: goto label_278b08;
        case 0x278b0cu: goto label_278b0c;
        case 0x278b10u: goto label_278b10;
        case 0x278b14u: goto label_278b14;
        case 0x278b18u: goto label_278b18;
        case 0x278b1cu: goto label_278b1c;
        case 0x278b20u: goto label_278b20;
        case 0x278b24u: goto label_278b24;
        case 0x278b28u: goto label_278b28;
        case 0x278b2cu: goto label_278b2c;
        case 0x278b30u: goto label_278b30;
        case 0x278b34u: goto label_278b34;
        case 0x278b38u: goto label_278b38;
        case 0x278b3cu: goto label_278b3c;
        case 0x278b40u: goto label_278b40;
        case 0x278b44u: goto label_278b44;
        case 0x278b48u: goto label_278b48;
        case 0x278b4cu: goto label_278b4c;
        case 0x278b50u: goto label_278b50;
        case 0x278b54u: goto label_278b54;
        case 0x278b58u: goto label_278b58;
        case 0x278b5cu: goto label_278b5c;
        case 0x278b60u: goto label_278b60;
        case 0x278b64u: goto label_278b64;
        case 0x278b68u: goto label_278b68;
        case 0x278b6cu: goto label_278b6c;
        case 0x278b70u: goto label_278b70;
        case 0x278b74u: goto label_278b74;
        case 0x278b78u: goto label_278b78;
        case 0x278b7cu: goto label_278b7c;
        case 0x278b80u: goto label_278b80;
        case 0x278b84u: goto label_278b84;
        case 0x278b88u: goto label_278b88;
        case 0x278b8cu: goto label_278b8c;
        case 0x278b90u: goto label_278b90;
        case 0x278b94u: goto label_278b94;
        case 0x278b98u: goto label_278b98;
        case 0x278b9cu: goto label_278b9c;
        case 0x278ba0u: goto label_278ba0;
        case 0x278ba4u: goto label_278ba4;
        case 0x278ba8u: goto label_278ba8;
        case 0x278bacu: goto label_278bac;
        case 0x278bb0u: goto label_278bb0;
        case 0x278bb4u: goto label_278bb4;
        case 0x278bb8u: goto label_278bb8;
        case 0x278bbcu: goto label_278bbc;
        case 0x278bc0u: goto label_278bc0;
        case 0x278bc4u: goto label_278bc4;
        case 0x278bc8u: goto label_278bc8;
        case 0x278bccu: goto label_278bcc;
        case 0x278bd0u: goto label_278bd0;
        case 0x278bd4u: goto label_278bd4;
        case 0x278bd8u: goto label_278bd8;
        case 0x278bdcu: goto label_278bdc;
        case 0x278be0u: goto label_278be0;
        case 0x278be4u: goto label_278be4;
        case 0x278be8u: goto label_278be8;
        case 0x278becu: goto label_278bec;
        case 0x278bf0u: goto label_278bf0;
        case 0x278bf4u: goto label_278bf4;
        case 0x278bf8u: goto label_278bf8;
        case 0x278bfcu: goto label_278bfc;
        case 0x278c00u: goto label_278c00;
        case 0x278c04u: goto label_278c04;
        case 0x278c08u: goto label_278c08;
        case 0x278c0cu: goto label_278c0c;
        case 0x278c10u: goto label_278c10;
        case 0x278c14u: goto label_278c14;
        case 0x278c18u: goto label_278c18;
        case 0x278c1cu: goto label_278c1c;
        case 0x278c20u: goto label_278c20;
        case 0x278c24u: goto label_278c24;
        case 0x278c28u: goto label_278c28;
        case 0x278c2cu: goto label_278c2c;
        case 0x278c30u: goto label_278c30;
        case 0x278c34u: goto label_278c34;
        case 0x278c38u: goto label_278c38;
        case 0x278c3cu: goto label_278c3c;
        case 0x278c40u: goto label_278c40;
        case 0x278c44u: goto label_278c44;
        case 0x278c48u: goto label_278c48;
        case 0x278c4cu: goto label_278c4c;
        case 0x278c50u: goto label_278c50;
        case 0x278c54u: goto label_278c54;
        case 0x278c58u: goto label_278c58;
        case 0x278c5cu: goto label_278c5c;
        case 0x278c60u: goto label_278c60;
        case 0x278c64u: goto label_278c64;
        case 0x278c68u: goto label_278c68;
        case 0x278c6cu: goto label_278c6c;
        case 0x278c70u: goto label_278c70;
        case 0x278c74u: goto label_278c74;
        case 0x278c78u: goto label_278c78;
        case 0x278c7cu: goto label_278c7c;
        case 0x278c80u: goto label_278c80;
        case 0x278c84u: goto label_278c84;
        case 0x278c88u: goto label_278c88;
        case 0x278c8cu: goto label_278c8c;
        case 0x278c90u: goto label_278c90;
        case 0x278c94u: goto label_278c94;
        case 0x278c98u: goto label_278c98;
        case 0x278c9cu: goto label_278c9c;
        case 0x278ca0u: goto label_278ca0;
        case 0x278ca4u: goto label_278ca4;
        case 0x278ca8u: goto label_278ca8;
        case 0x278cacu: goto label_278cac;
        case 0x278cb0u: goto label_278cb0;
        case 0x278cb4u: goto label_278cb4;
        case 0x278cb8u: goto label_278cb8;
        case 0x278cbcu: goto label_278cbc;
        case 0x278cc0u: goto label_278cc0;
        case 0x278cc4u: goto label_278cc4;
        case 0x278cc8u: goto label_278cc8;
        case 0x278cccu: goto label_278ccc;
        case 0x278cd0u: goto label_278cd0;
        case 0x278cd4u: goto label_278cd4;
        case 0x278cd8u: goto label_278cd8;
        case 0x278cdcu: goto label_278cdc;
        case 0x278ce0u: goto label_278ce0;
        case 0x278ce4u: goto label_278ce4;
        case 0x278ce8u: goto label_278ce8;
        case 0x278cecu: goto label_278cec;
        case 0x278cf0u: goto label_278cf0;
        case 0x278cf4u: goto label_278cf4;
        case 0x278cf8u: goto label_278cf8;
        case 0x278cfcu: goto label_278cfc;
        case 0x278d00u: goto label_278d00;
        case 0x278d04u: goto label_278d04;
        case 0x278d08u: goto label_278d08;
        case 0x278d0cu: goto label_278d0c;
        case 0x278d10u: goto label_278d10;
        case 0x278d14u: goto label_278d14;
        case 0x278d18u: goto label_278d18;
        case 0x278d1cu: goto label_278d1c;
        case 0x278d20u: goto label_278d20;
        case 0x278d24u: goto label_278d24;
        case 0x278d28u: goto label_278d28;
        case 0x278d2cu: goto label_278d2c;
        case 0x278d30u: goto label_278d30;
        case 0x278d34u: goto label_278d34;
        case 0x278d38u: goto label_278d38;
        case 0x278d3cu: goto label_278d3c;
        case 0x278d40u: goto label_278d40;
        case 0x278d44u: goto label_278d44;
        case 0x278d48u: goto label_278d48;
        case 0x278d4cu: goto label_278d4c;
        case 0x278d50u: goto label_278d50;
        case 0x278d54u: goto label_278d54;
        case 0x278d58u: goto label_278d58;
        case 0x278d5cu: goto label_278d5c;
        case 0x278d60u: goto label_278d60;
        case 0x278d64u: goto label_278d64;
        case 0x278d68u: goto label_278d68;
        case 0x278d6cu: goto label_278d6c;
        case 0x278d70u: goto label_278d70;
        case 0x278d74u: goto label_278d74;
        case 0x278d78u: goto label_278d78;
        case 0x278d7cu: goto label_278d7c;
        case 0x278d80u: goto label_278d80;
        case 0x278d84u: goto label_278d84;
        case 0x278d88u: goto label_278d88;
        case 0x278d8cu: goto label_278d8c;
        case 0x278d90u: goto label_278d90;
        case 0x278d94u: goto label_278d94;
        case 0x278d98u: goto label_278d98;
        case 0x278d9cu: goto label_278d9c;
        case 0x278da0u: goto label_278da0;
        case 0x278da4u: goto label_278da4;
        case 0x278da8u: goto label_278da8;
        case 0x278dacu: goto label_278dac;
        case 0x278db0u: goto label_278db0;
        case 0x278db4u: goto label_278db4;
        case 0x278db8u: goto label_278db8;
        case 0x278dbcu: goto label_278dbc;
        case 0x278dc0u: goto label_278dc0;
        case 0x278dc4u: goto label_278dc4;
        case 0x278dc8u: goto label_278dc8;
        case 0x278dccu: goto label_278dcc;
        case 0x278dd0u: goto label_278dd0;
        case 0x278dd4u: goto label_278dd4;
        case 0x278dd8u: goto label_278dd8;
        case 0x278ddcu: goto label_278ddc;
        case 0x278de0u: goto label_278de0;
        case 0x278de4u: goto label_278de4;
        case 0x278de8u: goto label_278de8;
        case 0x278decu: goto label_278dec;
        case 0x278df0u: goto label_278df0;
        case 0x278df4u: goto label_278df4;
        case 0x278df8u: goto label_278df8;
        case 0x278dfcu: goto label_278dfc;
        case 0x278e00u: goto label_278e00;
        case 0x278e04u: goto label_278e04;
        case 0x278e08u: goto label_278e08;
        case 0x278e0cu: goto label_278e0c;
        case 0x278e10u: goto label_278e10;
        case 0x278e14u: goto label_278e14;
        case 0x278e18u: goto label_278e18;
        case 0x278e1cu: goto label_278e1c;
        case 0x278e20u: goto label_278e20;
        case 0x278e24u: goto label_278e24;
        case 0x278e28u: goto label_278e28;
        case 0x278e2cu: goto label_278e2c;
        case 0x278e30u: goto label_278e30;
        case 0x278e34u: goto label_278e34;
        case 0x278e38u: goto label_278e38;
        case 0x278e3cu: goto label_278e3c;
        case 0x278e40u: goto label_278e40;
        case 0x278e44u: goto label_278e44;
        case 0x278e48u: goto label_278e48;
        case 0x278e4cu: goto label_278e4c;
        case 0x278e50u: goto label_278e50;
        case 0x278e54u: goto label_278e54;
        case 0x278e58u: goto label_278e58;
        case 0x278e5cu: goto label_278e5c;
        case 0x278e60u: goto label_278e60;
        case 0x278e64u: goto label_278e64;
        case 0x278e68u: goto label_278e68;
        case 0x278e6cu: goto label_278e6c;
        case 0x278e70u: goto label_278e70;
        case 0x278e74u: goto label_278e74;
        case 0x278e78u: goto label_278e78;
        case 0x278e7cu: goto label_278e7c;
        case 0x278e80u: goto label_278e80;
        case 0x278e84u: goto label_278e84;
        case 0x278e88u: goto label_278e88;
        case 0x278e8cu: goto label_278e8c;
        case 0x278e90u: goto label_278e90;
        case 0x278e94u: goto label_278e94;
        case 0x278e98u: goto label_278e98;
        case 0x278e9cu: goto label_278e9c;
        case 0x278ea0u: goto label_278ea0;
        case 0x278ea4u: goto label_278ea4;
        case 0x278ea8u: goto label_278ea8;
        case 0x278eacu: goto label_278eac;
        case 0x278eb0u: goto label_278eb0;
        case 0x278eb4u: goto label_278eb4;
        case 0x278eb8u: goto label_278eb8;
        case 0x278ebcu: goto label_278ebc;
        case 0x278ec0u: goto label_278ec0;
        case 0x278ec4u: goto label_278ec4;
        case 0x278ec8u: goto label_278ec8;
        case 0x278eccu: goto label_278ecc;
        case 0x278ed0u: goto label_278ed0;
        case 0x278ed4u: goto label_278ed4;
        case 0x278ed8u: goto label_278ed8;
        case 0x278edcu: goto label_278edc;
        case 0x278ee0u: goto label_278ee0;
        case 0x278ee4u: goto label_278ee4;
        case 0x278ee8u: goto label_278ee8;
        case 0x278eecu: goto label_278eec;
        case 0x278ef0u: goto label_278ef0;
        case 0x278ef4u: goto label_278ef4;
        case 0x278ef8u: goto label_278ef8;
        case 0x278efcu: goto label_278efc;
        case 0x278f00u: goto label_278f00;
        case 0x278f04u: goto label_278f04;
        case 0x278f08u: goto label_278f08;
        case 0x278f0cu: goto label_278f0c;
        case 0x278f10u: goto label_278f10;
        case 0x278f14u: goto label_278f14;
        case 0x278f18u: goto label_278f18;
        case 0x278f1cu: goto label_278f1c;
        case 0x278f20u: goto label_278f20;
        case 0x278f24u: goto label_278f24;
        case 0x278f28u: goto label_278f28;
        case 0x278f2cu: goto label_278f2c;
        case 0x278f30u: goto label_278f30;
        case 0x278f34u: goto label_278f34;
        case 0x278f38u: goto label_278f38;
        case 0x278f3cu: goto label_278f3c;
        case 0x278f40u: goto label_278f40;
        case 0x278f44u: goto label_278f44;
        case 0x278f48u: goto label_278f48;
        case 0x278f4cu: goto label_278f4c;
        case 0x278f50u: goto label_278f50;
        case 0x278f54u: goto label_278f54;
        case 0x278f58u: goto label_278f58;
        case 0x278f5cu: goto label_278f5c;
        case 0x278f60u: goto label_278f60;
        case 0x278f64u: goto label_278f64;
        case 0x278f68u: goto label_278f68;
        case 0x278f6cu: goto label_278f6c;
        case 0x278f70u: goto label_278f70;
        case 0x278f74u: goto label_278f74;
        case 0x278f78u: goto label_278f78;
        case 0x278f7cu: goto label_278f7c;
        case 0x278f80u: goto label_278f80;
        case 0x278f84u: goto label_278f84;
        case 0x278f88u: goto label_278f88;
        case 0x278f8cu: goto label_278f8c;
        case 0x278f90u: goto label_278f90;
        case 0x278f94u: goto label_278f94;
        case 0x278f98u: goto label_278f98;
        case 0x278f9cu: goto label_278f9c;
        case 0x278fa0u: goto label_278fa0;
        case 0x278fa4u: goto label_278fa4;
        case 0x278fa8u: goto label_278fa8;
        case 0x278facu: goto label_278fac;
        case 0x278fb0u: goto label_278fb0;
        case 0x278fb4u: goto label_278fb4;
        case 0x278fb8u: goto label_278fb8;
        case 0x278fbcu: goto label_278fbc;
        case 0x278fc0u: goto label_278fc0;
        case 0x278fc4u: goto label_278fc4;
        case 0x278fc8u: goto label_278fc8;
        case 0x278fccu: goto label_278fcc;
        case 0x278fd0u: goto label_278fd0;
        case 0x278fd4u: goto label_278fd4;
        case 0x278fd8u: goto label_278fd8;
        case 0x278fdcu: goto label_278fdc;
        case 0x278fe0u: goto label_278fe0;
        case 0x278fe4u: goto label_278fe4;
        case 0x278fe8u: goto label_278fe8;
        case 0x278fecu: goto label_278fec;
        case 0x278ff0u: goto label_278ff0;
        case 0x278ff4u: goto label_278ff4;
        case 0x278ff8u: goto label_278ff8;
        case 0x278ffcu: goto label_278ffc;
        case 0x279000u: goto label_279000;
        case 0x279004u: goto label_279004;
        case 0x279008u: goto label_279008;
        case 0x27900cu: goto label_27900c;
        case 0x279010u: goto label_279010;
        case 0x279014u: goto label_279014;
        case 0x279018u: goto label_279018;
        case 0x27901cu: goto label_27901c;
        case 0x279020u: goto label_279020;
        case 0x279024u: goto label_279024;
        case 0x279028u: goto label_279028;
        case 0x27902cu: goto label_27902c;
        case 0x279030u: goto label_279030;
        case 0x279034u: goto label_279034;
        case 0x279038u: goto label_279038;
        case 0x27903cu: goto label_27903c;
        case 0x279040u: goto label_279040;
        case 0x279044u: goto label_279044;
        case 0x279048u: goto label_279048;
        case 0x27904cu: goto label_27904c;
        case 0x279050u: goto label_279050;
        case 0x279054u: goto label_279054;
        case 0x279058u: goto label_279058;
        case 0x27905cu: goto label_27905c;
        case 0x279060u: goto label_279060;
        case 0x279064u: goto label_279064;
        case 0x279068u: goto label_279068;
        case 0x27906cu: goto label_27906c;
        case 0x279070u: goto label_279070;
        case 0x279074u: goto label_279074;
        case 0x279078u: goto label_279078;
        case 0x27907cu: goto label_27907c;
        case 0x279080u: goto label_279080;
        case 0x279084u: goto label_279084;
        case 0x279088u: goto label_279088;
        case 0x27908cu: goto label_27908c;
        case 0x279090u: goto label_279090;
        case 0x279094u: goto label_279094;
        case 0x279098u: goto label_279098;
        case 0x27909cu: goto label_27909c;
        case 0x2790a0u: goto label_2790a0;
        case 0x2790a4u: goto label_2790a4;
        case 0x2790a8u: goto label_2790a8;
        case 0x2790acu: goto label_2790ac;
        case 0x2790b0u: goto label_2790b0;
        case 0x2790b4u: goto label_2790b4;
        case 0x2790b8u: goto label_2790b8;
        case 0x2790bcu: goto label_2790bc;
        case 0x2790c0u: goto label_2790c0;
        case 0x2790c4u: goto label_2790c4;
        case 0x2790c8u: goto label_2790c8;
        case 0x2790ccu: goto label_2790cc;
        case 0x2790d0u: goto label_2790d0;
        case 0x2790d4u: goto label_2790d4;
        case 0x2790d8u: goto label_2790d8;
        case 0x2790dcu: goto label_2790dc;
        case 0x2790e0u: goto label_2790e0;
        case 0x2790e4u: goto label_2790e4;
        case 0x2790e8u: goto label_2790e8;
        case 0x2790ecu: goto label_2790ec;
        case 0x2790f0u: goto label_2790f0;
        case 0x2790f4u: goto label_2790f4;
        case 0x2790f8u: goto label_2790f8;
        case 0x2790fcu: goto label_2790fc;
        case 0x279100u: goto label_279100;
        case 0x279104u: goto label_279104;
        case 0x279108u: goto label_279108;
        case 0x27910cu: goto label_27910c;
        case 0x279110u: goto label_279110;
        case 0x279114u: goto label_279114;
        case 0x279118u: goto label_279118;
        case 0x27911cu: goto label_27911c;
        case 0x279120u: goto label_279120;
        case 0x279124u: goto label_279124;
        case 0x279128u: goto label_279128;
        case 0x27912cu: goto label_27912c;
        case 0x279130u: goto label_279130;
        case 0x279134u: goto label_279134;
        case 0x279138u: goto label_279138;
        case 0x27913cu: goto label_27913c;
        case 0x279140u: goto label_279140;
        case 0x279144u: goto label_279144;
        case 0x279148u: goto label_279148;
        case 0x27914cu: goto label_27914c;
        case 0x279150u: goto label_279150;
        case 0x279154u: goto label_279154;
        case 0x279158u: goto label_279158;
        case 0x27915cu: goto label_27915c;
        case 0x279160u: goto label_279160;
        case 0x279164u: goto label_279164;
        case 0x279168u: goto label_279168;
        case 0x27916cu: goto label_27916c;
        case 0x279170u: goto label_279170;
        case 0x279174u: goto label_279174;
        case 0x279178u: goto label_279178;
        case 0x27917cu: goto label_27917c;
        case 0x279180u: goto label_279180;
        case 0x279184u: goto label_279184;
        case 0x279188u: goto label_279188;
        case 0x27918cu: goto label_27918c;
        case 0x279190u: goto label_279190;
        case 0x279194u: goto label_279194;
        case 0x279198u: goto label_279198;
        case 0x27919cu: goto label_27919c;
        case 0x2791a0u: goto label_2791a0;
        case 0x2791a4u: goto label_2791a4;
        case 0x2791a8u: goto label_2791a8;
        case 0x2791acu: goto label_2791ac;
        case 0x2791b0u: goto label_2791b0;
        case 0x2791b4u: goto label_2791b4;
        case 0x2791b8u: goto label_2791b8;
        case 0x2791bcu: goto label_2791bc;
        case 0x2791c0u: goto label_2791c0;
        case 0x2791c4u: goto label_2791c4;
        case 0x2791c8u: goto label_2791c8;
        case 0x2791ccu: goto label_2791cc;
        case 0x2791d0u: goto label_2791d0;
        case 0x2791d4u: goto label_2791d4;
        case 0x2791d8u: goto label_2791d8;
        case 0x2791dcu: goto label_2791dc;
        case 0x2791e0u: goto label_2791e0;
        case 0x2791e4u: goto label_2791e4;
        case 0x2791e8u: goto label_2791e8;
        case 0x2791ecu: goto label_2791ec;
        case 0x2791f0u: goto label_2791f0;
        case 0x2791f4u: goto label_2791f4;
        case 0x2791f8u: goto label_2791f8;
        case 0x2791fcu: goto label_2791fc;
        case 0x279200u: goto label_279200;
        case 0x279204u: goto label_279204;
        case 0x279208u: goto label_279208;
        case 0x27920cu: goto label_27920c;
        case 0x279210u: goto label_279210;
        case 0x279214u: goto label_279214;
        case 0x279218u: goto label_279218;
        case 0x27921cu: goto label_27921c;
        case 0x279220u: goto label_279220;
        case 0x279224u: goto label_279224;
        case 0x279228u: goto label_279228;
        case 0x27922cu: goto label_27922c;
        case 0x279230u: goto label_279230;
        case 0x279234u: goto label_279234;
        case 0x279238u: goto label_279238;
        case 0x27923cu: goto label_27923c;
        case 0x279240u: goto label_279240;
        case 0x279244u: goto label_279244;
        case 0x279248u: goto label_279248;
        case 0x27924cu: goto label_27924c;
        case 0x279250u: goto label_279250;
        case 0x279254u: goto label_279254;
        case 0x279258u: goto label_279258;
        case 0x27925cu: goto label_27925c;
        case 0x279260u: goto label_279260;
        case 0x279264u: goto label_279264;
        case 0x279268u: goto label_279268;
        case 0x27926cu: goto label_27926c;
        case 0x279270u: goto label_279270;
        case 0x279274u: goto label_279274;
        case 0x279278u: goto label_279278;
        case 0x27927cu: goto label_27927c;
        case 0x279280u: goto label_279280;
        case 0x279284u: goto label_279284;
        case 0x279288u: goto label_279288;
        case 0x27928cu: goto label_27928c;
        case 0x279290u: goto label_279290;
        case 0x279294u: goto label_279294;
        case 0x279298u: goto label_279298;
        case 0x27929cu: goto label_27929c;
        case 0x2792a0u: goto label_2792a0;
        case 0x2792a4u: goto label_2792a4;
        case 0x2792a8u: goto label_2792a8;
        case 0x2792acu: goto label_2792ac;
        case 0x2792b0u: goto label_2792b0;
        case 0x2792b4u: goto label_2792b4;
        case 0x2792b8u: goto label_2792b8;
        case 0x2792bcu: goto label_2792bc;
        case 0x2792c0u: goto label_2792c0;
        case 0x2792c4u: goto label_2792c4;
        case 0x2792c8u: goto label_2792c8;
        case 0x2792ccu: goto label_2792cc;
        case 0x2792d0u: goto label_2792d0;
        case 0x2792d4u: goto label_2792d4;
        case 0x2792d8u: goto label_2792d8;
        case 0x2792dcu: goto label_2792dc;
        case 0x2792e0u: goto label_2792e0;
        case 0x2792e4u: goto label_2792e4;
        case 0x2792e8u: goto label_2792e8;
        case 0x2792ecu: goto label_2792ec;
        case 0x2792f0u: goto label_2792f0;
        case 0x2792f4u: goto label_2792f4;
        case 0x2792f8u: goto label_2792f8;
        case 0x2792fcu: goto label_2792fc;
        case 0x279300u: goto label_279300;
        case 0x279304u: goto label_279304;
        case 0x279308u: goto label_279308;
        case 0x27930cu: goto label_27930c;
        case 0x279310u: goto label_279310;
        case 0x279314u: goto label_279314;
        case 0x279318u: goto label_279318;
        case 0x27931cu: goto label_27931c;
        case 0x279320u: goto label_279320;
        case 0x279324u: goto label_279324;
        case 0x279328u: goto label_279328;
        case 0x27932cu: goto label_27932c;
        case 0x279330u: goto label_279330;
        case 0x279334u: goto label_279334;
        case 0x279338u: goto label_279338;
        case 0x27933cu: goto label_27933c;
        case 0x279340u: goto label_279340;
        case 0x279344u: goto label_279344;
        case 0x279348u: goto label_279348;
        case 0x27934cu: goto label_27934c;
        case 0x279350u: goto label_279350;
        case 0x279354u: goto label_279354;
        case 0x279358u: goto label_279358;
        case 0x27935cu: goto label_27935c;
        case 0x279360u: goto label_279360;
        case 0x279364u: goto label_279364;
        case 0x279368u: goto label_279368;
        case 0x27936cu: goto label_27936c;
        case 0x279370u: goto label_279370;
        case 0x279374u: goto label_279374;
        case 0x279378u: goto label_279378;
        case 0x27937cu: goto label_27937c;
        case 0x279380u: goto label_279380;
        case 0x279384u: goto label_279384;
        case 0x279388u: goto label_279388;
        case 0x27938cu: goto label_27938c;
        case 0x279390u: goto label_279390;
        case 0x279394u: goto label_279394;
        case 0x279398u: goto label_279398;
        case 0x27939cu: goto label_27939c;
        case 0x2793a0u: goto label_2793a0;
        case 0x2793a4u: goto label_2793a4;
        case 0x2793a8u: goto label_2793a8;
        case 0x2793acu: goto label_2793ac;
        case 0x2793b0u: goto label_2793b0;
        case 0x2793b4u: goto label_2793b4;
        case 0x2793b8u: goto label_2793b8;
        case 0x2793bcu: goto label_2793bc;
        case 0x2793c0u: goto label_2793c0;
        case 0x2793c4u: goto label_2793c4;
        case 0x2793c8u: goto label_2793c8;
        case 0x2793ccu: goto label_2793cc;
        default: break;
    }

    ctx->pc = 0x2787e0u;

label_2787e0:
    // 0x2787e0: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x2787e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
label_2787e4:
    // 0x2787e4: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2787e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2787e8:
    // 0x2787e8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2787e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2787ec:
    // 0x2787ec: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2787ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2787f0:
    // 0x2787f0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2787f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2787f4:
    // 0x2787f4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2787f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2787f8:
    // 0x2787f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2787f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2787fc:
    // 0x2787fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2787fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_278800:
    // 0x278800: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x278800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_278804:
    // 0x278804: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x278804u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_278808:
    // 0x278808: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x278808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27880c:
    // 0x27880c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27880cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_278810:
    // 0x278810: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x278810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_278814:
    // 0x278814: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x278814u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_278818:
    // 0x278818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x278818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27881c:
    // 0x27881c: 0x8023e9e0  lb          $v1, -0x1620($at)
    ctx->pc = 0x27881cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961632)));
label_278820:
    // 0x278820: 0x146002d7  bnez        $v1, . + 4 + (0x2D7 << 2)
label_278824:
    if (ctx->pc == 0x278824u) {
        ctx->pc = 0x278824u;
            // 0x278824: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x278828u;
        goto label_278828;
    }
    ctx->pc = 0x278820u;
    {
        const bool branch_taken_0x278820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x278824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278820u;
            // 0x278824: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278820) {
            ctx->pc = 0x279380u;
            goto label_279380;
        }
    }
    ctx->pc = 0x278828u;
label_278828:
    // 0x278828: 0xc086406  jal         func_219018
label_27882c:
    if (ctx->pc == 0x27882Cu) {
        ctx->pc = 0x27882Cu;
            // 0x27882c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x278830u;
        goto label_278830;
    }
    ctx->pc = 0x278828u;
    SET_GPR_U32(ctx, 31, 0x278830u);
    ctx->pc = 0x27882Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278828u;
            // 0x27882c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x219018u;
    if (runtime->hasFunction(0x219018u)) {
        auto targetFn = runtime->lookupFunction(0x219018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278830u; }
        if (ctx->pc != 0x278830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00219018_0x219018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278830u; }
        if (ctx->pc != 0x278830u) { return; }
    }
    ctx->pc = 0x278830u;
label_278830:
    // 0x278830: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x278830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_278834:
    // 0x278834: 0xa022e9e0  sb          $v0, -0x1620($at)
    ctx->pc = 0x278834u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294961632), (uint8_t)GPR_U32(ctx, 2));
label_278838:
    // 0x278838: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x278838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27883c:
    // 0x27883c: 0x8023e9e0  lb          $v1, -0x1620($at)
    ctx->pc = 0x27883cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961632)));
label_278840:
    // 0x278840: 0x146002cf  bnez        $v1, . + 4 + (0x2CF << 2)
label_278844:
    if (ctx->pc == 0x278844u) {
        ctx->pc = 0x278848u;
        goto label_278848;
    }
    ctx->pc = 0x278840u;
    {
        const bool branch_taken_0x278840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x278840) {
            ctx->pc = 0x279380u;
            goto label_279380;
        }
    }
    ctx->pc = 0x278848u;
label_278848:
    // 0x278848: 0x100002d3  b           . + 4 + (0x2D3 << 2)
label_27884c:
    if (ctx->pc == 0x27884Cu) {
        ctx->pc = 0x278850u;
        goto label_278850;
    }
    ctx->pc = 0x278848u;
    {
        const bool branch_taken_0x278848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278848) {
            ctx->pc = 0x279398u;
            goto label_279398;
        }
    }
    ctx->pc = 0x278850u;
label_278850:
    // 0x278850: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x278850u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_278854:
    // 0x278854: 0x2c81006c  sltiu       $at, $a0, 0x6C
    ctx->pc = 0x278854u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)108) ? 1 : 0);
label_278858:
    // 0x278858: 0x102002ab  beqz        $at, . + 4 + (0x2AB << 2)
label_27885c:
    if (ctx->pc == 0x27885Cu) {
        ctx->pc = 0x27885Cu;
            // 0x27885c: 0x3c030064  lui         $v1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
        ctx->pc = 0x278860u;
        goto label_278860;
    }
    ctx->pc = 0x278858u;
    {
        const bool branch_taken_0x278858 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27885Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278858u;
            // 0x27885c: 0x3c030064  lui         $v1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278858) {
            ctx->pc = 0x279308u;
            goto label_279308;
        }
    }
    ctx->pc = 0x278860u;
label_278860:
    // 0x278860: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x278860u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_278864:
    // 0x278864: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x278864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
label_278868:
    // 0x278868: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x278868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_27886c:
    // 0x27886c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x27886cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_278870:
    // 0x278870: 0x600008  jr          $v1
label_278874:
    if (ctx->pc == 0x278874u) {
        ctx->pc = 0x278878u;
        goto label_278878;
    }
    ctx->pc = 0x278870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x278878u: goto label_278878;
            case 0x2788A8u: goto label_2788a8;
            case 0x2788E0u: goto label_2788e0;
            case 0x278910u: goto label_278910;
            case 0x278948u: goto label_278948;
            case 0x278978u: goto label_278978;
            case 0x2789B0u: goto label_2789b0;
            case 0x2789F8u: goto label_2789f8;
            case 0x278A48u: goto label_278a48;
            case 0x278A98u: goto label_278a98;
            case 0x278B40u: goto label_278b40;
            case 0x278BA8u: goto label_278ba8;
            case 0x278BF0u: goto label_278bf0;
            case 0x278C78u: goto label_278c78;
            case 0x278CA8u: goto label_278ca8;
            case 0x278D08u: goto label_278d08;
            case 0x278D18u: goto label_278d18;
            case 0x278D38u: goto label_278d38;
            case 0x278D60u: goto label_278d60;
            case 0x278D88u: goto label_278d88;
            case 0x278D90u: goto label_278d90;
            case 0x278EA0u: goto label_278ea0;
            case 0x278F58u: goto label_278f58;
            case 0x279020u: goto label_279020;
            case 0x2790F8u: goto label_2790f8;
            case 0x279100u: goto label_279100;
            case 0x279118u: goto label_279118;
            case 0x279138u: goto label_279138;
            case 0x279168u: goto label_279168;
            case 0x2791D0u: goto label_2791d0;
            case 0x2792A0u: goto label_2792a0;
            case 0x2792C8u: goto label_2792c8;
            case 0x279308u: goto label_279308;
            case 0x279378u: goto label_279378;
            default: break;
        }
        return;
    }
    ctx->pc = 0x278878u;
label_278878:
    // 0x278878: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x278878u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_27887c:
    // 0x27887c: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x27887cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_278880:
    // 0x278880: 0x8e680014  lw          $t0, 0x14($s3)
    ctx->pc = 0x278880u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_278884:
    // 0x278884: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x278884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_278888:
    // 0x278888: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x278888u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_27888c:
    // 0x27888c: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x27888cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_278890:
    // 0x278890: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x278890u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_278894:
    // 0x278894: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x278894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_278898:
    // 0x278898: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x278898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_27889c:
    // 0x27889c: 0x10000090  b           . + 4 + (0x90 << 2)
label_2788a0:
    if (ctx->pc == 0x2788A0u) {
        ctx->pc = 0x2788A0u;
            // 0x2788a0: 0xe63021  addu        $a2, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->pc = 0x2788A4u;
        goto label_2788a4;
    }
    ctx->pc = 0x27889Cu;
    {
        const bool branch_taken_0x27889c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2788A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27889Cu;
            // 0x2788a0: 0xe63021  addu        $a2, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27889c) {
            ctx->pc = 0x278AE0u;
            goto label_278ae0;
        }
    }
    ctx->pc = 0x2788A4u;
label_2788a4:
    // 0x2788a4: 0x0  nop
    ctx->pc = 0x2788a4u;
    // NOP
label_2788a8:
    // 0x2788a8: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x2788a8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2788ac:
    // 0x2788ac: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x2788acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2788b0:
    // 0x2788b0: 0x8e680014  lw          $t0, 0x14($s3)
    ctx->pc = 0x2788b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2788b4:
    // 0x2788b4: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x2788b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2788b8:
    // 0x2788b8: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x2788b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2788bc:
    // 0x2788bc: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x2788bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_2788c0:
    // 0x2788c0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2788c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2788c4:
    // 0x2788c4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2788c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2788c8:
    // 0x2788c8: 0x2484ff01  addiu       $a0, $a0, -0xFF
    ctx->pc = 0x2788c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967041));
label_2788cc:
    // 0x2788cc: 0x2463ff01  addiu       $v1, $v1, -0xFF
    ctx->pc = 0x2788ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967041));
label_2788d0:
    // 0x2788d0: 0x1052823  subu        $a1, $t0, $a1
    ctx->pc = 0x2788d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_2788d4:
    // 0x2788d4: 0x10000082  b           . + 4 + (0x82 << 2)
label_2788d8:
    if (ctx->pc == 0x2788D8u) {
        ctx->pc = 0x2788D8u;
            // 0x2788d8: 0xe63023  subu        $a2, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->pc = 0x2788DCu;
        goto label_2788dc;
    }
    ctx->pc = 0x2788D4u;
    {
        const bool branch_taken_0x2788d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2788D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2788D4u;
            // 0x2788d8: 0xe63023  subu        $a2, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2788d4) {
            ctx->pc = 0x278AE0u;
            goto label_278ae0;
        }
    }
    ctx->pc = 0x2788DCu;
label_2788dc:
    // 0x2788dc: 0x0  nop
    ctx->pc = 0x2788dcu;
    // NOP
label_2788e0:
    // 0x2788e0: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x2788e0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2788e4:
    // 0x2788e4: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x2788e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2788e8:
    // 0x2788e8: 0x8e680010  lw          $t0, 0x10($s3)
    ctx->pc = 0x2788e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2788ec:
    // 0x2788ec: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x2788ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_2788f0:
    // 0x2788f0: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x2788f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2788f4:
    // 0x2788f4: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x2788f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2788f8:
    // 0x2788f8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2788f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2788fc:
    // 0x2788fc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2788fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_278900:
    // 0x278900: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x278900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_278904:
    // 0x278904: 0x10000076  b           . + 4 + (0x76 << 2)
label_278908:
    if (ctx->pc == 0x278908u) {
        ctx->pc = 0x278908u;
            // 0x278908: 0xe63021  addu        $a2, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->pc = 0x27890Cu;
        goto label_27890c;
    }
    ctx->pc = 0x278904u;
    {
        const bool branch_taken_0x278904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278904u;
            // 0x278908: 0xe63021  addu        $a2, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278904) {
            ctx->pc = 0x278AE0u;
            goto label_278ae0;
        }
    }
    ctx->pc = 0x27890Cu;
label_27890c:
    // 0x27890c: 0x0  nop
    ctx->pc = 0x27890cu;
    // NOP
label_278910:
    // 0x278910: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x278910u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_278914:
    // 0x278914: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x278914u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_278918:
    // 0x278918: 0x8e680010  lw          $t0, 0x10($s3)
    ctx->pc = 0x278918u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_27891c:
    // 0x27891c: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x27891cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_278920:
    // 0x278920: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x278920u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_278924:
    // 0x278924: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x278924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_278928:
    // 0x278928: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x278928u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_27892c:
    // 0x27892c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x27892cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_278930:
    // 0x278930: 0x2484ff01  addiu       $a0, $a0, -0xFF
    ctx->pc = 0x278930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967041));
label_278934:
    // 0x278934: 0x2463ff01  addiu       $v1, $v1, -0xFF
    ctx->pc = 0x278934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967041));
label_278938:
    // 0x278938: 0x1052823  subu        $a1, $t0, $a1
    ctx->pc = 0x278938u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_27893c:
    // 0x27893c: 0x10000068  b           . + 4 + (0x68 << 2)
label_278940:
    if (ctx->pc == 0x278940u) {
        ctx->pc = 0x278940u;
            // 0x278940: 0xe63023  subu        $a2, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->pc = 0x278944u;
        goto label_278944;
    }
    ctx->pc = 0x27893Cu;
    {
        const bool branch_taken_0x27893c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27893Cu;
            // 0x278940: 0xe63023  subu        $a2, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27893c) {
            ctx->pc = 0x278AE0u;
            goto label_278ae0;
        }
    }
    ctx->pc = 0x278944u;
label_278944:
    // 0x278944: 0x0  nop
    ctx->pc = 0x278944u;
    // NOP
label_278948:
    // 0x278948: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x278948u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_27894c:
    // 0x27894c: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x27894cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_278950:
    // 0x278950: 0x8e680010  lw          $t0, 0x10($s3)
    ctx->pc = 0x278950u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_278954:
    // 0x278954: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x278954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_278958:
    // 0x278958: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x278958u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_27895c:
    // 0x27895c: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x27895cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_278960:
    // 0x278960: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x278960u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_278964:
    // 0x278964: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x278964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_278968:
    // 0x278968: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x278968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_27896c:
    // 0x27896c: 0x1000005c  b           . + 4 + (0x5C << 2)
label_278970:
    if (ctx->pc == 0x278970u) {
        ctx->pc = 0x278970u;
            // 0x278970: 0xe63021  addu        $a2, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->pc = 0x278974u;
        goto label_278974;
    }
    ctx->pc = 0x27896Cu;
    {
        const bool branch_taken_0x27896c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27896Cu;
            // 0x278970: 0xe63021  addu        $a2, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27896c) {
            ctx->pc = 0x278AE0u;
            goto label_278ae0;
        }
    }
    ctx->pc = 0x278974u;
label_278974:
    // 0x278974: 0x0  nop
    ctx->pc = 0x278974u;
    // NOP
label_278978:
    // 0x278978: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x278978u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_27897c:
    // 0x27897c: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x27897cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_278980:
    // 0x278980: 0x8e680010  lw          $t0, 0x10($s3)
    ctx->pc = 0x278980u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_278984:
    // 0x278984: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x278984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_278988:
    // 0x278988: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x278988u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_27898c:
    // 0x27898c: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x27898cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_278990:
    // 0x278990: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x278990u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_278994:
    // 0x278994: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x278994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_278998:
    // 0x278998: 0x2484ff01  addiu       $a0, $a0, -0xFF
    ctx->pc = 0x278998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967041));
label_27899c:
    // 0x27899c: 0x2463ff01  addiu       $v1, $v1, -0xFF
    ctx->pc = 0x27899cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967041));
label_2789a0:
    // 0x2789a0: 0x1052823  subu        $a1, $t0, $a1
    ctx->pc = 0x2789a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_2789a4:
    // 0x2789a4: 0x1000004e  b           . + 4 + (0x4E << 2)
label_2789a8:
    if (ctx->pc == 0x2789A8u) {
        ctx->pc = 0x2789A8u;
            // 0x2789a8: 0xe63023  subu        $a2, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->pc = 0x2789ACu;
        goto label_2789ac;
    }
    ctx->pc = 0x2789A4u;
    {
        const bool branch_taken_0x2789a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2789A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2789A4u;
            // 0x2789a8: 0xe63023  subu        $a2, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2789a4) {
            ctx->pc = 0x278AE0u;
            goto label_278ae0;
        }
    }
    ctx->pc = 0x2789ACu;
label_2789ac:
    // 0x2789ac: 0x0  nop
    ctx->pc = 0x2789acu;
    // NOP
label_2789b0:
    // 0x2789b0: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x2789b0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2789b4:
    // 0x2789b4: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x2789b4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2789b8:
    // 0x2789b8: 0x8e6a0010  lw          $t2, 0x10($s3)
    ctx->pc = 0x2789b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2789bc:
    // 0x2789bc: 0x8e690014  lw          $t1, 0x14($s3)
    ctx->pc = 0x2789bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2789c0:
    // 0x2789c0: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x2789c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2789c4:
    // 0x2789c4: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x2789c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2789c8:
    // 0x2789c8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2789c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2789cc:
    // 0x2789cc: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x2789ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_2789d0:
    // 0x2789d0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2789d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2789d4:
    // 0x2789d4: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2789d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_2789d8:
    // 0x2789d8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2789d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2789dc:
    // 0x2789dc: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x2789dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_2789e0:
    // 0x2789e0: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x2789e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2789e4:
    // 0x2789e4: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x2789e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_2789e8:
    // 0x2789e8: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x2789e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_2789ec:
    // 0x2789ec: 0x1000003c  b           . + 4 + (0x3C << 2)
label_2789f0:
    if (ctx->pc == 0x2789F0u) {
        ctx->pc = 0x2789F0u;
            // 0x2789f0: 0xc73021  addu        $a2, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->pc = 0x2789F4u;
        goto label_2789f4;
    }
    ctx->pc = 0x2789ECu;
    {
        const bool branch_taken_0x2789ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2789F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2789ECu;
            // 0x2789f0: 0xc73021  addu        $a2, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2789ec) {
            ctx->pc = 0x278AE0u;
            goto label_278ae0;
        }
    }
    ctx->pc = 0x2789F4u;
label_2789f4:
    // 0x2789f4: 0x0  nop
    ctx->pc = 0x2789f4u;
    // NOP
label_2789f8:
    // 0x2789f8: 0x8e690010  lw          $t1, 0x10($s3)
    ctx->pc = 0x2789f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2789fc:
    // 0x2789fc: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x2789fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_278a00:
    // 0x278a00: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x278a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_278a04:
    // 0x278a04: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x278a04u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_278a08:
    // 0x278a08: 0x924a0002  lbu         $t2, 0x2($s2)
    ctx->pc = 0x278a08u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_278a0c:
    // 0x278a0c: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x278a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_278a10:
    // 0x278a10: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x278a10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_278a14:
    // 0x278a14: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x278a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_278a18:
    // 0x278a18: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x278a18u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_278a1c:
    // 0x278a1c: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x278a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_278a20:
    // 0x278a20: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x278a20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_278a24:
    // 0x278a24: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x278a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_278a28:
    // 0x278a28: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x278a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_278a2c:
    // 0x278a2c: 0x2484ff01  addiu       $a0, $a0, -0xFF
    ctx->pc = 0x278a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967041));
label_278a30:
    // 0x278a30: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x278a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_278a34:
    // 0x278a34: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x278a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_278a38:
    // 0x278a38: 0x2463ff01  addiu       $v1, $v1, -0xFF
    ctx->pc = 0x278a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967041));
label_278a3c:
    // 0x278a3c: 0x10000028  b           . + 4 + (0x28 << 2)
label_278a40:
    if (ctx->pc == 0x278A40u) {
        ctx->pc = 0x278A40u;
            // 0x278a40: 0xe63023  subu        $a2, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->pc = 0x278A44u;
        goto label_278a44;
    }
    ctx->pc = 0x278A3Cu;
    {
        const bool branch_taken_0x278a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278A3Cu;
            // 0x278a40: 0xe63023  subu        $a2, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278a3c) {
            ctx->pc = 0x278AE0u;
            goto label_278ae0;
        }
    }
    ctx->pc = 0x278A44u;
label_278a44:
    // 0x278a44: 0x0  nop
    ctx->pc = 0x278a44u;
    // NOP
label_278a48:
    // 0x278a48: 0x8e690010  lw          $t1, 0x10($s3)
    ctx->pc = 0x278a48u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_278a4c:
    // 0x278a4c: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x278a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_278a50:
    // 0x278a50: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x278a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_278a54:
    // 0x278a54: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x278a54u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_278a58:
    // 0x278a58: 0x924a0002  lbu         $t2, 0x2($s2)
    ctx->pc = 0x278a58u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_278a5c:
    // 0x278a5c: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x278a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_278a60:
    // 0x278a60: 0x8e670014  lw          $a3, 0x14($s3)
    ctx->pc = 0x278a60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_278a64:
    // 0x278a64: 0x1263023  subu        $a2, $t1, $a2
    ctx->pc = 0x278a64u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_278a68:
    // 0x278a68: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x278a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_278a6c:
    // 0x278a6c: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x278a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_278a70:
    // 0x278a70: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x278a70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_278a74:
    // 0x278a74: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x278a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_278a78:
    // 0x278a78: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x278a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_278a7c:
    // 0x278a7c: 0x2484ff01  addiu       $a0, $a0, -0xFF
    ctx->pc = 0x278a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967041));
label_278a80:
    // 0x278a80: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x278a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_278a84:
    // 0x278a84: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x278a84u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_278a88:
    // 0x278a88: 0x2463ff01  addiu       $v1, $v1, -0xFF
    ctx->pc = 0x278a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967041));
label_278a8c:
    // 0x278a8c: 0x10000014  b           . + 4 + (0x14 << 2)
label_278a90:
    if (ctx->pc == 0x278A90u) {
        ctx->pc = 0x278A90u;
            // 0x278a90: 0xc73021  addu        $a2, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->pc = 0x278A94u;
        goto label_278a94;
    }
    ctx->pc = 0x278A8Cu;
    {
        const bool branch_taken_0x278a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278A8Cu;
            // 0x278a90: 0xc73021  addu        $a2, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278a8c) {
            ctx->pc = 0x278AE0u;
            goto label_278ae0;
        }
    }
    ctx->pc = 0x278A94u;
label_278a94:
    // 0x278a94: 0x0  nop
    ctx->pc = 0x278a94u;
    // NOP
label_278a98:
    // 0x278a98: 0x8e690010  lw          $t1, 0x10($s3)
    ctx->pc = 0x278a98u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_278a9c:
    // 0x278a9c: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x278a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_278aa0:
    // 0x278aa0: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x278aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_278aa4:
    // 0x278aa4: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x278aa4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_278aa8:
    // 0x278aa8: 0x924a0002  lbu         $t2, 0x2($s2)
    ctx->pc = 0x278aa8u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_278aac:
    // 0x278aac: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x278aacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_278ab0:
    // 0x278ab0: 0x8e670014  lw          $a3, 0x14($s3)
    ctx->pc = 0x278ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_278ab4:
    // 0x278ab4: 0x1263023  subu        $a2, $t1, $a2
    ctx->pc = 0x278ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_278ab8:
    // 0x278ab8: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x278ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_278abc:
    // 0x278abc: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x278abcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_278ac0:
    // 0x278ac0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x278ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_278ac4:
    // 0x278ac4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x278ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_278ac8:
    // 0x278ac8: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x278ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_278acc:
    // 0x278acc: 0x2484fe02  addiu       $a0, $a0, -0x1FE
    ctx->pc = 0x278accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966786));
label_278ad0:
    // 0x278ad0: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x278ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_278ad4:
    // 0x278ad4: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x278ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_278ad8:
    // 0x278ad8: 0x2463fe02  addiu       $v1, $v1, -0x1FE
    ctx->pc = 0x278ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966786));
label_278adc:
    // 0x278adc: 0xe63023  subu        $a2, $a3, $a2
    ctx->pc = 0x278adcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_278ae0:
    // 0x278ae0: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x278ae0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_278ae4:
    // 0x278ae4: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_278ae8:
    if (ctx->pc == 0x278AE8u) {
        ctx->pc = 0x278AE8u;
            // 0x278ae8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x278AECu;
        goto label_278aec;
    }
    ctx->pc = 0x278AE4u;
    {
        const bool branch_taken_0x278ae4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x278AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278AE4u;
            // 0x278ae8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ae4) {
            ctx->pc = 0x278B00u;
            goto label_278b00;
        }
    }
    ctx->pc = 0x278AECu;
label_278aec:
    // 0x278aec: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x278aecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_278af0:
    // 0x278af0: 0x10200221  beqz        $at, . + 4 + (0x221 << 2)
label_278af4:
    if (ctx->pc == 0x278AF4u) {
        ctx->pc = 0x278AF8u;
        goto label_278af8;
    }
    ctx->pc = 0x278AF0u;
    {
        const bool branch_taken_0x278af0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x278af0) {
            ctx->pc = 0x279378u;
            goto label_279378;
        }
    }
    ctx->pc = 0x278AF8u;
label_278af8:
    // 0x278af8: 0x1000ff55  b           . + 4 + (-0xAB << 2)
label_278afc:
    if (ctx->pc == 0x278AFCu) {
        ctx->pc = 0x278B00u;
        goto label_278b00;
    }
    ctx->pc = 0x278AF8u;
    {
        const bool branch_taken_0x278af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278af8) {
            ctx->pc = 0x278850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_278850;
        }
    }
    ctx->pc = 0x278B00u;
label_278b00:
    // 0x278b00: 0x9243ffff  lbu         $v1, -0x1($s2)
    ctx->pc = 0x278b00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294967295)));
label_278b04:
    // 0x278b04: 0xa4202a  slt         $a0, $a1, $a0
    ctx->pc = 0x278b04u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_278b08:
    // 0x278b08: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_278b0c:
    if (ctx->pc == 0x278B0Cu) {
        ctx->pc = 0x278B0Cu;
            // 0x278b0c: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->pc = 0x278B10u;
        goto label_278b10;
    }
    ctx->pc = 0x278B08u;
    {
        const bool branch_taken_0x278b08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x278B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278B08u;
            // 0x278b0c: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278b08) {
            ctx->pc = 0x278B20u;
            goto label_278b20;
        }
    }
    ctx->pc = 0x278B10u;
label_278b10:
    // 0x278b10: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x278b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_278b14:
    // 0x278b14: 0x1000ff4e  b           . + 4 + (-0xB2 << 2)
label_278b18:
    if (ctx->pc == 0x278B18u) {
        ctx->pc = 0x278B18u;
            // 0x278b18: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->pc = 0x278B1Cu;
        goto label_278b1c;
    }
    ctx->pc = 0x278B14u;
    {
        const bool branch_taken_0x278b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278B14u;
            // 0x278b18: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278b14) {
            ctx->pc = 0x278850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_278850;
        }
    }
    ctx->pc = 0x278B1Cu;
label_278b1c:
    // 0x278b1c: 0x0  nop
    ctx->pc = 0x278b1cu;
    // NOP
label_278b20:
    // 0x278b20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x278b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_278b24:
    // 0x278b24: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x278b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_278b28:
    // 0x278b28: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x278b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_278b2c:
    // 0x278b2c: 0xc09e1f8  jal         func_2787E0
label_278b30:
    if (ctx->pc == 0x278B30u) {
        ctx->pc = 0x278B30u;
            // 0x278b30: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x278B34u;
        goto label_278b34;
    }
    ctx->pc = 0x278B2Cu;
    SET_GPR_U32(ctx, 31, 0x278B34u);
    ctx->pc = 0x278B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278B2Cu;
            // 0x278b30: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2787E0u;
    goto label_2787e0;
    ctx->pc = 0x278B34u;
label_278b34:
    // 0x278b34: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x278b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_278b38:
    // 0x278b38: 0x1000ff45  b           . + 4 + (-0xBB << 2)
label_278b3c:
    if (ctx->pc == 0x278B3Cu) {
        ctx->pc = 0x278B3Cu;
            // 0x278b3c: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->pc = 0x278B40u;
        goto label_278b40;
    }
    ctx->pc = 0x278B38u;
    {
        const bool branch_taken_0x278b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278B38u;
            // 0x278b3c: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278b38) {
            ctx->pc = 0x278850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_278850;
        }
    }
    ctx->pc = 0x278B40u;
label_278b40:
    // 0x278b40: 0x2651821  addu        $v1, $s3, $a1
    ctx->pc = 0x278b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_278b44:
    // 0x278b44: 0x8c66ffd0  lw          $a2, -0x30($v1)
    ctx->pc = 0x278b44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967248)));
label_278b48:
    // 0x278b48: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x278b48u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_278b4c:
    // 0x278b4c: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x278b4cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_278b50:
    // 0x278b50: 0x8c63ffc0  lw          $v1, -0x40($v1)
    ctx->pc = 0x278b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967232)));
label_278b54:
    // 0x278b54: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x278b54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_278b58:
    // 0x278b58: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_278b5c:
    if (ctx->pc == 0x278B5Cu) {
        ctx->pc = 0x278B5Cu;
            // 0x278b5c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x278B60u;
        goto label_278b60;
    }
    ctx->pc = 0x278B58u;
    {
        const bool branch_taken_0x278b58 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x278B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278B58u;
            // 0x278b5c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278b58) {
            ctx->pc = 0x278B78u;
            goto label_278b78;
        }
    }
    ctx->pc = 0x278B60u;
label_278b60:
    // 0x278b60: 0xc5082a  slt         $at, $a2, $a1
    ctx->pc = 0x278b60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_278b64:
    // 0x278b64: 0x10200204  beqz        $at, . + 4 + (0x204 << 2)
label_278b68:
    if (ctx->pc == 0x278B68u) {
        ctx->pc = 0x278B6Cu;
        goto label_278b6c;
    }
    ctx->pc = 0x278B64u;
    {
        const bool branch_taken_0x278b64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x278b64) {
            ctx->pc = 0x279378u;
            goto label_279378;
        }
    }
    ctx->pc = 0x278B6Cu;
label_278b6c:
    // 0x278b6c: 0x1000ff38  b           . + 4 + (-0xC8 << 2)
label_278b70:
    if (ctx->pc == 0x278B70u) {
        ctx->pc = 0x278B74u;
        goto label_278b74;
    }
    ctx->pc = 0x278B6Cu;
    {
        const bool branch_taken_0x278b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278b6c) {
            ctx->pc = 0x278850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_278850;
        }
    }
    ctx->pc = 0x278B74u;
label_278b74:
    // 0x278b74: 0x0  nop
    ctx->pc = 0x278b74u;
    // NOP
label_278b78:
    // 0x278b78: 0x9243ffff  lbu         $v1, -0x1($s2)
    ctx->pc = 0x278b78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294967295)));
label_278b7c:
    // 0x278b7c: 0xc5082a  slt         $at, $a2, $a1
    ctx->pc = 0x278b7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_278b80:
    // 0x278b80: 0x1020ff33  beqz        $at, . + 4 + (-0xCD << 2)
label_278b84:
    if (ctx->pc == 0x278B84u) {
        ctx->pc = 0x278B84u;
            // 0x278b84: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->pc = 0x278B88u;
        goto label_278b88;
    }
    ctx->pc = 0x278B80u;
    {
        const bool branch_taken_0x278b80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x278B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278B80u;
            // 0x278b84: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278b80) {
            ctx->pc = 0x278850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_278850;
        }
    }
    ctx->pc = 0x278B88u;
label_278b88:
    // 0x278b88: 0x2433023  subu        $a2, $s2, $v1
    ctx->pc = 0x278b88u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_278b8c:
    // 0x278b8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x278b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_278b90:
    // 0x278b90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x278b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_278b94:
    // 0x278b94: 0xc09e1f8  jal         func_2787E0
label_278b98:
    if (ctx->pc == 0x278B98u) {
        ctx->pc = 0x278B98u;
            // 0x278b98: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x278B9Cu;
        goto label_278b9c;
    }
    ctx->pc = 0x278B94u;
    SET_GPR_U32(ctx, 31, 0x278B9Cu);
    ctx->pc = 0x278B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278B94u;
            // 0x278b98: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2787E0u;
    goto label_2787e0;
    ctx->pc = 0x278B9Cu;
label_278b9c:
    // 0x278b9c: 0x1000ff2c  b           . + 4 + (-0xD4 << 2)
label_278ba0:
    if (ctx->pc == 0x278BA0u) {
        ctx->pc = 0x278BA4u;
        goto label_278ba4;
    }
    ctx->pc = 0x278B9Cu;
    {
        const bool branch_taken_0x278b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278b9c) {
            ctx->pc = 0x278850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_278850;
        }
    }
    ctx->pc = 0x278BA4u;
label_278ba4:
    // 0x278ba4: 0x0  nop
    ctx->pc = 0x278ba4u;
    // NOP
label_278ba8:
    // 0x278ba8: 0x2651821  addu        $v1, $s3, $a1
    ctx->pc = 0x278ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_278bac:
    // 0x278bac: 0x8c65ff90  lw          $a1, -0x70($v1)
    ctx->pc = 0x278bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967184)));
label_278bb0:
    // 0x278bb0: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x278bb0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_278bb4:
    // 0x278bb4: 0x8c63ff80  lw          $v1, -0x80($v1)
    ctx->pc = 0x278bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967168)));
label_278bb8:
    // 0x278bb8: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x278bb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_278bbc:
    // 0x278bbc: 0x1020ff24  beqz        $at, . + 4 + (-0xDC << 2)
label_278bc0:
    if (ctx->pc == 0x278BC0u) {
        ctx->pc = 0x278BC0u;
            // 0x278bc0: 0x26520003  addiu       $s2, $s2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
        ctx->pc = 0x278BC4u;
        goto label_278bc4;
    }
    ctx->pc = 0x278BBCu;
    {
        const bool branch_taken_0x278bbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x278BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278BBCu;
            // 0x278bc0: 0x26520003  addiu       $s2, $s2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278bbc) {
            ctx->pc = 0x278850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_278850;
        }
    }
    ctx->pc = 0x278BC4u;
label_278bc4:
    // 0x278bc4: 0x9243ffff  lbu         $v1, -0x1($s2)
    ctx->pc = 0x278bc4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294967295)));
label_278bc8:
    // 0x278bc8: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x278bc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_278bcc:
    // 0x278bcc: 0x1420ff20  bnez        $at, . + 4 + (-0xE0 << 2)
label_278bd0:
    if (ctx->pc == 0x278BD0u) {
        ctx->pc = 0x278BD0u;
            // 0x278bd0: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->pc = 0x278BD4u;
        goto label_278bd4;
    }
    ctx->pc = 0x278BCCu;
    {
        const bool branch_taken_0x278bcc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x278BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278BCCu;
            // 0x278bd0: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278bcc) {
            ctx->pc = 0x278850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_278850;
        }
    }
    ctx->pc = 0x278BD4u;
label_278bd4:
    // 0x278bd4: 0x2433023  subu        $a2, $s2, $v1
    ctx->pc = 0x278bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_278bd8:
    // 0x278bd8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x278bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_278bdc:
    // 0x278bdc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x278bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_278be0:
    // 0x278be0: 0xc09e1f8  jal         func_2787E0
label_278be4:
    if (ctx->pc == 0x278BE4u) {
        ctx->pc = 0x278BE4u;
            // 0x278be4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x278BE8u;
        goto label_278be8;
    }
    ctx->pc = 0x278BE0u;
    SET_GPR_U32(ctx, 31, 0x278BE8u);
    ctx->pc = 0x278BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278BE0u;
            // 0x278be4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2787E0u;
    goto label_2787e0;
    ctx->pc = 0x278BE8u;
label_278be8:
    // 0x278be8: 0x1000ff19  b           . + 4 + (-0xE7 << 2)
label_278bec:
    if (ctx->pc == 0x278BECu) {
        ctx->pc = 0x278BF0u;
        goto label_278bf0;
    }
    ctx->pc = 0x278BE8u;
    {
        const bool branch_taken_0x278be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278be8) {
            ctx->pc = 0x278850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_278850;
        }
    }
    ctx->pc = 0x278BF0u;
label_278bf0:
    // 0x278bf0: 0x2651821  addu        $v1, $s3, $a1
    ctx->pc = 0x278bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_278bf4:
    // 0x278bf4: 0x8c68ff84  lw          $t0, -0x7C($v1)
    ctx->pc = 0x278bf4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967172)));
label_278bf8:
    // 0x278bf8: 0x92450003  lbu         $a1, 0x3($s2)
    ctx->pc = 0x278bf8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_278bfc:
    // 0x278bfc: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x278bfcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_278c00:
    // 0x278c00: 0x92470001  lbu         $a3, 0x1($s2)
    ctx->pc = 0x278c00u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_278c04:
    // 0x278c04: 0x92440004  lbu         $a0, 0x4($s2)
    ctx->pc = 0x278c04u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_278c08:
    // 0x278c08: 0x8c63ff74  lw          $v1, -0x8C($v1)
    ctx->pc = 0x278c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967156)));
label_278c0c:
    // 0x278c0c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x278c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_278c10:
    // 0x278c10: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x278c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_278c14:
    // 0x278c14: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x278c14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_278c18:
    // 0x278c18: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_278c1c:
    if (ctx->pc == 0x278C1Cu) {
        ctx->pc = 0x278C1Cu;
            // 0x278c1c: 0x26520007  addiu       $s2, $s2, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 7));
        ctx->pc = 0x278C20u;
        goto label_278c20;
    }
    ctx->pc = 0x278C18u;
    {
        const bool branch_taken_0x278c18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x278C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278C18u;
            // 0x278c1c: 0x26520007  addiu       $s2, $s2, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278c18) {
            ctx->pc = 0x278C38u;
            goto label_278c38;
        }
    }
    ctx->pc = 0x278C20u;
label_278c20:
    // 0x278c20: 0x107082a  slt         $at, $t0, $a3
    ctx->pc = 0x278c20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_278c24:
    // 0x278c24: 0x102001d4  beqz        $at, . + 4 + (0x1D4 << 2)
label_278c28:
    if (ctx->pc == 0x278C28u) {
        ctx->pc = 0x278C2Cu;
        goto label_278c2c;
    }
    ctx->pc = 0x278C24u;
    {
        const bool branch_taken_0x278c24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x278c24) {
            ctx->pc = 0x279378u;
            goto label_279378;
        }
    }
    ctx->pc = 0x278C2Cu;
label_278c2c:
    // 0x278c2c: 0x1000ff08  b           . + 4 + (-0xF8 << 2)
label_278c30:
    if (ctx->pc == 0x278C30u) {
        ctx->pc = 0x278C30u;
            // 0x278c30: 0x2459021  addu        $s2, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->pc = 0x278C34u;
        goto label_278c34;
    }
    ctx->pc = 0x278C2Cu;
    {
        const bool branch_taken_0x278c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278C2Cu;
            // 0x278c30: 0x2459021  addu        $s2, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278c2c) {
            ctx->pc = 0x278850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_278850;
        }
    }
    ctx->pc = 0x278C34u;
label_278c34:
    // 0x278c34: 0x0  nop
    ctx->pc = 0x278c34u;
    // NOP
label_278c38:
    // 0x278c38: 0x9244fffe  lbu         $a0, -0x2($s2)
    ctx->pc = 0x278c38u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294967294)));
label_278c3c:
    // 0x278c3c: 0x9243ffff  lbu         $v1, -0x1($s2)
    ctx->pc = 0x278c3cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294967295)));
label_278c40:
    // 0x278c40: 0x107082a  slt         $at, $t0, $a3
    ctx->pc = 0x278c40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_278c44:
    // 0x278c44: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x278c44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_278c48:
    // 0x278c48: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x278c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_278c4c:
    // 0x278c4c: 0x1020ff00  beqz        $at, . + 4 + (-0x100 << 2)
label_278c50:
    if (ctx->pc == 0x278C50u) {
        ctx->pc = 0x278C50u;
            // 0x278c50: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->pc = 0x278C54u;
        goto label_278c54;
    }
    ctx->pc = 0x278C4Cu;
    {
        const bool branch_taken_0x278c4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x278C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278C4Cu;
            // 0x278c50: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278c4c) {
            ctx->pc = 0x278850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_278850;
        }
    }
    ctx->pc = 0x278C54u;
label_278c54:
    // 0x278c54: 0x2431023  subu        $v0, $s2, $v1
    ctx->pc = 0x278c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_278c58:
    // 0x278c58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x278c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_278c5c:
    // 0x278c5c: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x278c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_278c60:
    // 0x278c60: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x278c60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_278c64:
    // 0x278c64: 0xc09e1f8  jal         func_2787E0
label_278c68:
    if (ctx->pc == 0x278C68u) {
        ctx->pc = 0x278C68u;
            // 0x278c68: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x278C6Cu;
        goto label_278c6c;
    }
    ctx->pc = 0x278C64u;
    SET_GPR_U32(ctx, 31, 0x278C6Cu);
    ctx->pc = 0x278C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278C64u;
            // 0x278c68: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2787E0u;
    goto label_2787e0;
    ctx->pc = 0x278C6Cu;
label_278c6c:
    // 0x278c6c: 0x1000fef8  b           . + 4 + (-0x108 << 2)
label_278c70:
    if (ctx->pc == 0x278C70u) {
        ctx->pc = 0x278C74u;
        goto label_278c74;
    }
    ctx->pc = 0x278C6Cu;
    {
        const bool branch_taken_0x278c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278c6c) {
            ctx->pc = 0x278850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_278850;
        }
    }
    ctx->pc = 0x278C74u;
label_278c74:
    // 0x278c74: 0x0  nop
    ctx->pc = 0x278c74u;
    // NOP
label_278c78:
    // 0x278c78: 0x2651821  addu        $v1, $s3, $a1
    ctx->pc = 0x278c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_278c7c:
    // 0x278c7c: 0x8c66ff78  lw          $a2, -0x88($v1)
    ctx->pc = 0x278c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967160)));
label_278c80:
    // 0x278c80: 0x8c64ff68  lw          $a0, -0x98($v1)
    ctx->pc = 0x278c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967144)));
label_278c84:
    // 0x278c84: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x278c84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_278c88:
    // 0x278c88: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x278c88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_278c8c:
    // 0x278c8c: 0x146001ba  bnez        $v1, . + 4 + (0x1BA << 2)
label_278c90:
    if (ctx->pc == 0x278C90u) {
        ctx->pc = 0x278C90u;
            // 0x278c90: 0x92450002  lbu         $a1, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->pc = 0x278C94u;
        goto label_278c94;
    }
    ctx->pc = 0x278C8Cu;
    {
        const bool branch_taken_0x278c8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x278C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278C8Cu;
            // 0x278c90: 0x92450002  lbu         $a1, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278c8c) {
            ctx->pc = 0x279378u;
            goto label_279378;
        }
    }
    ctx->pc = 0x278C94u;
label_278c94:
    // 0x278c94: 0xc5082a  slt         $at, $a2, $a1
    ctx->pc = 0x278c94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_278c98:
    // 0x278c98: 0x102001b7  beqz        $at, . + 4 + (0x1B7 << 2)
label_278c9c:
    if (ctx->pc == 0x278C9Cu) {
        ctx->pc = 0x278CA0u;
        goto label_278ca0;
    }
    ctx->pc = 0x278C98u;
    {
        const bool branch_taken_0x278c98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x278c98) {
            ctx->pc = 0x279378u;
            goto label_279378;
        }
    }
    ctx->pc = 0x278CA0u;
label_278ca0:
    // 0x278ca0: 0x1000feeb  b           . + 4 + (-0x115 << 2)
label_278ca4:
    if (ctx->pc == 0x278CA4u) {
        ctx->pc = 0x278CA4u;
            // 0x278ca4: 0x26520003  addiu       $s2, $s2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
        ctx->pc = 0x278CA8u;
        goto label_278ca8;
    }
    ctx->pc = 0x278CA0u;
    {
        const bool branch_taken_0x278ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278CA0u;
            // 0x278ca4: 0x26520003  addiu       $s2, $s2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ca0) {
            ctx->pc = 0x278850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_278850;
        }
    }
    ctx->pc = 0x278CA8u;
label_278ca8:
    // 0x278ca8: 0x2852021  addu        $a0, $s4, $a1
    ctx->pc = 0x278ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_278cac:
    // 0x278cac: 0x8c83ff7c  lw          $v1, -0x84($a0)
    ctx->pc = 0x278cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967164)));
label_278cb0:
    // 0x278cb0: 0x8c87ff6c  lw          $a3, -0x94($a0)
    ctx->pc = 0x278cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967148)));
label_278cb4:
    // 0x278cb4: 0x92460001  lbu         $a2, 0x1($s2)
    ctx->pc = 0x278cb4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_278cb8:
    // 0x278cb8: 0x92450002  lbu         $a1, 0x2($s2)
    ctx->pc = 0x278cb8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_278cbc:
    // 0x278cbc: 0x924a0004  lbu         $t2, 0x4($s2)
    ctx->pc = 0x278cbcu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_278cc0:
    // 0x278cc0: 0x92490005  lbu         $t1, 0x5($s2)
    ctx->pc = 0x278cc0u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
label_278cc4:
    // 0x278cc4: 0x92480006  lbu         $t0, 0x6($s2)
    ctx->pc = 0x278cc4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
label_278cc8:
    // 0x278cc8: 0x92440003  lbu         $a0, 0x3($s2)
    ctx->pc = 0x278cc8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_278ccc:
    // 0x278ccc: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x278cccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_278cd0:
    // 0x278cd0: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x278cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_278cd4:
    // 0x278cd4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x278cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_278cd8:
    // 0x278cd8: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x278cd8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
label_278cdc:
    // 0x278cdc: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x278cdcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_278ce0:
    // 0x278ce0: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x278ce0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_278ce4:
    // 0x278ce4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x278ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_278ce8:
    // 0x278ce8: 0xe4202a  slt         $a0, $a3, $a0
    ctx->pc = 0x278ce8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_278cec:
    // 0x278cec: 0x148001a2  bnez        $a0, . + 4 + (0x1A2 << 2)
label_278cf0:
    if (ctx->pc == 0x278CF0u) {
        ctx->pc = 0x278CF0u;
            // 0x278cf0: 0x1094021  addu        $t0, $t0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
        ctx->pc = 0x278CF4u;
        goto label_278cf4;
    }
    ctx->pc = 0x278CECu;
    {
        const bool branch_taken_0x278cec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x278CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278CECu;
            // 0x278cf0: 0x1094021  addu        $t0, $t0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278cec) {
            ctx->pc = 0x279378u;
            goto label_279378;
        }
    }
    ctx->pc = 0x278CF4u;
label_278cf4:
    // 0x278cf4: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x278cf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_278cf8:
    // 0x278cf8: 0x1420019f  bnez        $at, . + 4 + (0x19F << 2)
label_278cfc:
    if (ctx->pc == 0x278CFCu) {
        ctx->pc = 0x278D00u;
        goto label_278d00;
    }
    ctx->pc = 0x278CF8u;
    {
        const bool branch_taken_0x278cf8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x278cf8) {
            ctx->pc = 0x279378u;
            goto label_279378;
        }
    }
    ctx->pc = 0x278D00u;
label_278d00:
    // 0x278d00: 0x1000fed3  b           . + 4 + (-0x12D << 2)
label_278d04:
    if (ctx->pc == 0x278D04u) {
        ctx->pc = 0x278D04u;
            // 0x278d04: 0x26520007  addiu       $s2, $s2, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 7));
        ctx->pc = 0x278D08u;
        goto label_278d08;
    }
    ctx->pc = 0x278D00u;
    {
        const bool branch_taken_0x278d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278D00u;
            // 0x278d04: 0x26520007  addiu       $s2, $s2, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d00) {
            ctx->pc = 0x278850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_278850;
        }
    }
    ctx->pc = 0x278D08u;
label_278d08:
    // 0x278d08: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x278d08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_278d0c:
    // 0x278d0c: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x278d0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_278d10:
    // 0x278d10: 0x1000fecf  b           . + 4 + (-0x131 << 2)
label_278d14:
    if (ctx->pc == 0x278D14u) {
        ctx->pc = 0x278D14u;
            // 0x278d14: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->pc = 0x278D18u;
        goto label_278d18;
    }
    ctx->pc = 0x278D10u;
    {
        const bool branch_taken_0x278d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278D10u;
            // 0x278d14: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d10) {
            ctx->pc = 0x278850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_278850;
        }
    }
    ctx->pc = 0x278D18u;
label_278d18:
    // 0x278d18: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x278d18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_278d1c:
    // 0x278d1c: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x278d1cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_278d20:
    // 0x278d20: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x278d20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_278d24:
    // 0x278d24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x278d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_278d28:
    // 0x278d28: 0x26520003  addiu       $s2, $s2, 0x3
    ctx->pc = 0x278d28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
label_278d2c:
    // 0x278d2c: 0x1000fec8  b           . + 4 + (-0x138 << 2)
label_278d30:
    if (ctx->pc == 0x278D30u) {
        ctx->pc = 0x278D30u;
            // 0x278d30: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->pc = 0x278D34u;
        goto label_278d34;
    }
    ctx->pc = 0x278D2Cu;
    {
        const bool branch_taken_0x278d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278D2Cu;
            // 0x278d30: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d2c) {
            ctx->pc = 0x278850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_278850;
        }
    }
    ctx->pc = 0x278D34u;
label_278d34:
    // 0x278d34: 0x0  nop
    ctx->pc = 0x278d34u;
    // NOP
label_278d38:
    // 0x278d38: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x278d38u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_278d3c:
    // 0x278d3c: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x278d3cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_278d40:
    // 0x278d40: 0x92450003  lbu         $a1, 0x3($s2)
    ctx->pc = 0x278d40u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_278d44:
    // 0x278d44: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x278d44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_278d48:
    // 0x278d48: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x278d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_278d4c:
    // 0x278d4c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x278d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_278d50:
    // 0x278d50: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x278d50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_278d54:
    // 0x278d54: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x278d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_278d58:
    // 0x278d58: 0x1000febd  b           . + 4 + (-0x143 << 2)
label_278d5c:
    if (ctx->pc == 0x278D5Cu) {
        ctx->pc = 0x278D5Cu;
            // 0x278d5c: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->pc = 0x278D60u;
        goto label_278d60;
    }
    ctx->pc = 0x278D58u;
    {
        const bool branch_taken_0x278d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278D58u;
            // 0x278d5c: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d58) {
            ctx->pc = 0x278850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_278850;
        }
    }
    ctx->pc = 0x278D60u;
label_278d60:
    // 0x278d60: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x278d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_278d64:
    // 0x278d64: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x278d64u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_278d68:
    // 0x278d68: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x278d68u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_278d6c:
    // 0x278d6c: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x278d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_278d70:
    // 0x278d70: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x278d70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_278d74:
    // 0x278d74: 0xa48825  or          $s1, $a1, $a0
    ctx->pc = 0x278d74u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_278d78:
    // 0x278d78: 0x112240  sll         $a0, $s1, 9
    ctx->pc = 0x278d78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
label_278d7c:
    // 0x278d7c: 0x1000feb4  b           . + 4 + (-0x14C << 2)
label_278d80:
    if (ctx->pc == 0x278D80u) {
        ctx->pc = 0x278D80u;
            // 0x278d80: 0x649021  addu        $s2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->pc = 0x278D84u;
        goto label_278d84;
    }
    ctx->pc = 0x278D7Cu;
    {
        const bool branch_taken_0x278d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278D7Cu;
            // 0x278d80: 0x649021  addu        $s2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d7c) {
            ctx->pc = 0x278850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_278850;
        }
    }
    ctx->pc = 0x278D84u;
label_278d84:
    // 0x278d84: 0x0  nop
    ctx->pc = 0x278d84u;
    // NOP
label_278d88:
    // 0x278d88: 0x1000feb1  b           . + 4 + (-0x14F << 2)
label_278d8c:
    if (ctx->pc == 0x278D8Cu) {
        ctx->pc = 0x278D8Cu;
            // 0x278d8c: 0x26520005  addiu       $s2, $s2, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
        ctx->pc = 0x278D90u;
        goto label_278d90;
    }
    ctx->pc = 0x278D88u;
    {
        const bool branch_taken_0x278d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278D88u;
            // 0x278d8c: 0x26520005  addiu       $s2, $s2, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d88) {
            ctx->pc = 0x278850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_278850;
        }
    }
    ctx->pc = 0x278D90u;
label_278d90:
    // 0x278d90: 0x92460001  lbu         $a2, 0x1($s2)
    ctx->pc = 0x278d90u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_278d94:
    // 0x278d94: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x278d94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_278d98:
    // 0x278d98: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x278d98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_278d9c:
    // 0x278d9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x278d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_278da0:
    // 0x278da0: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x278da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_278da4:
    // 0x278da4: 0x852804  sllv        $a1, $a1, $a0
    ctx->pc = 0x278da4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_278da8:
    // 0x278da8: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x278da8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
label_278dac:
    // 0x278dac: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x278dacu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_278db0:
    // 0x278db0: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x278db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_278db4:
    // 0x278db4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x278db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_278db8:
    // 0x278db8: 0x852804  sllv        $a1, $a1, $a0
    ctx->pc = 0x278db8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_278dbc:
    // 0x278dbc: 0xaec50000  sw          $a1, 0x0($s6)
    ctx->pc = 0x278dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
label_278dc0:
    // 0x278dc0: 0x92460003  lbu         $a2, 0x3($s2)
    ctx->pc = 0x278dc0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_278dc4:
    // 0x278dc4: 0x8e650028  lw          $a1, 0x28($s3)
    ctx->pc = 0x278dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_278dc8:
    // 0x278dc8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x278dc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_278dcc:
    // 0x278dcc: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x278dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_278dd0:
    // 0x278dd0: 0x852804  sllv        $a1, $a1, $a0
    ctx->pc = 0x278dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_278dd4:
    // 0x278dd4: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x278dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
label_278dd8:
    // 0x278dd8: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x278dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_278ddc:
    // 0x278ddc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x278ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_278de0:
    // 0x278de0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x278de0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_278de4:
    // 0x278de4: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x278de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_278de8:
    // 0x278de8: 0x8e860020  lw          $a2, 0x20($s4)
    ctx->pc = 0x278de8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_278dec:
    // 0x278dec: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x278decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_278df0:
    // 0x278df0: 0xe42023  subu        $a0, $a3, $a0
    ctx->pc = 0x278df0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_278df4:
    // 0x278df4: 0x863007  srav        $a2, $a2, $a0
    ctx->pc = 0x278df4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
label_278df8:
    // 0x278df8: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x278df8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_278dfc:
    // 0x278dfc: 0x27a502c0  addiu       $a1, $sp, 0x2C0
    ctx->pc = 0x278dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_278e00:
    // 0x278e00: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x278e00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_278e04:
    // 0x278e04: 0x8e860024  lw          $a2, 0x24($s4)
    ctx->pc = 0x278e04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_278e08:
    // 0x278e08: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x278e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_278e0c:
    // 0x278e0c: 0x863007  srav        $a2, $a2, $a0
    ctx->pc = 0x278e0cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
label_278e10:
    // 0x278e10: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x278e10u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_278e14:
    // 0x278e14: 0x27a502c4  addiu       $a1, $sp, 0x2C4
    ctx->pc = 0x278e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 708));
label_278e18:
    // 0x278e18: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x278e18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_278e1c:
    // 0x278e1c: 0x8e860028  lw          $a2, 0x28($s4)
    ctx->pc = 0x278e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_278e20:
    // 0x278e20: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x278e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_278e24:
    // 0x278e24: 0x863007  srav        $a2, $a2, $a0
    ctx->pc = 0x278e24u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
label_278e28:
    // 0x278e28: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x278e28u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_278e2c:
    // 0x278e2c: 0x27a502c8  addiu       $a1, $sp, 0x2C8
    ctx->pc = 0x278e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
label_278e30:
    // 0x278e30: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x278e30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_278e34:
    // 0x278e34: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x278e34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_278e38:
    // 0x278e38: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x278e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_278e3c:
    // 0x278e3c: 0x663023  subu        $a2, $v1, $a2
    ctx->pc = 0x278e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_278e40:
    // 0x278e40: 0x852807  srav        $a1, $a1, $a0
    ctx->pc = 0x278e40u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_278e44:
    // 0x278e44: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x278e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_278e48:
    // 0x278e48: 0xafa502b0  sw          $a1, 0x2B0($sp)
    ctx->pc = 0x278e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 5));
label_278e4c:
    // 0x278e4c: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x278e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_278e50:
    // 0x278e50: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x278e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_278e54:
    // 0x278e54: 0x663023  subu        $a2, $v1, $a2
    ctx->pc = 0x278e54u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_278e58:
    // 0x278e58: 0x852807  srav        $a1, $a1, $a0
    ctx->pc = 0x278e58u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_278e5c:
    // 0x278e5c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x278e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_278e60:
    // 0x278e60: 0x27a502b4  addiu       $a1, $sp, 0x2B4
    ctx->pc = 0x278e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 692));
label_278e64:
    // 0x278e64: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x278e64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_278e68:
    // 0x278e68: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x278e68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_278e6c:
    // 0x278e6c: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x278e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_278e70:
    // 0x278e70: 0x663023  subu        $a2, $v1, $a2
    ctx->pc = 0x278e70u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_278e74:
    // 0x278e74: 0x851807  srav        $v1, $a1, $a0
    ctx->pc = 0x278e74u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_278e78:
    // 0x278e78: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x278e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_278e7c:
    // 0x278e7c: 0x27a302b8  addiu       $v1, $sp, 0x2B8
    ctx->pc = 0x278e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
label_278e80:
    // 0x278e80: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x278e80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_278e84:
    // 0x278e84: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x278e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_278e88:
    // 0x278e88: 0xafa302e4  sw          $v1, 0x2E4($sp)
    ctx->pc = 0x278e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 3));
label_278e8c:
    // 0x278e8c: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x278e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_278e90:
    // 0x278e90: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x278e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_278e94:
    // 0x278e94: 0x1000fe6e  b           . + 4 + (-0x192 << 2)
label_278e98:
    if (ctx->pc == 0x278E98u) {
        ctx->pc = 0x278E98u;
            // 0x278e98: 0x27b302b0  addiu       $s3, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->pc = 0x278E9Cu;
        goto label_278e9c;
    }
    ctx->pc = 0x278E94u;
    {
        const bool branch_taken_0x278e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278E94u;
            // 0x278e98: 0x27b302b0  addiu       $s3, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278e94) {
            ctx->pc = 0x278850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_278850;
        }
    }
    ctx->pc = 0x278E9Cu;
label_278e9c:
    // 0x278e9c: 0x0  nop
    ctx->pc = 0x278e9cu;
    // NOP
label_278ea0:
    // 0x278ea0: 0x27a302b0  addiu       $v1, $sp, 0x2B0
    ctx->pc = 0x278ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_278ea4:
    // 0x278ea4: 0x12630026  beq         $s3, $v1, . + 4 + (0x26 << 2)
label_278ea8:
    if (ctx->pc == 0x278EA8u) {
        ctx->pc = 0x278EA8u;
            // 0x278ea8: 0x92440001  lbu         $a0, 0x1($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->pc = 0x278EACu;
        goto label_278eac;
    }
    ctx->pc = 0x278EA4u;
    {
        const bool branch_taken_0x278ea4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x278EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278EA4u;
            // 0x278ea8: 0x92440001  lbu         $a0, 0x1($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ea4) {
            ctx->pc = 0x278F40u;
            goto label_278f40;
        }
    }
    ctx->pc = 0x278EACu;
label_278eac:
    // 0x278eac: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x278eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_278eb0:
    // 0x278eb0: 0xafa502b0  sw          $a1, 0x2B0($sp)
    ctx->pc = 0x278eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 5));
label_278eb4:
    // 0x278eb4: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x278eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_278eb8:
    // 0x278eb8: 0x27a502b4  addiu       $a1, $sp, 0x2B4
    ctx->pc = 0x278eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 692));
label_278ebc:
    // 0x278ebc: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x278ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_278ec0:
    // 0x278ec0: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x278ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_278ec4:
    // 0x278ec4: 0x27a502b8  addiu       $a1, $sp, 0x2B8
    ctx->pc = 0x278ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
label_278ec8:
    // 0x278ec8: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x278ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_278ecc:
    // 0x278ecc: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x278eccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_278ed0:
    // 0x278ed0: 0x27a502bc  addiu       $a1, $sp, 0x2BC
    ctx->pc = 0x278ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
label_278ed4:
    // 0x278ed4: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x278ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_278ed8:
    // 0x278ed8: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x278ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_278edc:
    // 0x278edc: 0x27a502c0  addiu       $a1, $sp, 0x2C0
    ctx->pc = 0x278edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_278ee0:
    // 0x278ee0: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x278ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_278ee4:
    // 0x278ee4: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x278ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_278ee8:
    // 0x278ee8: 0x27a502c4  addiu       $a1, $sp, 0x2C4
    ctx->pc = 0x278ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 708));
label_278eec:
    // 0x278eec: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x278eecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_278ef0:
    // 0x278ef0: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x278ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_278ef4:
    // 0x278ef4: 0x27a502c8  addiu       $a1, $sp, 0x2C8
    ctx->pc = 0x278ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
label_278ef8:
    // 0x278ef8: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x278ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_278efc:
    // 0x278efc: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x278efcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_278f00:
    // 0x278f00: 0x27a502cc  addiu       $a1, $sp, 0x2CC
    ctx->pc = 0x278f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 716));
label_278f04:
    // 0x278f04: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x278f04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_278f08:
    // 0x278f08: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x278f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_278f0c:
    // 0x278f0c: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x278f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
label_278f10:
    // 0x278f10: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x278f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_278f14:
    // 0x278f14: 0xaec50000  sw          $a1, 0x0($s6)
    ctx->pc = 0x278f14u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
label_278f18:
    // 0x278f18: 0x8e650028  lw          $a1, 0x28($s3)
    ctx->pc = 0x278f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_278f1c:
    // 0x278f1c: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x278f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
label_278f20:
    // 0x278f20: 0x8e65002c  lw          $a1, 0x2C($s3)
    ctx->pc = 0x278f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_278f24:
    // 0x278f24: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x278f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_278f28:
    // 0x278f28: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x278f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_278f2c:
    // 0x278f2c: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x278f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
label_278f30:
    // 0x278f30: 0xc6600034  lwc1        $f0, 0x34($s3)
    ctx->pc = 0x278f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278f34:
    // 0x278f34: 0x27a502e4  addiu       $a1, $sp, 0x2E4
    ctx->pc = 0x278f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 740));
label_278f38:
    // 0x278f38: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x278f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_278f3c:
    // 0x278f3c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x278f3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_278f40:
    // 0x278f40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x278f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_278f44:
    // 0x278f44: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x278f44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_278f48:
    // 0x278f48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x278f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_278f4c:
    // 0x278f4c: 0x1000fe40  b           . + 4 + (-0x1C0 << 2)
label_278f50:
    if (ctx->pc == 0x278F50u) {
        ctx->pc = 0x278F50u;
            // 0x278f50: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x278F54u;
        goto label_278f54;
    }
    ctx->pc = 0x278F4Cu;
    {
        const bool branch_taken_0x278f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278F4Cu;
            // 0x278f50: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f4c) {
            ctx->pc = 0x278850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_278850;
        }
    }
    ctx->pc = 0x278F54u;
label_278f54:
    // 0x278f54: 0x0  nop
    ctx->pc = 0x278f54u;
    // NOP
label_278f58:
    // 0x278f58: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x278f58u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_278f5c:
    // 0x278f5c: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x278f5cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_278f60:
    // 0x278f60: 0x27a302b0  addiu       $v1, $sp, 0x2B0
    ctx->pc = 0x278f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_278f64:
    // 0x278f64: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x278f64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_278f68:
    // 0x278f68: 0x12630027  beq         $s3, $v1, . + 4 + (0x27 << 2)
label_278f6c:
    if (ctx->pc == 0x278F6Cu) {
        ctx->pc = 0x278F6Cu;
            // 0x278f6c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->pc = 0x278F70u;
        goto label_278f70;
    }
    ctx->pc = 0x278F68u;
    {
        const bool branch_taken_0x278f68 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x278F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278F68u;
            // 0x278f6c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f68) {
            ctx->pc = 0x279008u;
            goto label_279008;
        }
    }
    ctx->pc = 0x278F70u;
label_278f70:
    // 0x278f70: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x278f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_278f74:
    // 0x278f74: 0xafa502b0  sw          $a1, 0x2B0($sp)
    ctx->pc = 0x278f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 5));
label_278f78:
    // 0x278f78: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x278f78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_278f7c:
    // 0x278f7c: 0x27a502b4  addiu       $a1, $sp, 0x2B4
    ctx->pc = 0x278f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 692));
label_278f80:
    // 0x278f80: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x278f80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_278f84:
    // 0x278f84: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x278f84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_278f88:
    // 0x278f88: 0x27a502b8  addiu       $a1, $sp, 0x2B8
    ctx->pc = 0x278f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
label_278f8c:
    // 0x278f8c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x278f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_278f90:
    // 0x278f90: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x278f90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_278f94:
    // 0x278f94: 0x27a502bc  addiu       $a1, $sp, 0x2BC
    ctx->pc = 0x278f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
label_278f98:
    // 0x278f98: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x278f98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_278f9c:
    // 0x278f9c: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x278f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_278fa0:
    // 0x278fa0: 0x27a502c0  addiu       $a1, $sp, 0x2C0
    ctx->pc = 0x278fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_278fa4:
    // 0x278fa4: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x278fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_278fa8:
    // 0x278fa8: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x278fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_278fac:
    // 0x278fac: 0x27a502c4  addiu       $a1, $sp, 0x2C4
    ctx->pc = 0x278facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 708));
label_278fb0:
    // 0x278fb0: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x278fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_278fb4:
    // 0x278fb4: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x278fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_278fb8:
    // 0x278fb8: 0x27a502c8  addiu       $a1, $sp, 0x2C8
    ctx->pc = 0x278fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
label_278fbc:
    // 0x278fbc: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x278fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_278fc0:
    // 0x278fc0: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x278fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_278fc4:
    // 0x278fc4: 0x27a502cc  addiu       $a1, $sp, 0x2CC
    ctx->pc = 0x278fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 716));
label_278fc8:
    // 0x278fc8: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x278fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_278fcc:
    // 0x278fcc: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x278fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_278fd0:
    // 0x278fd0: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x278fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
label_278fd4:
    // 0x278fd4: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x278fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_278fd8:
    // 0x278fd8: 0xaec50000  sw          $a1, 0x0($s6)
    ctx->pc = 0x278fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
label_278fdc:
    // 0x278fdc: 0x8e650028  lw          $a1, 0x28($s3)
    ctx->pc = 0x278fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_278fe0:
    // 0x278fe0: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x278fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
label_278fe4:
    // 0x278fe4: 0x8e65002c  lw          $a1, 0x2C($s3)
    ctx->pc = 0x278fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_278fe8:
    // 0x278fe8: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x278fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_278fec:
    // 0x278fec: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x278fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_278ff0:
    // 0x278ff0: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x278ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
label_278ff4:
    // 0x278ff4: 0xc6600034  lwc1        $f0, 0x34($s3)
    ctx->pc = 0x278ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278ff8:
    // 0x278ff8: 0x27a502e4  addiu       $a1, $sp, 0x2E4
    ctx->pc = 0x278ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 740));
label_278ffc:
    // 0x278ffc: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x278ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_279000:
    // 0x279000: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x279000u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_279004:
    // 0x279004: 0x0  nop
    ctx->pc = 0x279004u;
    // NOP
label_279008:
    // 0x279008: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x279008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27900c:
    // 0x27900c: 0x26520003  addiu       $s2, $s2, 0x3
    ctx->pc = 0x27900cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
label_279010:
    // 0x279010: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x279010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_279014:
    // 0x279014: 0x1000fe0e  b           . + 4 + (-0x1F2 << 2)
label_279018:
    if (ctx->pc == 0x279018u) {
        ctx->pc = 0x279018u;
            // 0x279018: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x27901Cu;
        goto label_27901c;
    }
    ctx->pc = 0x279014u;
    {
        const bool branch_taken_0x279014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279014u;
            // 0x279018: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279014) {
            ctx->pc = 0x278850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_278850;
        }
    }
    ctx->pc = 0x27901Cu;
label_27901c:
    // 0x27901c: 0x0  nop
    ctx->pc = 0x27901cu;
    // NOP
label_279020:
    // 0x279020: 0x92470001  lbu         $a3, 0x1($s2)
    ctx->pc = 0x279020u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_279024:
    // 0x279024: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x279024u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_279028:
    // 0x279028: 0x27a302b0  addiu       $v1, $sp, 0x2B0
    ctx->pc = 0x279028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_27902c:
    // 0x27902c: 0x92450003  lbu         $a1, 0x3($s2)
    ctx->pc = 0x27902cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_279030:
    // 0x279030: 0x92440004  lbu         $a0, 0x4($s2)
    ctx->pc = 0x279030u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_279034:
    // 0x279034: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x279034u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
label_279038:
    // 0x279038: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x279038u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_27903c:
    // 0x27903c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x27903cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_279040:
    // 0x279040: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x279040u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_279044:
    // 0x279044: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x279044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_279048:
    // 0x279048: 0x12630027  beq         $s3, $v1, . + 4 + (0x27 << 2)
label_27904c:
    if (ctx->pc == 0x27904Cu) {
        ctx->pc = 0x27904Cu;
            // 0x27904c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->pc = 0x279050u;
        goto label_279050;
    }
    ctx->pc = 0x279048u;
    {
        const bool branch_taken_0x279048 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x27904Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279048u;
            // 0x27904c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279048) {
            ctx->pc = 0x2790E8u;
            goto label_2790e8;
        }
    }
    ctx->pc = 0x279050u;
label_279050:
    // 0x279050: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x279050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_279054:
    // 0x279054: 0xafa502b0  sw          $a1, 0x2B0($sp)
    ctx->pc = 0x279054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 5));
label_279058:
    // 0x279058: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x279058u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_27905c:
    // 0x27905c: 0x27a502b4  addiu       $a1, $sp, 0x2B4
    ctx->pc = 0x27905cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 692));
label_279060:
    // 0x279060: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x279060u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_279064:
    // 0x279064: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x279064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_279068:
    // 0x279068: 0x27a502b8  addiu       $a1, $sp, 0x2B8
    ctx->pc = 0x279068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
label_27906c:
    // 0x27906c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x27906cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_279070:
    // 0x279070: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x279070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_279074:
    // 0x279074: 0x27a502bc  addiu       $a1, $sp, 0x2BC
    ctx->pc = 0x279074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
label_279078:
    // 0x279078: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x279078u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_27907c:
    // 0x27907c: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x27907cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_279080:
    // 0x279080: 0x27a502c0  addiu       $a1, $sp, 0x2C0
    ctx->pc = 0x279080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_279084:
    // 0x279084: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x279084u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_279088:
    // 0x279088: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x279088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_27908c:
    // 0x27908c: 0x27a502c4  addiu       $a1, $sp, 0x2C4
    ctx->pc = 0x27908cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 708));
label_279090:
    // 0x279090: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x279090u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_279094:
    // 0x279094: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x279094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_279098:
    // 0x279098: 0x27a502c8  addiu       $a1, $sp, 0x2C8
    ctx->pc = 0x279098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
label_27909c:
    // 0x27909c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x27909cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_2790a0:
    // 0x2790a0: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x2790a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_2790a4:
    // 0x2790a4: 0x27a502cc  addiu       $a1, $sp, 0x2CC
    ctx->pc = 0x2790a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 716));
label_2790a8:
    // 0x2790a8: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x2790a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_2790ac:
    // 0x2790ac: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x2790acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_2790b0:
    // 0x2790b0: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x2790b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
label_2790b4:
    // 0x2790b4: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x2790b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_2790b8:
    // 0x2790b8: 0xaec50000  sw          $a1, 0x0($s6)
    ctx->pc = 0x2790b8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
label_2790bc:
    // 0x2790bc: 0x8e650028  lw          $a1, 0x28($s3)
    ctx->pc = 0x2790bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_2790c0:
    // 0x2790c0: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x2790c0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
label_2790c4:
    // 0x2790c4: 0x8e65002c  lw          $a1, 0x2C($s3)
    ctx->pc = 0x2790c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_2790c8:
    // 0x2790c8: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2790c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_2790cc:
    // 0x2790cc: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x2790ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_2790d0:
    // 0x2790d0: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x2790d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
label_2790d4:
    // 0x2790d4: 0xc6600034  lwc1        $f0, 0x34($s3)
    ctx->pc = 0x2790d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2790d8:
    // 0x2790d8: 0x27a502e4  addiu       $a1, $sp, 0x2E4
    ctx->pc = 0x2790d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 740));
label_2790dc:
    // 0x2790dc: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2790dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_2790e0:
    // 0x2790e0: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x2790e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2790e4:
    // 0x2790e4: 0x0  nop
    ctx->pc = 0x2790e4u;
    // NOP
label_2790e8:
    // 0x2790e8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2790e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_2790ec:
    // 0x2790ec: 0x1000fdd8  b           . + 4 + (-0x228 << 2)
label_2790f0:
    if (ctx->pc == 0x2790F0u) {
        ctx->pc = 0x2790F0u;
            // 0x2790f0: 0x26520005  addiu       $s2, $s2, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
        ctx->pc = 0x2790F4u;
        goto label_2790f4;
    }
    ctx->pc = 0x2790ECu;
    {
        const bool branch_taken_0x2790ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2790F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2790ECu;
            // 0x2790f0: 0x26520005  addiu       $s2, $s2, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2790ec) {
            ctx->pc = 0x278850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_278850;
        }
    }
    ctx->pc = 0x2790F4u;
label_2790f4:
    // 0x2790f4: 0x0  nop
    ctx->pc = 0x2790f4u;
    // NOP
label_2790f8:
    // 0x2790f8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2790fc:
    if (ctx->pc == 0x2790FCu) {
        ctx->pc = 0x2790FCu;
            // 0x2790fc: 0x92460001  lbu         $a2, 0x1($s2) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->pc = 0x279100u;
        goto label_279100;
    }
    ctx->pc = 0x2790F8u;
    {
        const bool branch_taken_0x2790f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2790FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2790F8u;
            // 0x2790fc: 0x92460001  lbu         $a2, 0x1($s2) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2790f8) {
            ctx->pc = 0x279170u;
            goto label_279170;
        }
    }
    ctx->pc = 0x279100u;
label_279100:
    // 0x279100: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x279100u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_279104:
    // 0x279104: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x279104u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_279108:
    // 0x279108: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x279108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_27910c:
    // 0x27910c: 0x10000018  b           . + 4 + (0x18 << 2)
label_279110:
    if (ctx->pc == 0x279110u) {
        ctx->pc = 0x279110u;
            // 0x279110: 0x833021  addu        $a2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x279114u;
        goto label_279114;
    }
    ctx->pc = 0x27910Cu;
    {
        const bool branch_taken_0x27910c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27910Cu;
            // 0x279110: 0x833021  addu        $a2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27910c) {
            ctx->pc = 0x279170u;
            goto label_279170;
        }
    }
    ctx->pc = 0x279114u;
label_279114:
    // 0x279114: 0x0  nop
    ctx->pc = 0x279114u;
    // NOP
label_279118:
    // 0x279118: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x279118u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_27911c:
    // 0x27911c: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x27911cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_279120:
    // 0x279120: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x279120u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_279124:
    // 0x279124: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x279124u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_279128:
    // 0x279128: 0x53400  sll         $a2, $a1, 16
    ctx->pc = 0x279128u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_27912c:
    // 0x27912c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x27912cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_279130:
    // 0x279130: 0x1000000f  b           . + 4 + (0xF << 2)
label_279134:
    if (ctx->pc == 0x279134u) {
        ctx->pc = 0x279134u;
            // 0x279134: 0xc43021  addu        $a2, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->pc = 0x279138u;
        goto label_279138;
    }
    ctx->pc = 0x279130u;
    {
        const bool branch_taken_0x279130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279130u;
            // 0x279134: 0xc43021  addu        $a2, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279130) {
            ctx->pc = 0x279170u;
            goto label_279170;
        }
    }
    ctx->pc = 0x279138u;
label_279138:
    // 0x279138: 0x92460001  lbu         $a2, 0x1($s2)
    ctx->pc = 0x279138u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_27913c:
    // 0x27913c: 0x92450002  lbu         $a1, 0x2($s2)
    ctx->pc = 0x27913cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_279140:
    // 0x279140: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x279140u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_279144:
    // 0x279144: 0x92440004  lbu         $a0, 0x4($s2)
    ctx->pc = 0x279144u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_279148:
    // 0x279148: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x279148u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
label_27914c:
    // 0x27914c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x27914cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_279150:
    // 0x279150: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x279150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_279154:
    // 0x279154: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x279154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_279158:
    // 0x279158: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x279158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_27915c:
    // 0x27915c: 0x10000004  b           . + 4 + (0x4 << 2)
label_279160:
    if (ctx->pc == 0x279160u) {
        ctx->pc = 0x279160u;
            // 0x279160: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->pc = 0x279164u;
        goto label_279164;
    }
    ctx->pc = 0x27915Cu;
    {
        const bool branch_taken_0x27915c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27915Cu;
            // 0x279160: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27915c) {
            ctx->pc = 0x279170u;
            goto label_279170;
        }
    }
    ctx->pc = 0x279164u;
label_279164:
    // 0x279164: 0x0  nop
    ctx->pc = 0x279164u;
    // NOP
label_279168:
    // 0x279168: 0x2486ffd0  addiu       $a2, $a0, -0x30
    ctx->pc = 0x279168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_27916c:
    // 0x27916c: 0x0  nop
    ctx->pc = 0x27916cu;
    // NOP
label_279170:
    // 0x279170: 0x8e65002c  lw          $a1, 0x2C($s3)
    ctx->pc = 0x279170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_279174:
    // 0x279174: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x279174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_279178:
    // 0x279178: 0x112200  sll         $a0, $s1, 8
    ctx->pc = 0x279178u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 8));
label_27917c:
    // 0x27917c: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x27917cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_279180:
    // 0x279180: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x279180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_279184:
    // 0x279184: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x279184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_279188:
    // 0x279188: 0xc38825  or          $s1, $a2, $v1
    ctx->pc = 0x279188u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_27918c:
    // 0x27918c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x27918cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_279190:
    // 0x279190: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x279190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_279194:
    // 0x279194: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x279194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_279198:
    // 0x279198: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x279198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_27919c:
    // 0x27919c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_2791a0:
    if (ctx->pc == 0x2791A0u) {
        ctx->pc = 0x2791A0u;
            // 0x2791a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2791A4u;
        goto label_2791a4;
    }
    ctx->pc = 0x27919Cu;
    {
        const bool branch_taken_0x27919c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2791A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27919Cu;
            // 0x2791a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27919c) {
            ctx->pc = 0x2791B0u;
            goto label_2791b0;
        }
    }
    ctx->pc = 0x2791A4u;
label_2791a4:
    // 0x2791a4: 0xc0a728c  jal         func_29CA30
label_2791a8:
    if (ctx->pc == 0x2791A8u) {
        ctx->pc = 0x2791A8u;
            // 0x2791a8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2791ACu;
        goto label_2791ac;
    }
    ctx->pc = 0x2791A4u;
    SET_GPR_U32(ctx, 31, 0x2791ACu);
    ctx->pc = 0x2791A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2791A4u;
            // 0x2791a8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2791ACu; }
        if (ctx->pc != 0x2791ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2791ACu; }
        if (ctx->pc != 0x2791ACu) { return; }
    }
    ctx->pc = 0x2791ACu;
label_2791ac:
    // 0x2791ac: 0x0  nop
    ctx->pc = 0x2791acu;
    // NOP
label_2791b0:
    // 0x2791b0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2791b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2791b4:
    // 0x2791b4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2791b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2791b8:
    // 0x2791b8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2791b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_2791bc:
    // 0x2791bc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2791bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2791c0:
    // 0x2791c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2791c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2791c4:
    // 0x2791c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2791c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2791c8:
    // 0x2791c8: 0x1000006b  b           . + 4 + (0x6B << 2)
label_2791cc:
    if (ctx->pc == 0x2791CCu) {
        ctx->pc = 0x2791CCu;
            // 0x2791cc: 0xac710000  sw          $s1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
        ctx->pc = 0x2791D0u;
        goto label_2791d0;
    }
    ctx->pc = 0x2791C8u;
    {
        const bool branch_taken_0x2791c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2791CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2791C8u;
            // 0x2791cc: 0xac710000  sw          $s1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2791c8) {
            ctx->pc = 0x279378u;
            goto label_279378;
        }
    }
    ctx->pc = 0x2791D0u;
label_2791d0:
    // 0x2791d0: 0x2483ffa0  addiu       $v1, $a0, -0x60
    ctx->pc = 0x2791d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967200));
label_2791d4:
    // 0x2791d4: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x2791d4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2791d8:
    // 0x2791d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2791d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2791dc:
    // 0x2791dc: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2791dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_2791e0:
    // 0x2791e0: 0xac6402e4  sw          $a0, 0x2E4($v1)
    ctx->pc = 0x2791e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 740), GPR_U32(ctx, 4));
label_2791e4:
    // 0x2791e4: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x2791e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_2791e8:
    // 0x2791e8: 0x27a302e4  addiu       $v1, $sp, 0x2E4
    ctx->pc = 0x2791e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 740));
label_2791ec:
    // 0x2791ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2791ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2791f0:
    // 0x2791f0: 0x27a302b0  addiu       $v1, $sp, 0x2B0
    ctx->pc = 0x2791f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_2791f4:
    // 0x2791f4: 0x12630026  beq         $s3, $v1, . + 4 + (0x26 << 2)
label_2791f8:
    if (ctx->pc == 0x2791F8u) {
        ctx->pc = 0x2791FCu;
        goto label_2791fc;
    }
    ctx->pc = 0x2791F4u;
    {
        const bool branch_taken_0x2791f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x2791f4) {
            ctx->pc = 0x279290u;
            goto label_279290;
        }
    }
    ctx->pc = 0x2791FCu;
label_2791fc:
    // 0x2791fc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2791fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_279200:
    // 0x279200: 0xafa502b0  sw          $a1, 0x2B0($sp)
    ctx->pc = 0x279200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 5));
label_279204:
    // 0x279204: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x279204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_279208:
    // 0x279208: 0x27a502b4  addiu       $a1, $sp, 0x2B4
    ctx->pc = 0x279208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 692));
label_27920c:
    // 0x27920c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x27920cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_279210:
    // 0x279210: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x279210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_279214:
    // 0x279214: 0x27a502b8  addiu       $a1, $sp, 0x2B8
    ctx->pc = 0x279214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
label_279218:
    // 0x279218: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x279218u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_27921c:
    // 0x27921c: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x27921cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_279220:
    // 0x279220: 0x27a502bc  addiu       $a1, $sp, 0x2BC
    ctx->pc = 0x279220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
label_279224:
    // 0x279224: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x279224u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_279228:
    // 0x279228: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x279228u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_27922c:
    // 0x27922c: 0x27a502c0  addiu       $a1, $sp, 0x2C0
    ctx->pc = 0x27922cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_279230:
    // 0x279230: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x279230u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_279234:
    // 0x279234: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x279234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_279238:
    // 0x279238: 0x27a502c4  addiu       $a1, $sp, 0x2C4
    ctx->pc = 0x279238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 708));
label_27923c:
    // 0x27923c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x27923cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_279240:
    // 0x279240: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x279240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_279244:
    // 0x279244: 0x27a502c8  addiu       $a1, $sp, 0x2C8
    ctx->pc = 0x279244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
label_279248:
    // 0x279248: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x279248u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_27924c:
    // 0x27924c: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x27924cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_279250:
    // 0x279250: 0x27a502cc  addiu       $a1, $sp, 0x2CC
    ctx->pc = 0x279250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 716));
label_279254:
    // 0x279254: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x279254u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_279258:
    // 0x279258: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x279258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_27925c:
    // 0x27925c: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x27925cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
label_279260:
    // 0x279260: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x279260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_279264:
    // 0x279264: 0xaec50000  sw          $a1, 0x0($s6)
    ctx->pc = 0x279264u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
label_279268:
    // 0x279268: 0x8e650028  lw          $a1, 0x28($s3)
    ctx->pc = 0x279268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_27926c:
    // 0x27926c: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x27926cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
label_279270:
    // 0x279270: 0x8e65002c  lw          $a1, 0x2C($s3)
    ctx->pc = 0x279270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_279274:
    // 0x279274: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x279274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_279278:
    // 0x279278: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x279278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_27927c:
    // 0x27927c: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x27927cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
label_279280:
    // 0x279280: 0xc6600034  lwc1        $f0, 0x34($s3)
    ctx->pc = 0x279280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279284:
    // 0x279284: 0x27a502e4  addiu       $a1, $sp, 0x2E4
    ctx->pc = 0x279284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 740));
label_279288:
    // 0x279288: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x279288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_27928c:
    // 0x27928c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x27928cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_279290:
    // 0x279290: 0x27a302e4  addiu       $v1, $sp, 0x2E4
    ctx->pc = 0x279290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 740));
label_279294:
    // 0x279294: 0x1000fd6e  b           . + 4 + (-0x292 << 2)
label_279298:
    if (ctx->pc == 0x279298u) {
        ctx->pc = 0x279298u;
            // 0x279298: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x27929Cu;
        goto label_27929c;
    }
    ctx->pc = 0x279294u;
    {
        const bool branch_taken_0x279294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279294u;
            // 0x279298: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279294) {
            ctx->pc = 0x278850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_278850;
        }
    }
    ctx->pc = 0x27929Cu;
label_27929c:
    // 0x27929c: 0x0  nop
    ctx->pc = 0x27929cu;
    // NOP
label_2792a0:
    // 0x2792a0: 0x2483ff9c  addiu       $v1, $a0, -0x64
    ctx->pc = 0x2792a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
label_2792a4:
    // 0x2792a4: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x2792a4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2792a8:
    // 0x2792a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2792a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2792ac:
    // 0x2792ac: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x2792acu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2792b0:
    // 0x2792b0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2792b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_2792b4:
    // 0x2792b4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x2792b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_2792b8:
    // 0x2792b8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2792b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2792bc:
    // 0x2792bc: 0x26520003  addiu       $s2, $s2, 0x3
    ctx->pc = 0x2792bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
label_2792c0:
    // 0x2792c0: 0x1000ffc9  b           . + 4 + (-0x37 << 2)
label_2792c4:
    if (ctx->pc == 0x2792C4u) {
        ctx->pc = 0x2792C4u;
            // 0x2792c4: 0xac6402e4  sw          $a0, 0x2E4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 740), GPR_U32(ctx, 4));
        ctx->pc = 0x2792C8u;
        goto label_2792c8;
    }
    ctx->pc = 0x2792C0u;
    {
        const bool branch_taken_0x2792c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2792C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2792C0u;
            // 0x2792c4: 0xac6402e4  sw          $a0, 0x2E4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 740), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2792c0) {
            ctx->pc = 0x2791E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2791e8;
        }
    }
    ctx->pc = 0x2792C8u;
label_2792c8:
    // 0x2792c8: 0x92470001  lbu         $a3, 0x1($s2)
    ctx->pc = 0x2792c8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2792cc:
    // 0x2792cc: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x2792ccu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2792d0:
    // 0x2792d0: 0x2483ff98  addiu       $v1, $a0, -0x68
    ctx->pc = 0x2792d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967192));
label_2792d4:
    // 0x2792d4: 0x92450003  lbu         $a1, 0x3($s2)
    ctx->pc = 0x2792d4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_2792d8:
    // 0x2792d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2792d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2792dc:
    // 0x2792dc: 0x92440004  lbu         $a0, 0x4($s2)
    ctx->pc = 0x2792dcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_2792e0:
    // 0x2792e0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2792e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_2792e4:
    // 0x2792e4: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x2792e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
label_2792e8:
    // 0x2792e8: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2792e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_2792ec:
    // 0x2792ec: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x2792ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_2792f0:
    // 0x2792f0: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x2792f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_2792f4:
    // 0x2792f4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2792f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2792f8:
    // 0x2792f8: 0x26520005  addiu       $s2, $s2, 0x5
    ctx->pc = 0x2792f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
label_2792fc:
    // 0x2792fc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2792fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_279300:
    // 0x279300: 0x1000ffb9  b           . + 4 + (-0x47 << 2)
label_279304:
    if (ctx->pc == 0x279304u) {
        ctx->pc = 0x279304u;
            // 0x279304: 0xac6402e4  sw          $a0, 0x2E4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 740), GPR_U32(ctx, 4));
        ctx->pc = 0x279308u;
        goto label_279308;
    }
    ctx->pc = 0x279300u;
    {
        const bool branch_taken_0x279300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279300u;
            // 0x279304: 0xac6402e4  sw          $a0, 0x2E4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 740), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279300) {
            ctx->pc = 0x2791E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2791e8;
        }
    }
    ctx->pc = 0x279308u;
label_279308:
    // 0x279308: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x279308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_27930c:
    // 0x27930c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x27930cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_279310:
    // 0x279310: 0xc0a7214  jal         func_29C850
label_279314:
    if (ctx->pc == 0x279314u) {
        ctx->pc = 0x279314u;
            // 0x279314: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x279318u;
        goto label_279318;
    }
    ctx->pc = 0x279310u;
    SET_GPR_U32(ctx, 31, 0x279318u);
    ctx->pc = 0x279314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279310u;
            // 0x279314: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C850u;
    if (runtime->hasFunction(0x29C850u)) {
        auto targetFn = runtime->lookupFunction(0x29C850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279318u; }
        if (ctx->pc != 0x279318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C850_0x29c850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279318u; }
        if (ctx->pc != 0x279318u) { return; }
    }
    ctx->pc = 0x279318u;
label_279318:
    // 0x279318: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x279318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_27931c:
    // 0x27931c: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x27931cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_279320:
    // 0x279320: 0xc0a7fc0  jal         func_29FF00
label_279324:
    if (ctx->pc == 0x279324u) {
        ctx->pc = 0x279324u;
            // 0x279324: 0x24a5d2d0  addiu       $a1, $a1, -0x2D30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955728));
        ctx->pc = 0x279328u;
        goto label_279328;
    }
    ctx->pc = 0x279320u;
    SET_GPR_U32(ctx, 31, 0x279328u);
    ctx->pc = 0x279324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279320u;
            // 0x279324: 0x24a5d2d0  addiu       $a1, $a1, -0x2D30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FF00u;
    if (runtime->hasFunction(0x29FF00u)) {
        auto targetFn = runtime->lookupFunction(0x29FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279328u; }
        if (ctx->pc != 0x279328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FF00_0x29ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279328u; }
        if (ctx->pc != 0x279328u) { return; }
    }
    ctx->pc = 0x279328u;
label_279328:
    // 0x279328: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x279328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27932c:
    // 0x27932c: 0x3c021298  lui         $v0, 0x1298
    ctx->pc = 0x27932cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4760 << 16));
label_279330:
    // 0x279330: 0x8c24ea18  lw          $a0, -0x15E8($at)
    ctx->pc = 0x279330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961688)));
label_279334:
    // 0x279334: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x279334u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
label_279338:
    // 0x279338: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x279338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_27933c:
    // 0x27933c: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x27933cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_279340:
    // 0x279340: 0x3446fedd  ori         $a2, $v0, 0xFEDD
    ctx->pc = 0x279340u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65245);
label_279344:
    // 0x279344: 0x2508d370  addiu       $t0, $t0, -0x2C90
    ctx->pc = 0x279344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955888));
label_279348:
    // 0x279348: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x279348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27934c:
    // 0x27934c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x27934cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_279350:
    // 0x279350: 0x320f809  jalr        $t9
label_279354:
    if (ctx->pc == 0x279354u) {
        ctx->pc = 0x279354u;
            // 0x279354: 0x240901a6  addiu       $t1, $zero, 0x1A6 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 422));
        ctx->pc = 0x279358u;
        goto label_279358;
    }
    ctx->pc = 0x279350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x279358u);
        ctx->pc = 0x279354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279350u;
            // 0x279354: 0x240901a6  addiu       $t1, $zero, 0x1A6 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 422));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x279358u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x279358u; }
            if (ctx->pc != 0x279358u) { return; }
        }
        }
    }
    ctx->pc = 0x279358u;
label_279358:
    // 0x279358: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x279358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_27935c:
    // 0x27935c: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x27935cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_279360:
    // 0x279360: 0x2442e030  addiu       $v0, $v0, -0x1FD0
    ctx->pc = 0x279360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959152));
label_279364:
    // 0x279364: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x279364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_279368:
    // 0x279368: 0xc0a7f78  jal         func_29FDE0
label_27936c:
    if (ctx->pc == 0x27936Cu) {
        ctx->pc = 0x27936Cu;
            // 0x27936c: 0xafa202f0  sw          $v0, 0x2F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 2));
        ctx->pc = 0x279370u;
        goto label_279370;
    }
    ctx->pc = 0x279368u;
    SET_GPR_U32(ctx, 31, 0x279370u);
    ctx->pc = 0x27936Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279368u;
            // 0x27936c: 0xafa202f0  sw          $v0, 0x2F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FDE0u;
    if (runtime->hasFunction(0x29FDE0u)) {
        auto targetFn = runtime->lookupFunction(0x29FDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279370u; }
        if (ctx->pc != 0x279370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FDE0_0x29fde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279370u; }
        if (ctx->pc != 0x279370u) { return; }
    }
    ctx->pc = 0x279370u;
label_279370:
    // 0x279370: 0x1000fd37  b           . + 4 + (-0x2C9 << 2)
label_279374:
    if (ctx->pc == 0x279374u) {
        ctx->pc = 0x279378u;
        goto label_279378;
    }
    ctx->pc = 0x279370u;
    {
        const bool branch_taken_0x279370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279370) {
            ctx->pc = 0x278850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_278850;
        }
    }
    ctx->pc = 0x279378u;
label_279378:
    // 0x279378: 0x10000007  b           . + 4 + (0x7 << 2)
label_27937c:
    if (ctx->pc == 0x27937Cu) {
        ctx->pc = 0x279380u;
        goto label_279380;
    }
    ctx->pc = 0x279378u;
    {
        const bool branch_taken_0x279378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279378) {
            ctx->pc = 0x279398u;
            goto label_279398;
        }
    }
    ctx->pc = 0x279380u;
label_279380:
    // 0x279380: 0x27b502d0  addiu       $s5, $sp, 0x2D0
    ctx->pc = 0x279380u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_279384:
    // 0x279384: 0x27b602d4  addiu       $s6, $sp, 0x2D4
    ctx->pc = 0x279384u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 724));
label_279388:
    // 0x279388: 0x27b702d8  addiu       $s7, $sp, 0x2D8
    ctx->pc = 0x279388u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 728));
label_27938c:
    // 0x27938c: 0x27be02e0  addiu       $fp, $sp, 0x2E0
    ctx->pc = 0x27938cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_279390:
    // 0x279390: 0x1000fd2f  b           . + 4 + (-0x2D1 << 2)
label_279394:
    if (ctx->pc == 0x279394u) {
        ctx->pc = 0x279394u;
            // 0x279394: 0x27b002dc  addiu       $s0, $sp, 0x2DC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 732));
        ctx->pc = 0x279398u;
        goto label_279398;
    }
    ctx->pc = 0x279390u;
    {
        const bool branch_taken_0x279390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279390u;
            // 0x279394: 0x27b002dc  addiu       $s0, $sp, 0x2DC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 732));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279390) {
            ctx->pc = 0x278850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_278850;
        }
    }
    ctx->pc = 0x279398u;
label_279398:
    // 0x279398: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x279398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_27939c:
    // 0x27939c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x27939cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2793a0:
    // 0x2793a0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2793a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2793a4:
    // 0x2793a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2793a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2793a8:
    // 0x2793a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2793a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2793ac:
    // 0x2793ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2793acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2793b0:
    // 0x2793b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2793b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2793b4:
    // 0x2793b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2793b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2793b8:
    // 0x2793b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2793b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2793bc:
    // 0x2793bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2793bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2793c0:
    // 0x2793c0: 0x3e00008  jr          $ra
label_2793c4:
    if (ctx->pc == 0x2793C4u) {
        ctx->pc = 0x2793C4u;
            // 0x2793c4: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->pc = 0x2793C8u;
        goto label_2793c8;
    }
    ctx->pc = 0x2793C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2793C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2793C0u;
            // 0x2793c4: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2793C8u;
label_2793c8:
    // 0x2793c8: 0x0  nop
    ctx->pc = 0x2793c8u;
    // NOP
label_2793cc:
    // 0x2793cc: 0x0  nop
    ctx->pc = 0x2793ccu;
    // NOP
}
