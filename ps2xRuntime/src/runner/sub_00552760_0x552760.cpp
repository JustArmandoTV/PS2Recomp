#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00552760
// Address: 0x552760 - 0x552e90
void sub_00552760_0x552760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00552760_0x552760");
#endif

    switch (ctx->pc) {
        case 0x552760u: goto label_552760;
        case 0x552764u: goto label_552764;
        case 0x552768u: goto label_552768;
        case 0x55276cu: goto label_55276c;
        case 0x552770u: goto label_552770;
        case 0x552774u: goto label_552774;
        case 0x552778u: goto label_552778;
        case 0x55277cu: goto label_55277c;
        case 0x552780u: goto label_552780;
        case 0x552784u: goto label_552784;
        case 0x552788u: goto label_552788;
        case 0x55278cu: goto label_55278c;
        case 0x552790u: goto label_552790;
        case 0x552794u: goto label_552794;
        case 0x552798u: goto label_552798;
        case 0x55279cu: goto label_55279c;
        case 0x5527a0u: goto label_5527a0;
        case 0x5527a4u: goto label_5527a4;
        case 0x5527a8u: goto label_5527a8;
        case 0x5527acu: goto label_5527ac;
        case 0x5527b0u: goto label_5527b0;
        case 0x5527b4u: goto label_5527b4;
        case 0x5527b8u: goto label_5527b8;
        case 0x5527bcu: goto label_5527bc;
        case 0x5527c0u: goto label_5527c0;
        case 0x5527c4u: goto label_5527c4;
        case 0x5527c8u: goto label_5527c8;
        case 0x5527ccu: goto label_5527cc;
        case 0x5527d0u: goto label_5527d0;
        case 0x5527d4u: goto label_5527d4;
        case 0x5527d8u: goto label_5527d8;
        case 0x5527dcu: goto label_5527dc;
        case 0x5527e0u: goto label_5527e0;
        case 0x5527e4u: goto label_5527e4;
        case 0x5527e8u: goto label_5527e8;
        case 0x5527ecu: goto label_5527ec;
        case 0x5527f0u: goto label_5527f0;
        case 0x5527f4u: goto label_5527f4;
        case 0x5527f8u: goto label_5527f8;
        case 0x5527fcu: goto label_5527fc;
        case 0x552800u: goto label_552800;
        case 0x552804u: goto label_552804;
        case 0x552808u: goto label_552808;
        case 0x55280cu: goto label_55280c;
        case 0x552810u: goto label_552810;
        case 0x552814u: goto label_552814;
        case 0x552818u: goto label_552818;
        case 0x55281cu: goto label_55281c;
        case 0x552820u: goto label_552820;
        case 0x552824u: goto label_552824;
        case 0x552828u: goto label_552828;
        case 0x55282cu: goto label_55282c;
        case 0x552830u: goto label_552830;
        case 0x552834u: goto label_552834;
        case 0x552838u: goto label_552838;
        case 0x55283cu: goto label_55283c;
        case 0x552840u: goto label_552840;
        case 0x552844u: goto label_552844;
        case 0x552848u: goto label_552848;
        case 0x55284cu: goto label_55284c;
        case 0x552850u: goto label_552850;
        case 0x552854u: goto label_552854;
        case 0x552858u: goto label_552858;
        case 0x55285cu: goto label_55285c;
        case 0x552860u: goto label_552860;
        case 0x552864u: goto label_552864;
        case 0x552868u: goto label_552868;
        case 0x55286cu: goto label_55286c;
        case 0x552870u: goto label_552870;
        case 0x552874u: goto label_552874;
        case 0x552878u: goto label_552878;
        case 0x55287cu: goto label_55287c;
        case 0x552880u: goto label_552880;
        case 0x552884u: goto label_552884;
        case 0x552888u: goto label_552888;
        case 0x55288cu: goto label_55288c;
        case 0x552890u: goto label_552890;
        case 0x552894u: goto label_552894;
        case 0x552898u: goto label_552898;
        case 0x55289cu: goto label_55289c;
        case 0x5528a0u: goto label_5528a0;
        case 0x5528a4u: goto label_5528a4;
        case 0x5528a8u: goto label_5528a8;
        case 0x5528acu: goto label_5528ac;
        case 0x5528b0u: goto label_5528b0;
        case 0x5528b4u: goto label_5528b4;
        case 0x5528b8u: goto label_5528b8;
        case 0x5528bcu: goto label_5528bc;
        case 0x5528c0u: goto label_5528c0;
        case 0x5528c4u: goto label_5528c4;
        case 0x5528c8u: goto label_5528c8;
        case 0x5528ccu: goto label_5528cc;
        case 0x5528d0u: goto label_5528d0;
        case 0x5528d4u: goto label_5528d4;
        case 0x5528d8u: goto label_5528d8;
        case 0x5528dcu: goto label_5528dc;
        case 0x5528e0u: goto label_5528e0;
        case 0x5528e4u: goto label_5528e4;
        case 0x5528e8u: goto label_5528e8;
        case 0x5528ecu: goto label_5528ec;
        case 0x5528f0u: goto label_5528f0;
        case 0x5528f4u: goto label_5528f4;
        case 0x5528f8u: goto label_5528f8;
        case 0x5528fcu: goto label_5528fc;
        case 0x552900u: goto label_552900;
        case 0x552904u: goto label_552904;
        case 0x552908u: goto label_552908;
        case 0x55290cu: goto label_55290c;
        case 0x552910u: goto label_552910;
        case 0x552914u: goto label_552914;
        case 0x552918u: goto label_552918;
        case 0x55291cu: goto label_55291c;
        case 0x552920u: goto label_552920;
        case 0x552924u: goto label_552924;
        case 0x552928u: goto label_552928;
        case 0x55292cu: goto label_55292c;
        case 0x552930u: goto label_552930;
        case 0x552934u: goto label_552934;
        case 0x552938u: goto label_552938;
        case 0x55293cu: goto label_55293c;
        case 0x552940u: goto label_552940;
        case 0x552944u: goto label_552944;
        case 0x552948u: goto label_552948;
        case 0x55294cu: goto label_55294c;
        case 0x552950u: goto label_552950;
        case 0x552954u: goto label_552954;
        case 0x552958u: goto label_552958;
        case 0x55295cu: goto label_55295c;
        case 0x552960u: goto label_552960;
        case 0x552964u: goto label_552964;
        case 0x552968u: goto label_552968;
        case 0x55296cu: goto label_55296c;
        case 0x552970u: goto label_552970;
        case 0x552974u: goto label_552974;
        case 0x552978u: goto label_552978;
        case 0x55297cu: goto label_55297c;
        case 0x552980u: goto label_552980;
        case 0x552984u: goto label_552984;
        case 0x552988u: goto label_552988;
        case 0x55298cu: goto label_55298c;
        case 0x552990u: goto label_552990;
        case 0x552994u: goto label_552994;
        case 0x552998u: goto label_552998;
        case 0x55299cu: goto label_55299c;
        case 0x5529a0u: goto label_5529a0;
        case 0x5529a4u: goto label_5529a4;
        case 0x5529a8u: goto label_5529a8;
        case 0x5529acu: goto label_5529ac;
        case 0x5529b0u: goto label_5529b0;
        case 0x5529b4u: goto label_5529b4;
        case 0x5529b8u: goto label_5529b8;
        case 0x5529bcu: goto label_5529bc;
        case 0x5529c0u: goto label_5529c0;
        case 0x5529c4u: goto label_5529c4;
        case 0x5529c8u: goto label_5529c8;
        case 0x5529ccu: goto label_5529cc;
        case 0x5529d0u: goto label_5529d0;
        case 0x5529d4u: goto label_5529d4;
        case 0x5529d8u: goto label_5529d8;
        case 0x5529dcu: goto label_5529dc;
        case 0x5529e0u: goto label_5529e0;
        case 0x5529e4u: goto label_5529e4;
        case 0x5529e8u: goto label_5529e8;
        case 0x5529ecu: goto label_5529ec;
        case 0x5529f0u: goto label_5529f0;
        case 0x5529f4u: goto label_5529f4;
        case 0x5529f8u: goto label_5529f8;
        case 0x5529fcu: goto label_5529fc;
        case 0x552a00u: goto label_552a00;
        case 0x552a04u: goto label_552a04;
        case 0x552a08u: goto label_552a08;
        case 0x552a0cu: goto label_552a0c;
        case 0x552a10u: goto label_552a10;
        case 0x552a14u: goto label_552a14;
        case 0x552a18u: goto label_552a18;
        case 0x552a1cu: goto label_552a1c;
        case 0x552a20u: goto label_552a20;
        case 0x552a24u: goto label_552a24;
        case 0x552a28u: goto label_552a28;
        case 0x552a2cu: goto label_552a2c;
        case 0x552a30u: goto label_552a30;
        case 0x552a34u: goto label_552a34;
        case 0x552a38u: goto label_552a38;
        case 0x552a3cu: goto label_552a3c;
        case 0x552a40u: goto label_552a40;
        case 0x552a44u: goto label_552a44;
        case 0x552a48u: goto label_552a48;
        case 0x552a4cu: goto label_552a4c;
        case 0x552a50u: goto label_552a50;
        case 0x552a54u: goto label_552a54;
        case 0x552a58u: goto label_552a58;
        case 0x552a5cu: goto label_552a5c;
        case 0x552a60u: goto label_552a60;
        case 0x552a64u: goto label_552a64;
        case 0x552a68u: goto label_552a68;
        case 0x552a6cu: goto label_552a6c;
        case 0x552a70u: goto label_552a70;
        case 0x552a74u: goto label_552a74;
        case 0x552a78u: goto label_552a78;
        case 0x552a7cu: goto label_552a7c;
        case 0x552a80u: goto label_552a80;
        case 0x552a84u: goto label_552a84;
        case 0x552a88u: goto label_552a88;
        case 0x552a8cu: goto label_552a8c;
        case 0x552a90u: goto label_552a90;
        case 0x552a94u: goto label_552a94;
        case 0x552a98u: goto label_552a98;
        case 0x552a9cu: goto label_552a9c;
        case 0x552aa0u: goto label_552aa0;
        case 0x552aa4u: goto label_552aa4;
        case 0x552aa8u: goto label_552aa8;
        case 0x552aacu: goto label_552aac;
        case 0x552ab0u: goto label_552ab0;
        case 0x552ab4u: goto label_552ab4;
        case 0x552ab8u: goto label_552ab8;
        case 0x552abcu: goto label_552abc;
        case 0x552ac0u: goto label_552ac0;
        case 0x552ac4u: goto label_552ac4;
        case 0x552ac8u: goto label_552ac8;
        case 0x552accu: goto label_552acc;
        case 0x552ad0u: goto label_552ad0;
        case 0x552ad4u: goto label_552ad4;
        case 0x552ad8u: goto label_552ad8;
        case 0x552adcu: goto label_552adc;
        case 0x552ae0u: goto label_552ae0;
        case 0x552ae4u: goto label_552ae4;
        case 0x552ae8u: goto label_552ae8;
        case 0x552aecu: goto label_552aec;
        case 0x552af0u: goto label_552af0;
        case 0x552af4u: goto label_552af4;
        case 0x552af8u: goto label_552af8;
        case 0x552afcu: goto label_552afc;
        case 0x552b00u: goto label_552b00;
        case 0x552b04u: goto label_552b04;
        case 0x552b08u: goto label_552b08;
        case 0x552b0cu: goto label_552b0c;
        case 0x552b10u: goto label_552b10;
        case 0x552b14u: goto label_552b14;
        case 0x552b18u: goto label_552b18;
        case 0x552b1cu: goto label_552b1c;
        case 0x552b20u: goto label_552b20;
        case 0x552b24u: goto label_552b24;
        case 0x552b28u: goto label_552b28;
        case 0x552b2cu: goto label_552b2c;
        case 0x552b30u: goto label_552b30;
        case 0x552b34u: goto label_552b34;
        case 0x552b38u: goto label_552b38;
        case 0x552b3cu: goto label_552b3c;
        case 0x552b40u: goto label_552b40;
        case 0x552b44u: goto label_552b44;
        case 0x552b48u: goto label_552b48;
        case 0x552b4cu: goto label_552b4c;
        case 0x552b50u: goto label_552b50;
        case 0x552b54u: goto label_552b54;
        case 0x552b58u: goto label_552b58;
        case 0x552b5cu: goto label_552b5c;
        case 0x552b60u: goto label_552b60;
        case 0x552b64u: goto label_552b64;
        case 0x552b68u: goto label_552b68;
        case 0x552b6cu: goto label_552b6c;
        case 0x552b70u: goto label_552b70;
        case 0x552b74u: goto label_552b74;
        case 0x552b78u: goto label_552b78;
        case 0x552b7cu: goto label_552b7c;
        case 0x552b80u: goto label_552b80;
        case 0x552b84u: goto label_552b84;
        case 0x552b88u: goto label_552b88;
        case 0x552b8cu: goto label_552b8c;
        case 0x552b90u: goto label_552b90;
        case 0x552b94u: goto label_552b94;
        case 0x552b98u: goto label_552b98;
        case 0x552b9cu: goto label_552b9c;
        case 0x552ba0u: goto label_552ba0;
        case 0x552ba4u: goto label_552ba4;
        case 0x552ba8u: goto label_552ba8;
        case 0x552bacu: goto label_552bac;
        case 0x552bb0u: goto label_552bb0;
        case 0x552bb4u: goto label_552bb4;
        case 0x552bb8u: goto label_552bb8;
        case 0x552bbcu: goto label_552bbc;
        case 0x552bc0u: goto label_552bc0;
        case 0x552bc4u: goto label_552bc4;
        case 0x552bc8u: goto label_552bc8;
        case 0x552bccu: goto label_552bcc;
        case 0x552bd0u: goto label_552bd0;
        case 0x552bd4u: goto label_552bd4;
        case 0x552bd8u: goto label_552bd8;
        case 0x552bdcu: goto label_552bdc;
        case 0x552be0u: goto label_552be0;
        case 0x552be4u: goto label_552be4;
        case 0x552be8u: goto label_552be8;
        case 0x552becu: goto label_552bec;
        case 0x552bf0u: goto label_552bf0;
        case 0x552bf4u: goto label_552bf4;
        case 0x552bf8u: goto label_552bf8;
        case 0x552bfcu: goto label_552bfc;
        case 0x552c00u: goto label_552c00;
        case 0x552c04u: goto label_552c04;
        case 0x552c08u: goto label_552c08;
        case 0x552c0cu: goto label_552c0c;
        case 0x552c10u: goto label_552c10;
        case 0x552c14u: goto label_552c14;
        case 0x552c18u: goto label_552c18;
        case 0x552c1cu: goto label_552c1c;
        case 0x552c20u: goto label_552c20;
        case 0x552c24u: goto label_552c24;
        case 0x552c28u: goto label_552c28;
        case 0x552c2cu: goto label_552c2c;
        case 0x552c30u: goto label_552c30;
        case 0x552c34u: goto label_552c34;
        case 0x552c38u: goto label_552c38;
        case 0x552c3cu: goto label_552c3c;
        case 0x552c40u: goto label_552c40;
        case 0x552c44u: goto label_552c44;
        case 0x552c48u: goto label_552c48;
        case 0x552c4cu: goto label_552c4c;
        case 0x552c50u: goto label_552c50;
        case 0x552c54u: goto label_552c54;
        case 0x552c58u: goto label_552c58;
        case 0x552c5cu: goto label_552c5c;
        case 0x552c60u: goto label_552c60;
        case 0x552c64u: goto label_552c64;
        case 0x552c68u: goto label_552c68;
        case 0x552c6cu: goto label_552c6c;
        case 0x552c70u: goto label_552c70;
        case 0x552c74u: goto label_552c74;
        case 0x552c78u: goto label_552c78;
        case 0x552c7cu: goto label_552c7c;
        case 0x552c80u: goto label_552c80;
        case 0x552c84u: goto label_552c84;
        case 0x552c88u: goto label_552c88;
        case 0x552c8cu: goto label_552c8c;
        case 0x552c90u: goto label_552c90;
        case 0x552c94u: goto label_552c94;
        case 0x552c98u: goto label_552c98;
        case 0x552c9cu: goto label_552c9c;
        case 0x552ca0u: goto label_552ca0;
        case 0x552ca4u: goto label_552ca4;
        case 0x552ca8u: goto label_552ca8;
        case 0x552cacu: goto label_552cac;
        case 0x552cb0u: goto label_552cb0;
        case 0x552cb4u: goto label_552cb4;
        case 0x552cb8u: goto label_552cb8;
        case 0x552cbcu: goto label_552cbc;
        case 0x552cc0u: goto label_552cc0;
        case 0x552cc4u: goto label_552cc4;
        case 0x552cc8u: goto label_552cc8;
        case 0x552cccu: goto label_552ccc;
        case 0x552cd0u: goto label_552cd0;
        case 0x552cd4u: goto label_552cd4;
        case 0x552cd8u: goto label_552cd8;
        case 0x552cdcu: goto label_552cdc;
        case 0x552ce0u: goto label_552ce0;
        case 0x552ce4u: goto label_552ce4;
        case 0x552ce8u: goto label_552ce8;
        case 0x552cecu: goto label_552cec;
        case 0x552cf0u: goto label_552cf0;
        case 0x552cf4u: goto label_552cf4;
        case 0x552cf8u: goto label_552cf8;
        case 0x552cfcu: goto label_552cfc;
        case 0x552d00u: goto label_552d00;
        case 0x552d04u: goto label_552d04;
        case 0x552d08u: goto label_552d08;
        case 0x552d0cu: goto label_552d0c;
        case 0x552d10u: goto label_552d10;
        case 0x552d14u: goto label_552d14;
        case 0x552d18u: goto label_552d18;
        case 0x552d1cu: goto label_552d1c;
        case 0x552d20u: goto label_552d20;
        case 0x552d24u: goto label_552d24;
        case 0x552d28u: goto label_552d28;
        case 0x552d2cu: goto label_552d2c;
        case 0x552d30u: goto label_552d30;
        case 0x552d34u: goto label_552d34;
        case 0x552d38u: goto label_552d38;
        case 0x552d3cu: goto label_552d3c;
        case 0x552d40u: goto label_552d40;
        case 0x552d44u: goto label_552d44;
        case 0x552d48u: goto label_552d48;
        case 0x552d4cu: goto label_552d4c;
        case 0x552d50u: goto label_552d50;
        case 0x552d54u: goto label_552d54;
        case 0x552d58u: goto label_552d58;
        case 0x552d5cu: goto label_552d5c;
        case 0x552d60u: goto label_552d60;
        case 0x552d64u: goto label_552d64;
        case 0x552d68u: goto label_552d68;
        case 0x552d6cu: goto label_552d6c;
        case 0x552d70u: goto label_552d70;
        case 0x552d74u: goto label_552d74;
        case 0x552d78u: goto label_552d78;
        case 0x552d7cu: goto label_552d7c;
        case 0x552d80u: goto label_552d80;
        case 0x552d84u: goto label_552d84;
        case 0x552d88u: goto label_552d88;
        case 0x552d8cu: goto label_552d8c;
        case 0x552d90u: goto label_552d90;
        case 0x552d94u: goto label_552d94;
        case 0x552d98u: goto label_552d98;
        case 0x552d9cu: goto label_552d9c;
        case 0x552da0u: goto label_552da0;
        case 0x552da4u: goto label_552da4;
        case 0x552da8u: goto label_552da8;
        case 0x552dacu: goto label_552dac;
        case 0x552db0u: goto label_552db0;
        case 0x552db4u: goto label_552db4;
        case 0x552db8u: goto label_552db8;
        case 0x552dbcu: goto label_552dbc;
        case 0x552dc0u: goto label_552dc0;
        case 0x552dc4u: goto label_552dc4;
        case 0x552dc8u: goto label_552dc8;
        case 0x552dccu: goto label_552dcc;
        case 0x552dd0u: goto label_552dd0;
        case 0x552dd4u: goto label_552dd4;
        case 0x552dd8u: goto label_552dd8;
        case 0x552ddcu: goto label_552ddc;
        case 0x552de0u: goto label_552de0;
        case 0x552de4u: goto label_552de4;
        case 0x552de8u: goto label_552de8;
        case 0x552decu: goto label_552dec;
        case 0x552df0u: goto label_552df0;
        case 0x552df4u: goto label_552df4;
        case 0x552df8u: goto label_552df8;
        case 0x552dfcu: goto label_552dfc;
        case 0x552e00u: goto label_552e00;
        case 0x552e04u: goto label_552e04;
        case 0x552e08u: goto label_552e08;
        case 0x552e0cu: goto label_552e0c;
        case 0x552e10u: goto label_552e10;
        case 0x552e14u: goto label_552e14;
        case 0x552e18u: goto label_552e18;
        case 0x552e1cu: goto label_552e1c;
        case 0x552e20u: goto label_552e20;
        case 0x552e24u: goto label_552e24;
        case 0x552e28u: goto label_552e28;
        case 0x552e2cu: goto label_552e2c;
        case 0x552e30u: goto label_552e30;
        case 0x552e34u: goto label_552e34;
        case 0x552e38u: goto label_552e38;
        case 0x552e3cu: goto label_552e3c;
        case 0x552e40u: goto label_552e40;
        case 0x552e44u: goto label_552e44;
        case 0x552e48u: goto label_552e48;
        case 0x552e4cu: goto label_552e4c;
        case 0x552e50u: goto label_552e50;
        case 0x552e54u: goto label_552e54;
        case 0x552e58u: goto label_552e58;
        case 0x552e5cu: goto label_552e5c;
        case 0x552e60u: goto label_552e60;
        case 0x552e64u: goto label_552e64;
        case 0x552e68u: goto label_552e68;
        case 0x552e6cu: goto label_552e6c;
        case 0x552e70u: goto label_552e70;
        case 0x552e74u: goto label_552e74;
        case 0x552e78u: goto label_552e78;
        case 0x552e7cu: goto label_552e7c;
        case 0x552e80u: goto label_552e80;
        case 0x552e84u: goto label_552e84;
        case 0x552e88u: goto label_552e88;
        case 0x552e8cu: goto label_552e8c;
        default: break;
    }

    ctx->pc = 0x552760u;

label_552760:
    // 0x552760: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x552760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_552764:
    // 0x552764: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x552764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_552768:
    // 0x552768: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x552768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_55276c:
    // 0x55276c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x55276cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_552770:
    // 0x552770: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x552770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_552774:
    // 0x552774: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x552774u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_552778:
    // 0x552778: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x552778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_55277c:
    // 0x55277c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x55277cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_552780:
    // 0x552780: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x552780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_552784:
    // 0x552784: 0x641500ff  daddiu      $s5, $zero, 0xFF
    ctx->pc = 0x552784u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)255);
label_552788:
    // 0x552788: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x552788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_55278c:
    // 0x55278c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x55278cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_552790:
    // 0x552790: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x552790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_552794:
    // 0x552794: 0x3c130067  lui         $s3, 0x67
    ctx->pc = 0x552794u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)103 << 16));
label_552798:
    // 0x552798: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x552798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_55279c:
    // 0x55279c: 0x2673e080  addiu       $s3, $s3, -0x1F80
    ctx->pc = 0x55279cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959232));
label_5527a0:
    // 0x5527a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x5527a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_5527a4:
    // 0x5527a4: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x5527a4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_5527a8:
    // 0x5527a8: 0x3c100063  lui         $s0, 0x63
    ctx->pc = 0x5527a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)99 << 16));
label_5527ac:
    // 0x5527ac: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x5527acu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_5527b0:
    // 0x5527b0: 0x2610d960  addiu       $s0, $s0, -0x26A0
    ctx->pc = 0x5527b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957408));
label_5527b4:
    // 0x5527b4: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x5527b4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_5527b8:
    // 0x5527b8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x5527b8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_5527bc:
    // 0x5527bc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x5527bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_5527c0:
    // 0x5527c0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x5527c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_5527c4:
    // 0x5527c4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x5527c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_5527c8:
    // 0x5527c8: 0x9452dc38  lhu         $s2, -0x23C8($v0)
    ctx->pc = 0x5527c8u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294958136)));
label_5527cc:
    // 0x5527cc: 0x46006686  mov.s       $f26, $f12
    ctx->pc = 0x5527ccu;
    ctx->f[26] = FPU_MOV_S(ctx->f[12]);
label_5527d0:
    // 0x5527d0: 0x90840082  lbu         $a0, 0x82($a0)
    ctx->pc = 0x5527d0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 130)));
label_5527d4:
    // 0x5527d4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5527d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5527d8:
    // 0x5527d8: 0x9451dc3a  lhu         $s1, -0x23C6($v0)
    ctx->pc = 0x5527d8u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294958138)));
label_5527dc:
    // 0x5527dc: 0x288100c8  slti        $at, $a0, 0xC8
    ctx->pc = 0x5527dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)200) ? 1 : 0);
label_5527e0:
    // 0x5527e0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_5527e4:
    if (ctx->pc == 0x5527E4u) {
        ctx->pc = 0x5527E4u;
            // 0x5527e4: 0x46006e46  mov.s       $f25, $f13 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x5527E8u;
        goto label_5527e8;
    }
    ctx->pc = 0x5527E0u;
    {
        const bool branch_taken_0x5527e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x5527E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5527E0u;
            // 0x5527e4: 0x46006e46  mov.s       $f25, $f13 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5527e0) {
            ctx->pc = 0x5527F8u;
            goto label_5527f8;
        }
    }
    ctx->pc = 0x5527E8u;
label_5527e8:
    // 0x5527e8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x5527e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_5527ec:
    // 0x5527ec: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x5527ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_5527f0:
    // 0x5527f0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x5527f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5527f4:
    // 0x5527f4: 0x62a025  or          $s4, $v1, $v0
    ctx->pc = 0x5527f4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5527f8:
    // 0x5527f8: 0x8ec20054  lw          $v0, 0x54($s6)
    ctx->pc = 0x5527f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 84)));
label_5527fc:
    // 0x5527fc: 0x8c440134  lw          $a0, 0x134($v0)
    ctx->pc = 0x5527fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_552800:
    // 0x552800: 0xc0506ac  jal         func_141AB0
label_552804:
    if (ctx->pc == 0x552804u) {
        ctx->pc = 0x552804u;
            // 0x552804: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x552808u;
        goto label_552808;
    }
    ctx->pc = 0x552800u;
    SET_GPR_U32(ctx, 31, 0x552808u);
    ctx->pc = 0x552804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x552800u;
            // 0x552804: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x552808u; }
        if (ctx->pc != 0x552808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x552808u; }
        if (ctx->pc != 0x552808u) { return; }
    }
    ctx->pc = 0x552808u;
label_552808:
    // 0x552808: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x552808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_55280c:
    // 0x55280c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x55280cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_552810:
    // 0x552810: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x552810u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_552814:
    // 0x552814: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x552814u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_552818:
    // 0x552818: 0x320f809  jalr        $t9
label_55281c:
    if (ctx->pc == 0x55281Cu) {
        ctx->pc = 0x55281Cu;
            // 0x55281c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x552820u;
        goto label_552820;
    }
    ctx->pc = 0x552818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x552820u);
        ctx->pc = 0x55281Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552818u;
            // 0x55281c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x552820u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x552820u; }
            if (ctx->pc != 0x552820u) { return; }
        }
        }
    }
    ctx->pc = 0x552820u;
label_552820:
    // 0x552820: 0x86040022  lh          $a0, 0x22($s0)
    ctx->pc = 0x552820u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
label_552824:
    // 0x552824: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x552824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_552828:
    // 0x552828: 0x86030024  lh          $v1, 0x24($s0)
    ctx->pc = 0x552828u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
label_55282c:
    // 0x55282c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x55282cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_552830:
    // 0x552830: 0xc6740098  lwc1        $f20, 0x98($s3)
    ctx->pc = 0x552830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_552834:
    // 0x552834: 0x26650090  addiu       $a1, $s3, 0x90
    ctx->pc = 0x552834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_552838:
    // 0x552838: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x552838u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55283c:
    // 0x55283c: 0x0  nop
    ctx->pc = 0x55283cu;
    // NOP
label_552840:
    // 0x552840: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x552840u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_552844:
    // 0x552844: 0x4600d540  add.s       $f21, $f26, $f0
    ctx->pc = 0x552844u;
    ctx->f[21] = FPU_ADD_S(ctx->f[26], ctx->f[0]);
label_552848:
    // 0x552848: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x552848u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55284c:
    // 0x55284c: 0x0  nop
    ctx->pc = 0x55284cu;
    // NOP
label_552850:
    // 0x552850: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x552850u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_552854:
    // 0x552854: 0x4600c818  adda.s      $f25, $f0
    ctx->pc = 0x552854u;
    ctx->f[31] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
label_552858:
    // 0x552858: 0xc660009c  lwc1        $f0, 0x9C($s3)
    ctx->pc = 0x552858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55285c:
    // 0x55285c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x55285cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_552860:
    // 0x552860: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_552864:
    if (ctx->pc == 0x552864u) {
        ctx->pc = 0x552864u;
            // 0x552864: 0x46000e1c  madd.s      $f24, $f1, $f0 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
        ctx->pc = 0x552868u;
        goto label_552868;
    }
    ctx->pc = 0x552860u;
    {
        const bool branch_taken_0x552860 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x552864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552860u;
            // 0x552864: 0x46000e1c  madd.s      $f24, $f1, $f0 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x552860) {
            ctx->pc = 0x552874u;
            goto label_552874;
        }
    }
    ctx->pc = 0x552868u;
label_552868:
    // 0x552868: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x552868u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55286c:
    // 0x55286c: 0x10000008  b           . + 4 + (0x8 << 2)
label_552870:
    if (ctx->pc == 0x552870u) {
        ctx->pc = 0x552870u;
            // 0x552870: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x552874u;
        goto label_552874;
    }
    ctx->pc = 0x55286Cu;
    {
        const bool branch_taken_0x55286c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55286Cu;
            // 0x552870: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x55286c) {
            ctx->pc = 0x552890u;
            goto label_552890;
        }
    }
    ctx->pc = 0x552874u;
label_552874:
    // 0x552874: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x552874u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_552878:
    // 0x552878: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x552878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_55287c:
    // 0x55287c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x55287cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_552880:
    // 0x552880: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x552880u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552884:
    // 0x552884: 0x0  nop
    ctx->pc = 0x552884u;
    // NOP
label_552888:
    // 0x552888: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x552888u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55288c:
    // 0x55288c: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x55288cu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_552890:
    // 0x552890: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_552894:
    if (ctx->pc == 0x552894u) {
        ctx->pc = 0x552894u;
            // 0x552894: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x552898u;
        goto label_552898;
    }
    ctx->pc = 0x552890u;
    {
        const bool branch_taken_0x552890 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x552890) {
            ctx->pc = 0x552894u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x552890u;
            // 0x552894: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5528A4u;
            goto label_5528a4;
        }
    }
    ctx->pc = 0x552898u;
label_552898:
    // 0x552898: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x552898u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55289c:
    // 0x55289c: 0x10000007  b           . + 4 + (0x7 << 2)
label_5528a0:
    if (ctx->pc == 0x5528A0u) {
        ctx->pc = 0x5528A0u;
            // 0x5528a0: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5528A4u;
        goto label_5528a4;
    }
    ctx->pc = 0x55289Cu;
    {
        const bool branch_taken_0x55289c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5528A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55289Cu;
            // 0x5528a0: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x55289c) {
            ctx->pc = 0x5528BCu;
            goto label_5528bc;
        }
    }
    ctx->pc = 0x5528A4u;
label_5528a4:
    // 0x5528a4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x5528a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_5528a8:
    // 0x5528a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5528a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5528ac:
    // 0x5528ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5528acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5528b0:
    // 0x5528b0: 0x0  nop
    ctx->pc = 0x5528b0u;
    // NOP
label_5528b4:
    // 0x5528b4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x5528b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_5528b8:
    // 0x5528b8: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x5528b8u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_5528bc:
    // 0x5528bc: 0x4602c341  sub.s       $f13, $f24, $f2
    ctx->pc = 0x5528bcu;
    ctx->f[13] = FPU_SUB_S(ctx->f[24], ctx->f[2]);
label_5528c0:
    // 0x5528c0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5528c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_5528c4:
    // 0x5528c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x5528c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5528c8:
    // 0x5528c8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x5528c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_5528cc:
    // 0x5528cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5528ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5528d0:
    // 0x5528d0: 0x4602c3c0  add.s       $f15, $f24, $f2
    ctx->pc = 0x5528d0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[24], ctx->f[2]);
label_5528d4:
    // 0x5528d4: 0x4614ab80  add.s       $f14, $f21, $f20
    ctx->pc = 0x5528d4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
label_5528d8:
    // 0x5528d8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x5528d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_5528dc:
    // 0x5528dc: 0xc0bc284  jal         func_2F0A10
label_5528e0:
    if (ctx->pc == 0x5528E0u) {
        ctx->pc = 0x5528E0u;
            // 0x5528e0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x5528E4u;
        goto label_5528e4;
    }
    ctx->pc = 0x5528DCu;
    SET_GPR_U32(ctx, 31, 0x5528E4u);
    ctx->pc = 0x5528E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5528DCu;
            // 0x5528e0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5528E4u; }
        if (ctx->pc != 0x5528E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5528E4u; }
        if (ctx->pc != 0x5528E4u) { return; }
    }
    ctx->pc = 0x5528E4u;
label_5528e4:
    // 0x5528e4: 0xc660010c  lwc1        $f0, 0x10C($s3)
    ctx->pc = 0x5528e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5528e8:
    // 0x5528e8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x5528e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_5528ec:
    // 0x5528ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x5528ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5528f0:
    // 0x5528f0: 0x92020036  lbu         $v0, 0x36($s0)
    ctx->pc = 0x5528f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 54)));
label_5528f4:
    // 0x5528f4: 0x4614ad40  add.s       $f21, $f21, $f20
    ctx->pc = 0x5528f4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
label_5528f8:
    // 0x5528f8: 0x26650100  addiu       $a1, $s3, 0x100
    ctx->pc = 0x5528f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
label_5528fc:
    // 0x5528fc: 0xc6620108  lwc1        $f2, 0x108($s3)
    ctx->pc = 0x5528fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_552900:
    // 0x552900: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_552904:
    if (ctx->pc == 0x552904u) {
        ctx->pc = 0x552904u;
            // 0x552904: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x552908u;
        goto label_552908;
    }
    ctx->pc = 0x552900u;
    {
        const bool branch_taken_0x552900 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x552904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552900u;
            // 0x552904: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x552900) {
            ctx->pc = 0x552914u;
            goto label_552914;
        }
    }
    ctx->pc = 0x552908u;
label_552908:
    // 0x552908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x552908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55290c:
    // 0x55290c: 0x10000008  b           . + 4 + (0x8 << 2)
label_552910:
    if (ctx->pc == 0x552910u) {
        ctx->pc = 0x552910u;
            // 0x552910: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x552914u;
        goto label_552914;
    }
    ctx->pc = 0x55290Cu;
    {
        const bool branch_taken_0x55290c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55290Cu;
            // 0x552910: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x55290c) {
            ctx->pc = 0x552930u;
            goto label_552930;
        }
    }
    ctx->pc = 0x552914u;
label_552914:
    // 0x552914: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x552914u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_552918:
    // 0x552918: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x552918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_55291c:
    // 0x55291c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x55291cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_552920:
    // 0x552920: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x552920u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552924:
    // 0x552924: 0x0  nop
    ctx->pc = 0x552924u;
    // NOP
label_552928:
    // 0x552928: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x552928u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_55292c:
    // 0x55292c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x55292cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_552930:
    // 0x552930: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_552934:
    if (ctx->pc == 0x552934u) {
        ctx->pc = 0x552934u;
            // 0x552934: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x552938u;
        goto label_552938;
    }
    ctx->pc = 0x552930u;
    {
        const bool branch_taken_0x552930 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x552934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552930u;
            // 0x552934: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x552930) {
            ctx->pc = 0x552944u;
            goto label_552944;
        }
    }
    ctx->pc = 0x552938u;
label_552938:
    // 0x552938: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x552938u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55293c:
    // 0x55293c: 0x10000008  b           . + 4 + (0x8 << 2)
label_552940:
    if (ctx->pc == 0x552940u) {
        ctx->pc = 0x552940u;
            // 0x552940: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x552944u;
        goto label_552944;
    }
    ctx->pc = 0x55293Cu;
    {
        const bool branch_taken_0x55293c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55293Cu;
            // 0x552940: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x55293c) {
            ctx->pc = 0x552960u;
            goto label_552960;
        }
    }
    ctx->pc = 0x552944u;
label_552944:
    // 0x552944: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x552944u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_552948:
    // 0x552948: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x552948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_55294c:
    // 0x55294c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x55294cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_552950:
    // 0x552950: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x552950u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552954:
    // 0x552954: 0x0  nop
    ctx->pc = 0x552954u;
    // NOP
label_552958:
    // 0x552958: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x552958u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55295c:
    // 0x55295c: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x55295cu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_552960:
    // 0x552960: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_552964:
    if (ctx->pc == 0x552964u) {
        ctx->pc = 0x552964u;
            // 0x552964: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x552968u;
        goto label_552968;
    }
    ctx->pc = 0x552960u;
    {
        const bool branch_taken_0x552960 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x552960) {
            ctx->pc = 0x552964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x552960u;
            // 0x552964: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x552974u;
            goto label_552974;
        }
    }
    ctx->pc = 0x552968u;
label_552968:
    // 0x552968: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x552968u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55296c:
    // 0x55296c: 0x10000007  b           . + 4 + (0x7 << 2)
label_552970:
    if (ctx->pc == 0x552970u) {
        ctx->pc = 0x552970u;
            // 0x552970: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x552974u;
        goto label_552974;
    }
    ctx->pc = 0x55296Cu;
    {
        const bool branch_taken_0x55296c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55296Cu;
            // 0x552970: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x55296c) {
            ctx->pc = 0x55298Cu;
            goto label_55298c;
        }
    }
    ctx->pc = 0x552974u;
label_552974:
    // 0x552974: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x552974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_552978:
    // 0x552978: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x552978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_55297c:
    // 0x55297c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55297cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552980:
    // 0x552980: 0x0  nop
    ctx->pc = 0x552980u;
    // NOP
label_552984:
    // 0x552984: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x552984u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_552988:
    // 0x552988: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x552988u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_55298c:
    // 0x55298c: 0x460c1380  add.s       $f14, $f2, $f12
    ctx->pc = 0x55298cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
label_552990:
    // 0x552990: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x552990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_552994:
    // 0x552994: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x552994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_552998:
    // 0x552998: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x552998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_55299c:
    // 0x55299c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55299cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5529a0:
    // 0x5529a0: 0x4601c341  sub.s       $f13, $f24, $f1
    ctx->pc = 0x5529a0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[24], ctx->f[1]);
label_5529a4:
    // 0x5529a4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x5529a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_5529a8:
    // 0x5529a8: 0xc0bc284  jal         func_2F0A10
label_5529ac:
    if (ctx->pc == 0x5529ACu) {
        ctx->pc = 0x5529ACu;
            // 0x5529ac: 0x4601c3c0  add.s       $f15, $f24, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
        ctx->pc = 0x5529B0u;
        goto label_5529b0;
    }
    ctx->pc = 0x5529A8u;
    SET_GPR_U32(ctx, 31, 0x5529B0u);
    ctx->pc = 0x5529ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5529A8u;
            // 0x5529ac: 0x4601c3c0  add.s       $f15, $f24, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5529B0u; }
        if (ctx->pc != 0x5529B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5529B0u; }
        if (ctx->pc != 0x5529B0u) { return; }
    }
    ctx->pc = 0x5529B0u;
label_5529b0:
    // 0x5529b0: 0x92020037  lbu         $v0, 0x37($s0)
    ctx->pc = 0x5529b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 55)));
label_5529b4:
    // 0x5529b4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_5529b8:
    if (ctx->pc == 0x5529B8u) {
        ctx->pc = 0x5529B8u;
            // 0x5529b8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x5529BCu;
        goto label_5529bc;
    }
    ctx->pc = 0x5529B4u;
    {
        const bool branch_taken_0x5529b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x5529b4) {
            ctx->pc = 0x5529B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5529B4u;
            // 0x5529b8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5529C8u;
            goto label_5529c8;
        }
    }
    ctx->pc = 0x5529BCu;
label_5529bc:
    // 0x5529bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5529bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5529c0:
    // 0x5529c0: 0x10000007  b           . + 4 + (0x7 << 2)
label_5529c4:
    if (ctx->pc == 0x5529C4u) {
        ctx->pc = 0x5529C4u;
            // 0x5529c4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5529C8u;
        goto label_5529c8;
    }
    ctx->pc = 0x5529C0u;
    {
        const bool branch_taken_0x5529c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5529C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5529C0u;
            // 0x5529c4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5529c0) {
            ctx->pc = 0x5529E0u;
            goto label_5529e0;
        }
    }
    ctx->pc = 0x5529C8u;
label_5529c8:
    // 0x5529c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x5529c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_5529cc:
    // 0x5529cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5529ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5529d0:
    // 0x5529d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5529d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5529d4:
    // 0x5529d4: 0x0  nop
    ctx->pc = 0x5529d4u;
    // NOP
label_5529d8:
    // 0x5529d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5529d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_5529dc:
    // 0x5529dc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x5529dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_5529e0:
    // 0x5529e0: 0x4600c600  add.s       $f24, $f24, $f0
    ctx->pc = 0x5529e0u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
label_5529e4:
    // 0x5529e4: 0x86030026  lh          $v1, 0x26($s0)
    ctx->pc = 0x5529e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
label_5529e8:
    // 0x5529e8: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x5529e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_5529ec:
    // 0x5529ec: 0x8602002a  lh          $v0, 0x2A($s0)
    ctx->pc = 0x5529ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
label_5529f0:
    // 0x5529f0: 0x26650060  addiu       $a1, $s3, 0x60
    ctx->pc = 0x5529f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_5529f4:
    // 0x5529f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5529f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5529f8:
    // 0x5529f8: 0x0  nop
    ctx->pc = 0x5529f8u;
    // NOP
label_5529fc:
    // 0x5529fc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x5529fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_552a00:
    // 0x552a00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x552a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552a04:
    // 0x552a04: 0x0  nop
    ctx->pc = 0x552a04u;
    // NOP
label_552a08:
    // 0x552a08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x552a08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_552a0c:
    // 0x552a0c: 0x4600d540  add.s       $f21, $f26, $f0
    ctx->pc = 0x552a0cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[26], ctx->f[0]);
label_552a10:
    // 0x552a10: 0xc663006c  lwc1        $f3, 0x6C($s3)
    ctx->pc = 0x552a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_552a14:
    // 0x552a14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x552a14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552a18:
    // 0x552a18: 0xc6740068  lwc1        $f20, 0x68($s3)
    ctx->pc = 0x552a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_552a1c:
    // 0x552a1c: 0x4603c580  add.s       $f22, $f24, $f3
    ctx->pc = 0x552a1cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[24], ctx->f[3]);
label_552a20:
    // 0x552a20: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x552a20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_552a24:
    // 0x552a24: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x552a24u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_552a28:
    // 0x552a28: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_552a2c:
    if (ctx->pc == 0x552A2Cu) {
        ctx->pc = 0x552A2Cu;
            // 0x552a2c: 0x461415dd  msub.s      $f23, $f2, $f20 (Delay Slot)
        ctx->f[23] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
        ctx->pc = 0x552A30u;
        goto label_552a30;
    }
    ctx->pc = 0x552A28u;
    {
        const bool branch_taken_0x552a28 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x552A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552A28u;
            // 0x552a2c: 0x461415dd  msub.s      $f23, $f2, $f20 (Delay Slot)
        ctx->f[23] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x552a28) {
            ctx->pc = 0x552A3Cu;
            goto label_552a3c;
        }
    }
    ctx->pc = 0x552A30u;
label_552a30:
    // 0x552a30: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x552a30u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552a34:
    // 0x552a34: 0x10000008  b           . + 4 + (0x8 << 2)
label_552a38:
    if (ctx->pc == 0x552A38u) {
        ctx->pc = 0x552A38u;
            // 0x552a38: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x552A3Cu;
        goto label_552a3c;
    }
    ctx->pc = 0x552A34u;
    {
        const bool branch_taken_0x552a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552A34u;
            // 0x552a38: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x552a34) {
            ctx->pc = 0x552A58u;
            goto label_552a58;
        }
    }
    ctx->pc = 0x552A3Cu;
label_552a3c:
    // 0x552a3c: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x552a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_552a40:
    // 0x552a40: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x552a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_552a44:
    // 0x552a44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x552a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_552a48:
    // 0x552a48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x552a48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552a4c:
    // 0x552a4c: 0x0  nop
    ctx->pc = 0x552a4cu;
    // NOP
label_552a50:
    // 0x552a50: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x552a50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_552a54:
    // 0x552a54: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x552a54u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_552a58:
    // 0x552a58: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_552a5c:
    if (ctx->pc == 0x552A5Cu) {
        ctx->pc = 0x552A5Cu;
            // 0x552a5c: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x552A60u;
        goto label_552a60;
    }
    ctx->pc = 0x552A58u;
    {
        const bool branch_taken_0x552a58 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x552a58) {
            ctx->pc = 0x552A5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x552A58u;
            // 0x552a5c: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x552A6Cu;
            goto label_552a6c;
        }
    }
    ctx->pc = 0x552A60u;
label_552a60:
    // 0x552a60: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x552a60u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552a64:
    // 0x552a64: 0x10000007  b           . + 4 + (0x7 << 2)
label_552a68:
    if (ctx->pc == 0x552A68u) {
        ctx->pc = 0x552A68u;
            // 0x552a68: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x552A6Cu;
        goto label_552a6c;
    }
    ctx->pc = 0x552A64u;
    {
        const bool branch_taken_0x552a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552A64u;
            // 0x552a68: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x552a64) {
            ctx->pc = 0x552A84u;
            goto label_552a84;
        }
    }
    ctx->pc = 0x552A6Cu;
label_552a6c:
    // 0x552a6c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x552a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_552a70:
    // 0x552a70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x552a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_552a74:
    // 0x552a74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x552a74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552a78:
    // 0x552a78: 0x0  nop
    ctx->pc = 0x552a78u;
    // NOP
label_552a7c:
    // 0x552a7c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x552a7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_552a80:
    // 0x552a80: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x552a80u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_552a84:
    // 0x552a84: 0x4614ab80  add.s       $f14, $f21, $f20
    ctx->pc = 0x552a84u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
label_552a88:
    // 0x552a88: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x552a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_552a8c:
    // 0x552a8c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x552a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_552a90:
    // 0x552a90: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x552a90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_552a94:
    // 0x552a94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x552a94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_552a98:
    // 0x552a98: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x552a98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_552a9c:
    // 0x552a9c: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x552a9cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_552aa0:
    // 0x552aa0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x552aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_552aa4:
    // 0x552aa4: 0xc0bc284  jal         func_2F0A10
label_552aa8:
    if (ctx->pc == 0x552AA8u) {
        ctx->pc = 0x552AA8u;
            // 0x552aa8: 0x4600b3c6  mov.s       $f15, $f22 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x552AACu;
        goto label_552aac;
    }
    ctx->pc = 0x552AA4u;
    SET_GPR_U32(ctx, 31, 0x552AACu);
    ctx->pc = 0x552AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x552AA4u;
            // 0x552aa8: 0x4600b3c6  mov.s       $f15, $f22 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x552AACu; }
        if (ctx->pc != 0x552AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x552AACu; }
        if (ctx->pc != 0x552AACu) { return; }
    }
    ctx->pc = 0x552AACu;
label_552aac:
    // 0x552aac: 0x4614ad40  add.s       $f21, $f21, $f20
    ctx->pc = 0x552aacu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
label_552ab0:
    // 0x552ab0: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_552ab4:
    if (ctx->pc == 0x552AB4u) {
        ctx->pc = 0x552AB4u;
            // 0x552ab4: 0x26650320  addiu       $a1, $s3, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 800));
        ctx->pc = 0x552AB8u;
        goto label_552ab8;
    }
    ctx->pc = 0x552AB0u;
    {
        const bool branch_taken_0x552ab0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x552AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552AB0u;
            // 0x552ab4: 0x26650320  addiu       $a1, $s3, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x552ab0) {
            ctx->pc = 0x552AC4u;
            goto label_552ac4;
        }
    }
    ctx->pc = 0x552AB8u;
label_552ab8:
    // 0x552ab8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x552ab8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552abc:
    // 0x552abc: 0x10000008  b           . + 4 + (0x8 << 2)
label_552ac0:
    if (ctx->pc == 0x552AC0u) {
        ctx->pc = 0x552AC0u;
            // 0x552ac0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x552AC4u;
        goto label_552ac4;
    }
    ctx->pc = 0x552ABCu;
    {
        const bool branch_taken_0x552abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552ABCu;
            // 0x552ac0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x552abc) {
            ctx->pc = 0x552AE0u;
            goto label_552ae0;
        }
    }
    ctx->pc = 0x552AC4u;
label_552ac4:
    // 0x552ac4: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x552ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_552ac8:
    // 0x552ac8: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x552ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_552acc:
    // 0x552acc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x552accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_552ad0:
    // 0x552ad0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x552ad0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552ad4:
    // 0x552ad4: 0x0  nop
    ctx->pc = 0x552ad4u;
    // NOP
label_552ad8:
    // 0x552ad8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x552ad8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_552adc:
    // 0x552adc: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x552adcu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_552ae0:
    // 0x552ae0: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_552ae4:
    if (ctx->pc == 0x552AE4u) {
        ctx->pc = 0x552AE4u;
            // 0x552ae4: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x552AE8u;
        goto label_552ae8;
    }
    ctx->pc = 0x552AE0u;
    {
        const bool branch_taken_0x552ae0 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x552ae0) {
            ctx->pc = 0x552AE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x552AE0u;
            // 0x552ae4: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x552AF4u;
            goto label_552af4;
        }
    }
    ctx->pc = 0x552AE8u;
label_552ae8:
    // 0x552ae8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x552ae8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552aec:
    // 0x552aec: 0x10000007  b           . + 4 + (0x7 << 2)
label_552af0:
    if (ctx->pc == 0x552AF0u) {
        ctx->pc = 0x552AF0u;
            // 0x552af0: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x552AF4u;
        goto label_552af4;
    }
    ctx->pc = 0x552AECu;
    {
        const bool branch_taken_0x552aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552AECu;
            // 0x552af0: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x552aec) {
            ctx->pc = 0x552B0Cu;
            goto label_552b0c;
        }
    }
    ctx->pc = 0x552AF4u;
label_552af4:
    // 0x552af4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x552af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_552af8:
    // 0x552af8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x552af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_552afc:
    // 0x552afc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x552afcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552b00:
    // 0x552b00: 0x0  nop
    ctx->pc = 0x552b00u;
    // NOP
label_552b04:
    // 0x552b04: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x552b04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_552b08:
    // 0x552b08: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x552b08u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_552b0c:
    // 0x552b0c: 0x4617ab80  add.s       $f14, $f21, $f23
    ctx->pc = 0x552b0cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
label_552b10:
    // 0x552b10: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x552b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_552b14:
    // 0x552b14: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x552b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_552b18:
    // 0x552b18: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x552b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_552b1c:
    // 0x552b1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x552b1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_552b20:
    // 0x552b20: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x552b20u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
label_552b24:
    // 0x552b24: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x552b24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_552b28:
    // 0x552b28: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x552b28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_552b2c:
    // 0x552b2c: 0xc0bc284  jal         func_2F0A10
label_552b30:
    if (ctx->pc == 0x552B30u) {
        ctx->pc = 0x552B30u;
            // 0x552b30: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x552B34u;
        goto label_552b34;
    }
    ctx->pc = 0x552B2Cu;
    SET_GPR_U32(ctx, 31, 0x552B34u);
    ctx->pc = 0x552B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x552B2Cu;
            // 0x552b30: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x552B34u; }
        if (ctx->pc != 0x552B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x552B34u; }
        if (ctx->pc != 0x552B34u) { return; }
    }
    ctx->pc = 0x552B34u;
label_552b34:
    // 0x552b34: 0x4617ad40  add.s       $f21, $f21, $f23
    ctx->pc = 0x552b34u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
label_552b38:
    // 0x552b38: 0x26650060  addiu       $a1, $s3, 0x60
    ctx->pc = 0x552b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_552b3c:
    // 0x552b3c: 0xc6600068  lwc1        $f0, 0x68($s3)
    ctx->pc = 0x552b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_552b40:
    // 0x552b40: 0xc661006c  lwc1        $f1, 0x6C($s3)
    ctx->pc = 0x552b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_552b44:
    // 0x552b44: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_552b48:
    if (ctx->pc == 0x552B48u) {
        ctx->pc = 0x552B48u;
            // 0x552b48: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x552B4Cu;
        goto label_552b4c;
    }
    ctx->pc = 0x552B44u;
    {
        const bool branch_taken_0x552b44 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x552B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552B44u;
            // 0x552b48: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x552b44) {
            ctx->pc = 0x552B58u;
            goto label_552b58;
        }
    }
    ctx->pc = 0x552B4Cu;
label_552b4c:
    // 0x552b4c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x552b4cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552b50:
    // 0x552b50: 0x10000008  b           . + 4 + (0x8 << 2)
label_552b54:
    if (ctx->pc == 0x552B54u) {
        ctx->pc = 0x552B54u;
            // 0x552b54: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x552B58u;
        goto label_552b58;
    }
    ctx->pc = 0x552B50u;
    {
        const bool branch_taken_0x552b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552B50u;
            // 0x552b54: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x552b50) {
            ctx->pc = 0x552B74u;
            goto label_552b74;
        }
    }
    ctx->pc = 0x552B58u;
label_552b58:
    // 0x552b58: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x552b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_552b5c:
    // 0x552b5c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x552b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_552b60:
    // 0x552b60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x552b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_552b64:
    // 0x552b64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x552b64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552b68:
    // 0x552b68: 0x0  nop
    ctx->pc = 0x552b68u;
    // NOP
label_552b6c:
    // 0x552b6c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x552b6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_552b70:
    // 0x552b70: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x552b70u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_552b74:
    // 0x552b74: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_552b78:
    if (ctx->pc == 0x552B78u) {
        ctx->pc = 0x552B78u;
            // 0x552b78: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x552B7Cu;
        goto label_552b7c;
    }
    ctx->pc = 0x552B74u;
    {
        const bool branch_taken_0x552b74 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x552b74) {
            ctx->pc = 0x552B78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x552B74u;
            // 0x552b78: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x552B88u;
            goto label_552b88;
        }
    }
    ctx->pc = 0x552B7Cu;
label_552b7c:
    // 0x552b7c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x552b7cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552b80:
    // 0x552b80: 0x10000007  b           . + 4 + (0x7 << 2)
label_552b84:
    if (ctx->pc == 0x552B84u) {
        ctx->pc = 0x552B84u;
            // 0x552b84: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x552B88u;
        goto label_552b88;
    }
    ctx->pc = 0x552B80u;
    {
        const bool branch_taken_0x552b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552B80u;
            // 0x552b84: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x552b80) {
            ctx->pc = 0x552BA0u;
            goto label_552ba0;
        }
    }
    ctx->pc = 0x552B88u;
label_552b88:
    // 0x552b88: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x552b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_552b8c:
    // 0x552b8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x552b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_552b90:
    // 0x552b90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x552b90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552b94:
    // 0x552b94: 0x0  nop
    ctx->pc = 0x552b94u;
    // NOP
label_552b98:
    // 0x552b98: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x552b98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_552b9c:
    // 0x552b9c: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x552b9cu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_552ba0:
    // 0x552ba0: 0x4601c3c0  add.s       $f15, $f24, $f1
    ctx->pc = 0x552ba0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
label_552ba4:
    // 0x552ba4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x552ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_552ba8:
    // 0x552ba8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x552ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_552bac:
    // 0x552bac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x552bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_552bb0:
    // 0x552bb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x552bb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_552bb4:
    // 0x552bb4: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x552bb4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_552bb8:
    // 0x552bb8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x552bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_552bbc:
    // 0x552bbc: 0xc0bc284  jal         func_2F0A10
label_552bc0:
    if (ctx->pc == 0x552BC0u) {
        ctx->pc = 0x552BC0u;
            // 0x552bc0: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x552BC4u;
        goto label_552bc4;
    }
    ctx->pc = 0x552BBCu;
    SET_GPR_U32(ctx, 31, 0x552BC4u);
    ctx->pc = 0x552BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x552BBCu;
            // 0x552bc0: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x552BC4u; }
        if (ctx->pc != 0x552BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x552BC4u; }
        if (ctx->pc != 0x552BC4u) { return; }
    }
    ctx->pc = 0x552BC4u;
label_552bc4:
    // 0x552bc4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x552bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_552bc8:
    // 0x552bc8: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x552bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_552bcc:
    // 0x552bcc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x552bccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_552bd0:
    // 0x552bd0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x552bd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_552bd4:
    // 0x552bd4: 0x320f809  jalr        $t9
label_552bd8:
    if (ctx->pc == 0x552BD8u) {
        ctx->pc = 0x552BDCu;
        goto label_552bdc;
    }
    ctx->pc = 0x552BD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x552BDCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x552BDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x552BDCu; }
            if (ctx->pc != 0x552BDCu) { return; }
        }
        }
    }
    ctx->pc = 0x552BDCu;
label_552bdc:
    // 0x552bdc: 0x86040024  lh          $a0, 0x24($s0)
    ctx->pc = 0x552bdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
label_552be0:
    // 0x552be0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x552be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_552be4:
    // 0x552be4: 0xc662009c  lwc1        $f2, 0x9C($s3)
    ctx->pc = 0x552be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_552be8:
    // 0x552be8: 0x92020037  lbu         $v0, 0x37($s0)
    ctx->pc = 0x552be8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 55)));
label_552bec:
    // 0x552bec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x552becu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_552bf0:
    // 0x552bf0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x552bf0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552bf4:
    // 0x552bf4: 0x0  nop
    ctx->pc = 0x552bf4u;
    // NOP
label_552bf8:
    // 0x552bf8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x552bf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_552bfc:
    // 0x552bfc: 0x4600c8c0  add.s       $f3, $f25, $f0
    ctx->pc = 0x552bfcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
label_552c00:
    // 0x552c00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x552c00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552c04:
    // 0x552c04: 0x0  nop
    ctx->pc = 0x552c04u;
    // NOP
label_552c08:
    // 0x552c08: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x552c08u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_552c0c:
    // 0x552c0c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_552c10:
    if (ctx->pc == 0x552C10u) {
        ctx->pc = 0x552C10u;
            // 0x552c10: 0x46020d1c  madd.s      $f20, $f1, $f2 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->pc = 0x552C14u;
        goto label_552c14;
    }
    ctx->pc = 0x552C0Cu;
    {
        const bool branch_taken_0x552c0c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x552C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552C0Cu;
            // 0x552c10: 0x46020d1c  madd.s      $f20, $f1, $f2 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x552c0c) {
            ctx->pc = 0x552C20u;
            goto label_552c20;
        }
    }
    ctx->pc = 0x552C14u;
label_552c14:
    // 0x552c14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x552c14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552c18:
    // 0x552c18: 0x10000008  b           . + 4 + (0x8 << 2)
label_552c1c:
    if (ctx->pc == 0x552C1Cu) {
        ctx->pc = 0x552C1Cu;
            // 0x552c1c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x552C20u;
        goto label_552c20;
    }
    ctx->pc = 0x552C18u;
    {
        const bool branch_taken_0x552c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552C18u;
            // 0x552c1c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x552c18) {
            ctx->pc = 0x552C3Cu;
            goto label_552c3c;
        }
    }
    ctx->pc = 0x552C20u;
label_552c20:
    // 0x552c20: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x552c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_552c24:
    // 0x552c24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x552c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_552c28:
    // 0x552c28: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x552c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_552c2c:
    // 0x552c2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x552c2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552c30:
    // 0x552c30: 0x0  nop
    ctx->pc = 0x552c30u;
    // NOP
label_552c34:
    // 0x552c34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x552c34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_552c38:
    // 0x552c38: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x552c38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_552c3c:
    // 0x552c3c: 0x4600a0c0  add.s       $f3, $f20, $f0
    ctx->pc = 0x552c3cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_552c40:
    // 0x552c40: 0x86050022  lh          $a1, 0x22($s0)
    ctx->pc = 0x552c40u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
label_552c44:
    // 0x552c44: 0x86040026  lh          $a0, 0x26($s0)
    ctx->pc = 0x552c44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
label_552c48:
    // 0x552c48: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x552c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_552c4c:
    // 0x552c4c: 0x2ae20035  slti        $v0, $s7, 0x35
    ctx->pc = 0x552c4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)53) ? 1 : 0);
label_552c50:
    // 0x552c50: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x552c50u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552c54:
    // 0x552c54: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x552c54u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_552c58:
    // 0x552c58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x552c58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_552c5c:
    // 0x552c5c: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x552c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_552c60:
    // 0x552c60: 0x4600d040  add.s       $f1, $f26, $f0
    ctx->pc = 0x552c60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[26], ctx->f[0]);
label_552c64:
    // 0x552c64: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x552c64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552c68:
    // 0x552c68: 0x0  nop
    ctx->pc = 0x552c68u;
    // NOP
label_552c6c:
    // 0x552c6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x552c6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_552c70:
    // 0x552c70: 0x46000d40  add.s       $f21, $f1, $f0
    ctx->pc = 0x552c70u;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_552c74:
    // 0x552c74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x552c74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552c78:
    // 0x552c78: 0xc662006c  lwc1        $f2, 0x6C($s3)
    ctx->pc = 0x552c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_552c7c:
    // 0x552c7c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x552c7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_552c80:
    // 0x552c80: 0x0  nop
    ctx->pc = 0x552c80u;
    // NOP
label_552c84:
    // 0x552c84: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x552c84u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_552c88:
    // 0x552c88: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_552c8c:
    if (ctx->pc == 0x552C8Cu) {
        ctx->pc = 0x552C8Cu;
            // 0x552c8c: 0x46020d1c  madd.s      $f20, $f1, $f2 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->pc = 0x552C90u;
        goto label_552c90;
    }
    ctx->pc = 0x552C88u;
    {
        const bool branch_taken_0x552c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x552C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552C88u;
            // 0x552c8c: 0x46020d1c  madd.s      $f20, $f1, $f2 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x552c88) {
            ctx->pc = 0x552C94u;
            goto label_552c94;
        }
    }
    ctx->pc = 0x552C90u;
label_552c90:
    // 0x552c90: 0x26f00001  addiu       $s0, $s7, 0x1
    ctx->pc = 0x552c90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_552c94:
    // 0x552c94: 0x2ae2003a  slti        $v0, $s7, 0x3A
    ctx->pc = 0x552c94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)58) ? 1 : 0);
label_552c98:
    // 0x552c98: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_552c9c:
    if (ctx->pc == 0x552C9Cu) {
        ctx->pc = 0x552CA0u;
        goto label_552ca0;
    }
    ctx->pc = 0x552C98u;
    {
        const bool branch_taken_0x552c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x552c98) {
            ctx->pc = 0x552CA4u;
            goto label_552ca4;
        }
    }
    ctx->pc = 0x552CA0u;
label_552ca0:
    // 0x552ca0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x552ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_552ca4:
    // 0x552ca4: 0x6a20004  bltzl       $s5, . + 4 + (0x4 << 2)
label_552ca8:
    if (ctx->pc == 0x552CA8u) {
        ctx->pc = 0x552CA8u;
            // 0x552ca8: 0x151842  srl         $v1, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x552CACu;
        goto label_552cac;
    }
    ctx->pc = 0x552CA4u;
    {
        const bool branch_taken_0x552ca4 = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x552ca4) {
            ctx->pc = 0x552CA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x552CA4u;
            // 0x552ca8: 0x151842  srl         $v1, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x552CB8u;
            goto label_552cb8;
        }
    }
    ctx->pc = 0x552CACu;
label_552cac:
    // 0x552cac: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x552cacu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552cb0:
    // 0x552cb0: 0x10000007  b           . + 4 + (0x7 << 2)
label_552cb4:
    if (ctx->pc == 0x552CB4u) {
        ctx->pc = 0x552CB4u;
            // 0x552cb4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x552CB8u;
        goto label_552cb8;
    }
    ctx->pc = 0x552CB0u;
    {
        const bool branch_taken_0x552cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552CB0u;
            // 0x552cb4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x552cb0) {
            ctx->pc = 0x552CD0u;
            goto label_552cd0;
        }
    }
    ctx->pc = 0x552CB8u;
label_552cb8:
    // 0x552cb8: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x552cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_552cbc:
    // 0x552cbc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x552cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_552cc0:
    // 0x552cc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x552cc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552cc4:
    // 0x552cc4: 0x0  nop
    ctx->pc = 0x552cc4u;
    // NOP
label_552cc8:
    // 0x552cc8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x552cc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_552ccc:
    // 0x552ccc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x552cccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_552cd0:
    // 0x552cd0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x552cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_552cd4:
    // 0x552cd4: 0x8ec40054  lw          $a0, 0x54($s6)
    ctx->pc = 0x552cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 84)));
label_552cd8:
    // 0x552cd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x552cd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552cdc:
    // 0x552cdc: 0x0  nop
    ctx->pc = 0x552cdcu;
    // NOP
label_552ce0:
    // 0x552ce0: 0x46000bc3  div.s       $f15, $f1, $f0
    ctx->pc = 0x552ce0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[15] = ctx->f[1] / ctx->f[0];
label_552ce4:
    // 0x552ce4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x552ce4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_552ce8:
    // 0x552ce8: 0x0  nop
    ctx->pc = 0x552ce8u;
    // NOP
label_552cec:
    // 0x552cec: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x552cecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_552cf0:
    // 0x552cf0: 0xc0c85d8  jal         func_321760
label_552cf4:
    if (ctx->pc == 0x552CF4u) {
        ctx->pc = 0x552CF4u;
            // 0x552cf4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x552CF8u;
        goto label_552cf8;
    }
    ctx->pc = 0x552CF0u;
    SET_GPR_U32(ctx, 31, 0x552CF8u);
    ctx->pc = 0x552CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x552CF0u;
            // 0x552cf4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x321760u;
    if (runtime->hasFunction(0x321760u)) {
        auto targetFn = runtime->lookupFunction(0x321760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x552CF8u; }
        if (ctx->pc != 0x552CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321760_0x321760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x552CF8u; }
        if (ctx->pc != 0x552CF8u) { return; }
    }
    ctx->pc = 0x552CF8u;
label_552cf8:
    // 0x552cf8: 0x2e010010  sltiu       $at, $s0, 0x10
    ctx->pc = 0x552cf8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_552cfc:
    // 0x552cfc: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
label_552d00:
    if (ctx->pc == 0x552D00u) {
        ctx->pc = 0x552D00u;
            // 0x552d00: 0x26050002  addiu       $a1, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x552D04u;
        goto label_552d04;
    }
    ctx->pc = 0x552CFCu;
    {
        const bool branch_taken_0x552cfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x552D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552CFCu;
            // 0x552d00: 0x26050002  addiu       $a1, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x552cfc) {
            ctx->pc = 0x552D9Cu;
            goto label_552d9c;
        }
    }
    ctx->pc = 0x552D04u;
label_552d04:
    // 0x552d04: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x552d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_552d08:
    // 0x552d08: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x552d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_552d0c:
    // 0x552d0c: 0x2463ed40  addiu       $v1, $v1, -0x12C0
    ctx->pc = 0x552d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962496));
label_552d10:
    // 0x552d10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x552d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_552d14:
    // 0x552d14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x552d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_552d18:
    // 0x552d18: 0x400008  jr          $v0
label_552d1c:
    if (ctx->pc == 0x552D1Cu) {
        ctx->pc = 0x552D20u;
        goto label_552d20;
    }
    ctx->pc = 0x552D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x552D20u: goto label_552d20;
            case 0x552D28u: goto label_552d28;
            case 0x552D30u: goto label_552d30;
            case 0x552D38u: goto label_552d38;
            case 0x552D40u: goto label_552d40;
            case 0x552D48u: goto label_552d48;
            case 0x552D50u: goto label_552d50;
            case 0x552D58u: goto label_552d58;
            case 0x552D60u: goto label_552d60;
            case 0x552D68u: goto label_552d68;
            case 0x552D70u: goto label_552d70;
            case 0x552D78u: goto label_552d78;
            case 0x552D80u: goto label_552d80;
            case 0x552D88u: goto label_552d88;
            case 0x552D90u: goto label_552d90;
            case 0x552D98u: goto label_552d98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x552D20u;
label_552d20:
    // 0x552d20: 0x1000001e  b           . + 4 + (0x1E << 2)
label_552d24:
    if (ctx->pc == 0x552D24u) {
        ctx->pc = 0x552D24u;
            // 0x552d24: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x552D28u;
        goto label_552d28;
    }
    ctx->pc = 0x552D20u;
    {
        const bool branch_taken_0x552d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552D20u;
            // 0x552d24: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x552d20) {
            ctx->pc = 0x552D9Cu;
            goto label_552d9c;
        }
    }
    ctx->pc = 0x552D28u;
label_552d28:
    // 0x552d28: 0x1000001c  b           . + 4 + (0x1C << 2)
label_552d2c:
    if (ctx->pc == 0x552D2Cu) {
        ctx->pc = 0x552D2Cu;
            // 0x552d2c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x552D30u;
        goto label_552d30;
    }
    ctx->pc = 0x552D28u;
    {
        const bool branch_taken_0x552d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552D28u;
            // 0x552d2c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x552d28) {
            ctx->pc = 0x552D9Cu;
            goto label_552d9c;
        }
    }
    ctx->pc = 0x552D30u;
label_552d30:
    // 0x552d30: 0x1000001a  b           . + 4 + (0x1A << 2)
label_552d34:
    if (ctx->pc == 0x552D34u) {
        ctx->pc = 0x552D34u;
            // 0x552d34: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x552D38u;
        goto label_552d38;
    }
    ctx->pc = 0x552D30u;
    {
        const bool branch_taken_0x552d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552D30u;
            // 0x552d34: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x552d30) {
            ctx->pc = 0x552D9Cu;
            goto label_552d9c;
        }
    }
    ctx->pc = 0x552D38u;
label_552d38:
    // 0x552d38: 0x10000018  b           . + 4 + (0x18 << 2)
label_552d3c:
    if (ctx->pc == 0x552D3Cu) {
        ctx->pc = 0x552D3Cu;
            // 0x552d3c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x552D40u;
        goto label_552d40;
    }
    ctx->pc = 0x552D38u;
    {
        const bool branch_taken_0x552d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552D38u;
            // 0x552d3c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x552d38) {
            ctx->pc = 0x552D9Cu;
            goto label_552d9c;
        }
    }
    ctx->pc = 0x552D40u;
label_552d40:
    // 0x552d40: 0x10000016  b           . + 4 + (0x16 << 2)
label_552d44:
    if (ctx->pc == 0x552D44u) {
        ctx->pc = 0x552D44u;
            // 0x552d44: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x552D48u;
        goto label_552d48;
    }
    ctx->pc = 0x552D40u;
    {
        const bool branch_taken_0x552d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552D40u;
            // 0x552d44: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x552d40) {
            ctx->pc = 0x552D9Cu;
            goto label_552d9c;
        }
    }
    ctx->pc = 0x552D48u;
label_552d48:
    // 0x552d48: 0x10000014  b           . + 4 + (0x14 << 2)
label_552d4c:
    if (ctx->pc == 0x552D4Cu) {
        ctx->pc = 0x552D4Cu;
            // 0x552d4c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x552D50u;
        goto label_552d50;
    }
    ctx->pc = 0x552D48u;
    {
        const bool branch_taken_0x552d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552D48u;
            // 0x552d4c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x552d48) {
            ctx->pc = 0x552D9Cu;
            goto label_552d9c;
        }
    }
    ctx->pc = 0x552D50u;
label_552d50:
    // 0x552d50: 0x10000012  b           . + 4 + (0x12 << 2)
label_552d54:
    if (ctx->pc == 0x552D54u) {
        ctx->pc = 0x552D54u;
            // 0x552d54: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x552D58u;
        goto label_552d58;
    }
    ctx->pc = 0x552D50u;
    {
        const bool branch_taken_0x552d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552D50u;
            // 0x552d54: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x552d50) {
            ctx->pc = 0x552D9Cu;
            goto label_552d9c;
        }
    }
    ctx->pc = 0x552D58u;
label_552d58:
    // 0x552d58: 0x10000010  b           . + 4 + (0x10 << 2)
label_552d5c:
    if (ctx->pc == 0x552D5Cu) {
        ctx->pc = 0x552D5Cu;
            // 0x552d5c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x552D60u;
        goto label_552d60;
    }
    ctx->pc = 0x552D58u;
    {
        const bool branch_taken_0x552d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552D58u;
            // 0x552d5c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x552d58) {
            ctx->pc = 0x552D9Cu;
            goto label_552d9c;
        }
    }
    ctx->pc = 0x552D60u;
label_552d60:
    // 0x552d60: 0x1000000e  b           . + 4 + (0xE << 2)
label_552d64:
    if (ctx->pc == 0x552D64u) {
        ctx->pc = 0x552D64u;
            // 0x552d64: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x552D68u;
        goto label_552d68;
    }
    ctx->pc = 0x552D60u;
    {
        const bool branch_taken_0x552d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552D60u;
            // 0x552d64: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x552d60) {
            ctx->pc = 0x552D9Cu;
            goto label_552d9c;
        }
    }
    ctx->pc = 0x552D68u;
label_552d68:
    // 0x552d68: 0x1000000c  b           . + 4 + (0xC << 2)
label_552d6c:
    if (ctx->pc == 0x552D6Cu) {
        ctx->pc = 0x552D6Cu;
            // 0x552d6c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x552D70u;
        goto label_552d70;
    }
    ctx->pc = 0x552D68u;
    {
        const bool branch_taken_0x552d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552D68u;
            // 0x552d6c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x552d68) {
            ctx->pc = 0x552D9Cu;
            goto label_552d9c;
        }
    }
    ctx->pc = 0x552D70u;
label_552d70:
    // 0x552d70: 0x1000000a  b           . + 4 + (0xA << 2)
label_552d74:
    if (ctx->pc == 0x552D74u) {
        ctx->pc = 0x552D74u;
            // 0x552d74: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x552D78u;
        goto label_552d78;
    }
    ctx->pc = 0x552D70u;
    {
        const bool branch_taken_0x552d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552D70u;
            // 0x552d74: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x552d70) {
            ctx->pc = 0x552D9Cu;
            goto label_552d9c;
        }
    }
    ctx->pc = 0x552D78u;
label_552d78:
    // 0x552d78: 0x10000008  b           . + 4 + (0x8 << 2)
label_552d7c:
    if (ctx->pc == 0x552D7Cu) {
        ctx->pc = 0x552D7Cu;
            // 0x552d7c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x552D80u;
        goto label_552d80;
    }
    ctx->pc = 0x552D78u;
    {
        const bool branch_taken_0x552d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552D78u;
            // 0x552d7c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x552d78) {
            ctx->pc = 0x552D9Cu;
            goto label_552d9c;
        }
    }
    ctx->pc = 0x552D80u;
label_552d80:
    // 0x552d80: 0x10000006  b           . + 4 + (0x6 << 2)
label_552d84:
    if (ctx->pc == 0x552D84u) {
        ctx->pc = 0x552D84u;
            // 0x552d84: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x552D88u;
        goto label_552d88;
    }
    ctx->pc = 0x552D80u;
    {
        const bool branch_taken_0x552d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552D80u;
            // 0x552d84: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x552d80) {
            ctx->pc = 0x552D9Cu;
            goto label_552d9c;
        }
    }
    ctx->pc = 0x552D88u;
label_552d88:
    // 0x552d88: 0x10000004  b           . + 4 + (0x4 << 2)
label_552d8c:
    if (ctx->pc == 0x552D8Cu) {
        ctx->pc = 0x552D8Cu;
            // 0x552d8c: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x552D90u;
        goto label_552d90;
    }
    ctx->pc = 0x552D88u;
    {
        const bool branch_taken_0x552d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552D88u;
            // 0x552d8c: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x552d88) {
            ctx->pc = 0x552D9Cu;
            goto label_552d9c;
        }
    }
    ctx->pc = 0x552D90u;
label_552d90:
    // 0x552d90: 0x10000002  b           . + 4 + (0x2 << 2)
label_552d94:
    if (ctx->pc == 0x552D94u) {
        ctx->pc = 0x552D94u;
            // 0x552d94: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x552D98u;
        goto label_552d98;
    }
    ctx->pc = 0x552D90u;
    {
        const bool branch_taken_0x552d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552D90u;
            // 0x552d94: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x552d90) {
            ctx->pc = 0x552D9Cu;
            goto label_552d9c;
        }
    }
    ctx->pc = 0x552D98u;
label_552d98:
    // 0x552d98: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x552d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_552d9c:
    // 0x552d9c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x552d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_552da0:
    // 0x552da0: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x552da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_552da4:
    // 0x552da4: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x552da4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_552da8:
    // 0x552da8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_552dac:
    if (ctx->pc == 0x552DACu) {
        ctx->pc = 0x552DB0u;
        goto label_552db0;
    }
    ctx->pc = 0x552DA8u;
    {
        const bool branch_taken_0x552da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x552da8) {
            ctx->pc = 0x552DC0u;
            goto label_552dc0;
        }
    }
    ctx->pc = 0x552DB0u;
label_552db0:
    // 0x552db0: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x552db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_552db4:
    // 0x552db4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x552db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552db8:
    // 0x552db8: 0x0  nop
    ctx->pc = 0x552db8u;
    // NOP
label_552dbc:
    // 0x552dbc: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x552dbcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_552dc0:
    // 0x552dc0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x552dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_552dc4:
    // 0x552dc4: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x552dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
label_552dc8:
    // 0x552dc8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x552dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_552dcc:
    // 0x552dcc: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x552dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_552dd0:
    // 0x552dd0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x552dd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_552dd4:
    // 0x552dd4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x552dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_552dd8:
    // 0x552dd8: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_552ddc:
    if (ctx->pc == 0x552DDCu) {
        ctx->pc = 0x552DDCu;
            // 0x552ddc: 0x3c024180  lui         $v0, 0x4180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
        ctx->pc = 0x552DE0u;
        goto label_552de0;
    }
    ctx->pc = 0x552DD8u;
    {
        const bool branch_taken_0x552dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x552dd8) {
            ctx->pc = 0x552DDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x552DD8u;
            // 0x552ddc: 0x3c024180  lui         $v0, 0x4180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x552DFCu;
            goto label_552dfc;
        }
    }
    ctx->pc = 0x552DE0u;
label_552de0:
    // 0x552de0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x552de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_552de4:
    // 0x552de4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_552de8:
    if (ctx->pc == 0x552DE8u) {
        ctx->pc = 0x552DECu;
        goto label_552dec;
    }
    ctx->pc = 0x552DE4u;
    {
        const bool branch_taken_0x552de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x552de4) {
            ctx->pc = 0x552DF8u;
            goto label_552df8;
        }
    }
    ctx->pc = 0x552DECu;
label_552dec:
    // 0x552dec: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x552decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
label_552df0:
    // 0x552df0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x552df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_552df4:
    // 0x552df4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x552df4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_552df8:
    // 0x552df8: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x552df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_552dfc:
    // 0x552dfc: 0x8ec40054  lw          $a0, 0x54($s6)
    ctx->pc = 0x552dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 84)));
label_552e00:
    // 0x552e00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x552e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_552e04:
    // 0x552e04: 0x0  nop
    ctx->pc = 0x552e04u;
    // NOP
label_552e08:
    // 0x552e08: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x552e08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_552e0c:
    // 0x552e0c: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x552e0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_552e10:
    // 0x552e10: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x552e10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_552e14:
    // 0x552e14: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x552e14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_552e18:
    // 0x552e18: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x552e18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_552e1c:
    // 0x552e1c: 0xc0c85cc  jal         func_321730
label_552e20:
    if (ctx->pc == 0x552E20u) {
        ctx->pc = 0x552E20u;
            // 0x552e20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x552E24u;
        goto label_552e24;
    }
    ctx->pc = 0x552E1Cu;
    SET_GPR_U32(ctx, 31, 0x552E24u);
    ctx->pc = 0x552E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x552E1Cu;
            // 0x552e20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321730u;
    if (runtime->hasFunction(0x321730u)) {
        auto targetFn = runtime->lookupFunction(0x321730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x552E24u; }
        if (ctx->pc != 0x552E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321730_0x321730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x552E24u; }
        if (ctx->pc != 0x552E24u) { return; }
    }
    ctx->pc = 0x552E24u;
label_552e24:
    // 0x552e24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x552e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_552e28:
    // 0x552e28: 0x8ec40054  lw          $a0, 0x54($s6)
    ctx->pc = 0x552e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 84)));
label_552e2c:
    // 0x552e2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x552e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_552e30:
    // 0x552e30: 0x0  nop
    ctx->pc = 0x552e30u;
    // NOP
label_552e34:
    // 0x552e34: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x552e34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_552e38:
    // 0x552e38: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x552e38u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_552e3c:
    // 0x552e3c: 0xc0c85d8  jal         func_321760
label_552e40:
    if (ctx->pc == 0x552E40u) {
        ctx->pc = 0x552E40u;
            // 0x552e40: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x552E44u;
        goto label_552e44;
    }
    ctx->pc = 0x552E3Cu;
    SET_GPR_U32(ctx, 31, 0x552E44u);
    ctx->pc = 0x552E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x552E3Cu;
            // 0x552e40: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x321760u;
    if (runtime->hasFunction(0x321760u)) {
        auto targetFn = runtime->lookupFunction(0x321760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x552E44u; }
        if (ctx->pc != 0x552E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321760_0x321760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x552E44u; }
        if (ctx->pc != 0x552E44u) { return; }
    }
    ctx->pc = 0x552E44u;
label_552e44:
    // 0x552e44: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x552e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_552e48:
    // 0x552e48: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x552e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_552e4c:
    // 0x552e4c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x552e4cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_552e50:
    // 0x552e50: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x552e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_552e54:
    // 0x552e54: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x552e54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_552e58:
    // 0x552e58: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x552e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_552e5c:
    // 0x552e5c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x552e5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_552e60:
    // 0x552e60: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x552e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_552e64:
    // 0x552e64: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x552e64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_552e68:
    // 0x552e68: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x552e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_552e6c:
    // 0x552e6c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x552e6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_552e70:
    // 0x552e70: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x552e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_552e74:
    // 0x552e74: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x552e74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_552e78:
    // 0x552e78: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x552e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_552e7c:
    // 0x552e7c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x552e7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_552e80:
    // 0x552e80: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x552e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_552e84:
    // 0x552e84: 0x3e00008  jr          $ra
label_552e88:
    if (ctx->pc == 0x552E88u) {
        ctx->pc = 0x552E88u;
            // 0x552e88: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x552E8Cu;
        goto label_552e8c;
    }
    ctx->pc = 0x552E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x552E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552E84u;
            // 0x552e88: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x552E8Cu;
label_552e8c:
    // 0x552e8c: 0x0  nop
    ctx->pc = 0x552e8cu;
    // NOP
}
