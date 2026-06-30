#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005496E0
// Address: 0x5496e0 - 0x549f20
void sub_005496E0_0x5496e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005496E0_0x5496e0");
#endif

    switch (ctx->pc) {
        case 0x5496e0u: goto label_5496e0;
        case 0x5496e4u: goto label_5496e4;
        case 0x5496e8u: goto label_5496e8;
        case 0x5496ecu: goto label_5496ec;
        case 0x5496f0u: goto label_5496f0;
        case 0x5496f4u: goto label_5496f4;
        case 0x5496f8u: goto label_5496f8;
        case 0x5496fcu: goto label_5496fc;
        case 0x549700u: goto label_549700;
        case 0x549704u: goto label_549704;
        case 0x549708u: goto label_549708;
        case 0x54970cu: goto label_54970c;
        case 0x549710u: goto label_549710;
        case 0x549714u: goto label_549714;
        case 0x549718u: goto label_549718;
        case 0x54971cu: goto label_54971c;
        case 0x549720u: goto label_549720;
        case 0x549724u: goto label_549724;
        case 0x549728u: goto label_549728;
        case 0x54972cu: goto label_54972c;
        case 0x549730u: goto label_549730;
        case 0x549734u: goto label_549734;
        case 0x549738u: goto label_549738;
        case 0x54973cu: goto label_54973c;
        case 0x549740u: goto label_549740;
        case 0x549744u: goto label_549744;
        case 0x549748u: goto label_549748;
        case 0x54974cu: goto label_54974c;
        case 0x549750u: goto label_549750;
        case 0x549754u: goto label_549754;
        case 0x549758u: goto label_549758;
        case 0x54975cu: goto label_54975c;
        case 0x549760u: goto label_549760;
        case 0x549764u: goto label_549764;
        case 0x549768u: goto label_549768;
        case 0x54976cu: goto label_54976c;
        case 0x549770u: goto label_549770;
        case 0x549774u: goto label_549774;
        case 0x549778u: goto label_549778;
        case 0x54977cu: goto label_54977c;
        case 0x549780u: goto label_549780;
        case 0x549784u: goto label_549784;
        case 0x549788u: goto label_549788;
        case 0x54978cu: goto label_54978c;
        case 0x549790u: goto label_549790;
        case 0x549794u: goto label_549794;
        case 0x549798u: goto label_549798;
        case 0x54979cu: goto label_54979c;
        case 0x5497a0u: goto label_5497a0;
        case 0x5497a4u: goto label_5497a4;
        case 0x5497a8u: goto label_5497a8;
        case 0x5497acu: goto label_5497ac;
        case 0x5497b0u: goto label_5497b0;
        case 0x5497b4u: goto label_5497b4;
        case 0x5497b8u: goto label_5497b8;
        case 0x5497bcu: goto label_5497bc;
        case 0x5497c0u: goto label_5497c0;
        case 0x5497c4u: goto label_5497c4;
        case 0x5497c8u: goto label_5497c8;
        case 0x5497ccu: goto label_5497cc;
        case 0x5497d0u: goto label_5497d0;
        case 0x5497d4u: goto label_5497d4;
        case 0x5497d8u: goto label_5497d8;
        case 0x5497dcu: goto label_5497dc;
        case 0x5497e0u: goto label_5497e0;
        case 0x5497e4u: goto label_5497e4;
        case 0x5497e8u: goto label_5497e8;
        case 0x5497ecu: goto label_5497ec;
        case 0x5497f0u: goto label_5497f0;
        case 0x5497f4u: goto label_5497f4;
        case 0x5497f8u: goto label_5497f8;
        case 0x5497fcu: goto label_5497fc;
        case 0x549800u: goto label_549800;
        case 0x549804u: goto label_549804;
        case 0x549808u: goto label_549808;
        case 0x54980cu: goto label_54980c;
        case 0x549810u: goto label_549810;
        case 0x549814u: goto label_549814;
        case 0x549818u: goto label_549818;
        case 0x54981cu: goto label_54981c;
        case 0x549820u: goto label_549820;
        case 0x549824u: goto label_549824;
        case 0x549828u: goto label_549828;
        case 0x54982cu: goto label_54982c;
        case 0x549830u: goto label_549830;
        case 0x549834u: goto label_549834;
        case 0x549838u: goto label_549838;
        case 0x54983cu: goto label_54983c;
        case 0x549840u: goto label_549840;
        case 0x549844u: goto label_549844;
        case 0x549848u: goto label_549848;
        case 0x54984cu: goto label_54984c;
        case 0x549850u: goto label_549850;
        case 0x549854u: goto label_549854;
        case 0x549858u: goto label_549858;
        case 0x54985cu: goto label_54985c;
        case 0x549860u: goto label_549860;
        case 0x549864u: goto label_549864;
        case 0x549868u: goto label_549868;
        case 0x54986cu: goto label_54986c;
        case 0x549870u: goto label_549870;
        case 0x549874u: goto label_549874;
        case 0x549878u: goto label_549878;
        case 0x54987cu: goto label_54987c;
        case 0x549880u: goto label_549880;
        case 0x549884u: goto label_549884;
        case 0x549888u: goto label_549888;
        case 0x54988cu: goto label_54988c;
        case 0x549890u: goto label_549890;
        case 0x549894u: goto label_549894;
        case 0x549898u: goto label_549898;
        case 0x54989cu: goto label_54989c;
        case 0x5498a0u: goto label_5498a0;
        case 0x5498a4u: goto label_5498a4;
        case 0x5498a8u: goto label_5498a8;
        case 0x5498acu: goto label_5498ac;
        case 0x5498b0u: goto label_5498b0;
        case 0x5498b4u: goto label_5498b4;
        case 0x5498b8u: goto label_5498b8;
        case 0x5498bcu: goto label_5498bc;
        case 0x5498c0u: goto label_5498c0;
        case 0x5498c4u: goto label_5498c4;
        case 0x5498c8u: goto label_5498c8;
        case 0x5498ccu: goto label_5498cc;
        case 0x5498d0u: goto label_5498d0;
        case 0x5498d4u: goto label_5498d4;
        case 0x5498d8u: goto label_5498d8;
        case 0x5498dcu: goto label_5498dc;
        case 0x5498e0u: goto label_5498e0;
        case 0x5498e4u: goto label_5498e4;
        case 0x5498e8u: goto label_5498e8;
        case 0x5498ecu: goto label_5498ec;
        case 0x5498f0u: goto label_5498f0;
        case 0x5498f4u: goto label_5498f4;
        case 0x5498f8u: goto label_5498f8;
        case 0x5498fcu: goto label_5498fc;
        case 0x549900u: goto label_549900;
        case 0x549904u: goto label_549904;
        case 0x549908u: goto label_549908;
        case 0x54990cu: goto label_54990c;
        case 0x549910u: goto label_549910;
        case 0x549914u: goto label_549914;
        case 0x549918u: goto label_549918;
        case 0x54991cu: goto label_54991c;
        case 0x549920u: goto label_549920;
        case 0x549924u: goto label_549924;
        case 0x549928u: goto label_549928;
        case 0x54992cu: goto label_54992c;
        case 0x549930u: goto label_549930;
        case 0x549934u: goto label_549934;
        case 0x549938u: goto label_549938;
        case 0x54993cu: goto label_54993c;
        case 0x549940u: goto label_549940;
        case 0x549944u: goto label_549944;
        case 0x549948u: goto label_549948;
        case 0x54994cu: goto label_54994c;
        case 0x549950u: goto label_549950;
        case 0x549954u: goto label_549954;
        case 0x549958u: goto label_549958;
        case 0x54995cu: goto label_54995c;
        case 0x549960u: goto label_549960;
        case 0x549964u: goto label_549964;
        case 0x549968u: goto label_549968;
        case 0x54996cu: goto label_54996c;
        case 0x549970u: goto label_549970;
        case 0x549974u: goto label_549974;
        case 0x549978u: goto label_549978;
        case 0x54997cu: goto label_54997c;
        case 0x549980u: goto label_549980;
        case 0x549984u: goto label_549984;
        case 0x549988u: goto label_549988;
        case 0x54998cu: goto label_54998c;
        case 0x549990u: goto label_549990;
        case 0x549994u: goto label_549994;
        case 0x549998u: goto label_549998;
        case 0x54999cu: goto label_54999c;
        case 0x5499a0u: goto label_5499a0;
        case 0x5499a4u: goto label_5499a4;
        case 0x5499a8u: goto label_5499a8;
        case 0x5499acu: goto label_5499ac;
        case 0x5499b0u: goto label_5499b0;
        case 0x5499b4u: goto label_5499b4;
        case 0x5499b8u: goto label_5499b8;
        case 0x5499bcu: goto label_5499bc;
        case 0x5499c0u: goto label_5499c0;
        case 0x5499c4u: goto label_5499c4;
        case 0x5499c8u: goto label_5499c8;
        case 0x5499ccu: goto label_5499cc;
        case 0x5499d0u: goto label_5499d0;
        case 0x5499d4u: goto label_5499d4;
        case 0x5499d8u: goto label_5499d8;
        case 0x5499dcu: goto label_5499dc;
        case 0x5499e0u: goto label_5499e0;
        case 0x5499e4u: goto label_5499e4;
        case 0x5499e8u: goto label_5499e8;
        case 0x5499ecu: goto label_5499ec;
        case 0x5499f0u: goto label_5499f0;
        case 0x5499f4u: goto label_5499f4;
        case 0x5499f8u: goto label_5499f8;
        case 0x5499fcu: goto label_5499fc;
        case 0x549a00u: goto label_549a00;
        case 0x549a04u: goto label_549a04;
        case 0x549a08u: goto label_549a08;
        case 0x549a0cu: goto label_549a0c;
        case 0x549a10u: goto label_549a10;
        case 0x549a14u: goto label_549a14;
        case 0x549a18u: goto label_549a18;
        case 0x549a1cu: goto label_549a1c;
        case 0x549a20u: goto label_549a20;
        case 0x549a24u: goto label_549a24;
        case 0x549a28u: goto label_549a28;
        case 0x549a2cu: goto label_549a2c;
        case 0x549a30u: goto label_549a30;
        case 0x549a34u: goto label_549a34;
        case 0x549a38u: goto label_549a38;
        case 0x549a3cu: goto label_549a3c;
        case 0x549a40u: goto label_549a40;
        case 0x549a44u: goto label_549a44;
        case 0x549a48u: goto label_549a48;
        case 0x549a4cu: goto label_549a4c;
        case 0x549a50u: goto label_549a50;
        case 0x549a54u: goto label_549a54;
        case 0x549a58u: goto label_549a58;
        case 0x549a5cu: goto label_549a5c;
        case 0x549a60u: goto label_549a60;
        case 0x549a64u: goto label_549a64;
        case 0x549a68u: goto label_549a68;
        case 0x549a6cu: goto label_549a6c;
        case 0x549a70u: goto label_549a70;
        case 0x549a74u: goto label_549a74;
        case 0x549a78u: goto label_549a78;
        case 0x549a7cu: goto label_549a7c;
        case 0x549a80u: goto label_549a80;
        case 0x549a84u: goto label_549a84;
        case 0x549a88u: goto label_549a88;
        case 0x549a8cu: goto label_549a8c;
        case 0x549a90u: goto label_549a90;
        case 0x549a94u: goto label_549a94;
        case 0x549a98u: goto label_549a98;
        case 0x549a9cu: goto label_549a9c;
        case 0x549aa0u: goto label_549aa0;
        case 0x549aa4u: goto label_549aa4;
        case 0x549aa8u: goto label_549aa8;
        case 0x549aacu: goto label_549aac;
        case 0x549ab0u: goto label_549ab0;
        case 0x549ab4u: goto label_549ab4;
        case 0x549ab8u: goto label_549ab8;
        case 0x549abcu: goto label_549abc;
        case 0x549ac0u: goto label_549ac0;
        case 0x549ac4u: goto label_549ac4;
        case 0x549ac8u: goto label_549ac8;
        case 0x549accu: goto label_549acc;
        case 0x549ad0u: goto label_549ad0;
        case 0x549ad4u: goto label_549ad4;
        case 0x549ad8u: goto label_549ad8;
        case 0x549adcu: goto label_549adc;
        case 0x549ae0u: goto label_549ae0;
        case 0x549ae4u: goto label_549ae4;
        case 0x549ae8u: goto label_549ae8;
        case 0x549aecu: goto label_549aec;
        case 0x549af0u: goto label_549af0;
        case 0x549af4u: goto label_549af4;
        case 0x549af8u: goto label_549af8;
        case 0x549afcu: goto label_549afc;
        case 0x549b00u: goto label_549b00;
        case 0x549b04u: goto label_549b04;
        case 0x549b08u: goto label_549b08;
        case 0x549b0cu: goto label_549b0c;
        case 0x549b10u: goto label_549b10;
        case 0x549b14u: goto label_549b14;
        case 0x549b18u: goto label_549b18;
        case 0x549b1cu: goto label_549b1c;
        case 0x549b20u: goto label_549b20;
        case 0x549b24u: goto label_549b24;
        case 0x549b28u: goto label_549b28;
        case 0x549b2cu: goto label_549b2c;
        case 0x549b30u: goto label_549b30;
        case 0x549b34u: goto label_549b34;
        case 0x549b38u: goto label_549b38;
        case 0x549b3cu: goto label_549b3c;
        case 0x549b40u: goto label_549b40;
        case 0x549b44u: goto label_549b44;
        case 0x549b48u: goto label_549b48;
        case 0x549b4cu: goto label_549b4c;
        case 0x549b50u: goto label_549b50;
        case 0x549b54u: goto label_549b54;
        case 0x549b58u: goto label_549b58;
        case 0x549b5cu: goto label_549b5c;
        case 0x549b60u: goto label_549b60;
        case 0x549b64u: goto label_549b64;
        case 0x549b68u: goto label_549b68;
        case 0x549b6cu: goto label_549b6c;
        case 0x549b70u: goto label_549b70;
        case 0x549b74u: goto label_549b74;
        case 0x549b78u: goto label_549b78;
        case 0x549b7cu: goto label_549b7c;
        case 0x549b80u: goto label_549b80;
        case 0x549b84u: goto label_549b84;
        case 0x549b88u: goto label_549b88;
        case 0x549b8cu: goto label_549b8c;
        case 0x549b90u: goto label_549b90;
        case 0x549b94u: goto label_549b94;
        case 0x549b98u: goto label_549b98;
        case 0x549b9cu: goto label_549b9c;
        case 0x549ba0u: goto label_549ba0;
        case 0x549ba4u: goto label_549ba4;
        case 0x549ba8u: goto label_549ba8;
        case 0x549bacu: goto label_549bac;
        case 0x549bb0u: goto label_549bb0;
        case 0x549bb4u: goto label_549bb4;
        case 0x549bb8u: goto label_549bb8;
        case 0x549bbcu: goto label_549bbc;
        case 0x549bc0u: goto label_549bc0;
        case 0x549bc4u: goto label_549bc4;
        case 0x549bc8u: goto label_549bc8;
        case 0x549bccu: goto label_549bcc;
        case 0x549bd0u: goto label_549bd0;
        case 0x549bd4u: goto label_549bd4;
        case 0x549bd8u: goto label_549bd8;
        case 0x549bdcu: goto label_549bdc;
        case 0x549be0u: goto label_549be0;
        case 0x549be4u: goto label_549be4;
        case 0x549be8u: goto label_549be8;
        case 0x549becu: goto label_549bec;
        case 0x549bf0u: goto label_549bf0;
        case 0x549bf4u: goto label_549bf4;
        case 0x549bf8u: goto label_549bf8;
        case 0x549bfcu: goto label_549bfc;
        case 0x549c00u: goto label_549c00;
        case 0x549c04u: goto label_549c04;
        case 0x549c08u: goto label_549c08;
        case 0x549c0cu: goto label_549c0c;
        case 0x549c10u: goto label_549c10;
        case 0x549c14u: goto label_549c14;
        case 0x549c18u: goto label_549c18;
        case 0x549c1cu: goto label_549c1c;
        case 0x549c20u: goto label_549c20;
        case 0x549c24u: goto label_549c24;
        case 0x549c28u: goto label_549c28;
        case 0x549c2cu: goto label_549c2c;
        case 0x549c30u: goto label_549c30;
        case 0x549c34u: goto label_549c34;
        case 0x549c38u: goto label_549c38;
        case 0x549c3cu: goto label_549c3c;
        case 0x549c40u: goto label_549c40;
        case 0x549c44u: goto label_549c44;
        case 0x549c48u: goto label_549c48;
        case 0x549c4cu: goto label_549c4c;
        case 0x549c50u: goto label_549c50;
        case 0x549c54u: goto label_549c54;
        case 0x549c58u: goto label_549c58;
        case 0x549c5cu: goto label_549c5c;
        case 0x549c60u: goto label_549c60;
        case 0x549c64u: goto label_549c64;
        case 0x549c68u: goto label_549c68;
        case 0x549c6cu: goto label_549c6c;
        case 0x549c70u: goto label_549c70;
        case 0x549c74u: goto label_549c74;
        case 0x549c78u: goto label_549c78;
        case 0x549c7cu: goto label_549c7c;
        case 0x549c80u: goto label_549c80;
        case 0x549c84u: goto label_549c84;
        case 0x549c88u: goto label_549c88;
        case 0x549c8cu: goto label_549c8c;
        case 0x549c90u: goto label_549c90;
        case 0x549c94u: goto label_549c94;
        case 0x549c98u: goto label_549c98;
        case 0x549c9cu: goto label_549c9c;
        case 0x549ca0u: goto label_549ca0;
        case 0x549ca4u: goto label_549ca4;
        case 0x549ca8u: goto label_549ca8;
        case 0x549cacu: goto label_549cac;
        case 0x549cb0u: goto label_549cb0;
        case 0x549cb4u: goto label_549cb4;
        case 0x549cb8u: goto label_549cb8;
        case 0x549cbcu: goto label_549cbc;
        case 0x549cc0u: goto label_549cc0;
        case 0x549cc4u: goto label_549cc4;
        case 0x549cc8u: goto label_549cc8;
        case 0x549cccu: goto label_549ccc;
        case 0x549cd0u: goto label_549cd0;
        case 0x549cd4u: goto label_549cd4;
        case 0x549cd8u: goto label_549cd8;
        case 0x549cdcu: goto label_549cdc;
        case 0x549ce0u: goto label_549ce0;
        case 0x549ce4u: goto label_549ce4;
        case 0x549ce8u: goto label_549ce8;
        case 0x549cecu: goto label_549cec;
        case 0x549cf0u: goto label_549cf0;
        case 0x549cf4u: goto label_549cf4;
        case 0x549cf8u: goto label_549cf8;
        case 0x549cfcu: goto label_549cfc;
        case 0x549d00u: goto label_549d00;
        case 0x549d04u: goto label_549d04;
        case 0x549d08u: goto label_549d08;
        case 0x549d0cu: goto label_549d0c;
        case 0x549d10u: goto label_549d10;
        case 0x549d14u: goto label_549d14;
        case 0x549d18u: goto label_549d18;
        case 0x549d1cu: goto label_549d1c;
        case 0x549d20u: goto label_549d20;
        case 0x549d24u: goto label_549d24;
        case 0x549d28u: goto label_549d28;
        case 0x549d2cu: goto label_549d2c;
        case 0x549d30u: goto label_549d30;
        case 0x549d34u: goto label_549d34;
        case 0x549d38u: goto label_549d38;
        case 0x549d3cu: goto label_549d3c;
        case 0x549d40u: goto label_549d40;
        case 0x549d44u: goto label_549d44;
        case 0x549d48u: goto label_549d48;
        case 0x549d4cu: goto label_549d4c;
        case 0x549d50u: goto label_549d50;
        case 0x549d54u: goto label_549d54;
        case 0x549d58u: goto label_549d58;
        case 0x549d5cu: goto label_549d5c;
        case 0x549d60u: goto label_549d60;
        case 0x549d64u: goto label_549d64;
        case 0x549d68u: goto label_549d68;
        case 0x549d6cu: goto label_549d6c;
        case 0x549d70u: goto label_549d70;
        case 0x549d74u: goto label_549d74;
        case 0x549d78u: goto label_549d78;
        case 0x549d7cu: goto label_549d7c;
        case 0x549d80u: goto label_549d80;
        case 0x549d84u: goto label_549d84;
        case 0x549d88u: goto label_549d88;
        case 0x549d8cu: goto label_549d8c;
        case 0x549d90u: goto label_549d90;
        case 0x549d94u: goto label_549d94;
        case 0x549d98u: goto label_549d98;
        case 0x549d9cu: goto label_549d9c;
        case 0x549da0u: goto label_549da0;
        case 0x549da4u: goto label_549da4;
        case 0x549da8u: goto label_549da8;
        case 0x549dacu: goto label_549dac;
        case 0x549db0u: goto label_549db0;
        case 0x549db4u: goto label_549db4;
        case 0x549db8u: goto label_549db8;
        case 0x549dbcu: goto label_549dbc;
        case 0x549dc0u: goto label_549dc0;
        case 0x549dc4u: goto label_549dc4;
        case 0x549dc8u: goto label_549dc8;
        case 0x549dccu: goto label_549dcc;
        case 0x549dd0u: goto label_549dd0;
        case 0x549dd4u: goto label_549dd4;
        case 0x549dd8u: goto label_549dd8;
        case 0x549ddcu: goto label_549ddc;
        case 0x549de0u: goto label_549de0;
        case 0x549de4u: goto label_549de4;
        case 0x549de8u: goto label_549de8;
        case 0x549decu: goto label_549dec;
        case 0x549df0u: goto label_549df0;
        case 0x549df4u: goto label_549df4;
        case 0x549df8u: goto label_549df8;
        case 0x549dfcu: goto label_549dfc;
        case 0x549e00u: goto label_549e00;
        case 0x549e04u: goto label_549e04;
        case 0x549e08u: goto label_549e08;
        case 0x549e0cu: goto label_549e0c;
        case 0x549e10u: goto label_549e10;
        case 0x549e14u: goto label_549e14;
        case 0x549e18u: goto label_549e18;
        case 0x549e1cu: goto label_549e1c;
        case 0x549e20u: goto label_549e20;
        case 0x549e24u: goto label_549e24;
        case 0x549e28u: goto label_549e28;
        case 0x549e2cu: goto label_549e2c;
        case 0x549e30u: goto label_549e30;
        case 0x549e34u: goto label_549e34;
        case 0x549e38u: goto label_549e38;
        case 0x549e3cu: goto label_549e3c;
        case 0x549e40u: goto label_549e40;
        case 0x549e44u: goto label_549e44;
        case 0x549e48u: goto label_549e48;
        case 0x549e4cu: goto label_549e4c;
        case 0x549e50u: goto label_549e50;
        case 0x549e54u: goto label_549e54;
        case 0x549e58u: goto label_549e58;
        case 0x549e5cu: goto label_549e5c;
        case 0x549e60u: goto label_549e60;
        case 0x549e64u: goto label_549e64;
        case 0x549e68u: goto label_549e68;
        case 0x549e6cu: goto label_549e6c;
        case 0x549e70u: goto label_549e70;
        case 0x549e74u: goto label_549e74;
        case 0x549e78u: goto label_549e78;
        case 0x549e7cu: goto label_549e7c;
        case 0x549e80u: goto label_549e80;
        case 0x549e84u: goto label_549e84;
        case 0x549e88u: goto label_549e88;
        case 0x549e8cu: goto label_549e8c;
        case 0x549e90u: goto label_549e90;
        case 0x549e94u: goto label_549e94;
        case 0x549e98u: goto label_549e98;
        case 0x549e9cu: goto label_549e9c;
        case 0x549ea0u: goto label_549ea0;
        case 0x549ea4u: goto label_549ea4;
        case 0x549ea8u: goto label_549ea8;
        case 0x549eacu: goto label_549eac;
        case 0x549eb0u: goto label_549eb0;
        case 0x549eb4u: goto label_549eb4;
        case 0x549eb8u: goto label_549eb8;
        case 0x549ebcu: goto label_549ebc;
        case 0x549ec0u: goto label_549ec0;
        case 0x549ec4u: goto label_549ec4;
        case 0x549ec8u: goto label_549ec8;
        case 0x549eccu: goto label_549ecc;
        case 0x549ed0u: goto label_549ed0;
        case 0x549ed4u: goto label_549ed4;
        case 0x549ed8u: goto label_549ed8;
        case 0x549edcu: goto label_549edc;
        case 0x549ee0u: goto label_549ee0;
        case 0x549ee4u: goto label_549ee4;
        case 0x549ee8u: goto label_549ee8;
        case 0x549eecu: goto label_549eec;
        case 0x549ef0u: goto label_549ef0;
        case 0x549ef4u: goto label_549ef4;
        case 0x549ef8u: goto label_549ef8;
        case 0x549efcu: goto label_549efc;
        case 0x549f00u: goto label_549f00;
        case 0x549f04u: goto label_549f04;
        case 0x549f08u: goto label_549f08;
        case 0x549f0cu: goto label_549f0c;
        case 0x549f10u: goto label_549f10;
        case 0x549f14u: goto label_549f14;
        case 0x549f18u: goto label_549f18;
        case 0x549f1cu: goto label_549f1c;
        default: break;
    }

    ctx->pc = 0x5496e0u;

label_5496e0:
    // 0x5496e0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x5496e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_5496e4:
    // 0x5496e4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x5496e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_5496e8:
    // 0x5496e8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x5496e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_5496ec:
    // 0x5496ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x5496ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_5496f0:
    // 0x5496f0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x5496f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_5496f4:
    // 0x5496f4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x5496f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_5496f8:
    // 0x5496f8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x5496f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_5496fc:
    // 0x5496fc: 0x3c1e0067  lui         $fp, 0x67
    ctx->pc = 0x5496fcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)103 << 16));
label_549700:
    // 0x549700: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x549700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_549704:
    // 0x549704: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x549704u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_549708:
    // 0x549708: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x549708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_54970c:
    // 0x54970c: 0x27dee460  addiu       $fp, $fp, -0x1BA0
    ctx->pc = 0x54970cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294960224));
label_549710:
    // 0x549710: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x549710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_549714:
    // 0x549714: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x549714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_549718:
    // 0x549718: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x549718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_54971c:
    // 0x54971c: 0x3c130067  lui         $s3, 0x67
    ctx->pc = 0x54971cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)103 << 16));
label_549720:
    // 0x549720: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x549720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_549724:
    // 0x549724: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x549724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_549728:
    // 0x549728: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x549728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_54972c:
    // 0x54972c: 0x2442e790  addiu       $v0, $v0, -0x1870
    ctx->pc = 0x54972cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961040));
label_549730:
    // 0x549730: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x549730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_549734:
    // 0x549734: 0x2673e570  addiu       $s3, $s3, -0x1A90
    ctx->pc = 0x549734u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294960496));
label_549738:
    // 0x549738: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x549738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_54973c:
    // 0x54973c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x54973cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_549740:
    // 0x549740: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x549740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_549744:
    // 0x549744: 0x8c740ec8  lw          $s4, 0xEC8($v1)
    ctx->pc = 0x549744u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3784)));
label_549748:
    // 0x549748: 0x9452d9b0  lhu         $s2, -0x2650($v0)
    ctx->pc = 0x549748u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957488)));
label_54974c:
    // 0x54974c: 0xafa50118  sw          $a1, 0x118($sp)
    ctx->pc = 0x54974cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 5));
label_549750:
    // 0x549750: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x549750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_549754:
    // 0x549754: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x549754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_549758:
    // 0x549758: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x549758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54975c:
    // 0x54975c: 0xafa4011c  sw          $a0, 0x11C($sp)
    ctx->pc = 0x54975cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 4));
label_549760:
    // 0x549760: 0x9451d9b2  lhu         $s1, -0x264E($v0)
    ctx->pc = 0x549760u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957490)));
label_549764:
    // 0x549764: 0xafa60114  sw          $a2, 0x114($sp)
    ctx->pc = 0x549764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 6));
label_549768:
    // 0x549768: 0xafa70110  sw          $a3, 0x110($sp)
    ctx->pc = 0x549768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 7));
label_54976c:
    // 0x54976c: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x54976cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_549770:
    // 0x549770: 0xafa8010c  sw          $t0, 0x10C($sp)
    ctx->pc = 0x549770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 8));
label_549774:
    // 0x549774: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x549774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_549778:
    // 0x549778: 0x8c56000c  lw          $s6, 0xC($v0)
    ctx->pc = 0x549778u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_54977c:
    // 0x54977c: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x54977cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_549780:
    // 0x549780: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x549780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_549784:
    // 0x549784: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x549784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_549788:
    // 0x549788: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x549788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_54978c:
    // 0x54978c: 0x8c44012c  lw          $a0, 0x12C($v0)
    ctx->pc = 0x54978cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_549790:
    // 0x549790: 0xc0506ac  jal         func_141AB0
label_549794:
    if (ctx->pc == 0x549794u) {
        ctx->pc = 0x549794u;
            // 0x549794: 0xafa90108  sw          $t1, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 9));
        ctx->pc = 0x549798u;
        goto label_549798;
    }
    ctx->pc = 0x549790u;
    SET_GPR_U32(ctx, 31, 0x549798u);
    ctx->pc = 0x549794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x549790u;
            // 0x549794: 0xafa90108  sw          $t1, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x549798u; }
        if (ctx->pc != 0x549798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x549798u; }
        if (ctx->pc != 0x549798u) { return; }
    }
    ctx->pc = 0x549798u;
label_549798:
    // 0x549798: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x549798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54979c:
    // 0x54979c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54979cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_5497a0:
    // 0x5497a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5497a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5497a4:
    // 0x5497a4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x5497a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_5497a8:
    // 0x5497a8: 0x320f809  jalr        $t9
label_5497ac:
    if (ctx->pc == 0x5497ACu) {
        ctx->pc = 0x5497ACu;
            // 0x5497ac: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x5497B0u;
        goto label_5497b0;
    }
    ctx->pc = 0x5497A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5497B0u);
        ctx->pc = 0x5497ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5497A8u;
            // 0x5497ac: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5497B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5497B0u; }
            if (ctx->pc != 0x5497B0u) { return; }
        }
        }
    }
    ctx->pc = 0x5497B0u;
label_5497b0:
    // 0x5497b0: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x5497b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_5497b4:
    // 0x5497b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5497b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5497b8:
    // 0x5497b8: 0xa3a000f0  sb          $zero, 0xF0($sp)
    ctx->pc = 0x5497b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 240), (uint8_t)GPR_U32(ctx, 0));
label_5497bc:
    // 0x5497bc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x5497bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_5497c0:
    // 0x5497c0: 0x8c54001c  lw          $s4, 0x1C($v0)
    ctx->pc = 0x5497c0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_5497c4:
    // 0x5497c4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5497c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_5497c8:
    // 0x5497c8: 0x8445e468  lh          $a1, -0x1B98($v0)
    ctx->pc = 0x5497c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294960232)));
label_5497cc:
    // 0x5497cc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5497ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_5497d0:
    // 0x5497d0: 0x8444e46a  lh          $a0, -0x1B96($v0)
    ctx->pc = 0x5497d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294960234)));
label_5497d4:
    // 0x5497d4: 0x8fa20114  lw          $v0, 0x114($sp)
    ctx->pc = 0x5497d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_5497d8:
    // 0x5497d8: 0x45a821  addu        $s5, $v0, $a1
    ctx->pc = 0x5497d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_5497dc:
    // 0x5497dc: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x5497dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_5497e0:
    // 0x5497e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x5497e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_5497e4:
    // 0x5497e4: 0x1283000e  beq         $s4, $v1, . + 4 + (0xE << 2)
label_5497e8:
    if (ctx->pc == 0x5497E8u) {
        ctx->pc = 0x5497E8u;
            // 0x5497e8: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->pc = 0x5497ECu;
        goto label_5497ec;
    }
    ctx->pc = 0x5497E4u;
    {
        const bool branch_taken_0x5497e4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x5497E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5497E4u;
            // 0x5497e8: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5497e4) {
            ctx->pc = 0x549820u;
            goto label_549820;
        }
    }
    ctx->pc = 0x5497ECu;
label_5497ec:
    // 0x5497ec: 0x5280000d  beql        $s4, $zero, . + 4 + (0xD << 2)
label_5497f0:
    if (ctx->pc == 0x5497F0u) {
        ctx->pc = 0x5497F0u;
            // 0x5497f0: 0x267000e0  addiu       $s0, $s3, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
        ctx->pc = 0x5497F4u;
        goto label_5497f4;
    }
    ctx->pc = 0x5497ECu;
    {
        const bool branch_taken_0x5497ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x5497ec) {
            ctx->pc = 0x5497F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5497ECu;
            // 0x5497f0: 0x267000e0  addiu       $s0, $s3, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
        ctx->in_delay_slot = false;
            ctx->pc = 0x549824u;
            goto label_549824;
        }
    }
    ctx->pc = 0x5497F4u;
label_5497f4:
    // 0x5497f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x5497f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5497f8:
    // 0x5497f8: 0x52820003  beql        $s4, $v0, . + 4 + (0x3 << 2)
label_5497fc:
    if (ctx->pc == 0x5497FCu) {
        ctx->pc = 0x5497FCu;
            // 0x5497fc: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x549800u;
        goto label_549800;
    }
    ctx->pc = 0x5497F8u;
    {
        const bool branch_taken_0x5497f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x5497f8) {
            ctx->pc = 0x5497FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5497F8u;
            // 0x5497fc: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x549808u;
            goto label_549808;
        }
    }
    ctx->pc = 0x549800u;
label_549800:
    // 0x549800: 0x10000008  b           . + 4 + (0x8 << 2)
label_549804:
    if (ctx->pc == 0x549804u) {
        ctx->pc = 0x549808u;
        goto label_549808;
    }
    ctx->pc = 0x549800u;
    {
        const bool branch_taken_0x549800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x549800) {
            ctx->pc = 0x549824u;
            goto label_549824;
        }
    }
    ctx->pc = 0x549808u;
label_549808:
    // 0x549808: 0xa3a200f0  sb          $v0, 0xF0($sp)
    ctx->pc = 0x549808u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 240), (uint8_t)GPR_U32(ctx, 2));
label_54980c:
    // 0x54980c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x54980cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_549810:
    // 0x549810: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x549810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_549814:
    // 0x549814: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x549814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_549818:
    // 0x549818: 0x10000002  b           . + 4 + (0x2 << 2)
label_54981c:
    if (ctx->pc == 0x54981Cu) {
        ctx->pc = 0x54981Cu;
            // 0x54981c: 0x2628021  addu        $s0, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->pc = 0x549820u;
        goto label_549820;
    }
    ctx->pc = 0x549818u;
    {
        const bool branch_taken_0x549818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54981Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549818u;
            // 0x54981c: 0x2628021  addu        $s0, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x549818) {
            ctx->pc = 0x549824u;
            goto label_549824;
        }
    }
    ctx->pc = 0x549820u;
label_549820:
    // 0x549820: 0x267000d0  addiu       $s0, $s3, 0xD0
    ctx->pc = 0x549820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
label_549824:
    // 0x549824: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x549824u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549828:
    // 0x549828: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x549828u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_54982c:
    // 0x54982c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x54982cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_549830:
    // 0x549830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x549830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549834:
    // 0x549834: 0x0  nop
    ctx->pc = 0x549834u;
    // NOP
label_549838:
    // 0x549838: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x549838u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_54983c:
    // 0x54983c: 0xc6140008  lwc1        $f20, 0x8($s0)
    ctx->pc = 0x54983cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_549840:
    // 0x549840: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x549840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_549844:
    // 0x549844: 0x46146380  add.s       $f14, $f12, $f20
    ctx->pc = 0x549844u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
label_549848:
    // 0x549848: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_54984c:
    if (ctx->pc == 0x54984Cu) {
        ctx->pc = 0x54984Cu;
            // 0x54984c: 0x46016bc0  add.s       $f15, $f13, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
        ctx->pc = 0x549850u;
        goto label_549850;
    }
    ctx->pc = 0x549848u;
    {
        const bool branch_taken_0x549848 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x54984Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549848u;
            // 0x54984c: 0x46016bc0  add.s       $f15, $f13, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x549848) {
            ctx->pc = 0x54985Cu;
            goto label_54985c;
        }
    }
    ctx->pc = 0x549850u;
label_549850:
    // 0x549850: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x549850u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549854:
    // 0x549854: 0x10000008  b           . + 4 + (0x8 << 2)
label_549858:
    if (ctx->pc == 0x549858u) {
        ctx->pc = 0x549858u;
            // 0x549858: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54985Cu;
        goto label_54985c;
    }
    ctx->pc = 0x549854u;
    {
        const bool branch_taken_0x549854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x549858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549854u;
            // 0x549858: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x549854) {
            ctx->pc = 0x549878u;
            goto label_549878;
        }
    }
    ctx->pc = 0x54985Cu;
label_54985c:
    // 0x54985c: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x54985cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_549860:
    // 0x549860: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x549860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_549864:
    // 0x549864: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x549864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_549868:
    // 0x549868: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x549868u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54986c:
    // 0x54986c: 0x0  nop
    ctx->pc = 0x54986cu;
    // NOP
label_549870:
    // 0x549870: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x549870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_549874:
    // 0x549874: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x549874u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_549878:
    // 0x549878: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_54987c:
    if (ctx->pc == 0x54987Cu) {
        ctx->pc = 0x54987Cu;
            // 0x54987c: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x549880u;
        goto label_549880;
    }
    ctx->pc = 0x549878u;
    {
        const bool branch_taken_0x549878 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x549878) {
            ctx->pc = 0x54987Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x549878u;
            // 0x54987c: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54988Cu;
            goto label_54988c;
        }
    }
    ctx->pc = 0x549880u;
label_549880:
    // 0x549880: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x549880u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549884:
    // 0x549884: 0x10000007  b           . + 4 + (0x7 << 2)
label_549888:
    if (ctx->pc == 0x549888u) {
        ctx->pc = 0x549888u;
            // 0x549888: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54988Cu;
        goto label_54988c;
    }
    ctx->pc = 0x549884u;
    {
        const bool branch_taken_0x549884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x549888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549884u;
            // 0x549888: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x549884) {
            ctx->pc = 0x5498A4u;
            goto label_5498a4;
        }
    }
    ctx->pc = 0x54988Cu;
label_54988c:
    // 0x54988c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54988cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_549890:
    // 0x549890: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x549890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_549894:
    // 0x549894: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x549894u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549898:
    // 0x549898: 0x0  nop
    ctx->pc = 0x549898u;
    // NOP
label_54989c:
    // 0x54989c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54989cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_5498a0:
    // 0x5498a0: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x5498a0u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_5498a4:
    // 0x5498a4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5498a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_5498a8:
    // 0x5498a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x5498a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5498ac:
    // 0x5498ac: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x5498acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_5498b0:
    // 0x5498b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x5498b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5498b4:
    // 0x5498b4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x5498b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_5498b8:
    // 0x5498b8: 0xc0bc284  jal         func_2F0A10
label_5498bc:
    if (ctx->pc == 0x5498BCu) {
        ctx->pc = 0x5498BCu;
            // 0x5498bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5498C0u;
        goto label_5498c0;
    }
    ctx->pc = 0x5498B8u;
    SET_GPR_U32(ctx, 31, 0x5498C0u);
    ctx->pc = 0x5498BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5498B8u;
            // 0x5498bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5498C0u; }
        if (ctx->pc != 0x5498C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5498C0u; }
        if (ctx->pc != 0x5498C0u) { return; }
    }
    ctx->pc = 0x5498C0u;
label_5498c0:
    // 0x5498c0: 0x87c2000c  lh          $v0, 0xC($fp)
    ctx->pc = 0x5498c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
label_5498c4:
    // 0x5498c4: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x5498c4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5498c8:
    // 0x5498c8: 0x0  nop
    ctx->pc = 0x5498c8u;
    // NOP
label_5498cc:
    // 0x5498cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5498ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_5498d0:
    // 0x5498d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5498d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5498d4:
    // 0x5498d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x5498d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5498d8:
    // 0x5498d8: 0x0  nop
    ctx->pc = 0x5498d8u;
    // NOP
label_5498dc:
    // 0x5498dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x5498dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_5498e0:
    // 0x5498e0: 0x4601a040  add.s       $f1, $f20, $f1
    ctx->pc = 0x5498e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_5498e4:
    // 0x5498e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x5498e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_5498e8:
    // 0x5498e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5498e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_5498ec:
    // 0x5498ec: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x5498ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_5498f0:
    // 0x5498f0: 0x1283002b  beq         $s4, $v1, . + 4 + (0x2B << 2)
label_5498f4:
    if (ctx->pc == 0x5498F4u) {
        ctx->pc = 0x5498F4u;
            // 0x5498f4: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->pc = 0x5498F8u;
        goto label_5498f8;
    }
    ctx->pc = 0x5498F0u;
    {
        const bool branch_taken_0x5498f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x5498F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5498F0u;
            // 0x5498f4: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5498f0) {
            ctx->pc = 0x5499A0u;
            goto label_5499a0;
        }
    }
    ctx->pc = 0x5498F8u;
label_5498f8:
    // 0x5498f8: 0x5280002a  beql        $s4, $zero, . + 4 + (0x2A << 2)
label_5498fc:
    if (ctx->pc == 0x5498FCu) {
        ctx->pc = 0x5498FCu;
            // 0x5498fc: 0x26700200  addiu       $s0, $s3, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
        ctx->pc = 0x549900u;
        goto label_549900;
    }
    ctx->pc = 0x5498F8u;
    {
        const bool branch_taken_0x5498f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x5498f8) {
            ctx->pc = 0x5498FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5498F8u;
            // 0x5498fc: 0x26700200  addiu       $s0, $s3, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5499A4u;
            goto label_5499a4;
        }
    }
    ctx->pc = 0x549900u;
label_549900:
    // 0x549900: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x549900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_549904:
    // 0x549904: 0x12820003  beq         $s4, $v0, . + 4 + (0x3 << 2)
label_549908:
    if (ctx->pc == 0x549908u) {
        ctx->pc = 0x54990Cu;
        goto label_54990c;
    }
    ctx->pc = 0x549904u;
    {
        const bool branch_taken_0x549904 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x549904) {
            ctx->pc = 0x549914u;
            goto label_549914;
        }
    }
    ctx->pc = 0x54990Cu;
label_54990c:
    // 0x54990c: 0x10000026  b           . + 4 + (0x26 << 2)
label_549910:
    if (ctx->pc == 0x549910u) {
        ctx->pc = 0x549910u;
            // 0x549910: 0x7ba200b0  lq          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x549914u;
        goto label_549914;
    }
    ctx->pc = 0x54990Cu;
    {
        const bool branch_taken_0x54990c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x549910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54990Cu;
            // 0x549910: 0x7ba200b0  lq          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54990c) {
            ctx->pc = 0x5499A8u;
            goto label_5499a8;
        }
    }
    ctx->pc = 0x549914u;
label_549914:
    // 0x549914: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x549914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_549918:
    // 0x549918: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x549918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_54991c:
    // 0x54991c: 0x24a5d9c0  addiu       $a1, $a1, -0x2640
    ctx->pc = 0x54991cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957504));
label_549920:
    // 0x549920: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x549920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_549924:
    // 0x549924: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x549924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_549928:
    // 0x549928: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x549928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_54992c:
    // 0x54992c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x54992cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_549930:
    // 0x549930: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x549930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_549934:
    // 0x549934: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x549934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_549938:
    // 0x549938: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
label_54993c:
    if (ctx->pc == 0x54993Cu) {
        ctx->pc = 0x549940u;
        goto label_549940;
    }
    ctx->pc = 0x549938u;
    {
        const bool branch_taken_0x549938 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x549938) {
            ctx->pc = 0x549924u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_549924;
        }
    }
    ctx->pc = 0x549940u;
label_549940:
    // 0x549940: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x549940u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_549944:
    // 0x549944: 0x27b40150  addiu       $s4, $sp, 0x150
    ctx->pc = 0x549944u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_549948:
    // 0x549948: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x549948u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_54994c:
    // 0x54994c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x54994cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_549950:
    // 0x549950: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
label_549954:
    if (ctx->pc == 0x549954u) {
        ctx->pc = 0x549958u;
        goto label_549958;
    }
    ctx->pc = 0x549950u;
    {
        const bool branch_taken_0x549950 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x549950) {
            ctx->pc = 0x549980u;
            goto label_549980;
        }
    }
    ctx->pc = 0x549958u;
label_549958:
    // 0x549958: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x549958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_54995c:
    // 0x54995c: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_549960:
    if (ctx->pc == 0x549960u) {
        ctx->pc = 0x549964u;
        goto label_549964;
    }
    ctx->pc = 0x54995Cu;
    {
        const bool branch_taken_0x54995c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x54995c) {
            ctx->pc = 0x549980u;
            goto label_549980;
        }
    }
    ctx->pc = 0x549964u;
label_549964:
    // 0x549964: 0x0  nop
    ctx->pc = 0x549964u;
    // NOP
label_549968:
    // 0x549968: 0x26c40030  addiu       $a0, $s6, 0x30
    ctx->pc = 0x549968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
label_54996c:
    // 0x54996c: 0xc0b90e0  jal         func_2E4380
label_549970:
    if (ctx->pc == 0x549970u) {
        ctx->pc = 0x549970u;
            // 0x549970: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x549974u;
        goto label_549974;
    }
    ctx->pc = 0x54996Cu;
    SET_GPR_U32(ctx, 31, 0x549974u);
    ctx->pc = 0x549970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54996Cu;
            // 0x549970: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x549974u; }
        if (ctx->pc != 0x549974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x549974u; }
        if (ctx->pc != 0x549974u) { return; }
    }
    ctx->pc = 0x549974u;
label_549974:
    // 0x549974: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_549978:
    if (ctx->pc == 0x549978u) {
        ctx->pc = 0x54997Cu;
        goto label_54997c;
    }
    ctx->pc = 0x549974u;
    {
        const bool branch_taken_0x549974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x549974) {
            ctx->pc = 0x549990u;
            goto label_549990;
        }
    }
    ctx->pc = 0x54997Cu;
label_54997c:
    // 0x54997c: 0x0  nop
    ctx->pc = 0x54997cu;
    // NOP
label_549980:
    // 0x549980: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x549980u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_549984:
    // 0x549984: 0x2aa2000d  slti        $v0, $s5, 0xD
    ctx->pc = 0x549984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)13) ? 1 : 0);
label_549988:
    // 0x549988: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_54998c:
    if (ctx->pc == 0x54998Cu) {
        ctx->pc = 0x54998Cu;
            // 0x54998c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x549990u;
        goto label_549990;
    }
    ctx->pc = 0x549988u;
    {
        const bool branch_taken_0x549988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x54998Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549988u;
            // 0x54998c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x549988) {
            ctx->pc = 0x549948u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_549948;
        }
    }
    ctx->pc = 0x549990u;
label_549990:
    // 0x549990: 0x2602000f  addiu       $v0, $s0, 0xF
    ctx->pc = 0x549990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
label_549994:
    // 0x549994: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x549994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_549998:
    // 0x549998: 0x10000002  b           . + 4 + (0x2 << 2)
label_54999c:
    if (ctx->pc == 0x54999Cu) {
        ctx->pc = 0x54999Cu;
            // 0x54999c: 0x2628021  addu        $s0, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->pc = 0x5499A0u;
        goto label_5499a0;
    }
    ctx->pc = 0x549998u;
    {
        const bool branch_taken_0x549998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54999Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549998u;
            // 0x54999c: 0x2628021  addu        $s0, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x549998) {
            ctx->pc = 0x5499A4u;
            goto label_5499a4;
        }
    }
    ctx->pc = 0x5499A0u;
label_5499a0:
    // 0x5499a0: 0x267001f0  addiu       $s0, $s3, 0x1F0
    ctx->pc = 0x5499a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 496));
label_5499a4:
    // 0x5499a4: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x5499a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_5499a8:
    // 0x5499a8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x5499a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5499ac:
    // 0x5499ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5499acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5499b0:
    // 0x5499b0: 0x0  nop
    ctx->pc = 0x5499b0u;
    // NOP
label_5499b4:
    // 0x5499b4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x5499b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_5499b8:
    // 0x5499b8: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x5499b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_5499bc:
    // 0x5499bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5499bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5499c0:
    // 0x5499c0: 0x0  nop
    ctx->pc = 0x5499c0u;
    // NOP
label_5499c4:
    // 0x5499c4: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x5499c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_5499c8:
    // 0x5499c8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x5499c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5499cc:
    // 0x5499cc: 0x46016380  add.s       $f14, $f12, $f1
    ctx->pc = 0x5499ccu;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_5499d0:
    // 0x5499d0: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_5499d4:
    if (ctx->pc == 0x5499D4u) {
        ctx->pc = 0x5499D4u;
            // 0x5499d4: 0x46006bc0  add.s       $f15, $f13, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->pc = 0x5499D8u;
        goto label_5499d8;
    }
    ctx->pc = 0x5499D0u;
    {
        const bool branch_taken_0x5499d0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x5499D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5499D0u;
            // 0x5499d4: 0x46006bc0  add.s       $f15, $f13, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5499d0) {
            ctx->pc = 0x5499E4u;
            goto label_5499e4;
        }
    }
    ctx->pc = 0x5499D8u;
label_5499d8:
    // 0x5499d8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x5499d8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5499dc:
    // 0x5499dc: 0x10000008  b           . + 4 + (0x8 << 2)
label_5499e0:
    if (ctx->pc == 0x5499E0u) {
        ctx->pc = 0x5499E0u;
            // 0x5499e0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5499E4u;
        goto label_5499e4;
    }
    ctx->pc = 0x5499DCu;
    {
        const bool branch_taken_0x5499dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5499E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5499DCu;
            // 0x5499e0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5499dc) {
            ctx->pc = 0x549A00u;
            goto label_549a00;
        }
    }
    ctx->pc = 0x5499E4u;
label_5499e4:
    // 0x5499e4: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x5499e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_5499e8:
    // 0x5499e8: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x5499e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_5499ec:
    // 0x5499ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5499ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5499f0:
    // 0x5499f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5499f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5499f4:
    // 0x5499f4: 0x0  nop
    ctx->pc = 0x5499f4u;
    // NOP
label_5499f8:
    // 0x5499f8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x5499f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_5499fc:
    // 0x5499fc: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x5499fcu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_549a00:
    // 0x549a00: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_549a04:
    if (ctx->pc == 0x549A04u) {
        ctx->pc = 0x549A04u;
            // 0x549a04: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x549A08u;
        goto label_549a08;
    }
    ctx->pc = 0x549A00u;
    {
        const bool branch_taken_0x549a00 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x549a00) {
            ctx->pc = 0x549A04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x549A00u;
            // 0x549a04: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x549A14u;
            goto label_549a14;
        }
    }
    ctx->pc = 0x549A08u;
label_549a08:
    // 0x549a08: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x549a08u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549a0c:
    // 0x549a0c: 0x10000007  b           . + 4 + (0x7 << 2)
label_549a10:
    if (ctx->pc == 0x549A10u) {
        ctx->pc = 0x549A10u;
            // 0x549a10: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x549A14u;
        goto label_549a14;
    }
    ctx->pc = 0x549A0Cu;
    {
        const bool branch_taken_0x549a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x549A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549A0Cu;
            // 0x549a10: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x549a0c) {
            ctx->pc = 0x549A2Cu;
            goto label_549a2c;
        }
    }
    ctx->pc = 0x549A14u;
label_549a14:
    // 0x549a14: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x549a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_549a18:
    // 0x549a18: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x549a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_549a1c:
    // 0x549a1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x549a1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549a20:
    // 0x549a20: 0x0  nop
    ctx->pc = 0x549a20u;
    // NOP
label_549a24:
    // 0x549a24: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x549a24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_549a28:
    // 0x549a28: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x549a28u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_549a2c:
    // 0x549a2c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x549a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_549a30:
    // 0x549a30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x549a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_549a34:
    // 0x549a34: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x549a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_549a38:
    // 0x549a38: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x549a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_549a3c:
    // 0x549a3c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x549a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_549a40:
    // 0x549a40: 0xc0bc284  jal         func_2F0A10
label_549a44:
    if (ctx->pc == 0x549A44u) {
        ctx->pc = 0x549A44u;
            // 0x549a44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x549A48u;
        goto label_549a48;
    }
    ctx->pc = 0x549A40u;
    SET_GPR_U32(ctx, 31, 0x549A48u);
    ctx->pc = 0x549A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x549A40u;
            // 0x549a44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x549A48u; }
        if (ctx->pc != 0x549A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x549A48u; }
        if (ctx->pc != 0x549A48u) { return; }
    }
    ctx->pc = 0x549A48u;
label_549a48:
    // 0x549a48: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x549a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_549a4c:
    // 0x549a4c: 0x26700080  addiu       $s0, $s3, 0x80
    ctx->pc = 0x549a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
label_549a50:
    // 0x549a50: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x549a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_549a54:
    // 0x549a54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x549a54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549a58:
    // 0x549a58: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x549a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_549a5c:
    // 0x549a5c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x549a5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_549a60:
    // 0x549a60: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x549a60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_549a64:
    // 0x549a64: 0x87c2000e  lh          $v0, 0xE($fp)
    ctx->pc = 0x549a64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
label_549a68:
    // 0x549a68: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x549a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_549a6c:
    // 0x549a6c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x549a6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_549a70:
    // 0x549a70: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x549a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_549a74:
    // 0x549a74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x549a74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549a78:
    // 0x549a78: 0x0  nop
    ctx->pc = 0x549a78u;
    // NOP
label_549a7c:
    // 0x549a7c: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x549a7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_549a80:
    // 0x549a80: 0x8fa20114  lw          $v0, 0x114($sp)
    ctx->pc = 0x549a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_549a84:
    // 0x549a84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x549a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549a88:
    // 0x549a88: 0x0  nop
    ctx->pc = 0x549a88u;
    // NOP
label_549a8c:
    // 0x549a8c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x549a8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_549a90:
    // 0x549a90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x549a90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549a94:
    // 0x549a94: 0x0  nop
    ctx->pc = 0x549a94u;
    // NOP
label_549a98:
    // 0x549a98: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x549a98u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_549a9c:
    // 0x549a9c: 0x46021d1c  madd.s      $f20, $f3, $f2
    ctx->pc = 0x549a9cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_549aa0:
    // 0x549aa0: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x549aa0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_549aa4:
    // 0x549aa4: 0xc6620088  lwc1        $f2, 0x88($s3)
    ctx->pc = 0x549aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_549aa8:
    // 0x549aa8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x549aa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_549aac:
    // 0x549aac: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x549aacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_549ab0:
    // 0x549ab0: 0xc661008c  lwc1        $f1, 0x8C($s3)
    ctx->pc = 0x549ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_549ab4:
    // 0x549ab4: 0x46020301  sub.s       $f12, $f0, $f2
    ctx->pc = 0x549ab4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_549ab8:
    // 0x549ab8: 0x46016bc0  add.s       $f15, $f13, $f1
    ctx->pc = 0x549ab8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
label_549abc:
    // 0x549abc: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_549ac0:
    if (ctx->pc == 0x549AC0u) {
        ctx->pc = 0x549AC0u;
            // 0x549ac0: 0x46020380  add.s       $f14, $f0, $f2 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x549AC4u;
        goto label_549ac4;
    }
    ctx->pc = 0x549ABCu;
    {
        const bool branch_taken_0x549abc = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x549AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549ABCu;
            // 0x549ac0: 0x46020380  add.s       $f14, $f0, $f2 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x549abc) {
            ctx->pc = 0x549AD0u;
            goto label_549ad0;
        }
    }
    ctx->pc = 0x549AC4u;
label_549ac4:
    // 0x549ac4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x549ac4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549ac8:
    // 0x549ac8: 0x10000008  b           . + 4 + (0x8 << 2)
label_549acc:
    if (ctx->pc == 0x549ACCu) {
        ctx->pc = 0x549ACCu;
            // 0x549acc: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x549AD0u;
        goto label_549ad0;
    }
    ctx->pc = 0x549AC8u;
    {
        const bool branch_taken_0x549ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x549ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549AC8u;
            // 0x549acc: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x549ac8) {
            ctx->pc = 0x549AECu;
            goto label_549aec;
        }
    }
    ctx->pc = 0x549AD0u;
label_549ad0:
    // 0x549ad0: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x549ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_549ad4:
    // 0x549ad4: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x549ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_549ad8:
    // 0x549ad8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x549ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_549adc:
    // 0x549adc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x549adcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549ae0:
    // 0x549ae0: 0x0  nop
    ctx->pc = 0x549ae0u;
    // NOP
label_549ae4:
    // 0x549ae4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x549ae4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_549ae8:
    // 0x549ae8: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x549ae8u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_549aec:
    // 0x549aec: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_549af0:
    if (ctx->pc == 0x549AF0u) {
        ctx->pc = 0x549AF0u;
            // 0x549af0: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x549AF4u;
        goto label_549af4;
    }
    ctx->pc = 0x549AECu;
    {
        const bool branch_taken_0x549aec = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x549aec) {
            ctx->pc = 0x549AF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x549AECu;
            // 0x549af0: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x549B00u;
            goto label_549b00;
        }
    }
    ctx->pc = 0x549AF4u;
label_549af4:
    // 0x549af4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x549af4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549af8:
    // 0x549af8: 0x10000007  b           . + 4 + (0x7 << 2)
label_549afc:
    if (ctx->pc == 0x549AFCu) {
        ctx->pc = 0x549AFCu;
            // 0x549afc: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x549B00u;
        goto label_549b00;
    }
    ctx->pc = 0x549AF8u;
    {
        const bool branch_taken_0x549af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x549AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549AF8u;
            // 0x549afc: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x549af8) {
            ctx->pc = 0x549B18u;
            goto label_549b18;
        }
    }
    ctx->pc = 0x549B00u;
label_549b00:
    // 0x549b00: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x549b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_549b04:
    // 0x549b04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x549b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_549b08:
    // 0x549b08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x549b08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549b0c:
    // 0x549b0c: 0x0  nop
    ctx->pc = 0x549b0cu;
    // NOP
label_549b10:
    // 0x549b10: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x549b10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_549b14:
    // 0x549b14: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x549b14u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_549b18:
    // 0x549b18: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x549b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_549b1c:
    // 0x549b1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x549b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_549b20:
    // 0x549b20: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x549b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_549b24:
    // 0x549b24: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x549b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_549b28:
    // 0x549b28: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x549b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_549b2c:
    // 0x549b2c: 0xc0bc284  jal         func_2F0A10
label_549b30:
    if (ctx->pc == 0x549B30u) {
        ctx->pc = 0x549B30u;
            // 0x549b30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x549B34u;
        goto label_549b34;
    }
    ctx->pc = 0x549B2Cu;
    SET_GPR_U32(ctx, 31, 0x549B34u);
    ctx->pc = 0x549B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x549B2Cu;
            // 0x549b30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x549B34u; }
        if (ctx->pc != 0x549B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x549B34u; }
        if (ctx->pc != 0x549B34u) { return; }
    }
    ctx->pc = 0x549B34u;
label_549b34:
    // 0x549b34: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x549b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_549b38:
    // 0x549b38: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x549b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_549b3c:
    // 0x549b3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x549b3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_549b40:
    // 0x549b40: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x549b40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_549b44:
    // 0x549b44: 0x320f809  jalr        $t9
label_549b48:
    if (ctx->pc == 0x549B48u) {
        ctx->pc = 0x549B4Cu;
        goto label_549b4c;
    }
    ctx->pc = 0x549B44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x549B4Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x549B4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x549B4Cu; }
            if (ctx->pc != 0x549B4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x549B4Cu;
label_549b4c:
    // 0x549b4c: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x549b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_549b50:
    // 0x549b50: 0x8c430068  lw          $v1, 0x68($v0)
    ctx->pc = 0x549b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_549b54:
    // 0x549b54: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x549b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_549b58:
    // 0x549b58: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x549b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_549b5c:
    // 0x549b5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x549b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_549b60:
    // 0x549b60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x549b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_549b64:
    // 0x549b64: 0x8c44012c  lw          $a0, 0x12C($v0)
    ctx->pc = 0x549b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_549b68:
    // 0x549b68: 0xc0506ac  jal         func_141AB0
label_549b6c:
    if (ctx->pc == 0x549B6Cu) {
        ctx->pc = 0x549B6Cu;
            // 0x549b6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x549B70u;
        goto label_549b70;
    }
    ctx->pc = 0x549B68u;
    SET_GPR_U32(ctx, 31, 0x549B70u);
    ctx->pc = 0x549B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x549B68u;
            // 0x549b6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x549B70u; }
        if (ctx->pc != 0x549B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x549B70u; }
        if (ctx->pc != 0x549B70u) { return; }
    }
    ctx->pc = 0x549B70u;
label_549b70:
    // 0x549b70: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x549b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_549b74:
    // 0x549b74: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x549b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_549b78:
    // 0x549b78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x549b78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_549b7c:
    // 0x549b7c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x549b7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_549b80:
    // 0x549b80: 0x320f809  jalr        $t9
label_549b84:
    if (ctx->pc == 0x549B84u) {
        ctx->pc = 0x549B84u;
            // 0x549b84: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x549B88u;
        goto label_549b88;
    }
    ctx->pc = 0x549B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x549B88u);
        ctx->pc = 0x549B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549B80u;
            // 0x549b84: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x549B88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x549B88u; }
            if (ctx->pc != 0x549B88u) { return; }
        }
        }
    }
    ctx->pc = 0x549B88u;
label_549b88:
    // 0x549b88: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x549b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_549b8c:
    // 0x549b8c: 0x87c60010  lh          $a2, 0x10($fp)
    ctx->pc = 0x549b8cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
label_549b90:
    // 0x549b90: 0x87c40012  lh          $a0, 0x12($fp)
    ctx->pc = 0x549b90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 18)));
label_549b94:
    // 0x549b94: 0x24420016  addiu       $v0, $v0, 0x16
    ctx->pc = 0x549b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22));
label_549b98:
    // 0x549b98: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x549b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_549b9c:
    // 0x549b9c: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x549b9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_549ba0:
    // 0x549ba0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x549ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_549ba4:
    // 0x549ba4: 0x8fa20114  lw          $v0, 0x114($sp)
    ctx->pc = 0x549ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_549ba8:
    // 0x549ba8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x549ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_549bac:
    // 0x549bac: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x549bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_549bb0:
    // 0x549bb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x549bb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549bb4:
    // 0x549bb4: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x549bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_549bb8:
    // 0x549bb8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x549bb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_549bbc:
    // 0x549bbc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x549bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_549bc0:
    // 0x549bc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x549bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549bc4:
    // 0x549bc4: 0x0  nop
    ctx->pc = 0x549bc4u;
    // NOP
label_549bc8:
    // 0x549bc8: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x549bc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_549bcc:
    // 0x549bcc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x549bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_549bd0:
    // 0x549bd0: 0x46016380  add.s       $f14, $f12, $f1
    ctx->pc = 0x549bd0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_549bd4:
    // 0x549bd4: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_549bd8:
    if (ctx->pc == 0x549BD8u) {
        ctx->pc = 0x549BD8u;
            // 0x549bd8: 0x46006bc0  add.s       $f15, $f13, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->pc = 0x549BDCu;
        goto label_549bdc;
    }
    ctx->pc = 0x549BD4u;
    {
        const bool branch_taken_0x549bd4 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x549BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549BD4u;
            // 0x549bd8: 0x46006bc0  add.s       $f15, $f13, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x549bd4) {
            ctx->pc = 0x549BE8u;
            goto label_549be8;
        }
    }
    ctx->pc = 0x549BDCu;
label_549bdc:
    // 0x549bdc: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x549bdcu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549be0:
    // 0x549be0: 0x10000008  b           . + 4 + (0x8 << 2)
label_549be4:
    if (ctx->pc == 0x549BE4u) {
        ctx->pc = 0x549BE4u;
            // 0x549be4: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x549BE8u;
        goto label_549be8;
    }
    ctx->pc = 0x549BE0u;
    {
        const bool branch_taken_0x549be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x549BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549BE0u;
            // 0x549be4: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x549be0) {
            ctx->pc = 0x549C04u;
            goto label_549c04;
        }
    }
    ctx->pc = 0x549BE8u;
label_549be8:
    // 0x549be8: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x549be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_549bec:
    // 0x549bec: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x549becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_549bf0:
    // 0x549bf0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x549bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_549bf4:
    // 0x549bf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x549bf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549bf8:
    // 0x549bf8: 0x0  nop
    ctx->pc = 0x549bf8u;
    // NOP
label_549bfc:
    // 0x549bfc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x549bfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_549c00:
    // 0x549c00: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x549c00u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_549c04:
    // 0x549c04: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_549c08:
    if (ctx->pc == 0x549C08u) {
        ctx->pc = 0x549C08u;
            // 0x549c08: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x549C0Cu;
        goto label_549c0c;
    }
    ctx->pc = 0x549C04u;
    {
        const bool branch_taken_0x549c04 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x549c04) {
            ctx->pc = 0x549C08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x549C04u;
            // 0x549c08: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x549C18u;
            goto label_549c18;
        }
    }
    ctx->pc = 0x549C0Cu;
label_549c0c:
    // 0x549c0c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x549c0cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549c10:
    // 0x549c10: 0x10000007  b           . + 4 + (0x7 << 2)
label_549c14:
    if (ctx->pc == 0x549C14u) {
        ctx->pc = 0x549C14u;
            // 0x549c14: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x549C18u;
        goto label_549c18;
    }
    ctx->pc = 0x549C10u;
    {
        const bool branch_taken_0x549c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x549C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549C10u;
            // 0x549c14: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x549c10) {
            ctx->pc = 0x549C30u;
            goto label_549c30;
        }
    }
    ctx->pc = 0x549C18u;
label_549c18:
    // 0x549c18: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x549c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_549c1c:
    // 0x549c1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x549c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_549c20:
    // 0x549c20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x549c20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549c24:
    // 0x549c24: 0x0  nop
    ctx->pc = 0x549c24u;
    // NOP
label_549c28:
    // 0x549c28: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x549c28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_549c2c:
    // 0x549c2c: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x549c2cu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_549c30:
    // 0x549c30: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x549c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_549c34:
    // 0x549c34: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x549c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_549c38:
    // 0x549c38: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x549c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_549c3c:
    // 0x549c3c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x549c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_549c40:
    // 0x549c40: 0xc0bc284  jal         func_2F0A10
label_549c44:
    if (ctx->pc == 0x549C44u) {
        ctx->pc = 0x549C44u;
            // 0x549c44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x549C48u;
        goto label_549c48;
    }
    ctx->pc = 0x549C40u;
    SET_GPR_U32(ctx, 31, 0x549C48u);
    ctx->pc = 0x549C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x549C40u;
            // 0x549c44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x549C48u; }
        if (ctx->pc != 0x549C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x549C48u; }
        if (ctx->pc != 0x549C48u) { return; }
    }
    ctx->pc = 0x549C48u;
label_549c48:
    // 0x549c48: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x549c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_549c4c:
    // 0x549c4c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x549c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_549c50:
    // 0x549c50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x549c50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_549c54:
    // 0x549c54: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x549c54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_549c58:
    // 0x549c58: 0x320f809  jalr        $t9
label_549c5c:
    if (ctx->pc == 0x549C5Cu) {
        ctx->pc = 0x549C60u;
        goto label_549c60;
    }
    ctx->pc = 0x549C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x549C60u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x549C60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x549C60u; }
            if (ctx->pc != 0x549C60u) { return; }
        }
        }
    }
    ctx->pc = 0x549C60u;
label_549c60:
    // 0x549c60: 0x93a300f0  lbu         $v1, 0xF0($sp)
    ctx->pc = 0x549c60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
label_549c64:
    // 0x549c64: 0x506000a0  beql        $v1, $zero, . + 4 + (0xA0 << 2)
label_549c68:
    if (ctx->pc == 0x549C68u) {
        ctx->pc = 0x549C68u;
            // 0x549c68: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x549C6Cu;
        goto label_549c6c;
    }
    ctx->pc = 0x549C64u;
    {
        const bool branch_taken_0x549c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x549c64) {
            ctx->pc = 0x549C68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x549C64u;
            // 0x549c68: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x549EE8u;
            goto label_549ee8;
        }
    }
    ctx->pc = 0x549C6Cu;
label_549c6c:
    // 0x549c6c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x549c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_549c70:
    // 0x549c70: 0x87c4000e  lh          $a0, 0xE($fp)
    ctx->pc = 0x549c70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
label_549c74:
    // 0x549c74: 0x8c450ec8  lw          $a1, 0xEC8($v0)
    ctx->pc = 0x549c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_549c78:
    // 0x549c78: 0x3c0bbf80  lui         $t3, 0xBF80
    ctx->pc = 0x549c78u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)49024 << 16));
label_549c7c:
    // 0x549c7c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x549c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_549c80:
    // 0x549c80: 0x27a70190  addiu       $a3, $sp, 0x190
    ctx->pc = 0x549c80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_549c84:
    // 0x549c84: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x549c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_549c88:
    // 0x549c88: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x549c88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_549c8c:
    // 0x549c8c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x549c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_549c90:
    // 0x549c90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x549c90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_549c94:
    // 0x549c94: 0x8c520e68  lw          $s2, 0xE68($v0)
    ctx->pc = 0x549c94u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_549c98:
    // 0x549c98: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x549c98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549c9c:
    // 0x549c9c: 0x0  nop
    ctx->pc = 0x549c9cu;
    // NOP
label_549ca0:
    // 0x549ca0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x549ca0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_549ca4:
    // 0x549ca4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x549ca4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_549ca8:
    // 0x549ca8: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x549ca8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_549cac:
    // 0x549cac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x549cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_549cb0:
    // 0x549cb0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x549cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_549cb4:
    // 0x549cb4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x549cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_549cb8:
    // 0x549cb8: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x549cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_549cbc:
    // 0x549cbc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x549cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_549cc0:
    // 0x549cc0: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x549cc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_549cc4:
    // 0x549cc4: 0xafab0198  sw          $t3, 0x198($sp)
    ctx->pc = 0x549cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 11));
label_549cc8:
    // 0x549cc8: 0xe7a00194  swc1        $f0, 0x194($sp)
    ctx->pc = 0x549cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_549ccc:
    // 0x549ccc: 0x24500410  addiu       $s0, $v0, 0x410
    ctx->pc = 0x549cccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1040));
label_549cd0:
    // 0x549cd0: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x549cd0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_549cd4:
    // 0x549cd4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x549cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_549cd8:
    // 0x549cd8: 0xc0ee43c  jal         func_3B90F0
label_549cdc:
    if (ctx->pc == 0x549CDCu) {
        ctx->pc = 0x549CDCu;
            // 0x549cdc: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x549CE0u;
        goto label_549ce0;
    }
    ctx->pc = 0x549CD8u;
    SET_GPR_U32(ctx, 31, 0x549CE0u);
    ctx->pc = 0x549CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x549CD8u;
            // 0x549cdc: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B90F0u;
    if (runtime->hasFunction(0x3B90F0u)) {
        auto targetFn = runtime->lookupFunction(0x3B90F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x549CE0u; }
        if (ctx->pc != 0x549CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B90F0_0x3b90f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x549CE0u; }
        if (ctx->pc != 0x549CE0u) { return; }
    }
    ctx->pc = 0x549CE0u;
label_549ce0:
    // 0x549ce0: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x549ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
label_549ce4:
    // 0x549ce4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x549ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_549ce8:
    // 0x549ce8: 0xc7a20190  lwc1        $f2, 0x190($sp)
    ctx->pc = 0x549ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_549cec:
    // 0x549cec: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x549cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_549cf0:
    // 0x549cf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x549cf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549cf4:
    // 0x549cf4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x549cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_549cf8:
    // 0x549cf8: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x549cf8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_549cfc:
    // 0x549cfc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x549cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_549d00:
    // 0x549d00: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x549d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_549d04:
    // 0x549d04: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x549d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_549d08:
    // 0x549d08: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x549d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_549d0c:
    // 0x549d0c: 0xc7a30148  lwc1        $f3, 0x148($sp)
    ctx->pc = 0x549d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_549d10:
    // 0x549d10: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x549d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_549d14:
    // 0x549d14: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x549d14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_549d18:
    // 0x549d18: 0x4603209d  msub.s      $f2, $f4, $f3
    ctx->pc = 0x549d18u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_549d1c:
    // 0x549d1c: 0xe7a20190  swc1        $f2, 0x190($sp)
    ctx->pc = 0x549d1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_549d20:
    // 0x549d20: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_549d24:
    if (ctx->pc == 0x549D24u) {
        ctx->pc = 0x549D24u;
            // 0x549d24: 0xe7a00194  swc1        $f0, 0x194($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
        ctx->pc = 0x549D28u;
        goto label_549d28;
    }
    ctx->pc = 0x549D20u;
    {
        const bool branch_taken_0x549d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x549D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549D20u;
            // 0x549d24: 0xe7a00194  swc1        $f0, 0x194($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x549d20) {
            ctx->pc = 0x549D44u;
            goto label_549d44;
        }
    }
    ctx->pc = 0x549D28u;
label_549d28:
    // 0x549d28: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x549d28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_549d2c:
    // 0x549d2c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x549d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_549d30:
    // 0x549d30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x549d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_549d34:
    // 0x549d34: 0x0  nop
    ctx->pc = 0x549d34u;
    // NOP
label_549d38:
    // 0x549d38: 0x0  nop
    ctx->pc = 0x549d38u;
    // NOP
label_549d3c:
    // 0x549d3c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_549d40:
    if (ctx->pc == 0x549D40u) {
        ctx->pc = 0x549D44u;
        goto label_549d44;
    }
    ctx->pc = 0x549D3Cu;
    {
        const bool branch_taken_0x549d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x549d3c) {
            ctx->pc = 0x549D28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_549d28;
        }
    }
    ctx->pc = 0x549D44u;
label_549d44:
    // 0x549d44: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x549d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
label_549d48:
    // 0x549d48: 0x2e21024  and         $v0, $s7, $v0
    ctx->pc = 0x549d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & GPR_U64(ctx, 2));
label_549d4c:
    // 0x549d4c: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x549d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
label_549d50:
    // 0x549d50: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_549d54:
    if (ctx->pc == 0x549D54u) {
        ctx->pc = 0x549D54u;
            // 0x549d54: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x549D58u;
        goto label_549d58;
    }
    ctx->pc = 0x549D50u;
    {
        const bool branch_taken_0x549d50 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x549d50) {
            ctx->pc = 0x549D54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x549D50u;
            // 0x549d54: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x549D64u;
            goto label_549d64;
        }
    }
    ctx->pc = 0x549D58u;
label_549d58:
    // 0x549d58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x549d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549d5c:
    // 0x549d5c: 0x10000007  b           . + 4 + (0x7 << 2)
label_549d60:
    if (ctx->pc == 0x549D60u) {
        ctx->pc = 0x549D60u;
            // 0x549d60: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x549D64u;
        goto label_549d64;
    }
    ctx->pc = 0x549D5Cu;
    {
        const bool branch_taken_0x549d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x549D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549D5Cu;
            // 0x549d60: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x549d5c) {
            ctx->pc = 0x549D7Cu;
            goto label_549d7c;
        }
    }
    ctx->pc = 0x549D64u;
label_549d64:
    // 0x549d64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x549d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_549d68:
    // 0x549d68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x549d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_549d6c:
    // 0x549d6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x549d6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549d70:
    // 0x549d70: 0x0  nop
    ctx->pc = 0x549d70u;
    // NOP
label_549d74:
    // 0x549d74: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x549d74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_549d78:
    // 0x549d78: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x549d78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_549d7c:
    // 0x549d7c: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x549d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_549d80:
    // 0x549d80: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x549d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_549d84:
    // 0x549d84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x549d84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549d88:
    // 0x549d88: 0x2e21024  and         $v0, $s7, $v0
    ctx->pc = 0x549d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & GPR_U64(ctx, 2));
label_549d8c:
    // 0x549d8c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x549d8cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_549d90:
    // 0x549d90: 0x0  nop
    ctx->pc = 0x549d90u;
    // NOP
label_549d94:
    // 0x549d94: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x549d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_549d98:
    // 0x549d98: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_549d9c:
    if (ctx->pc == 0x549D9Cu) {
        ctx->pc = 0x549D9Cu;
            // 0x549d9c: 0xe7a00130  swc1        $f0, 0x130($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
        ctx->pc = 0x549DA0u;
        goto label_549da0;
    }
    ctx->pc = 0x549D98u;
    {
        const bool branch_taken_0x549d98 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x549D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549D98u;
            // 0x549d9c: 0xe7a00130  swc1        $f0, 0x130($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x549d98) {
            ctx->pc = 0x549DACu;
            goto label_549dac;
        }
    }
    ctx->pc = 0x549DA0u;
label_549da0:
    // 0x549da0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x549da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549da4:
    // 0x549da4: 0x10000008  b           . + 4 + (0x8 << 2)
label_549da8:
    if (ctx->pc == 0x549DA8u) {
        ctx->pc = 0x549DA8u;
            // 0x549da8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x549DACu;
        goto label_549dac;
    }
    ctx->pc = 0x549DA4u;
    {
        const bool branch_taken_0x549da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x549DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549DA4u;
            // 0x549da8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x549da4) {
            ctx->pc = 0x549DC8u;
            goto label_549dc8;
        }
    }
    ctx->pc = 0x549DACu;
label_549dac:
    // 0x549dac: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x549dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_549db0:
    // 0x549db0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x549db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_549db4:
    // 0x549db4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x549db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_549db8:
    // 0x549db8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x549db8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549dbc:
    // 0x549dbc: 0x0  nop
    ctx->pc = 0x549dbcu;
    // NOP
label_549dc0:
    // 0x549dc0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x549dc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_549dc4:
    // 0x549dc4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x549dc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_549dc8:
    // 0x549dc8: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x549dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_549dcc:
    // 0x549dcc: 0x32e2ff00  andi        $v0, $s7, 0xFF00
    ctx->pc = 0x549dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65280);
label_549dd0:
    // 0x549dd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x549dd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549dd4:
    // 0x549dd4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x549dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_549dd8:
    // 0x549dd8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x549dd8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_549ddc:
    // 0x549ddc: 0x0  nop
    ctx->pc = 0x549ddcu;
    // NOP
label_549de0:
    // 0x549de0: 0x0  nop
    ctx->pc = 0x549de0u;
    // NOP
label_549de4:
    // 0x549de4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_549de8:
    if (ctx->pc == 0x549DE8u) {
        ctx->pc = 0x549DE8u;
            // 0x549de8: 0xe7a00134  swc1        $f0, 0x134($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
        ctx->pc = 0x549DECu;
        goto label_549dec;
    }
    ctx->pc = 0x549DE4u;
    {
        const bool branch_taken_0x549de4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x549DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549DE4u;
            // 0x549de8: 0xe7a00134  swc1        $f0, 0x134($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x549de4) {
            ctx->pc = 0x549DF8u;
            goto label_549df8;
        }
    }
    ctx->pc = 0x549DECu;
label_549dec:
    // 0x549dec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x549decu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549df0:
    // 0x549df0: 0x10000008  b           . + 4 + (0x8 << 2)
label_549df4:
    if (ctx->pc == 0x549DF4u) {
        ctx->pc = 0x549DF4u;
            // 0x549df4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x549DF8u;
        goto label_549df8;
    }
    ctx->pc = 0x549DF0u;
    {
        const bool branch_taken_0x549df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x549DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549DF0u;
            // 0x549df4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x549df0) {
            ctx->pc = 0x549E14u;
            goto label_549e14;
        }
    }
    ctx->pc = 0x549DF8u;
label_549df8:
    // 0x549df8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x549df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_549dfc:
    // 0x549dfc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x549dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_549e00:
    // 0x549e00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x549e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_549e04:
    // 0x549e04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x549e04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549e08:
    // 0x549e08: 0x0  nop
    ctx->pc = 0x549e08u;
    // NOP
label_549e0c:
    // 0x549e0c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x549e0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_549e10:
    // 0x549e10: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x549e10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_549e14:
    // 0x549e14: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x549e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_549e18:
    // 0x549e18: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x549e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_549e1c:
    // 0x549e1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x549e1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_549e20:
    // 0x549e20: 0x3c0c3f80  lui         $t4, 0x3F80
    ctx->pc = 0x549e20u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16256 << 16));
label_549e24:
    // 0x549e24: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x549e24u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
label_549e28:
    // 0x549e28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x549e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_549e2c:
    // 0x549e2c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x549e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_549e30:
    // 0x549e30: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x549e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_549e34:
    // 0x549e34: 0xafac013c  sw          $t4, 0x13C($sp)
    ctx->pc = 0x549e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 12));
label_549e38:
    // 0x549e38: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x549e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_549e3c:
    // 0x549e3c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x549e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_549e40:
    // 0x549e40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x549e40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_549e44:
    // 0x549e44: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x549e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_549e48:
    // 0x549e48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x549e48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_549e4c:
    // 0x549e4c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x549e4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_549e50:
    // 0x549e50: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x549e50u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_549e54:
    // 0x549e54: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x549e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_549e58:
    // 0x549e58: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x549e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_549e5c:
    // 0x549e5c: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x549e5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_549e60:
    // 0x549e60: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x549e60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_549e64:
    // 0x549e64: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x549e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_549e68:
    // 0x549e68: 0xe482001c  swc1        $f2, 0x1C($a0)
    ctx->pc = 0x549e68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_549e6c:
    // 0x549e6c: 0xac8c0020  sw          $t4, 0x20($a0)
    ctx->pc = 0x549e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 12));
label_549e70:
    // 0x549e70: 0x8c510e68  lw          $s1, 0xE68($v0)
    ctx->pc = 0x549e70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_549e74:
    // 0x549e74: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x549e74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_549e78:
    // 0x549e78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x549e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_549e7c:
    // 0x549e7c: 0xc0ee34c  jal         func_3B8D30
label_549e80:
    if (ctx->pc == 0x549E80u) {
        ctx->pc = 0x549E80u;
            // 0x549e80: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x549E84u;
        goto label_549e84;
    }
    ctx->pc = 0x549E7Cu;
    SET_GPR_U32(ctx, 31, 0x549E84u);
    ctx->pc = 0x549E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x549E7Cu;
            // 0x549e80: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8D30u;
    if (runtime->hasFunction(0x3B8D30u)) {
        auto targetFn = runtime->lookupFunction(0x3B8D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x549E84u; }
        if (ctx->pc != 0x549E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8D30_0x3b8d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x549E84u; }
        if (ctx->pc != 0x549E84u) { return; }
    }
    ctx->pc = 0x549E84u;
label_549e84:
    // 0x549e84: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x549e84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
label_549e88:
    // 0x549e88: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x549e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_549e8c:
    // 0x549e8c: 0x8c650e68  lw          $a1, 0xE68($v1)
    ctx->pc = 0x549e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
label_549e90:
    // 0x549e90: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x549e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_549e94:
    // 0x549e94: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_549e98:
    if (ctx->pc == 0x549E98u) {
        ctx->pc = 0x549E98u;
            // 0x549e98: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x549E9Cu;
        goto label_549e9c;
    }
    ctx->pc = 0x549E94u;
    {
        const bool branch_taken_0x549e94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x549E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549E94u;
            // 0x549e98: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x549e94) {
            ctx->pc = 0x549EB8u;
            goto label_549eb8;
        }
    }
    ctx->pc = 0x549E9Cu;
label_549e9c:
    // 0x549e9c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x549e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_549ea0:
    // 0x549ea0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x549ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_549ea4:
    // 0x549ea4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x549ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_549ea8:
    // 0x549ea8: 0x0  nop
    ctx->pc = 0x549ea8u;
    // NOP
label_549eac:
    // 0x549eac: 0x0  nop
    ctx->pc = 0x549eacu;
    // NOP
label_549eb0:
    // 0x549eb0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_549eb4:
    if (ctx->pc == 0x549EB4u) {
        ctx->pc = 0x549EB8u;
        goto label_549eb8;
    }
    ctx->pc = 0x549EB0u;
    {
        const bool branch_taken_0x549eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x549eb0) {
            ctx->pc = 0x549E9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_549e9c;
        }
    }
    ctx->pc = 0x549EB8u;
label_549eb8:
    // 0x549eb8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x549eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_549ebc:
    // 0x549ebc: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x549ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_549ec0:
    // 0x549ec0: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x549ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
label_549ec4:
    // 0x549ec4: 0xafa40124  sw          $a0, 0x124($sp)
    ctx->pc = 0x549ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 4));
label_549ec8:
    // 0x549ec8: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x549ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_549ecc:
    // 0x549ecc: 0xafa40128  sw          $a0, 0x128($sp)
    ctx->pc = 0x549eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 4));
label_549ed0:
    // 0x549ed0: 0xafa4012c  sw          $a0, 0x12C($sp)
    ctx->pc = 0x549ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 4));
label_549ed4:
    // 0x549ed4: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x549ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_549ed8:
    // 0x549ed8: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x549ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
label_549edc:
    // 0x549edc: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x549edcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
label_549ee0:
    // 0x549ee0: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x549ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
label_549ee4:
    // 0x549ee4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x549ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_549ee8:
    // 0x549ee8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x549ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_549eec:
    // 0x549eec: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x549eecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_549ef0:
    // 0x549ef0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x549ef0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_549ef4:
    // 0x549ef4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x549ef4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_549ef8:
    // 0x549ef8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x549ef8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_549efc:
    // 0x549efc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x549efcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_549f00:
    // 0x549f00: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x549f00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_549f04:
    // 0x549f04: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x549f04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_549f08:
    // 0x549f08: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x549f08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_549f0c:
    // 0x549f0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x549f0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_549f10:
    // 0x549f10: 0x3e00008  jr          $ra
label_549f14:
    if (ctx->pc == 0x549F14u) {
        ctx->pc = 0x549F14u;
            // 0x549f14: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x549F18u;
        goto label_549f18;
    }
    ctx->pc = 0x549F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x549F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549F10u;
            // 0x549f14: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x549F18u;
label_549f18:
    // 0x549f18: 0x0  nop
    ctx->pc = 0x549f18u;
    // NOP
label_549f1c:
    // 0x549f1c: 0x0  nop
    ctx->pc = 0x549f1cu;
    // NOP
}
