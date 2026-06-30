#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003656B0
// Address: 0x3656b0 - 0x366710
void sub_003656B0_0x3656b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003656B0_0x3656b0");
#endif

    switch (ctx->pc) {
        case 0x3656b0u: goto label_3656b0;
        case 0x3656b4u: goto label_3656b4;
        case 0x3656b8u: goto label_3656b8;
        case 0x3656bcu: goto label_3656bc;
        case 0x3656c0u: goto label_3656c0;
        case 0x3656c4u: goto label_3656c4;
        case 0x3656c8u: goto label_3656c8;
        case 0x3656ccu: goto label_3656cc;
        case 0x3656d0u: goto label_3656d0;
        case 0x3656d4u: goto label_3656d4;
        case 0x3656d8u: goto label_3656d8;
        case 0x3656dcu: goto label_3656dc;
        case 0x3656e0u: goto label_3656e0;
        case 0x3656e4u: goto label_3656e4;
        case 0x3656e8u: goto label_3656e8;
        case 0x3656ecu: goto label_3656ec;
        case 0x3656f0u: goto label_3656f0;
        case 0x3656f4u: goto label_3656f4;
        case 0x3656f8u: goto label_3656f8;
        case 0x3656fcu: goto label_3656fc;
        case 0x365700u: goto label_365700;
        case 0x365704u: goto label_365704;
        case 0x365708u: goto label_365708;
        case 0x36570cu: goto label_36570c;
        case 0x365710u: goto label_365710;
        case 0x365714u: goto label_365714;
        case 0x365718u: goto label_365718;
        case 0x36571cu: goto label_36571c;
        case 0x365720u: goto label_365720;
        case 0x365724u: goto label_365724;
        case 0x365728u: goto label_365728;
        case 0x36572cu: goto label_36572c;
        case 0x365730u: goto label_365730;
        case 0x365734u: goto label_365734;
        case 0x365738u: goto label_365738;
        case 0x36573cu: goto label_36573c;
        case 0x365740u: goto label_365740;
        case 0x365744u: goto label_365744;
        case 0x365748u: goto label_365748;
        case 0x36574cu: goto label_36574c;
        case 0x365750u: goto label_365750;
        case 0x365754u: goto label_365754;
        case 0x365758u: goto label_365758;
        case 0x36575cu: goto label_36575c;
        case 0x365760u: goto label_365760;
        case 0x365764u: goto label_365764;
        case 0x365768u: goto label_365768;
        case 0x36576cu: goto label_36576c;
        case 0x365770u: goto label_365770;
        case 0x365774u: goto label_365774;
        case 0x365778u: goto label_365778;
        case 0x36577cu: goto label_36577c;
        case 0x365780u: goto label_365780;
        case 0x365784u: goto label_365784;
        case 0x365788u: goto label_365788;
        case 0x36578cu: goto label_36578c;
        case 0x365790u: goto label_365790;
        case 0x365794u: goto label_365794;
        case 0x365798u: goto label_365798;
        case 0x36579cu: goto label_36579c;
        case 0x3657a0u: goto label_3657a0;
        case 0x3657a4u: goto label_3657a4;
        case 0x3657a8u: goto label_3657a8;
        case 0x3657acu: goto label_3657ac;
        case 0x3657b0u: goto label_3657b0;
        case 0x3657b4u: goto label_3657b4;
        case 0x3657b8u: goto label_3657b8;
        case 0x3657bcu: goto label_3657bc;
        case 0x3657c0u: goto label_3657c0;
        case 0x3657c4u: goto label_3657c4;
        case 0x3657c8u: goto label_3657c8;
        case 0x3657ccu: goto label_3657cc;
        case 0x3657d0u: goto label_3657d0;
        case 0x3657d4u: goto label_3657d4;
        case 0x3657d8u: goto label_3657d8;
        case 0x3657dcu: goto label_3657dc;
        case 0x3657e0u: goto label_3657e0;
        case 0x3657e4u: goto label_3657e4;
        case 0x3657e8u: goto label_3657e8;
        case 0x3657ecu: goto label_3657ec;
        case 0x3657f0u: goto label_3657f0;
        case 0x3657f4u: goto label_3657f4;
        case 0x3657f8u: goto label_3657f8;
        case 0x3657fcu: goto label_3657fc;
        case 0x365800u: goto label_365800;
        case 0x365804u: goto label_365804;
        case 0x365808u: goto label_365808;
        case 0x36580cu: goto label_36580c;
        case 0x365810u: goto label_365810;
        case 0x365814u: goto label_365814;
        case 0x365818u: goto label_365818;
        case 0x36581cu: goto label_36581c;
        case 0x365820u: goto label_365820;
        case 0x365824u: goto label_365824;
        case 0x365828u: goto label_365828;
        case 0x36582cu: goto label_36582c;
        case 0x365830u: goto label_365830;
        case 0x365834u: goto label_365834;
        case 0x365838u: goto label_365838;
        case 0x36583cu: goto label_36583c;
        case 0x365840u: goto label_365840;
        case 0x365844u: goto label_365844;
        case 0x365848u: goto label_365848;
        case 0x36584cu: goto label_36584c;
        case 0x365850u: goto label_365850;
        case 0x365854u: goto label_365854;
        case 0x365858u: goto label_365858;
        case 0x36585cu: goto label_36585c;
        case 0x365860u: goto label_365860;
        case 0x365864u: goto label_365864;
        case 0x365868u: goto label_365868;
        case 0x36586cu: goto label_36586c;
        case 0x365870u: goto label_365870;
        case 0x365874u: goto label_365874;
        case 0x365878u: goto label_365878;
        case 0x36587cu: goto label_36587c;
        case 0x365880u: goto label_365880;
        case 0x365884u: goto label_365884;
        case 0x365888u: goto label_365888;
        case 0x36588cu: goto label_36588c;
        case 0x365890u: goto label_365890;
        case 0x365894u: goto label_365894;
        case 0x365898u: goto label_365898;
        case 0x36589cu: goto label_36589c;
        case 0x3658a0u: goto label_3658a0;
        case 0x3658a4u: goto label_3658a4;
        case 0x3658a8u: goto label_3658a8;
        case 0x3658acu: goto label_3658ac;
        case 0x3658b0u: goto label_3658b0;
        case 0x3658b4u: goto label_3658b4;
        case 0x3658b8u: goto label_3658b8;
        case 0x3658bcu: goto label_3658bc;
        case 0x3658c0u: goto label_3658c0;
        case 0x3658c4u: goto label_3658c4;
        case 0x3658c8u: goto label_3658c8;
        case 0x3658ccu: goto label_3658cc;
        case 0x3658d0u: goto label_3658d0;
        case 0x3658d4u: goto label_3658d4;
        case 0x3658d8u: goto label_3658d8;
        case 0x3658dcu: goto label_3658dc;
        case 0x3658e0u: goto label_3658e0;
        case 0x3658e4u: goto label_3658e4;
        case 0x3658e8u: goto label_3658e8;
        case 0x3658ecu: goto label_3658ec;
        case 0x3658f0u: goto label_3658f0;
        case 0x3658f4u: goto label_3658f4;
        case 0x3658f8u: goto label_3658f8;
        case 0x3658fcu: goto label_3658fc;
        case 0x365900u: goto label_365900;
        case 0x365904u: goto label_365904;
        case 0x365908u: goto label_365908;
        case 0x36590cu: goto label_36590c;
        case 0x365910u: goto label_365910;
        case 0x365914u: goto label_365914;
        case 0x365918u: goto label_365918;
        case 0x36591cu: goto label_36591c;
        case 0x365920u: goto label_365920;
        case 0x365924u: goto label_365924;
        case 0x365928u: goto label_365928;
        case 0x36592cu: goto label_36592c;
        case 0x365930u: goto label_365930;
        case 0x365934u: goto label_365934;
        case 0x365938u: goto label_365938;
        case 0x36593cu: goto label_36593c;
        case 0x365940u: goto label_365940;
        case 0x365944u: goto label_365944;
        case 0x365948u: goto label_365948;
        case 0x36594cu: goto label_36594c;
        case 0x365950u: goto label_365950;
        case 0x365954u: goto label_365954;
        case 0x365958u: goto label_365958;
        case 0x36595cu: goto label_36595c;
        case 0x365960u: goto label_365960;
        case 0x365964u: goto label_365964;
        case 0x365968u: goto label_365968;
        case 0x36596cu: goto label_36596c;
        case 0x365970u: goto label_365970;
        case 0x365974u: goto label_365974;
        case 0x365978u: goto label_365978;
        case 0x36597cu: goto label_36597c;
        case 0x365980u: goto label_365980;
        case 0x365984u: goto label_365984;
        case 0x365988u: goto label_365988;
        case 0x36598cu: goto label_36598c;
        case 0x365990u: goto label_365990;
        case 0x365994u: goto label_365994;
        case 0x365998u: goto label_365998;
        case 0x36599cu: goto label_36599c;
        case 0x3659a0u: goto label_3659a0;
        case 0x3659a4u: goto label_3659a4;
        case 0x3659a8u: goto label_3659a8;
        case 0x3659acu: goto label_3659ac;
        case 0x3659b0u: goto label_3659b0;
        case 0x3659b4u: goto label_3659b4;
        case 0x3659b8u: goto label_3659b8;
        case 0x3659bcu: goto label_3659bc;
        case 0x3659c0u: goto label_3659c0;
        case 0x3659c4u: goto label_3659c4;
        case 0x3659c8u: goto label_3659c8;
        case 0x3659ccu: goto label_3659cc;
        case 0x3659d0u: goto label_3659d0;
        case 0x3659d4u: goto label_3659d4;
        case 0x3659d8u: goto label_3659d8;
        case 0x3659dcu: goto label_3659dc;
        case 0x3659e0u: goto label_3659e0;
        case 0x3659e4u: goto label_3659e4;
        case 0x3659e8u: goto label_3659e8;
        case 0x3659ecu: goto label_3659ec;
        case 0x3659f0u: goto label_3659f0;
        case 0x3659f4u: goto label_3659f4;
        case 0x3659f8u: goto label_3659f8;
        case 0x3659fcu: goto label_3659fc;
        case 0x365a00u: goto label_365a00;
        case 0x365a04u: goto label_365a04;
        case 0x365a08u: goto label_365a08;
        case 0x365a0cu: goto label_365a0c;
        case 0x365a10u: goto label_365a10;
        case 0x365a14u: goto label_365a14;
        case 0x365a18u: goto label_365a18;
        case 0x365a1cu: goto label_365a1c;
        case 0x365a20u: goto label_365a20;
        case 0x365a24u: goto label_365a24;
        case 0x365a28u: goto label_365a28;
        case 0x365a2cu: goto label_365a2c;
        case 0x365a30u: goto label_365a30;
        case 0x365a34u: goto label_365a34;
        case 0x365a38u: goto label_365a38;
        case 0x365a3cu: goto label_365a3c;
        case 0x365a40u: goto label_365a40;
        case 0x365a44u: goto label_365a44;
        case 0x365a48u: goto label_365a48;
        case 0x365a4cu: goto label_365a4c;
        case 0x365a50u: goto label_365a50;
        case 0x365a54u: goto label_365a54;
        case 0x365a58u: goto label_365a58;
        case 0x365a5cu: goto label_365a5c;
        case 0x365a60u: goto label_365a60;
        case 0x365a64u: goto label_365a64;
        case 0x365a68u: goto label_365a68;
        case 0x365a6cu: goto label_365a6c;
        case 0x365a70u: goto label_365a70;
        case 0x365a74u: goto label_365a74;
        case 0x365a78u: goto label_365a78;
        case 0x365a7cu: goto label_365a7c;
        case 0x365a80u: goto label_365a80;
        case 0x365a84u: goto label_365a84;
        case 0x365a88u: goto label_365a88;
        case 0x365a8cu: goto label_365a8c;
        case 0x365a90u: goto label_365a90;
        case 0x365a94u: goto label_365a94;
        case 0x365a98u: goto label_365a98;
        case 0x365a9cu: goto label_365a9c;
        case 0x365aa0u: goto label_365aa0;
        case 0x365aa4u: goto label_365aa4;
        case 0x365aa8u: goto label_365aa8;
        case 0x365aacu: goto label_365aac;
        case 0x365ab0u: goto label_365ab0;
        case 0x365ab4u: goto label_365ab4;
        case 0x365ab8u: goto label_365ab8;
        case 0x365abcu: goto label_365abc;
        case 0x365ac0u: goto label_365ac0;
        case 0x365ac4u: goto label_365ac4;
        case 0x365ac8u: goto label_365ac8;
        case 0x365accu: goto label_365acc;
        case 0x365ad0u: goto label_365ad0;
        case 0x365ad4u: goto label_365ad4;
        case 0x365ad8u: goto label_365ad8;
        case 0x365adcu: goto label_365adc;
        case 0x365ae0u: goto label_365ae0;
        case 0x365ae4u: goto label_365ae4;
        case 0x365ae8u: goto label_365ae8;
        case 0x365aecu: goto label_365aec;
        case 0x365af0u: goto label_365af0;
        case 0x365af4u: goto label_365af4;
        case 0x365af8u: goto label_365af8;
        case 0x365afcu: goto label_365afc;
        case 0x365b00u: goto label_365b00;
        case 0x365b04u: goto label_365b04;
        case 0x365b08u: goto label_365b08;
        case 0x365b0cu: goto label_365b0c;
        case 0x365b10u: goto label_365b10;
        case 0x365b14u: goto label_365b14;
        case 0x365b18u: goto label_365b18;
        case 0x365b1cu: goto label_365b1c;
        case 0x365b20u: goto label_365b20;
        case 0x365b24u: goto label_365b24;
        case 0x365b28u: goto label_365b28;
        case 0x365b2cu: goto label_365b2c;
        case 0x365b30u: goto label_365b30;
        case 0x365b34u: goto label_365b34;
        case 0x365b38u: goto label_365b38;
        case 0x365b3cu: goto label_365b3c;
        case 0x365b40u: goto label_365b40;
        case 0x365b44u: goto label_365b44;
        case 0x365b48u: goto label_365b48;
        case 0x365b4cu: goto label_365b4c;
        case 0x365b50u: goto label_365b50;
        case 0x365b54u: goto label_365b54;
        case 0x365b58u: goto label_365b58;
        case 0x365b5cu: goto label_365b5c;
        case 0x365b60u: goto label_365b60;
        case 0x365b64u: goto label_365b64;
        case 0x365b68u: goto label_365b68;
        case 0x365b6cu: goto label_365b6c;
        case 0x365b70u: goto label_365b70;
        case 0x365b74u: goto label_365b74;
        case 0x365b78u: goto label_365b78;
        case 0x365b7cu: goto label_365b7c;
        case 0x365b80u: goto label_365b80;
        case 0x365b84u: goto label_365b84;
        case 0x365b88u: goto label_365b88;
        case 0x365b8cu: goto label_365b8c;
        case 0x365b90u: goto label_365b90;
        case 0x365b94u: goto label_365b94;
        case 0x365b98u: goto label_365b98;
        case 0x365b9cu: goto label_365b9c;
        case 0x365ba0u: goto label_365ba0;
        case 0x365ba4u: goto label_365ba4;
        case 0x365ba8u: goto label_365ba8;
        case 0x365bacu: goto label_365bac;
        case 0x365bb0u: goto label_365bb0;
        case 0x365bb4u: goto label_365bb4;
        case 0x365bb8u: goto label_365bb8;
        case 0x365bbcu: goto label_365bbc;
        case 0x365bc0u: goto label_365bc0;
        case 0x365bc4u: goto label_365bc4;
        case 0x365bc8u: goto label_365bc8;
        case 0x365bccu: goto label_365bcc;
        case 0x365bd0u: goto label_365bd0;
        case 0x365bd4u: goto label_365bd4;
        case 0x365bd8u: goto label_365bd8;
        case 0x365bdcu: goto label_365bdc;
        case 0x365be0u: goto label_365be0;
        case 0x365be4u: goto label_365be4;
        case 0x365be8u: goto label_365be8;
        case 0x365becu: goto label_365bec;
        case 0x365bf0u: goto label_365bf0;
        case 0x365bf4u: goto label_365bf4;
        case 0x365bf8u: goto label_365bf8;
        case 0x365bfcu: goto label_365bfc;
        case 0x365c00u: goto label_365c00;
        case 0x365c04u: goto label_365c04;
        case 0x365c08u: goto label_365c08;
        case 0x365c0cu: goto label_365c0c;
        case 0x365c10u: goto label_365c10;
        case 0x365c14u: goto label_365c14;
        case 0x365c18u: goto label_365c18;
        case 0x365c1cu: goto label_365c1c;
        case 0x365c20u: goto label_365c20;
        case 0x365c24u: goto label_365c24;
        case 0x365c28u: goto label_365c28;
        case 0x365c2cu: goto label_365c2c;
        case 0x365c30u: goto label_365c30;
        case 0x365c34u: goto label_365c34;
        case 0x365c38u: goto label_365c38;
        case 0x365c3cu: goto label_365c3c;
        case 0x365c40u: goto label_365c40;
        case 0x365c44u: goto label_365c44;
        case 0x365c48u: goto label_365c48;
        case 0x365c4cu: goto label_365c4c;
        case 0x365c50u: goto label_365c50;
        case 0x365c54u: goto label_365c54;
        case 0x365c58u: goto label_365c58;
        case 0x365c5cu: goto label_365c5c;
        case 0x365c60u: goto label_365c60;
        case 0x365c64u: goto label_365c64;
        case 0x365c68u: goto label_365c68;
        case 0x365c6cu: goto label_365c6c;
        case 0x365c70u: goto label_365c70;
        case 0x365c74u: goto label_365c74;
        case 0x365c78u: goto label_365c78;
        case 0x365c7cu: goto label_365c7c;
        case 0x365c80u: goto label_365c80;
        case 0x365c84u: goto label_365c84;
        case 0x365c88u: goto label_365c88;
        case 0x365c8cu: goto label_365c8c;
        case 0x365c90u: goto label_365c90;
        case 0x365c94u: goto label_365c94;
        case 0x365c98u: goto label_365c98;
        case 0x365c9cu: goto label_365c9c;
        case 0x365ca0u: goto label_365ca0;
        case 0x365ca4u: goto label_365ca4;
        case 0x365ca8u: goto label_365ca8;
        case 0x365cacu: goto label_365cac;
        case 0x365cb0u: goto label_365cb0;
        case 0x365cb4u: goto label_365cb4;
        case 0x365cb8u: goto label_365cb8;
        case 0x365cbcu: goto label_365cbc;
        case 0x365cc0u: goto label_365cc0;
        case 0x365cc4u: goto label_365cc4;
        case 0x365cc8u: goto label_365cc8;
        case 0x365cccu: goto label_365ccc;
        case 0x365cd0u: goto label_365cd0;
        case 0x365cd4u: goto label_365cd4;
        case 0x365cd8u: goto label_365cd8;
        case 0x365cdcu: goto label_365cdc;
        case 0x365ce0u: goto label_365ce0;
        case 0x365ce4u: goto label_365ce4;
        case 0x365ce8u: goto label_365ce8;
        case 0x365cecu: goto label_365cec;
        case 0x365cf0u: goto label_365cf0;
        case 0x365cf4u: goto label_365cf4;
        case 0x365cf8u: goto label_365cf8;
        case 0x365cfcu: goto label_365cfc;
        case 0x365d00u: goto label_365d00;
        case 0x365d04u: goto label_365d04;
        case 0x365d08u: goto label_365d08;
        case 0x365d0cu: goto label_365d0c;
        case 0x365d10u: goto label_365d10;
        case 0x365d14u: goto label_365d14;
        case 0x365d18u: goto label_365d18;
        case 0x365d1cu: goto label_365d1c;
        case 0x365d20u: goto label_365d20;
        case 0x365d24u: goto label_365d24;
        case 0x365d28u: goto label_365d28;
        case 0x365d2cu: goto label_365d2c;
        case 0x365d30u: goto label_365d30;
        case 0x365d34u: goto label_365d34;
        case 0x365d38u: goto label_365d38;
        case 0x365d3cu: goto label_365d3c;
        case 0x365d40u: goto label_365d40;
        case 0x365d44u: goto label_365d44;
        case 0x365d48u: goto label_365d48;
        case 0x365d4cu: goto label_365d4c;
        case 0x365d50u: goto label_365d50;
        case 0x365d54u: goto label_365d54;
        case 0x365d58u: goto label_365d58;
        case 0x365d5cu: goto label_365d5c;
        case 0x365d60u: goto label_365d60;
        case 0x365d64u: goto label_365d64;
        case 0x365d68u: goto label_365d68;
        case 0x365d6cu: goto label_365d6c;
        case 0x365d70u: goto label_365d70;
        case 0x365d74u: goto label_365d74;
        case 0x365d78u: goto label_365d78;
        case 0x365d7cu: goto label_365d7c;
        case 0x365d80u: goto label_365d80;
        case 0x365d84u: goto label_365d84;
        case 0x365d88u: goto label_365d88;
        case 0x365d8cu: goto label_365d8c;
        case 0x365d90u: goto label_365d90;
        case 0x365d94u: goto label_365d94;
        case 0x365d98u: goto label_365d98;
        case 0x365d9cu: goto label_365d9c;
        case 0x365da0u: goto label_365da0;
        case 0x365da4u: goto label_365da4;
        case 0x365da8u: goto label_365da8;
        case 0x365dacu: goto label_365dac;
        case 0x365db0u: goto label_365db0;
        case 0x365db4u: goto label_365db4;
        case 0x365db8u: goto label_365db8;
        case 0x365dbcu: goto label_365dbc;
        case 0x365dc0u: goto label_365dc0;
        case 0x365dc4u: goto label_365dc4;
        case 0x365dc8u: goto label_365dc8;
        case 0x365dccu: goto label_365dcc;
        case 0x365dd0u: goto label_365dd0;
        case 0x365dd4u: goto label_365dd4;
        case 0x365dd8u: goto label_365dd8;
        case 0x365ddcu: goto label_365ddc;
        case 0x365de0u: goto label_365de0;
        case 0x365de4u: goto label_365de4;
        case 0x365de8u: goto label_365de8;
        case 0x365decu: goto label_365dec;
        case 0x365df0u: goto label_365df0;
        case 0x365df4u: goto label_365df4;
        case 0x365df8u: goto label_365df8;
        case 0x365dfcu: goto label_365dfc;
        case 0x365e00u: goto label_365e00;
        case 0x365e04u: goto label_365e04;
        case 0x365e08u: goto label_365e08;
        case 0x365e0cu: goto label_365e0c;
        case 0x365e10u: goto label_365e10;
        case 0x365e14u: goto label_365e14;
        case 0x365e18u: goto label_365e18;
        case 0x365e1cu: goto label_365e1c;
        case 0x365e20u: goto label_365e20;
        case 0x365e24u: goto label_365e24;
        case 0x365e28u: goto label_365e28;
        case 0x365e2cu: goto label_365e2c;
        case 0x365e30u: goto label_365e30;
        case 0x365e34u: goto label_365e34;
        case 0x365e38u: goto label_365e38;
        case 0x365e3cu: goto label_365e3c;
        case 0x365e40u: goto label_365e40;
        case 0x365e44u: goto label_365e44;
        case 0x365e48u: goto label_365e48;
        case 0x365e4cu: goto label_365e4c;
        case 0x365e50u: goto label_365e50;
        case 0x365e54u: goto label_365e54;
        case 0x365e58u: goto label_365e58;
        case 0x365e5cu: goto label_365e5c;
        case 0x365e60u: goto label_365e60;
        case 0x365e64u: goto label_365e64;
        case 0x365e68u: goto label_365e68;
        case 0x365e6cu: goto label_365e6c;
        case 0x365e70u: goto label_365e70;
        case 0x365e74u: goto label_365e74;
        case 0x365e78u: goto label_365e78;
        case 0x365e7cu: goto label_365e7c;
        case 0x365e80u: goto label_365e80;
        case 0x365e84u: goto label_365e84;
        case 0x365e88u: goto label_365e88;
        case 0x365e8cu: goto label_365e8c;
        case 0x365e90u: goto label_365e90;
        case 0x365e94u: goto label_365e94;
        case 0x365e98u: goto label_365e98;
        case 0x365e9cu: goto label_365e9c;
        case 0x365ea0u: goto label_365ea0;
        case 0x365ea4u: goto label_365ea4;
        case 0x365ea8u: goto label_365ea8;
        case 0x365eacu: goto label_365eac;
        case 0x365eb0u: goto label_365eb0;
        case 0x365eb4u: goto label_365eb4;
        case 0x365eb8u: goto label_365eb8;
        case 0x365ebcu: goto label_365ebc;
        case 0x365ec0u: goto label_365ec0;
        case 0x365ec4u: goto label_365ec4;
        case 0x365ec8u: goto label_365ec8;
        case 0x365eccu: goto label_365ecc;
        case 0x365ed0u: goto label_365ed0;
        case 0x365ed4u: goto label_365ed4;
        case 0x365ed8u: goto label_365ed8;
        case 0x365edcu: goto label_365edc;
        case 0x365ee0u: goto label_365ee0;
        case 0x365ee4u: goto label_365ee4;
        case 0x365ee8u: goto label_365ee8;
        case 0x365eecu: goto label_365eec;
        case 0x365ef0u: goto label_365ef0;
        case 0x365ef4u: goto label_365ef4;
        case 0x365ef8u: goto label_365ef8;
        case 0x365efcu: goto label_365efc;
        case 0x365f00u: goto label_365f00;
        case 0x365f04u: goto label_365f04;
        case 0x365f08u: goto label_365f08;
        case 0x365f0cu: goto label_365f0c;
        case 0x365f10u: goto label_365f10;
        case 0x365f14u: goto label_365f14;
        case 0x365f18u: goto label_365f18;
        case 0x365f1cu: goto label_365f1c;
        case 0x365f20u: goto label_365f20;
        case 0x365f24u: goto label_365f24;
        case 0x365f28u: goto label_365f28;
        case 0x365f2cu: goto label_365f2c;
        case 0x365f30u: goto label_365f30;
        case 0x365f34u: goto label_365f34;
        case 0x365f38u: goto label_365f38;
        case 0x365f3cu: goto label_365f3c;
        case 0x365f40u: goto label_365f40;
        case 0x365f44u: goto label_365f44;
        case 0x365f48u: goto label_365f48;
        case 0x365f4cu: goto label_365f4c;
        case 0x365f50u: goto label_365f50;
        case 0x365f54u: goto label_365f54;
        case 0x365f58u: goto label_365f58;
        case 0x365f5cu: goto label_365f5c;
        case 0x365f60u: goto label_365f60;
        case 0x365f64u: goto label_365f64;
        case 0x365f68u: goto label_365f68;
        case 0x365f6cu: goto label_365f6c;
        case 0x365f70u: goto label_365f70;
        case 0x365f74u: goto label_365f74;
        case 0x365f78u: goto label_365f78;
        case 0x365f7cu: goto label_365f7c;
        case 0x365f80u: goto label_365f80;
        case 0x365f84u: goto label_365f84;
        case 0x365f88u: goto label_365f88;
        case 0x365f8cu: goto label_365f8c;
        case 0x365f90u: goto label_365f90;
        case 0x365f94u: goto label_365f94;
        case 0x365f98u: goto label_365f98;
        case 0x365f9cu: goto label_365f9c;
        case 0x365fa0u: goto label_365fa0;
        case 0x365fa4u: goto label_365fa4;
        case 0x365fa8u: goto label_365fa8;
        case 0x365facu: goto label_365fac;
        case 0x365fb0u: goto label_365fb0;
        case 0x365fb4u: goto label_365fb4;
        case 0x365fb8u: goto label_365fb8;
        case 0x365fbcu: goto label_365fbc;
        case 0x365fc0u: goto label_365fc0;
        case 0x365fc4u: goto label_365fc4;
        case 0x365fc8u: goto label_365fc8;
        case 0x365fccu: goto label_365fcc;
        case 0x365fd0u: goto label_365fd0;
        case 0x365fd4u: goto label_365fd4;
        case 0x365fd8u: goto label_365fd8;
        case 0x365fdcu: goto label_365fdc;
        case 0x365fe0u: goto label_365fe0;
        case 0x365fe4u: goto label_365fe4;
        case 0x365fe8u: goto label_365fe8;
        case 0x365fecu: goto label_365fec;
        case 0x365ff0u: goto label_365ff0;
        case 0x365ff4u: goto label_365ff4;
        case 0x365ff8u: goto label_365ff8;
        case 0x365ffcu: goto label_365ffc;
        case 0x366000u: goto label_366000;
        case 0x366004u: goto label_366004;
        case 0x366008u: goto label_366008;
        case 0x36600cu: goto label_36600c;
        case 0x366010u: goto label_366010;
        case 0x366014u: goto label_366014;
        case 0x366018u: goto label_366018;
        case 0x36601cu: goto label_36601c;
        case 0x366020u: goto label_366020;
        case 0x366024u: goto label_366024;
        case 0x366028u: goto label_366028;
        case 0x36602cu: goto label_36602c;
        case 0x366030u: goto label_366030;
        case 0x366034u: goto label_366034;
        case 0x366038u: goto label_366038;
        case 0x36603cu: goto label_36603c;
        case 0x366040u: goto label_366040;
        case 0x366044u: goto label_366044;
        case 0x366048u: goto label_366048;
        case 0x36604cu: goto label_36604c;
        case 0x366050u: goto label_366050;
        case 0x366054u: goto label_366054;
        case 0x366058u: goto label_366058;
        case 0x36605cu: goto label_36605c;
        case 0x366060u: goto label_366060;
        case 0x366064u: goto label_366064;
        case 0x366068u: goto label_366068;
        case 0x36606cu: goto label_36606c;
        case 0x366070u: goto label_366070;
        case 0x366074u: goto label_366074;
        case 0x366078u: goto label_366078;
        case 0x36607cu: goto label_36607c;
        case 0x366080u: goto label_366080;
        case 0x366084u: goto label_366084;
        case 0x366088u: goto label_366088;
        case 0x36608cu: goto label_36608c;
        case 0x366090u: goto label_366090;
        case 0x366094u: goto label_366094;
        case 0x366098u: goto label_366098;
        case 0x36609cu: goto label_36609c;
        case 0x3660a0u: goto label_3660a0;
        case 0x3660a4u: goto label_3660a4;
        case 0x3660a8u: goto label_3660a8;
        case 0x3660acu: goto label_3660ac;
        case 0x3660b0u: goto label_3660b0;
        case 0x3660b4u: goto label_3660b4;
        case 0x3660b8u: goto label_3660b8;
        case 0x3660bcu: goto label_3660bc;
        case 0x3660c0u: goto label_3660c0;
        case 0x3660c4u: goto label_3660c4;
        case 0x3660c8u: goto label_3660c8;
        case 0x3660ccu: goto label_3660cc;
        case 0x3660d0u: goto label_3660d0;
        case 0x3660d4u: goto label_3660d4;
        case 0x3660d8u: goto label_3660d8;
        case 0x3660dcu: goto label_3660dc;
        case 0x3660e0u: goto label_3660e0;
        case 0x3660e4u: goto label_3660e4;
        case 0x3660e8u: goto label_3660e8;
        case 0x3660ecu: goto label_3660ec;
        case 0x3660f0u: goto label_3660f0;
        case 0x3660f4u: goto label_3660f4;
        case 0x3660f8u: goto label_3660f8;
        case 0x3660fcu: goto label_3660fc;
        case 0x366100u: goto label_366100;
        case 0x366104u: goto label_366104;
        case 0x366108u: goto label_366108;
        case 0x36610cu: goto label_36610c;
        case 0x366110u: goto label_366110;
        case 0x366114u: goto label_366114;
        case 0x366118u: goto label_366118;
        case 0x36611cu: goto label_36611c;
        case 0x366120u: goto label_366120;
        case 0x366124u: goto label_366124;
        case 0x366128u: goto label_366128;
        case 0x36612cu: goto label_36612c;
        case 0x366130u: goto label_366130;
        case 0x366134u: goto label_366134;
        case 0x366138u: goto label_366138;
        case 0x36613cu: goto label_36613c;
        case 0x366140u: goto label_366140;
        case 0x366144u: goto label_366144;
        case 0x366148u: goto label_366148;
        case 0x36614cu: goto label_36614c;
        case 0x366150u: goto label_366150;
        case 0x366154u: goto label_366154;
        case 0x366158u: goto label_366158;
        case 0x36615cu: goto label_36615c;
        case 0x366160u: goto label_366160;
        case 0x366164u: goto label_366164;
        case 0x366168u: goto label_366168;
        case 0x36616cu: goto label_36616c;
        case 0x366170u: goto label_366170;
        case 0x366174u: goto label_366174;
        case 0x366178u: goto label_366178;
        case 0x36617cu: goto label_36617c;
        case 0x366180u: goto label_366180;
        case 0x366184u: goto label_366184;
        case 0x366188u: goto label_366188;
        case 0x36618cu: goto label_36618c;
        case 0x366190u: goto label_366190;
        case 0x366194u: goto label_366194;
        case 0x366198u: goto label_366198;
        case 0x36619cu: goto label_36619c;
        case 0x3661a0u: goto label_3661a0;
        case 0x3661a4u: goto label_3661a4;
        case 0x3661a8u: goto label_3661a8;
        case 0x3661acu: goto label_3661ac;
        case 0x3661b0u: goto label_3661b0;
        case 0x3661b4u: goto label_3661b4;
        case 0x3661b8u: goto label_3661b8;
        case 0x3661bcu: goto label_3661bc;
        case 0x3661c0u: goto label_3661c0;
        case 0x3661c4u: goto label_3661c4;
        case 0x3661c8u: goto label_3661c8;
        case 0x3661ccu: goto label_3661cc;
        case 0x3661d0u: goto label_3661d0;
        case 0x3661d4u: goto label_3661d4;
        case 0x3661d8u: goto label_3661d8;
        case 0x3661dcu: goto label_3661dc;
        case 0x3661e0u: goto label_3661e0;
        case 0x3661e4u: goto label_3661e4;
        case 0x3661e8u: goto label_3661e8;
        case 0x3661ecu: goto label_3661ec;
        case 0x3661f0u: goto label_3661f0;
        case 0x3661f4u: goto label_3661f4;
        case 0x3661f8u: goto label_3661f8;
        case 0x3661fcu: goto label_3661fc;
        case 0x366200u: goto label_366200;
        case 0x366204u: goto label_366204;
        case 0x366208u: goto label_366208;
        case 0x36620cu: goto label_36620c;
        case 0x366210u: goto label_366210;
        case 0x366214u: goto label_366214;
        case 0x366218u: goto label_366218;
        case 0x36621cu: goto label_36621c;
        case 0x366220u: goto label_366220;
        case 0x366224u: goto label_366224;
        case 0x366228u: goto label_366228;
        case 0x36622cu: goto label_36622c;
        case 0x366230u: goto label_366230;
        case 0x366234u: goto label_366234;
        case 0x366238u: goto label_366238;
        case 0x36623cu: goto label_36623c;
        case 0x366240u: goto label_366240;
        case 0x366244u: goto label_366244;
        case 0x366248u: goto label_366248;
        case 0x36624cu: goto label_36624c;
        case 0x366250u: goto label_366250;
        case 0x366254u: goto label_366254;
        case 0x366258u: goto label_366258;
        case 0x36625cu: goto label_36625c;
        case 0x366260u: goto label_366260;
        case 0x366264u: goto label_366264;
        case 0x366268u: goto label_366268;
        case 0x36626cu: goto label_36626c;
        case 0x366270u: goto label_366270;
        case 0x366274u: goto label_366274;
        case 0x366278u: goto label_366278;
        case 0x36627cu: goto label_36627c;
        case 0x366280u: goto label_366280;
        case 0x366284u: goto label_366284;
        case 0x366288u: goto label_366288;
        case 0x36628cu: goto label_36628c;
        case 0x366290u: goto label_366290;
        case 0x366294u: goto label_366294;
        case 0x366298u: goto label_366298;
        case 0x36629cu: goto label_36629c;
        case 0x3662a0u: goto label_3662a0;
        case 0x3662a4u: goto label_3662a4;
        case 0x3662a8u: goto label_3662a8;
        case 0x3662acu: goto label_3662ac;
        case 0x3662b0u: goto label_3662b0;
        case 0x3662b4u: goto label_3662b4;
        case 0x3662b8u: goto label_3662b8;
        case 0x3662bcu: goto label_3662bc;
        case 0x3662c0u: goto label_3662c0;
        case 0x3662c4u: goto label_3662c4;
        case 0x3662c8u: goto label_3662c8;
        case 0x3662ccu: goto label_3662cc;
        case 0x3662d0u: goto label_3662d0;
        case 0x3662d4u: goto label_3662d4;
        case 0x3662d8u: goto label_3662d8;
        case 0x3662dcu: goto label_3662dc;
        case 0x3662e0u: goto label_3662e0;
        case 0x3662e4u: goto label_3662e4;
        case 0x3662e8u: goto label_3662e8;
        case 0x3662ecu: goto label_3662ec;
        case 0x3662f0u: goto label_3662f0;
        case 0x3662f4u: goto label_3662f4;
        case 0x3662f8u: goto label_3662f8;
        case 0x3662fcu: goto label_3662fc;
        case 0x366300u: goto label_366300;
        case 0x366304u: goto label_366304;
        case 0x366308u: goto label_366308;
        case 0x36630cu: goto label_36630c;
        case 0x366310u: goto label_366310;
        case 0x366314u: goto label_366314;
        case 0x366318u: goto label_366318;
        case 0x36631cu: goto label_36631c;
        case 0x366320u: goto label_366320;
        case 0x366324u: goto label_366324;
        case 0x366328u: goto label_366328;
        case 0x36632cu: goto label_36632c;
        case 0x366330u: goto label_366330;
        case 0x366334u: goto label_366334;
        case 0x366338u: goto label_366338;
        case 0x36633cu: goto label_36633c;
        case 0x366340u: goto label_366340;
        case 0x366344u: goto label_366344;
        case 0x366348u: goto label_366348;
        case 0x36634cu: goto label_36634c;
        case 0x366350u: goto label_366350;
        case 0x366354u: goto label_366354;
        case 0x366358u: goto label_366358;
        case 0x36635cu: goto label_36635c;
        case 0x366360u: goto label_366360;
        case 0x366364u: goto label_366364;
        case 0x366368u: goto label_366368;
        case 0x36636cu: goto label_36636c;
        case 0x366370u: goto label_366370;
        case 0x366374u: goto label_366374;
        case 0x366378u: goto label_366378;
        case 0x36637cu: goto label_36637c;
        case 0x366380u: goto label_366380;
        case 0x366384u: goto label_366384;
        case 0x366388u: goto label_366388;
        case 0x36638cu: goto label_36638c;
        case 0x366390u: goto label_366390;
        case 0x366394u: goto label_366394;
        case 0x366398u: goto label_366398;
        case 0x36639cu: goto label_36639c;
        case 0x3663a0u: goto label_3663a0;
        case 0x3663a4u: goto label_3663a4;
        case 0x3663a8u: goto label_3663a8;
        case 0x3663acu: goto label_3663ac;
        case 0x3663b0u: goto label_3663b0;
        case 0x3663b4u: goto label_3663b4;
        case 0x3663b8u: goto label_3663b8;
        case 0x3663bcu: goto label_3663bc;
        case 0x3663c0u: goto label_3663c0;
        case 0x3663c4u: goto label_3663c4;
        case 0x3663c8u: goto label_3663c8;
        case 0x3663ccu: goto label_3663cc;
        case 0x3663d0u: goto label_3663d0;
        case 0x3663d4u: goto label_3663d4;
        case 0x3663d8u: goto label_3663d8;
        case 0x3663dcu: goto label_3663dc;
        case 0x3663e0u: goto label_3663e0;
        case 0x3663e4u: goto label_3663e4;
        case 0x3663e8u: goto label_3663e8;
        case 0x3663ecu: goto label_3663ec;
        case 0x3663f0u: goto label_3663f0;
        case 0x3663f4u: goto label_3663f4;
        case 0x3663f8u: goto label_3663f8;
        case 0x3663fcu: goto label_3663fc;
        case 0x366400u: goto label_366400;
        case 0x366404u: goto label_366404;
        case 0x366408u: goto label_366408;
        case 0x36640cu: goto label_36640c;
        case 0x366410u: goto label_366410;
        case 0x366414u: goto label_366414;
        case 0x366418u: goto label_366418;
        case 0x36641cu: goto label_36641c;
        case 0x366420u: goto label_366420;
        case 0x366424u: goto label_366424;
        case 0x366428u: goto label_366428;
        case 0x36642cu: goto label_36642c;
        case 0x366430u: goto label_366430;
        case 0x366434u: goto label_366434;
        case 0x366438u: goto label_366438;
        case 0x36643cu: goto label_36643c;
        case 0x366440u: goto label_366440;
        case 0x366444u: goto label_366444;
        case 0x366448u: goto label_366448;
        case 0x36644cu: goto label_36644c;
        case 0x366450u: goto label_366450;
        case 0x366454u: goto label_366454;
        case 0x366458u: goto label_366458;
        case 0x36645cu: goto label_36645c;
        case 0x366460u: goto label_366460;
        case 0x366464u: goto label_366464;
        case 0x366468u: goto label_366468;
        case 0x36646cu: goto label_36646c;
        case 0x366470u: goto label_366470;
        case 0x366474u: goto label_366474;
        case 0x366478u: goto label_366478;
        case 0x36647cu: goto label_36647c;
        case 0x366480u: goto label_366480;
        case 0x366484u: goto label_366484;
        case 0x366488u: goto label_366488;
        case 0x36648cu: goto label_36648c;
        case 0x366490u: goto label_366490;
        case 0x366494u: goto label_366494;
        case 0x366498u: goto label_366498;
        case 0x36649cu: goto label_36649c;
        case 0x3664a0u: goto label_3664a0;
        case 0x3664a4u: goto label_3664a4;
        case 0x3664a8u: goto label_3664a8;
        case 0x3664acu: goto label_3664ac;
        case 0x3664b0u: goto label_3664b0;
        case 0x3664b4u: goto label_3664b4;
        case 0x3664b8u: goto label_3664b8;
        case 0x3664bcu: goto label_3664bc;
        case 0x3664c0u: goto label_3664c0;
        case 0x3664c4u: goto label_3664c4;
        case 0x3664c8u: goto label_3664c8;
        case 0x3664ccu: goto label_3664cc;
        case 0x3664d0u: goto label_3664d0;
        case 0x3664d4u: goto label_3664d4;
        case 0x3664d8u: goto label_3664d8;
        case 0x3664dcu: goto label_3664dc;
        case 0x3664e0u: goto label_3664e0;
        case 0x3664e4u: goto label_3664e4;
        case 0x3664e8u: goto label_3664e8;
        case 0x3664ecu: goto label_3664ec;
        case 0x3664f0u: goto label_3664f0;
        case 0x3664f4u: goto label_3664f4;
        case 0x3664f8u: goto label_3664f8;
        case 0x3664fcu: goto label_3664fc;
        case 0x366500u: goto label_366500;
        case 0x366504u: goto label_366504;
        case 0x366508u: goto label_366508;
        case 0x36650cu: goto label_36650c;
        case 0x366510u: goto label_366510;
        case 0x366514u: goto label_366514;
        case 0x366518u: goto label_366518;
        case 0x36651cu: goto label_36651c;
        case 0x366520u: goto label_366520;
        case 0x366524u: goto label_366524;
        case 0x366528u: goto label_366528;
        case 0x36652cu: goto label_36652c;
        case 0x366530u: goto label_366530;
        case 0x366534u: goto label_366534;
        case 0x366538u: goto label_366538;
        case 0x36653cu: goto label_36653c;
        case 0x366540u: goto label_366540;
        case 0x366544u: goto label_366544;
        case 0x366548u: goto label_366548;
        case 0x36654cu: goto label_36654c;
        case 0x366550u: goto label_366550;
        case 0x366554u: goto label_366554;
        case 0x366558u: goto label_366558;
        case 0x36655cu: goto label_36655c;
        case 0x366560u: goto label_366560;
        case 0x366564u: goto label_366564;
        case 0x366568u: goto label_366568;
        case 0x36656cu: goto label_36656c;
        case 0x366570u: goto label_366570;
        case 0x366574u: goto label_366574;
        case 0x366578u: goto label_366578;
        case 0x36657cu: goto label_36657c;
        case 0x366580u: goto label_366580;
        case 0x366584u: goto label_366584;
        case 0x366588u: goto label_366588;
        case 0x36658cu: goto label_36658c;
        case 0x366590u: goto label_366590;
        case 0x366594u: goto label_366594;
        case 0x366598u: goto label_366598;
        case 0x36659cu: goto label_36659c;
        case 0x3665a0u: goto label_3665a0;
        case 0x3665a4u: goto label_3665a4;
        case 0x3665a8u: goto label_3665a8;
        case 0x3665acu: goto label_3665ac;
        case 0x3665b0u: goto label_3665b0;
        case 0x3665b4u: goto label_3665b4;
        case 0x3665b8u: goto label_3665b8;
        case 0x3665bcu: goto label_3665bc;
        case 0x3665c0u: goto label_3665c0;
        case 0x3665c4u: goto label_3665c4;
        case 0x3665c8u: goto label_3665c8;
        case 0x3665ccu: goto label_3665cc;
        case 0x3665d0u: goto label_3665d0;
        case 0x3665d4u: goto label_3665d4;
        case 0x3665d8u: goto label_3665d8;
        case 0x3665dcu: goto label_3665dc;
        case 0x3665e0u: goto label_3665e0;
        case 0x3665e4u: goto label_3665e4;
        case 0x3665e8u: goto label_3665e8;
        case 0x3665ecu: goto label_3665ec;
        case 0x3665f0u: goto label_3665f0;
        case 0x3665f4u: goto label_3665f4;
        case 0x3665f8u: goto label_3665f8;
        case 0x3665fcu: goto label_3665fc;
        case 0x366600u: goto label_366600;
        case 0x366604u: goto label_366604;
        case 0x366608u: goto label_366608;
        case 0x36660cu: goto label_36660c;
        case 0x366610u: goto label_366610;
        case 0x366614u: goto label_366614;
        case 0x366618u: goto label_366618;
        case 0x36661cu: goto label_36661c;
        case 0x366620u: goto label_366620;
        case 0x366624u: goto label_366624;
        case 0x366628u: goto label_366628;
        case 0x36662cu: goto label_36662c;
        case 0x366630u: goto label_366630;
        case 0x366634u: goto label_366634;
        case 0x366638u: goto label_366638;
        case 0x36663cu: goto label_36663c;
        case 0x366640u: goto label_366640;
        case 0x366644u: goto label_366644;
        case 0x366648u: goto label_366648;
        case 0x36664cu: goto label_36664c;
        case 0x366650u: goto label_366650;
        case 0x366654u: goto label_366654;
        case 0x366658u: goto label_366658;
        case 0x36665cu: goto label_36665c;
        case 0x366660u: goto label_366660;
        case 0x366664u: goto label_366664;
        case 0x366668u: goto label_366668;
        case 0x36666cu: goto label_36666c;
        case 0x366670u: goto label_366670;
        case 0x366674u: goto label_366674;
        case 0x366678u: goto label_366678;
        case 0x36667cu: goto label_36667c;
        case 0x366680u: goto label_366680;
        case 0x366684u: goto label_366684;
        case 0x366688u: goto label_366688;
        case 0x36668cu: goto label_36668c;
        case 0x366690u: goto label_366690;
        case 0x366694u: goto label_366694;
        case 0x366698u: goto label_366698;
        case 0x36669cu: goto label_36669c;
        case 0x3666a0u: goto label_3666a0;
        case 0x3666a4u: goto label_3666a4;
        case 0x3666a8u: goto label_3666a8;
        case 0x3666acu: goto label_3666ac;
        case 0x3666b0u: goto label_3666b0;
        case 0x3666b4u: goto label_3666b4;
        case 0x3666b8u: goto label_3666b8;
        case 0x3666bcu: goto label_3666bc;
        case 0x3666c0u: goto label_3666c0;
        case 0x3666c4u: goto label_3666c4;
        case 0x3666c8u: goto label_3666c8;
        case 0x3666ccu: goto label_3666cc;
        case 0x3666d0u: goto label_3666d0;
        case 0x3666d4u: goto label_3666d4;
        case 0x3666d8u: goto label_3666d8;
        case 0x3666dcu: goto label_3666dc;
        case 0x3666e0u: goto label_3666e0;
        case 0x3666e4u: goto label_3666e4;
        case 0x3666e8u: goto label_3666e8;
        case 0x3666ecu: goto label_3666ec;
        case 0x3666f0u: goto label_3666f0;
        case 0x3666f4u: goto label_3666f4;
        case 0x3666f8u: goto label_3666f8;
        case 0x3666fcu: goto label_3666fc;
        case 0x366700u: goto label_366700;
        case 0x366704u: goto label_366704;
        case 0x366708u: goto label_366708;
        case 0x36670cu: goto label_36670c;
        default: break;
    }

    ctx->pc = 0x3656b0u;

label_3656b0:
    // 0x3656b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3656b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3656b4:
    // 0x3656b4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3656b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3656b8:
    // 0x3656b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3656b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3656bc:
    // 0x3656bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3656bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3656c0:
    // 0x3656c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3656c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3656c4:
    // 0x3656c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3656c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3656c8:
    // 0x3656c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3656c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3656cc:
    // 0x3656cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3656ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3656d0:
    // 0x3656d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3656d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3656d4:
    // 0x3656d4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3656d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3656d8:
    // 0x3656d8: 0xc10ca68  jal         func_4329A0
label_3656dc:
    if (ctx->pc == 0x3656DCu) {
        ctx->pc = 0x3656DCu;
            // 0x3656dc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3656E0u;
        goto label_3656e0;
    }
    ctx->pc = 0x3656D8u;
    SET_GPR_U32(ctx, 31, 0x3656E0u);
    ctx->pc = 0x3656DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3656D8u;
            // 0x3656dc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3656E0u; }
        if (ctx->pc != 0x3656E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3656E0u; }
        if (ctx->pc != 0x3656E0u) { return; }
    }
    ctx->pc = 0x3656E0u;
label_3656e0:
    // 0x3656e0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3656e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3656e4:
    // 0x3656e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3656e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3656e8:
    // 0x3656e8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x3656e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_3656ec:
    // 0x3656ec: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x3656ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_3656f0:
    // 0x3656f0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3656f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_3656f4:
    // 0x3656f4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x3656f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_3656f8:
    // 0x3656f8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3656f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_3656fc:
    // 0x3656fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3656fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_365700:
    // 0x365700: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x365700u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_365704:
    // 0x365704: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x365704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_365708:
    // 0x365708: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x365708u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_36570c:
    // 0x36570c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x36570cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_365710:
    // 0x365710: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x365710u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_365714:
    // 0x365714: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x365714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_365718:
    // 0x365718: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x365718u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_36571c:
    // 0x36571c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x36571cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_365720:
    // 0x365720: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x365720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_365724:
    // 0x365724: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x365724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_365728:
    // 0x365728: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x365728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_36572c:
    // 0x36572c: 0xc0582cc  jal         func_160B30
label_365730:
    if (ctx->pc == 0x365730u) {
        ctx->pc = 0x365730u;
            // 0x365730: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x365734u;
        goto label_365734;
    }
    ctx->pc = 0x36572Cu;
    SET_GPR_U32(ctx, 31, 0x365734u);
    ctx->pc = 0x365730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36572Cu;
            // 0x365730: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365734u; }
        if (ctx->pc != 0x365734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365734u; }
        if (ctx->pc != 0x365734u) { return; }
    }
    ctx->pc = 0x365734u;
label_365734:
    // 0x365734: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x365734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_365738:
    // 0x365738: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x365738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_36573c:
    // 0x36573c: 0x24636900  addiu       $v1, $v1, 0x6900
    ctx->pc = 0x36573cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26880));
label_365740:
    // 0x365740: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x365740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_365744:
    // 0x365744: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x365744u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_365748:
    // 0x365748: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x365748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_36574c:
    // 0x36574c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36574cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_365750:
    // 0x365750: 0xac444020  sw          $a0, 0x4020($v0)
    ctx->pc = 0x365750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16416), GPR_U32(ctx, 4));
label_365754:
    // 0x365754: 0x24636910  addiu       $v1, $v1, 0x6910
    ctx->pc = 0x365754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26896));
label_365758:
    // 0x365758: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x365758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_36575c:
    // 0x36575c: 0x24426948  addiu       $v0, $v0, 0x6948
    ctx->pc = 0x36575cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26952));
label_365760:
    // 0x365760: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x365760u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_365764:
    // 0x365764: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x365764u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_365768:
    // 0x365768: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x365768u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_36576c:
    // 0x36576c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x36576cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_365770:
    // 0x365770: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x365770u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_365774:
    // 0x365774: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x365774u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_365778:
    // 0x365778: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x365778u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_36577c:
    // 0x36577c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x36577cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_365780:
    // 0x365780: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x365780u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_365784:
    // 0x365784: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x365784u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_365788:
    // 0x365788: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x365788u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_36578c:
    // 0x36578c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x36578cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_365790:
    // 0x365790: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x365790u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_365794:
    // 0x365794: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_365798:
    if (ctx->pc == 0x365798u) {
        ctx->pc = 0x36579Cu;
        goto label_36579c;
    }
    ctx->pc = 0x365794u;
    {
        const bool branch_taken_0x365794 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x365794) {
            ctx->pc = 0x365828u;
            goto label_365828;
        }
    }
    ctx->pc = 0x36579Cu;
label_36579c:
    // 0x36579c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x36579cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_3657a0:
    // 0x3657a0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3657a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3657a4:
    // 0x3657a4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3657a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_3657a8:
    // 0x3657a8: 0xc040138  jal         func_1004E0
label_3657ac:
    if (ctx->pc == 0x3657ACu) {
        ctx->pc = 0x3657ACu;
            // 0x3657ac: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x3657B0u;
        goto label_3657b0;
    }
    ctx->pc = 0x3657A8u;
    SET_GPR_U32(ctx, 31, 0x3657B0u);
    ctx->pc = 0x3657ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3657A8u;
            // 0x3657ac: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3657B0u; }
        if (ctx->pc != 0x3657B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3657B0u; }
        if (ctx->pc != 0x3657B0u) { return; }
    }
    ctx->pc = 0x3657B0u;
label_3657b0:
    // 0x3657b0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x3657b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_3657b4:
    // 0x3657b4: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x3657b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_3657b8:
    // 0x3657b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3657b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3657bc:
    // 0x3657bc: 0x24a55850  addiu       $a1, $a1, 0x5850
    ctx->pc = 0x3657bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22608));
label_3657c0:
    // 0x3657c0: 0x24c64d50  addiu       $a2, $a2, 0x4D50
    ctx->pc = 0x3657c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19792));
label_3657c4:
    // 0x3657c4: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x3657c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_3657c8:
    // 0x3657c8: 0xc040840  jal         func_102100
label_3657cc:
    if (ctx->pc == 0x3657CCu) {
        ctx->pc = 0x3657CCu;
            // 0x3657cc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3657D0u;
        goto label_3657d0;
    }
    ctx->pc = 0x3657C8u;
    SET_GPR_U32(ctx, 31, 0x3657D0u);
    ctx->pc = 0x3657CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3657C8u;
            // 0x3657cc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3657D0u; }
        if (ctx->pc != 0x3657D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3657D0u; }
        if (ctx->pc != 0x3657D0u) { return; }
    }
    ctx->pc = 0x3657D0u;
label_3657d0:
    // 0x3657d0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x3657d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_3657d4:
    // 0x3657d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3657d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3657d8:
    // 0x3657d8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x3657d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_3657dc:
    // 0x3657dc: 0xc0788fc  jal         func_1E23F0
label_3657e0:
    if (ctx->pc == 0x3657E0u) {
        ctx->pc = 0x3657E0u;
            // 0x3657e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3657E4u;
        goto label_3657e4;
    }
    ctx->pc = 0x3657DCu;
    SET_GPR_U32(ctx, 31, 0x3657E4u);
    ctx->pc = 0x3657E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3657DCu;
            // 0x3657e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3657E4u; }
        if (ctx->pc != 0x3657E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3657E4u; }
        if (ctx->pc != 0x3657E4u) { return; }
    }
    ctx->pc = 0x3657E4u;
label_3657e4:
    // 0x3657e4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x3657e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_3657e8:
    // 0x3657e8: 0xc0788fc  jal         func_1E23F0
label_3657ec:
    if (ctx->pc == 0x3657ECu) {
        ctx->pc = 0x3657ECu;
            // 0x3657ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3657F0u;
        goto label_3657f0;
    }
    ctx->pc = 0x3657E8u;
    SET_GPR_U32(ctx, 31, 0x3657F0u);
    ctx->pc = 0x3657ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3657E8u;
            // 0x3657ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3657F0u; }
        if (ctx->pc != 0x3657F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3657F0u; }
        if (ctx->pc != 0x3657F0u) { return; }
    }
    ctx->pc = 0x3657F0u;
label_3657f0:
    // 0x3657f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3657f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3657f4:
    // 0x3657f4: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x3657f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_3657f8:
    // 0x3657f8: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x3657f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_3657fc:
    // 0x3657fc: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x3657fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_365800:
    // 0x365800: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x365800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_365804:
    // 0x365804: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x365804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_365808:
    // 0x365808: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x365808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_36580c:
    // 0x36580c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36580cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_365810:
    // 0x365810: 0xc0a997c  jal         func_2A65F0
label_365814:
    if (ctx->pc == 0x365814u) {
        ctx->pc = 0x365814u;
            // 0x365814: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x365818u;
        goto label_365818;
    }
    ctx->pc = 0x365810u;
    SET_GPR_U32(ctx, 31, 0x365818u);
    ctx->pc = 0x365814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365810u;
            // 0x365814: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365818u; }
        if (ctx->pc != 0x365818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365818u; }
        if (ctx->pc != 0x365818u) { return; }
    }
    ctx->pc = 0x365818u;
label_365818:
    // 0x365818: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x365818u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_36581c:
    // 0x36581c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x36581cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_365820:
    // 0x365820: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_365824:
    if (ctx->pc == 0x365824u) {
        ctx->pc = 0x365824u;
            // 0x365824: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->pc = 0x365828u;
        goto label_365828;
    }
    ctx->pc = 0x365820u;
    {
        const bool branch_taken_0x365820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x365824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x365820u;
            // 0x365824: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365820) {
            ctx->pc = 0x3657F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3657f4;
        }
    }
    ctx->pc = 0x365828u;
label_365828:
    // 0x365828: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x365828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36582c:
    // 0x36582c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x36582cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_365830:
    // 0x365830: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x365830u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_365834:
    // 0x365834: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x365834u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_365838:
    // 0x365838: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x365838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36583c:
    // 0x36583c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36583cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_365840:
    // 0x365840: 0x3e00008  jr          $ra
label_365844:
    if (ctx->pc == 0x365844u) {
        ctx->pc = 0x365844u;
            // 0x365844: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x365848u;
        goto label_365848;
    }
    ctx->pc = 0x365840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x365840u;
            // 0x365844: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x365848u;
label_365848:
    // 0x365848: 0x0  nop
    ctx->pc = 0x365848u;
    // NOP
label_36584c:
    // 0x36584c: 0x0  nop
    ctx->pc = 0x36584cu;
    // NOP
label_365850:
    // 0x365850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x365850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_365854:
    // 0x365854: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x365854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_365858:
    // 0x365858: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x365858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36585c:
    // 0x36585c: 0xc0aeebc  jal         func_2BBAF0
label_365860:
    if (ctx->pc == 0x365860u) {
        ctx->pc = 0x365860u;
            // 0x365860: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x365864u;
        goto label_365864;
    }
    ctx->pc = 0x36585Cu;
    SET_GPR_U32(ctx, 31, 0x365864u);
    ctx->pc = 0x365860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36585Cu;
            // 0x365860: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365864u; }
        if (ctx->pc != 0x365864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365864u; }
        if (ctx->pc != 0x365864u) { return; }
    }
    ctx->pc = 0x365864u;
label_365864:
    // 0x365864: 0xc0aeeb4  jal         func_2BBAD0
label_365868:
    if (ctx->pc == 0x365868u) {
        ctx->pc = 0x365868u;
            // 0x365868: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x36586Cu;
        goto label_36586c;
    }
    ctx->pc = 0x365864u;
    SET_GPR_U32(ctx, 31, 0x36586Cu);
    ctx->pc = 0x365868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365864u;
            // 0x365868: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36586Cu; }
        if (ctx->pc != 0x36586Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36586Cu; }
        if (ctx->pc != 0x36586Cu) { return; }
    }
    ctx->pc = 0x36586Cu;
label_36586c:
    // 0x36586c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36586cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_365870:
    // 0x365870: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x365870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_365874:
    // 0x365874: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x365874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_365878:
    // 0x365878: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x365878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_36587c:
    // 0x36587c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x36587cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_365880:
    // 0x365880: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x365880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_365884:
    // 0x365884: 0xc0aeea4  jal         func_2BBA90
label_365888:
    if (ctx->pc == 0x365888u) {
        ctx->pc = 0x365888u;
            // 0x365888: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x36588Cu;
        goto label_36588c;
    }
    ctx->pc = 0x365884u;
    SET_GPR_U32(ctx, 31, 0x36588Cu);
    ctx->pc = 0x365888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365884u;
            // 0x365888: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36588Cu; }
        if (ctx->pc != 0x36588Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36588Cu; }
        if (ctx->pc != 0x36588Cu) { return; }
    }
    ctx->pc = 0x36588Cu;
label_36588c:
    // 0x36588c: 0xc0aee8c  jal         func_2BBA30
label_365890:
    if (ctx->pc == 0x365890u) {
        ctx->pc = 0x365890u;
            // 0x365890: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x365894u;
        goto label_365894;
    }
    ctx->pc = 0x36588Cu;
    SET_GPR_U32(ctx, 31, 0x365894u);
    ctx->pc = 0x365890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36588Cu;
            // 0x365890: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365894u; }
        if (ctx->pc != 0x365894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365894u; }
        if (ctx->pc != 0x365894u) { return; }
    }
    ctx->pc = 0x365894u;
label_365894:
    // 0x365894: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x365894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_365898:
    // 0x365898: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x365898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_36589c:
    // 0x36589c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x36589cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_3658a0:
    // 0x3658a0: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x3658a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_3658a4:
    // 0x3658a4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x3658a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_3658a8:
    // 0x3658a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3658a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3658ac:
    // 0x3658ac: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x3658acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_3658b0:
    // 0x3658b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3658b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3658b4:
    // 0x3658b4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x3658b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_3658b8:
    // 0x3658b8: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x3658b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_3658bc:
    // 0x3658bc: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x3658bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_3658c0:
    // 0x3658c0: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x3658c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_3658c4:
    // 0x3658c4: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x3658c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_3658c8:
    // 0x3658c8: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x3658c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_3658cc:
    // 0x3658cc: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x3658ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_3658d0:
    // 0x3658d0: 0xc0775b8  jal         func_1DD6E0
label_3658d4:
    if (ctx->pc == 0x3658D4u) {
        ctx->pc = 0x3658D4u;
            // 0x3658d4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3658D8u;
        goto label_3658d8;
    }
    ctx->pc = 0x3658D0u;
    SET_GPR_U32(ctx, 31, 0x3658D8u);
    ctx->pc = 0x3658D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3658D0u;
            // 0x3658d4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3658D8u; }
        if (ctx->pc != 0x3658D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3658D8u; }
        if (ctx->pc != 0x3658D8u) { return; }
    }
    ctx->pc = 0x3658D8u;
label_3658d8:
    // 0x3658d8: 0xc077314  jal         func_1DCC50
label_3658dc:
    if (ctx->pc == 0x3658DCu) {
        ctx->pc = 0x3658DCu;
            // 0x3658dc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3658E0u;
        goto label_3658e0;
    }
    ctx->pc = 0x3658D8u;
    SET_GPR_U32(ctx, 31, 0x3658E0u);
    ctx->pc = 0x3658DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3658D8u;
            // 0x3658dc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3658E0u; }
        if (ctx->pc != 0x3658E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3658E0u; }
        if (ctx->pc != 0x3658E0u) { return; }
    }
    ctx->pc = 0x3658E0u;
label_3658e0:
    // 0x3658e0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3658e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_3658e4:
    // 0x3658e4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x3658e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_3658e8:
    // 0x3658e8: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x3658e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_3658ec:
    // 0x3658ec: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x3658ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_3658f0:
    // 0x3658f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3658f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3658f4:
    // 0x3658f4: 0x24846860  addiu       $a0, $a0, 0x6860
    ctx->pc = 0x3658f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26720));
label_3658f8:
    // 0x3658f8: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x3658f8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3658fc:
    // 0x3658fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3658fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_365900:
    // 0x365900: 0x246368a0  addiu       $v1, $v1, 0x68A0
    ctx->pc = 0x365900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26784));
label_365904:
    // 0x365904: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x365904u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_365908:
    // 0x365908: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x365908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36590c:
    // 0x36590c: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x36590cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
label_365910:
    // 0x365910: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x365910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_365914:
    // 0x365914: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x365914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_365918:
    // 0x365918: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x365918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_36591c:
    // 0x36591c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36591cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_365920:
    // 0x365920: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x365920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_365924:
    // 0x365924: 0x3e00008  jr          $ra
label_365928:
    if (ctx->pc == 0x365928u) {
        ctx->pc = 0x365928u;
            // 0x365928: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x36592Cu;
        goto label_36592c;
    }
    ctx->pc = 0x365924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x365924u;
            // 0x365928: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36592Cu;
label_36592c:
    // 0x36592c: 0x0  nop
    ctx->pc = 0x36592cu;
    // NOP
label_365930:
    // 0x365930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x365930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_365934:
    // 0x365934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x365934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_365938:
    // 0x365938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x365938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_36593c:
    // 0x36593c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36593cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_365940:
    // 0x365940: 0x8c90009c  lw          $s0, 0x9C($a0)
    ctx->pc = 0x365940u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_365944:
    // 0x365944: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_365948:
    if (ctx->pc == 0x365948u) {
        ctx->pc = 0x365948u;
            // 0x365948: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36594Cu;
        goto label_36594c;
    }
    ctx->pc = 0x365944u;
    {
        const bool branch_taken_0x365944 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x365948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x365944u;
            // 0x365948: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365944) {
            ctx->pc = 0x36597Cu;
            goto label_36597c;
        }
    }
    ctx->pc = 0x36594Cu;
label_36594c:
    // 0x36594c: 0xc04008c  jal         func_100230
label_365950:
    if (ctx->pc == 0x365950u) {
        ctx->pc = 0x365950u;
            // 0x365950: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x365954u;
        goto label_365954;
    }
    ctx->pc = 0x36594Cu;
    SET_GPR_U32(ctx, 31, 0x365954u);
    ctx->pc = 0x365950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36594Cu;
            // 0x365950: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365954u; }
        if (ctx->pc != 0x365954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365954u; }
        if (ctx->pc != 0x365954u) { return; }
    }
    ctx->pc = 0x365954u;
label_365954:
    // 0x365954: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x365954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_365958:
    // 0x365958: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x365958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_36595c:
    // 0x36595c: 0xc0407c0  jal         func_101F00
label_365960:
    if (ctx->pc == 0x365960u) {
        ctx->pc = 0x365960u;
            // 0x365960: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->pc = 0x365964u;
        goto label_365964;
    }
    ctx->pc = 0x36595Cu;
    SET_GPR_U32(ctx, 31, 0x365964u);
    ctx->pc = 0x365960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36595Cu;
            // 0x365960: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365964u; }
        if (ctx->pc != 0x365964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365964u; }
        if (ctx->pc != 0x365964u) { return; }
    }
    ctx->pc = 0x365964u;
label_365964:
    // 0x365964: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x365964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_365968:
    // 0x365968: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x365968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_36596c:
    // 0x36596c: 0xc0407c0  jal         func_101F00
label_365970:
    if (ctx->pc == 0x365970u) {
        ctx->pc = 0x365970u;
            // 0x365970: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->pc = 0x365974u;
        goto label_365974;
    }
    ctx->pc = 0x36596Cu;
    SET_GPR_U32(ctx, 31, 0x365974u);
    ctx->pc = 0x365970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36596Cu;
            // 0x365970: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365974u; }
        if (ctx->pc != 0x365974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365974u; }
        if (ctx->pc != 0x365974u) { return; }
    }
    ctx->pc = 0x365974u;
label_365974:
    // 0x365974: 0xc0400a8  jal         func_1002A0
label_365978:
    if (ctx->pc == 0x365978u) {
        ctx->pc = 0x365978u;
            // 0x365978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36597Cu;
        goto label_36597c;
    }
    ctx->pc = 0x365974u;
    SET_GPR_U32(ctx, 31, 0x36597Cu);
    ctx->pc = 0x365978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365974u;
            // 0x365978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36597Cu; }
        if (ctx->pc != 0x36597Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36597Cu; }
        if (ctx->pc != 0x36597Cu) { return; }
    }
    ctx->pc = 0x36597Cu;
label_36597c:
    // 0x36597c: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x36597cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_365980:
    // 0x365980: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x365980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_365984:
    // 0x365984: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_365988:
    if (ctx->pc == 0x365988u) {
        ctx->pc = 0x365988u;
            // 0x365988: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x36598Cu;
        goto label_36598c;
    }
    ctx->pc = 0x365984u;
    {
        const bool branch_taken_0x365984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x365984) {
            ctx->pc = 0x365988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x365984u;
            // 0x365988: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3659A0u;
            goto label_3659a0;
        }
    }
    ctx->pc = 0x36598Cu;
label_36598c:
    // 0x36598c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x36598cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_365990:
    // 0x365990: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x365990u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_365994:
    // 0x365994: 0x320f809  jalr        $t9
label_365998:
    if (ctx->pc == 0x365998u) {
        ctx->pc = 0x365998u;
            // 0x365998: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x36599Cu;
        goto label_36599c;
    }
    ctx->pc = 0x365994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36599Cu);
        ctx->pc = 0x365998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x365994u;
            // 0x365998: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36599Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36599Cu; }
            if (ctx->pc != 0x36599Cu) { return; }
        }
        }
    }
    ctx->pc = 0x36599Cu;
label_36599c:
    // 0x36599c: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x36599cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_3659a0:
    // 0x3659a0: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x3659a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3659a4:
    // 0x3659a4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3659a8:
    if (ctx->pc == 0x3659A8u) {
        ctx->pc = 0x3659A8u;
            // 0x3659a8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x3659ACu;
        goto label_3659ac;
    }
    ctx->pc = 0x3659A4u;
    {
        const bool branch_taken_0x3659a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3659a4) {
            ctx->pc = 0x3659A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3659A4u;
            // 0x3659a8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3659C0u;
            goto label_3659c0;
        }
    }
    ctx->pc = 0x3659ACu;
label_3659ac:
    // 0x3659ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3659acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3659b0:
    // 0x3659b0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3659b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3659b4:
    // 0x3659b4: 0x320f809  jalr        $t9
label_3659b8:
    if (ctx->pc == 0x3659B8u) {
        ctx->pc = 0x3659B8u;
            // 0x3659b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3659BCu;
        goto label_3659bc;
    }
    ctx->pc = 0x3659B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3659BCu);
        ctx->pc = 0x3659B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3659B4u;
            // 0x3659b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3659BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3659BCu; }
            if (ctx->pc != 0x3659BCu) { return; }
        }
        }
    }
    ctx->pc = 0x3659BCu;
label_3659bc:
    // 0x3659bc: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x3659bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_3659c0:
    // 0x3659c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3659c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3659c4:
    // 0x3659c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3659c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3659c8:
    // 0x3659c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3659c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3659cc:
    // 0x3659cc: 0x3e00008  jr          $ra
label_3659d0:
    if (ctx->pc == 0x3659D0u) {
        ctx->pc = 0x3659D0u;
            // 0x3659d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3659D4u;
        goto label_3659d4;
    }
    ctx->pc = 0x3659CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3659D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3659CCu;
            // 0x3659d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3659D4u;
label_3659d4:
    // 0x3659d4: 0x0  nop
    ctx->pc = 0x3659d4u;
    // NOP
label_3659d8:
    // 0x3659d8: 0x0  nop
    ctx->pc = 0x3659d8u;
    // NOP
label_3659dc:
    // 0x3659dc: 0x0  nop
    ctx->pc = 0x3659dcu;
    // NOP
label_3659e0:
    // 0x3659e0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x3659e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_3659e4:
    // 0x3659e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3659e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3659e8:
    // 0x3659e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3659e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3659ec:
    // 0x3659ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3659ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3659f0:
    // 0x3659f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3659f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3659f4:
    // 0x3659f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3659f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3659f8:
    // 0x3659f8: 0xc0892d0  jal         func_224B40
label_3659fc:
    if (ctx->pc == 0x3659FCu) {
        ctx->pc = 0x3659FCu;
            // 0x3659fc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x365A00u;
        goto label_365a00;
    }
    ctx->pc = 0x3659F8u;
    SET_GPR_U32(ctx, 31, 0x365A00u);
    ctx->pc = 0x3659FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3659F8u;
            // 0x3659fc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365A00u; }
        if (ctx->pc != 0x365A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365A00u; }
        if (ctx->pc != 0x365A00u) { return; }
    }
    ctx->pc = 0x365A00u;
label_365a00:
    // 0x365a00: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x365a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_365a04:
    // 0x365a04: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x365a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_365a08:
    // 0x365a08: 0x8c424020  lw          $v0, 0x4020($v0)
    ctx->pc = 0x365a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16416)));
label_365a0c:
    // 0x365a0c: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x365a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_365a10:
    // 0x365a10: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x365a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_365a14:
    // 0x365a14: 0xc0b6e68  jal         func_2DB9A0
label_365a18:
    if (ctx->pc == 0x365A18u) {
        ctx->pc = 0x365A18u;
            // 0x365a18: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x365A1Cu;
        goto label_365a1c;
    }
    ctx->pc = 0x365A14u;
    SET_GPR_U32(ctx, 31, 0x365A1Cu);
    ctx->pc = 0x365A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365A14u;
            // 0x365a18: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365A1Cu; }
        if (ctx->pc != 0x365A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365A1Cu; }
        if (ctx->pc != 0x365A1Cu) { return; }
    }
    ctx->pc = 0x365A1Cu;
label_365a1c:
    // 0x365a1c: 0xc0b6dac  jal         func_2DB6B0
label_365a20:
    if (ctx->pc == 0x365A20u) {
        ctx->pc = 0x365A20u;
            // 0x365a20: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x365A24u;
        goto label_365a24;
    }
    ctx->pc = 0x365A1Cu;
    SET_GPR_U32(ctx, 31, 0x365A24u);
    ctx->pc = 0x365A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365A1Cu;
            // 0x365a20: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365A24u; }
        if (ctx->pc != 0x365A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365A24u; }
        if (ctx->pc != 0x365A24u) { return; }
    }
    ctx->pc = 0x365A24u;
label_365a24:
    // 0x365a24: 0xc0cac94  jal         func_32B250
label_365a28:
    if (ctx->pc == 0x365A28u) {
        ctx->pc = 0x365A28u;
            // 0x365a28: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x365A2Cu;
        goto label_365a2c;
    }
    ctx->pc = 0x365A24u;
    SET_GPR_U32(ctx, 31, 0x365A2Cu);
    ctx->pc = 0x365A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365A24u;
            // 0x365a28: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365A2Cu; }
        if (ctx->pc != 0x365A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365A2Cu; }
        if (ctx->pc != 0x365A2Cu) { return; }
    }
    ctx->pc = 0x365A2Cu;
label_365a2c:
    // 0x365a2c: 0xc0cac84  jal         func_32B210
label_365a30:
    if (ctx->pc == 0x365A30u) {
        ctx->pc = 0x365A30u;
            // 0x365a30: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x365A34u;
        goto label_365a34;
    }
    ctx->pc = 0x365A2Cu;
    SET_GPR_U32(ctx, 31, 0x365A34u);
    ctx->pc = 0x365A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365A2Cu;
            // 0x365a30: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365A34u; }
        if (ctx->pc != 0x365A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365A34u; }
        if (ctx->pc != 0x365A34u) { return; }
    }
    ctx->pc = 0x365A34u;
label_365a34:
    // 0x365a34: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x365a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_365a38:
    // 0x365a38: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x365a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_365a3c:
    // 0x365a3c: 0xc44dc910  lwc1        $f13, -0x36F0($v0)
    ctx->pc = 0x365a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_365a40:
    // 0x365a40: 0xc0a562c  jal         func_2958B0
label_365a44:
    if (ctx->pc == 0x365A44u) {
        ctx->pc = 0x365A44u;
            // 0x365a44: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x365A48u;
        goto label_365a48;
    }
    ctx->pc = 0x365A40u;
    SET_GPR_U32(ctx, 31, 0x365A48u);
    ctx->pc = 0x365A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365A40u;
            // 0x365a44: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2958B0u;
    if (runtime->hasFunction(0x2958B0u)) {
        auto targetFn = runtime->lookupFunction(0x2958B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365A48u; }
        if (ctx->pc != 0x365A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002958B0_0x2958b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365A48u; }
        if (ctx->pc != 0x365A48u) { return; }
    }
    ctx->pc = 0x365A48u;
label_365a48:
    // 0x365a48: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x365a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_365a4c:
    // 0x365a4c: 0x3c0a42c8  lui         $t2, 0x42C8
    ctx->pc = 0x365a4cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17096 << 16));
label_365a50:
    // 0x365a50: 0x8c434020  lw          $v1, 0x4020($v0)
    ctx->pc = 0x365a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16416)));
label_365a54:
    // 0x365a54: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x365a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_365a58:
    // 0x365a58: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x365a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_365a5c:
    // 0x365a5c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x365a5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_365a60:
    // 0x365a60: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x365a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_365a64:
    // 0x365a64: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x365a64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_365a68:
    // 0x365a68: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x365a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_365a6c:
    // 0x365a6c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x365a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_365a70:
    // 0x365a70: 0x3448d70a  ori         $t0, $v0, 0xD70A
    ctx->pc = 0x365a70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_365a74:
    // 0x365a74: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x365a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_365a78:
    // 0x365a78: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x365a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_365a7c:
    // 0x365a7c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x365a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_365a80:
    // 0x365a80: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x365a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_365a84:
    // 0x365a84: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x365a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_365a88:
    // 0x365a88: 0xc62a0018  lwc1        $f10, 0x18($s1)
    ctx->pc = 0x365a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_365a8c:
    // 0x365a8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x365a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_365a90:
    // 0x365a90: 0xc6290014  lwc1        $f9, 0x14($s1)
    ctx->pc = 0x365a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_365a94:
    // 0x365a94: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x365a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_365a98:
    // 0x365a98: 0xc6280010  lwc1        $f8, 0x10($s1)
    ctx->pc = 0x365a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_365a9c:
    // 0x365a9c: 0xc7a70090  lwc1        $f7, 0x90($sp)
    ctx->pc = 0x365a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_365aa0:
    // 0x365aa0: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x365aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_365aa4:
    // 0x365aa4: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x365aa4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_365aa8:
    // 0x365aa8: 0xafaa0168  sw          $t2, 0x168($sp)
    ctx->pc = 0x365aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 10));
label_365aac:
    // 0x365aac: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x365aacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_365ab0:
    // 0x365ab0: 0xa3a90170  sb          $t1, 0x170($sp)
    ctx->pc = 0x365ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 9));
label_365ab4:
    // 0x365ab4: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x365ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_365ab8:
    // 0x365ab8: 0xafa8016c  sw          $t0, 0x16C($sp)
    ctx->pc = 0x365ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 8));
label_365abc:
    // 0x365abc: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x365abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_365ac0:
    // 0x365ac0: 0xa3a70172  sb          $a3, 0x172($sp)
    ctx->pc = 0x365ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 370), (uint8_t)GPR_U32(ctx, 7));
label_365ac4:
    // 0x365ac4: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x365ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_365ac8:
    // 0x365ac8: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x365ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_365acc:
    // 0x365acc: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x365accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_365ad0:
    // 0x365ad0: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x365ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_365ad4:
    // 0x365ad4: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x365ad4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_365ad8:
    // 0x365ad8: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x365ad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_365adc:
    // 0x365adc: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x365adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_365ae0:
    // 0x365ae0: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x365ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_365ae4:
    // 0x365ae4: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x365ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_365ae8:
    // 0x365ae8: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x365ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_365aec:
    // 0x365aec: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x365aecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_365af0:
    // 0x365af0: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x365af0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_365af4:
    // 0x365af4: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x365af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_365af8:
    // 0x365af8: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x365af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_365afc:
    // 0x365afc: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x365afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_365b00:
    // 0x365b00: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x365b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_365b04:
    // 0x365b04: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x365b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_365b08:
    // 0x365b08: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x365b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_365b0c:
    // 0x365b0c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x365b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_365b10:
    // 0x365b10: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x365b10u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_365b14:
    // 0x365b14: 0xe7a900d4  swc1        $f9, 0xD4($sp)
    ctx->pc = 0x365b14u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_365b18:
    // 0x365b18: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x365b18u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_365b1c:
    // 0x365b1c: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x365b1cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_365b20:
    // 0x365b20: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x365b20u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_365b24:
    // 0x365b24: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x365b24u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_365b28:
    // 0x365b28: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x365b28u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_365b2c:
    // 0x365b2c: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x365b2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_365b30:
    // 0x365b30: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x365b30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_365b34:
    // 0x365b34: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x365b34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_365b38:
    // 0x365b38: 0xc0a7a88  jal         func_29EA20
label_365b3c:
    if (ctx->pc == 0x365B3Cu) {
        ctx->pc = 0x365B3Cu;
            // 0x365b3c: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x365B40u;
        goto label_365b40;
    }
    ctx->pc = 0x365B38u;
    SET_GPR_U32(ctx, 31, 0x365B40u);
    ctx->pc = 0x365B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365B38u;
            // 0x365b3c: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365B40u; }
        if (ctx->pc != 0x365B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365B40u; }
        if (ctx->pc != 0x365B40u) { return; }
    }
    ctx->pc = 0x365B40u;
label_365b40:
    // 0x365b40: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x365b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_365b44:
    // 0x365b44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x365b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_365b48:
    // 0x365b48: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_365b4c:
    if (ctx->pc == 0x365B4Cu) {
        ctx->pc = 0x365B4Cu;
            // 0x365b4c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x365B50u;
        goto label_365b50;
    }
    ctx->pc = 0x365B48u;
    {
        const bool branch_taken_0x365b48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x365B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x365B48u;
            // 0x365b4c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365b48) {
            ctx->pc = 0x365B98u;
            goto label_365b98;
        }
    }
    ctx->pc = 0x365B50u;
label_365b50:
    // 0x365b50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_365b54:
    // 0x365b54: 0xc088ef4  jal         func_223BD0
label_365b58:
    if (ctx->pc == 0x365B58u) {
        ctx->pc = 0x365B58u;
            // 0x365b58: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x365B5Cu;
        goto label_365b5c;
    }
    ctx->pc = 0x365B54u;
    SET_GPR_U32(ctx, 31, 0x365B5Cu);
    ctx->pc = 0x365B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365B54u;
            // 0x365b58: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365B5Cu; }
        if (ctx->pc != 0x365B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365B5Cu; }
        if (ctx->pc != 0x365B5Cu) { return; }
    }
    ctx->pc = 0x365B5Cu;
label_365b5c:
    // 0x365b5c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x365b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_365b60:
    // 0x365b60: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x365b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_365b64:
    // 0x365b64: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x365b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_365b68:
    // 0x365b68: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x365b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_365b6c:
    // 0x365b6c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x365b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_365b70:
    // 0x365b70: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x365b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_365b74:
    // 0x365b74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x365b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_365b78:
    // 0x365b78: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x365b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_365b7c:
    // 0x365b7c: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x365b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_365b80:
    // 0x365b80: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x365b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_365b84:
    // 0x365b84: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x365b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_365b88:
    // 0x365b88: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x365b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_365b8c:
    // 0x365b8c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x365b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_365b90:
    // 0x365b90: 0xc088b38  jal         func_222CE0
label_365b94:
    if (ctx->pc == 0x365B94u) {
        ctx->pc = 0x365B94u;
            // 0x365b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x365B98u;
        goto label_365b98;
    }
    ctx->pc = 0x365B90u;
    SET_GPR_U32(ctx, 31, 0x365B98u);
    ctx->pc = 0x365B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365B90u;
            // 0x365b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365B98u; }
        if (ctx->pc != 0x365B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365B98u; }
        if (ctx->pc != 0x365B98u) { return; }
    }
    ctx->pc = 0x365B98u;
label_365b98:
    // 0x365b98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_365b9c:
    // 0x365b9c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x365b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_365ba0:
    // 0x365ba0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x365ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_365ba4:
    // 0x365ba4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x365ba4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_365ba8:
    // 0x365ba8: 0xc08914c  jal         func_224530
label_365bac:
    if (ctx->pc == 0x365BACu) {
        ctx->pc = 0x365BACu;
            // 0x365bac: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x365BB0u;
        goto label_365bb0;
    }
    ctx->pc = 0x365BA8u;
    SET_GPR_U32(ctx, 31, 0x365BB0u);
    ctx->pc = 0x365BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365BA8u;
            // 0x365bac: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365BB0u; }
        if (ctx->pc != 0x365BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365BB0u; }
        if (ctx->pc != 0x365BB0u) { return; }
    }
    ctx->pc = 0x365BB0u;
label_365bb0:
    // 0x365bb0: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x365bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_365bb4:
    // 0x365bb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_365bb8:
    // 0x365bb8: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x365bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_365bbc:
    // 0x365bbc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x365bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_365bc0:
    // 0x365bc0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x365bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_365bc4:
    // 0x365bc4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x365bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_365bc8:
    // 0x365bc8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x365bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_365bcc:
    // 0x365bcc: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x365bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_365bd0:
    // 0x365bd0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x365bd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_365bd4:
    // 0x365bd4: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x365bd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_365bd8:
    // 0x365bd8: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x365bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_365bdc:
    // 0x365bdc: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x365bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_365be0:
    // 0x365be0: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x365be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_365be4:
    // 0x365be4: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x365be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_365be8:
    // 0x365be8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x365be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_365bec:
    // 0x365bec: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x365becu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_365bf0:
    // 0x365bf0: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x365bf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_365bf4:
    // 0x365bf4: 0xc0892b0  jal         func_224AC0
label_365bf8:
    if (ctx->pc == 0x365BF8u) {
        ctx->pc = 0x365BF8u;
            // 0x365bf8: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x365BFCu;
        goto label_365bfc;
    }
    ctx->pc = 0x365BF4u;
    SET_GPR_U32(ctx, 31, 0x365BFCu);
    ctx->pc = 0x365BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365BF4u;
            // 0x365bf8: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365BFCu; }
        if (ctx->pc != 0x365BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365BFCu; }
        if (ctx->pc != 0x365BFCu) { return; }
    }
    ctx->pc = 0x365BFCu;
label_365bfc:
    // 0x365bfc: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x365bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_365c00:
    // 0x365c00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_365c04:
    // 0x365c04: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x365c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_365c08:
    // 0x365c08: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x365c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_365c0c:
    // 0x365c0c: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x365c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_365c10:
    // 0x365c10: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x365c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_365c14:
    // 0x365c14: 0xc0891d8  jal         func_224760
label_365c18:
    if (ctx->pc == 0x365C18u) {
        ctx->pc = 0x365C18u;
            // 0x365c18: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x365C1Cu;
        goto label_365c1c;
    }
    ctx->pc = 0x365C14u;
    SET_GPR_U32(ctx, 31, 0x365C1Cu);
    ctx->pc = 0x365C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365C14u;
            // 0x365c18: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365C1Cu; }
        if (ctx->pc != 0x365C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365C1Cu; }
        if (ctx->pc != 0x365C1Cu) { return; }
    }
    ctx->pc = 0x365C1Cu;
label_365c1c:
    // 0x365c1c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x365c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_365c20:
    // 0x365c20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x365c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_365c24:
    // 0x365c24: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x365c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_365c28:
    // 0x365c28: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x365c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_365c2c:
    // 0x365c2c: 0xc08c164  jal         func_230590
label_365c30:
    if (ctx->pc == 0x365C30u) {
        ctx->pc = 0x365C30u;
            // 0x365c30: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x365C34u;
        goto label_365c34;
    }
    ctx->pc = 0x365C2Cu;
    SET_GPR_U32(ctx, 31, 0x365C34u);
    ctx->pc = 0x365C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365C2Cu;
            // 0x365c30: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365C34u; }
        if (ctx->pc != 0x365C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365C34u; }
        if (ctx->pc != 0x365C34u) { return; }
    }
    ctx->pc = 0x365C34u;
label_365c34:
    // 0x365c34: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x365c34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_365c38:
    // 0x365c38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x365c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_365c3c:
    // 0x365c3c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x365c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_365c40:
    // 0x365c40: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x365c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_365c44:
    // 0x365c44: 0xc0a7a88  jal         func_29EA20
label_365c48:
    if (ctx->pc == 0x365C48u) {
        ctx->pc = 0x365C48u;
            // 0x365c48: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x365C4Cu;
        goto label_365c4c;
    }
    ctx->pc = 0x365C44u;
    SET_GPR_U32(ctx, 31, 0x365C4Cu);
    ctx->pc = 0x365C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365C44u;
            // 0x365c48: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365C4Cu; }
        if (ctx->pc != 0x365C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365C4Cu; }
        if (ctx->pc != 0x365C4Cu) { return; }
    }
    ctx->pc = 0x365C4Cu;
label_365c4c:
    // 0x365c4c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x365c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_365c50:
    // 0x365c50: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x365c50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_365c54:
    // 0x365c54: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_365c58:
    if (ctx->pc == 0x365C58u) {
        ctx->pc = 0x365C58u;
            // 0x365c58: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x365C5Cu;
        goto label_365c5c;
    }
    ctx->pc = 0x365C54u;
    {
        const bool branch_taken_0x365c54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x365C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x365C54u;
            // 0x365c58: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365c54) {
            ctx->pc = 0x365C78u;
            goto label_365c78;
        }
    }
    ctx->pc = 0x365C5Cu;
label_365c5c:
    // 0x365c5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x365c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_365c60:
    // 0x365c60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x365c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_365c64:
    // 0x365c64: 0xc0869d0  jal         func_21A740
label_365c68:
    if (ctx->pc == 0x365C68u) {
        ctx->pc = 0x365C68u;
            // 0x365c68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x365C6Cu;
        goto label_365c6c;
    }
    ctx->pc = 0x365C64u;
    SET_GPR_U32(ctx, 31, 0x365C6Cu);
    ctx->pc = 0x365C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365C64u;
            // 0x365c68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365C6Cu; }
        if (ctx->pc != 0x365C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365C6Cu; }
        if (ctx->pc != 0x365C6Cu) { return; }
    }
    ctx->pc = 0x365C6Cu;
label_365c6c:
    // 0x365c6c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x365c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_365c70:
    // 0x365c70: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x365c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_365c74:
    // 0x365c74: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x365c74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_365c78:
    // 0x365c78: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x365c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_365c7c:
    // 0x365c7c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x365c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_365c80:
    // 0x365c80: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x365c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_365c84:
    // 0x365c84: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x365c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_365c88:
    // 0x365c88: 0xc08c650  jal         func_231940
label_365c8c:
    if (ctx->pc == 0x365C8Cu) {
        ctx->pc = 0x365C8Cu;
            // 0x365c8c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x365C90u;
        goto label_365c90;
    }
    ctx->pc = 0x365C88u;
    SET_GPR_U32(ctx, 31, 0x365C90u);
    ctx->pc = 0x365C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365C88u;
            // 0x365c8c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365C90u; }
        if (ctx->pc != 0x365C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365C90u; }
        if (ctx->pc != 0x365C90u) { return; }
    }
    ctx->pc = 0x365C90u;
label_365c90:
    // 0x365c90: 0xc040180  jal         func_100600
label_365c94:
    if (ctx->pc == 0x365C94u) {
        ctx->pc = 0x365C94u;
            // 0x365c94: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x365C98u;
        goto label_365c98;
    }
    ctx->pc = 0x365C90u;
    SET_GPR_U32(ctx, 31, 0x365C98u);
    ctx->pc = 0x365C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365C90u;
            // 0x365c94: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365C98u; }
        if (ctx->pc != 0x365C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365C98u; }
        if (ctx->pc != 0x365C98u) { return; }
    }
    ctx->pc = 0x365C98u;
label_365c98:
    // 0x365c98: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_365c9c:
    if (ctx->pc == 0x365C9Cu) {
        ctx->pc = 0x365C9Cu;
            // 0x365c9c: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x365CA0u;
        goto label_365ca0;
    }
    ctx->pc = 0x365C98u;
    {
        const bool branch_taken_0x365c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365c98) {
            ctx->pc = 0x365C9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x365C98u;
            // 0x365c9c: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x365CE8u;
            goto label_365ce8;
        }
    }
    ctx->pc = 0x365CA0u;
label_365ca0:
    // 0x365ca0: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x365ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_365ca4:
    // 0x365ca4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x365ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_365ca8:
    // 0x365ca8: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x365ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_365cac:
    // 0x365cac: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x365cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_365cb0:
    // 0x365cb0: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x365cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_365cb4:
    // 0x365cb4: 0x24636020  addiu       $v1, $v1, 0x6020
    ctx->pc = 0x365cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24608));
label_365cb8:
    // 0x365cb8: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x365cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_365cbc:
    // 0x365cbc: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x365cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_365cc0:
    // 0x365cc0: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x365cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_365cc4:
    // 0x365cc4: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x365cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_365cc8:
    // 0x365cc8: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x365cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_365ccc:
    // 0x365ccc: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x365cccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_365cd0:
    // 0x365cd0: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x365cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_365cd4:
    // 0x365cd4: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x365cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_365cd8:
    // 0x365cd8: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x365cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_365cdc:
    // 0x365cdc: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x365cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_365ce0:
    // 0x365ce0: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x365ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_365ce4:
    // 0x365ce4: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x365ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_365ce8:
    // 0x365ce8: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x365ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_365cec:
    // 0x365cec: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x365cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_365cf0:
    // 0x365cf0: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x365cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_365cf4:
    // 0x365cf4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x365cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_365cf8:
    // 0x365cf8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x365cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_365cfc:
    // 0x365cfc: 0xc040180  jal         func_100600
label_365d00:
    if (ctx->pc == 0x365D00u) {
        ctx->pc = 0x365D00u;
            // 0x365d00: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x365D04u;
        goto label_365d04;
    }
    ctx->pc = 0x365CFCu;
    SET_GPR_U32(ctx, 31, 0x365D04u);
    ctx->pc = 0x365D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365CFCu;
            // 0x365d00: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365D04u; }
        if (ctx->pc != 0x365D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365D04u; }
        if (ctx->pc != 0x365D04u) { return; }
    }
    ctx->pc = 0x365D04u;
label_365d04:
    // 0x365d04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x365d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_365d08:
    // 0x365d08: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_365d0c:
    if (ctx->pc == 0x365D0Cu) {
        ctx->pc = 0x365D10u;
        goto label_365d10;
    }
    ctx->pc = 0x365D08u;
    {
        const bool branch_taken_0x365d08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x365d08) {
            ctx->pc = 0x365D88u;
            goto label_365d88;
        }
    }
    ctx->pc = 0x365D10u;
label_365d10:
    // 0x365d10: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x365d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_365d14:
    // 0x365d14: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x365d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_365d18:
    // 0x365d18: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x365d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_365d1c:
    // 0x365d1c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x365d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_365d20:
    // 0x365d20: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x365d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_365d24:
    // 0x365d24: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x365d24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_365d28:
    // 0x365d28: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x365d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_365d2c:
    // 0x365d2c: 0xc040138  jal         func_1004E0
label_365d30:
    if (ctx->pc == 0x365D30u) {
        ctx->pc = 0x365D30u;
            // 0x365d30: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x365D34u;
        goto label_365d34;
    }
    ctx->pc = 0x365D2Cu;
    SET_GPR_U32(ctx, 31, 0x365D34u);
    ctx->pc = 0x365D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365D2Cu;
            // 0x365d30: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365D34u; }
        if (ctx->pc != 0x365D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365D34u; }
        if (ctx->pc != 0x365D34u) { return; }
    }
    ctx->pc = 0x365D34u;
label_365d34:
    // 0x365d34: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x365d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_365d38:
    // 0x365d38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x365d38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_365d3c:
    // 0x365d3c: 0xc040138  jal         func_1004E0
label_365d40:
    if (ctx->pc == 0x365D40u) {
        ctx->pc = 0x365D40u;
            // 0x365d40: 0x24040190  addiu       $a0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->pc = 0x365D44u;
        goto label_365d44;
    }
    ctx->pc = 0x365D3Cu;
    SET_GPR_U32(ctx, 31, 0x365D44u);
    ctx->pc = 0x365D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365D3Cu;
            // 0x365d40: 0x24040190  addiu       $a0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365D44u; }
        if (ctx->pc != 0x365D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365D44u; }
        if (ctx->pc != 0x365D44u) { return; }
    }
    ctx->pc = 0x365D44u;
label_365d44:
    // 0x365d44: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x365d44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_365d48:
    // 0x365d48: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x365d48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_365d4c:
    // 0x365d4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x365d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_365d50:
    // 0x365d50: 0x24a583b0  addiu       $a1, $a1, -0x7C50
    ctx->pc = 0x365d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935472));
label_365d54:
    // 0x365d54: 0x24c6b410  addiu       $a2, $a2, -0x4BF0
    ctx->pc = 0x365d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947856));
label_365d58:
    // 0x365d58: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x365d58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_365d5c:
    // 0x365d5c: 0xc040840  jal         func_102100
label_365d60:
    if (ctx->pc == 0x365D60u) {
        ctx->pc = 0x365D60u;
            // 0x365d60: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x365D64u;
        goto label_365d64;
    }
    ctx->pc = 0x365D5Cu;
    SET_GPR_U32(ctx, 31, 0x365D64u);
    ctx->pc = 0x365D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365D5Cu;
            // 0x365d60: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365D64u; }
        if (ctx->pc != 0x365D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365D64u; }
        if (ctx->pc != 0x365D64u) { return; }
    }
    ctx->pc = 0x365D64u;
label_365d64:
    // 0x365d64: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x365d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_365d68:
    // 0x365d68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x365d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_365d6c:
    // 0x365d6c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x365d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_365d70:
    // 0x365d70: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x365d70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_365d74:
    // 0x365d74: 0x28830004  slti        $v1, $a0, 0x4
    ctx->pc = 0x365d74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_365d78:
    // 0x365d78: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x365d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_365d7c:
    // 0x365d7c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x365d7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_365d80:
    // 0x365d80: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_365d84:
    if (ctx->pc == 0x365D84u) {
        ctx->pc = 0x365D88u;
        goto label_365d88;
    }
    ctx->pc = 0x365D80u;
    {
        const bool branch_taken_0x365d80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x365d80) {
            ctx->pc = 0x365D6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_365d6c;
        }
    }
    ctx->pc = 0x365D88u;
label_365d88:
    // 0x365d88: 0xae30009c  sw          $s0, 0x9C($s1)
    ctx->pc = 0x365d88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 16));
label_365d8c:
    // 0x365d8c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x365d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_365d90:
    // 0x365d90: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x365d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_365d94:
    // 0x365d94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x365d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_365d98:
    // 0x365d98: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x365d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_365d9c:
    // 0x365d9c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x365d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_365da0:
    // 0x365da0: 0xc0e7d2c  jal         func_39F4B0
label_365da4:
    if (ctx->pc == 0x365DA4u) {
        ctx->pc = 0x365DA4u;
            // 0x365da4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x365DA8u;
        goto label_365da8;
    }
    ctx->pc = 0x365DA0u;
    SET_GPR_U32(ctx, 31, 0x365DA8u);
    ctx->pc = 0x365DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365DA0u;
            // 0x365da4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365DA8u; }
        if (ctx->pc != 0x365DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365DA8u; }
        if (ctx->pc != 0x365DA8u) { return; }
    }
    ctx->pc = 0x365DA8u;
label_365da8:
    // 0x365da8: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x365da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_365dac:
    // 0x365dac: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x365dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_365db0:
    // 0x365db0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x365db0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_365db4:
    // 0x365db4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x365db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_365db8:
    // 0x365db8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x365db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_365dbc:
    // 0x365dbc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x365dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_365dc0:
    // 0x365dc0: 0xc0e7d2c  jal         func_39F4B0
label_365dc4:
    if (ctx->pc == 0x365DC4u) {
        ctx->pc = 0x365DC4u;
            // 0x365dc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x365DC8u;
        goto label_365dc8;
    }
    ctx->pc = 0x365DC0u;
    SET_GPR_U32(ctx, 31, 0x365DC8u);
    ctx->pc = 0x365DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365DC0u;
            // 0x365dc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365DC8u; }
        if (ctx->pc != 0x365DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365DC8u; }
        if (ctx->pc != 0x365DC8u) { return; }
    }
    ctx->pc = 0x365DC8u;
label_365dc8:
    // 0x365dc8: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x365dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_365dcc:
    // 0x365dcc: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x365dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_365dd0:
    // 0x365dd0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x365dd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_365dd4:
    // 0x365dd4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x365dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_365dd8:
    // 0x365dd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x365dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_365ddc:
    // 0x365ddc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x365ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_365de0:
    // 0x365de0: 0xc0e7d2c  jal         func_39F4B0
label_365de4:
    if (ctx->pc == 0x365DE4u) {
        ctx->pc = 0x365DE4u;
            // 0x365de4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x365DE8u;
        goto label_365de8;
    }
    ctx->pc = 0x365DE0u;
    SET_GPR_U32(ctx, 31, 0x365DE8u);
    ctx->pc = 0x365DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365DE0u;
            // 0x365de4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365DE8u; }
        if (ctx->pc != 0x365DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365DE8u; }
        if (ctx->pc != 0x365DE8u) { return; }
    }
    ctx->pc = 0x365DE8u;
label_365de8:
    // 0x365de8: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x365de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_365dec:
    // 0x365dec: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x365decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_365df0:
    // 0x365df0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x365df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_365df4:
    // 0x365df4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x365df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_365df8:
    // 0x365df8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x365df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_365dfc:
    // 0x365dfc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x365dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_365e00:
    // 0x365e00: 0xc0e7d2c  jal         func_39F4B0
label_365e04:
    if (ctx->pc == 0x365E04u) {
        ctx->pc = 0x365E04u;
            // 0x365e04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x365E08u;
        goto label_365e08;
    }
    ctx->pc = 0x365E00u;
    SET_GPR_U32(ctx, 31, 0x365E08u);
    ctx->pc = 0x365E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365E00u;
            // 0x365e04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365E08u; }
        if (ctx->pc != 0x365E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365E08u; }
        if (ctx->pc != 0x365E08u) { return; }
    }
    ctx->pc = 0x365E08u;
label_365e08:
    // 0x365e08: 0x8e2600b0  lw          $a2, 0xB0($s1)
    ctx->pc = 0x365e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_365e0c:
    // 0x365e0c: 0x2405fff7  addiu       $a1, $zero, -0x9
    ctx->pc = 0x365e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_365e10:
    // 0x365e10: 0x2404ffdf  addiu       $a0, $zero, -0x21
    ctx->pc = 0x365e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_365e14:
    // 0x365e14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x365e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_365e18:
    // 0x365e18: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x365e18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_365e1c:
    // 0x365e1c: 0x34a50008  ori         $a1, $a1, 0x8
    ctx->pc = 0x365e1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
label_365e20:
    // 0x365e20: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x365e20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_365e24:
    // 0x365e24: 0xae2500b0  sw          $a1, 0xB0($s1)
    ctx->pc = 0x365e24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 5));
label_365e28:
    // 0x365e28: 0xae2400b0  sw          $a0, 0xB0($s1)
    ctx->pc = 0x365e28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 4));
label_365e2c:
    // 0x365e2c: 0xa2230064  sb          $v1, 0x64($s1)
    ctx->pc = 0x365e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 3));
label_365e30:
    // 0x365e30: 0xa2230065  sb          $v1, 0x65($s1)
    ctx->pc = 0x365e30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 3));
label_365e34:
    // 0x365e34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x365e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_365e38:
    // 0x365e38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x365e38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_365e3c:
    // 0x365e3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x365e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_365e40:
    // 0x365e40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x365e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_365e44:
    // 0x365e44: 0x3e00008  jr          $ra
label_365e48:
    if (ctx->pc == 0x365E48u) {
        ctx->pc = 0x365E48u;
            // 0x365e48: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x365E4Cu;
        goto label_365e4c;
    }
    ctx->pc = 0x365E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x365E44u;
            // 0x365e48: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x365E4Cu;
label_365e4c:
    // 0x365e4c: 0x0  nop
    ctx->pc = 0x365e4cu;
    // NOP
label_365e50:
    // 0x365e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x365e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_365e54:
    // 0x365e54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x365e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_365e58:
    // 0x365e58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x365e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_365e5c:
    // 0x365e5c: 0xc0e3580  jal         func_38D600
label_365e60:
    if (ctx->pc == 0x365E60u) {
        ctx->pc = 0x365E60u;
            // 0x365e60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x365E64u;
        goto label_365e64;
    }
    ctx->pc = 0x365E5Cu;
    SET_GPR_U32(ctx, 31, 0x365E64u);
    ctx->pc = 0x365E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365E5Cu;
            // 0x365e60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365E64u; }
        if (ctx->pc != 0x365E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365E64u; }
        if (ctx->pc != 0x365E64u) { return; }
    }
    ctx->pc = 0x365E64u;
label_365e64:
    // 0x365e64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x365e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_365e68:
    // 0x365e68: 0x3c054416  lui         $a1, 0x4416
    ctx->pc = 0x365e68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17430 << 16));
label_365e6c:
    // 0x365e6c: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x365e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_365e70:
    // 0x365e70: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x365e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
label_365e74:
    // 0x365e74: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x365e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_365e78:
    // 0x365e78: 0x2403f9ff  addiu       $v1, $zero, -0x601
    ctx->pc = 0x365e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
label_365e7c:
    // 0x365e7c: 0xae050078  sw          $a1, 0x78($s0)
    ctx->pc = 0x365e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 5));
label_365e80:
    // 0x365e80: 0xae040080  sw          $a0, 0x80($s0)
    ctx->pc = 0x365e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 4));
label_365e84:
    // 0x365e84: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x365e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_365e88:
    // 0x365e88: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x365e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_365e8c:
    // 0x365e8c: 0x34630600  ori         $v1, $v1, 0x600
    ctx->pc = 0x365e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1536);
label_365e90:
    // 0x365e90: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x365e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_365e94:
    // 0x365e94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x365e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_365e98:
    // 0x365e98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x365e98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_365e9c:
    // 0x365e9c: 0x3e00008  jr          $ra
label_365ea0:
    if (ctx->pc == 0x365EA0u) {
        ctx->pc = 0x365EA0u;
            // 0x365ea0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x365EA4u;
        goto label_365ea4;
    }
    ctx->pc = 0x365E9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x365E9Cu;
            // 0x365ea0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x365EA4u;
label_365ea4:
    // 0x365ea4: 0x0  nop
    ctx->pc = 0x365ea4u;
    // NOP
label_365ea8:
    // 0x365ea8: 0x0  nop
    ctx->pc = 0x365ea8u;
    // NOP
label_365eac:
    // 0x365eac: 0x0  nop
    ctx->pc = 0x365eacu;
    // NOP
label_365eb0:
    // 0x365eb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x365eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_365eb4:
    // 0x365eb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x365eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_365eb8:
    // 0x365eb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x365eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_365ebc:
    // 0x365ebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x365ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_365ec0:
    // 0x365ec0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x365ec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_365ec4:
    // 0x365ec4: 0xc0baaa0  jal         func_2EAA80
label_365ec8:
    if (ctx->pc == 0x365EC8u) {
        ctx->pc = 0x365EC8u;
            // 0x365ec8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x365ECCu;
        goto label_365ecc;
    }
    ctx->pc = 0x365EC4u;
    SET_GPR_U32(ctx, 31, 0x365ECCu);
    ctx->pc = 0x365EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365EC4u;
            // 0x365ec8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365ECCu; }
        if (ctx->pc != 0x365ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365ECCu; }
        if (ctx->pc != 0x365ECCu) { return; }
    }
    ctx->pc = 0x365ECCu;
label_365ecc:
    // 0x365ecc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x365eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_365ed0:
    // 0x365ed0: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x365ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_365ed4:
    // 0x365ed4: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x365ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_365ed8:
    // 0x365ed8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x365ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_365edc:
    // 0x365edc: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x365edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_365ee0:
    // 0x365ee0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x365ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_365ee4:
    // 0x365ee4: 0xc04cc90  jal         func_133240
label_365ee8:
    if (ctx->pc == 0x365EE8u) {
        ctx->pc = 0x365EE8u;
            // 0x365ee8: 0x24460200  addiu       $a2, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->pc = 0x365EECu;
        goto label_365eec;
    }
    ctx->pc = 0x365EE4u;
    SET_GPR_U32(ctx, 31, 0x365EECu);
    ctx->pc = 0x365EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365EE4u;
            // 0x365ee8: 0x24460200  addiu       $a2, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365EECu; }
        if (ctx->pc != 0x365EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365EECu; }
        if (ctx->pc != 0x365EECu) { return; }
    }
    ctx->pc = 0x365EECu;
label_365eec:
    // 0x365eec: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x365eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_365ef0:
    // 0x365ef0: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x365ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
label_365ef4:
    // 0x365ef4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x365ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_365ef8:
    // 0x365ef8: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x365ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_365efc:
    // 0x365efc: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x365efcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_365f00:
    // 0x365f00: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x365f00u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_365f04:
    // 0x365f04: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x365f04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_365f08:
    // 0x365f08: 0x46010044  c1          0x10044
    ctx->pc = 0x365f08u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_365f0c:
    // 0x365f0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x365f0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_365f10:
    // 0x365f10: 0x0  nop
    ctx->pc = 0x365f10u;
    // NOP
label_365f14:
    // 0x365f14: 0x0  nop
    ctx->pc = 0x365f14u;
    // NOP
label_365f18:
    // 0x365f18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x365f18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_365f1c:
    // 0x365f1c: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
label_365f20:
    if (ctx->pc == 0x365F20u) {
        ctx->pc = 0x365F20u;
            // 0x365f20: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x365F24u;
        goto label_365f24;
    }
    ctx->pc = 0x365F1Cu;
    {
        const bool branch_taken_0x365f1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x365f1c) {
            ctx->pc = 0x365F20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x365F1Cu;
            // 0x365f20: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x365F5Cu;
            goto label_365f5c;
        }
    }
    ctx->pc = 0x365F24u;
label_365f24:
    // 0x365f24: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x365f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_365f28:
    // 0x365f28: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x365f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_365f2c:
    // 0x365f2c: 0x8c450e80  lw          $a1, 0xE80($v0)
    ctx->pc = 0x365f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_365f30:
    // 0x365f30: 0x24634b60  addiu       $v1, $v1, 0x4B60
    ctx->pc = 0x365f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19296));
label_365f34:
    // 0x365f34: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x365f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_365f38:
    // 0x365f38: 0x8c4489e8  lw          $a0, -0x7618($v0)
    ctx->pc = 0x365f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_365f3c:
    // 0x365f3c: 0x90a20c6a  lbu         $v0, 0xC6A($a1)
    ctx->pc = 0x365f3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3178)));
label_365f40:
    // 0x365f40: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x365f40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_365f44:
    // 0x365f44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x365f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_365f48:
    // 0x365f48: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x365f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_365f4c:
    // 0x365f4c: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x365f4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_365f50:
    // 0x365f50: 0x320f809  jalr        $t9
label_365f54:
    if (ctx->pc == 0x365F54u) {
        ctx->pc = 0x365F54u;
            // 0x365f54: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x365F58u;
        goto label_365f58;
    }
    ctx->pc = 0x365F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x365F58u);
        ctx->pc = 0x365F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x365F50u;
            // 0x365f54: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x365F58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x365F58u; }
            if (ctx->pc != 0x365F58u) { return; }
        }
        }
    }
    ctx->pc = 0x365F58u;
label_365f58:
    // 0x365f58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x365f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_365f5c:
    // 0x365f5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x365f5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_365f60:
    // 0x365f60: 0x3e00008  jr          $ra
label_365f64:
    if (ctx->pc == 0x365F64u) {
        ctx->pc = 0x365F64u;
            // 0x365f64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x365F68u;
        goto label_365f68;
    }
    ctx->pc = 0x365F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x365F60u;
            // 0x365f64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x365F68u;
label_365f68:
    // 0x365f68: 0x0  nop
    ctx->pc = 0x365f68u;
    // NOP
label_365f6c:
    // 0x365f6c: 0x0  nop
    ctx->pc = 0x365f6cu;
    // NOP
label_365f70:
    // 0x365f70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x365f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_365f74:
    // 0x365f74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x365f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_365f78:
    // 0x365f78: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x365f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_365f7c:
    // 0x365f7c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x365f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_365f80:
    // 0x365f80: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x365f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_365f84:
    // 0x365f84: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x365f84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_365f88:
    // 0x365f88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x365f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_365f8c:
    // 0x365f8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x365f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_365f90:
    // 0x365f90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x365f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_365f94:
    // 0x365f94: 0x8c8400d0  lw          $a0, 0xD0($a0)
    ctx->pc = 0x365f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_365f98:
    // 0x365f98: 0x5083001d  beql        $a0, $v1, . + 4 + (0x1D << 2)
label_365f9c:
    if (ctx->pc == 0x365F9Cu) {
        ctx->pc = 0x365F9Cu;
            // 0x365f9c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x365FA0u;
        goto label_365fa0;
    }
    ctx->pc = 0x365F98u;
    {
        const bool branch_taken_0x365f98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x365f98) {
            ctx->pc = 0x365F9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x365F98u;
            // 0x365f9c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x366010u;
            goto label_366010;
        }
    }
    ctx->pc = 0x365FA0u;
label_365fa0:
    // 0x365fa0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_365fa4:
    if (ctx->pc == 0x365FA4u) {
        ctx->pc = 0x365FA8u;
        goto label_365fa8;
    }
    ctx->pc = 0x365FA0u;
    {
        const bool branch_taken_0x365fa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x365fa0) {
            ctx->pc = 0x365FB0u;
            goto label_365fb0;
        }
    }
    ctx->pc = 0x365FA8u;
label_365fa8:
    // 0x365fa8: 0x10000018  b           . + 4 + (0x18 << 2)
label_365fac:
    if (ctx->pc == 0x365FACu) {
        ctx->pc = 0x365FB0u;
        goto label_365fb0;
    }
    ctx->pc = 0x365FA8u;
    {
        const bool branch_taken_0x365fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x365fa8) {
            ctx->pc = 0x36600Cu;
            goto label_36600c;
        }
    }
    ctx->pc = 0x365FB0u;
label_365fb0:
    // 0x365fb0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x365fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_365fb4:
    // 0x365fb4: 0x8e83009c  lw          $v1, 0x9C($s4)
    ctx->pc = 0x365fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
label_365fb8:
    // 0x365fb8: 0x8c424020  lw          $v0, 0x4020($v0)
    ctx->pc = 0x365fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16416)));
label_365fbc:
    // 0x365fbc: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x365fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_365fc0:
    // 0x365fc0: 0x8c510030  lw          $s1, 0x30($v0)
    ctx->pc = 0x365fc0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_365fc4:
    // 0x365fc4: 0xac71000c  sw          $s1, 0xC($v1)
    ctx->pc = 0x365fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 17));
label_365fc8:
    // 0x365fc8: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x365fc8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_365fcc:
    // 0x365fcc: 0x8c720010  lw          $s2, 0x10($v1)
    ctx->pc = 0x365fccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_365fd0:
    // 0x365fd0: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x365fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_365fd4:
    // 0x365fd4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x365fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_365fd8:
    // 0x365fd8: 0x24a51840  addiu       $a1, $a1, 0x1840
    ctx->pc = 0x365fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6208));
label_365fdc:
    // 0x365fdc: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x365fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_365fe0:
    // 0x365fe0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x365fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_365fe4:
    // 0x365fe4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x365fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_365fe8:
    // 0x365fe8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x365fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_365fec:
    // 0x365fec: 0xc0d615c  jal         func_358570
label_365ff0:
    if (ctx->pc == 0x365FF0u) {
        ctx->pc = 0x365FF0u;
            // 0x365ff0: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x365FF4u;
        goto label_365ff4;
    }
    ctx->pc = 0x365FECu;
    SET_GPR_U32(ctx, 31, 0x365FF4u);
    ctx->pc = 0x365FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365FECu;
            // 0x365ff0: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358570u;
    if (runtime->hasFunction(0x358570u)) {
        auto targetFn = runtime->lookupFunction(0x358570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365FF4u; }
        if (ctx->pc != 0x365FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358570_0x358570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365FF4u; }
        if (ctx->pc != 0x365FF4u) { return; }
    }
    ctx->pc = 0x365FF4u;
label_365ff4:
    // 0x365ff4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x365ff4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_365ff8:
    // 0x365ff8: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x365ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
label_365ffc:
    // 0x365ffc: 0x1e40fff4  bgtz        $s2, . + 4 + (-0xC << 2)
label_366000:
    if (ctx->pc == 0x366000u) {
        ctx->pc = 0x366000u;
            // 0x366000: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x366004u;
        goto label_366004;
    }
    ctx->pc = 0x365FFCu;
    {
        const bool branch_taken_0x365ffc = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x366000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x365FFCu;
            // 0x366000: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365ffc) {
            ctx->pc = 0x365FD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_365fd0;
        }
    }
    ctx->pc = 0x366004u;
label_366004:
    // 0x366004: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x366004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_366008:
    // 0x366008: 0xae8300d0  sw          $v1, 0xD0($s4)
    ctx->pc = 0x366008u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 208), GPR_U32(ctx, 3));
label_36600c:
    // 0x36600c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x36600cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_366010:
    // 0x366010: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x366010u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_366014:
    // 0x366014: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x366014u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_366018:
    // 0x366018: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x366018u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_36601c:
    // 0x36601c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36601cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_366020:
    // 0x366020: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x366020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_366024:
    // 0x366024: 0x3e00008  jr          $ra
label_366028:
    if (ctx->pc == 0x366028u) {
        ctx->pc = 0x366028u;
            // 0x366028: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x36602Cu;
        goto label_36602c;
    }
    ctx->pc = 0x366024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x366024u;
            // 0x366028: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36602Cu;
label_36602c:
    // 0x36602c: 0x0  nop
    ctx->pc = 0x36602cu;
    // NOP
label_366030:
    // 0x366030: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x366030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_366034:
    // 0x366034: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x366034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_366038:
    // 0x366038: 0x3e00008  jr          $ra
label_36603c:
    if (ctx->pc == 0x36603Cu) {
        ctx->pc = 0x36603Cu;
            // 0x36603c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x366040u;
        goto label_366040;
    }
    ctx->pc = 0x366038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36603Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x366038u;
            // 0x36603c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x366040u;
label_366040:
    // 0x366040: 0x3e00008  jr          $ra
label_366044:
    if (ctx->pc == 0x366044u) {
        ctx->pc = 0x366044u;
            // 0x366044: 0x24022efe  addiu       $v0, $zero, 0x2EFE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12030));
        ctx->pc = 0x366048u;
        goto label_366048;
    }
    ctx->pc = 0x366040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x366040u;
            // 0x366044: 0x24022efe  addiu       $v0, $zero, 0x2EFE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12030));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x366048u;
label_366048:
    // 0x366048: 0x0  nop
    ctx->pc = 0x366048u;
    // NOP
label_36604c:
    // 0x36604c: 0x0  nop
    ctx->pc = 0x36604cu;
    // NOP
label_366050:
    // 0x366050: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x366050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_366054:
    // 0x366054: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x366054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_366058:
    // 0x366058: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x366058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_36605c:
    // 0x36605c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36605cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_366060:
    // 0x366060: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x366060u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_366064:
    // 0x366064: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x366064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_366068:
    // 0x366068: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x366068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_36606c:
    // 0x36606c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36606cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_366070:
    // 0x366070: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x366070u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_366074:
    // 0x366074: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_366078:
    if (ctx->pc == 0x366078u) {
        ctx->pc = 0x366078u;
            // 0x366078: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36607Cu;
        goto label_36607c;
    }
    ctx->pc = 0x366074u;
    {
        const bool branch_taken_0x366074 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x366078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x366074u;
            // 0x366078: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366074) {
            ctx->pc = 0x3660B8u;
            goto label_3660b8;
        }
    }
    ctx->pc = 0x36607Cu;
label_36607c:
    // 0x36607c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x36607cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_366080:
    // 0x366080: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x366080u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_366084:
    // 0x366084: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x366084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_366088:
    // 0x366088: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x366088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_36608c:
    // 0x36608c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x36608cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_366090:
    // 0x366090: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x366090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_366094:
    // 0x366094: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x366094u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_366098:
    // 0x366098: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x366098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_36609c:
    // 0x36609c: 0x320f809  jalr        $t9
label_3660a0:
    if (ctx->pc == 0x3660A0u) {
        ctx->pc = 0x3660A4u;
        goto label_3660a4;
    }
    ctx->pc = 0x36609Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3660A4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3660A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3660A4u; }
            if (ctx->pc != 0x3660A4u) { return; }
        }
        }
    }
    ctx->pc = 0x3660A4u;
label_3660a4:
    // 0x3660a4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x3660a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3660a8:
    // 0x3660a8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3660a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3660ac:
    // 0x3660ac: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x3660acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3660b0:
    // 0x3660b0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3660b4:
    if (ctx->pc == 0x3660B4u) {
        ctx->pc = 0x3660B4u;
            // 0x3660b4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3660B8u;
        goto label_3660b8;
    }
    ctx->pc = 0x3660B0u;
    {
        const bool branch_taken_0x3660b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3660B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3660B0u;
            // 0x3660b4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3660b0) {
            ctx->pc = 0x366088u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_366088;
        }
    }
    ctx->pc = 0x3660B8u;
label_3660b8:
    // 0x3660b8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3660b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3660bc:
    // 0x3660bc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3660bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3660c0:
    // 0x3660c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3660c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3660c4:
    // 0x3660c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3660c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3660c8:
    // 0x3660c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3660c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3660cc:
    // 0x3660cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3660ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3660d0:
    // 0x3660d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3660d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3660d4:
    // 0x3660d4: 0x3e00008  jr          $ra
label_3660d8:
    if (ctx->pc == 0x3660D8u) {
        ctx->pc = 0x3660D8u;
            // 0x3660d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3660DCu;
        goto label_3660dc;
    }
    ctx->pc = 0x3660D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3660D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3660D4u;
            // 0x3660d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3660DCu;
label_3660dc:
    // 0x3660dc: 0x0  nop
    ctx->pc = 0x3660dcu;
    // NOP
label_3660e0:
    // 0x3660e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3660e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3660e4:
    // 0x3660e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3660e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3660e8:
    // 0x3660e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3660e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3660ec:
    // 0x3660ec: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x3660ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_3660f0:
    // 0x3660f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3660f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3660f4:
    // 0x3660f4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x3660f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3660f8:
    // 0x3660f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3660f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3660fc:
    // 0x3660fc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x3660fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_366100:
    // 0x366100: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x366100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_366104:
    // 0x366104: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x366104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_366108:
    // 0x366108: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x366108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_36610c:
    // 0x36610c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x36610cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_366110:
    // 0x366110: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x366110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_366114:
    // 0x366114: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x366114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_366118:
    // 0x366118: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x366118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_36611c:
    // 0x36611c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x36611cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_366120:
    // 0x366120: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x366120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_366124:
    // 0x366124: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x366124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_366128:
    // 0x366128: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x366128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_36612c:
    // 0x36612c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x36612cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_366130:
    // 0x366130: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x366130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_366134:
    // 0x366134: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x366134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_366138:
    // 0x366138: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x366138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36613c:
    // 0x36613c: 0xc0a997c  jal         func_2A65F0
label_366140:
    if (ctx->pc == 0x366140u) {
        ctx->pc = 0x366140u;
            // 0x366140: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x366144u;
        goto label_366144;
    }
    ctx->pc = 0x36613Cu;
    SET_GPR_U32(ctx, 31, 0x366144u);
    ctx->pc = 0x366140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36613Cu;
            // 0x366140: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366144u; }
        if (ctx->pc != 0x366144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366144u; }
        if (ctx->pc != 0x366144u) { return; }
    }
    ctx->pc = 0x366144u;
label_366144:
    // 0x366144: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x366144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_366148:
    // 0x366148: 0xc0d879c  jal         func_361E70
label_36614c:
    if (ctx->pc == 0x36614Cu) {
        ctx->pc = 0x36614Cu;
            // 0x36614c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x366150u;
        goto label_366150;
    }
    ctx->pc = 0x366148u;
    SET_GPR_U32(ctx, 31, 0x366150u);
    ctx->pc = 0x36614Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366148u;
            // 0x36614c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366150u; }
        if (ctx->pc != 0x366150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366150u; }
        if (ctx->pc != 0x366150u) { return; }
    }
    ctx->pc = 0x366150u;
label_366150:
    // 0x366150: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x366150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_366154:
    // 0x366154: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x366154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_366158:
    // 0x366158: 0x3e00008  jr          $ra
label_36615c:
    if (ctx->pc == 0x36615Cu) {
        ctx->pc = 0x36615Cu;
            // 0x36615c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x366160u;
        goto label_366160;
    }
    ctx->pc = 0x366158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36615Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x366158u;
            // 0x36615c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x366160u;
label_366160:
    // 0x366160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x366160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_366164:
    // 0x366164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x366164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_366168:
    // 0x366168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x366168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36616c:
    // 0x36616c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x36616cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_366170:
    // 0x366170: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_366174:
    if (ctx->pc == 0x366174u) {
        ctx->pc = 0x366174u;
            // 0x366174: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x366178u;
        goto label_366178;
    }
    ctx->pc = 0x366170u;
    {
        const bool branch_taken_0x366170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x366174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x366170u;
            // 0x366174: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366170) {
            ctx->pc = 0x366290u;
            goto label_366290;
        }
    }
    ctx->pc = 0x366178u;
label_366178:
    // 0x366178: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x366178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_36617c:
    // 0x36617c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x36617cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_366180:
    // 0x366180: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x366180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_366184:
    // 0x366184: 0xc075128  jal         func_1D44A0
label_366188:
    if (ctx->pc == 0x366188u) {
        ctx->pc = 0x366188u;
            // 0x366188: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x36618Cu;
        goto label_36618c;
    }
    ctx->pc = 0x366184u;
    SET_GPR_U32(ctx, 31, 0x36618Cu);
    ctx->pc = 0x366188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366184u;
            // 0x366188: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36618Cu; }
        if (ctx->pc != 0x36618Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36618Cu; }
        if (ctx->pc != 0x36618Cu) { return; }
    }
    ctx->pc = 0x36618Cu;
label_36618c:
    // 0x36618c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x36618cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_366190:
    // 0x366190: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x366190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_366194:
    // 0x366194: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x366194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_366198:
    // 0x366198: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x366198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_36619c:
    // 0x36619c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x36619cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3661a0:
    // 0x3661a0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3661a4:
    if (ctx->pc == 0x3661A4u) {
        ctx->pc = 0x3661A4u;
            // 0x3661a4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x3661A8u;
        goto label_3661a8;
    }
    ctx->pc = 0x3661A0u;
    {
        const bool branch_taken_0x3661a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3661A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3661A0u;
            // 0x3661a4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3661a0) {
            ctx->pc = 0x3661B0u;
            goto label_3661b0;
        }
    }
    ctx->pc = 0x3661A8u;
label_3661a8:
    // 0x3661a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3661a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3661ac:
    // 0x3661ac: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x3661acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_3661b0:
    // 0x3661b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3661b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3661b4:
    // 0x3661b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3661b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3661b8:
    // 0x3661b8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x3661b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_3661bc:
    // 0x3661bc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3661bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3661c0:
    // 0x3661c0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3661c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3661c4:
    // 0x3661c4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3661c8:
    if (ctx->pc == 0x3661C8u) {
        ctx->pc = 0x3661C8u;
            // 0x3661c8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3661CCu;
        goto label_3661cc;
    }
    ctx->pc = 0x3661C4u;
    {
        const bool branch_taken_0x3661c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3661c4) {
            ctx->pc = 0x3661C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3661C4u;
            // 0x3661c8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3661D8u;
            goto label_3661d8;
        }
    }
    ctx->pc = 0x3661CCu;
label_3661cc:
    // 0x3661cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3661ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3661d0:
    // 0x3661d0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x3661d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_3661d4:
    // 0x3661d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3661d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3661d8:
    // 0x3661d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3661d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3661dc:
    // 0x3661dc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x3661dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_3661e0:
    // 0x3661e0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3661e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3661e4:
    // 0x3661e4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3661e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3661e8:
    // 0x3661e8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3661ec:
    if (ctx->pc == 0x3661ECu) {
        ctx->pc = 0x3661ECu;
            // 0x3661ec: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3661F0u;
        goto label_3661f0;
    }
    ctx->pc = 0x3661E8u;
    {
        const bool branch_taken_0x3661e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3661e8) {
            ctx->pc = 0x3661ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3661E8u;
            // 0x3661ec: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3661FCu;
            goto label_3661fc;
        }
    }
    ctx->pc = 0x3661F0u;
label_3661f0:
    // 0x3661f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3661f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3661f4:
    // 0x3661f4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x3661f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_3661f8:
    // 0x3661f8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3661f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3661fc:
    // 0x3661fc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3661fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_366200:
    // 0x366200: 0x320f809  jalr        $t9
label_366204:
    if (ctx->pc == 0x366204u) {
        ctx->pc = 0x366204u;
            // 0x366204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x366208u;
        goto label_366208;
    }
    ctx->pc = 0x366200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x366208u);
        ctx->pc = 0x366204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x366200u;
            // 0x366204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x366208u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x366208u; }
            if (ctx->pc != 0x366208u) { return; }
        }
        }
    }
    ctx->pc = 0x366208u;
label_366208:
    // 0x366208: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x366208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_36620c:
    // 0x36620c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36620cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_366210:
    // 0x366210: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x366210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_366214:
    // 0x366214: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x366214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_366218:
    // 0x366218: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x366218u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_36621c:
    // 0x36621c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x36621cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_366220:
    // 0x366220: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_366224:
    if (ctx->pc == 0x366224u) {
        ctx->pc = 0x366224u;
            // 0x366224: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x366228u;
        goto label_366228;
    }
    ctx->pc = 0x366220u;
    {
        const bool branch_taken_0x366220 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x366220) {
            ctx->pc = 0x366224u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x366220u;
            // 0x366224: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x366234u;
            goto label_366234;
        }
    }
    ctx->pc = 0x366228u;
label_366228:
    // 0x366228: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x366228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36622c:
    // 0x36622c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x36622cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_366230:
    // 0x366230: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x366230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_366234:
    // 0x366234: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x366234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_366238:
    // 0x366238: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x366238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_36623c:
    // 0x36623c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x36623cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_366240:
    // 0x366240: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x366240u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_366244:
    // 0x366244: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x366244u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_366248:
    // 0x366248: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_36624c:
    if (ctx->pc == 0x36624Cu) {
        ctx->pc = 0x366250u;
        goto label_366250;
    }
    ctx->pc = 0x366248u;
    {
        const bool branch_taken_0x366248 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x366248) {
            ctx->pc = 0x366258u;
            goto label_366258;
        }
    }
    ctx->pc = 0x366250u;
label_366250:
    // 0x366250: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x366250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_366254:
    // 0x366254: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x366254u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_366258:
    // 0x366258: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x366258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36625c:
    // 0x36625c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x36625cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_366260:
    // 0x366260: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x366260u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_366264:
    // 0x366264: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_366268:
    if (ctx->pc == 0x366268u) {
        ctx->pc = 0x36626Cu;
        goto label_36626c;
    }
    ctx->pc = 0x366264u;
    {
        const bool branch_taken_0x366264 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x366264) {
            ctx->pc = 0x366274u;
            goto label_366274;
        }
    }
    ctx->pc = 0x36626Cu;
label_36626c:
    // 0x36626c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36626cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_366270:
    // 0x366270: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x366270u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_366274:
    // 0x366274: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x366274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_366278:
    // 0x366278: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x366278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_36627c:
    // 0x36627c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x36627cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_366280:
    // 0x366280: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_366284:
    if (ctx->pc == 0x366284u) {
        ctx->pc = 0x366284u;
            // 0x366284: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x366288u;
        goto label_366288;
    }
    ctx->pc = 0x366280u;
    {
        const bool branch_taken_0x366280 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x366280) {
            ctx->pc = 0x366284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x366280u;
            // 0x366284: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x366294u;
            goto label_366294;
        }
    }
    ctx->pc = 0x366288u;
label_366288:
    // 0x366288: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x366288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36628c:
    // 0x36628c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x36628cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_366290:
    // 0x366290: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x366290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_366294:
    // 0x366294: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x366294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_366298:
    // 0x366298: 0x3e00008  jr          $ra
label_36629c:
    if (ctx->pc == 0x36629Cu) {
        ctx->pc = 0x36629Cu;
            // 0x36629c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3662A0u;
        goto label_3662a0;
    }
    ctx->pc = 0x366298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36629Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x366298u;
            // 0x36629c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3662A0u;
label_3662a0:
    // 0x3662a0: 0x80d9540  j           func_365500
label_3662a4:
    if (ctx->pc == 0x3662A4u) {
        ctx->pc = 0x3662A4u;
            // 0x3662a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3662A8u;
        goto label_3662a8;
    }
    ctx->pc = 0x3662A0u;
    ctx->pc = 0x3662A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3662A0u;
            // 0x3662a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x365500u;
    {
        auto targetFn = runtime->lookupFunction(0x365500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3662A8u;
label_3662a8:
    // 0x3662a8: 0x0  nop
    ctx->pc = 0x3662a8u;
    // NOP
label_3662ac:
    // 0x3662ac: 0x0  nop
    ctx->pc = 0x3662acu;
    // NOP
label_3662b0:
    // 0x3662b0: 0x80d92fc  j           func_364BF0
label_3662b4:
    if (ctx->pc == 0x3662B4u) {
        ctx->pc = 0x3662B4u;
            // 0x3662b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3662B8u;
        goto label_3662b8;
    }
    ctx->pc = 0x3662B0u;
    ctx->pc = 0x3662B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3662B0u;
            // 0x3662b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x364BF0u;
    if (runtime->hasFunction(0x364BF0u)) {
        auto targetFn = runtime->lookupFunction(0x364BF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00364BF0_0x364bf0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3662B8u;
label_3662b8:
    // 0x3662b8: 0x0  nop
    ctx->pc = 0x3662b8u;
    // NOP
label_3662bc:
    // 0x3662bc: 0x0  nop
    ctx->pc = 0x3662bcu;
    // NOP
label_3662c0:
    // 0x3662c0: 0x80d9354  j           func_364D50
label_3662c4:
    if (ctx->pc == 0x3662C4u) {
        ctx->pc = 0x3662C4u;
            // 0x3662c4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x3662C8u;
        goto label_3662c8;
    }
    ctx->pc = 0x3662C0u;
    ctx->pc = 0x3662C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3662C0u;
            // 0x3662c4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x364D50u;
    {
        auto targetFn = runtime->lookupFunction(0x364D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3662C8u;
label_3662c8:
    // 0x3662c8: 0x0  nop
    ctx->pc = 0x3662c8u;
    // NOP
label_3662cc:
    // 0x3662cc: 0x0  nop
    ctx->pc = 0x3662ccu;
    // NOP
label_3662d0:
    // 0x3662d0: 0x80d92d8  j           func_364B60
label_3662d4:
    if (ctx->pc == 0x3662D4u) {
        ctx->pc = 0x3662D4u;
            // 0x3662d4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3662D8u;
        goto label_3662d8;
    }
    ctx->pc = 0x3662D0u;
    ctx->pc = 0x3662D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3662D0u;
            // 0x3662d4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x364B60u;
    {
        auto targetFn = runtime->lookupFunction(0x364B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3662D8u;
label_3662d8:
    // 0x3662d8: 0x0  nop
    ctx->pc = 0x3662d8u;
    // NOP
label_3662dc:
    // 0x3662dc: 0x0  nop
    ctx->pc = 0x3662dcu;
    // NOP
label_3662e0:
    // 0x3662e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3662e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3662e4:
    // 0x3662e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3662e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3662e8:
    // 0x3662e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3662e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3662ec:
    // 0x3662ec: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x3662ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3662f0:
    // 0x3662f0: 0x80c40018  lb          $a0, 0x18($a2)
    ctx->pc = 0x3662f0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 24)));
label_3662f4:
    // 0x3662f4: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_3662f8:
    if (ctx->pc == 0x3662F8u) {
        ctx->pc = 0x3662F8u;
            // 0x3662f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3662FCu;
        goto label_3662fc;
    }
    ctx->pc = 0x3662F4u;
    {
        const bool branch_taken_0x3662f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3662f4) {
            ctx->pc = 0x3662F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3662F4u;
            // 0x3662f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x366304u;
            goto label_366304;
        }
    }
    ctx->pc = 0x3662FCu;
label_3662fc:
    // 0x3662fc: 0x80c30010  lb          $v1, 0x10($a2)
    ctx->pc = 0x3662fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
label_366300:
    // 0x366300: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x366300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_366304:
    // 0x366304: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x366304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_366308:
    // 0x366308: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_36630c:
    if (ctx->pc == 0x36630Cu) {
        ctx->pc = 0x36630Cu;
            // 0x36630c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x366310u;
        goto label_366310;
    }
    ctx->pc = 0x366308u;
    {
        const bool branch_taken_0x366308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x366308) {
            ctx->pc = 0x36630Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x366308u;
            // 0x36630c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x366324u;
            goto label_366324;
        }
    }
    ctx->pc = 0x366310u;
label_366310:
    // 0x366310: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x366310u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_366314:
    // 0x366314: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x366314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_366318:
    // 0x366318: 0x320f809  jalr        $t9
label_36631c:
    if (ctx->pc == 0x36631Cu) {
        ctx->pc = 0x366320u;
        goto label_366320;
    }
    ctx->pc = 0x366318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x366320u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x366320u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x366320u; }
            if (ctx->pc != 0x366320u) { return; }
        }
        }
    }
    ctx->pc = 0x366320u;
label_366320:
    // 0x366320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x366320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_366324:
    // 0x366324: 0x3e00008  jr          $ra
label_366328:
    if (ctx->pc == 0x366328u) {
        ctx->pc = 0x366328u;
            // 0x366328: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x36632Cu;
        goto label_36632c;
    }
    ctx->pc = 0x366324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x366324u;
            // 0x366328: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36632Cu;
label_36632c:
    // 0x36632c: 0x0  nop
    ctx->pc = 0x36632cu;
    // NOP
label_366330:
    // 0x366330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x366330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_366334:
    // 0x366334: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x366334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_366338:
    // 0x366338: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x366338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_36633c:
    // 0x36633c: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x36633cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_366340:
    // 0x366340: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_366344:
    if (ctx->pc == 0x366344u) {
        ctx->pc = 0x366344u;
            // 0x366344: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x366348u;
        goto label_366348;
    }
    ctx->pc = 0x366340u;
    {
        const bool branch_taken_0x366340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x366340) {
            ctx->pc = 0x366344u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x366340u;
            // 0x366344: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36635Cu;
            goto label_36635c;
        }
    }
    ctx->pc = 0x366348u;
label_366348:
    // 0x366348: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x366348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36634c:
    // 0x36634c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x36634cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_366350:
    // 0x366350: 0x320f809  jalr        $t9
label_366354:
    if (ctx->pc == 0x366354u) {
        ctx->pc = 0x366358u;
        goto label_366358;
    }
    ctx->pc = 0x366350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x366358u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x366358u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x366358u; }
            if (ctx->pc != 0x366358u) { return; }
        }
        }
    }
    ctx->pc = 0x366358u;
label_366358:
    // 0x366358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x366358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36635c:
    // 0x36635c: 0x3e00008  jr          $ra
label_366360:
    if (ctx->pc == 0x366360u) {
        ctx->pc = 0x366360u;
            // 0x366360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x366364u;
        goto label_366364;
    }
    ctx->pc = 0x36635Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36635Cu;
            // 0x366360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x366364u;
label_366364:
    // 0x366364: 0x0  nop
    ctx->pc = 0x366364u;
    // NOP
label_366368:
    // 0x366368: 0x0  nop
    ctx->pc = 0x366368u;
    // NOP
label_36636c:
    // 0x36636c: 0x0  nop
    ctx->pc = 0x36636cu;
    // NOP
label_366370:
    // 0x366370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x366370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_366374:
    // 0x366374: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x366374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_366378:
    // 0x366378: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x366378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_36637c:
    // 0x36637c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x36637cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_366380:
    // 0x366380: 0x80c40018  lb          $a0, 0x18($a2)
    ctx->pc = 0x366380u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 24)));
label_366384:
    // 0x366384: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_366388:
    if (ctx->pc == 0x366388u) {
        ctx->pc = 0x366388u;
            // 0x366388: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36638Cu;
        goto label_36638c;
    }
    ctx->pc = 0x366384u;
    {
        const bool branch_taken_0x366384 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x366384) {
            ctx->pc = 0x366388u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x366384u;
            // 0x366388: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x366394u;
            goto label_366394;
        }
    }
    ctx->pc = 0x36638Cu;
label_36638c:
    // 0x36638c: 0x80c30010  lb          $v1, 0x10($a2)
    ctx->pc = 0x36638cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
label_366390:
    // 0x366390: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x366390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_366394:
    // 0x366394: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x366394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_366398:
    // 0x366398: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_36639c:
    if (ctx->pc == 0x36639Cu) {
        ctx->pc = 0x36639Cu;
            // 0x36639c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3663A0u;
        goto label_3663a0;
    }
    ctx->pc = 0x366398u;
    {
        const bool branch_taken_0x366398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x366398) {
            ctx->pc = 0x36639Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x366398u;
            // 0x36639c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3663B4u;
            goto label_3663b4;
        }
    }
    ctx->pc = 0x3663A0u;
label_3663a0:
    // 0x3663a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3663a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3663a4:
    // 0x3663a4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3663a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3663a8:
    // 0x3663a8: 0x320f809  jalr        $t9
label_3663ac:
    if (ctx->pc == 0x3663ACu) {
        ctx->pc = 0x3663B0u;
        goto label_3663b0;
    }
    ctx->pc = 0x3663A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3663B0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3663B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3663B0u; }
            if (ctx->pc != 0x3663B0u) { return; }
        }
        }
    }
    ctx->pc = 0x3663B0u;
label_3663b0:
    // 0x3663b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3663b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3663b4:
    // 0x3663b4: 0x3e00008  jr          $ra
label_3663b8:
    if (ctx->pc == 0x3663B8u) {
        ctx->pc = 0x3663B8u;
            // 0x3663b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3663BCu;
        goto label_3663bc;
    }
    ctx->pc = 0x3663B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3663B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3663B4u;
            // 0x3663b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3663BCu;
label_3663bc:
    // 0x3663bc: 0x0  nop
    ctx->pc = 0x3663bcu;
    // NOP
label_3663c0:
    // 0x3663c0: 0x3e00008  jr          $ra
label_3663c4:
    if (ctx->pc == 0x3663C4u) {
        ctx->pc = 0x3663C8u;
        goto label_3663c8;
    }
    ctx->pc = 0x3663C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3663C8u;
label_3663c8:
    // 0x3663c8: 0x0  nop
    ctx->pc = 0x3663c8u;
    // NOP
label_3663cc:
    // 0x3663cc: 0x0  nop
    ctx->pc = 0x3663ccu;
    // NOP
label_3663d0:
    // 0x3663d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3663d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3663d4:
    // 0x3663d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3663d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3663d8:
    // 0x3663d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3663d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3663dc:
    // 0x3663dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3663dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3663e0:
    // 0x3663e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3663e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3663e4:
    // 0x3663e4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3663e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3663e8:
    // 0x3663e8: 0x8c900018  lw          $s0, 0x18($a0)
    ctx->pc = 0x3663e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_3663ec:
    // 0x3663ec: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x3663ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_3663f0:
    // 0x3663f0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3663f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3663f4:
    // 0x3663f4: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_3663f8:
    if (ctx->pc == 0x3663F8u) {
        ctx->pc = 0x3663F8u;
            // 0x3663f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3663FCu;
        goto label_3663fc;
    }
    ctx->pc = 0x3663F4u;
    {
        const bool branch_taken_0x3663f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3663F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3663F4u;
            // 0x3663f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3663f4) {
            ctx->pc = 0x36646Cu;
            goto label_36646c;
        }
    }
    ctx->pc = 0x3663FCu;
label_3663fc:
    // 0x3663fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3663fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_366400:
    // 0x366400: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x366400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_366404:
    // 0x366404: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x366404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_366408:
    // 0x366408: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x366408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_36640c:
    // 0x36640c: 0xc089638  jal         func_2258E0
label_366410:
    if (ctx->pc == 0x366410u) {
        ctx->pc = 0x366410u;
            // 0x366410: 0x24520010  addiu       $s2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x366414u;
        goto label_366414;
    }
    ctx->pc = 0x36640Cu;
    SET_GPR_U32(ctx, 31, 0x366414u);
    ctx->pc = 0x366410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36640Cu;
            // 0x366410: 0x24520010  addiu       $s2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2258E0u;
    if (runtime->hasFunction(0x2258E0u)) {
        auto targetFn = runtime->lookupFunction(0x2258E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366414u; }
        if (ctx->pc != 0x366414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002258E0_0x2258e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366414u; }
        if (ctx->pc != 0x366414u) { return; }
    }
    ctx->pc = 0x366414u;
label_366414:
    // 0x366414: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x366414u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_366418:
    // 0x366418: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x366418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36641c:
    // 0x36641c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x36641cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_366420:
    // 0x366420: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x366420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_366424:
    // 0x366424: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x366424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_366428:
    // 0x366428: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x366428u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_36642c:
    // 0x36642c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x36642cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_366430:
    // 0x366430: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x366430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_366434:
    // 0x366434: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x366434u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_366438:
    // 0x366438: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x366438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_36643c:
    // 0x36643c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x36643cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_366440:
    // 0x366440: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x366440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_366444:
    // 0x366444: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x366444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_366448:
    // 0x366448: 0xc6340008  lwc1        $f20, 0x8($s1)
    ctx->pc = 0x366448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_36644c:
    // 0x36644c: 0xc088b74  jal         func_222DD0
label_366450:
    if (ctx->pc == 0x366450u) {
        ctx->pc = 0x366450u;
            // 0x366450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x366454u;
        goto label_366454;
    }
    ctx->pc = 0x36644Cu;
    SET_GPR_U32(ctx, 31, 0x366454u);
    ctx->pc = 0x366450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36644Cu;
            // 0x366450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366454u; }
        if (ctx->pc != 0x366454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366454u; }
        if (ctx->pc != 0x366454u) { return; }
    }
    ctx->pc = 0x366454u;
label_366454:
    // 0x366454: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x366454u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_366458:
    // 0x366458: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x366458u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_36645c:
    // 0x36645c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x36645cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_366460:
    // 0x366460: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x366460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_366464:
    // 0x366464: 0x320f809  jalr        $t9
label_366468:
    if (ctx->pc == 0x366468u) {
        ctx->pc = 0x366468u;
            // 0x366468: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x36646Cu;
        goto label_36646c;
    }
    ctx->pc = 0x366464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36646Cu);
        ctx->pc = 0x366468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x366464u;
            // 0x366468: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36646Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36646Cu; }
            if (ctx->pc != 0x36646Cu) { return; }
        }
        }
    }
    ctx->pc = 0x36646Cu;
label_36646c:
    // 0x36646c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x36646cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_366470:
    // 0x366470: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x366470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_366474:
    // 0x366474: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x366474u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_366478:
    // 0x366478: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x366478u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_36647c:
    // 0x36647c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x36647cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_366480:
    // 0x366480: 0x3e00008  jr          $ra
label_366484:
    if (ctx->pc == 0x366484u) {
        ctx->pc = 0x366484u;
            // 0x366484: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x366488u;
        goto label_366488;
    }
    ctx->pc = 0x366480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x366480u;
            // 0x366484: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x366488u;
label_366488:
    // 0x366488: 0x0  nop
    ctx->pc = 0x366488u;
    // NOP
label_36648c:
    // 0x36648c: 0x0  nop
    ctx->pc = 0x36648cu;
    // NOP
label_366490:
    // 0x366490: 0x3e00008  jr          $ra
label_366494:
    if (ctx->pc == 0x366494u) {
        ctx->pc = 0x366494u;
            // 0x366494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x366498u;
        goto label_366498;
    }
    ctx->pc = 0x366490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x366490u;
            // 0x366494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x366498u;
label_366498:
    // 0x366498: 0x0  nop
    ctx->pc = 0x366498u;
    // NOP
label_36649c:
    // 0x36649c: 0x0  nop
    ctx->pc = 0x36649cu;
    // NOP
label_3664a0:
    // 0x3664a0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x3664a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_3664a4:
    // 0x3664a4: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x3664a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
label_3664a8:
    // 0x3664a8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3664a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3664ac:
    // 0x3664ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3664acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3664b0:
    // 0x3664b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3664b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3664b4:
    // 0x3664b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3664b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3664b8:
    // 0x3664b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3664b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3664bc:
    // 0x3664bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3664bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3664c0:
    // 0x3664c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3664c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3664c4:
    // 0x3664c4: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x3664c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_3664c8:
    // 0x3664c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3664c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3664cc:
    // 0x3664cc: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x3664ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_3664d0:
    // 0x3664d0: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x3664d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_3664d4:
    // 0x3664d4: 0x10600084  beqz        $v1, . + 4 + (0x84 << 2)
label_3664d8:
    if (ctx->pc == 0x3664D8u) {
        ctx->pc = 0x3664D8u;
            // 0x3664d8: 0xac850054  sw          $a1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 5));
        ctx->pc = 0x3664DCu;
        goto label_3664dc;
    }
    ctx->pc = 0x3664D4u;
    {
        const bool branch_taken_0x3664d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3664D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3664D4u;
            // 0x3664d8: 0xac850054  sw          $a1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3664d4) {
            ctx->pc = 0x3666E8u;
            goto label_3666e8;
        }
    }
    ctx->pc = 0x3664DCu;
label_3664dc:
    // 0x3664dc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3664dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3664e0:
    // 0x3664e0: 0x8c4318c8  lw          $v1, 0x18C8($v0)
    ctx->pc = 0x3664e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6344)));
label_3664e4:
    // 0x3664e4: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x3664e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3664e8:
    // 0x3664e8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_3664ec:
    if (ctx->pc == 0x3664ECu) {
        ctx->pc = 0x3664ECu;
            // 0x3664ec: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3664F0u;
        goto label_3664f0;
    }
    ctx->pc = 0x3664E8u;
    {
        const bool branch_taken_0x3664e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3664ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3664E8u;
            // 0x3664ec: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3664e8) {
            ctx->pc = 0x3664F4u;
            goto label_3664f4;
        }
    }
    ctx->pc = 0x3664F0u;
label_3664f0:
    // 0x3664f0: 0x64140001  daddiu      $s4, $zero, 0x1
    ctx->pc = 0x3664f0u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3664f4:
    // 0x3664f4: 0x30a20100  andi        $v0, $a1, 0x100
    ctx->pc = 0x3664f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
label_3664f8:
    // 0x3664f8: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
label_3664fc:
    if (ctx->pc == 0x3664FCu) {
        ctx->pc = 0x3664FCu;
            // 0x3664fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x366500u;
        goto label_366500;
    }
    ctx->pc = 0x3664F8u;
    {
        const bool branch_taken_0x3664f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3664f8) {
            ctx->pc = 0x3664FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3664F8u;
            // 0x3664fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3665BCu;
            goto label_3665bc;
        }
    }
    ctx->pc = 0x366500u;
label_366500:
    // 0x366500: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x366500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_366504:
    // 0x366504: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x366504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_366508:
    // 0x366508: 0x960401da  lhu         $a0, 0x1DA($s0)
    ctx->pc = 0x366508u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 474)));
label_36650c:
    // 0x36650c: 0x24634680  addiu       $v1, $v1, 0x4680
    ctx->pc = 0x36650cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18048));
label_366510:
    // 0x366510: 0x8c53e360  lw          $s3, -0x1CA0($v0)
    ctx->pc = 0x366510u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_366514:
    // 0x366514: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x366514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_366518:
    // 0x366518: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x366518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_36651c:
    // 0x36651c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x36651cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_366520:
    // 0x366520: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x366520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_366524:
    // 0x366524: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x366524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
label_366528:
    // 0x366528: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_36652c:
    if (ctx->pc == 0x36652Cu) {
        ctx->pc = 0x36652Cu;
            // 0x36652c: 0x861101dc  lh          $s1, 0x1DC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 476)));
        ctx->pc = 0x366530u;
        goto label_366530;
    }
    ctx->pc = 0x366528u;
    {
        const bool branch_taken_0x366528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36652Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x366528u;
            // 0x36652c: 0x861101dc  lh          $s1, 0x1DC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366528) {
            ctx->pc = 0x366538u;
            goto label_366538;
        }
    }
    ctx->pc = 0x366530u;
label_366530:
    // 0x366530: 0x10000006  b           . + 4 + (0x6 << 2)
label_366534:
    if (ctx->pc == 0x366534u) {
        ctx->pc = 0x366534u;
            // 0x366534: 0x8c860194  lw          $a2, 0x194($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 404)));
        ctx->pc = 0x366538u;
        goto label_366538;
    }
    ctx->pc = 0x366530u;
    {
        const bool branch_taken_0x366530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x366534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x366530u;
            // 0x366534: 0x8c860194  lw          $a2, 0x194($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366530) {
            ctx->pc = 0x36654Cu;
            goto label_36654c;
        }
    }
    ctx->pc = 0x366538u;
label_366538:
    // 0x366538: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x366538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_36653c:
    // 0x36653c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_366540:
    if (ctx->pc == 0x366540u) {
        ctx->pc = 0x366540u;
            // 0x366540: 0x30624800  andi        $v0, $v1, 0x4800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)18432);
        ctx->pc = 0x366544u;
        goto label_366544;
    }
    ctx->pc = 0x36653Cu;
    {
        const bool branch_taken_0x36653c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36653c) {
            ctx->pc = 0x366540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36653Cu;
            // 0x366540: 0x30624800  andi        $v0, $v1, 0x4800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)18432);
        ctx->in_delay_slot = false;
            ctx->pc = 0x366550u;
            goto label_366550;
        }
    }
    ctx->pc = 0x366544u;
label_366544:
    // 0x366544: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x366544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_366548:
    // 0x366548: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x366548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_36654c:
    // 0x36654c: 0x30624800  andi        $v0, $v1, 0x4800
    ctx->pc = 0x36654cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)18432);
label_366550:
    // 0x366550: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_366554:
    if (ctx->pc == 0x366554u) {
        ctx->pc = 0x366558u;
        goto label_366558;
    }
    ctx->pc = 0x366550u;
    {
        const bool branch_taken_0x366550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x366550) {
            ctx->pc = 0x366588u;
            goto label_366588;
        }
    }
    ctx->pc = 0x366558u;
label_366558:
    // 0x366558: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x366558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_36655c:
    // 0x36655c: 0xc48c01cc  lwc1        $f12, 0x1CC($a0)
    ctx->pc = 0x36655cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_366560:
    // 0x366560: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x366560u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_366564:
    // 0x366564: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x366564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_366568:
    // 0x366568: 0xc0528ec  jal         func_14A3B0
label_36656c:
    if (ctx->pc == 0x36656Cu) {
        ctx->pc = 0x36656Cu;
            // 0x36656c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x366570u;
        goto label_366570;
    }
    ctx->pc = 0x366568u;
    SET_GPR_U32(ctx, 31, 0x366570u);
    ctx->pc = 0x36656Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366568u;
            // 0x36656c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A3B0u;
    if (runtime->hasFunction(0x14A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x14A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366570u; }
        if (ctx->pc != 0x366570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014A3B0_0x14a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366570u; }
        if (ctx->pc != 0x366570u) { return; }
    }
    ctx->pc = 0x366570u;
label_366570:
    // 0x366570: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x366570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
label_366574:
    // 0x366574: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x366574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_366578:
    // 0x366578: 0xc04cce8  jal         func_1333A0
label_36657c:
    if (ctx->pc == 0x36657Cu) {
        ctx->pc = 0x36657Cu;
            // 0x36657c: 0x2622821  addu        $a1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->pc = 0x366580u;
        goto label_366580;
    }
    ctx->pc = 0x366578u;
    SET_GPR_U32(ctx, 31, 0x366580u);
    ctx->pc = 0x36657Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366578u;
            // 0x36657c: 0x2622821  addu        $a1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366580u; }
        if (ctx->pc != 0x366580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366580u; }
        if (ctx->pc != 0x366580u) { return; }
    }
    ctx->pc = 0x366580u;
label_366580:
    // 0x366580: 0x10000006  b           . + 4 + (0x6 << 2)
label_366584:
    if (ctx->pc == 0x366584u) {
        ctx->pc = 0x366584u;
            // 0x366584: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x366588u;
        goto label_366588;
    }
    ctx->pc = 0x366580u;
    {
        const bool branch_taken_0x366580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x366584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x366580u;
            // 0x366584: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366580) {
            ctx->pc = 0x36659Cu;
            goto label_36659c;
        }
    }
    ctx->pc = 0x366588u;
label_366588:
    // 0x366588: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x366588u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_36658c:
    // 0x36658c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x36658cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_366590:
    // 0x366590: 0xc04cce8  jal         func_1333A0
label_366594:
    if (ctx->pc == 0x366594u) {
        ctx->pc = 0x366594u;
            // 0x366594: 0x24a54c10  addiu       $a1, $a1, 0x4C10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19472));
        ctx->pc = 0x366598u;
        goto label_366598;
    }
    ctx->pc = 0x366590u;
    SET_GPR_U32(ctx, 31, 0x366598u);
    ctx->pc = 0x366594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366590u;
            // 0x366594: 0x24a54c10  addiu       $a1, $a1, 0x4C10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366598u; }
        if (ctx->pc != 0x366598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366598u; }
        if (ctx->pc != 0x366598u) { return; }
    }
    ctx->pc = 0x366598u;
label_366598:
    // 0x366598: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x366598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_36659c:
    // 0x36659c: 0x260600c0  addiu       $a2, $s0, 0xC0
    ctx->pc = 0x36659cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_3665a0:
    // 0x3665a0: 0xc04cd60  jal         func_133580
label_3665a4:
    if (ctx->pc == 0x3665A4u) {
        ctx->pc = 0x3665A4u;
            // 0x3665a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3665A8u;
        goto label_3665a8;
    }
    ctx->pc = 0x3665A0u;
    SET_GPR_U32(ctx, 31, 0x3665A8u);
    ctx->pc = 0x3665A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3665A0u;
            // 0x3665a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3665A8u; }
        if (ctx->pc != 0x3665A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3665A8u; }
        if (ctx->pc != 0x3665A8u) { return; }
    }
    ctx->pc = 0x3665A8u;
label_3665a8:
    // 0x3665a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3665a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3665ac:
    // 0x3665ac: 0xc0d99c4  jal         func_366710
label_3665b0:
    if (ctx->pc == 0x3665B0u) {
        ctx->pc = 0x3665B0u;
            // 0x3665b0: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3665B4u;
        goto label_3665b4;
    }
    ctx->pc = 0x3665ACu;
    SET_GPR_U32(ctx, 31, 0x3665B4u);
    ctx->pc = 0x3665B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3665ACu;
            // 0x3665b0: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x366710u;
    if (runtime->hasFunction(0x366710u)) {
        auto targetFn = runtime->lookupFunction(0x366710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3665B4u; }
        if (ctx->pc != 0x3665B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00366710_0x366710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3665B4u; }
        if (ctx->pc != 0x3665B4u) { return; }
    }
    ctx->pc = 0x3665B4u;
label_3665b4:
    // 0x3665b4: 0x10000003  b           . + 4 + (0x3 << 2)
label_3665b8:
    if (ctx->pc == 0x3665B8u) {
        ctx->pc = 0x3665BCu;
        goto label_3665bc;
    }
    ctx->pc = 0x3665B4u;
    {
        const bool branch_taken_0x3665b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3665b4) {
            ctx->pc = 0x3665C4u;
            goto label_3665c4;
        }
    }
    ctx->pc = 0x3665BCu;
label_3665bc:
    // 0x3665bc: 0xc0d99c4  jal         func_366710
label_3665c0:
    if (ctx->pc == 0x3665C0u) {
        ctx->pc = 0x3665C0u;
            // 0x3665c0: 0x260500c0  addiu       $a1, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->pc = 0x3665C4u;
        goto label_3665c4;
    }
    ctx->pc = 0x3665BCu;
    SET_GPR_U32(ctx, 31, 0x3665C4u);
    ctx->pc = 0x3665C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3665BCu;
            // 0x3665c0: 0x260500c0  addiu       $a1, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x366710u;
    if (runtime->hasFunction(0x366710u)) {
        auto targetFn = runtime->lookupFunction(0x366710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3665C4u; }
        if (ctx->pc != 0x3665C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00366710_0x366710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3665C4u; }
        if (ctx->pc != 0x3665C4u) { return; }
    }
    ctx->pc = 0x3665C4u;
label_3665c4:
    // 0x3665c4: 0x52800049  beql        $s4, $zero, . + 4 + (0x49 << 2)
label_3665c8:
    if (ctx->pc == 0x3665C8u) {
        ctx->pc = 0x3665C8u;
            // 0x3665c8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x3665CCu;
        goto label_3665cc;
    }
    ctx->pc = 0x3665C4u;
    {
        const bool branch_taken_0x3665c4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3665c4) {
            ctx->pc = 0x3665C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3665C4u;
            // 0x3665c8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3666ECu;
            goto label_3666ec;
        }
    }
    ctx->pc = 0x3665CCu;
label_3665cc:
    // 0x3665cc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3665ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3665d0:
    // 0x3665d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3665d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3665d4:
    // 0x3665d4: 0x8c73e360  lw          $s3, -0x1CA0($v1)
    ctx->pc = 0x3665d4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_3665d8:
    // 0x3665d8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3665d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_3665dc:
    // 0x3665dc: 0x8c514028  lw          $s1, 0x4028($v0)
    ctx->pc = 0x3665dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16424)));
label_3665e0:
    // 0x3665e0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3665e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3665e4:
    // 0x3665e4: 0xc04cce8  jal         func_1333A0
label_3665e8:
    if (ctx->pc == 0x3665E8u) {
        ctx->pc = 0x3665E8u;
            // 0x3665e8: 0x24a54c10  addiu       $a1, $a1, 0x4C10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19472));
        ctx->pc = 0x3665ECu;
        goto label_3665ec;
    }
    ctx->pc = 0x3665E4u;
    SET_GPR_U32(ctx, 31, 0x3665ECu);
    ctx->pc = 0x3665E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3665E4u;
            // 0x3665e8: 0x24a54c10  addiu       $a1, $a1, 0x4C10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3665ECu; }
        if (ctx->pc != 0x3665ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3665ECu; }
        if (ctx->pc != 0x3665ECu) { return; }
    }
    ctx->pc = 0x3665ECu;
label_3665ec:
    // 0x3665ec: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3665ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3665f0:
    // 0x3665f0: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x3665f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
label_3665f4:
    // 0x3665f4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3665f8:
    if (ctx->pc == 0x3665F8u) {
        ctx->pc = 0x3665F8u;
            // 0x3665f8: 0x30620800  andi        $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
        ctx->pc = 0x3665FCu;
        goto label_3665fc;
    }
    ctx->pc = 0x3665F4u;
    {
        const bool branch_taken_0x3665f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3665f4) {
            ctx->pc = 0x3665F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3665F4u;
            // 0x3665f8: 0x30620800  andi        $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
            ctx->pc = 0x366604u;
            goto label_366604;
        }
    }
    ctx->pc = 0x3665FCu;
label_3665fc:
    // 0x3665fc: 0x10000005  b           . + 4 + (0x5 << 2)
label_366600:
    if (ctx->pc == 0x366600u) {
        ctx->pc = 0x366600u;
            // 0x366600: 0x8e120194  lw          $s2, 0x194($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
        ctx->pc = 0x366604u;
        goto label_366604;
    }
    ctx->pc = 0x3665FCu;
    {
        const bool branch_taken_0x3665fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x366600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3665FCu;
            // 0x366600: 0x8e120194  lw          $s2, 0x194($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3665fc) {
            ctx->pc = 0x366614u;
            goto label_366614;
        }
    }
    ctx->pc = 0x366604u;
label_366604:
    // 0x366604: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_366608:
    if (ctx->pc == 0x366608u) {
        ctx->pc = 0x366608u;
            // 0x366608: 0x30624800  andi        $v0, $v1, 0x4800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)18432);
        ctx->pc = 0x36660Cu;
        goto label_36660c;
    }
    ctx->pc = 0x366604u;
    {
        const bool branch_taken_0x366604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x366604) {
            ctx->pc = 0x366608u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x366604u;
            // 0x366608: 0x30624800  andi        $v0, $v1, 0x4800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)18432);
        ctx->in_delay_slot = false;
            ctx->pc = 0x366618u;
            goto label_366618;
        }
    }
    ctx->pc = 0x36660Cu;
label_36660c:
    // 0x36660c: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x36660cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_366610:
    // 0x366610: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x366610u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_366614:
    // 0x366614: 0x30624800  andi        $v0, $v1, 0x4800
    ctx->pc = 0x366614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)18432);
label_366618:
    // 0x366618: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_36661c:
    if (ctx->pc == 0x36661Cu) {
        ctx->pc = 0x366620u;
        goto label_366620;
    }
    ctx->pc = 0x366618u;
    {
        const bool branch_taken_0x366618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x366618) {
            ctx->pc = 0x36664Cu;
            goto label_36664c;
        }
    }
    ctx->pc = 0x366620u;
label_366620:
    // 0x366620: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x366620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_366624:
    // 0x366624: 0xc60c01cc  lwc1        $f12, 0x1CC($s0)
    ctx->pc = 0x366624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_366628:
    // 0x366628: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x366628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36662c:
    // 0x36662c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36662cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_366630:
    // 0x366630: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x366630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_366634:
    // 0x366634: 0xc0528ec  jal         func_14A3B0
label_366638:
    if (ctx->pc == 0x366638u) {
        ctx->pc = 0x366638u;
            // 0x366638: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36663Cu;
        goto label_36663c;
    }
    ctx->pc = 0x366634u;
    SET_GPR_U32(ctx, 31, 0x36663Cu);
    ctx->pc = 0x366638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366634u;
            // 0x366638: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A3B0u;
    if (runtime->hasFunction(0x14A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x14A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36663Cu; }
        if (ctx->pc != 0x36663Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014A3B0_0x14a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36663Cu; }
        if (ctx->pc != 0x36663Cu) { return; }
    }
    ctx->pc = 0x36663Cu;
label_36663c:
    // 0x36663c: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x36663cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
label_366640:
    // 0x366640: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x366640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_366644:
    // 0x366644: 0xc04cce8  jal         func_1333A0
label_366648:
    if (ctx->pc == 0x366648u) {
        ctx->pc = 0x366648u;
            // 0x366648: 0x2622821  addu        $a1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->pc = 0x36664Cu;
        goto label_36664c;
    }
    ctx->pc = 0x366644u;
    SET_GPR_U32(ctx, 31, 0x36664Cu);
    ctx->pc = 0x366648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366644u;
            // 0x366648: 0x2622821  addu        $a1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36664Cu; }
        if (ctx->pc != 0x36664Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36664Cu; }
        if (ctx->pc != 0x36664Cu) { return; }
    }
    ctx->pc = 0x36664Cu;
label_36664c:
    // 0x36664c: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x36664cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_366650:
    // 0x366650: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x366650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_366654:
    // 0x366654: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x366654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_366658:
    // 0x366658: 0xc04cb9c  jal         func_132E70
label_36665c:
    if (ctx->pc == 0x36665Cu) {
        ctx->pc = 0x36665Cu;
            // 0x36665c: 0x24c64c50  addiu       $a2, $a2, 0x4C50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19536));
        ctx->pc = 0x366660u;
        goto label_366660;
    }
    ctx->pc = 0x366658u;
    SET_GPR_U32(ctx, 31, 0x366660u);
    ctx->pc = 0x36665Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x366658u;
            // 0x36665c: 0x24c64c50  addiu       $a2, $a2, 0x4C50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E70u;
    if (runtime->hasFunction(0x132E70u)) {
        auto targetFn = runtime->lookupFunction(0x132E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366660u; }
        if (ctx->pc != 0x366660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E70_0x132e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x366660u; }
        if (ctx->pc != 0x366660u) { return; }
    }
    ctx->pc = 0x366660u;
label_366660:
    // 0x366660: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x366660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_366664:
    // 0x366664: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x366664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
label_366668:
    // 0x366668: 0x8c44e428  lw          $a0, -0x1BD8($v0)
    ctx->pc = 0x366668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960168)));
label_36666c:
    // 0x36666c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36666cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_366670:
    // 0x366670: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x366670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_366674:
    // 0x366674: 0x34670080  ori         $a3, $v1, 0x80
    ctx->pc = 0x366674u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
label_366678:
    // 0x366678: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x366678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36667c:
    // 0x36667c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x36667cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_366680:
    // 0x366680: 0xc44c18d0  lwc1        $f12, 0x18D0($v0)
    ctx->pc = 0x366680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_366684:
    // 0x366684: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x366684u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_366688:
    // 0x366688: 0x320f809  jalr        $t9
label_36668c:
    if (ctx->pc == 0x36668Cu) {
        ctx->pc = 0x36668Cu;
            // 0x36668c: 0x3c088000  lui         $t0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
        ctx->pc = 0x366690u;
        goto label_366690;
    }
    ctx->pc = 0x366688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x366690u);
        ctx->pc = 0x36668Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x366688u;
            // 0x36668c: 0x3c088000  lui         $t0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x366690u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x366690u; }
            if (ctx->pc != 0x366690u) { return; }
        }
        }
    }
    ctx->pc = 0x366690u;
label_366690:
    // 0x366690: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x366690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_366694:
    // 0x366694: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x366694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_366698:
    // 0x366698: 0x8c424028  lw          $v0, 0x4028($v0)
    ctx->pc = 0x366698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16424)));
label_36669c:
    // 0x36669c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x36669cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_3666a0:
    // 0x3666a0: 0xc04cce8  jal         func_1333A0
label_3666a4:
    if (ctx->pc == 0x3666A4u) {
        ctx->pc = 0x3666A4u;
            // 0x3666a4: 0x2622821  addu        $a1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->pc = 0x3666A8u;
        goto label_3666a8;
    }
    ctx->pc = 0x3666A0u;
    SET_GPR_U32(ctx, 31, 0x3666A8u);
    ctx->pc = 0x3666A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3666A0u;
            // 0x3666a4: 0x2622821  addu        $a1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3666A8u; }
        if (ctx->pc != 0x3666A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3666A8u; }
        if (ctx->pc != 0x3666A8u) { return; }
    }
    ctx->pc = 0x3666A8u;
label_3666a8:
    // 0x3666a8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3666a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3666ac:
    // 0x3666ac: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3666acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3666b0:
    // 0x3666b0: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x3666b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_3666b4:
    // 0x3666b4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3666b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3666b8:
    // 0x3666b8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3666b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3666bc:
    // 0x3666bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3666bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3666c0:
    // 0x3666c0: 0xc04cd60  jal         func_133580
label_3666c4:
    if (ctx->pc == 0x3666C4u) {
        ctx->pc = 0x3666C4u;
            // 0x3666c4: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x3666C8u;
        goto label_3666c8;
    }
    ctx->pc = 0x3666C0u;
    SET_GPR_U32(ctx, 31, 0x3666C8u);
    ctx->pc = 0x3666C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3666C0u;
            // 0x3666c4: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3666C8u; }
        if (ctx->pc != 0x3666C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3666C8u; }
        if (ctx->pc != 0x3666C8u) { return; }
    }
    ctx->pc = 0x3666C8u;
label_3666c8:
    // 0x3666c8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3666c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3666cc:
    // 0x3666cc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3666ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_3666d0:
    // 0x3666d0: 0xc44018d0  lwc1        $f0, 0x18D0($v0)
    ctx->pc = 0x3666d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3666d4:
    // 0x3666d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3666d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3666d8:
    // 0x3666d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3666d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3666dc:
    // 0x3666dc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3666dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3666e0:
    // 0x3666e0: 0xc052ccc  jal         func_14B330
label_3666e4:
    if (ctx->pc == 0x3666E4u) {
        ctx->pc = 0x3666E4u;
            // 0x3666e4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3666E8u;
        goto label_3666e8;
    }
    ctx->pc = 0x3666E0u;
    SET_GPR_U32(ctx, 31, 0x3666E8u);
    ctx->pc = 0x3666E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3666E0u;
            // 0x3666e4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B330u;
    if (runtime->hasFunction(0x14B330u)) {
        auto targetFn = runtime->lookupFunction(0x14B330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3666E8u; }
        if (ctx->pc != 0x3666E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B330_0x14b330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3666E8u; }
        if (ctx->pc != 0x3666E8u) { return; }
    }
    ctx->pc = 0x3666E8u;
label_3666e8:
    // 0x3666e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3666e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3666ec:
    // 0x3666ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3666ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3666f0:
    // 0x3666f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3666f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3666f4:
    // 0x3666f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3666f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3666f8:
    // 0x3666f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3666f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3666fc:
    // 0x3666fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3666fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_366700:
    // 0x366700: 0x3e00008  jr          $ra
label_366704:
    if (ctx->pc == 0x366704u) {
        ctx->pc = 0x366704u;
            // 0x366704: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x366708u;
        goto label_366708;
    }
    ctx->pc = 0x366700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x366700u;
            // 0x366704: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x366708u;
label_366708:
    // 0x366708: 0x0  nop
    ctx->pc = 0x366708u;
    // NOP
label_36670c:
    // 0x36670c: 0x0  nop
    ctx->pc = 0x36670cu;
    // NOP
}
