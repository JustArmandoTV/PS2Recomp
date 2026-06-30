#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00341760
// Address: 0x341760 - 0x342470
void sub_00341760_0x341760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341760_0x341760");
#endif

    switch (ctx->pc) {
        case 0x341760u: goto label_341760;
        case 0x341764u: goto label_341764;
        case 0x341768u: goto label_341768;
        case 0x34176cu: goto label_34176c;
        case 0x341770u: goto label_341770;
        case 0x341774u: goto label_341774;
        case 0x341778u: goto label_341778;
        case 0x34177cu: goto label_34177c;
        case 0x341780u: goto label_341780;
        case 0x341784u: goto label_341784;
        case 0x341788u: goto label_341788;
        case 0x34178cu: goto label_34178c;
        case 0x341790u: goto label_341790;
        case 0x341794u: goto label_341794;
        case 0x341798u: goto label_341798;
        case 0x34179cu: goto label_34179c;
        case 0x3417a0u: goto label_3417a0;
        case 0x3417a4u: goto label_3417a4;
        case 0x3417a8u: goto label_3417a8;
        case 0x3417acu: goto label_3417ac;
        case 0x3417b0u: goto label_3417b0;
        case 0x3417b4u: goto label_3417b4;
        case 0x3417b8u: goto label_3417b8;
        case 0x3417bcu: goto label_3417bc;
        case 0x3417c0u: goto label_3417c0;
        case 0x3417c4u: goto label_3417c4;
        case 0x3417c8u: goto label_3417c8;
        case 0x3417ccu: goto label_3417cc;
        case 0x3417d0u: goto label_3417d0;
        case 0x3417d4u: goto label_3417d4;
        case 0x3417d8u: goto label_3417d8;
        case 0x3417dcu: goto label_3417dc;
        case 0x3417e0u: goto label_3417e0;
        case 0x3417e4u: goto label_3417e4;
        case 0x3417e8u: goto label_3417e8;
        case 0x3417ecu: goto label_3417ec;
        case 0x3417f0u: goto label_3417f0;
        case 0x3417f4u: goto label_3417f4;
        case 0x3417f8u: goto label_3417f8;
        case 0x3417fcu: goto label_3417fc;
        case 0x341800u: goto label_341800;
        case 0x341804u: goto label_341804;
        case 0x341808u: goto label_341808;
        case 0x34180cu: goto label_34180c;
        case 0x341810u: goto label_341810;
        case 0x341814u: goto label_341814;
        case 0x341818u: goto label_341818;
        case 0x34181cu: goto label_34181c;
        case 0x341820u: goto label_341820;
        case 0x341824u: goto label_341824;
        case 0x341828u: goto label_341828;
        case 0x34182cu: goto label_34182c;
        case 0x341830u: goto label_341830;
        case 0x341834u: goto label_341834;
        case 0x341838u: goto label_341838;
        case 0x34183cu: goto label_34183c;
        case 0x341840u: goto label_341840;
        case 0x341844u: goto label_341844;
        case 0x341848u: goto label_341848;
        case 0x34184cu: goto label_34184c;
        case 0x341850u: goto label_341850;
        case 0x341854u: goto label_341854;
        case 0x341858u: goto label_341858;
        case 0x34185cu: goto label_34185c;
        case 0x341860u: goto label_341860;
        case 0x341864u: goto label_341864;
        case 0x341868u: goto label_341868;
        case 0x34186cu: goto label_34186c;
        case 0x341870u: goto label_341870;
        case 0x341874u: goto label_341874;
        case 0x341878u: goto label_341878;
        case 0x34187cu: goto label_34187c;
        case 0x341880u: goto label_341880;
        case 0x341884u: goto label_341884;
        case 0x341888u: goto label_341888;
        case 0x34188cu: goto label_34188c;
        case 0x341890u: goto label_341890;
        case 0x341894u: goto label_341894;
        case 0x341898u: goto label_341898;
        case 0x34189cu: goto label_34189c;
        case 0x3418a0u: goto label_3418a0;
        case 0x3418a4u: goto label_3418a4;
        case 0x3418a8u: goto label_3418a8;
        case 0x3418acu: goto label_3418ac;
        case 0x3418b0u: goto label_3418b0;
        case 0x3418b4u: goto label_3418b4;
        case 0x3418b8u: goto label_3418b8;
        case 0x3418bcu: goto label_3418bc;
        case 0x3418c0u: goto label_3418c0;
        case 0x3418c4u: goto label_3418c4;
        case 0x3418c8u: goto label_3418c8;
        case 0x3418ccu: goto label_3418cc;
        case 0x3418d0u: goto label_3418d0;
        case 0x3418d4u: goto label_3418d4;
        case 0x3418d8u: goto label_3418d8;
        case 0x3418dcu: goto label_3418dc;
        case 0x3418e0u: goto label_3418e0;
        case 0x3418e4u: goto label_3418e4;
        case 0x3418e8u: goto label_3418e8;
        case 0x3418ecu: goto label_3418ec;
        case 0x3418f0u: goto label_3418f0;
        case 0x3418f4u: goto label_3418f4;
        case 0x3418f8u: goto label_3418f8;
        case 0x3418fcu: goto label_3418fc;
        case 0x341900u: goto label_341900;
        case 0x341904u: goto label_341904;
        case 0x341908u: goto label_341908;
        case 0x34190cu: goto label_34190c;
        case 0x341910u: goto label_341910;
        case 0x341914u: goto label_341914;
        case 0x341918u: goto label_341918;
        case 0x34191cu: goto label_34191c;
        case 0x341920u: goto label_341920;
        case 0x341924u: goto label_341924;
        case 0x341928u: goto label_341928;
        case 0x34192cu: goto label_34192c;
        case 0x341930u: goto label_341930;
        case 0x341934u: goto label_341934;
        case 0x341938u: goto label_341938;
        case 0x34193cu: goto label_34193c;
        case 0x341940u: goto label_341940;
        case 0x341944u: goto label_341944;
        case 0x341948u: goto label_341948;
        case 0x34194cu: goto label_34194c;
        case 0x341950u: goto label_341950;
        case 0x341954u: goto label_341954;
        case 0x341958u: goto label_341958;
        case 0x34195cu: goto label_34195c;
        case 0x341960u: goto label_341960;
        case 0x341964u: goto label_341964;
        case 0x341968u: goto label_341968;
        case 0x34196cu: goto label_34196c;
        case 0x341970u: goto label_341970;
        case 0x341974u: goto label_341974;
        case 0x341978u: goto label_341978;
        case 0x34197cu: goto label_34197c;
        case 0x341980u: goto label_341980;
        case 0x341984u: goto label_341984;
        case 0x341988u: goto label_341988;
        case 0x34198cu: goto label_34198c;
        case 0x341990u: goto label_341990;
        case 0x341994u: goto label_341994;
        case 0x341998u: goto label_341998;
        case 0x34199cu: goto label_34199c;
        case 0x3419a0u: goto label_3419a0;
        case 0x3419a4u: goto label_3419a4;
        case 0x3419a8u: goto label_3419a8;
        case 0x3419acu: goto label_3419ac;
        case 0x3419b0u: goto label_3419b0;
        case 0x3419b4u: goto label_3419b4;
        case 0x3419b8u: goto label_3419b8;
        case 0x3419bcu: goto label_3419bc;
        case 0x3419c0u: goto label_3419c0;
        case 0x3419c4u: goto label_3419c4;
        case 0x3419c8u: goto label_3419c8;
        case 0x3419ccu: goto label_3419cc;
        case 0x3419d0u: goto label_3419d0;
        case 0x3419d4u: goto label_3419d4;
        case 0x3419d8u: goto label_3419d8;
        case 0x3419dcu: goto label_3419dc;
        case 0x3419e0u: goto label_3419e0;
        case 0x3419e4u: goto label_3419e4;
        case 0x3419e8u: goto label_3419e8;
        case 0x3419ecu: goto label_3419ec;
        case 0x3419f0u: goto label_3419f0;
        case 0x3419f4u: goto label_3419f4;
        case 0x3419f8u: goto label_3419f8;
        case 0x3419fcu: goto label_3419fc;
        case 0x341a00u: goto label_341a00;
        case 0x341a04u: goto label_341a04;
        case 0x341a08u: goto label_341a08;
        case 0x341a0cu: goto label_341a0c;
        case 0x341a10u: goto label_341a10;
        case 0x341a14u: goto label_341a14;
        case 0x341a18u: goto label_341a18;
        case 0x341a1cu: goto label_341a1c;
        case 0x341a20u: goto label_341a20;
        case 0x341a24u: goto label_341a24;
        case 0x341a28u: goto label_341a28;
        case 0x341a2cu: goto label_341a2c;
        case 0x341a30u: goto label_341a30;
        case 0x341a34u: goto label_341a34;
        case 0x341a38u: goto label_341a38;
        case 0x341a3cu: goto label_341a3c;
        case 0x341a40u: goto label_341a40;
        case 0x341a44u: goto label_341a44;
        case 0x341a48u: goto label_341a48;
        case 0x341a4cu: goto label_341a4c;
        case 0x341a50u: goto label_341a50;
        case 0x341a54u: goto label_341a54;
        case 0x341a58u: goto label_341a58;
        case 0x341a5cu: goto label_341a5c;
        case 0x341a60u: goto label_341a60;
        case 0x341a64u: goto label_341a64;
        case 0x341a68u: goto label_341a68;
        case 0x341a6cu: goto label_341a6c;
        case 0x341a70u: goto label_341a70;
        case 0x341a74u: goto label_341a74;
        case 0x341a78u: goto label_341a78;
        case 0x341a7cu: goto label_341a7c;
        case 0x341a80u: goto label_341a80;
        case 0x341a84u: goto label_341a84;
        case 0x341a88u: goto label_341a88;
        case 0x341a8cu: goto label_341a8c;
        case 0x341a90u: goto label_341a90;
        case 0x341a94u: goto label_341a94;
        case 0x341a98u: goto label_341a98;
        case 0x341a9cu: goto label_341a9c;
        case 0x341aa0u: goto label_341aa0;
        case 0x341aa4u: goto label_341aa4;
        case 0x341aa8u: goto label_341aa8;
        case 0x341aacu: goto label_341aac;
        case 0x341ab0u: goto label_341ab0;
        case 0x341ab4u: goto label_341ab4;
        case 0x341ab8u: goto label_341ab8;
        case 0x341abcu: goto label_341abc;
        case 0x341ac0u: goto label_341ac0;
        case 0x341ac4u: goto label_341ac4;
        case 0x341ac8u: goto label_341ac8;
        case 0x341accu: goto label_341acc;
        case 0x341ad0u: goto label_341ad0;
        case 0x341ad4u: goto label_341ad4;
        case 0x341ad8u: goto label_341ad8;
        case 0x341adcu: goto label_341adc;
        case 0x341ae0u: goto label_341ae0;
        case 0x341ae4u: goto label_341ae4;
        case 0x341ae8u: goto label_341ae8;
        case 0x341aecu: goto label_341aec;
        case 0x341af0u: goto label_341af0;
        case 0x341af4u: goto label_341af4;
        case 0x341af8u: goto label_341af8;
        case 0x341afcu: goto label_341afc;
        case 0x341b00u: goto label_341b00;
        case 0x341b04u: goto label_341b04;
        case 0x341b08u: goto label_341b08;
        case 0x341b0cu: goto label_341b0c;
        case 0x341b10u: goto label_341b10;
        case 0x341b14u: goto label_341b14;
        case 0x341b18u: goto label_341b18;
        case 0x341b1cu: goto label_341b1c;
        case 0x341b20u: goto label_341b20;
        case 0x341b24u: goto label_341b24;
        case 0x341b28u: goto label_341b28;
        case 0x341b2cu: goto label_341b2c;
        case 0x341b30u: goto label_341b30;
        case 0x341b34u: goto label_341b34;
        case 0x341b38u: goto label_341b38;
        case 0x341b3cu: goto label_341b3c;
        case 0x341b40u: goto label_341b40;
        case 0x341b44u: goto label_341b44;
        case 0x341b48u: goto label_341b48;
        case 0x341b4cu: goto label_341b4c;
        case 0x341b50u: goto label_341b50;
        case 0x341b54u: goto label_341b54;
        case 0x341b58u: goto label_341b58;
        case 0x341b5cu: goto label_341b5c;
        case 0x341b60u: goto label_341b60;
        case 0x341b64u: goto label_341b64;
        case 0x341b68u: goto label_341b68;
        case 0x341b6cu: goto label_341b6c;
        case 0x341b70u: goto label_341b70;
        case 0x341b74u: goto label_341b74;
        case 0x341b78u: goto label_341b78;
        case 0x341b7cu: goto label_341b7c;
        case 0x341b80u: goto label_341b80;
        case 0x341b84u: goto label_341b84;
        case 0x341b88u: goto label_341b88;
        case 0x341b8cu: goto label_341b8c;
        case 0x341b90u: goto label_341b90;
        case 0x341b94u: goto label_341b94;
        case 0x341b98u: goto label_341b98;
        case 0x341b9cu: goto label_341b9c;
        case 0x341ba0u: goto label_341ba0;
        case 0x341ba4u: goto label_341ba4;
        case 0x341ba8u: goto label_341ba8;
        case 0x341bacu: goto label_341bac;
        case 0x341bb0u: goto label_341bb0;
        case 0x341bb4u: goto label_341bb4;
        case 0x341bb8u: goto label_341bb8;
        case 0x341bbcu: goto label_341bbc;
        case 0x341bc0u: goto label_341bc0;
        case 0x341bc4u: goto label_341bc4;
        case 0x341bc8u: goto label_341bc8;
        case 0x341bccu: goto label_341bcc;
        case 0x341bd0u: goto label_341bd0;
        case 0x341bd4u: goto label_341bd4;
        case 0x341bd8u: goto label_341bd8;
        case 0x341bdcu: goto label_341bdc;
        case 0x341be0u: goto label_341be0;
        case 0x341be4u: goto label_341be4;
        case 0x341be8u: goto label_341be8;
        case 0x341becu: goto label_341bec;
        case 0x341bf0u: goto label_341bf0;
        case 0x341bf4u: goto label_341bf4;
        case 0x341bf8u: goto label_341bf8;
        case 0x341bfcu: goto label_341bfc;
        case 0x341c00u: goto label_341c00;
        case 0x341c04u: goto label_341c04;
        case 0x341c08u: goto label_341c08;
        case 0x341c0cu: goto label_341c0c;
        case 0x341c10u: goto label_341c10;
        case 0x341c14u: goto label_341c14;
        case 0x341c18u: goto label_341c18;
        case 0x341c1cu: goto label_341c1c;
        case 0x341c20u: goto label_341c20;
        case 0x341c24u: goto label_341c24;
        case 0x341c28u: goto label_341c28;
        case 0x341c2cu: goto label_341c2c;
        case 0x341c30u: goto label_341c30;
        case 0x341c34u: goto label_341c34;
        case 0x341c38u: goto label_341c38;
        case 0x341c3cu: goto label_341c3c;
        case 0x341c40u: goto label_341c40;
        case 0x341c44u: goto label_341c44;
        case 0x341c48u: goto label_341c48;
        case 0x341c4cu: goto label_341c4c;
        case 0x341c50u: goto label_341c50;
        case 0x341c54u: goto label_341c54;
        case 0x341c58u: goto label_341c58;
        case 0x341c5cu: goto label_341c5c;
        case 0x341c60u: goto label_341c60;
        case 0x341c64u: goto label_341c64;
        case 0x341c68u: goto label_341c68;
        case 0x341c6cu: goto label_341c6c;
        case 0x341c70u: goto label_341c70;
        case 0x341c74u: goto label_341c74;
        case 0x341c78u: goto label_341c78;
        case 0x341c7cu: goto label_341c7c;
        case 0x341c80u: goto label_341c80;
        case 0x341c84u: goto label_341c84;
        case 0x341c88u: goto label_341c88;
        case 0x341c8cu: goto label_341c8c;
        case 0x341c90u: goto label_341c90;
        case 0x341c94u: goto label_341c94;
        case 0x341c98u: goto label_341c98;
        case 0x341c9cu: goto label_341c9c;
        case 0x341ca0u: goto label_341ca0;
        case 0x341ca4u: goto label_341ca4;
        case 0x341ca8u: goto label_341ca8;
        case 0x341cacu: goto label_341cac;
        case 0x341cb0u: goto label_341cb0;
        case 0x341cb4u: goto label_341cb4;
        case 0x341cb8u: goto label_341cb8;
        case 0x341cbcu: goto label_341cbc;
        case 0x341cc0u: goto label_341cc0;
        case 0x341cc4u: goto label_341cc4;
        case 0x341cc8u: goto label_341cc8;
        case 0x341cccu: goto label_341ccc;
        case 0x341cd0u: goto label_341cd0;
        case 0x341cd4u: goto label_341cd4;
        case 0x341cd8u: goto label_341cd8;
        case 0x341cdcu: goto label_341cdc;
        case 0x341ce0u: goto label_341ce0;
        case 0x341ce4u: goto label_341ce4;
        case 0x341ce8u: goto label_341ce8;
        case 0x341cecu: goto label_341cec;
        case 0x341cf0u: goto label_341cf0;
        case 0x341cf4u: goto label_341cf4;
        case 0x341cf8u: goto label_341cf8;
        case 0x341cfcu: goto label_341cfc;
        case 0x341d00u: goto label_341d00;
        case 0x341d04u: goto label_341d04;
        case 0x341d08u: goto label_341d08;
        case 0x341d0cu: goto label_341d0c;
        case 0x341d10u: goto label_341d10;
        case 0x341d14u: goto label_341d14;
        case 0x341d18u: goto label_341d18;
        case 0x341d1cu: goto label_341d1c;
        case 0x341d20u: goto label_341d20;
        case 0x341d24u: goto label_341d24;
        case 0x341d28u: goto label_341d28;
        case 0x341d2cu: goto label_341d2c;
        case 0x341d30u: goto label_341d30;
        case 0x341d34u: goto label_341d34;
        case 0x341d38u: goto label_341d38;
        case 0x341d3cu: goto label_341d3c;
        case 0x341d40u: goto label_341d40;
        case 0x341d44u: goto label_341d44;
        case 0x341d48u: goto label_341d48;
        case 0x341d4cu: goto label_341d4c;
        case 0x341d50u: goto label_341d50;
        case 0x341d54u: goto label_341d54;
        case 0x341d58u: goto label_341d58;
        case 0x341d5cu: goto label_341d5c;
        case 0x341d60u: goto label_341d60;
        case 0x341d64u: goto label_341d64;
        case 0x341d68u: goto label_341d68;
        case 0x341d6cu: goto label_341d6c;
        case 0x341d70u: goto label_341d70;
        case 0x341d74u: goto label_341d74;
        case 0x341d78u: goto label_341d78;
        case 0x341d7cu: goto label_341d7c;
        case 0x341d80u: goto label_341d80;
        case 0x341d84u: goto label_341d84;
        case 0x341d88u: goto label_341d88;
        case 0x341d8cu: goto label_341d8c;
        case 0x341d90u: goto label_341d90;
        case 0x341d94u: goto label_341d94;
        case 0x341d98u: goto label_341d98;
        case 0x341d9cu: goto label_341d9c;
        case 0x341da0u: goto label_341da0;
        case 0x341da4u: goto label_341da4;
        case 0x341da8u: goto label_341da8;
        case 0x341dacu: goto label_341dac;
        case 0x341db0u: goto label_341db0;
        case 0x341db4u: goto label_341db4;
        case 0x341db8u: goto label_341db8;
        case 0x341dbcu: goto label_341dbc;
        case 0x341dc0u: goto label_341dc0;
        case 0x341dc4u: goto label_341dc4;
        case 0x341dc8u: goto label_341dc8;
        case 0x341dccu: goto label_341dcc;
        case 0x341dd0u: goto label_341dd0;
        case 0x341dd4u: goto label_341dd4;
        case 0x341dd8u: goto label_341dd8;
        case 0x341ddcu: goto label_341ddc;
        case 0x341de0u: goto label_341de0;
        case 0x341de4u: goto label_341de4;
        case 0x341de8u: goto label_341de8;
        case 0x341decu: goto label_341dec;
        case 0x341df0u: goto label_341df0;
        case 0x341df4u: goto label_341df4;
        case 0x341df8u: goto label_341df8;
        case 0x341dfcu: goto label_341dfc;
        case 0x341e00u: goto label_341e00;
        case 0x341e04u: goto label_341e04;
        case 0x341e08u: goto label_341e08;
        case 0x341e0cu: goto label_341e0c;
        case 0x341e10u: goto label_341e10;
        case 0x341e14u: goto label_341e14;
        case 0x341e18u: goto label_341e18;
        case 0x341e1cu: goto label_341e1c;
        case 0x341e20u: goto label_341e20;
        case 0x341e24u: goto label_341e24;
        case 0x341e28u: goto label_341e28;
        case 0x341e2cu: goto label_341e2c;
        case 0x341e30u: goto label_341e30;
        case 0x341e34u: goto label_341e34;
        case 0x341e38u: goto label_341e38;
        case 0x341e3cu: goto label_341e3c;
        case 0x341e40u: goto label_341e40;
        case 0x341e44u: goto label_341e44;
        case 0x341e48u: goto label_341e48;
        case 0x341e4cu: goto label_341e4c;
        case 0x341e50u: goto label_341e50;
        case 0x341e54u: goto label_341e54;
        case 0x341e58u: goto label_341e58;
        case 0x341e5cu: goto label_341e5c;
        case 0x341e60u: goto label_341e60;
        case 0x341e64u: goto label_341e64;
        case 0x341e68u: goto label_341e68;
        case 0x341e6cu: goto label_341e6c;
        case 0x341e70u: goto label_341e70;
        case 0x341e74u: goto label_341e74;
        case 0x341e78u: goto label_341e78;
        case 0x341e7cu: goto label_341e7c;
        case 0x341e80u: goto label_341e80;
        case 0x341e84u: goto label_341e84;
        case 0x341e88u: goto label_341e88;
        case 0x341e8cu: goto label_341e8c;
        case 0x341e90u: goto label_341e90;
        case 0x341e94u: goto label_341e94;
        case 0x341e98u: goto label_341e98;
        case 0x341e9cu: goto label_341e9c;
        case 0x341ea0u: goto label_341ea0;
        case 0x341ea4u: goto label_341ea4;
        case 0x341ea8u: goto label_341ea8;
        case 0x341eacu: goto label_341eac;
        case 0x341eb0u: goto label_341eb0;
        case 0x341eb4u: goto label_341eb4;
        case 0x341eb8u: goto label_341eb8;
        case 0x341ebcu: goto label_341ebc;
        case 0x341ec0u: goto label_341ec0;
        case 0x341ec4u: goto label_341ec4;
        case 0x341ec8u: goto label_341ec8;
        case 0x341eccu: goto label_341ecc;
        case 0x341ed0u: goto label_341ed0;
        case 0x341ed4u: goto label_341ed4;
        case 0x341ed8u: goto label_341ed8;
        case 0x341edcu: goto label_341edc;
        case 0x341ee0u: goto label_341ee0;
        case 0x341ee4u: goto label_341ee4;
        case 0x341ee8u: goto label_341ee8;
        case 0x341eecu: goto label_341eec;
        case 0x341ef0u: goto label_341ef0;
        case 0x341ef4u: goto label_341ef4;
        case 0x341ef8u: goto label_341ef8;
        case 0x341efcu: goto label_341efc;
        case 0x341f00u: goto label_341f00;
        case 0x341f04u: goto label_341f04;
        case 0x341f08u: goto label_341f08;
        case 0x341f0cu: goto label_341f0c;
        case 0x341f10u: goto label_341f10;
        case 0x341f14u: goto label_341f14;
        case 0x341f18u: goto label_341f18;
        case 0x341f1cu: goto label_341f1c;
        case 0x341f20u: goto label_341f20;
        case 0x341f24u: goto label_341f24;
        case 0x341f28u: goto label_341f28;
        case 0x341f2cu: goto label_341f2c;
        case 0x341f30u: goto label_341f30;
        case 0x341f34u: goto label_341f34;
        case 0x341f38u: goto label_341f38;
        case 0x341f3cu: goto label_341f3c;
        case 0x341f40u: goto label_341f40;
        case 0x341f44u: goto label_341f44;
        case 0x341f48u: goto label_341f48;
        case 0x341f4cu: goto label_341f4c;
        case 0x341f50u: goto label_341f50;
        case 0x341f54u: goto label_341f54;
        case 0x341f58u: goto label_341f58;
        case 0x341f5cu: goto label_341f5c;
        case 0x341f60u: goto label_341f60;
        case 0x341f64u: goto label_341f64;
        case 0x341f68u: goto label_341f68;
        case 0x341f6cu: goto label_341f6c;
        case 0x341f70u: goto label_341f70;
        case 0x341f74u: goto label_341f74;
        case 0x341f78u: goto label_341f78;
        case 0x341f7cu: goto label_341f7c;
        case 0x341f80u: goto label_341f80;
        case 0x341f84u: goto label_341f84;
        case 0x341f88u: goto label_341f88;
        case 0x341f8cu: goto label_341f8c;
        case 0x341f90u: goto label_341f90;
        case 0x341f94u: goto label_341f94;
        case 0x341f98u: goto label_341f98;
        case 0x341f9cu: goto label_341f9c;
        case 0x341fa0u: goto label_341fa0;
        case 0x341fa4u: goto label_341fa4;
        case 0x341fa8u: goto label_341fa8;
        case 0x341facu: goto label_341fac;
        case 0x341fb0u: goto label_341fb0;
        case 0x341fb4u: goto label_341fb4;
        case 0x341fb8u: goto label_341fb8;
        case 0x341fbcu: goto label_341fbc;
        case 0x341fc0u: goto label_341fc0;
        case 0x341fc4u: goto label_341fc4;
        case 0x341fc8u: goto label_341fc8;
        case 0x341fccu: goto label_341fcc;
        case 0x341fd0u: goto label_341fd0;
        case 0x341fd4u: goto label_341fd4;
        case 0x341fd8u: goto label_341fd8;
        case 0x341fdcu: goto label_341fdc;
        case 0x341fe0u: goto label_341fe0;
        case 0x341fe4u: goto label_341fe4;
        case 0x341fe8u: goto label_341fe8;
        case 0x341fecu: goto label_341fec;
        case 0x341ff0u: goto label_341ff0;
        case 0x341ff4u: goto label_341ff4;
        case 0x341ff8u: goto label_341ff8;
        case 0x341ffcu: goto label_341ffc;
        case 0x342000u: goto label_342000;
        case 0x342004u: goto label_342004;
        case 0x342008u: goto label_342008;
        case 0x34200cu: goto label_34200c;
        case 0x342010u: goto label_342010;
        case 0x342014u: goto label_342014;
        case 0x342018u: goto label_342018;
        case 0x34201cu: goto label_34201c;
        case 0x342020u: goto label_342020;
        case 0x342024u: goto label_342024;
        case 0x342028u: goto label_342028;
        case 0x34202cu: goto label_34202c;
        case 0x342030u: goto label_342030;
        case 0x342034u: goto label_342034;
        case 0x342038u: goto label_342038;
        case 0x34203cu: goto label_34203c;
        case 0x342040u: goto label_342040;
        case 0x342044u: goto label_342044;
        case 0x342048u: goto label_342048;
        case 0x34204cu: goto label_34204c;
        case 0x342050u: goto label_342050;
        case 0x342054u: goto label_342054;
        case 0x342058u: goto label_342058;
        case 0x34205cu: goto label_34205c;
        case 0x342060u: goto label_342060;
        case 0x342064u: goto label_342064;
        case 0x342068u: goto label_342068;
        case 0x34206cu: goto label_34206c;
        case 0x342070u: goto label_342070;
        case 0x342074u: goto label_342074;
        case 0x342078u: goto label_342078;
        case 0x34207cu: goto label_34207c;
        case 0x342080u: goto label_342080;
        case 0x342084u: goto label_342084;
        case 0x342088u: goto label_342088;
        case 0x34208cu: goto label_34208c;
        case 0x342090u: goto label_342090;
        case 0x342094u: goto label_342094;
        case 0x342098u: goto label_342098;
        case 0x34209cu: goto label_34209c;
        case 0x3420a0u: goto label_3420a0;
        case 0x3420a4u: goto label_3420a4;
        case 0x3420a8u: goto label_3420a8;
        case 0x3420acu: goto label_3420ac;
        case 0x3420b0u: goto label_3420b0;
        case 0x3420b4u: goto label_3420b4;
        case 0x3420b8u: goto label_3420b8;
        case 0x3420bcu: goto label_3420bc;
        case 0x3420c0u: goto label_3420c0;
        case 0x3420c4u: goto label_3420c4;
        case 0x3420c8u: goto label_3420c8;
        case 0x3420ccu: goto label_3420cc;
        case 0x3420d0u: goto label_3420d0;
        case 0x3420d4u: goto label_3420d4;
        case 0x3420d8u: goto label_3420d8;
        case 0x3420dcu: goto label_3420dc;
        case 0x3420e0u: goto label_3420e0;
        case 0x3420e4u: goto label_3420e4;
        case 0x3420e8u: goto label_3420e8;
        case 0x3420ecu: goto label_3420ec;
        case 0x3420f0u: goto label_3420f0;
        case 0x3420f4u: goto label_3420f4;
        case 0x3420f8u: goto label_3420f8;
        case 0x3420fcu: goto label_3420fc;
        case 0x342100u: goto label_342100;
        case 0x342104u: goto label_342104;
        case 0x342108u: goto label_342108;
        case 0x34210cu: goto label_34210c;
        case 0x342110u: goto label_342110;
        case 0x342114u: goto label_342114;
        case 0x342118u: goto label_342118;
        case 0x34211cu: goto label_34211c;
        case 0x342120u: goto label_342120;
        case 0x342124u: goto label_342124;
        case 0x342128u: goto label_342128;
        case 0x34212cu: goto label_34212c;
        case 0x342130u: goto label_342130;
        case 0x342134u: goto label_342134;
        case 0x342138u: goto label_342138;
        case 0x34213cu: goto label_34213c;
        case 0x342140u: goto label_342140;
        case 0x342144u: goto label_342144;
        case 0x342148u: goto label_342148;
        case 0x34214cu: goto label_34214c;
        case 0x342150u: goto label_342150;
        case 0x342154u: goto label_342154;
        case 0x342158u: goto label_342158;
        case 0x34215cu: goto label_34215c;
        case 0x342160u: goto label_342160;
        case 0x342164u: goto label_342164;
        case 0x342168u: goto label_342168;
        case 0x34216cu: goto label_34216c;
        case 0x342170u: goto label_342170;
        case 0x342174u: goto label_342174;
        case 0x342178u: goto label_342178;
        case 0x34217cu: goto label_34217c;
        case 0x342180u: goto label_342180;
        case 0x342184u: goto label_342184;
        case 0x342188u: goto label_342188;
        case 0x34218cu: goto label_34218c;
        case 0x342190u: goto label_342190;
        case 0x342194u: goto label_342194;
        case 0x342198u: goto label_342198;
        case 0x34219cu: goto label_34219c;
        case 0x3421a0u: goto label_3421a0;
        case 0x3421a4u: goto label_3421a4;
        case 0x3421a8u: goto label_3421a8;
        case 0x3421acu: goto label_3421ac;
        case 0x3421b0u: goto label_3421b0;
        case 0x3421b4u: goto label_3421b4;
        case 0x3421b8u: goto label_3421b8;
        case 0x3421bcu: goto label_3421bc;
        case 0x3421c0u: goto label_3421c0;
        case 0x3421c4u: goto label_3421c4;
        case 0x3421c8u: goto label_3421c8;
        case 0x3421ccu: goto label_3421cc;
        case 0x3421d0u: goto label_3421d0;
        case 0x3421d4u: goto label_3421d4;
        case 0x3421d8u: goto label_3421d8;
        case 0x3421dcu: goto label_3421dc;
        case 0x3421e0u: goto label_3421e0;
        case 0x3421e4u: goto label_3421e4;
        case 0x3421e8u: goto label_3421e8;
        case 0x3421ecu: goto label_3421ec;
        case 0x3421f0u: goto label_3421f0;
        case 0x3421f4u: goto label_3421f4;
        case 0x3421f8u: goto label_3421f8;
        case 0x3421fcu: goto label_3421fc;
        case 0x342200u: goto label_342200;
        case 0x342204u: goto label_342204;
        case 0x342208u: goto label_342208;
        case 0x34220cu: goto label_34220c;
        case 0x342210u: goto label_342210;
        case 0x342214u: goto label_342214;
        case 0x342218u: goto label_342218;
        case 0x34221cu: goto label_34221c;
        case 0x342220u: goto label_342220;
        case 0x342224u: goto label_342224;
        case 0x342228u: goto label_342228;
        case 0x34222cu: goto label_34222c;
        case 0x342230u: goto label_342230;
        case 0x342234u: goto label_342234;
        case 0x342238u: goto label_342238;
        case 0x34223cu: goto label_34223c;
        case 0x342240u: goto label_342240;
        case 0x342244u: goto label_342244;
        case 0x342248u: goto label_342248;
        case 0x34224cu: goto label_34224c;
        case 0x342250u: goto label_342250;
        case 0x342254u: goto label_342254;
        case 0x342258u: goto label_342258;
        case 0x34225cu: goto label_34225c;
        case 0x342260u: goto label_342260;
        case 0x342264u: goto label_342264;
        case 0x342268u: goto label_342268;
        case 0x34226cu: goto label_34226c;
        case 0x342270u: goto label_342270;
        case 0x342274u: goto label_342274;
        case 0x342278u: goto label_342278;
        case 0x34227cu: goto label_34227c;
        case 0x342280u: goto label_342280;
        case 0x342284u: goto label_342284;
        case 0x342288u: goto label_342288;
        case 0x34228cu: goto label_34228c;
        case 0x342290u: goto label_342290;
        case 0x342294u: goto label_342294;
        case 0x342298u: goto label_342298;
        case 0x34229cu: goto label_34229c;
        case 0x3422a0u: goto label_3422a0;
        case 0x3422a4u: goto label_3422a4;
        case 0x3422a8u: goto label_3422a8;
        case 0x3422acu: goto label_3422ac;
        case 0x3422b0u: goto label_3422b0;
        case 0x3422b4u: goto label_3422b4;
        case 0x3422b8u: goto label_3422b8;
        case 0x3422bcu: goto label_3422bc;
        case 0x3422c0u: goto label_3422c0;
        case 0x3422c4u: goto label_3422c4;
        case 0x3422c8u: goto label_3422c8;
        case 0x3422ccu: goto label_3422cc;
        case 0x3422d0u: goto label_3422d0;
        case 0x3422d4u: goto label_3422d4;
        case 0x3422d8u: goto label_3422d8;
        case 0x3422dcu: goto label_3422dc;
        case 0x3422e0u: goto label_3422e0;
        case 0x3422e4u: goto label_3422e4;
        case 0x3422e8u: goto label_3422e8;
        case 0x3422ecu: goto label_3422ec;
        case 0x3422f0u: goto label_3422f0;
        case 0x3422f4u: goto label_3422f4;
        case 0x3422f8u: goto label_3422f8;
        case 0x3422fcu: goto label_3422fc;
        case 0x342300u: goto label_342300;
        case 0x342304u: goto label_342304;
        case 0x342308u: goto label_342308;
        case 0x34230cu: goto label_34230c;
        case 0x342310u: goto label_342310;
        case 0x342314u: goto label_342314;
        case 0x342318u: goto label_342318;
        case 0x34231cu: goto label_34231c;
        case 0x342320u: goto label_342320;
        case 0x342324u: goto label_342324;
        case 0x342328u: goto label_342328;
        case 0x34232cu: goto label_34232c;
        case 0x342330u: goto label_342330;
        case 0x342334u: goto label_342334;
        case 0x342338u: goto label_342338;
        case 0x34233cu: goto label_34233c;
        case 0x342340u: goto label_342340;
        case 0x342344u: goto label_342344;
        case 0x342348u: goto label_342348;
        case 0x34234cu: goto label_34234c;
        case 0x342350u: goto label_342350;
        case 0x342354u: goto label_342354;
        case 0x342358u: goto label_342358;
        case 0x34235cu: goto label_34235c;
        case 0x342360u: goto label_342360;
        case 0x342364u: goto label_342364;
        case 0x342368u: goto label_342368;
        case 0x34236cu: goto label_34236c;
        case 0x342370u: goto label_342370;
        case 0x342374u: goto label_342374;
        case 0x342378u: goto label_342378;
        case 0x34237cu: goto label_34237c;
        case 0x342380u: goto label_342380;
        case 0x342384u: goto label_342384;
        case 0x342388u: goto label_342388;
        case 0x34238cu: goto label_34238c;
        case 0x342390u: goto label_342390;
        case 0x342394u: goto label_342394;
        case 0x342398u: goto label_342398;
        case 0x34239cu: goto label_34239c;
        case 0x3423a0u: goto label_3423a0;
        case 0x3423a4u: goto label_3423a4;
        case 0x3423a8u: goto label_3423a8;
        case 0x3423acu: goto label_3423ac;
        case 0x3423b0u: goto label_3423b0;
        case 0x3423b4u: goto label_3423b4;
        case 0x3423b8u: goto label_3423b8;
        case 0x3423bcu: goto label_3423bc;
        case 0x3423c0u: goto label_3423c0;
        case 0x3423c4u: goto label_3423c4;
        case 0x3423c8u: goto label_3423c8;
        case 0x3423ccu: goto label_3423cc;
        case 0x3423d0u: goto label_3423d0;
        case 0x3423d4u: goto label_3423d4;
        case 0x3423d8u: goto label_3423d8;
        case 0x3423dcu: goto label_3423dc;
        case 0x3423e0u: goto label_3423e0;
        case 0x3423e4u: goto label_3423e4;
        case 0x3423e8u: goto label_3423e8;
        case 0x3423ecu: goto label_3423ec;
        case 0x3423f0u: goto label_3423f0;
        case 0x3423f4u: goto label_3423f4;
        case 0x3423f8u: goto label_3423f8;
        case 0x3423fcu: goto label_3423fc;
        case 0x342400u: goto label_342400;
        case 0x342404u: goto label_342404;
        case 0x342408u: goto label_342408;
        case 0x34240cu: goto label_34240c;
        case 0x342410u: goto label_342410;
        case 0x342414u: goto label_342414;
        case 0x342418u: goto label_342418;
        case 0x34241cu: goto label_34241c;
        case 0x342420u: goto label_342420;
        case 0x342424u: goto label_342424;
        case 0x342428u: goto label_342428;
        case 0x34242cu: goto label_34242c;
        case 0x342430u: goto label_342430;
        case 0x342434u: goto label_342434;
        case 0x342438u: goto label_342438;
        case 0x34243cu: goto label_34243c;
        case 0x342440u: goto label_342440;
        case 0x342444u: goto label_342444;
        case 0x342448u: goto label_342448;
        case 0x34244cu: goto label_34244c;
        case 0x342450u: goto label_342450;
        case 0x342454u: goto label_342454;
        case 0x342458u: goto label_342458;
        case 0x34245cu: goto label_34245c;
        case 0x342460u: goto label_342460;
        case 0x342464u: goto label_342464;
        case 0x342468u: goto label_342468;
        case 0x34246cu: goto label_34246c;
        default: break;
    }

    ctx->pc = 0x341760u;

label_341760:
    // 0x341760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x341760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_341764:
    // 0x341764: 0x3c02430a  lui         $v0, 0x430A
    ctx->pc = 0x341764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17162 << 16));
label_341768:
    // 0x341768: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x341768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_34176c:
    // 0x34176c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x34176cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_341770:
    // 0x341770: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x341770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_341774:
    // 0x341774: 0x3c034288  lui         $v1, 0x4288
    ctx->pc = 0x341774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17032 << 16));
label_341778:
    // 0x341778: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x341778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34177c:
    // 0x34177c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34177cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_341780:
    // 0x341780: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x341780u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_341784:
    // 0x341784: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x341784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_341788:
    // 0x341788: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x341788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_34178c:
    // 0x34178c: 0xc129c64  jal         func_4A7190
label_341790:
    if (ctx->pc == 0x341790u) {
        ctx->pc = 0x341790u;
            // 0x341790: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x341794u;
        goto label_341794;
    }
    ctx->pc = 0x34178Cu;
    SET_GPR_U32(ctx, 31, 0x341794u);
    ctx->pc = 0x341790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34178Cu;
            // 0x341790: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A7190u;
    if (runtime->hasFunction(0x4A7190u)) {
        auto targetFn = runtime->lookupFunction(0x4A7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341794u; }
        if (ctx->pc != 0x341794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A7190_0x4a7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341794u; }
        if (ctx->pc != 0x341794u) { return; }
    }
    ctx->pc = 0x341794u;
label_341794:
    // 0x341794: 0x3c03430a  lui         $v1, 0x430A
    ctx->pc = 0x341794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17162 << 16));
label_341798:
    // 0x341798: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x341798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
label_34179c:
    // 0x34179c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x34179cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3417a0:
    // 0x3417a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3417a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3417a4:
    // 0x3417a4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3417a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3417a8:
    // 0x3417a8: 0xc129bd8  jal         func_4A6F60
label_3417ac:
    if (ctx->pc == 0x3417ACu) {
        ctx->pc = 0x3417ACu;
            // 0x3417ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3417B0u;
        goto label_3417b0;
    }
    ctx->pc = 0x3417A8u;
    SET_GPR_U32(ctx, 31, 0x3417B0u);
    ctx->pc = 0x3417ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3417A8u;
            // 0x3417ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6F60u;
    if (runtime->hasFunction(0x4A6F60u)) {
        auto targetFn = runtime->lookupFunction(0x4A6F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3417B0u; }
        if (ctx->pc != 0x3417B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6F60_0x4a6f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3417B0u; }
        if (ctx->pc != 0x3417B0u) { return; }
    }
    ctx->pc = 0x3417B0u;
label_3417b0:
    // 0x3417b0: 0x3c02430a  lui         $v0, 0x430A
    ctx->pc = 0x3417b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17162 << 16));
label_3417b4:
    // 0x3417b4: 0x3c034288  lui         $v1, 0x4288
    ctx->pc = 0x3417b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17032 << 16));
label_3417b8:
    // 0x3417b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3417b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3417bc:
    // 0x3417bc: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x3417bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_3417c0:
    // 0x3417c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3417c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3417c4:
    // 0x3417c4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x3417c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3417c8:
    // 0x3417c8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3417c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3417cc:
    // 0x3417cc: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x3417ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_3417d0:
    // 0x3417d0: 0xc129b24  jal         func_4A6C90
label_3417d4:
    if (ctx->pc == 0x3417D4u) {
        ctx->pc = 0x3417D4u;
            // 0x3417d4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3417D8u;
        goto label_3417d8;
    }
    ctx->pc = 0x3417D0u;
    SET_GPR_U32(ctx, 31, 0x3417D8u);
    ctx->pc = 0x3417D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3417D0u;
            // 0x3417d4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6C90u;
    if (runtime->hasFunction(0x4A6C90u)) {
        auto targetFn = runtime->lookupFunction(0x4A6C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3417D8u; }
        if (ctx->pc != 0x3417D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6C90_0x4a6c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3417D8u; }
        if (ctx->pc != 0x3417D8u) { return; }
    }
    ctx->pc = 0x3417D8u;
label_3417d8:
    // 0x3417d8: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x3417d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_3417dc:
    // 0x3417dc: 0x2c610010  sltiu       $at, $v1, 0x10
    ctx->pc = 0x3417dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_3417e0:
    // 0x3417e0: 0x50200061  beql        $at, $zero, . + 4 + (0x61 << 2)
label_3417e4:
    if (ctx->pc == 0x3417E4u) {
        ctx->pc = 0x3417E4u;
            // 0x3417e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3417E8u;
        goto label_3417e8;
    }
    ctx->pc = 0x3417E0u;
    {
        const bool branch_taken_0x3417e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3417e0) {
            ctx->pc = 0x3417E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3417E0u;
            // 0x3417e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x341968u;
            goto label_341968;
        }
    }
    ctx->pc = 0x3417E8u;
label_3417e8:
    // 0x3417e8: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x3417e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_3417ec:
    // 0x3417ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3417ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3417f0:
    // 0x3417f0: 0x24840330  addiu       $a0, $a0, 0x330
    ctx->pc = 0x3417f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 816));
label_3417f4:
    // 0x3417f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3417f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3417f8:
    // 0x3417f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3417f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3417fc:
    // 0x3417fc: 0x600008  jr          $v1
label_341800:
    if (ctx->pc == 0x341800u) {
        ctx->pc = 0x341804u;
        goto label_341804;
    }
    ctx->pc = 0x3417FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x341804u: goto label_341804;
            case 0x341828u: goto label_341828;
            case 0x34184Cu: goto label_34184c;
            case 0x341870u: goto label_341870;
            case 0x341894u: goto label_341894;
            case 0x3418B8u: goto label_3418b8;
            case 0x3418DCu: goto label_3418dc;
            case 0x341900u: goto label_341900;
            case 0x341924u: goto label_341924;
            case 0x341948u: goto label_341948;
            case 0x341964u: goto label_341964;
            default: break;
        }
        return;
    }
    ctx->pc = 0x341804u;
label_341804:
    // 0x341804: 0x3c02430a  lui         $v0, 0x430A
    ctx->pc = 0x341804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17162 << 16));
label_341808:
    // 0x341808: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x341808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_34180c:
    // 0x34180c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x34180cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_341810:
    // 0x341810: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x341810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
label_341814:
    // 0x341814: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x341814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_341818:
    // 0x341818: 0xc129b18  jal         func_4A6C60
label_34181c:
    if (ctx->pc == 0x34181Cu) {
        ctx->pc = 0x34181Cu;
            // 0x34181c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x341820u;
        goto label_341820;
    }
    ctx->pc = 0x341818u;
    SET_GPR_U32(ctx, 31, 0x341820u);
    ctx->pc = 0x34181Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341818u;
            // 0x34181c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6C60u;
    if (runtime->hasFunction(0x4A6C60u)) {
        auto targetFn = runtime->lookupFunction(0x4A6C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341820u; }
        if (ctx->pc != 0x341820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6C60_0x4a6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341820u; }
        if (ctx->pc != 0x341820u) { return; }
    }
    ctx->pc = 0x341820u;
label_341820:
    // 0x341820: 0x10000050  b           . + 4 + (0x50 << 2)
label_341824:
    if (ctx->pc == 0x341824u) {
        ctx->pc = 0x341828u;
        goto label_341828;
    }
    ctx->pc = 0x341820u;
    {
        const bool branch_taken_0x341820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x341820) {
            ctx->pc = 0x341964u;
            goto label_341964;
        }
    }
    ctx->pc = 0x341828u;
label_341828:
    // 0x341828: 0x3c02430a  lui         $v0, 0x430A
    ctx->pc = 0x341828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17162 << 16));
label_34182c:
    // 0x34182c: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x34182cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_341830:
    // 0x341830: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x341830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_341834:
    // 0x341834: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x341834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
label_341838:
    // 0x341838: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x341838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_34183c:
    // 0x34183c: 0xc129ac4  jal         func_4A6B10
label_341840:
    if (ctx->pc == 0x341840u) {
        ctx->pc = 0x341840u;
            // 0x341840: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x341844u;
        goto label_341844;
    }
    ctx->pc = 0x34183Cu;
    SET_GPR_U32(ctx, 31, 0x341844u);
    ctx->pc = 0x341840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34183Cu;
            // 0x341840: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6B10u;
    if (runtime->hasFunction(0x4A6B10u)) {
        auto targetFn = runtime->lookupFunction(0x4A6B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341844u; }
        if (ctx->pc != 0x341844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6B10_0x4a6b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341844u; }
        if (ctx->pc != 0x341844u) { return; }
    }
    ctx->pc = 0x341844u;
label_341844:
    // 0x341844: 0x10000047  b           . + 4 + (0x47 << 2)
label_341848:
    if (ctx->pc == 0x341848u) {
        ctx->pc = 0x34184Cu;
        goto label_34184c;
    }
    ctx->pc = 0x341844u;
    {
        const bool branch_taken_0x341844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x341844) {
            ctx->pc = 0x341964u;
            goto label_341964;
        }
    }
    ctx->pc = 0x34184Cu;
label_34184c:
    // 0x34184c: 0x3c02430a  lui         $v0, 0x430A
    ctx->pc = 0x34184cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17162 << 16));
label_341850:
    // 0x341850: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x341850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_341854:
    // 0x341854: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x341854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_341858:
    // 0x341858: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x341858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
label_34185c:
    // 0x34185c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34185cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_341860:
    // 0x341860: 0xc129a74  jal         func_4A69D0
label_341864:
    if (ctx->pc == 0x341864u) {
        ctx->pc = 0x341864u;
            // 0x341864: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x341868u;
        goto label_341868;
    }
    ctx->pc = 0x341860u;
    SET_GPR_U32(ctx, 31, 0x341868u);
    ctx->pc = 0x341864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341860u;
            // 0x341864: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A69D0u;
    if (runtime->hasFunction(0x4A69D0u)) {
        auto targetFn = runtime->lookupFunction(0x4A69D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341868u; }
        if (ctx->pc != 0x341868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A69D0_0x4a69d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341868u; }
        if (ctx->pc != 0x341868u) { return; }
    }
    ctx->pc = 0x341868u;
label_341868:
    // 0x341868: 0x1000003e  b           . + 4 + (0x3E << 2)
label_34186c:
    if (ctx->pc == 0x34186Cu) {
        ctx->pc = 0x341870u;
        goto label_341870;
    }
    ctx->pc = 0x341868u;
    {
        const bool branch_taken_0x341868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x341868) {
            ctx->pc = 0x341964u;
            goto label_341964;
        }
    }
    ctx->pc = 0x341870u;
label_341870:
    // 0x341870: 0x3c02430a  lui         $v0, 0x430A
    ctx->pc = 0x341870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17162 << 16));
label_341874:
    // 0x341874: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x341874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_341878:
    // 0x341878: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x341878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_34187c:
    // 0x34187c: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x34187cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
label_341880:
    // 0x341880: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x341880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_341884:
    // 0x341884: 0xc129840  jal         func_4A6100
label_341888:
    if (ctx->pc == 0x341888u) {
        ctx->pc = 0x341888u;
            // 0x341888: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34188Cu;
        goto label_34188c;
    }
    ctx->pc = 0x341884u;
    SET_GPR_U32(ctx, 31, 0x34188Cu);
    ctx->pc = 0x341888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341884u;
            // 0x341888: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6100u;
    if (runtime->hasFunction(0x4A6100u)) {
        auto targetFn = runtime->lookupFunction(0x4A6100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34188Cu; }
        if (ctx->pc != 0x34188Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6100_0x4a6100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34188Cu; }
        if (ctx->pc != 0x34188Cu) { return; }
    }
    ctx->pc = 0x34188Cu;
label_34188c:
    // 0x34188c: 0x10000035  b           . + 4 + (0x35 << 2)
label_341890:
    if (ctx->pc == 0x341890u) {
        ctx->pc = 0x341894u;
        goto label_341894;
    }
    ctx->pc = 0x34188Cu;
    {
        const bool branch_taken_0x34188c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34188c) {
            ctx->pc = 0x341964u;
            goto label_341964;
        }
    }
    ctx->pc = 0x341894u;
label_341894:
    // 0x341894: 0x3c02430a  lui         $v0, 0x430A
    ctx->pc = 0x341894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17162 << 16));
label_341898:
    // 0x341898: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x341898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_34189c:
    // 0x34189c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x34189cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3418a0:
    // 0x3418a0: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x3418a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
label_3418a4:
    // 0x3418a4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3418a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3418a8:
    // 0x3418a8: 0xc1299c4  jal         func_4A6710
label_3418ac:
    if (ctx->pc == 0x3418ACu) {
        ctx->pc = 0x3418ACu;
            // 0x3418ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3418B0u;
        goto label_3418b0;
    }
    ctx->pc = 0x3418A8u;
    SET_GPR_U32(ctx, 31, 0x3418B0u);
    ctx->pc = 0x3418ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3418A8u;
            // 0x3418ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6710u;
    if (runtime->hasFunction(0x4A6710u)) {
        auto targetFn = runtime->lookupFunction(0x4A6710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3418B0u; }
        if (ctx->pc != 0x3418B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6710_0x4a6710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3418B0u; }
        if (ctx->pc != 0x3418B0u) { return; }
    }
    ctx->pc = 0x3418B0u;
label_3418b0:
    // 0x3418b0: 0x1000002c  b           . + 4 + (0x2C << 2)
label_3418b4:
    if (ctx->pc == 0x3418B4u) {
        ctx->pc = 0x3418B8u;
        goto label_3418b8;
    }
    ctx->pc = 0x3418B0u;
    {
        const bool branch_taken_0x3418b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3418b0) {
            ctx->pc = 0x341964u;
            goto label_341964;
        }
    }
    ctx->pc = 0x3418B8u;
label_3418b8:
    // 0x3418b8: 0x3c02430a  lui         $v0, 0x430A
    ctx->pc = 0x3418b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17162 << 16));
label_3418bc:
    // 0x3418bc: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x3418bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_3418c0:
    // 0x3418c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3418c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3418c4:
    // 0x3418c4: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x3418c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
label_3418c8:
    // 0x3418c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3418c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3418cc:
    // 0x3418cc: 0xc1299d4  jal         func_4A6750
label_3418d0:
    if (ctx->pc == 0x3418D0u) {
        ctx->pc = 0x3418D0u;
            // 0x3418d0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3418D4u;
        goto label_3418d4;
    }
    ctx->pc = 0x3418CCu;
    SET_GPR_U32(ctx, 31, 0x3418D4u);
    ctx->pc = 0x3418D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3418CCu;
            // 0x3418d0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6750u;
    if (runtime->hasFunction(0x4A6750u)) {
        auto targetFn = runtime->lookupFunction(0x4A6750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3418D4u; }
        if (ctx->pc != 0x3418D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6750_0x4a6750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3418D4u; }
        if (ctx->pc != 0x3418D4u) { return; }
    }
    ctx->pc = 0x3418D4u;
label_3418d4:
    // 0x3418d4: 0x10000023  b           . + 4 + (0x23 << 2)
label_3418d8:
    if (ctx->pc == 0x3418D8u) {
        ctx->pc = 0x3418DCu;
        goto label_3418dc;
    }
    ctx->pc = 0x3418D4u;
    {
        const bool branch_taken_0x3418d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3418d4) {
            ctx->pc = 0x341964u;
            goto label_341964;
        }
    }
    ctx->pc = 0x3418DCu;
label_3418dc:
    // 0x3418dc: 0x3c02430a  lui         $v0, 0x430A
    ctx->pc = 0x3418dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17162 << 16));
label_3418e0:
    // 0x3418e0: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x3418e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_3418e4:
    // 0x3418e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3418e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3418e8:
    // 0x3418e8: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x3418e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
label_3418ec:
    // 0x3418ec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3418ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3418f0:
    // 0x3418f0: 0xc1298e4  jal         func_4A6390
label_3418f4:
    if (ctx->pc == 0x3418F4u) {
        ctx->pc = 0x3418F4u;
            // 0x3418f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3418F8u;
        goto label_3418f8;
    }
    ctx->pc = 0x3418F0u;
    SET_GPR_U32(ctx, 31, 0x3418F8u);
    ctx->pc = 0x3418F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3418F0u;
            // 0x3418f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6390u;
    if (runtime->hasFunction(0x4A6390u)) {
        auto targetFn = runtime->lookupFunction(0x4A6390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3418F8u; }
        if (ctx->pc != 0x3418F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6390_0x4a6390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3418F8u; }
        if (ctx->pc != 0x3418F8u) { return; }
    }
    ctx->pc = 0x3418F8u;
label_3418f8:
    // 0x3418f8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3418fc:
    if (ctx->pc == 0x3418FCu) {
        ctx->pc = 0x341900u;
        goto label_341900;
    }
    ctx->pc = 0x3418F8u;
    {
        const bool branch_taken_0x3418f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3418f8) {
            ctx->pc = 0x341964u;
            goto label_341964;
        }
    }
    ctx->pc = 0x341900u;
label_341900:
    // 0x341900: 0x3c02430a  lui         $v0, 0x430A
    ctx->pc = 0x341900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17162 << 16));
label_341904:
    // 0x341904: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x341904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_341908:
    // 0x341908: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x341908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_34190c:
    // 0x34190c: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x34190cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
label_341910:
    // 0x341910: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x341910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_341914:
    // 0x341914: 0xc129960  jal         func_4A6580
label_341918:
    if (ctx->pc == 0x341918u) {
        ctx->pc = 0x341918u;
            // 0x341918: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34191Cu;
        goto label_34191c;
    }
    ctx->pc = 0x341914u;
    SET_GPR_U32(ctx, 31, 0x34191Cu);
    ctx->pc = 0x341918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341914u;
            // 0x341918: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6580u;
    if (runtime->hasFunction(0x4A6580u)) {
        auto targetFn = runtime->lookupFunction(0x4A6580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34191Cu; }
        if (ctx->pc != 0x34191Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6580_0x4a6580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34191Cu; }
        if (ctx->pc != 0x34191Cu) { return; }
    }
    ctx->pc = 0x34191Cu;
label_34191c:
    // 0x34191c: 0x10000011  b           . + 4 + (0x11 << 2)
label_341920:
    if (ctx->pc == 0x341920u) {
        ctx->pc = 0x341924u;
        goto label_341924;
    }
    ctx->pc = 0x34191Cu;
    {
        const bool branch_taken_0x34191c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34191c) {
            ctx->pc = 0x341964u;
            goto label_341964;
        }
    }
    ctx->pc = 0x341924u;
label_341924:
    // 0x341924: 0x3c02430a  lui         $v0, 0x430A
    ctx->pc = 0x341924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17162 << 16));
label_341928:
    // 0x341928: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x341928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_34192c:
    // 0x34192c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x34192cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_341930:
    // 0x341930: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x341930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
label_341934:
    // 0x341934: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x341934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_341938:
    // 0x341938: 0xc129a24  jal         func_4A6890
label_34193c:
    if (ctx->pc == 0x34193Cu) {
        ctx->pc = 0x34193Cu;
            // 0x34193c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x341940u;
        goto label_341940;
    }
    ctx->pc = 0x341938u;
    SET_GPR_U32(ctx, 31, 0x341940u);
    ctx->pc = 0x34193Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341938u;
            // 0x34193c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A6890u;
    if (runtime->hasFunction(0x4A6890u)) {
        auto targetFn = runtime->lookupFunction(0x4A6890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341940u; }
        if (ctx->pc != 0x341940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A6890_0x4a6890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341940u; }
        if (ctx->pc != 0x341940u) { return; }
    }
    ctx->pc = 0x341940u;
label_341940:
    // 0x341940: 0x10000008  b           . + 4 + (0x8 << 2)
label_341944:
    if (ctx->pc == 0x341944u) {
        ctx->pc = 0x341948u;
        goto label_341948;
    }
    ctx->pc = 0x341940u;
    {
        const bool branch_taken_0x341940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x341940) {
            ctx->pc = 0x341964u;
            goto label_341964;
        }
    }
    ctx->pc = 0x341948u;
label_341948:
    // 0x341948: 0x3c02430a  lui         $v0, 0x430A
    ctx->pc = 0x341948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17162 << 16));
label_34194c:
    // 0x34194c: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x34194cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_341950:
    // 0x341950: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x341950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_341954:
    // 0x341954: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x341954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
label_341958:
    // 0x341958: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x341958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_34195c:
    // 0x34195c: 0xc1297ec  jal         func_4A5FB0
label_341960:
    if (ctx->pc == 0x341960u) {
        ctx->pc = 0x341960u;
            // 0x341960: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x341964u;
        goto label_341964;
    }
    ctx->pc = 0x34195Cu;
    SET_GPR_U32(ctx, 31, 0x341964u);
    ctx->pc = 0x341960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34195Cu;
            // 0x341960: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FB0u;
    if (runtime->hasFunction(0x4A5FB0u)) {
        auto targetFn = runtime->lookupFunction(0x4A5FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341964u; }
        if (ctx->pc != 0x341964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A5FB0_0x4a5fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341964u; }
        if (ctx->pc != 0x341964u) { return; }
    }
    ctx->pc = 0x341964u;
label_341964:
    // 0x341964: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x341964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_341968:
    // 0x341968: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x341968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34196c:
    // 0x34196c: 0x3e00008  jr          $ra
label_341970:
    if (ctx->pc == 0x341970u) {
        ctx->pc = 0x341970u;
            // 0x341970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x341974u;
        goto label_341974;
    }
    ctx->pc = 0x34196Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34196Cu;
            // 0x341970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x341974u;
label_341974:
    // 0x341974: 0x0  nop
    ctx->pc = 0x341974u;
    // NOP
label_341978:
    // 0x341978: 0x0  nop
    ctx->pc = 0x341978u;
    // NOP
label_34197c:
    // 0x34197c: 0x0  nop
    ctx->pc = 0x34197cu;
    // NOP
label_341980:
    // 0x341980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x341980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_341984:
    // 0x341984: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x341984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_341988:
    // 0x341988: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x341988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34198c:
    // 0x34198c: 0x9083005a  lbu         $v1, 0x5A($a0)
    ctx->pc = 0x34198cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 90)));
label_341990:
    // 0x341990: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_341994:
    if (ctx->pc == 0x341994u) {
        ctx->pc = 0x341994u;
            // 0x341994: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x341998u;
        goto label_341998;
    }
    ctx->pc = 0x341990u;
    {
        const bool branch_taken_0x341990 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x341994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x341990u;
            // 0x341994: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341990) {
            ctx->pc = 0x3419B0u;
            goto label_3419b0;
        }
    }
    ctx->pc = 0x341998u;
label_341998:
    // 0x341998: 0xc0cd634  jal         func_3358D0
label_34199c:
    if (ctx->pc == 0x34199Cu) {
        ctx->pc = 0x3419A0u;
        goto label_3419a0;
    }
    ctx->pc = 0x341998u;
    SET_GPR_U32(ctx, 31, 0x3419A0u);
    ctx->pc = 0x3358D0u;
    if (runtime->hasFunction(0x3358D0u)) {
        auto targetFn = runtime->lookupFunction(0x3358D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3419A0u; }
        if (ctx->pc != 0x3419A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003358D0_0x3358d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3419A0u; }
        if (ctx->pc != 0x3419A0u) { return; }
    }
    ctx->pc = 0x3419A0u;
label_3419a0:
    // 0x3419a0: 0xc0d0570  jal         func_3415C0
label_3419a4:
    if (ctx->pc == 0x3419A4u) {
        ctx->pc = 0x3419A4u;
            // 0x3419a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3419A8u;
        goto label_3419a8;
    }
    ctx->pc = 0x3419A0u;
    SET_GPR_U32(ctx, 31, 0x3419A8u);
    ctx->pc = 0x3419A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3419A0u;
            // 0x3419a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3415C0u;
    if (runtime->hasFunction(0x3415C0u)) {
        auto targetFn = runtime->lookupFunction(0x3415C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3419A8u; }
        if (ctx->pc != 0x3419A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003415C0_0x3415c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3419A8u; }
        if (ctx->pc != 0x3419A8u) { return; }
    }
    ctx->pc = 0x3419A8u;
label_3419a8:
    // 0x3419a8: 0xc0d05d8  jal         func_341760
label_3419ac:
    if (ctx->pc == 0x3419ACu) {
        ctx->pc = 0x3419ACu;
            // 0x3419ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3419B0u;
        goto label_3419b0;
    }
    ctx->pc = 0x3419A8u;
    SET_GPR_U32(ctx, 31, 0x3419B0u);
    ctx->pc = 0x3419ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3419A8u;
            // 0x3419ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x341760u;
    goto label_341760;
    ctx->pc = 0x3419B0u;
label_3419b0:
    // 0x3419b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3419b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3419b4:
    // 0x3419b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3419b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3419b8:
    // 0x3419b8: 0x3e00008  jr          $ra
label_3419bc:
    if (ctx->pc == 0x3419BCu) {
        ctx->pc = 0x3419BCu;
            // 0x3419bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3419C0u;
        goto label_3419c0;
    }
    ctx->pc = 0x3419B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3419BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3419B8u;
            // 0x3419bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3419C0u;
label_3419c0:
    // 0x3419c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3419c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3419c4:
    // 0x3419c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3419c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3419c8:
    // 0x3419c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3419c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3419cc:
    // 0x3419cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3419ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3419d0:
    // 0x3419d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3419d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3419d4:
    // 0x3419d4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_3419d8:
    if (ctx->pc == 0x3419D8u) {
        ctx->pc = 0x3419D8u;
            // 0x3419d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3419DCu;
        goto label_3419dc;
    }
    ctx->pc = 0x3419D4u;
    {
        const bool branch_taken_0x3419d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3419D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3419D4u;
            // 0x3419d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3419d4) {
            ctx->pc = 0x341A18u;
            goto label_341a18;
        }
    }
    ctx->pc = 0x3419DCu;
label_3419dc:
    // 0x3419dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3419dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3419e0:
    // 0x3419e0: 0x24425650  addiu       $v0, $v0, 0x5650
    ctx->pc = 0x3419e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22096));
label_3419e4:
    // 0x3419e4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_3419e8:
    if (ctx->pc == 0x3419E8u) {
        ctx->pc = 0x3419E8u;
            // 0x3419e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3419ECu;
        goto label_3419ec;
    }
    ctx->pc = 0x3419E4u;
    {
        const bool branch_taken_0x3419e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3419E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3419E4u;
            // 0x3419e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3419e4) {
            ctx->pc = 0x341A00u;
            goto label_341a00;
        }
    }
    ctx->pc = 0x3419ECu;
label_3419ec:
    // 0x3419ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3419ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3419f0:
    // 0x3419f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3419f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3419f4:
    // 0x3419f4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x3419f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_3419f8:
    // 0x3419f8: 0xc057a68  jal         func_15E9A0
label_3419fc:
    if (ctx->pc == 0x3419FCu) {
        ctx->pc = 0x3419FCu;
            // 0x3419fc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x341A00u;
        goto label_341a00;
    }
    ctx->pc = 0x3419F8u;
    SET_GPR_U32(ctx, 31, 0x341A00u);
    ctx->pc = 0x3419FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3419F8u;
            // 0x3419fc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341A00u; }
        if (ctx->pc != 0x341A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341A00u; }
        if (ctx->pc != 0x341A00u) { return; }
    }
    ctx->pc = 0x341A00u;
label_341a00:
    // 0x341a00: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x341a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_341a04:
    // 0x341a04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x341a04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_341a08:
    // 0x341a08: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_341a0c:
    if (ctx->pc == 0x341A0Cu) {
        ctx->pc = 0x341A0Cu;
            // 0x341a0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x341A10u;
        goto label_341a10;
    }
    ctx->pc = 0x341A08u;
    {
        const bool branch_taken_0x341a08 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x341a08) {
            ctx->pc = 0x341A0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x341A08u;
            // 0x341a0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x341A1Cu;
            goto label_341a1c;
        }
    }
    ctx->pc = 0x341A10u;
label_341a10:
    // 0x341a10: 0xc0400a8  jal         func_1002A0
label_341a14:
    if (ctx->pc == 0x341A14u) {
        ctx->pc = 0x341A14u;
            // 0x341a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x341A18u;
        goto label_341a18;
    }
    ctx->pc = 0x341A10u;
    SET_GPR_U32(ctx, 31, 0x341A18u);
    ctx->pc = 0x341A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341A10u;
            // 0x341a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341A18u; }
        if (ctx->pc != 0x341A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341A18u; }
        if (ctx->pc != 0x341A18u) { return; }
    }
    ctx->pc = 0x341A18u;
label_341a18:
    // 0x341a18: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x341a18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_341a1c:
    // 0x341a1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x341a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_341a20:
    // 0x341a20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x341a20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_341a24:
    // 0x341a24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x341a24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_341a28:
    // 0x341a28: 0x3e00008  jr          $ra
label_341a2c:
    if (ctx->pc == 0x341A2Cu) {
        ctx->pc = 0x341A2Cu;
            // 0x341a2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x341A30u;
        goto label_341a30;
    }
    ctx->pc = 0x341A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x341A28u;
            // 0x341a2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x341A30u;
label_341a30:
    // 0x341a30: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x341a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_341a34:
    // 0x341a34: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x341a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_341a38:
    // 0x341a38: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x341a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_341a3c:
    // 0x341a3c: 0x24632d60  addiu       $v1, $v1, 0x2D60
    ctx->pc = 0x341a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11616));
label_341a40:
    // 0x341a40: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x341a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_341a44:
    // 0x341a44: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x341a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_341a48:
    // 0x341a48: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x341a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_341a4c:
    // 0x341a4c: 0x3c0a0065  lui         $t2, 0x65
    ctx->pc = 0x341a4cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)101 << 16));
label_341a50:
    // 0x341a50: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x341a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_341a54:
    // 0x341a54: 0x254a2d70  addiu       $t2, $t2, 0x2D70
    ctx->pc = 0x341a54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 11632));
label_341a58:
    // 0x341a58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x341a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_341a5c:
    // 0x341a5c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x341a5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_341a60:
    // 0x341a60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x341a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_341a64:
    // 0x341a64: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x341a64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
label_341a68:
    // 0x341a68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x341a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_341a6c:
    // 0x341a6c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x341a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_341a70:
    // 0x341a70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x341a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_341a74:
    // 0x341a74: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x341a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_341a78:
    // 0x341a78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x341a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_341a7c:
    // 0x341a7c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x341a7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_341a80:
    // 0x341a80: 0x8c440eac  lw          $a0, 0xEAC($v0)
    ctx->pc = 0x341a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_341a84:
    // 0x341a84: 0x240600f0  addiu       $a2, $zero, 0xF0
    ctx->pc = 0x341a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_341a88:
    // 0x341a88: 0xc4620948  lwc1        $f2, 0x948($v1)
    ctx->pc = 0x341a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_341a8c:
    // 0x341a8c: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x341a8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_341a90:
    // 0x341a90: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x341a90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_341a94:
    // 0x341a94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x341a94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341a98:
    // 0x341a98: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x341a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_341a9c:
    // 0x341a9c: 0x8c920088  lw          $s2, 0x88($a0)
    ctx->pc = 0x341a9cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_341aa0:
    // 0x341aa0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x341aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_341aa4:
    // 0x341aa4: 0x8c85008c  lw          $a1, 0x8C($a0)
    ctx->pc = 0x341aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
label_341aa8:
    // 0x341aa8: 0x2463ad50  addiu       $v1, $v1, -0x52B0
    ctx->pc = 0x341aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946128));
label_341aac:
    // 0x341aac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x341aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_341ab0:
    // 0x341ab0: 0xc441094c  lwc1        $f1, 0x94C($v0)
    ctx->pc = 0x341ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_341ab4:
    // 0x341ab4: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x341ab4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_341ab8:
    // 0x341ab8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x341ab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_341abc:
    // 0x341abc: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x341abcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_341ac0:
    // 0x341ac0: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x341ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
label_341ac4:
    // 0x341ac4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x341ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_341ac8:
    // 0x341ac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_341acc:
    // 0x341acc: 0xc545000c  lwc1        $f5, 0xC($t2)
    ctx->pc = 0x341accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_341ad0:
    // 0x341ad0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x341ad0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_341ad4:
    // 0x341ad4: 0x44872000  mtc1        $a3, $f4
    ctx->pc = 0x341ad4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_341ad8:
    // 0x341ad8: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x341ad8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_341adc:
    // 0x341adc: 0x4604289c  madd.s      $f2, $f5, $f4
    ctx->pc = 0x341adcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
label_341ae0:
    // 0x341ae0: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x341ae0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_341ae4:
    // 0x341ae4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x341ae4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_341ae8:
    // 0x341ae8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x341ae8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_341aec:
    // 0x341aec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x341aecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_341af0:
    // 0x341af0: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x341af0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_341af4:
    // 0x341af4: 0x0  nop
    ctx->pc = 0x341af4u;
    // NOP
label_341af8:
    // 0x341af8: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x341af8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_341afc:
    // 0x341afc: 0xc0bc760  jal         func_2F1D80
label_341b00:
    if (ctx->pc == 0x341B00u) {
        ctx->pc = 0x341B00u;
            // 0x341b00: 0xa28023  subu        $s0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x341B04u;
        goto label_341b04;
    }
    ctx->pc = 0x341AFCu;
    SET_GPR_U32(ctx, 31, 0x341B04u);
    ctx->pc = 0x341B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341AFCu;
            // 0x341b00: 0xa28023  subu        $s0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D80u;
    if (runtime->hasFunction(0x2F1D80u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341B04u; }
        if (ctx->pc != 0x341B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1D80_0x2f1d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341B04u; }
        if (ctx->pc != 0x341B04u) { return; }
    }
    ctx->pc = 0x341B04u;
label_341b04:
    // 0x341b04: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x341b04u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_341b08:
    // 0x341b08: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x341b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_341b0c:
    // 0x341b0c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x341b0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_341b10:
    // 0x341b10: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x341b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_341b14:
    // 0x341b14: 0x8c447c30  lw          $a0, 0x7C30($v0)
    ctx->pc = 0x341b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31792)));
label_341b18:
    // 0x341b18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x341b18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_341b1c:
    // 0x341b1c: 0x0  nop
    ctx->pc = 0x341b1cu;
    // NOP
label_341b20:
    // 0x341b20: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x341b20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_341b24:
    // 0x341b24: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x341b24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_341b28:
    // 0x341b28: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x341b28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_341b2c:
    // 0x341b2c: 0xc0506ac  jal         func_141AB0
label_341b30:
    if (ctx->pc == 0x341B30u) {
        ctx->pc = 0x341B30u;
            // 0x341b30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x341B34u;
        goto label_341b34;
    }
    ctx->pc = 0x341B2Cu;
    SET_GPR_U32(ctx, 31, 0x341B34u);
    ctx->pc = 0x341B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341B2Cu;
            // 0x341b30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341B34u; }
        if (ctx->pc != 0x341B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341B34u; }
        if (ctx->pc != 0x341B34u) { return; }
    }
    ctx->pc = 0x341B34u;
label_341b34:
    // 0x341b34: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x341b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_341b38:
    // 0x341b38: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x341b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_341b3c:
    // 0x341b3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x341b3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_341b40:
    // 0x341b40: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x341b40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_341b44:
    // 0x341b44: 0x320f809  jalr        $t9
label_341b48:
    if (ctx->pc == 0x341B48u) {
        ctx->pc = 0x341B48u;
            // 0x341b48: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x341B4Cu;
        goto label_341b4c;
    }
    ctx->pc = 0x341B44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x341B4Cu);
        ctx->pc = 0x341B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x341B44u;
            // 0x341b48: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x341B4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x341B4Cu; }
            if (ctx->pc != 0x341B4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x341B4Cu;
label_341b4c:
    // 0x341b4c: 0x3c100065  lui         $s0, 0x65
    ctx->pc = 0x341b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)101 << 16));
label_341b50:
    // 0x341b50: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x341b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_341b54:
    // 0x341b54: 0x26102d60  addiu       $s0, $s0, 0x2D60
    ctx->pc = 0x341b54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11616));
label_341b58:
    // 0x341b58: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x341b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_341b5c:
    // 0x341b5c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x341b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_341b60:
    // 0x341b60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x341b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_341b64:
    // 0x341b64: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x341b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_341b68:
    // 0x341b68: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x341b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_341b6c:
    // 0x341b6c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x341b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_341b70:
    // 0x341b70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x341b70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341b74:
    // 0x341b74: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x341b74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_341b78:
    // 0x341b78: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x341b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_341b7c:
    // 0x341b7c: 0x84482c60  lh          $t0, 0x2C60($v0)
    ctx->pc = 0x341b7cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 11360)));
label_341b80:
    // 0x341b80: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x341b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_341b84:
    // 0x341b84: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x341b84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_341b88:
    // 0x341b88: 0x84432c62  lh          $v1, 0x2C62($v0)
    ctx->pc = 0x341b88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 11362)));
label_341b8c:
    // 0x341b8c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x341b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_341b90:
    // 0x341b90: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x341b90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_341b94:
    // 0x341b94: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x341b94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_341b98:
    // 0x341b98: 0x440a0800  mfc1        $t2, $f1
    ctx->pc = 0x341b98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
label_341b9c:
    // 0x341b9c: 0x0  nop
    ctx->pc = 0x341b9cu;
    // NOP
label_341ba0:
    // 0x341ba0: 0x24a4823  subu        $t1, $s2, $t2
    ctx->pc = 0x341ba0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
label_341ba4:
    // 0x341ba4: 0x440c0000  mfc1        $t4, $f0
    ctx->pc = 0x341ba4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
label_341ba8:
    // 0x341ba8: 0x24a5021  addu        $t2, $s2, $t2
    ctx->pc = 0x341ba8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
label_341bac:
    // 0x341bac: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x341bacu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_341bb0:
    // 0x341bb0: 0x22c5823  subu        $t3, $s1, $t4
    ctx->pc = 0x341bb0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 12)));
label_341bb4:
    // 0x341bb4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x341bb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_341bb8:
    // 0x341bb8: 0x22c4821  addu        $t1, $s1, $t4
    ctx->pc = 0x341bb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 12)));
label_341bbc:
    // 0x341bbc: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x341bbcu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_341bc0:
    // 0x341bc0: 0x0  nop
    ctx->pc = 0x341bc0u;
    // NOP
label_341bc4:
    // 0x341bc4: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x341bc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_341bc8:
    // 0x341bc8: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x341bc8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_341bcc:
    // 0x341bcc: 0x0  nop
    ctx->pc = 0x341bccu;
    // NOP
label_341bd0:
    // 0x341bd0: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x341bd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_341bd4:
    // 0x341bd4: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x341bd4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_341bd8:
    // 0x341bd8: 0x0  nop
    ctx->pc = 0x341bd8u;
    // NOP
label_341bdc:
    // 0x341bdc: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x341bdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_341be0:
    // 0x341be0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x341be0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_341be4:
    // 0x341be4: 0x0  nop
    ctx->pc = 0x341be4u;
    // NOP
label_341be8:
    // 0x341be8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x341be8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_341bec:
    // 0x341bec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x341becu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_341bf0:
    // 0x341bf0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x341bf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_341bf4:
    // 0x341bf4: 0xc0bc284  jal         func_2F0A10
label_341bf8:
    if (ctx->pc == 0x341BF8u) {
        ctx->pc = 0x341BF8u;
            // 0x341bf8: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x341BFCu;
        goto label_341bfc;
    }
    ctx->pc = 0x341BF4u;
    SET_GPR_U32(ctx, 31, 0x341BFCu);
    ctx->pc = 0x341BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341BF4u;
            // 0x341bf8: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341BFCu; }
        if (ctx->pc != 0x341BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341BFCu; }
        if (ctx->pc != 0x341BFCu) { return; }
    }
    ctx->pc = 0x341BFCu;
label_341bfc:
    // 0x341bfc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x341bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_341c00:
    // 0x341c00: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x341c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_341c04:
    // 0x341c04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x341c04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_341c08:
    // 0x341c08: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x341c08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_341c0c:
    // 0x341c0c: 0x320f809  jalr        $t9
label_341c10:
    if (ctx->pc == 0x341C10u) {
        ctx->pc = 0x341C14u;
        goto label_341c14;
    }
    ctx->pc = 0x341C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x341C14u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x341C14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x341C14u; }
            if (ctx->pc != 0x341C14u) { return; }
        }
        }
    }
    ctx->pc = 0x341C14u;
label_341c14:
    // 0x341c14: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x341c14u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_341c18:
    // 0x341c18: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x341c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_341c1c:
    // 0x341c1c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x341c1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_341c20:
    // 0x341c20: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x341c20u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
label_341c24:
    // 0x341c24: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x341c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_341c28:
    // 0x341c28: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x341c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_341c2c:
    // 0x341c2c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x341c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_341c30:
    // 0x341c30: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x341c30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_341c34:
    // 0x341c34: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x341c34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_341c38:
    // 0x341c38: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x341c38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
label_341c3c:
    // 0x341c3c: 0xc0506ac  jal         func_141AB0
label_341c40:
    if (ctx->pc == 0x341C40u) {
        ctx->pc = 0x341C40u;
            // 0x341c40: 0x26312110  addiu       $s1, $s1, 0x2110 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8464));
        ctx->pc = 0x341C44u;
        goto label_341c44;
    }
    ctx->pc = 0x341C3Cu;
    SET_GPR_U32(ctx, 31, 0x341C44u);
    ctx->pc = 0x341C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341C3Cu;
            // 0x341c40: 0x26312110  addiu       $s1, $s1, 0x2110 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341C44u; }
        if (ctx->pc != 0x341C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341C44u; }
        if (ctx->pc != 0x341C44u) { return; }
    }
    ctx->pc = 0x341C44u;
label_341c44:
    // 0x341c44: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x341c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_341c48:
    // 0x341c48: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x341c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_341c4c:
    // 0x341c4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x341c4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_341c50:
    // 0x341c50: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x341c50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_341c54:
    // 0x341c54: 0x320f809  jalr        $t9
label_341c58:
    if (ctx->pc == 0x341C58u) {
        ctx->pc = 0x341C58u;
            // 0x341c58: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x341C5Cu;
        goto label_341c5c;
    }
    ctx->pc = 0x341C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x341C5Cu);
        ctx->pc = 0x341C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x341C54u;
            // 0x341c58: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x341C5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x341C5Cu; }
            if (ctx->pc != 0x341C5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x341C5Cu;
label_341c5c:
    // 0x341c5c: 0x3c0242dc  lui         $v0, 0x42DC
    ctx->pc = 0x341c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17116 << 16));
label_341c60:
    // 0x341c60: 0x3c093f00  lui         $t1, 0x3F00
    ctx->pc = 0x341c60u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16128 << 16));
label_341c64:
    // 0x341c64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_341c68:
    // 0x341c68: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x341c68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
label_341c6c:
    // 0x341c6c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x341c6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_341c70:
    // 0x341c70: 0x2610ad50  addiu       $s0, $s0, -0x52B0
    ctx->pc = 0x341c70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946128));
label_341c74:
    // 0x341c74: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x341c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_341c78:
    // 0x341c78: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x341c78u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_341c7c:
    // 0x341c7c: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x341c7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_341c80:
    // 0x341c80: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x341c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_341c84:
    // 0x341c84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x341c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_341c88:
    // 0x341c88: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x341c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_341c8c:
    // 0x341c8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x341c8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341c90:
    // 0x341c90: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x341c90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
label_341c94:
    // 0x341c94: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x341c94u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_341c98:
    // 0x341c98: 0x24a4823  subu        $t1, $s2, $t2
    ctx->pc = 0x341c98u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
label_341c9c:
    // 0x341c9c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x341c9cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_341ca0:
    // 0x341ca0: 0x0  nop
    ctx->pc = 0x341ca0u;
    // NOP
label_341ca4:
    // 0x341ca4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x341ca4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_341ca8:
    // 0x341ca8: 0x24a4821  addu        $t1, $s2, $t2
    ctx->pc = 0x341ca8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
label_341cac:
    // 0x341cac: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x341cacu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_341cb0:
    // 0x341cb0: 0x0  nop
    ctx->pc = 0x341cb0u;
    // NOP
label_341cb4:
    // 0x341cb4: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x341cb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_341cb8:
    // 0x341cb8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x341cb8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_341cbc:
    // 0x341cbc: 0x0  nop
    ctx->pc = 0x341cbcu;
    // NOP
label_341cc0:
    // 0x341cc0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x341cc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_341cc4:
    // 0x341cc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x341cc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_341cc8:
    // 0x341cc8: 0x0  nop
    ctx->pc = 0x341cc8u;
    // NOP
label_341ccc:
    // 0x341ccc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x341cccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_341cd0:
    // 0x341cd0: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x341cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_341cd4:
    // 0x341cd4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x341cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_341cd8:
    // 0x341cd8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x341cd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_341cdc:
    // 0x341cdc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x341cdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_341ce0:
    // 0x341ce0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x341ce0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_341ce4:
    // 0x341ce4: 0x0  nop
    ctx->pc = 0x341ce4u;
    // NOP
label_341ce8:
    // 0x341ce8: 0x2621823  subu        $v1, $s3, $v0
    ctx->pc = 0x341ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_341cec:
    // 0x341cec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x341cecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_341cf0:
    // 0x341cf0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x341cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_341cf4:
    // 0x341cf4: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x341cf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_341cf8:
    // 0x341cf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341cf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_341cfc:
    // 0x341cfc: 0xc0bc284  jal         func_2F0A10
label_341d00:
    if (ctx->pc == 0x341D00u) {
        ctx->pc = 0x341D00u;
            // 0x341d00: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x341D04u;
        goto label_341d04;
    }
    ctx->pc = 0x341CFCu;
    SET_GPR_U32(ctx, 31, 0x341D04u);
    ctx->pc = 0x341D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341CFCu;
            // 0x341d00: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341D04u; }
        if (ctx->pc != 0x341D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341D04u; }
        if (ctx->pc != 0x341D04u) { return; }
    }
    ctx->pc = 0x341D04u;
label_341d04:
    // 0x341d04: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x341d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_341d08:
    // 0x341d08: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x341d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_341d0c:
    // 0x341d0c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x341d0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_341d10:
    // 0x341d10: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x341d10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_341d14:
    // 0x341d14: 0x320f809  jalr        $t9
label_341d18:
    if (ctx->pc == 0x341D18u) {
        ctx->pc = 0x341D1Cu;
        goto label_341d1c;
    }
    ctx->pc = 0x341D14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x341D1Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x341D1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x341D1Cu; }
            if (ctx->pc != 0x341D1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x341D1Cu;
label_341d1c:
    // 0x341d1c: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x341d1cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_341d20:
    // 0x341d20: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x341d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_341d24:
    // 0x341d24: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x341d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_341d28:
    // 0x341d28: 0x3c170065  lui         $s7, 0x65
    ctx->pc = 0x341d28u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)101 << 16));
label_341d2c:
    // 0x341d2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x341d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_341d30:
    // 0x341d30: 0x3c110065  lui         $s1, 0x65
    ctx->pc = 0x341d30u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)101 << 16));
label_341d34:
    // 0x341d34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x341d34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_341d38:
    // 0x341d38: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x341d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_341d3c:
    // 0x341d3c: 0x8c447c30  lw          $a0, 0x7C30($v0)
    ctx->pc = 0x341d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31792)));
label_341d40:
    // 0x341d40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x341d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341d44:
    // 0x341d44: 0x26f72c70  addiu       $s7, $s7, 0x2C70
    ctx->pc = 0x341d44u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 11376));
label_341d48:
    // 0x341d48: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x341d48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_341d4c:
    // 0x341d4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x341d4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_341d50:
    // 0x341d50: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x341d50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_341d54:
    // 0x341d54: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x341d54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
label_341d58:
    // 0x341d58: 0xc0506ac  jal         func_141AB0
label_341d5c:
    if (ctx->pc == 0x341D5Cu) {
        ctx->pc = 0x341D5Cu;
            // 0x341d5c: 0x26312c60  addiu       $s1, $s1, 0x2C60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 11360));
        ctx->pc = 0x341D60u;
        goto label_341d60;
    }
    ctx->pc = 0x341D58u;
    SET_GPR_U32(ctx, 31, 0x341D60u);
    ctx->pc = 0x341D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341D58u;
            // 0x341d5c: 0x26312c60  addiu       $s1, $s1, 0x2C60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 11360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341D60u; }
        if (ctx->pc != 0x341D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341D60u; }
        if (ctx->pc != 0x341D60u) { return; }
    }
    ctx->pc = 0x341D60u;
label_341d60:
    // 0x341d60: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x341d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_341d64:
    // 0x341d64: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x341d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_341d68:
    // 0x341d68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x341d68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_341d6c:
    // 0x341d6c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x341d6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_341d70:
    // 0x341d70: 0x320f809  jalr        $t9
label_341d74:
    if (ctx->pc == 0x341D74u) {
        ctx->pc = 0x341D74u;
            // 0x341d74: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x341D78u;
        goto label_341d78;
    }
    ctx->pc = 0x341D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x341D78u);
        ctx->pc = 0x341D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x341D70u;
            // 0x341d74: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x341D78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x341D78u; }
            if (ctx->pc != 0x341D78u) { return; }
        }
        }
    }
    ctx->pc = 0x341D78u;
label_341d78:
    // 0x341d78: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x341d78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341d7c:
    // 0x341d7c: 0x27b30098  addiu       $s3, $sp, 0x98
    ctx->pc = 0x341d7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_341d80:
    // 0x341d80: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x341d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_341d84:
    // 0x341d84: 0x16960002  bne         $s4, $s6, . + 4 + (0x2 << 2)
label_341d88:
    if (ctx->pc == 0x341D88u) {
        ctx->pc = 0x341D88u;
            // 0x341d88: 0x344680ff  ori         $a2, $v0, 0x80FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33023);
        ctx->pc = 0x341D8Cu;
        goto label_341d8c;
    }
    ctx->pc = 0x341D84u;
    {
        const bool branch_taken_0x341d84 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 22));
        ctx->pc = 0x341D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x341D84u;
            // 0x341d88: 0x344680ff  ori         $a2, $v0, 0x80FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33023);
        ctx->in_delay_slot = false;
        if (branch_taken_0x341d84) {
            ctx->pc = 0x341D90u;
            goto label_341d90;
        }
    }
    ctx->pc = 0x341D8Cu;
label_341d8c:
    // 0x341d8c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x341d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_341d90:
    // 0x341d90: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x341d90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_341d94:
    // 0x341d94: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x341d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_341d98:
    // 0x341d98: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x341d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_341d9c:
    // 0x341d9c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x341d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_341da0:
    // 0x341da0: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x341da0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_341da4:
    // 0x341da4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x341da4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_341da8:
    // 0x341da8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x341da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_341dac:
    // 0x341dac: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x341dacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_341db0:
    // 0x341db0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x341db0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_341db4:
    // 0x341db4: 0x2e48021  addu        $s0, $s7, $a0
    ctx->pc = 0x341db4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
label_341db8:
    // 0x341db8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x341db8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341dbc:
    // 0x341dbc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x341dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_341dc0:
    // 0x341dc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x341dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_341dc4:
    // 0x341dc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x341dc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_341dc8:
    // 0x341dc8: 0x0  nop
    ctx->pc = 0x341dc8u;
    // NOP
label_341dcc:
    // 0x341dcc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x341dccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_341dd0:
    // 0x341dd0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x341dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_341dd4:
    // 0x341dd4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x341dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_341dd8:
    // 0x341dd8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x341dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_341ddc:
    // 0x341ddc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x341ddcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_341de0:
    // 0x341de0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x341de0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_341de4:
    // 0x341de4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x341de4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_341de8:
    // 0x341de8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x341de8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_341dec:
    // 0x341dec: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x341decu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_341df0:
    // 0x341df0: 0x0  nop
    ctx->pc = 0x341df0u;
    // NOP
label_341df4:
    // 0x341df4: 0x2431023  subu        $v0, $s2, $v1
    ctx->pc = 0x341df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_341df8:
    // 0x341df8: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x341df8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_341dfc:
    // 0x341dfc: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x341dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_341e00:
    // 0x341e00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_341e04:
    // 0x341e04: 0x2a94023  subu        $t0, $s5, $t1
    ctx->pc = 0x341e04u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
label_341e08:
    // 0x341e08: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x341e08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_341e0c:
    // 0x341e0c: 0x2a91021  addu        $v0, $s5, $t1
    ctx->pc = 0x341e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
label_341e10:
    // 0x341e10: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x341e10u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_341e14:
    // 0x341e14: 0x0  nop
    ctx->pc = 0x341e14u;
    // NOP
label_341e18:
    // 0x341e18: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x341e18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_341e1c:
    // 0x341e1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x341e1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_341e20:
    // 0x341e20: 0x0  nop
    ctx->pc = 0x341e20u;
    // NOP
label_341e24:
    // 0x341e24: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x341e24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_341e28:
    // 0x341e28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_341e2c:
    // 0x341e2c: 0xc0bc284  jal         func_2F0A10
label_341e30:
    if (ctx->pc == 0x341E30u) {
        ctx->pc = 0x341E30u;
            // 0x341e30: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x341E34u;
        goto label_341e34;
    }
    ctx->pc = 0x341E2Cu;
    SET_GPR_U32(ctx, 31, 0x341E34u);
    ctx->pc = 0x341E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341E2Cu;
            // 0x341e30: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341E34u; }
        if (ctx->pc != 0x341E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341E34u; }
        if (ctx->pc != 0x341E34u) { return; }
    }
    ctx->pc = 0x341E34u;
label_341e34:
    // 0x341e34: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x341e34u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_341e38:
    // 0x341e38: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x341e38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_341e3c:
    // 0x341e3c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x341e3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_341e40:
    // 0x341e40: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x341e40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_341e44:
    // 0x341e44: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x341e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_341e48:
    // 0x341e48: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x341e48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_341e4c:
    // 0x341e4c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x341e4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_341e50:
    // 0x341e50: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x341e50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
label_341e54:
    // 0x341e54: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
label_341e58:
    if (ctx->pc == 0x341E58u) {
        ctx->pc = 0x341E58u;
            // 0x341e58: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x341E5Cu;
        goto label_341e5c;
    }
    ctx->pc = 0x341E54u;
    {
        const bool branch_taken_0x341e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x341E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x341E54u;
            // 0x341e58: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341e54) {
            ctx->pc = 0x341D80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_341d80;
        }
    }
    ctx->pc = 0x341E5Cu;
label_341e5c:
    // 0x341e5c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x341e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_341e60:
    // 0x341e60: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x341e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_341e64:
    // 0x341e64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x341e64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_341e68:
    // 0x341e68: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x341e68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_341e6c:
    // 0x341e6c: 0x320f809  jalr        $t9
label_341e70:
    if (ctx->pc == 0x341E70u) {
        ctx->pc = 0x341E74u;
        goto label_341e74;
    }
    ctx->pc = 0x341E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x341E74u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x341E74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x341E74u; }
            if (ctx->pc != 0x341E74u) { return; }
        }
        }
    }
    ctx->pc = 0x341E74u;
label_341e74:
    // 0x341e74: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x341e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_341e78:
    // 0x341e78: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x341e78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_341e7c:
    // 0x341e7c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x341e7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_341e80:
    // 0x341e80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x341e80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_341e84:
    // 0x341e84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x341e84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_341e88:
    // 0x341e88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x341e88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_341e8c:
    // 0x341e8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x341e8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_341e90:
    // 0x341e90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x341e90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_341e94:
    // 0x341e94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x341e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_341e98:
    // 0x341e98: 0x3e00008  jr          $ra
label_341e9c:
    if (ctx->pc == 0x341E9Cu) {
        ctx->pc = 0x341E9Cu;
            // 0x341e9c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x341EA0u;
        goto label_341ea0;
    }
    ctx->pc = 0x341E98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x341E98u;
            // 0x341e9c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x341EA0u;
label_341ea0:
    // 0x341ea0: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x341ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_341ea4:
    // 0x341ea4: 0x80d068c  j           func_341A30
label_341ea8:
    if (ctx->pc == 0x341EA8u) {
        ctx->pc = 0x341EA8u;
            // 0x341ea8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x341EACu;
        goto label_341eac;
    }
    ctx->pc = 0x341EA4u;
    ctx->pc = 0x341EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341EA4u;
            // 0x341ea8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x341A30u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_341a30;
    ctx->pc = 0x341EACu;
label_341eac:
    // 0x341eac: 0x0  nop
    ctx->pc = 0x341eacu;
    // NOP
label_341eb0:
    // 0x341eb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x341eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_341eb4:
    // 0x341eb4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x341eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_341eb8:
    // 0x341eb8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x341eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_341ebc:
    // 0x341ebc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x341ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_341ec0:
    // 0x341ec0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x341ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_341ec4:
    // 0x341ec4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x341ec4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_341ec8:
    // 0x341ec8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x341ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_341ecc:
    // 0x341ecc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x341eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_341ed0:
    // 0x341ed0: 0x8c708a08  lw          $s0, -0x75F8($v1)
    ctx->pc = 0x341ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_341ed4:
    // 0x341ed4: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x341ed4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_341ed8:
    // 0x341ed8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x341ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_341edc:
    // 0x341edc: 0x8c7189e8  lw          $s1, -0x7618($v1)
    ctx->pc = 0x341edcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937064)));
label_341ee0:
    // 0x341ee0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x341ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_341ee4:
    // 0x341ee4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_341ee8:
    if (ctx->pc == 0x341EE8u) {
        ctx->pc = 0x341EE8u;
            // 0x341ee8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x341EECu;
        goto label_341eec;
    }
    ctx->pc = 0x341EE4u;
    {
        const bool branch_taken_0x341ee4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x341EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x341EE4u;
            // 0x341ee8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341ee4) {
            ctx->pc = 0x341EF4u;
            goto label_341ef4;
        }
    }
    ctx->pc = 0x341EECu;
label_341eec:
    // 0x341eec: 0x1000000f  b           . + 4 + (0xF << 2)
label_341ef0:
    if (ctx->pc == 0x341EF0u) {
        ctx->pc = 0x341EF0u;
            // 0x341ef0: 0x3c040100  lui         $a0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
        ctx->pc = 0x341EF4u;
        goto label_341ef4;
    }
    ctx->pc = 0x341EECu;
    {
        const bool branch_taken_0x341eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x341EECu;
            // 0x341ef0: 0x3c040100  lui         $a0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341eec) {
            ctx->pc = 0x341F2Cu;
            goto label_341f2c;
        }
    }
    ctx->pc = 0x341EF4u;
label_341ef4:
    // 0x341ef4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x341ef4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_341ef8:
    // 0x341ef8: 0x8f390064  lw          $t9, 0x64($t9)
    ctx->pc = 0x341ef8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 100)));
label_341efc:
    // 0x341efc: 0x320f809  jalr        $t9
label_341f00:
    if (ctx->pc == 0x341F00u) {
        ctx->pc = 0x341F00u;
            // 0x341f00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x341F04u;
        goto label_341f04;
    }
    ctx->pc = 0x341EFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x341F04u);
        ctx->pc = 0x341F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x341EFCu;
            // 0x341f00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x341F04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x341F04u; }
            if (ctx->pc != 0x341F04u) { return; }
        }
        }
    }
    ctx->pc = 0x341F04u;
label_341f04:
    // 0x341f04: 0xc0746e4  jal         func_1D1B90
label_341f08:
    if (ctx->pc == 0x341F08u) {
        ctx->pc = 0x341F08u;
            // 0x341f08: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x341F0Cu;
        goto label_341f0c;
    }
    ctx->pc = 0x341F04u;
    SET_GPR_U32(ctx, 31, 0x341F0Cu);
    ctx->pc = 0x341F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341F04u;
            // 0x341f08: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1B90u;
    if (runtime->hasFunction(0x1D1B90u)) {
        auto targetFn = runtime->lookupFunction(0x1D1B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341F0Cu; }
        if (ctx->pc != 0x341F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1B90_0x1d1b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341F0Cu; }
        if (ctx->pc != 0x341F0Cu) { return; }
    }
    ctx->pc = 0x341F0Cu;
label_341f0c:
    // 0x341f0c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x341f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_341f10:
    // 0x341f10: 0xc073234  jal         func_1CC8D0
label_341f14:
    if (ctx->pc == 0x341F14u) {
        ctx->pc = 0x341F14u;
            // 0x341f14: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x341F18u;
        goto label_341f18;
    }
    ctx->pc = 0x341F10u;
    SET_GPR_U32(ctx, 31, 0x341F18u);
    ctx->pc = 0x341F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341F10u;
            // 0x341f14: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341F18u; }
        if (ctx->pc != 0x341F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341F18u; }
        if (ctx->pc != 0x341F18u) { return; }
    }
    ctx->pc = 0x341F18u;
label_341f18:
    // 0x341f18: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x341f18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_341f1c:
    // 0x341f1c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x341f1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_341f20:
    // 0x341f20: 0x320f809  jalr        $t9
label_341f24:
    if (ctx->pc == 0x341F24u) {
        ctx->pc = 0x341F24u;
            // 0x341f24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x341F28u;
        goto label_341f28;
    }
    ctx->pc = 0x341F20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x341F28u);
        ctx->pc = 0x341F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x341F20u;
            // 0x341f24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x341F28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x341F28u; }
            if (ctx->pc != 0x341F28u) { return; }
        }
        }
    }
    ctx->pc = 0x341F28u;
label_341f28:
    // 0x341f28: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x341f28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_341f2c:
    // 0x341f2c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x341f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_341f30:
    // 0x341f30: 0x34880010  ori         $t0, $a0, 0x10
    ctx->pc = 0x341f30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
label_341f34:
    // 0x341f34: 0x92650054  lbu         $a1, 0x54($s3)
    ctx->pc = 0x341f34u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 84)));
label_341f38:
    // 0x341f38: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x341f38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
label_341f3c:
    // 0x341f3c: 0x2463976c  addiu       $v1, $v1, -0x6894
    ctx->pc = 0x341f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940524));
label_341f40:
    // 0x341f40: 0x34870020  ori         $a3, $a0, 0x20
    ctx->pc = 0x341f40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
label_341f44:
    // 0x341f44: 0x8e660058  lw          $a2, 0x58($s3)
    ctx->pc = 0x341f44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_341f48:
    // 0x341f48: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x341f48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_341f4c:
    // 0x341f4c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x341f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_341f50:
    // 0x341f50: 0x44900  sll         $t1, $a0, 4
    ctx->pc = 0x341f50u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_341f54:
    // 0x341f54: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x341f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_341f58:
    // 0x341f58: 0x694821  addu        $t1, $v1, $t1
    ctx->pc = 0x341f58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_341f5c:
    // 0x341f5c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x341f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_341f60:
    // 0x341f60: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x341f60u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_341f64:
    // 0x341f64: 0x1284024  and         $t0, $t1, $t0
    ctx->pc = 0x341f64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
label_341f68:
    // 0x341f68: 0x8402b  sltu        $t0, $zero, $t0
    ctx->pc = 0x341f68u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_341f6c:
    // 0x341f6c: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x341f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_341f70:
    // 0x341f70: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x341f70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_341f74:
    // 0x341f74: 0x92680054  lbu         $t0, 0x54($s3)
    ctx->pc = 0x341f74u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 84)));
label_341f78:
    // 0x341f78: 0x8e660058  lw          $a2, 0x58($s3)
    ctx->pc = 0x341f78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_341f7c:
    // 0x341f7c: 0x82840  sll         $a1, $t0, 1
    ctx->pc = 0x341f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_341f80:
    // 0x341f80: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x341f80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_341f84:
    // 0x341f84: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x341f84u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_341f88:
    // 0x341f88: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x341f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_341f8c:
    // 0x341f8c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x341f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_341f90:
    // 0x341f90: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x341f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_341f94:
    // 0x341f94: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x341f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_341f98:
    // 0x341f98: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x341f98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_341f9c:
    // 0x341f9c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x341f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_341fa0:
    // 0x341fa0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x341fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_341fa4:
    // 0x341fa4: 0x8c830938  lw          $v1, 0x938($a0)
    ctx->pc = 0x341fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2360)));
label_341fa8:
    // 0x341fa8: 0x8e650058  lw          $a1, 0x58($s3)
    ctx->pc = 0x341fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_341fac:
    // 0x341fac: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x341facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_341fb0:
    // 0x341fb0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x341fb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_341fb4:
    // 0x341fb4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_341fb8:
    if (ctx->pc == 0x341FB8u) {
        ctx->pc = 0x341FBCu;
        goto label_341fbc;
    }
    ctx->pc = 0x341FB4u;
    {
        const bool branch_taken_0x341fb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x341fb4) {
            ctx->pc = 0x341FC4u;
            goto label_341fc4;
        }
    }
    ctx->pc = 0x341FBCu;
label_341fbc:
    // 0x341fbc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x341fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_341fc0:
    // 0x341fc0: 0x8c640940  lw          $a0, 0x940($v1)
    ctx->pc = 0x341fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2368)));
label_341fc4:
    // 0x341fc4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x341fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_341fc8:
    // 0x341fc8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x341fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_341fcc:
    // 0x341fcc: 0x8c630940  lw          $v1, 0x940($v1)
    ctx->pc = 0x341fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2368)));
label_341fd0:
    // 0x341fd0: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x341fd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_341fd4:
    // 0x341fd4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_341fd8:
    if (ctx->pc == 0x341FD8u) {
        ctx->pc = 0x341FDCu;
        goto label_341fdc;
    }
    ctx->pc = 0x341FD4u;
    {
        const bool branch_taken_0x341fd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x341fd4) {
            ctx->pc = 0x341FE4u;
            goto label_341fe4;
        }
    }
    ctx->pc = 0x341FDCu;
label_341fdc:
    // 0x341fdc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x341fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_341fe0:
    // 0x341fe0: 0x8c640938  lw          $a0, 0x938($v1)
    ctx->pc = 0x341fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2360)));
label_341fe4:
    // 0x341fe4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x341fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_341fe8:
    // 0x341fe8: 0x3c030300  lui         $v1, 0x300
    ctx->pc = 0x341fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)768 << 16));
label_341fec:
    // 0x341fec: 0x92660054  lbu         $a2, 0x54($s3)
    ctx->pc = 0x341fecu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 84)));
label_341ff0:
    // 0x341ff0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x341ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_341ff4:
    // 0x341ff4: 0x2484976c  addiu       $a0, $a0, -0x6894
    ctx->pc = 0x341ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940524));
label_341ff8:
    // 0x341ff8: 0x34630030  ori         $v1, $v1, 0x30
    ctx->pc = 0x341ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48);
label_341ffc:
    // 0x341ffc: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x341ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_342000:
    // 0x342000: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x342000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_342004:
    // 0x342004: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x342004u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_342008:
    // 0x342008: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x342008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_34200c:
    // 0x34200c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x34200cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_342010:
    // 0x342010: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x342010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_342014:
    // 0x342014: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_342018:
    if (ctx->pc == 0x342018u) {
        ctx->pc = 0x342018u;
            // 0x342018: 0x92650054  lbu         $a1, 0x54($s3) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->pc = 0x34201Cu;
        goto label_34201c;
    }
    ctx->pc = 0x342014u;
    {
        const bool branch_taken_0x342014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x342014) {
            ctx->pc = 0x342018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x342014u;
            // 0x342018: 0x92650054  lbu         $a1, 0x54($s3) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x342028u;
            goto label_342028;
        }
    }
    ctx->pc = 0x34201Cu;
label_34201c:
    // 0x34201c: 0xc073234  jal         func_1CC8D0
label_342020:
    if (ctx->pc == 0x342020u) {
        ctx->pc = 0x342020u;
            // 0x342020: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->pc = 0x342024u;
        goto label_342024;
    }
    ctx->pc = 0x34201Cu;
    SET_GPR_U32(ctx, 31, 0x342024u);
    ctx->pc = 0x342020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34201Cu;
            // 0x342020: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342024u; }
        if (ctx->pc != 0x342024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342024u; }
        if (ctx->pc != 0x342024u) { return; }
    }
    ctx->pc = 0x342024u;
label_342024:
    // 0x342024: 0x92650054  lbu         $a1, 0x54($s3)
    ctx->pc = 0x342024u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 84)));
label_342028:
    // 0x342028: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x342028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_34202c:
    // 0x34202c: 0x24639764  addiu       $v1, $v1, -0x689C
    ctx->pc = 0x34202cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940516));
label_342030:
    // 0x342030: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x342030u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_342034:
    // 0x342034: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x342034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_342038:
    // 0x342038: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x342038u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_34203c:
    // 0x34203c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34203cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_342040:
    // 0x342040: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x342040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_342044:
    // 0x342044: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x342044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_342048:
    // 0x342048: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_34204c:
    if (ctx->pc == 0x34204Cu) {
        ctx->pc = 0x342050u;
        goto label_342050;
    }
    ctx->pc = 0x342048u;
    {
        const bool branch_taken_0x342048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x342048) {
            ctx->pc = 0x342054u;
            goto label_342054;
        }
    }
    ctx->pc = 0x342050u;
label_342050:
    // 0x342050: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x342050u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_342054:
    // 0x342054: 0x52400011  beql        $s2, $zero, . + 4 + (0x11 << 2)
label_342058:
    if (ctx->pc == 0x342058u) {
        ctx->pc = 0x342058u;
            // 0x342058: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x34205Cu;
        goto label_34205c;
    }
    ctx->pc = 0x342054u;
    {
        const bool branch_taken_0x342054 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x342054) {
            ctx->pc = 0x342058u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x342054u;
            // 0x342058: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34209Cu;
            goto label_34209c;
        }
    }
    ctx->pc = 0x34205Cu;
label_34205c:
    // 0x34205c: 0xa2000082  sb          $zero, 0x82($s0)
    ctx->pc = 0x34205cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 130), (uint8_t)GPR_U32(ctx, 0));
label_342060:
    // 0x342060: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x342060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_342064:
    // 0x342064: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x342064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_342068:
    // 0x342068: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x342068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_34206c:
    // 0x34206c: 0xc057b7c  jal         func_15EDF0
label_342070:
    if (ctx->pc == 0x342070u) {
        ctx->pc = 0x342070u;
            // 0x342070: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x342074u;
        goto label_342074;
    }
    ctx->pc = 0x34206Cu;
    SET_GPR_U32(ctx, 31, 0x342074u);
    ctx->pc = 0x342070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34206Cu;
            // 0x342070: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342074u; }
        if (ctx->pc != 0x342074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342074u; }
        if (ctx->pc != 0x342074u) { return; }
    }
    ctx->pc = 0x342074u;
label_342074:
    // 0x342074: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x342074u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_342078:
    // 0x342078: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x342078u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_34207c:
    // 0x34207c: 0x320f809  jalr        $t9
label_342080:
    if (ctx->pc == 0x342080u) {
        ctx->pc = 0x342080u;
            // 0x342080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x342084u;
        goto label_342084;
    }
    ctx->pc = 0x34207Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x342084u);
        ctx->pc = 0x342080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34207Cu;
            // 0x342080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x342084u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x342084u; }
            if (ctx->pc != 0x342084u) { return; }
        }
        }
    }
    ctx->pc = 0x342084u;
label_342084:
    // 0x342084: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x342084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_342088:
    // 0x342088: 0xc073234  jal         func_1CC8D0
label_34208c:
    if (ctx->pc == 0x34208Cu) {
        ctx->pc = 0x34208Cu;
            // 0x34208c: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x342090u;
        goto label_342090;
    }
    ctx->pc = 0x342088u;
    SET_GPR_U32(ctx, 31, 0x342090u);
    ctx->pc = 0x34208Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x342088u;
            // 0x34208c: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342090u; }
        if (ctx->pc != 0x342090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342090u; }
        if (ctx->pc != 0x342090u) { return; }
    }
    ctx->pc = 0x342090u;
label_342090:
    // 0x342090: 0xc074708  jal         func_1D1C20
label_342094:
    if (ctx->pc == 0x342094u) {
        ctx->pc = 0x342094u;
            // 0x342094: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x342098u;
        goto label_342098;
    }
    ctx->pc = 0x342090u;
    SET_GPR_U32(ctx, 31, 0x342098u);
    ctx->pc = 0x342094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x342090u;
            // 0x342094: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C20u;
    if (runtime->hasFunction(0x1D1C20u)) {
        auto targetFn = runtime->lookupFunction(0x1D1C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342098u; }
        if (ctx->pc != 0x342098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1C20_0x1d1c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342098u; }
        if (ctx->pc != 0x342098u) { return; }
    }
    ctx->pc = 0x342098u;
label_342098:
    // 0x342098: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x342098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_34209c:
    // 0x34209c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34209cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3420a0:
    // 0x3420a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3420a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3420a4:
    // 0x3420a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3420a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3420a8:
    // 0x3420a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3420a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3420ac:
    // 0x3420ac: 0x3e00008  jr          $ra
label_3420b0:
    if (ctx->pc == 0x3420B0u) {
        ctx->pc = 0x3420B0u;
            // 0x3420b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3420B4u;
        goto label_3420b4;
    }
    ctx->pc = 0x3420ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3420B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3420ACu;
            // 0x3420b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3420B4u;
label_3420b4:
    // 0x3420b4: 0x0  nop
    ctx->pc = 0x3420b4u;
    // NOP
label_3420b8:
    // 0x3420b8: 0x0  nop
    ctx->pc = 0x3420b8u;
    // NOP
label_3420bc:
    // 0x3420bc: 0x0  nop
    ctx->pc = 0x3420bcu;
    // NOP
label_3420c0:
    // 0x3420c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3420c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3420c4:
    // 0x3420c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3420c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3420c8:
    // 0x3420c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3420c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3420cc:
    // 0x3420cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3420ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3420d0:
    // 0x3420d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3420d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3420d4:
    // 0x3420d4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_3420d8:
    if (ctx->pc == 0x3420D8u) {
        ctx->pc = 0x3420D8u;
            // 0x3420d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3420DCu;
        goto label_3420dc;
    }
    ctx->pc = 0x3420D4u;
    {
        const bool branch_taken_0x3420d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3420D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3420D4u;
            // 0x3420d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3420d4) {
            ctx->pc = 0x342118u;
            goto label_342118;
        }
    }
    ctx->pc = 0x3420DCu;
label_3420dc:
    // 0x3420dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3420dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3420e0:
    // 0x3420e0: 0x24425680  addiu       $v0, $v0, 0x5680
    ctx->pc = 0x3420e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22144));
label_3420e4:
    // 0x3420e4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_3420e8:
    if (ctx->pc == 0x3420E8u) {
        ctx->pc = 0x3420E8u;
            // 0x3420e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3420ECu;
        goto label_3420ec;
    }
    ctx->pc = 0x3420E4u;
    {
        const bool branch_taken_0x3420e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3420E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3420E4u;
            // 0x3420e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3420e4) {
            ctx->pc = 0x342100u;
            goto label_342100;
        }
    }
    ctx->pc = 0x3420ECu;
label_3420ec:
    // 0x3420ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3420ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3420f0:
    // 0x3420f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3420f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3420f4:
    // 0x3420f4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x3420f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_3420f8:
    // 0x3420f8: 0xc057a68  jal         func_15E9A0
label_3420fc:
    if (ctx->pc == 0x3420FCu) {
        ctx->pc = 0x3420FCu;
            // 0x3420fc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x342100u;
        goto label_342100;
    }
    ctx->pc = 0x3420F8u;
    SET_GPR_U32(ctx, 31, 0x342100u);
    ctx->pc = 0x3420FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3420F8u;
            // 0x3420fc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342100u; }
        if (ctx->pc != 0x342100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342100u; }
        if (ctx->pc != 0x342100u) { return; }
    }
    ctx->pc = 0x342100u;
label_342100:
    // 0x342100: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x342100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_342104:
    // 0x342104: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x342104u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_342108:
    // 0x342108: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_34210c:
    if (ctx->pc == 0x34210Cu) {
        ctx->pc = 0x34210Cu;
            // 0x34210c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x342110u;
        goto label_342110;
    }
    ctx->pc = 0x342108u;
    {
        const bool branch_taken_0x342108 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x342108) {
            ctx->pc = 0x34210Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x342108u;
            // 0x34210c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34211Cu;
            goto label_34211c;
        }
    }
    ctx->pc = 0x342110u;
label_342110:
    // 0x342110: 0xc0400a8  jal         func_1002A0
label_342114:
    if (ctx->pc == 0x342114u) {
        ctx->pc = 0x342114u;
            // 0x342114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x342118u;
        goto label_342118;
    }
    ctx->pc = 0x342110u;
    SET_GPR_U32(ctx, 31, 0x342118u);
    ctx->pc = 0x342114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x342110u;
            // 0x342114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342118u; }
        if (ctx->pc != 0x342118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342118u; }
        if (ctx->pc != 0x342118u) { return; }
    }
    ctx->pc = 0x342118u;
label_342118:
    // 0x342118: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x342118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34211c:
    // 0x34211c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34211cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_342120:
    // 0x342120: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x342120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_342124:
    // 0x342124: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x342124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_342128:
    // 0x342128: 0x3e00008  jr          $ra
label_34212c:
    if (ctx->pc == 0x34212Cu) {
        ctx->pc = 0x34212Cu;
            // 0x34212c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x342130u;
        goto label_342130;
    }
    ctx->pc = 0x342128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34212Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342128u;
            // 0x34212c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x342130u;
label_342130:
    // 0x342130: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x342130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_342134:
    // 0x342134: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x342134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_342138:
    // 0x342138: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x342138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_34213c:
    // 0x34213c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x34213cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_342140:
    // 0x342140: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x342140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_342144:
    // 0x342144: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x342144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_342148:
    // 0x342148: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x342148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_34214c:
    // 0x34214c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34214cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_342150:
    // 0x342150: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x342150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_342154:
    // 0x342154: 0x8c480e80  lw          $t0, 0xE80($v0)
    ctx->pc = 0x342154u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_342158:
    // 0x342158: 0x91020c76  lbu         $v0, 0xC76($t0)
    ctx->pc = 0x342158u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3190)));
label_34215c:
    // 0x34215c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_342160:
    if (ctx->pc == 0x342160u) {
        ctx->pc = 0x342160u;
            // 0x342160: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x342164u;
        goto label_342164;
    }
    ctx->pc = 0x34215Cu;
    {
        const bool branch_taken_0x34215c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34215Cu;
            // 0x342160: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34215c) {
            ctx->pc = 0x342174u;
            goto label_342174;
        }
    }
    ctx->pc = 0x342164u;
label_342164:
    // 0x342164: 0xc0d0e3c  jal         func_3438F0
label_342168:
    if (ctx->pc == 0x342168u) {
        ctx->pc = 0x34216Cu;
        goto label_34216c;
    }
    ctx->pc = 0x342164u;
    SET_GPR_U32(ctx, 31, 0x34216Cu);
    ctx->pc = 0x3438F0u;
    if (runtime->hasFunction(0x3438F0u)) {
        auto targetFn = runtime->lookupFunction(0x3438F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34216Cu; }
        if (ctx->pc != 0x34216Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003438F0_0x3438f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34216Cu; }
        if (ctx->pc != 0x34216Cu) { return; }
    }
    ctx->pc = 0x34216Cu;
label_34216c:
    // 0x34216c: 0x1000008b  b           . + 4 + (0x8B << 2)
label_342170:
    if (ctx->pc == 0x342170u) {
        ctx->pc = 0x342170u;
            // 0x342170: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x342174u;
        goto label_342174;
    }
    ctx->pc = 0x34216Cu;
    {
        const bool branch_taken_0x34216c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34216Cu;
            // 0x342170: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34216c) {
            ctx->pc = 0x34239Cu;
            goto label_34239c;
        }
    }
    ctx->pc = 0x342174u;
label_342174:
    // 0x342174: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x342174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_342178:
    // 0x342178: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x342178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_34217c:
    // 0x34217c: 0x90460d78  lbu         $a2, 0xD78($v0)
    ctx->pc = 0x34217cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3448)));
label_342180:
    // 0x342180: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x342180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342184:
    // 0x342184: 0x8c678a08  lw          $a3, -0x75F8($v1)
    ctx->pc = 0x342184u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_342188:
    // 0x342188: 0x26350054  addiu       $s5, $s1, 0x54
    ctx->pc = 0x342188u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_34218c:
    // 0x34218c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34218cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_342190:
    // 0x342190: 0xa3a6007c  sb          $a2, 0x7C($sp)
    ctx->pc = 0x342190u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 124), (uint8_t)GPR_U32(ctx, 6));
label_342194:
    // 0x342194: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x342194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_342198:
    // 0x342198: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x342198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_34219c:
    // 0x34219c: 0x90650d79  lbu         $a1, 0xD79($v1)
    ctx->pc = 0x34219cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3449)));
label_3421a0:
    // 0x3421a0: 0x80f2007a  lb          $s2, 0x7A($a3)
    ctx->pc = 0x3421a0u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 122)));
label_3421a4:
    // 0x3421a4: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x3421a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_3421a8:
    // 0x3421a8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3421a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3421ac:
    // 0x3421ac: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_3421b0:
    if (ctx->pc == 0x3421B0u) {
        ctx->pc = 0x3421B0u;
            // 0x3421b0: 0xa3a5007d  sb          $a1, 0x7D($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 125), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x3421B4u;
        goto label_3421b4;
    }
    ctx->pc = 0x3421ACu;
    {
        const bool branch_taken_0x3421ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3421B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3421ACu;
            // 0x3421b0: 0xa3a5007d  sb          $a1, 0x7D($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 125), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3421ac) {
            ctx->pc = 0x3421D4u;
            goto label_3421d4;
        }
    }
    ctx->pc = 0x3421B4u;
label_3421b4:
    // 0x3421b4: 0x8d020cb4  lw          $v0, 0xCB4($t0)
    ctx->pc = 0x3421b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 3252)));
label_3421b8:
    // 0x3421b8: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x3421b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_3421bc:
    // 0x3421bc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_3421c0:
    if (ctx->pc == 0x3421C0u) {
        ctx->pc = 0x3421C4u;
        goto label_3421c4;
    }
    ctx->pc = 0x3421BCu;
    {
        const bool branch_taken_0x3421bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3421bc) {
            ctx->pc = 0x3421D4u;
            goto label_3421d4;
        }
    }
    ctx->pc = 0x3421C4u;
label_3421c4:
    // 0x3421c4: 0xc0d0e3c  jal         func_3438F0
label_3421c8:
    if (ctx->pc == 0x3421C8u) {
        ctx->pc = 0x3421CCu;
        goto label_3421cc;
    }
    ctx->pc = 0x3421C4u;
    SET_GPR_U32(ctx, 31, 0x3421CCu);
    ctx->pc = 0x3438F0u;
    if (runtime->hasFunction(0x3438F0u)) {
        auto targetFn = runtime->lookupFunction(0x3438F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3421CCu; }
        if (ctx->pc != 0x3421CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003438F0_0x3438f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3421CCu; }
        if (ctx->pc != 0x3421CCu) { return; }
    }
    ctx->pc = 0x3421CCu;
label_3421cc:
    // 0x3421cc: 0x10000072  b           . + 4 + (0x72 << 2)
label_3421d0:
    if (ctx->pc == 0x3421D0u) {
        ctx->pc = 0x3421D4u;
        goto label_3421d4;
    }
    ctx->pc = 0x3421CCu;
    {
        const bool branch_taken_0x3421cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3421cc) {
            ctx->pc = 0x342398u;
            goto label_342398;
        }
    }
    ctx->pc = 0x3421D4u;
label_3421d4:
    // 0x3421d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3421d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3421d8:
    // 0x3421d8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3421d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3421dc:
    // 0x3421dc: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x3421dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
label_3421e0:
    // 0x3421e0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3421e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3421e4:
    // 0x3421e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3421e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3421e8:
    // 0x3421e8: 0x8c740004  lw          $s4, 0x4($v1)
    ctx->pc = 0x3421e8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3421ec:
    // 0x3421ec: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x3421ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_3421f0:
    // 0x3421f0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3421f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3421f4:
    // 0x3421f4: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x3421f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_3421f8:
    // 0x3421f8: 0x1443002d  bne         $v0, $v1, . + 4 + (0x2D << 2)
label_3421fc:
    if (ctx->pc == 0x3421FCu) {
        ctx->pc = 0x342200u;
        goto label_342200;
    }
    ctx->pc = 0x3421F8u;
    {
        const bool branch_taken_0x3421f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3421f8) {
            ctx->pc = 0x3422B0u;
            goto label_3422b0;
        }
    }
    ctx->pc = 0x342200u;
label_342200:
    // 0x342200: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x342200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_342204:
    // 0x342204: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x342204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_342208:
    // 0x342208: 0x8c530e80  lw          $s3, 0xE80($v0)
    ctx->pc = 0x342208u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_34220c:
    // 0x34220c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x34220cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_342210:
    // 0x342210: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x342210u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_342214:
    // 0x342214: 0x320f809  jalr        $t9
label_342218:
    if (ctx->pc == 0x342218u) {
        ctx->pc = 0x342218u;
            // 0x342218: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34221Cu;
        goto label_34221c;
    }
    ctx->pc = 0x342214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34221Cu);
        ctx->pc = 0x342218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342214u;
            // 0x342218: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34221Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34221Cu; }
            if (ctx->pc != 0x34221Cu) { return; }
        }
        }
    }
    ctx->pc = 0x34221Cu;
label_34221c:
    // 0x34221c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x34221cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_342220:
    // 0x342220: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x342220u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_342224:
    // 0x342224: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x342224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_342228:
    // 0x342228: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x342228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_34222c:
    // 0x34222c: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x34222cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
label_342230:
    // 0x342230: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x342230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_342234:
    // 0x342234: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x342234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_342238:
    // 0x342238: 0x8c540004  lw          $s4, 0x4($v0)
    ctx->pc = 0x342238u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_34223c:
    // 0x34223c: 0x320f809  jalr        $t9
label_342240:
    if (ctx->pc == 0x342240u) {
        ctx->pc = 0x342240u;
            // 0x342240: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x342244u;
        goto label_342244;
    }
    ctx->pc = 0x34223Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x342244u);
        ctx->pc = 0x342240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34223Cu;
            // 0x342240: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x342244u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x342244u; }
            if (ctx->pc != 0x342244u) { return; }
        }
        }
    }
    ctx->pc = 0x342244u;
label_342244:
    // 0x342244: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x342244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_342248:
    // 0x342248: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x342248u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_34224c:
    // 0x34224c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x34224cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_342250:
    // 0x342250: 0x24550054  addiu       $s5, $v0, 0x54
    ctx->pc = 0x342250u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
label_342254:
    // 0x342254: 0x8e820e38  lw          $v0, 0xE38($s4)
    ctx->pc = 0x342254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3640)));
label_342258:
    // 0x342258: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_34225c:
    if (ctx->pc == 0x34225Cu) {
        ctx->pc = 0x34225Cu;
            // 0x34225c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x342260u;
        goto label_342260;
    }
    ctx->pc = 0x342258u;
    {
        const bool branch_taken_0x342258 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34225Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342258u;
            // 0x34225c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342258) {
            ctx->pc = 0x342270u;
            goto label_342270;
        }
    }
    ctx->pc = 0x342260u;
label_342260:
    // 0x342260: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x342260u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_342264:
    // 0x342264: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_342268:
    if (ctx->pc == 0x342268u) {
        ctx->pc = 0x34226Cu;
        goto label_34226c;
    }
    ctx->pc = 0x342264u;
    {
        const bool branch_taken_0x342264 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x342264) {
            ctx->pc = 0x342270u;
            goto label_342270;
        }
    }
    ctx->pc = 0x34226Cu;
label_34226c:
    // 0x34226c: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x34226cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_342270:
    // 0x342270: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_342274:
    if (ctx->pc == 0x342274u) {
        ctx->pc = 0x342278u;
        goto label_342278;
    }
    ctx->pc = 0x342270u;
    {
        const bool branch_taken_0x342270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x342270) {
            ctx->pc = 0x342290u;
            goto label_342290;
        }
    }
    ctx->pc = 0x342278u;
label_342278:
    // 0x342278: 0xc075eb4  jal         func_1D7AD0
label_34227c:
    if (ctx->pc == 0x34227Cu) {
        ctx->pc = 0x34227Cu;
            // 0x34227c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x342280u;
        goto label_342280;
    }
    ctx->pc = 0x342278u;
    SET_GPR_U32(ctx, 31, 0x342280u);
    ctx->pc = 0x34227Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x342278u;
            // 0x34227c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342280u; }
        if (ctx->pc != 0x342280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342280u; }
        if (ctx->pc != 0x342280u) { return; }
    }
    ctx->pc = 0x342280u;
label_342280:
    // 0x342280: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_342284:
    if (ctx->pc == 0x342284u) {
        ctx->pc = 0x342288u;
        goto label_342288;
    }
    ctx->pc = 0x342280u;
    {
        const bool branch_taken_0x342280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x342280) {
            ctx->pc = 0x342290u;
            goto label_342290;
        }
    }
    ctx->pc = 0x342288u;
label_342288:
    // 0x342288: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x342288u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34228c:
    // 0x34228c: 0x0  nop
    ctx->pc = 0x34228cu;
    // NOP
label_342290:
    // 0x342290: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_342294:
    if (ctx->pc == 0x342294u) {
        ctx->pc = 0x342298u;
        goto label_342298;
    }
    ctx->pc = 0x342290u;
    {
        const bool branch_taken_0x342290 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x342290) {
            ctx->pc = 0x3422A8u;
            goto label_3422a8;
        }
    }
    ctx->pc = 0x342298u;
label_342298:
    // 0x342298: 0x8e830e34  lw          $v1, 0xE34($s4)
    ctx->pc = 0x342298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3636)));
label_34229c:
    // 0x34229c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x34229cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3422a0:
    // 0x3422a0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_3422a4:
    if (ctx->pc == 0x3422A4u) {
        ctx->pc = 0x3422A8u;
        goto label_3422a8;
    }
    ctx->pc = 0x3422A0u;
    {
        const bool branch_taken_0x3422a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3422a0) {
            ctx->pc = 0x3422B0u;
            goto label_3422b0;
        }
    }
    ctx->pc = 0x3422A8u;
label_3422a8:
    // 0x3422a8: 0x8e900d98  lw          $s0, 0xD98($s4)
    ctx->pc = 0x3422a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3480)));
label_3422ac:
    // 0x3422ac: 0x0  nop
    ctx->pc = 0x3422acu;
    // NOP
label_3422b0:
    // 0x3422b0: 0x8e830a74  lw          $v1, 0xA74($s4)
    ctx->pc = 0x3422b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2676)));
label_3422b4:
    // 0x3422b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3422b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3422b8:
    // 0x3422b8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_3422bc:
    if (ctx->pc == 0x3422BCu) {
        ctx->pc = 0x3422C0u;
        goto label_3422c0;
    }
    ctx->pc = 0x3422B8u;
    {
        const bool branch_taken_0x3422b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3422b8) {
            ctx->pc = 0x3422C8u;
            goto label_3422c8;
        }
    }
    ctx->pc = 0x3422C0u;
label_3422c0:
    // 0x3422c0: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x3422c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_3422c4:
    // 0x3422c4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3422c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_3422c8:
    // 0x3422c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3422c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3422cc:
    // 0x3422cc: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
label_3422d0:
    if (ctx->pc == 0x3422D0u) {
        ctx->pc = 0x3422D4u;
        goto label_3422d4;
    }
    ctx->pc = 0x3422CCu;
    {
        const bool branch_taken_0x3422cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3422cc) {
            ctx->pc = 0x342380u;
            goto label_342380;
        }
    }
    ctx->pc = 0x3422D4u;
label_3422d4:
    // 0x3422d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3422d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3422d8:
    // 0x3422d8: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
label_3422dc:
    if (ctx->pc == 0x3422DCu) {
        ctx->pc = 0x3422E0u;
        goto label_3422e0;
    }
    ctx->pc = 0x3422D8u;
    {
        const bool branch_taken_0x3422d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3422d8) {
            ctx->pc = 0x342380u;
            goto label_342380;
        }
    }
    ctx->pc = 0x3422E0u;
label_3422e0:
    // 0x3422e0: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x3422e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3422e4:
    // 0x3422e4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3422e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3422e8:
    // 0x3422e8: 0x0  nop
    ctx->pc = 0x3422e8u;
    // NOP
label_3422ec:
    // 0x3422ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3422ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3422f0:
    // 0x3422f0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_3422f4:
    if (ctx->pc == 0x3422F4u) {
        ctx->pc = 0x3422F8u;
        goto label_3422f8;
    }
    ctx->pc = 0x3422F0u;
    {
        const bool branch_taken_0x3422f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3422f0) {
            ctx->pc = 0x342318u;
            goto label_342318;
        }
    }
    ctx->pc = 0x3422F8u;
label_3422f8:
    // 0x3422f8: 0x8e820a74  lw          $v0, 0xA74($s4)
    ctx->pc = 0x3422f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2676)));
label_3422fc:
    // 0x3422fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3422fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_342300:
    // 0x342300: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x342300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_342304:
    // 0x342304: 0xc0d091c  jal         func_342470
label_342308:
    if (ctx->pc == 0x342308u) {
        ctx->pc = 0x342308u;
            // 0x342308: 0x28460002  slti        $a2, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->pc = 0x34230Cu;
        goto label_34230c;
    }
    ctx->pc = 0x342304u;
    SET_GPR_U32(ctx, 31, 0x34230Cu);
    ctx->pc = 0x342308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x342304u;
            // 0x342308: 0x28460002  slti        $a2, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x342470u;
    if (runtime->hasFunction(0x342470u)) {
        auto targetFn = runtime->lookupFunction(0x342470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34230Cu; }
        if (ctx->pc != 0x34230Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00342470_0x342470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34230Cu; }
        if (ctx->pc != 0x34230Cu) { return; }
    }
    ctx->pc = 0x34230Cu;
label_34230c:
    // 0x34230c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_342310:
    if (ctx->pc == 0x342310u) {
        ctx->pc = 0x342314u;
        goto label_342314;
    }
    ctx->pc = 0x34230Cu;
    {
        const bool branch_taken_0x34230c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34230c) {
            ctx->pc = 0x342380u;
            goto label_342380;
        }
    }
    ctx->pc = 0x342314u;
label_342314:
    // 0x342314: 0x0  nop
    ctx->pc = 0x342314u;
    // NOP
label_342318:
    // 0x342318: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x342318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_34231c:
    // 0x34231c: 0xc6800de4  lwc1        $f0, 0xDE4($s4)
    ctx->pc = 0x34231cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_342320:
    // 0x342320: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_342324:
    if (ctx->pc == 0x342324u) {
        ctx->pc = 0x342324u;
            // 0x342324: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->pc = 0x342328u;
        goto label_342328;
    }
    ctx->pc = 0x342320u;
    {
        const bool branch_taken_0x342320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x342324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342320u;
            // 0x342324: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x342320) {
            ctx->pc = 0x342330u;
            goto label_342330;
        }
    }
    ctx->pc = 0x342328u;
label_342328:
    // 0x342328: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x342328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_34232c:
    // 0x34232c: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x34232cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_342330:
    // 0x342330: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x342330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_342334:
    // 0x342334: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x342334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_342338:
    // 0x342338: 0xc4400d80  lwc1        $f0, 0xD80($v0)
    ctx->pc = 0x342338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34233c:
    // 0x34233c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34233cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_342340:
    // 0x342340: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_342344:
    if (ctx->pc == 0x342344u) {
        ctx->pc = 0x342348u;
        goto label_342348;
    }
    ctx->pc = 0x342340u;
    {
        const bool branch_taken_0x342340 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x342340) {
            ctx->pc = 0x342350u;
            goto label_342350;
        }
    }
    ctx->pc = 0x342348u;
label_342348:
    // 0x342348: 0x10000003  b           . + 4 + (0x3 << 2)
label_34234c:
    if (ctx->pc == 0x34234Cu) {
        ctx->pc = 0x34234Cu;
            // 0x34234c: 0x27a20078  addiu       $v0, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->pc = 0x342350u;
        goto label_342350;
    }
    ctx->pc = 0x342348u;
    {
        const bool branch_taken_0x342348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34234Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342348u;
            // 0x34234c: 0x27a20078  addiu       $v0, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342348) {
            ctx->pc = 0x342358u;
            goto label_342358;
        }
    }
    ctx->pc = 0x342350u;
label_342350:
    // 0x342350: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x342350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_342354:
    // 0x342354: 0x24420d80  addiu       $v0, $v0, 0xD80
    ctx->pc = 0x342354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3456));
label_342358:
    // 0x342358: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x342358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_34235c:
    // 0x34235c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34235cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_342360:
    // 0x342360: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x342360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_342364:
    // 0x342364: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x342364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
label_342368:
    // 0x342368: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x342368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_34236c:
    // 0x34236c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x34236cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_342370:
    // 0x342370: 0x9046007c  lbu         $a2, 0x7C($v0)
    ctx->pc = 0x342370u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 124)));
label_342374:
    // 0x342374: 0xc0d0b3c  jal         func_342CF0
label_342378:
    if (ctx->pc == 0x342378u) {
        ctx->pc = 0x342378u;
            // 0x342378: 0xe7ac0078  swc1        $f12, 0x78($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->pc = 0x34237Cu;
        goto label_34237c;
    }
    ctx->pc = 0x342374u;
    SET_GPR_U32(ctx, 31, 0x34237Cu);
    ctx->pc = 0x342378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x342374u;
            // 0x342378: 0xe7ac0078  swc1        $f12, 0x78($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x342CF0u;
    if (runtime->hasFunction(0x342CF0u)) {
        auto targetFn = runtime->lookupFunction(0x342CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34237Cu; }
        if (ctx->pc != 0x34237Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00342CF0_0x342cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34237Cu; }
        if (ctx->pc != 0x34237Cu) { return; }
    }
    ctx->pc = 0x34237Cu;
label_34237c:
    // 0x34237c: 0x0  nop
    ctx->pc = 0x34237cu;
    // NOP
label_342380:
    // 0x342380: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x342380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_342384:
    // 0x342384: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x342384u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_342388:
    // 0x342388: 0x1440ff92  bnez        $v0, . + 4 + (-0x6E << 2)
label_34238c:
    if (ctx->pc == 0x34238Cu) {
        ctx->pc = 0x34238Cu;
            // 0x34238c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x342390u;
        goto label_342390;
    }
    ctx->pc = 0x342388u;
    {
        const bool branch_taken_0x342388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34238Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342388u;
            // 0x34238c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342388) {
            ctx->pc = 0x3421D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3421d4;
        }
    }
    ctx->pc = 0x342390u;
label_342390:
    // 0x342390: 0xc0d0e3c  jal         func_3438F0
label_342394:
    if (ctx->pc == 0x342394u) {
        ctx->pc = 0x342394u;
            // 0x342394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x342398u;
        goto label_342398;
    }
    ctx->pc = 0x342390u;
    SET_GPR_U32(ctx, 31, 0x342398u);
    ctx->pc = 0x342394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x342390u;
            // 0x342394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3438F0u;
    if (runtime->hasFunction(0x3438F0u)) {
        auto targetFn = runtime->lookupFunction(0x3438F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342398u; }
        if (ctx->pc != 0x342398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003438F0_0x3438f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x342398u; }
        if (ctx->pc != 0x342398u) { return; }
    }
    ctx->pc = 0x342398u;
label_342398:
    // 0x342398: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x342398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_34239c:
    // 0x34239c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x34239cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3423a0:
    // 0x3423a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3423a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3423a4:
    // 0x3423a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3423a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3423a8:
    // 0x3423a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3423a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3423ac:
    // 0x3423ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3423acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3423b0:
    // 0x3423b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3423b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3423b4:
    // 0x3423b4: 0x3e00008  jr          $ra
label_3423b8:
    if (ctx->pc == 0x3423B8u) {
        ctx->pc = 0x3423B8u;
            // 0x3423b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3423BCu;
        goto label_3423bc;
    }
    ctx->pc = 0x3423B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3423B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3423B4u;
            // 0x3423b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3423BCu;
label_3423bc:
    // 0x3423bc: 0x0  nop
    ctx->pc = 0x3423bcu;
    // NOP
label_3423c0:
    // 0x3423c0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3423c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3423c4:
    // 0x3423c4: 0x248a0054  addiu       $t2, $a0, 0x54
    ctx->pc = 0x3423c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
label_3423c8:
    // 0x3423c8: 0x8c68d130  lw          $t0, -0x2ED0($v1)
    ctx->pc = 0x3423c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_3423cc:
    // 0x3423cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3423ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3423d0:
    // 0x3423d0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3423d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_3423d4:
    // 0x3423d4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3423d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3423d8:
    // 0x3423d8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3423d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3423dc:
    // 0x3423dc: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x3423dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_3423e0:
    // 0x3423e0: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x3423e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3423e4:
    // 0x3423e4: 0x8ca689d0  lw          $a2, -0x7630($a1)
    ctx->pc = 0x3423e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294937040)));
label_3423e8:
    // 0x3423e8: 0x8cc60084  lw          $a2, 0x84($a2)
    ctx->pc = 0x3423e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 132)));
label_3423ec:
    // 0x3423ec: 0x14c7000e  bne         $a2, $a3, . + 4 + (0xE << 2)
label_3423f0:
    if (ctx->pc == 0x3423F0u) {
        ctx->pc = 0x3423F4u;
        goto label_3423f4;
    }
    ctx->pc = 0x3423ECu;
    {
        const bool branch_taken_0x3423ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x3423ec) {
            ctx->pc = 0x342428u;
            goto label_342428;
        }
    }
    ctx->pc = 0x3423F4u;
label_3423f4:
    // 0x3423f4: 0x1093021  addu        $a2, $t0, $t1
    ctx->pc = 0x3423f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_3423f8:
    // 0x3423f8: 0x90c60129  lbu         $a2, 0x129($a2)
    ctx->pc = 0x3423f8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 297)));
label_3423fc:
    // 0x3423fc: 0x14c0000a  bnez        $a2, . + 4 + (0xA << 2)
label_342400:
    if (ctx->pc == 0x342400u) {
        ctx->pc = 0x342404u;
        goto label_342404;
    }
    ctx->pc = 0x3423FCu;
    {
        const bool branch_taken_0x3423fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3423fc) {
            ctx->pc = 0x342428u;
            goto label_342428;
        }
    }
    ctx->pc = 0x342404u;
label_342404:
    // 0x342404: 0x0  nop
    ctx->pc = 0x342404u;
    // NOP
label_342408:
    // 0x342408: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x342408u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_34240c:
    // 0x34240c: 0x1093021  addu        $a2, $t0, $t1
    ctx->pc = 0x34240cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_342410:
    // 0x342410: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x342410u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_342414:
    // 0x342414: 0x90c60129  lbu         $a2, 0x129($a2)
    ctx->pc = 0x342414u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 297)));
label_342418:
    // 0x342418: 0x0  nop
    ctx->pc = 0x342418u;
    // NOP
label_34241c:
    // 0x34241c: 0x10c0fffa  beqz        $a2, . + 4 + (-0x6 << 2)
label_342420:
    if (ctx->pc == 0x342420u) {
        ctx->pc = 0x342424u;
        goto label_342424;
    }
    ctx->pc = 0x34241Cu;
    {
        const bool branch_taken_0x34241c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x34241c) {
            ctx->pc = 0x342408u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_342408;
        }
    }
    ctx->pc = 0x342424u;
label_342424:
    // 0x342424: 0x0  nop
    ctx->pc = 0x342424u;
    // NOP
label_342428:
    // 0x342428: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x342428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34242c:
    // 0x34242c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x34242cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_342430:
    // 0x342430: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_342434:
    if (ctx->pc == 0x342434u) {
        ctx->pc = 0x342438u;
        goto label_342438;
    }
    ctx->pc = 0x342430u;
    {
        const bool branch_taken_0x342430 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x342430) {
            ctx->pc = 0x342448u;
            goto label_342448;
        }
    }
    ctx->pc = 0x342438u;
label_342438:
    // 0x342438: 0x8c868a08  lw          $a2, -0x75F8($a0)
    ctx->pc = 0x342438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937096)));
label_34243c:
    // 0x34243c: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x34243cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_342440:
    // 0x342440: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x342440u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_342444:
    // 0x342444: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x342444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_342448:
    // 0x342448: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x342448u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_34244c:
    // 0x34244c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x34244cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_342450:
    // 0x342450: 0x80c6007a  lb          $a2, 0x7A($a2)
    ctx->pc = 0x342450u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 122)));
label_342454:
    // 0x342454: 0x126302b  sltu        $a2, $t1, $a2
    ctx->pc = 0x342454u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_342458:
    // 0x342458: 0x14c0ffe2  bnez        $a2, . + 4 + (-0x1E << 2)
label_34245c:
    if (ctx->pc == 0x34245Cu) {
        ctx->pc = 0x34245Cu;
            // 0x34245c: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->pc = 0x342460u;
        goto label_342460;
    }
    ctx->pc = 0x342458u;
    {
        const bool branch_taken_0x342458 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x34245Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342458u;
            // 0x34245c: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342458) {
            ctx->pc = 0x3423E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3423e4;
        }
    }
    ctx->pc = 0x342460u;
label_342460:
    // 0x342460: 0x3e00008  jr          $ra
label_342464:
    if (ctx->pc == 0x342464u) {
        ctx->pc = 0x342468u;
        goto label_342468;
    }
    ctx->pc = 0x342460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x342468u;
label_342468:
    // 0x342468: 0x0  nop
    ctx->pc = 0x342468u;
    // NOP
label_34246c:
    // 0x34246c: 0x0  nop
    ctx->pc = 0x34246cu;
    // NOP
}
