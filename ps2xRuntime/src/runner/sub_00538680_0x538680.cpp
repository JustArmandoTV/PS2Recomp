#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00538680
// Address: 0x538680 - 0x5395f0
void sub_00538680_0x538680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00538680_0x538680");
#endif

    switch (ctx->pc) {
        case 0x538680u: goto label_538680;
        case 0x538684u: goto label_538684;
        case 0x538688u: goto label_538688;
        case 0x53868cu: goto label_53868c;
        case 0x538690u: goto label_538690;
        case 0x538694u: goto label_538694;
        case 0x538698u: goto label_538698;
        case 0x53869cu: goto label_53869c;
        case 0x5386a0u: goto label_5386a0;
        case 0x5386a4u: goto label_5386a4;
        case 0x5386a8u: goto label_5386a8;
        case 0x5386acu: goto label_5386ac;
        case 0x5386b0u: goto label_5386b0;
        case 0x5386b4u: goto label_5386b4;
        case 0x5386b8u: goto label_5386b8;
        case 0x5386bcu: goto label_5386bc;
        case 0x5386c0u: goto label_5386c0;
        case 0x5386c4u: goto label_5386c4;
        case 0x5386c8u: goto label_5386c8;
        case 0x5386ccu: goto label_5386cc;
        case 0x5386d0u: goto label_5386d0;
        case 0x5386d4u: goto label_5386d4;
        case 0x5386d8u: goto label_5386d8;
        case 0x5386dcu: goto label_5386dc;
        case 0x5386e0u: goto label_5386e0;
        case 0x5386e4u: goto label_5386e4;
        case 0x5386e8u: goto label_5386e8;
        case 0x5386ecu: goto label_5386ec;
        case 0x5386f0u: goto label_5386f0;
        case 0x5386f4u: goto label_5386f4;
        case 0x5386f8u: goto label_5386f8;
        case 0x5386fcu: goto label_5386fc;
        case 0x538700u: goto label_538700;
        case 0x538704u: goto label_538704;
        case 0x538708u: goto label_538708;
        case 0x53870cu: goto label_53870c;
        case 0x538710u: goto label_538710;
        case 0x538714u: goto label_538714;
        case 0x538718u: goto label_538718;
        case 0x53871cu: goto label_53871c;
        case 0x538720u: goto label_538720;
        case 0x538724u: goto label_538724;
        case 0x538728u: goto label_538728;
        case 0x53872cu: goto label_53872c;
        case 0x538730u: goto label_538730;
        case 0x538734u: goto label_538734;
        case 0x538738u: goto label_538738;
        case 0x53873cu: goto label_53873c;
        case 0x538740u: goto label_538740;
        case 0x538744u: goto label_538744;
        case 0x538748u: goto label_538748;
        case 0x53874cu: goto label_53874c;
        case 0x538750u: goto label_538750;
        case 0x538754u: goto label_538754;
        case 0x538758u: goto label_538758;
        case 0x53875cu: goto label_53875c;
        case 0x538760u: goto label_538760;
        case 0x538764u: goto label_538764;
        case 0x538768u: goto label_538768;
        case 0x53876cu: goto label_53876c;
        case 0x538770u: goto label_538770;
        case 0x538774u: goto label_538774;
        case 0x538778u: goto label_538778;
        case 0x53877cu: goto label_53877c;
        case 0x538780u: goto label_538780;
        case 0x538784u: goto label_538784;
        case 0x538788u: goto label_538788;
        case 0x53878cu: goto label_53878c;
        case 0x538790u: goto label_538790;
        case 0x538794u: goto label_538794;
        case 0x538798u: goto label_538798;
        case 0x53879cu: goto label_53879c;
        case 0x5387a0u: goto label_5387a0;
        case 0x5387a4u: goto label_5387a4;
        case 0x5387a8u: goto label_5387a8;
        case 0x5387acu: goto label_5387ac;
        case 0x5387b0u: goto label_5387b0;
        case 0x5387b4u: goto label_5387b4;
        case 0x5387b8u: goto label_5387b8;
        case 0x5387bcu: goto label_5387bc;
        case 0x5387c0u: goto label_5387c0;
        case 0x5387c4u: goto label_5387c4;
        case 0x5387c8u: goto label_5387c8;
        case 0x5387ccu: goto label_5387cc;
        case 0x5387d0u: goto label_5387d0;
        case 0x5387d4u: goto label_5387d4;
        case 0x5387d8u: goto label_5387d8;
        case 0x5387dcu: goto label_5387dc;
        case 0x5387e0u: goto label_5387e0;
        case 0x5387e4u: goto label_5387e4;
        case 0x5387e8u: goto label_5387e8;
        case 0x5387ecu: goto label_5387ec;
        case 0x5387f0u: goto label_5387f0;
        case 0x5387f4u: goto label_5387f4;
        case 0x5387f8u: goto label_5387f8;
        case 0x5387fcu: goto label_5387fc;
        case 0x538800u: goto label_538800;
        case 0x538804u: goto label_538804;
        case 0x538808u: goto label_538808;
        case 0x53880cu: goto label_53880c;
        case 0x538810u: goto label_538810;
        case 0x538814u: goto label_538814;
        case 0x538818u: goto label_538818;
        case 0x53881cu: goto label_53881c;
        case 0x538820u: goto label_538820;
        case 0x538824u: goto label_538824;
        case 0x538828u: goto label_538828;
        case 0x53882cu: goto label_53882c;
        case 0x538830u: goto label_538830;
        case 0x538834u: goto label_538834;
        case 0x538838u: goto label_538838;
        case 0x53883cu: goto label_53883c;
        case 0x538840u: goto label_538840;
        case 0x538844u: goto label_538844;
        case 0x538848u: goto label_538848;
        case 0x53884cu: goto label_53884c;
        case 0x538850u: goto label_538850;
        case 0x538854u: goto label_538854;
        case 0x538858u: goto label_538858;
        case 0x53885cu: goto label_53885c;
        case 0x538860u: goto label_538860;
        case 0x538864u: goto label_538864;
        case 0x538868u: goto label_538868;
        case 0x53886cu: goto label_53886c;
        case 0x538870u: goto label_538870;
        case 0x538874u: goto label_538874;
        case 0x538878u: goto label_538878;
        case 0x53887cu: goto label_53887c;
        case 0x538880u: goto label_538880;
        case 0x538884u: goto label_538884;
        case 0x538888u: goto label_538888;
        case 0x53888cu: goto label_53888c;
        case 0x538890u: goto label_538890;
        case 0x538894u: goto label_538894;
        case 0x538898u: goto label_538898;
        case 0x53889cu: goto label_53889c;
        case 0x5388a0u: goto label_5388a0;
        case 0x5388a4u: goto label_5388a4;
        case 0x5388a8u: goto label_5388a8;
        case 0x5388acu: goto label_5388ac;
        case 0x5388b0u: goto label_5388b0;
        case 0x5388b4u: goto label_5388b4;
        case 0x5388b8u: goto label_5388b8;
        case 0x5388bcu: goto label_5388bc;
        case 0x5388c0u: goto label_5388c0;
        case 0x5388c4u: goto label_5388c4;
        case 0x5388c8u: goto label_5388c8;
        case 0x5388ccu: goto label_5388cc;
        case 0x5388d0u: goto label_5388d0;
        case 0x5388d4u: goto label_5388d4;
        case 0x5388d8u: goto label_5388d8;
        case 0x5388dcu: goto label_5388dc;
        case 0x5388e0u: goto label_5388e0;
        case 0x5388e4u: goto label_5388e4;
        case 0x5388e8u: goto label_5388e8;
        case 0x5388ecu: goto label_5388ec;
        case 0x5388f0u: goto label_5388f0;
        case 0x5388f4u: goto label_5388f4;
        case 0x5388f8u: goto label_5388f8;
        case 0x5388fcu: goto label_5388fc;
        case 0x538900u: goto label_538900;
        case 0x538904u: goto label_538904;
        case 0x538908u: goto label_538908;
        case 0x53890cu: goto label_53890c;
        case 0x538910u: goto label_538910;
        case 0x538914u: goto label_538914;
        case 0x538918u: goto label_538918;
        case 0x53891cu: goto label_53891c;
        case 0x538920u: goto label_538920;
        case 0x538924u: goto label_538924;
        case 0x538928u: goto label_538928;
        case 0x53892cu: goto label_53892c;
        case 0x538930u: goto label_538930;
        case 0x538934u: goto label_538934;
        case 0x538938u: goto label_538938;
        case 0x53893cu: goto label_53893c;
        case 0x538940u: goto label_538940;
        case 0x538944u: goto label_538944;
        case 0x538948u: goto label_538948;
        case 0x53894cu: goto label_53894c;
        case 0x538950u: goto label_538950;
        case 0x538954u: goto label_538954;
        case 0x538958u: goto label_538958;
        case 0x53895cu: goto label_53895c;
        case 0x538960u: goto label_538960;
        case 0x538964u: goto label_538964;
        case 0x538968u: goto label_538968;
        case 0x53896cu: goto label_53896c;
        case 0x538970u: goto label_538970;
        case 0x538974u: goto label_538974;
        case 0x538978u: goto label_538978;
        case 0x53897cu: goto label_53897c;
        case 0x538980u: goto label_538980;
        case 0x538984u: goto label_538984;
        case 0x538988u: goto label_538988;
        case 0x53898cu: goto label_53898c;
        case 0x538990u: goto label_538990;
        case 0x538994u: goto label_538994;
        case 0x538998u: goto label_538998;
        case 0x53899cu: goto label_53899c;
        case 0x5389a0u: goto label_5389a0;
        case 0x5389a4u: goto label_5389a4;
        case 0x5389a8u: goto label_5389a8;
        case 0x5389acu: goto label_5389ac;
        case 0x5389b0u: goto label_5389b0;
        case 0x5389b4u: goto label_5389b4;
        case 0x5389b8u: goto label_5389b8;
        case 0x5389bcu: goto label_5389bc;
        case 0x5389c0u: goto label_5389c0;
        case 0x5389c4u: goto label_5389c4;
        case 0x5389c8u: goto label_5389c8;
        case 0x5389ccu: goto label_5389cc;
        case 0x5389d0u: goto label_5389d0;
        case 0x5389d4u: goto label_5389d4;
        case 0x5389d8u: goto label_5389d8;
        case 0x5389dcu: goto label_5389dc;
        case 0x5389e0u: goto label_5389e0;
        case 0x5389e4u: goto label_5389e4;
        case 0x5389e8u: goto label_5389e8;
        case 0x5389ecu: goto label_5389ec;
        case 0x5389f0u: goto label_5389f0;
        case 0x5389f4u: goto label_5389f4;
        case 0x5389f8u: goto label_5389f8;
        case 0x5389fcu: goto label_5389fc;
        case 0x538a00u: goto label_538a00;
        case 0x538a04u: goto label_538a04;
        case 0x538a08u: goto label_538a08;
        case 0x538a0cu: goto label_538a0c;
        case 0x538a10u: goto label_538a10;
        case 0x538a14u: goto label_538a14;
        case 0x538a18u: goto label_538a18;
        case 0x538a1cu: goto label_538a1c;
        case 0x538a20u: goto label_538a20;
        case 0x538a24u: goto label_538a24;
        case 0x538a28u: goto label_538a28;
        case 0x538a2cu: goto label_538a2c;
        case 0x538a30u: goto label_538a30;
        case 0x538a34u: goto label_538a34;
        case 0x538a38u: goto label_538a38;
        case 0x538a3cu: goto label_538a3c;
        case 0x538a40u: goto label_538a40;
        case 0x538a44u: goto label_538a44;
        case 0x538a48u: goto label_538a48;
        case 0x538a4cu: goto label_538a4c;
        case 0x538a50u: goto label_538a50;
        case 0x538a54u: goto label_538a54;
        case 0x538a58u: goto label_538a58;
        case 0x538a5cu: goto label_538a5c;
        case 0x538a60u: goto label_538a60;
        case 0x538a64u: goto label_538a64;
        case 0x538a68u: goto label_538a68;
        case 0x538a6cu: goto label_538a6c;
        case 0x538a70u: goto label_538a70;
        case 0x538a74u: goto label_538a74;
        case 0x538a78u: goto label_538a78;
        case 0x538a7cu: goto label_538a7c;
        case 0x538a80u: goto label_538a80;
        case 0x538a84u: goto label_538a84;
        case 0x538a88u: goto label_538a88;
        case 0x538a8cu: goto label_538a8c;
        case 0x538a90u: goto label_538a90;
        case 0x538a94u: goto label_538a94;
        case 0x538a98u: goto label_538a98;
        case 0x538a9cu: goto label_538a9c;
        case 0x538aa0u: goto label_538aa0;
        case 0x538aa4u: goto label_538aa4;
        case 0x538aa8u: goto label_538aa8;
        case 0x538aacu: goto label_538aac;
        case 0x538ab0u: goto label_538ab0;
        case 0x538ab4u: goto label_538ab4;
        case 0x538ab8u: goto label_538ab8;
        case 0x538abcu: goto label_538abc;
        case 0x538ac0u: goto label_538ac0;
        case 0x538ac4u: goto label_538ac4;
        case 0x538ac8u: goto label_538ac8;
        case 0x538accu: goto label_538acc;
        case 0x538ad0u: goto label_538ad0;
        case 0x538ad4u: goto label_538ad4;
        case 0x538ad8u: goto label_538ad8;
        case 0x538adcu: goto label_538adc;
        case 0x538ae0u: goto label_538ae0;
        case 0x538ae4u: goto label_538ae4;
        case 0x538ae8u: goto label_538ae8;
        case 0x538aecu: goto label_538aec;
        case 0x538af0u: goto label_538af0;
        case 0x538af4u: goto label_538af4;
        case 0x538af8u: goto label_538af8;
        case 0x538afcu: goto label_538afc;
        case 0x538b00u: goto label_538b00;
        case 0x538b04u: goto label_538b04;
        case 0x538b08u: goto label_538b08;
        case 0x538b0cu: goto label_538b0c;
        case 0x538b10u: goto label_538b10;
        case 0x538b14u: goto label_538b14;
        case 0x538b18u: goto label_538b18;
        case 0x538b1cu: goto label_538b1c;
        case 0x538b20u: goto label_538b20;
        case 0x538b24u: goto label_538b24;
        case 0x538b28u: goto label_538b28;
        case 0x538b2cu: goto label_538b2c;
        case 0x538b30u: goto label_538b30;
        case 0x538b34u: goto label_538b34;
        case 0x538b38u: goto label_538b38;
        case 0x538b3cu: goto label_538b3c;
        case 0x538b40u: goto label_538b40;
        case 0x538b44u: goto label_538b44;
        case 0x538b48u: goto label_538b48;
        case 0x538b4cu: goto label_538b4c;
        case 0x538b50u: goto label_538b50;
        case 0x538b54u: goto label_538b54;
        case 0x538b58u: goto label_538b58;
        case 0x538b5cu: goto label_538b5c;
        case 0x538b60u: goto label_538b60;
        case 0x538b64u: goto label_538b64;
        case 0x538b68u: goto label_538b68;
        case 0x538b6cu: goto label_538b6c;
        case 0x538b70u: goto label_538b70;
        case 0x538b74u: goto label_538b74;
        case 0x538b78u: goto label_538b78;
        case 0x538b7cu: goto label_538b7c;
        case 0x538b80u: goto label_538b80;
        case 0x538b84u: goto label_538b84;
        case 0x538b88u: goto label_538b88;
        case 0x538b8cu: goto label_538b8c;
        case 0x538b90u: goto label_538b90;
        case 0x538b94u: goto label_538b94;
        case 0x538b98u: goto label_538b98;
        case 0x538b9cu: goto label_538b9c;
        case 0x538ba0u: goto label_538ba0;
        case 0x538ba4u: goto label_538ba4;
        case 0x538ba8u: goto label_538ba8;
        case 0x538bacu: goto label_538bac;
        case 0x538bb0u: goto label_538bb0;
        case 0x538bb4u: goto label_538bb4;
        case 0x538bb8u: goto label_538bb8;
        case 0x538bbcu: goto label_538bbc;
        case 0x538bc0u: goto label_538bc0;
        case 0x538bc4u: goto label_538bc4;
        case 0x538bc8u: goto label_538bc8;
        case 0x538bccu: goto label_538bcc;
        case 0x538bd0u: goto label_538bd0;
        case 0x538bd4u: goto label_538bd4;
        case 0x538bd8u: goto label_538bd8;
        case 0x538bdcu: goto label_538bdc;
        case 0x538be0u: goto label_538be0;
        case 0x538be4u: goto label_538be4;
        case 0x538be8u: goto label_538be8;
        case 0x538becu: goto label_538bec;
        case 0x538bf0u: goto label_538bf0;
        case 0x538bf4u: goto label_538bf4;
        case 0x538bf8u: goto label_538bf8;
        case 0x538bfcu: goto label_538bfc;
        case 0x538c00u: goto label_538c00;
        case 0x538c04u: goto label_538c04;
        case 0x538c08u: goto label_538c08;
        case 0x538c0cu: goto label_538c0c;
        case 0x538c10u: goto label_538c10;
        case 0x538c14u: goto label_538c14;
        case 0x538c18u: goto label_538c18;
        case 0x538c1cu: goto label_538c1c;
        case 0x538c20u: goto label_538c20;
        case 0x538c24u: goto label_538c24;
        case 0x538c28u: goto label_538c28;
        case 0x538c2cu: goto label_538c2c;
        case 0x538c30u: goto label_538c30;
        case 0x538c34u: goto label_538c34;
        case 0x538c38u: goto label_538c38;
        case 0x538c3cu: goto label_538c3c;
        case 0x538c40u: goto label_538c40;
        case 0x538c44u: goto label_538c44;
        case 0x538c48u: goto label_538c48;
        case 0x538c4cu: goto label_538c4c;
        case 0x538c50u: goto label_538c50;
        case 0x538c54u: goto label_538c54;
        case 0x538c58u: goto label_538c58;
        case 0x538c5cu: goto label_538c5c;
        case 0x538c60u: goto label_538c60;
        case 0x538c64u: goto label_538c64;
        case 0x538c68u: goto label_538c68;
        case 0x538c6cu: goto label_538c6c;
        case 0x538c70u: goto label_538c70;
        case 0x538c74u: goto label_538c74;
        case 0x538c78u: goto label_538c78;
        case 0x538c7cu: goto label_538c7c;
        case 0x538c80u: goto label_538c80;
        case 0x538c84u: goto label_538c84;
        case 0x538c88u: goto label_538c88;
        case 0x538c8cu: goto label_538c8c;
        case 0x538c90u: goto label_538c90;
        case 0x538c94u: goto label_538c94;
        case 0x538c98u: goto label_538c98;
        case 0x538c9cu: goto label_538c9c;
        case 0x538ca0u: goto label_538ca0;
        case 0x538ca4u: goto label_538ca4;
        case 0x538ca8u: goto label_538ca8;
        case 0x538cacu: goto label_538cac;
        case 0x538cb0u: goto label_538cb0;
        case 0x538cb4u: goto label_538cb4;
        case 0x538cb8u: goto label_538cb8;
        case 0x538cbcu: goto label_538cbc;
        case 0x538cc0u: goto label_538cc0;
        case 0x538cc4u: goto label_538cc4;
        case 0x538cc8u: goto label_538cc8;
        case 0x538cccu: goto label_538ccc;
        case 0x538cd0u: goto label_538cd0;
        case 0x538cd4u: goto label_538cd4;
        case 0x538cd8u: goto label_538cd8;
        case 0x538cdcu: goto label_538cdc;
        case 0x538ce0u: goto label_538ce0;
        case 0x538ce4u: goto label_538ce4;
        case 0x538ce8u: goto label_538ce8;
        case 0x538cecu: goto label_538cec;
        case 0x538cf0u: goto label_538cf0;
        case 0x538cf4u: goto label_538cf4;
        case 0x538cf8u: goto label_538cf8;
        case 0x538cfcu: goto label_538cfc;
        case 0x538d00u: goto label_538d00;
        case 0x538d04u: goto label_538d04;
        case 0x538d08u: goto label_538d08;
        case 0x538d0cu: goto label_538d0c;
        case 0x538d10u: goto label_538d10;
        case 0x538d14u: goto label_538d14;
        case 0x538d18u: goto label_538d18;
        case 0x538d1cu: goto label_538d1c;
        case 0x538d20u: goto label_538d20;
        case 0x538d24u: goto label_538d24;
        case 0x538d28u: goto label_538d28;
        case 0x538d2cu: goto label_538d2c;
        case 0x538d30u: goto label_538d30;
        case 0x538d34u: goto label_538d34;
        case 0x538d38u: goto label_538d38;
        case 0x538d3cu: goto label_538d3c;
        case 0x538d40u: goto label_538d40;
        case 0x538d44u: goto label_538d44;
        case 0x538d48u: goto label_538d48;
        case 0x538d4cu: goto label_538d4c;
        case 0x538d50u: goto label_538d50;
        case 0x538d54u: goto label_538d54;
        case 0x538d58u: goto label_538d58;
        case 0x538d5cu: goto label_538d5c;
        case 0x538d60u: goto label_538d60;
        case 0x538d64u: goto label_538d64;
        case 0x538d68u: goto label_538d68;
        case 0x538d6cu: goto label_538d6c;
        case 0x538d70u: goto label_538d70;
        case 0x538d74u: goto label_538d74;
        case 0x538d78u: goto label_538d78;
        case 0x538d7cu: goto label_538d7c;
        case 0x538d80u: goto label_538d80;
        case 0x538d84u: goto label_538d84;
        case 0x538d88u: goto label_538d88;
        case 0x538d8cu: goto label_538d8c;
        case 0x538d90u: goto label_538d90;
        case 0x538d94u: goto label_538d94;
        case 0x538d98u: goto label_538d98;
        case 0x538d9cu: goto label_538d9c;
        case 0x538da0u: goto label_538da0;
        case 0x538da4u: goto label_538da4;
        case 0x538da8u: goto label_538da8;
        case 0x538dacu: goto label_538dac;
        case 0x538db0u: goto label_538db0;
        case 0x538db4u: goto label_538db4;
        case 0x538db8u: goto label_538db8;
        case 0x538dbcu: goto label_538dbc;
        case 0x538dc0u: goto label_538dc0;
        case 0x538dc4u: goto label_538dc4;
        case 0x538dc8u: goto label_538dc8;
        case 0x538dccu: goto label_538dcc;
        case 0x538dd0u: goto label_538dd0;
        case 0x538dd4u: goto label_538dd4;
        case 0x538dd8u: goto label_538dd8;
        case 0x538ddcu: goto label_538ddc;
        case 0x538de0u: goto label_538de0;
        case 0x538de4u: goto label_538de4;
        case 0x538de8u: goto label_538de8;
        case 0x538decu: goto label_538dec;
        case 0x538df0u: goto label_538df0;
        case 0x538df4u: goto label_538df4;
        case 0x538df8u: goto label_538df8;
        case 0x538dfcu: goto label_538dfc;
        case 0x538e00u: goto label_538e00;
        case 0x538e04u: goto label_538e04;
        case 0x538e08u: goto label_538e08;
        case 0x538e0cu: goto label_538e0c;
        case 0x538e10u: goto label_538e10;
        case 0x538e14u: goto label_538e14;
        case 0x538e18u: goto label_538e18;
        case 0x538e1cu: goto label_538e1c;
        case 0x538e20u: goto label_538e20;
        case 0x538e24u: goto label_538e24;
        case 0x538e28u: goto label_538e28;
        case 0x538e2cu: goto label_538e2c;
        case 0x538e30u: goto label_538e30;
        case 0x538e34u: goto label_538e34;
        case 0x538e38u: goto label_538e38;
        case 0x538e3cu: goto label_538e3c;
        case 0x538e40u: goto label_538e40;
        case 0x538e44u: goto label_538e44;
        case 0x538e48u: goto label_538e48;
        case 0x538e4cu: goto label_538e4c;
        case 0x538e50u: goto label_538e50;
        case 0x538e54u: goto label_538e54;
        case 0x538e58u: goto label_538e58;
        case 0x538e5cu: goto label_538e5c;
        case 0x538e60u: goto label_538e60;
        case 0x538e64u: goto label_538e64;
        case 0x538e68u: goto label_538e68;
        case 0x538e6cu: goto label_538e6c;
        case 0x538e70u: goto label_538e70;
        case 0x538e74u: goto label_538e74;
        case 0x538e78u: goto label_538e78;
        case 0x538e7cu: goto label_538e7c;
        case 0x538e80u: goto label_538e80;
        case 0x538e84u: goto label_538e84;
        case 0x538e88u: goto label_538e88;
        case 0x538e8cu: goto label_538e8c;
        case 0x538e90u: goto label_538e90;
        case 0x538e94u: goto label_538e94;
        case 0x538e98u: goto label_538e98;
        case 0x538e9cu: goto label_538e9c;
        case 0x538ea0u: goto label_538ea0;
        case 0x538ea4u: goto label_538ea4;
        case 0x538ea8u: goto label_538ea8;
        case 0x538eacu: goto label_538eac;
        case 0x538eb0u: goto label_538eb0;
        case 0x538eb4u: goto label_538eb4;
        case 0x538eb8u: goto label_538eb8;
        case 0x538ebcu: goto label_538ebc;
        case 0x538ec0u: goto label_538ec0;
        case 0x538ec4u: goto label_538ec4;
        case 0x538ec8u: goto label_538ec8;
        case 0x538eccu: goto label_538ecc;
        case 0x538ed0u: goto label_538ed0;
        case 0x538ed4u: goto label_538ed4;
        case 0x538ed8u: goto label_538ed8;
        case 0x538edcu: goto label_538edc;
        case 0x538ee0u: goto label_538ee0;
        case 0x538ee4u: goto label_538ee4;
        case 0x538ee8u: goto label_538ee8;
        case 0x538eecu: goto label_538eec;
        case 0x538ef0u: goto label_538ef0;
        case 0x538ef4u: goto label_538ef4;
        case 0x538ef8u: goto label_538ef8;
        case 0x538efcu: goto label_538efc;
        case 0x538f00u: goto label_538f00;
        case 0x538f04u: goto label_538f04;
        case 0x538f08u: goto label_538f08;
        case 0x538f0cu: goto label_538f0c;
        case 0x538f10u: goto label_538f10;
        case 0x538f14u: goto label_538f14;
        case 0x538f18u: goto label_538f18;
        case 0x538f1cu: goto label_538f1c;
        case 0x538f20u: goto label_538f20;
        case 0x538f24u: goto label_538f24;
        case 0x538f28u: goto label_538f28;
        case 0x538f2cu: goto label_538f2c;
        case 0x538f30u: goto label_538f30;
        case 0x538f34u: goto label_538f34;
        case 0x538f38u: goto label_538f38;
        case 0x538f3cu: goto label_538f3c;
        case 0x538f40u: goto label_538f40;
        case 0x538f44u: goto label_538f44;
        case 0x538f48u: goto label_538f48;
        case 0x538f4cu: goto label_538f4c;
        case 0x538f50u: goto label_538f50;
        case 0x538f54u: goto label_538f54;
        case 0x538f58u: goto label_538f58;
        case 0x538f5cu: goto label_538f5c;
        case 0x538f60u: goto label_538f60;
        case 0x538f64u: goto label_538f64;
        case 0x538f68u: goto label_538f68;
        case 0x538f6cu: goto label_538f6c;
        case 0x538f70u: goto label_538f70;
        case 0x538f74u: goto label_538f74;
        case 0x538f78u: goto label_538f78;
        case 0x538f7cu: goto label_538f7c;
        case 0x538f80u: goto label_538f80;
        case 0x538f84u: goto label_538f84;
        case 0x538f88u: goto label_538f88;
        case 0x538f8cu: goto label_538f8c;
        case 0x538f90u: goto label_538f90;
        case 0x538f94u: goto label_538f94;
        case 0x538f98u: goto label_538f98;
        case 0x538f9cu: goto label_538f9c;
        case 0x538fa0u: goto label_538fa0;
        case 0x538fa4u: goto label_538fa4;
        case 0x538fa8u: goto label_538fa8;
        case 0x538facu: goto label_538fac;
        case 0x538fb0u: goto label_538fb0;
        case 0x538fb4u: goto label_538fb4;
        case 0x538fb8u: goto label_538fb8;
        case 0x538fbcu: goto label_538fbc;
        case 0x538fc0u: goto label_538fc0;
        case 0x538fc4u: goto label_538fc4;
        case 0x538fc8u: goto label_538fc8;
        case 0x538fccu: goto label_538fcc;
        case 0x538fd0u: goto label_538fd0;
        case 0x538fd4u: goto label_538fd4;
        case 0x538fd8u: goto label_538fd8;
        case 0x538fdcu: goto label_538fdc;
        case 0x538fe0u: goto label_538fe0;
        case 0x538fe4u: goto label_538fe4;
        case 0x538fe8u: goto label_538fe8;
        case 0x538fecu: goto label_538fec;
        case 0x538ff0u: goto label_538ff0;
        case 0x538ff4u: goto label_538ff4;
        case 0x538ff8u: goto label_538ff8;
        case 0x538ffcu: goto label_538ffc;
        case 0x539000u: goto label_539000;
        case 0x539004u: goto label_539004;
        case 0x539008u: goto label_539008;
        case 0x53900cu: goto label_53900c;
        case 0x539010u: goto label_539010;
        case 0x539014u: goto label_539014;
        case 0x539018u: goto label_539018;
        case 0x53901cu: goto label_53901c;
        case 0x539020u: goto label_539020;
        case 0x539024u: goto label_539024;
        case 0x539028u: goto label_539028;
        case 0x53902cu: goto label_53902c;
        case 0x539030u: goto label_539030;
        case 0x539034u: goto label_539034;
        case 0x539038u: goto label_539038;
        case 0x53903cu: goto label_53903c;
        case 0x539040u: goto label_539040;
        case 0x539044u: goto label_539044;
        case 0x539048u: goto label_539048;
        case 0x53904cu: goto label_53904c;
        case 0x539050u: goto label_539050;
        case 0x539054u: goto label_539054;
        case 0x539058u: goto label_539058;
        case 0x53905cu: goto label_53905c;
        case 0x539060u: goto label_539060;
        case 0x539064u: goto label_539064;
        case 0x539068u: goto label_539068;
        case 0x53906cu: goto label_53906c;
        case 0x539070u: goto label_539070;
        case 0x539074u: goto label_539074;
        case 0x539078u: goto label_539078;
        case 0x53907cu: goto label_53907c;
        case 0x539080u: goto label_539080;
        case 0x539084u: goto label_539084;
        case 0x539088u: goto label_539088;
        case 0x53908cu: goto label_53908c;
        case 0x539090u: goto label_539090;
        case 0x539094u: goto label_539094;
        case 0x539098u: goto label_539098;
        case 0x53909cu: goto label_53909c;
        case 0x5390a0u: goto label_5390a0;
        case 0x5390a4u: goto label_5390a4;
        case 0x5390a8u: goto label_5390a8;
        case 0x5390acu: goto label_5390ac;
        case 0x5390b0u: goto label_5390b0;
        case 0x5390b4u: goto label_5390b4;
        case 0x5390b8u: goto label_5390b8;
        case 0x5390bcu: goto label_5390bc;
        case 0x5390c0u: goto label_5390c0;
        case 0x5390c4u: goto label_5390c4;
        case 0x5390c8u: goto label_5390c8;
        case 0x5390ccu: goto label_5390cc;
        case 0x5390d0u: goto label_5390d0;
        case 0x5390d4u: goto label_5390d4;
        case 0x5390d8u: goto label_5390d8;
        case 0x5390dcu: goto label_5390dc;
        case 0x5390e0u: goto label_5390e0;
        case 0x5390e4u: goto label_5390e4;
        case 0x5390e8u: goto label_5390e8;
        case 0x5390ecu: goto label_5390ec;
        case 0x5390f0u: goto label_5390f0;
        case 0x5390f4u: goto label_5390f4;
        case 0x5390f8u: goto label_5390f8;
        case 0x5390fcu: goto label_5390fc;
        case 0x539100u: goto label_539100;
        case 0x539104u: goto label_539104;
        case 0x539108u: goto label_539108;
        case 0x53910cu: goto label_53910c;
        case 0x539110u: goto label_539110;
        case 0x539114u: goto label_539114;
        case 0x539118u: goto label_539118;
        case 0x53911cu: goto label_53911c;
        case 0x539120u: goto label_539120;
        case 0x539124u: goto label_539124;
        case 0x539128u: goto label_539128;
        case 0x53912cu: goto label_53912c;
        case 0x539130u: goto label_539130;
        case 0x539134u: goto label_539134;
        case 0x539138u: goto label_539138;
        case 0x53913cu: goto label_53913c;
        case 0x539140u: goto label_539140;
        case 0x539144u: goto label_539144;
        case 0x539148u: goto label_539148;
        case 0x53914cu: goto label_53914c;
        case 0x539150u: goto label_539150;
        case 0x539154u: goto label_539154;
        case 0x539158u: goto label_539158;
        case 0x53915cu: goto label_53915c;
        case 0x539160u: goto label_539160;
        case 0x539164u: goto label_539164;
        case 0x539168u: goto label_539168;
        case 0x53916cu: goto label_53916c;
        case 0x539170u: goto label_539170;
        case 0x539174u: goto label_539174;
        case 0x539178u: goto label_539178;
        case 0x53917cu: goto label_53917c;
        case 0x539180u: goto label_539180;
        case 0x539184u: goto label_539184;
        case 0x539188u: goto label_539188;
        case 0x53918cu: goto label_53918c;
        case 0x539190u: goto label_539190;
        case 0x539194u: goto label_539194;
        case 0x539198u: goto label_539198;
        case 0x53919cu: goto label_53919c;
        case 0x5391a0u: goto label_5391a0;
        case 0x5391a4u: goto label_5391a4;
        case 0x5391a8u: goto label_5391a8;
        case 0x5391acu: goto label_5391ac;
        case 0x5391b0u: goto label_5391b0;
        case 0x5391b4u: goto label_5391b4;
        case 0x5391b8u: goto label_5391b8;
        case 0x5391bcu: goto label_5391bc;
        case 0x5391c0u: goto label_5391c0;
        case 0x5391c4u: goto label_5391c4;
        case 0x5391c8u: goto label_5391c8;
        case 0x5391ccu: goto label_5391cc;
        case 0x5391d0u: goto label_5391d0;
        case 0x5391d4u: goto label_5391d4;
        case 0x5391d8u: goto label_5391d8;
        case 0x5391dcu: goto label_5391dc;
        case 0x5391e0u: goto label_5391e0;
        case 0x5391e4u: goto label_5391e4;
        case 0x5391e8u: goto label_5391e8;
        case 0x5391ecu: goto label_5391ec;
        case 0x5391f0u: goto label_5391f0;
        case 0x5391f4u: goto label_5391f4;
        case 0x5391f8u: goto label_5391f8;
        case 0x5391fcu: goto label_5391fc;
        case 0x539200u: goto label_539200;
        case 0x539204u: goto label_539204;
        case 0x539208u: goto label_539208;
        case 0x53920cu: goto label_53920c;
        case 0x539210u: goto label_539210;
        case 0x539214u: goto label_539214;
        case 0x539218u: goto label_539218;
        case 0x53921cu: goto label_53921c;
        case 0x539220u: goto label_539220;
        case 0x539224u: goto label_539224;
        case 0x539228u: goto label_539228;
        case 0x53922cu: goto label_53922c;
        case 0x539230u: goto label_539230;
        case 0x539234u: goto label_539234;
        case 0x539238u: goto label_539238;
        case 0x53923cu: goto label_53923c;
        case 0x539240u: goto label_539240;
        case 0x539244u: goto label_539244;
        case 0x539248u: goto label_539248;
        case 0x53924cu: goto label_53924c;
        case 0x539250u: goto label_539250;
        case 0x539254u: goto label_539254;
        case 0x539258u: goto label_539258;
        case 0x53925cu: goto label_53925c;
        case 0x539260u: goto label_539260;
        case 0x539264u: goto label_539264;
        case 0x539268u: goto label_539268;
        case 0x53926cu: goto label_53926c;
        case 0x539270u: goto label_539270;
        case 0x539274u: goto label_539274;
        case 0x539278u: goto label_539278;
        case 0x53927cu: goto label_53927c;
        case 0x539280u: goto label_539280;
        case 0x539284u: goto label_539284;
        case 0x539288u: goto label_539288;
        case 0x53928cu: goto label_53928c;
        case 0x539290u: goto label_539290;
        case 0x539294u: goto label_539294;
        case 0x539298u: goto label_539298;
        case 0x53929cu: goto label_53929c;
        case 0x5392a0u: goto label_5392a0;
        case 0x5392a4u: goto label_5392a4;
        case 0x5392a8u: goto label_5392a8;
        case 0x5392acu: goto label_5392ac;
        case 0x5392b0u: goto label_5392b0;
        case 0x5392b4u: goto label_5392b4;
        case 0x5392b8u: goto label_5392b8;
        case 0x5392bcu: goto label_5392bc;
        case 0x5392c0u: goto label_5392c0;
        case 0x5392c4u: goto label_5392c4;
        case 0x5392c8u: goto label_5392c8;
        case 0x5392ccu: goto label_5392cc;
        case 0x5392d0u: goto label_5392d0;
        case 0x5392d4u: goto label_5392d4;
        case 0x5392d8u: goto label_5392d8;
        case 0x5392dcu: goto label_5392dc;
        case 0x5392e0u: goto label_5392e0;
        case 0x5392e4u: goto label_5392e4;
        case 0x5392e8u: goto label_5392e8;
        case 0x5392ecu: goto label_5392ec;
        case 0x5392f0u: goto label_5392f0;
        case 0x5392f4u: goto label_5392f4;
        case 0x5392f8u: goto label_5392f8;
        case 0x5392fcu: goto label_5392fc;
        case 0x539300u: goto label_539300;
        case 0x539304u: goto label_539304;
        case 0x539308u: goto label_539308;
        case 0x53930cu: goto label_53930c;
        case 0x539310u: goto label_539310;
        case 0x539314u: goto label_539314;
        case 0x539318u: goto label_539318;
        case 0x53931cu: goto label_53931c;
        case 0x539320u: goto label_539320;
        case 0x539324u: goto label_539324;
        case 0x539328u: goto label_539328;
        case 0x53932cu: goto label_53932c;
        case 0x539330u: goto label_539330;
        case 0x539334u: goto label_539334;
        case 0x539338u: goto label_539338;
        case 0x53933cu: goto label_53933c;
        case 0x539340u: goto label_539340;
        case 0x539344u: goto label_539344;
        case 0x539348u: goto label_539348;
        case 0x53934cu: goto label_53934c;
        case 0x539350u: goto label_539350;
        case 0x539354u: goto label_539354;
        case 0x539358u: goto label_539358;
        case 0x53935cu: goto label_53935c;
        case 0x539360u: goto label_539360;
        case 0x539364u: goto label_539364;
        case 0x539368u: goto label_539368;
        case 0x53936cu: goto label_53936c;
        case 0x539370u: goto label_539370;
        case 0x539374u: goto label_539374;
        case 0x539378u: goto label_539378;
        case 0x53937cu: goto label_53937c;
        case 0x539380u: goto label_539380;
        case 0x539384u: goto label_539384;
        case 0x539388u: goto label_539388;
        case 0x53938cu: goto label_53938c;
        case 0x539390u: goto label_539390;
        case 0x539394u: goto label_539394;
        case 0x539398u: goto label_539398;
        case 0x53939cu: goto label_53939c;
        case 0x5393a0u: goto label_5393a0;
        case 0x5393a4u: goto label_5393a4;
        case 0x5393a8u: goto label_5393a8;
        case 0x5393acu: goto label_5393ac;
        case 0x5393b0u: goto label_5393b0;
        case 0x5393b4u: goto label_5393b4;
        case 0x5393b8u: goto label_5393b8;
        case 0x5393bcu: goto label_5393bc;
        case 0x5393c0u: goto label_5393c0;
        case 0x5393c4u: goto label_5393c4;
        case 0x5393c8u: goto label_5393c8;
        case 0x5393ccu: goto label_5393cc;
        case 0x5393d0u: goto label_5393d0;
        case 0x5393d4u: goto label_5393d4;
        case 0x5393d8u: goto label_5393d8;
        case 0x5393dcu: goto label_5393dc;
        case 0x5393e0u: goto label_5393e0;
        case 0x5393e4u: goto label_5393e4;
        case 0x5393e8u: goto label_5393e8;
        case 0x5393ecu: goto label_5393ec;
        case 0x5393f0u: goto label_5393f0;
        case 0x5393f4u: goto label_5393f4;
        case 0x5393f8u: goto label_5393f8;
        case 0x5393fcu: goto label_5393fc;
        case 0x539400u: goto label_539400;
        case 0x539404u: goto label_539404;
        case 0x539408u: goto label_539408;
        case 0x53940cu: goto label_53940c;
        case 0x539410u: goto label_539410;
        case 0x539414u: goto label_539414;
        case 0x539418u: goto label_539418;
        case 0x53941cu: goto label_53941c;
        case 0x539420u: goto label_539420;
        case 0x539424u: goto label_539424;
        case 0x539428u: goto label_539428;
        case 0x53942cu: goto label_53942c;
        case 0x539430u: goto label_539430;
        case 0x539434u: goto label_539434;
        case 0x539438u: goto label_539438;
        case 0x53943cu: goto label_53943c;
        case 0x539440u: goto label_539440;
        case 0x539444u: goto label_539444;
        case 0x539448u: goto label_539448;
        case 0x53944cu: goto label_53944c;
        case 0x539450u: goto label_539450;
        case 0x539454u: goto label_539454;
        case 0x539458u: goto label_539458;
        case 0x53945cu: goto label_53945c;
        case 0x539460u: goto label_539460;
        case 0x539464u: goto label_539464;
        case 0x539468u: goto label_539468;
        case 0x53946cu: goto label_53946c;
        case 0x539470u: goto label_539470;
        case 0x539474u: goto label_539474;
        case 0x539478u: goto label_539478;
        case 0x53947cu: goto label_53947c;
        case 0x539480u: goto label_539480;
        case 0x539484u: goto label_539484;
        case 0x539488u: goto label_539488;
        case 0x53948cu: goto label_53948c;
        case 0x539490u: goto label_539490;
        case 0x539494u: goto label_539494;
        case 0x539498u: goto label_539498;
        case 0x53949cu: goto label_53949c;
        case 0x5394a0u: goto label_5394a0;
        case 0x5394a4u: goto label_5394a4;
        case 0x5394a8u: goto label_5394a8;
        case 0x5394acu: goto label_5394ac;
        case 0x5394b0u: goto label_5394b0;
        case 0x5394b4u: goto label_5394b4;
        case 0x5394b8u: goto label_5394b8;
        case 0x5394bcu: goto label_5394bc;
        case 0x5394c0u: goto label_5394c0;
        case 0x5394c4u: goto label_5394c4;
        case 0x5394c8u: goto label_5394c8;
        case 0x5394ccu: goto label_5394cc;
        case 0x5394d0u: goto label_5394d0;
        case 0x5394d4u: goto label_5394d4;
        case 0x5394d8u: goto label_5394d8;
        case 0x5394dcu: goto label_5394dc;
        case 0x5394e0u: goto label_5394e0;
        case 0x5394e4u: goto label_5394e4;
        case 0x5394e8u: goto label_5394e8;
        case 0x5394ecu: goto label_5394ec;
        case 0x5394f0u: goto label_5394f0;
        case 0x5394f4u: goto label_5394f4;
        case 0x5394f8u: goto label_5394f8;
        case 0x5394fcu: goto label_5394fc;
        case 0x539500u: goto label_539500;
        case 0x539504u: goto label_539504;
        case 0x539508u: goto label_539508;
        case 0x53950cu: goto label_53950c;
        case 0x539510u: goto label_539510;
        case 0x539514u: goto label_539514;
        case 0x539518u: goto label_539518;
        case 0x53951cu: goto label_53951c;
        case 0x539520u: goto label_539520;
        case 0x539524u: goto label_539524;
        case 0x539528u: goto label_539528;
        case 0x53952cu: goto label_53952c;
        case 0x539530u: goto label_539530;
        case 0x539534u: goto label_539534;
        case 0x539538u: goto label_539538;
        case 0x53953cu: goto label_53953c;
        case 0x539540u: goto label_539540;
        case 0x539544u: goto label_539544;
        case 0x539548u: goto label_539548;
        case 0x53954cu: goto label_53954c;
        case 0x539550u: goto label_539550;
        case 0x539554u: goto label_539554;
        case 0x539558u: goto label_539558;
        case 0x53955cu: goto label_53955c;
        case 0x539560u: goto label_539560;
        case 0x539564u: goto label_539564;
        case 0x539568u: goto label_539568;
        case 0x53956cu: goto label_53956c;
        case 0x539570u: goto label_539570;
        case 0x539574u: goto label_539574;
        case 0x539578u: goto label_539578;
        case 0x53957cu: goto label_53957c;
        case 0x539580u: goto label_539580;
        case 0x539584u: goto label_539584;
        case 0x539588u: goto label_539588;
        case 0x53958cu: goto label_53958c;
        case 0x539590u: goto label_539590;
        case 0x539594u: goto label_539594;
        case 0x539598u: goto label_539598;
        case 0x53959cu: goto label_53959c;
        case 0x5395a0u: goto label_5395a0;
        case 0x5395a4u: goto label_5395a4;
        case 0x5395a8u: goto label_5395a8;
        case 0x5395acu: goto label_5395ac;
        case 0x5395b0u: goto label_5395b0;
        case 0x5395b4u: goto label_5395b4;
        case 0x5395b8u: goto label_5395b8;
        case 0x5395bcu: goto label_5395bc;
        case 0x5395c0u: goto label_5395c0;
        case 0x5395c4u: goto label_5395c4;
        case 0x5395c8u: goto label_5395c8;
        case 0x5395ccu: goto label_5395cc;
        case 0x5395d0u: goto label_5395d0;
        case 0x5395d4u: goto label_5395d4;
        case 0x5395d8u: goto label_5395d8;
        case 0x5395dcu: goto label_5395dc;
        case 0x5395e0u: goto label_5395e0;
        case 0x5395e4u: goto label_5395e4;
        case 0x5395e8u: goto label_5395e8;
        case 0x5395ecu: goto label_5395ec;
        default: break;
    }

    ctx->pc = 0x538680u;

label_538680:
    // 0x538680: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x538680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_538684:
    // 0x538684: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x538684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_538688:
    // 0x538688: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x538688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_53868c:
    // 0x53868c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x53868cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_538690:
    // 0x538690: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x538690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_538694:
    // 0x538694: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x538694u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_538698:
    // 0x538698: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x538698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_53869c:
    // 0x53869c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x53869cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_5386a0:
    // 0x5386a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5386a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5386a4:
    // 0x5386a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5386a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5386a8:
    // 0x5386a8: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x5386a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_5386ac:
    // 0x5386ac: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x5386acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_5386b0:
    // 0x5386b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x5386b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5386b4:
    // 0x5386b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5386b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5386b8:
    // 0x5386b8: 0xc04f278  jal         func_13C9E0
label_5386bc:
    if (ctx->pc == 0x5386BCu) {
        ctx->pc = 0x5386BCu;
            // 0x5386bc: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x5386C0u;
        goto label_5386c0;
    }
    ctx->pc = 0x5386B8u;
    SET_GPR_U32(ctx, 31, 0x5386C0u);
    ctx->pc = 0x5386BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5386B8u;
            // 0x5386bc: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5386C0u; }
        if (ctx->pc != 0x5386C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5386C0u; }
        if (ctx->pc != 0x5386C0u) { return; }
    }
    ctx->pc = 0x5386C0u;
label_5386c0:
    // 0x5386c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5386c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5386c4:
    // 0x5386c4: 0xc04ce80  jal         func_133A00
label_5386c8:
    if (ctx->pc == 0x5386C8u) {
        ctx->pc = 0x5386C8u;
            // 0x5386c8: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x5386CCu;
        goto label_5386cc;
    }
    ctx->pc = 0x5386C4u;
    SET_GPR_U32(ctx, 31, 0x5386CCu);
    ctx->pc = 0x5386C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5386C4u;
            // 0x5386c8: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5386CCu; }
        if (ctx->pc != 0x5386CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5386CCu; }
        if (ctx->pc != 0x5386CCu) { return; }
    }
    ctx->pc = 0x5386CCu;
label_5386cc:
    // 0x5386cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5386ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5386d0:
    // 0x5386d0: 0x9206004c  lbu         $a2, 0x4C($s0)
    ctx->pc = 0x5386d0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
label_5386d4:
    // 0x5386d4: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x5386d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_5386d8:
    // 0x5386d8: 0xc07698c  jal         func_1DA630
label_5386dc:
    if (ctx->pc == 0x5386DCu) {
        ctx->pc = 0x5386DCu;
            // 0x5386dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5386E0u;
        goto label_5386e0;
    }
    ctx->pc = 0x5386D8u;
    SET_GPR_U32(ctx, 31, 0x5386E0u);
    ctx->pc = 0x5386DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5386D8u;
            // 0x5386dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5386E0u; }
        if (ctx->pc != 0x5386E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5386E0u; }
        if (ctx->pc != 0x5386E0u) { return; }
    }
    ctx->pc = 0x5386E0u;
label_5386e0:
    // 0x5386e0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x5386e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_5386e4:
    // 0x5386e4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_5386e8:
    if (ctx->pc == 0x5386E8u) {
        ctx->pc = 0x5386ECu;
        goto label_5386ec;
    }
    ctx->pc = 0x5386E4u;
    {
        const bool branch_taken_0x5386e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x5386e4) {
            ctx->pc = 0x5386F4u;
            goto label_5386f4;
        }
    }
    ctx->pc = 0x5386ECu;
label_5386ec:
    // 0x5386ec: 0x10000033  b           . + 4 + (0x33 << 2)
label_5386f0:
    if (ctx->pc == 0x5386F0u) {
        ctx->pc = 0x5386F0u;
            // 0x5386f0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x5386F4u;
        goto label_5386f4;
    }
    ctx->pc = 0x5386ECu;
    {
        const bool branch_taken_0x5386ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5386F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5386ECu;
            // 0x5386f0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5386ec) {
            ctx->pc = 0x5387BCu;
            goto label_5387bc;
        }
    }
    ctx->pc = 0x5386F4u;
label_5386f4:
    // 0x5386f4: 0xc0576f4  jal         func_15DBD0
label_5386f8:
    if (ctx->pc == 0x5386F8u) {
        ctx->pc = 0x5386FCu;
        goto label_5386fc;
    }
    ctx->pc = 0x5386F4u;
    SET_GPR_U32(ctx, 31, 0x5386FCu);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5386FCu; }
        if (ctx->pc != 0x5386FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5386FCu; }
        if (ctx->pc != 0x5386FCu) { return; }
    }
    ctx->pc = 0x5386FCu;
label_5386fc:
    // 0x5386fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x5386fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_538700:
    // 0x538700: 0xc076984  jal         func_1DA610
label_538704:
    if (ctx->pc == 0x538704u) {
        ctx->pc = 0x538704u;
            // 0x538704: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x538708u;
        goto label_538708;
    }
    ctx->pc = 0x538700u;
    SET_GPR_U32(ctx, 31, 0x538708u);
    ctx->pc = 0x538704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538700u;
            // 0x538704: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538708u; }
        if (ctx->pc != 0x538708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538708u; }
        if (ctx->pc != 0x538708u) { return; }
    }
    ctx->pc = 0x538708u;
label_538708:
    // 0x538708: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x538708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_53870c:
    // 0x53870c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x53870cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_538710:
    // 0x538710: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x538710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_538714:
    // 0x538714: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x538714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_538718:
    // 0x538718: 0xc442cfc0  lwc1        $f2, -0x3040($v0)
    ctx->pc = 0x538718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_53871c:
    // 0x53871c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x53871cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_538720:
    // 0x538720: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x538720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_538724:
    // 0x538724: 0xc441cfc8  lwc1        $f1, -0x3038($v0)
    ctx->pc = 0x538724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_538728:
    // 0x538728: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x538728u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_53872c:
    // 0x53872c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x53872cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_538730:
    // 0x538730: 0xc440cfcc  lwc1        $f0, -0x3034($v0)
    ctx->pc = 0x538730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_538734:
    // 0x538734: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x538734u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_538738:
    // 0x538738: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x538738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_53873c:
    // 0x53873c: 0x8c42cfc4  lw          $v0, -0x303C($v0)
    ctx->pc = 0x53873cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954948)));
label_538740:
    // 0x538740: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x538740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_538744:
    // 0x538744: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x538744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_538748:
    // 0x538748: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x538748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53874c:
    // 0x53874c: 0xc04cca0  jal         func_133280
label_538750:
    if (ctx->pc == 0x538750u) {
        ctx->pc = 0x538750u;
            // 0x538750: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x538754u;
        goto label_538754;
    }
    ctx->pc = 0x53874Cu;
    SET_GPR_U32(ctx, 31, 0x538754u);
    ctx->pc = 0x538750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53874Cu;
            // 0x538750: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538754u; }
        if (ctx->pc != 0x538754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538754u; }
        if (ctx->pc != 0x538754u) { return; }
    }
    ctx->pc = 0x538754u;
label_538754:
    // 0x538754: 0xc076980  jal         func_1DA600
label_538758:
    if (ctx->pc == 0x538758u) {
        ctx->pc = 0x538758u;
            // 0x538758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53875Cu;
        goto label_53875c;
    }
    ctx->pc = 0x538754u;
    SET_GPR_U32(ctx, 31, 0x53875Cu);
    ctx->pc = 0x538758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538754u;
            // 0x538758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53875Cu; }
        if (ctx->pc != 0x53875Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53875Cu; }
        if (ctx->pc != 0x53875Cu) { return; }
    }
    ctx->pc = 0x53875Cu;
label_53875c:
    // 0x53875c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x53875cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_538760:
    // 0x538760: 0xc04cc34  jal         func_1330D0
label_538764:
    if (ctx->pc == 0x538764u) {
        ctx->pc = 0x538764u;
            // 0x538764: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x538768u;
        goto label_538768;
    }
    ctx->pc = 0x538760u;
    SET_GPR_U32(ctx, 31, 0x538768u);
    ctx->pc = 0x538764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538760u;
            // 0x538764: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538768u; }
        if (ctx->pc != 0x538768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538768u; }
        if (ctx->pc != 0x538768u) { return; }
    }
    ctx->pc = 0x538768u;
label_538768:
    // 0x538768: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x538768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_53876c:
    // 0x53876c: 0xc461d200  lwc1        $f1, -0x2E00($v1)
    ctx->pc = 0x53876cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_538770:
    // 0x538770: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x538770u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_538774:
    // 0x538774: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_538778:
    if (ctx->pc == 0x538778u) {
        ctx->pc = 0x538778u;
            // 0x538778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53877Cu;
        goto label_53877c;
    }
    ctx->pc = 0x538774u;
    {
        const bool branch_taken_0x538774 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x538774) {
            ctx->pc = 0x538778u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x538774u;
            // 0x538778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x538784u;
            goto label_538784;
        }
    }
    ctx->pc = 0x53877Cu;
label_53877c:
    // 0x53877c: 0x1000000f  b           . + 4 + (0xF << 2)
label_538780:
    if (ctx->pc == 0x538780u) {
        ctx->pc = 0x538780u;
            // 0x538780: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x538784u;
        goto label_538784;
    }
    ctx->pc = 0x53877Cu;
    {
        const bool branch_taken_0x53877c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x538780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53877Cu;
            // 0x538780: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53877c) {
            ctx->pc = 0x5387BCu;
            goto label_5387bc;
        }
    }
    ctx->pc = 0x538784u;
label_538784:
    // 0x538784: 0xc07697c  jal         func_1DA5F0
label_538788:
    if (ctx->pc == 0x538788u) {
        ctx->pc = 0x53878Cu;
        goto label_53878c;
    }
    ctx->pc = 0x538784u;
    SET_GPR_U32(ctx, 31, 0x53878Cu);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53878Cu; }
        if (ctx->pc != 0x53878Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53878Cu; }
        if (ctx->pc != 0x53878Cu) { return; }
    }
    ctx->pc = 0x53878Cu;
label_53878c:
    // 0x53878c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x53878cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_538790:
    // 0x538790: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x538790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_538794:
    // 0x538794: 0xc04cd60  jal         func_133580
label_538798:
    if (ctx->pc == 0x538798u) {
        ctx->pc = 0x538798u;
            // 0x538798: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53879Cu;
        goto label_53879c;
    }
    ctx->pc = 0x538794u;
    SET_GPR_U32(ctx, 31, 0x53879Cu);
    ctx->pc = 0x538798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538794u;
            // 0x538798: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53879Cu; }
        if (ctx->pc != 0x53879Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53879Cu; }
        if (ctx->pc != 0x53879Cu) { return; }
    }
    ctx->pc = 0x53879Cu;
label_53879c:
    // 0x53879c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x53879cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5387a0:
    // 0x5387a0: 0xc04c650  jal         func_131940
label_5387a4:
    if (ctx->pc == 0x5387A4u) {
        ctx->pc = 0x5387A4u;
            // 0x5387a4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x5387A8u;
        goto label_5387a8;
    }
    ctx->pc = 0x5387A0u;
    SET_GPR_U32(ctx, 31, 0x5387A8u);
    ctx->pc = 0x5387A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5387A0u;
            // 0x5387a4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5387A8u; }
        if (ctx->pc != 0x5387A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5387A8u; }
        if (ctx->pc != 0x5387A8u) { return; }
    }
    ctx->pc = 0x5387A8u;
label_5387a8:
    // 0x5387a8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x5387a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_5387ac:
    // 0x5387ac: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x5387acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_5387b0:
    // 0x5387b0: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x5387b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_5387b4:
    // 0x5387b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x5387b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_5387b8:
    // 0x5387b8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x5387b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_5387bc:
    // 0x5387bc: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x5387bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_5387c0:
    // 0x5387c0: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
label_5387c4:
    if (ctx->pc == 0x5387C4u) {
        ctx->pc = 0x5387C4u;
            // 0x5387c4: 0xae030044  sw          $v1, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x5387C8u;
        goto label_5387c8;
    }
    ctx->pc = 0x5387C0u;
    {
        const bool branch_taken_0x5387c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x5387C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5387C0u;
            // 0x5387c4: 0xae030044  sw          $v1, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5387c0) {
            ctx->pc = 0x5388A0u;
            goto label_5388a0;
        }
    }
    ctx->pc = 0x5387C8u;
label_5387c8:
    // 0x5387c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5387c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5387cc:
    // 0x5387cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5387ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5387d0:
    // 0x5387d0: 0x8c65e3c0  lw          $a1, -0x1C40($v1)
    ctx->pc = 0x5387d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_5387d4:
    // 0x5387d4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x5387d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_5387d8:
    // 0x5387d8: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x5387d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_5387dc:
    // 0x5387dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5387dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5387e0:
    // 0x5387e0: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x5387e0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_5387e4:
    // 0x5387e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5387e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5387e8:
    // 0x5387e8: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x5387e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_5387ec:
    // 0x5387ec: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x5387ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_5387f0:
    // 0x5387f0: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x5387f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_5387f4:
    // 0x5387f4: 0x86a821  addu        $s5, $a0, $a2
    ctx->pc = 0x5387f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_5387f8:
    // 0x5387f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5387f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5387fc:
    // 0x5387fc: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x5387fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_538800:
    // 0x538800: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x538800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_538804:
    // 0x538804: 0xacb50000  sw          $s5, 0x0($a1)
    ctx->pc = 0x538804u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 21));
label_538808:
    // 0x538808: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x538808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_53880c:
    // 0x53880c: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x53880cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_538810:
    // 0x538810: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x538810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_538814:
    // 0x538814: 0x8c48e378  lw          $t0, -0x1C88($v0)
    ctx->pc = 0x538814u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_538818:
    // 0x538818: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x538818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53881c:
    // 0x53881c: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x53881cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_538820:
    // 0x538820: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x538820u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_538824:
    // 0x538824: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x538824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_538828:
    // 0x538828: 0x1098821  addu        $s1, $t0, $t1
    ctx->pc = 0x538828u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_53882c:
    // 0x53882c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53882cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_538830:
    // 0x538830: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x538830u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_538834:
    // 0x538834: 0xad110000  sw          $s1, 0x0($t0)
    ctx->pc = 0x538834u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 17));
label_538838:
    // 0x538838: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x538838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_53883c:
    // 0x53883c: 0x8e480028  lw          $t0, 0x28($s2)
    ctx->pc = 0x53883cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_538840:
    // 0x538840: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x538840u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_538844:
    // 0x538844: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x538844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_538848:
    // 0x538848: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x538848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_53884c:
    // 0x53884c: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x53884cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_538850:
    // 0x538850: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x538850u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_538854:
    // 0x538854: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x538854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_538858:
    // 0x538858: 0xc04e4a4  jal         func_139290
label_53885c:
    if (ctx->pc == 0x53885Cu) {
        ctx->pc = 0x53885Cu;
            // 0x53885c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x538860u;
        goto label_538860;
    }
    ctx->pc = 0x538858u;
    SET_GPR_U32(ctx, 31, 0x538860u);
    ctx->pc = 0x53885Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538858u;
            // 0x53885c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538860u; }
        if (ctx->pc != 0x538860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538860u; }
        if (ctx->pc != 0x538860u) { return; }
    }
    ctx->pc = 0x538860u;
label_538860:
    // 0x538860: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x538860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_538864:
    // 0x538864: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x538864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_538868:
    // 0x538868: 0xc04cd60  jal         func_133580
label_53886c:
    if (ctx->pc == 0x53886Cu) {
        ctx->pc = 0x53886Cu;
            // 0x53886c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x538870u;
        goto label_538870;
    }
    ctx->pc = 0x538868u;
    SET_GPR_U32(ctx, 31, 0x538870u);
    ctx->pc = 0x53886Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538868u;
            // 0x53886c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538870u; }
        if (ctx->pc != 0x538870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538870u; }
        if (ctx->pc != 0x538870u) { return; }
    }
    ctx->pc = 0x538870u;
label_538870:
    // 0x538870: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x538870u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_538874:
    // 0x538874: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x538874u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_538878:
    // 0x538878: 0x320f809  jalr        $t9
label_53887c:
    if (ctx->pc == 0x53887Cu) {
        ctx->pc = 0x53887Cu;
            // 0x53887c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x538880u;
        goto label_538880;
    }
    ctx->pc = 0x538878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x538880u);
        ctx->pc = 0x53887Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x538878u;
            // 0x53887c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x538880u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x538880u; }
            if (ctx->pc != 0x538880u) { return; }
        }
        }
    }
    ctx->pc = 0x538880u;
label_538880:
    // 0x538880: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x538880u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_538884:
    // 0x538884: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x538884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_538888:
    // 0x538888: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x538888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53888c:
    // 0x53888c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x53888cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_538890:
    // 0x538890: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x538890u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_538894:
    // 0x538894: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x538894u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_538898:
    // 0x538898: 0xc04cfcc  jal         func_133F30
label_53889c:
    if (ctx->pc == 0x53889Cu) {
        ctx->pc = 0x53889Cu;
            // 0x53889c: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5388A0u;
        goto label_5388a0;
    }
    ctx->pc = 0x538898u;
    SET_GPR_U32(ctx, 31, 0x5388A0u);
    ctx->pc = 0x53889Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538898u;
            // 0x53889c: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5388A0u; }
        if (ctx->pc != 0x5388A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5388A0u; }
        if (ctx->pc != 0x5388A0u) { return; }
    }
    ctx->pc = 0x5388A0u;
label_5388a0:
    // 0x5388a0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x5388a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_5388a4:
    // 0x5388a4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x5388a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_5388a8:
    // 0x5388a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x5388a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_5388ac:
    // 0x5388ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x5388acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5388b0:
    // 0x5388b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5388b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5388b4:
    // 0x5388b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5388b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5388b8:
    // 0x5388b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5388b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5388bc:
    // 0x5388bc: 0x3e00008  jr          $ra
label_5388c0:
    if (ctx->pc == 0x5388C0u) {
        ctx->pc = 0x5388C0u;
            // 0x5388c0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x5388C4u;
        goto label_5388c4;
    }
    ctx->pc = 0x5388BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5388C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5388BCu;
            // 0x5388c0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5388C4u;
label_5388c4:
    // 0x5388c4: 0x0  nop
    ctx->pc = 0x5388c4u;
    // NOP
label_5388c8:
    // 0x5388c8: 0x0  nop
    ctx->pc = 0x5388c8u;
    // NOP
label_5388cc:
    // 0x5388cc: 0x0  nop
    ctx->pc = 0x5388ccu;
    // NOP
label_5388d0:
    // 0x5388d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5388d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_5388d4:
    // 0x5388d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5388d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_5388d8:
    // 0x5388d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5388d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5388dc:
    // 0x5388dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x5388dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5388e0:
    // 0x5388e0: 0x8c8400e4  lw          $a0, 0xE4($a0)
    ctx->pc = 0x5388e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
label_5388e4:
    // 0x5388e4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_5388e8:
    if (ctx->pc == 0x5388E8u) {
        ctx->pc = 0x5388E8u;
            // 0x5388e8: 0xae0000e4  sw          $zero, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
        ctx->pc = 0x5388ECu;
        goto label_5388ec;
    }
    ctx->pc = 0x5388E4u;
    {
        const bool branch_taken_0x5388e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5388e4) {
            ctx->pc = 0x5388E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5388E4u;
            // 0x5388e8: 0xae0000e4  sw          $zero, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x538900u;
            goto label_538900;
        }
    }
    ctx->pc = 0x5388ECu;
label_5388ec:
    // 0x5388ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5388ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5388f0:
    // 0x5388f0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x5388f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_5388f4:
    // 0x5388f4: 0x320f809  jalr        $t9
label_5388f8:
    if (ctx->pc == 0x5388F8u) {
        ctx->pc = 0x5388F8u;
            // 0x5388f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5388FCu;
        goto label_5388fc;
    }
    ctx->pc = 0x5388F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5388FCu);
        ctx->pc = 0x5388F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5388F4u;
            // 0x5388f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5388FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5388FCu; }
            if (ctx->pc != 0x5388FCu) { return; }
        }
        }
    }
    ctx->pc = 0x5388FCu;
label_5388fc:
    // 0x5388fc: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x5388fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_538900:
    // 0x538900: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x538900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_538904:
    // 0x538904: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_538908:
    if (ctx->pc == 0x538908u) {
        ctx->pc = 0x538908u;
            // 0x538908: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x53890Cu;
        goto label_53890c;
    }
    ctx->pc = 0x538904u;
    {
        const bool branch_taken_0x538904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x538904) {
            ctx->pc = 0x538908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x538904u;
            // 0x538908: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x538920u;
            goto label_538920;
        }
    }
    ctx->pc = 0x53890Cu;
label_53890c:
    // 0x53890c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x53890cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_538910:
    // 0x538910: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x538910u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_538914:
    // 0x538914: 0x320f809  jalr        $t9
label_538918:
    if (ctx->pc == 0x538918u) {
        ctx->pc = 0x538918u;
            // 0x538918: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53891Cu;
        goto label_53891c;
    }
    ctx->pc = 0x538914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53891Cu);
        ctx->pc = 0x538918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x538914u;
            // 0x538918: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53891Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53891Cu; }
            if (ctx->pc != 0x53891Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53891Cu;
label_53891c:
    // 0x53891c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x53891cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_538920:
    // 0x538920: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x538920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_538924:
    // 0x538924: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_538928:
    if (ctx->pc == 0x538928u) {
        ctx->pc = 0x538928u;
            // 0x538928: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x53892Cu;
        goto label_53892c;
    }
    ctx->pc = 0x538924u;
    {
        const bool branch_taken_0x538924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x538924) {
            ctx->pc = 0x538928u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x538924u;
            // 0x538928: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x538940u;
            goto label_538940;
        }
    }
    ctx->pc = 0x53892Cu;
label_53892c:
    // 0x53892c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53892cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_538930:
    // 0x538930: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x538930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_538934:
    // 0x538934: 0x320f809  jalr        $t9
label_538938:
    if (ctx->pc == 0x538938u) {
        ctx->pc = 0x538938u;
            // 0x538938: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53893Cu;
        goto label_53893c;
    }
    ctx->pc = 0x538934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53893Cu);
        ctx->pc = 0x538938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x538934u;
            // 0x538938: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53893Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53893Cu; }
            if (ctx->pc != 0x53893Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53893Cu;
label_53893c:
    // 0x53893c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x53893cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_538940:
    // 0x538940: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x538940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_538944:
    // 0x538944: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x538944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_538948:
    // 0x538948: 0x3e00008  jr          $ra
label_53894c:
    if (ctx->pc == 0x53894Cu) {
        ctx->pc = 0x53894Cu;
            // 0x53894c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x538950u;
        goto label_538950;
    }
    ctx->pc = 0x538948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53894Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x538948u;
            // 0x53894c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x538950u;
label_538950:
    // 0x538950: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x538950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_538954:
    // 0x538954: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x538954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_538958:
    // 0x538958: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x538958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_53895c:
    // 0x53895c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53895cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_538960:
    // 0x538960: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x538960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_538964:
    // 0x538964: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x538964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_538968:
    // 0x538968: 0x14600108  bnez        $v1, . + 4 + (0x108 << 2)
label_53896c:
    if (ctx->pc == 0x53896Cu) {
        ctx->pc = 0x53896Cu;
            // 0x53896c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x538970u;
        goto label_538970;
    }
    ctx->pc = 0x538968u;
    {
        const bool branch_taken_0x538968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x53896Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x538968u;
            // 0x53896c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x538968) {
            ctx->pc = 0x538D8Cu;
            goto label_538d8c;
        }
    }
    ctx->pc = 0x538970u;
label_538970:
    // 0x538970: 0xc0892d0  jal         func_224B40
label_538974:
    if (ctx->pc == 0x538974u) {
        ctx->pc = 0x538974u;
            // 0x538974: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x538978u;
        goto label_538978;
    }
    ctx->pc = 0x538970u;
    SET_GPR_U32(ctx, 31, 0x538978u);
    ctx->pc = 0x538974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538970u;
            // 0x538974: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538978u; }
        if (ctx->pc != 0x538978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538978u; }
        if (ctx->pc != 0x538978u) { return; }
    }
    ctx->pc = 0x538978u;
label_538978:
    // 0x538978: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x538978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_53897c:
    // 0x53897c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x53897cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_538980:
    // 0x538980: 0xc442d1f0  lwc1        $f2, -0x2E10($v0)
    ctx->pc = 0x538980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_538984:
    // 0x538984: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x538984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_538988:
    // 0x538988: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x538988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
label_53898c:
    // 0x53898c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x53898cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_538990:
    // 0x538990: 0xc441d1f4  lwc1        $f1, -0x2E0C($v0)
    ctx->pc = 0x538990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_538994:
    // 0x538994: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x538994u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_538998:
    // 0x538998: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x538998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_53899c:
    // 0x53899c: 0xc440d1f8  lwc1        $f0, -0x2E08($v0)
    ctx->pc = 0x53899cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5389a0:
    // 0x5389a0: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x5389a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_5389a4:
    // 0x5389a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5389a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5389a8:
    // 0x5389a8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x5389a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_5389ac:
    // 0x5389ac: 0xc0a7a88  jal         func_29EA20
label_5389b0:
    if (ctx->pc == 0x5389B0u) {
        ctx->pc = 0x5389B0u;
            // 0x5389b0: 0xe7a000b8  swc1        $f0, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->pc = 0x5389B4u;
        goto label_5389b4;
    }
    ctx->pc = 0x5389ACu;
    SET_GPR_U32(ctx, 31, 0x5389B4u);
    ctx->pc = 0x5389B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5389ACu;
            // 0x5389b0: 0xe7a000b8  swc1        $f0, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5389B4u; }
        if (ctx->pc != 0x5389B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5389B4u; }
        if (ctx->pc != 0x5389B4u) { return; }
    }
    ctx->pc = 0x5389B4u;
label_5389b4:
    // 0x5389b4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x5389b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_5389b8:
    // 0x5389b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x5389b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5389bc:
    // 0x5389bc: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_5389c0:
    if (ctx->pc == 0x5389C0u) {
        ctx->pc = 0x5389C0u;
            // 0x5389c0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x5389C4u;
        goto label_5389c4;
    }
    ctx->pc = 0x5389BCu;
    {
        const bool branch_taken_0x5389bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x5389C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5389BCu;
            // 0x5389c0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5389bc) {
            ctx->pc = 0x5389D8u;
            goto label_5389d8;
        }
    }
    ctx->pc = 0x5389C4u;
label_5389c4:
    // 0x5389c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5389c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5389c8:
    // 0x5389c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x5389c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5389cc:
    // 0x5389cc: 0xc0804bc  jal         func_2012F0
label_5389d0:
    if (ctx->pc == 0x5389D0u) {
        ctx->pc = 0x5389D0u;
            // 0x5389d0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x5389D4u;
        goto label_5389d4;
    }
    ctx->pc = 0x5389CCu;
    SET_GPR_U32(ctx, 31, 0x5389D4u);
    ctx->pc = 0x5389D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5389CCu;
            // 0x5389d0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5389D4u; }
        if (ctx->pc != 0x5389D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5389D4u; }
        if (ctx->pc != 0x5389D4u) { return; }
    }
    ctx->pc = 0x5389D4u;
label_5389d4:
    // 0x5389d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x5389d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5389d8:
    // 0x5389d8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x5389d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_5389dc:
    // 0x5389dc: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x5389dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_5389e0:
    // 0x5389e0: 0xc0b6e68  jal         func_2DB9A0
label_5389e4:
    if (ctx->pc == 0x5389E4u) {
        ctx->pc = 0x5389E4u;
            // 0x5389e4: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->pc = 0x5389E8u;
        goto label_5389e8;
    }
    ctx->pc = 0x5389E0u;
    SET_GPR_U32(ctx, 31, 0x5389E8u);
    ctx->pc = 0x5389E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5389E0u;
            // 0x5389e4: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5389E8u; }
        if (ctx->pc != 0x5389E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5389E8u; }
        if (ctx->pc != 0x5389E8u) { return; }
    }
    ctx->pc = 0x5389E8u;
label_5389e8:
    // 0x5389e8: 0xc0b6dac  jal         func_2DB6B0
label_5389ec:
    if (ctx->pc == 0x5389ECu) {
        ctx->pc = 0x5389ECu;
            // 0x5389ec: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x5389F0u;
        goto label_5389f0;
    }
    ctx->pc = 0x5389E8u;
    SET_GPR_U32(ctx, 31, 0x5389F0u);
    ctx->pc = 0x5389ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5389E8u;
            // 0x5389ec: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5389F0u; }
        if (ctx->pc != 0x5389F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5389F0u; }
        if (ctx->pc != 0x5389F0u) { return; }
    }
    ctx->pc = 0x5389F0u;
label_5389f0:
    // 0x5389f0: 0xc0cac94  jal         func_32B250
label_5389f4:
    if (ctx->pc == 0x5389F4u) {
        ctx->pc = 0x5389F4u;
            // 0x5389f4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x5389F8u;
        goto label_5389f8;
    }
    ctx->pc = 0x5389F0u;
    SET_GPR_U32(ctx, 31, 0x5389F8u);
    ctx->pc = 0x5389F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5389F0u;
            // 0x5389f4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5389F8u; }
        if (ctx->pc != 0x5389F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5389F8u; }
        if (ctx->pc != 0x5389F8u) { return; }
    }
    ctx->pc = 0x5389F8u;
label_5389f8:
    // 0x5389f8: 0xc0cac84  jal         func_32B210
label_5389fc:
    if (ctx->pc == 0x5389FCu) {
        ctx->pc = 0x5389FCu;
            // 0x5389fc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x538A00u;
        goto label_538a00;
    }
    ctx->pc = 0x5389F8u;
    SET_GPR_U32(ctx, 31, 0x538A00u);
    ctx->pc = 0x5389FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5389F8u;
            // 0x5389fc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538A00u; }
        if (ctx->pc != 0x538A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538A00u; }
        if (ctx->pc != 0x538A00u) { return; }
    }
    ctx->pc = 0x538A00u;
label_538a00:
    // 0x538a00: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x538a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_538a04:
    // 0x538a04: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x538a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_538a08:
    // 0x538a08: 0xc44cc930  lwc1        $f12, -0x36D0($v0)
    ctx->pc = 0x538a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_538a0c:
    // 0x538a0c: 0xc0a5a68  jal         func_2969A0
label_538a10:
    if (ctx->pc == 0x538A10u) {
        ctx->pc = 0x538A10u;
            // 0x538a10: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x538A14u;
        goto label_538a14;
    }
    ctx->pc = 0x538A0Cu;
    SET_GPR_U32(ctx, 31, 0x538A14u);
    ctx->pc = 0x538A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538A0Cu;
            // 0x538a10: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538A14u; }
        if (ctx->pc != 0x538A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538A14u; }
        if (ctx->pc != 0x538A14u) { return; }
    }
    ctx->pc = 0x538A14u;
label_538a14:
    // 0x538a14: 0xafb100c4  sw          $s1, 0xC4($sp)
    ctx->pc = 0x538a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 17));
label_538a18:
    // 0x538a18: 0x3c023f05  lui         $v0, 0x3F05
    ctx->pc = 0x538a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16133 << 16));
label_538a1c:
    // 0x538a1c: 0xc6460018  lwc1        $f6, 0x18($s2)
    ctx->pc = 0x538a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_538a20:
    // 0x538a20: 0x34471eb8  ori         $a3, $v0, 0x1EB8
    ctx->pc = 0x538a20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7864);
label_538a24:
    // 0x538a24: 0xc6450014  lwc1        $f5, 0x14($s2)
    ctx->pc = 0x538a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_538a28:
    // 0x538a28: 0x3c0200c0  lui         $v0, 0xC0
    ctx->pc = 0x538a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)192 << 16));
label_538a2c:
    // 0x538a2c: 0xc6440010  lwc1        $f4, 0x10($s2)
    ctx->pc = 0x538a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_538a30:
    // 0x538a30: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x538a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_538a34:
    // 0x538a34: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x538a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_538a38:
    // 0x538a38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x538a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_538a3c:
    // 0x538a3c: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x538a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_538a40:
    // 0x538a40: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x538a40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_538a44:
    // 0x538a44: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x538a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_538a48:
    // 0x538a48: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x538a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_538a4c:
    // 0x538a4c: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x538a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_538a50:
    // 0x538a50: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x538a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_538a54:
    // 0x538a54: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x538a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_538a58:
    // 0x538a58: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x538a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_538a5c:
    // 0x538a5c: 0xe7a20114  swc1        $f2, 0x114($sp)
    ctx->pc = 0x538a5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_538a60:
    // 0x538a60: 0xa3a80170  sb          $t0, 0x170($sp)
    ctx->pc = 0x538a60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 8));
label_538a64:
    // 0x538a64: 0xe7a10118  swc1        $f1, 0x118($sp)
    ctx->pc = 0x538a64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_538a68:
    // 0x538a68: 0xafa7016c  sw          $a3, 0x16C($sp)
    ctx->pc = 0x538a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 7));
label_538a6c:
    // 0x538a6c: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x538a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_538a70:
    // 0x538a70: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x538a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_538a74:
    // 0x538a74: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x538a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_538a78:
    // 0x538a78: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x538a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_538a7c:
    // 0x538a7c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x538a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_538a80:
    // 0x538a80: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x538a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_538a84:
    // 0x538a84: 0xe7a20120  swc1        $f2, 0x120($sp)
    ctx->pc = 0x538a84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_538a88:
    // 0x538a88: 0xe7a10124  swc1        $f1, 0x124($sp)
    ctx->pc = 0x538a88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_538a8c:
    // 0x538a8c: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x538a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_538a90:
    // 0x538a90: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x538a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_538a94:
    // 0x538a94: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x538a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_538a98:
    // 0x538a98: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x538a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_538a9c:
    // 0x538a9c: 0xe7a2012c  swc1        $f2, 0x12C($sp)
    ctx->pc = 0x538a9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_538aa0:
    // 0x538aa0: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x538aa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_538aa4:
    // 0x538aa4: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x538aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_538aa8:
    // 0x538aa8: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x538aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_538aac:
    // 0x538aac: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x538aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_538ab0:
    // 0x538ab0: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x538ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_538ab4:
    // 0x538ab4: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x538ab4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_538ab8:
    // 0x538ab8: 0xe7a1013c  swc1        $f1, 0x13C($sp)
    ctx->pc = 0x538ab8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_538abc:
    // 0x538abc: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x538abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_538ac0:
    // 0x538ac0: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x538ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_538ac4:
    // 0x538ac4: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x538ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_538ac8:
    // 0x538ac8: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x538ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_538acc:
    // 0x538acc: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x538accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_538ad0:
    // 0x538ad0: 0xe7a400d0  swc1        $f4, 0xD0($sp)
    ctx->pc = 0x538ad0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_538ad4:
    // 0x538ad4: 0xe7a500d4  swc1        $f5, 0xD4($sp)
    ctx->pc = 0x538ad4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_538ad8:
    // 0x538ad8: 0xe7a600d8  swc1        $f6, 0xD8($sp)
    ctx->pc = 0x538ad8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_538adc:
    // 0x538adc: 0xe7a30110  swc1        $f3, 0x110($sp)
    ctx->pc = 0x538adcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_538ae0:
    // 0x538ae0: 0xe7a20144  swc1        $f2, 0x144($sp)
    ctx->pc = 0x538ae0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_538ae4:
    // 0x538ae4: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x538ae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_538ae8:
    // 0x538ae8: 0xc0a7a88  jal         func_29EA20
label_538aec:
    if (ctx->pc == 0x538AECu) {
        ctx->pc = 0x538AECu;
            // 0x538aec: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x538AF0u;
        goto label_538af0;
    }
    ctx->pc = 0x538AE8u;
    SET_GPR_U32(ctx, 31, 0x538AF0u);
    ctx->pc = 0x538AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538AE8u;
            // 0x538aec: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538AF0u; }
        if (ctx->pc != 0x538AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538AF0u; }
        if (ctx->pc != 0x538AF0u) { return; }
    }
    ctx->pc = 0x538AF0u;
label_538af0:
    // 0x538af0: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x538af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_538af4:
    // 0x538af4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x538af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_538af8:
    // 0x538af8: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_538afc:
    if (ctx->pc == 0x538AFCu) {
        ctx->pc = 0x538AFCu;
            // 0x538afc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x538B00u;
        goto label_538b00;
    }
    ctx->pc = 0x538AF8u;
    {
        const bool branch_taken_0x538af8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x538AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x538AF8u;
            // 0x538afc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x538af8) {
            ctx->pc = 0x538B48u;
            goto label_538b48;
        }
    }
    ctx->pc = 0x538B00u;
label_538b00:
    // 0x538b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x538b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_538b04:
    // 0x538b04: 0xc088ef4  jal         func_223BD0
label_538b08:
    if (ctx->pc == 0x538B08u) {
        ctx->pc = 0x538B08u;
            // 0x538b08: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x538B0Cu;
        goto label_538b0c;
    }
    ctx->pc = 0x538B04u;
    SET_GPR_U32(ctx, 31, 0x538B0Cu);
    ctx->pc = 0x538B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538B04u;
            // 0x538b08: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538B0Cu; }
        if (ctx->pc != 0x538B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538B0Cu; }
        if (ctx->pc != 0x538B0Cu) { return; }
    }
    ctx->pc = 0x538B0Cu;
label_538b0c:
    // 0x538b0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x538b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_538b10:
    // 0x538b10: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x538b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_538b14:
    // 0x538b14: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x538b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_538b18:
    // 0x538b18: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x538b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_538b1c:
    // 0x538b1c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x538b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_538b20:
    // 0x538b20: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x538b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_538b24:
    // 0x538b24: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x538b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_538b28:
    // 0x538b28: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x538b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_538b2c:
    // 0x538b2c: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x538b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_538b30:
    // 0x538b30: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x538b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_538b34:
    // 0x538b34: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x538b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
label_538b38:
    // 0x538b38: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x538b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_538b3c:
    // 0x538b3c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x538b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_538b40:
    // 0x538b40: 0xc088b38  jal         func_222CE0
label_538b44:
    if (ctx->pc == 0x538B44u) {
        ctx->pc = 0x538B44u;
            // 0x538b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x538B48u;
        goto label_538b48;
    }
    ctx->pc = 0x538B40u;
    SET_GPR_U32(ctx, 31, 0x538B48u);
    ctx->pc = 0x538B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538B40u;
            // 0x538b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538B48u; }
        if (ctx->pc != 0x538B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538B48u; }
        if (ctx->pc != 0x538B48u) { return; }
    }
    ctx->pc = 0x538B48u;
label_538b48:
    // 0x538b48: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x538b48u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_538b4c:
    // 0x538b4c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_538b50:
    if (ctx->pc == 0x538B50u) {
        ctx->pc = 0x538B54u;
        goto label_538b54;
    }
    ctx->pc = 0x538B4Cu;
    {
        const bool branch_taken_0x538b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x538b4c) {
            ctx->pc = 0x538B8Cu;
            goto label_538b8c;
        }
    }
    ctx->pc = 0x538B54u;
label_538b54:
    // 0x538b54: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x538b54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_538b58:
    // 0x538b58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x538b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_538b5c:
    // 0x538b5c: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x538b5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
label_538b60:
    // 0x538b60: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x538b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_538b64:
    // 0x538b64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x538b64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_538b68:
    // 0x538b68: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_538b6c:
    if (ctx->pc == 0x538B6Cu) {
        ctx->pc = 0x538B70u;
        goto label_538b70;
    }
    ctx->pc = 0x538B68u;
    {
        const bool branch_taken_0x538b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x538b68) {
            ctx->pc = 0x538B8Cu;
            goto label_538b8c;
        }
    }
    ctx->pc = 0x538B70u;
label_538b70:
    // 0x538b70: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_538b74:
    if (ctx->pc == 0x538B74u) {
        ctx->pc = 0x538B78u;
        goto label_538b78;
    }
    ctx->pc = 0x538B70u;
    {
        const bool branch_taken_0x538b70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x538b70) {
            ctx->pc = 0x538B8Cu;
            goto label_538b8c;
        }
    }
    ctx->pc = 0x538B78u;
label_538b78:
    // 0x538b78: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x538b78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_538b7c:
    // 0x538b7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x538b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_538b80:
    // 0x538b80: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x538b80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_538b84:
    // 0x538b84: 0x320f809  jalr        $t9
label_538b88:
    if (ctx->pc == 0x538B88u) {
        ctx->pc = 0x538B88u;
            // 0x538b88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x538B8Cu;
        goto label_538b8c;
    }
    ctx->pc = 0x538B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x538B8Cu);
        ctx->pc = 0x538B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x538B84u;
            // 0x538b88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x538B8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x538B8Cu; }
            if (ctx->pc != 0x538B8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x538B8Cu;
label_538b8c:
    // 0x538b8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x538b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_538b90:
    // 0x538b90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x538b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_538b94:
    // 0x538b94: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x538b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_538b98:
    // 0x538b98: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x538b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_538b9c:
    // 0x538b9c: 0xc08c164  jal         func_230590
label_538ba0:
    if (ctx->pc == 0x538BA0u) {
        ctx->pc = 0x538BA0u;
            // 0x538ba0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x538BA4u;
        goto label_538ba4;
    }
    ctx->pc = 0x538B9Cu;
    SET_GPR_U32(ctx, 31, 0x538BA4u);
    ctx->pc = 0x538BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538B9Cu;
            // 0x538ba0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538BA4u; }
        if (ctx->pc != 0x538BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538BA4u; }
        if (ctx->pc != 0x538BA4u) { return; }
    }
    ctx->pc = 0x538BA4u;
label_538ba4:
    // 0x538ba4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x538ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_538ba8:
    // 0x538ba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x538ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_538bac:
    // 0x538bac: 0x24425f20  addiu       $v0, $v0, 0x5F20
    ctx->pc = 0x538bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24352));
label_538bb0:
    // 0x538bb0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x538bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_538bb4:
    // 0x538bb4: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x538bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
label_538bb8:
    // 0x538bb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x538bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_538bbc:
    // 0x538bbc: 0xc08914c  jal         func_224530
label_538bc0:
    if (ctx->pc == 0x538BC0u) {
        ctx->pc = 0x538BC0u;
            // 0x538bc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x538BC4u;
        goto label_538bc4;
    }
    ctx->pc = 0x538BBCu;
    SET_GPR_U32(ctx, 31, 0x538BC4u);
    ctx->pc = 0x538BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538BBCu;
            // 0x538bc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538BC4u; }
        if (ctx->pc != 0x538BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538BC4u; }
        if (ctx->pc != 0x538BC4u) { return; }
    }
    ctx->pc = 0x538BC4u;
label_538bc4:
    // 0x538bc4: 0x3c0343d1  lui         $v1, 0x43D1
    ctx->pc = 0x538bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17361 << 16));
label_538bc8:
    // 0x538bc8: 0x3c023fdf  lui         $v0, 0x3FDF
    ctx->pc = 0x538bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16351 << 16));
label_538bcc:
    // 0x538bcc: 0x34637084  ori         $v1, $v1, 0x7084
    ctx->pc = 0x538bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28804);
label_538bd0:
    // 0x538bd0: 0x344266f3  ori         $v0, $v0, 0x66F3
    ctx->pc = 0x538bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26355);
label_538bd4:
    // 0x538bd4: 0xae030154  sw          $v1, 0x154($s0)
    ctx->pc = 0x538bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 3));
label_538bd8:
    // 0x538bd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x538bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_538bdc:
    // 0x538bdc: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x538bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
label_538be0:
    // 0x538be0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x538be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_538be4:
    // 0x538be4: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x538be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_538be8:
    // 0x538be8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x538be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_538bec:
    // 0x538bec: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x538becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_538bf0:
    // 0x538bf0: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x538bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_538bf4:
    // 0x538bf4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x538bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_538bf8:
    // 0x538bf8: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x538bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_538bfc:
    // 0x538bfc: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x538bfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_538c00:
    // 0x538c00: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x538c00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_538c04:
    // 0x538c04: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x538c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_538c08:
    // 0x538c08: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x538c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_538c0c:
    // 0x538c0c: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x538c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_538c10:
    // 0x538c10: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x538c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_538c14:
    // 0x538c14: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x538c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_538c18:
    // 0x538c18: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x538c18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_538c1c:
    // 0x538c1c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x538c1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_538c20:
    // 0x538c20: 0xc0892b0  jal         func_224AC0
label_538c24:
    if (ctx->pc == 0x538C24u) {
        ctx->pc = 0x538C24u;
            // 0x538c24: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x538C28u;
        goto label_538c28;
    }
    ctx->pc = 0x538C20u;
    SET_GPR_U32(ctx, 31, 0x538C28u);
    ctx->pc = 0x538C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538C20u;
            // 0x538c24: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538C28u; }
        if (ctx->pc != 0x538C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538C28u; }
        if (ctx->pc != 0x538C28u) { return; }
    }
    ctx->pc = 0x538C28u;
label_538c28:
    // 0x538c28: 0xae500050  sw          $s0, 0x50($s2)
    ctx->pc = 0x538c28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 16));
label_538c2c:
    // 0x538c2c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x538c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_538c30:
    // 0x538c30: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x538c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_538c34:
    // 0x538c34: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x538c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_538c38:
    // 0x538c38: 0xc0a7a88  jal         func_29EA20
label_538c3c:
    if (ctx->pc == 0x538C3Cu) {
        ctx->pc = 0x538C3Cu;
            // 0x538c3c: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x538C40u;
        goto label_538c40;
    }
    ctx->pc = 0x538C38u;
    SET_GPR_U32(ctx, 31, 0x538C40u);
    ctx->pc = 0x538C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538C38u;
            // 0x538c3c: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538C40u; }
        if (ctx->pc != 0x538C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538C40u; }
        if (ctx->pc != 0x538C40u) { return; }
    }
    ctx->pc = 0x538C40u;
label_538c40:
    // 0x538c40: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x538c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_538c44:
    // 0x538c44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x538c44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_538c48:
    // 0x538c48: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_538c4c:
    if (ctx->pc == 0x538C4Cu) {
        ctx->pc = 0x538C4Cu;
            // 0x538c4c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x538C50u;
        goto label_538c50;
    }
    ctx->pc = 0x538C48u;
    {
        const bool branch_taken_0x538c48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x538C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x538C48u;
            // 0x538c4c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x538c48) {
            ctx->pc = 0x538C6Cu;
            goto label_538c6c;
        }
    }
    ctx->pc = 0x538C50u;
label_538c50:
    // 0x538c50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x538c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_538c54:
    // 0x538c54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x538c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_538c58:
    // 0x538c58: 0xc0869d0  jal         func_21A740
label_538c5c:
    if (ctx->pc == 0x538C5Cu) {
        ctx->pc = 0x538C5Cu;
            // 0x538c5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x538C60u;
        goto label_538c60;
    }
    ctx->pc = 0x538C58u;
    SET_GPR_U32(ctx, 31, 0x538C60u);
    ctx->pc = 0x538C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538C58u;
            // 0x538c5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538C60u; }
        if (ctx->pc != 0x538C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538C60u; }
        if (ctx->pc != 0x538C60u) { return; }
    }
    ctx->pc = 0x538C60u;
label_538c60:
    // 0x538c60: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x538c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_538c64:
    // 0x538c64: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x538c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_538c68:
    // 0x538c68: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x538c68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_538c6c:
    // 0x538c6c: 0xae110210  sw          $s1, 0x210($s0)
    ctx->pc = 0x538c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 17));
label_538c70:
    // 0x538c70: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x538c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_538c74:
    // 0x538c74: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x538c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_538c78:
    // 0x538c78: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x538c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_538c7c:
    // 0x538c7c: 0xc08c650  jal         func_231940
label_538c80:
    if (ctx->pc == 0x538C80u) {
        ctx->pc = 0x538C80u;
            // 0x538c80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x538C84u;
        goto label_538c84;
    }
    ctx->pc = 0x538C7Cu;
    SET_GPR_U32(ctx, 31, 0x538C84u);
    ctx->pc = 0x538C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538C7Cu;
            // 0x538c80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538C84u; }
        if (ctx->pc != 0x538C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538C84u; }
        if (ctx->pc != 0x538C84u) { return; }
    }
    ctx->pc = 0x538C84u;
label_538c84:
    // 0x538c84: 0xc040180  jal         func_100600
label_538c88:
    if (ctx->pc == 0x538C88u) {
        ctx->pc = 0x538C88u;
            // 0x538c88: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x538C8Cu;
        goto label_538c8c;
    }
    ctx->pc = 0x538C84u;
    SET_GPR_U32(ctx, 31, 0x538C8Cu);
    ctx->pc = 0x538C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538C84u;
            // 0x538c88: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538C8Cu; }
        if (ctx->pc != 0x538C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538C8Cu; }
        if (ctx->pc != 0x538C8Cu) { return; }
    }
    ctx->pc = 0x538C8Cu;
label_538c8c:
    // 0x538c8c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_538c90:
    if (ctx->pc == 0x538C90u) {
        ctx->pc = 0x538C90u;
            // 0x538c90: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x538C94u;
        goto label_538c94;
    }
    ctx->pc = 0x538C8Cu;
    {
        const bool branch_taken_0x538c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x538C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x538C8Cu;
            // 0x538c90: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x538c8c) {
            ctx->pc = 0x538CFCu;
            goto label_538cfc;
        }
    }
    ctx->pc = 0x538C94u;
label_538c94:
    // 0x538c94: 0x8e470050  lw          $a3, 0x50($s2)
    ctx->pc = 0x538c94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_538c98:
    // 0x538c98: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x538c98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_538c9c:
    // 0x538c9c: 0x248421e0  addiu       $a0, $a0, 0x21E0
    ctx->pc = 0x538c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
label_538ca0:
    // 0x538ca0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x538ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_538ca4:
    // 0x538ca4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x538ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_538ca8:
    // 0x538ca8: 0x3c023ee6  lui         $v0, 0x3EE6
    ctx->pc = 0x538ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16102 << 16));
label_538cac:
    // 0x538cac: 0xae040048  sw          $a0, 0x48($s0)
    ctx->pc = 0x538cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
label_538cb0:
    // 0x538cb0: 0x3c06c000  lui         $a2, 0xC000
    ctx->pc = 0x538cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49152 << 16));
label_538cb4:
    // 0x538cb4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x538cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_538cb8:
    // 0x538cb8: 0x24a5d210  addiu       $a1, $a1, -0x2DF0
    ctx->pc = 0x538cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955536));
label_538cbc:
    // 0x538cbc: 0xae070024  sw          $a3, 0x24($s0)
    ctx->pc = 0x538cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 7));
label_538cc0:
    // 0x538cc0: 0x246385d0  addiu       $v1, $v1, -0x7A30
    ctx->pc = 0x538cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936016));
label_538cc4:
    // 0x538cc4: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x538cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
label_538cc8:
    // 0x538cc8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x538cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_538ccc:
    // 0x538ccc: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x538cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_538cd0:
    // 0x538cd0: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x538cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_538cd4:
    // 0x538cd4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x538cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_538cd8:
    // 0x538cd8: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x538cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_538cdc:
    // 0x538cdc: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x538cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_538ce0:
    // 0x538ce0: 0xae05003c  sw          $a1, 0x3C($s0)
    ctx->pc = 0x538ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 5));
label_538ce4:
    // 0x538ce4: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x538ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_538ce8:
    // 0x538ce8: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x538ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_538cec:
    // 0x538cec: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x538cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_538cf0:
    // 0x538cf0: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x538cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_538cf4:
    // 0x538cf4: 0xc04c968  jal         func_1325A0
label_538cf8:
    if (ctx->pc == 0x538CF8u) {
        ctx->pc = 0x538CF8u;
            // 0x538cf8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x538CFCu;
        goto label_538cfc;
    }
    ctx->pc = 0x538CF4u;
    SET_GPR_U32(ctx, 31, 0x538CFCu);
    ctx->pc = 0x538CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538CF4u;
            // 0x538cf8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538CFCu; }
        if (ctx->pc != 0x538CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538CFCu; }
        if (ctx->pc != 0x538CFCu) { return; }
    }
    ctx->pc = 0x538CFCu;
label_538cfc:
    // 0x538cfc: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x538cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_538d00:
    // 0x538d00: 0xae5000a0  sw          $s0, 0xA0($s2)
    ctx->pc = 0x538d00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 16));
label_538d04:
    // 0x538d04: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x538d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_538d08:
    // 0x538d08: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x538d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
label_538d0c:
    // 0x538d0c: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x538d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_538d10:
    // 0x538d10: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x538d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_538d14:
    // 0x538d14: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x538d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_538d18:
    // 0x538d18: 0xc040180  jal         func_100600
label_538d1c:
    if (ctx->pc == 0x538D1Cu) {
        ctx->pc = 0x538D1Cu;
            // 0x538d1c: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
        ctx->pc = 0x538D20u;
        goto label_538d20;
    }
    ctx->pc = 0x538D18u;
    SET_GPR_U32(ctx, 31, 0x538D20u);
    ctx->pc = 0x538D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538D18u;
            // 0x538d1c: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538D20u; }
        if (ctx->pc != 0x538D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538D20u; }
        if (ctx->pc != 0x538D20u) { return; }
    }
    ctx->pc = 0x538D20u;
label_538d20:
    // 0x538d20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x538d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_538d24:
    // 0x538d24: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_538d28:
    if (ctx->pc == 0x538D28u) {
        ctx->pc = 0x538D28u;
            // 0x538d28: 0x3c03461c  lui         $v1, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x538D2Cu;
        goto label_538d2c;
    }
    ctx->pc = 0x538D24u;
    {
        const bool branch_taken_0x538d24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x538d24) {
            ctx->pc = 0x538D28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x538D24u;
            // 0x538d28: 0x3c03461c  lui         $v1, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x538D64u;
            goto label_538d64;
        }
    }
    ctx->pc = 0x538D2Cu;
label_538d2c:
    // 0x538d2c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x538d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_538d30:
    // 0x538d30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x538d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_538d34:
    // 0x538d34: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x538d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_538d38:
    // 0x538d38: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x538d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_538d3c:
    // 0x538d3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x538d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_538d40:
    // 0x538d40: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x538d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_538d44:
    // 0x538d44: 0xc040138  jal         func_1004E0
label_538d48:
    if (ctx->pc == 0x538D48u) {
        ctx->pc = 0x538D48u;
            // 0x538d48: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x538D4Cu;
        goto label_538d4c;
    }
    ctx->pc = 0x538D44u;
    SET_GPR_U32(ctx, 31, 0x538D4Cu);
    ctx->pc = 0x538D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538D44u;
            // 0x538d48: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538D4Cu; }
        if (ctx->pc != 0x538D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538D4Cu; }
        if (ctx->pc != 0x538D4Cu) { return; }
    }
    ctx->pc = 0x538D4Cu;
label_538d4c:
    // 0x538d4c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x538d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_538d50:
    // 0x538d50: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x538d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_538d54:
    // 0x538d54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x538d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_538d58:
    // 0x538d58: 0xc04a576  jal         func_1295D8
label_538d5c:
    if (ctx->pc == 0x538D5Cu) {
        ctx->pc = 0x538D5Cu;
            // 0x538d5c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x538D60u;
        goto label_538d60;
    }
    ctx->pc = 0x538D58u;
    SET_GPR_U32(ctx, 31, 0x538D60u);
    ctx->pc = 0x538D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538D58u;
            // 0x538d5c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538D60u; }
        if (ctx->pc != 0x538D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538D60u; }
        if (ctx->pc != 0x538D60u) { return; }
    }
    ctx->pc = 0x538D60u;
label_538d60:
    // 0x538d60: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x538d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
label_538d64:
    // 0x538d64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x538d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_538d68:
    // 0x538d68: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x538d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_538d6c:
    // 0x538d6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x538d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_538d70:
    // 0x538d70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x538d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_538d74:
    // 0x538d74: 0x240617ae  addiu       $a2, $zero, 0x17AE
    ctx->pc = 0x538d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6062));
label_538d78:
    // 0x538d78: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x538d78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_538d7c:
    // 0x538d7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x538d7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_538d80:
    // 0x538d80: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x538d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_538d84:
    // 0x538d84: 0xc122cd8  jal         func_48B360
label_538d88:
    if (ctx->pc == 0x538D88u) {
        ctx->pc = 0x538D88u;
            // 0x538d88: 0xae5000e4  sw          $s0, 0xE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 16));
        ctx->pc = 0x538D8Cu;
        goto label_538d8c;
    }
    ctx->pc = 0x538D84u;
    SET_GPR_U32(ctx, 31, 0x538D8Cu);
    ctx->pc = 0x538D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538D84u;
            // 0x538d88: 0xae5000e4  sw          $s0, 0xE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538D8Cu; }
        if (ctx->pc != 0x538D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538D8Cu; }
        if (ctx->pc != 0x538D8Cu) { return; }
    }
    ctx->pc = 0x538D8Cu;
label_538d8c:
    // 0x538d8c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x538d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_538d90:
    // 0x538d90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x538d90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_538d94:
    // 0x538d94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x538d94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_538d98:
    // 0x538d98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x538d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_538d9c:
    // 0x538d9c: 0x3e00008  jr          $ra
label_538da0:
    if (ctx->pc == 0x538DA0u) {
        ctx->pc = 0x538DA0u;
            // 0x538da0: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x538DA4u;
        goto label_538da4;
    }
    ctx->pc = 0x538D9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x538DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x538D9Cu;
            // 0x538da0: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x538DA4u;
label_538da4:
    // 0x538da4: 0x0  nop
    ctx->pc = 0x538da4u;
    // NOP
label_538da8:
    // 0x538da8: 0x0  nop
    ctx->pc = 0x538da8u;
    // NOP
label_538dac:
    // 0x538dac: 0x0  nop
    ctx->pc = 0x538dacu;
    // NOP
label_538db0:
    // 0x538db0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x538db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_538db4:
    // 0x538db4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x538db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_538db8:
    // 0x538db8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x538db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_538dbc:
    // 0x538dbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x538dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_538dc0:
    // 0x538dc0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x538dc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_538dc4:
    // 0x538dc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x538dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_538dc8:
    // 0x538dc8: 0x8c8300ac  lw          $v1, 0xAC($a0)
    ctx->pc = 0x538dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_538dcc:
    // 0x538dcc: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x538dccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_538dd0:
    // 0x538dd0: 0x10200058  beqz        $at, . + 4 + (0x58 << 2)
label_538dd4:
    if (ctx->pc == 0x538DD4u) {
        ctx->pc = 0x538DD4u;
            // 0x538dd4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x538DD8u;
        goto label_538dd8;
    }
    ctx->pc = 0x538DD0u;
    {
        const bool branch_taken_0x538dd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x538DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x538DD0u;
            // 0x538dd4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x538dd0) {
            ctx->pc = 0x538F34u;
            goto label_538f34;
        }
    }
    ctx->pc = 0x538DD8u;
label_538dd8:
    // 0x538dd8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x538dd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_538ddc:
    // 0x538ddc: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x538ddcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_538de0:
    // 0x538de0: 0x320f809  jalr        $t9
label_538de4:
    if (ctx->pc == 0x538DE4u) {
        ctx->pc = 0x538DE8u;
        goto label_538de8;
    }
    ctx->pc = 0x538DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x538DE8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x538DE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x538DE8u; }
            if (ctx->pc != 0x538DE8u) { return; }
        }
        }
    }
    ctx->pc = 0x538DE8u;
label_538de8:
    // 0x538de8: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x538de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_538dec:
    // 0x538dec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x538decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_538df0:
    // 0x538df0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x538df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_538df4:
    // 0x538df4: 0xae440060  sw          $a0, 0x60($s2)
    ctx->pc = 0x538df4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 4));
label_538df8:
    // 0x538df8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x538df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_538dfc:
    // 0x538dfc: 0x80a40018  lb          $a0, 0x18($a1)
    ctx->pc = 0x538dfcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
label_538e00:
    // 0x538e00: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_538e04:
    if (ctx->pc == 0x538E04u) {
        ctx->pc = 0x538E04u;
            // 0x538e04: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x538E08u;
        goto label_538e08;
    }
    ctx->pc = 0x538E00u;
    {
        const bool branch_taken_0x538e00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x538e00) {
            ctx->pc = 0x538E04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x538E00u;
            // 0x538e04: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x538E10u;
            goto label_538e10;
        }
    }
    ctx->pc = 0x538E08u;
label_538e08:
    // 0x538e08: 0x80a30010  lb          $v1, 0x10($a1)
    ctx->pc = 0x538e08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_538e0c:
    // 0x538e0c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x538e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_538e10:
    // 0x538e10: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x538e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_538e14:
    // 0x538e14: 0xae4300a8  sw          $v1, 0xA8($s2)
    ctx->pc = 0x538e14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 3));
label_538e18:
    // 0x538e18: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x538e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_538e1c:
    // 0x538e1c: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x538e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_538e20:
    // 0x538e20: 0x50600029  beql        $v1, $zero, . + 4 + (0x29 << 2)
label_538e24:
    if (ctx->pc == 0x538E24u) {
        ctx->pc = 0x538E24u;
            // 0x538e24: 0x8e4300b0  lw          $v1, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->pc = 0x538E28u;
        goto label_538e28;
    }
    ctx->pc = 0x538E20u;
    {
        const bool branch_taken_0x538e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x538e20) {
            ctx->pc = 0x538E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x538E20u;
            // 0x538e24: 0x8e4300b0  lw          $v1, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x538EC8u;
            goto label_538ec8;
        }
    }
    ctx->pc = 0x538E28u;
label_538e28:
    // 0x538e28: 0x8e4400a8  lw          $a0, 0xA8($s2)
    ctx->pc = 0x538e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
label_538e2c:
    // 0x538e2c: 0x10800025  beqz        $a0, . + 4 + (0x25 << 2)
label_538e30:
    if (ctx->pc == 0x538E30u) {
        ctx->pc = 0x538E34u;
        goto label_538e34;
    }
    ctx->pc = 0x538E2Cu;
    {
        const bool branch_taken_0x538e2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x538e2c) {
            ctx->pc = 0x538EC4u;
            goto label_538ec4;
        }
    }
    ctx->pc = 0x538E34u;
label_538e34:
    // 0x538e34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x538e34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_538e38:
    // 0x538e38: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x538e38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_538e3c:
    // 0x538e3c: 0x320f809  jalr        $t9
label_538e40:
    if (ctx->pc == 0x538E40u) {
        ctx->pc = 0x538E44u;
        goto label_538e44;
    }
    ctx->pc = 0x538E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x538E44u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x538E44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x538E44u; }
            if (ctx->pc != 0x538E44u) { return; }
        }
        }
    }
    ctx->pc = 0x538E44u;
label_538e44:
    // 0x538e44: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x538e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_538e48:
    // 0x538e48: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
label_538e4c:
    if (ctx->pc == 0x538E4Cu) {
        ctx->pc = 0x538E4Cu;
            // 0x538e4c: 0x8e440050  lw          $a0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->pc = 0x538E50u;
        goto label_538e50;
    }
    ctx->pc = 0x538E48u;
    {
        const bool branch_taken_0x538e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x538e48) {
            ctx->pc = 0x538E4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x538E48u;
            // 0x538e4c: 0x8e440050  lw          $a0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x538E74u;
            goto label_538e74;
        }
    }
    ctx->pc = 0x538E50u;
label_538e50:
    // 0x538e50: 0x8e4400a8  lw          $a0, 0xA8($s2)
    ctx->pc = 0x538e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
label_538e54:
    // 0x538e54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x538e54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_538e58:
    // 0x538e58: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x538e58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_538e5c:
    // 0x538e5c: 0x320f809  jalr        $t9
label_538e60:
    if (ctx->pc == 0x538E60u) {
        ctx->pc = 0x538E64u;
        goto label_538e64;
    }
    ctx->pc = 0x538E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x538E64u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x538E64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x538E64u; }
            if (ctx->pc != 0x538E64u) { return; }
        }
        }
    }
    ctx->pc = 0x538E64u;
label_538e64:
    // 0x538e64: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x538e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_538e68:
    // 0x538e68: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
label_538e6c:
    if (ctx->pc == 0x538E6Cu) {
        ctx->pc = 0x538E70u;
        goto label_538e70;
    }
    ctx->pc = 0x538E68u;
    {
        const bool branch_taken_0x538e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x538e68) {
            ctx->pc = 0x538EC4u;
            goto label_538ec4;
        }
    }
    ctx->pc = 0x538E70u;
label_538e70:
    // 0x538e70: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x538e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_538e74:
    // 0x538e74: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x538e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_538e78:
    // 0x538e78: 0x908400a8  lbu         $a0, 0xA8($a0)
    ctx->pc = 0x538e78u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 168)));
label_538e7c:
    // 0x538e7c: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
label_538e80:
    if (ctx->pc == 0x538E80u) {
        ctx->pc = 0x538E80u;
            // 0x538e80: 0x8e5000a8  lw          $s0, 0xA8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
        ctx->pc = 0x538E84u;
        goto label_538e84;
    }
    ctx->pc = 0x538E7Cu;
    {
        const bool branch_taken_0x538e7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x538E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x538E7Cu;
            // 0x538e80: 0x8e5000a8  lw          $s0, 0xA8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x538e7c) {
            ctx->pc = 0x538EC4u;
            goto label_538ec4;
        }
    }
    ctx->pc = 0x538E84u;
label_538e84:
    // 0x538e84: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x538e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_538e88:
    // 0x538e88: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x538e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_538e8c:
    // 0x538e8c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_538e90:
    if (ctx->pc == 0x538E90u) {
        ctx->pc = 0x538E94u;
        goto label_538e94;
    }
    ctx->pc = 0x538E8Cu;
    {
        const bool branch_taken_0x538e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x538e8c) {
            ctx->pc = 0x538EC4u;
            goto label_538ec4;
        }
    }
    ctx->pc = 0x538E94u;
label_538e94:
    // 0x538e94: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x538e94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_538e98:
    // 0x538e98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x538e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_538e9c:
    // 0x538e9c: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x538e9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_538ea0:
    // 0x538ea0: 0x320f809  jalr        $t9
label_538ea4:
    if (ctx->pc == 0x538EA4u) {
        ctx->pc = 0x538EA4u;
            // 0x538ea4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x538EA8u;
        goto label_538ea8;
    }
    ctx->pc = 0x538EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x538EA8u);
        ctx->pc = 0x538EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x538EA0u;
            // 0x538ea4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x538EA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x538EA8u; }
            if (ctx->pc != 0x538EA8u) { return; }
        }
        }
    }
    ctx->pc = 0x538EA8u;
label_538ea8:
    // 0x538ea8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_538eac:
    if (ctx->pc == 0x538EACu) {
        ctx->pc = 0x538EB0u;
        goto label_538eb0;
    }
    ctx->pc = 0x538EA8u;
    {
        const bool branch_taken_0x538ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x538ea8) {
            ctx->pc = 0x538EC4u;
            goto label_538ec4;
        }
    }
    ctx->pc = 0x538EB0u;
label_538eb0:
    // 0x538eb0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x538eb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_538eb4:
    // 0x538eb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x538eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_538eb8:
    // 0x538eb8: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x538eb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_538ebc:
    // 0x538ebc: 0x320f809  jalr        $t9
label_538ec0:
    if (ctx->pc == 0x538EC0u) {
        ctx->pc = 0x538EC0u;
            // 0x538ec0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x538EC4u;
        goto label_538ec4;
    }
    ctx->pc = 0x538EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x538EC4u);
        ctx->pc = 0x538EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x538EBCu;
            // 0x538ec0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x538EC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x538EC4u; }
            if (ctx->pc != 0x538EC4u) { return; }
        }
        }
    }
    ctx->pc = 0x538EC4u;
label_538ec4:
    // 0x538ec4: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x538ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_538ec8:
    // 0x538ec8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x538ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_538ecc:
    // 0x538ecc: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_538ed0:
    if (ctx->pc == 0x538ED0u) {
        ctx->pc = 0x538ED0u;
            // 0x538ed0: 0x8e4300b0  lw          $v1, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->pc = 0x538ED4u;
        goto label_538ed4;
    }
    ctx->pc = 0x538ECCu;
    {
        const bool branch_taken_0x538ecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x538ecc) {
            ctx->pc = 0x538ED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x538ECCu;
            // 0x538ed0: 0x8e4300b0  lw          $v1, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x538EF4u;
            goto label_538ef4;
        }
    }
    ctx->pc = 0x538ED4u;
label_538ed4:
    // 0x538ed4: 0x8e440084  lw          $a0, 0x84($s2)
    ctx->pc = 0x538ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_538ed8:
    // 0x538ed8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x538ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_538edc:
    // 0x538edc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_538ee0:
    if (ctx->pc == 0x538EE0u) {
        ctx->pc = 0x538EE4u;
        goto label_538ee4;
    }
    ctx->pc = 0x538EDCu;
    {
        const bool branch_taken_0x538edc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x538edc) {
            ctx->pc = 0x538EF0u;
            goto label_538ef0;
        }
    }
    ctx->pc = 0x538EE4u;
label_538ee4:
    // 0x538ee4: 0x8e430088  lw          $v1, 0x88($s2)
    ctx->pc = 0x538ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_538ee8:
    // 0x538ee8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x538ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_538eec:
    // 0x538eec: 0xae430088  sw          $v1, 0x88($s2)
    ctx->pc = 0x538eecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 3));
label_538ef0:
    // 0x538ef0: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x538ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_538ef4:
    // 0x538ef4: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x538ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_538ef8:
    // 0x538ef8: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
label_538efc:
    if (ctx->pc == 0x538EFCu) {
        ctx->pc = 0x538EFCu;
            // 0x538efc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x538F00u;
        goto label_538f00;
    }
    ctx->pc = 0x538EF8u;
    {
        const bool branch_taken_0x538ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x538ef8) {
            ctx->pc = 0x538EFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x538EF8u;
            // 0x538efc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x538F38u;
            goto label_538f38;
        }
    }
    ctx->pc = 0x538F00u;
label_538f00:
    // 0x538f00: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x538f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_538f04:
    // 0x538f04: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x538f04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_538f08:
    // 0x538f08: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_538f0c:
    if (ctx->pc == 0x538F0Cu) {
        ctx->pc = 0x538F10u;
        goto label_538f10;
    }
    ctx->pc = 0x538F08u;
    {
        const bool branch_taken_0x538f08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x538f08) {
            ctx->pc = 0x538F34u;
            goto label_538f34;
        }
    }
    ctx->pc = 0x538F10u;
label_538f10:
    // 0x538f10: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x538f10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_538f14:
    // 0x538f14: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x538f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_538f18:
    // 0x538f18: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x538f18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_538f1c:
    // 0x538f1c: 0x320f809  jalr        $t9
label_538f20:
    if (ctx->pc == 0x538F20u) {
        ctx->pc = 0x538F20u;
            // 0x538f20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x538F24u;
        goto label_538f24;
    }
    ctx->pc = 0x538F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x538F24u);
        ctx->pc = 0x538F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x538F1Cu;
            // 0x538f20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x538F24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x538F24u; }
            if (ctx->pc != 0x538F24u) { return; }
        }
        }
    }
    ctx->pc = 0x538F24u;
label_538f24:
    // 0x538f24: 0xc64000c4  lwc1        $f0, 0xC4($s2)
    ctx->pc = 0x538f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_538f28:
    // 0x538f28: 0xe64000b8  swc1        $f0, 0xB8($s2)
    ctx->pc = 0x538f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 184), bits); }
label_538f2c:
    // 0x538f2c: 0x824300cc  lb          $v1, 0xCC($s2)
    ctx->pc = 0x538f2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 204)));
label_538f30:
    // 0x538f30: 0xae4300bc  sw          $v1, 0xBC($s2)
    ctx->pc = 0x538f30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 3));
label_538f34:
    // 0x538f34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x538f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_538f38:
    // 0x538f38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x538f38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_538f3c:
    // 0x538f3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x538f3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_538f40:
    // 0x538f40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x538f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_538f44:
    // 0x538f44: 0x3e00008  jr          $ra
label_538f48:
    if (ctx->pc == 0x538F48u) {
        ctx->pc = 0x538F48u;
            // 0x538f48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x538F4Cu;
        goto label_538f4c;
    }
    ctx->pc = 0x538F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x538F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x538F44u;
            // 0x538f48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x538F4Cu;
label_538f4c:
    // 0x538f4c: 0x0  nop
    ctx->pc = 0x538f4cu;
    // NOP
label_538f50:
    // 0x538f50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x538f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_538f54:
    // 0x538f54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x538f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_538f58:
    // 0x538f58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x538f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_538f5c:
    // 0x538f5c: 0x90830107  lbu         $v1, 0x107($a0)
    ctx->pc = 0x538f5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 263)));
label_538f60:
    // 0x538f60: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_538f64:
    if (ctx->pc == 0x538F64u) {
        ctx->pc = 0x538F64u;
            // 0x538f64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x538F68u;
        goto label_538f68;
    }
    ctx->pc = 0x538F60u;
    {
        const bool branch_taken_0x538f60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x538F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x538F60u;
            // 0x538f64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x538f60) {
            ctx->pc = 0x538FA8u;
            goto label_538fa8;
        }
    }
    ctx->pc = 0x538F68u;
label_538f68:
    // 0x538f68: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x538f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_538f6c:
    // 0x538f6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x538f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_538f70:
    // 0x538f70: 0xc122d2c  jal         func_48B4B0
label_538f74:
    if (ctx->pc == 0x538F74u) {
        ctx->pc = 0x538F74u;
            // 0x538f74: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x538F78u;
        goto label_538f78;
    }
    ctx->pc = 0x538F70u;
    SET_GPR_U32(ctx, 31, 0x538F78u);
    ctx->pc = 0x538F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538F70u;
            // 0x538f74: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538F78u; }
        if (ctx->pc != 0x538F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538F78u; }
        if (ctx->pc != 0x538F78u) { return; }
    }
    ctx->pc = 0x538F78u;
label_538f78:
    // 0x538f78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x538f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_538f7c:
    // 0x538f7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x538f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_538f80:
    // 0x538f80: 0xa2020107  sb          $v0, 0x107($s0)
    ctx->pc = 0x538f80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 263), (uint8_t)GPR_U32(ctx, 2));
label_538f84:
    // 0x538f84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x538f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_538f88:
    // 0x538f88: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x538f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_538f8c:
    // 0x538f8c: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x538f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_538f90:
    // 0x538f90: 0xc0e32a4  jal         func_38CA90
label_538f94:
    if (ctx->pc == 0x538F94u) {
        ctx->pc = 0x538F94u;
            // 0x538f94: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->pc = 0x538F98u;
        goto label_538f98;
    }
    ctx->pc = 0x538F90u;
    SET_GPR_U32(ctx, 31, 0x538F98u);
    ctx->pc = 0x538F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538F90u;
            // 0x538f94: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538F98u; }
        if (ctx->pc != 0x538F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538F98u; }
        if (ctx->pc != 0x538F98u) { return; }
    }
    ctx->pc = 0x538F98u;
label_538f98:
    // 0x538f98: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x538f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_538f9c:
    // 0x538f9c: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x538f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_538fa0:
    // 0x538fa0: 0xae0400b4  sw          $a0, 0xB4($s0)
    ctx->pc = 0x538fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 4));
label_538fa4:
    // 0x538fa4: 0xa203004c  sb          $v1, 0x4C($s0)
    ctx->pc = 0x538fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 3));
label_538fa8:
    // 0x538fa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x538fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_538fac:
    // 0x538fac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x538facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_538fb0:
    // 0x538fb0: 0x3e00008  jr          $ra
label_538fb4:
    if (ctx->pc == 0x538FB4u) {
        ctx->pc = 0x538FB4u;
            // 0x538fb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x538FB8u;
        goto label_538fb8;
    }
    ctx->pc = 0x538FB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x538FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x538FB0u;
            // 0x538fb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x538FB8u;
label_538fb8:
    // 0x538fb8: 0x0  nop
    ctx->pc = 0x538fb8u;
    // NOP
label_538fbc:
    // 0x538fbc: 0x0  nop
    ctx->pc = 0x538fbcu;
    // NOP
label_538fc0:
    // 0x538fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x538fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_538fc4:
    // 0x538fc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x538fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_538fc8:
    // 0x538fc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x538fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_538fcc:
    // 0x538fcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x538fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_538fd0:
    // 0x538fd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x538fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_538fd4:
    // 0x538fd4: 0xc0ba938  jal         func_2EA4E0
label_538fd8:
    if (ctx->pc == 0x538FD8u) {
        ctx->pc = 0x538FD8u;
            // 0x538fd8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x538FDCu;
        goto label_538fdc;
    }
    ctx->pc = 0x538FD4u;
    SET_GPR_U32(ctx, 31, 0x538FDCu);
    ctx->pc = 0x538FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538FD4u;
            // 0x538fd8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA4E0u;
    if (runtime->hasFunction(0x2EA4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EA4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538FDCu; }
        if (ctx->pc != 0x538FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EA4E0_0x2ea4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538FDCu; }
        if (ctx->pc != 0x538FDCu) { return; }
    }
    ctx->pc = 0x538FDCu;
label_538fdc:
    // 0x538fdc: 0x8e050150  lw          $a1, 0x150($s0)
    ctx->pc = 0x538fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_538fe0:
    // 0x538fe0: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_538fe4:
    if (ctx->pc == 0x538FE4u) {
        ctx->pc = 0x538FE4u;
            // 0x538fe4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x538FE8u;
        goto label_538fe8;
    }
    ctx->pc = 0x538FE0u;
    {
        const bool branch_taken_0x538fe0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x538fe0) {
            ctx->pc = 0x538FE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x538FE0u;
            // 0x538fe4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x539000u;
            goto label_539000;
        }
    }
    ctx->pc = 0x538FE8u;
label_538fe8:
    // 0x538fe8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x538fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_538fec:
    // 0x538fec: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x538fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_538ff0:
    // 0x538ff0: 0xc057b7c  jal         func_15EDF0
label_538ff4:
    if (ctx->pc == 0x538FF4u) {
        ctx->pc = 0x538FF4u;
            // 0x538ff4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x538FF8u;
        goto label_538ff8;
    }
    ctx->pc = 0x538FF0u;
    SET_GPR_U32(ctx, 31, 0x538FF8u);
    ctx->pc = 0x538FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538FF0u;
            // 0x538ff4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538FF8u; }
        if (ctx->pc != 0x538FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538FF8u; }
        if (ctx->pc != 0x538FF8u) { return; }
    }
    ctx->pc = 0x538FF8u;
label_538ff8:
    // 0x538ff8: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x538ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
label_538ffc:
    // 0x538ffc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x538ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_539000:
    // 0x539000: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x539000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_539004:
    // 0x539004: 0x3e00008  jr          $ra
label_539008:
    if (ctx->pc == 0x539008u) {
        ctx->pc = 0x539008u;
            // 0x539008: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x53900Cu;
        goto label_53900c;
    }
    ctx->pc = 0x539004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x539008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x539004u;
            // 0x539008: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53900Cu;
label_53900c:
    // 0x53900c: 0x0  nop
    ctx->pc = 0x53900cu;
    // NOP
label_539010:
    // 0x539010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x539010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_539014:
    // 0x539014: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x539014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_539018:
    // 0x539018: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x539018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53901c:
    // 0x53901c: 0x8c850150  lw          $a1, 0x150($a0)
    ctx->pc = 0x53901cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_539020:
    // 0x539020: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_539024:
    if (ctx->pc == 0x539024u) {
        ctx->pc = 0x539024u;
            // 0x539024: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x539028u;
        goto label_539028;
    }
    ctx->pc = 0x539020u;
    {
        const bool branch_taken_0x539020 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x539024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x539020u;
            // 0x539024: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x539020) {
            ctx->pc = 0x53903Cu;
            goto label_53903c;
        }
    }
    ctx->pc = 0x539028u;
label_539028:
    // 0x539028: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x539028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_53902c:
    // 0x53902c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x53902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_539030:
    // 0x539030: 0xc057b7c  jal         func_15EDF0
label_539034:
    if (ctx->pc == 0x539034u) {
        ctx->pc = 0x539034u;
            // 0x539034: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x539038u;
        goto label_539038;
    }
    ctx->pc = 0x539030u;
    SET_GPR_U32(ctx, 31, 0x539038u);
    ctx->pc = 0x539034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539030u;
            // 0x539034: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539038u; }
        if (ctx->pc != 0x539038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539038u; }
        if (ctx->pc != 0x539038u) { return; }
    }
    ctx->pc = 0x539038u;
label_539038:
    // 0x539038: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x539038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
label_53903c:
    // 0x53903c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x53903cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_539040:
    // 0x539040: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x539040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_539044:
    // 0x539044: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x539044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_539048:
    // 0x539048: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x539048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_53904c:
    // 0x53904c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x53904cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_539050:
    // 0x539050: 0xc0891d8  jal         func_224760
label_539054:
    if (ctx->pc == 0x539054u) {
        ctx->pc = 0x539054u;
            // 0x539054: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x539058u;
        goto label_539058;
    }
    ctx->pc = 0x539050u;
    SET_GPR_U32(ctx, 31, 0x539058u);
    ctx->pc = 0x539054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539050u;
            // 0x539054: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539058u; }
        if (ctx->pc != 0x539058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539058u; }
        if (ctx->pc != 0x539058u) { return; }
    }
    ctx->pc = 0x539058u;
label_539058:
    // 0x539058: 0x8e0300f8  lw          $v1, 0xF8($s0)
    ctx->pc = 0x539058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
label_53905c:
    // 0x53905c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x53905cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_539060:
    // 0x539060: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_539064:
    if (ctx->pc == 0x539064u) {
        ctx->pc = 0x539064u;
            // 0x539064: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x539068u;
        goto label_539068;
    }
    ctx->pc = 0x539060u;
    {
        const bool branch_taken_0x539060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x539060) {
            ctx->pc = 0x539064u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x539060u;
            // 0x539064: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53907Cu;
            goto label_53907c;
        }
    }
    ctx->pc = 0x539068u;
label_539068:
    // 0x539068: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x539068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53906c:
    // 0x53906c: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x53906cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
label_539070:
    // 0x539070: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x539070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_539074:
    // 0x539074: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x539074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_539078:
    // 0x539078: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x539078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53907c:
    // 0x53907c: 0xa2030108  sb          $v1, 0x108($s0)
    ctx->pc = 0x53907cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 264), (uint8_t)GPR_U32(ctx, 3));
label_539080:
    // 0x539080: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x539080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_539084:
    // 0x539084: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x539084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_539088:
    // 0x539088: 0x3e00008  jr          $ra
label_53908c:
    if (ctx->pc == 0x53908Cu) {
        ctx->pc = 0x53908Cu;
            // 0x53908c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x539090u;
        goto label_539090;
    }
    ctx->pc = 0x539088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53908Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x539088u;
            // 0x53908c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x539090u;
label_539090:
    // 0x539090: 0x3e00008  jr          $ra
label_539094:
    if (ctx->pc == 0x539094u) {
        ctx->pc = 0x539098u;
        goto label_539098;
    }
    ctx->pc = 0x539090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x539098u;
label_539098:
    // 0x539098: 0x0  nop
    ctx->pc = 0x539098u;
    // NOP
label_53909c:
    // 0x53909c: 0x0  nop
    ctx->pc = 0x53909cu;
    // NOP
label_5390a0:
    // 0x5390a0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x5390a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_5390a4:
    // 0x5390a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5390a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5390a8:
    // 0x5390a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5390a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_5390ac:
    // 0x5390ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x5390acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_5390b0:
    // 0x5390b0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x5390b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_5390b4:
    // 0x5390b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x5390b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5390b8:
    // 0x5390b8: 0x8c8400fc  lw          $a0, 0xFC($a0)
    ctx->pc = 0x5390b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
label_5390bc:
    // 0x5390bc: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
label_5390c0:
    if (ctx->pc == 0x5390C0u) {
        ctx->pc = 0x5390C0u;
            // 0x5390c0: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x5390C4u;
        goto label_5390c4;
    }
    ctx->pc = 0x5390BCu;
    {
        const bool branch_taken_0x5390bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x5390bc) {
            ctx->pc = 0x5390C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5390BCu;
            // 0x5390c0: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5390D4u;
            goto label_5390d4;
        }
    }
    ctx->pc = 0x5390C4u;
label_5390c4:
    // 0x5390c4: 0x50800077  beql        $a0, $zero, . + 4 + (0x77 << 2)
label_5390c8:
    if (ctx->pc == 0x5390C8u) {
        ctx->pc = 0x5390C8u;
            // 0x5390c8: 0xae0300fc  sw          $v1, 0xFC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 3));
        ctx->pc = 0x5390CCu;
        goto label_5390cc;
    }
    ctx->pc = 0x5390C4u;
    {
        const bool branch_taken_0x5390c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5390c4) {
            ctx->pc = 0x5390C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5390C4u;
            // 0x5390c8: 0xae0300fc  sw          $v1, 0xFC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5392A4u;
            goto label_5392a4;
        }
    }
    ctx->pc = 0x5390CCu;
label_5390cc:
    // 0x5390cc: 0x10000076  b           . + 4 + (0x76 << 2)
label_5390d0:
    if (ctx->pc == 0x5390D0u) {
        ctx->pc = 0x5390D0u;
            // 0x5390d0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x5390D4u;
        goto label_5390d4;
    }
    ctx->pc = 0x5390CCu;
    {
        const bool branch_taken_0x5390cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5390D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5390CCu;
            // 0x5390d0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5390cc) {
            ctx->pc = 0x5392A8u;
            goto label_5392a8;
        }
    }
    ctx->pc = 0x5390D4u;
label_5390d4:
    // 0x5390d4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x5390d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_5390d8:
    // 0x5390d8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x5390d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_5390dc:
    // 0x5390dc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x5390dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_5390e0:
    // 0x5390e0: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x5390e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_5390e4:
    // 0x5390e4: 0xc089688  jal         func_225A20
label_5390e8:
    if (ctx->pc == 0x5390E8u) {
        ctx->pc = 0x5390E8u;
            // 0x5390e8: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->pc = 0x5390ECu;
        goto label_5390ec;
    }
    ctx->pc = 0x5390E4u;
    SET_GPR_U32(ctx, 31, 0x5390ECu);
    ctx->pc = 0x5390E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5390E4u;
            // 0x5390e8: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5390ECu; }
        if (ctx->pc != 0x5390ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5390ECu; }
        if (ctx->pc != 0x5390ECu) { return; }
    }
    ctx->pc = 0x5390ECu;
label_5390ec:
    // 0x5390ec: 0xc7ac00b0  lwc1        $f12, 0xB0($sp)
    ctx->pc = 0x5390ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_5390f0:
    // 0x5390f0: 0xc7ad00b4  lwc1        $f13, 0xB4($sp)
    ctx->pc = 0x5390f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_5390f4:
    // 0x5390f4: 0xc7ae00b8  lwc1        $f14, 0xB8($sp)
    ctx->pc = 0x5390f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_5390f8:
    // 0x5390f8: 0xc04cbd8  jal         func_132F60
label_5390fc:
    if (ctx->pc == 0x5390FCu) {
        ctx->pc = 0x5390FCu;
            // 0x5390fc: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x539100u;
        goto label_539100;
    }
    ctx->pc = 0x5390F8u;
    SET_GPR_U32(ctx, 31, 0x539100u);
    ctx->pc = 0x5390FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5390F8u;
            // 0x5390fc: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539100u; }
        if (ctx->pc != 0x539100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539100u; }
        if (ctx->pc != 0x539100u) { return; }
    }
    ctx->pc = 0x539100u;
label_539100:
    // 0x539100: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x539100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_539104:
    // 0x539104: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x539104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_539108:
    // 0x539108: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x539108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_53910c:
    // 0x53910c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x53910cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_539110:
    // 0x539110: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x539110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_539114:
    // 0x539114: 0xc089688  jal         func_225A20
label_539118:
    if (ctx->pc == 0x539118u) {
        ctx->pc = 0x539118u;
            // 0x539118: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->pc = 0x53911Cu;
        goto label_53911c;
    }
    ctx->pc = 0x539114u;
    SET_GPR_U32(ctx, 31, 0x53911Cu);
    ctx->pc = 0x539118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539114u;
            // 0x539118: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53911Cu; }
        if (ctx->pc != 0x53911Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53911Cu; }
        if (ctx->pc != 0x53911Cu) { return; }
    }
    ctx->pc = 0x53911Cu;
label_53911c:
    // 0x53911c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x53911cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_539120:
    // 0x539120: 0xc0a3828  jal         func_28E0A0
label_539124:
    if (ctx->pc == 0x539124u) {
        ctx->pc = 0x539124u;
            // 0x539124: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x539128u;
        goto label_539128;
    }
    ctx->pc = 0x539120u;
    SET_GPR_U32(ctx, 31, 0x539128u);
    ctx->pc = 0x539124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539120u;
            // 0x539124: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0A0u;
    if (runtime->hasFunction(0x28E0A0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539128u; }
        if (ctx->pc != 0x539128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0A0_0x28e0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539128u; }
        if (ctx->pc != 0x539128u) { return; }
    }
    ctx->pc = 0x539128u;
label_539128:
    // 0x539128: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x539128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53912c:
    // 0x53912c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x53912cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_539130:
    // 0x539130: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x539130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_539134:
    // 0x539134: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x539134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_539138:
    // 0x539138: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x539138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_53913c:
    // 0x53913c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x53913cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_539140:
    // 0x539140: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x539140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_539144:
    // 0x539144: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x539144u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_539148:
    // 0x539148: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x539148u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_53914c:
    // 0x53914c: 0xc04cc04  jal         func_133010
label_539150:
    if (ctx->pc == 0x539150u) {
        ctx->pc = 0x539150u;
            // 0x539150: 0xe7a000dc  swc1        $f0, 0xDC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
        ctx->pc = 0x539154u;
        goto label_539154;
    }
    ctx->pc = 0x53914Cu;
    SET_GPR_U32(ctx, 31, 0x539154u);
    ctx->pc = 0x539150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53914Cu;
            // 0x539150: 0xe7a000dc  swc1        $f0, 0xDC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539154u; }
        if (ctx->pc != 0x539154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539154u; }
        if (ctx->pc != 0x539154u) { return; }
    }
    ctx->pc = 0x539154u;
label_539154:
    // 0x539154: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x539154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_539158:
    // 0x539158: 0xc04c720  jal         func_131C80
label_53915c:
    if (ctx->pc == 0x53915Cu) {
        ctx->pc = 0x53915Cu;
            // 0x53915c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x539160u;
        goto label_539160;
    }
    ctx->pc = 0x539158u;
    SET_GPR_U32(ctx, 31, 0x539160u);
    ctx->pc = 0x53915Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539158u;
            // 0x53915c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539160u; }
        if (ctx->pc != 0x539160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539160u; }
        if (ctx->pc != 0x539160u) { return; }
    }
    ctx->pc = 0x539160u;
label_539160:
    // 0x539160: 0x8e0300f8  lw          $v1, 0xF8($s0)
    ctx->pc = 0x539160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
label_539164:
    // 0x539164: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x539164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_539168:
    // 0x539168: 0x54600040  bnel        $v1, $zero, . + 4 + (0x40 << 2)
label_53916c:
    if (ctx->pc == 0x53916Cu) {
        ctx->pc = 0x53916Cu;
            // 0x53916c: 0x92030108  lbu         $v1, 0x108($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->pc = 0x539170u;
        goto label_539170;
    }
    ctx->pc = 0x539168u;
    {
        const bool branch_taken_0x539168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x539168) {
            ctx->pc = 0x53916Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x539168u;
            // 0x53916c: 0x92030108  lbu         $v1, 0x108($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53926Cu;
            goto label_53926c;
        }
    }
    ctx->pc = 0x539170u;
label_539170:
    // 0x539170: 0x8e0200e0  lw          $v0, 0xE0($s0)
    ctx->pc = 0x539170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_539174:
    // 0x539174: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x539174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_539178:
    // 0x539178: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x539178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_53917c:
    // 0x53917c: 0xc04cc90  jal         func_133240
label_539180:
    if (ctx->pc == 0x539180u) {
        ctx->pc = 0x539180u;
            // 0x539180: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x539184u;
        goto label_539184;
    }
    ctx->pc = 0x53917Cu;
    SET_GPR_U32(ctx, 31, 0x539184u);
    ctx->pc = 0x539180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53917Cu;
            // 0x539180: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539184u; }
        if (ctx->pc != 0x539184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539184u; }
        if (ctx->pc != 0x539184u) { return; }
    }
    ctx->pc = 0x539184u;
label_539184:
    // 0x539184: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x539184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_539188:
    // 0x539188: 0xc04cc44  jal         func_133110
label_53918c:
    if (ctx->pc == 0x53918Cu) {
        ctx->pc = 0x53918Cu;
            // 0x53918c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x539190u;
        goto label_539190;
    }
    ctx->pc = 0x539188u;
    SET_GPR_U32(ctx, 31, 0x539190u);
    ctx->pc = 0x53918Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539188u;
            // 0x53918c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539190u; }
        if (ctx->pc != 0x539190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539190u; }
        if (ctx->pc != 0x539190u) { return; }
    }
    ctx->pc = 0x539190u;
label_539190:
    // 0x539190: 0x8e0200e0  lw          $v0, 0xE0($s0)
    ctx->pc = 0x539190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_539194:
    // 0x539194: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x539194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_539198:
    // 0x539198: 0xc04cc08  jal         func_133020
label_53919c:
    if (ctx->pc == 0x53919Cu) {
        ctx->pc = 0x53919Cu;
            // 0x53919c: 0x24440470  addiu       $a0, $v0, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1136));
        ctx->pc = 0x5391A0u;
        goto label_5391a0;
    }
    ctx->pc = 0x539198u;
    SET_GPR_U32(ctx, 31, 0x5391A0u);
    ctx->pc = 0x53919Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539198u;
            // 0x53919c: 0x24440470  addiu       $a0, $v0, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5391A0u; }
        if (ctx->pc != 0x5391A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5391A0u; }
        if (ctx->pc != 0x5391A0u) { return; }
    }
    ctx->pc = 0x5391A0u;
label_5391a0:
    // 0x5391a0: 0x3c023f1c  lui         $v0, 0x3F1C
    ctx->pc = 0x5391a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16156 << 16));
label_5391a4:
    // 0x5391a4: 0x344261aa  ori         $v0, $v0, 0x61AA
    ctx->pc = 0x5391a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25002);
label_5391a8:
    // 0x5391a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x5391a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5391ac:
    // 0x5391ac: 0xc047714  jal         func_11DC50
label_5391b0:
    if (ctx->pc == 0x5391B0u) {
        ctx->pc = 0x5391B0u;
            // 0x5391b0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x5391B4u;
        goto label_5391b4;
    }
    ctx->pc = 0x5391ACu;
    SET_GPR_U32(ctx, 31, 0x5391B4u);
    ctx->pc = 0x5391B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5391ACu;
            // 0x5391b0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DC50u;
    if (runtime->hasFunction(0x11DC50u)) {
        auto targetFn = runtime->lookupFunction(0x11DC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5391B4u; }
        if (ctx->pc != 0x5391B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DC50_0x11dc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5391B4u; }
        if (ctx->pc != 0x5391B4u) { return; }
    }
    ctx->pc = 0x5391B4u;
label_5391b4:
    // 0x5391b4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x5391b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5391b8:
    // 0x5391b8: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_5391bc:
    if (ctx->pc == 0x5391BCu) {
        ctx->pc = 0x5391BCu;
            // 0x5391bc: 0x8e030100  lw          $v1, 0x100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->pc = 0x5391C0u;
        goto label_5391c0;
    }
    ctx->pc = 0x5391B8u;
    {
        const bool branch_taken_0x5391b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x5391b8) {
            ctx->pc = 0x5391BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5391B8u;
            // 0x5391bc: 0x8e030100  lw          $v1, 0x100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5391D4u;
            goto label_5391d4;
        }
    }
    ctx->pc = 0x5391C0u;
label_5391c0:
    // 0x5391c0: 0x8e030100  lw          $v1, 0x100($s0)
    ctx->pc = 0x5391c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_5391c4:
    // 0x5391c4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x5391c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_5391c8:
    // 0x5391c8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x5391c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_5391cc:
    // 0x5391cc: 0x10000004  b           . + 4 + (0x4 << 2)
label_5391d0:
    if (ctx->pc == 0x5391D0u) {
        ctx->pc = 0x5391D0u;
            // 0x5391d0: 0xa2030104  sb          $v1, 0x104($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 260), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x5391D4u;
        goto label_5391d4;
    }
    ctx->pc = 0x5391CCu;
    {
        const bool branch_taken_0x5391cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5391D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5391CCu;
            // 0x5391d0: 0xa2030104  sb          $v1, 0x104($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 260), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5391cc) {
            ctx->pc = 0x5391E0u;
            goto label_5391e0;
        }
    }
    ctx->pc = 0x5391D4u;
label_5391d4:
    // 0x5391d4: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x5391d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_5391d8:
    // 0x5391d8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x5391d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_5391dc:
    // 0x5391dc: 0xa2030104  sb          $v1, 0x104($s0)
    ctx->pc = 0x5391dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 260), (uint8_t)GPR_U32(ctx, 3));
label_5391e0:
    // 0x5391e0: 0x92030104  lbu         $v1, 0x104($s0)
    ctx->pc = 0x5391e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 260)));
label_5391e4:
    // 0x5391e4: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_5391e8:
    if (ctx->pc == 0x5391E8u) {
        ctx->pc = 0x5391ECu;
        goto label_5391ec;
    }
    ctx->pc = 0x5391E4u;
    {
        const bool branch_taken_0x5391e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5391e4) {
            ctx->pc = 0x539268u;
            goto label_539268;
        }
    }
    ctx->pc = 0x5391ECu;
label_5391ec:
    // 0x5391ec: 0x8e030100  lw          $v1, 0x100($s0)
    ctx->pc = 0x5391ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_5391f0:
    // 0x5391f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5391f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5391f4:
    // 0x5391f4: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
label_5391f8:
    if (ctx->pc == 0x5391F8u) {
        ctx->pc = 0x5391F8u;
            // 0x5391f8: 0x8e050050  lw          $a1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x5391FCu;
        goto label_5391fc;
    }
    ctx->pc = 0x5391F4u;
    {
        const bool branch_taken_0x5391f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x5391f4) {
            ctx->pc = 0x5391F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5391F4u;
            // 0x5391f8: 0x8e050050  lw          $a1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x539234u;
            goto label_539234;
        }
    }
    ctx->pc = 0x5391FCu;
label_5391fc:
    // 0x5391fc: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x5391fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_539200:
    // 0x539200: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x539200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_539204:
    // 0x539204: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x539204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_539208:
    // 0x539208: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x539208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53920c:
    // 0x53920c: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x53920cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_539210:
    // 0x539210: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x539210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_539214:
    // 0x539214: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x539214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_539218:
    // 0x539218: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x539218u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_53921c:
    // 0x53921c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x53921cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_539220:
    // 0x539220: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x539220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_539224:
    // 0x539224: 0xc08bff0  jal         func_22FFC0
label_539228:
    if (ctx->pc == 0x539228u) {
        ctx->pc = 0x539228u;
            // 0x539228: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53922Cu;
        goto label_53922c;
    }
    ctx->pc = 0x539224u;
    SET_GPR_U32(ctx, 31, 0x53922Cu);
    ctx->pc = 0x539228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539224u;
            // 0x539228: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53922Cu; }
        if (ctx->pc != 0x53922Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53922Cu; }
        if (ctx->pc != 0x53922Cu) { return; }
    }
    ctx->pc = 0x53922Cu;
label_53922c:
    // 0x53922c: 0x1000000d  b           . + 4 + (0xD << 2)
label_539230:
    if (ctx->pc == 0x539230u) {
        ctx->pc = 0x539230u;
            // 0x539230: 0xae000100  sw          $zero, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
        ctx->pc = 0x539234u;
        goto label_539234;
    }
    ctx->pc = 0x53922Cu;
    {
        const bool branch_taken_0x53922c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x539230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53922Cu;
            // 0x539230: 0xae000100  sw          $zero, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53922c) {
            ctx->pc = 0x539264u;
            goto label_539264;
        }
    }
    ctx->pc = 0x539234u;
label_539234:
    // 0x539234: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x539234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_539238:
    // 0x539238: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x539238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53923c:
    // 0x53923c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x53923cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_539240:
    // 0x539240: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x539240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_539244:
    // 0x539244: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x539244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_539248:
    // 0x539248: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x539248u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_53924c:
    // 0x53924c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x53924cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_539250:
    // 0x539250: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x539250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_539254:
    // 0x539254: 0xc08bff0  jal         func_22FFC0
label_539258:
    if (ctx->pc == 0x539258u) {
        ctx->pc = 0x539258u;
            // 0x539258: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53925Cu;
        goto label_53925c;
    }
    ctx->pc = 0x539254u;
    SET_GPR_U32(ctx, 31, 0x53925Cu);
    ctx->pc = 0x539258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539254u;
            // 0x539258: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53925Cu; }
        if (ctx->pc != 0x53925Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53925Cu; }
        if (ctx->pc != 0x53925Cu) { return; }
    }
    ctx->pc = 0x53925Cu;
label_53925c:
    // 0x53925c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x53925cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_539260:
    // 0x539260: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x539260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
label_539264:
    // 0x539264: 0xa2000104  sb          $zero, 0x104($s0)
    ctx->pc = 0x539264u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 260), (uint8_t)GPR_U32(ctx, 0));
label_539268:
    // 0x539268: 0x92030108  lbu         $v1, 0x108($s0)
    ctx->pc = 0x539268u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 264)));
label_53926c:
    // 0x53926c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_539270:
    if (ctx->pc == 0x539270u) {
        ctx->pc = 0x539274u;
        goto label_539274;
    }
    ctx->pc = 0x53926Cu;
    {
        const bool branch_taken_0x53926c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x53926c) {
            ctx->pc = 0x5392A4u;
            goto label_5392a4;
        }
    }
    ctx->pc = 0x539274u;
label_539274:
    // 0x539274: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x539274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_539278:
    // 0x539278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x539278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53927c:
    // 0x53927c: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x53927cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_539280:
    // 0x539280: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x539280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_539284:
    // 0x539284: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x539284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_539288:
    // 0x539288: 0xc0e32a4  jal         func_38CA90
label_53928c:
    if (ctx->pc == 0x53928Cu) {
        ctx->pc = 0x53928Cu;
            // 0x53928c: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->pc = 0x539290u;
        goto label_539290;
    }
    ctx->pc = 0x539288u;
    SET_GPR_U32(ctx, 31, 0x539290u);
    ctx->pc = 0x53928Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539288u;
            // 0x53928c: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539290u; }
        if (ctx->pc != 0x539290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539290u; }
        if (ctx->pc != 0x539290u) { return; }
    }
    ctx->pc = 0x539290u;
label_539290:
    // 0x539290: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x539290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_539294:
    // 0x539294: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x539294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_539298:
    // 0x539298: 0xae0400b4  sw          $a0, 0xB4($s0)
    ctx->pc = 0x539298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 4));
label_53929c:
    // 0x53929c: 0xa203004c  sb          $v1, 0x4C($s0)
    ctx->pc = 0x53929cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 3));
label_5392a0:
    // 0x5392a0: 0xa2000108  sb          $zero, 0x108($s0)
    ctx->pc = 0x5392a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 264), (uint8_t)GPR_U32(ctx, 0));
label_5392a4:
    // 0x5392a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5392a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5392a8:
    // 0x5392a8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x5392a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_5392ac:
    // 0x5392ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x5392acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5392b0:
    // 0x5392b0: 0x3e00008  jr          $ra
label_5392b4:
    if (ctx->pc == 0x5392B4u) {
        ctx->pc = 0x5392B4u;
            // 0x5392b4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x5392B8u;
        goto label_5392b8;
    }
    ctx->pc = 0x5392B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5392B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5392B0u;
            // 0x5392b4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5392B8u;
label_5392b8:
    // 0x5392b8: 0x0  nop
    ctx->pc = 0x5392b8u;
    // NOP
label_5392bc:
    // 0x5392bc: 0x0  nop
    ctx->pc = 0x5392bcu;
    // NOP
label_5392c0:
    // 0x5392c0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x5392c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_5392c4:
    // 0x5392c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x5392c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_5392c8:
    // 0x5392c8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x5392c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_5392cc:
    // 0x5392cc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x5392ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_5392d0:
    // 0x5392d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x5392d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5392d4:
    // 0x5392d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x5392d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_5392d8:
    // 0x5392d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x5392d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_5392dc:
    // 0x5392dc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x5392dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_5392e0:
    // 0x5392e0: 0x8c9000e0  lw          $s0, 0xE0($a0)
    ctx->pc = 0x5392e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_5392e4:
    // 0x5392e4: 0x8c920050  lw          $s2, 0x50($a0)
    ctx->pc = 0x5392e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_5392e8:
    // 0x5392e8: 0xc0e39b4  jal         func_38E6D0
label_5392ec:
    if (ctx->pc == 0x5392ECu) {
        ctx->pc = 0x5392ECu;
            // 0x5392ec: 0xa0800108  sb          $zero, 0x108($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 264), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x5392F0u;
        goto label_5392f0;
    }
    ctx->pc = 0x5392E8u;
    SET_GPR_U32(ctx, 31, 0x5392F0u);
    ctx->pc = 0x5392ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5392E8u;
            // 0x5392ec: 0xa0800108  sb          $zero, 0x108($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 264), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E6D0u;
    if (runtime->hasFunction(0x38E6D0u)) {
        auto targetFn = runtime->lookupFunction(0x38E6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5392F0u; }
        if (ctx->pc != 0x5392F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E6D0_0x38e6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5392F0u; }
        if (ctx->pc != 0x5392F0u) { return; }
    }
    ctx->pc = 0x5392F0u;
label_5392f0:
    // 0x5392f0: 0x3c0200c0  lui         $v0, 0xC0
    ctx->pc = 0x5392f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)192 << 16));
label_5392f4:
    // 0x5392f4: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x5392f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_5392f8:
    // 0x5392f8: 0x34510020  ori         $s1, $v0, 0x20
    ctx->pc = 0x5392f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_5392fc:
    // 0x5392fc: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x5392fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
label_539300:
    // 0x539300: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x539300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
label_539304:
    // 0x539304: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x539304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
label_539308:
    // 0x539308: 0x8e6200f8  lw          $v0, 0xF8($s3)
    ctx->pc = 0x539308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 248)));
label_53930c:
    // 0x53930c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x53930cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_539310:
    // 0x539310: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_539314:
    if (ctx->pc == 0x539314u) {
        ctx->pc = 0x539314u;
            // 0x539314: 0x36310100  ori         $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)256);
        ctx->pc = 0x539318u;
        goto label_539318;
    }
    ctx->pc = 0x539310u;
    {
        const bool branch_taken_0x539310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x539310) {
            ctx->pc = 0x539314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x539310u;
            // 0x539314: 0x36310100  ori         $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
            ctx->pc = 0x539378u;
            goto label_539378;
        }
    }
    ctx->pc = 0x539318u;
label_539318:
    // 0x539318: 0x8e6200e0  lw          $v0, 0xE0($s3)
    ctx->pc = 0x539318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 224)));
label_53931c:
    // 0x53931c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x53931cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_539320:
    // 0x539320: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x539320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_539324:
    // 0x539324: 0xc04cc90  jal         func_133240
label_539328:
    if (ctx->pc == 0x539328u) {
        ctx->pc = 0x539328u;
            // 0x539328: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x53932Cu;
        goto label_53932c;
    }
    ctx->pc = 0x539324u;
    SET_GPR_U32(ctx, 31, 0x53932Cu);
    ctx->pc = 0x539328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539324u;
            // 0x539328: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53932Cu; }
        if (ctx->pc != 0x53932Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53932Cu; }
        if (ctx->pc != 0x53932Cu) { return; }
    }
    ctx->pc = 0x53932Cu;
label_53932c:
    // 0x53932c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x53932cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_539330:
    // 0x539330: 0xc04cc44  jal         func_133110
label_539334:
    if (ctx->pc == 0x539334u) {
        ctx->pc = 0x539334u;
            // 0x539334: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x539338u;
        goto label_539338;
    }
    ctx->pc = 0x539330u;
    SET_GPR_U32(ctx, 31, 0x539338u);
    ctx->pc = 0x539334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539330u;
            // 0x539334: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539338u; }
        if (ctx->pc != 0x539338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539338u; }
        if (ctx->pc != 0x539338u) { return; }
    }
    ctx->pc = 0x539338u;
label_539338:
    // 0x539338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x539338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53933c:
    // 0x53933c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x53933cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_539340:
    // 0x539340: 0xae620100  sw          $v0, 0x100($s3)
    ctx->pc = 0x539340u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 256), GPR_U32(ctx, 2));
label_539344:
    // 0x539344: 0x8e6200e0  lw          $v0, 0xE0($s3)
    ctx->pc = 0x539344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 224)));
label_539348:
    // 0x539348: 0xc04cc08  jal         func_133020
label_53934c:
    if (ctx->pc == 0x53934Cu) {
        ctx->pc = 0x53934Cu;
            // 0x53934c: 0x24440470  addiu       $a0, $v0, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1136));
        ctx->pc = 0x539350u;
        goto label_539350;
    }
    ctx->pc = 0x539348u;
    SET_GPR_U32(ctx, 31, 0x539350u);
    ctx->pc = 0x53934Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539348u;
            // 0x53934c: 0x24440470  addiu       $a0, $v0, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539350u; }
        if (ctx->pc != 0x539350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539350u; }
        if (ctx->pc != 0x539350u) { return; }
    }
    ctx->pc = 0x539350u;
label_539350:
    // 0x539350: 0x3c023f1c  lui         $v0, 0x3F1C
    ctx->pc = 0x539350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16156 << 16));
label_539354:
    // 0x539354: 0x344261aa  ori         $v0, $v0, 0x61AA
    ctx->pc = 0x539354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25002);
label_539358:
    // 0x539358: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x539358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_53935c:
    // 0x53935c: 0xc047714  jal         func_11DC50
label_539360:
    if (ctx->pc == 0x539360u) {
        ctx->pc = 0x539360u;
            // 0x539360: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x539364u;
        goto label_539364;
    }
    ctx->pc = 0x53935Cu;
    SET_GPR_U32(ctx, 31, 0x539364u);
    ctx->pc = 0x539360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53935Cu;
            // 0x539360: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DC50u;
    if (runtime->hasFunction(0x11DC50u)) {
        auto targetFn = runtime->lookupFunction(0x11DC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539364u; }
        if (ctx->pc != 0x539364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DC50_0x11dc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539364u; }
        if (ctx->pc != 0x539364u) { return; }
    }
    ctx->pc = 0x539364u;
label_539364:
    // 0x539364: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x539364u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_539368:
    // 0x539368: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_53936c:
    if (ctx->pc == 0x53936Cu) {
        ctx->pc = 0x53936Cu;
            // 0x53936c: 0x11103c  dsll32      $v0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
        ctx->pc = 0x539370u;
        goto label_539370;
    }
    ctx->pc = 0x539368u;
    {
        const bool branch_taken_0x539368 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x539368) {
            ctx->pc = 0x53936Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x539368u;
            // 0x53936c: 0x11103c  dsll32      $v0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53937Cu;
            goto label_53937c;
        }
    }
    ctx->pc = 0x539370u;
label_539370:
    // 0x539370: 0xae600100  sw          $zero, 0x100($s3)
    ctx->pc = 0x539370u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 256), GPR_U32(ctx, 0));
label_539374:
    // 0x539374: 0x36310100  ori         $s1, $s1, 0x100
    ctx->pc = 0x539374u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)256);
label_539378:
    // 0x539378: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x539378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_53937c:
    // 0x53937c: 0xa2600104  sb          $zero, 0x104($s3)
    ctx->pc = 0x53937cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 260), (uint8_t)GPR_U32(ctx, 0));
label_539380:
    // 0x539380: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x539380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_539384:
    // 0x539384: 0xa2600105  sb          $zero, 0x105($s3)
    ctx->pc = 0x539384u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 261), (uint8_t)GPR_U32(ctx, 0));
label_539388:
    // 0x539388: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x539388u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
label_53938c:
    // 0x53938c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x53938cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_539390:
    // 0x539390: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x539390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_539394:
    // 0x539394: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x539394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_539398:
    // 0x539398: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x539398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_53939c:
    // 0x53939c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x53939cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_5393a0:
    // 0x5393a0: 0xc08bff0  jal         func_22FFC0
label_5393a4:
    if (ctx->pc == 0x5393A4u) {
        ctx->pc = 0x5393A4u;
            // 0x5393a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5393A8u;
        goto label_5393a8;
    }
    ctx->pc = 0x5393A0u;
    SET_GPR_U32(ctx, 31, 0x5393A8u);
    ctx->pc = 0x5393A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5393A0u;
            // 0x5393a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5393A8u; }
        if (ctx->pc != 0x5393A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5393A8u; }
        if (ctx->pc != 0x5393A8u) { return; }
    }
    ctx->pc = 0x5393A8u;
label_5393a8:
    // 0x5393a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5393a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5393ac:
    // 0x5393ac: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x5393acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_5393b0:
    // 0x5393b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5393b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5393b4:
    // 0x5393b4: 0xc08914c  jal         func_224530
label_5393b8:
    if (ctx->pc == 0x5393B8u) {
        ctx->pc = 0x5393B8u;
            // 0x5393b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5393BCu;
        goto label_5393bc;
    }
    ctx->pc = 0x5393B4u;
    SET_GPR_U32(ctx, 31, 0x5393BCu);
    ctx->pc = 0x5393B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5393B4u;
            // 0x5393b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5393BCu; }
        if (ctx->pc != 0x5393BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5393BCu; }
        if (ctx->pc != 0x5393BCu) { return; }
    }
    ctx->pc = 0x5393BCu;
label_5393bc:
    // 0x5393bc: 0xc088b74  jal         func_222DD0
label_5393c0:
    if (ctx->pc == 0x5393C0u) {
        ctx->pc = 0x5393C0u;
            // 0x5393c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5393C4u;
        goto label_5393c4;
    }
    ctx->pc = 0x5393BCu;
    SET_GPR_U32(ctx, 31, 0x5393C4u);
    ctx->pc = 0x5393C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5393BCu;
            // 0x5393c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5393C4u; }
        if (ctx->pc != 0x5393C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5393C4u; }
        if (ctx->pc != 0x5393C4u) { return; }
    }
    ctx->pc = 0x5393C4u;
label_5393c4:
    // 0x5393c4: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x5393c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_5393c8:
    // 0x5393c8: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x5393c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_5393cc:
    // 0x5393cc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x5393ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_5393d0:
    // 0x5393d0: 0x320f809  jalr        $t9
label_5393d4:
    if (ctx->pc == 0x5393D4u) {
        ctx->pc = 0x5393D4u;
            // 0x5393d4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x5393D8u;
        goto label_5393d8;
    }
    ctx->pc = 0x5393D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5393D8u);
        ctx->pc = 0x5393D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5393D0u;
            // 0x5393d4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5393D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5393D8u; }
            if (ctx->pc != 0x5393D8u) { return; }
        }
        }
    }
    ctx->pc = 0x5393D8u;
label_5393d8:
    // 0x5393d8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x5393d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_5393dc:
    // 0x5393dc: 0xc04cc04  jal         func_133010
label_5393e0:
    if (ctx->pc == 0x5393E0u) {
        ctx->pc = 0x5393E0u;
            // 0x5393e0: 0x26050480  addiu       $a1, $s0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
        ctx->pc = 0x5393E4u;
        goto label_5393e4;
    }
    ctx->pc = 0x5393DCu;
    SET_GPR_U32(ctx, 31, 0x5393E4u);
    ctx->pc = 0x5393E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5393DCu;
            // 0x5393e0: 0x26050480  addiu       $a1, $s0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5393E4u; }
        if (ctx->pc != 0x5393E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5393E4u; }
        if (ctx->pc != 0x5393E4u) { return; }
    }
    ctx->pc = 0x5393E4u;
label_5393e4:
    // 0x5393e4: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x5393e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5393e8:
    // 0x5393e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5393e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5393ec:
    // 0x5393ec: 0xc7a40094  lwc1        $f4, 0x94($sp)
    ctx->pc = 0x5393ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_5393f0:
    // 0x5393f0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x5393f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_5393f4:
    // 0x5393f4: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x5393f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5393f8:
    // 0x5393f8: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x5393f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_5393fc:
    // 0x5393fc: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x5393fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_539400:
    // 0x539400: 0xe7a40084  swc1        $f4, 0x84($sp)
    ctx->pc = 0x539400u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_539404:
    // 0x539404: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x539404u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_539408:
    // 0x539408: 0xc442001c  lwc1        $f2, 0x1C($v0)
    ctx->pc = 0x539408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_53940c:
    // 0x53940c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x53940cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_539410:
    // 0x539410: 0x0  nop
    ctx->pc = 0x539410u;
    // NOP
label_539414:
    // 0x539414: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x539414u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_539418:
    // 0x539418: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x539418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_53941c:
    // 0x53941c: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x53941cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_539420:
    // 0x539420: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x539420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_539424:
    // 0x539424: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x539424u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_539428:
    // 0x539428: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x539428u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_53942c:
    // 0x53942c: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x53942cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_539430:
    // 0x539430: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x539430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_539434:
    // 0x539434: 0x8e710050  lw          $s1, 0x50($s3)
    ctx->pc = 0x539434u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_539438:
    // 0x539438: 0xc088b74  jal         func_222DD0
label_53943c:
    if (ctx->pc == 0x53943Cu) {
        ctx->pc = 0x53943Cu;
            // 0x53943c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x539440u;
        goto label_539440;
    }
    ctx->pc = 0x539438u;
    SET_GPR_U32(ctx, 31, 0x539440u);
    ctx->pc = 0x53943Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539438u;
            // 0x53943c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539440u; }
        if (ctx->pc != 0x539440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539440u; }
        if (ctx->pc != 0x539440u) { return; }
    }
    ctx->pc = 0x539440u;
label_539440:
    // 0x539440: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x539440u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_539444:
    // 0x539444: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x539444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_539448:
    // 0x539448: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x539448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_53944c:
    // 0x53944c: 0x320f809  jalr        $t9
label_539450:
    if (ctx->pc == 0x539450u) {
        ctx->pc = 0x539450u;
            // 0x539450: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x539454u;
        goto label_539454;
    }
    ctx->pc = 0x53944Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x539454u);
        ctx->pc = 0x539450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53944Cu;
            // 0x539450: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x539454u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x539454u; }
            if (ctx->pc != 0x539454u) { return; }
        }
        }
    }
    ctx->pc = 0x539454u;
label_539454:
    // 0x539454: 0x3c0343d1  lui         $v1, 0x43D1
    ctx->pc = 0x539454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17361 << 16));
label_539458:
    // 0x539458: 0x3c023fdf  lui         $v0, 0x3FDF
    ctx->pc = 0x539458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16351 << 16));
label_53945c:
    // 0x53945c: 0x34647084  ori         $a0, $v1, 0x7084
    ctx->pc = 0x53945cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28804);
label_539460:
    // 0x539460: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x539460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_539464:
    // 0x539464: 0x344366f3  ori         $v1, $v0, 0x66F3
    ctx->pc = 0x539464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26355);
label_539468:
    // 0x539468: 0xae440154  sw          $a0, 0x154($s2)
    ctx->pc = 0x539468u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 4));
label_53946c:
    // 0x53946c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x53946cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_539470:
    // 0x539470: 0xae430158  sw          $v1, 0x158($s2)
    ctx->pc = 0x539470u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 344), GPR_U32(ctx, 3));
label_539474:
    // 0x539474: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x539474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_539478:
    // 0x539478: 0xae40015c  sw          $zero, 0x15C($s2)
    ctx->pc = 0x539478u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 348), GPR_U32(ctx, 0));
label_53947c:
    // 0x53947c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x53947cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_539480:
    // 0x539480: 0xae420160  sw          $v0, 0x160($s2)
    ctx->pc = 0x539480u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 352), GPR_U32(ctx, 2));
label_539484:
    // 0x539484: 0xc04c72c  jal         func_131CB0
label_539488:
    if (ctx->pc == 0x539488u) {
        ctx->pc = 0x539488u;
            // 0x539488: 0x266600e8  addiu       $a2, $s3, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 232));
        ctx->pc = 0x53948Cu;
        goto label_53948c;
    }
    ctx->pc = 0x539484u;
    SET_GPR_U32(ctx, 31, 0x53948Cu);
    ctx->pc = 0x539488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539484u;
            // 0x539488: 0x266600e8  addiu       $a2, $s3, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53948Cu; }
        if (ctx->pc != 0x53948Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53948Cu; }
        if (ctx->pc != 0x53948Cu) { return; }
    }
    ctx->pc = 0x53948Cu;
label_53948c:
    // 0x53948c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x53948cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_539490:
    // 0x539490: 0xc04f278  jal         func_13C9E0
label_539494:
    if (ctx->pc == 0x539494u) {
        ctx->pc = 0x539494u;
            // 0x539494: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x539498u;
        goto label_539498;
    }
    ctx->pc = 0x539490u;
    SET_GPR_U32(ctx, 31, 0x539498u);
    ctx->pc = 0x539494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539490u;
            // 0x539494: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539498u; }
        if (ctx->pc != 0x539498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539498u; }
        if (ctx->pc != 0x539498u) { return; }
    }
    ctx->pc = 0x539498u;
label_539498:
    // 0x539498: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x539498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_53949c:
    // 0x53949c: 0xc04ce80  jal         func_133A00
label_5394a0:
    if (ctx->pc == 0x5394A0u) {
        ctx->pc = 0x5394A0u;
            // 0x5394a0: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x5394A4u;
        goto label_5394a4;
    }
    ctx->pc = 0x53949Cu;
    SET_GPR_U32(ctx, 31, 0x5394A4u);
    ctx->pc = 0x5394A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53949Cu;
            // 0x5394a0: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5394A4u; }
        if (ctx->pc != 0x5394A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5394A4u; }
        if (ctx->pc != 0x5394A4u) { return; }
    }
    ctx->pc = 0x5394A4u;
label_5394a4:
    // 0x5394a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x5394a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5394a8:
    // 0x5394a8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x5394a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_5394ac:
    // 0x5394ac: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x5394acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_5394b0:
    // 0x5394b0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x5394b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_5394b4:
    // 0x5394b4: 0xc04cbd8  jal         func_132F60
label_5394b8:
    if (ctx->pc == 0x5394B8u) {
        ctx->pc = 0x5394B8u;
            // 0x5394b8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x5394BCu;
        goto label_5394bc;
    }
    ctx->pc = 0x5394B4u;
    SET_GPR_U32(ctx, 31, 0x5394BCu);
    ctx->pc = 0x5394B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5394B4u;
            // 0x5394b8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5394BCu; }
        if (ctx->pc != 0x5394BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5394BCu; }
        if (ctx->pc != 0x5394BCu) { return; }
    }
    ctx->pc = 0x5394BCu;
label_5394bc:
    // 0x5394bc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x5394bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_5394c0:
    // 0x5394c0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x5394c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_5394c4:
    // 0x5394c4: 0xc04cca0  jal         func_133280
label_5394c8:
    if (ctx->pc == 0x5394C8u) {
        ctx->pc = 0x5394C8u;
            // 0x5394c8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5394CCu;
        goto label_5394cc;
    }
    ctx->pc = 0x5394C4u;
    SET_GPR_U32(ctx, 31, 0x5394CCu);
    ctx->pc = 0x5394C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5394C4u;
            // 0x5394c8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5394CCu; }
        if (ctx->pc != 0x5394CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5394CCu; }
        if (ctx->pc != 0x5394CCu) { return; }
    }
    ctx->pc = 0x5394CCu;
label_5394cc:
    // 0x5394cc: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x5394ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
label_5394d0:
    // 0x5394d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5394d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5394d4:
    // 0x5394d4: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x5394d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_5394d8:
    // 0x5394d8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x5394d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_5394dc:
    // 0x5394dc: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x5394dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_5394e0:
    // 0x5394e0: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x5394e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
label_5394e4:
    // 0x5394e4: 0xc0891d8  jal         func_224760
label_5394e8:
    if (ctx->pc == 0x5394E8u) {
        ctx->pc = 0x5394E8u;
            // 0x5394e8: 0xafa000bc  sw          $zero, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
        ctx->pc = 0x5394ECu;
        goto label_5394ec;
    }
    ctx->pc = 0x5394E4u;
    SET_GPR_U32(ctx, 31, 0x5394ECu);
    ctx->pc = 0x5394E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5394E4u;
            // 0x5394e8: 0xafa000bc  sw          $zero, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5394ECu; }
        if (ctx->pc != 0x5394ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5394ECu; }
        if (ctx->pc != 0x5394ECu) { return; }
    }
    ctx->pc = 0x5394ECu;
label_5394ec:
    // 0x5394ec: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x5394ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_5394f0:
    // 0x5394f0: 0xc04c74c  jal         func_131D30
label_5394f4:
    if (ctx->pc == 0x5394F4u) {
        ctx->pc = 0x5394F4u;
            // 0x5394f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5394F8u;
        goto label_5394f8;
    }
    ctx->pc = 0x5394F0u;
    SET_GPR_U32(ctx, 31, 0x5394F8u);
    ctx->pc = 0x5394F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5394F0u;
            // 0x5394f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5394F8u; }
        if (ctx->pc != 0x5394F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5394F8u; }
        if (ctx->pc != 0x5394F8u) { return; }
    }
    ctx->pc = 0x5394F8u;
label_5394f8:
    // 0x5394f8: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x5394f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5394fc:
    // 0x5394fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5394fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_539500:
    // 0x539500: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x539500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_539504:
    // 0x539504: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x539504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_539508:
    // 0x539508: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x539508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_53950c:
    // 0x53950c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x53950cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_539510:
    // 0x539510: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x539510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_539514:
    // 0x539514: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x539514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_539518:
    // 0x539518: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x539518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53951c:
    // 0x53951c: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x53951cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_539520:
    // 0x539520: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x539520u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_539524:
    // 0x539524: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x539524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_539528:
    // 0x539528: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x539528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_53952c:
    // 0x53952c: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x53952cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_539530:
    // 0x539530: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x539530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_539534:
    // 0x539534: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x539534u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_539538:
    // 0x539538: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x539538u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_53953c:
    // 0x53953c: 0xc0892b0  jal         func_224AC0
label_539540:
    if (ctx->pc == 0x539540u) {
        ctx->pc = 0x539540u;
            // 0x539540: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->pc = 0x539544u;
        goto label_539544;
    }
    ctx->pc = 0x53953Cu;
    SET_GPR_U32(ctx, 31, 0x539544u);
    ctx->pc = 0x539540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53953Cu;
            // 0x539540: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539544u; }
        if (ctx->pc != 0x539544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539544u; }
        if (ctx->pc != 0x539544u) { return; }
    }
    ctx->pc = 0x539544u;
label_539544:
    // 0x539544: 0xa2600107  sb          $zero, 0x107($s3)
    ctx->pc = 0x539544u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 263), (uint8_t)GPR_U32(ctx, 0));
label_539548:
    // 0x539548: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x539548u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53954c:
    // 0x53954c: 0x8e640150  lw          $a0, 0x150($s3)
    ctx->pc = 0x53954cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 336)));
label_539550:
    // 0x539550: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x539550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_539554:
    // 0x539554: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x539554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_539558:
    // 0x539558: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x539558u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_53955c:
    // 0x53955c: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x53955cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_539560:
    // 0x539560: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x539560u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_539564:
    // 0x539564: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_539568:
    if (ctx->pc == 0x539568u) {
        ctx->pc = 0x539568u;
            // 0x539568: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x53956Cu;
        goto label_53956c;
    }
    ctx->pc = 0x539564u;
    {
        const bool branch_taken_0x539564 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x539568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x539564u;
            // 0x539568: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x539564) {
            ctx->pc = 0x539570u;
            goto label_539570;
        }
    }
    ctx->pc = 0x53956Cu;
label_53956c:
    // 0x53956c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x53956cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_539570:
    // 0x539570: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x539570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_539574:
    // 0x539574: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x539574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_539578:
    // 0x539578: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_53957c:
    if (ctx->pc == 0x53957Cu) {
        ctx->pc = 0x53957Cu;
            // 0x53957c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x539580u;
        goto label_539580;
    }
    ctx->pc = 0x539578u;
    {
        const bool branch_taken_0x539578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x539578) {
            ctx->pc = 0x53957Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x539578u;
            // 0x53957c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5395D4u;
            goto label_5395d4;
        }
    }
    ctx->pc = 0x539580u;
label_539580:
    // 0x539580: 0xc040180  jal         func_100600
label_539584:
    if (ctx->pc == 0x539584u) {
        ctx->pc = 0x539584u;
            // 0x539584: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->pc = 0x539588u;
        goto label_539588;
    }
    ctx->pc = 0x539580u;
    SET_GPR_U32(ctx, 31, 0x539588u);
    ctx->pc = 0x539584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539580u;
            // 0x539584: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539588u; }
        if (ctx->pc != 0x539588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539588u; }
        if (ctx->pc != 0x539588u) { return; }
    }
    ctx->pc = 0x539588u;
label_539588:
    // 0x539588: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x539588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_53958c:
    // 0x53958c: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
label_539590:
    if (ctx->pc == 0x539590u) {
        ctx->pc = 0x539590u;
            // 0x539590: 0xae640150  sw          $a0, 0x150($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 336), GPR_U32(ctx, 4));
        ctx->pc = 0x539594u;
        goto label_539594;
    }
    ctx->pc = 0x53958Cu;
    {
        const bool branch_taken_0x53958c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x53958c) {
            ctx->pc = 0x539590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53958Cu;
            // 0x539590: 0xae640150  sw          $a0, 0x150($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 336), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5395D0u;
            goto label_5395d0;
        }
    }
    ctx->pc = 0x539594u;
label_539594:
    // 0x539594: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x539594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_539598:
    // 0x539598: 0x8e6300e0  lw          $v1, 0xE0($s3)
    ctx->pc = 0x539598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 224)));
label_53959c:
    // 0x53959c: 0x8c470e80  lw          $a3, 0xE80($v0)
    ctx->pc = 0x53959cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_5395a0:
    // 0x5395a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x5395a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5395a4:
    // 0x5395a4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x5395a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_5395a8:
    // 0x5395a8: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x5395a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_5395ac:
    // 0x5395ac: 0x24690010  addiu       $t1, $v1, 0x10
    ctx->pc = 0x5395acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_5395b0:
    // 0x5395b0: 0x266a0110  addiu       $t2, $s3, 0x110
    ctx->pc = 0x5395b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
label_5395b4:
    // 0x5395b4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x5395b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_5395b8:
    // 0x5395b8: 0x24e706f8  addiu       $a3, $a3, 0x6F8
    ctx->pc = 0x5395b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1784));
label_5395bc:
    // 0x5395bc: 0x3445ac0a  ori         $a1, $v0, 0xAC0A
    ctx->pc = 0x5395bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44042);
label_5395c0:
    // 0x5395c0: 0xc13d944  jal         func_4F6510
label_5395c4:
    if (ctx->pc == 0x5395C4u) {
        ctx->pc = 0x5395C4u;
            // 0x5395c4: 0x240b0004  addiu       $t3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x5395C8u;
        goto label_5395c8;
    }
    ctx->pc = 0x5395C0u;
    SET_GPR_U32(ctx, 31, 0x5395C8u);
    ctx->pc = 0x5395C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5395C0u;
            // 0x5395c4: 0x240b0004  addiu       $t3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F6510u;
    if (runtime->hasFunction(0x4F6510u)) {
        auto targetFn = runtime->lookupFunction(0x4F6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5395C8u; }
        if (ctx->pc != 0x5395C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F6510_0x4f6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5395C8u; }
        if (ctx->pc != 0x5395C8u) { return; }
    }
    ctx->pc = 0x5395C8u;
label_5395c8:
    // 0x5395c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x5395c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5395cc:
    // 0x5395cc: 0xae640150  sw          $a0, 0x150($s3)
    ctx->pc = 0x5395ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 336), GPR_U32(ctx, 4));
label_5395d0:
    // 0x5395d0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x5395d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_5395d4:
    // 0x5395d4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x5395d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_5395d8:
    // 0x5395d8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x5395d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_5395dc:
    // 0x5395dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x5395dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5395e0:
    // 0x5395e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x5395e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5395e4:
    // 0x5395e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x5395e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5395e8:
    // 0x5395e8: 0x3e00008  jr          $ra
label_5395ec:
    if (ctx->pc == 0x5395ECu) {
        ctx->pc = 0x5395ECu;
            // 0x5395ec: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x5395F0u;
        goto label_fallthrough_0x5395e8;
    }
    ctx->pc = 0x5395E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5395ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5395E8u;
            // 0x5395ec: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x5395e8:
    ctx->pc = 0x5395F0u;
}
