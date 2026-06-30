#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005477B0
// Address: 0x5477b0 - 0x548260
void sub_005477B0_0x5477b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005477B0_0x5477b0");
#endif

    switch (ctx->pc) {
        case 0x5477b0u: goto label_5477b0;
        case 0x5477b4u: goto label_5477b4;
        case 0x5477b8u: goto label_5477b8;
        case 0x5477bcu: goto label_5477bc;
        case 0x5477c0u: goto label_5477c0;
        case 0x5477c4u: goto label_5477c4;
        case 0x5477c8u: goto label_5477c8;
        case 0x5477ccu: goto label_5477cc;
        case 0x5477d0u: goto label_5477d0;
        case 0x5477d4u: goto label_5477d4;
        case 0x5477d8u: goto label_5477d8;
        case 0x5477dcu: goto label_5477dc;
        case 0x5477e0u: goto label_5477e0;
        case 0x5477e4u: goto label_5477e4;
        case 0x5477e8u: goto label_5477e8;
        case 0x5477ecu: goto label_5477ec;
        case 0x5477f0u: goto label_5477f0;
        case 0x5477f4u: goto label_5477f4;
        case 0x5477f8u: goto label_5477f8;
        case 0x5477fcu: goto label_5477fc;
        case 0x547800u: goto label_547800;
        case 0x547804u: goto label_547804;
        case 0x547808u: goto label_547808;
        case 0x54780cu: goto label_54780c;
        case 0x547810u: goto label_547810;
        case 0x547814u: goto label_547814;
        case 0x547818u: goto label_547818;
        case 0x54781cu: goto label_54781c;
        case 0x547820u: goto label_547820;
        case 0x547824u: goto label_547824;
        case 0x547828u: goto label_547828;
        case 0x54782cu: goto label_54782c;
        case 0x547830u: goto label_547830;
        case 0x547834u: goto label_547834;
        case 0x547838u: goto label_547838;
        case 0x54783cu: goto label_54783c;
        case 0x547840u: goto label_547840;
        case 0x547844u: goto label_547844;
        case 0x547848u: goto label_547848;
        case 0x54784cu: goto label_54784c;
        case 0x547850u: goto label_547850;
        case 0x547854u: goto label_547854;
        case 0x547858u: goto label_547858;
        case 0x54785cu: goto label_54785c;
        case 0x547860u: goto label_547860;
        case 0x547864u: goto label_547864;
        case 0x547868u: goto label_547868;
        case 0x54786cu: goto label_54786c;
        case 0x547870u: goto label_547870;
        case 0x547874u: goto label_547874;
        case 0x547878u: goto label_547878;
        case 0x54787cu: goto label_54787c;
        case 0x547880u: goto label_547880;
        case 0x547884u: goto label_547884;
        case 0x547888u: goto label_547888;
        case 0x54788cu: goto label_54788c;
        case 0x547890u: goto label_547890;
        case 0x547894u: goto label_547894;
        case 0x547898u: goto label_547898;
        case 0x54789cu: goto label_54789c;
        case 0x5478a0u: goto label_5478a0;
        case 0x5478a4u: goto label_5478a4;
        case 0x5478a8u: goto label_5478a8;
        case 0x5478acu: goto label_5478ac;
        case 0x5478b0u: goto label_5478b0;
        case 0x5478b4u: goto label_5478b4;
        case 0x5478b8u: goto label_5478b8;
        case 0x5478bcu: goto label_5478bc;
        case 0x5478c0u: goto label_5478c0;
        case 0x5478c4u: goto label_5478c4;
        case 0x5478c8u: goto label_5478c8;
        case 0x5478ccu: goto label_5478cc;
        case 0x5478d0u: goto label_5478d0;
        case 0x5478d4u: goto label_5478d4;
        case 0x5478d8u: goto label_5478d8;
        case 0x5478dcu: goto label_5478dc;
        case 0x5478e0u: goto label_5478e0;
        case 0x5478e4u: goto label_5478e4;
        case 0x5478e8u: goto label_5478e8;
        case 0x5478ecu: goto label_5478ec;
        case 0x5478f0u: goto label_5478f0;
        case 0x5478f4u: goto label_5478f4;
        case 0x5478f8u: goto label_5478f8;
        case 0x5478fcu: goto label_5478fc;
        case 0x547900u: goto label_547900;
        case 0x547904u: goto label_547904;
        case 0x547908u: goto label_547908;
        case 0x54790cu: goto label_54790c;
        case 0x547910u: goto label_547910;
        case 0x547914u: goto label_547914;
        case 0x547918u: goto label_547918;
        case 0x54791cu: goto label_54791c;
        case 0x547920u: goto label_547920;
        case 0x547924u: goto label_547924;
        case 0x547928u: goto label_547928;
        case 0x54792cu: goto label_54792c;
        case 0x547930u: goto label_547930;
        case 0x547934u: goto label_547934;
        case 0x547938u: goto label_547938;
        case 0x54793cu: goto label_54793c;
        case 0x547940u: goto label_547940;
        case 0x547944u: goto label_547944;
        case 0x547948u: goto label_547948;
        case 0x54794cu: goto label_54794c;
        case 0x547950u: goto label_547950;
        case 0x547954u: goto label_547954;
        case 0x547958u: goto label_547958;
        case 0x54795cu: goto label_54795c;
        case 0x547960u: goto label_547960;
        case 0x547964u: goto label_547964;
        case 0x547968u: goto label_547968;
        case 0x54796cu: goto label_54796c;
        case 0x547970u: goto label_547970;
        case 0x547974u: goto label_547974;
        case 0x547978u: goto label_547978;
        case 0x54797cu: goto label_54797c;
        case 0x547980u: goto label_547980;
        case 0x547984u: goto label_547984;
        case 0x547988u: goto label_547988;
        case 0x54798cu: goto label_54798c;
        case 0x547990u: goto label_547990;
        case 0x547994u: goto label_547994;
        case 0x547998u: goto label_547998;
        case 0x54799cu: goto label_54799c;
        case 0x5479a0u: goto label_5479a0;
        case 0x5479a4u: goto label_5479a4;
        case 0x5479a8u: goto label_5479a8;
        case 0x5479acu: goto label_5479ac;
        case 0x5479b0u: goto label_5479b0;
        case 0x5479b4u: goto label_5479b4;
        case 0x5479b8u: goto label_5479b8;
        case 0x5479bcu: goto label_5479bc;
        case 0x5479c0u: goto label_5479c0;
        case 0x5479c4u: goto label_5479c4;
        case 0x5479c8u: goto label_5479c8;
        case 0x5479ccu: goto label_5479cc;
        case 0x5479d0u: goto label_5479d0;
        case 0x5479d4u: goto label_5479d4;
        case 0x5479d8u: goto label_5479d8;
        case 0x5479dcu: goto label_5479dc;
        case 0x5479e0u: goto label_5479e0;
        case 0x5479e4u: goto label_5479e4;
        case 0x5479e8u: goto label_5479e8;
        case 0x5479ecu: goto label_5479ec;
        case 0x5479f0u: goto label_5479f0;
        case 0x5479f4u: goto label_5479f4;
        case 0x5479f8u: goto label_5479f8;
        case 0x5479fcu: goto label_5479fc;
        case 0x547a00u: goto label_547a00;
        case 0x547a04u: goto label_547a04;
        case 0x547a08u: goto label_547a08;
        case 0x547a0cu: goto label_547a0c;
        case 0x547a10u: goto label_547a10;
        case 0x547a14u: goto label_547a14;
        case 0x547a18u: goto label_547a18;
        case 0x547a1cu: goto label_547a1c;
        case 0x547a20u: goto label_547a20;
        case 0x547a24u: goto label_547a24;
        case 0x547a28u: goto label_547a28;
        case 0x547a2cu: goto label_547a2c;
        case 0x547a30u: goto label_547a30;
        case 0x547a34u: goto label_547a34;
        case 0x547a38u: goto label_547a38;
        case 0x547a3cu: goto label_547a3c;
        case 0x547a40u: goto label_547a40;
        case 0x547a44u: goto label_547a44;
        case 0x547a48u: goto label_547a48;
        case 0x547a4cu: goto label_547a4c;
        case 0x547a50u: goto label_547a50;
        case 0x547a54u: goto label_547a54;
        case 0x547a58u: goto label_547a58;
        case 0x547a5cu: goto label_547a5c;
        case 0x547a60u: goto label_547a60;
        case 0x547a64u: goto label_547a64;
        case 0x547a68u: goto label_547a68;
        case 0x547a6cu: goto label_547a6c;
        case 0x547a70u: goto label_547a70;
        case 0x547a74u: goto label_547a74;
        case 0x547a78u: goto label_547a78;
        case 0x547a7cu: goto label_547a7c;
        case 0x547a80u: goto label_547a80;
        case 0x547a84u: goto label_547a84;
        case 0x547a88u: goto label_547a88;
        case 0x547a8cu: goto label_547a8c;
        case 0x547a90u: goto label_547a90;
        case 0x547a94u: goto label_547a94;
        case 0x547a98u: goto label_547a98;
        case 0x547a9cu: goto label_547a9c;
        case 0x547aa0u: goto label_547aa0;
        case 0x547aa4u: goto label_547aa4;
        case 0x547aa8u: goto label_547aa8;
        case 0x547aacu: goto label_547aac;
        case 0x547ab0u: goto label_547ab0;
        case 0x547ab4u: goto label_547ab4;
        case 0x547ab8u: goto label_547ab8;
        case 0x547abcu: goto label_547abc;
        case 0x547ac0u: goto label_547ac0;
        case 0x547ac4u: goto label_547ac4;
        case 0x547ac8u: goto label_547ac8;
        case 0x547accu: goto label_547acc;
        case 0x547ad0u: goto label_547ad0;
        case 0x547ad4u: goto label_547ad4;
        case 0x547ad8u: goto label_547ad8;
        case 0x547adcu: goto label_547adc;
        case 0x547ae0u: goto label_547ae0;
        case 0x547ae4u: goto label_547ae4;
        case 0x547ae8u: goto label_547ae8;
        case 0x547aecu: goto label_547aec;
        case 0x547af0u: goto label_547af0;
        case 0x547af4u: goto label_547af4;
        case 0x547af8u: goto label_547af8;
        case 0x547afcu: goto label_547afc;
        case 0x547b00u: goto label_547b00;
        case 0x547b04u: goto label_547b04;
        case 0x547b08u: goto label_547b08;
        case 0x547b0cu: goto label_547b0c;
        case 0x547b10u: goto label_547b10;
        case 0x547b14u: goto label_547b14;
        case 0x547b18u: goto label_547b18;
        case 0x547b1cu: goto label_547b1c;
        case 0x547b20u: goto label_547b20;
        case 0x547b24u: goto label_547b24;
        case 0x547b28u: goto label_547b28;
        case 0x547b2cu: goto label_547b2c;
        case 0x547b30u: goto label_547b30;
        case 0x547b34u: goto label_547b34;
        case 0x547b38u: goto label_547b38;
        case 0x547b3cu: goto label_547b3c;
        case 0x547b40u: goto label_547b40;
        case 0x547b44u: goto label_547b44;
        case 0x547b48u: goto label_547b48;
        case 0x547b4cu: goto label_547b4c;
        case 0x547b50u: goto label_547b50;
        case 0x547b54u: goto label_547b54;
        case 0x547b58u: goto label_547b58;
        case 0x547b5cu: goto label_547b5c;
        case 0x547b60u: goto label_547b60;
        case 0x547b64u: goto label_547b64;
        case 0x547b68u: goto label_547b68;
        case 0x547b6cu: goto label_547b6c;
        case 0x547b70u: goto label_547b70;
        case 0x547b74u: goto label_547b74;
        case 0x547b78u: goto label_547b78;
        case 0x547b7cu: goto label_547b7c;
        case 0x547b80u: goto label_547b80;
        case 0x547b84u: goto label_547b84;
        case 0x547b88u: goto label_547b88;
        case 0x547b8cu: goto label_547b8c;
        case 0x547b90u: goto label_547b90;
        case 0x547b94u: goto label_547b94;
        case 0x547b98u: goto label_547b98;
        case 0x547b9cu: goto label_547b9c;
        case 0x547ba0u: goto label_547ba0;
        case 0x547ba4u: goto label_547ba4;
        case 0x547ba8u: goto label_547ba8;
        case 0x547bacu: goto label_547bac;
        case 0x547bb0u: goto label_547bb0;
        case 0x547bb4u: goto label_547bb4;
        case 0x547bb8u: goto label_547bb8;
        case 0x547bbcu: goto label_547bbc;
        case 0x547bc0u: goto label_547bc0;
        case 0x547bc4u: goto label_547bc4;
        case 0x547bc8u: goto label_547bc8;
        case 0x547bccu: goto label_547bcc;
        case 0x547bd0u: goto label_547bd0;
        case 0x547bd4u: goto label_547bd4;
        case 0x547bd8u: goto label_547bd8;
        case 0x547bdcu: goto label_547bdc;
        case 0x547be0u: goto label_547be0;
        case 0x547be4u: goto label_547be4;
        case 0x547be8u: goto label_547be8;
        case 0x547becu: goto label_547bec;
        case 0x547bf0u: goto label_547bf0;
        case 0x547bf4u: goto label_547bf4;
        case 0x547bf8u: goto label_547bf8;
        case 0x547bfcu: goto label_547bfc;
        case 0x547c00u: goto label_547c00;
        case 0x547c04u: goto label_547c04;
        case 0x547c08u: goto label_547c08;
        case 0x547c0cu: goto label_547c0c;
        case 0x547c10u: goto label_547c10;
        case 0x547c14u: goto label_547c14;
        case 0x547c18u: goto label_547c18;
        case 0x547c1cu: goto label_547c1c;
        case 0x547c20u: goto label_547c20;
        case 0x547c24u: goto label_547c24;
        case 0x547c28u: goto label_547c28;
        case 0x547c2cu: goto label_547c2c;
        case 0x547c30u: goto label_547c30;
        case 0x547c34u: goto label_547c34;
        case 0x547c38u: goto label_547c38;
        case 0x547c3cu: goto label_547c3c;
        case 0x547c40u: goto label_547c40;
        case 0x547c44u: goto label_547c44;
        case 0x547c48u: goto label_547c48;
        case 0x547c4cu: goto label_547c4c;
        case 0x547c50u: goto label_547c50;
        case 0x547c54u: goto label_547c54;
        case 0x547c58u: goto label_547c58;
        case 0x547c5cu: goto label_547c5c;
        case 0x547c60u: goto label_547c60;
        case 0x547c64u: goto label_547c64;
        case 0x547c68u: goto label_547c68;
        case 0x547c6cu: goto label_547c6c;
        case 0x547c70u: goto label_547c70;
        case 0x547c74u: goto label_547c74;
        case 0x547c78u: goto label_547c78;
        case 0x547c7cu: goto label_547c7c;
        case 0x547c80u: goto label_547c80;
        case 0x547c84u: goto label_547c84;
        case 0x547c88u: goto label_547c88;
        case 0x547c8cu: goto label_547c8c;
        case 0x547c90u: goto label_547c90;
        case 0x547c94u: goto label_547c94;
        case 0x547c98u: goto label_547c98;
        case 0x547c9cu: goto label_547c9c;
        case 0x547ca0u: goto label_547ca0;
        case 0x547ca4u: goto label_547ca4;
        case 0x547ca8u: goto label_547ca8;
        case 0x547cacu: goto label_547cac;
        case 0x547cb0u: goto label_547cb0;
        case 0x547cb4u: goto label_547cb4;
        case 0x547cb8u: goto label_547cb8;
        case 0x547cbcu: goto label_547cbc;
        case 0x547cc0u: goto label_547cc0;
        case 0x547cc4u: goto label_547cc4;
        case 0x547cc8u: goto label_547cc8;
        case 0x547cccu: goto label_547ccc;
        case 0x547cd0u: goto label_547cd0;
        case 0x547cd4u: goto label_547cd4;
        case 0x547cd8u: goto label_547cd8;
        case 0x547cdcu: goto label_547cdc;
        case 0x547ce0u: goto label_547ce0;
        case 0x547ce4u: goto label_547ce4;
        case 0x547ce8u: goto label_547ce8;
        case 0x547cecu: goto label_547cec;
        case 0x547cf0u: goto label_547cf0;
        case 0x547cf4u: goto label_547cf4;
        case 0x547cf8u: goto label_547cf8;
        case 0x547cfcu: goto label_547cfc;
        case 0x547d00u: goto label_547d00;
        case 0x547d04u: goto label_547d04;
        case 0x547d08u: goto label_547d08;
        case 0x547d0cu: goto label_547d0c;
        case 0x547d10u: goto label_547d10;
        case 0x547d14u: goto label_547d14;
        case 0x547d18u: goto label_547d18;
        case 0x547d1cu: goto label_547d1c;
        case 0x547d20u: goto label_547d20;
        case 0x547d24u: goto label_547d24;
        case 0x547d28u: goto label_547d28;
        case 0x547d2cu: goto label_547d2c;
        case 0x547d30u: goto label_547d30;
        case 0x547d34u: goto label_547d34;
        case 0x547d38u: goto label_547d38;
        case 0x547d3cu: goto label_547d3c;
        case 0x547d40u: goto label_547d40;
        case 0x547d44u: goto label_547d44;
        case 0x547d48u: goto label_547d48;
        case 0x547d4cu: goto label_547d4c;
        case 0x547d50u: goto label_547d50;
        case 0x547d54u: goto label_547d54;
        case 0x547d58u: goto label_547d58;
        case 0x547d5cu: goto label_547d5c;
        case 0x547d60u: goto label_547d60;
        case 0x547d64u: goto label_547d64;
        case 0x547d68u: goto label_547d68;
        case 0x547d6cu: goto label_547d6c;
        case 0x547d70u: goto label_547d70;
        case 0x547d74u: goto label_547d74;
        case 0x547d78u: goto label_547d78;
        case 0x547d7cu: goto label_547d7c;
        case 0x547d80u: goto label_547d80;
        case 0x547d84u: goto label_547d84;
        case 0x547d88u: goto label_547d88;
        case 0x547d8cu: goto label_547d8c;
        case 0x547d90u: goto label_547d90;
        case 0x547d94u: goto label_547d94;
        case 0x547d98u: goto label_547d98;
        case 0x547d9cu: goto label_547d9c;
        case 0x547da0u: goto label_547da0;
        case 0x547da4u: goto label_547da4;
        case 0x547da8u: goto label_547da8;
        case 0x547dacu: goto label_547dac;
        case 0x547db0u: goto label_547db0;
        case 0x547db4u: goto label_547db4;
        case 0x547db8u: goto label_547db8;
        case 0x547dbcu: goto label_547dbc;
        case 0x547dc0u: goto label_547dc0;
        case 0x547dc4u: goto label_547dc4;
        case 0x547dc8u: goto label_547dc8;
        case 0x547dccu: goto label_547dcc;
        case 0x547dd0u: goto label_547dd0;
        case 0x547dd4u: goto label_547dd4;
        case 0x547dd8u: goto label_547dd8;
        case 0x547ddcu: goto label_547ddc;
        case 0x547de0u: goto label_547de0;
        case 0x547de4u: goto label_547de4;
        case 0x547de8u: goto label_547de8;
        case 0x547decu: goto label_547dec;
        case 0x547df0u: goto label_547df0;
        case 0x547df4u: goto label_547df4;
        case 0x547df8u: goto label_547df8;
        case 0x547dfcu: goto label_547dfc;
        case 0x547e00u: goto label_547e00;
        case 0x547e04u: goto label_547e04;
        case 0x547e08u: goto label_547e08;
        case 0x547e0cu: goto label_547e0c;
        case 0x547e10u: goto label_547e10;
        case 0x547e14u: goto label_547e14;
        case 0x547e18u: goto label_547e18;
        case 0x547e1cu: goto label_547e1c;
        case 0x547e20u: goto label_547e20;
        case 0x547e24u: goto label_547e24;
        case 0x547e28u: goto label_547e28;
        case 0x547e2cu: goto label_547e2c;
        case 0x547e30u: goto label_547e30;
        case 0x547e34u: goto label_547e34;
        case 0x547e38u: goto label_547e38;
        case 0x547e3cu: goto label_547e3c;
        case 0x547e40u: goto label_547e40;
        case 0x547e44u: goto label_547e44;
        case 0x547e48u: goto label_547e48;
        case 0x547e4cu: goto label_547e4c;
        case 0x547e50u: goto label_547e50;
        case 0x547e54u: goto label_547e54;
        case 0x547e58u: goto label_547e58;
        case 0x547e5cu: goto label_547e5c;
        case 0x547e60u: goto label_547e60;
        case 0x547e64u: goto label_547e64;
        case 0x547e68u: goto label_547e68;
        case 0x547e6cu: goto label_547e6c;
        case 0x547e70u: goto label_547e70;
        case 0x547e74u: goto label_547e74;
        case 0x547e78u: goto label_547e78;
        case 0x547e7cu: goto label_547e7c;
        case 0x547e80u: goto label_547e80;
        case 0x547e84u: goto label_547e84;
        case 0x547e88u: goto label_547e88;
        case 0x547e8cu: goto label_547e8c;
        case 0x547e90u: goto label_547e90;
        case 0x547e94u: goto label_547e94;
        case 0x547e98u: goto label_547e98;
        case 0x547e9cu: goto label_547e9c;
        case 0x547ea0u: goto label_547ea0;
        case 0x547ea4u: goto label_547ea4;
        case 0x547ea8u: goto label_547ea8;
        case 0x547eacu: goto label_547eac;
        case 0x547eb0u: goto label_547eb0;
        case 0x547eb4u: goto label_547eb4;
        case 0x547eb8u: goto label_547eb8;
        case 0x547ebcu: goto label_547ebc;
        case 0x547ec0u: goto label_547ec0;
        case 0x547ec4u: goto label_547ec4;
        case 0x547ec8u: goto label_547ec8;
        case 0x547eccu: goto label_547ecc;
        case 0x547ed0u: goto label_547ed0;
        case 0x547ed4u: goto label_547ed4;
        case 0x547ed8u: goto label_547ed8;
        case 0x547edcu: goto label_547edc;
        case 0x547ee0u: goto label_547ee0;
        case 0x547ee4u: goto label_547ee4;
        case 0x547ee8u: goto label_547ee8;
        case 0x547eecu: goto label_547eec;
        case 0x547ef0u: goto label_547ef0;
        case 0x547ef4u: goto label_547ef4;
        case 0x547ef8u: goto label_547ef8;
        case 0x547efcu: goto label_547efc;
        case 0x547f00u: goto label_547f00;
        case 0x547f04u: goto label_547f04;
        case 0x547f08u: goto label_547f08;
        case 0x547f0cu: goto label_547f0c;
        case 0x547f10u: goto label_547f10;
        case 0x547f14u: goto label_547f14;
        case 0x547f18u: goto label_547f18;
        case 0x547f1cu: goto label_547f1c;
        case 0x547f20u: goto label_547f20;
        case 0x547f24u: goto label_547f24;
        case 0x547f28u: goto label_547f28;
        case 0x547f2cu: goto label_547f2c;
        case 0x547f30u: goto label_547f30;
        case 0x547f34u: goto label_547f34;
        case 0x547f38u: goto label_547f38;
        case 0x547f3cu: goto label_547f3c;
        case 0x547f40u: goto label_547f40;
        case 0x547f44u: goto label_547f44;
        case 0x547f48u: goto label_547f48;
        case 0x547f4cu: goto label_547f4c;
        case 0x547f50u: goto label_547f50;
        case 0x547f54u: goto label_547f54;
        case 0x547f58u: goto label_547f58;
        case 0x547f5cu: goto label_547f5c;
        case 0x547f60u: goto label_547f60;
        case 0x547f64u: goto label_547f64;
        case 0x547f68u: goto label_547f68;
        case 0x547f6cu: goto label_547f6c;
        case 0x547f70u: goto label_547f70;
        case 0x547f74u: goto label_547f74;
        case 0x547f78u: goto label_547f78;
        case 0x547f7cu: goto label_547f7c;
        case 0x547f80u: goto label_547f80;
        case 0x547f84u: goto label_547f84;
        case 0x547f88u: goto label_547f88;
        case 0x547f8cu: goto label_547f8c;
        case 0x547f90u: goto label_547f90;
        case 0x547f94u: goto label_547f94;
        case 0x547f98u: goto label_547f98;
        case 0x547f9cu: goto label_547f9c;
        case 0x547fa0u: goto label_547fa0;
        case 0x547fa4u: goto label_547fa4;
        case 0x547fa8u: goto label_547fa8;
        case 0x547facu: goto label_547fac;
        case 0x547fb0u: goto label_547fb0;
        case 0x547fb4u: goto label_547fb4;
        case 0x547fb8u: goto label_547fb8;
        case 0x547fbcu: goto label_547fbc;
        case 0x547fc0u: goto label_547fc0;
        case 0x547fc4u: goto label_547fc4;
        case 0x547fc8u: goto label_547fc8;
        case 0x547fccu: goto label_547fcc;
        case 0x547fd0u: goto label_547fd0;
        case 0x547fd4u: goto label_547fd4;
        case 0x547fd8u: goto label_547fd8;
        case 0x547fdcu: goto label_547fdc;
        case 0x547fe0u: goto label_547fe0;
        case 0x547fe4u: goto label_547fe4;
        case 0x547fe8u: goto label_547fe8;
        case 0x547fecu: goto label_547fec;
        case 0x547ff0u: goto label_547ff0;
        case 0x547ff4u: goto label_547ff4;
        case 0x547ff8u: goto label_547ff8;
        case 0x547ffcu: goto label_547ffc;
        case 0x548000u: goto label_548000;
        case 0x548004u: goto label_548004;
        case 0x548008u: goto label_548008;
        case 0x54800cu: goto label_54800c;
        case 0x548010u: goto label_548010;
        case 0x548014u: goto label_548014;
        case 0x548018u: goto label_548018;
        case 0x54801cu: goto label_54801c;
        case 0x548020u: goto label_548020;
        case 0x548024u: goto label_548024;
        case 0x548028u: goto label_548028;
        case 0x54802cu: goto label_54802c;
        case 0x548030u: goto label_548030;
        case 0x548034u: goto label_548034;
        case 0x548038u: goto label_548038;
        case 0x54803cu: goto label_54803c;
        case 0x548040u: goto label_548040;
        case 0x548044u: goto label_548044;
        case 0x548048u: goto label_548048;
        case 0x54804cu: goto label_54804c;
        case 0x548050u: goto label_548050;
        case 0x548054u: goto label_548054;
        case 0x548058u: goto label_548058;
        case 0x54805cu: goto label_54805c;
        case 0x548060u: goto label_548060;
        case 0x548064u: goto label_548064;
        case 0x548068u: goto label_548068;
        case 0x54806cu: goto label_54806c;
        case 0x548070u: goto label_548070;
        case 0x548074u: goto label_548074;
        case 0x548078u: goto label_548078;
        case 0x54807cu: goto label_54807c;
        case 0x548080u: goto label_548080;
        case 0x548084u: goto label_548084;
        case 0x548088u: goto label_548088;
        case 0x54808cu: goto label_54808c;
        case 0x548090u: goto label_548090;
        case 0x548094u: goto label_548094;
        case 0x548098u: goto label_548098;
        case 0x54809cu: goto label_54809c;
        case 0x5480a0u: goto label_5480a0;
        case 0x5480a4u: goto label_5480a4;
        case 0x5480a8u: goto label_5480a8;
        case 0x5480acu: goto label_5480ac;
        case 0x5480b0u: goto label_5480b0;
        case 0x5480b4u: goto label_5480b4;
        case 0x5480b8u: goto label_5480b8;
        case 0x5480bcu: goto label_5480bc;
        case 0x5480c0u: goto label_5480c0;
        case 0x5480c4u: goto label_5480c4;
        case 0x5480c8u: goto label_5480c8;
        case 0x5480ccu: goto label_5480cc;
        case 0x5480d0u: goto label_5480d0;
        case 0x5480d4u: goto label_5480d4;
        case 0x5480d8u: goto label_5480d8;
        case 0x5480dcu: goto label_5480dc;
        case 0x5480e0u: goto label_5480e0;
        case 0x5480e4u: goto label_5480e4;
        case 0x5480e8u: goto label_5480e8;
        case 0x5480ecu: goto label_5480ec;
        case 0x5480f0u: goto label_5480f0;
        case 0x5480f4u: goto label_5480f4;
        case 0x5480f8u: goto label_5480f8;
        case 0x5480fcu: goto label_5480fc;
        case 0x548100u: goto label_548100;
        case 0x548104u: goto label_548104;
        case 0x548108u: goto label_548108;
        case 0x54810cu: goto label_54810c;
        case 0x548110u: goto label_548110;
        case 0x548114u: goto label_548114;
        case 0x548118u: goto label_548118;
        case 0x54811cu: goto label_54811c;
        case 0x548120u: goto label_548120;
        case 0x548124u: goto label_548124;
        case 0x548128u: goto label_548128;
        case 0x54812cu: goto label_54812c;
        case 0x548130u: goto label_548130;
        case 0x548134u: goto label_548134;
        case 0x548138u: goto label_548138;
        case 0x54813cu: goto label_54813c;
        case 0x548140u: goto label_548140;
        case 0x548144u: goto label_548144;
        case 0x548148u: goto label_548148;
        case 0x54814cu: goto label_54814c;
        case 0x548150u: goto label_548150;
        case 0x548154u: goto label_548154;
        case 0x548158u: goto label_548158;
        case 0x54815cu: goto label_54815c;
        case 0x548160u: goto label_548160;
        case 0x548164u: goto label_548164;
        case 0x548168u: goto label_548168;
        case 0x54816cu: goto label_54816c;
        case 0x548170u: goto label_548170;
        case 0x548174u: goto label_548174;
        case 0x548178u: goto label_548178;
        case 0x54817cu: goto label_54817c;
        case 0x548180u: goto label_548180;
        case 0x548184u: goto label_548184;
        case 0x548188u: goto label_548188;
        case 0x54818cu: goto label_54818c;
        case 0x548190u: goto label_548190;
        case 0x548194u: goto label_548194;
        case 0x548198u: goto label_548198;
        case 0x54819cu: goto label_54819c;
        case 0x5481a0u: goto label_5481a0;
        case 0x5481a4u: goto label_5481a4;
        case 0x5481a8u: goto label_5481a8;
        case 0x5481acu: goto label_5481ac;
        case 0x5481b0u: goto label_5481b0;
        case 0x5481b4u: goto label_5481b4;
        case 0x5481b8u: goto label_5481b8;
        case 0x5481bcu: goto label_5481bc;
        case 0x5481c0u: goto label_5481c0;
        case 0x5481c4u: goto label_5481c4;
        case 0x5481c8u: goto label_5481c8;
        case 0x5481ccu: goto label_5481cc;
        case 0x5481d0u: goto label_5481d0;
        case 0x5481d4u: goto label_5481d4;
        case 0x5481d8u: goto label_5481d8;
        case 0x5481dcu: goto label_5481dc;
        case 0x5481e0u: goto label_5481e0;
        case 0x5481e4u: goto label_5481e4;
        case 0x5481e8u: goto label_5481e8;
        case 0x5481ecu: goto label_5481ec;
        case 0x5481f0u: goto label_5481f0;
        case 0x5481f4u: goto label_5481f4;
        case 0x5481f8u: goto label_5481f8;
        case 0x5481fcu: goto label_5481fc;
        case 0x548200u: goto label_548200;
        case 0x548204u: goto label_548204;
        case 0x548208u: goto label_548208;
        case 0x54820cu: goto label_54820c;
        case 0x548210u: goto label_548210;
        case 0x548214u: goto label_548214;
        case 0x548218u: goto label_548218;
        case 0x54821cu: goto label_54821c;
        case 0x548220u: goto label_548220;
        case 0x548224u: goto label_548224;
        case 0x548228u: goto label_548228;
        case 0x54822cu: goto label_54822c;
        case 0x548230u: goto label_548230;
        case 0x548234u: goto label_548234;
        case 0x548238u: goto label_548238;
        case 0x54823cu: goto label_54823c;
        case 0x548240u: goto label_548240;
        case 0x548244u: goto label_548244;
        case 0x548248u: goto label_548248;
        case 0x54824cu: goto label_54824c;
        case 0x548250u: goto label_548250;
        case 0x548254u: goto label_548254;
        case 0x548258u: goto label_548258;
        case 0x54825cu: goto label_54825c;
        default: break;
    }

    ctx->pc = 0x5477b0u;

label_5477b0:
    // 0x5477b0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x5477b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_5477b4:
    // 0x5477b4: 0x81843  sra         $v1, $t0, 1
    ctx->pc = 0x5477b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 8), 1));
label_5477b8:
    // 0x5477b8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x5477b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_5477bc:
    // 0x5477bc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x5477bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_5477c0:
    // 0x5477c0: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x5477c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_5477c4:
    // 0x5477c4: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x5477c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_5477c8:
    // 0x5477c8: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x5477c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_5477cc:
    // 0x5477cc: 0x3c1e0067  lui         $fp, 0x67
    ctx->pc = 0x5477ccu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)103 << 16));
label_5477d0:
    // 0x5477d0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x5477d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_5477d4:
    // 0x5477d4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x5477d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5477d8:
    // 0x5477d8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x5477d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_5477dc:
    // 0x5477dc: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x5477dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_5477e0:
    // 0x5477e0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x5477e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_5477e4:
    // 0x5477e4: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x5477e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_5477e8:
    // 0x5477e8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x5477e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_5477ec:
    // 0x5477ec: 0x27dee570  addiu       $fp, $fp, -0x1A90
    ctx->pc = 0x5477ecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294960496));
label_5477f0:
    // 0x5477f0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x5477f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_5477f4:
    // 0x5477f4: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x5477f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_5477f8:
    // 0x5477f8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x5477f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_5477fc:
    // 0x5477fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x5477fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_547800:
    // 0x547800: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x547800u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_547804:
    // 0x547804: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x547804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_547808:
    // 0x547808: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x547808u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_54780c:
    // 0x54780c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x54780cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_547810:
    // 0x547810: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x547810u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_547814:
    // 0x547814: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x547814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_547818:
    // 0x547818: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x547818u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_54781c:
    // 0x54781c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x54781cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_547820:
    // 0x547820: 0x8c650ec8  lw          $a1, 0xEC8($v1)
    ctx->pc = 0x547820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3784)));
label_547824:
    // 0x547824: 0x9491da4a  lhu         $s1, -0x25B6($a0)
    ctx->pc = 0x547824u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294957642)));
label_547828:
    // 0x547828: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x547828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_54782c:
    // 0x54782c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x54782cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_547830:
    // 0x547830: 0x2463e790  addiu       $v1, $v1, -0x1870
    ctx->pc = 0x547830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961040));
label_547834:
    // 0x547834: 0x8cc4001c  lw          $a0, 0x1C($a2)
    ctx->pc = 0x547834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_547838:
    // 0x547838: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x547838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
label_54783c:
    // 0x54783c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x54783cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_547840:
    // 0x547840: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x547840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_547844:
    // 0x547844: 0x8cd5000c  lw          $s5, 0xC($a2)
    ctx->pc = 0x547844u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_547848:
    // 0x547848: 0x9472da48  lhu         $s2, -0x25B8($v1)
    ctx->pc = 0x547848u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957640)));
label_54784c:
    // 0x54784c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x54784cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_547850:
    // 0x547850: 0x2463e460  addiu       $v1, $v1, -0x1BA0
    ctx->pc = 0x547850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960224));
label_547854:
    // 0x547854: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x547854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_547858:
    // 0x547858: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x547858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_54785c:
    // 0x54785c: 0x8463e476  lh          $v1, -0x1B8A($v1)
    ctx->pc = 0x54785cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294960246)));
label_547860:
    // 0x547860: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x547860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_547864:
    // 0x547864: 0x108501dc  beq         $a0, $a1, . + 4 + (0x1DC << 2)
label_547868:
    if (ctx->pc == 0x547868u) {
        ctx->pc = 0x547868u;
            // 0x547868: 0xafa30110  sw          $v1, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
        ctx->pc = 0x54786Cu;
        goto label_54786c;
    }
    ctx->pc = 0x547864u;
    {
        const bool branch_taken_0x547864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x547868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547864u;
            // 0x547868: 0xafa30110  sw          $v1, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x547864) {
            ctx->pc = 0x547FD8u;
            goto label_547fd8;
        }
    }
    ctx->pc = 0x54786Cu;
label_54786c:
    // 0x54786c: 0x50800195  beql        $a0, $zero, . + 4 + (0x195 << 2)
label_547870:
    if (ctx->pc == 0x547870u) {
        ctx->pc = 0x547870u;
            // 0x547870: 0x8ee20064  lw          $v0, 0x64($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 100)));
        ctx->pc = 0x547874u;
        goto label_547874;
    }
    ctx->pc = 0x54786Cu;
    {
        const bool branch_taken_0x54786c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x54786c) {
            ctx->pc = 0x547870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54786Cu;
            // 0x547870: 0x8ee20064  lw          $v0, 0x64($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x547EC4u;
            goto label_547ec4;
        }
    }
    ctx->pc = 0x547874u;
label_547874:
    // 0x547874: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x547874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_547878:
    // 0x547878: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_54787c:
    if (ctx->pc == 0x54787Cu) {
        ctx->pc = 0x547880u;
        goto label_547880;
    }
    ctx->pc = 0x547878u;
    {
        const bool branch_taken_0x547878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x547878) {
            ctx->pc = 0x547888u;
            goto label_547888;
        }
    }
    ctx->pc = 0x547880u;
label_547880:
    // 0x547880: 0x10000267  b           . + 4 + (0x267 << 2)
label_547884:
    if (ctx->pc == 0x547884u) {
        ctx->pc = 0x547884u;
            // 0x547884: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x547888u;
        goto label_547888;
    }
    ctx->pc = 0x547880u;
    {
        const bool branch_taken_0x547880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x547884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547880u;
            // 0x547884: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x547880) {
            ctx->pc = 0x548220u;
            goto label_548220;
        }
    }
    ctx->pc = 0x547888u;
label_547888:
    // 0x547888: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x547888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_54788c:
    // 0x54788c: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x54788cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_547890:
    // 0x547890: 0x2442e480  addiu       $v0, $v0, -0x1B80
    ctx->pc = 0x547890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960256));
label_547894:
    // 0x547894: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x547894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_547898:
    // 0x547898: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x547898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_54789c:
    // 0x54789c: 0x8ee30064  lw          $v1, 0x64($s7)
    ctx->pc = 0x54789cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 100)));
label_5478a0:
    // 0x5478a0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x5478a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5478a4:
    // 0x5478a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x5478a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_5478a8:
    // 0x5478a8: 0x8ee20068  lw          $v0, 0x68($s7)
    ctx->pc = 0x5478a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 104)));
label_5478ac:
    // 0x5478ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5478acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5478b0:
    // 0x5478b0: 0x8c44013c  lw          $a0, 0x13C($v0)
    ctx->pc = 0x5478b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
label_5478b4:
    // 0x5478b4: 0xc0506ac  jal         func_141AB0
label_5478b8:
    if (ctx->pc == 0x5478B8u) {
        ctx->pc = 0x5478B8u;
            // 0x5478b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5478BCu;
        goto label_5478bc;
    }
    ctx->pc = 0x5478B4u;
    SET_GPR_U32(ctx, 31, 0x5478BCu);
    ctx->pc = 0x5478B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5478B4u;
            // 0x5478b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5478BCu; }
        if (ctx->pc != 0x5478BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5478BCu; }
        if (ctx->pc != 0x5478BCu) { return; }
    }
    ctx->pc = 0x5478BCu;
label_5478bc:
    // 0x5478bc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5478bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5478c0:
    // 0x5478c0: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x5478c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_5478c4:
    // 0x5478c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5478c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5478c8:
    // 0x5478c8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x5478c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_5478cc:
    // 0x5478cc: 0x320f809  jalr        $t9
label_5478d0:
    if (ctx->pc == 0x5478D0u) {
        ctx->pc = 0x5478D0u;
            // 0x5478d0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x5478D4u;
        goto label_5478d4;
    }
    ctx->pc = 0x5478CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5478D4u);
        ctx->pc = 0x5478D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5478CCu;
            // 0x5478d0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5478D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5478D4u; }
            if (ctx->pc != 0x5478D4u) { return; }
        }
        }
    }
    ctx->pc = 0x5478D4u;
label_5478d4:
    // 0x5478d4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x5478d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_5478d8:
    // 0x5478d8: 0x27c50070  addiu       $a1, $fp, 0x70
    ctx->pc = 0x5478d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
label_5478dc:
    // 0x5478dc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x5478dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_5478e0:
    // 0x5478e0: 0xc7c10078  lwc1        $f1, 0x78($fp)
    ctx->pc = 0x5478e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5478e4:
    // 0x5478e4: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x5478e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_5478e8:
    // 0x5478e8: 0xc7d4007c  lwc1        $f20, 0x7C($fp)
    ctx->pc = 0x5478e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_5478ec:
    // 0x5478ec: 0x8442001c  lh          $v0, 0x1C($v0)
    ctx->pc = 0x5478ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
label_5478f0:
    // 0x5478f0: 0x46011882  mul.s       $f2, $f3, $f1
    ctx->pc = 0x5478f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_5478f4:
    // 0x5478f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5478f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5478f8:
    // 0x5478f8: 0x0  nop
    ctx->pc = 0x5478f8u;
    // NOP
label_5478fc:
    // 0x5478fc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x5478fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_547900:
    // 0x547900: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x547900u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_547904:
    // 0x547904: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x547904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_547908:
    // 0x547908: 0x0  nop
    ctx->pc = 0x547908u;
    // NOP
label_54790c:
    // 0x54790c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54790cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_547910:
    // 0x547910: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x547910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_547914:
    // 0x547914: 0x46020301  sub.s       $f12, $f0, $f2
    ctx->pc = 0x547914u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_547918:
    // 0x547918: 0x46020380  add.s       $f14, $f0, $f2
    ctx->pc = 0x547918u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_54791c:
    // 0x54791c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x54791cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_547920:
    // 0x547920: 0x0  nop
    ctx->pc = 0x547920u;
    // NOP
label_547924:
    // 0x547924: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x547924u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_547928:
    // 0x547928: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x547928u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54792c:
    // 0x54792c: 0x0  nop
    ctx->pc = 0x54792cu;
    // NOP
label_547930:
    // 0x547930: 0x460d0018  adda.s      $f0, $f13
    ctx->pc = 0x547930u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
label_547934:
    // 0x547934: 0x460c0e00  add.s       $f24, $f1, $f12
    ctx->pc = 0x547934u;
    ctx->f[24] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
label_547938:
    // 0x547938: 0x46146bc0  add.s       $f15, $f13, $f20
    ctx->pc = 0x547938u;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[20]);
label_54793c:
    // 0x54793c: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_547940:
    if (ctx->pc == 0x547940u) {
        ctx->pc = 0x547940u;
            // 0x547940: 0x46141ddc  madd.s      $f23, $f3, $f20 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[20]));
        ctx->pc = 0x547944u;
        goto label_547944;
    }
    ctx->pc = 0x54793Cu;
    {
        const bool branch_taken_0x54793c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x547940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54793Cu;
            // 0x547940: 0x46141ddc  madd.s      $f23, $f3, $f20 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[20]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54793c) {
            ctx->pc = 0x547950u;
            goto label_547950;
        }
    }
    ctx->pc = 0x547944u;
label_547944:
    // 0x547944: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x547944u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_547948:
    // 0x547948: 0x10000008  b           . + 4 + (0x8 << 2)
label_54794c:
    if (ctx->pc == 0x54794Cu) {
        ctx->pc = 0x54794Cu;
            // 0x54794c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x547950u;
        goto label_547950;
    }
    ctx->pc = 0x547948u;
    {
        const bool branch_taken_0x547948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54794Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547948u;
            // 0x54794c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x547948) {
            ctx->pc = 0x54796Cu;
            goto label_54796c;
        }
    }
    ctx->pc = 0x547950u;
label_547950:
    // 0x547950: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x547950u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_547954:
    // 0x547954: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x547954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_547958:
    // 0x547958: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x547958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54795c:
    // 0x54795c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54795cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_547960:
    // 0x547960: 0x0  nop
    ctx->pc = 0x547960u;
    // NOP
label_547964:
    // 0x547964: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x547964u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_547968:
    // 0x547968: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x547968u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54796c:
    // 0x54796c: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_547970:
    if (ctx->pc == 0x547970u) {
        ctx->pc = 0x547970u;
            // 0x547970: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x547974u;
        goto label_547974;
    }
    ctx->pc = 0x54796Cu;
    {
        const bool branch_taken_0x54796c = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x54796c) {
            ctx->pc = 0x547970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54796Cu;
            // 0x547970: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x547980u;
            goto label_547980;
        }
    }
    ctx->pc = 0x547974u;
label_547974:
    // 0x547974: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x547974u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_547978:
    // 0x547978: 0x10000007  b           . + 4 + (0x7 << 2)
label_54797c:
    if (ctx->pc == 0x54797Cu) {
        ctx->pc = 0x54797Cu;
            // 0x54797c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x547980u;
        goto label_547980;
    }
    ctx->pc = 0x547978u;
    {
        const bool branch_taken_0x547978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54797Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547978u;
            // 0x54797c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x547978) {
            ctx->pc = 0x547998u;
            goto label_547998;
        }
    }
    ctx->pc = 0x547980u;
label_547980:
    // 0x547980: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x547980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_547984:
    // 0x547984: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x547984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_547988:
    // 0x547988: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x547988u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54798c:
    // 0x54798c: 0x0  nop
    ctx->pc = 0x54798cu;
    // NOP
label_547990:
    // 0x547990: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x547990u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_547994:
    // 0x547994: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x547994u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_547998:
    // 0x547998: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x547998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54799c:
    // 0x54799c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54799cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5479a0:
    // 0x5479a0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x5479a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_5479a4:
    // 0x5479a4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x5479a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_5479a8:
    // 0x5479a8: 0xc0bc284  jal         func_2F0A10
label_5479ac:
    if (ctx->pc == 0x5479ACu) {
        ctx->pc = 0x5479ACu;
            // 0x5479ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5479B0u;
        goto label_5479b0;
    }
    ctx->pc = 0x5479A8u;
    SET_GPR_U32(ctx, 31, 0x5479B0u);
    ctx->pc = 0x5479ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5479A8u;
            // 0x5479ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5479B0u; }
        if (ctx->pc != 0x5479B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5479B0u; }
        if (ctx->pc != 0x5479B0u) { return; }
    }
    ctx->pc = 0x5479B0u;
label_5479b0:
    // 0x5479b0: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x5479b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_5479b4:
    // 0x5479b4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x5479b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_5479b8:
    // 0x5479b8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x5479b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_5479bc:
    // 0x5479bc: 0x27c50080  addiu       $a1, $fp, 0x80
    ctx->pc = 0x5479bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 128));
label_5479c0:
    // 0x5479c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5479c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5479c4:
    // 0x5479c4: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x5479c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_5479c8:
    // 0x5479c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5479c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_5479cc:
    // 0x5479cc: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x5479ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_5479d0:
    // 0x5479d0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x5479d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5479d4:
    // 0x5479d4: 0x8442001e  lh          $v0, 0x1E($v0)
    ctx->pc = 0x5479d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 30)));
label_5479d8:
    // 0x5479d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x5479d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_5479dc:
    // 0x5479dc: 0x4601a040  add.s       $f1, $f20, $f1
    ctx->pc = 0x5479dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_5479e0:
    // 0x5479e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x5479e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_5479e4:
    // 0x5479e4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5479e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_5479e8:
    // 0x5479e8: 0x44130800  mfc1        $s3, $f1
    ctx->pc = 0x5479e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
label_5479ec:
    // 0x5479ec: 0x0  nop
    ctx->pc = 0x5479ecu;
    // NOP
label_5479f0:
    // 0x5479f0: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x5479f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_5479f4:
    // 0x5479f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5479f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5479f8:
    // 0x5479f8: 0x0  nop
    ctx->pc = 0x5479f8u;
    // NOP
label_5479fc:
    // 0x5479fc: 0x46800b60  cvt.s.w     $f13, $f1
    ctx->pc = 0x5479fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_547a00:
    // 0x547a00: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x547a00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_547a04:
    // 0x547a04: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x547a04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_547a08:
    // 0x547a08: 0xc7c10088  lwc1        $f1, 0x88($fp)
    ctx->pc = 0x547a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_547a0c:
    // 0x547a0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x547a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_547a10:
    // 0x547a10: 0xc7d4008c  lwc1        $f20, 0x8C($fp)
    ctx->pc = 0x547a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_547a14:
    // 0x547a14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x547a14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_547a18:
    // 0x547a18: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x547a18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_547a1c:
    // 0x547a1c: 0x46010581  sub.s       $f22, $f0, $f1
    ctx->pc = 0x547a1cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_547a20:
    // 0x547a20: 0x46010380  add.s       $f14, $f0, $f1
    ctx->pc = 0x547a20u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_547a24:
    // 0x547a24: 0x46146bc0  add.s       $f15, $f13, $f20
    ctx->pc = 0x547a24u;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[20]);
label_547a28:
    // 0x547a28: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_547a2c:
    if (ctx->pc == 0x547A2Cu) {
        ctx->pc = 0x547A2Cu;
            // 0x547a2c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x547A30u;
        goto label_547a30;
    }
    ctx->pc = 0x547A28u;
    {
        const bool branch_taken_0x547a28 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x547A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547A28u;
            // 0x547a2c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x547a28) {
            ctx->pc = 0x547A3Cu;
            goto label_547a3c;
        }
    }
    ctx->pc = 0x547A30u;
label_547a30:
    // 0x547a30: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x547a30u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_547a34:
    // 0x547a34: 0x10000008  b           . + 4 + (0x8 << 2)
label_547a38:
    if (ctx->pc == 0x547A38u) {
        ctx->pc = 0x547A38u;
            // 0x547a38: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x547A3Cu;
        goto label_547a3c;
    }
    ctx->pc = 0x547A34u;
    {
        const bool branch_taken_0x547a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x547A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547A34u;
            // 0x547a38: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x547a34) {
            ctx->pc = 0x547A58u;
            goto label_547a58;
        }
    }
    ctx->pc = 0x547A3Cu;
label_547a3c:
    // 0x547a3c: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x547a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_547a40:
    // 0x547a40: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x547a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_547a44:
    // 0x547a44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x547a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_547a48:
    // 0x547a48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x547a48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_547a4c:
    // 0x547a4c: 0x0  nop
    ctx->pc = 0x547a4cu;
    // NOP
label_547a50:
    // 0x547a50: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x547a50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_547a54:
    // 0x547a54: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x547a54u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_547a58:
    // 0x547a58: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_547a5c:
    if (ctx->pc == 0x547A5Cu) {
        ctx->pc = 0x547A5Cu;
            // 0x547a5c: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x547A60u;
        goto label_547a60;
    }
    ctx->pc = 0x547A58u;
    {
        const bool branch_taken_0x547a58 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x547a58) {
            ctx->pc = 0x547A5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x547A58u;
            // 0x547a5c: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x547A6Cu;
            goto label_547a6c;
        }
    }
    ctx->pc = 0x547A60u;
label_547a60:
    // 0x547a60: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x547a60u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_547a64:
    // 0x547a64: 0x10000007  b           . + 4 + (0x7 << 2)
label_547a68:
    if (ctx->pc == 0x547A68u) {
        ctx->pc = 0x547A68u;
            // 0x547a68: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x547A6Cu;
        goto label_547a6c;
    }
    ctx->pc = 0x547A64u;
    {
        const bool branch_taken_0x547a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x547A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547A64u;
            // 0x547a68: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x547a64) {
            ctx->pc = 0x547A84u;
            goto label_547a84;
        }
    }
    ctx->pc = 0x547A6Cu;
label_547a6c:
    // 0x547a6c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x547a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_547a70:
    // 0x547a70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x547a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_547a74:
    // 0x547a74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x547a74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_547a78:
    // 0x547a78: 0x0  nop
    ctx->pc = 0x547a78u;
    // NOP
label_547a7c:
    // 0x547a7c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x547a7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_547a80:
    // 0x547a80: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x547a80u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_547a84:
    // 0x547a84: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x547a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_547a88:
    // 0x547a88: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x547a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_547a8c:
    // 0x547a8c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x547a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_547a90:
    // 0x547a90: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x547a90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_547a94:
    // 0x547a94: 0xc0bc284  jal         func_2F0A10
label_547a98:
    if (ctx->pc == 0x547A98u) {
        ctx->pc = 0x547A98u;
            // 0x547a98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x547A9Cu;
        goto label_547a9c;
    }
    ctx->pc = 0x547A94u;
    SET_GPR_U32(ctx, 31, 0x547A9Cu);
    ctx->pc = 0x547A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x547A94u;
            // 0x547a98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547A9Cu; }
        if (ctx->pc != 0x547A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547A9Cu; }
        if (ctx->pc != 0x547A9Cu) { return; }
    }
    ctx->pc = 0x547A9Cu;
label_547a9c:
    // 0x547a9c: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x547a9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_547aa0:
    // 0x547aa0: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x547aa0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_547aa4:
    // 0x547aa4: 0x0  nop
    ctx->pc = 0x547aa4u;
    // NOP
label_547aa8:
    // 0x547aa8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x547aa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_547aac:
    // 0x547aac: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x547aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_547ab0:
    // 0x547ab0: 0x8442001a  lh          $v0, 0x1A($v0)
    ctx->pc = 0x547ab0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
label_547ab4:
    // 0x547ab4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x547ab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_547ab8:
    // 0x547ab8: 0x0  nop
    ctx->pc = 0x547ab8u;
    // NOP
label_547abc:
    // 0x547abc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x547abcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_547ac0:
    // 0x547ac0: 0x4601a040  add.s       $f1, $f20, $f1
    ctx->pc = 0x547ac0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_547ac4:
    // 0x547ac4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x547ac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_547ac8:
    // 0x547ac8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x547ac8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_547acc:
    // 0x547acc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x547accu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_547ad0:
    // 0x547ad0: 0x16030025  bne         $s0, $v1, . + 4 + (0x25 << 2)
label_547ad4:
    if (ctx->pc == 0x547AD4u) {
        ctx->pc = 0x547AD4u;
            // 0x547ad4: 0xafa20110  sw          $v0, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x547AD8u;
        goto label_547ad8;
    }
    ctx->pc = 0x547AD0u;
    {
        const bool branch_taken_0x547ad0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x547AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547AD0u;
            // 0x547ad4: 0xafa20110  sw          $v0, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x547ad0) {
            ctx->pc = 0x547B68u;
            goto label_547b68;
        }
    }
    ctx->pc = 0x547AD8u;
label_547ad8:
    // 0x547ad8: 0xc7d40098  lwc1        $f20, 0x98($fp)
    ctx->pc = 0x547ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_547adc:
    // 0x547adc: 0xc7c1009c  lwc1        $f1, 0x9C($fp)
    ctx->pc = 0x547adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_547ae0:
    // 0x547ae0: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_547ae4:
    if (ctx->pc == 0x547AE4u) {
        ctx->pc = 0x547AE4u;
            // 0x547ae4: 0x27c50090  addiu       $a1, $fp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
        ctx->pc = 0x547AE8u;
        goto label_547ae8;
    }
    ctx->pc = 0x547AE0u;
    {
        const bool branch_taken_0x547ae0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x547AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547AE0u;
            // 0x547ae4: 0x27c50090  addiu       $a1, $fp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x547ae0) {
            ctx->pc = 0x547AF4u;
            goto label_547af4;
        }
    }
    ctx->pc = 0x547AE8u;
label_547ae8:
    // 0x547ae8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x547ae8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_547aec:
    // 0x547aec: 0x10000008  b           . + 4 + (0x8 << 2)
label_547af0:
    if (ctx->pc == 0x547AF0u) {
        ctx->pc = 0x547AF0u;
            // 0x547af0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x547AF4u;
        goto label_547af4;
    }
    ctx->pc = 0x547AECu;
    {
        const bool branch_taken_0x547aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x547AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547AECu;
            // 0x547af0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x547aec) {
            ctx->pc = 0x547B10u;
            goto label_547b10;
        }
    }
    ctx->pc = 0x547AF4u;
label_547af4:
    // 0x547af4: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x547af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_547af8:
    // 0x547af8: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x547af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_547afc:
    // 0x547afc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x547afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_547b00:
    // 0x547b00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x547b00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_547b04:
    // 0x547b04: 0x0  nop
    ctx->pc = 0x547b04u;
    // NOP
label_547b08:
    // 0x547b08: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x547b08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_547b0c:
    // 0x547b0c: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x547b0cu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_547b10:
    // 0x547b10: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_547b14:
    if (ctx->pc == 0x547B14u) {
        ctx->pc = 0x547B14u;
            // 0x547b14: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x547B18u;
        goto label_547b18;
    }
    ctx->pc = 0x547B10u;
    {
        const bool branch_taken_0x547b10 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x547b10) {
            ctx->pc = 0x547B14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x547B10u;
            // 0x547b14: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x547B24u;
            goto label_547b24;
        }
    }
    ctx->pc = 0x547B18u;
label_547b18:
    // 0x547b18: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x547b18u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_547b1c:
    // 0x547b1c: 0x10000007  b           . + 4 + (0x7 << 2)
label_547b20:
    if (ctx->pc == 0x547B20u) {
        ctx->pc = 0x547B20u;
            // 0x547b20: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x547B24u;
        goto label_547b24;
    }
    ctx->pc = 0x547B1Cu;
    {
        const bool branch_taken_0x547b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x547B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547B1Cu;
            // 0x547b20: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x547b1c) {
            ctx->pc = 0x547B3Cu;
            goto label_547b3c;
        }
    }
    ctx->pc = 0x547B24u;
label_547b24:
    // 0x547b24: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x547b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_547b28:
    // 0x547b28: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x547b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_547b2c:
    // 0x547b2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x547b2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_547b30:
    // 0x547b30: 0x0  nop
    ctx->pc = 0x547b30u;
    // NOP
label_547b34:
    // 0x547b34: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x547b34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_547b38:
    // 0x547b38: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x547b38u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_547b3c:
    // 0x547b3c: 0x4601ab41  sub.s       $f13, $f21, $f1
    ctx->pc = 0x547b3cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
label_547b40:
    // 0x547b40: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x547b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_547b44:
    // 0x547b44: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x547b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_547b48:
    // 0x547b48: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x547b48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_547b4c:
    // 0x547b4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x547b4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_547b50:
    // 0x547b50: 0x4614b380  add.s       $f14, $f22, $f20
    ctx->pc = 0x547b50u;
    ctx->f[14] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
label_547b54:
    // 0x547b54: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x547b54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_547b58:
    // 0x547b58: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x547b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_547b5c:
    // 0x547b5c: 0xc0bc284  jal         func_2F0A10
label_547b60:
    if (ctx->pc == 0x547B60u) {
        ctx->pc = 0x547B60u;
            // 0x547b60: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x547B64u;
        goto label_547b64;
    }
    ctx->pc = 0x547B5Cu;
    SET_GPR_U32(ctx, 31, 0x547B64u);
    ctx->pc = 0x547B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x547B5Cu;
            // 0x547b60: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547B64u; }
        if (ctx->pc != 0x547B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547B64u; }
        if (ctx->pc != 0x547B64u) { return; }
    }
    ctx->pc = 0x547B64u;
label_547b64:
    // 0x547b64: 0x4614b580  add.s       $f22, $f22, $f20
    ctx->pc = 0x547b64u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
label_547b68:
    // 0x547b68: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x547b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_547b6c:
    // 0x547b6c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x547b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_547b70:
    // 0x547b70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x547b70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_547b74:
    // 0x547b74: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x547b74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_547b78:
    // 0x547b78: 0x320f809  jalr        $t9
label_547b7c:
    if (ctx->pc == 0x547B7Cu) {
        ctx->pc = 0x547B80u;
        goto label_547b80;
    }
    ctx->pc = 0x547B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x547B80u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x547B80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x547B80u; }
            if (ctx->pc != 0x547B80u) { return; }
        }
        }
    }
    ctx->pc = 0x547B80u;
label_547b80:
    // 0x547b80: 0x8ee30064  lw          $v1, 0x64($s7)
    ctx->pc = 0x547b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 100)));
label_547b84:
    // 0x547b84: 0x8ee20068  lw          $v0, 0x68($s7)
    ctx->pc = 0x547b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 104)));
label_547b88:
    // 0x547b88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x547b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_547b8c:
    // 0x547b8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x547b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_547b90:
    // 0x547b90: 0x8c44013c  lw          $a0, 0x13C($v0)
    ctx->pc = 0x547b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
label_547b94:
    // 0x547b94: 0xc0506ac  jal         func_141AB0
label_547b98:
    if (ctx->pc == 0x547B98u) {
        ctx->pc = 0x547B98u;
            // 0x547b98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x547B9Cu;
        goto label_547b9c;
    }
    ctx->pc = 0x547B94u;
    SET_GPR_U32(ctx, 31, 0x547B9Cu);
    ctx->pc = 0x547B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x547B94u;
            // 0x547b98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547B9Cu; }
        if (ctx->pc != 0x547B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547B9Cu; }
        if (ctx->pc != 0x547B9Cu) { return; }
    }
    ctx->pc = 0x547B9Cu;
label_547b9c:
    // 0x547b9c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x547b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_547ba0:
    // 0x547ba0: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x547ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_547ba4:
    // 0x547ba4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x547ba4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_547ba8:
    // 0x547ba8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x547ba8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_547bac:
    // 0x547bac: 0x320f809  jalr        $t9
label_547bb0:
    if (ctx->pc == 0x547BB0u) {
        ctx->pc = 0x547BB0u;
            // 0x547bb0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x547BB4u;
        goto label_547bb4;
    }
    ctx->pc = 0x547BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x547BB4u);
        ctx->pc = 0x547BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547BACu;
            // 0x547bb0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x547BB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x547BB4u; }
            if (ctx->pc != 0x547BB4u) { return; }
        }
        }
    }
    ctx->pc = 0x547BB4u;
label_547bb4:
    // 0x547bb4: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x547bb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_547bb8:
    // 0x547bb8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x547bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_547bbc:
    // 0x547bbc: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x547bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_547bc0:
    // 0x547bc0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x547bc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_547bc4:
    // 0x547bc4: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x547bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_547bc8:
    // 0x547bc8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x547bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_547bcc:
    // 0x547bcc: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x547bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_547bd0:
    // 0x547bd0: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_547bd4:
    if (ctx->pc == 0x547BD4u) {
        ctx->pc = 0x547BD4u;
            // 0x547bd4: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x547BD8u;
        goto label_547bd8;
    }
    ctx->pc = 0x547BD0u;
    {
        const bool branch_taken_0x547bd0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x547BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547BD0u;
            // 0x547bd4: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x547bd0) {
            ctx->pc = 0x547BE4u;
            goto label_547be4;
        }
    }
    ctx->pc = 0x547BD8u;
label_547bd8:
    // 0x547bd8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x547bd8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_547bdc:
    // 0x547bdc: 0x10000008  b           . + 4 + (0x8 << 2)
label_547be0:
    if (ctx->pc == 0x547BE0u) {
        ctx->pc = 0x547BE0u;
            // 0x547be0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x547BE4u;
        goto label_547be4;
    }
    ctx->pc = 0x547BDCu;
    {
        const bool branch_taken_0x547bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x547BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547BDCu;
            // 0x547be0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x547bdc) {
            ctx->pc = 0x547C00u;
            goto label_547c00;
        }
    }
    ctx->pc = 0x547BE4u;
label_547be4:
    // 0x547be4: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x547be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_547be8:
    // 0x547be8: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x547be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_547bec:
    // 0x547bec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x547becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_547bf0:
    // 0x547bf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x547bf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_547bf4:
    // 0x547bf4: 0x0  nop
    ctx->pc = 0x547bf4u;
    // NOP
label_547bf8:
    // 0x547bf8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x547bf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_547bfc:
    // 0x547bfc: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x547bfcu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_547c00:
    // 0x547c00: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_547c04:
    if (ctx->pc == 0x547C04u) {
        ctx->pc = 0x547C04u;
            // 0x547c04: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x547C08u;
        goto label_547c08;
    }
    ctx->pc = 0x547C00u;
    {
        const bool branch_taken_0x547c00 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x547c00) {
            ctx->pc = 0x547C04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x547C00u;
            // 0x547c04: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x547C14u;
            goto label_547c14;
        }
    }
    ctx->pc = 0x547C08u;
label_547c08:
    // 0x547c08: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x547c08u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_547c0c:
    // 0x547c0c: 0x10000007  b           . + 4 + (0x7 << 2)
label_547c10:
    if (ctx->pc == 0x547C10u) {
        ctx->pc = 0x547C10u;
            // 0x547c10: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x547C14u;
        goto label_547c14;
    }
    ctx->pc = 0x547C0Cu;
    {
        const bool branch_taken_0x547c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x547C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547C0Cu;
            // 0x547c10: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x547c0c) {
            ctx->pc = 0x547C2Cu;
            goto label_547c2c;
        }
    }
    ctx->pc = 0x547C14u;
label_547c14:
    // 0x547c14: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x547c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_547c18:
    // 0x547c18: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x547c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_547c1c:
    // 0x547c1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x547c1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_547c20:
    // 0x547c20: 0x0  nop
    ctx->pc = 0x547c20u;
    // NOP
label_547c24:
    // 0x547c24: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x547c24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_547c28:
    // 0x547c28: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x547c28u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_547c2c:
    // 0x547c2c: 0x4602c380  add.s       $f14, $f24, $f2
    ctx->pc = 0x547c2cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[2]);
label_547c30:
    // 0x547c30: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x547c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_547c34:
    // 0x547c34: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x547c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_547c38:
    // 0x547c38: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x547c38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_547c3c:
    // 0x547c3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x547c3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_547c40:
    // 0x547c40: 0x4601bb41  sub.s       $f13, $f23, $f1
    ctx->pc = 0x547c40u;
    ctx->f[13] = FPU_SUB_S(ctx->f[23], ctx->f[1]);
label_547c44:
    // 0x547c44: 0x4601bbc0  add.s       $f15, $f23, $f1
    ctx->pc = 0x547c44u;
    ctx->f[15] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
label_547c48:
    // 0x547c48: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x547c48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_547c4c:
    // 0x547c4c: 0xc0bc284  jal         func_2F0A10
label_547c50:
    if (ctx->pc == 0x547C50u) {
        ctx->pc = 0x547C50u;
            // 0x547c50: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x547C54u;
        goto label_547c54;
    }
    ctx->pc = 0x547C4Cu;
    SET_GPR_U32(ctx, 31, 0x547C54u);
    ctx->pc = 0x547C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x547C4Cu;
            // 0x547c50: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547C54u; }
        if (ctx->pc != 0x547C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547C54u; }
        if (ctx->pc != 0x547C54u) { return; }
    }
    ctx->pc = 0x547C54u;
label_547c54:
    // 0x547c54: 0x2e010006  sltiu       $at, $s0, 0x6
    ctx->pc = 0x547c54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_547c58:
    // 0x547c58: 0x10200089  beqz        $at, . + 4 + (0x89 << 2)
label_547c5c:
    if (ctx->pc == 0x547C5Cu) {
        ctx->pc = 0x547C60u;
        goto label_547c60;
    }
    ctx->pc = 0x547C58u;
    {
        const bool branch_taken_0x547c58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x547c58) {
            ctx->pc = 0x547E80u;
            goto label_547e80;
        }
    }
    ctx->pc = 0x547C60u;
label_547c60:
    // 0x547c60: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x547c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_547c64:
    // 0x547c64: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x547c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_547c68:
    // 0x547c68: 0x2463e4a0  addiu       $v1, $v1, -0x1B60
    ctx->pc = 0x547c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960288));
label_547c6c:
    // 0x547c6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x547c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_547c70:
    // 0x547c70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x547c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_547c74:
    // 0x547c74: 0x400008  jr          $v0
label_547c78:
    if (ctx->pc == 0x547C78u) {
        ctx->pc = 0x547C7Cu;
        goto label_547c7c;
    }
    ctx->pc = 0x547C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x547C80u: goto label_547c80;
            case 0x547CA8u: goto label_547ca8;
            case 0x547DE0u: goto label_547de0;
            case 0x547E08u: goto label_547e08;
            case 0x547E30u: goto label_547e30;
            case 0x547E60u: goto label_547e60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x547C7Cu;
label_547c7c:
    // 0x547c7c: 0x0  nop
    ctx->pc = 0x547c7cu;
    // NOP
label_547c80:
    // 0x547c80: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x547c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_547c84:
    // 0x547c84: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x547c84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_547c88:
    // 0x547c88: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x547c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_547c8c:
    // 0x547c8c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x547c8cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_547c90:
    // 0x547c90: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x547c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_547c94:
    // 0x547c94: 0xc152430  jal         func_5490C0
label_547c98:
    if (ctx->pc == 0x547C98u) {
        ctx->pc = 0x547C98u;
            // 0x547c98: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x547C9Cu;
        goto label_547c9c;
    }
    ctx->pc = 0x547C94u;
    SET_GPR_U32(ctx, 31, 0x547C9Cu);
    ctx->pc = 0x547C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x547C94u;
            // 0x547c98: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5490C0u;
    if (runtime->hasFunction(0x5490C0u)) {
        auto targetFn = runtime->lookupFunction(0x5490C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547C9Cu; }
        if (ctx->pc != 0x547C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005490C0_0x5490c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547C9Cu; }
        if (ctx->pc != 0x547C9Cu) { return; }
    }
    ctx->pc = 0x547C9Cu;
label_547c9c:
    // 0x547c9c: 0x10000078  b           . + 4 + (0x78 << 2)
label_547ca0:
    if (ctx->pc == 0x547CA0u) {
        ctx->pc = 0x547CA4u;
        goto label_547ca4;
    }
    ctx->pc = 0x547C9Cu;
    {
        const bool branch_taken_0x547c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x547c9c) {
            ctx->pc = 0x547E80u;
            goto label_547e80;
        }
    }
    ctx->pc = 0x547CA4u;
label_547ca4:
    // 0x547ca4: 0x0  nop
    ctx->pc = 0x547ca4u;
    // NOP
label_547ca8:
    // 0x547ca8: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x547ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_547cac:
    // 0x547cac: 0x24a5da50  addiu       $a1, $a1, -0x25B0
    ctx->pc = 0x547cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957648));
label_547cb0:
    // 0x547cb0: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x547cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_547cb4:
    // 0x547cb4: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x547cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_547cb8:
    // 0x547cb8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x547cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_547cbc:
    // 0x547cbc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x547cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_547cc0:
    // 0x547cc0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x547cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_547cc4:
    // 0x547cc4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x547cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_547cc8:
    // 0x547cc8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x547cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_547ccc:
    // 0x547ccc: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
label_547cd0:
    if (ctx->pc == 0x547CD0u) {
        ctx->pc = 0x547CD4u;
        goto label_547cd4;
    }
    ctx->pc = 0x547CCCu;
    {
        const bool branch_taken_0x547ccc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x547ccc) {
            ctx->pc = 0x547CB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_547cb8;
        }
    }
    ctx->pc = 0x547CD4u;
label_547cd4:
    // 0x547cd4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x547cd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_547cd8:
    // 0x547cd8: 0x27b30160  addiu       $s3, $sp, 0x160
    ctx->pc = 0x547cd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_547cdc:
    // 0x547cdc: 0x0  nop
    ctx->pc = 0x547cdcu;
    // NOP
label_547ce0:
    // 0x547ce0: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x547ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_547ce4:
    // 0x547ce4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x547ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_547ce8:
    // 0x547ce8: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
label_547cec:
    if (ctx->pc == 0x547CECu) {
        ctx->pc = 0x547CF0u;
        goto label_547cf0;
    }
    ctx->pc = 0x547CE8u;
    {
        const bool branch_taken_0x547ce8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x547ce8) {
            ctx->pc = 0x547D18u;
            goto label_547d18;
        }
    }
    ctx->pc = 0x547CF0u;
label_547cf0:
    // 0x547cf0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x547cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_547cf4:
    // 0x547cf4: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_547cf8:
    if (ctx->pc == 0x547CF8u) {
        ctx->pc = 0x547CFCu;
        goto label_547cfc;
    }
    ctx->pc = 0x547CF4u;
    {
        const bool branch_taken_0x547cf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x547cf4) {
            ctx->pc = 0x547D18u;
            goto label_547d18;
        }
    }
    ctx->pc = 0x547CFCu;
label_547cfc:
    // 0x547cfc: 0x0  nop
    ctx->pc = 0x547cfcu;
    // NOP
label_547d00:
    // 0x547d00: 0x26a40030  addiu       $a0, $s5, 0x30
    ctx->pc = 0x547d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
label_547d04:
    // 0x547d04: 0xc0b90e0  jal         func_2E4380
label_547d08:
    if (ctx->pc == 0x547D08u) {
        ctx->pc = 0x547D08u;
            // 0x547d08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x547D0Cu;
        goto label_547d0c;
    }
    ctx->pc = 0x547D04u;
    SET_GPR_U32(ctx, 31, 0x547D0Cu);
    ctx->pc = 0x547D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x547D04u;
            // 0x547d08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547D0Cu; }
        if (ctx->pc != 0x547D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547D0Cu; }
        if (ctx->pc != 0x547D0Cu) { return; }
    }
    ctx->pc = 0x547D0Cu;
label_547d0c:
    // 0x547d0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_547d10:
    if (ctx->pc == 0x547D10u) {
        ctx->pc = 0x547D14u;
        goto label_547d14;
    }
    ctx->pc = 0x547D0Cu;
    {
        const bool branch_taken_0x547d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x547d0c) {
            ctx->pc = 0x547D28u;
            goto label_547d28;
        }
    }
    ctx->pc = 0x547D14u;
label_547d14:
    // 0x547d14: 0x0  nop
    ctx->pc = 0x547d14u;
    // NOP
label_547d18:
    // 0x547d18: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x547d18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_547d1c:
    // 0x547d1c: 0x2a82000d  slti        $v0, $s4, 0xD
    ctx->pc = 0x547d1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)13) ? 1 : 0);
label_547d20:
    // 0x547d20: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_547d24:
    if (ctx->pc == 0x547D24u) {
        ctx->pc = 0x547D24u;
            // 0x547d24: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x547D28u;
        goto label_547d28;
    }
    ctx->pc = 0x547D20u;
    {
        const bool branch_taken_0x547d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x547D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547D20u;
            // 0x547d24: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x547d20) {
            ctx->pc = 0x547CE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_547ce0;
        }
    }
    ctx->pc = 0x547D28u;
label_547d28:
    // 0x547d28: 0x26020006  addiu       $v0, $s0, 0x6
    ctx->pc = 0x547d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
label_547d2c:
    // 0x547d2c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x547d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_547d30:
    // 0x547d30: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x547d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_547d34:
    // 0x547d34: 0x2442e790  addiu       $v0, $v0, -0x1870
    ctx->pc = 0x547d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961040));
label_547d38:
    // 0x547d38: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x547d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_547d3c:
    // 0x547d3c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x547d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_547d40:
    // 0x547d40: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x547d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_547d44:
    // 0x547d44: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x547d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_547d48:
    // 0x547d48: 0x9442da00  lhu         $v0, -0x2600($v0)
    ctx->pc = 0x547d48u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957568)));
label_547d4c:
    // 0x547d4c: 0x4601ab41  sub.s       $f13, $f21, $f1
    ctx->pc = 0x547d4cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
label_547d50:
    // 0x547d50: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_547d54:
    if (ctx->pc == 0x547D54u) {
        ctx->pc = 0x547D54u;
            // 0x547d54: 0x4600b380  add.s       $f14, $f22, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->pc = 0x547D58u;
        goto label_547d58;
    }
    ctx->pc = 0x547D50u;
    {
        const bool branch_taken_0x547d50 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x547D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547D50u;
            // 0x547d54: 0x4600b380  add.s       $f14, $f22, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x547d50) {
            ctx->pc = 0x547D64u;
            goto label_547d64;
        }
    }
    ctx->pc = 0x547D58u;
label_547d58:
    // 0x547d58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x547d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_547d5c:
    // 0x547d5c: 0x10000008  b           . + 4 + (0x8 << 2)
label_547d60:
    if (ctx->pc == 0x547D60u) {
        ctx->pc = 0x547D60u;
            // 0x547d60: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x547D64u;
        goto label_547d64;
    }
    ctx->pc = 0x547D5Cu;
    {
        const bool branch_taken_0x547d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x547D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547D5Cu;
            // 0x547d60: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x547d5c) {
            ctx->pc = 0x547D80u;
            goto label_547d80;
        }
    }
    ctx->pc = 0x547D64u;
label_547d64:
    // 0x547d64: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x547d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_547d68:
    // 0x547d68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x547d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_547d6c:
    // 0x547d6c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x547d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_547d70:
    // 0x547d70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x547d70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_547d74:
    // 0x547d74: 0x0  nop
    ctx->pc = 0x547d74u;
    // NOP
label_547d78:
    // 0x547d78: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x547d78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_547d7c:
    // 0x547d7c: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x547d7cu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_547d80:
    // 0x547d80: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x547d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_547d84:
    // 0x547d84: 0x9442da02  lhu         $v0, -0x25FE($v0)
    ctx->pc = 0x547d84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957570)));
label_547d88:
    // 0x547d88: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_547d8c:
    if (ctx->pc == 0x547D8Cu) {
        ctx->pc = 0x547D8Cu;
            // 0x547d8c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x547D90u;
        goto label_547d90;
    }
    ctx->pc = 0x547D88u;
    {
        const bool branch_taken_0x547d88 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x547d88) {
            ctx->pc = 0x547D8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x547D88u;
            // 0x547d8c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x547D9Cu;
            goto label_547d9c;
        }
    }
    ctx->pc = 0x547D90u;
label_547d90:
    // 0x547d90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x547d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_547d94:
    // 0x547d94: 0x10000007  b           . + 4 + (0x7 << 2)
label_547d98:
    if (ctx->pc == 0x547D98u) {
        ctx->pc = 0x547D98u;
            // 0x547d98: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x547D9Cu;
        goto label_547d9c;
    }
    ctx->pc = 0x547D94u;
    {
        const bool branch_taken_0x547d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x547D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547D94u;
            // 0x547d98: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x547d94) {
            ctx->pc = 0x547DB4u;
            goto label_547db4;
        }
    }
    ctx->pc = 0x547D9Cu;
label_547d9c:
    // 0x547d9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x547d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_547da0:
    // 0x547da0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x547da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_547da4:
    // 0x547da4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x547da4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_547da8:
    // 0x547da8: 0x0  nop
    ctx->pc = 0x547da8u;
    // NOP
label_547dac:
    // 0x547dac: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x547dacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_547db0:
    // 0x547db0: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x547db0u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_547db4:
    // 0x547db4: 0x46016bc0  add.s       $f15, $f13, $f1
    ctx->pc = 0x547db4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
label_547db8:
    // 0x547db8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x547db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_547dbc:
    // 0x547dbc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x547dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_547dc0:
    // 0x547dc0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x547dc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_547dc4:
    // 0x547dc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x547dc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_547dc8:
    // 0x547dc8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x547dc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_547dcc:
    // 0x547dcc: 0xc0bc284  jal         func_2F0A10
label_547dd0:
    if (ctx->pc == 0x547DD0u) {
        ctx->pc = 0x547DD0u;
            // 0x547dd0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x547DD4u;
        goto label_547dd4;
    }
    ctx->pc = 0x547DCCu;
    SET_GPR_U32(ctx, 31, 0x547DD4u);
    ctx->pc = 0x547DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x547DCCu;
            // 0x547dd0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547DD4u; }
        if (ctx->pc != 0x547DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547DD4u; }
        if (ctx->pc != 0x547DD4u) { return; }
    }
    ctx->pc = 0x547DD4u;
label_547dd4:
    // 0x547dd4: 0x1000002a  b           . + 4 + (0x2A << 2)
label_547dd8:
    if (ctx->pc == 0x547DD8u) {
        ctx->pc = 0x547DDCu;
        goto label_547ddc;
    }
    ctx->pc = 0x547DD4u;
    {
        const bool branch_taken_0x547dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x547dd4) {
            ctx->pc = 0x547E80u;
            goto label_547e80;
        }
    }
    ctx->pc = 0x547DDCu;
label_547ddc:
    // 0x547ddc: 0x0  nop
    ctx->pc = 0x547ddcu;
    // NOP
label_547de0:
    // 0x547de0: 0xc120800  jal         func_482000
label_547de4:
    if (ctx->pc == 0x547DE4u) {
        ctx->pc = 0x547DE4u;
            // 0x547de4: 0x26a4003c  addiu       $a0, $s5, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 60));
        ctx->pc = 0x547DE8u;
        goto label_547de8;
    }
    ctx->pc = 0x547DE0u;
    SET_GPR_U32(ctx, 31, 0x547DE8u);
    ctx->pc = 0x547DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x547DE0u;
            // 0x547de4: 0x26a4003c  addiu       $a0, $s5, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x482000u;
    if (runtime->hasFunction(0x482000u)) {
        auto targetFn = runtime->lookupFunction(0x482000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547DE8u; }
        if (ctx->pc != 0x547DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00482000_0x482000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547DE8u; }
        if (ctx->pc != 0x547DE8u) { return; }
    }
    ctx->pc = 0x547DE8u;
label_547de8:
    // 0x547de8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x547de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_547dec:
    // 0x547dec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x547decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_547df0:
    // 0x547df0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x547df0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_547df4:
    // 0x547df4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x547df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_547df8:
    // 0x547df8: 0xc152380  jal         func_548E00
label_547dfc:
    if (ctx->pc == 0x547DFCu) {
        ctx->pc = 0x547DFCu;
            // 0x547dfc: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x547E00u;
        goto label_547e00;
    }
    ctx->pc = 0x547DF8u;
    SET_GPR_U32(ctx, 31, 0x547E00u);
    ctx->pc = 0x547DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x547DF8u;
            // 0x547dfc: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x548E00u;
    if (runtime->hasFunction(0x548E00u)) {
        auto targetFn = runtime->lookupFunction(0x548E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547E00u; }
        if (ctx->pc != 0x547E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00548E00_0x548e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547E00u; }
        if (ctx->pc != 0x547E00u) { return; }
    }
    ctx->pc = 0x547E00u;
label_547e00:
    // 0x547e00: 0x1000001f  b           . + 4 + (0x1F << 2)
label_547e04:
    if (ctx->pc == 0x547E04u) {
        ctx->pc = 0x547E08u;
        goto label_547e08;
    }
    ctx->pc = 0x547E00u;
    {
        const bool branch_taken_0x547e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x547e00) {
            ctx->pc = 0x547E80u;
            goto label_547e80;
        }
    }
    ctx->pc = 0x547E08u;
label_547e08:
    // 0x547e08: 0xc120800  jal         func_482000
label_547e0c:
    if (ctx->pc == 0x547E0Cu) {
        ctx->pc = 0x547E0Cu;
            // 0x547e0c: 0x26a40018  addiu       $a0, $s5, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
        ctx->pc = 0x547E10u;
        goto label_547e10;
    }
    ctx->pc = 0x547E08u;
    SET_GPR_U32(ctx, 31, 0x547E10u);
    ctx->pc = 0x547E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x547E08u;
            // 0x547e0c: 0x26a40018  addiu       $a0, $s5, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x482000u;
    if (runtime->hasFunction(0x482000u)) {
        auto targetFn = runtime->lookupFunction(0x482000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547E10u; }
        if (ctx->pc != 0x547E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00482000_0x482000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547E10u; }
        if (ctx->pc != 0x547E10u) { return; }
    }
    ctx->pc = 0x547E10u;
label_547e10:
    // 0x547e10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x547e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_547e14:
    // 0x547e14: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x547e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_547e18:
    // 0x547e18: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x547e18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_547e1c:
    // 0x547e1c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x547e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_547e20:
    // 0x547e20: 0xc152308  jal         func_548C20
label_547e24:
    if (ctx->pc == 0x547E24u) {
        ctx->pc = 0x547E24u;
            // 0x547e24: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x547E28u;
        goto label_547e28;
    }
    ctx->pc = 0x547E20u;
    SET_GPR_U32(ctx, 31, 0x547E28u);
    ctx->pc = 0x547E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x547E20u;
            // 0x547e24: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x548C20u;
    if (runtime->hasFunction(0x548C20u)) {
        auto targetFn = runtime->lookupFunction(0x548C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547E28u; }
        if (ctx->pc != 0x547E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00548C20_0x548c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547E28u; }
        if (ctx->pc != 0x547E28u) { return; }
    }
    ctx->pc = 0x547E28u;
label_547e28:
    // 0x547e28: 0x10000015  b           . + 4 + (0x15 << 2)
label_547e2c:
    if (ctx->pc == 0x547E2Cu) {
        ctx->pc = 0x547E30u;
        goto label_547e30;
    }
    ctx->pc = 0x547E28u;
    {
        const bool branch_taken_0x547e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x547e28) {
            ctx->pc = 0x547E80u;
            goto label_547e80;
        }
    }
    ctx->pc = 0x547E30u;
label_547e30:
    // 0x547e30: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x547e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_547e34:
    // 0x547e34: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x547e34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_547e38:
    // 0x547e38: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x547e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_547e3c:
    // 0x547e3c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x547e3cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_547e40:
    // 0x547e40: 0x9445044c  lhu         $a1, 0x44C($v0)
    ctx->pc = 0x547e40u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1100)));
label_547e44:
    // 0x547e44: 0x9046044e  lbu         $a2, 0x44E($v0)
    ctx->pc = 0x547e44u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1102)));
label_547e48:
    // 0x547e48: 0x9047044f  lbu         $a3, 0x44F($v0)
    ctx->pc = 0x547e48u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1103)));
label_547e4c:
    // 0x547e4c: 0xc15213c  jal         func_5484F0
label_547e50:
    if (ctx->pc == 0x547E50u) {
        ctx->pc = 0x547E50u;
            // 0x547e50: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x547E54u;
        goto label_547e54;
    }
    ctx->pc = 0x547E4Cu;
    SET_GPR_U32(ctx, 31, 0x547E54u);
    ctx->pc = 0x547E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x547E4Cu;
            // 0x547e50: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5484F0u;
    if (runtime->hasFunction(0x5484F0u)) {
        auto targetFn = runtime->lookupFunction(0x5484F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547E54u; }
        if (ctx->pc != 0x547E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005484F0_0x5484f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547E54u; }
        if (ctx->pc != 0x547E54u) { return; }
    }
    ctx->pc = 0x547E54u;
label_547e54:
    // 0x547e54: 0x1000000a  b           . + 4 + (0xA << 2)
label_547e58:
    if (ctx->pc == 0x547E58u) {
        ctx->pc = 0x547E5Cu;
        goto label_547e5c;
    }
    ctx->pc = 0x547E54u;
    {
        const bool branch_taken_0x547e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x547e54) {
            ctx->pc = 0x547E80u;
            goto label_547e80;
        }
    }
    ctx->pc = 0x547E5Cu;
label_547e5c:
    // 0x547e5c: 0x0  nop
    ctx->pc = 0x547e5cu;
    // NOP
label_547e60:
    // 0x547e60: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x547e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_547e64:
    // 0x547e64: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x547e64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_547e68:
    // 0x547e68: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x547e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_547e6c:
    // 0x547e6c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x547e6cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_547e70:
    // 0x547e70: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x547e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_547e74:
    // 0x547e74: 0xc152098  jal         func_548260
label_547e78:
    if (ctx->pc == 0x547E78u) {
        ctx->pc = 0x547E78u;
            // 0x547e78: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x547E7Cu;
        goto label_547e7c;
    }
    ctx->pc = 0x547E74u;
    SET_GPR_U32(ctx, 31, 0x547E7Cu);
    ctx->pc = 0x547E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x547E74u;
            // 0x547e78: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x548260u;
    if (runtime->hasFunction(0x548260u)) {
        auto targetFn = runtime->lookupFunction(0x548260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547E7Cu; }
        if (ctx->pc != 0x547E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00548260_0x548260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547E7Cu; }
        if (ctx->pc != 0x547E7Cu) { return; }
    }
    ctx->pc = 0x547E7Cu;
label_547e7c:
    // 0x547e7c: 0x0  nop
    ctx->pc = 0x547e7cu;
    // NOP
label_547e80:
    // 0x547e80: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x547e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_547e84:
    // 0x547e84: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x547e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_547e88:
    // 0x547e88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x547e88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_547e8c:
    // 0x547e8c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x547e8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_547e90:
    // 0x547e90: 0x320f809  jalr        $t9
label_547e94:
    if (ctx->pc == 0x547E94u) {
        ctx->pc = 0x547E98u;
        goto label_547e98;
    }
    ctx->pc = 0x547E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x547E98u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x547E98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x547E98u; }
            if (ctx->pc != 0x547E98u) { return; }
        }
        }
    }
    ctx->pc = 0x547E98u;
label_547e98:
    // 0x547e98: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x547e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_547e9c:
    // 0x547e9c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x547e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_547ea0:
    // 0x547ea0: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x547ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_547ea4:
    // 0x547ea4: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x547ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_547ea8:
    // 0x547ea8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x547ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_547eac:
    // 0x547eac: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x547eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_547eb0:
    // 0x547eb0: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x547eb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_547eb4:
    // 0x547eb4: 0x5460fe79  bnel        $v1, $zero, . + 4 + (-0x187 << 2)
label_547eb8:
    if (ctx->pc == 0x547EB8u) {
        ctx->pc = 0x547EB8u;
            // 0x547eb8: 0x8fa200f0  lw          $v0, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->pc = 0x547EBCu;
        goto label_547ebc;
    }
    ctx->pc = 0x547EB4u;
    {
        const bool branch_taken_0x547eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x547eb4) {
            ctx->pc = 0x547EB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x547EB4u;
            // 0x547eb8: 0x8fa200f0  lw          $v0, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54789Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_54789c;
        }
    }
    ctx->pc = 0x547EBCu;
label_547ebc:
    // 0x547ebc: 0x100000d7  b           . + 4 + (0xD7 << 2)
label_547ec0:
    if (ctx->pc == 0x547EC0u) {
        ctx->pc = 0x547EC4u;
        goto label_547ec4;
    }
    ctx->pc = 0x547EBCu;
    {
        const bool branch_taken_0x547ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x547ebc) {
            ctx->pc = 0x54821Cu;
            goto label_54821c;
        }
    }
    ctx->pc = 0x547EC4u;
label_547ec4:
    // 0x547ec4: 0x8ee30068  lw          $v1, 0x68($s7)
    ctx->pc = 0x547ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 104)));
label_547ec8:
    // 0x547ec8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x547ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_547ecc:
    // 0x547ecc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x547eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_547ed0:
    // 0x547ed0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x547ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_547ed4:
    // 0x547ed4: 0xc0506ac  jal         func_141AB0
label_547ed8:
    if (ctx->pc == 0x547ED8u) {
        ctx->pc = 0x547ED8u;
            // 0x547ed8: 0x8c44012c  lw          $a0, 0x12C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
        ctx->pc = 0x547EDCu;
        goto label_547edc;
    }
    ctx->pc = 0x547ED4u;
    SET_GPR_U32(ctx, 31, 0x547EDCu);
    ctx->pc = 0x547ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x547ED4u;
            // 0x547ed8: 0x8c44012c  lw          $a0, 0x12C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547EDCu; }
        if (ctx->pc != 0x547EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547EDCu; }
        if (ctx->pc != 0x547EDCu) { return; }
    }
    ctx->pc = 0x547EDCu;
label_547edc:
    // 0x547edc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x547edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_547ee0:
    // 0x547ee0: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x547ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_547ee4:
    // 0x547ee4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x547ee4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_547ee8:
    // 0x547ee8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x547ee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_547eec:
    // 0x547eec: 0x320f809  jalr        $t9
label_547ef0:
    if (ctx->pc == 0x547EF0u) {
        ctx->pc = 0x547EF0u;
            // 0x547ef0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x547EF4u;
        goto label_547ef4;
    }
    ctx->pc = 0x547EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x547EF4u);
        ctx->pc = 0x547EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547EECu;
            // 0x547ef0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x547EF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x547EF4u; }
            if (ctx->pc != 0x547EF4u) { return; }
        }
        }
    }
    ctx->pc = 0x547EF4u;
label_547ef4:
    // 0x547ef4: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x547ef4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_547ef8:
    // 0x547ef8: 0x131843  sra         $v1, $s3, 1
    ctx->pc = 0x547ef8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 19), 1));
label_547efc:
    // 0x547efc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x547efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_547f00:
    // 0x547f00: 0x24450260  addiu       $a1, $v0, 0x260
    ctx->pc = 0x547f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
label_547f04:
    // 0x547f04: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x547f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_547f08:
    // 0x547f08: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x547f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_547f0c:
    // 0x547f0c: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x547f0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_547f10:
    // 0x547f10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x547f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_547f14:
    // 0x547f14: 0x0  nop
    ctx->pc = 0x547f14u;
    // NOP
label_547f18:
    // 0x547f18: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x547f18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_547f1c:
    // 0x547f1c: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x547f1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_547f20:
    // 0x547f20: 0xc4430268  lwc1        $f3, 0x268($v0)
    ctx->pc = 0x547f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_547f24:
    // 0x547f24: 0xc442026c  lwc1        $f2, 0x26C($v0)
    ctx->pc = 0x547f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_547f28:
    // 0x547f28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x547f28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_547f2c:
    // 0x547f2c: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x547f2cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_547f30:
    // 0x547f30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x547f30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_547f34:
    // 0x547f34: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x547f34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_547f38:
    // 0x547f38: 0x46030b01  sub.s       $f12, $f1, $f3
    ctx->pc = 0x547f38u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_547f3c:
    // 0x547f3c: 0x46030b80  add.s       $f14, $f1, $f3
    ctx->pc = 0x547f3cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_547f40:
    // 0x547f40: 0x46020341  sub.s       $f13, $f0, $f2
    ctx->pc = 0x547f40u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_547f44:
    // 0x547f44: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_547f48:
    if (ctx->pc == 0x547F48u) {
        ctx->pc = 0x547F48u;
            // 0x547f48: 0x460203c0  add.s       $f15, $f0, $f2 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x547F4Cu;
        goto label_547f4c;
    }
    ctx->pc = 0x547F44u;
    {
        const bool branch_taken_0x547f44 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x547F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547F44u;
            // 0x547f48: 0x460203c0  add.s       $f15, $f0, $f2 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x547f44) {
            ctx->pc = 0x547F58u;
            goto label_547f58;
        }
    }
    ctx->pc = 0x547F4Cu;
label_547f4c:
    // 0x547f4c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x547f4cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_547f50:
    // 0x547f50: 0x10000008  b           . + 4 + (0x8 << 2)
label_547f54:
    if (ctx->pc == 0x547F54u) {
        ctx->pc = 0x547F54u;
            // 0x547f54: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x547F58u;
        goto label_547f58;
    }
    ctx->pc = 0x547F50u;
    {
        const bool branch_taken_0x547f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x547F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547F50u;
            // 0x547f54: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x547f50) {
            ctx->pc = 0x547F74u;
            goto label_547f74;
        }
    }
    ctx->pc = 0x547F58u;
label_547f58:
    // 0x547f58: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x547f58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_547f5c:
    // 0x547f5c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x547f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_547f60:
    // 0x547f60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x547f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_547f64:
    // 0x547f64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x547f64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_547f68:
    // 0x547f68: 0x0  nop
    ctx->pc = 0x547f68u;
    // NOP
label_547f6c:
    // 0x547f6c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x547f6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_547f70:
    // 0x547f70: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x547f70u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_547f74:
    // 0x547f74: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_547f78:
    if (ctx->pc == 0x547F78u) {
        ctx->pc = 0x547F78u;
            // 0x547f78: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x547F7Cu;
        goto label_547f7c;
    }
    ctx->pc = 0x547F74u;
    {
        const bool branch_taken_0x547f74 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x547f74) {
            ctx->pc = 0x547F78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x547F74u;
            // 0x547f78: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x547F88u;
            goto label_547f88;
        }
    }
    ctx->pc = 0x547F7Cu;
label_547f7c:
    // 0x547f7c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x547f7cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_547f80:
    // 0x547f80: 0x10000007  b           . + 4 + (0x7 << 2)
label_547f84:
    if (ctx->pc == 0x547F84u) {
        ctx->pc = 0x547F84u;
            // 0x547f84: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x547F88u;
        goto label_547f88;
    }
    ctx->pc = 0x547F80u;
    {
        const bool branch_taken_0x547f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x547F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547F80u;
            // 0x547f84: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x547f80) {
            ctx->pc = 0x547FA0u;
            goto label_547fa0;
        }
    }
    ctx->pc = 0x547F88u;
label_547f88:
    // 0x547f88: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x547f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_547f8c:
    // 0x547f8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x547f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_547f90:
    // 0x547f90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x547f90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_547f94:
    // 0x547f94: 0x0  nop
    ctx->pc = 0x547f94u;
    // NOP
label_547f98:
    // 0x547f98: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x547f98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_547f9c:
    // 0x547f9c: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x547f9cu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_547fa0:
    // 0x547fa0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x547fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_547fa4:
    // 0x547fa4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x547fa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_547fa8:
    // 0x547fa8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x547fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_547fac:
    // 0x547fac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x547facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_547fb0:
    // 0x547fb0: 0xc0bc284  jal         func_2F0A10
label_547fb4:
    if (ctx->pc == 0x547FB4u) {
        ctx->pc = 0x547FB4u;
            // 0x547fb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x547FB8u;
        goto label_547fb8;
    }
    ctx->pc = 0x547FB0u;
    SET_GPR_U32(ctx, 31, 0x547FB8u);
    ctx->pc = 0x547FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x547FB0u;
            // 0x547fb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547FB8u; }
        if (ctx->pc != 0x547FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547FB8u; }
        if (ctx->pc != 0x547FB8u) { return; }
    }
    ctx->pc = 0x547FB8u;
label_547fb8:
    // 0x547fb8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x547fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_547fbc:
    // 0x547fbc: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x547fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_547fc0:
    // 0x547fc0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x547fc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_547fc4:
    // 0x547fc4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x547fc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_547fc8:
    // 0x547fc8: 0x320f809  jalr        $t9
label_547fcc:
    if (ctx->pc == 0x547FCCu) {
        ctx->pc = 0x547FD0u;
        goto label_547fd0;
    }
    ctx->pc = 0x547FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x547FD0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x547FD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x547FD0u; }
            if (ctx->pc != 0x547FD0u) { return; }
        }
        }
    }
    ctx->pc = 0x547FD0u;
label_547fd0:
    // 0x547fd0: 0x10000092  b           . + 4 + (0x92 << 2)
label_547fd4:
    if (ctx->pc == 0x547FD4u) {
        ctx->pc = 0x547FD8u;
        goto label_547fd8;
    }
    ctx->pc = 0x547FD0u;
    {
        const bool branch_taken_0x547fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x547fd0) {
            ctx->pc = 0x54821Cu;
            goto label_54821c;
        }
    }
    ctx->pc = 0x547FD8u;
label_547fd8:
    // 0x547fd8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x547fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_547fdc:
    // 0x547fdc: 0x131043  sra         $v0, $s3, 1
    ctx->pc = 0x547fdcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 19), 1));
label_547fe0:
    // 0x547fe0: 0xc462da88  lwc1        $f2, -0x2578($v1)
    ctx->pc = 0x547fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_547fe4:
    // 0x547fe4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x547fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_547fe8:
    // 0x547fe8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x547fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_547fec:
    // 0x547fec: 0xc441da8c  lwc1        $f1, -0x2574($v0)
    ctx->pc = 0x547fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_547ff0:
    // 0x547ff0: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x547ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_547ff4:
    // 0x547ff4: 0xc460da90  lwc1        $f0, -0x2570($v1)
    ctx->pc = 0x547ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_547ff8:
    // 0x547ff8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x547ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_547ffc:
    // 0x547ffc: 0xe7a201a0  swc1        $f2, 0x1A0($sp)
    ctx->pc = 0x547ffcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_548000:
    // 0x548000: 0x8c430e68  lw          $v1, 0xE68($v0)
    ctx->pc = 0x548000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_548004:
    // 0x548004: 0xe7a101a4  swc1        $f1, 0x1A4($sp)
    ctx->pc = 0x548004u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_548008:
    // 0x548008: 0xe7a001a8  swc1        $f0, 0x1A8($sp)
    ctx->pc = 0x548008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_54800c:
    // 0x54800c: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x54800cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_548010:
    // 0x548010: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x548010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_548014:
    // 0x548014: 0x34443333  ori         $a0, $v0, 0x3333
    ctx->pc = 0x548014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_548018:
    // 0x548018: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x548018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54801c:
    // 0x54801c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x54801cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_548020:
    // 0x548020: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x548020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_548024:
    // 0x548024: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x548024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_548028:
    // 0x548028: 0xc4b40004  lwc1        $f20, 0x4($a1)
    ctx->pc = 0x548028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_54802c:
    // 0x54802c: 0x16c20019  bne         $s6, $v0, . + 4 + (0x19 << 2)
label_548030:
    if (ctx->pc == 0x548030u) {
        ctx->pc = 0x548030u;
            // 0x548030: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->pc = 0x548034u;
        goto label_548034;
    }
    ctx->pc = 0x54802Cu;
    {
        const bool branch_taken_0x54802c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x548030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54802Cu;
            // 0x548030: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54802c) {
            ctx->pc = 0x548094u;
            goto label_548094;
        }
    }
    ctx->pc = 0x548034u;
label_548034:
    // 0x548034: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x548034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_548038:
    // 0x548038: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x548038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_54803c:
    // 0x54803c: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x54803cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_548040:
    // 0x548040: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_548044:
    if (ctx->pc == 0x548044u) {
        ctx->pc = 0x548044u;
            // 0x548044: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x548048u;
        goto label_548048;
    }
    ctx->pc = 0x548040u;
    {
        const bool branch_taken_0x548040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x548044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548040u;
            // 0x548044: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x548040) {
            ctx->pc = 0x548064u;
            goto label_548064;
        }
    }
    ctx->pc = 0x548048u;
label_548048:
    // 0x548048: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x548048u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_54804c:
    // 0x54804c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x54804cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_548050:
    // 0x548050: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x548050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_548054:
    // 0x548054: 0x0  nop
    ctx->pc = 0x548054u;
    // NOP
label_548058:
    // 0x548058: 0x0  nop
    ctx->pc = 0x548058u;
    // NOP
label_54805c:
    // 0x54805c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_548060:
    if (ctx->pc == 0x548060u) {
        ctx->pc = 0x548064u;
        goto label_548064;
    }
    ctx->pc = 0x54805Cu;
    {
        const bool branch_taken_0x54805c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x54805c) {
            ctx->pc = 0x548048u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_548048;
        }
    }
    ctx->pc = 0x548064u;
label_548064:
    // 0x548064: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x548064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_548068:
    // 0x548068: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x548068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_54806c:
    // 0x54806c: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x54806cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
label_548070:
    // 0x548070: 0xafa30144  sw          $v1, 0x144($sp)
    ctx->pc = 0x548070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 3));
label_548074:
    // 0x548074: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x548074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_548078:
    // 0x548078: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x548078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
label_54807c:
    // 0x54807c: 0xafa3014c  sw          $v1, 0x14C($sp)
    ctx->pc = 0x54807cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 3));
label_548080:
    // 0x548080: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x548080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
label_548084:
    // 0x548084: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x548084u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_548088:
    // 0x548088: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x548088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_54808c:
    // 0x54808c: 0x10000019  b           . + 4 + (0x19 << 2)
label_548090:
    if (ctx->pc == 0x548090u) {
        ctx->pc = 0x548090u;
            // 0x548090: 0xac430020  sw          $v1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
        ctx->pc = 0x548094u;
        goto label_548094;
    }
    ctx->pc = 0x54808Cu;
    {
        const bool branch_taken_0x54808c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x548090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54808Cu;
            // 0x548090: 0xac430020  sw          $v1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54808c) {
            ctx->pc = 0x5480F4u;
            goto label_5480f4;
        }
    }
    ctx->pc = 0x548094u;
label_548094:
    // 0x548094: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x548094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_548098:
    // 0x548098: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x548098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_54809c:
    // 0x54809c: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x54809cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_5480a0:
    // 0x5480a0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_5480a4:
    if (ctx->pc == 0x5480A4u) {
        ctx->pc = 0x5480A4u;
            // 0x5480a4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x5480A8u;
        goto label_5480a8;
    }
    ctx->pc = 0x5480A0u;
    {
        const bool branch_taken_0x5480a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x5480A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5480A0u;
            // 0x5480a4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5480a0) {
            ctx->pc = 0x5480C4u;
            goto label_5480c4;
        }
    }
    ctx->pc = 0x5480A8u;
label_5480a8:
    // 0x5480a8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x5480a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_5480ac:
    // 0x5480ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x5480acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_5480b0:
    // 0x5480b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x5480b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_5480b4:
    // 0x5480b4: 0x0  nop
    ctx->pc = 0x5480b4u;
    // NOP
label_5480b8:
    // 0x5480b8: 0x0  nop
    ctx->pc = 0x5480b8u;
    // NOP
label_5480bc:
    // 0x5480bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_5480c0:
    if (ctx->pc == 0x5480C0u) {
        ctx->pc = 0x5480C4u;
        goto label_5480c4;
    }
    ctx->pc = 0x5480BCu;
    {
        const bool branch_taken_0x5480bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5480bc) {
            ctx->pc = 0x5480A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5480a8;
        }
    }
    ctx->pc = 0x5480C4u;
label_5480c4:
    // 0x5480c4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x5480c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_5480c8:
    // 0x5480c8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x5480c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_5480cc:
    // 0x5480cc: 0xafa3013c  sw          $v1, 0x13C($sp)
    ctx->pc = 0x5480ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 3));
label_5480d0:
    // 0x5480d0: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x5480d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_5480d4:
    // 0x5480d4: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x5480d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_5480d8:
    // 0x5480d8: 0xafa40130  sw          $a0, 0x130($sp)
    ctx->pc = 0x5480d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
label_5480dc:
    // 0x5480dc: 0xafa40134  sw          $a0, 0x134($sp)
    ctx->pc = 0x5480dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 4));
label_5480e0:
    // 0x5480e0: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x5480e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
label_5480e4:
    // 0x5480e4: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x5480e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
label_5480e8:
    // 0x5480e8: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x5480e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
label_5480ec:
    // 0x5480ec: 0xafa40138  sw          $a0, 0x138($sp)
    ctx->pc = 0x5480ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 4));
label_5480f0:
    // 0x5480f0: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x5480f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
label_5480f4:
    // 0x5480f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5480f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5480f8:
    // 0x5480f8: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x5480f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_5480fc:
    // 0x5480fc: 0x8c520e68  lw          $s2, 0xE68($v0)
    ctx->pc = 0x5480fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_548100:
    // 0x548100: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x548100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_548104:
    // 0x548104: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x548104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_548108:
    // 0x548108: 0x27a701a0  addiu       $a3, $sp, 0x1A0
    ctx->pc = 0x548108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_54810c:
    // 0x54810c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x54810cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_548110:
    // 0x548110: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x548110u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_548114:
    // 0x548114: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x548114u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_548118:
    // 0x548118: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x548118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_54811c:
    // 0x54811c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x54811cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_548120:
    // 0x548120: 0xc0ee398  jal         func_3B8E60
label_548124:
    if (ctx->pc == 0x548124u) {
        ctx->pc = 0x548124u;
            // 0x548124: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x548128u;
        goto label_548128;
    }
    ctx->pc = 0x548120u;
    SET_GPR_U32(ctx, 31, 0x548128u);
    ctx->pc = 0x548124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x548120u;
            // 0x548124: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8E60u;
    if (runtime->hasFunction(0x3B8E60u)) {
        auto targetFn = runtime->lookupFunction(0x3B8E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x548128u; }
        if (ctx->pc != 0x548128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8E60_0x3b8e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x548128u; }
        if (ctx->pc != 0x548128u) { return; }
    }
    ctx->pc = 0x548128u;
label_548128:
    // 0x548128: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x548128u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_54812c:
    // 0x54812c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x54812cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_548130:
    // 0x548130: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x548130u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
label_548134:
    // 0x548134: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x548134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_548138:
    // 0x548138: 0xc7a40158  lwc1        $f4, 0x158($sp)
    ctx->pc = 0x548138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_54813c:
    // 0x54813c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x54813cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_548140:
    // 0x548140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x548140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_548144:
    // 0x548144: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x548144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_548148:
    // 0x548148: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x548148u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_54814c:
    // 0x54814c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54814cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_548150:
    // 0x548150: 0x8c510e68  lw          $s1, 0xE68($v0)
    ctx->pc = 0x548150u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_548154:
    // 0x548154: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x548154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_548158:
    // 0x548158: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x548158u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54815c:
    // 0x54815c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x54815cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_548160:
    // 0x548160: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x548160u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_548164:
    // 0x548164: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x548164u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_548168:
    // 0x548168: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x548168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_54816c:
    // 0x54816c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x54816cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_548170:
    // 0x548170: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x548170u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_548174:
    // 0x548174: 0x0  nop
    ctx->pc = 0x548174u;
    // NOP
label_548178:
    // 0x548178: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x548178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54817c:
    // 0x54817c: 0xc7a1015c  lwc1        $f1, 0x15C($sp)
    ctx->pc = 0x54817cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_548180:
    // 0x548180: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x548180u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_548184:
    // 0x548184: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x548184u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_548188:
    // 0x548188: 0x460428dd  msub.s      $f3, $f5, $f4
    ctx->pc = 0x548188u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
label_54818c:
    // 0x54818c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x54818cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_548190:
    // 0x548190: 0x4601281d  msub.s      $f0, $f5, $f1
    ctx->pc = 0x548190u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_548194:
    // 0x548194: 0xe7a301a0  swc1        $f3, 0x1A0($sp)
    ctx->pc = 0x548194u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_548198:
    // 0x548198: 0xe7a001a4  swc1        $f0, 0x1A4($sp)
    ctx->pc = 0x548198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_54819c:
    // 0x54819c: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x54819cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_5481a0:
    // 0x5481a0: 0xc0ee334  jal         func_3B8CD0
label_5481a4:
    if (ctx->pc == 0x5481A4u) {
        ctx->pc = 0x5481A4u;
            // 0x5481a4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x5481A8u;
        goto label_5481a8;
    }
    ctx->pc = 0x5481A0u;
    SET_GPR_U32(ctx, 31, 0x5481A8u);
    ctx->pc = 0x5481A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5481A0u;
            // 0x5481a4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8CD0u;
    if (runtime->hasFunction(0x3B8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5481A8u; }
        if (ctx->pc != 0x5481A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8CD0_0x3b8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5481A8u; }
        if (ctx->pc != 0x5481A8u) { return; }
    }
    ctx->pc = 0x5481A8u;
label_5481a8:
    // 0x5481a8: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x5481a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
label_5481ac:
    // 0x5481ac: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x5481acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_5481b0:
    // 0x5481b0: 0x8c660e68  lw          $a2, 0xE68($v1)
    ctx->pc = 0x5481b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
label_5481b4:
    // 0x5481b4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x5481b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_5481b8:
    // 0x5481b8: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x5481b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_5481bc:
    // 0x5481bc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x5481bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_5481c0:
    // 0x5481c0: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x5481c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_5481c4:
    // 0x5481c4: 0xe4d40004  swc1        $f20, 0x4($a2)
    ctx->pc = 0x5481c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_5481c8:
    // 0x5481c8: 0x8c630e68  lw          $v1, 0xE68($v1)
    ctx->pc = 0x5481c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
label_5481cc:
    // 0x5481cc: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_5481d0:
    if (ctx->pc == 0x5481D0u) {
        ctx->pc = 0x5481D0u;
            // 0x5481d0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x5481D4u;
        goto label_5481d4;
    }
    ctx->pc = 0x5481CCu;
    {
        const bool branch_taken_0x5481cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x5481D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5481CCu;
            // 0x5481d0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5481cc) {
            ctx->pc = 0x5481F0u;
            goto label_5481f0;
        }
    }
    ctx->pc = 0x5481D4u;
label_5481d4:
    // 0x5481d4: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x5481d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
label_5481d8:
    // 0x5481d8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x5481d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_5481dc:
    // 0x5481dc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x5481dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_5481e0:
    // 0x5481e0: 0x0  nop
    ctx->pc = 0x5481e0u;
    // NOP
label_5481e4:
    // 0x5481e4: 0x0  nop
    ctx->pc = 0x5481e4u;
    // NOP
label_5481e8:
    // 0x5481e8: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_5481ec:
    if (ctx->pc == 0x5481ECu) {
        ctx->pc = 0x5481F0u;
        goto label_5481f0;
    }
    ctx->pc = 0x5481E8u;
    {
        const bool branch_taken_0x5481e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x5481e8) {
            ctx->pc = 0x5481D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5481d4;
        }
    }
    ctx->pc = 0x5481F0u;
label_5481f0:
    // 0x5481f0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x5481f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_5481f4:
    // 0x5481f4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x5481f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_5481f8:
    // 0x5481f8: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x5481f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
label_5481fc:
    // 0x5481fc: 0xafa40124  sw          $a0, 0x124($sp)
    ctx->pc = 0x5481fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 4));
label_548200:
    // 0x548200: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x548200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_548204:
    // 0x548204: 0xafa40128  sw          $a0, 0x128($sp)
    ctx->pc = 0x548204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 4));
label_548208:
    // 0x548208: 0xafa4012c  sw          $a0, 0x12C($sp)
    ctx->pc = 0x548208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 4));
label_54820c:
    // 0x54820c: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x54820cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_548210:
    // 0x548210: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x548210u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
label_548214:
    // 0x548214: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x548214u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
label_548218:
    // 0x548218: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x548218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
label_54821c:
    // 0x54821c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x54821cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_548220:
    // 0x548220: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x548220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_548224:
    // 0x548224: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x548224u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_548228:
    // 0x548228: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x548228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_54822c:
    // 0x54822c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x54822cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_548230:
    // 0x548230: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x548230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_548234:
    // 0x548234: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x548234u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_548238:
    // 0x548238: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x548238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_54823c:
    // 0x54823c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x54823cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_548240:
    // 0x548240: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x548240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_548244:
    // 0x548244: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x548244u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_548248:
    // 0x548248: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x548248u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_54824c:
    // 0x54824c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x54824cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_548250:
    // 0x548250: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x548250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_548254:
    // 0x548254: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x548254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_548258:
    // 0x548258: 0x3e00008  jr          $ra
label_54825c:
    if (ctx->pc == 0x54825Cu) {
        ctx->pc = 0x54825Cu;
            // 0x54825c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x548260u;
        goto label_fallthrough_0x548258;
    }
    ctx->pc = 0x548258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x54825Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548258u;
            // 0x54825c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x548258:
    ctx->pc = 0x548260u;
}
