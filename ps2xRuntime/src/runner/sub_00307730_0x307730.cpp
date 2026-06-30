#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00307730
// Address: 0x307730 - 0x308600
void sub_00307730_0x307730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307730_0x307730");
#endif

    switch (ctx->pc) {
        case 0x307730u: goto label_307730;
        case 0x307734u: goto label_307734;
        case 0x307738u: goto label_307738;
        case 0x30773cu: goto label_30773c;
        case 0x307740u: goto label_307740;
        case 0x307744u: goto label_307744;
        case 0x307748u: goto label_307748;
        case 0x30774cu: goto label_30774c;
        case 0x307750u: goto label_307750;
        case 0x307754u: goto label_307754;
        case 0x307758u: goto label_307758;
        case 0x30775cu: goto label_30775c;
        case 0x307760u: goto label_307760;
        case 0x307764u: goto label_307764;
        case 0x307768u: goto label_307768;
        case 0x30776cu: goto label_30776c;
        case 0x307770u: goto label_307770;
        case 0x307774u: goto label_307774;
        case 0x307778u: goto label_307778;
        case 0x30777cu: goto label_30777c;
        case 0x307780u: goto label_307780;
        case 0x307784u: goto label_307784;
        case 0x307788u: goto label_307788;
        case 0x30778cu: goto label_30778c;
        case 0x307790u: goto label_307790;
        case 0x307794u: goto label_307794;
        case 0x307798u: goto label_307798;
        case 0x30779cu: goto label_30779c;
        case 0x3077a0u: goto label_3077a0;
        case 0x3077a4u: goto label_3077a4;
        case 0x3077a8u: goto label_3077a8;
        case 0x3077acu: goto label_3077ac;
        case 0x3077b0u: goto label_3077b0;
        case 0x3077b4u: goto label_3077b4;
        case 0x3077b8u: goto label_3077b8;
        case 0x3077bcu: goto label_3077bc;
        case 0x3077c0u: goto label_3077c0;
        case 0x3077c4u: goto label_3077c4;
        case 0x3077c8u: goto label_3077c8;
        case 0x3077ccu: goto label_3077cc;
        case 0x3077d0u: goto label_3077d0;
        case 0x3077d4u: goto label_3077d4;
        case 0x3077d8u: goto label_3077d8;
        case 0x3077dcu: goto label_3077dc;
        case 0x3077e0u: goto label_3077e0;
        case 0x3077e4u: goto label_3077e4;
        case 0x3077e8u: goto label_3077e8;
        case 0x3077ecu: goto label_3077ec;
        case 0x3077f0u: goto label_3077f0;
        case 0x3077f4u: goto label_3077f4;
        case 0x3077f8u: goto label_3077f8;
        case 0x3077fcu: goto label_3077fc;
        case 0x307800u: goto label_307800;
        case 0x307804u: goto label_307804;
        case 0x307808u: goto label_307808;
        case 0x30780cu: goto label_30780c;
        case 0x307810u: goto label_307810;
        case 0x307814u: goto label_307814;
        case 0x307818u: goto label_307818;
        case 0x30781cu: goto label_30781c;
        case 0x307820u: goto label_307820;
        case 0x307824u: goto label_307824;
        case 0x307828u: goto label_307828;
        case 0x30782cu: goto label_30782c;
        case 0x307830u: goto label_307830;
        case 0x307834u: goto label_307834;
        case 0x307838u: goto label_307838;
        case 0x30783cu: goto label_30783c;
        case 0x307840u: goto label_307840;
        case 0x307844u: goto label_307844;
        case 0x307848u: goto label_307848;
        case 0x30784cu: goto label_30784c;
        case 0x307850u: goto label_307850;
        case 0x307854u: goto label_307854;
        case 0x307858u: goto label_307858;
        case 0x30785cu: goto label_30785c;
        case 0x307860u: goto label_307860;
        case 0x307864u: goto label_307864;
        case 0x307868u: goto label_307868;
        case 0x30786cu: goto label_30786c;
        case 0x307870u: goto label_307870;
        case 0x307874u: goto label_307874;
        case 0x307878u: goto label_307878;
        case 0x30787cu: goto label_30787c;
        case 0x307880u: goto label_307880;
        case 0x307884u: goto label_307884;
        case 0x307888u: goto label_307888;
        case 0x30788cu: goto label_30788c;
        case 0x307890u: goto label_307890;
        case 0x307894u: goto label_307894;
        case 0x307898u: goto label_307898;
        case 0x30789cu: goto label_30789c;
        case 0x3078a0u: goto label_3078a0;
        case 0x3078a4u: goto label_3078a4;
        case 0x3078a8u: goto label_3078a8;
        case 0x3078acu: goto label_3078ac;
        case 0x3078b0u: goto label_3078b0;
        case 0x3078b4u: goto label_3078b4;
        case 0x3078b8u: goto label_3078b8;
        case 0x3078bcu: goto label_3078bc;
        case 0x3078c0u: goto label_3078c0;
        case 0x3078c4u: goto label_3078c4;
        case 0x3078c8u: goto label_3078c8;
        case 0x3078ccu: goto label_3078cc;
        case 0x3078d0u: goto label_3078d0;
        case 0x3078d4u: goto label_3078d4;
        case 0x3078d8u: goto label_3078d8;
        case 0x3078dcu: goto label_3078dc;
        case 0x3078e0u: goto label_3078e0;
        case 0x3078e4u: goto label_3078e4;
        case 0x3078e8u: goto label_3078e8;
        case 0x3078ecu: goto label_3078ec;
        case 0x3078f0u: goto label_3078f0;
        case 0x3078f4u: goto label_3078f4;
        case 0x3078f8u: goto label_3078f8;
        case 0x3078fcu: goto label_3078fc;
        case 0x307900u: goto label_307900;
        case 0x307904u: goto label_307904;
        case 0x307908u: goto label_307908;
        case 0x30790cu: goto label_30790c;
        case 0x307910u: goto label_307910;
        case 0x307914u: goto label_307914;
        case 0x307918u: goto label_307918;
        case 0x30791cu: goto label_30791c;
        case 0x307920u: goto label_307920;
        case 0x307924u: goto label_307924;
        case 0x307928u: goto label_307928;
        case 0x30792cu: goto label_30792c;
        case 0x307930u: goto label_307930;
        case 0x307934u: goto label_307934;
        case 0x307938u: goto label_307938;
        case 0x30793cu: goto label_30793c;
        case 0x307940u: goto label_307940;
        case 0x307944u: goto label_307944;
        case 0x307948u: goto label_307948;
        case 0x30794cu: goto label_30794c;
        case 0x307950u: goto label_307950;
        case 0x307954u: goto label_307954;
        case 0x307958u: goto label_307958;
        case 0x30795cu: goto label_30795c;
        case 0x307960u: goto label_307960;
        case 0x307964u: goto label_307964;
        case 0x307968u: goto label_307968;
        case 0x30796cu: goto label_30796c;
        case 0x307970u: goto label_307970;
        case 0x307974u: goto label_307974;
        case 0x307978u: goto label_307978;
        case 0x30797cu: goto label_30797c;
        case 0x307980u: goto label_307980;
        case 0x307984u: goto label_307984;
        case 0x307988u: goto label_307988;
        case 0x30798cu: goto label_30798c;
        case 0x307990u: goto label_307990;
        case 0x307994u: goto label_307994;
        case 0x307998u: goto label_307998;
        case 0x30799cu: goto label_30799c;
        case 0x3079a0u: goto label_3079a0;
        case 0x3079a4u: goto label_3079a4;
        case 0x3079a8u: goto label_3079a8;
        case 0x3079acu: goto label_3079ac;
        case 0x3079b0u: goto label_3079b0;
        case 0x3079b4u: goto label_3079b4;
        case 0x3079b8u: goto label_3079b8;
        case 0x3079bcu: goto label_3079bc;
        case 0x3079c0u: goto label_3079c0;
        case 0x3079c4u: goto label_3079c4;
        case 0x3079c8u: goto label_3079c8;
        case 0x3079ccu: goto label_3079cc;
        case 0x3079d0u: goto label_3079d0;
        case 0x3079d4u: goto label_3079d4;
        case 0x3079d8u: goto label_3079d8;
        case 0x3079dcu: goto label_3079dc;
        case 0x3079e0u: goto label_3079e0;
        case 0x3079e4u: goto label_3079e4;
        case 0x3079e8u: goto label_3079e8;
        case 0x3079ecu: goto label_3079ec;
        case 0x3079f0u: goto label_3079f0;
        case 0x3079f4u: goto label_3079f4;
        case 0x3079f8u: goto label_3079f8;
        case 0x3079fcu: goto label_3079fc;
        case 0x307a00u: goto label_307a00;
        case 0x307a04u: goto label_307a04;
        case 0x307a08u: goto label_307a08;
        case 0x307a0cu: goto label_307a0c;
        case 0x307a10u: goto label_307a10;
        case 0x307a14u: goto label_307a14;
        case 0x307a18u: goto label_307a18;
        case 0x307a1cu: goto label_307a1c;
        case 0x307a20u: goto label_307a20;
        case 0x307a24u: goto label_307a24;
        case 0x307a28u: goto label_307a28;
        case 0x307a2cu: goto label_307a2c;
        case 0x307a30u: goto label_307a30;
        case 0x307a34u: goto label_307a34;
        case 0x307a38u: goto label_307a38;
        case 0x307a3cu: goto label_307a3c;
        case 0x307a40u: goto label_307a40;
        case 0x307a44u: goto label_307a44;
        case 0x307a48u: goto label_307a48;
        case 0x307a4cu: goto label_307a4c;
        case 0x307a50u: goto label_307a50;
        case 0x307a54u: goto label_307a54;
        case 0x307a58u: goto label_307a58;
        case 0x307a5cu: goto label_307a5c;
        case 0x307a60u: goto label_307a60;
        case 0x307a64u: goto label_307a64;
        case 0x307a68u: goto label_307a68;
        case 0x307a6cu: goto label_307a6c;
        case 0x307a70u: goto label_307a70;
        case 0x307a74u: goto label_307a74;
        case 0x307a78u: goto label_307a78;
        case 0x307a7cu: goto label_307a7c;
        case 0x307a80u: goto label_307a80;
        case 0x307a84u: goto label_307a84;
        case 0x307a88u: goto label_307a88;
        case 0x307a8cu: goto label_307a8c;
        case 0x307a90u: goto label_307a90;
        case 0x307a94u: goto label_307a94;
        case 0x307a98u: goto label_307a98;
        case 0x307a9cu: goto label_307a9c;
        case 0x307aa0u: goto label_307aa0;
        case 0x307aa4u: goto label_307aa4;
        case 0x307aa8u: goto label_307aa8;
        case 0x307aacu: goto label_307aac;
        case 0x307ab0u: goto label_307ab0;
        case 0x307ab4u: goto label_307ab4;
        case 0x307ab8u: goto label_307ab8;
        case 0x307abcu: goto label_307abc;
        case 0x307ac0u: goto label_307ac0;
        case 0x307ac4u: goto label_307ac4;
        case 0x307ac8u: goto label_307ac8;
        case 0x307accu: goto label_307acc;
        case 0x307ad0u: goto label_307ad0;
        case 0x307ad4u: goto label_307ad4;
        case 0x307ad8u: goto label_307ad8;
        case 0x307adcu: goto label_307adc;
        case 0x307ae0u: goto label_307ae0;
        case 0x307ae4u: goto label_307ae4;
        case 0x307ae8u: goto label_307ae8;
        case 0x307aecu: goto label_307aec;
        case 0x307af0u: goto label_307af0;
        case 0x307af4u: goto label_307af4;
        case 0x307af8u: goto label_307af8;
        case 0x307afcu: goto label_307afc;
        case 0x307b00u: goto label_307b00;
        case 0x307b04u: goto label_307b04;
        case 0x307b08u: goto label_307b08;
        case 0x307b0cu: goto label_307b0c;
        case 0x307b10u: goto label_307b10;
        case 0x307b14u: goto label_307b14;
        case 0x307b18u: goto label_307b18;
        case 0x307b1cu: goto label_307b1c;
        case 0x307b20u: goto label_307b20;
        case 0x307b24u: goto label_307b24;
        case 0x307b28u: goto label_307b28;
        case 0x307b2cu: goto label_307b2c;
        case 0x307b30u: goto label_307b30;
        case 0x307b34u: goto label_307b34;
        case 0x307b38u: goto label_307b38;
        case 0x307b3cu: goto label_307b3c;
        case 0x307b40u: goto label_307b40;
        case 0x307b44u: goto label_307b44;
        case 0x307b48u: goto label_307b48;
        case 0x307b4cu: goto label_307b4c;
        case 0x307b50u: goto label_307b50;
        case 0x307b54u: goto label_307b54;
        case 0x307b58u: goto label_307b58;
        case 0x307b5cu: goto label_307b5c;
        case 0x307b60u: goto label_307b60;
        case 0x307b64u: goto label_307b64;
        case 0x307b68u: goto label_307b68;
        case 0x307b6cu: goto label_307b6c;
        case 0x307b70u: goto label_307b70;
        case 0x307b74u: goto label_307b74;
        case 0x307b78u: goto label_307b78;
        case 0x307b7cu: goto label_307b7c;
        case 0x307b80u: goto label_307b80;
        case 0x307b84u: goto label_307b84;
        case 0x307b88u: goto label_307b88;
        case 0x307b8cu: goto label_307b8c;
        case 0x307b90u: goto label_307b90;
        case 0x307b94u: goto label_307b94;
        case 0x307b98u: goto label_307b98;
        case 0x307b9cu: goto label_307b9c;
        case 0x307ba0u: goto label_307ba0;
        case 0x307ba4u: goto label_307ba4;
        case 0x307ba8u: goto label_307ba8;
        case 0x307bacu: goto label_307bac;
        case 0x307bb0u: goto label_307bb0;
        case 0x307bb4u: goto label_307bb4;
        case 0x307bb8u: goto label_307bb8;
        case 0x307bbcu: goto label_307bbc;
        case 0x307bc0u: goto label_307bc0;
        case 0x307bc4u: goto label_307bc4;
        case 0x307bc8u: goto label_307bc8;
        case 0x307bccu: goto label_307bcc;
        case 0x307bd0u: goto label_307bd0;
        case 0x307bd4u: goto label_307bd4;
        case 0x307bd8u: goto label_307bd8;
        case 0x307bdcu: goto label_307bdc;
        case 0x307be0u: goto label_307be0;
        case 0x307be4u: goto label_307be4;
        case 0x307be8u: goto label_307be8;
        case 0x307becu: goto label_307bec;
        case 0x307bf0u: goto label_307bf0;
        case 0x307bf4u: goto label_307bf4;
        case 0x307bf8u: goto label_307bf8;
        case 0x307bfcu: goto label_307bfc;
        case 0x307c00u: goto label_307c00;
        case 0x307c04u: goto label_307c04;
        case 0x307c08u: goto label_307c08;
        case 0x307c0cu: goto label_307c0c;
        case 0x307c10u: goto label_307c10;
        case 0x307c14u: goto label_307c14;
        case 0x307c18u: goto label_307c18;
        case 0x307c1cu: goto label_307c1c;
        case 0x307c20u: goto label_307c20;
        case 0x307c24u: goto label_307c24;
        case 0x307c28u: goto label_307c28;
        case 0x307c2cu: goto label_307c2c;
        case 0x307c30u: goto label_307c30;
        case 0x307c34u: goto label_307c34;
        case 0x307c38u: goto label_307c38;
        case 0x307c3cu: goto label_307c3c;
        case 0x307c40u: goto label_307c40;
        case 0x307c44u: goto label_307c44;
        case 0x307c48u: goto label_307c48;
        case 0x307c4cu: goto label_307c4c;
        case 0x307c50u: goto label_307c50;
        case 0x307c54u: goto label_307c54;
        case 0x307c58u: goto label_307c58;
        case 0x307c5cu: goto label_307c5c;
        case 0x307c60u: goto label_307c60;
        case 0x307c64u: goto label_307c64;
        case 0x307c68u: goto label_307c68;
        case 0x307c6cu: goto label_307c6c;
        case 0x307c70u: goto label_307c70;
        case 0x307c74u: goto label_307c74;
        case 0x307c78u: goto label_307c78;
        case 0x307c7cu: goto label_307c7c;
        case 0x307c80u: goto label_307c80;
        case 0x307c84u: goto label_307c84;
        case 0x307c88u: goto label_307c88;
        case 0x307c8cu: goto label_307c8c;
        case 0x307c90u: goto label_307c90;
        case 0x307c94u: goto label_307c94;
        case 0x307c98u: goto label_307c98;
        case 0x307c9cu: goto label_307c9c;
        case 0x307ca0u: goto label_307ca0;
        case 0x307ca4u: goto label_307ca4;
        case 0x307ca8u: goto label_307ca8;
        case 0x307cacu: goto label_307cac;
        case 0x307cb0u: goto label_307cb0;
        case 0x307cb4u: goto label_307cb4;
        case 0x307cb8u: goto label_307cb8;
        case 0x307cbcu: goto label_307cbc;
        case 0x307cc0u: goto label_307cc0;
        case 0x307cc4u: goto label_307cc4;
        case 0x307cc8u: goto label_307cc8;
        case 0x307cccu: goto label_307ccc;
        case 0x307cd0u: goto label_307cd0;
        case 0x307cd4u: goto label_307cd4;
        case 0x307cd8u: goto label_307cd8;
        case 0x307cdcu: goto label_307cdc;
        case 0x307ce0u: goto label_307ce0;
        case 0x307ce4u: goto label_307ce4;
        case 0x307ce8u: goto label_307ce8;
        case 0x307cecu: goto label_307cec;
        case 0x307cf0u: goto label_307cf0;
        case 0x307cf4u: goto label_307cf4;
        case 0x307cf8u: goto label_307cf8;
        case 0x307cfcu: goto label_307cfc;
        case 0x307d00u: goto label_307d00;
        case 0x307d04u: goto label_307d04;
        case 0x307d08u: goto label_307d08;
        case 0x307d0cu: goto label_307d0c;
        case 0x307d10u: goto label_307d10;
        case 0x307d14u: goto label_307d14;
        case 0x307d18u: goto label_307d18;
        case 0x307d1cu: goto label_307d1c;
        case 0x307d20u: goto label_307d20;
        case 0x307d24u: goto label_307d24;
        case 0x307d28u: goto label_307d28;
        case 0x307d2cu: goto label_307d2c;
        case 0x307d30u: goto label_307d30;
        case 0x307d34u: goto label_307d34;
        case 0x307d38u: goto label_307d38;
        case 0x307d3cu: goto label_307d3c;
        case 0x307d40u: goto label_307d40;
        case 0x307d44u: goto label_307d44;
        case 0x307d48u: goto label_307d48;
        case 0x307d4cu: goto label_307d4c;
        case 0x307d50u: goto label_307d50;
        case 0x307d54u: goto label_307d54;
        case 0x307d58u: goto label_307d58;
        case 0x307d5cu: goto label_307d5c;
        case 0x307d60u: goto label_307d60;
        case 0x307d64u: goto label_307d64;
        case 0x307d68u: goto label_307d68;
        case 0x307d6cu: goto label_307d6c;
        case 0x307d70u: goto label_307d70;
        case 0x307d74u: goto label_307d74;
        case 0x307d78u: goto label_307d78;
        case 0x307d7cu: goto label_307d7c;
        case 0x307d80u: goto label_307d80;
        case 0x307d84u: goto label_307d84;
        case 0x307d88u: goto label_307d88;
        case 0x307d8cu: goto label_307d8c;
        case 0x307d90u: goto label_307d90;
        case 0x307d94u: goto label_307d94;
        case 0x307d98u: goto label_307d98;
        case 0x307d9cu: goto label_307d9c;
        case 0x307da0u: goto label_307da0;
        case 0x307da4u: goto label_307da4;
        case 0x307da8u: goto label_307da8;
        case 0x307dacu: goto label_307dac;
        case 0x307db0u: goto label_307db0;
        case 0x307db4u: goto label_307db4;
        case 0x307db8u: goto label_307db8;
        case 0x307dbcu: goto label_307dbc;
        case 0x307dc0u: goto label_307dc0;
        case 0x307dc4u: goto label_307dc4;
        case 0x307dc8u: goto label_307dc8;
        case 0x307dccu: goto label_307dcc;
        case 0x307dd0u: goto label_307dd0;
        case 0x307dd4u: goto label_307dd4;
        case 0x307dd8u: goto label_307dd8;
        case 0x307ddcu: goto label_307ddc;
        case 0x307de0u: goto label_307de0;
        case 0x307de4u: goto label_307de4;
        case 0x307de8u: goto label_307de8;
        case 0x307decu: goto label_307dec;
        case 0x307df0u: goto label_307df0;
        case 0x307df4u: goto label_307df4;
        case 0x307df8u: goto label_307df8;
        case 0x307dfcu: goto label_307dfc;
        case 0x307e00u: goto label_307e00;
        case 0x307e04u: goto label_307e04;
        case 0x307e08u: goto label_307e08;
        case 0x307e0cu: goto label_307e0c;
        case 0x307e10u: goto label_307e10;
        case 0x307e14u: goto label_307e14;
        case 0x307e18u: goto label_307e18;
        case 0x307e1cu: goto label_307e1c;
        case 0x307e20u: goto label_307e20;
        case 0x307e24u: goto label_307e24;
        case 0x307e28u: goto label_307e28;
        case 0x307e2cu: goto label_307e2c;
        case 0x307e30u: goto label_307e30;
        case 0x307e34u: goto label_307e34;
        case 0x307e38u: goto label_307e38;
        case 0x307e3cu: goto label_307e3c;
        case 0x307e40u: goto label_307e40;
        case 0x307e44u: goto label_307e44;
        case 0x307e48u: goto label_307e48;
        case 0x307e4cu: goto label_307e4c;
        case 0x307e50u: goto label_307e50;
        case 0x307e54u: goto label_307e54;
        case 0x307e58u: goto label_307e58;
        case 0x307e5cu: goto label_307e5c;
        case 0x307e60u: goto label_307e60;
        case 0x307e64u: goto label_307e64;
        case 0x307e68u: goto label_307e68;
        case 0x307e6cu: goto label_307e6c;
        case 0x307e70u: goto label_307e70;
        case 0x307e74u: goto label_307e74;
        case 0x307e78u: goto label_307e78;
        case 0x307e7cu: goto label_307e7c;
        case 0x307e80u: goto label_307e80;
        case 0x307e84u: goto label_307e84;
        case 0x307e88u: goto label_307e88;
        case 0x307e8cu: goto label_307e8c;
        case 0x307e90u: goto label_307e90;
        case 0x307e94u: goto label_307e94;
        case 0x307e98u: goto label_307e98;
        case 0x307e9cu: goto label_307e9c;
        case 0x307ea0u: goto label_307ea0;
        case 0x307ea4u: goto label_307ea4;
        case 0x307ea8u: goto label_307ea8;
        case 0x307eacu: goto label_307eac;
        case 0x307eb0u: goto label_307eb0;
        case 0x307eb4u: goto label_307eb4;
        case 0x307eb8u: goto label_307eb8;
        case 0x307ebcu: goto label_307ebc;
        case 0x307ec0u: goto label_307ec0;
        case 0x307ec4u: goto label_307ec4;
        case 0x307ec8u: goto label_307ec8;
        case 0x307eccu: goto label_307ecc;
        case 0x307ed0u: goto label_307ed0;
        case 0x307ed4u: goto label_307ed4;
        case 0x307ed8u: goto label_307ed8;
        case 0x307edcu: goto label_307edc;
        case 0x307ee0u: goto label_307ee0;
        case 0x307ee4u: goto label_307ee4;
        case 0x307ee8u: goto label_307ee8;
        case 0x307eecu: goto label_307eec;
        case 0x307ef0u: goto label_307ef0;
        case 0x307ef4u: goto label_307ef4;
        case 0x307ef8u: goto label_307ef8;
        case 0x307efcu: goto label_307efc;
        case 0x307f00u: goto label_307f00;
        case 0x307f04u: goto label_307f04;
        case 0x307f08u: goto label_307f08;
        case 0x307f0cu: goto label_307f0c;
        case 0x307f10u: goto label_307f10;
        case 0x307f14u: goto label_307f14;
        case 0x307f18u: goto label_307f18;
        case 0x307f1cu: goto label_307f1c;
        case 0x307f20u: goto label_307f20;
        case 0x307f24u: goto label_307f24;
        case 0x307f28u: goto label_307f28;
        case 0x307f2cu: goto label_307f2c;
        case 0x307f30u: goto label_307f30;
        case 0x307f34u: goto label_307f34;
        case 0x307f38u: goto label_307f38;
        case 0x307f3cu: goto label_307f3c;
        case 0x307f40u: goto label_307f40;
        case 0x307f44u: goto label_307f44;
        case 0x307f48u: goto label_307f48;
        case 0x307f4cu: goto label_307f4c;
        case 0x307f50u: goto label_307f50;
        case 0x307f54u: goto label_307f54;
        case 0x307f58u: goto label_307f58;
        case 0x307f5cu: goto label_307f5c;
        case 0x307f60u: goto label_307f60;
        case 0x307f64u: goto label_307f64;
        case 0x307f68u: goto label_307f68;
        case 0x307f6cu: goto label_307f6c;
        case 0x307f70u: goto label_307f70;
        case 0x307f74u: goto label_307f74;
        case 0x307f78u: goto label_307f78;
        case 0x307f7cu: goto label_307f7c;
        case 0x307f80u: goto label_307f80;
        case 0x307f84u: goto label_307f84;
        case 0x307f88u: goto label_307f88;
        case 0x307f8cu: goto label_307f8c;
        case 0x307f90u: goto label_307f90;
        case 0x307f94u: goto label_307f94;
        case 0x307f98u: goto label_307f98;
        case 0x307f9cu: goto label_307f9c;
        case 0x307fa0u: goto label_307fa0;
        case 0x307fa4u: goto label_307fa4;
        case 0x307fa8u: goto label_307fa8;
        case 0x307facu: goto label_307fac;
        case 0x307fb0u: goto label_307fb0;
        case 0x307fb4u: goto label_307fb4;
        case 0x307fb8u: goto label_307fb8;
        case 0x307fbcu: goto label_307fbc;
        case 0x307fc0u: goto label_307fc0;
        case 0x307fc4u: goto label_307fc4;
        case 0x307fc8u: goto label_307fc8;
        case 0x307fccu: goto label_307fcc;
        case 0x307fd0u: goto label_307fd0;
        case 0x307fd4u: goto label_307fd4;
        case 0x307fd8u: goto label_307fd8;
        case 0x307fdcu: goto label_307fdc;
        case 0x307fe0u: goto label_307fe0;
        case 0x307fe4u: goto label_307fe4;
        case 0x307fe8u: goto label_307fe8;
        case 0x307fecu: goto label_307fec;
        case 0x307ff0u: goto label_307ff0;
        case 0x307ff4u: goto label_307ff4;
        case 0x307ff8u: goto label_307ff8;
        case 0x307ffcu: goto label_307ffc;
        case 0x308000u: goto label_308000;
        case 0x308004u: goto label_308004;
        case 0x308008u: goto label_308008;
        case 0x30800cu: goto label_30800c;
        case 0x308010u: goto label_308010;
        case 0x308014u: goto label_308014;
        case 0x308018u: goto label_308018;
        case 0x30801cu: goto label_30801c;
        case 0x308020u: goto label_308020;
        case 0x308024u: goto label_308024;
        case 0x308028u: goto label_308028;
        case 0x30802cu: goto label_30802c;
        case 0x308030u: goto label_308030;
        case 0x308034u: goto label_308034;
        case 0x308038u: goto label_308038;
        case 0x30803cu: goto label_30803c;
        case 0x308040u: goto label_308040;
        case 0x308044u: goto label_308044;
        case 0x308048u: goto label_308048;
        case 0x30804cu: goto label_30804c;
        case 0x308050u: goto label_308050;
        case 0x308054u: goto label_308054;
        case 0x308058u: goto label_308058;
        case 0x30805cu: goto label_30805c;
        case 0x308060u: goto label_308060;
        case 0x308064u: goto label_308064;
        case 0x308068u: goto label_308068;
        case 0x30806cu: goto label_30806c;
        case 0x308070u: goto label_308070;
        case 0x308074u: goto label_308074;
        case 0x308078u: goto label_308078;
        case 0x30807cu: goto label_30807c;
        case 0x308080u: goto label_308080;
        case 0x308084u: goto label_308084;
        case 0x308088u: goto label_308088;
        case 0x30808cu: goto label_30808c;
        case 0x308090u: goto label_308090;
        case 0x308094u: goto label_308094;
        case 0x308098u: goto label_308098;
        case 0x30809cu: goto label_30809c;
        case 0x3080a0u: goto label_3080a0;
        case 0x3080a4u: goto label_3080a4;
        case 0x3080a8u: goto label_3080a8;
        case 0x3080acu: goto label_3080ac;
        case 0x3080b0u: goto label_3080b0;
        case 0x3080b4u: goto label_3080b4;
        case 0x3080b8u: goto label_3080b8;
        case 0x3080bcu: goto label_3080bc;
        case 0x3080c0u: goto label_3080c0;
        case 0x3080c4u: goto label_3080c4;
        case 0x3080c8u: goto label_3080c8;
        case 0x3080ccu: goto label_3080cc;
        case 0x3080d0u: goto label_3080d0;
        case 0x3080d4u: goto label_3080d4;
        case 0x3080d8u: goto label_3080d8;
        case 0x3080dcu: goto label_3080dc;
        case 0x3080e0u: goto label_3080e0;
        case 0x3080e4u: goto label_3080e4;
        case 0x3080e8u: goto label_3080e8;
        case 0x3080ecu: goto label_3080ec;
        case 0x3080f0u: goto label_3080f0;
        case 0x3080f4u: goto label_3080f4;
        case 0x3080f8u: goto label_3080f8;
        case 0x3080fcu: goto label_3080fc;
        case 0x308100u: goto label_308100;
        case 0x308104u: goto label_308104;
        case 0x308108u: goto label_308108;
        case 0x30810cu: goto label_30810c;
        case 0x308110u: goto label_308110;
        case 0x308114u: goto label_308114;
        case 0x308118u: goto label_308118;
        case 0x30811cu: goto label_30811c;
        case 0x308120u: goto label_308120;
        case 0x308124u: goto label_308124;
        case 0x308128u: goto label_308128;
        case 0x30812cu: goto label_30812c;
        case 0x308130u: goto label_308130;
        case 0x308134u: goto label_308134;
        case 0x308138u: goto label_308138;
        case 0x30813cu: goto label_30813c;
        case 0x308140u: goto label_308140;
        case 0x308144u: goto label_308144;
        case 0x308148u: goto label_308148;
        case 0x30814cu: goto label_30814c;
        case 0x308150u: goto label_308150;
        case 0x308154u: goto label_308154;
        case 0x308158u: goto label_308158;
        case 0x30815cu: goto label_30815c;
        case 0x308160u: goto label_308160;
        case 0x308164u: goto label_308164;
        case 0x308168u: goto label_308168;
        case 0x30816cu: goto label_30816c;
        case 0x308170u: goto label_308170;
        case 0x308174u: goto label_308174;
        case 0x308178u: goto label_308178;
        case 0x30817cu: goto label_30817c;
        case 0x308180u: goto label_308180;
        case 0x308184u: goto label_308184;
        case 0x308188u: goto label_308188;
        case 0x30818cu: goto label_30818c;
        case 0x308190u: goto label_308190;
        case 0x308194u: goto label_308194;
        case 0x308198u: goto label_308198;
        case 0x30819cu: goto label_30819c;
        case 0x3081a0u: goto label_3081a0;
        case 0x3081a4u: goto label_3081a4;
        case 0x3081a8u: goto label_3081a8;
        case 0x3081acu: goto label_3081ac;
        case 0x3081b0u: goto label_3081b0;
        case 0x3081b4u: goto label_3081b4;
        case 0x3081b8u: goto label_3081b8;
        case 0x3081bcu: goto label_3081bc;
        case 0x3081c0u: goto label_3081c0;
        case 0x3081c4u: goto label_3081c4;
        case 0x3081c8u: goto label_3081c8;
        case 0x3081ccu: goto label_3081cc;
        case 0x3081d0u: goto label_3081d0;
        case 0x3081d4u: goto label_3081d4;
        case 0x3081d8u: goto label_3081d8;
        case 0x3081dcu: goto label_3081dc;
        case 0x3081e0u: goto label_3081e0;
        case 0x3081e4u: goto label_3081e4;
        case 0x3081e8u: goto label_3081e8;
        case 0x3081ecu: goto label_3081ec;
        case 0x3081f0u: goto label_3081f0;
        case 0x3081f4u: goto label_3081f4;
        case 0x3081f8u: goto label_3081f8;
        case 0x3081fcu: goto label_3081fc;
        case 0x308200u: goto label_308200;
        case 0x308204u: goto label_308204;
        case 0x308208u: goto label_308208;
        case 0x30820cu: goto label_30820c;
        case 0x308210u: goto label_308210;
        case 0x308214u: goto label_308214;
        case 0x308218u: goto label_308218;
        case 0x30821cu: goto label_30821c;
        case 0x308220u: goto label_308220;
        case 0x308224u: goto label_308224;
        case 0x308228u: goto label_308228;
        case 0x30822cu: goto label_30822c;
        case 0x308230u: goto label_308230;
        case 0x308234u: goto label_308234;
        case 0x308238u: goto label_308238;
        case 0x30823cu: goto label_30823c;
        case 0x308240u: goto label_308240;
        case 0x308244u: goto label_308244;
        case 0x308248u: goto label_308248;
        case 0x30824cu: goto label_30824c;
        case 0x308250u: goto label_308250;
        case 0x308254u: goto label_308254;
        case 0x308258u: goto label_308258;
        case 0x30825cu: goto label_30825c;
        case 0x308260u: goto label_308260;
        case 0x308264u: goto label_308264;
        case 0x308268u: goto label_308268;
        case 0x30826cu: goto label_30826c;
        case 0x308270u: goto label_308270;
        case 0x308274u: goto label_308274;
        case 0x308278u: goto label_308278;
        case 0x30827cu: goto label_30827c;
        case 0x308280u: goto label_308280;
        case 0x308284u: goto label_308284;
        case 0x308288u: goto label_308288;
        case 0x30828cu: goto label_30828c;
        case 0x308290u: goto label_308290;
        case 0x308294u: goto label_308294;
        case 0x308298u: goto label_308298;
        case 0x30829cu: goto label_30829c;
        case 0x3082a0u: goto label_3082a0;
        case 0x3082a4u: goto label_3082a4;
        case 0x3082a8u: goto label_3082a8;
        case 0x3082acu: goto label_3082ac;
        case 0x3082b0u: goto label_3082b0;
        case 0x3082b4u: goto label_3082b4;
        case 0x3082b8u: goto label_3082b8;
        case 0x3082bcu: goto label_3082bc;
        case 0x3082c0u: goto label_3082c0;
        case 0x3082c4u: goto label_3082c4;
        case 0x3082c8u: goto label_3082c8;
        case 0x3082ccu: goto label_3082cc;
        case 0x3082d0u: goto label_3082d0;
        case 0x3082d4u: goto label_3082d4;
        case 0x3082d8u: goto label_3082d8;
        case 0x3082dcu: goto label_3082dc;
        case 0x3082e0u: goto label_3082e0;
        case 0x3082e4u: goto label_3082e4;
        case 0x3082e8u: goto label_3082e8;
        case 0x3082ecu: goto label_3082ec;
        case 0x3082f0u: goto label_3082f0;
        case 0x3082f4u: goto label_3082f4;
        case 0x3082f8u: goto label_3082f8;
        case 0x3082fcu: goto label_3082fc;
        case 0x308300u: goto label_308300;
        case 0x308304u: goto label_308304;
        case 0x308308u: goto label_308308;
        case 0x30830cu: goto label_30830c;
        case 0x308310u: goto label_308310;
        case 0x308314u: goto label_308314;
        case 0x308318u: goto label_308318;
        case 0x30831cu: goto label_30831c;
        case 0x308320u: goto label_308320;
        case 0x308324u: goto label_308324;
        case 0x308328u: goto label_308328;
        case 0x30832cu: goto label_30832c;
        case 0x308330u: goto label_308330;
        case 0x308334u: goto label_308334;
        case 0x308338u: goto label_308338;
        case 0x30833cu: goto label_30833c;
        case 0x308340u: goto label_308340;
        case 0x308344u: goto label_308344;
        case 0x308348u: goto label_308348;
        case 0x30834cu: goto label_30834c;
        case 0x308350u: goto label_308350;
        case 0x308354u: goto label_308354;
        case 0x308358u: goto label_308358;
        case 0x30835cu: goto label_30835c;
        case 0x308360u: goto label_308360;
        case 0x308364u: goto label_308364;
        case 0x308368u: goto label_308368;
        case 0x30836cu: goto label_30836c;
        case 0x308370u: goto label_308370;
        case 0x308374u: goto label_308374;
        case 0x308378u: goto label_308378;
        case 0x30837cu: goto label_30837c;
        case 0x308380u: goto label_308380;
        case 0x308384u: goto label_308384;
        case 0x308388u: goto label_308388;
        case 0x30838cu: goto label_30838c;
        case 0x308390u: goto label_308390;
        case 0x308394u: goto label_308394;
        case 0x308398u: goto label_308398;
        case 0x30839cu: goto label_30839c;
        case 0x3083a0u: goto label_3083a0;
        case 0x3083a4u: goto label_3083a4;
        case 0x3083a8u: goto label_3083a8;
        case 0x3083acu: goto label_3083ac;
        case 0x3083b0u: goto label_3083b0;
        case 0x3083b4u: goto label_3083b4;
        case 0x3083b8u: goto label_3083b8;
        case 0x3083bcu: goto label_3083bc;
        case 0x3083c0u: goto label_3083c0;
        case 0x3083c4u: goto label_3083c4;
        case 0x3083c8u: goto label_3083c8;
        case 0x3083ccu: goto label_3083cc;
        case 0x3083d0u: goto label_3083d0;
        case 0x3083d4u: goto label_3083d4;
        case 0x3083d8u: goto label_3083d8;
        case 0x3083dcu: goto label_3083dc;
        case 0x3083e0u: goto label_3083e0;
        case 0x3083e4u: goto label_3083e4;
        case 0x3083e8u: goto label_3083e8;
        case 0x3083ecu: goto label_3083ec;
        case 0x3083f0u: goto label_3083f0;
        case 0x3083f4u: goto label_3083f4;
        case 0x3083f8u: goto label_3083f8;
        case 0x3083fcu: goto label_3083fc;
        case 0x308400u: goto label_308400;
        case 0x308404u: goto label_308404;
        case 0x308408u: goto label_308408;
        case 0x30840cu: goto label_30840c;
        case 0x308410u: goto label_308410;
        case 0x308414u: goto label_308414;
        case 0x308418u: goto label_308418;
        case 0x30841cu: goto label_30841c;
        case 0x308420u: goto label_308420;
        case 0x308424u: goto label_308424;
        case 0x308428u: goto label_308428;
        case 0x30842cu: goto label_30842c;
        case 0x308430u: goto label_308430;
        case 0x308434u: goto label_308434;
        case 0x308438u: goto label_308438;
        case 0x30843cu: goto label_30843c;
        case 0x308440u: goto label_308440;
        case 0x308444u: goto label_308444;
        case 0x308448u: goto label_308448;
        case 0x30844cu: goto label_30844c;
        case 0x308450u: goto label_308450;
        case 0x308454u: goto label_308454;
        case 0x308458u: goto label_308458;
        case 0x30845cu: goto label_30845c;
        case 0x308460u: goto label_308460;
        case 0x308464u: goto label_308464;
        case 0x308468u: goto label_308468;
        case 0x30846cu: goto label_30846c;
        case 0x308470u: goto label_308470;
        case 0x308474u: goto label_308474;
        case 0x308478u: goto label_308478;
        case 0x30847cu: goto label_30847c;
        case 0x308480u: goto label_308480;
        case 0x308484u: goto label_308484;
        case 0x308488u: goto label_308488;
        case 0x30848cu: goto label_30848c;
        case 0x308490u: goto label_308490;
        case 0x308494u: goto label_308494;
        case 0x308498u: goto label_308498;
        case 0x30849cu: goto label_30849c;
        case 0x3084a0u: goto label_3084a0;
        case 0x3084a4u: goto label_3084a4;
        case 0x3084a8u: goto label_3084a8;
        case 0x3084acu: goto label_3084ac;
        case 0x3084b0u: goto label_3084b0;
        case 0x3084b4u: goto label_3084b4;
        case 0x3084b8u: goto label_3084b8;
        case 0x3084bcu: goto label_3084bc;
        case 0x3084c0u: goto label_3084c0;
        case 0x3084c4u: goto label_3084c4;
        case 0x3084c8u: goto label_3084c8;
        case 0x3084ccu: goto label_3084cc;
        case 0x3084d0u: goto label_3084d0;
        case 0x3084d4u: goto label_3084d4;
        case 0x3084d8u: goto label_3084d8;
        case 0x3084dcu: goto label_3084dc;
        case 0x3084e0u: goto label_3084e0;
        case 0x3084e4u: goto label_3084e4;
        case 0x3084e8u: goto label_3084e8;
        case 0x3084ecu: goto label_3084ec;
        case 0x3084f0u: goto label_3084f0;
        case 0x3084f4u: goto label_3084f4;
        case 0x3084f8u: goto label_3084f8;
        case 0x3084fcu: goto label_3084fc;
        case 0x308500u: goto label_308500;
        case 0x308504u: goto label_308504;
        case 0x308508u: goto label_308508;
        case 0x30850cu: goto label_30850c;
        case 0x308510u: goto label_308510;
        case 0x308514u: goto label_308514;
        case 0x308518u: goto label_308518;
        case 0x30851cu: goto label_30851c;
        case 0x308520u: goto label_308520;
        case 0x308524u: goto label_308524;
        case 0x308528u: goto label_308528;
        case 0x30852cu: goto label_30852c;
        case 0x308530u: goto label_308530;
        case 0x308534u: goto label_308534;
        case 0x308538u: goto label_308538;
        case 0x30853cu: goto label_30853c;
        case 0x308540u: goto label_308540;
        case 0x308544u: goto label_308544;
        case 0x308548u: goto label_308548;
        case 0x30854cu: goto label_30854c;
        case 0x308550u: goto label_308550;
        case 0x308554u: goto label_308554;
        case 0x308558u: goto label_308558;
        case 0x30855cu: goto label_30855c;
        case 0x308560u: goto label_308560;
        case 0x308564u: goto label_308564;
        case 0x308568u: goto label_308568;
        case 0x30856cu: goto label_30856c;
        case 0x308570u: goto label_308570;
        case 0x308574u: goto label_308574;
        case 0x308578u: goto label_308578;
        case 0x30857cu: goto label_30857c;
        case 0x308580u: goto label_308580;
        case 0x308584u: goto label_308584;
        case 0x308588u: goto label_308588;
        case 0x30858cu: goto label_30858c;
        case 0x308590u: goto label_308590;
        case 0x308594u: goto label_308594;
        case 0x308598u: goto label_308598;
        case 0x30859cu: goto label_30859c;
        case 0x3085a0u: goto label_3085a0;
        case 0x3085a4u: goto label_3085a4;
        case 0x3085a8u: goto label_3085a8;
        case 0x3085acu: goto label_3085ac;
        case 0x3085b0u: goto label_3085b0;
        case 0x3085b4u: goto label_3085b4;
        case 0x3085b8u: goto label_3085b8;
        case 0x3085bcu: goto label_3085bc;
        case 0x3085c0u: goto label_3085c0;
        case 0x3085c4u: goto label_3085c4;
        case 0x3085c8u: goto label_3085c8;
        case 0x3085ccu: goto label_3085cc;
        case 0x3085d0u: goto label_3085d0;
        case 0x3085d4u: goto label_3085d4;
        case 0x3085d8u: goto label_3085d8;
        case 0x3085dcu: goto label_3085dc;
        case 0x3085e0u: goto label_3085e0;
        case 0x3085e4u: goto label_3085e4;
        case 0x3085e8u: goto label_3085e8;
        case 0x3085ecu: goto label_3085ec;
        case 0x3085f0u: goto label_3085f0;
        case 0x3085f4u: goto label_3085f4;
        case 0x3085f8u: goto label_3085f8;
        case 0x3085fcu: goto label_3085fc;
        default: break;
    }

    ctx->pc = 0x307730u;

label_307730:
    // 0x307730: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x307730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_307734:
    // 0x307734: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x307734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_307738:
    // 0x307738: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x307738u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_30773c:
    // 0x30773c: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_307740:
    if (ctx->pc == 0x307740u) {
        ctx->pc = 0x307740u;
            // 0x307740: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x307744u;
        goto label_307744;
    }
    ctx->pc = 0x30773Cu;
    {
        const bool branch_taken_0x30773c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30773c) {
            ctx->pc = 0x307740u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30773Cu;
            // 0x307740: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x307744u;
            goto label_307744;
        }
    }
    ctx->pc = 0x307744u;
label_307744:
    // 0x307744: 0x3e00008  jr          $ra
label_307748:
    if (ctx->pc == 0x307748u) {
        ctx->pc = 0x307748u;
            // 0x307748: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30774Cu;
        goto label_30774c;
    }
    ctx->pc = 0x307744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307744u;
            // 0x307748: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30774Cu;
label_30774c:
    // 0x30774c: 0x0  nop
    ctx->pc = 0x30774cu;
    // NOP
label_307750:
    // 0x307750: 0x3c02a000  lui         $v0, 0xA000
    ctx->pc = 0x307750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40960 << 16));
label_307754:
    // 0x307754: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x307754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_307758:
    // 0x307758: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x307758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30775c:
    // 0x30775c: 0x80732d4  j           func_1CCB50
label_307760:
    if (ctx->pc == 0x307760u) {
        ctx->pc = 0x307760u;
            // 0x307760: 0x34450600  ori         $a1, $v0, 0x600 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1536);
        ctx->pc = 0x307764u;
        goto label_307764;
    }
    ctx->pc = 0x30775Cu;
    ctx->pc = 0x307760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30775Cu;
            // 0x307760: 0x34450600  ori         $a1, $v0, 0x600 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1536);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CCB50u;
    if (runtime->hasFunction(0x1CCB50u)) {
        auto targetFn = runtime->lookupFunction(0x1CCB50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CCB50_0x1ccb50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x307764u;
label_307764:
    // 0x307764: 0x0  nop
    ctx->pc = 0x307764u;
    // NOP
label_307768:
    // 0x307768: 0x0  nop
    ctx->pc = 0x307768u;
    // NOP
label_30776c:
    // 0x30776c: 0x0  nop
    ctx->pc = 0x30776cu;
    // NOP
label_307770:
    // 0x307770: 0x3c02a000  lui         $v0, 0xA000
    ctx->pc = 0x307770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40960 << 16));
label_307774:
    // 0x307774: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x307774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_307778:
    // 0x307778: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x307778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30777c:
    // 0x30777c: 0x80732d4  j           func_1CCB50
label_307780:
    if (ctx->pc == 0x307780u) {
        ctx->pc = 0x307780u;
            // 0x307780: 0x34450500  ori         $a1, $v0, 0x500 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
        ctx->pc = 0x307784u;
        goto label_307784;
    }
    ctx->pc = 0x30777Cu;
    ctx->pc = 0x307780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30777Cu;
            // 0x307780: 0x34450500  ori         $a1, $v0, 0x500 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CCB50u;
    if (runtime->hasFunction(0x1CCB50u)) {
        auto targetFn = runtime->lookupFunction(0x1CCB50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CCB50_0x1ccb50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x307784u;
label_307784:
    // 0x307784: 0x0  nop
    ctx->pc = 0x307784u;
    // NOP
label_307788:
    // 0x307788: 0x0  nop
    ctx->pc = 0x307788u;
    // NOP
label_30778c:
    // 0x30778c: 0x0  nop
    ctx->pc = 0x30778cu;
    // NOP
label_307790:
    // 0x307790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x307790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_307794:
    // 0x307794: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x307794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_307798:
    // 0x307798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x307798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_30779c:
    // 0x30779c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30779cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3077a0:
    // 0x3077a0: 0x5200001a  beql        $s0, $zero, . + 4 + (0x1A << 2)
label_3077a4:
    if (ctx->pc == 0x3077A4u) {
        ctx->pc = 0x3077A4u;
            // 0x3077a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3077A8u;
        goto label_3077a8;
    }
    ctx->pc = 0x3077A0u;
    {
        const bool branch_taken_0x3077a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3077a0) {
            ctx->pc = 0x3077A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3077A0u;
            // 0x3077a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30780Cu;
            goto label_30780c;
        }
    }
    ctx->pc = 0x3077A8u;
label_3077a8:
    // 0x3077a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3077a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3077ac:
    // 0x3077ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3077acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3077b0:
    // 0x3077b0: 0x24423d20  addiu       $v0, $v0, 0x3D20
    ctx->pc = 0x3077b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15648));
label_3077b4:
    // 0x3077b4: 0x24633d2c  addiu       $v1, $v1, 0x3D2C
    ctx->pc = 0x3077b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15660));
label_3077b8:
    // 0x3077b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3077b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3077bc:
    // 0x3077bc: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x3077bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3077c0:
    // 0x3077c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3077c4:
    if (ctx->pc == 0x3077C4u) {
        ctx->pc = 0x3077C4u;
            // 0x3077c4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x3077C8u;
        goto label_3077c8;
    }
    ctx->pc = 0x3077C0u;
    {
        const bool branch_taken_0x3077c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3077C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3077C0u;
            // 0x3077c4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3077c0) {
            ctx->pc = 0x3077D4u;
            goto label_3077d4;
        }
    }
    ctx->pc = 0x3077C8u;
label_3077c8:
    // 0x3077c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3077c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3077cc:
    // 0x3077cc: 0x2442cd50  addiu       $v0, $v0, -0x32B0
    ctx->pc = 0x3077ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954320));
label_3077d0:
    // 0x3077d0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3077d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3077d4:
    // 0x3077d4: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_3077d8:
    if (ctx->pc == 0x3077D8u) {
        ctx->pc = 0x3077D8u;
            // 0x3077d8: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->pc = 0x3077DCu;
        goto label_3077dc;
    }
    ctx->pc = 0x3077D4u;
    {
        const bool branch_taken_0x3077d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3077d4) {
            ctx->pc = 0x3077D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3077D4u;
            // 0x3077d8: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3077F4u;
            goto label_3077f4;
        }
    }
    ctx->pc = 0x3077DCu;
label_3077dc:
    // 0x3077dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3077dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3077e0:
    // 0x3077e0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3077e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3077e4:
    // 0x3077e4: 0x2463cb78  addiu       $v1, $v1, -0x3488
    ctx->pc = 0x3077e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953848));
label_3077e8:
    // 0x3077e8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3077e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3077ec:
    // 0x3077ec: 0xac4089e8  sw          $zero, -0x7618($v0)
    ctx->pc = 0x3077ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937064), GPR_U32(ctx, 0));
label_3077f0:
    // 0x3077f0: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x3077f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_3077f4:
    // 0x3077f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3077f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3077f8:
    // 0x3077f8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_3077fc:
    if (ctx->pc == 0x3077FCu) {
        ctx->pc = 0x307800u;
        goto label_307800;
    }
    ctx->pc = 0x3077F8u;
    {
        const bool branch_taken_0x3077f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3077f8) {
            ctx->pc = 0x307808u;
            goto label_307808;
        }
    }
    ctx->pc = 0x307800u;
label_307800:
    // 0x307800: 0xc0400a8  jal         func_1002A0
label_307804:
    if (ctx->pc == 0x307804u) {
        ctx->pc = 0x307804u;
            // 0x307804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x307808u;
        goto label_307808;
    }
    ctx->pc = 0x307800u;
    SET_GPR_U32(ctx, 31, 0x307808u);
    ctx->pc = 0x307804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307800u;
            // 0x307804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307808u; }
        if (ctx->pc != 0x307808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307808u; }
        if (ctx->pc != 0x307808u) { return; }
    }
    ctx->pc = 0x307808u;
label_307808:
    // 0x307808: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x307808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30780c:
    // 0x30780c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30780cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_307810:
    // 0x307810: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x307810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_307814:
    // 0x307814: 0x3e00008  jr          $ra
label_307818:
    if (ctx->pc == 0x307818u) {
        ctx->pc = 0x307818u;
            // 0x307818: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x30781Cu;
        goto label_30781c;
    }
    ctx->pc = 0x307814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307814u;
            // 0x307818: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30781Cu;
label_30781c:
    // 0x30781c: 0x0  nop
    ctx->pc = 0x30781cu;
    // NOP
label_307820:
    // 0x307820: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x307820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_307824:
    // 0x307824: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x307824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_307828:
    // 0x307828: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x307828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_30782c:
    // 0x30782c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30782cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_307830:
    // 0x307830: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x307830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_307834:
    // 0x307834: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x307834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_307838:
    // 0x307838: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x307838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30783c:
    // 0x30783c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x30783cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_307840:
    // 0x307840: 0xc05cc84  jal         func_173210
label_307844:
    if (ctx->pc == 0x307844u) {
        ctx->pc = 0x307844u;
            // 0x307844: 0x8e040188  lw          $a0, 0x188($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->pc = 0x307848u;
        goto label_307848;
    }
    ctx->pc = 0x307840u;
    SET_GPR_U32(ctx, 31, 0x307848u);
    ctx->pc = 0x307844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307840u;
            // 0x307844: 0x8e040188  lw          $a0, 0x188($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173210u;
    if (runtime->hasFunction(0x173210u)) {
        auto targetFn = runtime->lookupFunction(0x173210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307848u; }
        if (ctx->pc != 0x307848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173210_0x173210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307848u; }
        if (ctx->pc != 0x307848u) { return; }
    }
    ctx->pc = 0x307848u;
label_307848:
    // 0x307848: 0x924201b8  lbu         $v0, 0x1B8($s2)
    ctx->pc = 0x307848u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 440)));
label_30784c:
    // 0x30784c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x30784cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_307850:
    // 0x307850: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x307850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_307854:
    // 0x307854: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_307858:
    if (ctx->pc == 0x307858u) {
        ctx->pc = 0x307858u;
            // 0x307858: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x30785Cu;
        goto label_30785c;
    }
    ctx->pc = 0x307854u;
    {
        const bool branch_taken_0x307854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307854u;
            // 0x307858: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307854) {
            ctx->pc = 0x307840u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_307840;
        }
    }
    ctx->pc = 0x30785Cu;
label_30785c:
    // 0x30785c: 0xc05af0e  jal         func_16BC38
label_307860:
    if (ctx->pc == 0x307860u) {
        ctx->pc = 0x307864u;
        goto label_307864;
    }
    ctx->pc = 0x30785Cu;
    SET_GPR_U32(ctx, 31, 0x307864u);
    ctx->pc = 0x16BC38u;
    if (runtime->hasFunction(0x16BC38u)) {
        auto targetFn = runtime->lookupFunction(0x16BC38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307864u; }
        if (ctx->pc != 0x307864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016BC38_0x16bc38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307864u; }
        if (ctx->pc != 0x307864u) { return; }
    }
    ctx->pc = 0x307864u;
label_307864:
    // 0x307864: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x307864u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_307868:
    // 0x307868: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x307868u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_30786c:
    // 0x30786c: 0x320f809  jalr        $t9
label_307870:
    if (ctx->pc == 0x307870u) {
        ctx->pc = 0x307870u;
            // 0x307870: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x307874u;
        goto label_307874;
    }
    ctx->pc = 0x30786Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x307874u);
        ctx->pc = 0x307870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30786Cu;
            // 0x307870: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x307874u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x307874u; }
            if (ctx->pc != 0x307874u) { return; }
        }
        }
    }
    ctx->pc = 0x307874u;
label_307874:
    // 0x307874: 0xc0724e6  jal         func_1C9398
label_307878:
    if (ctx->pc == 0x307878u) {
        ctx->pc = 0x30787Cu;
        goto label_30787c;
    }
    ctx->pc = 0x307874u;
    SET_GPR_U32(ctx, 31, 0x30787Cu);
    ctx->pc = 0x1C9398u;
    if (runtime->hasFunction(0x1C9398u)) {
        auto targetFn = runtime->lookupFunction(0x1C9398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30787Cu; }
        if (ctx->pc != 0x30787Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C9398_0x1c9398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30787Cu; }
        if (ctx->pc != 0x30787Cu) { return; }
    }
    ctx->pc = 0x30787Cu;
label_30787c:
    // 0x30787c: 0xc066d5e  jal         func_19B578
label_307880:
    if (ctx->pc == 0x307880u) {
        ctx->pc = 0x307884u;
        goto label_307884;
    }
    ctx->pc = 0x30787Cu;
    SET_GPR_U32(ctx, 31, 0x307884u);
    ctx->pc = 0x19B578u;
    if (runtime->hasFunction(0x19B578u)) {
        auto targetFn = runtime->lookupFunction(0x19B578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307884u; }
        if (ctx->pc != 0x307884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B578_0x19b578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307884u; }
        if (ctx->pc != 0x307884u) { return; }
    }
    ctx->pc = 0x307884u;
label_307884:
    // 0x307884: 0xc05b59e  jal         func_16D678
label_307888:
    if (ctx->pc == 0x307888u) {
        ctx->pc = 0x30788Cu;
        goto label_30788c;
    }
    ctx->pc = 0x307884u;
    SET_GPR_U32(ctx, 31, 0x30788Cu);
    ctx->pc = 0x16D678u;
    if (runtime->hasFunction(0x16D678u)) {
        auto targetFn = runtime->lookupFunction(0x16D678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30788Cu; }
        if (ctx->pc != 0x30788Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D678_0x16d678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30788Cu; }
        if (ctx->pc != 0x30788Cu) { return; }
    }
    ctx->pc = 0x30788Cu;
label_30788c:
    // 0x30788c: 0xc07242a  jal         func_1C90A8
label_307890:
    if (ctx->pc == 0x307890u) {
        ctx->pc = 0x307894u;
        goto label_307894;
    }
    ctx->pc = 0x30788Cu;
    SET_GPR_U32(ctx, 31, 0x307894u);
    ctx->pc = 0x1C90A8u;
    if (runtime->hasFunction(0x1C90A8u)) {
        auto targetFn = runtime->lookupFunction(0x1C90A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307894u; }
        if (ctx->pc != 0x307894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C90A8_0x1c90a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307894u; }
        if (ctx->pc != 0x307894u) { return; }
    }
    ctx->pc = 0x307894u;
label_307894:
    // 0x307894: 0xc05b59e  jal         func_16D678
label_307898:
    if (ctx->pc == 0x307898u) {
        ctx->pc = 0x30789Cu;
        goto label_30789c;
    }
    ctx->pc = 0x307894u;
    SET_GPR_U32(ctx, 31, 0x30789Cu);
    ctx->pc = 0x16D678u;
    if (runtime->hasFunction(0x16D678u)) {
        auto targetFn = runtime->lookupFunction(0x16D678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30789Cu; }
        if (ctx->pc != 0x30789Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D678_0x16d678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30789Cu; }
        if (ctx->pc != 0x30789Cu) { return; }
    }
    ctx->pc = 0x30789Cu;
label_30789c:
    // 0x30789c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30789cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3078a0:
    // 0x3078a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3078a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3078a4:
    // 0x3078a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3078a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3078a8:
    // 0x3078a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3078a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3078ac:
    // 0x3078ac: 0x3e00008  jr          $ra
label_3078b0:
    if (ctx->pc == 0x3078B0u) {
        ctx->pc = 0x3078B0u;
            // 0x3078b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3078B4u;
        goto label_3078b4;
    }
    ctx->pc = 0x3078ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3078B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3078ACu;
            // 0x3078b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3078B4u;
label_3078b4:
    // 0x3078b4: 0x0  nop
    ctx->pc = 0x3078b4u;
    // NOP
label_3078b8:
    // 0x3078b8: 0x0  nop
    ctx->pc = 0x3078b8u;
    // NOP
label_3078bc:
    // 0x3078bc: 0x0  nop
    ctx->pc = 0x3078bcu;
    // NOP
label_3078c0:
    // 0x3078c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3078c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3078c4:
    // 0x3078c4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3078c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3078c8:
    // 0x3078c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3078c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3078cc:
    // 0x3078cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3078ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3078d0:
    // 0x3078d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3078d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3078d4:
    // 0x3078d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3078d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3078d8:
    // 0x3078d8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3078d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3078dc:
    // 0x3078dc: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x3078dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3078e0:
    // 0x3078e0: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x3078e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_3078e4:
    // 0x3078e4: 0x320f809  jalr        $t9
label_3078e8:
    if (ctx->pc == 0x3078E8u) {
        ctx->pc = 0x3078E8u;
            // 0x3078e8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3078ECu;
        goto label_3078ec;
    }
    ctx->pc = 0x3078E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3078ECu);
        ctx->pc = 0x3078E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3078E4u;
            // 0x3078e8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3078ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3078ECu; }
            if (ctx->pc != 0x3078ECu) { return; }
        }
        }
    }
    ctx->pc = 0x3078ECu;
label_3078ec:
    // 0x3078ec: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x3078ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3078f0:
    // 0x3078f0: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
label_3078f4:
    if (ctx->pc == 0x3078F4u) {
        ctx->pc = 0x3078F4u;
            // 0x3078f4: 0x8e2401a0  lw          $a0, 0x1A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
        ctx->pc = 0x3078F8u;
        goto label_3078f8;
    }
    ctx->pc = 0x3078F0u;
    {
        const bool branch_taken_0x3078f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3078f0) {
            ctx->pc = 0x3078F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3078F0u;
            // 0x3078f4: 0x8e2401a0  lw          $a0, 0x1A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x307940u;
            goto label_307940;
        }
    }
    ctx->pc = 0x3078F8u;
label_3078f8:
    // 0x3078f8: 0xc065aea  jal         func_196BA8
label_3078fc:
    if (ctx->pc == 0x3078FCu) {
        ctx->pc = 0x3078FCu;
            // 0x3078fc: 0x8e2401a0  lw          $a0, 0x1A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
        ctx->pc = 0x307900u;
        goto label_307900;
    }
    ctx->pc = 0x3078F8u;
    SET_GPR_U32(ctx, 31, 0x307900u);
    ctx->pc = 0x3078FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3078F8u;
            // 0x3078fc: 0x8e2401a0  lw          $a0, 0x1A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BA8u;
    if (runtime->hasFunction(0x196BA8u)) {
        auto targetFn = runtime->lookupFunction(0x196BA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307900u; }
        if (ctx->pc != 0x307900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196BA8_0x196ba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307900u; }
        if (ctx->pc != 0x307900u) { return; }
    }
    ctx->pc = 0x307900u;
label_307900:
    // 0x307900: 0x8e251b1c  lw          $a1, 0x1B1C($s1)
    ctx->pc = 0x307900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6940)));
label_307904:
    // 0x307904: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_307908:
    if (ctx->pc == 0x307908u) {
        ctx->pc = 0x30790Cu;
        goto label_30790c;
    }
    ctx->pc = 0x307904u;
    {
        const bool branch_taken_0x307904 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x307904) {
            ctx->pc = 0x30793Cu;
            goto label_30793c;
        }
    }
    ctx->pc = 0x30790Cu;
label_30790c:
    // 0x30790c: 0x8e2401a4  lw          $a0, 0x1A4($s1)
    ctx->pc = 0x30790cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
label_307910:
    // 0x307910: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x307910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_307914:
    // 0x307914: 0x45082b  sltu        $at, $v0, $a1
    ctx->pc = 0x307914u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_307918:
    // 0x307918: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_30791c:
    if (ctx->pc == 0x30791Cu) {
        ctx->pc = 0x307920u;
        goto label_307920;
    }
    ctx->pc = 0x307918u;
    {
        const bool branch_taken_0x307918 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x307918) {
            ctx->pc = 0x307930u;
            goto label_307930;
        }
    }
    ctx->pc = 0x307920u;
label_307920:
    // 0x307920: 0xc0fe4e8  jal         func_3F93A0
label_307924:
    if (ctx->pc == 0x307924u) {
        ctx->pc = 0x307928u;
        goto label_307928;
    }
    ctx->pc = 0x307920u;
    SET_GPR_U32(ctx, 31, 0x307928u);
    ctx->pc = 0x3F93A0u;
    if (runtime->hasFunction(0x3F93A0u)) {
        auto targetFn = runtime->lookupFunction(0x3F93A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307928u; }
        if (ctx->pc != 0x307928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F93A0_0x3f93a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307928u; }
        if (ctx->pc != 0x307928u) { return; }
    }
    ctx->pc = 0x307928u;
label_307928:
    // 0x307928: 0x10000004  b           . + 4 + (0x4 << 2)
label_30792c:
    if (ctx->pc == 0x30792Cu) {
        ctx->pc = 0x30792Cu;
            // 0x30792c: 0xae201b1c  sw          $zero, 0x1B1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6940), GPR_U32(ctx, 0));
        ctx->pc = 0x307930u;
        goto label_307930;
    }
    ctx->pc = 0x307928u;
    {
        const bool branch_taken_0x307928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30792Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307928u;
            // 0x30792c: 0xae201b1c  sw          $zero, 0x1B1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6940), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307928) {
            ctx->pc = 0x30793Cu;
            goto label_30793c;
        }
    }
    ctx->pc = 0x307930u;
label_307930:
    // 0x307930: 0xc0fe48c  jal         func_3F9230
label_307934:
    if (ctx->pc == 0x307934u) {
        ctx->pc = 0x307938u;
        goto label_307938;
    }
    ctx->pc = 0x307930u;
    SET_GPR_U32(ctx, 31, 0x307938u);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307938u; }
        if (ctx->pc != 0x307938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307938u; }
        if (ctx->pc != 0x307938u) { return; }
    }
    ctx->pc = 0x307938u;
label_307938:
    // 0x307938: 0xae201b1c  sw          $zero, 0x1B1C($s1)
    ctx->pc = 0x307938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6940), GPR_U32(ctx, 0));
label_30793c:
    // 0x30793c: 0x8e2401a0  lw          $a0, 0x1A0($s1)
    ctx->pc = 0x30793cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_307940:
    // 0x307940: 0xc0663b2  jal         func_198EC8
label_307944:
    if (ctx->pc == 0x307944u) {
        ctx->pc = 0x307948u;
        goto label_307948;
    }
    ctx->pc = 0x307940u;
    SET_GPR_U32(ctx, 31, 0x307948u);
    ctx->pc = 0x198EC8u;
    if (runtime->hasFunction(0x198EC8u)) {
        auto targetFn = runtime->lookupFunction(0x198EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307948u; }
        if (ctx->pc != 0x307948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00198EC8_0x198ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307948u; }
        if (ctx->pc != 0x307948u) { return; }
    }
    ctx->pc = 0x307948u;
label_307948:
    // 0x307948: 0xae2001a0  sw          $zero, 0x1A0($s1)
    ctx->pc = 0x307948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 0));
label_30794c:
    // 0x30794c: 0x8e2502d8  lw          $a1, 0x2D8($s1)
    ctx->pc = 0x30794cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
label_307950:
    // 0x307950: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_307954:
    if (ctx->pc == 0x307954u) {
        ctx->pc = 0x307958u;
        goto label_307958;
    }
    ctx->pc = 0x307950u;
    {
        const bool branch_taken_0x307950 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x307950) {
            ctx->pc = 0x307988u;
            goto label_307988;
        }
    }
    ctx->pc = 0x307958u;
label_307958:
    // 0x307958: 0x8e2401a4  lw          $a0, 0x1A4($s1)
    ctx->pc = 0x307958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
label_30795c:
    // 0x30795c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x30795cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_307960:
    // 0x307960: 0x45082b  sltu        $at, $v0, $a1
    ctx->pc = 0x307960u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_307964:
    // 0x307964: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_307968:
    if (ctx->pc == 0x307968u) {
        ctx->pc = 0x30796Cu;
        goto label_30796c;
    }
    ctx->pc = 0x307964u;
    {
        const bool branch_taken_0x307964 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x307964) {
            ctx->pc = 0x30797Cu;
            goto label_30797c;
        }
    }
    ctx->pc = 0x30796Cu;
label_30796c:
    // 0x30796c: 0xc0fe4e8  jal         func_3F93A0
label_307970:
    if (ctx->pc == 0x307970u) {
        ctx->pc = 0x307974u;
        goto label_307974;
    }
    ctx->pc = 0x30796Cu;
    SET_GPR_U32(ctx, 31, 0x307974u);
    ctx->pc = 0x3F93A0u;
    if (runtime->hasFunction(0x3F93A0u)) {
        auto targetFn = runtime->lookupFunction(0x3F93A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307974u; }
        if (ctx->pc != 0x307974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F93A0_0x3f93a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307974u; }
        if (ctx->pc != 0x307974u) { return; }
    }
    ctx->pc = 0x307974u;
label_307974:
    // 0x307974: 0x10000004  b           . + 4 + (0x4 << 2)
label_307978:
    if (ctx->pc == 0x307978u) {
        ctx->pc = 0x307978u;
            // 0x307978: 0xae2002d8  sw          $zero, 0x2D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 728), GPR_U32(ctx, 0));
        ctx->pc = 0x30797Cu;
        goto label_30797c;
    }
    ctx->pc = 0x307974u;
    {
        const bool branch_taken_0x307974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307974u;
            // 0x307978: 0xae2002d8  sw          $zero, 0x2D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 728), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307974) {
            ctx->pc = 0x307988u;
            goto label_307988;
        }
    }
    ctx->pc = 0x30797Cu;
label_30797c:
    // 0x30797c: 0xc0fe48c  jal         func_3F9230
label_307980:
    if (ctx->pc == 0x307980u) {
        ctx->pc = 0x307984u;
        goto label_307984;
    }
    ctx->pc = 0x30797Cu;
    SET_GPR_U32(ctx, 31, 0x307984u);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307984u; }
        if (ctx->pc != 0x307984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307984u; }
        if (ctx->pc != 0x307984u) { return; }
    }
    ctx->pc = 0x307984u;
label_307984:
    // 0x307984: 0xae2002d8  sw          $zero, 0x2D8($s1)
    ctx->pc = 0x307984u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 728), GPR_U32(ctx, 0));
label_307988:
    // 0x307988: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_30798c:
    if (ctx->pc == 0x30798Cu) {
        ctx->pc = 0x30798Cu;
            // 0x30798c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x307990u;
        goto label_307990;
    }
    ctx->pc = 0x307988u;
    {
        const bool branch_taken_0x307988 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x307988) {
            ctx->pc = 0x30798Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x307988u;
            // 0x30798c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30799Cu;
            goto label_30799c;
        }
    }
    ctx->pc = 0x307990u;
label_307990:
    // 0x307990: 0xc05ba0a  jal         func_16E828
label_307994:
    if (ctx->pc == 0x307994u) {
        ctx->pc = 0x307998u;
        goto label_307998;
    }
    ctx->pc = 0x307990u;
    SET_GPR_U32(ctx, 31, 0x307998u);
    ctx->pc = 0x16E828u;
    if (runtime->hasFunction(0x16E828u)) {
        auto targetFn = runtime->lookupFunction(0x16E828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307998u; }
        if (ctx->pc != 0x307998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E828_0x16e828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307998u; }
        if (ctx->pc != 0x307998u) { return; }
    }
    ctx->pc = 0x307998u;
label_307998:
    // 0x307998: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x307998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30799c:
    // 0x30799c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30799cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3079a0:
    // 0x3079a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3079a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3079a4:
    // 0x3079a4: 0x3e00008  jr          $ra
label_3079a8:
    if (ctx->pc == 0x3079A8u) {
        ctx->pc = 0x3079A8u;
            // 0x3079a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3079ACu;
        goto label_3079ac;
    }
    ctx->pc = 0x3079A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3079A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3079A4u;
            // 0x3079a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3079ACu;
label_3079ac:
    // 0x3079ac: 0x0  nop
    ctx->pc = 0x3079acu;
    // NOP
label_3079b0:
    // 0x3079b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3079b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3079b4:
    // 0x3079b4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3079b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3079b8:
    // 0x3079b8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3079b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3079bc:
    // 0x3079bc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3079bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_3079c0:
    // 0x3079c0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3079c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3079c4:
    // 0x3079c4: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x3079c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3079c8:
    // 0x3079c8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3079c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3079cc:
    // 0x3079cc: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x3079ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3079d0:
    // 0x3079d0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3079d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3079d4:
    // 0x3079d4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x3079d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3079d8:
    // 0x3079d8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3079d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3079dc:
    // 0x3079dc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3079dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3079e0:
    // 0x3079e0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3079e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3079e4:
    // 0x3079e4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3079e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3079e8:
    // 0x3079e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3079e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3079ec:
    // 0x3079ec: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3079ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3079f0:
    // 0x3079f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3079f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3079f4:
    // 0x3079f4: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x3079f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3079f8:
    // 0x3079f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3079f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3079fc:
    // 0x3079fc: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x3079fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_307a00:
    // 0x307a00: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x307a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_307a04:
    // 0x307a04: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x307a04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_307a08:
    // 0x307a08: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x307a08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_307a0c:
    // 0x307a0c: 0x320f809  jalr        $t9
label_307a10:
    if (ctx->pc == 0x307A10u) {
        ctx->pc = 0x307A10u;
            // 0x307a10: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x307A14u;
        goto label_307a14;
    }
    ctx->pc = 0x307A0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x307A14u);
        ctx->pc = 0x307A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307A0Cu;
            // 0x307a10: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x307A14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x307A14u; }
            if (ctx->pc != 0x307A14u) { return; }
        }
        }
    }
    ctx->pc = 0x307A14u;
label_307a14:
    // 0x307a14: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x307a14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_307a18:
    // 0x307a18: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_307a1c:
    if (ctx->pc == 0x307A1Cu) {
        ctx->pc = 0x307A1Cu;
            // 0x307a1c: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x307A20u;
        goto label_307a20;
    }
    ctx->pc = 0x307A18u;
    {
        const bool branch_taken_0x307a18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x307a18) {
            ctx->pc = 0x307A1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x307A18u;
            // 0x307a1c: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x307A2Cu;
            goto label_307a2c;
        }
    }
    ctx->pc = 0x307A20u;
label_307a20:
    // 0x307a20: 0xc05ba04  jal         func_16E810
label_307a24:
    if (ctx->pc == 0x307A24u) {
        ctx->pc = 0x307A28u;
        goto label_307a28;
    }
    ctx->pc = 0x307A20u;
    SET_GPR_U32(ctx, 31, 0x307A28u);
    ctx->pc = 0x16E810u;
    if (runtime->hasFunction(0x16E810u)) {
        auto targetFn = runtime->lookupFunction(0x16E810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307A28u; }
        if (ctx->pc != 0x307A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E810_0x16e810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307A28u; }
        if (ctx->pc != 0x307A28u) { return; }
    }
    ctx->pc = 0x307A28u;
label_307a28:
    // 0x307a28: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x307a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_307a2c:
    // 0x307a2c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x307a2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_307a30:
    // 0x307a30: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x307a30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_307a34:
    // 0x307a34: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x307a34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_307a38:
    // 0x307a38: 0x3c0582d  daddu       $t3, $fp, $zero
    ctx->pc = 0x307a38u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_307a3c:
    // 0x307a3c: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x307a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_307a40:
    // 0x307a40: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x307a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_307a44:
    // 0x307a44: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x307a44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_307a48:
    // 0x307a48: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x307a48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_307a4c:
    // 0x307a4c: 0xc0745fc  jal         func_1D17F0
label_307a50:
    if (ctx->pc == 0x307A50u) {
        ctx->pc = 0x307A50u;
            // 0x307a50: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
        ctx->pc = 0x307A54u;
        goto label_307a54;
    }
    ctx->pc = 0x307A4Cu;
    SET_GPR_U32(ctx, 31, 0x307A54u);
    ctx->pc = 0x307A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307A4Cu;
            // 0x307a50: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (runtime->hasFunction(0x1D17F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D17F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307A54u; }
        if (ctx->pc != 0x307A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D17F0_0x1d17f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307A54u; }
        if (ctx->pc != 0x307A54u) { return; }
    }
    ctx->pc = 0x307A54u;
label_307a54:
    // 0x307a54: 0x52000016  beql        $s0, $zero, . + 4 + (0x16 << 2)
label_307a58:
    if (ctx->pc == 0x307A58u) {
        ctx->pc = 0x307A58u;
            // 0x307a58: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x307A5Cu;
        goto label_307a5c;
    }
    ctx->pc = 0x307A54u;
    {
        const bool branch_taken_0x307a54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x307a54) {
            ctx->pc = 0x307A58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x307A54u;
            // 0x307a58: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x307AB0u;
            goto label_307ab0;
        }
    }
    ctx->pc = 0x307A5Cu;
label_307a5c:
    // 0x307a5c: 0xc068338  jal         func_1A0CE0
label_307a60:
    if (ctx->pc == 0x307A60u) {
        ctx->pc = 0x307A64u;
        goto label_307a64;
    }
    ctx->pc = 0x307A5Cu;
    SET_GPR_U32(ctx, 31, 0x307A64u);
    ctx->pc = 0x1A0CE0u;
    if (runtime->hasFunction(0x1A0CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307A64u; }
        if (ctx->pc != 0x307A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0CE0_0x1a0ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307A64u; }
        if (ctx->pc != 0x307A64u) { return; }
    }
    ctx->pc = 0x307A64u;
label_307a64:
    // 0x307a64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x307a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_307a68:
    // 0x307a68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x307a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_307a6c:
    // 0x307a6c: 0x56220007  bnel        $s1, $v0, . + 4 + (0x7 << 2)
label_307a70:
    if (ctx->pc == 0x307A70u) {
        ctx->pc = 0x307A70u;
            // 0x307a70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x307A74u;
        goto label_307a74;
    }
    ctx->pc = 0x307A6Cu;
    {
        const bool branch_taken_0x307a6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x307a6c) {
            ctx->pc = 0x307A70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x307A6Cu;
            // 0x307a70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x307A8Cu;
            goto label_307a8c;
        }
    }
    ctx->pc = 0x307A74u;
label_307a74:
    // 0x307a74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x307a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_307a78:
    // 0x307a78: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x307a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_307a7c:
    // 0x307a7c: 0xc0fe54c  jal         func_3F9530
label_307a80:
    if (ctx->pc == 0x307A80u) {
        ctx->pc = 0x307A80u;
            // 0x307a80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x307A84u;
        goto label_307a84;
    }
    ctx->pc = 0x307A7Cu;
    SET_GPR_U32(ctx, 31, 0x307A84u);
    ctx->pc = 0x307A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307A7Cu;
            // 0x307a80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307A84u; }
        if (ctx->pc != 0x307A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307A84u; }
        if (ctx->pc != 0x307A84u) { return; }
    }
    ctx->pc = 0x307A84u;
label_307a84:
    // 0x307a84: 0x10000005  b           . + 4 + (0x5 << 2)
label_307a88:
    if (ctx->pc == 0x307A88u) {
        ctx->pc = 0x307A88u;
            // 0x307a88: 0xaea21b1c  sw          $v0, 0x1B1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 6940), GPR_U32(ctx, 2));
        ctx->pc = 0x307A8Cu;
        goto label_307a8c;
    }
    ctx->pc = 0x307A84u;
    {
        const bool branch_taken_0x307a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307A84u;
            // 0x307a88: 0xaea21b1c  sw          $v0, 0x1B1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 6940), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307a84) {
            ctx->pc = 0x307A9Cu;
            goto label_307a9c;
        }
    }
    ctx->pc = 0x307A8Cu;
label_307a8c:
    // 0x307a8c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x307a8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_307a90:
    // 0x307a90: 0xc0fe5bc  jal         func_3F96F0
label_307a94:
    if (ctx->pc == 0x307A94u) {
        ctx->pc = 0x307A94u;
            // 0x307a94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x307A98u;
        goto label_307a98;
    }
    ctx->pc = 0x307A90u;
    SET_GPR_U32(ctx, 31, 0x307A98u);
    ctx->pc = 0x307A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307A90u;
            // 0x307a94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307A98u; }
        if (ctx->pc != 0x307A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307A98u; }
        if (ctx->pc != 0x307A98u) { return; }
    }
    ctx->pc = 0x307A98u;
label_307a98:
    // 0x307a98: 0xaea21b1c  sw          $v0, 0x1B1C($s5)
    ctx->pc = 0x307a98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6940), GPR_U32(ctx, 2));
label_307a9c:
    // 0x307a9c: 0x8ea401a0  lw          $a0, 0x1A0($s5)
    ctx->pc = 0x307a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 416)));
label_307aa0:
    // 0x307aa0: 0x8ea51b1c  lw          $a1, 0x1B1C($s5)
    ctx->pc = 0x307aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6940)));
label_307aa4:
    // 0x307aa4: 0xc065ae4  jal         func_196B90
label_307aa8:
    if (ctx->pc == 0x307AA8u) {
        ctx->pc = 0x307AA8u;
            // 0x307aa8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x307AACu;
        goto label_307aac;
    }
    ctx->pc = 0x307AA4u;
    SET_GPR_U32(ctx, 31, 0x307AACu);
    ctx->pc = 0x307AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307AA4u;
            // 0x307aa8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196B90u;
    if (runtime->hasFunction(0x196B90u)) {
        auto targetFn = runtime->lookupFunction(0x196B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307AACu; }
        if (ctx->pc != 0x307AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196B90_0x196b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307AACu; }
        if (ctx->pc != 0x307AACu) { return; }
    }
    ctx->pc = 0x307AACu;
label_307aac:
    // 0x307aac: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x307aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_307ab0:
    // 0x307ab0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x307ab0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_307ab4:
    // 0x307ab4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x307ab4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_307ab8:
    // 0x307ab8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x307ab8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_307abc:
    // 0x307abc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x307abcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_307ac0:
    // 0x307ac0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x307ac0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_307ac4:
    // 0x307ac4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x307ac4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_307ac8:
    // 0x307ac8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x307ac8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_307acc:
    // 0x307acc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x307accu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_307ad0:
    // 0x307ad0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x307ad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_307ad4:
    // 0x307ad4: 0x3e00008  jr          $ra
label_307ad8:
    if (ctx->pc == 0x307AD8u) {
        ctx->pc = 0x307AD8u;
            // 0x307ad8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x307ADCu;
        goto label_307adc;
    }
    ctx->pc = 0x307AD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307AD4u;
            // 0x307ad8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x307ADCu;
label_307adc:
    // 0x307adc: 0x0  nop
    ctx->pc = 0x307adcu;
    // NOP
label_307ae0:
    // 0x307ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x307ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_307ae4:
    // 0x307ae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x307ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_307ae8:
    // 0x307ae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x307ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_307aec:
    // 0x307aec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x307aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_307af0:
    // 0x307af0: 0x8c840318  lw          $a0, 0x318($a0)
    ctx->pc = 0x307af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 792)));
label_307af4:
    // 0x307af4: 0x1880000c  blez        $a0, . + 4 + (0xC << 2)
label_307af8:
    if (ctx->pc == 0x307AF8u) {
        ctx->pc = 0x307AFCu;
        goto label_307afc;
    }
    ctx->pc = 0x307AF4u;
    {
        const bool branch_taken_0x307af4 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x307af4) {
            ctx->pc = 0x307B28u;
            goto label_307b28;
        }
    }
    ctx->pc = 0x307AFCu;
label_307afc:
    // 0x307afc: 0xc0728ac  jal         func_1CA2B0
label_307b00:
    if (ctx->pc == 0x307B00u) {
        ctx->pc = 0x307B04u;
        goto label_307b04;
    }
    ctx->pc = 0x307AFCu;
    SET_GPR_U32(ctx, 31, 0x307B04u);
    ctx->pc = 0x1CA2B0u;
    if (runtime->hasFunction(0x1CA2B0u)) {
        auto targetFn = runtime->lookupFunction(0x1CA2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307B04u; }
        if (ctx->pc != 0x307B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA2B0_0x1ca2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307B04u; }
        if (ctx->pc != 0x307B04u) { return; }
    }
    ctx->pc = 0x307B04u;
label_307b04:
    // 0x307b04: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_307b08:
    if (ctx->pc == 0x307B08u) {
        ctx->pc = 0x307B0Cu;
        goto label_307b0c;
    }
    ctx->pc = 0x307B04u;
    {
        const bool branch_taken_0x307b04 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x307b04) {
            ctx->pc = 0x307B18u;
            goto label_307b18;
        }
    }
    ctx->pc = 0x307B0Cu;
label_307b0c:
    // 0x307b0c: 0xc0735ae  jal         func_1CD6B8
label_307b10:
    if (ctx->pc == 0x307B10u) {
        ctx->pc = 0x307B10u;
            // 0x307b10: 0x8e040318  lw          $a0, 0x318($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 792)));
        ctx->pc = 0x307B14u;
        goto label_307b14;
    }
    ctx->pc = 0x307B0Cu;
    SET_GPR_U32(ctx, 31, 0x307B14u);
    ctx->pc = 0x307B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307B0Cu;
            // 0x307b10: 0x8e040318  lw          $a0, 0x318($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 792)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CD6B8u;
    if (runtime->hasFunction(0x1CD6B8u)) {
        auto targetFn = runtime->lookupFunction(0x1CD6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307B14u; }
        if (ctx->pc != 0x307B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD6B8_0x1cd6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307B14u; }
        if (ctx->pc != 0x307B14u) { return; }
    }
    ctx->pc = 0x307B14u;
label_307b14:
    // 0x307b14: 0x0  nop
    ctx->pc = 0x307b14u;
    // NOP
label_307b18:
    // 0x307b18: 0x8e020318  lw          $v0, 0x318($s0)
    ctx->pc = 0x307b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 792)));
label_307b1c:
    // 0x307b1c: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x307b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_307b20:
    // 0x307b20: 0x1c80fff6  bgtz        $a0, . + 4 + (-0xA << 2)
label_307b24:
    if (ctx->pc == 0x307B24u) {
        ctx->pc = 0x307B24u;
            // 0x307b24: 0xae040318  sw          $a0, 0x318($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 792), GPR_U32(ctx, 4));
        ctx->pc = 0x307B28u;
        goto label_307b28;
    }
    ctx->pc = 0x307B20u;
    {
        const bool branch_taken_0x307b20 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x307B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307B20u;
            // 0x307b24: 0xae040318  sw          $a0, 0x318($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 792), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307b20) {
            ctx->pc = 0x307AFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_307afc;
        }
    }
    ctx->pc = 0x307B28u;
label_307b28:
    // 0x307b28: 0x3c02a000  lui         $v0, 0xA000
    ctx->pc = 0x307b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40960 << 16));
label_307b2c:
    // 0x307b2c: 0xc072740  jal         func_1C9D00
label_307b30:
    if (ctx->pc == 0x307B30u) {
        ctx->pc = 0x307B30u;
            // 0x307b30: 0x34440100  ori         $a0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->pc = 0x307B34u;
        goto label_307b34;
    }
    ctx->pc = 0x307B2Cu;
    SET_GPR_U32(ctx, 31, 0x307B34u);
    ctx->pc = 0x307B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307B2Cu;
            // 0x307b30: 0x34440100  ori         $a0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9D00u;
    if (runtime->hasFunction(0x1C9D00u)) {
        auto targetFn = runtime->lookupFunction(0x1C9D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307B34u; }
        if (ctx->pc != 0x307B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C9D00_0x1c9d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307B34u; }
        if (ctx->pc != 0x307B34u) { return; }
    }
    ctx->pc = 0x307B34u;
label_307b34:
    // 0x307b34: 0x3c02a000  lui         $v0, 0xA000
    ctx->pc = 0x307b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40960 << 16));
label_307b38:
    // 0x307b38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x307b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307b3c:
    // 0x307b3c: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x307b3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
label_307b40:
    // 0x307b40: 0xc073622  jal         func_1CD888
label_307b44:
    if (ctx->pc == 0x307B44u) {
        ctx->pc = 0x307B44u;
            // 0x307b44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x307B48u;
        goto label_307b48;
    }
    ctx->pc = 0x307B40u;
    SET_GPR_U32(ctx, 31, 0x307B48u);
    ctx->pc = 0x307B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307B40u;
            // 0x307b44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CD888u;
    if (runtime->hasFunction(0x1CD888u)) {
        auto targetFn = runtime->lookupFunction(0x1CD888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307B48u; }
        if (ctx->pc != 0x307B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD888_0x1cd888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307B48u; }
        if (ctx->pc != 0x307B48u) { return; }
    }
    ctx->pc = 0x307B48u;
label_307b48:
    // 0x307b48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x307b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_307b4c:
    // 0x307b4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x307b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_307b50:
    // 0x307b50: 0x3e00008  jr          $ra
label_307b54:
    if (ctx->pc == 0x307B54u) {
        ctx->pc = 0x307B54u;
            // 0x307b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x307B58u;
        goto label_307b58;
    }
    ctx->pc = 0x307B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307B50u;
            // 0x307b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x307B58u;
label_307b58:
    // 0x307b58: 0x0  nop
    ctx->pc = 0x307b58u;
    // NOP
label_307b5c:
    // 0x307b5c: 0x0  nop
    ctx->pc = 0x307b5cu;
    // NOP
label_307b60:
    // 0x307b60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x307b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_307b64:
    // 0x307b64: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x307b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_307b68:
    // 0x307b68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x307b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_307b6c:
    // 0x307b6c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x307b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_307b70:
    // 0x307b70: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x307b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_307b74:
    // 0x307b74: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x307b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_307b78:
    // 0x307b78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x307b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_307b7c:
    // 0x307b7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x307b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_307b80:
    // 0x307b80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x307b80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_307b84:
    // 0x307b84: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x307b84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_307b88:
    // 0x307b88: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x307b88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_307b8c:
    // 0x307b8c: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x307b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_307b90:
    // 0x307b90: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x307b90u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_307b94:
    // 0x307b94: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x307b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_307b98:
    // 0x307b98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x307b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_307b9c:
    // 0x307b9c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x307b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_307ba0:
    // 0x307ba0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x307ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_307ba4:
    // 0x307ba4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x307ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_307ba8:
    // 0x307ba8: 0xc04cca0  jal         func_133280
label_307bac:
    if (ctx->pc == 0x307BACu) {
        ctx->pc = 0x307BACu;
            // 0x307bac: 0x24520200  addiu       $s2, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->pc = 0x307BB0u;
        goto label_307bb0;
    }
    ctx->pc = 0x307BA8u;
    SET_GPR_U32(ctx, 31, 0x307BB0u);
    ctx->pc = 0x307BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307BA8u;
            // 0x307bac: 0x24520200  addiu       $s2, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307BB0u; }
        if (ctx->pc != 0x307BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307BB0u; }
        if (ctx->pc != 0x307BB0u) { return; }
    }
    ctx->pc = 0x307BB0u;
label_307bb0:
    // 0x307bb0: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x307bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_307bb4:
    // 0x307bb4: 0xc7ad0058  lwc1        $f13, 0x58($sp)
    ctx->pc = 0x307bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_307bb8:
    // 0x307bb8: 0xc04780a  jal         func_11E028
label_307bbc:
    if (ctx->pc == 0x307BBCu) {
        ctx->pc = 0x307BBCu;
            // 0x307bbc: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x307BC0u;
        goto label_307bc0;
    }
    ctx->pc = 0x307BB8u;
    SET_GPR_U32(ctx, 31, 0x307BC0u);
    ctx->pc = 0x307BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307BB8u;
            // 0x307bbc: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307BC0u; }
        if (ctx->pc != 0x307BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307BC0u; }
        if (ctx->pc != 0x307BC0u) { return; }
    }
    ctx->pc = 0x307BC0u;
label_307bc0:
    // 0x307bc0: 0x3c024265  lui         $v0, 0x4265
    ctx->pc = 0x307bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16997 << 16));
label_307bc4:
    // 0x307bc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_307bc8:
    // 0x307bc8: 0x34422ee1  ori         $v0, $v0, 0x2EE1
    ctx->pc = 0x307bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12001);
label_307bcc:
    // 0x307bcc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x307bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_307bd0:
    // 0x307bd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x307bd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_307bd4:
    // 0x307bd4: 0x0  nop
    ctx->pc = 0x307bd4u;
    // NOP
label_307bd8:
    // 0x307bd8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x307bd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_307bdc:
    // 0x307bdc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x307bdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_307be0:
    // 0x307be0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x307be0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_307be4:
    // 0x307be4: 0xc04cc1c  jal         func_133070
label_307be8:
    if (ctx->pc == 0x307BE8u) {
        ctx->pc = 0x307BE8u;
            // 0x307be8: 0x245000b4  addiu       $s0, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->pc = 0x307BECu;
        goto label_307bec;
    }
    ctx->pc = 0x307BE4u;
    SET_GPR_U32(ctx, 31, 0x307BECu);
    ctx->pc = 0x307BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307BE4u;
            // 0x307be8: 0x245000b4  addiu       $s0, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307BECu; }
        if (ctx->pc != 0x307BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307BECu; }
        if (ctx->pc != 0x307BECu) { return; }
    }
    ctx->pc = 0x307BECu;
label_307bec:
    // 0x307bec: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x307becu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_307bf0:
    // 0x307bf0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x307bf0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_307bf4:
    // 0x307bf4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x307bf4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_307bf8:
    // 0x307bf8: 0x0  nop
    ctx->pc = 0x307bf8u;
    // NOP
label_307bfc:
    // 0x307bfc: 0x28410100  slti        $at, $v0, 0x100
    ctx->pc = 0x307bfcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
label_307c00:
    // 0x307c00: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_307c04:
    if (ctx->pc == 0x307C04u) {
        ctx->pc = 0x307C04u;
            // 0x307c04: 0x3205ffff  andi        $a1, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x307C08u;
        goto label_307c08;
    }
    ctx->pc = 0x307C00u;
    {
        const bool branch_taken_0x307c00 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x307c00) {
            ctx->pc = 0x307C04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x307C00u;
            // 0x307c04: 0x3205ffff  andi        $a1, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x307C10u;
            goto label_307c10;
        }
    }
    ctx->pc = 0x307C08u;
label_307c08:
    // 0x307c08: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x307c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_307c0c:
    // 0x307c0c: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x307c0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_307c10:
    // 0x307c10: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x307c10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_307c14:
    // 0x307c14: 0xc0735ea  jal         func_1CD7A8
label_307c18:
    if (ctx->pc == 0x307C18u) {
        ctx->pc = 0x307C18u;
            // 0x307c18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x307C1Cu;
        goto label_307c1c;
    }
    ctx->pc = 0x307C14u;
    SET_GPR_U32(ctx, 31, 0x307C1Cu);
    ctx->pc = 0x307C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307C14u;
            // 0x307c18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CD7A8u;
    if (runtime->hasFunction(0x1CD7A8u)) {
        auto targetFn = runtime->lookupFunction(0x1CD7A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307C1Cu; }
        if (ctx->pc != 0x307C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD7A8_0x1cd7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307C1Cu; }
        if (ctx->pc != 0x307C1Cu) { return; }
    }
    ctx->pc = 0x307C1Cu;
label_307c1c:
    // 0x307c1c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x307c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_307c20:
    // 0x307c20: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x307c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_307c24:
    // 0x307c24: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x307c24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_307c28:
    // 0x307c28: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x307c28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_307c2c:
    // 0x307c2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x307c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_307c30:
    // 0x307c30: 0x3e00008  jr          $ra
label_307c34:
    if (ctx->pc == 0x307C34u) {
        ctx->pc = 0x307C34u;
            // 0x307c34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x307C38u;
        goto label_307c38;
    }
    ctx->pc = 0x307C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307C30u;
            // 0x307c34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x307C38u;
label_307c38:
    // 0x307c38: 0x0  nop
    ctx->pc = 0x307c38u;
    // NOP
label_307c3c:
    // 0x307c3c: 0x0  nop
    ctx->pc = 0x307c3cu;
    // NOP
label_307c40:
    // 0x307c40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x307c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_307c44:
    // 0x307c44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x307c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_307c48:
    // 0x307c48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x307c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_307c4c:
    // 0x307c4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x307c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_307c50:
    // 0x307c50: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x307c50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_307c54:
    // 0x307c54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x307c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_307c58:
    // 0x307c58: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x307c58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_307c5c:
    // 0x307c5c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x307c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_307c60:
    // 0x307c60: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x307c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_307c64:
    // 0x307c64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x307c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307c68:
    // 0x307c68: 0xc04a576  jal         func_1295D8
label_307c6c:
    if (ctx->pc == 0x307C6Cu) {
        ctx->pc = 0x307C6Cu;
            // 0x307c6c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x307C70u;
        goto label_307c70;
    }
    ctx->pc = 0x307C68u;
    SET_GPR_U32(ctx, 31, 0x307C70u);
    ctx->pc = 0x307C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307C68u;
            // 0x307c6c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307C70u; }
        if (ctx->pc != 0x307C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307C70u; }
        if (ctx->pc != 0x307C70u) { return; }
    }
    ctx->pc = 0x307C70u;
label_307c70:
    // 0x307c70: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x307c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_307c74:
    // 0x307c74: 0xafb00040  sw          $s0, 0x40($sp)
    ctx->pc = 0x307c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 16));
label_307c78:
    // 0x307c78: 0xc0723bc  jal         func_1C8EF0
label_307c7c:
    if (ctx->pc == 0x307C7Cu) {
        ctx->pc = 0x307C7Cu;
            // 0x307c7c: 0xafb10044  sw          $s1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 17));
        ctx->pc = 0x307C80u;
        goto label_307c80;
    }
    ctx->pc = 0x307C78u;
    SET_GPR_U32(ctx, 31, 0x307C80u);
    ctx->pc = 0x307C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307C78u;
            // 0x307c7c: 0xafb10044  sw          $s1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8EF0u;
    if (runtime->hasFunction(0x1C8EF0u)) {
        auto targetFn = runtime->lookupFunction(0x1C8EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307C80u; }
        if (ctx->pc != 0x307C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8EF0_0x1c8ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307C80u; }
        if (ctx->pc != 0x307C80u) { return; }
    }
    ctx->pc = 0x307C80u;
label_307c80:
    // 0x307c80: 0xc072434  jal         func_1C90D0
label_307c84:
    if (ctx->pc == 0x307C84u) {
        ctx->pc = 0x307C88u;
        goto label_307c88;
    }
    ctx->pc = 0x307C80u;
    SET_GPR_U32(ctx, 31, 0x307C88u);
    ctx->pc = 0x1C90D0u;
    if (runtime->hasFunction(0x1C90D0u)) {
        auto targetFn = runtime->lookupFunction(0x1C90D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307C88u; }
        if (ctx->pc != 0x307C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C90D0_0x1c90d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307C88u; }
        if (ctx->pc != 0x307C88u) { return; }
    }
    ctx->pc = 0x307C88u;
label_307c88:
    // 0x307c88: 0x26440008  addiu       $a0, $s2, 0x8
    ctx->pc = 0x307c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_307c8c:
    // 0x307c8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x307c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307c90:
    // 0x307c90: 0xc04a576  jal         func_1295D8
label_307c94:
    if (ctx->pc == 0x307C94u) {
        ctx->pc = 0x307C94u;
            // 0x307c94: 0x24060180  addiu       $a2, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->pc = 0x307C98u;
        goto label_307c98;
    }
    ctx->pc = 0x307C90u;
    SET_GPR_U32(ctx, 31, 0x307C98u);
    ctx->pc = 0x307C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307C90u;
            // 0x307c94: 0x24060180  addiu       $a2, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307C98u; }
        if (ctx->pc != 0x307C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307C98u; }
        if (ctx->pc != 0x307C98u) { return; }
    }
    ctx->pc = 0x307C98u;
label_307c98:
    // 0x307c98: 0xc074514  jal         func_1D1450
label_307c9c:
    if (ctx->pc == 0x307C9Cu) {
        ctx->pc = 0x307C9Cu;
            // 0x307c9c: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x307CA0u;
        goto label_307ca0;
    }
    ctx->pc = 0x307C98u;
    SET_GPR_U32(ctx, 31, 0x307CA0u);
    ctx->pc = 0x307C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307C98u;
            // 0x307c9c: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1450u;
    if (runtime->hasFunction(0x1D1450u)) {
        auto targetFn = runtime->lookupFunction(0x1D1450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307CA0u; }
        if (ctx->pc != 0x307CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1450_0x1d1450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307CA0u; }
        if (ctx->pc != 0x307CA0u) { return; }
    }
    ctx->pc = 0x307CA0u;
label_307ca0:
    // 0x307ca0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x307ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_307ca4:
    // 0x307ca4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x307ca4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_307ca8:
    // 0x307ca8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x307ca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_307cac:
    // 0x307cac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x307cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_307cb0:
    // 0x307cb0: 0x3e00008  jr          $ra
label_307cb4:
    if (ctx->pc == 0x307CB4u) {
        ctx->pc = 0x307CB4u;
            // 0x307cb4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x307CB8u;
        goto label_307cb8;
    }
    ctx->pc = 0x307CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307CB0u;
            // 0x307cb4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x307CB8u;
label_307cb8:
    // 0x307cb8: 0x0  nop
    ctx->pc = 0x307cb8u;
    // NOP
label_307cbc:
    // 0x307cbc: 0x0  nop
    ctx->pc = 0x307cbcu;
    // NOP
label_307cc0:
    // 0x307cc0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x307cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_307cc4:
    // 0x307cc4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x307cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_307cc8:
    // 0x307cc8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x307cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_307ccc:
    // 0x307ccc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x307cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_307cd0:
    // 0x307cd0: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x307cd0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_307cd4:
    // 0x307cd4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x307cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_307cd8:
    // 0x307cd8: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x307cd8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_307cdc:
    // 0x307cdc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x307cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_307ce0:
    // 0x307ce0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x307ce0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_307ce4:
    // 0x307ce4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x307ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_307ce8:
    // 0x307ce8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x307ce8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_307cec:
    // 0x307cec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x307cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_307cf0:
    // 0x307cf0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x307cf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_307cf4:
    // 0x307cf4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x307cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_307cf8:
    // 0x307cf8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x307cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_307cfc:
    // 0x307cfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x307cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_307d00:
    // 0x307d00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x307d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307d04:
    // 0x307d04: 0xafa900ac  sw          $t1, 0xAC($sp)
    ctx->pc = 0x307d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 9));
label_307d08:
    // 0x307d08: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x307d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_307d0c:
    // 0x307d0c: 0xafaa00a8  sw          $t2, 0xA8($sp)
    ctx->pc = 0x307d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 10));
label_307d10:
    // 0x307d10: 0xc04a576  jal         func_1295D8
label_307d14:
    if (ctx->pc == 0x307D14u) {
        ctx->pc = 0x307D14u;
            // 0x307d14: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x307D18u;
        goto label_307d18;
    }
    ctx->pc = 0x307D10u;
    SET_GPR_U32(ctx, 31, 0x307D18u);
    ctx->pc = 0x307D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307D10u;
            // 0x307d14: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307D18u; }
        if (ctx->pc != 0x307D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307D18u; }
        if (ctx->pc != 0x307D18u) { return; }
    }
    ctx->pc = 0x307D18u;
label_307d18:
    // 0x307d18: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x307d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_307d1c:
    // 0x307d1c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x307d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_307d20:
    // 0x307d20: 0x24422c58  addiu       $v0, $v0, 0x2C58
    ctx->pc = 0x307d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11352));
label_307d24:
    // 0x307d24: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x307d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
label_307d28:
    // 0x307d28: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x307d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_307d2c:
    // 0x307d2c: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x307d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
label_307d30:
    // 0x307d30: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x307d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
label_307d34:
    // 0x307d34: 0xc05c85a  jal         func_172168
label_307d38:
    if (ctx->pc == 0x307D38u) {
        ctx->pc = 0x307D38u;
            // 0x307d38: 0xafa000c0  sw          $zero, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
        ctx->pc = 0x307D3Cu;
        goto label_307d3c;
    }
    ctx->pc = 0x307D34u;
    SET_GPR_U32(ctx, 31, 0x307D3Cu);
    ctx->pc = 0x307D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307D34u;
            // 0x307d38: 0xafa000c0  sw          $zero, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172168u;
    if (runtime->hasFunction(0x172168u)) {
        auto targetFn = runtime->lookupFunction(0x172168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307D3Cu; }
        if (ctx->pc != 0x307D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172168_0x172168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307D3Cu; }
        if (ctx->pc != 0x307D3Cu) { return; }
    }
    ctx->pc = 0x307D3Cu;
label_307d3c:
    // 0x307d3c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x307d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
label_307d40:
    // 0x307d40: 0xc040cc6  jal         func_103318
label_307d44:
    if (ctx->pc == 0x307D44u) {
        ctx->pc = 0x307D44u;
            // 0x307d44: 0x24847e70  addiu       $a0, $a0, 0x7E70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32368));
        ctx->pc = 0x307D48u;
        goto label_307d48;
    }
    ctx->pc = 0x307D40u;
    SET_GPR_U32(ctx, 31, 0x307D48u);
    ctx->pc = 0x307D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307D40u;
            // 0x307d44: 0x24847e70  addiu       $a0, $a0, 0x7E70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103318u;
    if (runtime->hasFunction(0x103318u)) {
        auto targetFn = runtime->lookupFunction(0x103318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307D48u; }
        if (ctx->pc != 0x307D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103318_0x103318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307D48u; }
        if (ctx->pc != 0x307D48u) { return; }
    }
    ctx->pc = 0x307D48u;
label_307d48:
    // 0x307d48: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x307d48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_307d4c:
    // 0x307d4c: 0x8f390088  lw          $t9, 0x88($t9)
    ctx->pc = 0x307d4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 136)));
label_307d50:
    // 0x307d50: 0x320f809  jalr        $t9
label_307d54:
    if (ctx->pc == 0x307D54u) {
        ctx->pc = 0x307D54u;
            // 0x307d54: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x307D58u;
        goto label_307d58;
    }
    ctx->pc = 0x307D50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x307D58u);
        ctx->pc = 0x307D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307D50u;
            // 0x307d54: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x307D58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x307D58u; }
            if (ctx->pc != 0x307D58u) { return; }
        }
        }
    }
    ctx->pc = 0x307D58u;
label_307d58:
    // 0x307d58: 0xc05aea2  jal         func_16BA88
label_307d5c:
    if (ctx->pc == 0x307D5Cu) {
        ctx->pc = 0x307D60u;
        goto label_307d60;
    }
    ctx->pc = 0x307D58u;
    SET_GPR_U32(ctx, 31, 0x307D60u);
    ctx->pc = 0x16BA88u;
    if (runtime->hasFunction(0x16BA88u)) {
        auto targetFn = runtime->lookupFunction(0x16BA88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307D60u; }
        if (ctx->pc != 0x307D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016BA88_0x16ba88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307D60u; }
        if (ctx->pc != 0x307D60u) { return; }
    }
    ctx->pc = 0x307D60u;
label_307d60:
    // 0x307d60: 0x8eb201a8  lw          $s2, 0x1A8($s5)
    ctx->pc = 0x307d60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 424)));
label_307d64:
    // 0x307d64: 0x26b30188  addiu       $s3, $s5, 0x188
    ctx->pc = 0x307d64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 392));
label_307d68:
    // 0x307d68: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x307d68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307d6c:
    // 0x307d6c: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x307d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_307d70:
    // 0x307d70: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x307d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_307d74:
    // 0x307d74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x307d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_307d78:
    // 0x307d78: 0xc05c9ce  jal         func_172738
label_307d7c:
    if (ctx->pc == 0x307D7Cu) {
        ctx->pc = 0x307D7Cu;
            // 0x307d7c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x307D80u;
        goto label_307d80;
    }
    ctx->pc = 0x307D78u;
    SET_GPR_U32(ctx, 31, 0x307D80u);
    ctx->pc = 0x307D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307D78u;
            // 0x307d7c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172738u;
    if (runtime->hasFunction(0x172738u)) {
        auto targetFn = runtime->lookupFunction(0x172738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307D80u; }
        if (ctx->pc != 0x307D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172738_0x172738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307D80u; }
        if (ctx->pc != 0x307D80u) { return; }
    }
    ctx->pc = 0x307D80u;
label_307d80:
    // 0x307d80: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x307d80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_307d84:
    // 0x307d84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x307d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_307d88:
    // 0x307d88: 0xc05d172  jal         func_1745C8
label_307d8c:
    if (ctx->pc == 0x307D8Cu) {
        ctx->pc = 0x307D8Cu;
            // 0x307d8c: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x307D90u;
        goto label_307d90;
    }
    ctx->pc = 0x307D88u;
    SET_GPR_U32(ctx, 31, 0x307D90u);
    ctx->pc = 0x307D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307D88u;
            // 0x307d8c: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1745C8u;
    if (runtime->hasFunction(0x1745C8u)) {
        auto targetFn = runtime->lookupFunction(0x1745C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307D90u; }
        if (ctx->pc != 0x307D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001745C8_0x1745c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307D90u; }
        if (ctx->pc != 0x307D90u) { return; }
    }
    ctx->pc = 0x307D90u;
label_307d90:
    // 0x307d90: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x307d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_307d94:
    // 0x307d94: 0xc05d260  jal         func_174980
label_307d98:
    if (ctx->pc == 0x307D98u) {
        ctx->pc = 0x307D98u;
            // 0x307d98: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x307D9Cu;
        goto label_307d9c;
    }
    ctx->pc = 0x307D94u;
    SET_GPR_U32(ctx, 31, 0x307D9Cu);
    ctx->pc = 0x307D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307D94u;
            // 0x307d98: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174980u;
    if (runtime->hasFunction(0x174980u)) {
        auto targetFn = runtime->lookupFunction(0x174980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307D9Cu; }
        if (ctx->pc != 0x307D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174980_0x174980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307D9Cu; }
        if (ctx->pc != 0x307D9Cu) { return; }
    }
    ctx->pc = 0x307D9Cu;
label_307d9c:
    // 0x307d9c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x307d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_307da0:
    // 0x307da0: 0xc05d0e4  jal         func_174390
label_307da4:
    if (ctx->pc == 0x307DA4u) {
        ctx->pc = 0x307DA4u;
            // 0x307da4: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x307DA8u;
        goto label_307da8;
    }
    ctx->pc = 0x307DA0u;
    SET_GPR_U32(ctx, 31, 0x307DA8u);
    ctx->pc = 0x307DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307DA0u;
            // 0x307da4: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174390u;
    if (runtime->hasFunction(0x174390u)) {
        auto targetFn = runtime->lookupFunction(0x174390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307DA8u; }
        if (ctx->pc != 0x307DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174390_0x174390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307DA8u; }
        if (ctx->pc != 0x307DA8u) { return; }
    }
    ctx->pc = 0x307DA8u;
label_307da8:
    // 0x307da8: 0xa60002fc  sh          $zero, 0x2FC($s0)
    ctx->pc = 0x307da8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 764), (uint16_t)GPR_U32(ctx, 0));
label_307dac:
    // 0x307dac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x307dacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_307db0:
    // 0x307db0: 0x92a201b8  lbu         $v0, 0x1B8($s5)
    ctx->pc = 0x307db0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 440)));
label_307db4:
    // 0x307db4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x307db4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_307db8:
    // 0x307db8: 0x2549021  addu        $s2, $s2, $s4
    ctx->pc = 0x307db8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_307dbc:
    // 0x307dbc: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x307dbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_307dc0:
    // 0x307dc0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_307dc4:
    if (ctx->pc == 0x307DC4u) {
        ctx->pc = 0x307DC4u;
            // 0x307dc4: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x307DC8u;
        goto label_307dc8;
    }
    ctx->pc = 0x307DC0u;
    {
        const bool branch_taken_0x307dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307DC0u;
            // 0x307dc4: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307dc0) {
            ctx->pc = 0x307D70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_307d70;
        }
    }
    ctx->pc = 0x307DC8u;
label_307dc8:
    // 0x307dc8: 0x8ea501ac  lw          $a1, 0x1AC($s5)
    ctx->pc = 0x307dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 428)));
label_307dcc:
    // 0x307dcc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x307dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_307dd0:
    // 0x307dd0: 0xc05c9ce  jal         func_172738
label_307dd4:
    if (ctx->pc == 0x307DD4u) {
        ctx->pc = 0x307DD4u;
            // 0x307dd4: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x307DD8u;
        goto label_307dd8;
    }
    ctx->pc = 0x307DD0u;
    SET_GPR_U32(ctx, 31, 0x307DD8u);
    ctx->pc = 0x307DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307DD0u;
            // 0x307dd4: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172738u;
    if (runtime->hasFunction(0x172738u)) {
        auto targetFn = runtime->lookupFunction(0x172738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307DD8u; }
        if (ctx->pc != 0x307DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172738_0x172738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307DD8u; }
        if (ctx->pc != 0x307DD8u) { return; }
    }
    ctx->pc = 0x307DD8u;
label_307dd8:
    // 0x307dd8: 0xaea20198  sw          $v0, 0x198($s5)
    ctx->pc = 0x307dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 408), GPR_U32(ctx, 2));
label_307ddc:
    // 0x307ddc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x307ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_307de0:
    // 0x307de0: 0xc05d172  jal         func_1745C8
label_307de4:
    if (ctx->pc == 0x307DE4u) {
        ctx->pc = 0x307DE4u;
            // 0x307de4: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x307DE8u;
        goto label_307de8;
    }
    ctx->pc = 0x307DE0u;
    SET_GPR_U32(ctx, 31, 0x307DE8u);
    ctx->pc = 0x307DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307DE0u;
            // 0x307de4: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1745C8u;
    if (runtime->hasFunction(0x1745C8u)) {
        auto targetFn = runtime->lookupFunction(0x1745C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307DE8u; }
        if (ctx->pc != 0x307DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001745C8_0x1745c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307DE8u; }
        if (ctx->pc != 0x307DE8u) { return; }
    }
    ctx->pc = 0x307DE8u;
label_307de8:
    // 0x307de8: 0x8ea40198  lw          $a0, 0x198($s5)
    ctx->pc = 0x307de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 408)));
label_307dec:
    // 0x307dec: 0xc05d260  jal         func_174980
label_307df0:
    if (ctx->pc == 0x307DF0u) {
        ctx->pc = 0x307DF0u;
            // 0x307df0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x307DF4u;
        goto label_307df4;
    }
    ctx->pc = 0x307DECu;
    SET_GPR_U32(ctx, 31, 0x307DF4u);
    ctx->pc = 0x307DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307DECu;
            // 0x307df0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174980u;
    if (runtime->hasFunction(0x174980u)) {
        auto targetFn = runtime->lookupFunction(0x174980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307DF4u; }
        if (ctx->pc != 0x307DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174980_0x174980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307DF4u; }
        if (ctx->pc != 0x307DF4u) { return; }
    }
    ctx->pc = 0x307DF4u;
label_307df4:
    // 0x307df4: 0x8ea40198  lw          $a0, 0x198($s5)
    ctx->pc = 0x307df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 408)));
label_307df8:
    // 0x307df8: 0xc05d0e4  jal         func_174390
label_307dfc:
    if (ctx->pc == 0x307DFCu) {
        ctx->pc = 0x307DFCu;
            // 0x307dfc: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x307E00u;
        goto label_307e00;
    }
    ctx->pc = 0x307DF8u;
    SET_GPR_U32(ctx, 31, 0x307E00u);
    ctx->pc = 0x307DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307DF8u;
            // 0x307dfc: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174390u;
    if (runtime->hasFunction(0x174390u)) {
        auto targetFn = runtime->lookupFunction(0x174390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307E00u; }
        if (ctx->pc != 0x307E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174390_0x174390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307E00u; }
        if (ctx->pc != 0x307E00u) { return; }
    }
    ctx->pc = 0x307E00u;
label_307e00:
    // 0x307e00: 0xa6a00304  sh          $zero, 0x304($s5)
    ctx->pc = 0x307e00u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 772), (uint16_t)GPR_U32(ctx, 0));
label_307e04:
    // 0x307e04: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x307e04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_307e08:
    // 0x307e08: 0x8ea501b4  lw          $a1, 0x1B4($s5)
    ctx->pc = 0x307e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 436)));
label_307e0c:
    // 0x307e0c: 0xc05c9ce  jal         func_172738
label_307e10:
    if (ctx->pc == 0x307E10u) {
        ctx->pc = 0x307E10u;
            // 0x307e10: 0x8fa400ac  lw          $a0, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->pc = 0x307E14u;
        goto label_307e14;
    }
    ctx->pc = 0x307E0Cu;
    SET_GPR_U32(ctx, 31, 0x307E14u);
    ctx->pc = 0x307E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307E0Cu;
            // 0x307e10: 0x8fa400ac  lw          $a0, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172738u;
    if (runtime->hasFunction(0x172738u)) {
        auto targetFn = runtime->lookupFunction(0x172738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307E14u; }
        if (ctx->pc != 0x307E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172738_0x172738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307E14u; }
        if (ctx->pc != 0x307E14u) { return; }
    }
    ctx->pc = 0x307E14u;
label_307e14:
    // 0x307e14: 0xaea2019c  sw          $v0, 0x19C($s5)
    ctx->pc = 0x307e14u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 412), GPR_U32(ctx, 2));
label_307e18:
    // 0x307e18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x307e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_307e1c:
    // 0x307e1c: 0xc05d172  jal         func_1745C8
label_307e20:
    if (ctx->pc == 0x307E20u) {
        ctx->pc = 0x307E20u;
            // 0x307e20: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x307E24u;
        goto label_307e24;
    }
    ctx->pc = 0x307E1Cu;
    SET_GPR_U32(ctx, 31, 0x307E24u);
    ctx->pc = 0x307E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307E1Cu;
            // 0x307e20: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1745C8u;
    if (runtime->hasFunction(0x1745C8u)) {
        auto targetFn = runtime->lookupFunction(0x1745C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307E24u; }
        if (ctx->pc != 0x307E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001745C8_0x1745c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307E24u; }
        if (ctx->pc != 0x307E24u) { return; }
    }
    ctx->pc = 0x307E24u;
label_307e24:
    // 0x307e24: 0x8ea4019c  lw          $a0, 0x19C($s5)
    ctx->pc = 0x307e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 412)));
label_307e28:
    // 0x307e28: 0xc05d260  jal         func_174980
label_307e2c:
    if (ctx->pc == 0x307E2Cu) {
        ctx->pc = 0x307E2Cu;
            // 0x307e2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x307E30u;
        goto label_307e30;
    }
    ctx->pc = 0x307E28u;
    SET_GPR_U32(ctx, 31, 0x307E30u);
    ctx->pc = 0x307E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307E28u;
            // 0x307e2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174980u;
    if (runtime->hasFunction(0x174980u)) {
        auto targetFn = runtime->lookupFunction(0x174980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307E30u; }
        if (ctx->pc != 0x307E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174980_0x174980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307E30u; }
        if (ctx->pc != 0x307E30u) { return; }
    }
    ctx->pc = 0x307E30u;
label_307e30:
    // 0x307e30: 0x8ea4019c  lw          $a0, 0x19C($s5)
    ctx->pc = 0x307e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 412)));
label_307e34:
    // 0x307e34: 0xc05d0e4  jal         func_174390
label_307e38:
    if (ctx->pc == 0x307E38u) {
        ctx->pc = 0x307E38u;
            // 0x307e38: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x307E3Cu;
        goto label_307e3c;
    }
    ctx->pc = 0x307E34u;
    SET_GPR_U32(ctx, 31, 0x307E3Cu);
    ctx->pc = 0x307E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307E34u;
            // 0x307e38: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174390u;
    if (runtime->hasFunction(0x174390u)) {
        auto targetFn = runtime->lookupFunction(0x174390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307E3Cu; }
        if (ctx->pc != 0x307E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174390_0x174390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307E3Cu; }
        if (ctx->pc != 0x307E3Cu) { return; }
    }
    ctx->pc = 0x307E3Cu;
label_307e3c:
    // 0x307e3c: 0xa6a00306  sh          $zero, 0x306($s5)
    ctx->pc = 0x307e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 774), (uint16_t)GPR_U32(ctx, 0));
label_307e40:
    // 0x307e40: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x307e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_307e44:
    // 0x307e44: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x307e44u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_307e48:
    // 0x307e48: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x307e48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_307e4c:
    // 0x307e4c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x307e4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_307e50:
    // 0x307e50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x307e50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_307e54:
    // 0x307e54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x307e54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_307e58:
    // 0x307e58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x307e58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_307e5c:
    // 0x307e5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x307e5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_307e60:
    // 0x307e60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x307e60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_307e64:
    // 0x307e64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x307e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_307e68:
    // 0x307e68: 0x3e00008  jr          $ra
label_307e6c:
    if (ctx->pc == 0x307E6Cu) {
        ctx->pc = 0x307E6Cu;
            // 0x307e6c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x307E70u;
        goto label_307e70;
    }
    ctx->pc = 0x307E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307E68u;
            // 0x307e6c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x307E70u;
label_307e70:
    // 0x307e70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x307e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_307e74:
    // 0x307e74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x307e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_307e78:
    // 0x307e78: 0xc05b76e  jal         func_16DDB8
label_307e7c:
    if (ctx->pc == 0x307E7Cu) {
        ctx->pc = 0x307E7Cu;
            // 0x307e7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x307E80u;
        goto label_307e80;
    }
    ctx->pc = 0x307E78u;
    SET_GPR_U32(ctx, 31, 0x307E80u);
    ctx->pc = 0x307E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307E78u;
            // 0x307e7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16DDB8u;
    if (runtime->hasFunction(0x16DDB8u)) {
        auto targetFn = runtime->lookupFunction(0x16DDB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307E80u; }
        if (ctx->pc != 0x307E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016DDB8_0x16ddb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307E80u; }
        if (ctx->pc != 0x307E80u) { return; }
    }
    ctx->pc = 0x307E80u;
label_307e80:
    // 0x307e80: 0xf  sync
    ctx->pc = 0x307e80u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_307e84:
    // 0x307e84: 0x42000038  ei
    ctx->pc = 0x307e84u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_307e88:
    // 0x307e88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x307e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_307e8c:
    // 0x307e8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x307e8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307e90:
    // 0x307e90: 0x3e00008  jr          $ra
label_307e94:
    if (ctx->pc == 0x307E94u) {
        ctx->pc = 0x307E94u;
            // 0x307e94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x307E98u;
        goto label_307e98;
    }
    ctx->pc = 0x307E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307E90u;
            // 0x307e94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x307E98u;
label_307e98:
    // 0x307e98: 0x0  nop
    ctx->pc = 0x307e98u;
    // NOP
label_307e9c:
    // 0x307e9c: 0x0  nop
    ctx->pc = 0x307e9cu;
    // NOP
label_307ea0:
    // 0x307ea0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x307ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_307ea4:
    // 0x307ea4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x307ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307ea8:
    // 0x307ea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x307ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_307eac:
    // 0x307eac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x307eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_307eb0:
    // 0x307eb0: 0xc04a576  jal         func_1295D8
label_307eb4:
    if (ctx->pc == 0x307EB4u) {
        ctx->pc = 0x307EB4u;
            // 0x307eb4: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x307EB8u;
        goto label_307eb8;
    }
    ctx->pc = 0x307EB0u;
    SET_GPR_U32(ctx, 31, 0x307EB8u);
    ctx->pc = 0x307EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307EB0u;
            // 0x307eb4: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307EB8u; }
        if (ctx->pc != 0x307EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307EB8u; }
        if (ctx->pc != 0x307EB8u) { return; }
    }
    ctx->pc = 0x307EB8u;
label_307eb8:
    // 0x307eb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x307eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_307ebc:
    // 0x307ebc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x307ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_307ec0:
    // 0x307ec0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x307ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_307ec4:
    // 0x307ec4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x307ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_307ec8:
    // 0x307ec8: 0x2402007e  addiu       $v0, $zero, 0x7E
    ctx->pc = 0x307ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_307ecc:
    // 0x307ecc: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x307eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_307ed0:
    // 0x307ed0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x307ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_307ed4:
    // 0x307ed4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x307ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_307ed8:
    // 0x307ed8: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x307ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_307edc:
    // 0x307edc: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x307edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
label_307ee0:
    // 0x307ee0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x307ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_307ee4:
    // 0x307ee4: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x307ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_307ee8:
    // 0x307ee8: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x307ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_307eec:
    // 0x307eec: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x307eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_307ef0:
    // 0x307ef0: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x307ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_307ef4:
    // 0x307ef4: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x307ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_307ef8:
    // 0x307ef8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x307ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_307efc:
    // 0x307efc: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x307efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
label_307f00:
    // 0x307f00: 0x24421da0  addiu       $v0, $v0, 0x1DA0
    ctx->pc = 0x307f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7584));
label_307f04:
    // 0x307f04: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x307f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_307f08:
    // 0x307f08: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x307f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_307f0c:
    // 0x307f0c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x307f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_307f10:
    // 0x307f10: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x307f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
label_307f14:
    // 0x307f14: 0x24422da0  addiu       $v0, $v0, 0x2DA0
    ctx->pc = 0x307f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11680));
label_307f18:
    // 0x307f18: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x307f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
label_307f1c:
    // 0x307f1c: 0xc05b830  jal         func_16E0C0
label_307f20:
    if (ctx->pc == 0x307F20u) {
        ctx->pc = 0x307F20u;
            // 0x307f20: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x307F24u;
        goto label_307f24;
    }
    ctx->pc = 0x307F1Cu;
    SET_GPR_U32(ctx, 31, 0x307F24u);
    ctx->pc = 0x307F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307F1Cu;
            // 0x307f20: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E0C0u;
    if (runtime->hasFunction(0x16E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x16E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307F24u; }
        if (ctx->pc != 0x307F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E0C0_0x16e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307F24u; }
        if (ctx->pc != 0x307F24u) { return; }
    }
    ctx->pc = 0x307F24u;
label_307f24:
    // 0x307f24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x307f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_307f28:
    // 0x307f28: 0x3e00008  jr          $ra
label_307f2c:
    if (ctx->pc == 0x307F2Cu) {
        ctx->pc = 0x307F2Cu;
            // 0x307f2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x307F30u;
        goto label_307f30;
    }
    ctx->pc = 0x307F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307F28u;
            // 0x307f2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x307F30u;
label_307f30:
    // 0x307f30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x307f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_307f34:
    // 0x307f34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x307f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307f38:
    // 0x307f38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x307f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_307f3c:
    // 0x307f3c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x307f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_307f40:
    // 0x307f40: 0xc04a576  jal         func_1295D8
label_307f44:
    if (ctx->pc == 0x307F44u) {
        ctx->pc = 0x307F44u;
            // 0x307f44: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x307F48u;
        goto label_307f48;
    }
    ctx->pc = 0x307F40u;
    SET_GPR_U32(ctx, 31, 0x307F48u);
    ctx->pc = 0x307F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307F40u;
            // 0x307f44: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307F48u; }
        if (ctx->pc != 0x307F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307F48u; }
        if (ctx->pc != 0x307F48u) { return; }
    }
    ctx->pc = 0x307F48u;
label_307f48:
    // 0x307f48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x307f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_307f4c:
    // 0x307f4c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x307f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_307f50:
    // 0x307f50: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x307f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_307f54:
    // 0x307f54: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x307f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_307f58:
    // 0x307f58: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x307f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_307f5c:
    // 0x307f5c: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x307f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_307f60:
    // 0x307f60: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x307f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_307f64:
    // 0x307f64: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x307f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_307f68:
    // 0x307f68: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x307f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_307f6c:
    // 0x307f6c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x307f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_307f70:
    // 0x307f70: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x307f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_307f74:
    // 0x307f74: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x307f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
label_307f78:
    // 0x307f78: 0xc05b526  jal         func_16D498
label_307f7c:
    if (ctx->pc == 0x307F7Cu) {
        ctx->pc = 0x307F7Cu;
            // 0x307f7c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->pc = 0x307F80u;
        goto label_307f80;
    }
    ctx->pc = 0x307F78u;
    SET_GPR_U32(ctx, 31, 0x307F80u);
    ctx->pc = 0x307F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307F78u;
            // 0x307f7c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16D498u;
    if (runtime->hasFunction(0x16D498u)) {
        auto targetFn = runtime->lookupFunction(0x16D498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307F80u; }
        if (ctx->pc != 0x307F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D498_0x16d498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307F80u; }
        if (ctx->pc != 0x307F80u) { return; }
    }
    ctx->pc = 0x307F80u;
label_307f80:
    // 0x307f80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x307f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_307f84:
    // 0x307f84: 0x3e00008  jr          $ra
label_307f88:
    if (ctx->pc == 0x307F88u) {
        ctx->pc = 0x307F88u;
            // 0x307f88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x307F8Cu;
        goto label_307f8c;
    }
    ctx->pc = 0x307F84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307F84u;
            // 0x307f88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x307F8Cu;
label_307f8c:
    // 0x307f8c: 0x0  nop
    ctx->pc = 0x307f8cu;
    // NOP
label_307f90:
    // 0x307f90: 0x80c1e08  j           func_307820
label_307f94:
    if (ctx->pc == 0x307F94u) {
        ctx->pc = 0x307F94u;
            // 0x307f94: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x307F98u;
        goto label_307f98;
    }
    ctx->pc = 0x307F90u;
    ctx->pc = 0x307F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307F90u;
            // 0x307f94: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x307820u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_307820;
    ctx->pc = 0x307F98u;
label_307f98:
    // 0x307f98: 0x0  nop
    ctx->pc = 0x307f98u;
    // NOP
label_307f9c:
    // 0x307f9c: 0x0  nop
    ctx->pc = 0x307f9cu;
    // NOP
label_307fa0:
    // 0x307fa0: 0x80c1fa8  j           func_307EA0
label_307fa4:
    if (ctx->pc == 0x307FA4u) {
        ctx->pc = 0x307FA4u;
            // 0x307fa4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x307FA8u;
        goto label_307fa8;
    }
    ctx->pc = 0x307FA0u;
    ctx->pc = 0x307FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307FA0u;
            // 0x307fa4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x307EA0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_307ea0;
    ctx->pc = 0x307FA8u;
label_307fa8:
    // 0x307fa8: 0x0  nop
    ctx->pc = 0x307fa8u;
    // NOP
label_307fac:
    // 0x307fac: 0x0  nop
    ctx->pc = 0x307facu;
    // NOP
label_307fb0:
    // 0x307fb0: 0x80c1fcc  j           func_307F30
label_307fb4:
    if (ctx->pc == 0x307FB4u) {
        ctx->pc = 0x307FB4u;
            // 0x307fb4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x307FB8u;
        goto label_307fb8;
    }
    ctx->pc = 0x307FB0u;
    ctx->pc = 0x307FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307FB0u;
            // 0x307fb4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x307F30u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_307f30;
    ctx->pc = 0x307FB8u;
label_307fb8:
    // 0x307fb8: 0x0  nop
    ctx->pc = 0x307fb8u;
    // NOP
label_307fbc:
    // 0x307fbc: 0x0  nop
    ctx->pc = 0x307fbcu;
    // NOP
label_307fc0:
    // 0x307fc0: 0x80c1f10  j           func_307C40
label_307fc4:
    if (ctx->pc == 0x307FC4u) {
        ctx->pc = 0x307FC4u;
            // 0x307fc4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x307FC8u;
        goto label_307fc8;
    }
    ctx->pc = 0x307FC0u;
    ctx->pc = 0x307FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307FC0u;
            // 0x307fc4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x307C40u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_307c40;
    ctx->pc = 0x307FC8u;
label_307fc8:
    // 0x307fc8: 0x0  nop
    ctx->pc = 0x307fc8u;
    // NOP
label_307fcc:
    // 0x307fcc: 0x0  nop
    ctx->pc = 0x307fccu;
    // NOP
label_307fd0:
    // 0x307fd0: 0x80c1f30  j           func_307CC0
label_307fd4:
    if (ctx->pc == 0x307FD4u) {
        ctx->pc = 0x307FD4u;
            // 0x307fd4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x307FD8u;
        goto label_307fd8;
    }
    ctx->pc = 0x307FD0u;
    ctx->pc = 0x307FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307FD0u;
            // 0x307fd4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x307CC0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_307cc0;
    ctx->pc = 0x307FD8u;
label_307fd8:
    // 0x307fd8: 0x0  nop
    ctx->pc = 0x307fd8u;
    // NOP
label_307fdc:
    // 0x307fdc: 0x0  nop
    ctx->pc = 0x307fdcu;
    // NOP
label_307fe0:
    // 0x307fe0: 0x80c1e30  j           func_3078C0
label_307fe4:
    if (ctx->pc == 0x307FE4u) {
        ctx->pc = 0x307FE4u;
            // 0x307fe4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x307FE8u;
        goto label_307fe8;
    }
    ctx->pc = 0x307FE0u;
    ctx->pc = 0x307FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307FE0u;
            // 0x307fe4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3078C0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_3078c0;
    ctx->pc = 0x307FE8u;
label_307fe8:
    // 0x307fe8: 0x0  nop
    ctx->pc = 0x307fe8u;
    // NOP
label_307fec:
    // 0x307fec: 0x0  nop
    ctx->pc = 0x307fecu;
    // NOP
label_307ff0:
    // 0x307ff0: 0x80c1e6c  j           func_3079B0
label_307ff4:
    if (ctx->pc == 0x307FF4u) {
        ctx->pc = 0x307FF4u;
            // 0x307ff4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x307FF8u;
        goto label_307ff8;
    }
    ctx->pc = 0x307FF0u;
    ctx->pc = 0x307FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307FF0u;
            // 0x307ff4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3079B0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_3079b0;
    ctx->pc = 0x307FF8u;
label_307ff8:
    // 0x307ff8: 0x0  nop
    ctx->pc = 0x307ff8u;
    // NOP
label_307ffc:
    // 0x307ffc: 0x0  nop
    ctx->pc = 0x307ffcu;
    // NOP
label_308000:
    // 0x308000: 0x80c1dac  j           func_3076B0
label_308004:
    if (ctx->pc == 0x308004u) {
        ctx->pc = 0x308004u;
            // 0x308004: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x308008u;
        goto label_308008;
    }
    ctx->pc = 0x308000u;
    ctx->pc = 0x308004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308000u;
            // 0x308004: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3076B0u;
    {
        auto targetFn = runtime->lookupFunction(0x3076B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x308008u;
label_308008:
    // 0x308008: 0x0  nop
    ctx->pc = 0x308008u;
    // NOP
label_30800c:
    // 0x30800c: 0x0  nop
    ctx->pc = 0x30800cu;
    // NOP
label_308010:
    // 0x308010: 0x80c1db4  j           func_3076D0
label_308014:
    if (ctx->pc == 0x308014u) {
        ctx->pc = 0x308014u;
            // 0x308014: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x308018u;
        goto label_308018;
    }
    ctx->pc = 0x308010u;
    ctx->pc = 0x308014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308010u;
            // 0x308014: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3076D0u;
    {
        auto targetFn = runtime->lookupFunction(0x3076D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x308018u;
label_308018:
    // 0x308018: 0x0  nop
    ctx->pc = 0x308018u;
    // NOP
label_30801c:
    // 0x30801c: 0x0  nop
    ctx->pc = 0x30801cu;
    // NOP
label_308020:
    // 0x308020: 0x80c1dd4  j           func_307750
label_308024:
    if (ctx->pc == 0x308024u) {
        ctx->pc = 0x308024u;
            // 0x308024: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x308028u;
        goto label_308028;
    }
    ctx->pc = 0x308020u;
    ctx->pc = 0x308024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308020u;
            // 0x308024: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x307750u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_307750;
    ctx->pc = 0x308028u;
label_308028:
    // 0x308028: 0x0  nop
    ctx->pc = 0x308028u;
    // NOP
label_30802c:
    // 0x30802c: 0x0  nop
    ctx->pc = 0x30802cu;
    // NOP
label_308030:
    // 0x308030: 0x80c1ddc  j           func_307770
label_308034:
    if (ctx->pc == 0x308034u) {
        ctx->pc = 0x308034u;
            // 0x308034: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x308038u;
        goto label_308038;
    }
    ctx->pc = 0x308030u;
    ctx->pc = 0x308034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308030u;
            // 0x308034: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x307770u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_307770;
    ctx->pc = 0x308038u;
label_308038:
    // 0x308038: 0x0  nop
    ctx->pc = 0x308038u;
    // NOP
label_30803c:
    // 0x30803c: 0x0  nop
    ctx->pc = 0x30803cu;
    // NOP
label_308040:
    // 0x308040: 0x80c1eb8  j           func_307AE0
label_308044:
    if (ctx->pc == 0x308044u) {
        ctx->pc = 0x308044u;
            // 0x308044: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x308048u;
        goto label_308048;
    }
    ctx->pc = 0x308040u;
    ctx->pc = 0x308044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308040u;
            // 0x308044: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x307AE0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_307ae0;
    ctx->pc = 0x308048u;
label_308048:
    // 0x308048: 0x0  nop
    ctx->pc = 0x308048u;
    // NOP
label_30804c:
    // 0x30804c: 0x0  nop
    ctx->pc = 0x30804cu;
    // NOP
label_308050:
    // 0x308050: 0x80c1ed8  j           func_307B60
label_308054:
    if (ctx->pc == 0x308054u) {
        ctx->pc = 0x308054u;
            // 0x308054: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x308058u;
        goto label_308058;
    }
    ctx->pc = 0x308050u;
    ctx->pc = 0x308054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308050u;
            // 0x308054: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x307B60u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_307b60;
    ctx->pc = 0x308058u;
label_308058:
    // 0x308058: 0x0  nop
    ctx->pc = 0x308058u;
    // NOP
label_30805c:
    // 0x30805c: 0x0  nop
    ctx->pc = 0x30805cu;
    // NOP
label_308060:
    // 0x308060: 0x80c1de4  j           func_307790
label_308064:
    if (ctx->pc == 0x308064u) {
        ctx->pc = 0x308064u;
            // 0x308064: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x308068u;
        goto label_308068;
    }
    ctx->pc = 0x308060u;
    ctx->pc = 0x308064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308060u;
            // 0x308064: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x307790u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_307790;
    ctx->pc = 0x308068u;
label_308068:
    // 0x308068: 0x0  nop
    ctx->pc = 0x308068u;
    // NOP
label_30806c:
    // 0x30806c: 0x0  nop
    ctx->pc = 0x30806cu;
    // NOP
label_308070:
    // 0x308070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x308070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_308074:
    // 0x308074: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x308074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_308078:
    // 0x308078: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x308078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_30807c:
    // 0x30807c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30807cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_308080:
    // 0x308080: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x308080u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_308084:
    // 0x308084: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_308088:
    if (ctx->pc == 0x308088u) {
        ctx->pc = 0x308088u;
            // 0x308088: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30808Cu;
        goto label_30808c;
    }
    ctx->pc = 0x308084u;
    {
        const bool branch_taken_0x308084 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x308088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308084u;
            // 0x308088: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308084) {
            ctx->pc = 0x3080C8u;
            goto label_3080c8;
        }
    }
    ctx->pc = 0x30808Cu;
label_30808c:
    // 0x30808c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x30808cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_308090:
    // 0x308090: 0x24423dc0  addiu       $v0, $v0, 0x3DC0
    ctx->pc = 0x308090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15808));
label_308094:
    // 0x308094: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_308098:
    if (ctx->pc == 0x308098u) {
        ctx->pc = 0x308098u;
            // 0x308098: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x30809Cu;
        goto label_30809c;
    }
    ctx->pc = 0x308094u;
    {
        const bool branch_taken_0x308094 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x308098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308094u;
            // 0x308098: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308094) {
            ctx->pc = 0x3080B0u;
            goto label_3080b0;
        }
    }
    ctx->pc = 0x30809Cu;
label_30809c:
    // 0x30809c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x30809cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3080a0:
    // 0x3080a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3080a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3080a4:
    // 0x3080a4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x3080a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_3080a8:
    // 0x3080a8: 0xc057a68  jal         func_15E9A0
label_3080ac:
    if (ctx->pc == 0x3080ACu) {
        ctx->pc = 0x3080ACu;
            // 0x3080ac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3080B0u;
        goto label_3080b0;
    }
    ctx->pc = 0x3080A8u;
    SET_GPR_U32(ctx, 31, 0x3080B0u);
    ctx->pc = 0x3080ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3080A8u;
            // 0x3080ac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3080B0u; }
        if (ctx->pc != 0x3080B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3080B0u; }
        if (ctx->pc != 0x3080B0u) { return; }
    }
    ctx->pc = 0x3080B0u;
label_3080b0:
    // 0x3080b0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3080b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3080b4:
    // 0x3080b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3080b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3080b8:
    // 0x3080b8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3080bc:
    if (ctx->pc == 0x3080BCu) {
        ctx->pc = 0x3080BCu;
            // 0x3080bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3080C0u;
        goto label_3080c0;
    }
    ctx->pc = 0x3080B8u;
    {
        const bool branch_taken_0x3080b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3080b8) {
            ctx->pc = 0x3080BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3080B8u;
            // 0x3080bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3080CCu;
            goto label_3080cc;
        }
    }
    ctx->pc = 0x3080C0u;
label_3080c0:
    // 0x3080c0: 0xc0400a8  jal         func_1002A0
label_3080c4:
    if (ctx->pc == 0x3080C4u) {
        ctx->pc = 0x3080C4u;
            // 0x3080c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3080C8u;
        goto label_3080c8;
    }
    ctx->pc = 0x3080C0u;
    SET_GPR_U32(ctx, 31, 0x3080C8u);
    ctx->pc = 0x3080C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3080C0u;
            // 0x3080c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3080C8u; }
        if (ctx->pc != 0x3080C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3080C8u; }
        if (ctx->pc != 0x3080C8u) { return; }
    }
    ctx->pc = 0x3080C8u;
label_3080c8:
    // 0x3080c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3080c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3080cc:
    // 0x3080cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3080ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3080d0:
    // 0x3080d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3080d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3080d4:
    // 0x3080d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3080d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3080d8:
    // 0x3080d8: 0x3e00008  jr          $ra
label_3080dc:
    if (ctx->pc == 0x3080DCu) {
        ctx->pc = 0x3080DCu;
            // 0x3080dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3080E0u;
        goto label_3080e0;
    }
    ctx->pc = 0x3080D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3080DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3080D8u;
            // 0x3080dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3080E0u;
label_3080e0:
    // 0x3080e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3080e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3080e4:
    // 0x3080e4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3080e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3080e8:
    // 0x3080e8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3080e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3080ec:
    // 0x3080ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3080ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3080f0:
    // 0x3080f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3080f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3080f4:
    // 0x3080f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3080f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3080f8:
    // 0x3080f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3080f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3080fc:
    // 0x3080fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3080fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_308100:
    // 0x308100: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x308100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_308104:
    // 0x308104: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x308104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_308108:
    // 0x308108: 0x8c7189e8  lw          $s1, -0x7618($v1)
    ctx->pc = 0x308108u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937064)));
label_30810c:
    // 0x30810c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x30810cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_308110:
    // 0x308110: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x308110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_308114:
    // 0x308114: 0x10a300d7  beq         $a1, $v1, . + 4 + (0xD7 << 2)
label_308118:
    if (ctx->pc == 0x308118u) {
        ctx->pc = 0x308118u;
            // 0x308118: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30811Cu;
        goto label_30811c;
    }
    ctx->pc = 0x308114u;
    {
        const bool branch_taken_0x308114 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x308118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308114u;
            // 0x308118: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308114) {
            ctx->pc = 0x308474u;
            goto label_308474;
        }
    }
    ctx->pc = 0x30811Cu;
label_30811c:
    // 0x30811c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x30811cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_308120:
    // 0x308120: 0x50a30087  beql        $a1, $v1, . + 4 + (0x87 << 2)
label_308124:
    if (ctx->pc == 0x308124u) {
        ctx->pc = 0x308124u;
            // 0x308124: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->pc = 0x308128u;
        goto label_308128;
    }
    ctx->pc = 0x308120u;
    {
        const bool branch_taken_0x308120 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x308120) {
            ctx->pc = 0x308124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308120u;
            // 0x308124: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
            ctx->pc = 0x308340u;
            goto label_308340;
        }
    }
    ctx->pc = 0x308128u;
label_308128:
    // 0x308128: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x308128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30812c:
    // 0x30812c: 0x10a3001a  beq         $a1, $v1, . + 4 + (0x1A << 2)
label_308130:
    if (ctx->pc == 0x308130u) {
        ctx->pc = 0x308134u;
        goto label_308134;
    }
    ctx->pc = 0x30812Cu;
    {
        const bool branch_taken_0x30812c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x30812c) {
            ctx->pc = 0x308198u;
            goto label_308198;
        }
    }
    ctx->pc = 0x308134u;
label_308134:
    // 0x308134: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x308134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_308138:
    // 0x308138: 0x50a3000b  beql        $a1, $v1, . + 4 + (0xB << 2)
label_30813c:
    if (ctx->pc == 0x30813Cu) {
        ctx->pc = 0x30813Cu;
            // 0x30813c: 0x8e240188  lw          $a0, 0x188($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
        ctx->pc = 0x308140u;
        goto label_308140;
    }
    ctx->pc = 0x308138u;
    {
        const bool branch_taken_0x308138 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x308138) {
            ctx->pc = 0x30813Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308138u;
            // 0x30813c: 0x8e240188  lw          $a0, 0x188($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x308168u;
            goto label_308168;
        }
    }
    ctx->pc = 0x308140u;
label_308140:
    // 0x308140: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x308140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_308144:
    // 0x308144: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_308148:
    if (ctx->pc == 0x308148u) {
        ctx->pc = 0x308148u;
            // 0x308148: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x30814Cu;
        goto label_30814c;
    }
    ctx->pc = 0x308144u;
    {
        const bool branch_taken_0x308144 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x308144) {
            ctx->pc = 0x308148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308144u;
            // 0x308148: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x308154u;
            goto label_308154;
        }
    }
    ctx->pc = 0x30814Cu;
label_30814c:
    // 0x30814c: 0x10000110  b           . + 4 + (0x110 << 2)
label_308150:
    if (ctx->pc == 0x308150u) {
        ctx->pc = 0x308154u;
        goto label_308154;
    }
    ctx->pc = 0x30814Cu;
    {
        const bool branch_taken_0x30814c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30814c) {
            ctx->pc = 0x308590u;
            goto label_308590;
        }
    }
    ctx->pc = 0x308154u;
label_308154:
    // 0x308154: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x308154u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_308158:
    // 0x308158: 0x320f809  jalr        $t9
label_30815c:
    if (ctx->pc == 0x30815Cu) {
        ctx->pc = 0x308160u;
        goto label_308160;
    }
    ctx->pc = 0x308158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x308160u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x308160u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x308160u; }
            if (ctx->pc != 0x308160u) { return; }
        }
        }
    }
    ctx->pc = 0x308160u;
label_308160:
    // 0x308160: 0x1000010b  b           . + 4 + (0x10B << 2)
label_308164:
    if (ctx->pc == 0x308164u) {
        ctx->pc = 0x308168u;
        goto label_308168;
    }
    ctx->pc = 0x308160u;
    {
        const bool branch_taken_0x308160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x308160) {
            ctx->pc = 0x308590u;
            goto label_308590;
        }
    }
    ctx->pc = 0x308168u;
label_308168:
    // 0x308168: 0xc05cc84  jal         func_173210
label_30816c:
    if (ctx->pc == 0x30816Cu) {
        ctx->pc = 0x308170u;
        goto label_308170;
    }
    ctx->pc = 0x308168u;
    SET_GPR_U32(ctx, 31, 0x308170u);
    ctx->pc = 0x173210u;
    if (runtime->hasFunction(0x173210u)) {
        auto targetFn = runtime->lookupFunction(0x173210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308170u; }
        if (ctx->pc != 0x308170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173210_0x173210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308170u; }
        if (ctx->pc != 0x308170u) { return; }
    }
    ctx->pc = 0x308170u;
label_308170:
    // 0x308170: 0xc05cc84  jal         func_173210
label_308174:
    if (ctx->pc == 0x308174u) {
        ctx->pc = 0x308174u;
            // 0x308174: 0x8e24018c  lw          $a0, 0x18C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 396)));
        ctx->pc = 0x308178u;
        goto label_308178;
    }
    ctx->pc = 0x308170u;
    SET_GPR_U32(ctx, 31, 0x308178u);
    ctx->pc = 0x308174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308170u;
            // 0x308174: 0x8e24018c  lw          $a0, 0x18C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 396)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173210u;
    if (runtime->hasFunction(0x173210u)) {
        auto targetFn = runtime->lookupFunction(0x173210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308178u; }
        if (ctx->pc != 0x308178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173210_0x173210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308178u; }
        if (ctx->pc != 0x308178u) { return; }
    }
    ctx->pc = 0x308178u;
label_308178:
    // 0x308178: 0xc074708  jal         func_1D1C20
label_30817c:
    if (ctx->pc == 0x30817Cu) {
        ctx->pc = 0x30817Cu;
            // 0x30817c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x308180u;
        goto label_308180;
    }
    ctx->pc = 0x308178u;
    SET_GPR_U32(ctx, 31, 0x308180u);
    ctx->pc = 0x30817Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308178u;
            // 0x30817c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C20u;
    if (runtime->hasFunction(0x1D1C20u)) {
        auto targetFn = runtime->lookupFunction(0x1D1C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308180u; }
        if (ctx->pc != 0x308180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1C20_0x1d1c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308180u; }
        if (ctx->pc != 0x308180u) { return; }
    }
    ctx->pc = 0x308180u;
label_308180:
    // 0x308180: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x308180u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_308184:
    // 0x308184: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x308184u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_308188:
    // 0x308188: 0x320f809  jalr        $t9
label_30818c:
    if (ctx->pc == 0x30818Cu) {
        ctx->pc = 0x30818Cu;
            // 0x30818c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x308190u;
        goto label_308190;
    }
    ctx->pc = 0x308188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x308190u);
        ctx->pc = 0x30818Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308188u;
            // 0x30818c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x308190u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x308190u; }
            if (ctx->pc != 0x308190u) { return; }
        }
        }
    }
    ctx->pc = 0x308190u;
label_308190:
    // 0x308190: 0x100000ff  b           . + 4 + (0xFF << 2)
label_308194:
    if (ctx->pc == 0x308194u) {
        ctx->pc = 0x308198u;
        goto label_308198;
    }
    ctx->pc = 0x308190u;
    {
        const bool branch_taken_0x308190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x308190) {
            ctx->pc = 0x308590u;
            goto label_308590;
        }
    }
    ctx->pc = 0x308198u;
label_308198:
    // 0x308198: 0xc0c05c4  jal         func_301710
label_30819c:
    if (ctx->pc == 0x30819Cu) {
        ctx->pc = 0x3081A0u;
        goto label_3081a0;
    }
    ctx->pc = 0x308198u;
    SET_GPR_U32(ctx, 31, 0x3081A0u);
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3081A0u; }
        if (ctx->pc != 0x3081A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3081A0u; }
        if (ctx->pc != 0x3081A0u) { return; }
    }
    ctx->pc = 0x3081A0u;
label_3081a0:
    // 0x3081a0: 0xa2000072  sb          $zero, 0x72($s0)
    ctx->pc = 0x3081a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 114), (uint8_t)GPR_U32(ctx, 0));
label_3081a4:
    // 0x3081a4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x3081a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_3081a8:
    // 0x3081a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3081a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3081ac:
    // 0x3081ac: 0xa2000073  sb          $zero, 0x73($s0)
    ctx->pc = 0x3081acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 115), (uint8_t)GPR_U32(ctx, 0));
label_3081b0:
    // 0x3081b0: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x3081b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
label_3081b4:
    // 0x3081b4: 0xa2020075  sb          $v0, 0x75($s0)
    ctx->pc = 0x3081b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 117), (uint8_t)GPR_U32(ctx, 2));
label_3081b8:
    // 0x3081b8: 0x24a52ca8  addiu       $a1, $a1, 0x2CA8
    ctx->pc = 0x3081b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11432));
label_3081bc:
    // 0x3081bc: 0xc04a508  jal         func_129420
label_3081c0:
    if (ctx->pc == 0x3081C0u) {
        ctx->pc = 0x3081C0u;
            // 0x3081c0: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x3081C4u;
        goto label_3081c4;
    }
    ctx->pc = 0x3081BCu;
    SET_GPR_U32(ctx, 31, 0x3081C4u);
    ctx->pc = 0x3081C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3081BCu;
            // 0x3081c0: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3081C4u; }
        if (ctx->pc != 0x3081C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3081C4u; }
        if (ctx->pc != 0x3081C4u) { return; }
    }
    ctx->pc = 0x3081C4u;
label_3081c4:
    // 0x3081c4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x3081c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_3081c8:
    // 0x3081c8: 0x26040062  addiu       $a0, $s0, 0x62
    ctx->pc = 0x3081c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 98));
label_3081cc:
    // 0x3081cc: 0x24a52c98  addiu       $a1, $a1, 0x2C98
    ctx->pc = 0x3081ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11416));
label_3081d0:
    // 0x3081d0: 0xc04a508  jal         func_129420
label_3081d4:
    if (ctx->pc == 0x3081D4u) {
        ctx->pc = 0x3081D4u;
            // 0x3081d4: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x3081D8u;
        goto label_3081d8;
    }
    ctx->pc = 0x3081D0u;
    SET_GPR_U32(ctx, 31, 0x3081D8u);
    ctx->pc = 0x3081D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3081D0u;
            // 0x3081d4: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3081D8u; }
        if (ctx->pc != 0x3081D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3081D8u; }
        if (ctx->pc != 0x3081D8u) { return; }
    }
    ctx->pc = 0x3081D8u;
label_3081d8:
    // 0x3081d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3081d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3081dc:
    // 0x3081dc: 0xc0c2188  jal         func_308620
label_3081e0:
    if (ctx->pc == 0x3081E0u) {
        ctx->pc = 0x3081E0u;
            // 0x3081e0: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x3081E4u;
        goto label_3081e4;
    }
    ctx->pc = 0x3081DCu;
    SET_GPR_U32(ctx, 31, 0x3081E4u);
    ctx->pc = 0x3081E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3081DCu;
            // 0x3081e0: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x308620u;
    if (runtime->hasFunction(0x308620u)) {
        auto targetFn = runtime->lookupFunction(0x308620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3081E4u; }
        if (ctx->pc != 0x3081E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00308620_0x308620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3081E4u; }
        if (ctx->pc != 0x3081E4u) { return; }
    }
    ctx->pc = 0x3081E4u;
label_3081e4:
    // 0x3081e4: 0xc077318  jal         func_1DCC60
label_3081e8:
    if (ctx->pc == 0x3081E8u) {
        ctx->pc = 0x3081E8u;
            // 0x3081e8: 0x2455ffff  addiu       $s5, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x3081ECu;
        goto label_3081ec;
    }
    ctx->pc = 0x3081E4u;
    SET_GPR_U32(ctx, 31, 0x3081ECu);
    ctx->pc = 0x3081E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3081E4u;
            // 0x3081e8: 0x2455ffff  addiu       $s5, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC60u;
    if (runtime->hasFunction(0x1DCC60u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3081ECu; }
        if (ctx->pc != 0x3081ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC60_0x1dcc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3081ECu; }
        if (ctx->pc != 0x3081ECu) { return; }
    }
    ctx->pc = 0x3081ECu;
label_3081ec:
    // 0x3081ec: 0xc0c2184  jal         func_308610
label_3081f0:
    if (ctx->pc == 0x3081F0u) {
        ctx->pc = 0x3081F0u;
            // 0x3081f0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3081F4u;
        goto label_3081f4;
    }
    ctx->pc = 0x3081ECu;
    SET_GPR_U32(ctx, 31, 0x3081F4u);
    ctx->pc = 0x3081F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3081ECu;
            // 0x3081f0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x308610u;
    if (runtime->hasFunction(0x308610u)) {
        auto targetFn = runtime->lookupFunction(0x308610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3081F4u; }
        if (ctx->pc != 0x3081F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00308610_0x308610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3081F4u; }
        if (ctx->pc != 0x3081F4u) { return; }
    }
    ctx->pc = 0x3081F4u;
label_3081f4:
    // 0x3081f4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3081f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3081f8:
    // 0x3081f8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3081f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3081fc:
    // 0x3081fc: 0xc0b369c  jal         func_2CDA70
label_308200:
    if (ctx->pc == 0x308200u) {
        ctx->pc = 0x308200u;
            // 0x308200: 0xa2020074  sb          $v0, 0x74($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x308204u;
        goto label_308204;
    }
    ctx->pc = 0x3081FCu;
    SET_GPR_U32(ctx, 31, 0x308204u);
    ctx->pc = 0x308200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3081FCu;
            // 0x308200: 0xa2020074  sb          $v0, 0x74($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDA70u;
    if (runtime->hasFunction(0x2CDA70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308204u; }
        if (ctx->pc != 0x308204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDA70_0x2cda70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308204u; }
        if (ctx->pc != 0x308204u) { return; }
    }
    ctx->pc = 0x308204u;
label_308204:
    // 0x308204: 0xc0775ac  jal         func_1DD6B0
label_308208:
    if (ctx->pc == 0x308208u) {
        ctx->pc = 0x308208u;
            // 0x308208: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30820Cu;
        goto label_30820c;
    }
    ctx->pc = 0x308204u;
    SET_GPR_U32(ctx, 31, 0x30820Cu);
    ctx->pc = 0x308208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308204u;
            // 0x308208: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6B0u;
    if (runtime->hasFunction(0x1DD6B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30820Cu; }
        if (ctx->pc != 0x30820Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6B0_0x1dd6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30820Cu; }
        if (ctx->pc != 0x30820Cu) { return; }
    }
    ctx->pc = 0x30820Cu;
label_30820c:
    // 0x30820c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30820cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308210:
    // 0x308210: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x308210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_308214:
    // 0x308214: 0x56420005  bnel        $s2, $v0, . + 4 + (0x5 << 2)
label_308218:
    if (ctx->pc == 0x308218u) {
        ctx->pc = 0x308218u;
            // 0x308218: 0x26a30031  addiu       $v1, $s5, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 49));
        ctx->pc = 0x30821Cu;
        goto label_30821c;
    }
    ctx->pc = 0x308214u;
    {
        const bool branch_taken_0x308214 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x308214) {
            ctx->pc = 0x308218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308214u;
            // 0x308218: 0x26a30031  addiu       $v1, $s5, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 49));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30822Cu;
            goto label_30822c;
        }
    }
    ctx->pc = 0x30821Cu;
label_30821c:
    // 0x30821c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30821cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_308220:
    // 0x308220: 0x24150008  addiu       $s5, $zero, 0x8
    ctx->pc = 0x308220u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_308224:
    // 0x308224: 0xa2020074  sb          $v0, 0x74($s0)
    ctx->pc = 0x308224u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 116), (uint8_t)GPR_U32(ctx, 2));
label_308228:
    // 0x308228: 0x26a30031  addiu       $v1, $s5, 0x31
    ctx->pc = 0x308228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 49));
label_30822c:
    // 0x30822c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x30822cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_308230:
    // 0x308230: 0xa203005b  sb          $v1, 0x5B($s0)
    ctx->pc = 0x308230u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 91), (uint8_t)GPR_U32(ctx, 3));
label_308234:
    // 0x308234: 0xa2030069  sb          $v1, 0x69($s0)
    ctx->pc = 0x308234u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 3));
label_308238:
    // 0x308238: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x308238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_30823c:
    // 0x30823c: 0xc0adc48  jal         func_2B7120
label_308240:
    if (ctx->pc == 0x308240u) {
        ctx->pc = 0x308240u;
            // 0x308240: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x308244u;
        goto label_308244;
    }
    ctx->pc = 0x30823Cu;
    SET_GPR_U32(ctx, 31, 0x308244u);
    ctx->pc = 0x308240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30823Cu;
            // 0x308240: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7120u;
    if (runtime->hasFunction(0x2B7120u)) {
        auto targetFn = runtime->lookupFunction(0x2B7120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308244u; }
        if (ctx->pc != 0x308244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7120_0x2b7120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308244u; }
        if (ctx->pc != 0x308244u) { return; }
    }
    ctx->pc = 0x308244u;
label_308244:
    // 0x308244: 0x3c1300af  lui         $s3, 0xAF
    ctx->pc = 0x308244u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)175 << 16));
label_308248:
    // 0x308248: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x308248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30824c:
    // 0x30824c: 0x26730e80  addiu       $s3, $s3, 0xE80
    ctx->pc = 0x30824cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3712));
label_308250:
    // 0x308250: 0xc0772f0  jal         func_1DCBC0
label_308254:
    if (ctx->pc == 0x308254u) {
        ctx->pc = 0x308254u;
            // 0x308254: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x308258u;
        goto label_308258;
    }
    ctx->pc = 0x308250u;
    SET_GPR_U32(ctx, 31, 0x308258u);
    ctx->pc = 0x308254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308250u;
            // 0x308254: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBC0u;
    if (runtime->hasFunction(0x1DCBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308258u; }
        if (ctx->pc != 0x308258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBC0_0x1dcbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308258u; }
        if (ctx->pc != 0x308258u) { return; }
    }
    ctx->pc = 0x308258u;
label_308258:
    // 0x308258: 0xc0c2180  jal         func_308600
label_30825c:
    if (ctx->pc == 0x30825Cu) {
        ctx->pc = 0x30825Cu;
            // 0x30825c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x308260u;
        goto label_308260;
    }
    ctx->pc = 0x308258u;
    SET_GPR_U32(ctx, 31, 0x308260u);
    ctx->pc = 0x30825Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308258u;
            // 0x30825c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x308600u;
    if (runtime->hasFunction(0x308600u)) {
        auto targetFn = runtime->lookupFunction(0x308600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308260u; }
        if (ctx->pc != 0x308260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00308600_0x308600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308260u; }
        if (ctx->pc != 0x308260u) { return; }
    }
    ctx->pc = 0x308260u;
label_308260:
    // 0x308260: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x308260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_308264:
    // 0x308264: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
label_308268:
    if (ctx->pc == 0x308268u) {
        ctx->pc = 0x308268u;
            // 0x308268: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x30826Cu;
        goto label_30826c;
    }
    ctx->pc = 0x308264u;
    {
        const bool branch_taken_0x308264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x308264) {
            ctx->pc = 0x308268u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308264u;
            // 0x308268: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x308290u;
            goto label_308290;
        }
    }
    ctx->pc = 0x30826Cu;
label_30826c:
    // 0x30826c: 0xa2030069  sb          $v1, 0x69($s0)
    ctx->pc = 0x30826cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 3));
label_308270:
    // 0x308270: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x308270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_308274:
    // 0x308274: 0xa202005a  sb          $v0, 0x5A($s0)
    ctx->pc = 0x308274u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 2));
label_308278:
    // 0x308278: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x308278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_30827c:
    // 0x30827c: 0xa202005b  sb          $v0, 0x5B($s0)
    ctx->pc = 0x30827cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 91), (uint8_t)GPR_U32(ctx, 2));
label_308280:
    // 0x308280: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x308280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_308284:
    // 0x308284: 0xa2140075  sb          $s4, 0x75($s0)
    ctx->pc = 0x308284u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 117), (uint8_t)GPR_U32(ctx, 20));
label_308288:
    // 0x308288: 0x10000005  b           . + 4 + (0x5 << 2)
label_30828c:
    if (ctx->pc == 0x30828Cu) {
        ctx->pc = 0x30828Cu;
            // 0x30828c: 0xa2020074  sb          $v0, 0x74($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x308290u;
        goto label_308290;
    }
    ctx->pc = 0x308288u;
    {
        const bool branch_taken_0x308288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30828Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308288u;
            // 0x30828c: 0xa2020074  sb          $v0, 0x74($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308288) {
            ctx->pc = 0x3082A0u;
            goto label_3082a0;
        }
    }
    ctx->pc = 0x308290u;
label_308290:
    // 0x308290: 0x291102a  slt         $v0, $s4, $s1
    ctx->pc = 0x308290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_308294:
    // 0x308294: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_308298:
    if (ctx->pc == 0x308298u) {
        ctx->pc = 0x308298u;
            // 0x308298: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x30829Cu;
        goto label_30829c;
    }
    ctx->pc = 0x308294u;
    {
        const bool branch_taken_0x308294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308294u;
            // 0x308298: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308294) {
            ctx->pc = 0x308250u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_308250;
        }
    }
    ctx->pc = 0x30829Cu;
label_30829c:
    // 0x30829c: 0x0  nop
    ctx->pc = 0x30829cu;
    // NOP
label_3082a0:
    // 0x3082a0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3082a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3082a4:
    // 0x3082a4: 0x5642000b  bnel        $s2, $v0, . + 4 + (0xB << 2)
label_3082a8:
    if (ctx->pc == 0x3082A8u) {
        ctx->pc = 0x3082A8u;
            // 0x3082a8: 0x82020075  lb          $v0, 0x75($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 117)));
        ctx->pc = 0x3082ACu;
        goto label_3082ac;
    }
    ctx->pc = 0x3082A4u;
    {
        const bool branch_taken_0x3082a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x3082a4) {
            ctx->pc = 0x3082A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3082A4u;
            // 0x3082a8: 0x82020075  lb          $v0, 0x75($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 117)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3082D4u;
            goto label_3082d4;
        }
    }
    ctx->pc = 0x3082ACu;
label_3082ac:
    // 0x3082ac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3082acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3082b0:
    // 0x3082b0: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x3082b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3082b4:
    // 0x3082b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3082b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3082b8:
    // 0x3082b8: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3082b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3082bc:
    // 0x3082bc: 0x320f809  jalr        $t9
label_3082c0:
    if (ctx->pc == 0x3082C0u) {
        ctx->pc = 0x3082C4u;
        goto label_3082c4;
    }
    ctx->pc = 0x3082BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3082C4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3082C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3082C4u; }
            if (ctx->pc != 0x3082C4u) { return; }
        }
        }
    }
    ctx->pc = 0x3082C4u;
label_3082c4:
    // 0x3082c4: 0x82030075  lb          $v1, 0x75($s0)
    ctx->pc = 0x3082c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 117)));
label_3082c8:
    // 0x3082c8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3082c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3082cc:
    // 0x3082cc: 0x10000002  b           . + 4 + (0x2 << 2)
label_3082d0:
    if (ctx->pc == 0x3082D0u) {
        ctx->pc = 0x3082D0u;
            // 0x3082d0: 0xa2020076  sb          $v0, 0x76($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 118), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3082D4u;
        goto label_3082d4;
    }
    ctx->pc = 0x3082CCu;
    {
        const bool branch_taken_0x3082cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3082D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3082CCu;
            // 0x3082d0: 0xa2020076  sb          $v0, 0x76($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 118), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3082cc) {
            ctx->pc = 0x3082D8u;
            goto label_3082d8;
        }
    }
    ctx->pc = 0x3082D4u;
label_3082d4:
    // 0x3082d4: 0xa2020076  sb          $v0, 0x76($s0)
    ctx->pc = 0x3082d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 118), (uint8_t)GPR_U32(ctx, 2));
label_3082d8:
    // 0x3082d8: 0x92020074  lbu         $v0, 0x74($s0)
    ctx->pc = 0x3082d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 116)));
label_3082dc:
    // 0x3082dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3082e0:
    if (ctx->pc == 0x3082E0u) {
        ctx->pc = 0x3082E4u;
        goto label_3082e4;
    }
    ctx->pc = 0x3082DCu;
    {
        const bool branch_taken_0x3082dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3082dc) {
            ctx->pc = 0x3082ECu;
            goto label_3082ec;
        }
    }
    ctx->pc = 0x3082E4u;
label_3082e4:
    // 0x3082e4: 0x2402006d  addiu       $v0, $zero, 0x6D
    ctx->pc = 0x3082e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_3082e8:
    // 0x3082e8: 0xa202005c  sb          $v0, 0x5C($s0)
    ctx->pc = 0x3082e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 2));
label_3082ec:
    // 0x3082ec: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3082ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3082f0:
    // 0x3082f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3082f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3082f4:
    // 0x3082f4: 0x24422c80  addiu       $v0, $v0, 0x2C80
    ctx->pc = 0x3082f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11392));
label_3082f8:
    // 0x3082f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3082f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3082fc:
    // 0x3082fc: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x3082fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_308300:
    // 0x308300: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x308300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_308304:
    // 0x308304: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x308304u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_308308:
    // 0x308308: 0xa2020070  sb          $v0, 0x70($s0)
    ctx->pc = 0x308308u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 2));
label_30830c:
    // 0x30830c: 0xc0c218c  jal         func_308630
label_308310:
    if (ctx->pc == 0x308310u) {
        ctx->pc = 0x308310u;
            // 0x308310: 0xa2000071  sb          $zero, 0x71($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x308314u;
        goto label_308314;
    }
    ctx->pc = 0x30830Cu;
    SET_GPR_U32(ctx, 31, 0x308314u);
    ctx->pc = 0x308310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30830Cu;
            // 0x308310: 0xa2000071  sb          $zero, 0x71($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x308630u;
    if (runtime->hasFunction(0x308630u)) {
        auto targetFn = runtime->lookupFunction(0x308630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308314u; }
        if (ctx->pc != 0x308314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00308630_0x308630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308314u; }
        if (ctx->pc != 0x308314u) { return; }
    }
    ctx->pc = 0x308314u;
label_308314:
    // 0x308314: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x308314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_308318:
    // 0x308318: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x308318u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_30831c:
    // 0x30831c: 0x320f809  jalr        $t9
label_308320:
    if (ctx->pc == 0x308320u) {
        ctx->pc = 0x308320u;
            // 0x308320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x308324u;
        goto label_308324;
    }
    ctx->pc = 0x30831Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x308324u);
        ctx->pc = 0x308320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30831Cu;
            // 0x308320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x308324u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x308324u; }
            if (ctx->pc != 0x308324u) { return; }
        }
        }
    }
    ctx->pc = 0x308324u;
label_308324:
    // 0x308324: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x308324u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_308328:
    // 0x308328: 0x92050074  lbu         $a1, 0x74($s0)
    ctx->pc = 0x308328u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 116)));
label_30832c:
    // 0x30832c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x30832cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_308330:
    // 0x308330: 0x320f809  jalr        $t9
label_308334:
    if (ctx->pc == 0x308334u) {
        ctx->pc = 0x308334u;
            // 0x308334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x308338u;
        goto label_308338;
    }
    ctx->pc = 0x308330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x308338u);
        ctx->pc = 0x308334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308330u;
            // 0x308334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x308338u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x308338u; }
            if (ctx->pc != 0x308338u) { return; }
        }
        }
    }
    ctx->pc = 0x308338u;
label_308338:
    // 0x308338: 0x10000095  b           . + 4 + (0x95 << 2)
label_30833c:
    if (ctx->pc == 0x30833Cu) {
        ctx->pc = 0x308340u;
        goto label_308340;
    }
    ctx->pc = 0x308338u;
    {
        const bool branch_taken_0x308338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x308338) {
            ctx->pc = 0x308590u;
            goto label_308590;
        }
    }
    ctx->pc = 0x308340u;
label_308340:
    // 0x308340: 0xc0c21d0  jal         func_308740
label_308344:
    if (ctx->pc == 0x308344u) {
        ctx->pc = 0x308348u;
        goto label_308348;
    }
    ctx->pc = 0x308340u;
    SET_GPR_U32(ctx, 31, 0x308348u);
    ctx->pc = 0x308740u;
    if (runtime->hasFunction(0x308740u)) {
        auto targetFn = runtime->lookupFunction(0x308740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308348u; }
        if (ctx->pc != 0x308348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00308740_0x308740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308348u; }
        if (ctx->pc != 0x308348u) { return; }
    }
    ctx->pc = 0x308348u;
label_308348:
    // 0x308348: 0x92040071  lbu         $a0, 0x71($s0)
    ctx->pc = 0x308348u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 113)));
label_30834c:
    // 0x30834c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30834cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_308350:
    // 0x308350: 0x50830020  beql        $a0, $v1, . + 4 + (0x20 << 2)
label_308354:
    if (ctx->pc == 0x308354u) {
        ctx->pc = 0x308354u;
            // 0x308354: 0x8fa4007c  lw          $a0, 0x7C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->pc = 0x308358u;
        goto label_308358;
    }
    ctx->pc = 0x308350u;
    {
        const bool branch_taken_0x308350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x308350) {
            ctx->pc = 0x308354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308350u;
            // 0x308354: 0x8fa4007c  lw          $a0, 0x7C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3083D4u;
            goto label_3083d4;
        }
    }
    ctx->pc = 0x308358u;
label_308358:
    // 0x308358: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_30835c:
    if (ctx->pc == 0x30835Cu) {
        ctx->pc = 0x30835Cu;
            // 0x30835c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x308360u;
        goto label_308360;
    }
    ctx->pc = 0x308358u;
    {
        const bool branch_taken_0x308358 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x308358) {
            ctx->pc = 0x30835Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308358u;
            // 0x30835c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x308368u;
            goto label_308368;
        }
    }
    ctx->pc = 0x308360u;
label_308360:
    // 0x308360: 0x1000008b  b           . + 4 + (0x8B << 2)
label_308364:
    if (ctx->pc == 0x308364u) {
        ctx->pc = 0x308368u;
        goto label_308368;
    }
    ctx->pc = 0x308360u;
    {
        const bool branch_taken_0x308360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x308360) {
            ctx->pc = 0x308590u;
            goto label_308590;
        }
    }
    ctx->pc = 0x308368u;
label_308368:
    // 0x308368: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x308368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30836c:
    // 0x30836c: 0xc0746b8  jal         func_1D1AE0
label_308370:
    if (ctx->pc == 0x308370u) {
        ctx->pc = 0x308370u;
            // 0x308370: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->pc = 0x308374u;
        goto label_308374;
    }
    ctx->pc = 0x30836Cu;
    SET_GPR_U32(ctx, 31, 0x308374u);
    ctx->pc = 0x308370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30836Cu;
            // 0x308370: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1AE0u;
    if (runtime->hasFunction(0x1D1AE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D1AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308374u; }
        if (ctx->pc != 0x308374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1AE0_0x1d1ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308374u; }
        if (ctx->pc != 0x308374u) { return; }
    }
    ctx->pc = 0x308374u;
label_308374:
    // 0x308374: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x308374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_308378:
    // 0x308378: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x308378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30837c:
    // 0x30837c: 0x14830084  bne         $a0, $v1, . + 4 + (0x84 << 2)
label_308380:
    if (ctx->pc == 0x308380u) {
        ctx->pc = 0x308384u;
        goto label_308384;
    }
    ctx->pc = 0x30837Cu;
    {
        const bool branch_taken_0x30837c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x30837c) {
            ctx->pc = 0x308590u;
            goto label_308590;
        }
    }
    ctx->pc = 0x308384u;
label_308384:
    // 0x308384: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x308384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_308388:
    // 0x308388: 0x92030072  lbu         $v1, 0x72($s0)
    ctx->pc = 0x308388u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
label_30838c:
    // 0x30838c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_308390:
    if (ctx->pc == 0x308390u) {
        ctx->pc = 0x308390u;
            // 0x308390: 0x8c4289e8  lw          $v0, -0x7618($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
        ctx->pc = 0x308394u;
        goto label_308394;
    }
    ctx->pc = 0x30838Cu;
    {
        const bool branch_taken_0x30838c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x308390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30838Cu;
            // 0x308390: 0x8c4289e8  lw          $v0, -0x7618($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30838c) {
            ctx->pc = 0x3083A8u;
            goto label_3083a8;
        }
    }
    ctx->pc = 0x308394u;
label_308394:
    // 0x308394: 0x8c44018c  lw          $a0, 0x18C($v0)
    ctx->pc = 0x308394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
label_308398:
    // 0x308398: 0xc05d85a  jal         func_176168
label_30839c:
    if (ctx->pc == 0x30839Cu) {
        ctx->pc = 0x30839Cu;
            // 0x30839c: 0x26050062  addiu       $a1, $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 98));
        ctx->pc = 0x3083A0u;
        goto label_3083a0;
    }
    ctx->pc = 0x308398u;
    SET_GPR_U32(ctx, 31, 0x3083A0u);
    ctx->pc = 0x30839Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308398u;
            // 0x30839c: 0x26050062  addiu       $a1, $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 98));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176168u;
    if (runtime->hasFunction(0x176168u)) {
        auto targetFn = runtime->lookupFunction(0x176168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3083A0u; }
        if (ctx->pc != 0x3083A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176168_0x176168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3083A0u; }
        if (ctx->pc != 0x3083A0u) { return; }
    }
    ctx->pc = 0x3083A0u;
label_3083a0:
    // 0x3083a0: 0x10000006  b           . + 4 + (0x6 << 2)
label_3083a4:
    if (ctx->pc == 0x3083A4u) {
        ctx->pc = 0x3083A4u;
            // 0x3083a4: 0x2405fc40  addiu       $a1, $zero, -0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966336));
        ctx->pc = 0x3083A8u;
        goto label_3083a8;
    }
    ctx->pc = 0x3083A0u;
    {
        const bool branch_taken_0x3083a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3083A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3083A0u;
            // 0x3083a4: 0x2405fc40  addiu       $a1, $zero, -0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3083a0) {
            ctx->pc = 0x3083BCu;
            goto label_3083bc;
        }
    }
    ctx->pc = 0x3083A8u;
label_3083a8:
    // 0x3083a8: 0x8c44018c  lw          $a0, 0x18C($v0)
    ctx->pc = 0x3083a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
label_3083ac:
    // 0x3083ac: 0xc05d416  jal         func_175058
label_3083b0:
    if (ctx->pc == 0x3083B0u) {
        ctx->pc = 0x3083B0u;
            // 0x3083b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3083B4u;
        goto label_3083b4;
    }
    ctx->pc = 0x3083ACu;
    SET_GPR_U32(ctx, 31, 0x3083B4u);
    ctx->pc = 0x3083B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3083ACu;
            // 0x3083b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175058u;
    if (runtime->hasFunction(0x175058u)) {
        auto targetFn = runtime->lookupFunction(0x175058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3083B4u; }
        if (ctx->pc != 0x3083B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175058_0x175058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3083B4u; }
        if (ctx->pc != 0x3083B4u) { return; }
    }
    ctx->pc = 0x3083B4u;
label_3083b4:
    // 0x3083b4: 0xa2000072  sb          $zero, 0x72($s0)
    ctx->pc = 0x3083b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 114), (uint8_t)GPR_U32(ctx, 0));
label_3083b8:
    // 0x3083b8: 0x2405fc40  addiu       $a1, $zero, -0x3C0
    ctx->pc = 0x3083b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966336));
label_3083bc:
    // 0x3083bc: 0xa6250308  sh          $a1, 0x308($s1)
    ctx->pc = 0x3083bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 776), (uint16_t)GPR_U32(ctx, 5));
label_3083c0:
    // 0x3083c0: 0xc05d006  jal         func_174018
label_3083c4:
    if (ctx->pc == 0x3083C4u) {
        ctx->pc = 0x3083C4u;
            // 0x3083c4: 0x8e240188  lw          $a0, 0x188($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
        ctx->pc = 0x3083C8u;
        goto label_3083c8;
    }
    ctx->pc = 0x3083C0u;
    SET_GPR_U32(ctx, 31, 0x3083C8u);
    ctx->pc = 0x3083C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3083C0u;
            // 0x3083c4: 0x8e240188  lw          $a0, 0x188($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174018u;
    if (runtime->hasFunction(0x174018u)) {
        auto targetFn = runtime->lookupFunction(0x174018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3083C8u; }
        if (ctx->pc != 0x3083C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174018_0x174018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3083C8u; }
        if (ctx->pc != 0x3083C8u) { return; }
    }
    ctx->pc = 0x3083C8u;
label_3083c8:
    // 0x3083c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3083c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3083cc:
    // 0x3083cc: 0x10000070  b           . + 4 + (0x70 << 2)
label_3083d0:
    if (ctx->pc == 0x3083D0u) {
        ctx->pc = 0x3083D0u;
            // 0x3083d0: 0xa2030071  sb          $v1, 0x71($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3083D4u;
        goto label_3083d4;
    }
    ctx->pc = 0x3083CCu;
    {
        const bool branch_taken_0x3083cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3083D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3083CCu;
            // 0x3083d0: 0xa2030071  sb          $v1, 0x71($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3083cc) {
            ctx->pc = 0x308590u;
            goto label_308590;
        }
    }
    ctx->pc = 0x3083D4u;
label_3083d4:
    // 0x3083d4: 0x1083006e  beq         $a0, $v1, . + 4 + (0x6E << 2)
label_3083d8:
    if (ctx->pc == 0x3083D8u) {
        ctx->pc = 0x3083DCu;
        goto label_3083dc;
    }
    ctx->pc = 0x3083D4u;
    {
        const bool branch_taken_0x3083d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3083d4) {
            ctx->pc = 0x308590u;
            goto label_308590;
        }
    }
    ctx->pc = 0x3083DCu;
label_3083dc:
    // 0x3083dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3083dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3083e0:
    // 0x3083e0: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_3083e4:
    if (ctx->pc == 0x3083E4u) {
        ctx->pc = 0x3083E4u;
            // 0x3083e4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3083E8u;
        goto label_3083e8;
    }
    ctx->pc = 0x3083E0u;
    {
        const bool branch_taken_0x3083e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3083e0) {
            ctx->pc = 0x3083E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3083E0u;
            // 0x3083e4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3083F0u;
            goto label_3083f0;
        }
    }
    ctx->pc = 0x3083E8u;
label_3083e8:
    // 0x3083e8: 0x10000069  b           . + 4 + (0x69 << 2)
label_3083ec:
    if (ctx->pc == 0x3083ECu) {
        ctx->pc = 0x3083ECu;
            // 0x3083ec: 0xa2000071  sb          $zero, 0x71($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3083F0u;
        goto label_3083f0;
    }
    ctx->pc = 0x3083E8u;
    {
        const bool branch_taken_0x3083e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3083ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3083E8u;
            // 0x3083ec: 0xa2000071  sb          $zero, 0x71($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3083e8) {
            ctx->pc = 0x308590u;
            goto label_308590;
        }
    }
    ctx->pc = 0x3083F0u;
label_3083f0:
    // 0x3083f0: 0x54830067  bnel        $a0, $v1, . + 4 + (0x67 << 2)
label_3083f4:
    if (ctx->pc == 0x3083F4u) {
        ctx->pc = 0x3083F4u;
            // 0x3083f4: 0xa2000071  sb          $zero, 0x71($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3083F8u;
        goto label_3083f8;
    }
    ctx->pc = 0x3083F0u;
    {
        const bool branch_taken_0x3083f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3083f0) {
            ctx->pc = 0x3083F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3083F0u;
            // 0x3083f4: 0xa2000071  sb          $zero, 0x71($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x308590u;
            goto label_308590;
        }
    }
    ctx->pc = 0x3083F8u;
label_3083f8:
    // 0x3083f8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3083f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3083fc:
    // 0x3083fc: 0x8c5189e8  lw          $s1, -0x7618($v0)
    ctx->pc = 0x3083fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_308400:
    // 0x308400: 0x862502fc  lh          $a1, 0x2FC($s1)
    ctx->pc = 0x308400u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 764)));
label_308404:
    // 0x308404: 0xa6250308  sh          $a1, 0x308($s1)
    ctx->pc = 0x308404u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 776), (uint16_t)GPR_U32(ctx, 5));
label_308408:
    // 0x308408: 0xc05d006  jal         func_174018
label_30840c:
    if (ctx->pc == 0x30840Cu) {
        ctx->pc = 0x30840Cu;
            // 0x30840c: 0x8e240188  lw          $a0, 0x188($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
        ctx->pc = 0x308410u;
        goto label_308410;
    }
    ctx->pc = 0x308408u;
    SET_GPR_U32(ctx, 31, 0x308410u);
    ctx->pc = 0x30840Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308408u;
            // 0x30840c: 0x8e240188  lw          $a0, 0x188($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174018u;
    if (runtime->hasFunction(0x174018u)) {
        auto targetFn = runtime->lookupFunction(0x174018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308410u; }
        if (ctx->pc != 0x308410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174018_0x174018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308410u; }
        if (ctx->pc != 0x308410u) { return; }
    }
    ctx->pc = 0x308410u;
label_308410:
    // 0x308410: 0x92020073  lbu         $v0, 0x73($s0)
    ctx->pc = 0x308410u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 115)));
label_308414:
    // 0x308414: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_308418:
    if (ctx->pc == 0x308418u) {
        ctx->pc = 0x308418u;
            // 0x308418: 0x8e240188  lw          $a0, 0x188($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
        ctx->pc = 0x30841Cu;
        goto label_30841c;
    }
    ctx->pc = 0x308414u;
    {
        const bool branch_taken_0x308414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308414) {
            ctx->pc = 0x308418u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308414u;
            // 0x308418: 0x8e240188  lw          $a0, 0x188($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30845Cu;
            goto label_30845c;
        }
    }
    ctx->pc = 0x30841Cu;
label_30841c:
    // 0x30841c: 0x8202005c  lb          $v0, 0x5C($s0)
    ctx->pc = 0x30841cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
label_308420:
    // 0x308420: 0x82030070  lb          $v1, 0x70($s0)
    ctx->pc = 0x308420u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
label_308424:
    // 0x308424: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x308424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_308428:
    // 0x308428: 0xa202005c  sb          $v0, 0x5C($s0)
    ctx->pc = 0x308428u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 2));
label_30842c:
    // 0x30842c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x30842cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_308430:
    // 0x308430: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x308430u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_308434:
    // 0x308434: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x308434u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_308438:
    // 0x308438: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_30843c:
    if (ctx->pc == 0x30843Cu) {
        ctx->pc = 0x30843Cu;
            // 0x30843c: 0x8e240188  lw          $a0, 0x188($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
        ctx->pc = 0x308440u;
        goto label_308440;
    }
    ctx->pc = 0x308438u;
    {
        const bool branch_taken_0x308438 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x308438) {
            ctx->pc = 0x30843Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308438u;
            // 0x30843c: 0x8e240188  lw          $a0, 0x188($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30844Cu;
            goto label_30844c;
        }
    }
    ctx->pc = 0x308440u;
label_308440:
    // 0x308440: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x308440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_308444:
    // 0x308444: 0xa202005c  sb          $v0, 0x5C($s0)
    ctx->pc = 0x308444u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 2));
label_308448:
    // 0x308448: 0x8e240188  lw          $a0, 0x188($s1)
    ctx->pc = 0x308448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
label_30844c:
    // 0x30844c: 0xc05d85a  jal         func_176168
label_308450:
    if (ctx->pc == 0x308450u) {
        ctx->pc = 0x308450u;
            // 0x308450: 0x26050054  addiu       $a1, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->pc = 0x308454u;
        goto label_308454;
    }
    ctx->pc = 0x30844Cu;
    SET_GPR_U32(ctx, 31, 0x308454u);
    ctx->pc = 0x308450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30844Cu;
            // 0x308450: 0x26050054  addiu       $a1, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176168u;
    if (runtime->hasFunction(0x176168u)) {
        auto targetFn = runtime->lookupFunction(0x176168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308454u; }
        if (ctx->pc != 0x308454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176168_0x176168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308454u; }
        if (ctx->pc != 0x308454u) { return; }
    }
    ctx->pc = 0x308454u;
label_308454:
    // 0x308454: 0x10000005  b           . + 4 + (0x5 << 2)
label_308458:
    if (ctx->pc == 0x308458u) {
        ctx->pc = 0x308458u;
            // 0x308458: 0xa2000071  sb          $zero, 0x71($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x30845Cu;
        goto label_30845c;
    }
    ctx->pc = 0x308454u;
    {
        const bool branch_taken_0x308454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308454u;
            // 0x308458: 0xa2000071  sb          $zero, 0x71($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308454) {
            ctx->pc = 0x30846Cu;
            goto label_30846c;
        }
    }
    ctx->pc = 0x30845Cu;
label_30845c:
    // 0x30845c: 0xc05d416  jal         func_175058
label_308460:
    if (ctx->pc == 0x308460u) {
        ctx->pc = 0x308460u;
            // 0x308460: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x308464u;
        goto label_308464;
    }
    ctx->pc = 0x30845Cu;
    SET_GPR_U32(ctx, 31, 0x308464u);
    ctx->pc = 0x308460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30845Cu;
            // 0x308460: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175058u;
    if (runtime->hasFunction(0x175058u)) {
        auto targetFn = runtime->lookupFunction(0x175058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308464u; }
        if (ctx->pc != 0x308464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175058_0x175058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308464u; }
        if (ctx->pc != 0x308464u) { return; }
    }
    ctx->pc = 0x308464u;
label_308464:
    // 0x308464: 0xa2000073  sb          $zero, 0x73($s0)
    ctx->pc = 0x308464u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 115), (uint8_t)GPR_U32(ctx, 0));
label_308468:
    // 0x308468: 0xa2000071  sb          $zero, 0x71($s0)
    ctx->pc = 0x308468u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
label_30846c:
    // 0x30846c: 0x10000048  b           . + 4 + (0x48 << 2)
label_308470:
    if (ctx->pc == 0x308470u) {
        ctx->pc = 0x308474u;
        goto label_308474;
    }
    ctx->pc = 0x30846Cu;
    {
        const bool branch_taken_0x30846c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30846c) {
            ctx->pc = 0x308590u;
            goto label_308590;
        }
    }
    ctx->pc = 0x308474u;
label_308474:
    // 0x308474: 0xc0c21d0  jal         func_308740
label_308478:
    if (ctx->pc == 0x308478u) {
        ctx->pc = 0x308478u;
            // 0x308478: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->pc = 0x30847Cu;
        goto label_30847c;
    }
    ctx->pc = 0x308474u;
    SET_GPR_U32(ctx, 31, 0x30847Cu);
    ctx->pc = 0x308478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308474u;
            // 0x308478: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
    ctx->pc = 0x308740u;
    if (runtime->hasFunction(0x308740u)) {
        auto targetFn = runtime->lookupFunction(0x308740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30847Cu; }
        if (ctx->pc != 0x30847Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00308740_0x308740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30847Cu; }
        if (ctx->pc != 0x30847Cu) { return; }
    }
    ctx->pc = 0x30847Cu;
label_30847c:
    // 0x30847c: 0x92030071  lbu         $v1, 0x71($s0)
    ctx->pc = 0x30847cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 113)));
label_308480:
    // 0x308480: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x308480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_308484:
    // 0x308484: 0x50640017  beql        $v1, $a0, . + 4 + (0x17 << 2)
label_308488:
    if (ctx->pc == 0x308488u) {
        ctx->pc = 0x308488u;
            // 0x308488: 0x8fa3007c  lw          $v1, 0x7C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->pc = 0x30848Cu;
        goto label_30848c;
    }
    ctx->pc = 0x308484u;
    {
        const bool branch_taken_0x308484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x308484) {
            ctx->pc = 0x308488u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308484u;
            // 0x308488: 0x8fa3007c  lw          $v1, 0x7C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3084E4u;
            goto label_3084e4;
        }
    }
    ctx->pc = 0x30848Cu;
label_30848c:
    // 0x30848c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_308490:
    if (ctx->pc == 0x308490u) {
        ctx->pc = 0x308490u;
            // 0x308490: 0x8fa3007c  lw          $v1, 0x7C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->pc = 0x308494u;
        goto label_308494;
    }
    ctx->pc = 0x30848Cu;
    {
        const bool branch_taken_0x30848c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30848c) {
            ctx->pc = 0x308490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30848Cu;
            // 0x308490: 0x8fa3007c  lw          $v1, 0x7C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30849Cu;
            goto label_30849c;
        }
    }
    ctx->pc = 0x308494u;
label_308494:
    // 0x308494: 0x10000017  b           . + 4 + (0x17 << 2)
label_308498:
    if (ctx->pc == 0x308498u) {
        ctx->pc = 0x308498u;
            // 0x308498: 0x82050075  lb          $a1, 0x75($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 117)));
        ctx->pc = 0x30849Cu;
        goto label_30849c;
    }
    ctx->pc = 0x308494u;
    {
        const bool branch_taken_0x308494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308494u;
            // 0x308498: 0x82050075  lb          $a1, 0x75($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 117)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308494) {
            ctx->pc = 0x3084F4u;
            goto label_3084f4;
        }
    }
    ctx->pc = 0x30849Cu;
label_30849c:
    // 0x30849c: 0x14640014  bne         $v1, $a0, . + 4 + (0x14 << 2)
label_3084a0:
    if (ctx->pc == 0x3084A0u) {
        ctx->pc = 0x3084A4u;
        goto label_3084a4;
    }
    ctx->pc = 0x30849Cu;
    {
        const bool branch_taken_0x30849c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x30849c) {
            ctx->pc = 0x3084F0u;
            goto label_3084f0;
        }
    }
    ctx->pc = 0x3084A4u;
label_3084a4:
    // 0x3084a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3084a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3084a8:
    // 0x3084a8: 0x92030072  lbu         $v1, 0x72($s0)
    ctx->pc = 0x3084a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
label_3084ac:
    // 0x3084ac: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_3084b0:
    if (ctx->pc == 0x3084B0u) {
        ctx->pc = 0x3084B0u;
            // 0x3084b0: 0x8c4289e8  lw          $v0, -0x7618($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
        ctx->pc = 0x3084B4u;
        goto label_3084b4;
    }
    ctx->pc = 0x3084ACu;
    {
        const bool branch_taken_0x3084ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3084B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3084ACu;
            // 0x3084b0: 0x8c4289e8  lw          $v0, -0x7618($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3084ac) {
            ctx->pc = 0x3084C8u;
            goto label_3084c8;
        }
    }
    ctx->pc = 0x3084B4u;
label_3084b4:
    // 0x3084b4: 0x8c44018c  lw          $a0, 0x18C($v0)
    ctx->pc = 0x3084b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
label_3084b8:
    // 0x3084b8: 0xc05d85a  jal         func_176168
label_3084bc:
    if (ctx->pc == 0x3084BCu) {
        ctx->pc = 0x3084BCu;
            // 0x3084bc: 0x26050062  addiu       $a1, $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 98));
        ctx->pc = 0x3084C0u;
        goto label_3084c0;
    }
    ctx->pc = 0x3084B8u;
    SET_GPR_U32(ctx, 31, 0x3084C0u);
    ctx->pc = 0x3084BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3084B8u;
            // 0x3084bc: 0x26050062  addiu       $a1, $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 98));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176168u;
    if (runtime->hasFunction(0x176168u)) {
        auto targetFn = runtime->lookupFunction(0x176168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3084C0u; }
        if (ctx->pc != 0x3084C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176168_0x176168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3084C0u; }
        if (ctx->pc != 0x3084C0u) { return; }
    }
    ctx->pc = 0x3084C0u;
label_3084c0:
    // 0x3084c0: 0x10000006  b           . + 4 + (0x6 << 2)
label_3084c4:
    if (ctx->pc == 0x3084C4u) {
        ctx->pc = 0x3084C4u;
            // 0x3084c4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3084C8u;
        goto label_3084c8;
    }
    ctx->pc = 0x3084C0u;
    {
        const bool branch_taken_0x3084c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3084C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3084C0u;
            // 0x3084c4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3084c0) {
            ctx->pc = 0x3084DCu;
            goto label_3084dc;
        }
    }
    ctx->pc = 0x3084C8u;
label_3084c8:
    // 0x3084c8: 0x8c44018c  lw          $a0, 0x18C($v0)
    ctx->pc = 0x3084c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
label_3084cc:
    // 0x3084cc: 0xc05d416  jal         func_175058
label_3084d0:
    if (ctx->pc == 0x3084D0u) {
        ctx->pc = 0x3084D0u;
            // 0x3084d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3084D4u;
        goto label_3084d4;
    }
    ctx->pc = 0x3084CCu;
    SET_GPR_U32(ctx, 31, 0x3084D4u);
    ctx->pc = 0x3084D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3084CCu;
            // 0x3084d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175058u;
    if (runtime->hasFunction(0x175058u)) {
        auto targetFn = runtime->lookupFunction(0x175058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3084D4u; }
        if (ctx->pc != 0x3084D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175058_0x175058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3084D4u; }
        if (ctx->pc != 0x3084D4u) { return; }
    }
    ctx->pc = 0x3084D4u;
label_3084d4:
    // 0x3084d4: 0xa2000072  sb          $zero, 0x72($s0)
    ctx->pc = 0x3084d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 114), (uint8_t)GPR_U32(ctx, 0));
label_3084d8:
    // 0x3084d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3084d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3084dc:
    // 0x3084dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_3084e0:
    if (ctx->pc == 0x3084E0u) {
        ctx->pc = 0x3084E0u;
            // 0x3084e0: 0xa2030071  sb          $v1, 0x71($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3084E4u;
        goto label_3084e4;
    }
    ctx->pc = 0x3084DCu;
    {
        const bool branch_taken_0x3084dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3084E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3084DCu;
            // 0x3084e0: 0xa2030071  sb          $v1, 0x71($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3084dc) {
            ctx->pc = 0x3084F0u;
            goto label_3084f0;
        }
    }
    ctx->pc = 0x3084E4u;
label_3084e4:
    // 0x3084e4: 0x10640002  beq         $v1, $a0, . + 4 + (0x2 << 2)
label_3084e8:
    if (ctx->pc == 0x3084E8u) {
        ctx->pc = 0x3084ECu;
        goto label_3084ec;
    }
    ctx->pc = 0x3084E4u;
    {
        const bool branch_taken_0x3084e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3084e4) {
            ctx->pc = 0x3084F0u;
            goto label_3084f0;
        }
    }
    ctx->pc = 0x3084ECu;
label_3084ec:
    // 0x3084ec: 0xa2000071  sb          $zero, 0x71($s0)
    ctx->pc = 0x3084ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
label_3084f0:
    // 0x3084f0: 0x82050075  lb          $a1, 0x75($s0)
    ctx->pc = 0x3084f0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 117)));
label_3084f4:
    // 0x3084f4: 0x4a00026  bltz        $a1, . + 4 + (0x26 << 2)
label_3084f8:
    if (ctx->pc == 0x3084F8u) {
        ctx->pc = 0x3084FCu;
        goto label_3084fc;
    }
    ctx->pc = 0x3084F4u;
    {
        const bool branch_taken_0x3084f4 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x3084f4) {
            ctx->pc = 0x308590u;
            goto label_308590;
        }
    }
    ctx->pc = 0x3084FCu;
label_3084fc:
    // 0x3084fc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3084fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_308500:
    // 0x308500: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x308500u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_308504:
    // 0x308504: 0x24630e80  addiu       $v1, $v1, 0xE80
    ctx->pc = 0x308504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3712));
label_308508:
    // 0x308508: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x308508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_30850c:
    // 0x30850c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x30850cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_308510:
    // 0x308510: 0x8c630d70  lw          $v1, 0xD70($v1)
    ctx->pc = 0x308510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3440)));
label_308514:
    // 0x308514: 0x90630019  lbu         $v1, 0x19($v1)
    ctx->pc = 0x308514u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 25)));
label_308518:
    // 0x308518: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x308518u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_30851c:
    // 0x30851c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x30851cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_308520:
    // 0x308520: 0x54600017  bnel        $v1, $zero, . + 4 + (0x17 << 2)
label_308524:
    if (ctx->pc == 0x308524u) {
        ctx->pc = 0x308524u;
            // 0x308524: 0x82030076  lb          $v1, 0x76($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 118)));
        ctx->pc = 0x308528u;
        goto label_308528;
    }
    ctx->pc = 0x308520u;
    {
        const bool branch_taken_0x308520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x308520) {
            ctx->pc = 0x308524u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308520u;
            // 0x308524: 0x82030076  lb          $v1, 0x76($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 118)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x308580u;
            goto label_308580;
        }
    }
    ctx->pc = 0x308528u;
label_308528:
    // 0x308528: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x308528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_30852c:
    // 0x30852c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30852cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_308530:
    // 0x308530: 0xa202005b  sb          $v0, 0x5B($s0)
    ctx->pc = 0x308530u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 91), (uint8_t)GPR_U32(ctx, 2));
label_308534:
    // 0x308534: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x308534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_308538:
    // 0x308538: 0xa2030075  sb          $v1, 0x75($s0)
    ctx->pc = 0x308538u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 117), (uint8_t)GPR_U32(ctx, 3));
label_30853c:
    // 0x30853c: 0x8c5189e8  lw          $s1, -0x7618($v0)
    ctx->pc = 0x30853cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_308540:
    // 0x308540: 0x862502fc  lh          $a1, 0x2FC($s1)
    ctx->pc = 0x308540u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 764)));
label_308544:
    // 0x308544: 0xa6250308  sh          $a1, 0x308($s1)
    ctx->pc = 0x308544u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 776), (uint16_t)GPR_U32(ctx, 5));
label_308548:
    // 0x308548: 0xc05d006  jal         func_174018
label_30854c:
    if (ctx->pc == 0x30854Cu) {
        ctx->pc = 0x30854Cu;
            // 0x30854c: 0x8e240188  lw          $a0, 0x188($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
        ctx->pc = 0x308550u;
        goto label_308550;
    }
    ctx->pc = 0x308548u;
    SET_GPR_U32(ctx, 31, 0x308550u);
    ctx->pc = 0x30854Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308548u;
            // 0x30854c: 0x8e240188  lw          $a0, 0x188($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174018u;
    if (runtime->hasFunction(0x174018u)) {
        auto targetFn = runtime->lookupFunction(0x174018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308550u; }
        if (ctx->pc != 0x308550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174018_0x174018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308550u; }
        if (ctx->pc != 0x308550u) { return; }
    }
    ctx->pc = 0x308550u;
label_308550:
    // 0x308550: 0x92020073  lbu         $v0, 0x73($s0)
    ctx->pc = 0x308550u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 115)));
label_308554:
    // 0x308554: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_308558:
    if (ctx->pc == 0x308558u) {
        ctx->pc = 0x308558u;
            // 0x308558: 0x8e240188  lw          $a0, 0x188($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
        ctx->pc = 0x30855Cu;
        goto label_30855c;
    }
    ctx->pc = 0x308554u;
    {
        const bool branch_taken_0x308554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308554) {
            ctx->pc = 0x308558u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308554u;
            // 0x308558: 0x8e240188  lw          $a0, 0x188($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x308570u;
            goto label_308570;
        }
    }
    ctx->pc = 0x30855Cu;
label_30855c:
    // 0x30855c: 0x8e240188  lw          $a0, 0x188($s1)
    ctx->pc = 0x30855cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
label_308560:
    // 0x308560: 0xc05d85a  jal         func_176168
label_308564:
    if (ctx->pc == 0x308564u) {
        ctx->pc = 0x308564u;
            // 0x308564: 0x26050054  addiu       $a1, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->pc = 0x308568u;
        goto label_308568;
    }
    ctx->pc = 0x308560u;
    SET_GPR_U32(ctx, 31, 0x308568u);
    ctx->pc = 0x308564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308560u;
            // 0x308564: 0x26050054  addiu       $a1, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176168u;
    if (runtime->hasFunction(0x176168u)) {
        auto targetFn = runtime->lookupFunction(0x176168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308568u; }
        if (ctx->pc != 0x308568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176168_0x176168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308568u; }
        if (ctx->pc != 0x308568u) { return; }
    }
    ctx->pc = 0x308568u;
label_308568:
    // 0x308568: 0x10000009  b           . + 4 + (0x9 << 2)
label_30856c:
    if (ctx->pc == 0x30856Cu) {
        ctx->pc = 0x308570u;
        goto label_308570;
    }
    ctx->pc = 0x308568u;
    {
        const bool branch_taken_0x308568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x308568) {
            ctx->pc = 0x308590u;
            goto label_308590;
        }
    }
    ctx->pc = 0x308570u;
label_308570:
    // 0x308570: 0xc05d416  jal         func_175058
label_308574:
    if (ctx->pc == 0x308574u) {
        ctx->pc = 0x308574u;
            // 0x308574: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x308578u;
        goto label_308578;
    }
    ctx->pc = 0x308570u;
    SET_GPR_U32(ctx, 31, 0x308578u);
    ctx->pc = 0x308574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308570u;
            // 0x308574: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175058u;
    if (runtime->hasFunction(0x175058u)) {
        auto targetFn = runtime->lookupFunction(0x175058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308578u; }
        if (ctx->pc != 0x308578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175058_0x175058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308578u; }
        if (ctx->pc != 0x308578u) { return; }
    }
    ctx->pc = 0x308578u;
label_308578:
    // 0x308578: 0x10000005  b           . + 4 + (0x5 << 2)
label_30857c:
    if (ctx->pc == 0x30857Cu) {
        ctx->pc = 0x30857Cu;
            // 0x30857c: 0xa2000073  sb          $zero, 0x73($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 115), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x308580u;
        goto label_308580;
    }
    ctx->pc = 0x308578u;
    {
        const bool branch_taken_0x308578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30857Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308578u;
            // 0x30857c: 0xa2000073  sb          $zero, 0x73($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 115), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308578) {
            ctx->pc = 0x308590u;
            goto label_308590;
        }
    }
    ctx->pc = 0x308580u;
label_308580:
    // 0x308580: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x308580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_308584:
    // 0x308584: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x308584u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_308588:
    // 0x308588: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
label_30858c:
    if (ctx->pc == 0x30858Cu) {
        ctx->pc = 0x30858Cu;
            // 0x30858c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x308590u;
        goto label_308590;
    }
    ctx->pc = 0x308588u;
    {
        const bool branch_taken_0x308588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30858Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308588u;
            // 0x30858c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308588) {
            ctx->pc = 0x30850Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30850c;
        }
    }
    ctx->pc = 0x308590u;
label_308590:
    // 0x308590: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x308590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_308594:
    // 0x308594: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x308594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_308598:
    // 0x308598: 0x8c640cb4  lw          $a0, 0xCB4($v1)
    ctx->pc = 0x308598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_30859c:
    // 0x30859c: 0x8c630cb8  lw          $v1, 0xCB8($v1)
    ctx->pc = 0x30859cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3256)));
label_3085a0:
    // 0x3085a0: 0x50830001  beql        $a0, $v1, . + 4 + (0x1 << 2)
label_3085a4:
    if (ctx->pc == 0x3085A4u) {
        ctx->pc = 0x3085A4u;
            // 0x3085a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3085A8u;
        goto label_3085a8;
    }
    ctx->pc = 0x3085A0u;
    {
        const bool branch_taken_0x3085a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3085a0) {
            ctx->pc = 0x3085A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3085A0u;
            // 0x3085a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3085A8u;
            goto label_3085a8;
        }
    }
    ctx->pc = 0x3085A8u;
label_3085a8:
    // 0x3085a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3085a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3085ac:
    // 0x3085ac: 0x54830007  bnel        $a0, $v1, . + 4 + (0x7 << 2)
label_3085b0:
    if (ctx->pc == 0x3085B0u) {
        ctx->pc = 0x3085B0u;
            // 0x3085b0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x3085B4u;
        goto label_3085b4;
    }
    ctx->pc = 0x3085ACu;
    {
        const bool branch_taken_0x3085ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3085ac) {
            ctx->pc = 0x3085B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3085ACu;
            // 0x3085b0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3085CCu;
            goto label_3085cc;
        }
    }
    ctx->pc = 0x3085B4u;
label_3085b4:
    // 0x3085b4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3085b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3085b8:
    // 0x3085b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3085b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3085bc:
    // 0x3085bc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3085bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3085c0:
    // 0x3085c0: 0x320f809  jalr        $t9
label_3085c4:
    if (ctx->pc == 0x3085C4u) {
        ctx->pc = 0x3085C4u;
            // 0x3085c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3085C8u;
        goto label_3085c8;
    }
    ctx->pc = 0x3085C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3085C8u);
        ctx->pc = 0x3085C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3085C0u;
            // 0x3085c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3085C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3085C8u; }
            if (ctx->pc != 0x3085C8u) { return; }
        }
        }
    }
    ctx->pc = 0x3085C8u;
label_3085c8:
    // 0x3085c8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3085c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3085cc:
    // 0x3085cc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3085ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3085d0:
    // 0x3085d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3085d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3085d4:
    // 0x3085d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3085d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3085d8:
    // 0x3085d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3085d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3085dc:
    // 0x3085dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3085dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3085e0:
    // 0x3085e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3085e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3085e4:
    // 0x3085e4: 0x3e00008  jr          $ra
label_3085e8:
    if (ctx->pc == 0x3085E8u) {
        ctx->pc = 0x3085E8u;
            // 0x3085e8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3085ECu;
        goto label_3085ec;
    }
    ctx->pc = 0x3085E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3085E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3085E4u;
            // 0x3085e8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3085ECu;
label_3085ec:
    // 0x3085ec: 0x0  nop
    ctx->pc = 0x3085ecu;
    // NOP
label_3085f0:
    // 0x3085f0: 0x3e00008  jr          $ra
label_3085f4:
    if (ctx->pc == 0x3085F4u) {
        ctx->pc = 0x3085F4u;
            // 0x3085f4: 0x8c820ce8  lw          $v0, 0xCE8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3304)));
        ctx->pc = 0x3085F8u;
        goto label_3085f8;
    }
    ctx->pc = 0x3085F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3085F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3085F0u;
            // 0x3085f4: 0x8c820ce8  lw          $v0, 0xCE8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3304)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3085F8u;
label_3085f8:
    // 0x3085f8: 0x0  nop
    ctx->pc = 0x3085f8u;
    // NOP
label_3085fc:
    // 0x3085fc: 0x0  nop
    ctx->pc = 0x3085fcu;
    // NOP
}
