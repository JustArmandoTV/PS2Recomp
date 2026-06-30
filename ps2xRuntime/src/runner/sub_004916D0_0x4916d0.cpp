#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004916D0
// Address: 0x4916d0 - 0x494300
void sub_004916D0_0x4916d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004916D0_0x4916d0");
#endif

    switch (ctx->pc) {
        case 0x4916d0u: goto label_4916d0;
        case 0x4916d4u: goto label_4916d4;
        case 0x4916d8u: goto label_4916d8;
        case 0x4916dcu: goto label_4916dc;
        case 0x4916e0u: goto label_4916e0;
        case 0x4916e4u: goto label_4916e4;
        case 0x4916e8u: goto label_4916e8;
        case 0x4916ecu: goto label_4916ec;
        case 0x4916f0u: goto label_4916f0;
        case 0x4916f4u: goto label_4916f4;
        case 0x4916f8u: goto label_4916f8;
        case 0x4916fcu: goto label_4916fc;
        case 0x491700u: goto label_491700;
        case 0x491704u: goto label_491704;
        case 0x491708u: goto label_491708;
        case 0x49170cu: goto label_49170c;
        case 0x491710u: goto label_491710;
        case 0x491714u: goto label_491714;
        case 0x491718u: goto label_491718;
        case 0x49171cu: goto label_49171c;
        case 0x491720u: goto label_491720;
        case 0x491724u: goto label_491724;
        case 0x491728u: goto label_491728;
        case 0x49172cu: goto label_49172c;
        case 0x491730u: goto label_491730;
        case 0x491734u: goto label_491734;
        case 0x491738u: goto label_491738;
        case 0x49173cu: goto label_49173c;
        case 0x491740u: goto label_491740;
        case 0x491744u: goto label_491744;
        case 0x491748u: goto label_491748;
        case 0x49174cu: goto label_49174c;
        case 0x491750u: goto label_491750;
        case 0x491754u: goto label_491754;
        case 0x491758u: goto label_491758;
        case 0x49175cu: goto label_49175c;
        case 0x491760u: goto label_491760;
        case 0x491764u: goto label_491764;
        case 0x491768u: goto label_491768;
        case 0x49176cu: goto label_49176c;
        case 0x491770u: goto label_491770;
        case 0x491774u: goto label_491774;
        case 0x491778u: goto label_491778;
        case 0x49177cu: goto label_49177c;
        case 0x491780u: goto label_491780;
        case 0x491784u: goto label_491784;
        case 0x491788u: goto label_491788;
        case 0x49178cu: goto label_49178c;
        case 0x491790u: goto label_491790;
        case 0x491794u: goto label_491794;
        case 0x491798u: goto label_491798;
        case 0x49179cu: goto label_49179c;
        case 0x4917a0u: goto label_4917a0;
        case 0x4917a4u: goto label_4917a4;
        case 0x4917a8u: goto label_4917a8;
        case 0x4917acu: goto label_4917ac;
        case 0x4917b0u: goto label_4917b0;
        case 0x4917b4u: goto label_4917b4;
        case 0x4917b8u: goto label_4917b8;
        case 0x4917bcu: goto label_4917bc;
        case 0x4917c0u: goto label_4917c0;
        case 0x4917c4u: goto label_4917c4;
        case 0x4917c8u: goto label_4917c8;
        case 0x4917ccu: goto label_4917cc;
        case 0x4917d0u: goto label_4917d0;
        case 0x4917d4u: goto label_4917d4;
        case 0x4917d8u: goto label_4917d8;
        case 0x4917dcu: goto label_4917dc;
        case 0x4917e0u: goto label_4917e0;
        case 0x4917e4u: goto label_4917e4;
        case 0x4917e8u: goto label_4917e8;
        case 0x4917ecu: goto label_4917ec;
        case 0x4917f0u: goto label_4917f0;
        case 0x4917f4u: goto label_4917f4;
        case 0x4917f8u: goto label_4917f8;
        case 0x4917fcu: goto label_4917fc;
        case 0x491800u: goto label_491800;
        case 0x491804u: goto label_491804;
        case 0x491808u: goto label_491808;
        case 0x49180cu: goto label_49180c;
        case 0x491810u: goto label_491810;
        case 0x491814u: goto label_491814;
        case 0x491818u: goto label_491818;
        case 0x49181cu: goto label_49181c;
        case 0x491820u: goto label_491820;
        case 0x491824u: goto label_491824;
        case 0x491828u: goto label_491828;
        case 0x49182cu: goto label_49182c;
        case 0x491830u: goto label_491830;
        case 0x491834u: goto label_491834;
        case 0x491838u: goto label_491838;
        case 0x49183cu: goto label_49183c;
        case 0x491840u: goto label_491840;
        case 0x491844u: goto label_491844;
        case 0x491848u: goto label_491848;
        case 0x49184cu: goto label_49184c;
        case 0x491850u: goto label_491850;
        case 0x491854u: goto label_491854;
        case 0x491858u: goto label_491858;
        case 0x49185cu: goto label_49185c;
        case 0x491860u: goto label_491860;
        case 0x491864u: goto label_491864;
        case 0x491868u: goto label_491868;
        case 0x49186cu: goto label_49186c;
        case 0x491870u: goto label_491870;
        case 0x491874u: goto label_491874;
        case 0x491878u: goto label_491878;
        case 0x49187cu: goto label_49187c;
        case 0x491880u: goto label_491880;
        case 0x491884u: goto label_491884;
        case 0x491888u: goto label_491888;
        case 0x49188cu: goto label_49188c;
        case 0x491890u: goto label_491890;
        case 0x491894u: goto label_491894;
        case 0x491898u: goto label_491898;
        case 0x49189cu: goto label_49189c;
        case 0x4918a0u: goto label_4918a0;
        case 0x4918a4u: goto label_4918a4;
        case 0x4918a8u: goto label_4918a8;
        case 0x4918acu: goto label_4918ac;
        case 0x4918b0u: goto label_4918b0;
        case 0x4918b4u: goto label_4918b4;
        case 0x4918b8u: goto label_4918b8;
        case 0x4918bcu: goto label_4918bc;
        case 0x4918c0u: goto label_4918c0;
        case 0x4918c4u: goto label_4918c4;
        case 0x4918c8u: goto label_4918c8;
        case 0x4918ccu: goto label_4918cc;
        case 0x4918d0u: goto label_4918d0;
        case 0x4918d4u: goto label_4918d4;
        case 0x4918d8u: goto label_4918d8;
        case 0x4918dcu: goto label_4918dc;
        case 0x4918e0u: goto label_4918e0;
        case 0x4918e4u: goto label_4918e4;
        case 0x4918e8u: goto label_4918e8;
        case 0x4918ecu: goto label_4918ec;
        case 0x4918f0u: goto label_4918f0;
        case 0x4918f4u: goto label_4918f4;
        case 0x4918f8u: goto label_4918f8;
        case 0x4918fcu: goto label_4918fc;
        case 0x491900u: goto label_491900;
        case 0x491904u: goto label_491904;
        case 0x491908u: goto label_491908;
        case 0x49190cu: goto label_49190c;
        case 0x491910u: goto label_491910;
        case 0x491914u: goto label_491914;
        case 0x491918u: goto label_491918;
        case 0x49191cu: goto label_49191c;
        case 0x491920u: goto label_491920;
        case 0x491924u: goto label_491924;
        case 0x491928u: goto label_491928;
        case 0x49192cu: goto label_49192c;
        case 0x491930u: goto label_491930;
        case 0x491934u: goto label_491934;
        case 0x491938u: goto label_491938;
        case 0x49193cu: goto label_49193c;
        case 0x491940u: goto label_491940;
        case 0x491944u: goto label_491944;
        case 0x491948u: goto label_491948;
        case 0x49194cu: goto label_49194c;
        case 0x491950u: goto label_491950;
        case 0x491954u: goto label_491954;
        case 0x491958u: goto label_491958;
        case 0x49195cu: goto label_49195c;
        case 0x491960u: goto label_491960;
        case 0x491964u: goto label_491964;
        case 0x491968u: goto label_491968;
        case 0x49196cu: goto label_49196c;
        case 0x491970u: goto label_491970;
        case 0x491974u: goto label_491974;
        case 0x491978u: goto label_491978;
        case 0x49197cu: goto label_49197c;
        case 0x491980u: goto label_491980;
        case 0x491984u: goto label_491984;
        case 0x491988u: goto label_491988;
        case 0x49198cu: goto label_49198c;
        case 0x491990u: goto label_491990;
        case 0x491994u: goto label_491994;
        case 0x491998u: goto label_491998;
        case 0x49199cu: goto label_49199c;
        case 0x4919a0u: goto label_4919a0;
        case 0x4919a4u: goto label_4919a4;
        case 0x4919a8u: goto label_4919a8;
        case 0x4919acu: goto label_4919ac;
        case 0x4919b0u: goto label_4919b0;
        case 0x4919b4u: goto label_4919b4;
        case 0x4919b8u: goto label_4919b8;
        case 0x4919bcu: goto label_4919bc;
        case 0x4919c0u: goto label_4919c0;
        case 0x4919c4u: goto label_4919c4;
        case 0x4919c8u: goto label_4919c8;
        case 0x4919ccu: goto label_4919cc;
        case 0x4919d0u: goto label_4919d0;
        case 0x4919d4u: goto label_4919d4;
        case 0x4919d8u: goto label_4919d8;
        case 0x4919dcu: goto label_4919dc;
        case 0x4919e0u: goto label_4919e0;
        case 0x4919e4u: goto label_4919e4;
        case 0x4919e8u: goto label_4919e8;
        case 0x4919ecu: goto label_4919ec;
        case 0x4919f0u: goto label_4919f0;
        case 0x4919f4u: goto label_4919f4;
        case 0x4919f8u: goto label_4919f8;
        case 0x4919fcu: goto label_4919fc;
        case 0x491a00u: goto label_491a00;
        case 0x491a04u: goto label_491a04;
        case 0x491a08u: goto label_491a08;
        case 0x491a0cu: goto label_491a0c;
        case 0x491a10u: goto label_491a10;
        case 0x491a14u: goto label_491a14;
        case 0x491a18u: goto label_491a18;
        case 0x491a1cu: goto label_491a1c;
        case 0x491a20u: goto label_491a20;
        case 0x491a24u: goto label_491a24;
        case 0x491a28u: goto label_491a28;
        case 0x491a2cu: goto label_491a2c;
        case 0x491a30u: goto label_491a30;
        case 0x491a34u: goto label_491a34;
        case 0x491a38u: goto label_491a38;
        case 0x491a3cu: goto label_491a3c;
        case 0x491a40u: goto label_491a40;
        case 0x491a44u: goto label_491a44;
        case 0x491a48u: goto label_491a48;
        case 0x491a4cu: goto label_491a4c;
        case 0x491a50u: goto label_491a50;
        case 0x491a54u: goto label_491a54;
        case 0x491a58u: goto label_491a58;
        case 0x491a5cu: goto label_491a5c;
        case 0x491a60u: goto label_491a60;
        case 0x491a64u: goto label_491a64;
        case 0x491a68u: goto label_491a68;
        case 0x491a6cu: goto label_491a6c;
        case 0x491a70u: goto label_491a70;
        case 0x491a74u: goto label_491a74;
        case 0x491a78u: goto label_491a78;
        case 0x491a7cu: goto label_491a7c;
        case 0x491a80u: goto label_491a80;
        case 0x491a84u: goto label_491a84;
        case 0x491a88u: goto label_491a88;
        case 0x491a8cu: goto label_491a8c;
        case 0x491a90u: goto label_491a90;
        case 0x491a94u: goto label_491a94;
        case 0x491a98u: goto label_491a98;
        case 0x491a9cu: goto label_491a9c;
        case 0x491aa0u: goto label_491aa0;
        case 0x491aa4u: goto label_491aa4;
        case 0x491aa8u: goto label_491aa8;
        case 0x491aacu: goto label_491aac;
        case 0x491ab0u: goto label_491ab0;
        case 0x491ab4u: goto label_491ab4;
        case 0x491ab8u: goto label_491ab8;
        case 0x491abcu: goto label_491abc;
        case 0x491ac0u: goto label_491ac0;
        case 0x491ac4u: goto label_491ac4;
        case 0x491ac8u: goto label_491ac8;
        case 0x491accu: goto label_491acc;
        case 0x491ad0u: goto label_491ad0;
        case 0x491ad4u: goto label_491ad4;
        case 0x491ad8u: goto label_491ad8;
        case 0x491adcu: goto label_491adc;
        case 0x491ae0u: goto label_491ae0;
        case 0x491ae4u: goto label_491ae4;
        case 0x491ae8u: goto label_491ae8;
        case 0x491aecu: goto label_491aec;
        case 0x491af0u: goto label_491af0;
        case 0x491af4u: goto label_491af4;
        case 0x491af8u: goto label_491af8;
        case 0x491afcu: goto label_491afc;
        case 0x491b00u: goto label_491b00;
        case 0x491b04u: goto label_491b04;
        case 0x491b08u: goto label_491b08;
        case 0x491b0cu: goto label_491b0c;
        case 0x491b10u: goto label_491b10;
        case 0x491b14u: goto label_491b14;
        case 0x491b18u: goto label_491b18;
        case 0x491b1cu: goto label_491b1c;
        case 0x491b20u: goto label_491b20;
        case 0x491b24u: goto label_491b24;
        case 0x491b28u: goto label_491b28;
        case 0x491b2cu: goto label_491b2c;
        case 0x491b30u: goto label_491b30;
        case 0x491b34u: goto label_491b34;
        case 0x491b38u: goto label_491b38;
        case 0x491b3cu: goto label_491b3c;
        case 0x491b40u: goto label_491b40;
        case 0x491b44u: goto label_491b44;
        case 0x491b48u: goto label_491b48;
        case 0x491b4cu: goto label_491b4c;
        case 0x491b50u: goto label_491b50;
        case 0x491b54u: goto label_491b54;
        case 0x491b58u: goto label_491b58;
        case 0x491b5cu: goto label_491b5c;
        case 0x491b60u: goto label_491b60;
        case 0x491b64u: goto label_491b64;
        case 0x491b68u: goto label_491b68;
        case 0x491b6cu: goto label_491b6c;
        case 0x491b70u: goto label_491b70;
        case 0x491b74u: goto label_491b74;
        case 0x491b78u: goto label_491b78;
        case 0x491b7cu: goto label_491b7c;
        case 0x491b80u: goto label_491b80;
        case 0x491b84u: goto label_491b84;
        case 0x491b88u: goto label_491b88;
        case 0x491b8cu: goto label_491b8c;
        case 0x491b90u: goto label_491b90;
        case 0x491b94u: goto label_491b94;
        case 0x491b98u: goto label_491b98;
        case 0x491b9cu: goto label_491b9c;
        case 0x491ba0u: goto label_491ba0;
        case 0x491ba4u: goto label_491ba4;
        case 0x491ba8u: goto label_491ba8;
        case 0x491bacu: goto label_491bac;
        case 0x491bb0u: goto label_491bb0;
        case 0x491bb4u: goto label_491bb4;
        case 0x491bb8u: goto label_491bb8;
        case 0x491bbcu: goto label_491bbc;
        case 0x491bc0u: goto label_491bc0;
        case 0x491bc4u: goto label_491bc4;
        case 0x491bc8u: goto label_491bc8;
        case 0x491bccu: goto label_491bcc;
        case 0x491bd0u: goto label_491bd0;
        case 0x491bd4u: goto label_491bd4;
        case 0x491bd8u: goto label_491bd8;
        case 0x491bdcu: goto label_491bdc;
        case 0x491be0u: goto label_491be0;
        case 0x491be4u: goto label_491be4;
        case 0x491be8u: goto label_491be8;
        case 0x491becu: goto label_491bec;
        case 0x491bf0u: goto label_491bf0;
        case 0x491bf4u: goto label_491bf4;
        case 0x491bf8u: goto label_491bf8;
        case 0x491bfcu: goto label_491bfc;
        case 0x491c00u: goto label_491c00;
        case 0x491c04u: goto label_491c04;
        case 0x491c08u: goto label_491c08;
        case 0x491c0cu: goto label_491c0c;
        case 0x491c10u: goto label_491c10;
        case 0x491c14u: goto label_491c14;
        case 0x491c18u: goto label_491c18;
        case 0x491c1cu: goto label_491c1c;
        case 0x491c20u: goto label_491c20;
        case 0x491c24u: goto label_491c24;
        case 0x491c28u: goto label_491c28;
        case 0x491c2cu: goto label_491c2c;
        case 0x491c30u: goto label_491c30;
        case 0x491c34u: goto label_491c34;
        case 0x491c38u: goto label_491c38;
        case 0x491c3cu: goto label_491c3c;
        case 0x491c40u: goto label_491c40;
        case 0x491c44u: goto label_491c44;
        case 0x491c48u: goto label_491c48;
        case 0x491c4cu: goto label_491c4c;
        case 0x491c50u: goto label_491c50;
        case 0x491c54u: goto label_491c54;
        case 0x491c58u: goto label_491c58;
        case 0x491c5cu: goto label_491c5c;
        case 0x491c60u: goto label_491c60;
        case 0x491c64u: goto label_491c64;
        case 0x491c68u: goto label_491c68;
        case 0x491c6cu: goto label_491c6c;
        case 0x491c70u: goto label_491c70;
        case 0x491c74u: goto label_491c74;
        case 0x491c78u: goto label_491c78;
        case 0x491c7cu: goto label_491c7c;
        case 0x491c80u: goto label_491c80;
        case 0x491c84u: goto label_491c84;
        case 0x491c88u: goto label_491c88;
        case 0x491c8cu: goto label_491c8c;
        case 0x491c90u: goto label_491c90;
        case 0x491c94u: goto label_491c94;
        case 0x491c98u: goto label_491c98;
        case 0x491c9cu: goto label_491c9c;
        case 0x491ca0u: goto label_491ca0;
        case 0x491ca4u: goto label_491ca4;
        case 0x491ca8u: goto label_491ca8;
        case 0x491cacu: goto label_491cac;
        case 0x491cb0u: goto label_491cb0;
        case 0x491cb4u: goto label_491cb4;
        case 0x491cb8u: goto label_491cb8;
        case 0x491cbcu: goto label_491cbc;
        case 0x491cc0u: goto label_491cc0;
        case 0x491cc4u: goto label_491cc4;
        case 0x491cc8u: goto label_491cc8;
        case 0x491cccu: goto label_491ccc;
        case 0x491cd0u: goto label_491cd0;
        case 0x491cd4u: goto label_491cd4;
        case 0x491cd8u: goto label_491cd8;
        case 0x491cdcu: goto label_491cdc;
        case 0x491ce0u: goto label_491ce0;
        case 0x491ce4u: goto label_491ce4;
        case 0x491ce8u: goto label_491ce8;
        case 0x491cecu: goto label_491cec;
        case 0x491cf0u: goto label_491cf0;
        case 0x491cf4u: goto label_491cf4;
        case 0x491cf8u: goto label_491cf8;
        case 0x491cfcu: goto label_491cfc;
        case 0x491d00u: goto label_491d00;
        case 0x491d04u: goto label_491d04;
        case 0x491d08u: goto label_491d08;
        case 0x491d0cu: goto label_491d0c;
        case 0x491d10u: goto label_491d10;
        case 0x491d14u: goto label_491d14;
        case 0x491d18u: goto label_491d18;
        case 0x491d1cu: goto label_491d1c;
        case 0x491d20u: goto label_491d20;
        case 0x491d24u: goto label_491d24;
        case 0x491d28u: goto label_491d28;
        case 0x491d2cu: goto label_491d2c;
        case 0x491d30u: goto label_491d30;
        case 0x491d34u: goto label_491d34;
        case 0x491d38u: goto label_491d38;
        case 0x491d3cu: goto label_491d3c;
        case 0x491d40u: goto label_491d40;
        case 0x491d44u: goto label_491d44;
        case 0x491d48u: goto label_491d48;
        case 0x491d4cu: goto label_491d4c;
        case 0x491d50u: goto label_491d50;
        case 0x491d54u: goto label_491d54;
        case 0x491d58u: goto label_491d58;
        case 0x491d5cu: goto label_491d5c;
        case 0x491d60u: goto label_491d60;
        case 0x491d64u: goto label_491d64;
        case 0x491d68u: goto label_491d68;
        case 0x491d6cu: goto label_491d6c;
        case 0x491d70u: goto label_491d70;
        case 0x491d74u: goto label_491d74;
        case 0x491d78u: goto label_491d78;
        case 0x491d7cu: goto label_491d7c;
        case 0x491d80u: goto label_491d80;
        case 0x491d84u: goto label_491d84;
        case 0x491d88u: goto label_491d88;
        case 0x491d8cu: goto label_491d8c;
        case 0x491d90u: goto label_491d90;
        case 0x491d94u: goto label_491d94;
        case 0x491d98u: goto label_491d98;
        case 0x491d9cu: goto label_491d9c;
        case 0x491da0u: goto label_491da0;
        case 0x491da4u: goto label_491da4;
        case 0x491da8u: goto label_491da8;
        case 0x491dacu: goto label_491dac;
        case 0x491db0u: goto label_491db0;
        case 0x491db4u: goto label_491db4;
        case 0x491db8u: goto label_491db8;
        case 0x491dbcu: goto label_491dbc;
        case 0x491dc0u: goto label_491dc0;
        case 0x491dc4u: goto label_491dc4;
        case 0x491dc8u: goto label_491dc8;
        case 0x491dccu: goto label_491dcc;
        case 0x491dd0u: goto label_491dd0;
        case 0x491dd4u: goto label_491dd4;
        case 0x491dd8u: goto label_491dd8;
        case 0x491ddcu: goto label_491ddc;
        case 0x491de0u: goto label_491de0;
        case 0x491de4u: goto label_491de4;
        case 0x491de8u: goto label_491de8;
        case 0x491decu: goto label_491dec;
        case 0x491df0u: goto label_491df0;
        case 0x491df4u: goto label_491df4;
        case 0x491df8u: goto label_491df8;
        case 0x491dfcu: goto label_491dfc;
        case 0x491e00u: goto label_491e00;
        case 0x491e04u: goto label_491e04;
        case 0x491e08u: goto label_491e08;
        case 0x491e0cu: goto label_491e0c;
        case 0x491e10u: goto label_491e10;
        case 0x491e14u: goto label_491e14;
        case 0x491e18u: goto label_491e18;
        case 0x491e1cu: goto label_491e1c;
        case 0x491e20u: goto label_491e20;
        case 0x491e24u: goto label_491e24;
        case 0x491e28u: goto label_491e28;
        case 0x491e2cu: goto label_491e2c;
        case 0x491e30u: goto label_491e30;
        case 0x491e34u: goto label_491e34;
        case 0x491e38u: goto label_491e38;
        case 0x491e3cu: goto label_491e3c;
        case 0x491e40u: goto label_491e40;
        case 0x491e44u: goto label_491e44;
        case 0x491e48u: goto label_491e48;
        case 0x491e4cu: goto label_491e4c;
        case 0x491e50u: goto label_491e50;
        case 0x491e54u: goto label_491e54;
        case 0x491e58u: goto label_491e58;
        case 0x491e5cu: goto label_491e5c;
        case 0x491e60u: goto label_491e60;
        case 0x491e64u: goto label_491e64;
        case 0x491e68u: goto label_491e68;
        case 0x491e6cu: goto label_491e6c;
        case 0x491e70u: goto label_491e70;
        case 0x491e74u: goto label_491e74;
        case 0x491e78u: goto label_491e78;
        case 0x491e7cu: goto label_491e7c;
        case 0x491e80u: goto label_491e80;
        case 0x491e84u: goto label_491e84;
        case 0x491e88u: goto label_491e88;
        case 0x491e8cu: goto label_491e8c;
        case 0x491e90u: goto label_491e90;
        case 0x491e94u: goto label_491e94;
        case 0x491e98u: goto label_491e98;
        case 0x491e9cu: goto label_491e9c;
        case 0x491ea0u: goto label_491ea0;
        case 0x491ea4u: goto label_491ea4;
        case 0x491ea8u: goto label_491ea8;
        case 0x491eacu: goto label_491eac;
        case 0x491eb0u: goto label_491eb0;
        case 0x491eb4u: goto label_491eb4;
        case 0x491eb8u: goto label_491eb8;
        case 0x491ebcu: goto label_491ebc;
        case 0x491ec0u: goto label_491ec0;
        case 0x491ec4u: goto label_491ec4;
        case 0x491ec8u: goto label_491ec8;
        case 0x491eccu: goto label_491ecc;
        case 0x491ed0u: goto label_491ed0;
        case 0x491ed4u: goto label_491ed4;
        case 0x491ed8u: goto label_491ed8;
        case 0x491edcu: goto label_491edc;
        case 0x491ee0u: goto label_491ee0;
        case 0x491ee4u: goto label_491ee4;
        case 0x491ee8u: goto label_491ee8;
        case 0x491eecu: goto label_491eec;
        case 0x491ef0u: goto label_491ef0;
        case 0x491ef4u: goto label_491ef4;
        case 0x491ef8u: goto label_491ef8;
        case 0x491efcu: goto label_491efc;
        case 0x491f00u: goto label_491f00;
        case 0x491f04u: goto label_491f04;
        case 0x491f08u: goto label_491f08;
        case 0x491f0cu: goto label_491f0c;
        case 0x491f10u: goto label_491f10;
        case 0x491f14u: goto label_491f14;
        case 0x491f18u: goto label_491f18;
        case 0x491f1cu: goto label_491f1c;
        case 0x491f20u: goto label_491f20;
        case 0x491f24u: goto label_491f24;
        case 0x491f28u: goto label_491f28;
        case 0x491f2cu: goto label_491f2c;
        case 0x491f30u: goto label_491f30;
        case 0x491f34u: goto label_491f34;
        case 0x491f38u: goto label_491f38;
        case 0x491f3cu: goto label_491f3c;
        case 0x491f40u: goto label_491f40;
        case 0x491f44u: goto label_491f44;
        case 0x491f48u: goto label_491f48;
        case 0x491f4cu: goto label_491f4c;
        case 0x491f50u: goto label_491f50;
        case 0x491f54u: goto label_491f54;
        case 0x491f58u: goto label_491f58;
        case 0x491f5cu: goto label_491f5c;
        case 0x491f60u: goto label_491f60;
        case 0x491f64u: goto label_491f64;
        case 0x491f68u: goto label_491f68;
        case 0x491f6cu: goto label_491f6c;
        case 0x491f70u: goto label_491f70;
        case 0x491f74u: goto label_491f74;
        case 0x491f78u: goto label_491f78;
        case 0x491f7cu: goto label_491f7c;
        case 0x491f80u: goto label_491f80;
        case 0x491f84u: goto label_491f84;
        case 0x491f88u: goto label_491f88;
        case 0x491f8cu: goto label_491f8c;
        case 0x491f90u: goto label_491f90;
        case 0x491f94u: goto label_491f94;
        case 0x491f98u: goto label_491f98;
        case 0x491f9cu: goto label_491f9c;
        case 0x491fa0u: goto label_491fa0;
        case 0x491fa4u: goto label_491fa4;
        case 0x491fa8u: goto label_491fa8;
        case 0x491facu: goto label_491fac;
        case 0x491fb0u: goto label_491fb0;
        case 0x491fb4u: goto label_491fb4;
        case 0x491fb8u: goto label_491fb8;
        case 0x491fbcu: goto label_491fbc;
        case 0x491fc0u: goto label_491fc0;
        case 0x491fc4u: goto label_491fc4;
        case 0x491fc8u: goto label_491fc8;
        case 0x491fccu: goto label_491fcc;
        case 0x491fd0u: goto label_491fd0;
        case 0x491fd4u: goto label_491fd4;
        case 0x491fd8u: goto label_491fd8;
        case 0x491fdcu: goto label_491fdc;
        case 0x491fe0u: goto label_491fe0;
        case 0x491fe4u: goto label_491fe4;
        case 0x491fe8u: goto label_491fe8;
        case 0x491fecu: goto label_491fec;
        case 0x491ff0u: goto label_491ff0;
        case 0x491ff4u: goto label_491ff4;
        case 0x491ff8u: goto label_491ff8;
        case 0x491ffcu: goto label_491ffc;
        case 0x492000u: goto label_492000;
        case 0x492004u: goto label_492004;
        case 0x492008u: goto label_492008;
        case 0x49200cu: goto label_49200c;
        case 0x492010u: goto label_492010;
        case 0x492014u: goto label_492014;
        case 0x492018u: goto label_492018;
        case 0x49201cu: goto label_49201c;
        case 0x492020u: goto label_492020;
        case 0x492024u: goto label_492024;
        case 0x492028u: goto label_492028;
        case 0x49202cu: goto label_49202c;
        case 0x492030u: goto label_492030;
        case 0x492034u: goto label_492034;
        case 0x492038u: goto label_492038;
        case 0x49203cu: goto label_49203c;
        case 0x492040u: goto label_492040;
        case 0x492044u: goto label_492044;
        case 0x492048u: goto label_492048;
        case 0x49204cu: goto label_49204c;
        case 0x492050u: goto label_492050;
        case 0x492054u: goto label_492054;
        case 0x492058u: goto label_492058;
        case 0x49205cu: goto label_49205c;
        case 0x492060u: goto label_492060;
        case 0x492064u: goto label_492064;
        case 0x492068u: goto label_492068;
        case 0x49206cu: goto label_49206c;
        case 0x492070u: goto label_492070;
        case 0x492074u: goto label_492074;
        case 0x492078u: goto label_492078;
        case 0x49207cu: goto label_49207c;
        case 0x492080u: goto label_492080;
        case 0x492084u: goto label_492084;
        case 0x492088u: goto label_492088;
        case 0x49208cu: goto label_49208c;
        case 0x492090u: goto label_492090;
        case 0x492094u: goto label_492094;
        case 0x492098u: goto label_492098;
        case 0x49209cu: goto label_49209c;
        case 0x4920a0u: goto label_4920a0;
        case 0x4920a4u: goto label_4920a4;
        case 0x4920a8u: goto label_4920a8;
        case 0x4920acu: goto label_4920ac;
        case 0x4920b0u: goto label_4920b0;
        case 0x4920b4u: goto label_4920b4;
        case 0x4920b8u: goto label_4920b8;
        case 0x4920bcu: goto label_4920bc;
        case 0x4920c0u: goto label_4920c0;
        case 0x4920c4u: goto label_4920c4;
        case 0x4920c8u: goto label_4920c8;
        case 0x4920ccu: goto label_4920cc;
        case 0x4920d0u: goto label_4920d0;
        case 0x4920d4u: goto label_4920d4;
        case 0x4920d8u: goto label_4920d8;
        case 0x4920dcu: goto label_4920dc;
        case 0x4920e0u: goto label_4920e0;
        case 0x4920e4u: goto label_4920e4;
        case 0x4920e8u: goto label_4920e8;
        case 0x4920ecu: goto label_4920ec;
        case 0x4920f0u: goto label_4920f0;
        case 0x4920f4u: goto label_4920f4;
        case 0x4920f8u: goto label_4920f8;
        case 0x4920fcu: goto label_4920fc;
        case 0x492100u: goto label_492100;
        case 0x492104u: goto label_492104;
        case 0x492108u: goto label_492108;
        case 0x49210cu: goto label_49210c;
        case 0x492110u: goto label_492110;
        case 0x492114u: goto label_492114;
        case 0x492118u: goto label_492118;
        case 0x49211cu: goto label_49211c;
        case 0x492120u: goto label_492120;
        case 0x492124u: goto label_492124;
        case 0x492128u: goto label_492128;
        case 0x49212cu: goto label_49212c;
        case 0x492130u: goto label_492130;
        case 0x492134u: goto label_492134;
        case 0x492138u: goto label_492138;
        case 0x49213cu: goto label_49213c;
        case 0x492140u: goto label_492140;
        case 0x492144u: goto label_492144;
        case 0x492148u: goto label_492148;
        case 0x49214cu: goto label_49214c;
        case 0x492150u: goto label_492150;
        case 0x492154u: goto label_492154;
        case 0x492158u: goto label_492158;
        case 0x49215cu: goto label_49215c;
        case 0x492160u: goto label_492160;
        case 0x492164u: goto label_492164;
        case 0x492168u: goto label_492168;
        case 0x49216cu: goto label_49216c;
        case 0x492170u: goto label_492170;
        case 0x492174u: goto label_492174;
        case 0x492178u: goto label_492178;
        case 0x49217cu: goto label_49217c;
        case 0x492180u: goto label_492180;
        case 0x492184u: goto label_492184;
        case 0x492188u: goto label_492188;
        case 0x49218cu: goto label_49218c;
        case 0x492190u: goto label_492190;
        case 0x492194u: goto label_492194;
        case 0x492198u: goto label_492198;
        case 0x49219cu: goto label_49219c;
        case 0x4921a0u: goto label_4921a0;
        case 0x4921a4u: goto label_4921a4;
        case 0x4921a8u: goto label_4921a8;
        case 0x4921acu: goto label_4921ac;
        case 0x4921b0u: goto label_4921b0;
        case 0x4921b4u: goto label_4921b4;
        case 0x4921b8u: goto label_4921b8;
        case 0x4921bcu: goto label_4921bc;
        case 0x4921c0u: goto label_4921c0;
        case 0x4921c4u: goto label_4921c4;
        case 0x4921c8u: goto label_4921c8;
        case 0x4921ccu: goto label_4921cc;
        case 0x4921d0u: goto label_4921d0;
        case 0x4921d4u: goto label_4921d4;
        case 0x4921d8u: goto label_4921d8;
        case 0x4921dcu: goto label_4921dc;
        case 0x4921e0u: goto label_4921e0;
        case 0x4921e4u: goto label_4921e4;
        case 0x4921e8u: goto label_4921e8;
        case 0x4921ecu: goto label_4921ec;
        case 0x4921f0u: goto label_4921f0;
        case 0x4921f4u: goto label_4921f4;
        case 0x4921f8u: goto label_4921f8;
        case 0x4921fcu: goto label_4921fc;
        case 0x492200u: goto label_492200;
        case 0x492204u: goto label_492204;
        case 0x492208u: goto label_492208;
        case 0x49220cu: goto label_49220c;
        case 0x492210u: goto label_492210;
        case 0x492214u: goto label_492214;
        case 0x492218u: goto label_492218;
        case 0x49221cu: goto label_49221c;
        case 0x492220u: goto label_492220;
        case 0x492224u: goto label_492224;
        case 0x492228u: goto label_492228;
        case 0x49222cu: goto label_49222c;
        case 0x492230u: goto label_492230;
        case 0x492234u: goto label_492234;
        case 0x492238u: goto label_492238;
        case 0x49223cu: goto label_49223c;
        case 0x492240u: goto label_492240;
        case 0x492244u: goto label_492244;
        case 0x492248u: goto label_492248;
        case 0x49224cu: goto label_49224c;
        case 0x492250u: goto label_492250;
        case 0x492254u: goto label_492254;
        case 0x492258u: goto label_492258;
        case 0x49225cu: goto label_49225c;
        case 0x492260u: goto label_492260;
        case 0x492264u: goto label_492264;
        case 0x492268u: goto label_492268;
        case 0x49226cu: goto label_49226c;
        case 0x492270u: goto label_492270;
        case 0x492274u: goto label_492274;
        case 0x492278u: goto label_492278;
        case 0x49227cu: goto label_49227c;
        case 0x492280u: goto label_492280;
        case 0x492284u: goto label_492284;
        case 0x492288u: goto label_492288;
        case 0x49228cu: goto label_49228c;
        case 0x492290u: goto label_492290;
        case 0x492294u: goto label_492294;
        case 0x492298u: goto label_492298;
        case 0x49229cu: goto label_49229c;
        case 0x4922a0u: goto label_4922a0;
        case 0x4922a4u: goto label_4922a4;
        case 0x4922a8u: goto label_4922a8;
        case 0x4922acu: goto label_4922ac;
        case 0x4922b0u: goto label_4922b0;
        case 0x4922b4u: goto label_4922b4;
        case 0x4922b8u: goto label_4922b8;
        case 0x4922bcu: goto label_4922bc;
        case 0x4922c0u: goto label_4922c0;
        case 0x4922c4u: goto label_4922c4;
        case 0x4922c8u: goto label_4922c8;
        case 0x4922ccu: goto label_4922cc;
        case 0x4922d0u: goto label_4922d0;
        case 0x4922d4u: goto label_4922d4;
        case 0x4922d8u: goto label_4922d8;
        case 0x4922dcu: goto label_4922dc;
        case 0x4922e0u: goto label_4922e0;
        case 0x4922e4u: goto label_4922e4;
        case 0x4922e8u: goto label_4922e8;
        case 0x4922ecu: goto label_4922ec;
        case 0x4922f0u: goto label_4922f0;
        case 0x4922f4u: goto label_4922f4;
        case 0x4922f8u: goto label_4922f8;
        case 0x4922fcu: goto label_4922fc;
        case 0x492300u: goto label_492300;
        case 0x492304u: goto label_492304;
        case 0x492308u: goto label_492308;
        case 0x49230cu: goto label_49230c;
        case 0x492310u: goto label_492310;
        case 0x492314u: goto label_492314;
        case 0x492318u: goto label_492318;
        case 0x49231cu: goto label_49231c;
        case 0x492320u: goto label_492320;
        case 0x492324u: goto label_492324;
        case 0x492328u: goto label_492328;
        case 0x49232cu: goto label_49232c;
        case 0x492330u: goto label_492330;
        case 0x492334u: goto label_492334;
        case 0x492338u: goto label_492338;
        case 0x49233cu: goto label_49233c;
        case 0x492340u: goto label_492340;
        case 0x492344u: goto label_492344;
        case 0x492348u: goto label_492348;
        case 0x49234cu: goto label_49234c;
        case 0x492350u: goto label_492350;
        case 0x492354u: goto label_492354;
        case 0x492358u: goto label_492358;
        case 0x49235cu: goto label_49235c;
        case 0x492360u: goto label_492360;
        case 0x492364u: goto label_492364;
        case 0x492368u: goto label_492368;
        case 0x49236cu: goto label_49236c;
        case 0x492370u: goto label_492370;
        case 0x492374u: goto label_492374;
        case 0x492378u: goto label_492378;
        case 0x49237cu: goto label_49237c;
        case 0x492380u: goto label_492380;
        case 0x492384u: goto label_492384;
        case 0x492388u: goto label_492388;
        case 0x49238cu: goto label_49238c;
        case 0x492390u: goto label_492390;
        case 0x492394u: goto label_492394;
        case 0x492398u: goto label_492398;
        case 0x49239cu: goto label_49239c;
        case 0x4923a0u: goto label_4923a0;
        case 0x4923a4u: goto label_4923a4;
        case 0x4923a8u: goto label_4923a8;
        case 0x4923acu: goto label_4923ac;
        case 0x4923b0u: goto label_4923b0;
        case 0x4923b4u: goto label_4923b4;
        case 0x4923b8u: goto label_4923b8;
        case 0x4923bcu: goto label_4923bc;
        case 0x4923c0u: goto label_4923c0;
        case 0x4923c4u: goto label_4923c4;
        case 0x4923c8u: goto label_4923c8;
        case 0x4923ccu: goto label_4923cc;
        case 0x4923d0u: goto label_4923d0;
        case 0x4923d4u: goto label_4923d4;
        case 0x4923d8u: goto label_4923d8;
        case 0x4923dcu: goto label_4923dc;
        case 0x4923e0u: goto label_4923e0;
        case 0x4923e4u: goto label_4923e4;
        case 0x4923e8u: goto label_4923e8;
        case 0x4923ecu: goto label_4923ec;
        case 0x4923f0u: goto label_4923f0;
        case 0x4923f4u: goto label_4923f4;
        case 0x4923f8u: goto label_4923f8;
        case 0x4923fcu: goto label_4923fc;
        case 0x492400u: goto label_492400;
        case 0x492404u: goto label_492404;
        case 0x492408u: goto label_492408;
        case 0x49240cu: goto label_49240c;
        case 0x492410u: goto label_492410;
        case 0x492414u: goto label_492414;
        case 0x492418u: goto label_492418;
        case 0x49241cu: goto label_49241c;
        case 0x492420u: goto label_492420;
        case 0x492424u: goto label_492424;
        case 0x492428u: goto label_492428;
        case 0x49242cu: goto label_49242c;
        case 0x492430u: goto label_492430;
        case 0x492434u: goto label_492434;
        case 0x492438u: goto label_492438;
        case 0x49243cu: goto label_49243c;
        case 0x492440u: goto label_492440;
        case 0x492444u: goto label_492444;
        case 0x492448u: goto label_492448;
        case 0x49244cu: goto label_49244c;
        case 0x492450u: goto label_492450;
        case 0x492454u: goto label_492454;
        case 0x492458u: goto label_492458;
        case 0x49245cu: goto label_49245c;
        case 0x492460u: goto label_492460;
        case 0x492464u: goto label_492464;
        case 0x492468u: goto label_492468;
        case 0x49246cu: goto label_49246c;
        case 0x492470u: goto label_492470;
        case 0x492474u: goto label_492474;
        case 0x492478u: goto label_492478;
        case 0x49247cu: goto label_49247c;
        case 0x492480u: goto label_492480;
        case 0x492484u: goto label_492484;
        case 0x492488u: goto label_492488;
        case 0x49248cu: goto label_49248c;
        case 0x492490u: goto label_492490;
        case 0x492494u: goto label_492494;
        case 0x492498u: goto label_492498;
        case 0x49249cu: goto label_49249c;
        case 0x4924a0u: goto label_4924a0;
        case 0x4924a4u: goto label_4924a4;
        case 0x4924a8u: goto label_4924a8;
        case 0x4924acu: goto label_4924ac;
        case 0x4924b0u: goto label_4924b0;
        case 0x4924b4u: goto label_4924b4;
        case 0x4924b8u: goto label_4924b8;
        case 0x4924bcu: goto label_4924bc;
        case 0x4924c0u: goto label_4924c0;
        case 0x4924c4u: goto label_4924c4;
        case 0x4924c8u: goto label_4924c8;
        case 0x4924ccu: goto label_4924cc;
        case 0x4924d0u: goto label_4924d0;
        case 0x4924d4u: goto label_4924d4;
        case 0x4924d8u: goto label_4924d8;
        case 0x4924dcu: goto label_4924dc;
        case 0x4924e0u: goto label_4924e0;
        case 0x4924e4u: goto label_4924e4;
        case 0x4924e8u: goto label_4924e8;
        case 0x4924ecu: goto label_4924ec;
        case 0x4924f0u: goto label_4924f0;
        case 0x4924f4u: goto label_4924f4;
        case 0x4924f8u: goto label_4924f8;
        case 0x4924fcu: goto label_4924fc;
        case 0x492500u: goto label_492500;
        case 0x492504u: goto label_492504;
        case 0x492508u: goto label_492508;
        case 0x49250cu: goto label_49250c;
        case 0x492510u: goto label_492510;
        case 0x492514u: goto label_492514;
        case 0x492518u: goto label_492518;
        case 0x49251cu: goto label_49251c;
        case 0x492520u: goto label_492520;
        case 0x492524u: goto label_492524;
        case 0x492528u: goto label_492528;
        case 0x49252cu: goto label_49252c;
        case 0x492530u: goto label_492530;
        case 0x492534u: goto label_492534;
        case 0x492538u: goto label_492538;
        case 0x49253cu: goto label_49253c;
        case 0x492540u: goto label_492540;
        case 0x492544u: goto label_492544;
        case 0x492548u: goto label_492548;
        case 0x49254cu: goto label_49254c;
        case 0x492550u: goto label_492550;
        case 0x492554u: goto label_492554;
        case 0x492558u: goto label_492558;
        case 0x49255cu: goto label_49255c;
        case 0x492560u: goto label_492560;
        case 0x492564u: goto label_492564;
        case 0x492568u: goto label_492568;
        case 0x49256cu: goto label_49256c;
        case 0x492570u: goto label_492570;
        case 0x492574u: goto label_492574;
        case 0x492578u: goto label_492578;
        case 0x49257cu: goto label_49257c;
        case 0x492580u: goto label_492580;
        case 0x492584u: goto label_492584;
        case 0x492588u: goto label_492588;
        case 0x49258cu: goto label_49258c;
        case 0x492590u: goto label_492590;
        case 0x492594u: goto label_492594;
        case 0x492598u: goto label_492598;
        case 0x49259cu: goto label_49259c;
        case 0x4925a0u: goto label_4925a0;
        case 0x4925a4u: goto label_4925a4;
        case 0x4925a8u: goto label_4925a8;
        case 0x4925acu: goto label_4925ac;
        case 0x4925b0u: goto label_4925b0;
        case 0x4925b4u: goto label_4925b4;
        case 0x4925b8u: goto label_4925b8;
        case 0x4925bcu: goto label_4925bc;
        case 0x4925c0u: goto label_4925c0;
        case 0x4925c4u: goto label_4925c4;
        case 0x4925c8u: goto label_4925c8;
        case 0x4925ccu: goto label_4925cc;
        case 0x4925d0u: goto label_4925d0;
        case 0x4925d4u: goto label_4925d4;
        case 0x4925d8u: goto label_4925d8;
        case 0x4925dcu: goto label_4925dc;
        case 0x4925e0u: goto label_4925e0;
        case 0x4925e4u: goto label_4925e4;
        case 0x4925e8u: goto label_4925e8;
        case 0x4925ecu: goto label_4925ec;
        case 0x4925f0u: goto label_4925f0;
        case 0x4925f4u: goto label_4925f4;
        case 0x4925f8u: goto label_4925f8;
        case 0x4925fcu: goto label_4925fc;
        case 0x492600u: goto label_492600;
        case 0x492604u: goto label_492604;
        case 0x492608u: goto label_492608;
        case 0x49260cu: goto label_49260c;
        case 0x492610u: goto label_492610;
        case 0x492614u: goto label_492614;
        case 0x492618u: goto label_492618;
        case 0x49261cu: goto label_49261c;
        case 0x492620u: goto label_492620;
        case 0x492624u: goto label_492624;
        case 0x492628u: goto label_492628;
        case 0x49262cu: goto label_49262c;
        case 0x492630u: goto label_492630;
        case 0x492634u: goto label_492634;
        case 0x492638u: goto label_492638;
        case 0x49263cu: goto label_49263c;
        case 0x492640u: goto label_492640;
        case 0x492644u: goto label_492644;
        case 0x492648u: goto label_492648;
        case 0x49264cu: goto label_49264c;
        case 0x492650u: goto label_492650;
        case 0x492654u: goto label_492654;
        case 0x492658u: goto label_492658;
        case 0x49265cu: goto label_49265c;
        case 0x492660u: goto label_492660;
        case 0x492664u: goto label_492664;
        case 0x492668u: goto label_492668;
        case 0x49266cu: goto label_49266c;
        case 0x492670u: goto label_492670;
        case 0x492674u: goto label_492674;
        case 0x492678u: goto label_492678;
        case 0x49267cu: goto label_49267c;
        case 0x492680u: goto label_492680;
        case 0x492684u: goto label_492684;
        case 0x492688u: goto label_492688;
        case 0x49268cu: goto label_49268c;
        case 0x492690u: goto label_492690;
        case 0x492694u: goto label_492694;
        case 0x492698u: goto label_492698;
        case 0x49269cu: goto label_49269c;
        case 0x4926a0u: goto label_4926a0;
        case 0x4926a4u: goto label_4926a4;
        case 0x4926a8u: goto label_4926a8;
        case 0x4926acu: goto label_4926ac;
        case 0x4926b0u: goto label_4926b0;
        case 0x4926b4u: goto label_4926b4;
        case 0x4926b8u: goto label_4926b8;
        case 0x4926bcu: goto label_4926bc;
        case 0x4926c0u: goto label_4926c0;
        case 0x4926c4u: goto label_4926c4;
        case 0x4926c8u: goto label_4926c8;
        case 0x4926ccu: goto label_4926cc;
        case 0x4926d0u: goto label_4926d0;
        case 0x4926d4u: goto label_4926d4;
        case 0x4926d8u: goto label_4926d8;
        case 0x4926dcu: goto label_4926dc;
        case 0x4926e0u: goto label_4926e0;
        case 0x4926e4u: goto label_4926e4;
        case 0x4926e8u: goto label_4926e8;
        case 0x4926ecu: goto label_4926ec;
        case 0x4926f0u: goto label_4926f0;
        case 0x4926f4u: goto label_4926f4;
        case 0x4926f8u: goto label_4926f8;
        case 0x4926fcu: goto label_4926fc;
        case 0x492700u: goto label_492700;
        case 0x492704u: goto label_492704;
        case 0x492708u: goto label_492708;
        case 0x49270cu: goto label_49270c;
        case 0x492710u: goto label_492710;
        case 0x492714u: goto label_492714;
        case 0x492718u: goto label_492718;
        case 0x49271cu: goto label_49271c;
        case 0x492720u: goto label_492720;
        case 0x492724u: goto label_492724;
        case 0x492728u: goto label_492728;
        case 0x49272cu: goto label_49272c;
        case 0x492730u: goto label_492730;
        case 0x492734u: goto label_492734;
        case 0x492738u: goto label_492738;
        case 0x49273cu: goto label_49273c;
        case 0x492740u: goto label_492740;
        case 0x492744u: goto label_492744;
        case 0x492748u: goto label_492748;
        case 0x49274cu: goto label_49274c;
        case 0x492750u: goto label_492750;
        case 0x492754u: goto label_492754;
        case 0x492758u: goto label_492758;
        case 0x49275cu: goto label_49275c;
        case 0x492760u: goto label_492760;
        case 0x492764u: goto label_492764;
        case 0x492768u: goto label_492768;
        case 0x49276cu: goto label_49276c;
        case 0x492770u: goto label_492770;
        case 0x492774u: goto label_492774;
        case 0x492778u: goto label_492778;
        case 0x49277cu: goto label_49277c;
        case 0x492780u: goto label_492780;
        case 0x492784u: goto label_492784;
        case 0x492788u: goto label_492788;
        case 0x49278cu: goto label_49278c;
        case 0x492790u: goto label_492790;
        case 0x492794u: goto label_492794;
        case 0x492798u: goto label_492798;
        case 0x49279cu: goto label_49279c;
        case 0x4927a0u: goto label_4927a0;
        case 0x4927a4u: goto label_4927a4;
        case 0x4927a8u: goto label_4927a8;
        case 0x4927acu: goto label_4927ac;
        case 0x4927b0u: goto label_4927b0;
        case 0x4927b4u: goto label_4927b4;
        case 0x4927b8u: goto label_4927b8;
        case 0x4927bcu: goto label_4927bc;
        case 0x4927c0u: goto label_4927c0;
        case 0x4927c4u: goto label_4927c4;
        case 0x4927c8u: goto label_4927c8;
        case 0x4927ccu: goto label_4927cc;
        case 0x4927d0u: goto label_4927d0;
        case 0x4927d4u: goto label_4927d4;
        case 0x4927d8u: goto label_4927d8;
        case 0x4927dcu: goto label_4927dc;
        case 0x4927e0u: goto label_4927e0;
        case 0x4927e4u: goto label_4927e4;
        case 0x4927e8u: goto label_4927e8;
        case 0x4927ecu: goto label_4927ec;
        case 0x4927f0u: goto label_4927f0;
        case 0x4927f4u: goto label_4927f4;
        case 0x4927f8u: goto label_4927f8;
        case 0x4927fcu: goto label_4927fc;
        case 0x492800u: goto label_492800;
        case 0x492804u: goto label_492804;
        case 0x492808u: goto label_492808;
        case 0x49280cu: goto label_49280c;
        case 0x492810u: goto label_492810;
        case 0x492814u: goto label_492814;
        case 0x492818u: goto label_492818;
        case 0x49281cu: goto label_49281c;
        case 0x492820u: goto label_492820;
        case 0x492824u: goto label_492824;
        case 0x492828u: goto label_492828;
        case 0x49282cu: goto label_49282c;
        case 0x492830u: goto label_492830;
        case 0x492834u: goto label_492834;
        case 0x492838u: goto label_492838;
        case 0x49283cu: goto label_49283c;
        case 0x492840u: goto label_492840;
        case 0x492844u: goto label_492844;
        case 0x492848u: goto label_492848;
        case 0x49284cu: goto label_49284c;
        case 0x492850u: goto label_492850;
        case 0x492854u: goto label_492854;
        case 0x492858u: goto label_492858;
        case 0x49285cu: goto label_49285c;
        case 0x492860u: goto label_492860;
        case 0x492864u: goto label_492864;
        case 0x492868u: goto label_492868;
        case 0x49286cu: goto label_49286c;
        case 0x492870u: goto label_492870;
        case 0x492874u: goto label_492874;
        case 0x492878u: goto label_492878;
        case 0x49287cu: goto label_49287c;
        case 0x492880u: goto label_492880;
        case 0x492884u: goto label_492884;
        case 0x492888u: goto label_492888;
        case 0x49288cu: goto label_49288c;
        case 0x492890u: goto label_492890;
        case 0x492894u: goto label_492894;
        case 0x492898u: goto label_492898;
        case 0x49289cu: goto label_49289c;
        case 0x4928a0u: goto label_4928a0;
        case 0x4928a4u: goto label_4928a4;
        case 0x4928a8u: goto label_4928a8;
        case 0x4928acu: goto label_4928ac;
        case 0x4928b0u: goto label_4928b0;
        case 0x4928b4u: goto label_4928b4;
        case 0x4928b8u: goto label_4928b8;
        case 0x4928bcu: goto label_4928bc;
        case 0x4928c0u: goto label_4928c0;
        case 0x4928c4u: goto label_4928c4;
        case 0x4928c8u: goto label_4928c8;
        case 0x4928ccu: goto label_4928cc;
        case 0x4928d0u: goto label_4928d0;
        case 0x4928d4u: goto label_4928d4;
        case 0x4928d8u: goto label_4928d8;
        case 0x4928dcu: goto label_4928dc;
        case 0x4928e0u: goto label_4928e0;
        case 0x4928e4u: goto label_4928e4;
        case 0x4928e8u: goto label_4928e8;
        case 0x4928ecu: goto label_4928ec;
        case 0x4928f0u: goto label_4928f0;
        case 0x4928f4u: goto label_4928f4;
        case 0x4928f8u: goto label_4928f8;
        case 0x4928fcu: goto label_4928fc;
        case 0x492900u: goto label_492900;
        case 0x492904u: goto label_492904;
        case 0x492908u: goto label_492908;
        case 0x49290cu: goto label_49290c;
        case 0x492910u: goto label_492910;
        case 0x492914u: goto label_492914;
        case 0x492918u: goto label_492918;
        case 0x49291cu: goto label_49291c;
        case 0x492920u: goto label_492920;
        case 0x492924u: goto label_492924;
        case 0x492928u: goto label_492928;
        case 0x49292cu: goto label_49292c;
        case 0x492930u: goto label_492930;
        case 0x492934u: goto label_492934;
        case 0x492938u: goto label_492938;
        case 0x49293cu: goto label_49293c;
        case 0x492940u: goto label_492940;
        case 0x492944u: goto label_492944;
        case 0x492948u: goto label_492948;
        case 0x49294cu: goto label_49294c;
        case 0x492950u: goto label_492950;
        case 0x492954u: goto label_492954;
        case 0x492958u: goto label_492958;
        case 0x49295cu: goto label_49295c;
        case 0x492960u: goto label_492960;
        case 0x492964u: goto label_492964;
        case 0x492968u: goto label_492968;
        case 0x49296cu: goto label_49296c;
        case 0x492970u: goto label_492970;
        case 0x492974u: goto label_492974;
        case 0x492978u: goto label_492978;
        case 0x49297cu: goto label_49297c;
        case 0x492980u: goto label_492980;
        case 0x492984u: goto label_492984;
        case 0x492988u: goto label_492988;
        case 0x49298cu: goto label_49298c;
        case 0x492990u: goto label_492990;
        case 0x492994u: goto label_492994;
        case 0x492998u: goto label_492998;
        case 0x49299cu: goto label_49299c;
        case 0x4929a0u: goto label_4929a0;
        case 0x4929a4u: goto label_4929a4;
        case 0x4929a8u: goto label_4929a8;
        case 0x4929acu: goto label_4929ac;
        case 0x4929b0u: goto label_4929b0;
        case 0x4929b4u: goto label_4929b4;
        case 0x4929b8u: goto label_4929b8;
        case 0x4929bcu: goto label_4929bc;
        case 0x4929c0u: goto label_4929c0;
        case 0x4929c4u: goto label_4929c4;
        case 0x4929c8u: goto label_4929c8;
        case 0x4929ccu: goto label_4929cc;
        case 0x4929d0u: goto label_4929d0;
        case 0x4929d4u: goto label_4929d4;
        case 0x4929d8u: goto label_4929d8;
        case 0x4929dcu: goto label_4929dc;
        case 0x4929e0u: goto label_4929e0;
        case 0x4929e4u: goto label_4929e4;
        case 0x4929e8u: goto label_4929e8;
        case 0x4929ecu: goto label_4929ec;
        case 0x4929f0u: goto label_4929f0;
        case 0x4929f4u: goto label_4929f4;
        case 0x4929f8u: goto label_4929f8;
        case 0x4929fcu: goto label_4929fc;
        case 0x492a00u: goto label_492a00;
        case 0x492a04u: goto label_492a04;
        case 0x492a08u: goto label_492a08;
        case 0x492a0cu: goto label_492a0c;
        case 0x492a10u: goto label_492a10;
        case 0x492a14u: goto label_492a14;
        case 0x492a18u: goto label_492a18;
        case 0x492a1cu: goto label_492a1c;
        case 0x492a20u: goto label_492a20;
        case 0x492a24u: goto label_492a24;
        case 0x492a28u: goto label_492a28;
        case 0x492a2cu: goto label_492a2c;
        case 0x492a30u: goto label_492a30;
        case 0x492a34u: goto label_492a34;
        case 0x492a38u: goto label_492a38;
        case 0x492a3cu: goto label_492a3c;
        case 0x492a40u: goto label_492a40;
        case 0x492a44u: goto label_492a44;
        case 0x492a48u: goto label_492a48;
        case 0x492a4cu: goto label_492a4c;
        case 0x492a50u: goto label_492a50;
        case 0x492a54u: goto label_492a54;
        case 0x492a58u: goto label_492a58;
        case 0x492a5cu: goto label_492a5c;
        case 0x492a60u: goto label_492a60;
        case 0x492a64u: goto label_492a64;
        case 0x492a68u: goto label_492a68;
        case 0x492a6cu: goto label_492a6c;
        case 0x492a70u: goto label_492a70;
        case 0x492a74u: goto label_492a74;
        case 0x492a78u: goto label_492a78;
        case 0x492a7cu: goto label_492a7c;
        case 0x492a80u: goto label_492a80;
        case 0x492a84u: goto label_492a84;
        case 0x492a88u: goto label_492a88;
        case 0x492a8cu: goto label_492a8c;
        case 0x492a90u: goto label_492a90;
        case 0x492a94u: goto label_492a94;
        case 0x492a98u: goto label_492a98;
        case 0x492a9cu: goto label_492a9c;
        case 0x492aa0u: goto label_492aa0;
        case 0x492aa4u: goto label_492aa4;
        case 0x492aa8u: goto label_492aa8;
        case 0x492aacu: goto label_492aac;
        case 0x492ab0u: goto label_492ab0;
        case 0x492ab4u: goto label_492ab4;
        case 0x492ab8u: goto label_492ab8;
        case 0x492abcu: goto label_492abc;
        case 0x492ac0u: goto label_492ac0;
        case 0x492ac4u: goto label_492ac4;
        case 0x492ac8u: goto label_492ac8;
        case 0x492accu: goto label_492acc;
        case 0x492ad0u: goto label_492ad0;
        case 0x492ad4u: goto label_492ad4;
        case 0x492ad8u: goto label_492ad8;
        case 0x492adcu: goto label_492adc;
        case 0x492ae0u: goto label_492ae0;
        case 0x492ae4u: goto label_492ae4;
        case 0x492ae8u: goto label_492ae8;
        case 0x492aecu: goto label_492aec;
        case 0x492af0u: goto label_492af0;
        case 0x492af4u: goto label_492af4;
        case 0x492af8u: goto label_492af8;
        case 0x492afcu: goto label_492afc;
        case 0x492b00u: goto label_492b00;
        case 0x492b04u: goto label_492b04;
        case 0x492b08u: goto label_492b08;
        case 0x492b0cu: goto label_492b0c;
        case 0x492b10u: goto label_492b10;
        case 0x492b14u: goto label_492b14;
        case 0x492b18u: goto label_492b18;
        case 0x492b1cu: goto label_492b1c;
        case 0x492b20u: goto label_492b20;
        case 0x492b24u: goto label_492b24;
        case 0x492b28u: goto label_492b28;
        case 0x492b2cu: goto label_492b2c;
        case 0x492b30u: goto label_492b30;
        case 0x492b34u: goto label_492b34;
        case 0x492b38u: goto label_492b38;
        case 0x492b3cu: goto label_492b3c;
        case 0x492b40u: goto label_492b40;
        case 0x492b44u: goto label_492b44;
        case 0x492b48u: goto label_492b48;
        case 0x492b4cu: goto label_492b4c;
        case 0x492b50u: goto label_492b50;
        case 0x492b54u: goto label_492b54;
        case 0x492b58u: goto label_492b58;
        case 0x492b5cu: goto label_492b5c;
        case 0x492b60u: goto label_492b60;
        case 0x492b64u: goto label_492b64;
        case 0x492b68u: goto label_492b68;
        case 0x492b6cu: goto label_492b6c;
        case 0x492b70u: goto label_492b70;
        case 0x492b74u: goto label_492b74;
        case 0x492b78u: goto label_492b78;
        case 0x492b7cu: goto label_492b7c;
        case 0x492b80u: goto label_492b80;
        case 0x492b84u: goto label_492b84;
        case 0x492b88u: goto label_492b88;
        case 0x492b8cu: goto label_492b8c;
        case 0x492b90u: goto label_492b90;
        case 0x492b94u: goto label_492b94;
        case 0x492b98u: goto label_492b98;
        case 0x492b9cu: goto label_492b9c;
        case 0x492ba0u: goto label_492ba0;
        case 0x492ba4u: goto label_492ba4;
        case 0x492ba8u: goto label_492ba8;
        case 0x492bacu: goto label_492bac;
        case 0x492bb0u: goto label_492bb0;
        case 0x492bb4u: goto label_492bb4;
        case 0x492bb8u: goto label_492bb8;
        case 0x492bbcu: goto label_492bbc;
        case 0x492bc0u: goto label_492bc0;
        case 0x492bc4u: goto label_492bc4;
        case 0x492bc8u: goto label_492bc8;
        case 0x492bccu: goto label_492bcc;
        case 0x492bd0u: goto label_492bd0;
        case 0x492bd4u: goto label_492bd4;
        case 0x492bd8u: goto label_492bd8;
        case 0x492bdcu: goto label_492bdc;
        case 0x492be0u: goto label_492be0;
        case 0x492be4u: goto label_492be4;
        case 0x492be8u: goto label_492be8;
        case 0x492becu: goto label_492bec;
        case 0x492bf0u: goto label_492bf0;
        case 0x492bf4u: goto label_492bf4;
        case 0x492bf8u: goto label_492bf8;
        case 0x492bfcu: goto label_492bfc;
        case 0x492c00u: goto label_492c00;
        case 0x492c04u: goto label_492c04;
        case 0x492c08u: goto label_492c08;
        case 0x492c0cu: goto label_492c0c;
        case 0x492c10u: goto label_492c10;
        case 0x492c14u: goto label_492c14;
        case 0x492c18u: goto label_492c18;
        case 0x492c1cu: goto label_492c1c;
        case 0x492c20u: goto label_492c20;
        case 0x492c24u: goto label_492c24;
        case 0x492c28u: goto label_492c28;
        case 0x492c2cu: goto label_492c2c;
        case 0x492c30u: goto label_492c30;
        case 0x492c34u: goto label_492c34;
        case 0x492c38u: goto label_492c38;
        case 0x492c3cu: goto label_492c3c;
        case 0x492c40u: goto label_492c40;
        case 0x492c44u: goto label_492c44;
        case 0x492c48u: goto label_492c48;
        case 0x492c4cu: goto label_492c4c;
        case 0x492c50u: goto label_492c50;
        case 0x492c54u: goto label_492c54;
        case 0x492c58u: goto label_492c58;
        case 0x492c5cu: goto label_492c5c;
        case 0x492c60u: goto label_492c60;
        case 0x492c64u: goto label_492c64;
        case 0x492c68u: goto label_492c68;
        case 0x492c6cu: goto label_492c6c;
        case 0x492c70u: goto label_492c70;
        case 0x492c74u: goto label_492c74;
        case 0x492c78u: goto label_492c78;
        case 0x492c7cu: goto label_492c7c;
        case 0x492c80u: goto label_492c80;
        case 0x492c84u: goto label_492c84;
        case 0x492c88u: goto label_492c88;
        case 0x492c8cu: goto label_492c8c;
        case 0x492c90u: goto label_492c90;
        case 0x492c94u: goto label_492c94;
        case 0x492c98u: goto label_492c98;
        case 0x492c9cu: goto label_492c9c;
        case 0x492ca0u: goto label_492ca0;
        case 0x492ca4u: goto label_492ca4;
        case 0x492ca8u: goto label_492ca8;
        case 0x492cacu: goto label_492cac;
        case 0x492cb0u: goto label_492cb0;
        case 0x492cb4u: goto label_492cb4;
        case 0x492cb8u: goto label_492cb8;
        case 0x492cbcu: goto label_492cbc;
        case 0x492cc0u: goto label_492cc0;
        case 0x492cc4u: goto label_492cc4;
        case 0x492cc8u: goto label_492cc8;
        case 0x492cccu: goto label_492ccc;
        case 0x492cd0u: goto label_492cd0;
        case 0x492cd4u: goto label_492cd4;
        case 0x492cd8u: goto label_492cd8;
        case 0x492cdcu: goto label_492cdc;
        case 0x492ce0u: goto label_492ce0;
        case 0x492ce4u: goto label_492ce4;
        case 0x492ce8u: goto label_492ce8;
        case 0x492cecu: goto label_492cec;
        case 0x492cf0u: goto label_492cf0;
        case 0x492cf4u: goto label_492cf4;
        case 0x492cf8u: goto label_492cf8;
        case 0x492cfcu: goto label_492cfc;
        case 0x492d00u: goto label_492d00;
        case 0x492d04u: goto label_492d04;
        case 0x492d08u: goto label_492d08;
        case 0x492d0cu: goto label_492d0c;
        case 0x492d10u: goto label_492d10;
        case 0x492d14u: goto label_492d14;
        case 0x492d18u: goto label_492d18;
        case 0x492d1cu: goto label_492d1c;
        case 0x492d20u: goto label_492d20;
        case 0x492d24u: goto label_492d24;
        case 0x492d28u: goto label_492d28;
        case 0x492d2cu: goto label_492d2c;
        case 0x492d30u: goto label_492d30;
        case 0x492d34u: goto label_492d34;
        case 0x492d38u: goto label_492d38;
        case 0x492d3cu: goto label_492d3c;
        case 0x492d40u: goto label_492d40;
        case 0x492d44u: goto label_492d44;
        case 0x492d48u: goto label_492d48;
        case 0x492d4cu: goto label_492d4c;
        case 0x492d50u: goto label_492d50;
        case 0x492d54u: goto label_492d54;
        case 0x492d58u: goto label_492d58;
        case 0x492d5cu: goto label_492d5c;
        case 0x492d60u: goto label_492d60;
        case 0x492d64u: goto label_492d64;
        case 0x492d68u: goto label_492d68;
        case 0x492d6cu: goto label_492d6c;
        case 0x492d70u: goto label_492d70;
        case 0x492d74u: goto label_492d74;
        case 0x492d78u: goto label_492d78;
        case 0x492d7cu: goto label_492d7c;
        case 0x492d80u: goto label_492d80;
        case 0x492d84u: goto label_492d84;
        case 0x492d88u: goto label_492d88;
        case 0x492d8cu: goto label_492d8c;
        case 0x492d90u: goto label_492d90;
        case 0x492d94u: goto label_492d94;
        case 0x492d98u: goto label_492d98;
        case 0x492d9cu: goto label_492d9c;
        case 0x492da0u: goto label_492da0;
        case 0x492da4u: goto label_492da4;
        case 0x492da8u: goto label_492da8;
        case 0x492dacu: goto label_492dac;
        case 0x492db0u: goto label_492db0;
        case 0x492db4u: goto label_492db4;
        case 0x492db8u: goto label_492db8;
        case 0x492dbcu: goto label_492dbc;
        case 0x492dc0u: goto label_492dc0;
        case 0x492dc4u: goto label_492dc4;
        case 0x492dc8u: goto label_492dc8;
        case 0x492dccu: goto label_492dcc;
        case 0x492dd0u: goto label_492dd0;
        case 0x492dd4u: goto label_492dd4;
        case 0x492dd8u: goto label_492dd8;
        case 0x492ddcu: goto label_492ddc;
        case 0x492de0u: goto label_492de0;
        case 0x492de4u: goto label_492de4;
        case 0x492de8u: goto label_492de8;
        case 0x492decu: goto label_492dec;
        case 0x492df0u: goto label_492df0;
        case 0x492df4u: goto label_492df4;
        case 0x492df8u: goto label_492df8;
        case 0x492dfcu: goto label_492dfc;
        case 0x492e00u: goto label_492e00;
        case 0x492e04u: goto label_492e04;
        case 0x492e08u: goto label_492e08;
        case 0x492e0cu: goto label_492e0c;
        case 0x492e10u: goto label_492e10;
        case 0x492e14u: goto label_492e14;
        case 0x492e18u: goto label_492e18;
        case 0x492e1cu: goto label_492e1c;
        case 0x492e20u: goto label_492e20;
        case 0x492e24u: goto label_492e24;
        case 0x492e28u: goto label_492e28;
        case 0x492e2cu: goto label_492e2c;
        case 0x492e30u: goto label_492e30;
        case 0x492e34u: goto label_492e34;
        case 0x492e38u: goto label_492e38;
        case 0x492e3cu: goto label_492e3c;
        case 0x492e40u: goto label_492e40;
        case 0x492e44u: goto label_492e44;
        case 0x492e48u: goto label_492e48;
        case 0x492e4cu: goto label_492e4c;
        case 0x492e50u: goto label_492e50;
        case 0x492e54u: goto label_492e54;
        case 0x492e58u: goto label_492e58;
        case 0x492e5cu: goto label_492e5c;
        case 0x492e60u: goto label_492e60;
        case 0x492e64u: goto label_492e64;
        case 0x492e68u: goto label_492e68;
        case 0x492e6cu: goto label_492e6c;
        case 0x492e70u: goto label_492e70;
        case 0x492e74u: goto label_492e74;
        case 0x492e78u: goto label_492e78;
        case 0x492e7cu: goto label_492e7c;
        case 0x492e80u: goto label_492e80;
        case 0x492e84u: goto label_492e84;
        case 0x492e88u: goto label_492e88;
        case 0x492e8cu: goto label_492e8c;
        case 0x492e90u: goto label_492e90;
        case 0x492e94u: goto label_492e94;
        case 0x492e98u: goto label_492e98;
        case 0x492e9cu: goto label_492e9c;
        case 0x492ea0u: goto label_492ea0;
        case 0x492ea4u: goto label_492ea4;
        case 0x492ea8u: goto label_492ea8;
        case 0x492eacu: goto label_492eac;
        case 0x492eb0u: goto label_492eb0;
        case 0x492eb4u: goto label_492eb4;
        case 0x492eb8u: goto label_492eb8;
        case 0x492ebcu: goto label_492ebc;
        case 0x492ec0u: goto label_492ec0;
        case 0x492ec4u: goto label_492ec4;
        case 0x492ec8u: goto label_492ec8;
        case 0x492eccu: goto label_492ecc;
        case 0x492ed0u: goto label_492ed0;
        case 0x492ed4u: goto label_492ed4;
        case 0x492ed8u: goto label_492ed8;
        case 0x492edcu: goto label_492edc;
        case 0x492ee0u: goto label_492ee0;
        case 0x492ee4u: goto label_492ee4;
        case 0x492ee8u: goto label_492ee8;
        case 0x492eecu: goto label_492eec;
        case 0x492ef0u: goto label_492ef0;
        case 0x492ef4u: goto label_492ef4;
        case 0x492ef8u: goto label_492ef8;
        case 0x492efcu: goto label_492efc;
        case 0x492f00u: goto label_492f00;
        case 0x492f04u: goto label_492f04;
        case 0x492f08u: goto label_492f08;
        case 0x492f0cu: goto label_492f0c;
        case 0x492f10u: goto label_492f10;
        case 0x492f14u: goto label_492f14;
        case 0x492f18u: goto label_492f18;
        case 0x492f1cu: goto label_492f1c;
        case 0x492f20u: goto label_492f20;
        case 0x492f24u: goto label_492f24;
        case 0x492f28u: goto label_492f28;
        case 0x492f2cu: goto label_492f2c;
        case 0x492f30u: goto label_492f30;
        case 0x492f34u: goto label_492f34;
        case 0x492f38u: goto label_492f38;
        case 0x492f3cu: goto label_492f3c;
        case 0x492f40u: goto label_492f40;
        case 0x492f44u: goto label_492f44;
        case 0x492f48u: goto label_492f48;
        case 0x492f4cu: goto label_492f4c;
        case 0x492f50u: goto label_492f50;
        case 0x492f54u: goto label_492f54;
        case 0x492f58u: goto label_492f58;
        case 0x492f5cu: goto label_492f5c;
        case 0x492f60u: goto label_492f60;
        case 0x492f64u: goto label_492f64;
        case 0x492f68u: goto label_492f68;
        case 0x492f6cu: goto label_492f6c;
        case 0x492f70u: goto label_492f70;
        case 0x492f74u: goto label_492f74;
        case 0x492f78u: goto label_492f78;
        case 0x492f7cu: goto label_492f7c;
        case 0x492f80u: goto label_492f80;
        case 0x492f84u: goto label_492f84;
        case 0x492f88u: goto label_492f88;
        case 0x492f8cu: goto label_492f8c;
        case 0x492f90u: goto label_492f90;
        case 0x492f94u: goto label_492f94;
        case 0x492f98u: goto label_492f98;
        case 0x492f9cu: goto label_492f9c;
        case 0x492fa0u: goto label_492fa0;
        case 0x492fa4u: goto label_492fa4;
        case 0x492fa8u: goto label_492fa8;
        case 0x492facu: goto label_492fac;
        case 0x492fb0u: goto label_492fb0;
        case 0x492fb4u: goto label_492fb4;
        case 0x492fb8u: goto label_492fb8;
        case 0x492fbcu: goto label_492fbc;
        case 0x492fc0u: goto label_492fc0;
        case 0x492fc4u: goto label_492fc4;
        case 0x492fc8u: goto label_492fc8;
        case 0x492fccu: goto label_492fcc;
        case 0x492fd0u: goto label_492fd0;
        case 0x492fd4u: goto label_492fd4;
        case 0x492fd8u: goto label_492fd8;
        case 0x492fdcu: goto label_492fdc;
        case 0x492fe0u: goto label_492fe0;
        case 0x492fe4u: goto label_492fe4;
        case 0x492fe8u: goto label_492fe8;
        case 0x492fecu: goto label_492fec;
        case 0x492ff0u: goto label_492ff0;
        case 0x492ff4u: goto label_492ff4;
        case 0x492ff8u: goto label_492ff8;
        case 0x492ffcu: goto label_492ffc;
        case 0x493000u: goto label_493000;
        case 0x493004u: goto label_493004;
        case 0x493008u: goto label_493008;
        case 0x49300cu: goto label_49300c;
        case 0x493010u: goto label_493010;
        case 0x493014u: goto label_493014;
        case 0x493018u: goto label_493018;
        case 0x49301cu: goto label_49301c;
        case 0x493020u: goto label_493020;
        case 0x493024u: goto label_493024;
        case 0x493028u: goto label_493028;
        case 0x49302cu: goto label_49302c;
        case 0x493030u: goto label_493030;
        case 0x493034u: goto label_493034;
        case 0x493038u: goto label_493038;
        case 0x49303cu: goto label_49303c;
        case 0x493040u: goto label_493040;
        case 0x493044u: goto label_493044;
        case 0x493048u: goto label_493048;
        case 0x49304cu: goto label_49304c;
        case 0x493050u: goto label_493050;
        case 0x493054u: goto label_493054;
        case 0x493058u: goto label_493058;
        case 0x49305cu: goto label_49305c;
        case 0x493060u: goto label_493060;
        case 0x493064u: goto label_493064;
        case 0x493068u: goto label_493068;
        case 0x49306cu: goto label_49306c;
        case 0x493070u: goto label_493070;
        case 0x493074u: goto label_493074;
        case 0x493078u: goto label_493078;
        case 0x49307cu: goto label_49307c;
        case 0x493080u: goto label_493080;
        case 0x493084u: goto label_493084;
        case 0x493088u: goto label_493088;
        case 0x49308cu: goto label_49308c;
        case 0x493090u: goto label_493090;
        case 0x493094u: goto label_493094;
        case 0x493098u: goto label_493098;
        case 0x49309cu: goto label_49309c;
        case 0x4930a0u: goto label_4930a0;
        case 0x4930a4u: goto label_4930a4;
        case 0x4930a8u: goto label_4930a8;
        case 0x4930acu: goto label_4930ac;
        case 0x4930b0u: goto label_4930b0;
        case 0x4930b4u: goto label_4930b4;
        case 0x4930b8u: goto label_4930b8;
        case 0x4930bcu: goto label_4930bc;
        case 0x4930c0u: goto label_4930c0;
        case 0x4930c4u: goto label_4930c4;
        case 0x4930c8u: goto label_4930c8;
        case 0x4930ccu: goto label_4930cc;
        case 0x4930d0u: goto label_4930d0;
        case 0x4930d4u: goto label_4930d4;
        case 0x4930d8u: goto label_4930d8;
        case 0x4930dcu: goto label_4930dc;
        case 0x4930e0u: goto label_4930e0;
        case 0x4930e4u: goto label_4930e4;
        case 0x4930e8u: goto label_4930e8;
        case 0x4930ecu: goto label_4930ec;
        case 0x4930f0u: goto label_4930f0;
        case 0x4930f4u: goto label_4930f4;
        case 0x4930f8u: goto label_4930f8;
        case 0x4930fcu: goto label_4930fc;
        case 0x493100u: goto label_493100;
        case 0x493104u: goto label_493104;
        case 0x493108u: goto label_493108;
        case 0x49310cu: goto label_49310c;
        case 0x493110u: goto label_493110;
        case 0x493114u: goto label_493114;
        case 0x493118u: goto label_493118;
        case 0x49311cu: goto label_49311c;
        case 0x493120u: goto label_493120;
        case 0x493124u: goto label_493124;
        case 0x493128u: goto label_493128;
        case 0x49312cu: goto label_49312c;
        case 0x493130u: goto label_493130;
        case 0x493134u: goto label_493134;
        case 0x493138u: goto label_493138;
        case 0x49313cu: goto label_49313c;
        case 0x493140u: goto label_493140;
        case 0x493144u: goto label_493144;
        case 0x493148u: goto label_493148;
        case 0x49314cu: goto label_49314c;
        case 0x493150u: goto label_493150;
        case 0x493154u: goto label_493154;
        case 0x493158u: goto label_493158;
        case 0x49315cu: goto label_49315c;
        case 0x493160u: goto label_493160;
        case 0x493164u: goto label_493164;
        case 0x493168u: goto label_493168;
        case 0x49316cu: goto label_49316c;
        case 0x493170u: goto label_493170;
        case 0x493174u: goto label_493174;
        case 0x493178u: goto label_493178;
        case 0x49317cu: goto label_49317c;
        case 0x493180u: goto label_493180;
        case 0x493184u: goto label_493184;
        case 0x493188u: goto label_493188;
        case 0x49318cu: goto label_49318c;
        case 0x493190u: goto label_493190;
        case 0x493194u: goto label_493194;
        case 0x493198u: goto label_493198;
        case 0x49319cu: goto label_49319c;
        case 0x4931a0u: goto label_4931a0;
        case 0x4931a4u: goto label_4931a4;
        case 0x4931a8u: goto label_4931a8;
        case 0x4931acu: goto label_4931ac;
        case 0x4931b0u: goto label_4931b0;
        case 0x4931b4u: goto label_4931b4;
        case 0x4931b8u: goto label_4931b8;
        case 0x4931bcu: goto label_4931bc;
        case 0x4931c0u: goto label_4931c0;
        case 0x4931c4u: goto label_4931c4;
        case 0x4931c8u: goto label_4931c8;
        case 0x4931ccu: goto label_4931cc;
        case 0x4931d0u: goto label_4931d0;
        case 0x4931d4u: goto label_4931d4;
        case 0x4931d8u: goto label_4931d8;
        case 0x4931dcu: goto label_4931dc;
        case 0x4931e0u: goto label_4931e0;
        case 0x4931e4u: goto label_4931e4;
        case 0x4931e8u: goto label_4931e8;
        case 0x4931ecu: goto label_4931ec;
        case 0x4931f0u: goto label_4931f0;
        case 0x4931f4u: goto label_4931f4;
        case 0x4931f8u: goto label_4931f8;
        case 0x4931fcu: goto label_4931fc;
        case 0x493200u: goto label_493200;
        case 0x493204u: goto label_493204;
        case 0x493208u: goto label_493208;
        case 0x49320cu: goto label_49320c;
        case 0x493210u: goto label_493210;
        case 0x493214u: goto label_493214;
        case 0x493218u: goto label_493218;
        case 0x49321cu: goto label_49321c;
        case 0x493220u: goto label_493220;
        case 0x493224u: goto label_493224;
        case 0x493228u: goto label_493228;
        case 0x49322cu: goto label_49322c;
        case 0x493230u: goto label_493230;
        case 0x493234u: goto label_493234;
        case 0x493238u: goto label_493238;
        case 0x49323cu: goto label_49323c;
        case 0x493240u: goto label_493240;
        case 0x493244u: goto label_493244;
        case 0x493248u: goto label_493248;
        case 0x49324cu: goto label_49324c;
        case 0x493250u: goto label_493250;
        case 0x493254u: goto label_493254;
        case 0x493258u: goto label_493258;
        case 0x49325cu: goto label_49325c;
        case 0x493260u: goto label_493260;
        case 0x493264u: goto label_493264;
        case 0x493268u: goto label_493268;
        case 0x49326cu: goto label_49326c;
        case 0x493270u: goto label_493270;
        case 0x493274u: goto label_493274;
        case 0x493278u: goto label_493278;
        case 0x49327cu: goto label_49327c;
        case 0x493280u: goto label_493280;
        case 0x493284u: goto label_493284;
        case 0x493288u: goto label_493288;
        case 0x49328cu: goto label_49328c;
        case 0x493290u: goto label_493290;
        case 0x493294u: goto label_493294;
        case 0x493298u: goto label_493298;
        case 0x49329cu: goto label_49329c;
        case 0x4932a0u: goto label_4932a0;
        case 0x4932a4u: goto label_4932a4;
        case 0x4932a8u: goto label_4932a8;
        case 0x4932acu: goto label_4932ac;
        case 0x4932b0u: goto label_4932b0;
        case 0x4932b4u: goto label_4932b4;
        case 0x4932b8u: goto label_4932b8;
        case 0x4932bcu: goto label_4932bc;
        case 0x4932c0u: goto label_4932c0;
        case 0x4932c4u: goto label_4932c4;
        case 0x4932c8u: goto label_4932c8;
        case 0x4932ccu: goto label_4932cc;
        case 0x4932d0u: goto label_4932d0;
        case 0x4932d4u: goto label_4932d4;
        case 0x4932d8u: goto label_4932d8;
        case 0x4932dcu: goto label_4932dc;
        case 0x4932e0u: goto label_4932e0;
        case 0x4932e4u: goto label_4932e4;
        case 0x4932e8u: goto label_4932e8;
        case 0x4932ecu: goto label_4932ec;
        case 0x4932f0u: goto label_4932f0;
        case 0x4932f4u: goto label_4932f4;
        case 0x4932f8u: goto label_4932f8;
        case 0x4932fcu: goto label_4932fc;
        case 0x493300u: goto label_493300;
        case 0x493304u: goto label_493304;
        case 0x493308u: goto label_493308;
        case 0x49330cu: goto label_49330c;
        case 0x493310u: goto label_493310;
        case 0x493314u: goto label_493314;
        case 0x493318u: goto label_493318;
        case 0x49331cu: goto label_49331c;
        case 0x493320u: goto label_493320;
        case 0x493324u: goto label_493324;
        case 0x493328u: goto label_493328;
        case 0x49332cu: goto label_49332c;
        case 0x493330u: goto label_493330;
        case 0x493334u: goto label_493334;
        case 0x493338u: goto label_493338;
        case 0x49333cu: goto label_49333c;
        case 0x493340u: goto label_493340;
        case 0x493344u: goto label_493344;
        case 0x493348u: goto label_493348;
        case 0x49334cu: goto label_49334c;
        case 0x493350u: goto label_493350;
        case 0x493354u: goto label_493354;
        case 0x493358u: goto label_493358;
        case 0x49335cu: goto label_49335c;
        case 0x493360u: goto label_493360;
        case 0x493364u: goto label_493364;
        case 0x493368u: goto label_493368;
        case 0x49336cu: goto label_49336c;
        case 0x493370u: goto label_493370;
        case 0x493374u: goto label_493374;
        case 0x493378u: goto label_493378;
        case 0x49337cu: goto label_49337c;
        case 0x493380u: goto label_493380;
        case 0x493384u: goto label_493384;
        case 0x493388u: goto label_493388;
        case 0x49338cu: goto label_49338c;
        case 0x493390u: goto label_493390;
        case 0x493394u: goto label_493394;
        case 0x493398u: goto label_493398;
        case 0x49339cu: goto label_49339c;
        case 0x4933a0u: goto label_4933a0;
        case 0x4933a4u: goto label_4933a4;
        case 0x4933a8u: goto label_4933a8;
        case 0x4933acu: goto label_4933ac;
        case 0x4933b0u: goto label_4933b0;
        case 0x4933b4u: goto label_4933b4;
        case 0x4933b8u: goto label_4933b8;
        case 0x4933bcu: goto label_4933bc;
        case 0x4933c0u: goto label_4933c0;
        case 0x4933c4u: goto label_4933c4;
        case 0x4933c8u: goto label_4933c8;
        case 0x4933ccu: goto label_4933cc;
        case 0x4933d0u: goto label_4933d0;
        case 0x4933d4u: goto label_4933d4;
        case 0x4933d8u: goto label_4933d8;
        case 0x4933dcu: goto label_4933dc;
        case 0x4933e0u: goto label_4933e0;
        case 0x4933e4u: goto label_4933e4;
        case 0x4933e8u: goto label_4933e8;
        case 0x4933ecu: goto label_4933ec;
        case 0x4933f0u: goto label_4933f0;
        case 0x4933f4u: goto label_4933f4;
        case 0x4933f8u: goto label_4933f8;
        case 0x4933fcu: goto label_4933fc;
        case 0x493400u: goto label_493400;
        case 0x493404u: goto label_493404;
        case 0x493408u: goto label_493408;
        case 0x49340cu: goto label_49340c;
        case 0x493410u: goto label_493410;
        case 0x493414u: goto label_493414;
        case 0x493418u: goto label_493418;
        case 0x49341cu: goto label_49341c;
        case 0x493420u: goto label_493420;
        case 0x493424u: goto label_493424;
        case 0x493428u: goto label_493428;
        case 0x49342cu: goto label_49342c;
        case 0x493430u: goto label_493430;
        case 0x493434u: goto label_493434;
        case 0x493438u: goto label_493438;
        case 0x49343cu: goto label_49343c;
        case 0x493440u: goto label_493440;
        case 0x493444u: goto label_493444;
        case 0x493448u: goto label_493448;
        case 0x49344cu: goto label_49344c;
        case 0x493450u: goto label_493450;
        case 0x493454u: goto label_493454;
        case 0x493458u: goto label_493458;
        case 0x49345cu: goto label_49345c;
        case 0x493460u: goto label_493460;
        case 0x493464u: goto label_493464;
        case 0x493468u: goto label_493468;
        case 0x49346cu: goto label_49346c;
        case 0x493470u: goto label_493470;
        case 0x493474u: goto label_493474;
        case 0x493478u: goto label_493478;
        case 0x49347cu: goto label_49347c;
        case 0x493480u: goto label_493480;
        case 0x493484u: goto label_493484;
        case 0x493488u: goto label_493488;
        case 0x49348cu: goto label_49348c;
        case 0x493490u: goto label_493490;
        case 0x493494u: goto label_493494;
        case 0x493498u: goto label_493498;
        case 0x49349cu: goto label_49349c;
        case 0x4934a0u: goto label_4934a0;
        case 0x4934a4u: goto label_4934a4;
        case 0x4934a8u: goto label_4934a8;
        case 0x4934acu: goto label_4934ac;
        case 0x4934b0u: goto label_4934b0;
        case 0x4934b4u: goto label_4934b4;
        case 0x4934b8u: goto label_4934b8;
        case 0x4934bcu: goto label_4934bc;
        case 0x4934c0u: goto label_4934c0;
        case 0x4934c4u: goto label_4934c4;
        case 0x4934c8u: goto label_4934c8;
        case 0x4934ccu: goto label_4934cc;
        case 0x4934d0u: goto label_4934d0;
        case 0x4934d4u: goto label_4934d4;
        case 0x4934d8u: goto label_4934d8;
        case 0x4934dcu: goto label_4934dc;
        case 0x4934e0u: goto label_4934e0;
        case 0x4934e4u: goto label_4934e4;
        case 0x4934e8u: goto label_4934e8;
        case 0x4934ecu: goto label_4934ec;
        case 0x4934f0u: goto label_4934f0;
        case 0x4934f4u: goto label_4934f4;
        case 0x4934f8u: goto label_4934f8;
        case 0x4934fcu: goto label_4934fc;
        case 0x493500u: goto label_493500;
        case 0x493504u: goto label_493504;
        case 0x493508u: goto label_493508;
        case 0x49350cu: goto label_49350c;
        case 0x493510u: goto label_493510;
        case 0x493514u: goto label_493514;
        case 0x493518u: goto label_493518;
        case 0x49351cu: goto label_49351c;
        case 0x493520u: goto label_493520;
        case 0x493524u: goto label_493524;
        case 0x493528u: goto label_493528;
        case 0x49352cu: goto label_49352c;
        case 0x493530u: goto label_493530;
        case 0x493534u: goto label_493534;
        case 0x493538u: goto label_493538;
        case 0x49353cu: goto label_49353c;
        case 0x493540u: goto label_493540;
        case 0x493544u: goto label_493544;
        case 0x493548u: goto label_493548;
        case 0x49354cu: goto label_49354c;
        case 0x493550u: goto label_493550;
        case 0x493554u: goto label_493554;
        case 0x493558u: goto label_493558;
        case 0x49355cu: goto label_49355c;
        case 0x493560u: goto label_493560;
        case 0x493564u: goto label_493564;
        case 0x493568u: goto label_493568;
        case 0x49356cu: goto label_49356c;
        case 0x493570u: goto label_493570;
        case 0x493574u: goto label_493574;
        case 0x493578u: goto label_493578;
        case 0x49357cu: goto label_49357c;
        case 0x493580u: goto label_493580;
        case 0x493584u: goto label_493584;
        case 0x493588u: goto label_493588;
        case 0x49358cu: goto label_49358c;
        case 0x493590u: goto label_493590;
        case 0x493594u: goto label_493594;
        case 0x493598u: goto label_493598;
        case 0x49359cu: goto label_49359c;
        case 0x4935a0u: goto label_4935a0;
        case 0x4935a4u: goto label_4935a4;
        case 0x4935a8u: goto label_4935a8;
        case 0x4935acu: goto label_4935ac;
        case 0x4935b0u: goto label_4935b0;
        case 0x4935b4u: goto label_4935b4;
        case 0x4935b8u: goto label_4935b8;
        case 0x4935bcu: goto label_4935bc;
        case 0x4935c0u: goto label_4935c0;
        case 0x4935c4u: goto label_4935c4;
        case 0x4935c8u: goto label_4935c8;
        case 0x4935ccu: goto label_4935cc;
        case 0x4935d0u: goto label_4935d0;
        case 0x4935d4u: goto label_4935d4;
        case 0x4935d8u: goto label_4935d8;
        case 0x4935dcu: goto label_4935dc;
        case 0x4935e0u: goto label_4935e0;
        case 0x4935e4u: goto label_4935e4;
        case 0x4935e8u: goto label_4935e8;
        case 0x4935ecu: goto label_4935ec;
        case 0x4935f0u: goto label_4935f0;
        case 0x4935f4u: goto label_4935f4;
        case 0x4935f8u: goto label_4935f8;
        case 0x4935fcu: goto label_4935fc;
        case 0x493600u: goto label_493600;
        case 0x493604u: goto label_493604;
        case 0x493608u: goto label_493608;
        case 0x49360cu: goto label_49360c;
        case 0x493610u: goto label_493610;
        case 0x493614u: goto label_493614;
        case 0x493618u: goto label_493618;
        case 0x49361cu: goto label_49361c;
        case 0x493620u: goto label_493620;
        case 0x493624u: goto label_493624;
        case 0x493628u: goto label_493628;
        case 0x49362cu: goto label_49362c;
        case 0x493630u: goto label_493630;
        case 0x493634u: goto label_493634;
        case 0x493638u: goto label_493638;
        case 0x49363cu: goto label_49363c;
        case 0x493640u: goto label_493640;
        case 0x493644u: goto label_493644;
        case 0x493648u: goto label_493648;
        case 0x49364cu: goto label_49364c;
        case 0x493650u: goto label_493650;
        case 0x493654u: goto label_493654;
        case 0x493658u: goto label_493658;
        case 0x49365cu: goto label_49365c;
        case 0x493660u: goto label_493660;
        case 0x493664u: goto label_493664;
        case 0x493668u: goto label_493668;
        case 0x49366cu: goto label_49366c;
        case 0x493670u: goto label_493670;
        case 0x493674u: goto label_493674;
        case 0x493678u: goto label_493678;
        case 0x49367cu: goto label_49367c;
        case 0x493680u: goto label_493680;
        case 0x493684u: goto label_493684;
        case 0x493688u: goto label_493688;
        case 0x49368cu: goto label_49368c;
        case 0x493690u: goto label_493690;
        case 0x493694u: goto label_493694;
        case 0x493698u: goto label_493698;
        case 0x49369cu: goto label_49369c;
        case 0x4936a0u: goto label_4936a0;
        case 0x4936a4u: goto label_4936a4;
        case 0x4936a8u: goto label_4936a8;
        case 0x4936acu: goto label_4936ac;
        case 0x4936b0u: goto label_4936b0;
        case 0x4936b4u: goto label_4936b4;
        case 0x4936b8u: goto label_4936b8;
        case 0x4936bcu: goto label_4936bc;
        case 0x4936c0u: goto label_4936c0;
        case 0x4936c4u: goto label_4936c4;
        case 0x4936c8u: goto label_4936c8;
        case 0x4936ccu: goto label_4936cc;
        case 0x4936d0u: goto label_4936d0;
        case 0x4936d4u: goto label_4936d4;
        case 0x4936d8u: goto label_4936d8;
        case 0x4936dcu: goto label_4936dc;
        case 0x4936e0u: goto label_4936e0;
        case 0x4936e4u: goto label_4936e4;
        case 0x4936e8u: goto label_4936e8;
        case 0x4936ecu: goto label_4936ec;
        case 0x4936f0u: goto label_4936f0;
        case 0x4936f4u: goto label_4936f4;
        case 0x4936f8u: goto label_4936f8;
        case 0x4936fcu: goto label_4936fc;
        case 0x493700u: goto label_493700;
        case 0x493704u: goto label_493704;
        case 0x493708u: goto label_493708;
        case 0x49370cu: goto label_49370c;
        case 0x493710u: goto label_493710;
        case 0x493714u: goto label_493714;
        case 0x493718u: goto label_493718;
        case 0x49371cu: goto label_49371c;
        case 0x493720u: goto label_493720;
        case 0x493724u: goto label_493724;
        case 0x493728u: goto label_493728;
        case 0x49372cu: goto label_49372c;
        case 0x493730u: goto label_493730;
        case 0x493734u: goto label_493734;
        case 0x493738u: goto label_493738;
        case 0x49373cu: goto label_49373c;
        case 0x493740u: goto label_493740;
        case 0x493744u: goto label_493744;
        case 0x493748u: goto label_493748;
        case 0x49374cu: goto label_49374c;
        case 0x493750u: goto label_493750;
        case 0x493754u: goto label_493754;
        case 0x493758u: goto label_493758;
        case 0x49375cu: goto label_49375c;
        case 0x493760u: goto label_493760;
        case 0x493764u: goto label_493764;
        case 0x493768u: goto label_493768;
        case 0x49376cu: goto label_49376c;
        case 0x493770u: goto label_493770;
        case 0x493774u: goto label_493774;
        case 0x493778u: goto label_493778;
        case 0x49377cu: goto label_49377c;
        case 0x493780u: goto label_493780;
        case 0x493784u: goto label_493784;
        case 0x493788u: goto label_493788;
        case 0x49378cu: goto label_49378c;
        case 0x493790u: goto label_493790;
        case 0x493794u: goto label_493794;
        case 0x493798u: goto label_493798;
        case 0x49379cu: goto label_49379c;
        case 0x4937a0u: goto label_4937a0;
        case 0x4937a4u: goto label_4937a4;
        case 0x4937a8u: goto label_4937a8;
        case 0x4937acu: goto label_4937ac;
        case 0x4937b0u: goto label_4937b0;
        case 0x4937b4u: goto label_4937b4;
        case 0x4937b8u: goto label_4937b8;
        case 0x4937bcu: goto label_4937bc;
        case 0x4937c0u: goto label_4937c0;
        case 0x4937c4u: goto label_4937c4;
        case 0x4937c8u: goto label_4937c8;
        case 0x4937ccu: goto label_4937cc;
        case 0x4937d0u: goto label_4937d0;
        case 0x4937d4u: goto label_4937d4;
        case 0x4937d8u: goto label_4937d8;
        case 0x4937dcu: goto label_4937dc;
        case 0x4937e0u: goto label_4937e0;
        case 0x4937e4u: goto label_4937e4;
        case 0x4937e8u: goto label_4937e8;
        case 0x4937ecu: goto label_4937ec;
        case 0x4937f0u: goto label_4937f0;
        case 0x4937f4u: goto label_4937f4;
        case 0x4937f8u: goto label_4937f8;
        case 0x4937fcu: goto label_4937fc;
        case 0x493800u: goto label_493800;
        case 0x493804u: goto label_493804;
        case 0x493808u: goto label_493808;
        case 0x49380cu: goto label_49380c;
        case 0x493810u: goto label_493810;
        case 0x493814u: goto label_493814;
        case 0x493818u: goto label_493818;
        case 0x49381cu: goto label_49381c;
        case 0x493820u: goto label_493820;
        case 0x493824u: goto label_493824;
        case 0x493828u: goto label_493828;
        case 0x49382cu: goto label_49382c;
        case 0x493830u: goto label_493830;
        case 0x493834u: goto label_493834;
        case 0x493838u: goto label_493838;
        case 0x49383cu: goto label_49383c;
        case 0x493840u: goto label_493840;
        case 0x493844u: goto label_493844;
        case 0x493848u: goto label_493848;
        case 0x49384cu: goto label_49384c;
        case 0x493850u: goto label_493850;
        case 0x493854u: goto label_493854;
        case 0x493858u: goto label_493858;
        case 0x49385cu: goto label_49385c;
        case 0x493860u: goto label_493860;
        case 0x493864u: goto label_493864;
        case 0x493868u: goto label_493868;
        case 0x49386cu: goto label_49386c;
        case 0x493870u: goto label_493870;
        case 0x493874u: goto label_493874;
        case 0x493878u: goto label_493878;
        case 0x49387cu: goto label_49387c;
        case 0x493880u: goto label_493880;
        case 0x493884u: goto label_493884;
        case 0x493888u: goto label_493888;
        case 0x49388cu: goto label_49388c;
        case 0x493890u: goto label_493890;
        case 0x493894u: goto label_493894;
        case 0x493898u: goto label_493898;
        case 0x49389cu: goto label_49389c;
        case 0x4938a0u: goto label_4938a0;
        case 0x4938a4u: goto label_4938a4;
        case 0x4938a8u: goto label_4938a8;
        case 0x4938acu: goto label_4938ac;
        case 0x4938b0u: goto label_4938b0;
        case 0x4938b4u: goto label_4938b4;
        case 0x4938b8u: goto label_4938b8;
        case 0x4938bcu: goto label_4938bc;
        case 0x4938c0u: goto label_4938c0;
        case 0x4938c4u: goto label_4938c4;
        case 0x4938c8u: goto label_4938c8;
        case 0x4938ccu: goto label_4938cc;
        case 0x4938d0u: goto label_4938d0;
        case 0x4938d4u: goto label_4938d4;
        case 0x4938d8u: goto label_4938d8;
        case 0x4938dcu: goto label_4938dc;
        case 0x4938e0u: goto label_4938e0;
        case 0x4938e4u: goto label_4938e4;
        case 0x4938e8u: goto label_4938e8;
        case 0x4938ecu: goto label_4938ec;
        case 0x4938f0u: goto label_4938f0;
        case 0x4938f4u: goto label_4938f4;
        case 0x4938f8u: goto label_4938f8;
        case 0x4938fcu: goto label_4938fc;
        case 0x493900u: goto label_493900;
        case 0x493904u: goto label_493904;
        case 0x493908u: goto label_493908;
        case 0x49390cu: goto label_49390c;
        case 0x493910u: goto label_493910;
        case 0x493914u: goto label_493914;
        case 0x493918u: goto label_493918;
        case 0x49391cu: goto label_49391c;
        case 0x493920u: goto label_493920;
        case 0x493924u: goto label_493924;
        case 0x493928u: goto label_493928;
        case 0x49392cu: goto label_49392c;
        case 0x493930u: goto label_493930;
        case 0x493934u: goto label_493934;
        case 0x493938u: goto label_493938;
        case 0x49393cu: goto label_49393c;
        case 0x493940u: goto label_493940;
        case 0x493944u: goto label_493944;
        case 0x493948u: goto label_493948;
        case 0x49394cu: goto label_49394c;
        case 0x493950u: goto label_493950;
        case 0x493954u: goto label_493954;
        case 0x493958u: goto label_493958;
        case 0x49395cu: goto label_49395c;
        case 0x493960u: goto label_493960;
        case 0x493964u: goto label_493964;
        case 0x493968u: goto label_493968;
        case 0x49396cu: goto label_49396c;
        case 0x493970u: goto label_493970;
        case 0x493974u: goto label_493974;
        case 0x493978u: goto label_493978;
        case 0x49397cu: goto label_49397c;
        case 0x493980u: goto label_493980;
        case 0x493984u: goto label_493984;
        case 0x493988u: goto label_493988;
        case 0x49398cu: goto label_49398c;
        case 0x493990u: goto label_493990;
        case 0x493994u: goto label_493994;
        case 0x493998u: goto label_493998;
        case 0x49399cu: goto label_49399c;
        case 0x4939a0u: goto label_4939a0;
        case 0x4939a4u: goto label_4939a4;
        case 0x4939a8u: goto label_4939a8;
        case 0x4939acu: goto label_4939ac;
        case 0x4939b0u: goto label_4939b0;
        case 0x4939b4u: goto label_4939b4;
        case 0x4939b8u: goto label_4939b8;
        case 0x4939bcu: goto label_4939bc;
        case 0x4939c0u: goto label_4939c0;
        case 0x4939c4u: goto label_4939c4;
        case 0x4939c8u: goto label_4939c8;
        case 0x4939ccu: goto label_4939cc;
        case 0x4939d0u: goto label_4939d0;
        case 0x4939d4u: goto label_4939d4;
        case 0x4939d8u: goto label_4939d8;
        case 0x4939dcu: goto label_4939dc;
        case 0x4939e0u: goto label_4939e0;
        case 0x4939e4u: goto label_4939e4;
        case 0x4939e8u: goto label_4939e8;
        case 0x4939ecu: goto label_4939ec;
        case 0x4939f0u: goto label_4939f0;
        case 0x4939f4u: goto label_4939f4;
        case 0x4939f8u: goto label_4939f8;
        case 0x4939fcu: goto label_4939fc;
        case 0x493a00u: goto label_493a00;
        case 0x493a04u: goto label_493a04;
        case 0x493a08u: goto label_493a08;
        case 0x493a0cu: goto label_493a0c;
        case 0x493a10u: goto label_493a10;
        case 0x493a14u: goto label_493a14;
        case 0x493a18u: goto label_493a18;
        case 0x493a1cu: goto label_493a1c;
        case 0x493a20u: goto label_493a20;
        case 0x493a24u: goto label_493a24;
        case 0x493a28u: goto label_493a28;
        case 0x493a2cu: goto label_493a2c;
        case 0x493a30u: goto label_493a30;
        case 0x493a34u: goto label_493a34;
        case 0x493a38u: goto label_493a38;
        case 0x493a3cu: goto label_493a3c;
        case 0x493a40u: goto label_493a40;
        case 0x493a44u: goto label_493a44;
        case 0x493a48u: goto label_493a48;
        case 0x493a4cu: goto label_493a4c;
        case 0x493a50u: goto label_493a50;
        case 0x493a54u: goto label_493a54;
        case 0x493a58u: goto label_493a58;
        case 0x493a5cu: goto label_493a5c;
        case 0x493a60u: goto label_493a60;
        case 0x493a64u: goto label_493a64;
        case 0x493a68u: goto label_493a68;
        case 0x493a6cu: goto label_493a6c;
        case 0x493a70u: goto label_493a70;
        case 0x493a74u: goto label_493a74;
        case 0x493a78u: goto label_493a78;
        case 0x493a7cu: goto label_493a7c;
        case 0x493a80u: goto label_493a80;
        case 0x493a84u: goto label_493a84;
        case 0x493a88u: goto label_493a88;
        case 0x493a8cu: goto label_493a8c;
        case 0x493a90u: goto label_493a90;
        case 0x493a94u: goto label_493a94;
        case 0x493a98u: goto label_493a98;
        case 0x493a9cu: goto label_493a9c;
        case 0x493aa0u: goto label_493aa0;
        case 0x493aa4u: goto label_493aa4;
        case 0x493aa8u: goto label_493aa8;
        case 0x493aacu: goto label_493aac;
        case 0x493ab0u: goto label_493ab0;
        case 0x493ab4u: goto label_493ab4;
        case 0x493ab8u: goto label_493ab8;
        case 0x493abcu: goto label_493abc;
        case 0x493ac0u: goto label_493ac0;
        case 0x493ac4u: goto label_493ac4;
        case 0x493ac8u: goto label_493ac8;
        case 0x493accu: goto label_493acc;
        case 0x493ad0u: goto label_493ad0;
        case 0x493ad4u: goto label_493ad4;
        case 0x493ad8u: goto label_493ad8;
        case 0x493adcu: goto label_493adc;
        case 0x493ae0u: goto label_493ae0;
        case 0x493ae4u: goto label_493ae4;
        case 0x493ae8u: goto label_493ae8;
        case 0x493aecu: goto label_493aec;
        case 0x493af0u: goto label_493af0;
        case 0x493af4u: goto label_493af4;
        case 0x493af8u: goto label_493af8;
        case 0x493afcu: goto label_493afc;
        case 0x493b00u: goto label_493b00;
        case 0x493b04u: goto label_493b04;
        case 0x493b08u: goto label_493b08;
        case 0x493b0cu: goto label_493b0c;
        case 0x493b10u: goto label_493b10;
        case 0x493b14u: goto label_493b14;
        case 0x493b18u: goto label_493b18;
        case 0x493b1cu: goto label_493b1c;
        case 0x493b20u: goto label_493b20;
        case 0x493b24u: goto label_493b24;
        case 0x493b28u: goto label_493b28;
        case 0x493b2cu: goto label_493b2c;
        case 0x493b30u: goto label_493b30;
        case 0x493b34u: goto label_493b34;
        case 0x493b38u: goto label_493b38;
        case 0x493b3cu: goto label_493b3c;
        case 0x493b40u: goto label_493b40;
        case 0x493b44u: goto label_493b44;
        case 0x493b48u: goto label_493b48;
        case 0x493b4cu: goto label_493b4c;
        case 0x493b50u: goto label_493b50;
        case 0x493b54u: goto label_493b54;
        case 0x493b58u: goto label_493b58;
        case 0x493b5cu: goto label_493b5c;
        case 0x493b60u: goto label_493b60;
        case 0x493b64u: goto label_493b64;
        case 0x493b68u: goto label_493b68;
        case 0x493b6cu: goto label_493b6c;
        case 0x493b70u: goto label_493b70;
        case 0x493b74u: goto label_493b74;
        case 0x493b78u: goto label_493b78;
        case 0x493b7cu: goto label_493b7c;
        case 0x493b80u: goto label_493b80;
        case 0x493b84u: goto label_493b84;
        case 0x493b88u: goto label_493b88;
        case 0x493b8cu: goto label_493b8c;
        case 0x493b90u: goto label_493b90;
        case 0x493b94u: goto label_493b94;
        case 0x493b98u: goto label_493b98;
        case 0x493b9cu: goto label_493b9c;
        case 0x493ba0u: goto label_493ba0;
        case 0x493ba4u: goto label_493ba4;
        case 0x493ba8u: goto label_493ba8;
        case 0x493bacu: goto label_493bac;
        case 0x493bb0u: goto label_493bb0;
        case 0x493bb4u: goto label_493bb4;
        case 0x493bb8u: goto label_493bb8;
        case 0x493bbcu: goto label_493bbc;
        case 0x493bc0u: goto label_493bc0;
        case 0x493bc4u: goto label_493bc4;
        case 0x493bc8u: goto label_493bc8;
        case 0x493bccu: goto label_493bcc;
        case 0x493bd0u: goto label_493bd0;
        case 0x493bd4u: goto label_493bd4;
        case 0x493bd8u: goto label_493bd8;
        case 0x493bdcu: goto label_493bdc;
        case 0x493be0u: goto label_493be0;
        case 0x493be4u: goto label_493be4;
        case 0x493be8u: goto label_493be8;
        case 0x493becu: goto label_493bec;
        case 0x493bf0u: goto label_493bf0;
        case 0x493bf4u: goto label_493bf4;
        case 0x493bf8u: goto label_493bf8;
        case 0x493bfcu: goto label_493bfc;
        case 0x493c00u: goto label_493c00;
        case 0x493c04u: goto label_493c04;
        case 0x493c08u: goto label_493c08;
        case 0x493c0cu: goto label_493c0c;
        case 0x493c10u: goto label_493c10;
        case 0x493c14u: goto label_493c14;
        case 0x493c18u: goto label_493c18;
        case 0x493c1cu: goto label_493c1c;
        case 0x493c20u: goto label_493c20;
        case 0x493c24u: goto label_493c24;
        case 0x493c28u: goto label_493c28;
        case 0x493c2cu: goto label_493c2c;
        case 0x493c30u: goto label_493c30;
        case 0x493c34u: goto label_493c34;
        case 0x493c38u: goto label_493c38;
        case 0x493c3cu: goto label_493c3c;
        case 0x493c40u: goto label_493c40;
        case 0x493c44u: goto label_493c44;
        case 0x493c48u: goto label_493c48;
        case 0x493c4cu: goto label_493c4c;
        case 0x493c50u: goto label_493c50;
        case 0x493c54u: goto label_493c54;
        case 0x493c58u: goto label_493c58;
        case 0x493c5cu: goto label_493c5c;
        case 0x493c60u: goto label_493c60;
        case 0x493c64u: goto label_493c64;
        case 0x493c68u: goto label_493c68;
        case 0x493c6cu: goto label_493c6c;
        case 0x493c70u: goto label_493c70;
        case 0x493c74u: goto label_493c74;
        case 0x493c78u: goto label_493c78;
        case 0x493c7cu: goto label_493c7c;
        case 0x493c80u: goto label_493c80;
        case 0x493c84u: goto label_493c84;
        case 0x493c88u: goto label_493c88;
        case 0x493c8cu: goto label_493c8c;
        case 0x493c90u: goto label_493c90;
        case 0x493c94u: goto label_493c94;
        case 0x493c98u: goto label_493c98;
        case 0x493c9cu: goto label_493c9c;
        case 0x493ca0u: goto label_493ca0;
        case 0x493ca4u: goto label_493ca4;
        case 0x493ca8u: goto label_493ca8;
        case 0x493cacu: goto label_493cac;
        case 0x493cb0u: goto label_493cb0;
        case 0x493cb4u: goto label_493cb4;
        case 0x493cb8u: goto label_493cb8;
        case 0x493cbcu: goto label_493cbc;
        case 0x493cc0u: goto label_493cc0;
        case 0x493cc4u: goto label_493cc4;
        case 0x493cc8u: goto label_493cc8;
        case 0x493cccu: goto label_493ccc;
        case 0x493cd0u: goto label_493cd0;
        case 0x493cd4u: goto label_493cd4;
        case 0x493cd8u: goto label_493cd8;
        case 0x493cdcu: goto label_493cdc;
        case 0x493ce0u: goto label_493ce0;
        case 0x493ce4u: goto label_493ce4;
        case 0x493ce8u: goto label_493ce8;
        case 0x493cecu: goto label_493cec;
        case 0x493cf0u: goto label_493cf0;
        case 0x493cf4u: goto label_493cf4;
        case 0x493cf8u: goto label_493cf8;
        case 0x493cfcu: goto label_493cfc;
        case 0x493d00u: goto label_493d00;
        case 0x493d04u: goto label_493d04;
        case 0x493d08u: goto label_493d08;
        case 0x493d0cu: goto label_493d0c;
        case 0x493d10u: goto label_493d10;
        case 0x493d14u: goto label_493d14;
        case 0x493d18u: goto label_493d18;
        case 0x493d1cu: goto label_493d1c;
        case 0x493d20u: goto label_493d20;
        case 0x493d24u: goto label_493d24;
        case 0x493d28u: goto label_493d28;
        case 0x493d2cu: goto label_493d2c;
        case 0x493d30u: goto label_493d30;
        case 0x493d34u: goto label_493d34;
        case 0x493d38u: goto label_493d38;
        case 0x493d3cu: goto label_493d3c;
        case 0x493d40u: goto label_493d40;
        case 0x493d44u: goto label_493d44;
        case 0x493d48u: goto label_493d48;
        case 0x493d4cu: goto label_493d4c;
        case 0x493d50u: goto label_493d50;
        case 0x493d54u: goto label_493d54;
        case 0x493d58u: goto label_493d58;
        case 0x493d5cu: goto label_493d5c;
        case 0x493d60u: goto label_493d60;
        case 0x493d64u: goto label_493d64;
        case 0x493d68u: goto label_493d68;
        case 0x493d6cu: goto label_493d6c;
        case 0x493d70u: goto label_493d70;
        case 0x493d74u: goto label_493d74;
        case 0x493d78u: goto label_493d78;
        case 0x493d7cu: goto label_493d7c;
        case 0x493d80u: goto label_493d80;
        case 0x493d84u: goto label_493d84;
        case 0x493d88u: goto label_493d88;
        case 0x493d8cu: goto label_493d8c;
        case 0x493d90u: goto label_493d90;
        case 0x493d94u: goto label_493d94;
        case 0x493d98u: goto label_493d98;
        case 0x493d9cu: goto label_493d9c;
        case 0x493da0u: goto label_493da0;
        case 0x493da4u: goto label_493da4;
        case 0x493da8u: goto label_493da8;
        case 0x493dacu: goto label_493dac;
        case 0x493db0u: goto label_493db0;
        case 0x493db4u: goto label_493db4;
        case 0x493db8u: goto label_493db8;
        case 0x493dbcu: goto label_493dbc;
        case 0x493dc0u: goto label_493dc0;
        case 0x493dc4u: goto label_493dc4;
        case 0x493dc8u: goto label_493dc8;
        case 0x493dccu: goto label_493dcc;
        case 0x493dd0u: goto label_493dd0;
        case 0x493dd4u: goto label_493dd4;
        case 0x493dd8u: goto label_493dd8;
        case 0x493ddcu: goto label_493ddc;
        case 0x493de0u: goto label_493de0;
        case 0x493de4u: goto label_493de4;
        case 0x493de8u: goto label_493de8;
        case 0x493decu: goto label_493dec;
        case 0x493df0u: goto label_493df0;
        case 0x493df4u: goto label_493df4;
        case 0x493df8u: goto label_493df8;
        case 0x493dfcu: goto label_493dfc;
        case 0x493e00u: goto label_493e00;
        case 0x493e04u: goto label_493e04;
        case 0x493e08u: goto label_493e08;
        case 0x493e0cu: goto label_493e0c;
        case 0x493e10u: goto label_493e10;
        case 0x493e14u: goto label_493e14;
        case 0x493e18u: goto label_493e18;
        case 0x493e1cu: goto label_493e1c;
        case 0x493e20u: goto label_493e20;
        case 0x493e24u: goto label_493e24;
        case 0x493e28u: goto label_493e28;
        case 0x493e2cu: goto label_493e2c;
        case 0x493e30u: goto label_493e30;
        case 0x493e34u: goto label_493e34;
        case 0x493e38u: goto label_493e38;
        case 0x493e3cu: goto label_493e3c;
        case 0x493e40u: goto label_493e40;
        case 0x493e44u: goto label_493e44;
        case 0x493e48u: goto label_493e48;
        case 0x493e4cu: goto label_493e4c;
        case 0x493e50u: goto label_493e50;
        case 0x493e54u: goto label_493e54;
        case 0x493e58u: goto label_493e58;
        case 0x493e5cu: goto label_493e5c;
        case 0x493e60u: goto label_493e60;
        case 0x493e64u: goto label_493e64;
        case 0x493e68u: goto label_493e68;
        case 0x493e6cu: goto label_493e6c;
        case 0x493e70u: goto label_493e70;
        case 0x493e74u: goto label_493e74;
        case 0x493e78u: goto label_493e78;
        case 0x493e7cu: goto label_493e7c;
        case 0x493e80u: goto label_493e80;
        case 0x493e84u: goto label_493e84;
        case 0x493e88u: goto label_493e88;
        case 0x493e8cu: goto label_493e8c;
        case 0x493e90u: goto label_493e90;
        case 0x493e94u: goto label_493e94;
        case 0x493e98u: goto label_493e98;
        case 0x493e9cu: goto label_493e9c;
        case 0x493ea0u: goto label_493ea0;
        case 0x493ea4u: goto label_493ea4;
        case 0x493ea8u: goto label_493ea8;
        case 0x493eacu: goto label_493eac;
        case 0x493eb0u: goto label_493eb0;
        case 0x493eb4u: goto label_493eb4;
        case 0x493eb8u: goto label_493eb8;
        case 0x493ebcu: goto label_493ebc;
        case 0x493ec0u: goto label_493ec0;
        case 0x493ec4u: goto label_493ec4;
        case 0x493ec8u: goto label_493ec8;
        case 0x493eccu: goto label_493ecc;
        case 0x493ed0u: goto label_493ed0;
        case 0x493ed4u: goto label_493ed4;
        case 0x493ed8u: goto label_493ed8;
        case 0x493edcu: goto label_493edc;
        case 0x493ee0u: goto label_493ee0;
        case 0x493ee4u: goto label_493ee4;
        case 0x493ee8u: goto label_493ee8;
        case 0x493eecu: goto label_493eec;
        case 0x493ef0u: goto label_493ef0;
        case 0x493ef4u: goto label_493ef4;
        case 0x493ef8u: goto label_493ef8;
        case 0x493efcu: goto label_493efc;
        case 0x493f00u: goto label_493f00;
        case 0x493f04u: goto label_493f04;
        case 0x493f08u: goto label_493f08;
        case 0x493f0cu: goto label_493f0c;
        case 0x493f10u: goto label_493f10;
        case 0x493f14u: goto label_493f14;
        case 0x493f18u: goto label_493f18;
        case 0x493f1cu: goto label_493f1c;
        case 0x493f20u: goto label_493f20;
        case 0x493f24u: goto label_493f24;
        case 0x493f28u: goto label_493f28;
        case 0x493f2cu: goto label_493f2c;
        case 0x493f30u: goto label_493f30;
        case 0x493f34u: goto label_493f34;
        case 0x493f38u: goto label_493f38;
        case 0x493f3cu: goto label_493f3c;
        case 0x493f40u: goto label_493f40;
        case 0x493f44u: goto label_493f44;
        case 0x493f48u: goto label_493f48;
        case 0x493f4cu: goto label_493f4c;
        case 0x493f50u: goto label_493f50;
        case 0x493f54u: goto label_493f54;
        case 0x493f58u: goto label_493f58;
        case 0x493f5cu: goto label_493f5c;
        case 0x493f60u: goto label_493f60;
        case 0x493f64u: goto label_493f64;
        case 0x493f68u: goto label_493f68;
        case 0x493f6cu: goto label_493f6c;
        case 0x493f70u: goto label_493f70;
        case 0x493f74u: goto label_493f74;
        case 0x493f78u: goto label_493f78;
        case 0x493f7cu: goto label_493f7c;
        case 0x493f80u: goto label_493f80;
        case 0x493f84u: goto label_493f84;
        case 0x493f88u: goto label_493f88;
        case 0x493f8cu: goto label_493f8c;
        case 0x493f90u: goto label_493f90;
        case 0x493f94u: goto label_493f94;
        case 0x493f98u: goto label_493f98;
        case 0x493f9cu: goto label_493f9c;
        case 0x493fa0u: goto label_493fa0;
        case 0x493fa4u: goto label_493fa4;
        case 0x493fa8u: goto label_493fa8;
        case 0x493facu: goto label_493fac;
        case 0x493fb0u: goto label_493fb0;
        case 0x493fb4u: goto label_493fb4;
        case 0x493fb8u: goto label_493fb8;
        case 0x493fbcu: goto label_493fbc;
        case 0x493fc0u: goto label_493fc0;
        case 0x493fc4u: goto label_493fc4;
        case 0x493fc8u: goto label_493fc8;
        case 0x493fccu: goto label_493fcc;
        case 0x493fd0u: goto label_493fd0;
        case 0x493fd4u: goto label_493fd4;
        case 0x493fd8u: goto label_493fd8;
        case 0x493fdcu: goto label_493fdc;
        case 0x493fe0u: goto label_493fe0;
        case 0x493fe4u: goto label_493fe4;
        case 0x493fe8u: goto label_493fe8;
        case 0x493fecu: goto label_493fec;
        case 0x493ff0u: goto label_493ff0;
        case 0x493ff4u: goto label_493ff4;
        case 0x493ff8u: goto label_493ff8;
        case 0x493ffcu: goto label_493ffc;
        case 0x494000u: goto label_494000;
        case 0x494004u: goto label_494004;
        case 0x494008u: goto label_494008;
        case 0x49400cu: goto label_49400c;
        case 0x494010u: goto label_494010;
        case 0x494014u: goto label_494014;
        case 0x494018u: goto label_494018;
        case 0x49401cu: goto label_49401c;
        case 0x494020u: goto label_494020;
        case 0x494024u: goto label_494024;
        case 0x494028u: goto label_494028;
        case 0x49402cu: goto label_49402c;
        case 0x494030u: goto label_494030;
        case 0x494034u: goto label_494034;
        case 0x494038u: goto label_494038;
        case 0x49403cu: goto label_49403c;
        case 0x494040u: goto label_494040;
        case 0x494044u: goto label_494044;
        case 0x494048u: goto label_494048;
        case 0x49404cu: goto label_49404c;
        case 0x494050u: goto label_494050;
        case 0x494054u: goto label_494054;
        case 0x494058u: goto label_494058;
        case 0x49405cu: goto label_49405c;
        case 0x494060u: goto label_494060;
        case 0x494064u: goto label_494064;
        case 0x494068u: goto label_494068;
        case 0x49406cu: goto label_49406c;
        case 0x494070u: goto label_494070;
        case 0x494074u: goto label_494074;
        case 0x494078u: goto label_494078;
        case 0x49407cu: goto label_49407c;
        case 0x494080u: goto label_494080;
        case 0x494084u: goto label_494084;
        case 0x494088u: goto label_494088;
        case 0x49408cu: goto label_49408c;
        case 0x494090u: goto label_494090;
        case 0x494094u: goto label_494094;
        case 0x494098u: goto label_494098;
        case 0x49409cu: goto label_49409c;
        case 0x4940a0u: goto label_4940a0;
        case 0x4940a4u: goto label_4940a4;
        case 0x4940a8u: goto label_4940a8;
        case 0x4940acu: goto label_4940ac;
        case 0x4940b0u: goto label_4940b0;
        case 0x4940b4u: goto label_4940b4;
        case 0x4940b8u: goto label_4940b8;
        case 0x4940bcu: goto label_4940bc;
        case 0x4940c0u: goto label_4940c0;
        case 0x4940c4u: goto label_4940c4;
        case 0x4940c8u: goto label_4940c8;
        case 0x4940ccu: goto label_4940cc;
        case 0x4940d0u: goto label_4940d0;
        case 0x4940d4u: goto label_4940d4;
        case 0x4940d8u: goto label_4940d8;
        case 0x4940dcu: goto label_4940dc;
        case 0x4940e0u: goto label_4940e0;
        case 0x4940e4u: goto label_4940e4;
        case 0x4940e8u: goto label_4940e8;
        case 0x4940ecu: goto label_4940ec;
        case 0x4940f0u: goto label_4940f0;
        case 0x4940f4u: goto label_4940f4;
        case 0x4940f8u: goto label_4940f8;
        case 0x4940fcu: goto label_4940fc;
        case 0x494100u: goto label_494100;
        case 0x494104u: goto label_494104;
        case 0x494108u: goto label_494108;
        case 0x49410cu: goto label_49410c;
        case 0x494110u: goto label_494110;
        case 0x494114u: goto label_494114;
        case 0x494118u: goto label_494118;
        case 0x49411cu: goto label_49411c;
        case 0x494120u: goto label_494120;
        case 0x494124u: goto label_494124;
        case 0x494128u: goto label_494128;
        case 0x49412cu: goto label_49412c;
        case 0x494130u: goto label_494130;
        case 0x494134u: goto label_494134;
        case 0x494138u: goto label_494138;
        case 0x49413cu: goto label_49413c;
        case 0x494140u: goto label_494140;
        case 0x494144u: goto label_494144;
        case 0x494148u: goto label_494148;
        case 0x49414cu: goto label_49414c;
        case 0x494150u: goto label_494150;
        case 0x494154u: goto label_494154;
        case 0x494158u: goto label_494158;
        case 0x49415cu: goto label_49415c;
        case 0x494160u: goto label_494160;
        case 0x494164u: goto label_494164;
        case 0x494168u: goto label_494168;
        case 0x49416cu: goto label_49416c;
        case 0x494170u: goto label_494170;
        case 0x494174u: goto label_494174;
        case 0x494178u: goto label_494178;
        case 0x49417cu: goto label_49417c;
        case 0x494180u: goto label_494180;
        case 0x494184u: goto label_494184;
        case 0x494188u: goto label_494188;
        case 0x49418cu: goto label_49418c;
        case 0x494190u: goto label_494190;
        case 0x494194u: goto label_494194;
        case 0x494198u: goto label_494198;
        case 0x49419cu: goto label_49419c;
        case 0x4941a0u: goto label_4941a0;
        case 0x4941a4u: goto label_4941a4;
        case 0x4941a8u: goto label_4941a8;
        case 0x4941acu: goto label_4941ac;
        case 0x4941b0u: goto label_4941b0;
        case 0x4941b4u: goto label_4941b4;
        case 0x4941b8u: goto label_4941b8;
        case 0x4941bcu: goto label_4941bc;
        case 0x4941c0u: goto label_4941c0;
        case 0x4941c4u: goto label_4941c4;
        case 0x4941c8u: goto label_4941c8;
        case 0x4941ccu: goto label_4941cc;
        case 0x4941d0u: goto label_4941d0;
        case 0x4941d4u: goto label_4941d4;
        case 0x4941d8u: goto label_4941d8;
        case 0x4941dcu: goto label_4941dc;
        case 0x4941e0u: goto label_4941e0;
        case 0x4941e4u: goto label_4941e4;
        case 0x4941e8u: goto label_4941e8;
        case 0x4941ecu: goto label_4941ec;
        case 0x4941f0u: goto label_4941f0;
        case 0x4941f4u: goto label_4941f4;
        case 0x4941f8u: goto label_4941f8;
        case 0x4941fcu: goto label_4941fc;
        case 0x494200u: goto label_494200;
        case 0x494204u: goto label_494204;
        case 0x494208u: goto label_494208;
        case 0x49420cu: goto label_49420c;
        case 0x494210u: goto label_494210;
        case 0x494214u: goto label_494214;
        case 0x494218u: goto label_494218;
        case 0x49421cu: goto label_49421c;
        case 0x494220u: goto label_494220;
        case 0x494224u: goto label_494224;
        case 0x494228u: goto label_494228;
        case 0x49422cu: goto label_49422c;
        case 0x494230u: goto label_494230;
        case 0x494234u: goto label_494234;
        case 0x494238u: goto label_494238;
        case 0x49423cu: goto label_49423c;
        case 0x494240u: goto label_494240;
        case 0x494244u: goto label_494244;
        case 0x494248u: goto label_494248;
        case 0x49424cu: goto label_49424c;
        case 0x494250u: goto label_494250;
        case 0x494254u: goto label_494254;
        case 0x494258u: goto label_494258;
        case 0x49425cu: goto label_49425c;
        case 0x494260u: goto label_494260;
        case 0x494264u: goto label_494264;
        case 0x494268u: goto label_494268;
        case 0x49426cu: goto label_49426c;
        case 0x494270u: goto label_494270;
        case 0x494274u: goto label_494274;
        case 0x494278u: goto label_494278;
        case 0x49427cu: goto label_49427c;
        case 0x494280u: goto label_494280;
        case 0x494284u: goto label_494284;
        case 0x494288u: goto label_494288;
        case 0x49428cu: goto label_49428c;
        case 0x494290u: goto label_494290;
        case 0x494294u: goto label_494294;
        case 0x494298u: goto label_494298;
        case 0x49429cu: goto label_49429c;
        case 0x4942a0u: goto label_4942a0;
        case 0x4942a4u: goto label_4942a4;
        case 0x4942a8u: goto label_4942a8;
        case 0x4942acu: goto label_4942ac;
        case 0x4942b0u: goto label_4942b0;
        case 0x4942b4u: goto label_4942b4;
        case 0x4942b8u: goto label_4942b8;
        case 0x4942bcu: goto label_4942bc;
        case 0x4942c0u: goto label_4942c0;
        case 0x4942c4u: goto label_4942c4;
        case 0x4942c8u: goto label_4942c8;
        case 0x4942ccu: goto label_4942cc;
        case 0x4942d0u: goto label_4942d0;
        case 0x4942d4u: goto label_4942d4;
        case 0x4942d8u: goto label_4942d8;
        case 0x4942dcu: goto label_4942dc;
        case 0x4942e0u: goto label_4942e0;
        case 0x4942e4u: goto label_4942e4;
        case 0x4942e8u: goto label_4942e8;
        case 0x4942ecu: goto label_4942ec;
        case 0x4942f0u: goto label_4942f0;
        case 0x4942f4u: goto label_4942f4;
        case 0x4942f8u: goto label_4942f8;
        case 0x4942fcu: goto label_4942fc;
        default: break;
    }

    ctx->pc = 0x4916d0u;

label_4916d0:
    // 0x4916d0: 0x27bdfbb0  addiu       $sp, $sp, -0x450
    ctx->pc = 0x4916d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966192));
label_4916d4:
    // 0x4916d4: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x4916d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_4916d8:
    // 0x4916d8: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x4916d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_4916dc:
    // 0x4916dc: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x4916dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_4916e0:
    // 0x4916e0: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x4916e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_4916e4:
    // 0x4916e4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x4916e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4916e8:
    // 0x4916e8: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x4916e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_4916ec:
    // 0x4916ec: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x4916ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_4916f0:
    // 0x4916f0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4916f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_4916f4:
    // 0x4916f4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4916f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4916f8:
    // 0x4916f8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4916f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_4916fc:
    // 0x4916fc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4916fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_491700:
    // 0x491700: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x491700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_491704:
    // 0x491704: 0x1320c0  sll         $a0, $s3, 3
    ctx->pc = 0x491704u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_491708:
    // 0x491708: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x491708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_49170c:
    // 0x49170c: 0xe7bf002c  swc1        $f31, 0x2C($sp)
    ctx->pc = 0x49170cu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_491710:
    // 0x491710: 0xafa7011c  sw          $a3, 0x11C($sp)
    ctx->pc = 0x491710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 7));
label_491714:
    // 0x491714: 0xe7be0028  swc1        $f30, 0x28($sp)
    ctx->pc = 0x491714u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_491718:
    // 0x491718: 0xe7bd0024  swc1        $f29, 0x24($sp)
    ctx->pc = 0x491718u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_49171c:
    // 0x49171c: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x49171cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_491720:
    // 0x491720: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x491720u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_491724:
    // 0x491724: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x491724u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_491728:
    // 0x491728: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x491728u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_49172c:
    // 0x49172c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x49172cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_491730:
    // 0x491730: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x491730u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_491734:
    // 0x491734: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x491734u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_491738:
    // 0x491738: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x491738u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_49173c:
    // 0x49173c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x49173cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_491740:
    // 0x491740: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x491740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_491744:
    // 0x491744: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x491744u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_491748:
    // 0x491748: 0x12000ad4  beqz        $s0, . + 4 + (0xAD4 << 2)
label_49174c:
    if (ctx->pc == 0x49174Cu) {
        ctx->pc = 0x49174Cu;
            // 0x49174c: 0x649021  addu        $s2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->pc = 0x491750u;
        goto label_491750;
    }
    ctx->pc = 0x491748u;
    {
        const bool branch_taken_0x491748 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49174Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491748u;
            // 0x49174c: 0x649021  addu        $s2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491748) {
            ctx->pc = 0x49429Cu;
            goto label_49429c;
        }
    }
    ctx->pc = 0x491750u;
label_491750:
    // 0x491750: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x491750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_491754:
    // 0x491754: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_491758:
    if (ctx->pc == 0x491758u) {
        ctx->pc = 0x491758u;
            // 0x491758: 0x2450ffff  addiu       $s0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x49175Cu;
        goto label_49175c;
    }
    ctx->pc = 0x491754u;
    {
        const bool branch_taken_0x491754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x491754) {
            ctx->pc = 0x491758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x491754u;
            // 0x491758: 0x2450ffff  addiu       $s0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49175Cu;
            goto label_49175c;
        }
    }
    ctx->pc = 0x49175Cu;
label_49175c:
    // 0x49175c: 0x51000003  beql        $t0, $zero, . + 4 + (0x3 << 2)
label_491760:
    if (ctx->pc == 0x491760u) {
        ctx->pc = 0x491760u;
            // 0x491760: 0x26840048  addiu       $a0, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->pc = 0x491764u;
        goto label_491764;
    }
    ctx->pc = 0x49175Cu;
    {
        const bool branch_taken_0x49175c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x49175c) {
            ctx->pc = 0x491760u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49175Cu;
            // 0x491760: 0x26840048  addiu       $a0, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49176Cu;
            goto label_49176c;
        }
    }
    ctx->pc = 0x491764u;
label_491764:
    // 0x491764: 0xae880054  sw          $t0, 0x54($s4)
    ctx->pc = 0x491764u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 8));
label_491768:
    // 0x491768: 0x26840048  addiu       $a0, $s4, 0x48
    ctx->pc = 0x491768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_49176c:
    // 0x49176c: 0xc125690  jal         func_495A40
label_491770:
    if (ctx->pc == 0x491770u) {
        ctx->pc = 0x491774u;
        goto label_491774;
    }
    ctx->pc = 0x49176Cu;
    SET_GPR_U32(ctx, 31, 0x491774u);
    ctx->pc = 0x495A40u;
    if (runtime->hasFunction(0x495A40u)) {
        auto targetFn = runtime->lookupFunction(0x495A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491774u; }
        if (ctx->pc != 0x491774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00495A40_0x495a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491774u; }
        if (ctx->pc != 0x491774u) { return; }
    }
    ctx->pc = 0x491774u;
label_491774:
    // 0x491774: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x491774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_491778:
    // 0x491778: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x491778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_49177c:
    // 0x49177c: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x49177cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_491780:
    // 0x491780: 0x24030099  addiu       $v1, $zero, 0x99
    ctx->pc = 0x491780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
label_491784:
    // 0x491784: 0x10430ab2  beq         $v0, $v1, . + 4 + (0xAB2 << 2)
label_491788:
    if (ctx->pc == 0x491788u) {
        ctx->pc = 0x49178Cu;
        goto label_49178c;
    }
    ctx->pc = 0x491784u;
    {
        const bool branch_taken_0x491784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x491784) {
            ctx->pc = 0x494250u;
            goto label_494250;
        }
    }
    ctx->pc = 0x49178Cu;
label_49178c:
    // 0x49178c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x49178cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_491790:
    // 0x491790: 0x10430aab  beq         $v0, $v1, . + 4 + (0xAAB << 2)
label_491794:
    if (ctx->pc == 0x491794u) {
        ctx->pc = 0x491798u;
        goto label_491798;
    }
    ctx->pc = 0x491790u;
    {
        const bool branch_taken_0x491790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x491790) {
            ctx->pc = 0x494240u;
            goto label_494240;
        }
    }
    ctx->pc = 0x491798u;
label_491798:
    // 0x491798: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x491798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_49179c:
    // 0x49179c: 0x10430aa4  beq         $v0, $v1, . + 4 + (0xAA4 << 2)
label_4917a0:
    if (ctx->pc == 0x4917A0u) {
        ctx->pc = 0x4917A4u;
        goto label_4917a4;
    }
    ctx->pc = 0x49179Cu;
    {
        const bool branch_taken_0x49179c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x49179c) {
            ctx->pc = 0x494230u;
            goto label_494230;
        }
    }
    ctx->pc = 0x4917A4u;
label_4917a4:
    // 0x4917a4: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x4917a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_4917a8:
    // 0x4917a8: 0x104309fd  beq         $v0, $v1, . + 4 + (0x9FD << 2)
label_4917ac:
    if (ctx->pc == 0x4917ACu) {
        ctx->pc = 0x4917B0u;
        goto label_4917b0;
    }
    ctx->pc = 0x4917A8u;
    {
        const bool branch_taken_0x4917a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4917a8) {
            ctx->pc = 0x493FA0u;
            goto label_493fa0;
        }
    }
    ctx->pc = 0x4917B0u;
label_4917b0:
    // 0x4917b0: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x4917b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_4917b4:
    // 0x4917b4: 0x10430928  beq         $v0, $v1, . + 4 + (0x928 << 2)
label_4917b8:
    if (ctx->pc == 0x4917B8u) {
        ctx->pc = 0x4917BCu;
        goto label_4917bc;
    }
    ctx->pc = 0x4917B4u;
    {
        const bool branch_taken_0x4917b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4917b4) {
            ctx->pc = 0x493C58u;
            goto label_493c58;
        }
    }
    ctx->pc = 0x4917BCu;
label_4917bc:
    // 0x4917bc: 0x2403009f  addiu       $v1, $zero, 0x9F
    ctx->pc = 0x4917bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
label_4917c0:
    // 0x4917c0: 0x104308cb  beq         $v0, $v1, . + 4 + (0x8CB << 2)
label_4917c4:
    if (ctx->pc == 0x4917C4u) {
        ctx->pc = 0x4917C8u;
        goto label_4917c8;
    }
    ctx->pc = 0x4917C0u;
    {
        const bool branch_taken_0x4917c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4917c0) {
            ctx->pc = 0x493AF0u;
            goto label_493af0;
        }
    }
    ctx->pc = 0x4917C8u;
label_4917c8:
    // 0x4917c8: 0x24030081  addiu       $v1, $zero, 0x81
    ctx->pc = 0x4917c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_4917cc:
    // 0x4917cc: 0x104308c0  beq         $v0, $v1, . + 4 + (0x8C0 << 2)
label_4917d0:
    if (ctx->pc == 0x4917D0u) {
        ctx->pc = 0x4917D4u;
        goto label_4917d4;
    }
    ctx->pc = 0x4917CCu;
    {
        const bool branch_taken_0x4917cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4917cc) {
            ctx->pc = 0x493AD0u;
            goto label_493ad0;
        }
    }
    ctx->pc = 0x4917D4u;
label_4917d4:
    // 0x4917d4: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x4917d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_4917d8:
    // 0x4917d8: 0x104308ab  beq         $v0, $v1, . + 4 + (0x8AB << 2)
label_4917dc:
    if (ctx->pc == 0x4917DCu) {
        ctx->pc = 0x4917E0u;
        goto label_4917e0;
    }
    ctx->pc = 0x4917D8u;
    {
        const bool branch_taken_0x4917d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4917d8) {
            ctx->pc = 0x493A88u;
            goto label_493a88;
        }
    }
    ctx->pc = 0x4917E0u;
label_4917e0:
    // 0x4917e0: 0x2403003a  addiu       $v1, $zero, 0x3A
    ctx->pc = 0x4917e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_4917e4:
    // 0x4917e4: 0x10430aa2  beq         $v0, $v1, . + 4 + (0xAA2 << 2)
label_4917e8:
    if (ctx->pc == 0x4917E8u) {
        ctx->pc = 0x4917ECu;
        goto label_4917ec;
    }
    ctx->pc = 0x4917E4u;
    {
        const bool branch_taken_0x4917e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4917e4) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x4917ECu;
label_4917ec:
    // 0x4917ec: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x4917ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_4917f0:
    // 0x4917f0: 0x10430815  beq         $v0, $v1, . + 4 + (0x815 << 2)
label_4917f4:
    if (ctx->pc == 0x4917F4u) {
        ctx->pc = 0x4917F8u;
        goto label_4917f8;
    }
    ctx->pc = 0x4917F0u;
    {
        const bool branch_taken_0x4917f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4917f0) {
            ctx->pc = 0x493848u;
            goto label_493848;
        }
    }
    ctx->pc = 0x4917F8u;
label_4917f8:
    // 0x4917f8: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x4917f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_4917fc:
    // 0x4917fc: 0x1043080e  beq         $v0, $v1, . + 4 + (0x80E << 2)
label_491800:
    if (ctx->pc == 0x491800u) {
        ctx->pc = 0x491804u;
        goto label_491804;
    }
    ctx->pc = 0x4917FCu;
    {
        const bool branch_taken_0x4917fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4917fc) {
            ctx->pc = 0x493838u;
            goto label_493838;
        }
    }
    ctx->pc = 0x491804u;
label_491804:
    // 0x491804: 0x2403008e  addiu       $v1, $zero, 0x8E
    ctx->pc = 0x491804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
label_491808:
    // 0x491808: 0x1043077d  beq         $v0, $v1, . + 4 + (0x77D << 2)
label_49180c:
    if (ctx->pc == 0x49180Cu) {
        ctx->pc = 0x491810u;
        goto label_491810;
    }
    ctx->pc = 0x491808u;
    {
        const bool branch_taken_0x491808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x491808) {
            ctx->pc = 0x493600u;
            goto label_493600;
        }
    }
    ctx->pc = 0x491810u;
label_491810:
    // 0x491810: 0x2403009b  addiu       $v1, $zero, 0x9B
    ctx->pc = 0x491810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
label_491814:
    // 0x491814: 0x104306ec  beq         $v0, $v1, . + 4 + (0x6EC << 2)
label_491818:
    if (ctx->pc == 0x491818u) {
        ctx->pc = 0x49181Cu;
        goto label_49181c;
    }
    ctx->pc = 0x491814u;
    {
        const bool branch_taken_0x491814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x491814) {
            ctx->pc = 0x4933C8u;
            goto label_4933c8;
        }
    }
    ctx->pc = 0x49181Cu;
label_49181c:
    // 0x49181c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x49181cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_491820:
    // 0x491820: 0x10430657  beq         $v0, $v1, . + 4 + (0x657 << 2)
label_491824:
    if (ctx->pc == 0x491824u) {
        ctx->pc = 0x491828u;
        goto label_491828;
    }
    ctx->pc = 0x491820u;
    {
        const bool branch_taken_0x491820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x491820) {
            ctx->pc = 0x493180u;
            goto label_493180;
        }
    }
    ctx->pc = 0x491828u;
label_491828:
    // 0x491828: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x491828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_49182c:
    // 0x49182c: 0x1043061a  beq         $v0, $v1, . + 4 + (0x61A << 2)
label_491830:
    if (ctx->pc == 0x491830u) {
        ctx->pc = 0x491834u;
        goto label_491834;
    }
    ctx->pc = 0x49182Cu;
    {
        const bool branch_taken_0x49182c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x49182c) {
            ctx->pc = 0x493098u;
            goto label_493098;
        }
    }
    ctx->pc = 0x491834u;
label_491834:
    // 0x491834: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x491834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_491838:
    // 0x491838: 0x104305c7  beq         $v0, $v1, . + 4 + (0x5C7 << 2)
label_49183c:
    if (ctx->pc == 0x49183Cu) {
        ctx->pc = 0x491840u;
        goto label_491840;
    }
    ctx->pc = 0x491838u;
    {
        const bool branch_taken_0x491838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x491838) {
            ctx->pc = 0x492F58u;
            goto label_492f58;
        }
    }
    ctx->pc = 0x491840u;
label_491840:
    // 0x491840: 0x24030088  addiu       $v1, $zero, 0x88
    ctx->pc = 0x491840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_491844:
    // 0x491844: 0x104305c0  beq         $v0, $v1, . + 4 + (0x5C0 << 2)
label_491848:
    if (ctx->pc == 0x491848u) {
        ctx->pc = 0x49184Cu;
        goto label_49184c;
    }
    ctx->pc = 0x491844u;
    {
        const bool branch_taken_0x491844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x491844) {
            ctx->pc = 0x492F48u;
            goto label_492f48;
        }
    }
    ctx->pc = 0x49184Cu;
label_49184c:
    // 0x49184c: 0x2403008c  addiu       $v1, $zero, 0x8C
    ctx->pc = 0x49184cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_491850:
    // 0x491850: 0x104305b3  beq         $v0, $v1, . + 4 + (0x5B3 << 2)
label_491854:
    if (ctx->pc == 0x491854u) {
        ctx->pc = 0x491858u;
        goto label_491858;
    }
    ctx->pc = 0x491850u;
    {
        const bool branch_taken_0x491850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x491850) {
            ctx->pc = 0x492F20u;
            goto label_492f20;
        }
    }
    ctx->pc = 0x491858u;
label_491858:
    // 0x491858: 0x2403009d  addiu       $v1, $zero, 0x9D
    ctx->pc = 0x491858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
label_49185c:
    // 0x49185c: 0x10430596  beq         $v0, $v1, . + 4 + (0x596 << 2)
label_491860:
    if (ctx->pc == 0x491860u) {
        ctx->pc = 0x491864u;
        goto label_491864;
    }
    ctx->pc = 0x49185Cu;
    {
        const bool branch_taken_0x49185c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x49185c) {
            ctx->pc = 0x492EB8u;
            goto label_492eb8;
        }
    }
    ctx->pc = 0x491864u;
label_491864:
    // 0x491864: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x491864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_491868:
    // 0x491868: 0x10430525  beq         $v0, $v1, . + 4 + (0x525 << 2)
label_49186c:
    if (ctx->pc == 0x49186Cu) {
        ctx->pc = 0x491870u;
        goto label_491870;
    }
    ctx->pc = 0x491868u;
    {
        const bool branch_taken_0x491868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x491868) {
            ctx->pc = 0x492D00u;
            goto label_492d00;
        }
    }
    ctx->pc = 0x491870u;
label_491870:
    // 0x491870: 0x24030067  addiu       $v1, $zero, 0x67
    ctx->pc = 0x491870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_491874:
    // 0x491874: 0x1043047e  beq         $v0, $v1, . + 4 + (0x47E << 2)
label_491878:
    if (ctx->pc == 0x491878u) {
        ctx->pc = 0x49187Cu;
        goto label_49187c;
    }
    ctx->pc = 0x491874u;
    {
        const bool branch_taken_0x491874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x491874) {
            ctx->pc = 0x492A70u;
            goto label_492a70;
        }
    }
    ctx->pc = 0x49187Cu;
label_49187c:
    // 0x49187c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x49187cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_491880:
    // 0x491880: 0x104303ed  beq         $v0, $v1, . + 4 + (0x3ED << 2)
label_491884:
    if (ctx->pc == 0x491884u) {
        ctx->pc = 0x491888u;
        goto label_491888;
    }
    ctx->pc = 0x491880u;
    {
        const bool branch_taken_0x491880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x491880) {
            ctx->pc = 0x492838u;
            goto label_492838;
        }
    }
    ctx->pc = 0x491888u;
label_491888:
    // 0x491888: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x491888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_49188c:
    // 0x49188c: 0x1043034c  beq         $v0, $v1, . + 4 + (0x34C << 2)
label_491890:
    if (ctx->pc == 0x491890u) {
        ctx->pc = 0x491894u;
        goto label_491894;
    }
    ctx->pc = 0x49188Cu;
    {
        const bool branch_taken_0x49188c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x49188c) {
            ctx->pc = 0x4925C0u;
            goto label_4925c0;
        }
    }
    ctx->pc = 0x491894u;
label_491894:
    // 0x491894: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x491894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_491898:
    // 0x491898: 0x104302ab  beq         $v0, $v1, . + 4 + (0x2AB << 2)
label_49189c:
    if (ctx->pc == 0x49189Cu) {
        ctx->pc = 0x4918A0u;
        goto label_4918a0;
    }
    ctx->pc = 0x491898u;
    {
        const bool branch_taken_0x491898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x491898) {
            ctx->pc = 0x492348u;
            goto label_492348;
        }
    }
    ctx->pc = 0x4918A0u;
label_4918a0:
    // 0x4918a0: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x4918a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
label_4918a4:
    // 0x4918a4: 0x1043027e  beq         $v0, $v1, . + 4 + (0x27E << 2)
label_4918a8:
    if (ctx->pc == 0x4918A8u) {
        ctx->pc = 0x4918ACu;
        goto label_4918ac;
    }
    ctx->pc = 0x4918A4u;
    {
        const bool branch_taken_0x4918a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4918a4) {
            ctx->pc = 0x4922A0u;
            goto label_4922a0;
        }
    }
    ctx->pc = 0x4918ACu;
label_4918ac:
    // 0x4918ac: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x4918acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_4918b0:
    // 0x4918b0: 0x10430251  beq         $v0, $v1, . + 4 + (0x251 << 2)
label_4918b4:
    if (ctx->pc == 0x4918B4u) {
        ctx->pc = 0x4918B8u;
        goto label_4918b8;
    }
    ctx->pc = 0x4918B0u;
    {
        const bool branch_taken_0x4918b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4918b0) {
            ctx->pc = 0x4921F8u;
            goto label_4921f8;
        }
    }
    ctx->pc = 0x4918B8u;
label_4918b8:
    // 0x4918b8: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x4918b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_4918bc:
    // 0x4918bc: 0x104300f4  beq         $v0, $v1, . + 4 + (0xF4 << 2)
label_4918c0:
    if (ctx->pc == 0x4918C0u) {
        ctx->pc = 0x4918C4u;
        goto label_4918c4;
    }
    ctx->pc = 0x4918BCu;
    {
        const bool branch_taken_0x4918bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4918bc) {
            ctx->pc = 0x491C90u;
            goto label_491c90;
        }
    }
    ctx->pc = 0x4918C4u;
label_4918c4:
    // 0x4918c4: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x4918c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_4918c8:
    // 0x4918c8: 0x104300f1  beq         $v0, $v1, . + 4 + (0xF1 << 2)
label_4918cc:
    if (ctx->pc == 0x4918CCu) {
        ctx->pc = 0x4918D0u;
        goto label_4918d0;
    }
    ctx->pc = 0x4918C8u;
    {
        const bool branch_taken_0x4918c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4918c8) {
            ctx->pc = 0x491C90u;
            goto label_491c90;
        }
    }
    ctx->pc = 0x4918D0u;
label_4918d0:
    // 0x4918d0: 0x24030087  addiu       $v1, $zero, 0x87
    ctx->pc = 0x4918d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
label_4918d4:
    // 0x4918d4: 0x104300de  beq         $v0, $v1, . + 4 + (0xDE << 2)
label_4918d8:
    if (ctx->pc == 0x4918D8u) {
        ctx->pc = 0x4918DCu;
        goto label_4918dc;
    }
    ctx->pc = 0x4918D4u;
    {
        const bool branch_taken_0x4918d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4918d4) {
            ctx->pc = 0x491C50u;
            goto label_491c50;
        }
    }
    ctx->pc = 0x4918DCu;
label_4918dc:
    // 0x4918dc: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x4918dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4918e0:
    // 0x4918e0: 0x1043005b  beq         $v0, $v1, . + 4 + (0x5B << 2)
label_4918e4:
    if (ctx->pc == 0x4918E4u) {
        ctx->pc = 0x4918E8u;
        goto label_4918e8;
    }
    ctx->pc = 0x4918E0u;
    {
        const bool branch_taken_0x4918e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4918e0) {
            ctx->pc = 0x491A50u;
            goto label_491a50;
        }
    }
    ctx->pc = 0x4918E8u;
label_4918e8:
    // 0x4918e8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x4918e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_4918ec:
    // 0x4918ec: 0x1043001e  beq         $v0, $v1, . + 4 + (0x1E << 2)
label_4918f0:
    if (ctx->pc == 0x4918F0u) {
        ctx->pc = 0x4918F4u;
        goto label_4918f4;
    }
    ctx->pc = 0x4918ECu;
    {
        const bool branch_taken_0x4918ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4918ec) {
            ctx->pc = 0x491968u;
            goto label_491968;
        }
    }
    ctx->pc = 0x4918F4u;
label_4918f4:
    // 0x4918f4: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x4918f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_4918f8:
    // 0x4918f8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_4918fc:
    if (ctx->pc == 0x4918FCu) {
        ctx->pc = 0x491900u;
        goto label_491900;
    }
    ctx->pc = 0x4918F8u;
    {
        const bool branch_taken_0x4918f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4918f8) {
            ctx->pc = 0x491908u;
            goto label_491908;
        }
    }
    ctx->pc = 0x491900u;
label_491900:
    // 0x491900: 0x10000a5b  b           . + 4 + (0xA5B << 2)
label_491904:
    if (ctx->pc == 0x491904u) {
        ctx->pc = 0x491908u;
        goto label_491908;
    }
    ctx->pc = 0x491900u;
    {
        const bool branch_taken_0x491900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x491900) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x491908u;
label_491908:
    // 0x491908: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x491908u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_49190c:
    // 0x49190c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x49190cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_491910:
    // 0x491910: 0x18400a57  blez        $v0, . + 4 + (0xA57 << 2)
label_491914:
    if (ctx->pc == 0x491914u) {
        ctx->pc = 0x491914u;
            // 0x491914: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x491918u;
        goto label_491918;
    }
    ctx->pc = 0x491910u;
    {
        const bool branch_taken_0x491910 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x491914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491910u;
            // 0x491914: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491910) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x491918u;
label_491918:
    // 0x491918: 0x8e84004c  lw          $a0, 0x4C($s4)
    ctx->pc = 0x491918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_49191c:
    // 0x49191c: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x49191cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_491920:
    // 0x491920: 0x8e850050  lw          $a1, 0x50($s4)
    ctx->pc = 0x491920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_491924:
    // 0x491924: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x491924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_491928:
    // 0x491928: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x491928u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_49192c:
    // 0x49192c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x49192cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_491930:
    // 0x491930: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x491930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_491934:
    // 0x491934: 0x26840048  addiu       $a0, $s4, 0x48
    ctx->pc = 0x491934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_491938:
    // 0x491938: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x491938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49193c:
    // 0x49193c: 0xc125914  jal         func_496450
label_491940:
    if (ctx->pc == 0x491940u) {
        ctx->pc = 0x491940u;
            // 0x491940: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x491944u;
        goto label_491944;
    }
    ctx->pc = 0x49193Cu;
    SET_GPR_U32(ctx, 31, 0x491944u);
    ctx->pc = 0x491940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49193Cu;
            // 0x491940: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496450u;
    if (runtime->hasFunction(0x496450u)) {
        auto targetFn = runtime->lookupFunction(0x496450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491944u; }
        if (ctx->pc != 0x491944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496450_0x496450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491944u; }
        if (ctx->pc != 0x491944u) { return; }
    }
    ctx->pc = 0x491944u;
label_491944:
    // 0x491944: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x491944u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_491948:
    // 0x491948: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x491948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_49194c:
    // 0x49194c: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x49194cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_491950:
    // 0x491950: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x491950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_491954:
    // 0x491954: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_491958:
    if (ctx->pc == 0x491958u) {
        ctx->pc = 0x49195Cu;
        goto label_49195c;
    }
    ctx->pc = 0x491954u;
    {
        const bool branch_taken_0x491954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x491954) {
            ctx->pc = 0x491918u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_491918;
        }
    }
    ctx->pc = 0x49195Cu;
label_49195c:
    // 0x49195c: 0x10000a44  b           . + 4 + (0xA44 << 2)
label_491960:
    if (ctx->pc == 0x491960u) {
        ctx->pc = 0x491964u;
        goto label_491964;
    }
    ctx->pc = 0x49195Cu;
    {
        const bool branch_taken_0x49195c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49195c) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x491964u;
label_491964:
    // 0x491964: 0x0  nop
    ctx->pc = 0x491964u;
    // NOP
label_491968:
    // 0x491968: 0x27a402ec  addiu       $a0, $sp, 0x2EC
    ctx->pc = 0x491968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 748));
label_49196c:
    // 0x49196c: 0xc125124  jal         func_494490
label_491970:
    if (ctx->pc == 0x491970u) {
        ctx->pc = 0x491970u;
            // 0x491970: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->pc = 0x491974u;
        goto label_491974;
    }
    ctx->pc = 0x49196Cu;
    SET_GPR_U32(ctx, 31, 0x491974u);
    ctx->pc = 0x491970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49196Cu;
            // 0x491970: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491974u; }
        if (ctx->pc != 0x491974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491974u; }
        if (ctx->pc != 0x491974u) { return; }
    }
    ctx->pc = 0x491974u;
label_491974:
    // 0x491974: 0x8fa502ec  lw          $a1, 0x2EC($sp)
    ctx->pc = 0x491974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 748)));
label_491978:
    // 0x491978: 0xc125120  jal         func_494480
label_49197c:
    if (ctx->pc == 0x49197Cu) {
        ctx->pc = 0x49197Cu;
            // 0x49197c: 0x27a40440  addiu       $a0, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->pc = 0x491980u;
        goto label_491980;
    }
    ctx->pc = 0x491978u;
    SET_GPR_U32(ctx, 31, 0x491980u);
    ctx->pc = 0x49197Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x491978u;
            // 0x49197c: 0x27a40440  addiu       $a0, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491980u; }
        if (ctx->pc != 0x491980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491980u; }
        if (ctx->pc != 0x491980u) { return; }
    }
    ctx->pc = 0x491980u;
label_491980:
    // 0x491980: 0x8fa30440  lw          $v1, 0x440($sp)
    ctx->pc = 0x491980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1088)));
label_491984:
    // 0x491984: 0x27a402e8  addiu       $a0, $sp, 0x2E8
    ctx->pc = 0x491984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 744));
label_491988:
    // 0x491988: 0x26850048  addiu       $a1, $s4, 0x48
    ctx->pc = 0x491988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_49198c:
    // 0x49198c: 0x9062fff0  lbu         $v0, -0x10($v1)
    ctx->pc = 0x49198cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_491990:
    // 0x491990: 0xa3a201f0  sb          $v0, 0x1F0($sp)
    ctx->pc = 0x491990u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 496), (uint8_t)GPR_U32(ctx, 2));
label_491994:
    // 0x491994: 0xdc62fff8  ld          $v0, -0x8($v1)
    ctx->pc = 0x491994u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_491998:
    // 0x491998: 0xffa201f8  sd          $v0, 0x1F8($sp)
    ctx->pc = 0x491998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 2));
label_49199c:
    // 0x49199c: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x49199cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_4919a0:
    // 0x4919a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4919a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4919a4:
    // 0x4919a4: 0xc125124  jal         func_494490
label_4919a8:
    if (ctx->pc == 0x4919A8u) {
        ctx->pc = 0x4919A8u;
            // 0x4919a8: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x4919ACu;
        goto label_4919ac;
    }
    ctx->pc = 0x4919A4u;
    SET_GPR_U32(ctx, 31, 0x4919ACu);
    ctx->pc = 0x4919A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4919A4u;
            // 0x4919a8: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4919ACu; }
        if (ctx->pc != 0x4919ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4919ACu; }
        if (ctx->pc != 0x4919ACu) { return; }
    }
    ctx->pc = 0x4919ACu;
label_4919ac:
    // 0x4919ac: 0x8fa502e8  lw          $a1, 0x2E8($sp)
    ctx->pc = 0x4919acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
label_4919b0:
    // 0x4919b0: 0xc125120  jal         func_494480
label_4919b4:
    if (ctx->pc == 0x4919B4u) {
        ctx->pc = 0x4919B4u;
            // 0x4919b4: 0x27a4043c  addiu       $a0, $sp, 0x43C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1084));
        ctx->pc = 0x4919B8u;
        goto label_4919b8;
    }
    ctx->pc = 0x4919B0u;
    SET_GPR_U32(ctx, 31, 0x4919B8u);
    ctx->pc = 0x4919B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4919B0u;
            // 0x4919b4: 0x27a4043c  addiu       $a0, $sp, 0x43C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1084));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4919B8u; }
        if (ctx->pc != 0x4919B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4919B8u; }
        if (ctx->pc != 0x4919B8u) { return; }
    }
    ctx->pc = 0x4919B8u;
label_4919b8:
    // 0x4919b8: 0x8fa4043c  lw          $a0, 0x43C($sp)
    ctx->pc = 0x4919b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1084)));
label_4919bc:
    // 0x4919bc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4919bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4919c0:
    // 0x4919c0: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x4919c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_4919c4:
    // 0x4919c4: 0x9085fff0  lbu         $a1, -0x10($a0)
    ctx->pc = 0x4919c4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967280)));
label_4919c8:
    // 0x4919c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4919c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4919cc:
    // 0x4919cc: 0xdc84fff8  ld          $a0, -0x8($a0)
    ctx->pc = 0x4919ccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_4919d0:
    // 0x4919d0: 0xffa401c8  sd          $a0, 0x1C8($sp)
    ctx->pc = 0x4919d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 4));
label_4919d4:
    // 0x4919d4: 0xae83004c  sw          $v1, 0x4C($s4)
    ctx->pc = 0x4919d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 3));
label_4919d8:
    // 0x4919d8: 0x8fa401f8  lw          $a0, 0x1F8($sp)
    ctx->pc = 0x4919d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_4919dc:
    // 0x4919dc: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
label_4919e0:
    if (ctx->pc == 0x4919E0u) {
        ctx->pc = 0x4919E0u;
            // 0x4919e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4919E4u;
        goto label_4919e4;
    }
    ctx->pc = 0x4919DCu;
    {
        const bool branch_taken_0x4919dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x4919E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4919DCu;
            // 0x4919e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4919dc) {
            ctx->pc = 0x491A00u;
            goto label_491a00;
        }
    }
    ctx->pc = 0x4919E4u;
label_4919e4:
    // 0x4919e4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_4919e8:
    if (ctx->pc == 0x4919E8u) {
        ctx->pc = 0x4919ECu;
        goto label_4919ec;
    }
    ctx->pc = 0x4919E4u;
    {
        const bool branch_taken_0x4919e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4919e4) {
            ctx->pc = 0x4919F8u;
            goto label_4919f8;
        }
    }
    ctx->pc = 0x4919ECu;
label_4919ec:
    // 0x4919ec: 0x1000000a  b           . + 4 + (0xA << 2)
label_4919f0:
    if (ctx->pc == 0x4919F0u) {
        ctx->pc = 0x4919F4u;
        goto label_4919f4;
    }
    ctx->pc = 0x4919ECu;
    {
        const bool branch_taken_0x4919ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4919ec) {
            ctx->pc = 0x491A18u;
            goto label_491a18;
        }
    }
    ctx->pc = 0x4919F4u;
label_4919f4:
    // 0x4919f4: 0x0  nop
    ctx->pc = 0x4919f4u;
    // NOP
label_4919f8:
    // 0x4919f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_4919fc:
    if (ctx->pc == 0x4919FCu) {
        ctx->pc = 0x4919FCu;
            // 0x4919fc: 0x8fa601c8  lw          $a2, 0x1C8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
        ctx->pc = 0x491A00u;
        goto label_491a00;
    }
    ctx->pc = 0x4919F8u;
    {
        const bool branch_taken_0x4919f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4919FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4919F8u;
            // 0x4919fc: 0x8fa601c8  lw          $a2, 0x1C8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4919f8) {
            ctx->pc = 0x491A18u;
            goto label_491a18;
        }
    }
    ctx->pc = 0x491A00u;
label_491a00:
    // 0x491a00: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x491a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_491a04:
    // 0x491a04: 0x93a301c8  lbu         $v1, 0x1C8($sp)
    ctx->pc = 0x491a04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 456)));
label_491a08:
    // 0x491a08: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x491a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_491a0c:
    // 0x491a0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x491a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_491a10:
    // 0x491a10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x491a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_491a14:
    // 0x491a14: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x491a14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_491a18:
    // 0x491a18: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x491a18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_491a1c:
    // 0x491a1c: 0xafa40398  sw          $a0, 0x398($sp)
    ctx->pc = 0x491a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 920), GPR_U32(ctx, 4));
label_491a20:
    // 0x491a20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x491a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_491a24:
    // 0x491a24: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x491a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_491a28:
    // 0x491a28: 0x27a70398  addiu       $a3, $sp, 0x398
    ctx->pc = 0x491a28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 920));
label_491a2c:
    // 0x491a2c: 0x8c430068  lw          $v1, 0x68($v0)
    ctx->pc = 0x491a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_491a30:
    // 0x491a30: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x491a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
label_491a34:
    // 0x491a34: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x491a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_491a38:
    // 0x491a38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x491a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_491a3c:
    // 0x491a3c: 0xc0a997c  jal         func_2A65F0
label_491a40:
    if (ctx->pc == 0x491A40u) {
        ctx->pc = 0x491A40u;
            // 0x491a40: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x491A44u;
        goto label_491a44;
    }
    ctx->pc = 0x491A3Cu;
    SET_GPR_U32(ctx, 31, 0x491A44u);
    ctx->pc = 0x491A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x491A3Cu;
            // 0x491a40: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491A44u; }
        if (ctx->pc != 0x491A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491A44u; }
        if (ctx->pc != 0x491A44u) { return; }
    }
    ctx->pc = 0x491A44u;
label_491a44:
    // 0x491a44: 0x10000a0a  b           . + 4 + (0xA0A << 2)
label_491a48:
    if (ctx->pc == 0x491A48u) {
        ctx->pc = 0x491A4Cu;
        goto label_491a4c;
    }
    ctx->pc = 0x491A44u;
    {
        const bool branch_taken_0x491a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x491a44) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x491A4Cu;
label_491a4c:
    // 0x491a4c: 0x0  nop
    ctx->pc = 0x491a4cu;
    // NOP
label_491a50:
    // 0x491a50: 0x27a402e4  addiu       $a0, $sp, 0x2E4
    ctx->pc = 0x491a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 740));
label_491a54:
    // 0x491a54: 0xc125124  jal         func_494490
label_491a58:
    if (ctx->pc == 0x491A58u) {
        ctx->pc = 0x491A58u;
            // 0x491a58: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->pc = 0x491A5Cu;
        goto label_491a5c;
    }
    ctx->pc = 0x491A54u;
    SET_GPR_U32(ctx, 31, 0x491A5Cu);
    ctx->pc = 0x491A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x491A54u;
            // 0x491a58: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491A5Cu; }
        if (ctx->pc != 0x491A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491A5Cu; }
        if (ctx->pc != 0x491A5Cu) { return; }
    }
    ctx->pc = 0x491A5Cu;
label_491a5c:
    // 0x491a5c: 0x8fa502e4  lw          $a1, 0x2E4($sp)
    ctx->pc = 0x491a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
label_491a60:
    // 0x491a60: 0xc125120  jal         func_494480
label_491a64:
    if (ctx->pc == 0x491A64u) {
        ctx->pc = 0x491A64u;
            // 0x491a64: 0x27a40438  addiu       $a0, $sp, 0x438 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
        ctx->pc = 0x491A68u;
        goto label_491a68;
    }
    ctx->pc = 0x491A60u;
    SET_GPR_U32(ctx, 31, 0x491A68u);
    ctx->pc = 0x491A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x491A60u;
            // 0x491a64: 0x27a40438  addiu       $a0, $sp, 0x438 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491A68u; }
        if (ctx->pc != 0x491A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491A68u; }
        if (ctx->pc != 0x491A68u) { return; }
    }
    ctx->pc = 0x491A68u;
label_491a68:
    // 0x491a68: 0x8fa40438  lw          $a0, 0x438($sp)
    ctx->pc = 0x491a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1080)));
label_491a6c:
    // 0x491a6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x491a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_491a70:
    // 0x491a70: 0x9083fff0  lbu         $v1, -0x10($a0)
    ctx->pc = 0x491a70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967280)));
label_491a74:
    // 0x491a74: 0xa3a301f0  sb          $v1, 0x1F0($sp)
    ctx->pc = 0x491a74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 496), (uint8_t)GPR_U32(ctx, 3));
label_491a78:
    // 0x491a78: 0xdc83fff8  ld          $v1, -0x8($a0)
    ctx->pc = 0x491a78u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_491a7c:
    // 0x491a7c: 0xffa301f8  sd          $v1, 0x1F8($sp)
    ctx->pc = 0x491a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 3));
label_491a80:
    // 0x491a80: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x491a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_491a84:
    // 0x491a84: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x491a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_491a88:
    // 0x491a88: 0xae83004c  sw          $v1, 0x4C($s4)
    ctx->pc = 0x491a88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 3));
label_491a8c:
    // 0x491a8c: 0x93a301f0  lbu         $v1, 0x1F0($sp)
    ctx->pc = 0x491a8cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 496)));
label_491a90:
    // 0x491a90: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
label_491a94:
    if (ctx->pc == 0x491A94u) {
        ctx->pc = 0x491A98u;
        goto label_491a98;
    }
    ctx->pc = 0x491A90u;
    {
        const bool branch_taken_0x491a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x491a90) {
            ctx->pc = 0x491B18u;
            goto label_491b18;
        }
    }
    ctx->pc = 0x491A98u;
label_491a98:
    // 0x491a98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x491a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_491a9c:
    // 0x491a9c: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
label_491aa0:
    if (ctx->pc == 0x491AA0u) {
        ctx->pc = 0x491AA4u;
        goto label_491aa4;
    }
    ctx->pc = 0x491A9Cu;
    {
        const bool branch_taken_0x491a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x491a9c) {
            ctx->pc = 0x491B10u;
            goto label_491b10;
        }
    }
    ctx->pc = 0x491AA4u;
label_491aa4:
    // 0x491aa4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x491aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_491aa8:
    // 0x491aa8: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_491aac:
    if (ctx->pc == 0x491AACu) {
        ctx->pc = 0x491AB0u;
        goto label_491ab0;
    }
    ctx->pc = 0x491AA8u;
    {
        const bool branch_taken_0x491aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x491aa8) {
            ctx->pc = 0x491B00u;
            goto label_491b00;
        }
    }
    ctx->pc = 0x491AB0u;
label_491ab0:
    // 0x491ab0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x491ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_491ab4:
    // 0x491ab4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_491ab8:
    if (ctx->pc == 0x491AB8u) {
        ctx->pc = 0x491ABCu;
        goto label_491abc;
    }
    ctx->pc = 0x491AB4u;
    {
        const bool branch_taken_0x491ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x491ab4) {
            ctx->pc = 0x491AC8u;
            goto label_491ac8;
        }
    }
    ctx->pc = 0x491ABCu;
label_491abc:
    // 0x491abc: 0x1000001e  b           . + 4 + (0x1E << 2)
label_491ac0:
    if (ctx->pc == 0x491AC0u) {
        ctx->pc = 0x491AC4u;
        goto label_491ac4;
    }
    ctx->pc = 0x491ABCu;
    {
        const bool branch_taken_0x491abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x491abc) {
            ctx->pc = 0x491B38u;
            goto label_491b38;
        }
    }
    ctx->pc = 0x491AC4u;
label_491ac4:
    // 0x491ac4: 0x0  nop
    ctx->pc = 0x491ac4u;
    // NOP
label_491ac8:
    // 0x491ac8: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x491ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_491acc:
    // 0x491acc: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_491ad0:
    if (ctx->pc == 0x491AD0u) {
        ctx->pc = 0x491AD0u;
            // 0x491ad0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x491AD4u;
        goto label_491ad4;
    }
    ctx->pc = 0x491ACCu;
    {
        const bool branch_taken_0x491acc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x491acc) {
            ctx->pc = 0x491AD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x491ACCu;
            // 0x491ad0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x491AE0u;
            goto label_491ae0;
        }
    }
    ctx->pc = 0x491AD4u;
label_491ad4:
    // 0x491ad4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x491ad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_491ad8:
    // 0x491ad8: 0x10000007  b           . + 4 + (0x7 << 2)
label_491adc:
    if (ctx->pc == 0x491ADCu) {
        ctx->pc = 0x491ADCu;
            // 0x491adc: 0x468007e0  cvt.s.w     $f31, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[31] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x491AE0u;
        goto label_491ae0;
    }
    ctx->pc = 0x491AD8u;
    {
        const bool branch_taken_0x491ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491AD8u;
            // 0x491adc: 0x468007e0  cvt.s.w     $f31, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[31] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x491ad8) {
            ctx->pc = 0x491AF8u;
            goto label_491af8;
        }
    }
    ctx->pc = 0x491AE0u;
label_491ae0:
    // 0x491ae0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x491ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_491ae4:
    // 0x491ae4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x491ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_491ae8:
    // 0x491ae8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x491ae8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_491aec:
    // 0x491aec: 0x0  nop
    ctx->pc = 0x491aecu;
    // NOP
label_491af0:
    // 0x491af0: 0x468007e0  cvt.s.w     $f31, $f0
    ctx->pc = 0x491af0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[31] = FPU_CVT_S_W(tmp); }
label_491af4:
    // 0x491af4: 0x461fffc0  add.s       $f31, $f31, $f31
    ctx->pc = 0x491af4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], ctx->f[31]);
label_491af8:
    // 0x491af8: 0x1000000f  b           . + 4 + (0xF << 2)
label_491afc:
    if (ctx->pc == 0x491AFCu) {
        ctx->pc = 0x491B00u;
        goto label_491b00;
    }
    ctx->pc = 0x491AF8u;
    {
        const bool branch_taken_0x491af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x491af8) {
            ctx->pc = 0x491B38u;
            goto label_491b38;
        }
    }
    ctx->pc = 0x491B00u;
label_491b00:
    // 0x491b00: 0xc0497dc  jal         func_125F70
label_491b04:
    if (ctx->pc == 0x491B04u) {
        ctx->pc = 0x491B04u;
            // 0x491b04: 0xdfa401f8  ld          $a0, 0x1F8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->pc = 0x491B08u;
        goto label_491b08;
    }
    ctx->pc = 0x491B00u;
    SET_GPR_U32(ctx, 31, 0x491B08u);
    ctx->pc = 0x491B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x491B00u;
            // 0x491b04: 0xdfa401f8  ld          $a0, 0x1F8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491B08u; }
        if (ctx->pc != 0x491B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491B08u; }
        if (ctx->pc != 0x491B08u) { return; }
    }
    ctx->pc = 0x491B08u;
label_491b08:
    // 0x491b08: 0x1000000b  b           . + 4 + (0xB << 2)
label_491b0c:
    if (ctx->pc == 0x491B0Cu) {
        ctx->pc = 0x491B0Cu;
            // 0x491b0c: 0x460007c6  mov.s       $f31, $f0 (Delay Slot)
        ctx->f[31] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x491B10u;
        goto label_491b10;
    }
    ctx->pc = 0x491B08u;
    {
        const bool branch_taken_0x491b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491B08u;
            // 0x491b0c: 0x460007c6  mov.s       $f31, $f0 (Delay Slot)
        ctx->f[31] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x491b08) {
            ctx->pc = 0x491B38u;
            goto label_491b38;
        }
    }
    ctx->pc = 0x491B10u;
label_491b10:
    // 0x491b10: 0x10000009  b           . + 4 + (0x9 << 2)
label_491b14:
    if (ctx->pc == 0x491B14u) {
        ctx->pc = 0x491B14u;
            // 0x491b14: 0xc7bf01f8  lwc1        $f31, 0x1F8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
        ctx->pc = 0x491B18u;
        goto label_491b18;
    }
    ctx->pc = 0x491B10u;
    {
        const bool branch_taken_0x491b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491B10u;
            // 0x491b14: 0xc7bf01f8  lwc1        $f31, 0x1F8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x491b10) {
            ctx->pc = 0x491B38u;
            goto label_491b38;
        }
    }
    ctx->pc = 0x491B18u;
label_491b18:
    // 0x491b18: 0x93a201f8  lbu         $v0, 0x1F8($sp)
    ctx->pc = 0x491b18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 504)));
label_491b1c:
    // 0x491b1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x491b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_491b20:
    // 0x491b20: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x491b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_491b24:
    // 0x491b24: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x491b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_491b28:
    // 0x491b28: 0xc124524  jal         func_491490
label_491b2c:
    if (ctx->pc == 0x491B2Cu) {
        ctx->pc = 0x491B2Cu;
            // 0x491b2c: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->pc = 0x491B30u;
        goto label_491b30;
    }
    ctx->pc = 0x491B28u;
    SET_GPR_U32(ctx, 31, 0x491B30u);
    ctx->pc = 0x491B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x491B28u;
            // 0x491b2c: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x491490u;
    if (runtime->hasFunction(0x491490u)) {
        auto targetFn = runtime->lookupFunction(0x491490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491B30u; }
        if (ctx->pc != 0x491B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00491490_0x491490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491B30u; }
        if (ctx->pc != 0x491B30u) { return; }
    }
    ctx->pc = 0x491B30u;
label_491b30:
    // 0x491b30: 0x460007c6  mov.s       $f31, $f0
    ctx->pc = 0x491b30u;
    ctx->f[31] = FPU_MOV_S(ctx->f[0]);
label_491b34:
    // 0x491b34: 0x0  nop
    ctx->pc = 0x491b34u;
    // NOP
label_491b38:
    // 0x491b38: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x491b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_491b3c:
    // 0x491b3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x491b3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_491b40:
    // 0x491b40: 0x0  nop
    ctx->pc = 0x491b40u;
    // NOP
label_491b44:
    // 0x491b44: 0x461f0036  c.le.s      $f0, $f31
    ctx->pc = 0x491b44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[31])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_491b48:
    // 0x491b48: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_491b4c:
    if (ctx->pc == 0x491B4Cu) {
        ctx->pc = 0x491B4Cu;
            // 0x491b4c: 0x4600f801  sub.s       $f0, $f31, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[31], ctx->f[0]);
        ctx->pc = 0x491B50u;
        goto label_491b50;
    }
    ctx->pc = 0x491B48u;
    {
        const bool branch_taken_0x491b48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x491b48) {
            ctx->pc = 0x491B4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x491B48u;
            // 0x491b4c: 0x4600f801  sub.s       $f0, $f31, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[31], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x491B60u;
            goto label_491b60;
        }
    }
    ctx->pc = 0x491B50u;
label_491b50:
    // 0x491b50: 0x4600f824  .word       0x4600F824                   # cvt.w.s     $f0, $f31 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x491b50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[31]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_491b54:
    // 0x491b54: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x491b54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_491b58:
    // 0x491b58: 0x10000007  b           . + 4 + (0x7 << 2)
label_491b5c:
    if (ctx->pc == 0x491B5Cu) {
        ctx->pc = 0x491B5Cu;
            // 0x491b5c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x491B60u;
        goto label_491b60;
    }
    ctx->pc = 0x491B58u;
    {
        const bool branch_taken_0x491b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491B58u;
            // 0x491b5c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491b58) {
            ctx->pc = 0x491B78u;
            goto label_491b78;
        }
    }
    ctx->pc = 0x491B60u;
label_491b60:
    // 0x491b60: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x491b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_491b64:
    // 0x491b64: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x491b64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_491b68:
    // 0x491b68: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x491b68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_491b6c:
    // 0x491b6c: 0x0  nop
    ctx->pc = 0x491b6cu;
    // NOP
label_491b70:
    // 0x491b70: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x491b70u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_491b74:
    // 0x491b74: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x491b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_491b78:
    // 0x491b78: 0xc040180  jal         func_100600
label_491b7c:
    if (ctx->pc == 0x491B7Cu) {
        ctx->pc = 0x491B80u;
        goto label_491b80;
    }
    ctx->pc = 0x491B78u;
    SET_GPR_U32(ctx, 31, 0x491B80u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491B80u; }
        if (ctx->pc != 0x491B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491B80u; }
        if (ctx->pc != 0x491B80u) { return; }
    }
    ctx->pc = 0x491B80u;
label_491b80:
    // 0x491b80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x491b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_491b84:
    // 0x491b84: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_491b88:
    if (ctx->pc == 0x491B88u) {
        ctx->pc = 0x491B8Cu;
        goto label_491b8c;
    }
    ctx->pc = 0x491B84u;
    {
        const bool branch_taken_0x491b84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x491b84) {
            ctx->pc = 0x491BA0u;
            goto label_491ba0;
        }
    }
    ctx->pc = 0x491B8Cu;
label_491b8c:
    // 0x491b8c: 0xc125118  jal         func_494460
label_491b90:
    if (ctx->pc == 0x491B90u) {
        ctx->pc = 0x491B90u;
            // 0x491b90: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x491B94u;
        goto label_491b94;
    }
    ctx->pc = 0x491B8Cu;
    SET_GPR_U32(ctx, 31, 0x491B94u);
    ctx->pc = 0x491B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x491B8Cu;
            // 0x491b90: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494460u;
    if (runtime->hasFunction(0x494460u)) {
        auto targetFn = runtime->lookupFunction(0x494460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491B94u; }
        if (ctx->pc != 0x491B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494460_0x494460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491B94u; }
        if (ctx->pc != 0x491B94u) { return; }
    }
    ctx->pc = 0x491B94u;
label_491b94:
    // 0x491b94: 0xc125110  jal         func_494440
label_491b98:
    if (ctx->pc == 0x491B98u) {
        ctx->pc = 0x491B98u;
            // 0x491b98: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->pc = 0x491B9Cu;
        goto label_491b9c;
    }
    ctx->pc = 0x491B94u;
    SET_GPR_U32(ctx, 31, 0x491B9Cu);
    ctx->pc = 0x491B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x491B94u;
            // 0x491b98: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494440u;
    if (runtime->hasFunction(0x494440u)) {
        auto targetFn = runtime->lookupFunction(0x494440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491B9Cu; }
        if (ctx->pc != 0x491B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494440_0x494440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491B9Cu; }
        if (ctx->pc != 0x491B9Cu) { return; }
    }
    ctx->pc = 0x491B9Cu;
label_491b9c:
    // 0x491b9c: 0x0  nop
    ctx->pc = 0x491b9cu;
    // NOP
label_491ba0:
    // 0x491ba0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x491ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_491ba4:
    // 0x491ba4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x491ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_491ba8:
    // 0x491ba8: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x491ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_491bac:
    // 0x491bac: 0xc125d44  jal         func_497510
label_491bb0:
    if (ctx->pc == 0x491BB0u) {
        ctx->pc = 0x491BB0u;
            // 0x491bb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x491BB4u;
        goto label_491bb4;
    }
    ctx->pc = 0x491BACu;
    SET_GPR_U32(ctx, 31, 0x491BB4u);
    ctx->pc = 0x491BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x491BACu;
            // 0x491bb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x497510u;
    if (runtime->hasFunction(0x497510u)) {
        auto targetFn = runtime->lookupFunction(0x497510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491BB4u; }
        if (ctx->pc != 0x491BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00497510_0x497510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491BB4u; }
        if (ctx->pc != 0x491BB4u) { return; }
    }
    ctx->pc = 0x491BB4u;
label_491bb4:
    // 0x491bb4: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
label_491bb8:
    if (ctx->pc == 0x491BB8u) {
        ctx->pc = 0x491BBCu;
        goto label_491bbc;
    }
    ctx->pc = 0x491BB4u;
    {
        const bool branch_taken_0x491bb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x491bb4) {
            ctx->pc = 0x491C18u;
            goto label_491c18;
        }
    }
    ctx->pc = 0x491BBCu;
label_491bbc:
    // 0x491bbc: 0x0  nop
    ctx->pc = 0x491bbcu;
    // NOP
label_491bc0:
    // 0x491bc0: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x491bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_491bc4:
    // 0x491bc4: 0xc125124  jal         func_494490
label_491bc8:
    if (ctx->pc == 0x491BC8u) {
        ctx->pc = 0x491BC8u;
            // 0x491bc8: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->pc = 0x491BCCu;
        goto label_491bcc;
    }
    ctx->pc = 0x491BC4u;
    SET_GPR_U32(ctx, 31, 0x491BCCu);
    ctx->pc = 0x491BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x491BC4u;
            // 0x491bc8: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491BCCu; }
        if (ctx->pc != 0x491BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491BCCu; }
        if (ctx->pc != 0x491BCCu) { return; }
    }
    ctx->pc = 0x491BCCu;
label_491bcc:
    // 0x491bcc: 0x8fa502e0  lw          $a1, 0x2E0($sp)
    ctx->pc = 0x491bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_491bd0:
    // 0x491bd0: 0xc125120  jal         func_494480
label_491bd4:
    if (ctx->pc == 0x491BD4u) {
        ctx->pc = 0x491BD4u;
            // 0x491bd4: 0x27a40434  addiu       $a0, $sp, 0x434 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1076));
        ctx->pc = 0x491BD8u;
        goto label_491bd8;
    }
    ctx->pc = 0x491BD0u;
    SET_GPR_U32(ctx, 31, 0x491BD8u);
    ctx->pc = 0x491BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x491BD0u;
            // 0x491bd4: 0x27a40434  addiu       $a0, $sp, 0x434 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1076));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491BD8u; }
        if (ctx->pc != 0x491BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491BD8u; }
        if (ctx->pc != 0x491BD8u) { return; }
    }
    ctx->pc = 0x491BD8u;
label_491bd8:
    // 0x491bd8: 0x8fa50434  lw          $a1, 0x434($sp)
    ctx->pc = 0x491bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1076)));
label_491bdc:
    // 0x491bdc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x491bdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_491be0:
    // 0x491be0: 0x1120c0  sll         $a0, $s1, 3
    ctx->pc = 0x491be0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_491be4:
    // 0x491be4: 0x27a201f0  addiu       $v0, $sp, 0x1F0
    ctx->pc = 0x491be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_491be8:
    // 0x491be8: 0x90a3fff0  lbu         $v1, -0x10($a1)
    ctx->pc = 0x491be8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967280)));
label_491bec:
    // 0x491bec: 0xa3a301f0  sb          $v1, 0x1F0($sp)
    ctx->pc = 0x491becu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 496), (uint8_t)GPR_U32(ctx, 3));
label_491bf0:
    // 0x491bf0: 0xdca3fff8  ld          $v1, -0x8($a1)
    ctx->pc = 0x491bf0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 4294967288)));
label_491bf4:
    // 0x491bf4: 0xffa301f8  sd          $v1, 0x1F8($sp)
    ctx->pc = 0x491bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 3));
label_491bf8:
    // 0x491bf8: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x491bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_491bfc:
    // 0x491bfc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x491bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_491c00:
    // 0x491c00: 0xae83004c  sw          $v1, 0x4C($s4)
    ctx->pc = 0x491c00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 3));
label_491c04:
    // 0x491c04: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x491c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_491c08:
    // 0x491c08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x491c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_491c0c:
    // 0x491c0c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x491c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_491c10:
    // 0x491c10: 0x1620ffeb  bnez        $s1, . + 4 + (-0x15 << 2)
label_491c14:
    if (ctx->pc == 0x491C14u) {
        ctx->pc = 0x491C14u;
            // 0x491c14: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x491C18u;
        goto label_491c18;
    }
    ctx->pc = 0x491C10u;
    {
        const bool branch_taken_0x491c10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x491C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491C10u;
            // 0x491c14: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491c10) {
            ctx->pc = 0x491BC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_491bc0;
        }
    }
    ctx->pc = 0x491C18u;
label_491c18:
    // 0x491c18: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x491c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_491c1c:
    // 0x491c1c: 0xafb001e8  sw          $s0, 0x1E8($sp)
    ctx->pc = 0x491c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 16));
label_491c20:
    // 0x491c20: 0x26840048  addiu       $a0, $s4, 0x48
    ctx->pc = 0x491c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_491c24:
    // 0x491c24: 0xa3a201e0  sb          $v0, 0x1E0($sp)
    ctx->pc = 0x491c24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 480), (uint8_t)GPR_U32(ctx, 2));
label_491c28:
    // 0x491c28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x491c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_491c2c:
    // 0x491c2c: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x491c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_491c30:
    // 0x491c30: 0x27a701e0  addiu       $a3, $sp, 0x1E0
    ctx->pc = 0x491c30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_491c34:
    // 0x491c34: 0x8e820050  lw          $v0, 0x50($s4)
    ctx->pc = 0x491c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_491c38:
    // 0x491c38: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x491c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_491c3c:
    // 0x491c3c: 0xc125914  jal         func_496450
label_491c40:
    if (ctx->pc == 0x491C40u) {
        ctx->pc = 0x491C40u;
            // 0x491c40: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x491C44u;
        goto label_491c44;
    }
    ctx->pc = 0x491C3Cu;
    SET_GPR_U32(ctx, 31, 0x491C44u);
    ctx->pc = 0x491C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x491C3Cu;
            // 0x491c40: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496450u;
    if (runtime->hasFunction(0x496450u)) {
        auto targetFn = runtime->lookupFunction(0x496450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491C44u; }
        if (ctx->pc != 0x491C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496450_0x496450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491C44u; }
        if (ctx->pc != 0x491C44u) { return; }
    }
    ctx->pc = 0x491C44u;
label_491c44:
    // 0x491c44: 0x1000098a  b           . + 4 + (0x98A << 2)
label_491c48:
    if (ctx->pc == 0x491C48u) {
        ctx->pc = 0x491C4Cu;
        goto label_491c4c;
    }
    ctx->pc = 0x491C44u;
    {
        const bool branch_taken_0x491c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x491c44) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x491C4Cu;
label_491c4c:
    // 0x491c4c: 0x0  nop
    ctx->pc = 0x491c4cu;
    // NOP
label_491c50:
    // 0x491c50: 0x27a402dc  addiu       $a0, $sp, 0x2DC
    ctx->pc = 0x491c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 732));
label_491c54:
    // 0x491c54: 0xc125124  jal         func_494490
label_491c58:
    if (ctx->pc == 0x491C58u) {
        ctx->pc = 0x491C58u;
            // 0x491c58: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->pc = 0x491C5Cu;
        goto label_491c5c;
    }
    ctx->pc = 0x491C54u;
    SET_GPR_U32(ctx, 31, 0x491C5Cu);
    ctx->pc = 0x491C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x491C54u;
            // 0x491c58: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491C5Cu; }
        if (ctx->pc != 0x491C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491C5Cu; }
        if (ctx->pc != 0x491C5Cu) { return; }
    }
    ctx->pc = 0x491C5Cu;
label_491c5c:
    // 0x491c5c: 0x8fa502dc  lw          $a1, 0x2DC($sp)
    ctx->pc = 0x491c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
label_491c60:
    // 0x491c60: 0xc125120  jal         func_494480
label_491c64:
    if (ctx->pc == 0x491C64u) {
        ctx->pc = 0x491C64u;
            // 0x491c64: 0x27a40444  addiu       $a0, $sp, 0x444 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1092));
        ctx->pc = 0x491C68u;
        goto label_491c68;
    }
    ctx->pc = 0x491C60u;
    SET_GPR_U32(ctx, 31, 0x491C68u);
    ctx->pc = 0x491C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x491C60u;
            // 0x491c64: 0x27a40444  addiu       $a0, $sp, 0x444 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1092));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491C68u; }
        if (ctx->pc != 0x491C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491C68u; }
        if (ctx->pc != 0x491C68u) { return; }
    }
    ctx->pc = 0x491C68u;
label_491c68:
    // 0x491c68: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x491c68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_491c6c:
    // 0x491c6c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x491c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_491c70:
    // 0x491c70: 0x8fa30444  lw          $v1, 0x444($sp)
    ctx->pc = 0x491c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1092)));
label_491c74:
    // 0x491c74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x491c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_491c78:
    // 0x491c78: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x491c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_491c7c:
    // 0x491c7c: 0x2465fff0  addiu       $a1, $v1, -0x10
    ctx->pc = 0x491c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_491c80:
    // 0x491c80: 0xc04a508  jal         func_129420
label_491c84:
    if (ctx->pc == 0x491C84u) {
        ctx->pc = 0x491C84u;
            // 0x491c84: 0x24440058  addiu       $a0, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->pc = 0x491C88u;
        goto label_491c88;
    }
    ctx->pc = 0x491C80u;
    SET_GPR_U32(ctx, 31, 0x491C88u);
    ctx->pc = 0x491C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x491C80u;
            // 0x491c84: 0x24440058  addiu       $a0, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491C88u; }
        if (ctx->pc != 0x491C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491C88u; }
        if (ctx->pc != 0x491C88u) { return; }
    }
    ctx->pc = 0x491C88u;
label_491c88:
    // 0x491c88: 0x10000979  b           . + 4 + (0x979 << 2)
label_491c8c:
    if (ctx->pc == 0x491C8Cu) {
        ctx->pc = 0x491C90u;
        goto label_491c90;
    }
    ctx->pc = 0x491C88u;
    {
        const bool branch_taken_0x491c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x491c88) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x491C90u;
label_491c90:
    // 0x491c90: 0x27a402d8  addiu       $a0, $sp, 0x2D8
    ctx->pc = 0x491c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 728));
label_491c94:
    // 0x491c94: 0xc125124  jal         func_494490
label_491c98:
    if (ctx->pc == 0x491C98u) {
        ctx->pc = 0x491C98u;
            // 0x491c98: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->pc = 0x491C9Cu;
        goto label_491c9c;
    }
    ctx->pc = 0x491C94u;
    SET_GPR_U32(ctx, 31, 0x491C9Cu);
    ctx->pc = 0x491C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x491C94u;
            // 0x491c98: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491C9Cu; }
        if (ctx->pc != 0x491C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491C9Cu; }
        if (ctx->pc != 0x491C9Cu) { return; }
    }
    ctx->pc = 0x491C9Cu;
label_491c9c:
    // 0x491c9c: 0x8fa502d8  lw          $a1, 0x2D8($sp)
    ctx->pc = 0x491c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
label_491ca0:
    // 0x491ca0: 0xc125120  jal         func_494480
label_491ca4:
    if (ctx->pc == 0x491CA4u) {
        ctx->pc = 0x491CA4u;
            // 0x491ca4: 0x27a40430  addiu       $a0, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->pc = 0x491CA8u;
        goto label_491ca8;
    }
    ctx->pc = 0x491CA0u;
    SET_GPR_U32(ctx, 31, 0x491CA8u);
    ctx->pc = 0x491CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x491CA0u;
            // 0x491ca4: 0x27a40430  addiu       $a0, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491CA8u; }
        if (ctx->pc != 0x491CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491CA8u; }
        if (ctx->pc != 0x491CA8u) { return; }
    }
    ctx->pc = 0x491CA8u;
label_491ca8:
    // 0x491ca8: 0x8fa30430  lw          $v1, 0x430($sp)
    ctx->pc = 0x491ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1072)));
label_491cac:
    // 0x491cac: 0x27a402d4  addiu       $a0, $sp, 0x2D4
    ctx->pc = 0x491cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 724));
label_491cb0:
    // 0x491cb0: 0x26850048  addiu       $a1, $s4, 0x48
    ctx->pc = 0x491cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_491cb4:
    // 0x491cb4: 0x9062fff0  lbu         $v0, -0x10($v1)
    ctx->pc = 0x491cb4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_491cb8:
    // 0x491cb8: 0xa3a201f0  sb          $v0, 0x1F0($sp)
    ctx->pc = 0x491cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 496), (uint8_t)GPR_U32(ctx, 2));
label_491cbc:
    // 0x491cbc: 0xdc62fff8  ld          $v0, -0x8($v1)
    ctx->pc = 0x491cbcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_491cc0:
    // 0x491cc0: 0xffa201f8  sd          $v0, 0x1F8($sp)
    ctx->pc = 0x491cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 2));
label_491cc4:
    // 0x491cc4: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x491cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_491cc8:
    // 0x491cc8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x491cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_491ccc:
    // 0x491ccc: 0xc125124  jal         func_494490
label_491cd0:
    if (ctx->pc == 0x491CD0u) {
        ctx->pc = 0x491CD0u;
            // 0x491cd0: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x491CD4u;
        goto label_491cd4;
    }
    ctx->pc = 0x491CCCu;
    SET_GPR_U32(ctx, 31, 0x491CD4u);
    ctx->pc = 0x491CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x491CCCu;
            // 0x491cd0: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491CD4u; }
        if (ctx->pc != 0x491CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491CD4u; }
        if (ctx->pc != 0x491CD4u) { return; }
    }
    ctx->pc = 0x491CD4u;
label_491cd4:
    // 0x491cd4: 0x8fa502d4  lw          $a1, 0x2D4($sp)
    ctx->pc = 0x491cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
label_491cd8:
    // 0x491cd8: 0xc125120  jal         func_494480
label_491cdc:
    if (ctx->pc == 0x491CDCu) {
        ctx->pc = 0x491CDCu;
            // 0x491cdc: 0x27a4042c  addiu       $a0, $sp, 0x42C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1068));
        ctx->pc = 0x491CE0u;
        goto label_491ce0;
    }
    ctx->pc = 0x491CD8u;
    SET_GPR_U32(ctx, 31, 0x491CE0u);
    ctx->pc = 0x491CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x491CD8u;
            // 0x491cdc: 0x27a4042c  addiu       $a0, $sp, 0x42C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1068));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491CE0u; }
        if (ctx->pc != 0x491CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491CE0u; }
        if (ctx->pc != 0x491CE0u) { return; }
    }
    ctx->pc = 0x491CE0u;
label_491ce0:
    // 0x491ce0: 0x8fa3042c  lw          $v1, 0x42C($sp)
    ctx->pc = 0x491ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1068)));
label_491ce4:
    // 0x491ce4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x491ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_491ce8:
    // 0x491ce8: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x491ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_491cec:
    // 0x491cec: 0x9067fff0  lbu         $a3, -0x10($v1)
    ctx->pc = 0x491cecu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_491cf0:
    // 0x491cf0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x491cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_491cf4:
    // 0x491cf4: 0xdc63fff8  ld          $v1, -0x8($v1)
    ctx->pc = 0x491cf4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_491cf8:
    // 0x491cf8: 0xae82004c  sw          $v0, 0x4C($s4)
    ctx->pc = 0x491cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
label_491cfc:
    // 0x491cfc: 0x93a401f0  lbu         $a0, 0x1F0($sp)
    ctx->pc = 0x491cfcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 496)));
label_491d00:
    // 0x491d00: 0xffa301c8  sd          $v1, 0x1C8($sp)
    ctx->pc = 0x491d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 3));
label_491d04:
    // 0x491d04: 0x14860008  bne         $a0, $a2, . + 4 + (0x8 << 2)
label_491d08:
    if (ctx->pc == 0x491D08u) {
        ctx->pc = 0x491D08u;
            // 0x491d08: 0xa3a601e0  sb          $a2, 0x1E0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 480), (uint8_t)GPR_U32(ctx, 6));
        ctx->pc = 0x491D0Cu;
        goto label_491d0c;
    }
    ctx->pc = 0x491D04u;
    {
        const bool branch_taken_0x491d04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x491D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491D04u;
            // 0x491d08: 0xa3a601e0  sb          $a2, 0x1E0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 480), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491d04) {
            ctx->pc = 0x491D28u;
            goto label_491d28;
        }
    }
    ctx->pc = 0x491D0Cu;
label_491d0c:
    // 0x491d0c: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x491d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_491d10:
    // 0x491d10: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x491d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_491d14:
    // 0x491d14: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_491d18:
    if (ctx->pc == 0x491D18u) {
        ctx->pc = 0x491D1Cu;
        goto label_491d1c;
    }
    ctx->pc = 0x491D14u;
    {
        const bool branch_taken_0x491d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x491d14) {
            ctx->pc = 0x491D28u;
            goto label_491d28;
        }
    }
    ctx->pc = 0x491D1Cu;
label_491d1c:
    // 0x491d1c: 0x8fa201c8  lw          $v0, 0x1C8($sp)
    ctx->pc = 0x491d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_491d20:
    // 0x491d20: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x491d20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_491d24:
    // 0x491d24: 0xa3a201c8  sb          $v0, 0x1C8($sp)
    ctx->pc = 0x491d24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 456), (uint8_t)GPR_U32(ctx, 2));
label_491d28:
    // 0x491d28: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x491d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_491d2c:
    // 0x491d2c: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
label_491d30:
    if (ctx->pc == 0x491D30u) {
        ctx->pc = 0x491D34u;
        goto label_491d34;
    }
    ctx->pc = 0x491D2Cu;
    {
        const bool branch_taken_0x491d2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x491d2c) {
            ctx->pc = 0x491D50u;
            goto label_491d50;
        }
    }
    ctx->pc = 0x491D34u;
label_491d34:
    // 0x491d34: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x491d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_491d38:
    // 0x491d38: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x491d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_491d3c:
    // 0x491d3c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_491d40:
    if (ctx->pc == 0x491D40u) {
        ctx->pc = 0x491D44u;
        goto label_491d44;
    }
    ctx->pc = 0x491D3Cu;
    {
        const bool branch_taken_0x491d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x491d3c) {
            ctx->pc = 0x491D50u;
            goto label_491d50;
        }
    }
    ctx->pc = 0x491D44u;
label_491d44:
    // 0x491d44: 0xa3a201f0  sb          $v0, 0x1F0($sp)
    ctx->pc = 0x491d44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 496), (uint8_t)GPR_U32(ctx, 2));
label_491d48:
    // 0x491d48: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x491d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_491d4c:
    // 0x491d4c: 0xa3a201f8  sb          $v0, 0x1F8($sp)
    ctx->pc = 0x491d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 504), (uint8_t)GPR_U32(ctx, 2));
label_491d50:
    // 0x491d50: 0x93a301f0  lbu         $v1, 0x1F0($sp)
    ctx->pc = 0x491d50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 496)));
label_491d54:
    // 0x491d54: 0x30f000ff  andi        $s0, $a3, 0xFF
    ctx->pc = 0x491d54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_491d58:
    // 0x491d58: 0x1070005d  beq         $v1, $s0, . + 4 + (0x5D << 2)
label_491d5c:
    if (ctx->pc == 0x491D5Cu) {
        ctx->pc = 0x491D60u;
        goto label_491d60;
    }
    ctx->pc = 0x491D58u;
    {
        const bool branch_taken_0x491d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x491d58) {
            ctx->pc = 0x491ED0u;
            goto label_491ed0;
        }
    }
    ctx->pc = 0x491D60u;
label_491d60:
    // 0x491d60: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x491d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_491d64:
    // 0x491d64: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_491d68:
    if (ctx->pc == 0x491D68u) {
        ctx->pc = 0x491D6Cu;
        goto label_491d6c;
    }
    ctx->pc = 0x491D64u;
    {
        const bool branch_taken_0x491d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x491d64) {
            ctx->pc = 0x491DE8u;
            goto label_491de8;
        }
    }
    ctx->pc = 0x491D6Cu;
label_491d6c:
    // 0x491d6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x491d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_491d70:
    // 0x491d70: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
label_491d74:
    if (ctx->pc == 0x491D74u) {
        ctx->pc = 0x491D78u;
        goto label_491d78;
    }
    ctx->pc = 0x491D70u;
    {
        const bool branch_taken_0x491d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x491d70) {
            ctx->pc = 0x491DE0u;
            goto label_491de0;
        }
    }
    ctx->pc = 0x491D78u;
label_491d78:
    // 0x491d78: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x491d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_491d7c:
    // 0x491d7c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_491d80:
    if (ctx->pc == 0x491D80u) {
        ctx->pc = 0x491D84u;
        goto label_491d84;
    }
    ctx->pc = 0x491D7Cu;
    {
        const bool branch_taken_0x491d7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x491d7c) {
            ctx->pc = 0x491DD0u;
            goto label_491dd0;
        }
    }
    ctx->pc = 0x491D84u;
label_491d84:
    // 0x491d84: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x491d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_491d88:
    // 0x491d88: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_491d8c:
    if (ctx->pc == 0x491D8Cu) {
        ctx->pc = 0x491D90u;
        goto label_491d90;
    }
    ctx->pc = 0x491D88u;
    {
        const bool branch_taken_0x491d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x491d88) {
            ctx->pc = 0x491D98u;
            goto label_491d98;
        }
    }
    ctx->pc = 0x491D90u;
label_491d90:
    // 0x491d90: 0x1000001d  b           . + 4 + (0x1D << 2)
label_491d94:
    if (ctx->pc == 0x491D94u) {
        ctx->pc = 0x491D98u;
        goto label_491d98;
    }
    ctx->pc = 0x491D90u;
    {
        const bool branch_taken_0x491d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x491d90) {
            ctx->pc = 0x491E08u;
            goto label_491e08;
        }
    }
    ctx->pc = 0x491D98u;
label_491d98:
    // 0x491d98: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x491d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_491d9c:
    // 0x491d9c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_491da0:
    if (ctx->pc == 0x491DA0u) {
        ctx->pc = 0x491DA0u;
            // 0x491da0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x491DA4u;
        goto label_491da4;
    }
    ctx->pc = 0x491D9Cu;
    {
        const bool branch_taken_0x491d9c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x491d9c) {
            ctx->pc = 0x491DA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x491D9Cu;
            // 0x491da0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x491DB0u;
            goto label_491db0;
        }
    }
    ctx->pc = 0x491DA4u;
label_491da4:
    // 0x491da4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x491da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_491da8:
    // 0x491da8: 0x10000007  b           . + 4 + (0x7 << 2)
label_491dac:
    if (ctx->pc == 0x491DACu) {
        ctx->pc = 0x491DACu;
            // 0x491dac: 0x468007a0  cvt.s.w     $f30, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[30] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x491DB0u;
        goto label_491db0;
    }
    ctx->pc = 0x491DA8u;
    {
        const bool branch_taken_0x491da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491DA8u;
            // 0x491dac: 0x468007a0  cvt.s.w     $f30, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[30] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x491da8) {
            ctx->pc = 0x491DC8u;
            goto label_491dc8;
        }
    }
    ctx->pc = 0x491DB0u;
label_491db0:
    // 0x491db0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x491db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_491db4:
    // 0x491db4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x491db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_491db8:
    // 0x491db8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x491db8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_491dbc:
    // 0x491dbc: 0x0  nop
    ctx->pc = 0x491dbcu;
    // NOP
label_491dc0:
    // 0x491dc0: 0x468007a0  cvt.s.w     $f30, $f0
    ctx->pc = 0x491dc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[30] = FPU_CVT_S_W(tmp); }
label_491dc4:
    // 0x491dc4: 0x461ef780  add.s       $f30, $f30, $f30
    ctx->pc = 0x491dc4u;
    ctx->f[30] = FPU_ADD_S(ctx->f[30], ctx->f[30]);
label_491dc8:
    // 0x491dc8: 0x1000000f  b           . + 4 + (0xF << 2)
label_491dcc:
    if (ctx->pc == 0x491DCCu) {
        ctx->pc = 0x491DD0u;
        goto label_491dd0;
    }
    ctx->pc = 0x491DC8u;
    {
        const bool branch_taken_0x491dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x491dc8) {
            ctx->pc = 0x491E08u;
            goto label_491e08;
        }
    }
    ctx->pc = 0x491DD0u;
label_491dd0:
    // 0x491dd0: 0xc0497dc  jal         func_125F70
label_491dd4:
    if (ctx->pc == 0x491DD4u) {
        ctx->pc = 0x491DD4u;
            // 0x491dd4: 0xdfa401f8  ld          $a0, 0x1F8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->pc = 0x491DD8u;
        goto label_491dd8;
    }
    ctx->pc = 0x491DD0u;
    SET_GPR_U32(ctx, 31, 0x491DD8u);
    ctx->pc = 0x491DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x491DD0u;
            // 0x491dd4: 0xdfa401f8  ld          $a0, 0x1F8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491DD8u; }
        if (ctx->pc != 0x491DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491DD8u; }
        if (ctx->pc != 0x491DD8u) { return; }
    }
    ctx->pc = 0x491DD8u;
label_491dd8:
    // 0x491dd8: 0x1000000b  b           . + 4 + (0xB << 2)
label_491ddc:
    if (ctx->pc == 0x491DDCu) {
        ctx->pc = 0x491DDCu;
            // 0x491ddc: 0x46000786  mov.s       $f30, $f0 (Delay Slot)
        ctx->f[30] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x491DE0u;
        goto label_491de0;
    }
    ctx->pc = 0x491DD8u;
    {
        const bool branch_taken_0x491dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491DD8u;
            // 0x491ddc: 0x46000786  mov.s       $f30, $f0 (Delay Slot)
        ctx->f[30] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x491dd8) {
            ctx->pc = 0x491E08u;
            goto label_491e08;
        }
    }
    ctx->pc = 0x491DE0u;
label_491de0:
    // 0x491de0: 0x10000009  b           . + 4 + (0x9 << 2)
label_491de4:
    if (ctx->pc == 0x491DE4u) {
        ctx->pc = 0x491DE4u;
            // 0x491de4: 0xc7be01f8  lwc1        $f30, 0x1F8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
        ctx->pc = 0x491DE8u;
        goto label_491de8;
    }
    ctx->pc = 0x491DE0u;
    {
        const bool branch_taken_0x491de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491DE0u;
            // 0x491de4: 0xc7be01f8  lwc1        $f30, 0x1F8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x491de0) {
            ctx->pc = 0x491E08u;
            goto label_491e08;
        }
    }
    ctx->pc = 0x491DE8u;
label_491de8:
    // 0x491de8: 0x93a201f8  lbu         $v0, 0x1F8($sp)
    ctx->pc = 0x491de8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 504)));
label_491dec:
    // 0x491dec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x491decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_491df0:
    // 0x491df0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x491df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_491df4:
    // 0x491df4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x491df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_491df8:
    // 0x491df8: 0xc124524  jal         func_491490
label_491dfc:
    if (ctx->pc == 0x491DFCu) {
        ctx->pc = 0x491DFCu;
            // 0x491dfc: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->pc = 0x491E00u;
        goto label_491e00;
    }
    ctx->pc = 0x491DF8u;
    SET_GPR_U32(ctx, 31, 0x491E00u);
    ctx->pc = 0x491DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x491DF8u;
            // 0x491dfc: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x491490u;
    if (runtime->hasFunction(0x491490u)) {
        auto targetFn = runtime->lookupFunction(0x491490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491E00u; }
        if (ctx->pc != 0x491E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00491490_0x491490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491E00u; }
        if (ctx->pc != 0x491E00u) { return; }
    }
    ctx->pc = 0x491E00u;
label_491e00:
    // 0x491e00: 0x46000786  mov.s       $f30, $f0
    ctx->pc = 0x491e00u;
    ctx->f[30] = FPU_MOV_S(ctx->f[0]);
label_491e04:
    // 0x491e04: 0x0  nop
    ctx->pc = 0x491e04u;
    // NOP
label_491e08:
    // 0x491e08: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x491e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_491e0c:
    // 0x491e0c: 0x12020020  beq         $s0, $v0, . + 4 + (0x20 << 2)
label_491e10:
    if (ctx->pc == 0x491E10u) {
        ctx->pc = 0x491E14u;
        goto label_491e14;
    }
    ctx->pc = 0x491E0Cu;
    {
        const bool branch_taken_0x491e0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x491e0c) {
            ctx->pc = 0x491E90u;
            goto label_491e90;
        }
    }
    ctx->pc = 0x491E14u;
label_491e14:
    // 0x491e14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x491e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_491e18:
    // 0x491e18: 0x1202001b  beq         $s0, $v0, . + 4 + (0x1B << 2)
label_491e1c:
    if (ctx->pc == 0x491E1Cu) {
        ctx->pc = 0x491E20u;
        goto label_491e20;
    }
    ctx->pc = 0x491E18u;
    {
        const bool branch_taken_0x491e18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x491e18) {
            ctx->pc = 0x491E88u;
            goto label_491e88;
        }
    }
    ctx->pc = 0x491E20u;
label_491e20:
    // 0x491e20: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x491e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_491e24:
    // 0x491e24: 0x12020014  beq         $s0, $v0, . + 4 + (0x14 << 2)
label_491e28:
    if (ctx->pc == 0x491E28u) {
        ctx->pc = 0x491E2Cu;
        goto label_491e2c;
    }
    ctx->pc = 0x491E24u;
    {
        const bool branch_taken_0x491e24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x491e24) {
            ctx->pc = 0x491E78u;
            goto label_491e78;
        }
    }
    ctx->pc = 0x491E2Cu;
label_491e2c:
    // 0x491e2c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x491e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_491e30:
    // 0x491e30: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_491e34:
    if (ctx->pc == 0x491E34u) {
        ctx->pc = 0x491E38u;
        goto label_491e38;
    }
    ctx->pc = 0x491E30u;
    {
        const bool branch_taken_0x491e30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x491e30) {
            ctx->pc = 0x491E40u;
            goto label_491e40;
        }
    }
    ctx->pc = 0x491E38u;
label_491e38:
    // 0x491e38: 0x1000001d  b           . + 4 + (0x1D << 2)
label_491e3c:
    if (ctx->pc == 0x491E3Cu) {
        ctx->pc = 0x491E40u;
        goto label_491e40;
    }
    ctx->pc = 0x491E38u;
    {
        const bool branch_taken_0x491e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x491e38) {
            ctx->pc = 0x491EB0u;
            goto label_491eb0;
        }
    }
    ctx->pc = 0x491E40u;
label_491e40:
    // 0x491e40: 0x8fa201c8  lw          $v0, 0x1C8($sp)
    ctx->pc = 0x491e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_491e44:
    // 0x491e44: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_491e48:
    if (ctx->pc == 0x491E48u) {
        ctx->pc = 0x491E48u;
            // 0x491e48: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x491E4Cu;
        goto label_491e4c;
    }
    ctx->pc = 0x491E44u;
    {
        const bool branch_taken_0x491e44 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x491e44) {
            ctx->pc = 0x491E48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x491E44u;
            // 0x491e48: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x491E58u;
            goto label_491e58;
        }
    }
    ctx->pc = 0x491E4Cu;
label_491e4c:
    // 0x491e4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x491e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_491e50:
    // 0x491e50: 0x10000007  b           . + 4 + (0x7 << 2)
label_491e54:
    if (ctx->pc == 0x491E54u) {
        ctx->pc = 0x491E54u;
            // 0x491e54: 0x46800760  cvt.s.w     $f29, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[29] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x491E58u;
        goto label_491e58;
    }
    ctx->pc = 0x491E50u;
    {
        const bool branch_taken_0x491e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491E50u;
            // 0x491e54: 0x46800760  cvt.s.w     $f29, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[29] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x491e50) {
            ctx->pc = 0x491E70u;
            goto label_491e70;
        }
    }
    ctx->pc = 0x491E58u;
label_491e58:
    // 0x491e58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x491e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_491e5c:
    // 0x491e5c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x491e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_491e60:
    // 0x491e60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x491e60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_491e64:
    // 0x491e64: 0x0  nop
    ctx->pc = 0x491e64u;
    // NOP
label_491e68:
    // 0x491e68: 0x46800760  cvt.s.w     $f29, $f0
    ctx->pc = 0x491e68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[29] = FPU_CVT_S_W(tmp); }
label_491e6c:
    // 0x491e6c: 0x461def40  add.s       $f29, $f29, $f29
    ctx->pc = 0x491e6cu;
    ctx->f[29] = FPU_ADD_S(ctx->f[29], ctx->f[29]);
label_491e70:
    // 0x491e70: 0x1000000f  b           . + 4 + (0xF << 2)
label_491e74:
    if (ctx->pc == 0x491E74u) {
        ctx->pc = 0x491E78u;
        goto label_491e78;
    }
    ctx->pc = 0x491E70u;
    {
        const bool branch_taken_0x491e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x491e70) {
            ctx->pc = 0x491EB0u;
            goto label_491eb0;
        }
    }
    ctx->pc = 0x491E78u;
label_491e78:
    // 0x491e78: 0xc0497dc  jal         func_125F70
label_491e7c:
    if (ctx->pc == 0x491E7Cu) {
        ctx->pc = 0x491E7Cu;
            // 0x491e7c: 0xdfa401c8  ld          $a0, 0x1C8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 456)));
        ctx->pc = 0x491E80u;
        goto label_491e80;
    }
    ctx->pc = 0x491E78u;
    SET_GPR_U32(ctx, 31, 0x491E80u);
    ctx->pc = 0x491E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x491E78u;
            // 0x491e7c: 0xdfa401c8  ld          $a0, 0x1C8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491E80u; }
        if (ctx->pc != 0x491E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491E80u; }
        if (ctx->pc != 0x491E80u) { return; }
    }
    ctx->pc = 0x491E80u;
label_491e80:
    // 0x491e80: 0x1000000b  b           . + 4 + (0xB << 2)
label_491e84:
    if (ctx->pc == 0x491E84u) {
        ctx->pc = 0x491E84u;
            // 0x491e84: 0x46000746  mov.s       $f29, $f0 (Delay Slot)
        ctx->f[29] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x491E88u;
        goto label_491e88;
    }
    ctx->pc = 0x491E80u;
    {
        const bool branch_taken_0x491e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491E80u;
            // 0x491e84: 0x46000746  mov.s       $f29, $f0 (Delay Slot)
        ctx->f[29] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x491e80) {
            ctx->pc = 0x491EB0u;
            goto label_491eb0;
        }
    }
    ctx->pc = 0x491E88u;
label_491e88:
    // 0x491e88: 0x10000009  b           . + 4 + (0x9 << 2)
label_491e8c:
    if (ctx->pc == 0x491E8Cu) {
        ctx->pc = 0x491E8Cu;
            // 0x491e8c: 0xc7bd01c8  lwc1        $f29, 0x1C8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
        ctx->pc = 0x491E90u;
        goto label_491e90;
    }
    ctx->pc = 0x491E88u;
    {
        const bool branch_taken_0x491e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491E88u;
            // 0x491e8c: 0xc7bd01c8  lwc1        $f29, 0x1C8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x491e88) {
            ctx->pc = 0x491EB0u;
            goto label_491eb0;
        }
    }
    ctx->pc = 0x491E90u;
label_491e90:
    // 0x491e90: 0x93a201c8  lbu         $v0, 0x1C8($sp)
    ctx->pc = 0x491e90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 456)));
label_491e94:
    // 0x491e94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x491e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_491e98:
    // 0x491e98: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x491e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_491e9c:
    // 0x491e9c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x491e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_491ea0:
    // 0x491ea0: 0xc124524  jal         func_491490
label_491ea4:
    if (ctx->pc == 0x491EA4u) {
        ctx->pc = 0x491EA4u;
            // 0x491ea4: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->pc = 0x491EA8u;
        goto label_491ea8;
    }
    ctx->pc = 0x491EA0u;
    SET_GPR_U32(ctx, 31, 0x491EA8u);
    ctx->pc = 0x491EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x491EA0u;
            // 0x491ea4: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x491490u;
    if (runtime->hasFunction(0x491490u)) {
        auto targetFn = runtime->lookupFunction(0x491490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491EA8u; }
        if (ctx->pc != 0x491EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00491490_0x491490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491EA8u; }
        if (ctx->pc != 0x491EA8u) { return; }
    }
    ctx->pc = 0x491EA8u;
label_491ea8:
    // 0x491ea8: 0x46000746  mov.s       $f29, $f0
    ctx->pc = 0x491ea8u;
    ctx->f[29] = FPU_MOV_S(ctx->f[0]);
label_491eac:
    // 0x491eac: 0x0  nop
    ctx->pc = 0x491eacu;
    // NOP
label_491eb0:
    // 0x491eb0: 0x461df032  c.eq.s      $f30, $f29
    ctx->pc = 0x491eb0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[30], ctx->f[29])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_491eb4:
    // 0x491eb4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_491eb8:
    if (ctx->pc == 0x491EB8u) {
        ctx->pc = 0x491EBCu;
        goto label_491ebc;
    }
    ctx->pc = 0x491EB4u;
    {
        const bool branch_taken_0x491eb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x491eb4) {
            ctx->pc = 0x491EC8u;
            goto label_491ec8;
        }
    }
    ctx->pc = 0x491EBCu;
label_491ebc:
    // 0x491ebc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x491ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_491ec0:
    // 0x491ec0: 0x100000c3  b           . + 4 + (0xC3 << 2)
label_491ec4:
    if (ctx->pc == 0x491EC4u) {
        ctx->pc = 0x491EC4u;
            // 0x491ec4: 0xa3a201e8  sb          $v0, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x491EC8u;
        goto label_491ec8;
    }
    ctx->pc = 0x491EC0u;
    {
        const bool branch_taken_0x491ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491EC0u;
            // 0x491ec4: 0xa3a201e8  sb          $v0, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491ec0) {
            ctx->pc = 0x4921D0u;
            goto label_4921d0;
        }
    }
    ctx->pc = 0x491EC8u;
label_491ec8:
    // 0x491ec8: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_491ecc:
    if (ctx->pc == 0x491ECCu) {
        ctx->pc = 0x491ECCu;
            // 0x491ecc: 0xa3a001e8  sb          $zero, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x491ED0u;
        goto label_491ed0;
    }
    ctx->pc = 0x491EC8u;
    {
        const bool branch_taken_0x491ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491EC8u;
            // 0x491ecc: 0xa3a001e8  sb          $zero, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491ec8) {
            ctx->pc = 0x4921D0u;
            goto label_4921d0;
        }
    }
    ctx->pc = 0x491ED0u;
label_491ed0:
    // 0x491ed0: 0x2c61000a  sltiu       $at, $v1, 0xA
    ctx->pc = 0x491ed0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_491ed4:
    // 0x491ed4: 0x102000be  beqz        $at, . + 4 + (0xBE << 2)
label_491ed8:
    if (ctx->pc == 0x491ED8u) {
        ctx->pc = 0x491EDCu;
        goto label_491edc;
    }
    ctx->pc = 0x491ED4u;
    {
        const bool branch_taken_0x491ed4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x491ed4) {
            ctx->pc = 0x4921D0u;
            goto label_4921d0;
        }
    }
    ctx->pc = 0x491EDCu;
label_491edc:
    // 0x491edc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x491edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_491ee0:
    // 0x491ee0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x491ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_491ee4:
    // 0x491ee4: 0x246308c0  addiu       $v1, $v1, 0x8C0
    ctx->pc = 0x491ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2240));
label_491ee8:
    // 0x491ee8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x491ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_491eec:
    // 0x491eec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x491eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_491ef0:
    // 0x491ef0: 0x400008  jr          $v0
label_491ef4:
    if (ctx->pc == 0x491EF4u) {
        ctx->pc = 0x491EF8u;
        goto label_491ef8;
    }
    ctx->pc = 0x491EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x491EF8u: goto label_491ef8;
            case 0x491F20u: goto label_491f20;
            case 0x491F48u: goto label_491f48;
            case 0x492108u: goto label_492108;
            case 0x492130u: goto label_492130;
            case 0x492158u: goto label_492158;
            case 0x492180u: goto label_492180;
            case 0x4921A8u: goto label_4921a8;
            case 0x4921D0u: goto label_4921d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x491EF8u;
label_491ef8:
    // 0x491ef8: 0x8fa501c8  lw          $a1, 0x1C8($sp)
    ctx->pc = 0x491ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_491efc:
    // 0x491efc: 0xc04af96  jal         func_12BE58
label_491f00:
    if (ctx->pc == 0x491F00u) {
        ctx->pc = 0x491F00u;
            // 0x491f00: 0x8fa401f8  lw          $a0, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->pc = 0x491F04u;
        goto label_491f04;
    }
    ctx->pc = 0x491EFCu;
    SET_GPR_U32(ctx, 31, 0x491F04u);
    ctx->pc = 0x491F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x491EFCu;
            // 0x491f00: 0x8fa401f8  lw          $a0, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491F04u; }
        if (ctx->pc != 0x491F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491F04u; }
        if (ctx->pc != 0x491F04u) { return; }
    }
    ctx->pc = 0x491F04u;
label_491f04:
    // 0x491f04: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_491f08:
    if (ctx->pc == 0x491F08u) {
        ctx->pc = 0x491F0Cu;
        goto label_491f0c;
    }
    ctx->pc = 0x491F04u;
    {
        const bool branch_taken_0x491f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x491f04) {
            ctx->pc = 0x491F18u;
            goto label_491f18;
        }
    }
    ctx->pc = 0x491F0Cu;
label_491f0c:
    // 0x491f0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x491f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_491f10:
    // 0x491f10: 0x100000af  b           . + 4 + (0xAF << 2)
label_491f14:
    if (ctx->pc == 0x491F14u) {
        ctx->pc = 0x491F14u;
            // 0x491f14: 0xa3a201e8  sb          $v0, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x491F18u;
        goto label_491f18;
    }
    ctx->pc = 0x491F10u;
    {
        const bool branch_taken_0x491f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491F10u;
            // 0x491f14: 0xa3a201e8  sb          $v0, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491f10) {
            ctx->pc = 0x4921D0u;
            goto label_4921d0;
        }
    }
    ctx->pc = 0x491F18u;
label_491f18:
    // 0x491f18: 0x100000ad  b           . + 4 + (0xAD << 2)
label_491f1c:
    if (ctx->pc == 0x491F1Cu) {
        ctx->pc = 0x491F1Cu;
            // 0x491f1c: 0xa3a001e8  sb          $zero, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x491F20u;
        goto label_491f20;
    }
    ctx->pc = 0x491F18u;
    {
        const bool branch_taken_0x491f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491F18u;
            // 0x491f1c: 0xa3a001e8  sb          $zero, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491f18) {
            ctx->pc = 0x4921D0u;
            goto label_4921d0;
        }
    }
    ctx->pc = 0x491F20u;
label_491f20:
    // 0x491f20: 0xc7a101f8  lwc1        $f1, 0x1F8($sp)
    ctx->pc = 0x491f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_491f24:
    // 0x491f24: 0xc7a001c8  lwc1        $f0, 0x1C8($sp)
    ctx->pc = 0x491f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_491f28:
    // 0x491f28: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x491f28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_491f2c:
    // 0x491f2c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_491f30:
    if (ctx->pc == 0x491F30u) {
        ctx->pc = 0x491F34u;
        goto label_491f34;
    }
    ctx->pc = 0x491F2Cu;
    {
        const bool branch_taken_0x491f2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x491f2c) {
            ctx->pc = 0x491F40u;
            goto label_491f40;
        }
    }
    ctx->pc = 0x491F34u;
label_491f34:
    // 0x491f34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x491f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_491f38:
    // 0x491f38: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_491f3c:
    if (ctx->pc == 0x491F3Cu) {
        ctx->pc = 0x491F3Cu;
            // 0x491f3c: 0xa3a201e8  sb          $v0, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x491F40u;
        goto label_491f40;
    }
    ctx->pc = 0x491F38u;
    {
        const bool branch_taken_0x491f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491F38u;
            // 0x491f3c: 0xa3a201e8  sb          $v0, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491f38) {
            ctx->pc = 0x4921D0u;
            goto label_4921d0;
        }
    }
    ctx->pc = 0x491F40u;
label_491f40:
    // 0x491f40: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_491f44:
    if (ctx->pc == 0x491F44u) {
        ctx->pc = 0x491F44u;
            // 0x491f44: 0xa3a001e8  sb          $zero, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x491F48u;
        goto label_491f48;
    }
    ctx->pc = 0x491F40u;
    {
        const bool branch_taken_0x491f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491F40u;
            // 0x491f44: 0xa3a001e8  sb          $zero, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491f40) {
            ctx->pc = 0x4921D0u;
            goto label_4921d0;
        }
    }
    ctx->pc = 0x491F48u;
label_491f48:
    // 0x491f48: 0x93a301f8  lbu         $v1, 0x1F8($sp)
    ctx->pc = 0x491f48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 504)));
label_491f4c:
    // 0x491f4c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x491f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_491f50:
    // 0x491f50: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x491f50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_491f54:
    // 0x491f54: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x491f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_491f58:
    // 0x491f58: 0x24640058  addiu       $a0, $v1, 0x58
    ctx->pc = 0x491f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_491f5c:
    // 0x491f5c: 0x90630058  lbu         $v1, 0x58($v1)
    ctx->pc = 0x491f5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 88)));
label_491f60:
    // 0x491f60: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
label_491f64:
    if (ctx->pc == 0x491F64u) {
        ctx->pc = 0x491F68u;
        goto label_491f68;
    }
    ctx->pc = 0x491F60u;
    {
        const bool branch_taken_0x491f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x491f60) {
            ctx->pc = 0x491FE8u;
            goto label_491fe8;
        }
    }
    ctx->pc = 0x491F68u;
label_491f68:
    // 0x491f68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x491f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_491f6c:
    // 0x491f6c: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
label_491f70:
    if (ctx->pc == 0x491F70u) {
        ctx->pc = 0x491F74u;
        goto label_491f74;
    }
    ctx->pc = 0x491F6Cu;
    {
        const bool branch_taken_0x491f6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x491f6c) {
            ctx->pc = 0x491FE0u;
            goto label_491fe0;
        }
    }
    ctx->pc = 0x491F74u;
label_491f74:
    // 0x491f74: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x491f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_491f78:
    // 0x491f78: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_491f7c:
    if (ctx->pc == 0x491F7Cu) {
        ctx->pc = 0x491F80u;
        goto label_491f80;
    }
    ctx->pc = 0x491F78u;
    {
        const bool branch_taken_0x491f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x491f78) {
            ctx->pc = 0x491FD0u;
            goto label_491fd0;
        }
    }
    ctx->pc = 0x491F80u;
label_491f80:
    // 0x491f80: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x491f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_491f84:
    // 0x491f84: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_491f88:
    if (ctx->pc == 0x491F88u) {
        ctx->pc = 0x491F8Cu;
        goto label_491f8c;
    }
    ctx->pc = 0x491F84u;
    {
        const bool branch_taken_0x491f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x491f84) {
            ctx->pc = 0x491F98u;
            goto label_491f98;
        }
    }
    ctx->pc = 0x491F8Cu;
label_491f8c:
    // 0x491f8c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_491f90:
    if (ctx->pc == 0x491F90u) {
        ctx->pc = 0x491F94u;
        goto label_491f94;
    }
    ctx->pc = 0x491F8Cu;
    {
        const bool branch_taken_0x491f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x491f8c) {
            ctx->pc = 0x492008u;
            goto label_492008;
        }
    }
    ctx->pc = 0x491F94u;
label_491f94:
    // 0x491f94: 0x0  nop
    ctx->pc = 0x491f94u;
    // NOP
label_491f98:
    // 0x491f98: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x491f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_491f9c:
    // 0x491f9c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_491fa0:
    if (ctx->pc == 0x491FA0u) {
        ctx->pc = 0x491FA0u;
            // 0x491fa0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x491FA4u;
        goto label_491fa4;
    }
    ctx->pc = 0x491F9Cu;
    {
        const bool branch_taken_0x491f9c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x491f9c) {
            ctx->pc = 0x491FA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x491F9Cu;
            // 0x491fa0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x491FB0u;
            goto label_491fb0;
        }
    }
    ctx->pc = 0x491FA4u;
label_491fa4:
    // 0x491fa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x491fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_491fa8:
    // 0x491fa8: 0x10000007  b           . + 4 + (0x7 << 2)
label_491fac:
    if (ctx->pc == 0x491FACu) {
        ctx->pc = 0x491FACu;
            // 0x491fac: 0x46800720  cvt.s.w     $f28, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[28] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x491FB0u;
        goto label_491fb0;
    }
    ctx->pc = 0x491FA8u;
    {
        const bool branch_taken_0x491fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491FA8u;
            // 0x491fac: 0x46800720  cvt.s.w     $f28, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[28] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x491fa8) {
            ctx->pc = 0x491FC8u;
            goto label_491fc8;
        }
    }
    ctx->pc = 0x491FB0u;
label_491fb0:
    // 0x491fb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x491fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_491fb4:
    // 0x491fb4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x491fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_491fb8:
    // 0x491fb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x491fb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_491fbc:
    // 0x491fbc: 0x0  nop
    ctx->pc = 0x491fbcu;
    // NOP
label_491fc0:
    // 0x491fc0: 0x46800720  cvt.s.w     $f28, $f0
    ctx->pc = 0x491fc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[28] = FPU_CVT_S_W(tmp); }
label_491fc4:
    // 0x491fc4: 0x461ce700  add.s       $f28, $f28, $f28
    ctx->pc = 0x491fc4u;
    ctx->f[28] = FPU_ADD_S(ctx->f[28], ctx->f[28]);
label_491fc8:
    // 0x491fc8: 0x1000000f  b           . + 4 + (0xF << 2)
label_491fcc:
    if (ctx->pc == 0x491FCCu) {
        ctx->pc = 0x491FD0u;
        goto label_491fd0;
    }
    ctx->pc = 0x491FC8u;
    {
        const bool branch_taken_0x491fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x491fc8) {
            ctx->pc = 0x492008u;
            goto label_492008;
        }
    }
    ctx->pc = 0x491FD0u;
label_491fd0:
    // 0x491fd0: 0xc0497dc  jal         func_125F70
label_491fd4:
    if (ctx->pc == 0x491FD4u) {
        ctx->pc = 0x491FD4u;
            // 0x491fd4: 0xdc840008  ld          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->pc = 0x491FD8u;
        goto label_491fd8;
    }
    ctx->pc = 0x491FD0u;
    SET_GPR_U32(ctx, 31, 0x491FD8u);
    ctx->pc = 0x491FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x491FD0u;
            // 0x491fd4: 0xdc840008  ld          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491FD8u; }
        if (ctx->pc != 0x491FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491FD8u; }
        if (ctx->pc != 0x491FD8u) { return; }
    }
    ctx->pc = 0x491FD8u;
label_491fd8:
    // 0x491fd8: 0x1000000b  b           . + 4 + (0xB << 2)
label_491fdc:
    if (ctx->pc == 0x491FDCu) {
        ctx->pc = 0x491FDCu;
            // 0x491fdc: 0x46000706  mov.s       $f28, $f0 (Delay Slot)
        ctx->f[28] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x491FE0u;
        goto label_491fe0;
    }
    ctx->pc = 0x491FD8u;
    {
        const bool branch_taken_0x491fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491FD8u;
            // 0x491fdc: 0x46000706  mov.s       $f28, $f0 (Delay Slot)
        ctx->f[28] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x491fd8) {
            ctx->pc = 0x492008u;
            goto label_492008;
        }
    }
    ctx->pc = 0x491FE0u;
label_491fe0:
    // 0x491fe0: 0x10000009  b           . + 4 + (0x9 << 2)
label_491fe4:
    if (ctx->pc == 0x491FE4u) {
        ctx->pc = 0x491FE4u;
            // 0x491fe4: 0xc49c0008  lwc1        $f28, 0x8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
        ctx->pc = 0x491FE8u;
        goto label_491fe8;
    }
    ctx->pc = 0x491FE0u;
    {
        const bool branch_taken_0x491fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491FE0u;
            // 0x491fe4: 0xc49c0008  lwc1        $f28, 0x8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x491fe0) {
            ctx->pc = 0x492008u;
            goto label_492008;
        }
    }
    ctx->pc = 0x491FE8u;
label_491fe8:
    // 0x491fe8: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x491fe8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
label_491fec:
    // 0x491fec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x491fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_491ff0:
    // 0x491ff0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x491ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_491ff4:
    // 0x491ff4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x491ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_491ff8:
    // 0x491ff8: 0xc124524  jal         func_491490
label_491ffc:
    if (ctx->pc == 0x491FFCu) {
        ctx->pc = 0x491FFCu;
            // 0x491ffc: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->pc = 0x492000u;
        goto label_492000;
    }
    ctx->pc = 0x491FF8u;
    SET_GPR_U32(ctx, 31, 0x492000u);
    ctx->pc = 0x491FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x491FF8u;
            // 0x491ffc: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x491490u;
    if (runtime->hasFunction(0x491490u)) {
        auto targetFn = runtime->lookupFunction(0x491490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492000u; }
        if (ctx->pc != 0x492000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00491490_0x491490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492000u; }
        if (ctx->pc != 0x492000u) { return; }
    }
    ctx->pc = 0x492000u;
label_492000:
    // 0x492000: 0x46000706  mov.s       $f28, $f0
    ctx->pc = 0x492000u;
    ctx->f[28] = FPU_MOV_S(ctx->f[0]);
label_492004:
    // 0x492004: 0x0  nop
    ctx->pc = 0x492004u;
    // NOP
label_492008:
    // 0x492008: 0x93a301c8  lbu         $v1, 0x1C8($sp)
    ctx->pc = 0x492008u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 456)));
label_49200c:
    // 0x49200c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x49200cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_492010:
    // 0x492010: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x492010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_492014:
    // 0x492014: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x492014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_492018:
    // 0x492018: 0x24640058  addiu       $a0, $v1, 0x58
    ctx->pc = 0x492018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_49201c:
    // 0x49201c: 0x90630058  lbu         $v1, 0x58($v1)
    ctx->pc = 0x49201cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 88)));
label_492020:
    // 0x492020: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
label_492024:
    if (ctx->pc == 0x492024u) {
        ctx->pc = 0x492028u;
        goto label_492028;
    }
    ctx->pc = 0x492020u;
    {
        const bool branch_taken_0x492020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x492020) {
            ctx->pc = 0x4920C0u;
            goto label_4920c0;
        }
    }
    ctx->pc = 0x492028u;
label_492028:
    // 0x492028: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49202c:
    // 0x49202c: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_492030:
    if (ctx->pc == 0x492030u) {
        ctx->pc = 0x492034u;
        goto label_492034;
    }
    ctx->pc = 0x49202Cu;
    {
        const bool branch_taken_0x49202c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x49202c) {
            ctx->pc = 0x4920B0u;
            goto label_4920b0;
        }
    }
    ctx->pc = 0x492034u;
label_492034:
    // 0x492034: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x492034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_492038:
    // 0x492038: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_49203c:
    if (ctx->pc == 0x49203Cu) {
        ctx->pc = 0x492040u;
        goto label_492040;
    }
    ctx->pc = 0x492038u;
    {
        const bool branch_taken_0x492038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x492038) {
            ctx->pc = 0x4920A0u;
            goto label_4920a0;
        }
    }
    ctx->pc = 0x492040u;
label_492040:
    // 0x492040: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x492040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_492044:
    // 0x492044: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_492048:
    if (ctx->pc == 0x492048u) {
        ctx->pc = 0x49204Cu;
        goto label_49204c;
    }
    ctx->pc = 0x492044u;
    {
        const bool branch_taken_0x492044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x492044) {
            ctx->pc = 0x492058u;
            goto label_492058;
        }
    }
    ctx->pc = 0x49204Cu;
label_49204c:
    // 0x49204c: 0x10000024  b           . + 4 + (0x24 << 2)
label_492050:
    if (ctx->pc == 0x492050u) {
        ctx->pc = 0x492054u;
        goto label_492054;
    }
    ctx->pc = 0x49204Cu;
    {
        const bool branch_taken_0x49204c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49204c) {
            ctx->pc = 0x4920E0u;
            goto label_4920e0;
        }
    }
    ctx->pc = 0x492054u;
label_492054:
    // 0x492054: 0x0  nop
    ctx->pc = 0x492054u;
    // NOP
label_492058:
    // 0x492058: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x492058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_49205c:
    // 0x49205c: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
label_492060:
    if (ctx->pc == 0x492060u) {
        ctx->pc = 0x492060u;
            // 0x492060: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x492064u;
        goto label_492064;
    }
    ctx->pc = 0x49205Cu;
    {
        const bool branch_taken_0x49205c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x49205c) {
            ctx->pc = 0x492060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49205Cu;
            // 0x492060: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x492078u;
            goto label_492078;
        }
    }
    ctx->pc = 0x492064u;
label_492064:
    // 0x492064: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x492064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_492068:
    // 0x492068: 0x0  nop
    ctx->pc = 0x492068u;
    // NOP
label_49206c:
    // 0x49206c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x49206cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_492070:
    // 0x492070: 0x10000009  b           . + 4 + (0x9 << 2)
label_492074:
    if (ctx->pc == 0x492074u) {
        ctx->pc = 0x492074u;
            // 0x492074: 0xe7a000dc  swc1        $f0, 0xDC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
        ctx->pc = 0x492078u;
        goto label_492078;
    }
    ctx->pc = 0x492070u;
    {
        const bool branch_taken_0x492070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492070u;
            // 0x492074: 0xe7a000dc  swc1        $f0, 0xDC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x492070) {
            ctx->pc = 0x492098u;
            goto label_492098;
        }
    }
    ctx->pc = 0x492078u;
label_492078:
    // 0x492078: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x492078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_49207c:
    // 0x49207c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49207cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_492080:
    // 0x492080: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x492080u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_492084:
    // 0x492084: 0x0  nop
    ctx->pc = 0x492084u;
    // NOP
label_492088:
    // 0x492088: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x492088u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_49208c:
    // 0x49208c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x49208cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_492090:
    // 0x492090: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x492090u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_492094:
    // 0x492094: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x492094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_492098:
    // 0x492098: 0x10000011  b           . + 4 + (0x11 << 2)
label_49209c:
    if (ctx->pc == 0x49209Cu) {
        ctx->pc = 0x4920A0u;
        goto label_4920a0;
    }
    ctx->pc = 0x492098u;
    {
        const bool branch_taken_0x492098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492098) {
            ctx->pc = 0x4920E0u;
            goto label_4920e0;
        }
    }
    ctx->pc = 0x4920A0u;
label_4920a0:
    // 0x4920a0: 0xc0497dc  jal         func_125F70
label_4920a4:
    if (ctx->pc == 0x4920A4u) {
        ctx->pc = 0x4920A4u;
            // 0x4920a4: 0xdc840008  ld          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->pc = 0x4920A8u;
        goto label_4920a8;
    }
    ctx->pc = 0x4920A0u;
    SET_GPR_U32(ctx, 31, 0x4920A8u);
    ctx->pc = 0x4920A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4920A0u;
            // 0x4920a4: 0xdc840008  ld          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4920A8u; }
        if (ctx->pc != 0x4920A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4920A8u; }
        if (ctx->pc != 0x4920A8u) { return; }
    }
    ctx->pc = 0x4920A8u;
label_4920a8:
    // 0x4920a8: 0x1000000d  b           . + 4 + (0xD << 2)
label_4920ac:
    if (ctx->pc == 0x4920ACu) {
        ctx->pc = 0x4920ACu;
            // 0x4920ac: 0xe7a000dc  swc1        $f0, 0xDC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
        ctx->pc = 0x4920B0u;
        goto label_4920b0;
    }
    ctx->pc = 0x4920A8u;
    {
        const bool branch_taken_0x4920a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4920ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4920A8u;
            // 0x4920ac: 0xe7a000dc  swc1        $f0, 0xDC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4920a8) {
            ctx->pc = 0x4920E0u;
            goto label_4920e0;
        }
    }
    ctx->pc = 0x4920B0u;
label_4920b0:
    // 0x4920b0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x4920b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4920b4:
    // 0x4920b4: 0x1000000a  b           . + 4 + (0xA << 2)
label_4920b8:
    if (ctx->pc == 0x4920B8u) {
        ctx->pc = 0x4920B8u;
            // 0x4920b8: 0xe7a000dc  swc1        $f0, 0xDC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
        ctx->pc = 0x4920BCu;
        goto label_4920bc;
    }
    ctx->pc = 0x4920B4u;
    {
        const bool branch_taken_0x4920b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4920B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4920B4u;
            // 0x4920b8: 0xe7a000dc  swc1        $f0, 0xDC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4920b4) {
            ctx->pc = 0x4920E0u;
            goto label_4920e0;
        }
    }
    ctx->pc = 0x4920BCu;
label_4920bc:
    // 0x4920bc: 0x0  nop
    ctx->pc = 0x4920bcu;
    // NOP
label_4920c0:
    // 0x4920c0: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x4920c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
label_4920c4:
    // 0x4920c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4920c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4920c8:
    // 0x4920c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4920c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4920cc:
    // 0x4920cc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x4920ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_4920d0:
    // 0x4920d0: 0xc124524  jal         func_491490
label_4920d4:
    if (ctx->pc == 0x4920D4u) {
        ctx->pc = 0x4920D4u;
            // 0x4920d4: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->pc = 0x4920D8u;
        goto label_4920d8;
    }
    ctx->pc = 0x4920D0u;
    SET_GPR_U32(ctx, 31, 0x4920D8u);
    ctx->pc = 0x4920D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4920D0u;
            // 0x4920d4: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x491490u;
    if (runtime->hasFunction(0x491490u)) {
        auto targetFn = runtime->lookupFunction(0x491490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4920D8u; }
        if (ctx->pc != 0x4920D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00491490_0x491490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4920D8u; }
        if (ctx->pc != 0x4920D8u) { return; }
    }
    ctx->pc = 0x4920D8u;
label_4920d8:
    // 0x4920d8: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x4920d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_4920dc:
    // 0x4920dc: 0x0  nop
    ctx->pc = 0x4920dcu;
    // NOP
label_4920e0:
    // 0x4920e0: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x4920e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4920e4:
    // 0x4920e4: 0x4600e032  c.eq.s      $f28, $f0
    ctx->pc = 0x4920e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[28], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4920e8:
    // 0x4920e8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_4920ec:
    if (ctx->pc == 0x4920ECu) {
        ctx->pc = 0x4920F0u;
        goto label_4920f0;
    }
    ctx->pc = 0x4920E8u;
    {
        const bool branch_taken_0x4920e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4920e8) {
            ctx->pc = 0x492100u;
            goto label_492100;
        }
    }
    ctx->pc = 0x4920F0u;
label_4920f0:
    // 0x4920f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4920f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4920f4:
    // 0x4920f4: 0x10000036  b           . + 4 + (0x36 << 2)
label_4920f8:
    if (ctx->pc == 0x4920F8u) {
        ctx->pc = 0x4920F8u;
            // 0x4920f8: 0xa3a201e8  sb          $v0, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4920FCu;
        goto label_4920fc;
    }
    ctx->pc = 0x4920F4u;
    {
        const bool branch_taken_0x4920f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4920F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4920F4u;
            // 0x4920f8: 0xa3a201e8  sb          $v0, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4920f4) {
            ctx->pc = 0x4921D0u;
            goto label_4921d0;
        }
    }
    ctx->pc = 0x4920FCu;
label_4920fc:
    // 0x4920fc: 0x0  nop
    ctx->pc = 0x4920fcu;
    // NOP
label_492100:
    // 0x492100: 0x10000033  b           . + 4 + (0x33 << 2)
label_492104:
    if (ctx->pc == 0x492104u) {
        ctx->pc = 0x492104u;
            // 0x492104: 0xa3a001e8  sb          $zero, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x492108u;
        goto label_492108;
    }
    ctx->pc = 0x492100u;
    {
        const bool branch_taken_0x492100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492100u;
            // 0x492104: 0xa3a001e8  sb          $zero, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492100) {
            ctx->pc = 0x4921D0u;
            goto label_4921d0;
        }
    }
    ctx->pc = 0x492108u;
label_492108:
    // 0x492108: 0x93a301f8  lbu         $v1, 0x1F8($sp)
    ctx->pc = 0x492108u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 504)));
label_49210c:
    // 0x49210c: 0x93a201c8  lbu         $v0, 0x1C8($sp)
    ctx->pc = 0x49210cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 456)));
label_492110:
    // 0x492110: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_492114:
    if (ctx->pc == 0x492114u) {
        ctx->pc = 0x492118u;
        goto label_492118;
    }
    ctx->pc = 0x492110u;
    {
        const bool branch_taken_0x492110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x492110) {
            ctx->pc = 0x492128u;
            goto label_492128;
        }
    }
    ctx->pc = 0x492118u;
label_492118:
    // 0x492118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49211c:
    // 0x49211c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_492120:
    if (ctx->pc == 0x492120u) {
        ctx->pc = 0x492120u;
            // 0x492120: 0xa3a201e8  sb          $v0, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x492124u;
        goto label_492124;
    }
    ctx->pc = 0x49211Cu;
    {
        const bool branch_taken_0x49211c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49211Cu;
            // 0x492120: 0xa3a201e8  sb          $v0, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49211c) {
            ctx->pc = 0x4921D0u;
            goto label_4921d0;
        }
    }
    ctx->pc = 0x492124u;
label_492124:
    // 0x492124: 0x0  nop
    ctx->pc = 0x492124u;
    // NOP
label_492128:
    // 0x492128: 0x10000029  b           . + 4 + (0x29 << 2)
label_49212c:
    if (ctx->pc == 0x49212Cu) {
        ctx->pc = 0x49212Cu;
            // 0x49212c: 0xa3a001e8  sb          $zero, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x492130u;
        goto label_492130;
    }
    ctx->pc = 0x492128u;
    {
        const bool branch_taken_0x492128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49212Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492128u;
            // 0x49212c: 0xa3a001e8  sb          $zero, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492128) {
            ctx->pc = 0x4921D0u;
            goto label_4921d0;
        }
    }
    ctx->pc = 0x492130u;
label_492130:
    // 0x492130: 0xdfa501c8  ld          $a1, 0x1C8($sp)
    ctx->pc = 0x492130u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 456)));
label_492134:
    // 0x492134: 0xc040228  jal         func_1008A0
label_492138:
    if (ctx->pc == 0x492138u) {
        ctx->pc = 0x492138u;
            // 0x492138: 0xdfa401f8  ld          $a0, 0x1F8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->pc = 0x49213Cu;
        goto label_49213c;
    }
    ctx->pc = 0x492134u;
    SET_GPR_U32(ctx, 31, 0x49213Cu);
    ctx->pc = 0x492138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492134u;
            // 0x492138: 0xdfa401f8  ld          $a0, 0x1F8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1008A0u;
    if (runtime->hasFunction(0x1008A0u)) {
        auto targetFn = runtime->lookupFunction(0x1008A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49213Cu; }
        if (ctx->pc != 0x49213Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001008A0_0x1008a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49213Cu; }
        if (ctx->pc != 0x49213Cu) { return; }
    }
    ctx->pc = 0x49213Cu;
label_49213c:
    // 0x49213c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_492140:
    if (ctx->pc == 0x492140u) {
        ctx->pc = 0x492144u;
        goto label_492144;
    }
    ctx->pc = 0x49213Cu;
    {
        const bool branch_taken_0x49213c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49213c) {
            ctx->pc = 0x492150u;
            goto label_492150;
        }
    }
    ctx->pc = 0x492144u;
label_492144:
    // 0x492144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492148:
    // 0x492148: 0x10000021  b           . + 4 + (0x21 << 2)
label_49214c:
    if (ctx->pc == 0x49214Cu) {
        ctx->pc = 0x49214Cu;
            // 0x49214c: 0xa3a201e8  sb          $v0, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x492150u;
        goto label_492150;
    }
    ctx->pc = 0x492148u;
    {
        const bool branch_taken_0x492148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49214Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492148u;
            // 0x49214c: 0xa3a201e8  sb          $v0, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492148) {
            ctx->pc = 0x4921D0u;
            goto label_4921d0;
        }
    }
    ctx->pc = 0x492150u;
label_492150:
    // 0x492150: 0x1000001f  b           . + 4 + (0x1F << 2)
label_492154:
    if (ctx->pc == 0x492154u) {
        ctx->pc = 0x492154u;
            // 0x492154: 0xa3a001e8  sb          $zero, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x492158u;
        goto label_492158;
    }
    ctx->pc = 0x492150u;
    {
        const bool branch_taken_0x492150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492150u;
            // 0x492154: 0xa3a001e8  sb          $zero, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492150) {
            ctx->pc = 0x4921D0u;
            goto label_4921d0;
        }
    }
    ctx->pc = 0x492158u;
label_492158:
    // 0x492158: 0x8fa301f8  lw          $v1, 0x1F8($sp)
    ctx->pc = 0x492158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_49215c:
    // 0x49215c: 0x8fa201c8  lw          $v0, 0x1C8($sp)
    ctx->pc = 0x49215cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_492160:
    // 0x492160: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_492164:
    if (ctx->pc == 0x492164u) {
        ctx->pc = 0x492168u;
        goto label_492168;
    }
    ctx->pc = 0x492160u;
    {
        const bool branch_taken_0x492160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x492160) {
            ctx->pc = 0x492178u;
            goto label_492178;
        }
    }
    ctx->pc = 0x492168u;
label_492168:
    // 0x492168: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49216c:
    // 0x49216c: 0x10000018  b           . + 4 + (0x18 << 2)
label_492170:
    if (ctx->pc == 0x492170u) {
        ctx->pc = 0x492170u;
            // 0x492170: 0xa3a201e8  sb          $v0, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x492174u;
        goto label_492174;
    }
    ctx->pc = 0x49216Cu;
    {
        const bool branch_taken_0x49216c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49216Cu;
            // 0x492170: 0xa3a201e8  sb          $v0, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49216c) {
            ctx->pc = 0x4921D0u;
            goto label_4921d0;
        }
    }
    ctx->pc = 0x492174u;
label_492174:
    // 0x492174: 0x0  nop
    ctx->pc = 0x492174u;
    // NOP
label_492178:
    // 0x492178: 0x10000015  b           . + 4 + (0x15 << 2)
label_49217c:
    if (ctx->pc == 0x49217Cu) {
        ctx->pc = 0x49217Cu;
            // 0x49217c: 0xa3a001e8  sb          $zero, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x492180u;
        goto label_492180;
    }
    ctx->pc = 0x492178u;
    {
        const bool branch_taken_0x492178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49217Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492178u;
            // 0x49217c: 0xa3a001e8  sb          $zero, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492178) {
            ctx->pc = 0x4921D0u;
            goto label_4921d0;
        }
    }
    ctx->pc = 0x492180u;
label_492180:
    // 0x492180: 0x93a301f8  lbu         $v1, 0x1F8($sp)
    ctx->pc = 0x492180u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 504)));
label_492184:
    // 0x492184: 0x93a201c8  lbu         $v0, 0x1C8($sp)
    ctx->pc = 0x492184u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 456)));
label_492188:
    // 0x492188: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_49218c:
    if (ctx->pc == 0x49218Cu) {
        ctx->pc = 0x492190u;
        goto label_492190;
    }
    ctx->pc = 0x492188u;
    {
        const bool branch_taken_0x492188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x492188) {
            ctx->pc = 0x4921A0u;
            goto label_4921a0;
        }
    }
    ctx->pc = 0x492190u;
label_492190:
    // 0x492190: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492194:
    // 0x492194: 0x1000000e  b           . + 4 + (0xE << 2)
label_492198:
    if (ctx->pc == 0x492198u) {
        ctx->pc = 0x492198u;
            // 0x492198: 0xa3a201e8  sb          $v0, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x49219Cu;
        goto label_49219c;
    }
    ctx->pc = 0x492194u;
    {
        const bool branch_taken_0x492194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492194u;
            // 0x492198: 0xa3a201e8  sb          $v0, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492194) {
            ctx->pc = 0x4921D0u;
            goto label_4921d0;
        }
    }
    ctx->pc = 0x49219Cu;
label_49219c:
    // 0x49219c: 0x0  nop
    ctx->pc = 0x49219cu;
    // NOP
label_4921a0:
    // 0x4921a0: 0x1000000b  b           . + 4 + (0xB << 2)
label_4921a4:
    if (ctx->pc == 0x4921A4u) {
        ctx->pc = 0x4921A4u;
            // 0x4921a4: 0xa3a001e8  sb          $zero, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4921A8u;
        goto label_4921a8;
    }
    ctx->pc = 0x4921A0u;
    {
        const bool branch_taken_0x4921a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4921A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4921A0u;
            // 0x4921a4: 0xa3a001e8  sb          $zero, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4921a0) {
            ctx->pc = 0x4921D0u;
            goto label_4921d0;
        }
    }
    ctx->pc = 0x4921A8u;
label_4921a8:
    // 0x4921a8: 0x97a301f8  lhu         $v1, 0x1F8($sp)
    ctx->pc = 0x4921a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 504)));
label_4921ac:
    // 0x4921ac: 0x97a201c8  lhu         $v0, 0x1C8($sp)
    ctx->pc = 0x4921acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 456)));
label_4921b0:
    // 0x4921b0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_4921b4:
    if (ctx->pc == 0x4921B4u) {
        ctx->pc = 0x4921B8u;
        goto label_4921b8;
    }
    ctx->pc = 0x4921B0u;
    {
        const bool branch_taken_0x4921b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4921b0) {
            ctx->pc = 0x4921C8u;
            goto label_4921c8;
        }
    }
    ctx->pc = 0x4921B8u;
label_4921b8:
    // 0x4921b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4921b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4921bc:
    // 0x4921bc: 0x10000004  b           . + 4 + (0x4 << 2)
label_4921c0:
    if (ctx->pc == 0x4921C0u) {
        ctx->pc = 0x4921C0u;
            // 0x4921c0: 0xa3a201e8  sb          $v0, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4921C4u;
        goto label_4921c4;
    }
    ctx->pc = 0x4921BCu;
    {
        const bool branch_taken_0x4921bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4921C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4921BCu;
            // 0x4921c0: 0xa3a201e8  sb          $v0, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4921bc) {
            ctx->pc = 0x4921D0u;
            goto label_4921d0;
        }
    }
    ctx->pc = 0x4921C4u;
label_4921c4:
    // 0x4921c4: 0x0  nop
    ctx->pc = 0x4921c4u;
    // NOP
label_4921c8:
    // 0x4921c8: 0xa3a001e8  sb          $zero, 0x1E8($sp)
    ctx->pc = 0x4921c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 0));
label_4921cc:
    // 0x4921cc: 0x0  nop
    ctx->pc = 0x4921ccu;
    // NOP
label_4921d0:
    // 0x4921d0: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x4921d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_4921d4:
    // 0x4921d4: 0x8e820050  lw          $v0, 0x50($s4)
    ctx->pc = 0x4921d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_4921d8:
    // 0x4921d8: 0x26840048  addiu       $a0, $s4, 0x48
    ctx->pc = 0x4921d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_4921dc:
    // 0x4921dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4921dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4921e0:
    // 0x4921e0: 0x27a701e0  addiu       $a3, $sp, 0x1E0
    ctx->pc = 0x4921e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_4921e4:
    // 0x4921e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4921e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4921e8:
    // 0x4921e8: 0xc125914  jal         func_496450
label_4921ec:
    if (ctx->pc == 0x4921ECu) {
        ctx->pc = 0x4921ECu;
            // 0x4921ec: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4921F0u;
        goto label_4921f0;
    }
    ctx->pc = 0x4921E8u;
    SET_GPR_U32(ctx, 31, 0x4921F0u);
    ctx->pc = 0x4921ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4921E8u;
            // 0x4921ec: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496450u;
    if (runtime->hasFunction(0x496450u)) {
        auto targetFn = runtime->lookupFunction(0x496450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4921F0u; }
        if (ctx->pc != 0x4921F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496450_0x496450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4921F0u; }
        if (ctx->pc != 0x4921F0u) { return; }
    }
    ctx->pc = 0x4921F0u;
label_4921f0:
    // 0x4921f0: 0x1000081f  b           . + 4 + (0x81F << 2)
label_4921f4:
    if (ctx->pc == 0x4921F4u) {
        ctx->pc = 0x4921F8u;
        goto label_4921f8;
    }
    ctx->pc = 0x4921F0u;
    {
        const bool branch_taken_0x4921f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4921f0) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x4921F8u;
label_4921f8:
    // 0x4921f8: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x4921f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_4921fc:
    // 0x4921fc: 0xc125124  jal         func_494490
label_492200:
    if (ctx->pc == 0x492200u) {
        ctx->pc = 0x492200u;
            // 0x492200: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->pc = 0x492204u;
        goto label_492204;
    }
    ctx->pc = 0x4921FCu;
    SET_GPR_U32(ctx, 31, 0x492204u);
    ctx->pc = 0x492200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4921FCu;
            // 0x492200: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492204u; }
        if (ctx->pc != 0x492204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492204u; }
        if (ctx->pc != 0x492204u) { return; }
    }
    ctx->pc = 0x492204u;
label_492204:
    // 0x492204: 0x8fa502d0  lw          $a1, 0x2D0($sp)
    ctx->pc = 0x492204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_492208:
    // 0x492208: 0xc125120  jal         func_494480
label_49220c:
    if (ctx->pc == 0x49220Cu) {
        ctx->pc = 0x49220Cu;
            // 0x49220c: 0x27a40428  addiu       $a0, $sp, 0x428 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1064));
        ctx->pc = 0x492210u;
        goto label_492210;
    }
    ctx->pc = 0x492208u;
    SET_GPR_U32(ctx, 31, 0x492210u);
    ctx->pc = 0x49220Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492208u;
            // 0x49220c: 0x27a40428  addiu       $a0, $sp, 0x428 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492210u; }
        if (ctx->pc != 0x492210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492210u; }
        if (ctx->pc != 0x492210u) { return; }
    }
    ctx->pc = 0x492210u;
label_492210:
    // 0x492210: 0x8fa30428  lw          $v1, 0x428($sp)
    ctx->pc = 0x492210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
label_492214:
    // 0x492214: 0x27a402cc  addiu       $a0, $sp, 0x2CC
    ctx->pc = 0x492214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 716));
label_492218:
    // 0x492218: 0x26850048  addiu       $a1, $s4, 0x48
    ctx->pc = 0x492218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_49221c:
    // 0x49221c: 0x9062fff0  lbu         $v0, -0x10($v1)
    ctx->pc = 0x49221cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_492220:
    // 0x492220: 0xa3a201f0  sb          $v0, 0x1F0($sp)
    ctx->pc = 0x492220u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 496), (uint8_t)GPR_U32(ctx, 2));
label_492224:
    // 0x492224: 0xdc62fff8  ld          $v0, -0x8($v1)
    ctx->pc = 0x492224u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_492228:
    // 0x492228: 0xffa201f8  sd          $v0, 0x1F8($sp)
    ctx->pc = 0x492228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 2));
label_49222c:
    // 0x49222c: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x49222cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_492230:
    // 0x492230: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x492230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_492234:
    // 0x492234: 0xc125124  jal         func_494490
label_492238:
    if (ctx->pc == 0x492238u) {
        ctx->pc = 0x492238u;
            // 0x492238: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x49223Cu;
        goto label_49223c;
    }
    ctx->pc = 0x492234u;
    SET_GPR_U32(ctx, 31, 0x49223Cu);
    ctx->pc = 0x492238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492234u;
            // 0x492238: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49223Cu; }
        if (ctx->pc != 0x49223Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49223Cu; }
        if (ctx->pc != 0x49223Cu) { return; }
    }
    ctx->pc = 0x49223Cu;
label_49223c:
    // 0x49223c: 0x8fa502cc  lw          $a1, 0x2CC($sp)
    ctx->pc = 0x49223cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
label_492240:
    // 0x492240: 0xc125120  jal         func_494480
label_492244:
    if (ctx->pc == 0x492244u) {
        ctx->pc = 0x492244u;
            // 0x492244: 0x27a40424  addiu       $a0, $sp, 0x424 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1060));
        ctx->pc = 0x492248u;
        goto label_492248;
    }
    ctx->pc = 0x492240u;
    SET_GPR_U32(ctx, 31, 0x492248u);
    ctx->pc = 0x492244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492240u;
            // 0x492244: 0x27a40424  addiu       $a0, $sp, 0x424 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1060));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492248u; }
        if (ctx->pc != 0x492248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492248u; }
        if (ctx->pc != 0x492248u) { return; }
    }
    ctx->pc = 0x492248u;
label_492248:
    // 0x492248: 0x8fa50424  lw          $a1, 0x424($sp)
    ctx->pc = 0x492248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1060)));
label_49224c:
    // 0x49224c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x49224cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_492250:
    // 0x492250: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x492250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_492254:
    // 0x492254: 0x26840048  addiu       $a0, $s4, 0x48
    ctx->pc = 0x492254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_492258:
    // 0x492258: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x492258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49225c:
    // 0x49225c: 0x27a701e0  addiu       $a3, $sp, 0x1E0
    ctx->pc = 0x49225cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_492260:
    // 0x492260: 0xdca5fff8  ld          $a1, -0x8($a1)
    ctx->pc = 0x492260u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 4294967288)));
label_492264:
    // 0x492264: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x492264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_492268:
    // 0x492268: 0xae83004c  sw          $v1, 0x4C($s4)
    ctx->pc = 0x492268u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 3));
label_49226c:
    // 0x49226c: 0xffa501c8  sd          $a1, 0x1C8($sp)
    ctx->pc = 0x49226cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 5));
label_492270:
    // 0x492270: 0xa3a201e0  sb          $v0, 0x1E0($sp)
    ctx->pc = 0x492270u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 480), (uint8_t)GPR_U32(ctx, 2));
label_492274:
    // 0x492274: 0x8fa301f8  lw          $v1, 0x1F8($sp)
    ctx->pc = 0x492274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_492278:
    // 0x492278: 0x8fa201c8  lw          $v0, 0x1C8($sp)
    ctx->pc = 0x492278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_49227c:
    // 0x49227c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x49227cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_492280:
    // 0x492280: 0xafa201e8  sw          $v0, 0x1E8($sp)
    ctx->pc = 0x492280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 2));
label_492284:
    // 0x492284: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x492284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_492288:
    // 0x492288: 0x8e820050  lw          $v0, 0x50($s4)
    ctx->pc = 0x492288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_49228c:
    // 0x49228c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x49228cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_492290:
    // 0x492290: 0xc125914  jal         func_496450
label_492294:
    if (ctx->pc == 0x492294u) {
        ctx->pc = 0x492294u;
            // 0x492294: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x492298u;
        goto label_492298;
    }
    ctx->pc = 0x492290u;
    SET_GPR_U32(ctx, 31, 0x492298u);
    ctx->pc = 0x492294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492290u;
            // 0x492294: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496450u;
    if (runtime->hasFunction(0x496450u)) {
        auto targetFn = runtime->lookupFunction(0x496450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492298u; }
        if (ctx->pc != 0x492298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496450_0x496450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492298u; }
        if (ctx->pc != 0x492298u) { return; }
    }
    ctx->pc = 0x492298u;
label_492298:
    // 0x492298: 0x100007f5  b           . + 4 + (0x7F5 << 2)
label_49229c:
    if (ctx->pc == 0x49229Cu) {
        ctx->pc = 0x4922A0u;
        goto label_4922a0;
    }
    ctx->pc = 0x492298u;
    {
        const bool branch_taken_0x492298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492298) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x4922A0u;
label_4922a0:
    // 0x4922a0: 0x27a402c8  addiu       $a0, $sp, 0x2C8
    ctx->pc = 0x4922a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
label_4922a4:
    // 0x4922a4: 0xc125124  jal         func_494490
label_4922a8:
    if (ctx->pc == 0x4922A8u) {
        ctx->pc = 0x4922A8u;
            // 0x4922a8: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->pc = 0x4922ACu;
        goto label_4922ac;
    }
    ctx->pc = 0x4922A4u;
    SET_GPR_U32(ctx, 31, 0x4922ACu);
    ctx->pc = 0x4922A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4922A4u;
            // 0x4922a8: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4922ACu; }
        if (ctx->pc != 0x4922ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4922ACu; }
        if (ctx->pc != 0x4922ACu) { return; }
    }
    ctx->pc = 0x4922ACu;
label_4922ac:
    // 0x4922ac: 0x8fa502c8  lw          $a1, 0x2C8($sp)
    ctx->pc = 0x4922acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
label_4922b0:
    // 0x4922b0: 0xc125120  jal         func_494480
label_4922b4:
    if (ctx->pc == 0x4922B4u) {
        ctx->pc = 0x4922B4u;
            // 0x4922b4: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->pc = 0x4922B8u;
        goto label_4922b8;
    }
    ctx->pc = 0x4922B0u;
    SET_GPR_U32(ctx, 31, 0x4922B8u);
    ctx->pc = 0x4922B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4922B0u;
            // 0x4922b4: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4922B8u; }
        if (ctx->pc != 0x4922B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4922B8u; }
        if (ctx->pc != 0x4922B8u) { return; }
    }
    ctx->pc = 0x4922B8u;
label_4922b8:
    // 0x4922b8: 0x8fa30420  lw          $v1, 0x420($sp)
    ctx->pc = 0x4922b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
label_4922bc:
    // 0x4922bc: 0x27a402c4  addiu       $a0, $sp, 0x2C4
    ctx->pc = 0x4922bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 708));
label_4922c0:
    // 0x4922c0: 0x26850048  addiu       $a1, $s4, 0x48
    ctx->pc = 0x4922c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_4922c4:
    // 0x4922c4: 0x9062fff0  lbu         $v0, -0x10($v1)
    ctx->pc = 0x4922c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_4922c8:
    // 0x4922c8: 0xa3a201f0  sb          $v0, 0x1F0($sp)
    ctx->pc = 0x4922c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 496), (uint8_t)GPR_U32(ctx, 2));
label_4922cc:
    // 0x4922cc: 0xdc62fff8  ld          $v0, -0x8($v1)
    ctx->pc = 0x4922ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_4922d0:
    // 0x4922d0: 0xffa201f8  sd          $v0, 0x1F8($sp)
    ctx->pc = 0x4922d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 2));
label_4922d4:
    // 0x4922d4: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x4922d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_4922d8:
    // 0x4922d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4922d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4922dc:
    // 0x4922dc: 0xc125124  jal         func_494490
label_4922e0:
    if (ctx->pc == 0x4922E0u) {
        ctx->pc = 0x4922E0u;
            // 0x4922e0: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x4922E4u;
        goto label_4922e4;
    }
    ctx->pc = 0x4922DCu;
    SET_GPR_U32(ctx, 31, 0x4922E4u);
    ctx->pc = 0x4922E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4922DCu;
            // 0x4922e0: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4922E4u; }
        if (ctx->pc != 0x4922E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4922E4u; }
        if (ctx->pc != 0x4922E4u) { return; }
    }
    ctx->pc = 0x4922E4u;
label_4922e4:
    // 0x4922e4: 0x8fa502c4  lw          $a1, 0x2C4($sp)
    ctx->pc = 0x4922e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
label_4922e8:
    // 0x4922e8: 0xc125120  jal         func_494480
label_4922ec:
    if (ctx->pc == 0x4922ECu) {
        ctx->pc = 0x4922ECu;
            // 0x4922ec: 0x27a4041c  addiu       $a0, $sp, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1052));
        ctx->pc = 0x4922F0u;
        goto label_4922f0;
    }
    ctx->pc = 0x4922E8u;
    SET_GPR_U32(ctx, 31, 0x4922F0u);
    ctx->pc = 0x4922ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4922E8u;
            // 0x4922ec: 0x27a4041c  addiu       $a0, $sp, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1052));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4922F0u; }
        if (ctx->pc != 0x4922F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4922F0u; }
        if (ctx->pc != 0x4922F0u) { return; }
    }
    ctx->pc = 0x4922F0u;
label_4922f0:
    // 0x4922f0: 0x8fa5041c  lw          $a1, 0x41C($sp)
    ctx->pc = 0x4922f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1052)));
label_4922f4:
    // 0x4922f4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x4922f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4922f8:
    // 0x4922f8: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x4922f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_4922fc:
    // 0x4922fc: 0x26840048  addiu       $a0, $s4, 0x48
    ctx->pc = 0x4922fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_492300:
    // 0x492300: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x492300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492304:
    // 0x492304: 0x27a701e0  addiu       $a3, $sp, 0x1E0
    ctx->pc = 0x492304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_492308:
    // 0x492308: 0xdca5fff8  ld          $a1, -0x8($a1)
    ctx->pc = 0x492308u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 4294967288)));
label_49230c:
    // 0x49230c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x49230cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_492310:
    // 0x492310: 0xae83004c  sw          $v1, 0x4C($s4)
    ctx->pc = 0x492310u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 3));
label_492314:
    // 0x492314: 0xffa501c8  sd          $a1, 0x1C8($sp)
    ctx->pc = 0x492314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 5));
label_492318:
    // 0x492318: 0xa3a201e0  sb          $v0, 0x1E0($sp)
    ctx->pc = 0x492318u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 480), (uint8_t)GPR_U32(ctx, 2));
label_49231c:
    // 0x49231c: 0x8fa301f8  lw          $v1, 0x1F8($sp)
    ctx->pc = 0x49231cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_492320:
    // 0x492320: 0x8fa201c8  lw          $v0, 0x1C8($sp)
    ctx->pc = 0x492320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_492324:
    // 0x492324: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x492324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_492328:
    // 0x492328: 0xafa201e8  sw          $v0, 0x1E8($sp)
    ctx->pc = 0x492328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 2));
label_49232c:
    // 0x49232c: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x49232cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_492330:
    // 0x492330: 0x8e820050  lw          $v0, 0x50($s4)
    ctx->pc = 0x492330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_492334:
    // 0x492334: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x492334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_492338:
    // 0x492338: 0xc125914  jal         func_496450
label_49233c:
    if (ctx->pc == 0x49233Cu) {
        ctx->pc = 0x49233Cu;
            // 0x49233c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x492340u;
        goto label_492340;
    }
    ctx->pc = 0x492338u;
    SET_GPR_U32(ctx, 31, 0x492340u);
    ctx->pc = 0x49233Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492338u;
            // 0x49233c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496450u;
    if (runtime->hasFunction(0x496450u)) {
        auto targetFn = runtime->lookupFunction(0x496450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492340u; }
        if (ctx->pc != 0x492340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496450_0x496450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492340u; }
        if (ctx->pc != 0x492340u) { return; }
    }
    ctx->pc = 0x492340u;
label_492340:
    // 0x492340: 0x100007cb  b           . + 4 + (0x7CB << 2)
label_492344:
    if (ctx->pc == 0x492344u) {
        ctx->pc = 0x492348u;
        goto label_492348;
    }
    ctx->pc = 0x492340u;
    {
        const bool branch_taken_0x492340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492340) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x492348u;
label_492348:
    // 0x492348: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x492348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_49234c:
    // 0x49234c: 0xc125124  jal         func_494490
label_492350:
    if (ctx->pc == 0x492350u) {
        ctx->pc = 0x492350u;
            // 0x492350: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->pc = 0x492354u;
        goto label_492354;
    }
    ctx->pc = 0x49234Cu;
    SET_GPR_U32(ctx, 31, 0x492354u);
    ctx->pc = 0x492350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49234Cu;
            // 0x492350: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492354u; }
        if (ctx->pc != 0x492354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492354u; }
        if (ctx->pc != 0x492354u) { return; }
    }
    ctx->pc = 0x492354u;
label_492354:
    // 0x492354: 0x8fa502c0  lw          $a1, 0x2C0($sp)
    ctx->pc = 0x492354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_492358:
    // 0x492358: 0xc125120  jal         func_494480
label_49235c:
    if (ctx->pc == 0x49235Cu) {
        ctx->pc = 0x49235Cu;
            // 0x49235c: 0x27a40418  addiu       $a0, $sp, 0x418 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1048));
        ctx->pc = 0x492360u;
        goto label_492360;
    }
    ctx->pc = 0x492358u;
    SET_GPR_U32(ctx, 31, 0x492360u);
    ctx->pc = 0x49235Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492358u;
            // 0x49235c: 0x27a40418  addiu       $a0, $sp, 0x418 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492360u; }
        if (ctx->pc != 0x492360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492360u; }
        if (ctx->pc != 0x492360u) { return; }
    }
    ctx->pc = 0x492360u;
label_492360:
    // 0x492360: 0x8fa30418  lw          $v1, 0x418($sp)
    ctx->pc = 0x492360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1048)));
label_492364:
    // 0x492364: 0x27a402bc  addiu       $a0, $sp, 0x2BC
    ctx->pc = 0x492364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
label_492368:
    // 0x492368: 0x26850048  addiu       $a1, $s4, 0x48
    ctx->pc = 0x492368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_49236c:
    // 0x49236c: 0x9062fff0  lbu         $v0, -0x10($v1)
    ctx->pc = 0x49236cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_492370:
    // 0x492370: 0xa3a201f0  sb          $v0, 0x1F0($sp)
    ctx->pc = 0x492370u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 496), (uint8_t)GPR_U32(ctx, 2));
label_492374:
    // 0x492374: 0xdc62fff8  ld          $v0, -0x8($v1)
    ctx->pc = 0x492374u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_492378:
    // 0x492378: 0xffa201f8  sd          $v0, 0x1F8($sp)
    ctx->pc = 0x492378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 2));
label_49237c:
    // 0x49237c: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x49237cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_492380:
    // 0x492380: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x492380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_492384:
    // 0x492384: 0xc125124  jal         func_494490
label_492388:
    if (ctx->pc == 0x492388u) {
        ctx->pc = 0x492388u;
            // 0x492388: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x49238Cu;
        goto label_49238c;
    }
    ctx->pc = 0x492384u;
    SET_GPR_U32(ctx, 31, 0x49238Cu);
    ctx->pc = 0x492388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492384u;
            // 0x492388: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49238Cu; }
        if (ctx->pc != 0x49238Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49238Cu; }
        if (ctx->pc != 0x49238Cu) { return; }
    }
    ctx->pc = 0x49238Cu;
label_49238c:
    // 0x49238c: 0x8fa502bc  lw          $a1, 0x2BC($sp)
    ctx->pc = 0x49238cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
label_492390:
    // 0x492390: 0xc125120  jal         func_494480
label_492394:
    if (ctx->pc == 0x492394u) {
        ctx->pc = 0x492394u;
            // 0x492394: 0x27a40414  addiu       $a0, $sp, 0x414 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1044));
        ctx->pc = 0x492398u;
        goto label_492398;
    }
    ctx->pc = 0x492390u;
    SET_GPR_U32(ctx, 31, 0x492398u);
    ctx->pc = 0x492394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492390u;
            // 0x492394: 0x27a40414  addiu       $a0, $sp, 0x414 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1044));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492398u; }
        if (ctx->pc != 0x492398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492398u; }
        if (ctx->pc != 0x492398u) { return; }
    }
    ctx->pc = 0x492398u;
label_492398:
    // 0x492398: 0x8fa40414  lw          $a0, 0x414($sp)
    ctx->pc = 0x492398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1044)));
label_49239c:
    // 0x49239c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x49239cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4923a0:
    // 0x4923a0: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x4923a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_4923a4:
    // 0x4923a4: 0x9091fff0  lbu         $s1, -0x10($a0)
    ctx->pc = 0x4923a4u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967280)));
label_4923a8:
    // 0x4923a8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4923a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4923ac:
    // 0x4923ac: 0xdc84fff8  ld          $a0, -0x8($a0)
    ctx->pc = 0x4923acu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_4923b0:
    // 0x4923b0: 0xae83004c  sw          $v1, 0x4C($s4)
    ctx->pc = 0x4923b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 3));
label_4923b4:
    // 0x4923b4: 0x93a301f0  lbu         $v1, 0x1F0($sp)
    ctx->pc = 0x4923b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 496)));
label_4923b8:
    // 0x4923b8: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
label_4923bc:
    if (ctx->pc == 0x4923BCu) {
        ctx->pc = 0x4923BCu;
            // 0x4923bc: 0xffa401c8  sd          $a0, 0x1C8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 4));
        ctx->pc = 0x4923C0u;
        goto label_4923c0;
    }
    ctx->pc = 0x4923B8u;
    {
        const bool branch_taken_0x4923b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4923BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4923B8u;
            // 0x4923bc: 0xffa401c8  sd          $a0, 0x1C8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4923b8) {
            ctx->pc = 0x492440u;
            goto label_492440;
        }
    }
    ctx->pc = 0x4923C0u;
label_4923c0:
    // 0x4923c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4923c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4923c4:
    // 0x4923c4: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
label_4923c8:
    if (ctx->pc == 0x4923C8u) {
        ctx->pc = 0x4923CCu;
        goto label_4923cc;
    }
    ctx->pc = 0x4923C4u;
    {
        const bool branch_taken_0x4923c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4923c4) {
            ctx->pc = 0x492438u;
            goto label_492438;
        }
    }
    ctx->pc = 0x4923CCu;
label_4923cc:
    // 0x4923cc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x4923ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4923d0:
    // 0x4923d0: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_4923d4:
    if (ctx->pc == 0x4923D4u) {
        ctx->pc = 0x4923D8u;
        goto label_4923d8;
    }
    ctx->pc = 0x4923D0u;
    {
        const bool branch_taken_0x4923d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4923d0) {
            ctx->pc = 0x492428u;
            goto label_492428;
        }
    }
    ctx->pc = 0x4923D8u;
label_4923d8:
    // 0x4923d8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x4923d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4923dc:
    // 0x4923dc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_4923e0:
    if (ctx->pc == 0x4923E0u) {
        ctx->pc = 0x4923E4u;
        goto label_4923e4;
    }
    ctx->pc = 0x4923DCu;
    {
        const bool branch_taken_0x4923dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4923dc) {
            ctx->pc = 0x4923F0u;
            goto label_4923f0;
        }
    }
    ctx->pc = 0x4923E4u;
label_4923e4:
    // 0x4923e4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_4923e8:
    if (ctx->pc == 0x4923E8u) {
        ctx->pc = 0x4923ECu;
        goto label_4923ec;
    }
    ctx->pc = 0x4923E4u;
    {
        const bool branch_taken_0x4923e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4923e4) {
            ctx->pc = 0x492460u;
            goto label_492460;
        }
    }
    ctx->pc = 0x4923ECu;
label_4923ec:
    // 0x4923ec: 0x0  nop
    ctx->pc = 0x4923ecu;
    // NOP
label_4923f0:
    // 0x4923f0: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x4923f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_4923f4:
    // 0x4923f4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4923f8:
    if (ctx->pc == 0x4923F8u) {
        ctx->pc = 0x4923F8u;
            // 0x4923f8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4923FCu;
        goto label_4923fc;
    }
    ctx->pc = 0x4923F4u;
    {
        const bool branch_taken_0x4923f4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4923f4) {
            ctx->pc = 0x4923F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4923F4u;
            // 0x4923f8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x492408u;
            goto label_492408;
        }
    }
    ctx->pc = 0x4923FCu;
label_4923fc:
    // 0x4923fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4923fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_492400:
    // 0x492400: 0x10000007  b           . + 4 + (0x7 << 2)
label_492404:
    if (ctx->pc == 0x492404u) {
        ctx->pc = 0x492404u;
            // 0x492404: 0x468006e0  cvt.s.w     $f27, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[27] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x492408u;
        goto label_492408;
    }
    ctx->pc = 0x492400u;
    {
        const bool branch_taken_0x492400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492400u;
            // 0x492404: 0x468006e0  cvt.s.w     $f27, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[27] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x492400) {
            ctx->pc = 0x492420u;
            goto label_492420;
        }
    }
    ctx->pc = 0x492408u;
label_492408:
    // 0x492408: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x492408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_49240c:
    // 0x49240c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49240cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_492410:
    // 0x492410: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x492410u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_492414:
    // 0x492414: 0x0  nop
    ctx->pc = 0x492414u;
    // NOP
label_492418:
    // 0x492418: 0x468006e0  cvt.s.w     $f27, $f0
    ctx->pc = 0x492418u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[27] = FPU_CVT_S_W(tmp); }
label_49241c:
    // 0x49241c: 0x461bdec0  add.s       $f27, $f27, $f27
    ctx->pc = 0x49241cu;
    ctx->f[27] = FPU_ADD_S(ctx->f[27], ctx->f[27]);
label_492420:
    // 0x492420: 0x1000000f  b           . + 4 + (0xF << 2)
label_492424:
    if (ctx->pc == 0x492424u) {
        ctx->pc = 0x492428u;
        goto label_492428;
    }
    ctx->pc = 0x492420u;
    {
        const bool branch_taken_0x492420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492420) {
            ctx->pc = 0x492460u;
            goto label_492460;
        }
    }
    ctx->pc = 0x492428u;
label_492428:
    // 0x492428: 0xc0497dc  jal         func_125F70
label_49242c:
    if (ctx->pc == 0x49242Cu) {
        ctx->pc = 0x49242Cu;
            // 0x49242c: 0xdfa401f8  ld          $a0, 0x1F8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->pc = 0x492430u;
        goto label_492430;
    }
    ctx->pc = 0x492428u;
    SET_GPR_U32(ctx, 31, 0x492430u);
    ctx->pc = 0x49242Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492428u;
            // 0x49242c: 0xdfa401f8  ld          $a0, 0x1F8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492430u; }
        if (ctx->pc != 0x492430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492430u; }
        if (ctx->pc != 0x492430u) { return; }
    }
    ctx->pc = 0x492430u;
label_492430:
    // 0x492430: 0x1000000b  b           . + 4 + (0xB << 2)
label_492434:
    if (ctx->pc == 0x492434u) {
        ctx->pc = 0x492434u;
            // 0x492434: 0x460006c6  mov.s       $f27, $f0 (Delay Slot)
        ctx->f[27] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x492438u;
        goto label_492438;
    }
    ctx->pc = 0x492430u;
    {
        const bool branch_taken_0x492430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492430u;
            // 0x492434: 0x460006c6  mov.s       $f27, $f0 (Delay Slot)
        ctx->f[27] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x492430) {
            ctx->pc = 0x492460u;
            goto label_492460;
        }
    }
    ctx->pc = 0x492438u;
label_492438:
    // 0x492438: 0x10000009  b           . + 4 + (0x9 << 2)
label_49243c:
    if (ctx->pc == 0x49243Cu) {
        ctx->pc = 0x49243Cu;
            // 0x49243c: 0xc7bb01f8  lwc1        $f27, 0x1F8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
        ctx->pc = 0x492440u;
        goto label_492440;
    }
    ctx->pc = 0x492438u;
    {
        const bool branch_taken_0x492438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49243Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492438u;
            // 0x49243c: 0xc7bb01f8  lwc1        $f27, 0x1F8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x492438) {
            ctx->pc = 0x492460u;
            goto label_492460;
        }
    }
    ctx->pc = 0x492440u;
label_492440:
    // 0x492440: 0x93a201f8  lbu         $v0, 0x1F8($sp)
    ctx->pc = 0x492440u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 504)));
label_492444:
    // 0x492444: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x492444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_492448:
    // 0x492448: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x492448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_49244c:
    // 0x49244c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x49244cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_492450:
    // 0x492450: 0xc124524  jal         func_491490
label_492454:
    if (ctx->pc == 0x492454u) {
        ctx->pc = 0x492454u;
            // 0x492454: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->pc = 0x492458u;
        goto label_492458;
    }
    ctx->pc = 0x492450u;
    SET_GPR_U32(ctx, 31, 0x492458u);
    ctx->pc = 0x492454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492450u;
            // 0x492454: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x491490u;
    if (runtime->hasFunction(0x491490u)) {
        auto targetFn = runtime->lookupFunction(0x491490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492458u; }
        if (ctx->pc != 0x492458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00491490_0x491490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492458u; }
        if (ctx->pc != 0x492458u) { return; }
    }
    ctx->pc = 0x492458u;
label_492458:
    // 0x492458: 0x460006c6  mov.s       $f27, $f0
    ctx->pc = 0x492458u;
    ctx->f[27] = FPU_MOV_S(ctx->f[0]);
label_49245c:
    // 0x49245c: 0x0  nop
    ctx->pc = 0x49245cu;
    // NOP
label_492460:
    // 0x492460: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x492460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_492464:
    // 0x492464: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x492464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_492468:
    // 0x492468: 0x0  nop
    ctx->pc = 0x492468u;
    // NOP
label_49246c:
    // 0x49246c: 0x461b0036  c.le.s      $f0, $f27
    ctx->pc = 0x49246cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_492470:
    // 0x492470: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_492474:
    if (ctx->pc == 0x492474u) {
        ctx->pc = 0x492474u;
            // 0x492474: 0x4600d801  sub.s       $f0, $f27, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[27], ctx->f[0]);
        ctx->pc = 0x492478u;
        goto label_492478;
    }
    ctx->pc = 0x492470u;
    {
        const bool branch_taken_0x492470 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x492470) {
            ctx->pc = 0x492474u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x492470u;
            // 0x492474: 0x4600d801  sub.s       $f0, $f27, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[27], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x492488u;
            goto label_492488;
        }
    }
    ctx->pc = 0x492478u;
label_492478:
    // 0x492478: 0x4600d824  .word       0x4600D824                   # cvt.w.s     $f0, $f27 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x492478u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[27]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_49247c:
    // 0x49247c: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x49247cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_492480:
    // 0x492480: 0x10000007  b           . + 4 + (0x7 << 2)
label_492484:
    if (ctx->pc == 0x492484u) {
        ctx->pc = 0x492484u;
            // 0x492484: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x492488u;
        goto label_492488;
    }
    ctx->pc = 0x492480u;
    {
        const bool branch_taken_0x492480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492480u;
            // 0x492484: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x492480) {
            ctx->pc = 0x4924A0u;
            goto label_4924a0;
        }
    }
    ctx->pc = 0x492488u;
label_492488:
    // 0x492488: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x492488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_49248c:
    // 0x49248c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x49248cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_492490:
    // 0x492490: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x492490u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_492494:
    // 0x492494: 0x0  nop
    ctx->pc = 0x492494u;
    // NOP
label_492498:
    // 0x492498: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x492498u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_49249c:
    // 0x49249c: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x49249cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_4924a0:
    // 0x4924a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4924a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4924a4:
    // 0x4924a4: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_4924a8:
    if (ctx->pc == 0x4924A8u) {
        ctx->pc = 0x4924ACu;
        goto label_4924ac;
    }
    ctx->pc = 0x4924A4u;
    {
        const bool branch_taken_0x4924a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4924a4) {
            ctx->pc = 0x492528u;
            goto label_492528;
        }
    }
    ctx->pc = 0x4924ACu;
label_4924ac:
    // 0x4924ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4924acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4924b0:
    // 0x4924b0: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
label_4924b4:
    if (ctx->pc == 0x4924B4u) {
        ctx->pc = 0x4924B8u;
        goto label_4924b8;
    }
    ctx->pc = 0x4924B0u;
    {
        const bool branch_taken_0x4924b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4924b0) {
            ctx->pc = 0x492520u;
            goto label_492520;
        }
    }
    ctx->pc = 0x4924B8u;
label_4924b8:
    // 0x4924b8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x4924b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4924bc:
    // 0x4924bc: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_4924c0:
    if (ctx->pc == 0x4924C0u) {
        ctx->pc = 0x4924C4u;
        goto label_4924c4;
    }
    ctx->pc = 0x4924BCu;
    {
        const bool branch_taken_0x4924bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4924bc) {
            ctx->pc = 0x492510u;
            goto label_492510;
        }
    }
    ctx->pc = 0x4924C4u;
label_4924c4:
    // 0x4924c4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x4924c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4924c8:
    // 0x4924c8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_4924cc:
    if (ctx->pc == 0x4924CCu) {
        ctx->pc = 0x4924D0u;
        goto label_4924d0;
    }
    ctx->pc = 0x4924C8u;
    {
        const bool branch_taken_0x4924c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4924c8) {
            ctx->pc = 0x4924D8u;
            goto label_4924d8;
        }
    }
    ctx->pc = 0x4924D0u;
label_4924d0:
    // 0x4924d0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_4924d4:
    if (ctx->pc == 0x4924D4u) {
        ctx->pc = 0x4924D8u;
        goto label_4924d8;
    }
    ctx->pc = 0x4924D0u;
    {
        const bool branch_taken_0x4924d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4924d0) {
            ctx->pc = 0x492548u;
            goto label_492548;
        }
    }
    ctx->pc = 0x4924D8u;
label_4924d8:
    // 0x4924d8: 0x8fa201c8  lw          $v0, 0x1C8($sp)
    ctx->pc = 0x4924d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_4924dc:
    // 0x4924dc: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4924e0:
    if (ctx->pc == 0x4924E0u) {
        ctx->pc = 0x4924E0u;
            // 0x4924e0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4924E4u;
        goto label_4924e4;
    }
    ctx->pc = 0x4924DCu;
    {
        const bool branch_taken_0x4924dc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4924dc) {
            ctx->pc = 0x4924E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4924DCu;
            // 0x4924e0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4924F0u;
            goto label_4924f0;
        }
    }
    ctx->pc = 0x4924E4u;
label_4924e4:
    // 0x4924e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4924e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4924e8:
    // 0x4924e8: 0x10000007  b           . + 4 + (0x7 << 2)
label_4924ec:
    if (ctx->pc == 0x4924ECu) {
        ctx->pc = 0x4924ECu;
            // 0x4924ec: 0x468006a0  cvt.s.w     $f26, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[26] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4924F0u;
        goto label_4924f0;
    }
    ctx->pc = 0x4924E8u;
    {
        const bool branch_taken_0x4924e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4924ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4924E8u;
            // 0x4924ec: 0x468006a0  cvt.s.w     $f26, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[26] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4924e8) {
            ctx->pc = 0x492508u;
            goto label_492508;
        }
    }
    ctx->pc = 0x4924F0u;
label_4924f0:
    // 0x4924f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4924f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4924f4:
    // 0x4924f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4924f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4924f8:
    // 0x4924f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4924f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4924fc:
    // 0x4924fc: 0x0  nop
    ctx->pc = 0x4924fcu;
    // NOP
label_492500:
    // 0x492500: 0x468006a0  cvt.s.w     $f26, $f0
    ctx->pc = 0x492500u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[26] = FPU_CVT_S_W(tmp); }
label_492504:
    // 0x492504: 0x461ad680  add.s       $f26, $f26, $f26
    ctx->pc = 0x492504u;
    ctx->f[26] = FPU_ADD_S(ctx->f[26], ctx->f[26]);
label_492508:
    // 0x492508: 0x1000000f  b           . + 4 + (0xF << 2)
label_49250c:
    if (ctx->pc == 0x49250Cu) {
        ctx->pc = 0x492510u;
        goto label_492510;
    }
    ctx->pc = 0x492508u;
    {
        const bool branch_taken_0x492508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492508) {
            ctx->pc = 0x492548u;
            goto label_492548;
        }
    }
    ctx->pc = 0x492510u;
label_492510:
    // 0x492510: 0xc0497dc  jal         func_125F70
label_492514:
    if (ctx->pc == 0x492514u) {
        ctx->pc = 0x492514u;
            // 0x492514: 0xdfa401c8  ld          $a0, 0x1C8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 456)));
        ctx->pc = 0x492518u;
        goto label_492518;
    }
    ctx->pc = 0x492510u;
    SET_GPR_U32(ctx, 31, 0x492518u);
    ctx->pc = 0x492514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492510u;
            // 0x492514: 0xdfa401c8  ld          $a0, 0x1C8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492518u; }
        if (ctx->pc != 0x492518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492518u; }
        if (ctx->pc != 0x492518u) { return; }
    }
    ctx->pc = 0x492518u;
label_492518:
    // 0x492518: 0x1000000b  b           . + 4 + (0xB << 2)
label_49251c:
    if (ctx->pc == 0x49251Cu) {
        ctx->pc = 0x49251Cu;
            // 0x49251c: 0x46000686  mov.s       $f26, $f0 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x492520u;
        goto label_492520;
    }
    ctx->pc = 0x492518u;
    {
        const bool branch_taken_0x492518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49251Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492518u;
            // 0x49251c: 0x46000686  mov.s       $f26, $f0 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x492518) {
            ctx->pc = 0x492548u;
            goto label_492548;
        }
    }
    ctx->pc = 0x492520u;
label_492520:
    // 0x492520: 0x10000009  b           . + 4 + (0x9 << 2)
label_492524:
    if (ctx->pc == 0x492524u) {
        ctx->pc = 0x492524u;
            // 0x492524: 0xc7ba01c8  lwc1        $f26, 0x1C8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
        ctx->pc = 0x492528u;
        goto label_492528;
    }
    ctx->pc = 0x492520u;
    {
        const bool branch_taken_0x492520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492520u;
            // 0x492524: 0xc7ba01c8  lwc1        $f26, 0x1C8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x492520) {
            ctx->pc = 0x492548u;
            goto label_492548;
        }
    }
    ctx->pc = 0x492528u;
label_492528:
    // 0x492528: 0x93a201c8  lbu         $v0, 0x1C8($sp)
    ctx->pc = 0x492528u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 456)));
label_49252c:
    // 0x49252c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x49252cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_492530:
    // 0x492530: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x492530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_492534:
    // 0x492534: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x492534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_492538:
    // 0x492538: 0xc124524  jal         func_491490
label_49253c:
    if (ctx->pc == 0x49253Cu) {
        ctx->pc = 0x49253Cu;
            // 0x49253c: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->pc = 0x492540u;
        goto label_492540;
    }
    ctx->pc = 0x492538u;
    SET_GPR_U32(ctx, 31, 0x492540u);
    ctx->pc = 0x49253Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492538u;
            // 0x49253c: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x491490u;
    if (runtime->hasFunction(0x491490u)) {
        auto targetFn = runtime->lookupFunction(0x491490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492540u; }
        if (ctx->pc != 0x492540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00491490_0x491490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492540u; }
        if (ctx->pc != 0x492540u) { return; }
    }
    ctx->pc = 0x492540u;
label_492540:
    // 0x492540: 0x46000686  mov.s       $f26, $f0
    ctx->pc = 0x492540u;
    ctx->f[26] = FPU_MOV_S(ctx->f[0]);
label_492544:
    // 0x492544: 0x0  nop
    ctx->pc = 0x492544u;
    // NOP
label_492548:
    // 0x492548: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x492548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_49254c:
    // 0x49254c: 0xa3a201e0  sb          $v0, 0x1E0($sp)
    ctx->pc = 0x49254cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 480), (uint8_t)GPR_U32(ctx, 2));
label_492550:
    // 0x492550: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x492550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_492554:
    // 0x492554: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x492554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_492558:
    // 0x492558: 0x0  nop
    ctx->pc = 0x492558u;
    // NOP
label_49255c:
    // 0x49255c: 0x461a0036  c.le.s      $f0, $f26
    ctx->pc = 0x49255cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_492560:
    // 0x492560: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_492564:
    if (ctx->pc == 0x492564u) {
        ctx->pc = 0x492564u;
            // 0x492564: 0x4600d001  sub.s       $f0, $f26, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[26], ctx->f[0]);
        ctx->pc = 0x492568u;
        goto label_492568;
    }
    ctx->pc = 0x492560u;
    {
        const bool branch_taken_0x492560 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x492560) {
            ctx->pc = 0x492564u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x492560u;
            // 0x492564: 0x4600d001  sub.s       $f0, $f26, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[26], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x492578u;
            goto label_492578;
        }
    }
    ctx->pc = 0x492568u;
label_492568:
    // 0x492568: 0x4600d024  .word       0x4600D024                   # cvt.w.s     $f0, $f26 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x492568u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[26]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_49256c:
    // 0x49256c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x49256cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_492570:
    // 0x492570: 0x10000007  b           . + 4 + (0x7 << 2)
label_492574:
    if (ctx->pc == 0x492574u) {
        ctx->pc = 0x492574u;
            // 0x492574: 0x2031021  addu        $v0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->pc = 0x492578u;
        goto label_492578;
    }
    ctx->pc = 0x492570u;
    {
        const bool branch_taken_0x492570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492570u;
            // 0x492574: 0x2031021  addu        $v0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492570) {
            ctx->pc = 0x492590u;
            goto label_492590;
        }
    }
    ctx->pc = 0x492578u;
label_492578:
    // 0x492578: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x492578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_49257c:
    // 0x49257c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x49257cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_492580:
    // 0x492580: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x492580u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_492584:
    // 0x492584: 0x0  nop
    ctx->pc = 0x492584u;
    // NOP
label_492588:
    // 0x492588: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x492588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_49258c:
    // 0x49258c: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x49258cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_492590:
    // 0x492590: 0x26840048  addiu       $a0, $s4, 0x48
    ctx->pc = 0x492590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_492594:
    // 0x492594: 0xafa201e8  sw          $v0, 0x1E8($sp)
    ctx->pc = 0x492594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 2));
label_492598:
    // 0x492598: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x492598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49259c:
    // 0x49259c: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x49259cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_4925a0:
    // 0x4925a0: 0x27a701e0  addiu       $a3, $sp, 0x1E0
    ctx->pc = 0x4925a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_4925a4:
    // 0x4925a4: 0x8e820050  lw          $v0, 0x50($s4)
    ctx->pc = 0x4925a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_4925a8:
    // 0x4925a8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4925a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4925ac:
    // 0x4925ac: 0xc125914  jal         func_496450
label_4925b0:
    if (ctx->pc == 0x4925B0u) {
        ctx->pc = 0x4925B0u;
            // 0x4925b0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4925B4u;
        goto label_4925b4;
    }
    ctx->pc = 0x4925ACu;
    SET_GPR_U32(ctx, 31, 0x4925B4u);
    ctx->pc = 0x4925B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4925ACu;
            // 0x4925b0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496450u;
    if (runtime->hasFunction(0x496450u)) {
        auto targetFn = runtime->lookupFunction(0x496450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4925B4u; }
        if (ctx->pc != 0x4925B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496450_0x496450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4925B4u; }
        if (ctx->pc != 0x4925B4u) { return; }
    }
    ctx->pc = 0x4925B4u;
label_4925b4:
    // 0x4925b4: 0x1000072e  b           . + 4 + (0x72E << 2)
label_4925b8:
    if (ctx->pc == 0x4925B8u) {
        ctx->pc = 0x4925BCu;
        goto label_4925bc;
    }
    ctx->pc = 0x4925B4u;
    {
        const bool branch_taken_0x4925b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4925b4) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x4925BCu;
label_4925bc:
    // 0x4925bc: 0x0  nop
    ctx->pc = 0x4925bcu;
    // NOP
label_4925c0:
    // 0x4925c0: 0x27a402b8  addiu       $a0, $sp, 0x2B8
    ctx->pc = 0x4925c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
label_4925c4:
    // 0x4925c4: 0xc125124  jal         func_494490
label_4925c8:
    if (ctx->pc == 0x4925C8u) {
        ctx->pc = 0x4925C8u;
            // 0x4925c8: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->pc = 0x4925CCu;
        goto label_4925cc;
    }
    ctx->pc = 0x4925C4u;
    SET_GPR_U32(ctx, 31, 0x4925CCu);
    ctx->pc = 0x4925C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4925C4u;
            // 0x4925c8: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4925CCu; }
        if (ctx->pc != 0x4925CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4925CCu; }
        if (ctx->pc != 0x4925CCu) { return; }
    }
    ctx->pc = 0x4925CCu;
label_4925cc:
    // 0x4925cc: 0x8fa502b8  lw          $a1, 0x2B8($sp)
    ctx->pc = 0x4925ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
label_4925d0:
    // 0x4925d0: 0xc125120  jal         func_494480
label_4925d4:
    if (ctx->pc == 0x4925D4u) {
        ctx->pc = 0x4925D4u;
            // 0x4925d4: 0x27a40410  addiu       $a0, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->pc = 0x4925D8u;
        goto label_4925d8;
    }
    ctx->pc = 0x4925D0u;
    SET_GPR_U32(ctx, 31, 0x4925D8u);
    ctx->pc = 0x4925D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4925D0u;
            // 0x4925d4: 0x27a40410  addiu       $a0, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4925D8u; }
        if (ctx->pc != 0x4925D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4925D8u; }
        if (ctx->pc != 0x4925D8u) { return; }
    }
    ctx->pc = 0x4925D8u;
label_4925d8:
    // 0x4925d8: 0x8fa30410  lw          $v1, 0x410($sp)
    ctx->pc = 0x4925d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1040)));
label_4925dc:
    // 0x4925dc: 0x27a402b4  addiu       $a0, $sp, 0x2B4
    ctx->pc = 0x4925dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 692));
label_4925e0:
    // 0x4925e0: 0x26850048  addiu       $a1, $s4, 0x48
    ctx->pc = 0x4925e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_4925e4:
    // 0x4925e4: 0x9062fff0  lbu         $v0, -0x10($v1)
    ctx->pc = 0x4925e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_4925e8:
    // 0x4925e8: 0xa3a201f0  sb          $v0, 0x1F0($sp)
    ctx->pc = 0x4925e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 496), (uint8_t)GPR_U32(ctx, 2));
label_4925ec:
    // 0x4925ec: 0xdc62fff8  ld          $v0, -0x8($v1)
    ctx->pc = 0x4925ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_4925f0:
    // 0x4925f0: 0xffa201f8  sd          $v0, 0x1F8($sp)
    ctx->pc = 0x4925f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 2));
label_4925f4:
    // 0x4925f4: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x4925f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_4925f8:
    // 0x4925f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4925f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4925fc:
    // 0x4925fc: 0xc125124  jal         func_494490
label_492600:
    if (ctx->pc == 0x492600u) {
        ctx->pc = 0x492600u;
            // 0x492600: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x492604u;
        goto label_492604;
    }
    ctx->pc = 0x4925FCu;
    SET_GPR_U32(ctx, 31, 0x492604u);
    ctx->pc = 0x492600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4925FCu;
            // 0x492600: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492604u; }
        if (ctx->pc != 0x492604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492604u; }
        if (ctx->pc != 0x492604u) { return; }
    }
    ctx->pc = 0x492604u;
label_492604:
    // 0x492604: 0x8fa502b4  lw          $a1, 0x2B4($sp)
    ctx->pc = 0x492604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
label_492608:
    // 0x492608: 0xc125120  jal         func_494480
label_49260c:
    if (ctx->pc == 0x49260Cu) {
        ctx->pc = 0x49260Cu;
            // 0x49260c: 0x27a4040c  addiu       $a0, $sp, 0x40C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1036));
        ctx->pc = 0x492610u;
        goto label_492610;
    }
    ctx->pc = 0x492608u;
    SET_GPR_U32(ctx, 31, 0x492610u);
    ctx->pc = 0x49260Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492608u;
            // 0x49260c: 0x27a4040c  addiu       $a0, $sp, 0x40C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1036));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492610u; }
        if (ctx->pc != 0x492610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492610u; }
        if (ctx->pc != 0x492610u) { return; }
    }
    ctx->pc = 0x492610u;
label_492610:
    // 0x492610: 0x8fa4040c  lw          $a0, 0x40C($sp)
    ctx->pc = 0x492610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1036)));
label_492614:
    // 0x492614: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x492614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_492618:
    // 0x492618: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x492618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_49261c:
    // 0x49261c: 0x9091fff0  lbu         $s1, -0x10($a0)
    ctx->pc = 0x49261cu;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967280)));
label_492620:
    // 0x492620: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x492620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_492624:
    // 0x492624: 0xdc84fff8  ld          $a0, -0x8($a0)
    ctx->pc = 0x492624u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_492628:
    // 0x492628: 0xae83004c  sw          $v1, 0x4C($s4)
    ctx->pc = 0x492628u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 3));
label_49262c:
    // 0x49262c: 0x93a301f0  lbu         $v1, 0x1F0($sp)
    ctx->pc = 0x49262cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 496)));
label_492630:
    // 0x492630: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
label_492634:
    if (ctx->pc == 0x492634u) {
        ctx->pc = 0x492634u;
            // 0x492634: 0xffa401c8  sd          $a0, 0x1C8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 4));
        ctx->pc = 0x492638u;
        goto label_492638;
    }
    ctx->pc = 0x492630u;
    {
        const bool branch_taken_0x492630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x492634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492630u;
            // 0x492634: 0xffa401c8  sd          $a0, 0x1C8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492630) {
            ctx->pc = 0x4926B8u;
            goto label_4926b8;
        }
    }
    ctx->pc = 0x492638u;
label_492638:
    // 0x492638: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49263c:
    // 0x49263c: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
label_492640:
    if (ctx->pc == 0x492640u) {
        ctx->pc = 0x492644u;
        goto label_492644;
    }
    ctx->pc = 0x49263Cu;
    {
        const bool branch_taken_0x49263c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x49263c) {
            ctx->pc = 0x4926B0u;
            goto label_4926b0;
        }
    }
    ctx->pc = 0x492644u;
label_492644:
    // 0x492644: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x492644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_492648:
    // 0x492648: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_49264c:
    if (ctx->pc == 0x49264Cu) {
        ctx->pc = 0x492650u;
        goto label_492650;
    }
    ctx->pc = 0x492648u;
    {
        const bool branch_taken_0x492648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x492648) {
            ctx->pc = 0x4926A0u;
            goto label_4926a0;
        }
    }
    ctx->pc = 0x492650u;
label_492650:
    // 0x492650: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x492650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_492654:
    // 0x492654: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_492658:
    if (ctx->pc == 0x492658u) {
        ctx->pc = 0x49265Cu;
        goto label_49265c;
    }
    ctx->pc = 0x492654u;
    {
        const bool branch_taken_0x492654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x492654) {
            ctx->pc = 0x492668u;
            goto label_492668;
        }
    }
    ctx->pc = 0x49265Cu;
label_49265c:
    // 0x49265c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_492660:
    if (ctx->pc == 0x492660u) {
        ctx->pc = 0x492664u;
        goto label_492664;
    }
    ctx->pc = 0x49265Cu;
    {
        const bool branch_taken_0x49265c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49265c) {
            ctx->pc = 0x4926D8u;
            goto label_4926d8;
        }
    }
    ctx->pc = 0x492664u;
label_492664:
    // 0x492664: 0x0  nop
    ctx->pc = 0x492664u;
    // NOP
label_492668:
    // 0x492668: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x492668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_49266c:
    // 0x49266c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_492670:
    if (ctx->pc == 0x492670u) {
        ctx->pc = 0x492670u;
            // 0x492670: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x492674u;
        goto label_492674;
    }
    ctx->pc = 0x49266Cu;
    {
        const bool branch_taken_0x49266c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x49266c) {
            ctx->pc = 0x492670u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49266Cu;
            // 0x492670: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x492680u;
            goto label_492680;
        }
    }
    ctx->pc = 0x492674u;
label_492674:
    // 0x492674: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x492674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_492678:
    // 0x492678: 0x10000007  b           . + 4 + (0x7 << 2)
label_49267c:
    if (ctx->pc == 0x49267Cu) {
        ctx->pc = 0x49267Cu;
            // 0x49267c: 0x46800660  cvt.s.w     $f25, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x492680u;
        goto label_492680;
    }
    ctx->pc = 0x492678u;
    {
        const bool branch_taken_0x492678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49267Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492678u;
            // 0x49267c: 0x46800660  cvt.s.w     $f25, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x492678) {
            ctx->pc = 0x492698u;
            goto label_492698;
        }
    }
    ctx->pc = 0x492680u;
label_492680:
    // 0x492680: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x492680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_492684:
    // 0x492684: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x492684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_492688:
    // 0x492688: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x492688u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49268c:
    // 0x49268c: 0x0  nop
    ctx->pc = 0x49268cu;
    // NOP
label_492690:
    // 0x492690: 0x46800660  cvt.s.w     $f25, $f0
    ctx->pc = 0x492690u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
label_492694:
    // 0x492694: 0x4619ce40  add.s       $f25, $f25, $f25
    ctx->pc = 0x492694u;
    ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[25]);
label_492698:
    // 0x492698: 0x1000000f  b           . + 4 + (0xF << 2)
label_49269c:
    if (ctx->pc == 0x49269Cu) {
        ctx->pc = 0x4926A0u;
        goto label_4926a0;
    }
    ctx->pc = 0x492698u;
    {
        const bool branch_taken_0x492698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492698) {
            ctx->pc = 0x4926D8u;
            goto label_4926d8;
        }
    }
    ctx->pc = 0x4926A0u;
label_4926a0:
    // 0x4926a0: 0xc0497dc  jal         func_125F70
label_4926a4:
    if (ctx->pc == 0x4926A4u) {
        ctx->pc = 0x4926A4u;
            // 0x4926a4: 0xdfa401f8  ld          $a0, 0x1F8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->pc = 0x4926A8u;
        goto label_4926a8;
    }
    ctx->pc = 0x4926A0u;
    SET_GPR_U32(ctx, 31, 0x4926A8u);
    ctx->pc = 0x4926A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4926A0u;
            // 0x4926a4: 0xdfa401f8  ld          $a0, 0x1F8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4926A8u; }
        if (ctx->pc != 0x4926A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4926A8u; }
        if (ctx->pc != 0x4926A8u) { return; }
    }
    ctx->pc = 0x4926A8u;
label_4926a8:
    // 0x4926a8: 0x1000000b  b           . + 4 + (0xB << 2)
label_4926ac:
    if (ctx->pc == 0x4926ACu) {
        ctx->pc = 0x4926ACu;
            // 0x4926ac: 0x46000646  mov.s       $f25, $f0 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4926B0u;
        goto label_4926b0;
    }
    ctx->pc = 0x4926A8u;
    {
        const bool branch_taken_0x4926a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4926ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4926A8u;
            // 0x4926ac: 0x46000646  mov.s       $f25, $f0 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4926a8) {
            ctx->pc = 0x4926D8u;
            goto label_4926d8;
        }
    }
    ctx->pc = 0x4926B0u;
label_4926b0:
    // 0x4926b0: 0x10000009  b           . + 4 + (0x9 << 2)
label_4926b4:
    if (ctx->pc == 0x4926B4u) {
        ctx->pc = 0x4926B4u;
            // 0x4926b4: 0xc7b901f8  lwc1        $f25, 0x1F8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
        ctx->pc = 0x4926B8u;
        goto label_4926b8;
    }
    ctx->pc = 0x4926B0u;
    {
        const bool branch_taken_0x4926b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4926B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4926B0u;
            // 0x4926b4: 0xc7b901f8  lwc1        $f25, 0x1F8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4926b0) {
            ctx->pc = 0x4926D8u;
            goto label_4926d8;
        }
    }
    ctx->pc = 0x4926B8u;
label_4926b8:
    // 0x4926b8: 0x93a201f8  lbu         $v0, 0x1F8($sp)
    ctx->pc = 0x4926b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 504)));
label_4926bc:
    // 0x4926bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4926bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4926c0:
    // 0x4926c0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4926c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4926c4:
    // 0x4926c4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x4926c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_4926c8:
    // 0x4926c8: 0xc124524  jal         func_491490
label_4926cc:
    if (ctx->pc == 0x4926CCu) {
        ctx->pc = 0x4926CCu;
            // 0x4926cc: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->pc = 0x4926D0u;
        goto label_4926d0;
    }
    ctx->pc = 0x4926C8u;
    SET_GPR_U32(ctx, 31, 0x4926D0u);
    ctx->pc = 0x4926CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4926C8u;
            // 0x4926cc: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x491490u;
    if (runtime->hasFunction(0x491490u)) {
        auto targetFn = runtime->lookupFunction(0x491490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4926D0u; }
        if (ctx->pc != 0x4926D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00491490_0x491490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4926D0u; }
        if (ctx->pc != 0x4926D0u) { return; }
    }
    ctx->pc = 0x4926D0u;
label_4926d0:
    // 0x4926d0: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x4926d0u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
label_4926d4:
    // 0x4926d4: 0x0  nop
    ctx->pc = 0x4926d4u;
    // NOP
label_4926d8:
    // 0x4926d8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4926d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_4926dc:
    // 0x4926dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4926dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4926e0:
    // 0x4926e0: 0x0  nop
    ctx->pc = 0x4926e0u;
    // NOP
label_4926e4:
    // 0x4926e4: 0x46190036  c.le.s      $f0, $f25
    ctx->pc = 0x4926e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4926e8:
    // 0x4926e8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4926ec:
    if (ctx->pc == 0x4926ECu) {
        ctx->pc = 0x4926ECu;
            // 0x4926ec: 0x4600c801  sub.s       $f0, $f25, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[25], ctx->f[0]);
        ctx->pc = 0x4926F0u;
        goto label_4926f0;
    }
    ctx->pc = 0x4926E8u;
    {
        const bool branch_taken_0x4926e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4926e8) {
            ctx->pc = 0x4926ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4926E8u;
            // 0x4926ec: 0x4600c801  sub.s       $f0, $f25, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[25], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x492700u;
            goto label_492700;
        }
    }
    ctx->pc = 0x4926F0u;
label_4926f0:
    // 0x4926f0: 0x4600c824  .word       0x4600C824                   # cvt.w.s     $f0, $f25 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4926f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[25]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4926f4:
    // 0x4926f4: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x4926f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_4926f8:
    // 0x4926f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_4926fc:
    if (ctx->pc == 0x4926FCu) {
        ctx->pc = 0x4926FCu;
            // 0x4926fc: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x492700u;
        goto label_492700;
    }
    ctx->pc = 0x4926F8u;
    {
        const bool branch_taken_0x4926f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4926FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4926F8u;
            // 0x4926fc: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4926f8) {
            ctx->pc = 0x492718u;
            goto label_492718;
        }
    }
    ctx->pc = 0x492700u;
label_492700:
    // 0x492700: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x492700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_492704:
    // 0x492704: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x492704u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_492708:
    // 0x492708: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x492708u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_49270c:
    // 0x49270c: 0x0  nop
    ctx->pc = 0x49270cu;
    // NOP
label_492710:
    // 0x492710: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x492710u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_492714:
    // 0x492714: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x492714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_492718:
    // 0x492718: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x492718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_49271c:
    // 0x49271c: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_492720:
    if (ctx->pc == 0x492720u) {
        ctx->pc = 0x492724u;
        goto label_492724;
    }
    ctx->pc = 0x49271Cu;
    {
        const bool branch_taken_0x49271c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x49271c) {
            ctx->pc = 0x4927A0u;
            goto label_4927a0;
        }
    }
    ctx->pc = 0x492724u;
label_492724:
    // 0x492724: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492728:
    // 0x492728: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
label_49272c:
    if (ctx->pc == 0x49272Cu) {
        ctx->pc = 0x492730u;
        goto label_492730;
    }
    ctx->pc = 0x492728u;
    {
        const bool branch_taken_0x492728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x492728) {
            ctx->pc = 0x492798u;
            goto label_492798;
        }
    }
    ctx->pc = 0x492730u;
label_492730:
    // 0x492730: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x492730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_492734:
    // 0x492734: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_492738:
    if (ctx->pc == 0x492738u) {
        ctx->pc = 0x49273Cu;
        goto label_49273c;
    }
    ctx->pc = 0x492734u;
    {
        const bool branch_taken_0x492734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x492734) {
            ctx->pc = 0x492788u;
            goto label_492788;
        }
    }
    ctx->pc = 0x49273Cu;
label_49273c:
    // 0x49273c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x49273cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_492740:
    // 0x492740: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_492744:
    if (ctx->pc == 0x492744u) {
        ctx->pc = 0x492748u;
        goto label_492748;
    }
    ctx->pc = 0x492740u;
    {
        const bool branch_taken_0x492740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x492740) {
            ctx->pc = 0x492750u;
            goto label_492750;
        }
    }
    ctx->pc = 0x492748u;
label_492748:
    // 0x492748: 0x1000001d  b           . + 4 + (0x1D << 2)
label_49274c:
    if (ctx->pc == 0x49274Cu) {
        ctx->pc = 0x492750u;
        goto label_492750;
    }
    ctx->pc = 0x492748u;
    {
        const bool branch_taken_0x492748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492748) {
            ctx->pc = 0x4927C0u;
            goto label_4927c0;
        }
    }
    ctx->pc = 0x492750u;
label_492750:
    // 0x492750: 0x8fa201c8  lw          $v0, 0x1C8($sp)
    ctx->pc = 0x492750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_492754:
    // 0x492754: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_492758:
    if (ctx->pc == 0x492758u) {
        ctx->pc = 0x492758u;
            // 0x492758: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x49275Cu;
        goto label_49275c;
    }
    ctx->pc = 0x492754u;
    {
        const bool branch_taken_0x492754 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x492754) {
            ctx->pc = 0x492758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x492754u;
            // 0x492758: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x492768u;
            goto label_492768;
        }
    }
    ctx->pc = 0x49275Cu;
label_49275c:
    // 0x49275c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x49275cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_492760:
    // 0x492760: 0x10000007  b           . + 4 + (0x7 << 2)
label_492764:
    if (ctx->pc == 0x492764u) {
        ctx->pc = 0x492764u;
            // 0x492764: 0x46800620  cvt.s.w     $f24, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x492768u;
        goto label_492768;
    }
    ctx->pc = 0x492760u;
    {
        const bool branch_taken_0x492760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492760u;
            // 0x492764: 0x46800620  cvt.s.w     $f24, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x492760) {
            ctx->pc = 0x492780u;
            goto label_492780;
        }
    }
    ctx->pc = 0x492768u;
label_492768:
    // 0x492768: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x492768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_49276c:
    // 0x49276c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49276cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_492770:
    // 0x492770: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x492770u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_492774:
    // 0x492774: 0x0  nop
    ctx->pc = 0x492774u;
    // NOP
label_492778:
    // 0x492778: 0x46800620  cvt.s.w     $f24, $f0
    ctx->pc = 0x492778u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_49277c:
    // 0x49277c: 0x4618c600  add.s       $f24, $f24, $f24
    ctx->pc = 0x49277cu;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[24]);
label_492780:
    // 0x492780: 0x1000000f  b           . + 4 + (0xF << 2)
label_492784:
    if (ctx->pc == 0x492784u) {
        ctx->pc = 0x492788u;
        goto label_492788;
    }
    ctx->pc = 0x492780u;
    {
        const bool branch_taken_0x492780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492780) {
            ctx->pc = 0x4927C0u;
            goto label_4927c0;
        }
    }
    ctx->pc = 0x492788u;
label_492788:
    // 0x492788: 0xc0497dc  jal         func_125F70
label_49278c:
    if (ctx->pc == 0x49278Cu) {
        ctx->pc = 0x49278Cu;
            // 0x49278c: 0xdfa401c8  ld          $a0, 0x1C8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 456)));
        ctx->pc = 0x492790u;
        goto label_492790;
    }
    ctx->pc = 0x492788u;
    SET_GPR_U32(ctx, 31, 0x492790u);
    ctx->pc = 0x49278Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492788u;
            // 0x49278c: 0xdfa401c8  ld          $a0, 0x1C8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492790u; }
        if (ctx->pc != 0x492790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492790u; }
        if (ctx->pc != 0x492790u) { return; }
    }
    ctx->pc = 0x492790u;
label_492790:
    // 0x492790: 0x1000000b  b           . + 4 + (0xB << 2)
label_492794:
    if (ctx->pc == 0x492794u) {
        ctx->pc = 0x492794u;
            // 0x492794: 0x46000606  mov.s       $f24, $f0 (Delay Slot)
        ctx->f[24] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x492798u;
        goto label_492798;
    }
    ctx->pc = 0x492790u;
    {
        const bool branch_taken_0x492790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492790u;
            // 0x492794: 0x46000606  mov.s       $f24, $f0 (Delay Slot)
        ctx->f[24] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x492790) {
            ctx->pc = 0x4927C0u;
            goto label_4927c0;
        }
    }
    ctx->pc = 0x492798u;
label_492798:
    // 0x492798: 0x10000009  b           . + 4 + (0x9 << 2)
label_49279c:
    if (ctx->pc == 0x49279Cu) {
        ctx->pc = 0x49279Cu;
            // 0x49279c: 0xc7b801c8  lwc1        $f24, 0x1C8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
        ctx->pc = 0x4927A0u;
        goto label_4927a0;
    }
    ctx->pc = 0x492798u;
    {
        const bool branch_taken_0x492798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49279Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492798u;
            // 0x49279c: 0xc7b801c8  lwc1        $f24, 0x1C8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x492798) {
            ctx->pc = 0x4927C0u;
            goto label_4927c0;
        }
    }
    ctx->pc = 0x4927A0u;
label_4927a0:
    // 0x4927a0: 0x93a201c8  lbu         $v0, 0x1C8($sp)
    ctx->pc = 0x4927a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 456)));
label_4927a4:
    // 0x4927a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4927a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4927a8:
    // 0x4927a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4927a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4927ac:
    // 0x4927ac: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x4927acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_4927b0:
    // 0x4927b0: 0xc124524  jal         func_491490
label_4927b4:
    if (ctx->pc == 0x4927B4u) {
        ctx->pc = 0x4927B4u;
            // 0x4927b4: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->pc = 0x4927B8u;
        goto label_4927b8;
    }
    ctx->pc = 0x4927B0u;
    SET_GPR_U32(ctx, 31, 0x4927B8u);
    ctx->pc = 0x4927B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4927B0u;
            // 0x4927b4: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x491490u;
    if (runtime->hasFunction(0x491490u)) {
        auto targetFn = runtime->lookupFunction(0x491490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4927B8u; }
        if (ctx->pc != 0x4927B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00491490_0x491490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4927B8u; }
        if (ctx->pc != 0x4927B8u) { return; }
    }
    ctx->pc = 0x4927B8u;
label_4927b8:
    // 0x4927b8: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x4927b8u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
label_4927bc:
    // 0x4927bc: 0x0  nop
    ctx->pc = 0x4927bcu;
    // NOP
label_4927c0:
    // 0x4927c0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4927c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4927c4:
    // 0x4927c4: 0xa3a201e0  sb          $v0, 0x1E0($sp)
    ctx->pc = 0x4927c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 480), (uint8_t)GPR_U32(ctx, 2));
label_4927c8:
    // 0x4927c8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4927c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_4927cc:
    // 0x4927cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4927ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4927d0:
    // 0x4927d0: 0x0  nop
    ctx->pc = 0x4927d0u;
    // NOP
label_4927d4:
    // 0x4927d4: 0x46180036  c.le.s      $f0, $f24
    ctx->pc = 0x4927d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4927d8:
    // 0x4927d8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4927dc:
    if (ctx->pc == 0x4927DCu) {
        ctx->pc = 0x4927DCu;
            // 0x4927dc: 0x4600c001  sub.s       $f0, $f24, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
        ctx->pc = 0x4927E0u;
        goto label_4927e0;
    }
    ctx->pc = 0x4927D8u;
    {
        const bool branch_taken_0x4927d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4927d8) {
            ctx->pc = 0x4927DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4927D8u;
            // 0x4927dc: 0x4600c001  sub.s       $f0, $f24, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4927F0u;
            goto label_4927f0;
        }
    }
    ctx->pc = 0x4927E0u;
label_4927e0:
    // 0x4927e0: 0x4600c024  .word       0x4600C024                   # cvt.w.s     $f0, $f24 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4927e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[24]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4927e4:
    // 0x4927e4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4927e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4927e8:
    // 0x4927e8: 0x10000007  b           . + 4 + (0x7 << 2)
label_4927ec:
    if (ctx->pc == 0x4927ECu) {
        ctx->pc = 0x4927ECu;
            // 0x4927ec: 0x70102b  sltu        $v0, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->pc = 0x4927F0u;
        goto label_4927f0;
    }
    ctx->pc = 0x4927E8u;
    {
        const bool branch_taken_0x4927e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4927ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4927E8u;
            // 0x4927ec: 0x70102b  sltu        $v0, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4927e8) {
            ctx->pc = 0x492808u;
            goto label_492808;
        }
    }
    ctx->pc = 0x4927F0u;
label_4927f0:
    // 0x4927f0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4927f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4927f4:
    // 0x4927f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4927f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4927f8:
    // 0x4927f8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4927f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4927fc:
    // 0x4927fc: 0x0  nop
    ctx->pc = 0x4927fcu;
    // NOP
label_492800:
    // 0x492800: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x492800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_492804:
    // 0x492804: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x492804u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_492808:
    // 0x492808: 0x26840048  addiu       $a0, $s4, 0x48
    ctx->pc = 0x492808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_49280c:
    // 0x49280c: 0xa3a201e8  sb          $v0, 0x1E8($sp)
    ctx->pc = 0x49280cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 2));
label_492810:
    // 0x492810: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x492810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492814:
    // 0x492814: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x492814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_492818:
    // 0x492818: 0x27a701e0  addiu       $a3, $sp, 0x1E0
    ctx->pc = 0x492818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_49281c:
    // 0x49281c: 0x8e820050  lw          $v0, 0x50($s4)
    ctx->pc = 0x49281cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_492820:
    // 0x492820: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x492820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_492824:
    // 0x492824: 0xc125914  jal         func_496450
label_492828:
    if (ctx->pc == 0x492828u) {
        ctx->pc = 0x492828u;
            // 0x492828: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x49282Cu;
        goto label_49282c;
    }
    ctx->pc = 0x492824u;
    SET_GPR_U32(ctx, 31, 0x49282Cu);
    ctx->pc = 0x492828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492824u;
            // 0x492828: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496450u;
    if (runtime->hasFunction(0x496450u)) {
        auto targetFn = runtime->lookupFunction(0x496450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49282Cu; }
        if (ctx->pc != 0x49282Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496450_0x496450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49282Cu; }
        if (ctx->pc != 0x49282Cu) { return; }
    }
    ctx->pc = 0x49282Cu;
label_49282c:
    // 0x49282c: 0x10000690  b           . + 4 + (0x690 << 2)
label_492830:
    if (ctx->pc == 0x492830u) {
        ctx->pc = 0x492834u;
        goto label_492834;
    }
    ctx->pc = 0x49282Cu;
    {
        const bool branch_taken_0x49282c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49282c) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x492834u;
label_492834:
    // 0x492834: 0x0  nop
    ctx->pc = 0x492834u;
    // NOP
label_492838:
    // 0x492838: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x492838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_49283c:
    // 0x49283c: 0xc125124  jal         func_494490
label_492840:
    if (ctx->pc == 0x492840u) {
        ctx->pc = 0x492840u;
            // 0x492840: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->pc = 0x492844u;
        goto label_492844;
    }
    ctx->pc = 0x49283Cu;
    SET_GPR_U32(ctx, 31, 0x492844u);
    ctx->pc = 0x492840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49283Cu;
            // 0x492840: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492844u; }
        if (ctx->pc != 0x492844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492844u; }
        if (ctx->pc != 0x492844u) { return; }
    }
    ctx->pc = 0x492844u;
label_492844:
    // 0x492844: 0x8fa502b0  lw          $a1, 0x2B0($sp)
    ctx->pc = 0x492844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_492848:
    // 0x492848: 0xc125120  jal         func_494480
label_49284c:
    if (ctx->pc == 0x49284Cu) {
        ctx->pc = 0x49284Cu;
            // 0x49284c: 0x27a40408  addiu       $a0, $sp, 0x408 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1032));
        ctx->pc = 0x492850u;
        goto label_492850;
    }
    ctx->pc = 0x492848u;
    SET_GPR_U32(ctx, 31, 0x492850u);
    ctx->pc = 0x49284Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492848u;
            // 0x49284c: 0x27a40408  addiu       $a0, $sp, 0x408 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492850u; }
        if (ctx->pc != 0x492850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492850u; }
        if (ctx->pc != 0x492850u) { return; }
    }
    ctx->pc = 0x492850u;
label_492850:
    // 0x492850: 0x8fa30408  lw          $v1, 0x408($sp)
    ctx->pc = 0x492850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1032)));
label_492854:
    // 0x492854: 0x27a402ac  addiu       $a0, $sp, 0x2AC
    ctx->pc = 0x492854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 684));
label_492858:
    // 0x492858: 0x26850048  addiu       $a1, $s4, 0x48
    ctx->pc = 0x492858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_49285c:
    // 0x49285c: 0x9062fff0  lbu         $v0, -0x10($v1)
    ctx->pc = 0x49285cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_492860:
    // 0x492860: 0xa3a201f0  sb          $v0, 0x1F0($sp)
    ctx->pc = 0x492860u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 496), (uint8_t)GPR_U32(ctx, 2));
label_492864:
    // 0x492864: 0xdc62fff8  ld          $v0, -0x8($v1)
    ctx->pc = 0x492864u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_492868:
    // 0x492868: 0xffa201f8  sd          $v0, 0x1F8($sp)
    ctx->pc = 0x492868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 2));
label_49286c:
    // 0x49286c: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x49286cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_492870:
    // 0x492870: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x492870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_492874:
    // 0x492874: 0xc125124  jal         func_494490
label_492878:
    if (ctx->pc == 0x492878u) {
        ctx->pc = 0x492878u;
            // 0x492878: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x49287Cu;
        goto label_49287c;
    }
    ctx->pc = 0x492874u;
    SET_GPR_U32(ctx, 31, 0x49287Cu);
    ctx->pc = 0x492878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492874u;
            // 0x492878: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49287Cu; }
        if (ctx->pc != 0x49287Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49287Cu; }
        if (ctx->pc != 0x49287Cu) { return; }
    }
    ctx->pc = 0x49287Cu;
label_49287c:
    // 0x49287c: 0x8fa502ac  lw          $a1, 0x2AC($sp)
    ctx->pc = 0x49287cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 684)));
label_492880:
    // 0x492880: 0xc125120  jal         func_494480
label_492884:
    if (ctx->pc == 0x492884u) {
        ctx->pc = 0x492884u;
            // 0x492884: 0x27a40404  addiu       $a0, $sp, 0x404 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1028));
        ctx->pc = 0x492888u;
        goto label_492888;
    }
    ctx->pc = 0x492880u;
    SET_GPR_U32(ctx, 31, 0x492888u);
    ctx->pc = 0x492884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492880u;
            // 0x492884: 0x27a40404  addiu       $a0, $sp, 0x404 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1028));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492888u; }
        if (ctx->pc != 0x492888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492888u; }
        if (ctx->pc != 0x492888u) { return; }
    }
    ctx->pc = 0x492888u;
label_492888:
    // 0x492888: 0x8fa40404  lw          $a0, 0x404($sp)
    ctx->pc = 0x492888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1028)));
label_49288c:
    // 0x49288c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x49288cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_492890:
    // 0x492890: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x492890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_492894:
    // 0x492894: 0x9090fff0  lbu         $s0, -0x10($a0)
    ctx->pc = 0x492894u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967280)));
label_492898:
    // 0x492898: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x492898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_49289c:
    // 0x49289c: 0xdc84fff8  ld          $a0, -0x8($a0)
    ctx->pc = 0x49289cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_4928a0:
    // 0x4928a0: 0xae83004c  sw          $v1, 0x4C($s4)
    ctx->pc = 0x4928a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 3));
label_4928a4:
    // 0x4928a4: 0x93a301f0  lbu         $v1, 0x1F0($sp)
    ctx->pc = 0x4928a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 496)));
label_4928a8:
    // 0x4928a8: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
label_4928ac:
    if (ctx->pc == 0x4928ACu) {
        ctx->pc = 0x4928ACu;
            // 0x4928ac: 0xffa401c8  sd          $a0, 0x1C8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 4));
        ctx->pc = 0x4928B0u;
        goto label_4928b0;
    }
    ctx->pc = 0x4928A8u;
    {
        const bool branch_taken_0x4928a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4928ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4928A8u;
            // 0x4928ac: 0xffa401c8  sd          $a0, 0x1C8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4928a8) {
            ctx->pc = 0x492948u;
            goto label_492948;
        }
    }
    ctx->pc = 0x4928B0u;
label_4928b0:
    // 0x4928b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4928b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4928b4:
    // 0x4928b4: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_4928b8:
    if (ctx->pc == 0x4928B8u) {
        ctx->pc = 0x4928BCu;
        goto label_4928bc;
    }
    ctx->pc = 0x4928B4u;
    {
        const bool branch_taken_0x4928b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4928b4) {
            ctx->pc = 0x492938u;
            goto label_492938;
        }
    }
    ctx->pc = 0x4928BCu;
label_4928bc:
    // 0x4928bc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x4928bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4928c0:
    // 0x4928c0: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_4928c4:
    if (ctx->pc == 0x4928C4u) {
        ctx->pc = 0x4928C8u;
        goto label_4928c8;
    }
    ctx->pc = 0x4928C0u;
    {
        const bool branch_taken_0x4928c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4928c0) {
            ctx->pc = 0x492928u;
            goto label_492928;
        }
    }
    ctx->pc = 0x4928C8u;
label_4928c8:
    // 0x4928c8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x4928c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4928cc:
    // 0x4928cc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_4928d0:
    if (ctx->pc == 0x4928D0u) {
        ctx->pc = 0x4928D4u;
        goto label_4928d4;
    }
    ctx->pc = 0x4928CCu;
    {
        const bool branch_taken_0x4928cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4928cc) {
            ctx->pc = 0x4928E0u;
            goto label_4928e0;
        }
    }
    ctx->pc = 0x4928D4u;
label_4928d4:
    // 0x4928d4: 0x10000024  b           . + 4 + (0x24 << 2)
label_4928d8:
    if (ctx->pc == 0x4928D8u) {
        ctx->pc = 0x4928DCu;
        goto label_4928dc;
    }
    ctx->pc = 0x4928D4u;
    {
        const bool branch_taken_0x4928d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4928d4) {
            ctx->pc = 0x492968u;
            goto label_492968;
        }
    }
    ctx->pc = 0x4928DCu;
label_4928dc:
    // 0x4928dc: 0x0  nop
    ctx->pc = 0x4928dcu;
    // NOP
label_4928e0:
    // 0x4928e0: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x4928e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_4928e4:
    // 0x4928e4: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
label_4928e8:
    if (ctx->pc == 0x4928E8u) {
        ctx->pc = 0x4928E8u;
            // 0x4928e8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4928ECu;
        goto label_4928ec;
    }
    ctx->pc = 0x4928E4u;
    {
        const bool branch_taken_0x4928e4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4928e4) {
            ctx->pc = 0x4928E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4928E4u;
            // 0x4928e8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x492900u;
            goto label_492900;
        }
    }
    ctx->pc = 0x4928ECu;
label_4928ec:
    // 0x4928ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4928ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4928f0:
    // 0x4928f0: 0x0  nop
    ctx->pc = 0x4928f0u;
    // NOP
label_4928f4:
    // 0x4928f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4928f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4928f8:
    // 0x4928f8: 0x10000009  b           . + 4 + (0x9 << 2)
label_4928fc:
    if (ctx->pc == 0x4928FCu) {
        ctx->pc = 0x4928FCu;
            // 0x4928fc: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->pc = 0x492900u;
        goto label_492900;
    }
    ctx->pc = 0x4928F8u;
    {
        const bool branch_taken_0x4928f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4928FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4928F8u;
            // 0x4928fc: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4928f8) {
            ctx->pc = 0x492920u;
            goto label_492920;
        }
    }
    ctx->pc = 0x492900u;
label_492900:
    // 0x492900: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x492900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_492904:
    // 0x492904: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x492904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_492908:
    // 0x492908: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x492908u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49290c:
    // 0x49290c: 0x0  nop
    ctx->pc = 0x49290cu;
    // NOP
label_492910:
    // 0x492910: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x492910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_492914:
    // 0x492914: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x492914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_492918:
    // 0x492918: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x492918u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_49291c:
    // 0x49291c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x49291cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_492920:
    // 0x492920: 0x10000011  b           . + 4 + (0x11 << 2)
label_492924:
    if (ctx->pc == 0x492924u) {
        ctx->pc = 0x492928u;
        goto label_492928;
    }
    ctx->pc = 0x492920u;
    {
        const bool branch_taken_0x492920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492920) {
            ctx->pc = 0x492968u;
            goto label_492968;
        }
    }
    ctx->pc = 0x492928u;
label_492928:
    // 0x492928: 0xc0497dc  jal         func_125F70
label_49292c:
    if (ctx->pc == 0x49292Cu) {
        ctx->pc = 0x49292Cu;
            // 0x49292c: 0xdfa401f8  ld          $a0, 0x1F8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->pc = 0x492930u;
        goto label_492930;
    }
    ctx->pc = 0x492928u;
    SET_GPR_U32(ctx, 31, 0x492930u);
    ctx->pc = 0x49292Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492928u;
            // 0x49292c: 0xdfa401f8  ld          $a0, 0x1F8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492930u; }
        if (ctx->pc != 0x492930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492930u; }
        if (ctx->pc != 0x492930u) { return; }
    }
    ctx->pc = 0x492930u;
label_492930:
    // 0x492930: 0x1000000d  b           . + 4 + (0xD << 2)
label_492934:
    if (ctx->pc == 0x492934u) {
        ctx->pc = 0x492934u;
            // 0x492934: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->pc = 0x492938u;
        goto label_492938;
    }
    ctx->pc = 0x492930u;
    {
        const bool branch_taken_0x492930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492930u;
            // 0x492934: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x492930) {
            ctx->pc = 0x492968u;
            goto label_492968;
        }
    }
    ctx->pc = 0x492938u;
label_492938:
    // 0x492938: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x492938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49293c:
    // 0x49293c: 0x1000000a  b           . + 4 + (0xA << 2)
label_492940:
    if (ctx->pc == 0x492940u) {
        ctx->pc = 0x492940u;
            // 0x492940: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->pc = 0x492944u;
        goto label_492944;
    }
    ctx->pc = 0x49293Cu;
    {
        const bool branch_taken_0x49293c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49293Cu;
            // 0x492940: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x49293c) {
            ctx->pc = 0x492968u;
            goto label_492968;
        }
    }
    ctx->pc = 0x492944u;
label_492944:
    // 0x492944: 0x0  nop
    ctx->pc = 0x492944u;
    // NOP
label_492948:
    // 0x492948: 0x93a201f8  lbu         $v0, 0x1F8($sp)
    ctx->pc = 0x492948u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 504)));
label_49294c:
    // 0x49294c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x49294cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_492950:
    // 0x492950: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x492950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_492954:
    // 0x492954: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x492954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_492958:
    // 0x492958: 0xc124524  jal         func_491490
label_49295c:
    if (ctx->pc == 0x49295Cu) {
        ctx->pc = 0x49295Cu;
            // 0x49295c: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->pc = 0x492960u;
        goto label_492960;
    }
    ctx->pc = 0x492958u;
    SET_GPR_U32(ctx, 31, 0x492960u);
    ctx->pc = 0x49295Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492958u;
            // 0x49295c: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x491490u;
    if (runtime->hasFunction(0x491490u)) {
        auto targetFn = runtime->lookupFunction(0x491490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492960u; }
        if (ctx->pc != 0x492960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00491490_0x491490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492960u; }
        if (ctx->pc != 0x492960u) { return; }
    }
    ctx->pc = 0x492960u;
label_492960:
    // 0x492960: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x492960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_492964:
    // 0x492964: 0x0  nop
    ctx->pc = 0x492964u;
    // NOP
label_492968:
    // 0x492968: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x492968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_49296c:
    // 0x49296c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x49296cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_492970:
    // 0x492970: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
label_492974:
    if (ctx->pc == 0x492974u) {
        ctx->pc = 0x492978u;
        goto label_492978;
    }
    ctx->pc = 0x492970u;
    {
        const bool branch_taken_0x492970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x492970) {
            ctx->pc = 0x492A10u;
            goto label_492a10;
        }
    }
    ctx->pc = 0x492978u;
label_492978:
    // 0x492978: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49297c:
    // 0x49297c: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_492980:
    if (ctx->pc == 0x492980u) {
        ctx->pc = 0x492984u;
        goto label_492984;
    }
    ctx->pc = 0x49297Cu;
    {
        const bool branch_taken_0x49297c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x49297c) {
            ctx->pc = 0x492A00u;
            goto label_492a00;
        }
    }
    ctx->pc = 0x492984u;
label_492984:
    // 0x492984: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x492984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_492988:
    // 0x492988: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_49298c:
    if (ctx->pc == 0x49298Cu) {
        ctx->pc = 0x492990u;
        goto label_492990;
    }
    ctx->pc = 0x492988u;
    {
        const bool branch_taken_0x492988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x492988) {
            ctx->pc = 0x4929F0u;
            goto label_4929f0;
        }
    }
    ctx->pc = 0x492990u;
label_492990:
    // 0x492990: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x492990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_492994:
    // 0x492994: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_492998:
    if (ctx->pc == 0x492998u) {
        ctx->pc = 0x49299Cu;
        goto label_49299c;
    }
    ctx->pc = 0x492994u;
    {
        const bool branch_taken_0x492994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x492994) {
            ctx->pc = 0x4929A8u;
            goto label_4929a8;
        }
    }
    ctx->pc = 0x49299Cu;
label_49299c:
    // 0x49299c: 0x10000024  b           . + 4 + (0x24 << 2)
label_4929a0:
    if (ctx->pc == 0x4929A0u) {
        ctx->pc = 0x4929A4u;
        goto label_4929a4;
    }
    ctx->pc = 0x49299Cu;
    {
        const bool branch_taken_0x49299c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49299c) {
            ctx->pc = 0x492A30u;
            goto label_492a30;
        }
    }
    ctx->pc = 0x4929A4u;
label_4929a4:
    // 0x4929a4: 0x0  nop
    ctx->pc = 0x4929a4u;
    // NOP
label_4929a8:
    // 0x4929a8: 0x8fa201c8  lw          $v0, 0x1C8($sp)
    ctx->pc = 0x4929a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_4929ac:
    // 0x4929ac: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
label_4929b0:
    if (ctx->pc == 0x4929B0u) {
        ctx->pc = 0x4929B0u;
            // 0x4929b0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4929B4u;
        goto label_4929b4;
    }
    ctx->pc = 0x4929ACu;
    {
        const bool branch_taken_0x4929ac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4929ac) {
            ctx->pc = 0x4929B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4929ACu;
            // 0x4929b0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4929C8u;
            goto label_4929c8;
        }
    }
    ctx->pc = 0x4929B4u;
label_4929b4:
    // 0x4929b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4929b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4929b8:
    // 0x4929b8: 0x0  nop
    ctx->pc = 0x4929b8u;
    // NOP
label_4929bc:
    // 0x4929bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4929bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4929c0:
    // 0x4929c0: 0x10000009  b           . + 4 + (0x9 << 2)
label_4929c4:
    if (ctx->pc == 0x4929C4u) {
        ctx->pc = 0x4929C4u;
            // 0x4929c4: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->pc = 0x4929C8u;
        goto label_4929c8;
    }
    ctx->pc = 0x4929C0u;
    {
        const bool branch_taken_0x4929c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4929C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4929C0u;
            // 0x4929c4: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4929c0) {
            ctx->pc = 0x4929E8u;
            goto label_4929e8;
        }
    }
    ctx->pc = 0x4929C8u;
label_4929c8:
    // 0x4929c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4929c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4929cc:
    // 0x4929cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4929ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4929d0:
    // 0x4929d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4929d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4929d4:
    // 0x4929d4: 0x0  nop
    ctx->pc = 0x4929d4u;
    // NOP
label_4929d8:
    // 0x4929d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4929d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4929dc:
    // 0x4929dc: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x4929dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_4929e0:
    // 0x4929e0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4929e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4929e4:
    // 0x4929e4: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x4929e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_4929e8:
    // 0x4929e8: 0x10000011  b           . + 4 + (0x11 << 2)
label_4929ec:
    if (ctx->pc == 0x4929ECu) {
        ctx->pc = 0x4929F0u;
        goto label_4929f0;
    }
    ctx->pc = 0x4929E8u;
    {
        const bool branch_taken_0x4929e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4929e8) {
            ctx->pc = 0x492A30u;
            goto label_492a30;
        }
    }
    ctx->pc = 0x4929F0u;
label_4929f0:
    // 0x4929f0: 0xc0497dc  jal         func_125F70
label_4929f4:
    if (ctx->pc == 0x4929F4u) {
        ctx->pc = 0x4929F4u;
            // 0x4929f4: 0xdfa401c8  ld          $a0, 0x1C8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 456)));
        ctx->pc = 0x4929F8u;
        goto label_4929f8;
    }
    ctx->pc = 0x4929F0u;
    SET_GPR_U32(ctx, 31, 0x4929F8u);
    ctx->pc = 0x4929F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4929F0u;
            // 0x4929f4: 0xdfa401c8  ld          $a0, 0x1C8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4929F8u; }
        if (ctx->pc != 0x4929F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4929F8u; }
        if (ctx->pc != 0x4929F8u) { return; }
    }
    ctx->pc = 0x4929F8u;
label_4929f8:
    // 0x4929f8: 0x1000000d  b           . + 4 + (0xD << 2)
label_4929fc:
    if (ctx->pc == 0x4929FCu) {
        ctx->pc = 0x4929FCu;
            // 0x4929fc: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->pc = 0x492A00u;
        goto label_492a00;
    }
    ctx->pc = 0x4929F8u;
    {
        const bool branch_taken_0x4929f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4929FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4929F8u;
            // 0x4929fc: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4929f8) {
            ctx->pc = 0x492A30u;
            goto label_492a30;
        }
    }
    ctx->pc = 0x492A00u;
label_492a00:
    // 0x492a00: 0xc7a001c8  lwc1        $f0, 0x1C8($sp)
    ctx->pc = 0x492a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_492a04:
    // 0x492a04: 0x1000000a  b           . + 4 + (0xA << 2)
label_492a08:
    if (ctx->pc == 0x492A08u) {
        ctx->pc = 0x492A08u;
            // 0x492a08: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->pc = 0x492A0Cu;
        goto label_492a0c;
    }
    ctx->pc = 0x492A04u;
    {
        const bool branch_taken_0x492a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492A04u;
            // 0x492a08: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x492a04) {
            ctx->pc = 0x492A30u;
            goto label_492a30;
        }
    }
    ctx->pc = 0x492A0Cu;
label_492a0c:
    // 0x492a0c: 0x0  nop
    ctx->pc = 0x492a0cu;
    // NOP
label_492a10:
    // 0x492a10: 0x93a201c8  lbu         $v0, 0x1C8($sp)
    ctx->pc = 0x492a10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 456)));
label_492a14:
    // 0x492a14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x492a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_492a18:
    // 0x492a18: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x492a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_492a1c:
    // 0x492a1c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x492a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_492a20:
    // 0x492a20: 0xc124524  jal         func_491490
label_492a24:
    if (ctx->pc == 0x492A24u) {
        ctx->pc = 0x492A24u;
            // 0x492a24: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->pc = 0x492A28u;
        goto label_492a28;
    }
    ctx->pc = 0x492A20u;
    SET_GPR_U32(ctx, 31, 0x492A28u);
    ctx->pc = 0x492A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492A20u;
            // 0x492a24: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x491490u;
    if (runtime->hasFunction(0x491490u)) {
        auto targetFn = runtime->lookupFunction(0x491490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492A28u; }
        if (ctx->pc != 0x492A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00491490_0x491490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492A28u; }
        if (ctx->pc != 0x492A28u) { return; }
    }
    ctx->pc = 0x492A28u;
label_492a28:
    // 0x492a28: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x492a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_492a2c:
    // 0x492a2c: 0x0  nop
    ctx->pc = 0x492a2cu;
    // NOP
label_492a30:
    // 0x492a30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x492a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492a34:
    // 0x492a34: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x492a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_492a38:
    // 0x492a38: 0xa3a601e0  sb          $a2, 0x1E0($sp)
    ctx->pc = 0x492a38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 480), (uint8_t)GPR_U32(ctx, 6));
label_492a3c:
    // 0x492a3c: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x492a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_492a40:
    // 0x492a40: 0x26840048  addiu       $a0, $s4, 0x48
    ctx->pc = 0x492a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_492a44:
    // 0x492a44: 0x27a701e0  addiu       $a3, $sp, 0x1E0
    ctx->pc = 0x492a44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_492a48:
    // 0x492a48: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x492a48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_492a4c:
    // 0x492a4c: 0xe7a001e8  swc1        $f0, 0x1E8($sp)
    ctx->pc = 0x492a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_492a50:
    // 0x492a50: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x492a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_492a54:
    // 0x492a54: 0x8e820050  lw          $v0, 0x50($s4)
    ctx->pc = 0x492a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_492a58:
    // 0x492a58: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x492a58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_492a5c:
    // 0x492a5c: 0xc125914  jal         func_496450
label_492a60:
    if (ctx->pc == 0x492A60u) {
        ctx->pc = 0x492A60u;
            // 0x492a60: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x492A64u;
        goto label_492a64;
    }
    ctx->pc = 0x492A5Cu;
    SET_GPR_U32(ctx, 31, 0x492A64u);
    ctx->pc = 0x492A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492A5Cu;
            // 0x492a60: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496450u;
    if (runtime->hasFunction(0x496450u)) {
        auto targetFn = runtime->lookupFunction(0x496450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492A64u; }
        if (ctx->pc != 0x492A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496450_0x496450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492A64u; }
        if (ctx->pc != 0x492A64u) { return; }
    }
    ctx->pc = 0x492A64u;
label_492a64:
    // 0x492a64: 0x10000602  b           . + 4 + (0x602 << 2)
label_492a68:
    if (ctx->pc == 0x492A68u) {
        ctx->pc = 0x492A6Cu;
        goto label_492a6c;
    }
    ctx->pc = 0x492A64u;
    {
        const bool branch_taken_0x492a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492a64) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x492A6Cu;
label_492a6c:
    // 0x492a6c: 0x0  nop
    ctx->pc = 0x492a6cu;
    // NOP
label_492a70:
    // 0x492a70: 0x27a402a8  addiu       $a0, $sp, 0x2A8
    ctx->pc = 0x492a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 680));
label_492a74:
    // 0x492a74: 0xc125124  jal         func_494490
label_492a78:
    if (ctx->pc == 0x492A78u) {
        ctx->pc = 0x492A78u;
            // 0x492a78: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->pc = 0x492A7Cu;
        goto label_492a7c;
    }
    ctx->pc = 0x492A74u;
    SET_GPR_U32(ctx, 31, 0x492A7Cu);
    ctx->pc = 0x492A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492A74u;
            // 0x492a78: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492A7Cu; }
        if (ctx->pc != 0x492A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492A7Cu; }
        if (ctx->pc != 0x492A7Cu) { return; }
    }
    ctx->pc = 0x492A7Cu;
label_492a7c:
    // 0x492a7c: 0x8fa502a8  lw          $a1, 0x2A8($sp)
    ctx->pc = 0x492a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
label_492a80:
    // 0x492a80: 0xc125120  jal         func_494480
label_492a84:
    if (ctx->pc == 0x492A84u) {
        ctx->pc = 0x492A84u;
            // 0x492a84: 0x27a40400  addiu       $a0, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->pc = 0x492A88u;
        goto label_492a88;
    }
    ctx->pc = 0x492A80u;
    SET_GPR_U32(ctx, 31, 0x492A88u);
    ctx->pc = 0x492A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492A80u;
            // 0x492a84: 0x27a40400  addiu       $a0, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492A88u; }
        if (ctx->pc != 0x492A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492A88u; }
        if (ctx->pc != 0x492A88u) { return; }
    }
    ctx->pc = 0x492A88u;
label_492a88:
    // 0x492a88: 0x8fa30400  lw          $v1, 0x400($sp)
    ctx->pc = 0x492a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
label_492a8c:
    // 0x492a8c: 0x27a402a4  addiu       $a0, $sp, 0x2A4
    ctx->pc = 0x492a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 676));
label_492a90:
    // 0x492a90: 0x26850048  addiu       $a1, $s4, 0x48
    ctx->pc = 0x492a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_492a94:
    // 0x492a94: 0x9062fff0  lbu         $v0, -0x10($v1)
    ctx->pc = 0x492a94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_492a98:
    // 0x492a98: 0xa3a201f0  sb          $v0, 0x1F0($sp)
    ctx->pc = 0x492a98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 496), (uint8_t)GPR_U32(ctx, 2));
label_492a9c:
    // 0x492a9c: 0xdc62fff8  ld          $v0, -0x8($v1)
    ctx->pc = 0x492a9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_492aa0:
    // 0x492aa0: 0xffa201f8  sd          $v0, 0x1F8($sp)
    ctx->pc = 0x492aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 2));
label_492aa4:
    // 0x492aa4: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x492aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_492aa8:
    // 0x492aa8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x492aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_492aac:
    // 0x492aac: 0xc125124  jal         func_494490
label_492ab0:
    if (ctx->pc == 0x492AB0u) {
        ctx->pc = 0x492AB0u;
            // 0x492ab0: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x492AB4u;
        goto label_492ab4;
    }
    ctx->pc = 0x492AACu;
    SET_GPR_U32(ctx, 31, 0x492AB4u);
    ctx->pc = 0x492AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492AACu;
            // 0x492ab0: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492AB4u; }
        if (ctx->pc != 0x492AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492AB4u; }
        if (ctx->pc != 0x492AB4u) { return; }
    }
    ctx->pc = 0x492AB4u;
label_492ab4:
    // 0x492ab4: 0x8fa502a4  lw          $a1, 0x2A4($sp)
    ctx->pc = 0x492ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
label_492ab8:
    // 0x492ab8: 0xc125120  jal         func_494480
label_492abc:
    if (ctx->pc == 0x492ABCu) {
        ctx->pc = 0x492ABCu;
            // 0x492abc: 0x27a403fc  addiu       $a0, $sp, 0x3FC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1020));
        ctx->pc = 0x492AC0u;
        goto label_492ac0;
    }
    ctx->pc = 0x492AB8u;
    SET_GPR_U32(ctx, 31, 0x492AC0u);
    ctx->pc = 0x492ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492AB8u;
            // 0x492abc: 0x27a403fc  addiu       $a0, $sp, 0x3FC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1020));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492AC0u; }
        if (ctx->pc != 0x492AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492AC0u; }
        if (ctx->pc != 0x492AC0u) { return; }
    }
    ctx->pc = 0x492AC0u;
label_492ac0:
    // 0x492ac0: 0x8fa403fc  lw          $a0, 0x3FC($sp)
    ctx->pc = 0x492ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1020)));
label_492ac4:
    // 0x492ac4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x492ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_492ac8:
    // 0x492ac8: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x492ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_492acc:
    // 0x492acc: 0x9091fff0  lbu         $s1, -0x10($a0)
    ctx->pc = 0x492accu;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967280)));
label_492ad0:
    // 0x492ad0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x492ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_492ad4:
    // 0x492ad4: 0xdc84fff8  ld          $a0, -0x8($a0)
    ctx->pc = 0x492ad4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_492ad8:
    // 0x492ad8: 0xae83004c  sw          $v1, 0x4C($s4)
    ctx->pc = 0x492ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 3));
label_492adc:
    // 0x492adc: 0x93a301f0  lbu         $v1, 0x1F0($sp)
    ctx->pc = 0x492adcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 496)));
label_492ae0:
    // 0x492ae0: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
label_492ae4:
    if (ctx->pc == 0x492AE4u) {
        ctx->pc = 0x492AE4u;
            // 0x492ae4: 0xffa401c8  sd          $a0, 0x1C8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 4));
        ctx->pc = 0x492AE8u;
        goto label_492ae8;
    }
    ctx->pc = 0x492AE0u;
    {
        const bool branch_taken_0x492ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x492AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492AE0u;
            // 0x492ae4: 0xffa401c8  sd          $a0, 0x1C8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492ae0) {
            ctx->pc = 0x492B68u;
            goto label_492b68;
        }
    }
    ctx->pc = 0x492AE8u;
label_492ae8:
    // 0x492ae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492aec:
    // 0x492aec: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
label_492af0:
    if (ctx->pc == 0x492AF0u) {
        ctx->pc = 0x492AF4u;
        goto label_492af4;
    }
    ctx->pc = 0x492AECu;
    {
        const bool branch_taken_0x492aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x492aec) {
            ctx->pc = 0x492B60u;
            goto label_492b60;
        }
    }
    ctx->pc = 0x492AF4u;
label_492af4:
    // 0x492af4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x492af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_492af8:
    // 0x492af8: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_492afc:
    if (ctx->pc == 0x492AFCu) {
        ctx->pc = 0x492B00u;
        goto label_492b00;
    }
    ctx->pc = 0x492AF8u;
    {
        const bool branch_taken_0x492af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x492af8) {
            ctx->pc = 0x492B50u;
            goto label_492b50;
        }
    }
    ctx->pc = 0x492B00u;
label_492b00:
    // 0x492b00: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x492b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_492b04:
    // 0x492b04: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_492b08:
    if (ctx->pc == 0x492B08u) {
        ctx->pc = 0x492B0Cu;
        goto label_492b0c;
    }
    ctx->pc = 0x492B04u;
    {
        const bool branch_taken_0x492b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x492b04) {
            ctx->pc = 0x492B18u;
            goto label_492b18;
        }
    }
    ctx->pc = 0x492B0Cu;
label_492b0c:
    // 0x492b0c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_492b10:
    if (ctx->pc == 0x492B10u) {
        ctx->pc = 0x492B14u;
        goto label_492b14;
    }
    ctx->pc = 0x492B0Cu;
    {
        const bool branch_taken_0x492b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492b0c) {
            ctx->pc = 0x492B88u;
            goto label_492b88;
        }
    }
    ctx->pc = 0x492B14u;
label_492b14:
    // 0x492b14: 0x0  nop
    ctx->pc = 0x492b14u;
    // NOP
label_492b18:
    // 0x492b18: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x492b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_492b1c:
    // 0x492b1c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_492b20:
    if (ctx->pc == 0x492B20u) {
        ctx->pc = 0x492B20u;
            // 0x492b20: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x492B24u;
        goto label_492b24;
    }
    ctx->pc = 0x492B1Cu;
    {
        const bool branch_taken_0x492b1c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x492b1c) {
            ctx->pc = 0x492B20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x492B1Cu;
            // 0x492b20: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x492B30u;
            goto label_492b30;
        }
    }
    ctx->pc = 0x492B24u;
label_492b24:
    // 0x492b24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x492b24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_492b28:
    // 0x492b28: 0x10000007  b           . + 4 + (0x7 << 2)
label_492b2c:
    if (ctx->pc == 0x492B2Cu) {
        ctx->pc = 0x492B2Cu;
            // 0x492b2c: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x492B30u;
        goto label_492b30;
    }
    ctx->pc = 0x492B28u;
    {
        const bool branch_taken_0x492b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492B28u;
            // 0x492b2c: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x492b28) {
            ctx->pc = 0x492B48u;
            goto label_492b48;
        }
    }
    ctx->pc = 0x492B30u;
label_492b30:
    // 0x492b30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x492b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_492b34:
    // 0x492b34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x492b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_492b38:
    // 0x492b38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x492b38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_492b3c:
    // 0x492b3c: 0x0  nop
    ctx->pc = 0x492b3cu;
    // NOP
label_492b40:
    // 0x492b40: 0x468005e0  cvt.s.w     $f23, $f0
    ctx->pc = 0x492b40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
label_492b44:
    // 0x492b44: 0x4617bdc0  add.s       $f23, $f23, $f23
    ctx->pc = 0x492b44u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[23]);
label_492b48:
    // 0x492b48: 0x1000000f  b           . + 4 + (0xF << 2)
label_492b4c:
    if (ctx->pc == 0x492B4Cu) {
        ctx->pc = 0x492B50u;
        goto label_492b50;
    }
    ctx->pc = 0x492B48u;
    {
        const bool branch_taken_0x492b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492b48) {
            ctx->pc = 0x492B88u;
            goto label_492b88;
        }
    }
    ctx->pc = 0x492B50u;
label_492b50:
    // 0x492b50: 0xc0497dc  jal         func_125F70
label_492b54:
    if (ctx->pc == 0x492B54u) {
        ctx->pc = 0x492B54u;
            // 0x492b54: 0xdfa401f8  ld          $a0, 0x1F8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->pc = 0x492B58u;
        goto label_492b58;
    }
    ctx->pc = 0x492B50u;
    SET_GPR_U32(ctx, 31, 0x492B58u);
    ctx->pc = 0x492B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492B50u;
            // 0x492b54: 0xdfa401f8  ld          $a0, 0x1F8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492B58u; }
        if (ctx->pc != 0x492B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492B58u; }
        if (ctx->pc != 0x492B58u) { return; }
    }
    ctx->pc = 0x492B58u;
label_492b58:
    // 0x492b58: 0x1000000b  b           . + 4 + (0xB << 2)
label_492b5c:
    if (ctx->pc == 0x492B5Cu) {
        ctx->pc = 0x492B5Cu;
            // 0x492b5c: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x492B60u;
        goto label_492b60;
    }
    ctx->pc = 0x492B58u;
    {
        const bool branch_taken_0x492b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492B58u;
            // 0x492b5c: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x492b58) {
            ctx->pc = 0x492B88u;
            goto label_492b88;
        }
    }
    ctx->pc = 0x492B60u;
label_492b60:
    // 0x492b60: 0x10000009  b           . + 4 + (0x9 << 2)
label_492b64:
    if (ctx->pc == 0x492B64u) {
        ctx->pc = 0x492B64u;
            // 0x492b64: 0xc7b701f8  lwc1        $f23, 0x1F8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
        ctx->pc = 0x492B68u;
        goto label_492b68;
    }
    ctx->pc = 0x492B60u;
    {
        const bool branch_taken_0x492b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492B60u;
            // 0x492b64: 0xc7b701f8  lwc1        $f23, 0x1F8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x492b60) {
            ctx->pc = 0x492B88u;
            goto label_492b88;
        }
    }
    ctx->pc = 0x492B68u;
label_492b68:
    // 0x492b68: 0x93a201f8  lbu         $v0, 0x1F8($sp)
    ctx->pc = 0x492b68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 504)));
label_492b6c:
    // 0x492b6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x492b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_492b70:
    // 0x492b70: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x492b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_492b74:
    // 0x492b74: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x492b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_492b78:
    // 0x492b78: 0xc124524  jal         func_491490
label_492b7c:
    if (ctx->pc == 0x492B7Cu) {
        ctx->pc = 0x492B7Cu;
            // 0x492b7c: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->pc = 0x492B80u;
        goto label_492b80;
    }
    ctx->pc = 0x492B78u;
    SET_GPR_U32(ctx, 31, 0x492B80u);
    ctx->pc = 0x492B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492B78u;
            // 0x492b7c: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x491490u;
    if (runtime->hasFunction(0x491490u)) {
        auto targetFn = runtime->lookupFunction(0x491490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492B80u; }
        if (ctx->pc != 0x492B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00491490_0x491490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492B80u; }
        if (ctx->pc != 0x492B80u) { return; }
    }
    ctx->pc = 0x492B80u;
label_492b80:
    // 0x492b80: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x492b80u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_492b84:
    // 0x492b84: 0x0  nop
    ctx->pc = 0x492b84u;
    // NOP
label_492b88:
    // 0x492b88: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x492b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_492b8c:
    // 0x492b8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x492b8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_492b90:
    // 0x492b90: 0x0  nop
    ctx->pc = 0x492b90u;
    // NOP
label_492b94:
    // 0x492b94: 0x46170036  c.le.s      $f0, $f23
    ctx->pc = 0x492b94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_492b98:
    // 0x492b98: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_492b9c:
    if (ctx->pc == 0x492B9Cu) {
        ctx->pc = 0x492B9Cu;
            // 0x492b9c: 0x4600b801  sub.s       $f0, $f23, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
        ctx->pc = 0x492BA0u;
        goto label_492ba0;
    }
    ctx->pc = 0x492B98u;
    {
        const bool branch_taken_0x492b98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x492b98) {
            ctx->pc = 0x492B9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x492B98u;
            // 0x492b9c: 0x4600b801  sub.s       $f0, $f23, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x492BB0u;
            goto label_492bb0;
        }
    }
    ctx->pc = 0x492BA0u;
label_492ba0:
    // 0x492ba0: 0x4600b824  .word       0x4600B824                   # cvt.w.s     $f0, $f23 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x492ba0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[23]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_492ba4:
    // 0x492ba4: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x492ba4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_492ba8:
    // 0x492ba8: 0x10000007  b           . + 4 + (0x7 << 2)
label_492bac:
    if (ctx->pc == 0x492BACu) {
        ctx->pc = 0x492BACu;
            // 0x492bac: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x492BB0u;
        goto label_492bb0;
    }
    ctx->pc = 0x492BA8u;
    {
        const bool branch_taken_0x492ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492BA8u;
            // 0x492bac: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x492ba8) {
            ctx->pc = 0x492BC8u;
            goto label_492bc8;
        }
    }
    ctx->pc = 0x492BB0u;
label_492bb0:
    // 0x492bb0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x492bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_492bb4:
    // 0x492bb4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x492bb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_492bb8:
    // 0x492bb8: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x492bb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_492bbc:
    // 0x492bbc: 0x0  nop
    ctx->pc = 0x492bbcu;
    // NOP
label_492bc0:
    // 0x492bc0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x492bc0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_492bc4:
    // 0x492bc4: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x492bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_492bc8:
    // 0x492bc8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x492bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_492bcc:
    // 0x492bcc: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_492bd0:
    if (ctx->pc == 0x492BD0u) {
        ctx->pc = 0x492BD4u;
        goto label_492bd4;
    }
    ctx->pc = 0x492BCCu;
    {
        const bool branch_taken_0x492bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x492bcc) {
            ctx->pc = 0x492C50u;
            goto label_492c50;
        }
    }
    ctx->pc = 0x492BD4u;
label_492bd4:
    // 0x492bd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492bd8:
    // 0x492bd8: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
label_492bdc:
    if (ctx->pc == 0x492BDCu) {
        ctx->pc = 0x492BE0u;
        goto label_492be0;
    }
    ctx->pc = 0x492BD8u;
    {
        const bool branch_taken_0x492bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x492bd8) {
            ctx->pc = 0x492C48u;
            goto label_492c48;
        }
    }
    ctx->pc = 0x492BE0u;
label_492be0:
    // 0x492be0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x492be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_492be4:
    // 0x492be4: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_492be8:
    if (ctx->pc == 0x492BE8u) {
        ctx->pc = 0x492BECu;
        goto label_492bec;
    }
    ctx->pc = 0x492BE4u;
    {
        const bool branch_taken_0x492be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x492be4) {
            ctx->pc = 0x492C38u;
            goto label_492c38;
        }
    }
    ctx->pc = 0x492BECu;
label_492bec:
    // 0x492bec: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x492becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_492bf0:
    // 0x492bf0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_492bf4:
    if (ctx->pc == 0x492BF4u) {
        ctx->pc = 0x492BF8u;
        goto label_492bf8;
    }
    ctx->pc = 0x492BF0u;
    {
        const bool branch_taken_0x492bf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x492bf0) {
            ctx->pc = 0x492C00u;
            goto label_492c00;
        }
    }
    ctx->pc = 0x492BF8u;
label_492bf8:
    // 0x492bf8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_492bfc:
    if (ctx->pc == 0x492BFCu) {
        ctx->pc = 0x492C00u;
        goto label_492c00;
    }
    ctx->pc = 0x492BF8u;
    {
        const bool branch_taken_0x492bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492bf8) {
            ctx->pc = 0x492C70u;
            goto label_492c70;
        }
    }
    ctx->pc = 0x492C00u;
label_492c00:
    // 0x492c00: 0x8fa201c8  lw          $v0, 0x1C8($sp)
    ctx->pc = 0x492c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_492c04:
    // 0x492c04: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_492c08:
    if (ctx->pc == 0x492C08u) {
        ctx->pc = 0x492C08u;
            // 0x492c08: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x492C0Cu;
        goto label_492c0c;
    }
    ctx->pc = 0x492C04u;
    {
        const bool branch_taken_0x492c04 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x492c04) {
            ctx->pc = 0x492C08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x492C04u;
            // 0x492c08: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x492C18u;
            goto label_492c18;
        }
    }
    ctx->pc = 0x492C0Cu;
label_492c0c:
    // 0x492c0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x492c0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_492c10:
    // 0x492c10: 0x10000007  b           . + 4 + (0x7 << 2)
label_492c14:
    if (ctx->pc == 0x492C14u) {
        ctx->pc = 0x492C14u;
            // 0x492c14: 0x468005a0  cvt.s.w     $f22, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x492C18u;
        goto label_492c18;
    }
    ctx->pc = 0x492C10u;
    {
        const bool branch_taken_0x492c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492C10u;
            // 0x492c14: 0x468005a0  cvt.s.w     $f22, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x492c10) {
            ctx->pc = 0x492C30u;
            goto label_492c30;
        }
    }
    ctx->pc = 0x492C18u;
label_492c18:
    // 0x492c18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x492c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_492c1c:
    // 0x492c1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x492c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_492c20:
    // 0x492c20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x492c20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_492c24:
    // 0x492c24: 0x0  nop
    ctx->pc = 0x492c24u;
    // NOP
label_492c28:
    // 0x492c28: 0x468005a0  cvt.s.w     $f22, $f0
    ctx->pc = 0x492c28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_492c2c:
    // 0x492c2c: 0x4616b580  add.s       $f22, $f22, $f22
    ctx->pc = 0x492c2cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
label_492c30:
    // 0x492c30: 0x1000000f  b           . + 4 + (0xF << 2)
label_492c34:
    if (ctx->pc == 0x492C34u) {
        ctx->pc = 0x492C38u;
        goto label_492c38;
    }
    ctx->pc = 0x492C30u;
    {
        const bool branch_taken_0x492c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492c30) {
            ctx->pc = 0x492C70u;
            goto label_492c70;
        }
    }
    ctx->pc = 0x492C38u;
label_492c38:
    // 0x492c38: 0xc0497dc  jal         func_125F70
label_492c3c:
    if (ctx->pc == 0x492C3Cu) {
        ctx->pc = 0x492C3Cu;
            // 0x492c3c: 0xdfa401c8  ld          $a0, 0x1C8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 456)));
        ctx->pc = 0x492C40u;
        goto label_492c40;
    }
    ctx->pc = 0x492C38u;
    SET_GPR_U32(ctx, 31, 0x492C40u);
    ctx->pc = 0x492C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492C38u;
            // 0x492c3c: 0xdfa401c8  ld          $a0, 0x1C8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492C40u; }
        if (ctx->pc != 0x492C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492C40u; }
        if (ctx->pc != 0x492C40u) { return; }
    }
    ctx->pc = 0x492C40u;
label_492c40:
    // 0x492c40: 0x1000000b  b           . + 4 + (0xB << 2)
label_492c44:
    if (ctx->pc == 0x492C44u) {
        ctx->pc = 0x492C44u;
            // 0x492c44: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x492C48u;
        goto label_492c48;
    }
    ctx->pc = 0x492C40u;
    {
        const bool branch_taken_0x492c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492C40u;
            // 0x492c44: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x492c40) {
            ctx->pc = 0x492C70u;
            goto label_492c70;
        }
    }
    ctx->pc = 0x492C48u;
label_492c48:
    // 0x492c48: 0x10000009  b           . + 4 + (0x9 << 2)
label_492c4c:
    if (ctx->pc == 0x492C4Cu) {
        ctx->pc = 0x492C4Cu;
            // 0x492c4c: 0xc7b601c8  lwc1        $f22, 0x1C8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->pc = 0x492C50u;
        goto label_492c50;
    }
    ctx->pc = 0x492C48u;
    {
        const bool branch_taken_0x492c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492C48u;
            // 0x492c4c: 0xc7b601c8  lwc1        $f22, 0x1C8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x492c48) {
            ctx->pc = 0x492C70u;
            goto label_492c70;
        }
    }
    ctx->pc = 0x492C50u;
label_492c50:
    // 0x492c50: 0x93a201c8  lbu         $v0, 0x1C8($sp)
    ctx->pc = 0x492c50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 456)));
label_492c54:
    // 0x492c54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x492c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_492c58:
    // 0x492c58: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x492c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_492c5c:
    // 0x492c5c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x492c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_492c60:
    // 0x492c60: 0xc124524  jal         func_491490
label_492c64:
    if (ctx->pc == 0x492C64u) {
        ctx->pc = 0x492C64u;
            // 0x492c64: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->pc = 0x492C68u;
        goto label_492c68;
    }
    ctx->pc = 0x492C60u;
    SET_GPR_U32(ctx, 31, 0x492C68u);
    ctx->pc = 0x492C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492C60u;
            // 0x492c64: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x491490u;
    if (runtime->hasFunction(0x491490u)) {
        auto targetFn = runtime->lookupFunction(0x491490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492C68u; }
        if (ctx->pc != 0x492C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00491490_0x491490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492C68u; }
        if (ctx->pc != 0x492C68u) { return; }
    }
    ctx->pc = 0x492C68u;
label_492c68:
    // 0x492c68: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x492c68u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_492c6c:
    // 0x492c6c: 0x0  nop
    ctx->pc = 0x492c6cu;
    // NOP
label_492c70:
    // 0x492c70: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x492c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_492c74:
    // 0x492c74: 0xa3a201e0  sb          $v0, 0x1E0($sp)
    ctx->pc = 0x492c74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 480), (uint8_t)GPR_U32(ctx, 2));
label_492c78:
    // 0x492c78: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x492c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_492c7c:
    // 0x492c7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x492c7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_492c80:
    // 0x492c80: 0x0  nop
    ctx->pc = 0x492c80u;
    // NOP
label_492c84:
    // 0x492c84: 0x46160036  c.le.s      $f0, $f22
    ctx->pc = 0x492c84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_492c88:
    // 0x492c88: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_492c8c:
    if (ctx->pc == 0x492C8Cu) {
        ctx->pc = 0x492C8Cu;
            // 0x492c8c: 0x4600b001  sub.s       $f0, $f22, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        ctx->pc = 0x492C90u;
        goto label_492c90;
    }
    ctx->pc = 0x492C88u;
    {
        const bool branch_taken_0x492c88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x492c88) {
            ctx->pc = 0x492C8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x492C88u;
            // 0x492c8c: 0x4600b001  sub.s       $f0, $f22, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x492CA0u;
            goto label_492ca0;
        }
    }
    ctx->pc = 0x492C90u;
label_492c90:
    // 0x492c90: 0x4600b024  .word       0x4600B024                   # cvt.w.s     $f0, $f22 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x492c90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[22]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_492c94:
    // 0x492c94: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x492c94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_492c98:
    // 0x492c98: 0x10000007  b           . + 4 + (0x7 << 2)
label_492c9c:
    if (ctx->pc == 0x492C9Cu) {
        ctx->pc = 0x492C9Cu;
            // 0x492c9c: 0x203082b  sltu        $at, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->pc = 0x492CA0u;
        goto label_492ca0;
    }
    ctx->pc = 0x492C98u;
    {
        const bool branch_taken_0x492c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492C98u;
            // 0x492c9c: 0x203082b  sltu        $at, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x492c98) {
            ctx->pc = 0x492CB8u;
            goto label_492cb8;
        }
    }
    ctx->pc = 0x492CA0u;
label_492ca0:
    // 0x492ca0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x492ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_492ca4:
    // 0x492ca4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x492ca4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_492ca8:
    // 0x492ca8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x492ca8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_492cac:
    // 0x492cac: 0x0  nop
    ctx->pc = 0x492cacu;
    // NOP
label_492cb0:
    // 0x492cb0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x492cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_492cb4:
    // 0x492cb4: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x492cb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_492cb8:
    // 0x492cb8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_492cbc:
    if (ctx->pc == 0x492CBCu) {
        ctx->pc = 0x492CC0u;
        goto label_492cc0;
    }
    ctx->pc = 0x492CB8u;
    {
        const bool branch_taken_0x492cb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x492cb8) {
            ctx->pc = 0x492CD0u;
            goto label_492cd0;
        }
    }
    ctx->pc = 0x492CC0u;
label_492cc0:
    // 0x492cc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492cc4:
    // 0x492cc4: 0x10000004  b           . + 4 + (0x4 << 2)
label_492cc8:
    if (ctx->pc == 0x492CC8u) {
        ctx->pc = 0x492CC8u;
            // 0x492cc8: 0xa3a201e8  sb          $v0, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x492CCCu;
        goto label_492ccc;
    }
    ctx->pc = 0x492CC4u;
    {
        const bool branch_taken_0x492cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492CC4u;
            // 0x492cc8: 0xa3a201e8  sb          $v0, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492cc4) {
            ctx->pc = 0x492CD8u;
            goto label_492cd8;
        }
    }
    ctx->pc = 0x492CCCu;
label_492ccc:
    // 0x492ccc: 0x0  nop
    ctx->pc = 0x492cccu;
    // NOP
label_492cd0:
    // 0x492cd0: 0xa3a001e8  sb          $zero, 0x1E8($sp)
    ctx->pc = 0x492cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 0));
label_492cd4:
    // 0x492cd4: 0x0  nop
    ctx->pc = 0x492cd4u;
    // NOP
label_492cd8:
    // 0x492cd8: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x492cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_492cdc:
    // 0x492cdc: 0x8e820050  lw          $v0, 0x50($s4)
    ctx->pc = 0x492cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_492ce0:
    // 0x492ce0: 0x26840048  addiu       $a0, $s4, 0x48
    ctx->pc = 0x492ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_492ce4:
    // 0x492ce4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x492ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492ce8:
    // 0x492ce8: 0x27a701e0  addiu       $a3, $sp, 0x1E0
    ctx->pc = 0x492ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_492cec:
    // 0x492cec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x492cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_492cf0:
    // 0x492cf0: 0xc125914  jal         func_496450
label_492cf4:
    if (ctx->pc == 0x492CF4u) {
        ctx->pc = 0x492CF4u;
            // 0x492cf4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x492CF8u;
        goto label_492cf8;
    }
    ctx->pc = 0x492CF0u;
    SET_GPR_U32(ctx, 31, 0x492CF8u);
    ctx->pc = 0x492CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492CF0u;
            // 0x492cf4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496450u;
    if (runtime->hasFunction(0x496450u)) {
        auto targetFn = runtime->lookupFunction(0x496450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492CF8u; }
        if (ctx->pc != 0x492CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496450_0x496450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492CF8u; }
        if (ctx->pc != 0x492CF8u) { return; }
    }
    ctx->pc = 0x492CF8u;
label_492cf8:
    // 0x492cf8: 0x1000055d  b           . + 4 + (0x55D << 2)
label_492cfc:
    if (ctx->pc == 0x492CFCu) {
        ctx->pc = 0x492D00u;
        goto label_492d00;
    }
    ctx->pc = 0x492CF8u;
    {
        const bool branch_taken_0x492cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492cf8) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x492D00u;
label_492d00:
    // 0x492d00: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x492d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_492d04:
    // 0x492d04: 0xc125124  jal         func_494490
label_492d08:
    if (ctx->pc == 0x492D08u) {
        ctx->pc = 0x492D08u;
            // 0x492d08: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->pc = 0x492D0Cu;
        goto label_492d0c;
    }
    ctx->pc = 0x492D04u;
    SET_GPR_U32(ctx, 31, 0x492D0Cu);
    ctx->pc = 0x492D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492D04u;
            // 0x492d08: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492D0Cu; }
        if (ctx->pc != 0x492D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492D0Cu; }
        if (ctx->pc != 0x492D0Cu) { return; }
    }
    ctx->pc = 0x492D0Cu;
label_492d0c:
    // 0x492d0c: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x492d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_492d10:
    // 0x492d10: 0xc125120  jal         func_494480
label_492d14:
    if (ctx->pc == 0x492D14u) {
        ctx->pc = 0x492D14u;
            // 0x492d14: 0x27a403f8  addiu       $a0, $sp, 0x3F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1016));
        ctx->pc = 0x492D18u;
        goto label_492d18;
    }
    ctx->pc = 0x492D10u;
    SET_GPR_U32(ctx, 31, 0x492D18u);
    ctx->pc = 0x492D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492D10u;
            // 0x492d14: 0x27a403f8  addiu       $a0, $sp, 0x3F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492D18u; }
        if (ctx->pc != 0x492D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492D18u; }
        if (ctx->pc != 0x492D18u) { return; }
    }
    ctx->pc = 0x492D18u;
label_492d18:
    // 0x492d18: 0x8fa403f8  lw          $a0, 0x3F8($sp)
    ctx->pc = 0x492d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1016)));
label_492d1c:
    // 0x492d1c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x492d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_492d20:
    // 0x492d20: 0x9083fff0  lbu         $v1, -0x10($a0)
    ctx->pc = 0x492d20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967280)));
label_492d24:
    // 0x492d24: 0xa3a301f0  sb          $v1, 0x1F0($sp)
    ctx->pc = 0x492d24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 496), (uint8_t)GPR_U32(ctx, 3));
label_492d28:
    // 0x492d28: 0xdc83fff8  ld          $v1, -0x8($a0)
    ctx->pc = 0x492d28u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_492d2c:
    // 0x492d2c: 0xffa301f8  sd          $v1, 0x1F8($sp)
    ctx->pc = 0x492d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 3));
label_492d30:
    // 0x492d30: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x492d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_492d34:
    // 0x492d34: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x492d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_492d38:
    // 0x492d38: 0xae83004c  sw          $v1, 0x4C($s4)
    ctx->pc = 0x492d38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 3));
label_492d3c:
    // 0x492d3c: 0x93a301f0  lbu         $v1, 0x1F0($sp)
    ctx->pc = 0x492d3cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 496)));
label_492d40:
    // 0x492d40: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_492d44:
    if (ctx->pc == 0x492D44u) {
        ctx->pc = 0x492D44u;
            // 0x492d44: 0xa3a201e0  sb          $v0, 0x1E0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 480), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x492D48u;
        goto label_492d48;
    }
    ctx->pc = 0x492D40u;
    {
        const bool branch_taken_0x492d40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x492D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492D40u;
            // 0x492d44: 0xa3a201e0  sb          $v0, 0x1E0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 480), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492d40) {
            ctx->pc = 0x492D90u;
            goto label_492d90;
        }
    }
    ctx->pc = 0x492D48u;
label_492d48:
    // 0x492d48: 0x93a201f8  lbu         $v0, 0x1F8($sp)
    ctx->pc = 0x492d48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 504)));
label_492d4c:
    // 0x492d4c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_492d50:
    if (ctx->pc == 0x492D50u) {
        ctx->pc = 0x492D54u;
        goto label_492d54;
    }
    ctx->pc = 0x492D4Cu;
    {
        const bool branch_taken_0x492d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x492d4c) {
            ctx->pc = 0x492D60u;
            goto label_492d60;
        }
    }
    ctx->pc = 0x492D54u;
label_492d54:
    // 0x492d54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492d58:
    // 0x492d58: 0x10000003  b           . + 4 + (0x3 << 2)
label_492d5c:
    if (ctx->pc == 0x492D5Cu) {
        ctx->pc = 0x492D5Cu;
            // 0x492d5c: 0xa3a201e8  sb          $v0, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x492D60u;
        goto label_492d60;
    }
    ctx->pc = 0x492D58u;
    {
        const bool branch_taken_0x492d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492D58u;
            // 0x492d5c: 0xa3a201e8  sb          $v0, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492d58) {
            ctx->pc = 0x492D68u;
            goto label_492d68;
        }
    }
    ctx->pc = 0x492D60u;
label_492d60:
    // 0x492d60: 0xa3a001e8  sb          $zero, 0x1E8($sp)
    ctx->pc = 0x492d60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 0));
label_492d64:
    // 0x492d64: 0x0  nop
    ctx->pc = 0x492d64u;
    // NOP
label_492d68:
    // 0x492d68: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x492d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_492d6c:
    // 0x492d6c: 0x8e820050  lw          $v0, 0x50($s4)
    ctx->pc = 0x492d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_492d70:
    // 0x492d70: 0x26840048  addiu       $a0, $s4, 0x48
    ctx->pc = 0x492d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_492d74:
    // 0x492d74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x492d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492d78:
    // 0x492d78: 0x27a701e0  addiu       $a3, $sp, 0x1E0
    ctx->pc = 0x492d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_492d7c:
    // 0x492d7c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x492d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_492d80:
    // 0x492d80: 0xc125914  jal         func_496450
label_492d84:
    if (ctx->pc == 0x492D84u) {
        ctx->pc = 0x492D84u;
            // 0x492d84: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x492D88u;
        goto label_492d88;
    }
    ctx->pc = 0x492D80u;
    SET_GPR_U32(ctx, 31, 0x492D88u);
    ctx->pc = 0x492D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492D80u;
            // 0x492d84: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496450u;
    if (runtime->hasFunction(0x496450u)) {
        auto targetFn = runtime->lookupFunction(0x496450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492D88u; }
        if (ctx->pc != 0x492D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496450_0x496450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492D88u; }
        if (ctx->pc != 0x492D88u) { return; }
    }
    ctx->pc = 0x492D88u;
label_492d88:
    // 0x492d88: 0x10000539  b           . + 4 + (0x539 << 2)
label_492d8c:
    if (ctx->pc == 0x492D8Cu) {
        ctx->pc = 0x492D90u;
        goto label_492d90;
    }
    ctx->pc = 0x492D88u;
    {
        const bool branch_taken_0x492d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492d88) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x492D90u;
label_492d90:
    // 0x492d90: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x492d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_492d94:
    // 0x492d94: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_492d98:
    if (ctx->pc == 0x492D98u) {
        ctx->pc = 0x492D9Cu;
        goto label_492d9c;
    }
    ctx->pc = 0x492D94u;
    {
        const bool branch_taken_0x492d94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x492d94) {
            ctx->pc = 0x492E18u;
            goto label_492e18;
        }
    }
    ctx->pc = 0x492D9Cu;
label_492d9c:
    // 0x492d9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492da0:
    // 0x492da0: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
label_492da4:
    if (ctx->pc == 0x492DA4u) {
        ctx->pc = 0x492DA8u;
        goto label_492da8;
    }
    ctx->pc = 0x492DA0u;
    {
        const bool branch_taken_0x492da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x492da0) {
            ctx->pc = 0x492E10u;
            goto label_492e10;
        }
    }
    ctx->pc = 0x492DA8u;
label_492da8:
    // 0x492da8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x492da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_492dac:
    // 0x492dac: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_492db0:
    if (ctx->pc == 0x492DB0u) {
        ctx->pc = 0x492DB4u;
        goto label_492db4;
    }
    ctx->pc = 0x492DACu;
    {
        const bool branch_taken_0x492dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x492dac) {
            ctx->pc = 0x492E00u;
            goto label_492e00;
        }
    }
    ctx->pc = 0x492DB4u;
label_492db4:
    // 0x492db4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x492db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_492db8:
    // 0x492db8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_492dbc:
    if (ctx->pc == 0x492DBCu) {
        ctx->pc = 0x492DC0u;
        goto label_492dc0;
    }
    ctx->pc = 0x492DB8u;
    {
        const bool branch_taken_0x492db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x492db8) {
            ctx->pc = 0x492DC8u;
            goto label_492dc8;
        }
    }
    ctx->pc = 0x492DC0u;
label_492dc0:
    // 0x492dc0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_492dc4:
    if (ctx->pc == 0x492DC4u) {
        ctx->pc = 0x492DC8u;
        goto label_492dc8;
    }
    ctx->pc = 0x492DC0u;
    {
        const bool branch_taken_0x492dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492dc0) {
            ctx->pc = 0x492E38u;
            goto label_492e38;
        }
    }
    ctx->pc = 0x492DC8u;
label_492dc8:
    // 0x492dc8: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x492dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_492dcc:
    // 0x492dcc: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_492dd0:
    if (ctx->pc == 0x492DD0u) {
        ctx->pc = 0x492DD0u;
            // 0x492dd0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x492DD4u;
        goto label_492dd4;
    }
    ctx->pc = 0x492DCCu;
    {
        const bool branch_taken_0x492dcc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x492dcc) {
            ctx->pc = 0x492DD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x492DCCu;
            // 0x492dd0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x492DE0u;
            goto label_492de0;
        }
    }
    ctx->pc = 0x492DD4u;
label_492dd4:
    // 0x492dd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x492dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_492dd8:
    // 0x492dd8: 0x10000007  b           . + 4 + (0x7 << 2)
label_492ddc:
    if (ctx->pc == 0x492DDCu) {
        ctx->pc = 0x492DDCu;
            // 0x492ddc: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x492DE0u;
        goto label_492de0;
    }
    ctx->pc = 0x492DD8u;
    {
        const bool branch_taken_0x492dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492DD8u;
            // 0x492ddc: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x492dd8) {
            ctx->pc = 0x492DF8u;
            goto label_492df8;
        }
    }
    ctx->pc = 0x492DE0u;
label_492de0:
    // 0x492de0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x492de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_492de4:
    // 0x492de4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x492de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_492de8:
    // 0x492de8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x492de8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_492dec:
    // 0x492dec: 0x0  nop
    ctx->pc = 0x492decu;
    // NOP
label_492df0:
    // 0x492df0: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x492df0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_492df4:
    // 0x492df4: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x492df4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_492df8:
    // 0x492df8: 0x1000000f  b           . + 4 + (0xF << 2)
label_492dfc:
    if (ctx->pc == 0x492DFCu) {
        ctx->pc = 0x492E00u;
        goto label_492e00;
    }
    ctx->pc = 0x492DF8u;
    {
        const bool branch_taken_0x492df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492df8) {
            ctx->pc = 0x492E38u;
            goto label_492e38;
        }
    }
    ctx->pc = 0x492E00u;
label_492e00:
    // 0x492e00: 0xc0497dc  jal         func_125F70
label_492e04:
    if (ctx->pc == 0x492E04u) {
        ctx->pc = 0x492E04u;
            // 0x492e04: 0xdfa401f8  ld          $a0, 0x1F8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->pc = 0x492E08u;
        goto label_492e08;
    }
    ctx->pc = 0x492E00u;
    SET_GPR_U32(ctx, 31, 0x492E08u);
    ctx->pc = 0x492E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492E00u;
            // 0x492e04: 0xdfa401f8  ld          $a0, 0x1F8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492E08u; }
        if (ctx->pc != 0x492E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492E08u; }
        if (ctx->pc != 0x492E08u) { return; }
    }
    ctx->pc = 0x492E08u;
label_492e08:
    // 0x492e08: 0x1000000b  b           . + 4 + (0xB << 2)
label_492e0c:
    if (ctx->pc == 0x492E0Cu) {
        ctx->pc = 0x492E0Cu;
            // 0x492e0c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x492E10u;
        goto label_492e10;
    }
    ctx->pc = 0x492E08u;
    {
        const bool branch_taken_0x492e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492E08u;
            // 0x492e0c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x492e08) {
            ctx->pc = 0x492E38u;
            goto label_492e38;
        }
    }
    ctx->pc = 0x492E10u;
label_492e10:
    // 0x492e10: 0x10000009  b           . + 4 + (0x9 << 2)
label_492e14:
    if (ctx->pc == 0x492E14u) {
        ctx->pc = 0x492E14u;
            // 0x492e14: 0xc7b501f8  lwc1        $f21, 0x1F8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->pc = 0x492E18u;
        goto label_492e18;
    }
    ctx->pc = 0x492E10u;
    {
        const bool branch_taken_0x492e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492E10u;
            // 0x492e14: 0xc7b501f8  lwc1        $f21, 0x1F8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x492e10) {
            ctx->pc = 0x492E38u;
            goto label_492e38;
        }
    }
    ctx->pc = 0x492E18u;
label_492e18:
    // 0x492e18: 0x93a201f8  lbu         $v0, 0x1F8($sp)
    ctx->pc = 0x492e18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 504)));
label_492e1c:
    // 0x492e1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x492e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_492e20:
    // 0x492e20: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x492e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_492e24:
    // 0x492e24: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x492e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_492e28:
    // 0x492e28: 0xc124524  jal         func_491490
label_492e2c:
    if (ctx->pc == 0x492E2Cu) {
        ctx->pc = 0x492E2Cu;
            // 0x492e2c: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->pc = 0x492E30u;
        goto label_492e30;
    }
    ctx->pc = 0x492E28u;
    SET_GPR_U32(ctx, 31, 0x492E30u);
    ctx->pc = 0x492E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492E28u;
            // 0x492e2c: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x491490u;
    if (runtime->hasFunction(0x491490u)) {
        auto targetFn = runtime->lookupFunction(0x491490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492E30u; }
        if (ctx->pc != 0x492E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00491490_0x491490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492E30u; }
        if (ctx->pc != 0x492E30u) { return; }
    }
    ctx->pc = 0x492E30u;
label_492e30:
    // 0x492e30: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x492e30u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_492e34:
    // 0x492e34: 0x0  nop
    ctx->pc = 0x492e34u;
    // NOP
label_492e38:
    // 0x492e38: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x492e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_492e3c:
    // 0x492e3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x492e3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_492e40:
    // 0x492e40: 0x0  nop
    ctx->pc = 0x492e40u;
    // NOP
label_492e44:
    // 0x492e44: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x492e44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_492e48:
    // 0x492e48: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_492e4c:
    if (ctx->pc == 0x492E4Cu) {
        ctx->pc = 0x492E4Cu;
            // 0x492e4c: 0x4600a801  sub.s       $f0, $f21, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x492E50u;
        goto label_492e50;
    }
    ctx->pc = 0x492E48u;
    {
        const bool branch_taken_0x492e48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x492e48) {
            ctx->pc = 0x492E4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x492E48u;
            // 0x492e4c: 0x4600a801  sub.s       $f0, $f21, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x492E60u;
            goto label_492e60;
        }
    }
    ctx->pc = 0x492E50u;
label_492e50:
    // 0x492e50: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x492e50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_492e54:
    // 0x492e54: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x492e54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_492e58:
    // 0x492e58: 0x10000006  b           . + 4 + (0x6 << 2)
label_492e5c:
    if (ctx->pc == 0x492E5Cu) {
        ctx->pc = 0x492E60u;
        goto label_492e60;
    }
    ctx->pc = 0x492E58u;
    {
        const bool branch_taken_0x492e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492e58) {
            ctx->pc = 0x492E74u;
            goto label_492e74;
        }
    }
    ctx->pc = 0x492E60u;
label_492e60:
    // 0x492e60: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x492e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_492e64:
    // 0x492e64: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x492e64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_492e68:
    // 0x492e68: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x492e68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_492e6c:
    // 0x492e6c: 0x0  nop
    ctx->pc = 0x492e6cu;
    // NOP
label_492e70:
    // 0x492e70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x492e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_492e74:
    // 0x492e74: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_492e78:
    if (ctx->pc == 0x492E78u) {
        ctx->pc = 0x492E7Cu;
        goto label_492e7c;
    }
    ctx->pc = 0x492E74u;
    {
        const bool branch_taken_0x492e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x492e74) {
            ctx->pc = 0x492E88u;
            goto label_492e88;
        }
    }
    ctx->pc = 0x492E7Cu;
label_492e7c:
    // 0x492e7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492e80:
    // 0x492e80: 0x10000003  b           . + 4 + (0x3 << 2)
label_492e84:
    if (ctx->pc == 0x492E84u) {
        ctx->pc = 0x492E84u;
            // 0x492e84: 0xa3a201e8  sb          $v0, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x492E88u;
        goto label_492e88;
    }
    ctx->pc = 0x492E80u;
    {
        const bool branch_taken_0x492e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492E80u;
            // 0x492e84: 0xa3a201e8  sb          $v0, 0x1E8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492e80) {
            ctx->pc = 0x492E90u;
            goto label_492e90;
        }
    }
    ctx->pc = 0x492E88u;
label_492e88:
    // 0x492e88: 0xa3a001e8  sb          $zero, 0x1E8($sp)
    ctx->pc = 0x492e88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 488), (uint8_t)GPR_U32(ctx, 0));
label_492e8c:
    // 0x492e8c: 0x0  nop
    ctx->pc = 0x492e8cu;
    // NOP
label_492e90:
    // 0x492e90: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x492e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_492e94:
    // 0x492e94: 0x8e820050  lw          $v0, 0x50($s4)
    ctx->pc = 0x492e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_492e98:
    // 0x492e98: 0x26840048  addiu       $a0, $s4, 0x48
    ctx->pc = 0x492e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_492e9c:
    // 0x492e9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x492e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492ea0:
    // 0x492ea0: 0x27a701e0  addiu       $a3, $sp, 0x1E0
    ctx->pc = 0x492ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_492ea4:
    // 0x492ea4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x492ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_492ea8:
    // 0x492ea8: 0xc125914  jal         func_496450
label_492eac:
    if (ctx->pc == 0x492EACu) {
        ctx->pc = 0x492EACu;
            // 0x492eac: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x492EB0u;
        goto label_492eb0;
    }
    ctx->pc = 0x492EA8u;
    SET_GPR_U32(ctx, 31, 0x492EB0u);
    ctx->pc = 0x492EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492EA8u;
            // 0x492eac: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496450u;
    if (runtime->hasFunction(0x496450u)) {
        auto targetFn = runtime->lookupFunction(0x496450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492EB0u; }
        if (ctx->pc != 0x492EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496450_0x496450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492EB0u; }
        if (ctx->pc != 0x492EB0u) { return; }
    }
    ctx->pc = 0x492EB0u;
label_492eb0:
    // 0x492eb0: 0x100004ef  b           . + 4 + (0x4EF << 2)
label_492eb4:
    if (ctx->pc == 0x492EB4u) {
        ctx->pc = 0x492EB8u;
        goto label_492eb8;
    }
    ctx->pc = 0x492EB0u;
    {
        const bool branch_taken_0x492eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492eb0) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x492EB8u;
label_492eb8:
    // 0x492eb8: 0x27a4029c  addiu       $a0, $sp, 0x29C
    ctx->pc = 0x492eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 668));
label_492ebc:
    // 0x492ebc: 0xc125124  jal         func_494490
label_492ec0:
    if (ctx->pc == 0x492EC0u) {
        ctx->pc = 0x492EC0u;
            // 0x492ec0: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->pc = 0x492EC4u;
        goto label_492ec4;
    }
    ctx->pc = 0x492EBCu;
    SET_GPR_U32(ctx, 31, 0x492EC4u);
    ctx->pc = 0x492EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492EBCu;
            // 0x492ec0: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492EC4u; }
        if (ctx->pc != 0x492EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492EC4u; }
        if (ctx->pc != 0x492EC4u) { return; }
    }
    ctx->pc = 0x492EC4u;
label_492ec4:
    // 0x492ec4: 0x8fa5029c  lw          $a1, 0x29C($sp)
    ctx->pc = 0x492ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_492ec8:
    // 0x492ec8: 0xc125120  jal         func_494480
label_492ecc:
    if (ctx->pc == 0x492ECCu) {
        ctx->pc = 0x492ECCu;
            // 0x492ecc: 0x27a403f4  addiu       $a0, $sp, 0x3F4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1012));
        ctx->pc = 0x492ED0u;
        goto label_492ed0;
    }
    ctx->pc = 0x492EC8u;
    SET_GPR_U32(ctx, 31, 0x492ED0u);
    ctx->pc = 0x492ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492EC8u;
            // 0x492ecc: 0x27a403f4  addiu       $a0, $sp, 0x3F4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1012));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492ED0u; }
        if (ctx->pc != 0x492ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492ED0u; }
        if (ctx->pc != 0x492ED0u) { return; }
    }
    ctx->pc = 0x492ED0u;
label_492ed0:
    // 0x492ed0: 0x8fa403f4  lw          $a0, 0x3F4($sp)
    ctx->pc = 0x492ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1012)));
label_492ed4:
    // 0x492ed4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492ed8:
    // 0x492ed8: 0x9083fff0  lbu         $v1, -0x10($a0)
    ctx->pc = 0x492ed8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967280)));
label_492edc:
    // 0x492edc: 0xa3a301f0  sb          $v1, 0x1F0($sp)
    ctx->pc = 0x492edcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 496), (uint8_t)GPR_U32(ctx, 3));
label_492ee0:
    // 0x492ee0: 0xdc83fff8  ld          $v1, -0x8($a0)
    ctx->pc = 0x492ee0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_492ee4:
    // 0x492ee4: 0xffa301f8  sd          $v1, 0x1F8($sp)
    ctx->pc = 0x492ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 3));
label_492ee8:
    // 0x492ee8: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x492ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_492eec:
    // 0x492eec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x492eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_492ef0:
    // 0x492ef0: 0xae83004c  sw          $v1, 0x4C($s4)
    ctx->pc = 0x492ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 3));
label_492ef4:
    // 0x492ef4: 0x93a301f8  lbu         $v1, 0x1F8($sp)
    ctx->pc = 0x492ef4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 504)));
label_492ef8:
    // 0x492ef8: 0x146204dd  bne         $v1, $v0, . + 4 + (0x4DD << 2)
label_492efc:
    if (ctx->pc == 0x492EFCu) {
        ctx->pc = 0x492F00u;
        goto label_492f00;
    }
    ctx->pc = 0x492EF8u;
    {
        const bool branch_taken_0x492ef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x492ef8) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x492F00u;
label_492f00:
    // 0x492f00: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x492f00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_492f04:
    // 0x492f04: 0x104004da  beqz        $v0, . + 4 + (0x4DA << 2)
label_492f08:
    if (ctx->pc == 0x492F08u) {
        ctx->pc = 0x492F0Cu;
        goto label_492f0c;
    }
    ctx->pc = 0x492F04u;
    {
        const bool branch_taken_0x492f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x492f04) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x492F0Cu;
label_492f0c:
    // 0x492f0c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x492f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_492f10:
    // 0x492f10: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x492f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_492f14:
    // 0x492f14: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x492f14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_492f18:
    // 0x492f18: 0x100004d5  b           . + 4 + (0x4D5 << 2)
label_492f1c:
    if (ctx->pc == 0x492F1Cu) {
        ctx->pc = 0x492F1Cu;
            // 0x492f1c: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->pc = 0x492F20u;
        goto label_492f20;
    }
    ctx->pc = 0x492F18u;
    {
        const bool branch_taken_0x492f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492F18u;
            // 0x492f1c: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492f18) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x492F20u;
label_492f20:
    // 0x492f20: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x492f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_492f24:
    // 0x492f24: 0xc12512c  jal         func_4944B0
label_492f28:
    if (ctx->pc == 0x492F28u) {
        ctx->pc = 0x492F28u;
            // 0x492f28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x492F2Cu;
        goto label_492f2c;
    }
    ctx->pc = 0x492F24u;
    SET_GPR_U32(ctx, 31, 0x492F2Cu);
    ctx->pc = 0x492F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492F24u;
            // 0x492f28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4944B0u;
    if (runtime->hasFunction(0x4944B0u)) {
        auto targetFn = runtime->lookupFunction(0x4944B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492F2Cu; }
        if (ctx->pc != 0x492F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004944B0_0x4944b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492F2Cu; }
        if (ctx->pc != 0x492F2Cu) { return; }
    }
    ctx->pc = 0x492F2Cu;
label_492f2c:
    // 0x492f2c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x492f2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_492f30:
    // 0x492f30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x492f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_492f34:
    // 0x492f34: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x492f34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_492f38:
    // 0x492f38: 0x320f809  jalr        $t9
label_492f3c:
    if (ctx->pc == 0x492F3Cu) {
        ctx->pc = 0x492F3Cu;
            // 0x492f3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x492F40u;
        goto label_492f40;
    }
    ctx->pc = 0x492F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x492F40u);
        ctx->pc = 0x492F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492F38u;
            // 0x492f3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x492F40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x492F40u; }
            if (ctx->pc != 0x492F40u) { return; }
        }
        }
    }
    ctx->pc = 0x492F40u;
label_492f40:
    // 0x492f40: 0x100004cb  b           . + 4 + (0x4CB << 2)
label_492f44:
    if (ctx->pc == 0x492F44u) {
        ctx->pc = 0x492F48u;
        goto label_492f48;
    }
    ctx->pc = 0x492F40u;
    {
        const bool branch_taken_0x492f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492f40) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x492F48u;
label_492f48:
    // 0x492f48: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x492f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_492f4c:
    // 0x492f4c: 0x100004c8  b           . + 4 + (0x4C8 << 2)
label_492f50:
    if (ctx->pc == 0x492F50u) {
        ctx->pc = 0x492F50u;
            // 0x492f50: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x492F54u;
        goto label_492f54;
    }
    ctx->pc = 0x492F4Cu;
    {
        const bool branch_taken_0x492f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492F4Cu;
            // 0x492f50: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492f4c) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x492F54u;
label_492f54:
    // 0x492f54: 0x0  nop
    ctx->pc = 0x492f54u;
    // NOP
label_492f58:
    // 0x492f58: 0x27a40298  addiu       $a0, $sp, 0x298
    ctx->pc = 0x492f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
label_492f5c:
    // 0x492f5c: 0xc125124  jal         func_494490
label_492f60:
    if (ctx->pc == 0x492F60u) {
        ctx->pc = 0x492F60u;
            // 0x492f60: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->pc = 0x492F64u;
        goto label_492f64;
    }
    ctx->pc = 0x492F5Cu;
    SET_GPR_U32(ctx, 31, 0x492F64u);
    ctx->pc = 0x492F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492F5Cu;
            // 0x492f60: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492F64u; }
        if (ctx->pc != 0x492F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492F64u; }
        if (ctx->pc != 0x492F64u) { return; }
    }
    ctx->pc = 0x492F64u;
label_492f64:
    // 0x492f64: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x492f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_492f68:
    // 0x492f68: 0xc125120  jal         func_494480
label_492f6c:
    if (ctx->pc == 0x492F6Cu) {
        ctx->pc = 0x492F6Cu;
            // 0x492f6c: 0x27a403f0  addiu       $a0, $sp, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
        ctx->pc = 0x492F70u;
        goto label_492f70;
    }
    ctx->pc = 0x492F68u;
    SET_GPR_U32(ctx, 31, 0x492F70u);
    ctx->pc = 0x492F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492F68u;
            // 0x492f6c: 0x27a403f0  addiu       $a0, $sp, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492F70u; }
        if (ctx->pc != 0x492F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492F70u; }
        if (ctx->pc != 0x492F70u) { return; }
    }
    ctx->pc = 0x492F70u;
label_492f70:
    // 0x492f70: 0x8fa303f0  lw          $v1, 0x3F0($sp)
    ctx->pc = 0x492f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_492f74:
    // 0x492f74: 0x27a40294  addiu       $a0, $sp, 0x294
    ctx->pc = 0x492f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 660));
label_492f78:
    // 0x492f78: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x492f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_492f7c:
    // 0x492f7c: 0x26850048  addiu       $a1, $s4, 0x48
    ctx->pc = 0x492f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_492f80:
    // 0x492f80: 0x9070fff0  lbu         $s0, -0x10($v1)
    ctx->pc = 0x492f80u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_492f84:
    // 0x492f84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x492f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_492f88:
    // 0x492f88: 0xdc63fff8  ld          $v1, -0x8($v1)
    ctx->pc = 0x492f88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_492f8c:
    // 0x492f8c: 0xffa30208  sd          $v1, 0x208($sp)
    ctx->pc = 0x492f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 3));
label_492f90:
    // 0x492f90: 0xc125124  jal         func_494490
label_492f94:
    if (ctx->pc == 0x492F94u) {
        ctx->pc = 0x492F94u;
            // 0x492f94: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x492F98u;
        goto label_492f98;
    }
    ctx->pc = 0x492F90u;
    SET_GPR_U32(ctx, 31, 0x492F98u);
    ctx->pc = 0x492F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492F90u;
            // 0x492f94: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492F98u; }
        if (ctx->pc != 0x492F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492F98u; }
        if (ctx->pc != 0x492F98u) { return; }
    }
    ctx->pc = 0x492F98u;
label_492f98:
    // 0x492f98: 0x8fa50294  lw          $a1, 0x294($sp)
    ctx->pc = 0x492f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
label_492f9c:
    // 0x492f9c: 0xc125120  jal         func_494480
label_492fa0:
    if (ctx->pc == 0x492FA0u) {
        ctx->pc = 0x492FA0u;
            // 0x492fa0: 0x27a403ec  addiu       $a0, $sp, 0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1004));
        ctx->pc = 0x492FA4u;
        goto label_492fa4;
    }
    ctx->pc = 0x492F9Cu;
    SET_GPR_U32(ctx, 31, 0x492FA4u);
    ctx->pc = 0x492FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x492F9Cu;
            // 0x492fa0: 0x27a403ec  addiu       $a0, $sp, 0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1004));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492FA4u; }
        if (ctx->pc != 0x492FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x492FA4u; }
        if (ctx->pc != 0x492FA4u) { return; }
    }
    ctx->pc = 0x492FA4u;
label_492fa4:
    // 0x492fa4: 0x8e84004c  lw          $a0, 0x4C($s4)
    ctx->pc = 0x492fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_492fa8:
    // 0x492fa8: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x492fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_492fac:
    // 0x492fac: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x492facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_492fb0:
    // 0x492fb0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x492fb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_492fb4:
    // 0x492fb4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x492fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_492fb8:
    // 0x492fb8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_492fbc:
    if (ctx->pc == 0x492FBCu) {
        ctx->pc = 0x492FBCu;
            // 0x492fbc: 0xae84004c  sw          $a0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 4));
        ctx->pc = 0x492FC0u;
        goto label_492fc0;
    }
    ctx->pc = 0x492FB8u;
    {
        const bool branch_taken_0x492fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x492FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492FB8u;
            // 0x492fbc: 0xae84004c  sw          $a0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492fb8) {
            ctx->pc = 0x492FD8u;
            goto label_492fd8;
        }
    }
    ctx->pc = 0x492FC0u;
label_492fc0:
    // 0x492fc0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_492fc4:
    if (ctx->pc == 0x492FC4u) {
        ctx->pc = 0x492FC8u;
        goto label_492fc8;
    }
    ctx->pc = 0x492FC0u;
    {
        const bool branch_taken_0x492fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x492fc0) {
            ctx->pc = 0x492FD0u;
            goto label_492fd0;
        }
    }
    ctx->pc = 0x492FC8u;
label_492fc8:
    // 0x492fc8: 0x10000009  b           . + 4 + (0x9 << 2)
label_492fcc:
    if (ctx->pc == 0x492FCCu) {
        ctx->pc = 0x492FD0u;
        goto label_492fd0;
    }
    ctx->pc = 0x492FC8u;
    {
        const bool branch_taken_0x492fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492fc8) {
            ctx->pc = 0x492FF0u;
            goto label_492ff0;
        }
    }
    ctx->pc = 0x492FD0u;
label_492fd0:
    // 0x492fd0: 0x10000007  b           . + 4 + (0x7 << 2)
label_492fd4:
    if (ctx->pc == 0x492FD4u) {
        ctx->pc = 0x492FD4u;
            // 0x492fd4: 0x8fb50208  lw          $s5, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->pc = 0x492FD8u;
        goto label_492fd8;
    }
    ctx->pc = 0x492FD0u;
    {
        const bool branch_taken_0x492fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x492FD0u;
            // 0x492fd4: 0x8fb50208  lw          $s5, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492fd0) {
            ctx->pc = 0x492FF0u;
            goto label_492ff0;
        }
    }
    ctx->pc = 0x492FD8u;
label_492fd8:
    // 0x492fd8: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x492fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_492fdc:
    // 0x492fdc: 0x93a30208  lbu         $v1, 0x208($sp)
    ctx->pc = 0x492fdcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 520)));
label_492fe0:
    // 0x492fe0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x492fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_492fe4:
    // 0x492fe4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x492fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_492fe8:
    // 0x492fe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x492fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_492fec:
    // 0x492fec: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x492fecu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_492ff0:
    // 0x492ff0: 0x3c110061  lui         $s1, 0x61
    ctx->pc = 0x492ff0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)97 << 16));
label_492ff4:
    // 0x492ff4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x492ff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_492ff8:
    // 0x492ff8: 0x26313e10  addiu       $s1, $s1, 0x3E10
    ctx->pc = 0x492ff8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 15888));
label_492ffc:
    // 0x492ffc: 0x0  nop
    ctx->pc = 0x492ffcu;
    // NOP
label_493000:
    // 0x493000: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x493000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_493004:
    // 0x493004: 0xc04af96  jal         func_12BE58
label_493008:
    if (ctx->pc == 0x493008u) {
        ctx->pc = 0x493008u;
            // 0x493008: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49300Cu;
        goto label_49300c;
    }
    ctx->pc = 0x493004u;
    SET_GPR_U32(ctx, 31, 0x49300Cu);
    ctx->pc = 0x493008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493004u;
            // 0x493008: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49300Cu; }
        if (ctx->pc != 0x49300Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49300Cu; }
        if (ctx->pc != 0x49300Cu) { return; }
    }
    ctx->pc = 0x49300Cu;
label_49300c:
    // 0x49300c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_493010:
    if (ctx->pc == 0x493010u) {
        ctx->pc = 0x493014u;
        goto label_493014;
    }
    ctx->pc = 0x49300Cu;
    {
        const bool branch_taken_0x49300c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49300c) {
            ctx->pc = 0x493020u;
            goto label_493020;
        }
    }
    ctx->pc = 0x493014u;
label_493014:
    // 0x493014: 0x10000006  b           . + 4 + (0x6 << 2)
label_493018:
    if (ctx->pc == 0x493018u) {
        ctx->pc = 0x493018u;
            // 0x493018: 0xafb00118  sw          $s0, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 16));
        ctx->pc = 0x49301Cu;
        goto label_49301c;
    }
    ctx->pc = 0x493014u;
    {
        const bool branch_taken_0x493014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x493018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x493014u;
            // 0x493018: 0xafb00118  sw          $s0, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493014) {
            ctx->pc = 0x493030u;
            goto label_493030;
        }
    }
    ctx->pc = 0x49301Cu;
label_49301c:
    // 0x49301c: 0x0  nop
    ctx->pc = 0x49301cu;
    // NOP
label_493020:
    // 0x493020: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x493020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_493024:
    // 0x493024: 0x2e020006  sltiu       $v0, $s0, 0x6
    ctx->pc = 0x493024u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_493028:
    // 0x493028: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_49302c:
    if (ctx->pc == 0x49302Cu) {
        ctx->pc = 0x49302Cu;
            // 0x49302c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x493030u;
        goto label_493030;
    }
    ctx->pc = 0x493028u;
    {
        const bool branch_taken_0x493028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49302Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x493028u;
            // 0x49302c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493028) {
            ctx->pc = 0x493000u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_493000;
        }
    }
    ctx->pc = 0x493030u;
label_493030:
    // 0x493030: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x493030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_493034:
    // 0x493034: 0xa3a201e0  sb          $v0, 0x1E0($sp)
    ctx->pc = 0x493034u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 480), (uint8_t)GPR_U32(ctx, 2));
label_493038:
    // 0x493038: 0xc040180  jal         func_100600
label_49303c:
    if (ctx->pc == 0x49303Cu) {
        ctx->pc = 0x49303Cu;
            // 0x49303c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x493040u;
        goto label_493040;
    }
    ctx->pc = 0x493038u;
    SET_GPR_U32(ctx, 31, 0x493040u);
    ctx->pc = 0x49303Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493038u;
            // 0x49303c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493040u; }
        if (ctx->pc != 0x493040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493040u; }
        if (ctx->pc != 0x493040u) { return; }
    }
    ctx->pc = 0x493040u;
label_493040:
    // 0x493040: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x493040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_493044:
    // 0x493044: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_493048:
    if (ctx->pc == 0x493048u) {
        ctx->pc = 0x49304Cu;
        goto label_49304c;
    }
    ctx->pc = 0x493044u;
    {
        const bool branch_taken_0x493044 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x493044) {
            ctx->pc = 0x493060u;
            goto label_493060;
        }
    }
    ctx->pc = 0x49304Cu;
label_49304c:
    // 0x49304c: 0xc125118  jal         func_494460
label_493050:
    if (ctx->pc == 0x493050u) {
        ctx->pc = 0x493050u;
            // 0x493050: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x493054u;
        goto label_493054;
    }
    ctx->pc = 0x49304Cu;
    SET_GPR_U32(ctx, 31, 0x493054u);
    ctx->pc = 0x493050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49304Cu;
            // 0x493050: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494460u;
    if (runtime->hasFunction(0x494460u)) {
        auto targetFn = runtime->lookupFunction(0x494460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493054u; }
        if (ctx->pc != 0x493054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494460_0x494460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493054u; }
        if (ctx->pc != 0x493054u) { return; }
    }
    ctx->pc = 0x493054u;
label_493054:
    // 0x493054: 0xc125110  jal         func_494440
label_493058:
    if (ctx->pc == 0x493058u) {
        ctx->pc = 0x493058u;
            // 0x493058: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->pc = 0x49305Cu;
        goto label_49305c;
    }
    ctx->pc = 0x493054u;
    SET_GPR_U32(ctx, 31, 0x49305Cu);
    ctx->pc = 0x493058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493054u;
            // 0x493058: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494440u;
    if (runtime->hasFunction(0x494440u)) {
        auto targetFn = runtime->lookupFunction(0x494440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49305Cu; }
        if (ctx->pc != 0x49305Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494440_0x494440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49305Cu; }
        if (ctx->pc != 0x49305Cu) { return; }
    }
    ctx->pc = 0x49305Cu;
label_49305c:
    // 0x49305c: 0x0  nop
    ctx->pc = 0x49305cu;
    // NOP
label_493060:
    // 0x493060: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x493060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_493064:
    // 0x493064: 0x26840048  addiu       $a0, $s4, 0x48
    ctx->pc = 0x493064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_493068:
    // 0x493068: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x493068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49306c:
    // 0x49306c: 0x27a701e0  addiu       $a3, $sp, 0x1E0
    ctx->pc = 0x49306cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_493070:
    // 0x493070: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x493070u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_493074:
    // 0x493074: 0xafb001e8  sw          $s0, 0x1E8($sp)
    ctx->pc = 0x493074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 16));
label_493078:
    // 0x493078: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x493078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_49307c:
    // 0x49307c: 0x8e820050  lw          $v0, 0x50($s4)
    ctx->pc = 0x49307cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_493080:
    // 0x493080: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x493080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_493084:
    // 0x493084: 0xc125914  jal         func_496450
label_493088:
    if (ctx->pc == 0x493088u) {
        ctx->pc = 0x493088u;
            // 0x493088: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x49308Cu;
        goto label_49308c;
    }
    ctx->pc = 0x493084u;
    SET_GPR_U32(ctx, 31, 0x49308Cu);
    ctx->pc = 0x493088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493084u;
            // 0x493088: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496450u;
    if (runtime->hasFunction(0x496450u)) {
        auto targetFn = runtime->lookupFunction(0x496450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49308Cu; }
        if (ctx->pc != 0x49308Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496450_0x496450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49308Cu; }
        if (ctx->pc != 0x49308Cu) { return; }
    }
    ctx->pc = 0x49308Cu;
label_49308c:
    // 0x49308c: 0x10000478  b           . + 4 + (0x478 << 2)
label_493090:
    if (ctx->pc == 0x493090u) {
        ctx->pc = 0x493094u;
        goto label_493094;
    }
    ctx->pc = 0x49308Cu;
    {
        const bool branch_taken_0x49308c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49308c) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x493094u;
label_493094:
    // 0x493094: 0x0  nop
    ctx->pc = 0x493094u;
    // NOP
label_493098:
    // 0x493098: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x493098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_49309c:
    // 0x49309c: 0xc125124  jal         func_494490
label_4930a0:
    if (ctx->pc == 0x4930A0u) {
        ctx->pc = 0x4930A0u;
            // 0x4930a0: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->pc = 0x4930A4u;
        goto label_4930a4;
    }
    ctx->pc = 0x49309Cu;
    SET_GPR_U32(ctx, 31, 0x4930A4u);
    ctx->pc = 0x4930A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49309Cu;
            // 0x4930a0: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4930A4u; }
        if (ctx->pc != 0x4930A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4930A4u; }
        if (ctx->pc != 0x4930A4u) { return; }
    }
    ctx->pc = 0x4930A4u;
label_4930a4:
    // 0x4930a4: 0x8fa50290  lw          $a1, 0x290($sp)
    ctx->pc = 0x4930a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_4930a8:
    // 0x4930a8: 0xc125120  jal         func_494480
label_4930ac:
    if (ctx->pc == 0x4930ACu) {
        ctx->pc = 0x4930ACu;
            // 0x4930ac: 0x27a403e8  addiu       $a0, $sp, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1000));
        ctx->pc = 0x4930B0u;
        goto label_4930b0;
    }
    ctx->pc = 0x4930A8u;
    SET_GPR_U32(ctx, 31, 0x4930B0u);
    ctx->pc = 0x4930ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4930A8u;
            // 0x4930ac: 0x27a403e8  addiu       $a0, $sp, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4930B0u; }
        if (ctx->pc != 0x4930B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4930B0u; }
        if (ctx->pc != 0x4930B0u) { return; }
    }
    ctx->pc = 0x4930B0u;
label_4930b0:
    // 0x4930b0: 0x8fa303e8  lw          $v1, 0x3E8($sp)
    ctx->pc = 0x4930b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1000)));
label_4930b4:
    // 0x4930b4: 0x27a4028c  addiu       $a0, $sp, 0x28C
    ctx->pc = 0x4930b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 652));
label_4930b8:
    // 0x4930b8: 0x26850048  addiu       $a1, $s4, 0x48
    ctx->pc = 0x4930b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_4930bc:
    // 0x4930bc: 0x9062fff0  lbu         $v0, -0x10($v1)
    ctx->pc = 0x4930bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_4930c0:
    // 0x4930c0: 0xa3a201f0  sb          $v0, 0x1F0($sp)
    ctx->pc = 0x4930c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 496), (uint8_t)GPR_U32(ctx, 2));
label_4930c4:
    // 0x4930c4: 0xdc62fff8  ld          $v0, -0x8($v1)
    ctx->pc = 0x4930c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_4930c8:
    // 0x4930c8: 0xffa201f8  sd          $v0, 0x1F8($sp)
    ctx->pc = 0x4930c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 2));
label_4930cc:
    // 0x4930cc: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x4930ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_4930d0:
    // 0x4930d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4930d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4930d4:
    // 0x4930d4: 0xc125124  jal         func_494490
label_4930d8:
    if (ctx->pc == 0x4930D8u) {
        ctx->pc = 0x4930D8u;
            // 0x4930d8: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x4930DCu;
        goto label_4930dc;
    }
    ctx->pc = 0x4930D4u;
    SET_GPR_U32(ctx, 31, 0x4930DCu);
    ctx->pc = 0x4930D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4930D4u;
            // 0x4930d8: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4930DCu; }
        if (ctx->pc != 0x4930DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4930DCu; }
        if (ctx->pc != 0x4930DCu) { return; }
    }
    ctx->pc = 0x4930DCu;
label_4930dc:
    // 0x4930dc: 0x8fa5028c  lw          $a1, 0x28C($sp)
    ctx->pc = 0x4930dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
label_4930e0:
    // 0x4930e0: 0xc125120  jal         func_494480
label_4930e4:
    if (ctx->pc == 0x4930E4u) {
        ctx->pc = 0x4930E4u;
            // 0x4930e4: 0x27a403e4  addiu       $a0, $sp, 0x3E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 996));
        ctx->pc = 0x4930E8u;
        goto label_4930e8;
    }
    ctx->pc = 0x4930E0u;
    SET_GPR_U32(ctx, 31, 0x4930E8u);
    ctx->pc = 0x4930E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4930E0u;
            // 0x4930e4: 0x27a403e4  addiu       $a0, $sp, 0x3E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 996));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4930E8u; }
        if (ctx->pc != 0x4930E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4930E8u; }
        if (ctx->pc != 0x4930E8u) { return; }
    }
    ctx->pc = 0x4930E8u;
label_4930e8:
    // 0x4930e8: 0x8fa403e4  lw          $a0, 0x3E4($sp)
    ctx->pc = 0x4930e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 996)));
label_4930ec:
    // 0x4930ec: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4930ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4930f0:
    // 0x4930f0: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x4930f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_4930f4:
    // 0x4930f4: 0x9085fff0  lbu         $a1, -0x10($a0)
    ctx->pc = 0x4930f4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967280)));
label_4930f8:
    // 0x4930f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4930f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4930fc:
    // 0x4930fc: 0xdc84fff8  ld          $a0, -0x8($a0)
    ctx->pc = 0x4930fcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_493100:
    // 0x493100: 0xffa401d8  sd          $a0, 0x1D8($sp)
    ctx->pc = 0x493100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 4));
label_493104:
    // 0x493104: 0xae83004c  sw          $v1, 0x4C($s4)
    ctx->pc = 0x493104u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 3));
label_493108:
    // 0x493108: 0x8fa401f8  lw          $a0, 0x1F8($sp)
    ctx->pc = 0x493108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_49310c:
    // 0x49310c: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
label_493110:
    if (ctx->pc == 0x493110u) {
        ctx->pc = 0x493110u;
            // 0x493110: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x493114u;
        goto label_493114;
    }
    ctx->pc = 0x49310Cu;
    {
        const bool branch_taken_0x49310c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x493110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49310Cu;
            // 0x493110: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49310c) {
            ctx->pc = 0x493130u;
            goto label_493130;
        }
    }
    ctx->pc = 0x493114u;
label_493114:
    // 0x493114: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_493118:
    if (ctx->pc == 0x493118u) {
        ctx->pc = 0x49311Cu;
        goto label_49311c;
    }
    ctx->pc = 0x493114u;
    {
        const bool branch_taken_0x493114 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x493114) {
            ctx->pc = 0x493128u;
            goto label_493128;
        }
    }
    ctx->pc = 0x49311Cu;
label_49311c:
    // 0x49311c: 0x1000000a  b           . + 4 + (0xA << 2)
label_493120:
    if (ctx->pc == 0x493120u) {
        ctx->pc = 0x493124u;
        goto label_493124;
    }
    ctx->pc = 0x49311Cu;
    {
        const bool branch_taken_0x49311c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49311c) {
            ctx->pc = 0x493148u;
            goto label_493148;
        }
    }
    ctx->pc = 0x493124u;
label_493124:
    // 0x493124: 0x0  nop
    ctx->pc = 0x493124u;
    // NOP
label_493128:
    // 0x493128: 0x10000007  b           . + 4 + (0x7 << 2)
label_49312c:
    if (ctx->pc == 0x49312Cu) {
        ctx->pc = 0x49312Cu;
            // 0x49312c: 0x8fa601d8  lw          $a2, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->pc = 0x493130u;
        goto label_493130;
    }
    ctx->pc = 0x493128u;
    {
        const bool branch_taken_0x493128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49312Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x493128u;
            // 0x49312c: 0x8fa601d8  lw          $a2, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493128) {
            ctx->pc = 0x493148u;
            goto label_493148;
        }
    }
    ctx->pc = 0x493130u;
label_493130:
    // 0x493130: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x493130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_493134:
    // 0x493134: 0x93a301d8  lbu         $v1, 0x1D8($sp)
    ctx->pc = 0x493134u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 472)));
label_493138:
    // 0x493138: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x493138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_49313c:
    // 0x49313c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x49313cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_493140:
    // 0x493140: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x493140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_493144:
    // 0x493144: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x493144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_493148:
    // 0x493148: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x493148u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_49314c:
    // 0x49314c: 0xafa40390  sw          $a0, 0x390($sp)
    ctx->pc = 0x49314cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 912), GPR_U32(ctx, 4));
label_493150:
    // 0x493150: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x493150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_493154:
    // 0x493154: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x493154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_493158:
    // 0x493158: 0x27a70390  addiu       $a3, $sp, 0x390
    ctx->pc = 0x493158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_49315c:
    // 0x49315c: 0x8c430068  lw          $v1, 0x68($v0)
    ctx->pc = 0x49315cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_493160:
    // 0x493160: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x493160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
label_493164:
    // 0x493164: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x493164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_493168:
    // 0x493168: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x493168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_49316c:
    // 0x49316c: 0xc0a997c  jal         func_2A65F0
label_493170:
    if (ctx->pc == 0x493170u) {
        ctx->pc = 0x493170u;
            // 0x493170: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x493174u;
        goto label_493174;
    }
    ctx->pc = 0x49316Cu;
    SET_GPR_U32(ctx, 31, 0x493174u);
    ctx->pc = 0x493170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49316Cu;
            // 0x493170: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493174u; }
        if (ctx->pc != 0x493174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493174u; }
        if (ctx->pc != 0x493174u) { return; }
    }
    ctx->pc = 0x493174u;
label_493174:
    // 0x493174: 0x1000043e  b           . + 4 + (0x43E << 2)
label_493178:
    if (ctx->pc == 0x493178u) {
        ctx->pc = 0x49317Cu;
        goto label_49317c;
    }
    ctx->pc = 0x493174u;
    {
        const bool branch_taken_0x493174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493174) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x49317Cu;
label_49317c:
    // 0x49317c: 0x0  nop
    ctx->pc = 0x49317cu;
    // NOP
label_493180:
    // 0x493180: 0x27a40288  addiu       $a0, $sp, 0x288
    ctx->pc = 0x493180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
label_493184:
    // 0x493184: 0xc125124  jal         func_494490
label_493188:
    if (ctx->pc == 0x493188u) {
        ctx->pc = 0x493188u;
            // 0x493188: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->pc = 0x49318Cu;
        goto label_49318c;
    }
    ctx->pc = 0x493184u;
    SET_GPR_U32(ctx, 31, 0x49318Cu);
    ctx->pc = 0x493188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493184u;
            // 0x493188: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49318Cu; }
        if (ctx->pc != 0x49318Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49318Cu; }
        if (ctx->pc != 0x49318Cu) { return; }
    }
    ctx->pc = 0x49318Cu;
label_49318c:
    // 0x49318c: 0x8fa50288  lw          $a1, 0x288($sp)
    ctx->pc = 0x49318cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
label_493190:
    // 0x493190: 0xc125120  jal         func_494480
label_493194:
    if (ctx->pc == 0x493194u) {
        ctx->pc = 0x493194u;
            // 0x493194: 0x27a403e0  addiu       $a0, $sp, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
        ctx->pc = 0x493198u;
        goto label_493198;
    }
    ctx->pc = 0x493190u;
    SET_GPR_U32(ctx, 31, 0x493198u);
    ctx->pc = 0x493194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493190u;
            // 0x493194: 0x27a403e0  addiu       $a0, $sp, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493198u; }
        if (ctx->pc != 0x493198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493198u; }
        if (ctx->pc != 0x493198u) { return; }
    }
    ctx->pc = 0x493198u;
label_493198:
    // 0x493198: 0x8fa403e0  lw          $a0, 0x3E0($sp)
    ctx->pc = 0x493198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
label_49319c:
    // 0x49319c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x49319cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4931a0:
    // 0x4931a0: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x4931a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_4931a4:
    // 0x4931a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4931a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4931a8:
    // 0x4931a8: 0x9085fff0  lbu         $a1, -0x10($a0)
    ctx->pc = 0x4931a8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967280)));
label_4931ac:
    // 0x4931ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4931acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4931b0:
    // 0x4931b0: 0xdc84fff8  ld          $a0, -0x8($a0)
    ctx->pc = 0x4931b0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_4931b4:
    // 0x4931b4: 0xffa401d8  sd          $a0, 0x1D8($sp)
    ctx->pc = 0x4931b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 4));
label_4931b8:
    // 0x4931b8: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
label_4931bc:
    if (ctx->pc == 0x4931BCu) {
        ctx->pc = 0x4931BCu;
            // 0x4931bc: 0xae83004c  sw          $v1, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 3));
        ctx->pc = 0x4931C0u;
        goto label_4931c0;
    }
    ctx->pc = 0x4931B8u;
    {
        const bool branch_taken_0x4931b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x4931BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4931B8u;
            // 0x4931bc: 0xae83004c  sw          $v1, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4931b8) {
            ctx->pc = 0x4931D8u;
            goto label_4931d8;
        }
    }
    ctx->pc = 0x4931C0u;
label_4931c0:
    // 0x4931c0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_4931c4:
    if (ctx->pc == 0x4931C4u) {
        ctx->pc = 0x4931C8u;
        goto label_4931c8;
    }
    ctx->pc = 0x4931C0u;
    {
        const bool branch_taken_0x4931c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4931c0) {
            ctx->pc = 0x4931D0u;
            goto label_4931d0;
        }
    }
    ctx->pc = 0x4931C8u;
label_4931c8:
    // 0x4931c8: 0x10000009  b           . + 4 + (0x9 << 2)
label_4931cc:
    if (ctx->pc == 0x4931CCu) {
        ctx->pc = 0x4931D0u;
        goto label_4931d0;
    }
    ctx->pc = 0x4931C8u;
    {
        const bool branch_taken_0x4931c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4931c8) {
            ctx->pc = 0x4931F0u;
            goto label_4931f0;
        }
    }
    ctx->pc = 0x4931D0u;
label_4931d0:
    // 0x4931d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_4931d4:
    if (ctx->pc == 0x4931D4u) {
        ctx->pc = 0x4931D4u;
            // 0x4931d4: 0x8fb001d8  lw          $s0, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->pc = 0x4931D8u;
        goto label_4931d8;
    }
    ctx->pc = 0x4931D0u;
    {
        const bool branch_taken_0x4931d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4931D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4931D0u;
            // 0x4931d4: 0x8fb001d8  lw          $s0, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4931d0) {
            ctx->pc = 0x4931F0u;
            goto label_4931f0;
        }
    }
    ctx->pc = 0x4931D8u;
label_4931d8:
    // 0x4931d8: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x4931d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_4931dc:
    // 0x4931dc: 0x93a301d8  lbu         $v1, 0x1D8($sp)
    ctx->pc = 0x4931dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 472)));
label_4931e0:
    // 0x4931e0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x4931e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4931e4:
    // 0x4931e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4931e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4931e8:
    // 0x4931e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4931e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4931ec:
    // 0x4931ec: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x4931ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4931f0:
    // 0x4931f0: 0x8e910004  lw          $s1, 0x4($s4)
    ctx->pc = 0x4931f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4931f4:
    // 0x4931f4: 0x27a40284  addiu       $a0, $sp, 0x284
    ctx->pc = 0x4931f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
label_4931f8:
    // 0x4931f8: 0xc12510c  jal         func_494430
label_4931fc:
    if (ctx->pc == 0x4931FCu) {
        ctx->pc = 0x4931FCu;
            // 0x4931fc: 0x26250064  addiu       $a1, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x493200u;
        goto label_493200;
    }
    ctx->pc = 0x4931F8u;
    SET_GPR_U32(ctx, 31, 0x493200u);
    ctx->pc = 0x4931FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4931F8u;
            // 0x4931fc: 0x26250064  addiu       $a1, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494430u;
    if (runtime->hasFunction(0x494430u)) {
        auto targetFn = runtime->lookupFunction(0x494430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493200u; }
        if (ctx->pc != 0x493200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494430_0x494430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493200u; }
        if (ctx->pc != 0x493200u) { return; }
    }
    ctx->pc = 0x493200u;
label_493200:
    // 0x493200: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x493200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_493204:
    // 0x493204: 0xc1250f8  jal         func_4943E0
label_493208:
    if (ctx->pc == 0x493208u) {
        ctx->pc = 0x493208u;
            // 0x493208: 0x26250064  addiu       $a1, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x49320Cu;
        goto label_49320c;
    }
    ctx->pc = 0x493204u;
    SET_GPR_U32(ctx, 31, 0x49320Cu);
    ctx->pc = 0x493208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493204u;
            // 0x493208: 0x26250064  addiu       $a1, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4943E0u;
    if (runtime->hasFunction(0x4943E0u)) {
        auto targetFn = runtime->lookupFunction(0x4943E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49320Cu; }
        if (ctx->pc != 0x49320Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004943E0_0x4943e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49320Cu; }
        if (ctx->pc != 0x49320Cu) { return; }
    }
    ctx->pc = 0x49320Cu;
label_49320c:
    // 0x49320c: 0x27a40284  addiu       $a0, $sp, 0x284
    ctx->pc = 0x49320cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
label_493210:
    // 0x493210: 0xc1250f0  jal         func_4943C0
label_493214:
    if (ctx->pc == 0x493214u) {
        ctx->pc = 0x493214u;
            // 0x493214: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x493218u;
        goto label_493218;
    }
    ctx->pc = 0x493210u;
    SET_GPR_U32(ctx, 31, 0x493218u);
    ctx->pc = 0x493214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493210u;
            // 0x493214: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4943C0u;
    if (runtime->hasFunction(0x4943C0u)) {
        auto targetFn = runtime->lookupFunction(0x4943C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493218u; }
        if (ctx->pc != 0x493218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004943C0_0x4943c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493218u; }
        if (ctx->pc != 0x493218u) { return; }
    }
    ctx->pc = 0x493218u;
label_493218:
    // 0x493218: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_49321c:
    if (ctx->pc == 0x49321Cu) {
        ctx->pc = 0x493220u;
        goto label_493220;
    }
    ctx->pc = 0x493218u;
    {
        const bool branch_taken_0x493218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x493218) {
            ctx->pc = 0x493278u;
            goto label_493278;
        }
    }
    ctx->pc = 0x493220u;
label_493220:
    // 0x493220: 0xc125108  jal         func_494420
label_493224:
    if (ctx->pc == 0x493224u) {
        ctx->pc = 0x493224u;
            // 0x493224: 0x27a40284  addiu       $a0, $sp, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
        ctx->pc = 0x493228u;
        goto label_493228;
    }
    ctx->pc = 0x493220u;
    SET_GPR_U32(ctx, 31, 0x493228u);
    ctx->pc = 0x493224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493220u;
            // 0x493224: 0x27a40284  addiu       $a0, $sp, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494420u;
    if (runtime->hasFunction(0x494420u)) {
        auto targetFn = runtime->lookupFunction(0x494420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493228u; }
        if (ctx->pc != 0x493228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494420_0x494420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493228u; }
        if (ctx->pc != 0x493228u) { return; }
    }
    ctx->pc = 0x493228u;
label_493228:
    // 0x493228: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x493228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_49322c:
    // 0x49322c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x49322cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_493230:
    // 0x493230: 0xc04af96  jal         func_12BE58
label_493234:
    if (ctx->pc == 0x493234u) {
        ctx->pc = 0x493234u;
            // 0x493234: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x493238u;
        goto label_493238;
    }
    ctx->pc = 0x493230u;
    SET_GPR_U32(ctx, 31, 0x493238u);
    ctx->pc = 0x493234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493230u;
            // 0x493234: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493238u; }
        if (ctx->pc != 0x493238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493238u; }
        if (ctx->pc != 0x493238u) { return; }
    }
    ctx->pc = 0x493238u;
label_493238:
    // 0x493238: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_49323c:
    if (ctx->pc == 0x49323Cu) {
        ctx->pc = 0x493240u;
        goto label_493240;
    }
    ctx->pc = 0x493238u;
    {
        const bool branch_taken_0x493238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493238) {
            ctx->pc = 0x493250u;
            goto label_493250;
        }
    }
    ctx->pc = 0x493240u;
label_493240:
    // 0x493240: 0xc125108  jal         func_494420
label_493244:
    if (ctx->pc == 0x493244u) {
        ctx->pc = 0x493244u;
            // 0x493244: 0x27a40284  addiu       $a0, $sp, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
        ctx->pc = 0x493248u;
        goto label_493248;
    }
    ctx->pc = 0x493240u;
    SET_GPR_U32(ctx, 31, 0x493248u);
    ctx->pc = 0x493244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493240u;
            // 0x493244: 0x27a40284  addiu       $a0, $sp, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494420u;
    if (runtime->hasFunction(0x494420u)) {
        auto targetFn = runtime->lookupFunction(0x494420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493248u; }
        if (ctx->pc != 0x493248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494420_0x494420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493248u; }
        if (ctx->pc != 0x493248u) { return; }
    }
    ctx->pc = 0x493248u;
label_493248:
    // 0x493248: 0x1000000d  b           . + 4 + (0xD << 2)
label_49324c:
    if (ctx->pc == 0x49324Cu) {
        ctx->pc = 0x49324Cu;
            // 0x49324c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x493250u;
        goto label_493250;
    }
    ctx->pc = 0x493248u;
    {
        const bool branch_taken_0x493248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49324Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x493248u;
            // 0x49324c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493248) {
            ctx->pc = 0x493280u;
            goto label_493280;
        }
    }
    ctx->pc = 0x493250u;
label_493250:
    // 0x493250: 0xc125100  jal         func_494400
label_493254:
    if (ctx->pc == 0x493254u) {
        ctx->pc = 0x493254u;
            // 0x493254: 0x27a40284  addiu       $a0, $sp, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
        ctx->pc = 0x493258u;
        goto label_493258;
    }
    ctx->pc = 0x493250u;
    SET_GPR_U32(ctx, 31, 0x493258u);
    ctx->pc = 0x493254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493250u;
            // 0x493254: 0x27a40284  addiu       $a0, $sp, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494400u;
    if (runtime->hasFunction(0x494400u)) {
        auto targetFn = runtime->lookupFunction(0x494400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493258u; }
        if (ctx->pc != 0x493258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494400_0x494400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493258u; }
        if (ctx->pc != 0x493258u) { return; }
    }
    ctx->pc = 0x493258u;
label_493258:
    // 0x493258: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x493258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_49325c:
    // 0x49325c: 0xc1250f8  jal         func_4943E0
label_493260:
    if (ctx->pc == 0x493260u) {
        ctx->pc = 0x493260u;
            // 0x493260: 0x26250064  addiu       $a1, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x493264u;
        goto label_493264;
    }
    ctx->pc = 0x49325Cu;
    SET_GPR_U32(ctx, 31, 0x493264u);
    ctx->pc = 0x493260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49325Cu;
            // 0x493260: 0x26250064  addiu       $a1, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4943E0u;
    if (runtime->hasFunction(0x4943E0u)) {
        auto targetFn = runtime->lookupFunction(0x4943E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493264u; }
        if (ctx->pc != 0x493264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004943E0_0x4943e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493264u; }
        if (ctx->pc != 0x493264u) { return; }
    }
    ctx->pc = 0x493264u;
label_493264:
    // 0x493264: 0x27a40284  addiu       $a0, $sp, 0x284
    ctx->pc = 0x493264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
label_493268:
    // 0x493268: 0xc1250f0  jal         func_4943C0
label_49326c:
    if (ctx->pc == 0x49326Cu) {
        ctx->pc = 0x49326Cu;
            // 0x49326c: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x493270u;
        goto label_493270;
    }
    ctx->pc = 0x493268u;
    SET_GPR_U32(ctx, 31, 0x493270u);
    ctx->pc = 0x49326Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493268u;
            // 0x49326c: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4943C0u;
    if (runtime->hasFunction(0x4943C0u)) {
        auto targetFn = runtime->lookupFunction(0x4943C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493270u; }
        if (ctx->pc != 0x493270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004943C0_0x4943c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493270u; }
        if (ctx->pc != 0x493270u) { return; }
    }
    ctx->pc = 0x493270u;
label_493270:
    // 0x493270: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_493274:
    if (ctx->pc == 0x493274u) {
        ctx->pc = 0x493278u;
        goto label_493278;
    }
    ctx->pc = 0x493270u;
    {
        const bool branch_taken_0x493270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493270) {
            ctx->pc = 0x493220u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_493220;
        }
    }
    ctx->pc = 0x493278u;
label_493278:
    // 0x493278: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x493278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49327c:
    // 0x49327c: 0x0  nop
    ctx->pc = 0x49327cu;
    // NOP
label_493280:
    // 0x493280: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_493284:
    if (ctx->pc == 0x493284u) {
        ctx->pc = 0x493284u;
            // 0x493284: 0xafa201e8  sw          $v0, 0x1E8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 2));
        ctx->pc = 0x493288u;
        goto label_493288;
    }
    ctx->pc = 0x493280u;
    {
        const bool branch_taken_0x493280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x493284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x493280u;
            // 0x493284: 0xafa201e8  sw          $v0, 0x1E8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493280) {
            ctx->pc = 0x4932B8u;
            goto label_4932b8;
        }
    }
    ctx->pc = 0x493288u;
label_493288:
    // 0x493288: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x493288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_49328c:
    // 0x49328c: 0x26840048  addiu       $a0, $s4, 0x48
    ctx->pc = 0x49328cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_493290:
    // 0x493290: 0xa3a201e0  sb          $v0, 0x1E0($sp)
    ctx->pc = 0x493290u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 480), (uint8_t)GPR_U32(ctx, 2));
label_493294:
    // 0x493294: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x493294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_493298:
    // 0x493298: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x493298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_49329c:
    // 0x49329c: 0x27a701e0  addiu       $a3, $sp, 0x1E0
    ctx->pc = 0x49329cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_4932a0:
    // 0x4932a0: 0x8e820050  lw          $v0, 0x50($s4)
    ctx->pc = 0x4932a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_4932a4:
    // 0x4932a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4932a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4932a8:
    // 0x4932a8: 0xc125914  jal         func_496450
label_4932ac:
    if (ctx->pc == 0x4932ACu) {
        ctx->pc = 0x4932ACu;
            // 0x4932ac: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4932B0u;
        goto label_4932b0;
    }
    ctx->pc = 0x4932A8u;
    SET_GPR_U32(ctx, 31, 0x4932B0u);
    ctx->pc = 0x4932ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4932A8u;
            // 0x4932ac: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496450u;
    if (runtime->hasFunction(0x496450u)) {
        auto targetFn = runtime->lookupFunction(0x496450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4932B0u; }
        if (ctx->pc != 0x4932B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496450_0x496450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4932B0u; }
        if (ctx->pc != 0x4932B0u) { return; }
    }
    ctx->pc = 0x4932B0u;
label_4932b0:
    // 0x4932b0: 0x100003ef  b           . + 4 + (0x3EF << 2)
label_4932b4:
    if (ctx->pc == 0x4932B4u) {
        ctx->pc = 0x4932B8u;
        goto label_4932b8;
    }
    ctx->pc = 0x4932B0u;
    {
        const bool branch_taken_0x4932b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4932b0) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x4932B8u;
label_4932b8:
    // 0x4932b8: 0x8e910004  lw          $s1, 0x4($s4)
    ctx->pc = 0x4932b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4932bc:
    // 0x4932bc: 0x27a4027c  addiu       $a0, $sp, 0x27C
    ctx->pc = 0x4932bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
label_4932c0:
    // 0x4932c0: 0xc1250ec  jal         func_4943B0
label_4932c4:
    if (ctx->pc == 0x4932C4u) {
        ctx->pc = 0x4932C4u;
            // 0x4932c4: 0x26250070  addiu       $a1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->pc = 0x4932C8u;
        goto label_4932c8;
    }
    ctx->pc = 0x4932C0u;
    SET_GPR_U32(ctx, 31, 0x4932C8u);
    ctx->pc = 0x4932C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4932C0u;
            // 0x4932c4: 0x26250070  addiu       $a1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4943B0u;
    if (runtime->hasFunction(0x4943B0u)) {
        auto targetFn = runtime->lookupFunction(0x4943B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4932C8u; }
        if (ctx->pc != 0x4932C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004943B0_0x4943b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4932C8u; }
        if (ctx->pc != 0x4932C8u) { return; }
    }
    ctx->pc = 0x4932C8u;
label_4932c8:
    // 0x4932c8: 0x27a40278  addiu       $a0, $sp, 0x278
    ctx->pc = 0x4932c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
label_4932cc:
    // 0x4932cc: 0xc1250d4  jal         func_494350
label_4932d0:
    if (ctx->pc == 0x4932D0u) {
        ctx->pc = 0x4932D0u;
            // 0x4932d0: 0x26250070  addiu       $a1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->pc = 0x4932D4u;
        goto label_4932d4;
    }
    ctx->pc = 0x4932CCu;
    SET_GPR_U32(ctx, 31, 0x4932D4u);
    ctx->pc = 0x4932D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4932CCu;
            // 0x4932d0: 0x26250070  addiu       $a1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494350u;
    if (runtime->hasFunction(0x494350u)) {
        auto targetFn = runtime->lookupFunction(0x494350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4932D4u; }
        if (ctx->pc != 0x4932D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494350_0x494350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4932D4u; }
        if (ctx->pc != 0x4932D4u) { return; }
    }
    ctx->pc = 0x4932D4u;
label_4932d4:
    // 0x4932d4: 0x27a4027c  addiu       $a0, $sp, 0x27C
    ctx->pc = 0x4932d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
label_4932d8:
    // 0x4932d8: 0xc1250cc  jal         func_494330
label_4932dc:
    if (ctx->pc == 0x4932DCu) {
        ctx->pc = 0x4932DCu;
            // 0x4932dc: 0x27a50278  addiu       $a1, $sp, 0x278 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
        ctx->pc = 0x4932E0u;
        goto label_4932e0;
    }
    ctx->pc = 0x4932D8u;
    SET_GPR_U32(ctx, 31, 0x4932E0u);
    ctx->pc = 0x4932DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4932D8u;
            // 0x4932dc: 0x27a50278  addiu       $a1, $sp, 0x278 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494330u;
    if (runtime->hasFunction(0x494330u)) {
        auto targetFn = runtime->lookupFunction(0x494330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4932E0u; }
        if (ctx->pc != 0x4932E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494330_0x494330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4932E0u; }
        if (ctx->pc != 0x4932E0u) { return; }
    }
    ctx->pc = 0x4932E0u;
label_4932e0:
    // 0x4932e0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_4932e4:
    if (ctx->pc == 0x4932E4u) {
        ctx->pc = 0x4932E8u;
        goto label_4932e8;
    }
    ctx->pc = 0x4932E0u;
    {
        const bool branch_taken_0x4932e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4932e0) {
            ctx->pc = 0x493388u;
            goto label_493388;
        }
    }
    ctx->pc = 0x4932E8u;
label_4932e8:
    // 0x4932e8: 0xc1250e8  jal         func_4943A0
label_4932ec:
    if (ctx->pc == 0x4932ECu) {
        ctx->pc = 0x4932ECu;
            // 0x4932ec: 0x27a4027c  addiu       $a0, $sp, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
        ctx->pc = 0x4932F0u;
        goto label_4932f0;
    }
    ctx->pc = 0x4932E8u;
    SET_GPR_U32(ctx, 31, 0x4932F0u);
    ctx->pc = 0x4932ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4932E8u;
            // 0x4932ec: 0x27a4027c  addiu       $a0, $sp, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4943A0u;
    if (runtime->hasFunction(0x4943A0u)) {
        auto targetFn = runtime->lookupFunction(0x4943A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4932F0u; }
        if (ctx->pc != 0x4932F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004943A0_0x4943a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4932F0u; }
        if (ctx->pc != 0x4932F0u) { return; }
    }
    ctx->pc = 0x4932F0u;
label_4932f0:
    // 0x4932f0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x4932f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4932f4:
    // 0x4932f4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4932f8:
    if (ctx->pc == 0x4932F8u) {
        ctx->pc = 0x4932FCu;
        goto label_4932fc;
    }
    ctx->pc = 0x4932F4u;
    {
        const bool branch_taken_0x4932f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4932f4) {
            ctx->pc = 0x493330u;
            goto label_493330;
        }
    }
    ctx->pc = 0x4932FCu;
label_4932fc:
    // 0x4932fc: 0xc1250e8  jal         func_4943A0
label_493300:
    if (ctx->pc == 0x493300u) {
        ctx->pc = 0x493300u;
            // 0x493300: 0x27a4027c  addiu       $a0, $sp, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
        ctx->pc = 0x493304u;
        goto label_493304;
    }
    ctx->pc = 0x4932FCu;
    SET_GPR_U32(ctx, 31, 0x493304u);
    ctx->pc = 0x493300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4932FCu;
            // 0x493300: 0x27a4027c  addiu       $a0, $sp, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4943A0u;
    if (runtime->hasFunction(0x4943A0u)) {
        auto targetFn = runtime->lookupFunction(0x4943A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493304u; }
        if (ctx->pc != 0x493304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004943A0_0x4943a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493304u; }
        if (ctx->pc != 0x493304u) { return; }
    }
    ctx->pc = 0x493304u;
label_493304:
    // 0x493304: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x493304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_493308:
    // 0x493308: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x493308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_49330c:
    // 0x49330c: 0xc04af96  jal         func_12BE58
label_493310:
    if (ctx->pc == 0x493310u) {
        ctx->pc = 0x493310u;
            // 0x493310: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x493314u;
        goto label_493314;
    }
    ctx->pc = 0x49330Cu;
    SET_GPR_U32(ctx, 31, 0x493314u);
    ctx->pc = 0x493310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49330Cu;
            // 0x493310: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493314u; }
        if (ctx->pc != 0x493314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493314u; }
        if (ctx->pc != 0x493314u) { return; }
    }
    ctx->pc = 0x493314u;
label_493314:
    // 0x493314: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_493318:
    if (ctx->pc == 0x493318u) {
        ctx->pc = 0x49331Cu;
        goto label_49331c;
    }
    ctx->pc = 0x493314u;
    {
        const bool branch_taken_0x493314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493314) {
            ctx->pc = 0x493360u;
            goto label_493360;
        }
    }
    ctx->pc = 0x49331Cu;
label_49331c:
    // 0x49331c: 0xc1250e4  jal         func_494390
label_493320:
    if (ctx->pc == 0x493320u) {
        ctx->pc = 0x493320u;
            // 0x493320: 0x27a4027c  addiu       $a0, $sp, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
        ctx->pc = 0x493324u;
        goto label_493324;
    }
    ctx->pc = 0x49331Cu;
    SET_GPR_U32(ctx, 31, 0x493324u);
    ctx->pc = 0x493320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49331Cu;
            // 0x493320: 0x27a4027c  addiu       $a0, $sp, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494390u;
    if (runtime->hasFunction(0x494390u)) {
        auto targetFn = runtime->lookupFunction(0x494390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493324u; }
        if (ctx->pc != 0x493324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494390_0x494390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493324u; }
        if (ctx->pc != 0x493324u) { return; }
    }
    ctx->pc = 0x493324u;
label_493324:
    // 0x493324: 0x1000001a  b           . + 4 + (0x1A << 2)
label_493328:
    if (ctx->pc == 0x493328u) {
        ctx->pc = 0x49332Cu;
        goto label_49332c;
    }
    ctx->pc = 0x493324u;
    {
        const bool branch_taken_0x493324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493324) {
            ctx->pc = 0x493390u;
            goto label_493390;
        }
    }
    ctx->pc = 0x49332Cu;
label_49332c:
    // 0x49332c: 0x0  nop
    ctx->pc = 0x49332cu;
    // NOP
label_493330:
    // 0x493330: 0xc1250e8  jal         func_4943A0
label_493334:
    if (ctx->pc == 0x493334u) {
        ctx->pc = 0x493334u;
            // 0x493334: 0x27a4027c  addiu       $a0, $sp, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
        ctx->pc = 0x493338u;
        goto label_493338;
    }
    ctx->pc = 0x493330u;
    SET_GPR_U32(ctx, 31, 0x493338u);
    ctx->pc = 0x493334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493330u;
            // 0x493334: 0x27a4027c  addiu       $a0, $sp, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4943A0u;
    if (runtime->hasFunction(0x4943A0u)) {
        auto targetFn = runtime->lookupFunction(0x4943A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493338u; }
        if (ctx->pc != 0x493338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004943A0_0x4943a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493338u; }
        if (ctx->pc != 0x493338u) { return; }
    }
    ctx->pc = 0x493338u;
label_493338:
    // 0x493338: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x493338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_49333c:
    // 0x49333c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x49333cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_493340:
    // 0x493340: 0xc04af96  jal         func_12BE58
label_493344:
    if (ctx->pc == 0x493344u) {
        ctx->pc = 0x493344u;
            // 0x493344: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x493348u;
        goto label_493348;
    }
    ctx->pc = 0x493340u;
    SET_GPR_U32(ctx, 31, 0x493348u);
    ctx->pc = 0x493344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493340u;
            // 0x493344: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493348u; }
        if (ctx->pc != 0x493348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493348u; }
        if (ctx->pc != 0x493348u) { return; }
    }
    ctx->pc = 0x493348u;
label_493348:
    // 0x493348: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_49334c:
    if (ctx->pc == 0x49334Cu) {
        ctx->pc = 0x493350u;
        goto label_493350;
    }
    ctx->pc = 0x493348u;
    {
        const bool branch_taken_0x493348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493348) {
            ctx->pc = 0x493360u;
            goto label_493360;
        }
    }
    ctx->pc = 0x493350u;
label_493350:
    // 0x493350: 0xc1250e4  jal         func_494390
label_493354:
    if (ctx->pc == 0x493354u) {
        ctx->pc = 0x493354u;
            // 0x493354: 0x27a4027c  addiu       $a0, $sp, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
        ctx->pc = 0x493358u;
        goto label_493358;
    }
    ctx->pc = 0x493350u;
    SET_GPR_U32(ctx, 31, 0x493358u);
    ctx->pc = 0x493354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493350u;
            // 0x493354: 0x27a4027c  addiu       $a0, $sp, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494390u;
    if (runtime->hasFunction(0x494390u)) {
        auto targetFn = runtime->lookupFunction(0x494390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493358u; }
        if (ctx->pc != 0x493358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494390_0x494390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493358u; }
        if (ctx->pc != 0x493358u) { return; }
    }
    ctx->pc = 0x493358u;
label_493358:
    // 0x493358: 0x1000000d  b           . + 4 + (0xD << 2)
label_49335c:
    if (ctx->pc == 0x49335Cu) {
        ctx->pc = 0x493360u;
        goto label_493360;
    }
    ctx->pc = 0x493358u;
    {
        const bool branch_taken_0x493358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493358) {
            ctx->pc = 0x493390u;
            goto label_493390;
        }
    }
    ctx->pc = 0x493360u;
label_493360:
    // 0x493360: 0xc1250dc  jal         func_494370
label_493364:
    if (ctx->pc == 0x493364u) {
        ctx->pc = 0x493364u;
            // 0x493364: 0x27a4027c  addiu       $a0, $sp, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
        ctx->pc = 0x493368u;
        goto label_493368;
    }
    ctx->pc = 0x493360u;
    SET_GPR_U32(ctx, 31, 0x493368u);
    ctx->pc = 0x493364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493360u;
            // 0x493364: 0x27a4027c  addiu       $a0, $sp, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494370u;
    if (runtime->hasFunction(0x494370u)) {
        auto targetFn = runtime->lookupFunction(0x494370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493368u; }
        if (ctx->pc != 0x493368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494370_0x494370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493368u; }
        if (ctx->pc != 0x493368u) { return; }
    }
    ctx->pc = 0x493368u;
label_493368:
    // 0x493368: 0x27a40278  addiu       $a0, $sp, 0x278
    ctx->pc = 0x493368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
label_49336c:
    // 0x49336c: 0xc1250d4  jal         func_494350
label_493370:
    if (ctx->pc == 0x493370u) {
        ctx->pc = 0x493370u;
            // 0x493370: 0x26250070  addiu       $a1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->pc = 0x493374u;
        goto label_493374;
    }
    ctx->pc = 0x49336Cu;
    SET_GPR_U32(ctx, 31, 0x493374u);
    ctx->pc = 0x493370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49336Cu;
            // 0x493370: 0x26250070  addiu       $a1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494350u;
    if (runtime->hasFunction(0x494350u)) {
        auto targetFn = runtime->lookupFunction(0x494350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493374u; }
        if (ctx->pc != 0x493374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494350_0x494350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493374u; }
        if (ctx->pc != 0x493374u) { return; }
    }
    ctx->pc = 0x493374u;
label_493374:
    // 0x493374: 0x27a4027c  addiu       $a0, $sp, 0x27C
    ctx->pc = 0x493374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
label_493378:
    // 0x493378: 0xc1250cc  jal         func_494330
label_49337c:
    if (ctx->pc == 0x49337Cu) {
        ctx->pc = 0x49337Cu;
            // 0x49337c: 0x27a50278  addiu       $a1, $sp, 0x278 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
        ctx->pc = 0x493380u;
        goto label_493380;
    }
    ctx->pc = 0x493378u;
    SET_GPR_U32(ctx, 31, 0x493380u);
    ctx->pc = 0x49337Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493378u;
            // 0x49337c: 0x27a50278  addiu       $a1, $sp, 0x278 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494330u;
    if (runtime->hasFunction(0x494330u)) {
        auto targetFn = runtime->lookupFunction(0x494330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493380u; }
        if (ctx->pc != 0x493380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494330_0x494330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493380u; }
        if (ctx->pc != 0x493380u) { return; }
    }
    ctx->pc = 0x493380u;
label_493380:
    // 0x493380: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_493384:
    if (ctx->pc == 0x493384u) {
        ctx->pc = 0x493388u;
        goto label_493388;
    }
    ctx->pc = 0x493380u;
    {
        const bool branch_taken_0x493380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493380) {
            ctx->pc = 0x4932E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4932e8;
        }
    }
    ctx->pc = 0x493388u;
label_493388:
    // 0x493388: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x493388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49338c:
    // 0x49338c: 0x0  nop
    ctx->pc = 0x49338cu;
    // NOP
label_493390:
    // 0x493390: 0x104003b7  beqz        $v0, . + 4 + (0x3B7 << 2)
label_493394:
    if (ctx->pc == 0x493394u) {
        ctx->pc = 0x493394u;
            // 0x493394: 0xafa201e8  sw          $v0, 0x1E8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 2));
        ctx->pc = 0x493398u;
        goto label_493398;
    }
    ctx->pc = 0x493390u;
    {
        const bool branch_taken_0x493390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x493394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x493390u;
            // 0x493394: 0xafa201e8  sw          $v0, 0x1E8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493390) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x493398u;
label_493398:
    // 0x493398: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x493398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_49339c:
    // 0x49339c: 0x26840048  addiu       $a0, $s4, 0x48
    ctx->pc = 0x49339cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_4933a0:
    // 0x4933a0: 0xa3a201e0  sb          $v0, 0x1E0($sp)
    ctx->pc = 0x4933a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 480), (uint8_t)GPR_U32(ctx, 2));
label_4933a4:
    // 0x4933a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4933a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4933a8:
    // 0x4933a8: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x4933a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_4933ac:
    // 0x4933ac: 0x27a701e0  addiu       $a3, $sp, 0x1E0
    ctx->pc = 0x4933acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_4933b0:
    // 0x4933b0: 0x8e820050  lw          $v0, 0x50($s4)
    ctx->pc = 0x4933b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_4933b4:
    // 0x4933b4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4933b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4933b8:
    // 0x4933b8: 0xc125914  jal         func_496450
label_4933bc:
    if (ctx->pc == 0x4933BCu) {
        ctx->pc = 0x4933BCu;
            // 0x4933bc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4933C0u;
        goto label_4933c0;
    }
    ctx->pc = 0x4933B8u;
    SET_GPR_U32(ctx, 31, 0x4933C0u);
    ctx->pc = 0x4933BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4933B8u;
            // 0x4933bc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496450u;
    if (runtime->hasFunction(0x496450u)) {
        auto targetFn = runtime->lookupFunction(0x496450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4933C0u; }
        if (ctx->pc != 0x4933C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496450_0x496450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4933C0u; }
        if (ctx->pc != 0x4933C0u) { return; }
    }
    ctx->pc = 0x4933C0u;
label_4933c0:
    // 0x4933c0: 0x100003ab  b           . + 4 + (0x3AB << 2)
label_4933c4:
    if (ctx->pc == 0x4933C4u) {
        ctx->pc = 0x4933C8u;
        goto label_4933c8;
    }
    ctx->pc = 0x4933C0u;
    {
        const bool branch_taken_0x4933c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4933c0) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x4933C8u;
label_4933c8:
    // 0x4933c8: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x4933c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4933cc:
    // 0x4933cc: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4933ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4933d0:
    // 0x4933d0: 0x1440006f  bnez        $v0, . + 4 + (0x6F << 2)
label_4933d4:
    if (ctx->pc == 0x4933D4u) {
        ctx->pc = 0x4933D8u;
        goto label_4933d8;
    }
    ctx->pc = 0x4933D0u;
    {
        const bool branch_taken_0x4933d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4933d0) {
            ctx->pc = 0x493590u;
            goto label_493590;
        }
    }
    ctx->pc = 0x4933D8u;
label_4933d8:
    // 0x4933d8: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x4933d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_4933dc:
    // 0x4933dc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x4933dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_4933e0:
    // 0x4933e0: 0x1440006b  bnez        $v0, . + 4 + (0x6B << 2)
label_4933e4:
    if (ctx->pc == 0x4933E4u) {
        ctx->pc = 0x4933E8u;
        goto label_4933e8;
    }
    ctx->pc = 0x4933E0u;
    {
        const bool branch_taken_0x4933e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4933e0) {
            ctx->pc = 0x493590u;
            goto label_493590;
        }
    }
    ctx->pc = 0x4933E8u;
label_4933e8:
    // 0x4933e8: 0x27a40274  addiu       $a0, $sp, 0x274
    ctx->pc = 0x4933e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 628));
label_4933ec:
    // 0x4933ec: 0xc125124  jal         func_494490
label_4933f0:
    if (ctx->pc == 0x4933F0u) {
        ctx->pc = 0x4933F0u;
            // 0x4933f0: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->pc = 0x4933F4u;
        goto label_4933f4;
    }
    ctx->pc = 0x4933ECu;
    SET_GPR_U32(ctx, 31, 0x4933F4u);
    ctx->pc = 0x4933F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4933ECu;
            // 0x4933f0: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4933F4u; }
        if (ctx->pc != 0x4933F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4933F4u; }
        if (ctx->pc != 0x4933F4u) { return; }
    }
    ctx->pc = 0x4933F4u;
label_4933f4:
    // 0x4933f4: 0x8fa50274  lw          $a1, 0x274($sp)
    ctx->pc = 0x4933f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_4933f8:
    // 0x4933f8: 0xc125120  jal         func_494480
label_4933fc:
    if (ctx->pc == 0x4933FCu) {
        ctx->pc = 0x4933FCu;
            // 0x4933fc: 0x27a403dc  addiu       $a0, $sp, 0x3DC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 988));
        ctx->pc = 0x493400u;
        goto label_493400;
    }
    ctx->pc = 0x4933F8u;
    SET_GPR_U32(ctx, 31, 0x493400u);
    ctx->pc = 0x4933FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4933F8u;
            // 0x4933fc: 0x27a403dc  addiu       $a0, $sp, 0x3DC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 988));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493400u; }
        if (ctx->pc != 0x493400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493400u; }
        if (ctx->pc != 0x493400u) { return; }
    }
    ctx->pc = 0x493400u;
label_493400:
    // 0x493400: 0x8fa303dc  lw          $v1, 0x3DC($sp)
    ctx->pc = 0x493400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 988)));
label_493404:
    // 0x493404: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x493404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_493408:
    // 0x493408: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x493408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_49340c:
    // 0x49340c: 0x26850048  addiu       $a1, $s4, 0x48
    ctx->pc = 0x49340cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_493410:
    // 0x493410: 0x9070fff0  lbu         $s0, -0x10($v1)
    ctx->pc = 0x493410u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_493414:
    // 0x493414: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x493414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_493418:
    // 0x493418: 0xdc63fff8  ld          $v1, -0x8($v1)
    ctx->pc = 0x493418u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_49341c:
    // 0x49341c: 0xffa30208  sd          $v1, 0x208($sp)
    ctx->pc = 0x49341cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 3));
label_493420:
    // 0x493420: 0xc125124  jal         func_494490
label_493424:
    if (ctx->pc == 0x493424u) {
        ctx->pc = 0x493424u;
            // 0x493424: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x493428u;
        goto label_493428;
    }
    ctx->pc = 0x493420u;
    SET_GPR_U32(ctx, 31, 0x493428u);
    ctx->pc = 0x493424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493420u;
            // 0x493424: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493428u; }
        if (ctx->pc != 0x493428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493428u; }
        if (ctx->pc != 0x493428u) { return; }
    }
    ctx->pc = 0x493428u;
label_493428:
    // 0x493428: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x493428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_49342c:
    // 0x49342c: 0xc125120  jal         func_494480
label_493430:
    if (ctx->pc == 0x493430u) {
        ctx->pc = 0x493430u;
            // 0x493430: 0x27a403d8  addiu       $a0, $sp, 0x3D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 984));
        ctx->pc = 0x493434u;
        goto label_493434;
    }
    ctx->pc = 0x49342Cu;
    SET_GPR_U32(ctx, 31, 0x493434u);
    ctx->pc = 0x493430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49342Cu;
            // 0x493430: 0x27a403d8  addiu       $a0, $sp, 0x3D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493434u; }
        if (ctx->pc != 0x493434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493434u; }
        if (ctx->pc != 0x493434u) { return; }
    }
    ctx->pc = 0x493434u;
label_493434:
    // 0x493434: 0x8fa603d8  lw          $a2, 0x3D8($sp)
    ctx->pc = 0x493434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 984)));
label_493438:
    // 0x493438: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x493438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_49343c:
    // 0x49343c: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x49343cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_493440:
    // 0x493440: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x493440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_493444:
    // 0x493444: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x493444u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_493448:
    // 0x493448: 0x90c5fff0  lbu         $a1, -0x10($a2)
    ctx->pc = 0x493448u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967280)));
label_49344c:
    // 0x49344c: 0xa3a501f0  sb          $a1, 0x1F0($sp)
    ctx->pc = 0x49344cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 496), (uint8_t)GPR_U32(ctx, 5));
label_493450:
    // 0x493450: 0xdcc5fff8  ld          $a1, -0x8($a2)
    ctx->pc = 0x493450u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_493454:
    // 0x493454: 0xffa501f8  sd          $a1, 0x1F8($sp)
    ctx->pc = 0x493454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 5));
label_493458:
    // 0x493458: 0x8e85004c  lw          $a1, 0x4C($s4)
    ctx->pc = 0x493458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_49345c:
    // 0x49345c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x49345cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_493460:
    // 0x493460: 0xae85004c  sw          $a1, 0x4C($s4)
    ctx->pc = 0x493460u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 5));
label_493464:
    // 0x493464: 0xafa401a0  sw          $a0, 0x1A0($sp)
    ctx->pc = 0x493464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 4));
label_493468:
    // 0x493468: 0xafb40190  sw          $s4, 0x190($sp)
    ctx->pc = 0x493468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 20));
label_49346c:
    // 0x49346c: 0xafb70194  sw          $s7, 0x194($sp)
    ctx->pc = 0x49346cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 23));
label_493470:
    // 0x493470: 0xafa0019c  sw          $zero, 0x19C($sp)
    ctx->pc = 0x493470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 0));
label_493474:
    // 0x493474: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_493478:
    if (ctx->pc == 0x493478u) {
        ctx->pc = 0x493478u;
            // 0x493478: 0xafb10198  sw          $s1, 0x198($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 17));
        ctx->pc = 0x49347Cu;
        goto label_49347c;
    }
    ctx->pc = 0x493474u;
    {
        const bool branch_taken_0x493474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x493478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x493474u;
            // 0x493478: 0xafb10198  sw          $s1, 0x198($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493474) {
            ctx->pc = 0x493498u;
            goto label_493498;
        }
    }
    ctx->pc = 0x49347Cu;
label_49347c:
    // 0x49347c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_493480:
    if (ctx->pc == 0x493480u) {
        ctx->pc = 0x493484u;
        goto label_493484;
    }
    ctx->pc = 0x49347Cu;
    {
        const bool branch_taken_0x49347c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x49347c) {
            ctx->pc = 0x493490u;
            goto label_493490;
        }
    }
    ctx->pc = 0x493484u;
label_493484:
    // 0x493484: 0x1000000a  b           . + 4 + (0xA << 2)
label_493488:
    if (ctx->pc == 0x493488u) {
        ctx->pc = 0x49348Cu;
        goto label_49348c;
    }
    ctx->pc = 0x493484u;
    {
        const bool branch_taken_0x493484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493484) {
            ctx->pc = 0x4934B0u;
            goto label_4934b0;
        }
    }
    ctx->pc = 0x49348Cu;
label_49348c:
    // 0x49348c: 0x0  nop
    ctx->pc = 0x49348cu;
    // NOP
label_493490:
    // 0x493490: 0x10000007  b           . + 4 + (0x7 << 2)
label_493494:
    if (ctx->pc == 0x493494u) {
        ctx->pc = 0x493494u;
            // 0x493494: 0x8fa70208  lw          $a3, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->pc = 0x493498u;
        goto label_493498;
    }
    ctx->pc = 0x493490u;
    {
        const bool branch_taken_0x493490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x493494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x493490u;
            // 0x493494: 0x8fa70208  lw          $a3, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493490) {
            ctx->pc = 0x4934B0u;
            goto label_4934b0;
        }
    }
    ctx->pc = 0x493498u;
label_493498:
    // 0x493498: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x493498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_49349c:
    // 0x49349c: 0x93a30208  lbu         $v1, 0x208($sp)
    ctx->pc = 0x49349cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 520)));
label_4934a0:
    // 0x4934a0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x4934a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4934a4:
    // 0x4934a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4934a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4934a8:
    // 0x4934a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4934a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4934ac:
    // 0x4934ac: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x4934acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4934b0:
    // 0x4934b0: 0xafa701a4  sw          $a3, 0x1A4($sp)
    ctx->pc = 0x4934b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 7));
label_4934b4:
    // 0x4934b4: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x4934b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_4934b8:
    // 0x4934b8: 0x8fb001f8  lw          $s0, 0x1F8($sp)
    ctx->pc = 0x4934b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_4934bc:
    // 0x4934bc: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x4934bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
label_4934c0:
    // 0x4934c0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x4934c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4934c4:
    // 0x4934c4: 0x8e150010  lw          $s5, 0x10($s0)
    ctx->pc = 0x4934c4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4934c8:
    // 0x4934c8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4934c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4934cc:
    // 0x4934cc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4934ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4934d0:
    // 0x4934d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4934d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4934d4:
    // 0x4934d4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x4934d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_4934d8:
    // 0x4934d8: 0x2a21026  xor         $v0, $s5, $v0
    ctx->pc = 0x4934d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ GPR_U64(ctx, 2));
label_4934dc:
    // 0x4934dc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4934dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4934e0:
    // 0x4934e0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4934e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4934e4:
    // 0x4934e4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4934e8:
    if (ctx->pc == 0x4934E8u) {
        ctx->pc = 0x4934ECu;
        goto label_4934ec;
    }
    ctx->pc = 0x4934E4u;
    {
        const bool branch_taken_0x4934e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4934e4) {
            ctx->pc = 0x493560u;
            goto label_493560;
        }
    }
    ctx->pc = 0x4934ECu;
label_4934ec:
    // 0x4934ec: 0x26a20014  addiu       $v0, $s5, 0x14
    ctx->pc = 0x4934ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
label_4934f0:
    // 0x4934f0: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x4934f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_4934f4:
    // 0x4934f4: 0x0  nop
    ctx->pc = 0x4934f4u;
    // NOP
label_4934f8:
    // 0x4934f8: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x4934f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_4934fc:
    // 0x4934fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4934fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_493500:
    // 0x493500: 0xc04af96  jal         func_12BE58
label_493504:
    if (ctx->pc == 0x493504u) {
        ctx->pc = 0x493504u;
            // 0x493504: 0x8fa501a4  lw          $a1, 0x1A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
        ctx->pc = 0x493508u;
        goto label_493508;
    }
    ctx->pc = 0x493500u;
    SET_GPR_U32(ctx, 31, 0x493508u);
    ctx->pc = 0x493504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493500u;
            // 0x493504: 0x8fa501a4  lw          $a1, 0x1A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493508u; }
        if (ctx->pc != 0x493508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493508u; }
        if (ctx->pc != 0x493508u) { return; }
    }
    ctx->pc = 0x493508u;
label_493508:
    // 0x493508: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_49350c:
    if (ctx->pc == 0x49350Cu) {
        ctx->pc = 0x493510u;
        goto label_493510;
    }
    ctx->pc = 0x493508u;
    {
        const bool branch_taken_0x493508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493508) {
            ctx->pc = 0x493528u;
            goto label_493528;
        }
    }
    ctx->pc = 0x493510u;
label_493510:
    // 0x493510: 0x15283c  dsll32      $a1, $s5, 0
    ctx->pc = 0x493510u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) << (32 + 0));
label_493514:
    // 0x493514: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x493514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_493518:
    // 0x493518: 0xc125a18  jal         func_496860
label_49351c:
    if (ctx->pc == 0x49351Cu) {
        ctx->pc = 0x49351Cu;
            // 0x49351c: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->pc = 0x493520u;
        goto label_493520;
    }
    ctx->pc = 0x493518u;
    SET_GPR_U32(ctx, 31, 0x493520u);
    ctx->pc = 0x49351Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493518u;
            // 0x49351c: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496860u;
    if (runtime->hasFunction(0x496860u)) {
        auto targetFn = runtime->lookupFunction(0x496860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493520u; }
        if (ctx->pc != 0x493520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496860_0x496860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493520u; }
        if (ctx->pc != 0x493520u) { return; }
    }
    ctx->pc = 0x493520u;
label_493520:
    // 0x493520: 0x1000000f  b           . + 4 + (0xF << 2)
label_493524:
    if (ctx->pc == 0x493524u) {
        ctx->pc = 0x493528u;
        goto label_493528;
    }
    ctx->pc = 0x493520u;
    {
        const bool branch_taken_0x493520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493520) {
            ctx->pc = 0x493560u;
            goto label_493560;
        }
    }
    ctx->pc = 0x493528u;
label_493528:
    // 0x493528: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x493528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_49352c:
    // 0x49352c: 0x15103c  dsll32      $v0, $s5, 0
    ctx->pc = 0x49352cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 0));
label_493530:
    // 0x493530: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x493530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_493534:
    // 0x493534: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x493534u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_493538:
    // 0x493538: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x493538u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_49353c:
    // 0x49353c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x49353cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_493540:
    // 0x493540: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x493540u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_493544:
    // 0x493544: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x493544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_493548:
    // 0x493548: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x493548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_49354c:
    // 0x49354c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x49354cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_493550:
    // 0x493550: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x493550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_493554:
    // 0x493554: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_493558:
    if (ctx->pc == 0x493558u) {
        ctx->pc = 0x49355Cu;
        goto label_49355c;
    }
    ctx->pc = 0x493554u;
    {
        const bool branch_taken_0x493554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493554) {
            ctx->pc = 0x4934F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4934f8;
        }
    }
    ctx->pc = 0x49355Cu;
label_49355c:
    // 0x49355c: 0x0  nop
    ctx->pc = 0x49355cu;
    // NOP
label_493560:
    // 0x493560: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x493560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_493564:
    // 0x493564: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x493564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_493568:
    // 0x493568: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x493568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_49356c:
    // 0x49356c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x49356cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_493570:
    // 0x493570: 0x27a70190  addiu       $a3, $sp, 0x190
    ctx->pc = 0x493570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_493574:
    // 0x493574: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x493574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_493578:
    // 0x493578: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x493578u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_49357c:
    // 0x49357c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x49357cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_493580:
    // 0x493580: 0xc125adc  jal         func_496B70
label_493584:
    if (ctx->pc == 0x493584u) {
        ctx->pc = 0x493584u;
            // 0x493584: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x493588u;
        goto label_493588;
    }
    ctx->pc = 0x493580u;
    SET_GPR_U32(ctx, 31, 0x493588u);
    ctx->pc = 0x493584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493580u;
            // 0x493584: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496B70u;
    if (runtime->hasFunction(0x496B70u)) {
        auto targetFn = runtime->lookupFunction(0x496B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493588u; }
        if (ctx->pc != 0x493588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496B70_0x496b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493588u; }
        if (ctx->pc != 0x493588u) { return; }
    }
    ctx->pc = 0x493588u;
label_493588:
    // 0x493588: 0x10000017  b           . + 4 + (0x17 << 2)
label_49358c:
    if (ctx->pc == 0x49358Cu) {
        ctx->pc = 0x493590u;
        goto label_493590;
    }
    ctx->pc = 0x493588u;
    {
        const bool branch_taken_0x493588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493588) {
            ctx->pc = 0x4935E8u;
            goto label_4935e8;
        }
    }
    ctx->pc = 0x493590u;
label_493590:
    // 0x493590: 0xafb40170  sw          $s4, 0x170($sp)
    ctx->pc = 0x493590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 20));
label_493594:
    // 0x493594: 0xafb70174  sw          $s7, 0x174($sp)
    ctx->pc = 0x493594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 23));
label_493598:
    // 0x493598: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x493598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_49359c:
    // 0x49359c: 0xafb10178  sw          $s1, 0x178($sp)
    ctx->pc = 0x49359cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 17));
label_4935a0:
    // 0x4935a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4935a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4935a4:
    // 0x4935a4: 0xafa0017c  sw          $zero, 0x17C($sp)
    ctx->pc = 0x4935a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 0));
label_4935a8:
    // 0x4935a8: 0x27a70170  addiu       $a3, $sp, 0x170
    ctx->pc = 0x4935a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_4935ac:
    // 0x4935ac: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x4935acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4935b0:
    // 0x4935b0: 0xafa30184  sw          $v1, 0x184($sp)
    ctx->pc = 0x4935b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 3));
label_4935b4:
    // 0x4935b4: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x4935b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
label_4935b8:
    // 0x4935b8: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x4935b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_4935bc:
    // 0x4935bc: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x4935bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
label_4935c0:
    // 0x4935c0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x4935c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4935c4:
    // 0x4935c4: 0x8c450074  lw          $a1, 0x74($v0)
    ctx->pc = 0x4935c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_4935c8:
    // 0x4935c8: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x4935c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_4935cc:
    // 0x4935cc: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x4935ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4935d0:
    // 0x4935d0: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x4935d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_4935d4:
    // 0x4935d4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4935d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4935d8:
    // 0x4935d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4935d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4935dc:
    // 0x4935dc: 0xc125adc  jal         func_496B70
label_4935e0:
    if (ctx->pc == 0x4935E0u) {
        ctx->pc = 0x4935E0u;
            // 0x4935e0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4935E4u;
        goto label_4935e4;
    }
    ctx->pc = 0x4935DCu;
    SET_GPR_U32(ctx, 31, 0x4935E4u);
    ctx->pc = 0x4935E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4935DCu;
            // 0x4935e0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496B70u;
    if (runtime->hasFunction(0x496B70u)) {
        auto targetFn = runtime->lookupFunction(0x496B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4935E4u; }
        if (ctx->pc != 0x4935E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496B70_0x496b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4935E4u; }
        if (ctx->pc != 0x4935E4u) { return; }
    }
    ctx->pc = 0x4935E4u;
label_4935e4:
    // 0x4935e4: 0x0  nop
    ctx->pc = 0x4935e4u;
    // NOP
label_4935e8:
    // 0x4935e8: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x4935e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_4935ec:
    // 0x4935ec: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x4935ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4935f0:
    // 0x4935f0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4935f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4935f4:
    // 0x4935f4: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x4935f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_4935f8:
    // 0x4935f8: 0x1000031d  b           . + 4 + (0x31D << 2)
label_4935fc:
    if (ctx->pc == 0x4935FCu) {
        ctx->pc = 0x4935FCu;
            // 0x4935fc: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->pc = 0x493600u;
        goto label_493600;
    }
    ctx->pc = 0x4935F8u;
    {
        const bool branch_taken_0x4935f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4935FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4935F8u;
            // 0x4935fc: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4935f8) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x493600u;
label_493600:
    // 0x493600: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x493600u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_493604:
    // 0x493604: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x493604u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_493608:
    // 0x493608: 0x1440006f  bnez        $v0, . + 4 + (0x6F << 2)
label_49360c:
    if (ctx->pc == 0x49360Cu) {
        ctx->pc = 0x493610u;
        goto label_493610;
    }
    ctx->pc = 0x493608u;
    {
        const bool branch_taken_0x493608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493608) {
            ctx->pc = 0x4937C8u;
            goto label_4937c8;
        }
    }
    ctx->pc = 0x493610u;
label_493610:
    // 0x493610: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x493610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_493614:
    // 0x493614: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x493614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_493618:
    // 0x493618: 0x1440006b  bnez        $v0, . + 4 + (0x6B << 2)
label_49361c:
    if (ctx->pc == 0x49361Cu) {
        ctx->pc = 0x493620u;
        goto label_493620;
    }
    ctx->pc = 0x493618u;
    {
        const bool branch_taken_0x493618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493618) {
            ctx->pc = 0x4937C8u;
            goto label_4937c8;
        }
    }
    ctx->pc = 0x493620u;
label_493620:
    // 0x493620: 0x27a4026c  addiu       $a0, $sp, 0x26C
    ctx->pc = 0x493620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 620));
label_493624:
    // 0x493624: 0xc125124  jal         func_494490
label_493628:
    if (ctx->pc == 0x493628u) {
        ctx->pc = 0x493628u;
            // 0x493628: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->pc = 0x49362Cu;
        goto label_49362c;
    }
    ctx->pc = 0x493624u;
    SET_GPR_U32(ctx, 31, 0x49362Cu);
    ctx->pc = 0x493628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493624u;
            // 0x493628: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49362Cu; }
        if (ctx->pc != 0x49362Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49362Cu; }
        if (ctx->pc != 0x49362Cu) { return; }
    }
    ctx->pc = 0x49362Cu;
label_49362c:
    // 0x49362c: 0x8fa5026c  lw          $a1, 0x26C($sp)
    ctx->pc = 0x49362cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_493630:
    // 0x493630: 0xc125120  jal         func_494480
label_493634:
    if (ctx->pc == 0x493634u) {
        ctx->pc = 0x493634u;
            // 0x493634: 0x27a403d4  addiu       $a0, $sp, 0x3D4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 980));
        ctx->pc = 0x493638u;
        goto label_493638;
    }
    ctx->pc = 0x493630u;
    SET_GPR_U32(ctx, 31, 0x493638u);
    ctx->pc = 0x493634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493630u;
            // 0x493634: 0x27a403d4  addiu       $a0, $sp, 0x3D4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 980));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493638u; }
        if (ctx->pc != 0x493638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493638u; }
        if (ctx->pc != 0x493638u) { return; }
    }
    ctx->pc = 0x493638u;
label_493638:
    // 0x493638: 0x8fa303d4  lw          $v1, 0x3D4($sp)
    ctx->pc = 0x493638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 980)));
label_49363c:
    // 0x49363c: 0x27a40268  addiu       $a0, $sp, 0x268
    ctx->pc = 0x49363cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 616));
label_493640:
    // 0x493640: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x493640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_493644:
    // 0x493644: 0x26850048  addiu       $a1, $s4, 0x48
    ctx->pc = 0x493644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_493648:
    // 0x493648: 0x9070fff0  lbu         $s0, -0x10($v1)
    ctx->pc = 0x493648u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_49364c:
    // 0x49364c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49364cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_493650:
    // 0x493650: 0xdc63fff8  ld          $v1, -0x8($v1)
    ctx->pc = 0x493650u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_493654:
    // 0x493654: 0xffa30208  sd          $v1, 0x208($sp)
    ctx->pc = 0x493654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 3));
label_493658:
    // 0x493658: 0xc125124  jal         func_494490
label_49365c:
    if (ctx->pc == 0x49365Cu) {
        ctx->pc = 0x49365Cu;
            // 0x49365c: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x493660u;
        goto label_493660;
    }
    ctx->pc = 0x493658u;
    SET_GPR_U32(ctx, 31, 0x493660u);
    ctx->pc = 0x49365Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493658u;
            // 0x49365c: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493660u; }
        if (ctx->pc != 0x493660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493660u; }
        if (ctx->pc != 0x493660u) { return; }
    }
    ctx->pc = 0x493660u;
label_493660:
    // 0x493660: 0x8fa50268  lw          $a1, 0x268($sp)
    ctx->pc = 0x493660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_493664:
    // 0x493664: 0xc125120  jal         func_494480
label_493668:
    if (ctx->pc == 0x493668u) {
        ctx->pc = 0x493668u;
            // 0x493668: 0x27a403d0  addiu       $a0, $sp, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
        ctx->pc = 0x49366Cu;
        goto label_49366c;
    }
    ctx->pc = 0x493664u;
    SET_GPR_U32(ctx, 31, 0x49366Cu);
    ctx->pc = 0x493668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493664u;
            // 0x493668: 0x27a403d0  addiu       $a0, $sp, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49366Cu; }
        if (ctx->pc != 0x49366Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49366Cu; }
        if (ctx->pc != 0x49366Cu) { return; }
    }
    ctx->pc = 0x49366Cu;
label_49366c:
    // 0x49366c: 0x8fa603d0  lw          $a2, 0x3D0($sp)
    ctx->pc = 0x49366cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_493670:
    // 0x493670: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x493670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_493674:
    // 0x493674: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x493674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_493678:
    // 0x493678: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x493678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_49367c:
    // 0x49367c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x49367cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_493680:
    // 0x493680: 0x90c5fff0  lbu         $a1, -0x10($a2)
    ctx->pc = 0x493680u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967280)));
label_493684:
    // 0x493684: 0xa3a501f0  sb          $a1, 0x1F0($sp)
    ctx->pc = 0x493684u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 496), (uint8_t)GPR_U32(ctx, 5));
label_493688:
    // 0x493688: 0xdcc5fff8  ld          $a1, -0x8($a2)
    ctx->pc = 0x493688u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_49368c:
    // 0x49368c: 0xffa501f8  sd          $a1, 0x1F8($sp)
    ctx->pc = 0x49368cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 5));
label_493690:
    // 0x493690: 0x8e85004c  lw          $a1, 0x4C($s4)
    ctx->pc = 0x493690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_493694:
    // 0x493694: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x493694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_493698:
    // 0x493698: 0xae85004c  sw          $a1, 0x4C($s4)
    ctx->pc = 0x493698u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 5));
label_49369c:
    // 0x49369c: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x49369cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
label_4936a0:
    // 0x4936a0: 0xafb40150  sw          $s4, 0x150($sp)
    ctx->pc = 0x4936a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 20));
label_4936a4:
    // 0x4936a4: 0xafb70154  sw          $s7, 0x154($sp)
    ctx->pc = 0x4936a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 23));
label_4936a8:
    // 0x4936a8: 0xafb1015c  sw          $s1, 0x15C($sp)
    ctx->pc = 0x4936a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 17));
label_4936ac:
    // 0x4936ac: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_4936b0:
    if (ctx->pc == 0x4936B0u) {
        ctx->pc = 0x4936B0u;
            // 0x4936b0: 0xafa00158  sw          $zero, 0x158($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
        ctx->pc = 0x4936B4u;
        goto label_4936b4;
    }
    ctx->pc = 0x4936ACu;
    {
        const bool branch_taken_0x4936ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4936B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4936ACu;
            // 0x4936b0: 0xafa00158  sw          $zero, 0x158($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4936ac) {
            ctx->pc = 0x4936D0u;
            goto label_4936d0;
        }
    }
    ctx->pc = 0x4936B4u;
label_4936b4:
    // 0x4936b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_4936b8:
    if (ctx->pc == 0x4936B8u) {
        ctx->pc = 0x4936BCu;
        goto label_4936bc;
    }
    ctx->pc = 0x4936B4u;
    {
        const bool branch_taken_0x4936b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4936b4) {
            ctx->pc = 0x4936C8u;
            goto label_4936c8;
        }
    }
    ctx->pc = 0x4936BCu;
label_4936bc:
    // 0x4936bc: 0x1000000a  b           . + 4 + (0xA << 2)
label_4936c0:
    if (ctx->pc == 0x4936C0u) {
        ctx->pc = 0x4936C4u;
        goto label_4936c4;
    }
    ctx->pc = 0x4936BCu;
    {
        const bool branch_taken_0x4936bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4936bc) {
            ctx->pc = 0x4936E8u;
            goto label_4936e8;
        }
    }
    ctx->pc = 0x4936C4u;
label_4936c4:
    // 0x4936c4: 0x0  nop
    ctx->pc = 0x4936c4u;
    // NOP
label_4936c8:
    // 0x4936c8: 0x10000007  b           . + 4 + (0x7 << 2)
label_4936cc:
    if (ctx->pc == 0x4936CCu) {
        ctx->pc = 0x4936CCu;
            // 0x4936cc: 0x8fa70208  lw          $a3, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->pc = 0x4936D0u;
        goto label_4936d0;
    }
    ctx->pc = 0x4936C8u;
    {
        const bool branch_taken_0x4936c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4936CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4936C8u;
            // 0x4936cc: 0x8fa70208  lw          $a3, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4936c8) {
            ctx->pc = 0x4936E8u;
            goto label_4936e8;
        }
    }
    ctx->pc = 0x4936D0u;
label_4936d0:
    // 0x4936d0: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x4936d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_4936d4:
    // 0x4936d4: 0x93a30208  lbu         $v1, 0x208($sp)
    ctx->pc = 0x4936d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 520)));
label_4936d8:
    // 0x4936d8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x4936d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4936dc:
    // 0x4936dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4936dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4936e0:
    // 0x4936e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4936e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4936e4:
    // 0x4936e4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x4936e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4936e8:
    // 0x4936e8: 0xafa70164  sw          $a3, 0x164($sp)
    ctx->pc = 0x4936e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 7));
label_4936ec:
    // 0x4936ec: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x4936ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_4936f0:
    // 0x4936f0: 0x8fb001f8  lw          $s0, 0x1F8($sp)
    ctx->pc = 0x4936f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_4936f4:
    // 0x4936f4: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x4936f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
label_4936f8:
    // 0x4936f8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x4936f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4936fc:
    // 0x4936fc: 0x8e150010  lw          $s5, 0x10($s0)
    ctx->pc = 0x4936fcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_493700:
    // 0x493700: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x493700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_493704:
    // 0x493704: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x493704u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_493708:
    // 0x493708: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x493708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_49370c:
    // 0x49370c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x49370cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_493710:
    // 0x493710: 0x2a21026  xor         $v0, $s5, $v0
    ctx->pc = 0x493710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ GPR_U64(ctx, 2));
label_493714:
    // 0x493714: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x493714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_493718:
    // 0x493718: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x493718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_49371c:
    // 0x49371c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_493720:
    if (ctx->pc == 0x493720u) {
        ctx->pc = 0x493724u;
        goto label_493724;
    }
    ctx->pc = 0x49371Cu;
    {
        const bool branch_taken_0x49371c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49371c) {
            ctx->pc = 0x493798u;
            goto label_493798;
        }
    }
    ctx->pc = 0x493724u;
label_493724:
    // 0x493724: 0x26a20014  addiu       $v0, $s5, 0x14
    ctx->pc = 0x493724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
label_493728:
    // 0x493728: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x493728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_49372c:
    // 0x49372c: 0x0  nop
    ctx->pc = 0x49372cu;
    // NOP
label_493730:
    // 0x493730: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x493730u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_493734:
    // 0x493734: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x493734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_493738:
    // 0x493738: 0xc04af96  jal         func_12BE58
label_49373c:
    if (ctx->pc == 0x49373Cu) {
        ctx->pc = 0x49373Cu;
            // 0x49373c: 0x8fa50164  lw          $a1, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->pc = 0x493740u;
        goto label_493740;
    }
    ctx->pc = 0x493738u;
    SET_GPR_U32(ctx, 31, 0x493740u);
    ctx->pc = 0x49373Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493738u;
            // 0x49373c: 0x8fa50164  lw          $a1, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493740u; }
        if (ctx->pc != 0x493740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493740u; }
        if (ctx->pc != 0x493740u) { return; }
    }
    ctx->pc = 0x493740u;
label_493740:
    // 0x493740: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_493744:
    if (ctx->pc == 0x493744u) {
        ctx->pc = 0x493748u;
        goto label_493748;
    }
    ctx->pc = 0x493740u;
    {
        const bool branch_taken_0x493740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493740) {
            ctx->pc = 0x493760u;
            goto label_493760;
        }
    }
    ctx->pc = 0x493748u;
label_493748:
    // 0x493748: 0x15283c  dsll32      $a1, $s5, 0
    ctx->pc = 0x493748u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) << (32 + 0));
label_49374c:
    // 0x49374c: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x49374cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_493750:
    // 0x493750: 0xc125a18  jal         func_496860
label_493754:
    if (ctx->pc == 0x493754u) {
        ctx->pc = 0x493754u;
            // 0x493754: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->pc = 0x493758u;
        goto label_493758;
    }
    ctx->pc = 0x493750u;
    SET_GPR_U32(ctx, 31, 0x493758u);
    ctx->pc = 0x493754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493750u;
            // 0x493754: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496860u;
    if (runtime->hasFunction(0x496860u)) {
        auto targetFn = runtime->lookupFunction(0x496860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493758u; }
        if (ctx->pc != 0x493758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496860_0x496860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493758u; }
        if (ctx->pc != 0x493758u) { return; }
    }
    ctx->pc = 0x493758u;
label_493758:
    // 0x493758: 0x1000000f  b           . + 4 + (0xF << 2)
label_49375c:
    if (ctx->pc == 0x49375Cu) {
        ctx->pc = 0x493760u;
        goto label_493760;
    }
    ctx->pc = 0x493758u;
    {
        const bool branch_taken_0x493758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493758) {
            ctx->pc = 0x493798u;
            goto label_493798;
        }
    }
    ctx->pc = 0x493760u;
label_493760:
    // 0x493760: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x493760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_493764:
    // 0x493764: 0x15103c  dsll32      $v0, $s5, 0
    ctx->pc = 0x493764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 0));
label_493768:
    // 0x493768: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x493768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_49376c:
    // 0x49376c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x49376cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_493770:
    // 0x493770: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x493770u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_493774:
    // 0x493774: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x493774u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_493778:
    // 0x493778: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x493778u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_49377c:
    // 0x49377c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x49377cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_493780:
    // 0x493780: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x493780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_493784:
    // 0x493784: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x493784u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_493788:
    // 0x493788: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x493788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_49378c:
    // 0x49378c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_493790:
    if (ctx->pc == 0x493790u) {
        ctx->pc = 0x493794u;
        goto label_493794;
    }
    ctx->pc = 0x49378Cu;
    {
        const bool branch_taken_0x49378c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49378c) {
            ctx->pc = 0x493730u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_493730;
        }
    }
    ctx->pc = 0x493794u;
label_493794:
    // 0x493794: 0x0  nop
    ctx->pc = 0x493794u;
    // NOP
label_493798:
    // 0x493798: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x493798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_49379c:
    // 0x49379c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x49379cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4937a0:
    // 0x4937a0: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x4937a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_4937a4:
    // 0x4937a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4937a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4937a8:
    // 0x4937a8: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x4937a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_4937ac:
    // 0x4937ac: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x4937acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4937b0:
    // 0x4937b0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4937b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4937b4:
    // 0x4937b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4937b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4937b8:
    // 0x4937b8: 0xc125adc  jal         func_496B70
label_4937bc:
    if (ctx->pc == 0x4937BCu) {
        ctx->pc = 0x4937BCu;
            // 0x4937bc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4937C0u;
        goto label_4937c0;
    }
    ctx->pc = 0x4937B8u;
    SET_GPR_U32(ctx, 31, 0x4937C0u);
    ctx->pc = 0x4937BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4937B8u;
            // 0x4937bc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496B70u;
    if (runtime->hasFunction(0x496B70u)) {
        auto targetFn = runtime->lookupFunction(0x496B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4937C0u; }
        if (ctx->pc != 0x4937C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496B70_0x496b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4937C0u; }
        if (ctx->pc != 0x4937C0u) { return; }
    }
    ctx->pc = 0x4937C0u;
label_4937c0:
    // 0x4937c0: 0x10000017  b           . + 4 + (0x17 << 2)
label_4937c4:
    if (ctx->pc == 0x4937C4u) {
        ctx->pc = 0x4937C8u;
        goto label_4937c8;
    }
    ctx->pc = 0x4937C0u;
    {
        const bool branch_taken_0x4937c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4937c0) {
            ctx->pc = 0x493820u;
            goto label_493820;
        }
    }
    ctx->pc = 0x4937C8u;
label_4937c8:
    // 0x4937c8: 0xafb40130  sw          $s4, 0x130($sp)
    ctx->pc = 0x4937c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 20));
label_4937cc:
    // 0x4937cc: 0xafb70134  sw          $s7, 0x134($sp)
    ctx->pc = 0x4937ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 23));
label_4937d0:
    // 0x4937d0: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x4937d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4937d4:
    // 0x4937d4: 0xafa00138  sw          $zero, 0x138($sp)
    ctx->pc = 0x4937d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
label_4937d8:
    // 0x4937d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4937d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4937dc:
    // 0x4937dc: 0xafb1013c  sw          $s1, 0x13C($sp)
    ctx->pc = 0x4937dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 17));
label_4937e0:
    // 0x4937e0: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x4937e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4937e4:
    // 0x4937e4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x4937e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4937e8:
    // 0x4937e8: 0xafa30144  sw          $v1, 0x144($sp)
    ctx->pc = 0x4937e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 3));
label_4937ec:
    // 0x4937ec: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x4937ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_4937f0:
    // 0x4937f0: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x4937f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_4937f4:
    // 0x4937f4: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x4937f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
label_4937f8:
    // 0x4937f8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x4937f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4937fc:
    // 0x4937fc: 0x8c450074  lw          $a1, 0x74($v0)
    ctx->pc = 0x4937fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_493800:
    // 0x493800: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x493800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_493804:
    // 0x493804: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x493804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_493808:
    // 0x493808: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x493808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_49380c:
    // 0x49380c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x49380cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_493810:
    // 0x493810: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x493810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_493814:
    // 0x493814: 0xc125adc  jal         func_496B70
label_493818:
    if (ctx->pc == 0x493818u) {
        ctx->pc = 0x493818u;
            // 0x493818: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x49381Cu;
        goto label_49381c;
    }
    ctx->pc = 0x493814u;
    SET_GPR_U32(ctx, 31, 0x49381Cu);
    ctx->pc = 0x493818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493814u;
            // 0x493818: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496B70u;
    if (runtime->hasFunction(0x496B70u)) {
        auto targetFn = runtime->lookupFunction(0x496B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49381Cu; }
        if (ctx->pc != 0x49381Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496B70_0x496b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49381Cu; }
        if (ctx->pc != 0x49381Cu) { return; }
    }
    ctx->pc = 0x49381Cu;
label_49381c:
    // 0x49381c: 0x0  nop
    ctx->pc = 0x49381cu;
    // NOP
label_493820:
    // 0x493820: 0x9622001c  lhu         $v0, 0x1C($s1)
    ctx->pc = 0x493820u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
label_493824:
    // 0x493824: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x493824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_493828:
    // 0x493828: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x493828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_49382c:
    // 0x49382c: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x49382cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_493830:
    // 0x493830: 0x1000028f  b           . + 4 + (0x28F << 2)
label_493834:
    if (ctx->pc == 0x493834u) {
        ctx->pc = 0x493834u;
            // 0x493834: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->pc = 0x493838u;
        goto label_493838;
    }
    ctx->pc = 0x493830u;
    {
        const bool branch_taken_0x493830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x493834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x493830u;
            // 0x493834: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493830) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x493838u;
label_493838:
    // 0x493838: 0xc123fd0  jal         func_48FF40
label_49383c:
    if (ctx->pc == 0x49383Cu) {
        ctx->pc = 0x49383Cu;
            // 0x49383c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x493840u;
        goto label_493840;
    }
    ctx->pc = 0x493838u;
    SET_GPR_U32(ctx, 31, 0x493840u);
    ctx->pc = 0x49383Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493838u;
            // 0x49383c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48FF40u;
    if (runtime->hasFunction(0x48FF40u)) {
        auto targetFn = runtime->lookupFunction(0x48FF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493840u; }
        if (ctx->pc != 0x493840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048FF40_0x48ff40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493840u; }
        if (ctx->pc != 0x493840u) { return; }
    }
    ctx->pc = 0x493840u;
label_493840:
    // 0x493840: 0x1000028b  b           . + 4 + (0x28B << 2)
label_493844:
    if (ctx->pc == 0x493844u) {
        ctx->pc = 0x493848u;
        goto label_493848;
    }
    ctx->pc = 0x493840u;
    {
        const bool branch_taken_0x493840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493840) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x493848u;
label_493848:
    // 0x493848: 0x27a40264  addiu       $a0, $sp, 0x264
    ctx->pc = 0x493848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 612));
label_49384c:
    // 0x49384c: 0xc125124  jal         func_494490
label_493850:
    if (ctx->pc == 0x493850u) {
        ctx->pc = 0x493850u;
            // 0x493850: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->pc = 0x493854u;
        goto label_493854;
    }
    ctx->pc = 0x49384Cu;
    SET_GPR_U32(ctx, 31, 0x493854u);
    ctx->pc = 0x493850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49384Cu;
            // 0x493850: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493854u; }
        if (ctx->pc != 0x493854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493854u; }
        if (ctx->pc != 0x493854u) { return; }
    }
    ctx->pc = 0x493854u;
label_493854:
    // 0x493854: 0x8fa50264  lw          $a1, 0x264($sp)
    ctx->pc = 0x493854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_493858:
    // 0x493858: 0xc125120  jal         func_494480
label_49385c:
    if (ctx->pc == 0x49385Cu) {
        ctx->pc = 0x49385Cu;
            // 0x49385c: 0x27a403cc  addiu       $a0, $sp, 0x3CC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 972));
        ctx->pc = 0x493860u;
        goto label_493860;
    }
    ctx->pc = 0x493858u;
    SET_GPR_U32(ctx, 31, 0x493860u);
    ctx->pc = 0x49385Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493858u;
            // 0x49385c: 0x27a403cc  addiu       $a0, $sp, 0x3CC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 972));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493860u; }
        if (ctx->pc != 0x493860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493860u; }
        if (ctx->pc != 0x493860u) { return; }
    }
    ctx->pc = 0x493860u;
label_493860:
    // 0x493860: 0x8fa303cc  lw          $v1, 0x3CC($sp)
    ctx->pc = 0x493860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 972)));
label_493864:
    // 0x493864: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x493864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_493868:
    // 0x493868: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x493868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_49386c:
    // 0x49386c: 0x26850048  addiu       $a1, $s4, 0x48
    ctx->pc = 0x49386cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_493870:
    // 0x493870: 0x9070fff0  lbu         $s0, -0x10($v1)
    ctx->pc = 0x493870u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_493874:
    // 0x493874: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x493874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_493878:
    // 0x493878: 0xdc63fff8  ld          $v1, -0x8($v1)
    ctx->pc = 0x493878u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_49387c:
    // 0x49387c: 0xffa30208  sd          $v1, 0x208($sp)
    ctx->pc = 0x49387cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 3));
label_493880:
    // 0x493880: 0xc125124  jal         func_494490
label_493884:
    if (ctx->pc == 0x493884u) {
        ctx->pc = 0x493884u;
            // 0x493884: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x493888u;
        goto label_493888;
    }
    ctx->pc = 0x493880u;
    SET_GPR_U32(ctx, 31, 0x493888u);
    ctx->pc = 0x493884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493880u;
            // 0x493884: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493888u; }
        if (ctx->pc != 0x493888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493888u; }
        if (ctx->pc != 0x493888u) { return; }
    }
    ctx->pc = 0x493888u;
label_493888:
    // 0x493888: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x493888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_49388c:
    // 0x49388c: 0xc125120  jal         func_494480
label_493890:
    if (ctx->pc == 0x493890u) {
        ctx->pc = 0x493890u;
            // 0x493890: 0x27a403c8  addiu       $a0, $sp, 0x3C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 968));
        ctx->pc = 0x493894u;
        goto label_493894;
    }
    ctx->pc = 0x49388Cu;
    SET_GPR_U32(ctx, 31, 0x493894u);
    ctx->pc = 0x493890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49388Cu;
            // 0x493890: 0x27a403c8  addiu       $a0, $sp, 0x3C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493894u; }
        if (ctx->pc != 0x493894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493894u; }
        if (ctx->pc != 0x493894u) { return; }
    }
    ctx->pc = 0x493894u;
label_493894:
    // 0x493894: 0x8fa303c8  lw          $v1, 0x3C8($sp)
    ctx->pc = 0x493894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 968)));
label_493898:
    // 0x493898: 0x27a4025c  addiu       $a0, $sp, 0x25C
    ctx->pc = 0x493898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
label_49389c:
    // 0x49389c: 0x26850048  addiu       $a1, $s4, 0x48
    ctx->pc = 0x49389cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_4938a0:
    // 0x4938a0: 0x9062fff0  lbu         $v0, -0x10($v1)
    ctx->pc = 0x4938a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_4938a4:
    // 0x4938a4: 0xa3a201f0  sb          $v0, 0x1F0($sp)
    ctx->pc = 0x4938a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 496), (uint8_t)GPR_U32(ctx, 2));
label_4938a8:
    // 0x4938a8: 0xdc62fff8  ld          $v0, -0x8($v1)
    ctx->pc = 0x4938a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_4938ac:
    // 0x4938ac: 0xffa201f8  sd          $v0, 0x1F8($sp)
    ctx->pc = 0x4938acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 2));
label_4938b0:
    // 0x4938b0: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x4938b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_4938b4:
    // 0x4938b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4938b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4938b8:
    // 0x4938b8: 0xc125124  jal         func_494490
label_4938bc:
    if (ctx->pc == 0x4938BCu) {
        ctx->pc = 0x4938BCu;
            // 0x4938bc: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x4938C0u;
        goto label_4938c0;
    }
    ctx->pc = 0x4938B8u;
    SET_GPR_U32(ctx, 31, 0x4938C0u);
    ctx->pc = 0x4938BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4938B8u;
            // 0x4938bc: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4938C0u; }
        if (ctx->pc != 0x4938C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4938C0u; }
        if (ctx->pc != 0x4938C0u) { return; }
    }
    ctx->pc = 0x4938C0u;
label_4938c0:
    // 0x4938c0: 0x8fa5025c  lw          $a1, 0x25C($sp)
    ctx->pc = 0x4938c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_4938c4:
    // 0x4938c4: 0xc125120  jal         func_494480
label_4938c8:
    if (ctx->pc == 0x4938C8u) {
        ctx->pc = 0x4938C8u;
            // 0x4938c8: 0x27a403c4  addiu       $a0, $sp, 0x3C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 964));
        ctx->pc = 0x4938CCu;
        goto label_4938cc;
    }
    ctx->pc = 0x4938C4u;
    SET_GPR_U32(ctx, 31, 0x4938CCu);
    ctx->pc = 0x4938C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4938C4u;
            // 0x4938c8: 0x27a403c4  addiu       $a0, $sp, 0x3C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 964));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4938CCu; }
        if (ctx->pc != 0x4938CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4938CCu; }
        if (ctx->pc != 0x4938CCu) { return; }
    }
    ctx->pc = 0x4938CCu;
label_4938cc:
    // 0x4938cc: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x4938ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_4938d0:
    // 0x4938d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4938d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4938d4:
    // 0x4938d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4938d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4938d8:
    // 0x4938d8: 0xae83004c  sw          $v1, 0x4C($s4)
    ctx->pc = 0x4938d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 3));
label_4938dc:
    // 0x4938dc: 0x8fa301f8  lw          $v1, 0x1F8($sp)
    ctx->pc = 0x4938dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_4938e0:
    // 0x4938e0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x4938e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4938e4:
    // 0x4938e4: 0x10620262  beq         $v1, $v0, . + 4 + (0x262 << 2)
label_4938e8:
    if (ctx->pc == 0x4938E8u) {
        ctx->pc = 0x4938ECu;
        goto label_4938ec;
    }
    ctx->pc = 0x4938E4u;
    {
        const bool branch_taken_0x4938e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4938e4) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x4938ECu;
label_4938ec:
    // 0x4938ec: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4938ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4938f0:
    // 0x4938f0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_4938f4:
    if (ctx->pc == 0x4938F4u) {
        ctx->pc = 0x4938F8u;
        goto label_4938f8;
    }
    ctx->pc = 0x4938F0u;
    {
        const bool branch_taken_0x4938f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4938f0) {
            ctx->pc = 0x493900u;
            goto label_493900;
        }
    }
    ctx->pc = 0x4938F8u;
label_4938f8:
    // 0x4938f8: 0x1000025d  b           . + 4 + (0x25D << 2)
label_4938fc:
    if (ctx->pc == 0x4938FCu) {
        ctx->pc = 0x493900u;
        goto label_493900;
    }
    ctx->pc = 0x4938F8u;
    {
        const bool branch_taken_0x4938f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4938f8) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x493900u;
label_493900:
    // 0x493900: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x493900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_493904:
    // 0x493904: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x493904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_493908:
    // 0x493908: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_49390c:
    if (ctx->pc == 0x49390Cu) {
        ctx->pc = 0x49390Cu;
            // 0x49390c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x493910u;
        goto label_493910;
    }
    ctx->pc = 0x493908u;
    {
        const bool branch_taken_0x493908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49390Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x493908u;
            // 0x49390c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493908) {
            ctx->pc = 0x493928u;
            goto label_493928;
        }
    }
    ctx->pc = 0x493910u;
label_493910:
    // 0x493910: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_493914:
    if (ctx->pc == 0x493914u) {
        ctx->pc = 0x493918u;
        goto label_493918;
    }
    ctx->pc = 0x493910u;
    {
        const bool branch_taken_0x493910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x493910) {
            ctx->pc = 0x493920u;
            goto label_493920;
        }
    }
    ctx->pc = 0x493918u;
label_493918:
    // 0x493918: 0x10000009  b           . + 4 + (0x9 << 2)
label_49391c:
    if (ctx->pc == 0x49391Cu) {
        ctx->pc = 0x493920u;
        goto label_493920;
    }
    ctx->pc = 0x493918u;
    {
        const bool branch_taken_0x493918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493918) {
            ctx->pc = 0x493940u;
            goto label_493940;
        }
    }
    ctx->pc = 0x493920u;
label_493920:
    // 0x493920: 0x10000007  b           . + 4 + (0x7 << 2)
label_493924:
    if (ctx->pc == 0x493924u) {
        ctx->pc = 0x493924u;
            // 0x493924: 0x8fb00208  lw          $s0, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->pc = 0x493928u;
        goto label_493928;
    }
    ctx->pc = 0x493920u;
    {
        const bool branch_taken_0x493920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x493924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x493920u;
            // 0x493924: 0x8fb00208  lw          $s0, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493920) {
            ctx->pc = 0x493940u;
            goto label_493940;
        }
    }
    ctx->pc = 0x493928u;
label_493928:
    // 0x493928: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x493928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_49392c:
    // 0x49392c: 0x93a30208  lbu         $v1, 0x208($sp)
    ctx->pc = 0x49392cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 520)));
label_493930:
    // 0x493930: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x493930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_493934:
    // 0x493934: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x493934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_493938:
    // 0x493938: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x493938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_49393c:
    // 0x49393c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x49393cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_493940:
    // 0x493940: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x493940u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_493944:
    // 0x493944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x493944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_493948:
    // 0x493948: 0xc04af96  jal         func_12BE58
label_49394c:
    if (ctx->pc == 0x49394Cu) {
        ctx->pc = 0x49394Cu;
            // 0x49394c: 0x24a50898  addiu       $a1, $a1, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2200));
        ctx->pc = 0x493950u;
        goto label_493950;
    }
    ctx->pc = 0x493948u;
    SET_GPR_U32(ctx, 31, 0x493950u);
    ctx->pc = 0x49394Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493948u;
            // 0x49394c: 0x24a50898  addiu       $a1, $a1, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493950u; }
        if (ctx->pc != 0x493950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493950u; }
        if (ctx->pc != 0x493950u) { return; }
    }
    ctx->pc = 0x493950u;
label_493950:
    // 0x493950: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_493954:
    if (ctx->pc == 0x493954u) {
        ctx->pc = 0x493958u;
        goto label_493958;
    }
    ctx->pc = 0x493950u;
    {
        const bool branch_taken_0x493950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493950) {
            ctx->pc = 0x4939D0u;
            goto label_4939d0;
        }
    }
    ctx->pc = 0x493958u;
label_493958:
    // 0x493958: 0x27a40258  addiu       $a0, $sp, 0x258
    ctx->pc = 0x493958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 600));
label_49395c:
    // 0x49395c: 0xc125124  jal         func_494490
label_493960:
    if (ctx->pc == 0x493960u) {
        ctx->pc = 0x493960u;
            // 0x493960: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->pc = 0x493964u;
        goto label_493964;
    }
    ctx->pc = 0x49395Cu;
    SET_GPR_U32(ctx, 31, 0x493964u);
    ctx->pc = 0x493960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49395Cu;
            // 0x493960: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493964u; }
        if (ctx->pc != 0x493964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493964u; }
        if (ctx->pc != 0x493964u) { return; }
    }
    ctx->pc = 0x493964u;
label_493964:
    // 0x493964: 0x8fa50258  lw          $a1, 0x258($sp)
    ctx->pc = 0x493964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_493968:
    // 0x493968: 0xc125120  jal         func_494480
label_49396c:
    if (ctx->pc == 0x49396Cu) {
        ctx->pc = 0x49396Cu;
            // 0x49396c: 0x27a403c0  addiu       $a0, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->pc = 0x493970u;
        goto label_493970;
    }
    ctx->pc = 0x493968u;
    SET_GPR_U32(ctx, 31, 0x493970u);
    ctx->pc = 0x49396Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493968u;
            // 0x49396c: 0x27a403c0  addiu       $a0, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493970u; }
        if (ctx->pc != 0x493970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493970u; }
        if (ctx->pc != 0x493970u) { return; }
    }
    ctx->pc = 0x493970u;
label_493970:
    // 0x493970: 0x8fa303c0  lw          $v1, 0x3C0($sp)
    ctx->pc = 0x493970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_493974:
    // 0x493974: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x493974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_493978:
    // 0x493978: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x493978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_49397c:
    // 0x49397c: 0x27a70210  addiu       $a3, $sp, 0x210
    ctx->pc = 0x49397cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_493980:
    // 0x493980: 0xdc63fff8  ld          $v1, -0x8($v1)
    ctx->pc = 0x493980u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_493984:
    // 0x493984: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x493984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_493988:
    // 0x493988: 0xffa301b8  sd          $v1, 0x1B8($sp)
    ctx->pc = 0x493988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 3));
label_49398c:
    // 0x49398c: 0xae82004c  sw          $v0, 0x4C($s4)
    ctx->pc = 0x49398cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
label_493990:
    // 0x493990: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x493990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_493994:
    // 0x493994: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x493994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
label_493998:
    // 0x493998: 0xafb40210  sw          $s4, 0x210($sp)
    ctx->pc = 0x493998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 20));
label_49399c:
    // 0x49399c: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x49399cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_4939a0:
    // 0x4939a0: 0xafa30218  sw          $v1, 0x218($sp)
    ctx->pc = 0x4939a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 3));
label_4939a4:
    // 0x4939a4: 0xafb70214  sw          $s7, 0x214($sp)
    ctx->pc = 0x4939a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 23));
label_4939a8:
    // 0x4939a8: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x4939a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_4939ac:
    // 0x4939ac: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x4939acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_4939b0:
    // 0x4939b0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x4939b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_4939b4:
    // 0x4939b4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4939b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4939b8:
    // 0x4939b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4939b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4939bc:
    // 0x4939bc: 0xc125de8  jal         func_4977A0
label_4939c0:
    if (ctx->pc == 0x4939C0u) {
        ctx->pc = 0x4939C0u;
            // 0x4939c0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4939C4u;
        goto label_4939c4;
    }
    ctx->pc = 0x4939BCu;
    SET_GPR_U32(ctx, 31, 0x4939C4u);
    ctx->pc = 0x4939C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4939BCu;
            // 0x4939c0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4977A0u;
    if (runtime->hasFunction(0x4977A0u)) {
        auto targetFn = runtime->lookupFunction(0x4977A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4939C4u; }
        if (ctx->pc != 0x4939C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004977A0_0x4977a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4939C4u; }
        if (ctx->pc != 0x4939C4u) { return; }
    }
    ctx->pc = 0x4939C4u;
label_4939c4:
    // 0x4939c4: 0x1000022a  b           . + 4 + (0x22A << 2)
label_4939c8:
    if (ctx->pc == 0x4939C8u) {
        ctx->pc = 0x4939CCu;
        goto label_4939cc;
    }
    ctx->pc = 0x4939C4u;
    {
        const bool branch_taken_0x4939c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4939c4) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x4939CCu;
label_4939cc:
    // 0x4939cc: 0x0  nop
    ctx->pc = 0x4939ccu;
    // NOP
label_4939d0:
    // 0x4939d0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4939d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4939d4:
    // 0x4939d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4939d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4939d8:
    // 0x4939d8: 0xc04af96  jal         func_12BE58
label_4939dc:
    if (ctx->pc == 0x4939DCu) {
        ctx->pc = 0x4939DCu;
            // 0x4939dc: 0x24a508a8  addiu       $a1, $a1, 0x8A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2216));
        ctx->pc = 0x4939E0u;
        goto label_4939e0;
    }
    ctx->pc = 0x4939D8u;
    SET_GPR_U32(ctx, 31, 0x4939E0u);
    ctx->pc = 0x4939DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4939D8u;
            // 0x4939dc: 0x24a508a8  addiu       $a1, $a1, 0x8A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4939E0u; }
        if (ctx->pc != 0x4939E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4939E0u; }
        if (ctx->pc != 0x4939E0u) { return; }
    }
    ctx->pc = 0x4939E0u;
label_4939e0:
    // 0x4939e0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_4939e4:
    if (ctx->pc == 0x4939E4u) {
        ctx->pc = 0x4939E8u;
        goto label_4939e8;
    }
    ctx->pc = 0x4939E0u;
    {
        const bool branch_taken_0x4939e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4939e0) {
            ctx->pc = 0x493A28u;
            goto label_493a28;
        }
    }
    ctx->pc = 0x4939E8u;
label_4939e8:
    // 0x4939e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4939e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4939ec:
    // 0x4939ec: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x4939ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4939f0:
    // 0x4939f0: 0x8c42a140  lw          $v0, -0x5EC0($v0)
    ctx->pc = 0x4939f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943040)));
label_4939f4:
    // 0x4939f4: 0x26840048  addiu       $a0, $s4, 0x48
    ctx->pc = 0x4939f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_4939f8:
    // 0x4939f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4939f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4939fc:
    // 0x4939fc: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x4939fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_493a00:
    // 0x493a00: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x493a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_493a04:
    // 0x493a04: 0xa3a30120  sb          $v1, 0x120($sp)
    ctx->pc = 0x493a04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 288), (uint8_t)GPR_U32(ctx, 3));
label_493a08:
    // 0x493a08: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x493a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
label_493a0c:
    // 0x493a0c: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x493a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_493a10:
    // 0x493a10: 0x8e820050  lw          $v0, 0x50($s4)
    ctx->pc = 0x493a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_493a14:
    // 0x493a14: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x493a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_493a18:
    // 0x493a18: 0xc125914  jal         func_496450
label_493a1c:
    if (ctx->pc == 0x493A1Cu) {
        ctx->pc = 0x493A1Cu;
            // 0x493a1c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x493A20u;
        goto label_493a20;
    }
    ctx->pc = 0x493A18u;
    SET_GPR_U32(ctx, 31, 0x493A20u);
    ctx->pc = 0x493A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493A18u;
            // 0x493a1c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496450u;
    if (runtime->hasFunction(0x496450u)) {
        auto targetFn = runtime->lookupFunction(0x496450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493A20u; }
        if (ctx->pc != 0x493A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496450_0x496450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493A20u; }
        if (ctx->pc != 0x493A20u) { return; }
    }
    ctx->pc = 0x493A20u;
label_493a20:
    // 0x493a20: 0x10000213  b           . + 4 + (0x213 << 2)
label_493a24:
    if (ctx->pc == 0x493A24u) {
        ctx->pc = 0x493A28u;
        goto label_493a28;
    }
    ctx->pc = 0x493A20u;
    {
        const bool branch_taken_0x493a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493a20) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x493A28u;
label_493a28:
    // 0x493a28: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x493a28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_493a2c:
    // 0x493a2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x493a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_493a30:
    // 0x493a30: 0xc04af96  jal         func_12BE58
label_493a34:
    if (ctx->pc == 0x493A34u) {
        ctx->pc = 0x493A34u;
            // 0x493a34: 0x24a508b0  addiu       $a1, $a1, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2224));
        ctx->pc = 0x493A38u;
        goto label_493a38;
    }
    ctx->pc = 0x493A30u;
    SET_GPR_U32(ctx, 31, 0x493A38u);
    ctx->pc = 0x493A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493A30u;
            // 0x493a34: 0x24a508b0  addiu       $a1, $a1, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493A38u; }
        if (ctx->pc != 0x493A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493A38u; }
        if (ctx->pc != 0x493A38u) { return; }
    }
    ctx->pc = 0x493A38u;
label_493a38:
    // 0x493a38: 0x1440020d  bnez        $v0, . + 4 + (0x20D << 2)
label_493a3c:
    if (ctx->pc == 0x493A3Cu) {
        ctx->pc = 0x493A40u;
        goto label_493a40;
    }
    ctx->pc = 0x493A38u;
    {
        const bool branch_taken_0x493a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493a38) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x493A40u;
label_493a40:
    // 0x493a40: 0x27a40254  addiu       $a0, $sp, 0x254
    ctx->pc = 0x493a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 596));
label_493a44:
    // 0x493a44: 0xc125124  jal         func_494490
label_493a48:
    if (ctx->pc == 0x493A48u) {
        ctx->pc = 0x493A48u;
            // 0x493a48: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->pc = 0x493A4Cu;
        goto label_493a4c;
    }
    ctx->pc = 0x493A44u;
    SET_GPR_U32(ctx, 31, 0x493A4Cu);
    ctx->pc = 0x493A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493A44u;
            // 0x493a48: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493A4Cu; }
        if (ctx->pc != 0x493A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493A4Cu; }
        if (ctx->pc != 0x493A4Cu) { return; }
    }
    ctx->pc = 0x493A4Cu;
label_493a4c:
    // 0x493a4c: 0x8fa50254  lw          $a1, 0x254($sp)
    ctx->pc = 0x493a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_493a50:
    // 0x493a50: 0xc125120  jal         func_494480
label_493a54:
    if (ctx->pc == 0x493A54u) {
        ctx->pc = 0x493A54u;
            // 0x493a54: 0x27a403bc  addiu       $a0, $sp, 0x3BC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 956));
        ctx->pc = 0x493A58u;
        goto label_493a58;
    }
    ctx->pc = 0x493A50u;
    SET_GPR_U32(ctx, 31, 0x493A58u);
    ctx->pc = 0x493A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493A50u;
            // 0x493a54: 0x27a403bc  addiu       $a0, $sp, 0x3BC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 956));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493A58u; }
        if (ctx->pc != 0x493A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493A58u; }
        if (ctx->pc != 0x493A58u) { return; }
    }
    ctx->pc = 0x493A58u;
label_493a58:
    // 0x493a58: 0x8fa303bc  lw          $v1, 0x3BC($sp)
    ctx->pc = 0x493a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 956)));
label_493a5c:
    // 0x493a5c: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x493a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_493a60:
    // 0x493a60: 0xdc63fff8  ld          $v1, -0x8($v1)
    ctx->pc = 0x493a60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_493a64:
    // 0x493a64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x493a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_493a68:
    // 0x493a68: 0xffa301b8  sd          $v1, 0x1B8($sp)
    ctx->pc = 0x493a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 3));
label_493a6c:
    // 0x493a6c: 0xae82004c  sw          $v0, 0x4C($s4)
    ctx->pc = 0x493a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
label_493a70:
    // 0x493a70: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x493a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_493a74:
    // 0x493a74: 0xc1239e4  jal         func_48E790
label_493a78:
    if (ctx->pc == 0x493A78u) {
        ctx->pc = 0x493A78u;
            // 0x493a78: 0x8fa501b8  lw          $a1, 0x1B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
        ctx->pc = 0x493A7Cu;
        goto label_493a7c;
    }
    ctx->pc = 0x493A74u;
    SET_GPR_U32(ctx, 31, 0x493A7Cu);
    ctx->pc = 0x493A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493A74u;
            // 0x493a78: 0x8fa501b8  lw          $a1, 0x1B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E790u;
    if (runtime->hasFunction(0x48E790u)) {
        auto targetFn = runtime->lookupFunction(0x48E790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493A7Cu; }
        if (ctx->pc != 0x493A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E790_0x48e790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493A7Cu; }
        if (ctx->pc != 0x493A7Cu) { return; }
    }
    ctx->pc = 0x493A7Cu;
label_493a7c:
    // 0x493a7c: 0x100001fc  b           . + 4 + (0x1FC << 2)
label_493a80:
    if (ctx->pc == 0x493A80u) {
        ctx->pc = 0x493A84u;
        goto label_493a84;
    }
    ctx->pc = 0x493A7Cu;
    {
        const bool branch_taken_0x493a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493a7c) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x493A84u;
label_493a84:
    // 0x493a84: 0x0  nop
    ctx->pc = 0x493a84u;
    // NOP
label_493a88:
    // 0x493a88: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x493a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_493a8c:
    // 0x493a8c: 0x104001f8  beqz        $v0, . + 4 + (0x1F8 << 2)
label_493a90:
    if (ctx->pc == 0x493A90u) {
        ctx->pc = 0x493A94u;
        goto label_493a94;
    }
    ctx->pc = 0x493A8Cu;
    {
        const bool branch_taken_0x493a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x493a8c) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x493A94u;
label_493a94:
    // 0x493a94: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x493a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_493a98:
    // 0x493a98: 0xc125124  jal         func_494490
label_493a9c:
    if (ctx->pc == 0x493A9Cu) {
        ctx->pc = 0x493A9Cu;
            // 0x493a9c: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->pc = 0x493AA0u;
        goto label_493aa0;
    }
    ctx->pc = 0x493A98u;
    SET_GPR_U32(ctx, 31, 0x493AA0u);
    ctx->pc = 0x493A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493A98u;
            // 0x493a9c: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493AA0u; }
        if (ctx->pc != 0x493AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493AA0u; }
        if (ctx->pc != 0x493AA0u) { return; }
    }
    ctx->pc = 0x493AA0u;
label_493aa0:
    // 0x493aa0: 0x8fa50250  lw          $a1, 0x250($sp)
    ctx->pc = 0x493aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_493aa4:
    // 0x493aa4: 0xc125120  jal         func_494480
label_493aa8:
    if (ctx->pc == 0x493AA8u) {
        ctx->pc = 0x493AA8u;
            // 0x493aa8: 0x27a403b8  addiu       $a0, $sp, 0x3B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 952));
        ctx->pc = 0x493AACu;
        goto label_493aac;
    }
    ctx->pc = 0x493AA4u;
    SET_GPR_U32(ctx, 31, 0x493AACu);
    ctx->pc = 0x493AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493AA4u;
            // 0x493aa8: 0x27a403b8  addiu       $a0, $sp, 0x3B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493AACu; }
        if (ctx->pc != 0x493AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493AACu; }
        if (ctx->pc != 0x493AACu) { return; }
    }
    ctx->pc = 0x493AACu;
label_493aac:
    // 0x493aac: 0x8fa303b8  lw          $v1, 0x3B8($sp)
    ctx->pc = 0x493aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 952)));
label_493ab0:
    // 0x493ab0: 0x9062fff0  lbu         $v0, -0x10($v1)
    ctx->pc = 0x493ab0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_493ab4:
    // 0x493ab4: 0xa3a201f0  sb          $v0, 0x1F0($sp)
    ctx->pc = 0x493ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 496), (uint8_t)GPR_U32(ctx, 2));
label_493ab8:
    // 0x493ab8: 0xdc62fff8  ld          $v0, -0x8($v1)
    ctx->pc = 0x493ab8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_493abc:
    // 0x493abc: 0xffa201f8  sd          $v0, 0x1F8($sp)
    ctx->pc = 0x493abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 2));
label_493ac0:
    // 0x493ac0: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x493ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_493ac4:
    // 0x493ac4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x493ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_493ac8:
    // 0x493ac8: 0x100001e9  b           . + 4 + (0x1E9 << 2)
label_493acc:
    if (ctx->pc == 0x493ACCu) {
        ctx->pc = 0x493ACCu;
            // 0x493acc: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x493AD0u;
        goto label_493ad0;
    }
    ctx->pc = 0x493AC8u;
    {
        const bool branch_taken_0x493ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x493ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x493AC8u;
            // 0x493acc: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493ac8) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x493AD0u;
label_493ad0:
    // 0x493ad0: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x493ad0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_493ad4:
    // 0x493ad4: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x493ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_493ad8:
    // 0x493ad8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x493ad8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_493adc:
    // 0x493adc: 0x320f809  jalr        $t9
label_493ae0:
    if (ctx->pc == 0x493AE0u) {
        ctx->pc = 0x493AE0u;
            // 0x493ae0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x493AE4u;
        goto label_493ae4;
    }
    ctx->pc = 0x493ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x493AE4u);
        ctx->pc = 0x493AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x493ADCu;
            // 0x493ae0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x493AE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x493AE4u; }
            if (ctx->pc != 0x493AE4u) { return; }
        }
        }
    }
    ctx->pc = 0x493AE4u;
label_493ae4:
    // 0x493ae4: 0x100001e2  b           . + 4 + (0x1E2 << 2)
label_493ae8:
    if (ctx->pc == 0x493AE8u) {
        ctx->pc = 0x493AECu;
        goto label_493aec;
    }
    ctx->pc = 0x493AE4u;
    {
        const bool branch_taken_0x493ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493ae4) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x493AECu;
label_493aec:
    // 0x493aec: 0x0  nop
    ctx->pc = 0x493aecu;
    // NOP
label_493af0:
    // 0x493af0: 0x27a4024c  addiu       $a0, $sp, 0x24C
    ctx->pc = 0x493af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 588));
label_493af4:
    // 0x493af4: 0xc125124  jal         func_494490
label_493af8:
    if (ctx->pc == 0x493AF8u) {
        ctx->pc = 0x493AF8u;
            // 0x493af8: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->pc = 0x493AFCu;
        goto label_493afc;
    }
    ctx->pc = 0x493AF4u;
    SET_GPR_U32(ctx, 31, 0x493AFCu);
    ctx->pc = 0x493AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493AF4u;
            // 0x493af8: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493AFCu; }
        if (ctx->pc != 0x493AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493AFCu; }
        if (ctx->pc != 0x493AFCu) { return; }
    }
    ctx->pc = 0x493AFCu;
label_493afc:
    // 0x493afc: 0x8fa5024c  lw          $a1, 0x24C($sp)
    ctx->pc = 0x493afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
label_493b00:
    // 0x493b00: 0xc125120  jal         func_494480
label_493b04:
    if (ctx->pc == 0x493B04u) {
        ctx->pc = 0x493B04u;
            // 0x493b04: 0x27a403b4  addiu       $a0, $sp, 0x3B4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 948));
        ctx->pc = 0x493B08u;
        goto label_493b08;
    }
    ctx->pc = 0x493B00u;
    SET_GPR_U32(ctx, 31, 0x493B08u);
    ctx->pc = 0x493B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493B00u;
            // 0x493b04: 0x27a403b4  addiu       $a0, $sp, 0x3B4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 948));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493B08u; }
        if (ctx->pc != 0x493B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493B08u; }
        if (ctx->pc != 0x493B08u) { return; }
    }
    ctx->pc = 0x493B08u;
label_493b08:
    // 0x493b08: 0x8fa403b4  lw          $a0, 0x3B4($sp)
    ctx->pc = 0x493b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 948)));
label_493b0c:
    // 0x493b0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x493b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_493b10:
    // 0x493b10: 0x9083fff0  lbu         $v1, -0x10($a0)
    ctx->pc = 0x493b10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967280)));
label_493b14:
    // 0x493b14: 0xa3a301f0  sb          $v1, 0x1F0($sp)
    ctx->pc = 0x493b14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 496), (uint8_t)GPR_U32(ctx, 3));
label_493b18:
    // 0x493b18: 0xdc83fff8  ld          $v1, -0x8($a0)
    ctx->pc = 0x493b18u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_493b1c:
    // 0x493b1c: 0xffa301f8  sd          $v1, 0x1F8($sp)
    ctx->pc = 0x493b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 3));
label_493b20:
    // 0x493b20: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x493b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_493b24:
    // 0x493b24: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x493b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_493b28:
    // 0x493b28: 0xae83004c  sw          $v1, 0x4C($s4)
    ctx->pc = 0x493b28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 3));
label_493b2c:
    // 0x493b2c: 0x93a301f0  lbu         $v1, 0x1F0($sp)
    ctx->pc = 0x493b2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 496)));
label_493b30:
    // 0x493b30: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
label_493b34:
    if (ctx->pc == 0x493B34u) {
        ctx->pc = 0x493B38u;
        goto label_493b38;
    }
    ctx->pc = 0x493B30u;
    {
        const bool branch_taken_0x493b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x493b30) {
            ctx->pc = 0x493BD8u;
            goto label_493bd8;
        }
    }
    ctx->pc = 0x493B38u;
label_493b38:
    // 0x493b38: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x493b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_493b3c:
    // 0x493b3c: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
label_493b40:
    if (ctx->pc == 0x493B40u) {
        ctx->pc = 0x493B44u;
        goto label_493b44;
    }
    ctx->pc = 0x493B3Cu;
    {
        const bool branch_taken_0x493b3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x493b3c) {
            ctx->pc = 0x493BC8u;
            goto label_493bc8;
        }
    }
    ctx->pc = 0x493B44u;
label_493b44:
    // 0x493b44: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x493b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_493b48:
    // 0x493b48: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_493b4c:
    if (ctx->pc == 0x493B4Cu) {
        ctx->pc = 0x493B50u;
        goto label_493b50;
    }
    ctx->pc = 0x493B48u;
    {
        const bool branch_taken_0x493b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x493b48) {
            ctx->pc = 0x493BC0u;
            goto label_493bc0;
        }
    }
    ctx->pc = 0x493B50u;
label_493b50:
    // 0x493b50: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x493b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_493b54:
    // 0x493b54: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_493b58:
    if (ctx->pc == 0x493B58u) {
        ctx->pc = 0x493B5Cu;
        goto label_493b5c;
    }
    ctx->pc = 0x493B54u;
    {
        const bool branch_taken_0x493b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x493b54) {
            ctx->pc = 0x493B70u;
            goto label_493b70;
        }
    }
    ctx->pc = 0x493B5Cu;
label_493b5c:
    // 0x493b5c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_493b60:
    if (ctx->pc == 0x493B60u) {
        ctx->pc = 0x493B64u;
        goto label_493b64;
    }
    ctx->pc = 0x493B5Cu;
    {
        const bool branch_taken_0x493b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x493b5c) {
            ctx->pc = 0x493B70u;
            goto label_493b70;
        }
    }
    ctx->pc = 0x493B64u;
label_493b64:
    // 0x493b64: 0x1000002c  b           . + 4 + (0x2C << 2)
label_493b68:
    if (ctx->pc == 0x493B68u) {
        ctx->pc = 0x493B6Cu;
        goto label_493b6c;
    }
    ctx->pc = 0x493B64u;
    {
        const bool branch_taken_0x493b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493b64) {
            ctx->pc = 0x493C18u;
            goto label_493c18;
        }
    }
    ctx->pc = 0x493B6Cu;
label_493b6c:
    // 0x493b6c: 0x0  nop
    ctx->pc = 0x493b6cu;
    // NOP
label_493b70:
    // 0x493b70: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x493b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_493b74:
    // 0x493b74: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_493b78:
    if (ctx->pc == 0x493B78u) {
        ctx->pc = 0x493B78u;
            // 0x493b78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x493B7Cu;
        goto label_493b7c;
    }
    ctx->pc = 0x493B74u;
    {
        const bool branch_taken_0x493b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x493B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x493B74u;
            // 0x493b78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493b74) {
            ctx->pc = 0x493B98u;
            goto label_493b98;
        }
    }
    ctx->pc = 0x493B7Cu;
label_493b7c:
    // 0x493b7c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_493b80:
    if (ctx->pc == 0x493B80u) {
        ctx->pc = 0x493B84u;
        goto label_493b84;
    }
    ctx->pc = 0x493B7Cu;
    {
        const bool branch_taken_0x493b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x493b7c) {
            ctx->pc = 0x493B90u;
            goto label_493b90;
        }
    }
    ctx->pc = 0x493B84u;
label_493b84:
    // 0x493b84: 0x1000000a  b           . + 4 + (0xA << 2)
label_493b88:
    if (ctx->pc == 0x493B88u) {
        ctx->pc = 0x493B8Cu;
        goto label_493b8c;
    }
    ctx->pc = 0x493B84u;
    {
        const bool branch_taken_0x493b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493b84) {
            ctx->pc = 0x493BB0u;
            goto label_493bb0;
        }
    }
    ctx->pc = 0x493B8Cu;
label_493b8c:
    // 0x493b8c: 0x0  nop
    ctx->pc = 0x493b8cu;
    // NOP
label_493b90:
    // 0x493b90: 0x10000007  b           . + 4 + (0x7 << 2)
label_493b94:
    if (ctx->pc == 0x493B94u) {
        ctx->pc = 0x493B94u;
            // 0x493b94: 0x8fa501f8  lw          $a1, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->pc = 0x493B98u;
        goto label_493b98;
    }
    ctx->pc = 0x493B90u;
    {
        const bool branch_taken_0x493b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x493B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x493B90u;
            // 0x493b94: 0x8fa501f8  lw          $a1, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493b90) {
            ctx->pc = 0x493BB0u;
            goto label_493bb0;
        }
    }
    ctx->pc = 0x493B98u;
label_493b98:
    // 0x493b98: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x493b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_493b9c:
    // 0x493b9c: 0x93a301f8  lbu         $v1, 0x1F8($sp)
    ctx->pc = 0x493b9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 504)));
label_493ba0:
    // 0x493ba0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x493ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_493ba4:
    // 0x493ba4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x493ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_493ba8:
    // 0x493ba8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x493ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_493bac:
    // 0x493bac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x493bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_493bb0:
    // 0x493bb0: 0xc12512c  jal         func_4944B0
label_493bb4:
    if (ctx->pc == 0x493BB4u) {
        ctx->pc = 0x493BB4u;
            // 0x493bb4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x493BB8u;
        goto label_493bb8;
    }
    ctx->pc = 0x493BB0u;
    SET_GPR_U32(ctx, 31, 0x493BB8u);
    ctx->pc = 0x493BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493BB0u;
            // 0x493bb4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4944B0u;
    if (runtime->hasFunction(0x4944B0u)) {
        auto targetFn = runtime->lookupFunction(0x4944B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493BB8u; }
        if (ctx->pc != 0x493BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004944B0_0x4944b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493BB8u; }
        if (ctx->pc != 0x493BB8u) { return; }
    }
    ctx->pc = 0x493BB8u;
label_493bb8:
    // 0x493bb8: 0x10000017  b           . + 4 + (0x17 << 2)
label_493bbc:
    if (ctx->pc == 0x493BBCu) {
        ctx->pc = 0x493BBCu;
            // 0x493bbc: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x493BC0u;
        goto label_493bc0;
    }
    ctx->pc = 0x493BB8u;
    {
        const bool branch_taken_0x493bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x493BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x493BB8u;
            // 0x493bbc: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493bb8) {
            ctx->pc = 0x493C18u;
            goto label_493c18;
        }
    }
    ctx->pc = 0x493BC0u;
label_493bc0:
    // 0x493bc0: 0x10000015  b           . + 4 + (0x15 << 2)
label_493bc4:
    if (ctx->pc == 0x493BC4u) {
        ctx->pc = 0x493BC4u;
            // 0x493bc4: 0x8fbe01f8  lw          $fp, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->pc = 0x493BC8u;
        goto label_493bc8;
    }
    ctx->pc = 0x493BC0u;
    {
        const bool branch_taken_0x493bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x493BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x493BC0u;
            // 0x493bc4: 0x8fbe01f8  lw          $fp, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493bc0) {
            ctx->pc = 0x493C18u;
            goto label_493c18;
        }
    }
    ctx->pc = 0x493BC8u;
label_493bc8:
    // 0x493bc8: 0xc0497f2  jal         func_125FC8
label_493bcc:
    if (ctx->pc == 0x493BCCu) {
        ctx->pc = 0x493BCCu;
            // 0x493bcc: 0xdfa401f8  ld          $a0, 0x1F8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->pc = 0x493BD0u;
        goto label_493bd0;
    }
    ctx->pc = 0x493BC8u;
    SET_GPR_U32(ctx, 31, 0x493BD0u);
    ctx->pc = 0x493BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493BC8u;
            // 0x493bcc: 0xdfa401f8  ld          $a0, 0x1F8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125FC8u;
    if (runtime->hasFunction(0x125FC8u)) {
        auto targetFn = runtime->lookupFunction(0x125FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493BD0u; }
        if (ctx->pc != 0x493BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125FC8_0x125fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493BD0u; }
        if (ctx->pc != 0x493BD0u) { return; }
    }
    ctx->pc = 0x493BD0u;
label_493bd0:
    // 0x493bd0: 0x10000011  b           . + 4 + (0x11 << 2)
label_493bd4:
    if (ctx->pc == 0x493BD4u) {
        ctx->pc = 0x493BD4u;
            // 0x493bd4: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x493BD8u;
        goto label_493bd8;
    }
    ctx->pc = 0x493BD0u;
    {
        const bool branch_taken_0x493bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x493BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x493BD0u;
            // 0x493bd4: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493bd0) {
            ctx->pc = 0x493C18u;
            goto label_493c18;
        }
    }
    ctx->pc = 0x493BD8u;
label_493bd8:
    // 0x493bd8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x493bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_493bdc:
    // 0x493bdc: 0xc7a101f8  lwc1        $f1, 0x1F8($sp)
    ctx->pc = 0x493bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_493be0:
    // 0x493be0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x493be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_493be4:
    // 0x493be4: 0x0  nop
    ctx->pc = 0x493be4u;
    // NOP
label_493be8:
    // 0x493be8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x493be8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_493bec:
    // 0x493bec: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_493bf0:
    if (ctx->pc == 0x493BF0u) {
        ctx->pc = 0x493BF0u;
            // 0x493bf0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x493BF4u;
        goto label_493bf4;
    }
    ctx->pc = 0x493BECu;
    {
        const bool branch_taken_0x493bec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x493bec) {
            ctx->pc = 0x493BF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x493BECu;
            // 0x493bf0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x493C04u;
            goto label_493c04;
        }
    }
    ctx->pc = 0x493BF4u;
label_493bf4:
    // 0x493bf4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x493bf4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_493bf8:
    // 0x493bf8: 0x441e0000  mfc1        $fp, $f0
    ctx->pc = 0x493bf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 30, bits); }
label_493bfc:
    // 0x493bfc: 0x10000006  b           . + 4 + (0x6 << 2)
label_493c00:
    if (ctx->pc == 0x493C00u) {
        ctx->pc = 0x493C04u;
        goto label_493c04;
    }
    ctx->pc = 0x493BFCu;
    {
        const bool branch_taken_0x493bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493bfc) {
            ctx->pc = 0x493C18u;
            goto label_493c18;
        }
    }
    ctx->pc = 0x493C04u;
label_493c04:
    // 0x493c04: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x493c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_493c08:
    // 0x493c08: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x493c08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_493c0c:
    // 0x493c0c: 0x441e0000  mfc1        $fp, $f0
    ctx->pc = 0x493c0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 30, bits); }
label_493c10:
    // 0x493c10: 0x0  nop
    ctx->pc = 0x493c10u;
    // NOP
label_493c14:
    // 0x493c14: 0x3c2f025  or          $fp, $fp, $v0
    ctx->pc = 0x493c14u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | GPR_U64(ctx, 2));
label_493c18:
    // 0x493c18: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x493c18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_493c1c:
    // 0x493c1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_493c20:
    if (ctx->pc == 0x493C20u) {
        ctx->pc = 0x493C24u;
        goto label_493c24;
    }
    ctx->pc = 0x493C1Cu;
    {
        const bool branch_taken_0x493c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x493c1c) {
            ctx->pc = 0x493C30u;
            goto label_493c30;
        }
    }
    ctx->pc = 0x493C24u;
label_493c24:
    // 0x493c24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x493c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_493c28:
    // 0x493c28: 0x10000003  b           . + 4 + (0x3 << 2)
label_493c2c:
    if (ctx->pc == 0x493C2Cu) {
        ctx->pc = 0x493C2Cu;
            // 0x493c2c: 0xa6820046  sh          $v0, 0x46($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 70), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x493C30u;
        goto label_493c30;
    }
    ctx->pc = 0x493C28u;
    {
        const bool branch_taken_0x493c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x493C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x493C28u;
            // 0x493c2c: 0xa6820046  sh          $v0, 0x46($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 70), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493c28) {
            ctx->pc = 0x493C38u;
            goto label_493c38;
        }
    }
    ctx->pc = 0x493C30u;
label_493c30:
    // 0x493c30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x493c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_493c34:
    // 0x493c34: 0xa6820046  sh          $v0, 0x46($s4)
    ctx->pc = 0x493c34u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 70), (uint16_t)GPR_U32(ctx, 2));
label_493c38:
    // 0x493c38: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x493c38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_493c3c:
    // 0x493c3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x493c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_493c40:
    // 0x493c40: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x493c40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_493c44:
    // 0x493c44: 0x320f809  jalr        $t9
label_493c48:
    if (ctx->pc == 0x493C48u) {
        ctx->pc = 0x493C48u;
            // 0x493c48: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x493C4Cu;
        goto label_493c4c;
    }
    ctx->pc = 0x493C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x493C4Cu);
        ctx->pc = 0x493C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x493C44u;
            // 0x493c48: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x493C4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x493C4Cu; }
            if (ctx->pc != 0x493C4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x493C4Cu;
label_493c4c:
    // 0x493c4c: 0x10000188  b           . + 4 + (0x188 << 2)
label_493c50:
    if (ctx->pc == 0x493C50u) {
        ctx->pc = 0x493C54u;
        goto label_493c54;
    }
    ctx->pc = 0x493C4Cu;
    {
        const bool branch_taken_0x493c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493c4c) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x493C54u;
label_493c54:
    // 0x493c54: 0x0  nop
    ctx->pc = 0x493c54u;
    // NOP
label_493c58:
    // 0x493c58: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x493c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_493c5c:
    // 0x493c5c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x493c5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_493c60:
    // 0x493c60: 0x14400183  bnez        $v0, . + 4 + (0x183 << 2)
label_493c64:
    if (ctx->pc == 0x493C64u) {
        ctx->pc = 0x493C68u;
        goto label_493c68;
    }
    ctx->pc = 0x493C60u;
    {
        const bool branch_taken_0x493c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493c60) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x493C68u;
label_493c68:
    // 0x493c68: 0x27a40248  addiu       $a0, $sp, 0x248
    ctx->pc = 0x493c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
label_493c6c:
    // 0x493c6c: 0xc125124  jal         func_494490
label_493c70:
    if (ctx->pc == 0x493C70u) {
        ctx->pc = 0x493C70u;
            // 0x493c70: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->pc = 0x493C74u;
        goto label_493c74;
    }
    ctx->pc = 0x493C6Cu;
    SET_GPR_U32(ctx, 31, 0x493C74u);
    ctx->pc = 0x493C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493C6Cu;
            // 0x493c70: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493C74u; }
        if (ctx->pc != 0x493C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493C74u; }
        if (ctx->pc != 0x493C74u) { return; }
    }
    ctx->pc = 0x493C74u;
label_493c74:
    // 0x493c74: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x493c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
label_493c78:
    // 0x493c78: 0xc125120  jal         func_494480
label_493c7c:
    if (ctx->pc == 0x493C7Cu) {
        ctx->pc = 0x493C7Cu;
            // 0x493c7c: 0x27a403b0  addiu       $a0, $sp, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
        ctx->pc = 0x493C80u;
        goto label_493c80;
    }
    ctx->pc = 0x493C78u;
    SET_GPR_U32(ctx, 31, 0x493C80u);
    ctx->pc = 0x493C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493C78u;
            // 0x493c7c: 0x27a403b0  addiu       $a0, $sp, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493C80u; }
        if (ctx->pc != 0x493C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493C80u; }
        if (ctx->pc != 0x493C80u) { return; }
    }
    ctx->pc = 0x493C80u;
label_493c80:
    // 0x493c80: 0x8fa303b0  lw          $v1, 0x3B0($sp)
    ctx->pc = 0x493c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_493c84:
    // 0x493c84: 0x27a40244  addiu       $a0, $sp, 0x244
    ctx->pc = 0x493c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 580));
label_493c88:
    // 0x493c88: 0x26850048  addiu       $a1, $s4, 0x48
    ctx->pc = 0x493c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_493c8c:
    // 0x493c8c: 0x9062fff0  lbu         $v0, -0x10($v1)
    ctx->pc = 0x493c8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_493c90:
    // 0x493c90: 0xa3a201e0  sb          $v0, 0x1E0($sp)
    ctx->pc = 0x493c90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 480), (uint8_t)GPR_U32(ctx, 2));
label_493c94:
    // 0x493c94: 0xdc62fff8  ld          $v0, -0x8($v1)
    ctx->pc = 0x493c94u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_493c98:
    // 0x493c98: 0xffa201e8  sd          $v0, 0x1E8($sp)
    ctx->pc = 0x493c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 488), GPR_U64(ctx, 2));
label_493c9c:
    // 0x493c9c: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x493c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_493ca0:
    // 0x493ca0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x493ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_493ca4:
    // 0x493ca4: 0xc125124  jal         func_494490
label_493ca8:
    if (ctx->pc == 0x493CA8u) {
        ctx->pc = 0x493CA8u;
            // 0x493ca8: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x493CACu;
        goto label_493cac;
    }
    ctx->pc = 0x493CA4u;
    SET_GPR_U32(ctx, 31, 0x493CACu);
    ctx->pc = 0x493CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493CA4u;
            // 0x493ca8: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493CACu; }
        if (ctx->pc != 0x493CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493CACu; }
        if (ctx->pc != 0x493CACu) { return; }
    }
    ctx->pc = 0x493CACu;
label_493cac:
    // 0x493cac: 0x8fa50244  lw          $a1, 0x244($sp)
    ctx->pc = 0x493cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_493cb0:
    // 0x493cb0: 0xc125120  jal         func_494480
label_493cb4:
    if (ctx->pc == 0x493CB4u) {
        ctx->pc = 0x493CB4u;
            // 0x493cb4: 0x27a403ac  addiu       $a0, $sp, 0x3AC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 940));
        ctx->pc = 0x493CB8u;
        goto label_493cb8;
    }
    ctx->pc = 0x493CB0u;
    SET_GPR_U32(ctx, 31, 0x493CB8u);
    ctx->pc = 0x493CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493CB0u;
            // 0x493cb4: 0x27a403ac  addiu       $a0, $sp, 0x3AC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 940));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493CB8u; }
        if (ctx->pc != 0x493CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493CB8u; }
        if (ctx->pc != 0x493CB8u) { return; }
    }
    ctx->pc = 0x493CB8u;
label_493cb8:
    // 0x493cb8: 0x8fa303ac  lw          $v1, 0x3AC($sp)
    ctx->pc = 0x493cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 940)));
label_493cbc:
    // 0x493cbc: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x493cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_493cc0:
    // 0x493cc0: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x493cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_493cc4:
    // 0x493cc4: 0x26850048  addiu       $a1, $s4, 0x48
    ctx->pc = 0x493cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_493cc8:
    // 0x493cc8: 0x9070fff0  lbu         $s0, -0x10($v1)
    ctx->pc = 0x493cc8u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_493ccc:
    // 0x493ccc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x493cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_493cd0:
    // 0x493cd0: 0xdc63fff8  ld          $v1, -0x8($v1)
    ctx->pc = 0x493cd0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_493cd4:
    // 0x493cd4: 0xffa301d8  sd          $v1, 0x1D8($sp)
    ctx->pc = 0x493cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 3));
label_493cd8:
    // 0x493cd8: 0xc125124  jal         func_494490
label_493cdc:
    if (ctx->pc == 0x493CDCu) {
        ctx->pc = 0x493CDCu;
            // 0x493cdc: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x493CE0u;
        goto label_493ce0;
    }
    ctx->pc = 0x493CD8u;
    SET_GPR_U32(ctx, 31, 0x493CE0u);
    ctx->pc = 0x493CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493CD8u;
            // 0x493cdc: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493CE0u; }
        if (ctx->pc != 0x493CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493CE0u; }
        if (ctx->pc != 0x493CE0u) { return; }
    }
    ctx->pc = 0x493CE0u;
label_493ce0:
    // 0x493ce0: 0x8fa50240  lw          $a1, 0x240($sp)
    ctx->pc = 0x493ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_493ce4:
    // 0x493ce4: 0xc125120  jal         func_494480
label_493ce8:
    if (ctx->pc == 0x493CE8u) {
        ctx->pc = 0x493CE8u;
            // 0x493ce8: 0x27a403a8  addiu       $a0, $sp, 0x3A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 936));
        ctx->pc = 0x493CECu;
        goto label_493cec;
    }
    ctx->pc = 0x493CE4u;
    SET_GPR_U32(ctx, 31, 0x493CECu);
    ctx->pc = 0x493CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493CE4u;
            // 0x493ce8: 0x27a403a8  addiu       $a0, $sp, 0x3A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493CECu; }
        if (ctx->pc != 0x493CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493CECu; }
        if (ctx->pc != 0x493CECu) { return; }
    }
    ctx->pc = 0x493CECu;
label_493cec:
    // 0x493cec: 0x8fa503a8  lw          $a1, 0x3A8($sp)
    ctx->pc = 0x493cecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 936)));
label_493cf0:
    // 0x493cf0: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x493cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_493cf4:
    // 0x493cf4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x493cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_493cf8:
    // 0x493cf8: 0x90a4fff0  lbu         $a0, -0x10($a1)
    ctx->pc = 0x493cf8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967280)));
label_493cfc:
    // 0x493cfc: 0xa3a401f0  sb          $a0, 0x1F0($sp)
    ctx->pc = 0x493cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 496), (uint8_t)GPR_U32(ctx, 4));
label_493d00:
    // 0x493d00: 0xdca4fff8  ld          $a0, -0x8($a1)
    ctx->pc = 0x493d00u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 4294967288)));
label_493d04:
    // 0x493d04: 0xffa401f8  sd          $a0, 0x1F8($sp)
    ctx->pc = 0x493d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 4));
label_493d08:
    // 0x493d08: 0x8e84004c  lw          $a0, 0x4C($s4)
    ctx->pc = 0x493d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_493d0c:
    // 0x493d0c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x493d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_493d10:
    // 0x493d10: 0xae84004c  sw          $a0, 0x4C($s4)
    ctx->pc = 0x493d10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 4));
label_493d14:
    // 0x493d14: 0x8fb101f8  lw          $s1, 0x1F8($sp)
    ctx->pc = 0x493d14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_493d18:
    // 0x493d18: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_493d1c:
    if (ctx->pc == 0x493D1Cu) {
        ctx->pc = 0x493D1Cu;
            // 0x493d1c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x493D20u;
        goto label_493d20;
    }
    ctx->pc = 0x493D18u;
    {
        const bool branch_taken_0x493d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x493D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x493D18u;
            // 0x493d1c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493d18) {
            ctx->pc = 0x493D38u;
            goto label_493d38;
        }
    }
    ctx->pc = 0x493D20u;
label_493d20:
    // 0x493d20: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_493d24:
    if (ctx->pc == 0x493D24u) {
        ctx->pc = 0x493D28u;
        goto label_493d28;
    }
    ctx->pc = 0x493D20u;
    {
        const bool branch_taken_0x493d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x493d20) {
            ctx->pc = 0x493D30u;
            goto label_493d30;
        }
    }
    ctx->pc = 0x493D28u;
label_493d28:
    // 0x493d28: 0x10000009  b           . + 4 + (0x9 << 2)
label_493d2c:
    if (ctx->pc == 0x493D2Cu) {
        ctx->pc = 0x493D30u;
        goto label_493d30;
    }
    ctx->pc = 0x493D28u;
    {
        const bool branch_taken_0x493d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493d28) {
            ctx->pc = 0x493D50u;
            goto label_493d50;
        }
    }
    ctx->pc = 0x493D30u;
label_493d30:
    // 0x493d30: 0x10000007  b           . + 4 + (0x7 << 2)
label_493d34:
    if (ctx->pc == 0x493D34u) {
        ctx->pc = 0x493D34u;
            // 0x493d34: 0x8fb501d8  lw          $s5, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->pc = 0x493D38u;
        goto label_493d38;
    }
    ctx->pc = 0x493D30u;
    {
        const bool branch_taken_0x493d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x493D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x493D30u;
            // 0x493d34: 0x8fb501d8  lw          $s5, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493d30) {
            ctx->pc = 0x493D50u;
            goto label_493d50;
        }
    }
    ctx->pc = 0x493D38u;
label_493d38:
    // 0x493d38: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x493d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_493d3c:
    // 0x493d3c: 0x93a301d8  lbu         $v1, 0x1D8($sp)
    ctx->pc = 0x493d3cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 472)));
label_493d40:
    // 0x493d40: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x493d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_493d44:
    // 0x493d44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x493d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_493d48:
    // 0x493d48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x493d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_493d4c:
    // 0x493d4c: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x493d4cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_493d50:
    // 0x493d50: 0x93a301e0  lbu         $v1, 0x1E0($sp)
    ctx->pc = 0x493d50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 480)));
label_493d54:
    // 0x493d54: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x493d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_493d58:
    // 0x493d58: 0x1062005b  beq         $v1, $v0, . + 4 + (0x5B << 2)
label_493d5c:
    if (ctx->pc == 0x493D5Cu) {
        ctx->pc = 0x493D60u;
        goto label_493d60;
    }
    ctx->pc = 0x493D58u;
    {
        const bool branch_taken_0x493d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x493d58) {
            ctx->pc = 0x493EC8u;
            goto label_493ec8;
        }
    }
    ctx->pc = 0x493D60u;
label_493d60:
    // 0x493d60: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x493d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_493d64:
    // 0x493d64: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x493d64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_493d68:
    // 0x493d68: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x493d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_493d6c:
    // 0x493d6c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x493d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_493d70:
    // 0x493d70: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x493d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_493d74:
    // 0x493d74: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x493d74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_493d78:
    // 0x493d78: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x493d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_493d7c:
    // 0x493d7c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_493d80:
    if (ctx->pc == 0x493D80u) {
        ctx->pc = 0x493D84u;
        goto label_493d84;
    }
    ctx->pc = 0x493D7Cu;
    {
        const bool branch_taken_0x493d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x493d7c) {
            ctx->pc = 0x493DF0u;
            goto label_493df0;
        }
    }
    ctx->pc = 0x493D84u;
label_493d84:
    // 0x493d84: 0x0  nop
    ctx->pc = 0x493d84u;
    // NOP
label_493d88:
    // 0x493d88: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x493d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_493d8c:
    // 0x493d8c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x493d8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_493d90:
    // 0x493d90: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x493d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_493d94:
    // 0x493d94: 0xc04af96  jal         func_12BE58
label_493d98:
    if (ctx->pc == 0x493D98u) {
        ctx->pc = 0x493D98u;
            // 0x493d98: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x493D9Cu;
        goto label_493d9c;
    }
    ctx->pc = 0x493D94u;
    SET_GPR_U32(ctx, 31, 0x493D9Cu);
    ctx->pc = 0x493D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493D94u;
            // 0x493d98: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493D9Cu; }
        if (ctx->pc != 0x493D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493D9Cu; }
        if (ctx->pc != 0x493D9Cu) { return; }
    }
    ctx->pc = 0x493D9Cu;
label_493d9c:
    // 0x493d9c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_493da0:
    if (ctx->pc == 0x493DA0u) {
        ctx->pc = 0x493DA4u;
        goto label_493da4;
    }
    ctx->pc = 0x493D9Cu;
    {
        const bool branch_taken_0x493d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493d9c) {
            ctx->pc = 0x493DC0u;
            goto label_493dc0;
        }
    }
    ctx->pc = 0x493DA4u;
label_493da4:
    // 0x493da4: 0x10b03c  dsll32      $s6, $s0, 0
    ctx->pc = 0x493da4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 16) << (32 + 0));
label_493da8:
    // 0x493da8: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x493da8u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
label_493dac:
    // 0x493dac: 0xc0400a8  jal         func_1002A0
label_493db0:
    if (ctx->pc == 0x493DB0u) {
        ctx->pc = 0x493DB0u;
            // 0x493db0: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->pc = 0x493DB4u;
        goto label_493db4;
    }
    ctx->pc = 0x493DACu;
    SET_GPR_U32(ctx, 31, 0x493DB4u);
    ctx->pc = 0x493DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493DACu;
            // 0x493db0: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493DB4u; }
        if (ctx->pc != 0x493DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493DB4u; }
        if (ctx->pc != 0x493DB4u) { return; }
    }
    ctx->pc = 0x493DB4u;
label_493db4:
    // 0x493db4: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x493db4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_493db8:
    // 0x493db8: 0x1000000d  b           . + 4 + (0xD << 2)
label_493dbc:
    if (ctx->pc == 0x493DBCu) {
        ctx->pc = 0x493DBCu;
            // 0x493dbc: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x493DC0u;
        goto label_493dc0;
    }
    ctx->pc = 0x493DB8u;
    {
        const bool branch_taken_0x493db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x493DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x493DB8u;
            // 0x493dbc: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493db8) {
            ctx->pc = 0x493DF0u;
            goto label_493df0;
        }
    }
    ctx->pc = 0x493DC0u;
label_493dc0:
    // 0x493dc0: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x493dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_493dc4:
    // 0x493dc4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x493dc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_493dc8:
    // 0x493dc8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x493dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_493dcc:
    // 0x493dcc: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x493dccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_493dd0:
    // 0x493dd0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x493dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_493dd4:
    // 0x493dd4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x493dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_493dd8:
    // 0x493dd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x493dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_493ddc:
    // 0x493ddc: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x493ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_493de0:
    // 0x493de0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x493de0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_493de4:
    // 0x493de4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x493de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_493de8:
    // 0x493de8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_493dec:
    if (ctx->pc == 0x493DECu) {
        ctx->pc = 0x493DF0u;
        goto label_493df0;
    }
    ctx->pc = 0x493DE8u;
    {
        const bool branch_taken_0x493de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493de8) {
            ctx->pc = 0x493D88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_493d88;
        }
    }
    ctx->pc = 0x493DF0u;
label_493df0:
    // 0x493df0: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x493df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_493df4:
    // 0x493df4: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x493df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_493df8:
    // 0x493df8: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x493df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_493dfc:
    // 0x493dfc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x493dfcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_493e00:
    // 0x493e00: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x493e00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_493e04:
    // 0x493e04: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x493e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_493e08:
    // 0x493e08: 0x1445000d  bne         $v0, $a1, . + 4 + (0xD << 2)
label_493e0c:
    if (ctx->pc == 0x493E0Cu) {
        ctx->pc = 0x493E10u;
        goto label_493e10;
    }
    ctx->pc = 0x493E08u;
    {
        const bool branch_taken_0x493e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x493e08) {
            ctx->pc = 0x493E40u;
            goto label_493e40;
        }
    }
    ctx->pc = 0x493E10u;
label_493e10:
    // 0x493e10: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x493e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_493e14:
    // 0x493e14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x493e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_493e18:
    // 0x493e18: 0xc125c40  jal         func_497100
label_493e1c:
    if (ctx->pc == 0x493E1Cu) {
        ctx->pc = 0x493E1Cu;
            // 0x493e1c: 0x27a70220  addiu       $a3, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x493E20u;
        goto label_493e20;
    }
    ctx->pc = 0x493E18u;
    SET_GPR_U32(ctx, 31, 0x493E20u);
    ctx->pc = 0x493E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493E18u;
            // 0x493e1c: 0x27a70220  addiu       $a3, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x497100u;
    if (runtime->hasFunction(0x497100u)) {
        auto targetFn = runtime->lookupFunction(0x497100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493E20u; }
        if (ctx->pc != 0x493E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00497100_0x497100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493E20u; }
        if (ctx->pc != 0x493E20u) { return; }
    }
    ctx->pc = 0x493E20u;
label_493e20:
    // 0x493e20: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x493e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_493e24:
    // 0x493e24: 0xc1250c4  jal         func_494310
label_493e28:
    if (ctx->pc == 0x493E28u) {
        ctx->pc = 0x493E28u;
            // 0x493e28: 0x27a4023c  addiu       $a0, $sp, 0x23C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 572));
        ctx->pc = 0x493E2Cu;
        goto label_493e2c;
    }
    ctx->pc = 0x493E24u;
    SET_GPR_U32(ctx, 31, 0x493E2Cu);
    ctx->pc = 0x493E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493E24u;
            // 0x493e28: 0x27a4023c  addiu       $a0, $sp, 0x23C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 572));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494310u;
    if (runtime->hasFunction(0x494310u)) {
        auto targetFn = runtime->lookupFunction(0x494310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493E2Cu; }
        if (ctx->pc != 0x493E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494310_0x494310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493E2Cu; }
        if (ctx->pc != 0x493E2Cu) { return; }
    }
    ctx->pc = 0x493E2Cu;
label_493e2c:
    // 0x493e2c: 0x8fa5023c  lw          $a1, 0x23C($sp)
    ctx->pc = 0x493e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
label_493e30:
    // 0x493e30: 0xc1250c0  jal         func_494300
label_493e34:
    if (ctx->pc == 0x493E34u) {
        ctx->pc = 0x493E34u;
            // 0x493e34: 0x27a403a4  addiu       $a0, $sp, 0x3A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 932));
        ctx->pc = 0x493E38u;
        goto label_493e38;
    }
    ctx->pc = 0x493E30u;
    SET_GPR_U32(ctx, 31, 0x493E38u);
    ctx->pc = 0x493E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493E30u;
            // 0x493e34: 0x27a403a4  addiu       $a0, $sp, 0x3A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 932));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494300u;
    if (runtime->hasFunction(0x494300u)) {
        auto targetFn = runtime->lookupFunction(0x494300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493E38u; }
        if (ctx->pc != 0x493E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494300_0x494300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493E38u; }
        if (ctx->pc != 0x493E38u) { return; }
    }
    ctx->pc = 0x493E38u;
label_493e38:
    // 0x493e38: 0x8fa203a4  lw          $v0, 0x3A4($sp)
    ctx->pc = 0x493e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 932)));
label_493e3c:
    // 0x493e3c: 0x2456fff8  addiu       $s6, $v0, -0x8
    ctx->pc = 0x493e3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_493e40:
    // 0x493e40: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x493e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_493e44:
    // 0x493e44: 0xc040180  jal         func_100600
label_493e48:
    if (ctx->pc == 0x493E48u) {
        ctx->pc = 0x493E48u;
            // 0x493e48: 0xaed50000  sw          $s5, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 21));
        ctx->pc = 0x493E4Cu;
        goto label_493e4c;
    }
    ctx->pc = 0x493E44u;
    SET_GPR_U32(ctx, 31, 0x493E4Cu);
    ctx->pc = 0x493E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493E44u;
            // 0x493e48: 0xaed50000  sw          $s5, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493E4Cu; }
        if (ctx->pc != 0x493E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493E4Cu; }
        if (ctx->pc != 0x493E4Cu) { return; }
    }
    ctx->pc = 0x493E4Cu;
label_493e4c:
    // 0x493e4c: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x493e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
label_493e50:
    // 0x493e50: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x493e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_493e54:
    // 0x493e54: 0x93a401e0  lbu         $a0, 0x1E0($sp)
    ctx->pc = 0x493e54u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 480)));
label_493e58:
    // 0x493e58: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x493e58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_493e5c:
    // 0x493e5c: 0xdfa401e8  ld          $a0, 0x1E8($sp)
    ctx->pc = 0x493e5cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 488)));
label_493e60:
    // 0x493e60: 0xfc440008  sd          $a0, 0x8($v0)
    ctx->pc = 0x493e60u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
label_493e64:
    // 0x493e64: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x493e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_493e68:
    // 0x493e68: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x493e68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_493e6c:
    // 0x493e6c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_493e70:
    if (ctx->pc == 0x493E70u) {
        ctx->pc = 0x493E74u;
        goto label_493e74;
    }
    ctx->pc = 0x493E6Cu;
    {
        const bool branch_taken_0x493e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x493e6c) {
            ctx->pc = 0x493E80u;
            goto label_493e80;
        }
    }
    ctx->pc = 0x493E74u;
label_493e74:
    // 0x493e74: 0x100000fe  b           . + 4 + (0xFE << 2)
label_493e78:
    if (ctx->pc == 0x493E78u) {
        ctx->pc = 0x493E7Cu;
        goto label_493e7c;
    }
    ctx->pc = 0x493E74u;
    {
        const bool branch_taken_0x493e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493e74) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x493E7Cu;
label_493e7c:
    // 0x493e7c: 0x0  nop
    ctx->pc = 0x493e7cu;
    // NOP
label_493e80:
    // 0x493e80: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_493e84:
    if (ctx->pc == 0x493E84u) {
        ctx->pc = 0x493E84u;
            // 0x493e84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x493E88u;
        goto label_493e88;
    }
    ctx->pc = 0x493E80u;
    {
        const bool branch_taken_0x493e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x493E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x493E80u;
            // 0x493e84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493e80) {
            ctx->pc = 0x493EA0u;
            goto label_493ea0;
        }
    }
    ctx->pc = 0x493E88u;
label_493e88:
    // 0x493e88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_493e8c:
    if (ctx->pc == 0x493E8Cu) {
        ctx->pc = 0x493E90u;
        goto label_493e90;
    }
    ctx->pc = 0x493E88u;
    {
        const bool branch_taken_0x493e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x493e88) {
            ctx->pc = 0x493E98u;
            goto label_493e98;
        }
    }
    ctx->pc = 0x493E90u;
label_493e90:
    // 0x493e90: 0x10000009  b           . + 4 + (0x9 << 2)
label_493e94:
    if (ctx->pc == 0x493E94u) {
        ctx->pc = 0x493E98u;
        goto label_493e98;
    }
    ctx->pc = 0x493E90u;
    {
        const bool branch_taken_0x493e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493e90) {
            ctx->pc = 0x493EB8u;
            goto label_493eb8;
        }
    }
    ctx->pc = 0x493E98u;
label_493e98:
    // 0x493e98: 0x10000007  b           . + 4 + (0x7 << 2)
label_493e9c:
    if (ctx->pc == 0x493E9Cu) {
        ctx->pc = 0x493E9Cu;
            // 0x493e9c: 0x8c850008  lw          $a1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->pc = 0x493EA0u;
        goto label_493ea0;
    }
    ctx->pc = 0x493E98u;
    {
        const bool branch_taken_0x493e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x493E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x493E98u;
            // 0x493e9c: 0x8c850008  lw          $a1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493e98) {
            ctx->pc = 0x493EB8u;
            goto label_493eb8;
        }
    }
    ctx->pc = 0x493EA0u;
label_493ea0:
    // 0x493ea0: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x493ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_493ea4:
    // 0x493ea4: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x493ea4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
label_493ea8:
    // 0x493ea8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x493ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_493eac:
    // 0x493eac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x493eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_493eb0:
    // 0x493eb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x493eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_493eb4:
    // 0x493eb4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x493eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_493eb8:
    // 0x493eb8: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x493eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
label_493ebc:
    // 0x493ebc: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x493ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_493ec0:
    // 0x493ec0: 0x100000eb  b           . + 4 + (0xEB << 2)
label_493ec4:
    if (ctx->pc == 0x493EC4u) {
        ctx->pc = 0x493EC4u;
            // 0x493ec4: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x493EC8u;
        goto label_493ec8;
    }
    ctx->pc = 0x493EC0u;
    {
        const bool branch_taken_0x493ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x493EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x493EC0u;
            // 0x493ec4: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493ec0) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x493EC8u;
label_493ec8:
    // 0x493ec8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x493ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_493ecc:
    // 0x493ecc: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x493eccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_493ed0:
    // 0x493ed0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x493ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_493ed4:
    // 0x493ed4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x493ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_493ed8:
    // 0x493ed8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x493ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_493edc:
    // 0x493edc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x493edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_493ee0:
    // 0x493ee0: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x493ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_493ee4:
    // 0x493ee4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x493ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_493ee8:
    // 0x493ee8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x493ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_493eec:
    // 0x493eec: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_493ef0:
    if (ctx->pc == 0x493EF0u) {
        ctx->pc = 0x493EF4u;
        goto label_493ef4;
    }
    ctx->pc = 0x493EECu;
    {
        const bool branch_taken_0x493eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x493eec) {
            ctx->pc = 0x493F68u;
            goto label_493f68;
        }
    }
    ctx->pc = 0x493EF4u;
label_493ef4:
    // 0x493ef4: 0x0  nop
    ctx->pc = 0x493ef4u;
    // NOP
label_493ef8:
    // 0x493ef8: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x493ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_493efc:
    // 0x493efc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x493efcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_493f00:
    // 0x493f00: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x493f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_493f04:
    // 0x493f04: 0xc04af96  jal         func_12BE58
label_493f08:
    if (ctx->pc == 0x493F08u) {
        ctx->pc = 0x493F08u;
            // 0x493f08: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x493F0Cu;
        goto label_493f0c;
    }
    ctx->pc = 0x493F04u;
    SET_GPR_U32(ctx, 31, 0x493F0Cu);
    ctx->pc = 0x493F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493F04u;
            // 0x493f08: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493F0Cu; }
        if (ctx->pc != 0x493F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493F0Cu; }
        if (ctx->pc != 0x493F0Cu) { return; }
    }
    ctx->pc = 0x493F0Cu;
label_493f0c:
    // 0x493f0c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_493f10:
    if (ctx->pc == 0x493F10u) {
        ctx->pc = 0x493F14u;
        goto label_493f14;
    }
    ctx->pc = 0x493F0Cu;
    {
        const bool branch_taken_0x493f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493f0c) {
            ctx->pc = 0x493F30u;
            goto label_493f30;
        }
    }
    ctx->pc = 0x493F14u;
label_493f14:
    // 0x493f14: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x493f14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
label_493f18:
    // 0x493f18: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x493f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_493f1c:
    // 0x493f1c: 0xc125a18  jal         func_496860
label_493f20:
    if (ctx->pc == 0x493F20u) {
        ctx->pc = 0x493F20u;
            // 0x493f20: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->pc = 0x493F24u;
        goto label_493f24;
    }
    ctx->pc = 0x493F1Cu;
    SET_GPR_U32(ctx, 31, 0x493F24u);
    ctx->pc = 0x493F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493F1Cu;
            // 0x493f20: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496860u;
    if (runtime->hasFunction(0x496860u)) {
        auto targetFn = runtime->lookupFunction(0x496860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493F24u; }
        if (ctx->pc != 0x493F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496860_0x496860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493F24u; }
        if (ctx->pc != 0x493F24u) { return; }
    }
    ctx->pc = 0x493F24u;
label_493f24:
    // 0x493f24: 0x10000010  b           . + 4 + (0x10 << 2)
label_493f28:
    if (ctx->pc == 0x493F28u) {
        ctx->pc = 0x493F2Cu;
        goto label_493f2c;
    }
    ctx->pc = 0x493F24u;
    {
        const bool branch_taken_0x493f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493f24) {
            ctx->pc = 0x493F68u;
            goto label_493f68;
        }
    }
    ctx->pc = 0x493F2Cu;
label_493f2c:
    // 0x493f2c: 0x0  nop
    ctx->pc = 0x493f2cu;
    // NOP
label_493f30:
    // 0x493f30: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x493f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_493f34:
    // 0x493f34: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x493f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_493f38:
    // 0x493f38: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x493f38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_493f3c:
    // 0x493f3c: 0x2450001c  addiu       $s0, $v0, 0x1C
    ctx->pc = 0x493f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_493f40:
    // 0x493f40: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x493f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_493f44:
    // 0x493f44: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x493f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_493f48:
    // 0x493f48: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x493f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_493f4c:
    // 0x493f4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x493f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_493f50:
    // 0x493f50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x493f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_493f54:
    // 0x493f54: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x493f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_493f58:
    // 0x493f58: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x493f58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_493f5c:
    // 0x493f5c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x493f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_493f60:
    // 0x493f60: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_493f64:
    if (ctx->pc == 0x493F64u) {
        ctx->pc = 0x493F68u;
        goto label_493f68;
    }
    ctx->pc = 0x493F60u;
    {
        const bool branch_taken_0x493f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493f60) {
            ctx->pc = 0x493EF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_493ef8;
        }
    }
    ctx->pc = 0x493F68u;
label_493f68:
    // 0x493f68: 0x8fa701e8  lw          $a3, 0x1E8($sp)
    ctx->pc = 0x493f68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_493f6c:
    // 0x493f6c: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x493f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_493f70:
    // 0x493f70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x493f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_493f74:
    // 0x493f74: 0xacf50014  sw          $s5, 0x14($a3)
    ctx->pc = 0x493f74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 21));
label_493f78:
    // 0x493f78: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x493f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_493f7c:
    // 0x493f7c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x493f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_493f80:
    // 0x493f80: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x493f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_493f84:
    // 0x493f84: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x493f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_493f88:
    // 0x493f88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x493f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_493f8c:
    // 0x493f8c: 0xc125adc  jal         func_496B70
label_493f90:
    if (ctx->pc == 0x493F90u) {
        ctx->pc = 0x493F90u;
            // 0x493f90: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x493F94u;
        goto label_493f94;
    }
    ctx->pc = 0x493F8Cu;
    SET_GPR_U32(ctx, 31, 0x493F94u);
    ctx->pc = 0x493F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493F8Cu;
            // 0x493f90: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496B70u;
    if (runtime->hasFunction(0x496B70u)) {
        auto targetFn = runtime->lookupFunction(0x496B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493F94u; }
        if (ctx->pc != 0x493F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496B70_0x496b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493F94u; }
        if (ctx->pc != 0x493F94u) { return; }
    }
    ctx->pc = 0x493F94u;
label_493f94:
    // 0x493f94: 0x100000b6  b           . + 4 + (0xB6 << 2)
label_493f98:
    if (ctx->pc == 0x493F98u) {
        ctx->pc = 0x493F9Cu;
        goto label_493f9c;
    }
    ctx->pc = 0x493F94u;
    {
        const bool branch_taken_0x493f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493f94) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x493F9Cu;
label_493f9c:
    // 0x493f9c: 0x0  nop
    ctx->pc = 0x493f9cu;
    // NOP
label_493fa0:
    // 0x493fa0: 0x27a40238  addiu       $a0, $sp, 0x238
    ctx->pc = 0x493fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
label_493fa4:
    // 0x493fa4: 0xc125124  jal         func_494490
label_493fa8:
    if (ctx->pc == 0x493FA8u) {
        ctx->pc = 0x493FA8u;
            // 0x493fa8: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->pc = 0x493FACu;
        goto label_493fac;
    }
    ctx->pc = 0x493FA4u;
    SET_GPR_U32(ctx, 31, 0x493FACu);
    ctx->pc = 0x493FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493FA4u;
            // 0x493fa8: 0x26850048  addiu       $a1, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493FACu; }
        if (ctx->pc != 0x493FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493FACu; }
        if (ctx->pc != 0x493FACu) { return; }
    }
    ctx->pc = 0x493FACu;
label_493fac:
    // 0x493fac: 0x8fa50238  lw          $a1, 0x238($sp)
    ctx->pc = 0x493facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_493fb0:
    // 0x493fb0: 0xc125120  jal         func_494480
label_493fb4:
    if (ctx->pc == 0x493FB4u) {
        ctx->pc = 0x493FB4u;
            // 0x493fb4: 0x27a403a0  addiu       $a0, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->pc = 0x493FB8u;
        goto label_493fb8;
    }
    ctx->pc = 0x493FB0u;
    SET_GPR_U32(ctx, 31, 0x493FB8u);
    ctx->pc = 0x493FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493FB0u;
            // 0x493fb4: 0x27a403a0  addiu       $a0, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493FB8u; }
        if (ctx->pc != 0x493FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493FB8u; }
        if (ctx->pc != 0x493FB8u) { return; }
    }
    ctx->pc = 0x493FB8u;
label_493fb8:
    // 0x493fb8: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x493fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_493fbc:
    // 0x493fbc: 0x27a40234  addiu       $a0, $sp, 0x234
    ctx->pc = 0x493fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 564));
label_493fc0:
    // 0x493fc0: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x493fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_493fc4:
    // 0x493fc4: 0x26850048  addiu       $a1, $s4, 0x48
    ctx->pc = 0x493fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_493fc8:
    // 0x493fc8: 0x9070fff0  lbu         $s0, -0x10($v1)
    ctx->pc = 0x493fc8u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_493fcc:
    // 0x493fcc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x493fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_493fd0:
    // 0x493fd0: 0xdc63fff8  ld          $v1, -0x8($v1)
    ctx->pc = 0x493fd0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_493fd4:
    // 0x493fd4: 0xffa301d8  sd          $v1, 0x1D8($sp)
    ctx->pc = 0x493fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 3));
label_493fd8:
    // 0x493fd8: 0xc125124  jal         func_494490
label_493fdc:
    if (ctx->pc == 0x493FDCu) {
        ctx->pc = 0x493FDCu;
            // 0x493fdc: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x493FE0u;
        goto label_493fe0;
    }
    ctx->pc = 0x493FD8u;
    SET_GPR_U32(ctx, 31, 0x493FE0u);
    ctx->pc = 0x493FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493FD8u;
            // 0x493fdc: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494490u;
    if (runtime->hasFunction(0x494490u)) {
        auto targetFn = runtime->lookupFunction(0x494490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493FE0u; }
        if (ctx->pc != 0x493FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494490_0x494490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493FE0u; }
        if (ctx->pc != 0x493FE0u) { return; }
    }
    ctx->pc = 0x493FE0u;
label_493fe0:
    // 0x493fe0: 0x8fa50234  lw          $a1, 0x234($sp)
    ctx->pc = 0x493fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
label_493fe4:
    // 0x493fe4: 0xc125120  jal         func_494480
label_493fe8:
    if (ctx->pc == 0x493FE8u) {
        ctx->pc = 0x493FE8u;
            // 0x493fe8: 0x27a4039c  addiu       $a0, $sp, 0x39C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 924));
        ctx->pc = 0x493FECu;
        goto label_493fec;
    }
    ctx->pc = 0x493FE4u;
    SET_GPR_U32(ctx, 31, 0x493FECu);
    ctx->pc = 0x493FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x493FE4u;
            // 0x493fe8: 0x27a4039c  addiu       $a0, $sp, 0x39C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 924));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494480u;
    if (runtime->hasFunction(0x494480u)) {
        auto targetFn = runtime->lookupFunction(0x494480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493FECu; }
        if (ctx->pc != 0x493FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494480_0x494480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x493FECu; }
        if (ctx->pc != 0x493FECu) { return; }
    }
    ctx->pc = 0x493FECu;
label_493fec:
    // 0x493fec: 0x8fa3039c  lw          $v1, 0x39C($sp)
    ctx->pc = 0x493fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 924)));
label_493ff0:
    // 0x493ff0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x493ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_493ff4:
    // 0x493ff4: 0x9062fff0  lbu         $v0, -0x10($v1)
    ctx->pc = 0x493ff4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_493ff8:
    // 0x493ff8: 0xa3a201f0  sb          $v0, 0x1F0($sp)
    ctx->pc = 0x493ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 496), (uint8_t)GPR_U32(ctx, 2));
label_493ffc:
    // 0x493ffc: 0xdc62fff8  ld          $v0, -0x8($v1)
    ctx->pc = 0x493ffcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_494000:
    // 0x494000: 0xffa201f8  sd          $v0, 0x1F8($sp)
    ctx->pc = 0x494000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 2));
label_494004:
    // 0x494004: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x494004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_494008:
    // 0x494008: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x494008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_49400c:
    // 0x49400c: 0xae82004c  sw          $v0, 0x4C($s4)
    ctx->pc = 0x49400cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
label_494010:
    // 0x494010: 0x8fb101f8  lw          $s1, 0x1F8($sp)
    ctx->pc = 0x494010u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_494014:
    // 0x494014: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x494014u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_494018:
    // 0x494018: 0x1464003d  bne         $v1, $a0, . + 4 + (0x3D << 2)
label_49401c:
    if (ctx->pc == 0x49401Cu) {
        ctx->pc = 0x494020u;
        goto label_494020;
    }
    ctx->pc = 0x494018u;
    {
        const bool branch_taken_0x494018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x494018) {
            ctx->pc = 0x494110u;
            goto label_494110;
        }
    }
    ctx->pc = 0x494020u;
label_494020:
    // 0x494020: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x494020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_494024:
    // 0x494024: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x494024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_494028:
    // 0x494028: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_49402c:
    if (ctx->pc == 0x49402Cu) {
        ctx->pc = 0x49402Cu;
            // 0x49402c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x494030u;
        goto label_494030;
    }
    ctx->pc = 0x494028u;
    {
        const bool branch_taken_0x494028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49402Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494028u;
            // 0x49402c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494028) {
            ctx->pc = 0x494048u;
            goto label_494048;
        }
    }
    ctx->pc = 0x494030u;
label_494030:
    // 0x494030: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_494034:
    if (ctx->pc == 0x494034u) {
        ctx->pc = 0x494038u;
        goto label_494038;
    }
    ctx->pc = 0x494030u;
    {
        const bool branch_taken_0x494030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x494030) {
            ctx->pc = 0x494040u;
            goto label_494040;
        }
    }
    ctx->pc = 0x494038u;
label_494038:
    // 0x494038: 0x10000009  b           . + 4 + (0x9 << 2)
label_49403c:
    if (ctx->pc == 0x49403Cu) {
        ctx->pc = 0x494040u;
        goto label_494040;
    }
    ctx->pc = 0x494038u;
    {
        const bool branch_taken_0x494038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x494038) {
            ctx->pc = 0x494060u;
            goto label_494060;
        }
    }
    ctx->pc = 0x494040u;
label_494040:
    // 0x494040: 0x10000007  b           . + 4 + (0x7 << 2)
label_494044:
    if (ctx->pc == 0x494044u) {
        ctx->pc = 0x494044u;
            // 0x494044: 0x8fb501d8  lw          $s5, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->pc = 0x494048u;
        goto label_494048;
    }
    ctx->pc = 0x494040u;
    {
        const bool branch_taken_0x494040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x494044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494040u;
            // 0x494044: 0x8fb501d8  lw          $s5, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494040) {
            ctx->pc = 0x494060u;
            goto label_494060;
        }
    }
    ctx->pc = 0x494048u;
label_494048:
    // 0x494048: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x494048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_49404c:
    // 0x49404c: 0x93a301d8  lbu         $v1, 0x1D8($sp)
    ctx->pc = 0x49404cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 472)));
label_494050:
    // 0x494050: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x494050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_494054:
    // 0x494054: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x494054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_494058:
    // 0x494058: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x494058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_49405c:
    // 0x49405c: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x49405cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_494060:
    // 0x494060: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x494060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_494064:
    // 0x494064: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x494064u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_494068:
    // 0x494068: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x494068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_49406c:
    // 0x49406c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x49406cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_494070:
    // 0x494070: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x494070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_494074:
    // 0x494074: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x494074u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_494078:
    // 0x494078: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x494078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_49407c:
    // 0x49407c: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
label_494080:
    if (ctx->pc == 0x494080u) {
        ctx->pc = 0x494084u;
        goto label_494084;
    }
    ctx->pc = 0x49407Cu;
    {
        const bool branch_taken_0x49407c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49407c) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x494084u;
label_494084:
    // 0x494084: 0x0  nop
    ctx->pc = 0x494084u;
    // NOP
label_494088:
    // 0x494088: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x494088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_49408c:
    // 0x49408c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x49408cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_494090:
    // 0x494090: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x494090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_494094:
    // 0x494094: 0xc04af96  jal         func_12BE58
label_494098:
    if (ctx->pc == 0x494098u) {
        ctx->pc = 0x494098u;
            // 0x494098: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49409Cu;
        goto label_49409c;
    }
    ctx->pc = 0x494094u;
    SET_GPR_U32(ctx, 31, 0x49409Cu);
    ctx->pc = 0x494098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x494094u;
            // 0x494098: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49409Cu; }
        if (ctx->pc != 0x49409Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49409Cu; }
        if (ctx->pc != 0x49409Cu) { return; }
    }
    ctx->pc = 0x49409Cu;
label_49409c:
    // 0x49409c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_4940a0:
    if (ctx->pc == 0x4940A0u) {
        ctx->pc = 0x4940A4u;
        goto label_4940a4;
    }
    ctx->pc = 0x49409Cu;
    {
        const bool branch_taken_0x49409c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49409c) {
            ctx->pc = 0x4940D8u;
            goto label_4940d8;
        }
    }
    ctx->pc = 0x4940A4u;
label_4940a4:
    // 0x4940a4: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x4940a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_4940a8:
    // 0x4940a8: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x4940a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_4940ac:
    // 0x4940ac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4940acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_4940b0:
    // 0x4940b0: 0x26840048  addiu       $a0, $s4, 0x48
    ctx->pc = 0x4940b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_4940b4:
    // 0x4940b4: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x4940b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4940b8:
    // 0x4940b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4940b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4940bc:
    // 0x4940bc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4940bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4940c0:
    // 0x4940c0: 0x8e820050  lw          $v0, 0x50($s4)
    ctx->pc = 0x4940c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_4940c4:
    // 0x4940c4: 0xc125914  jal         func_496450
label_4940c8:
    if (ctx->pc == 0x4940C8u) {
        ctx->pc = 0x4940C8u;
            // 0x4940c8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4940CCu;
        goto label_4940cc;
    }
    ctx->pc = 0x4940C4u;
    SET_GPR_U32(ctx, 31, 0x4940CCu);
    ctx->pc = 0x4940C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4940C4u;
            // 0x4940c8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496450u;
    if (runtime->hasFunction(0x496450u)) {
        auto targetFn = runtime->lookupFunction(0x496450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4940CCu; }
        if (ctx->pc != 0x4940CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496450_0x496450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4940CCu; }
        if (ctx->pc != 0x4940CCu) { return; }
    }
    ctx->pc = 0x4940CCu;
label_4940cc:
    // 0x4940cc: 0x10000068  b           . + 4 + (0x68 << 2)
label_4940d0:
    if (ctx->pc == 0x4940D0u) {
        ctx->pc = 0x4940D4u;
        goto label_4940d4;
    }
    ctx->pc = 0x4940CCu;
    {
        const bool branch_taken_0x4940cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4940cc) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x4940D4u;
label_4940d4:
    // 0x4940d4: 0x0  nop
    ctx->pc = 0x4940d4u;
    // NOP
label_4940d8:
    // 0x4940d8: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x4940d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_4940dc:
    // 0x4940dc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4940dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_4940e0:
    // 0x4940e0: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x4940e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_4940e4:
    // 0x4940e4: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x4940e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_4940e8:
    // 0x4940e8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x4940e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_4940ec:
    // 0x4940ec: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4940ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4940f0:
    // 0x4940f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4940f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4940f4:
    // 0x4940f4: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x4940f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_4940f8:
    // 0x4940f8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4940f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4940fc:
    // 0x4940fc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4940fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_494100:
    // 0x494100: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_494104:
    if (ctx->pc == 0x494104u) {
        ctx->pc = 0x494108u;
        goto label_494108;
    }
    ctx->pc = 0x494100u;
    {
        const bool branch_taken_0x494100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x494100) {
            ctx->pc = 0x494088u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_494088;
        }
    }
    ctx->pc = 0x494108u;
label_494108:
    // 0x494108: 0x10000059  b           . + 4 + (0x59 << 2)
label_49410c:
    if (ctx->pc == 0x49410Cu) {
        ctx->pc = 0x494110u;
        goto label_494110;
    }
    ctx->pc = 0x494108u;
    {
        const bool branch_taken_0x494108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x494108) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x494110u;
label_494110:
    // 0x494110: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x494110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_494114:
    // 0x494114: 0x14620056  bne         $v1, $v0, . + 4 + (0x56 << 2)
label_494118:
    if (ctx->pc == 0x494118u) {
        ctx->pc = 0x49411Cu;
        goto label_49411c;
    }
    ctx->pc = 0x494114u;
    {
        const bool branch_taken_0x494114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x494114) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x49411Cu;
label_49411c:
    // 0x49411c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x49411cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_494120:
    // 0x494120: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
label_494124:
    if (ctx->pc == 0x494124u) {
        ctx->pc = 0x494128u;
        goto label_494128;
    }
    ctx->pc = 0x494120u;
    {
        const bool branch_taken_0x494120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x494120) {
            ctx->pc = 0x4941A0u;
            goto label_4941a0;
        }
    }
    ctx->pc = 0x494128u;
label_494128:
    // 0x494128: 0x1064001b  beq         $v1, $a0, . + 4 + (0x1B << 2)
label_49412c:
    if (ctx->pc == 0x49412Cu) {
        ctx->pc = 0x494130u;
        goto label_494130;
    }
    ctx->pc = 0x494128u;
    {
        const bool branch_taken_0x494128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x494128) {
            ctx->pc = 0x494198u;
            goto label_494198;
        }
    }
    ctx->pc = 0x494130u;
label_494130:
    // 0x494130: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x494130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_494134:
    // 0x494134: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_494138:
    if (ctx->pc == 0x494138u) {
        ctx->pc = 0x49413Cu;
        goto label_49413c;
    }
    ctx->pc = 0x494134u;
    {
        const bool branch_taken_0x494134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x494134) {
            ctx->pc = 0x494188u;
            goto label_494188;
        }
    }
    ctx->pc = 0x49413Cu;
label_49413c:
    // 0x49413c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x49413cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_494140:
    // 0x494140: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_494144:
    if (ctx->pc == 0x494144u) {
        ctx->pc = 0x494148u;
        goto label_494148;
    }
    ctx->pc = 0x494140u;
    {
        const bool branch_taken_0x494140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x494140) {
            ctx->pc = 0x494150u;
            goto label_494150;
        }
    }
    ctx->pc = 0x494148u;
label_494148:
    // 0x494148: 0x1000001d  b           . + 4 + (0x1D << 2)
label_49414c:
    if (ctx->pc == 0x49414Cu) {
        ctx->pc = 0x494150u;
        goto label_494150;
    }
    ctx->pc = 0x494148u;
    {
        const bool branch_taken_0x494148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x494148) {
            ctx->pc = 0x4941C0u;
            goto label_4941c0;
        }
    }
    ctx->pc = 0x494150u;
label_494150:
    // 0x494150: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x494150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_494154:
    // 0x494154: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_494158:
    if (ctx->pc == 0x494158u) {
        ctx->pc = 0x494158u;
            // 0x494158: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x49415Cu;
        goto label_49415c;
    }
    ctx->pc = 0x494154u;
    {
        const bool branch_taken_0x494154 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x494154) {
            ctx->pc = 0x494158u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x494154u;
            // 0x494158: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x494168u;
            goto label_494168;
        }
    }
    ctx->pc = 0x49415Cu;
label_49415c:
    // 0x49415c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x49415cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_494160:
    // 0x494160: 0x10000007  b           . + 4 + (0x7 << 2)
label_494164:
    if (ctx->pc == 0x494164u) {
        ctx->pc = 0x494164u;
            // 0x494164: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x494168u;
        goto label_494168;
    }
    ctx->pc = 0x494160u;
    {
        const bool branch_taken_0x494160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x494164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494160u;
            // 0x494164: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x494160) {
            ctx->pc = 0x494180u;
            goto label_494180;
        }
    }
    ctx->pc = 0x494168u;
label_494168:
    // 0x494168: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x494168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_49416c:
    // 0x49416c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49416cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_494170:
    // 0x494170: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x494170u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_494174:
    // 0x494174: 0x0  nop
    ctx->pc = 0x494174u;
    // NOP
label_494178:
    // 0x494178: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x494178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_49417c:
    // 0x49417c: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x49417cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_494180:
    // 0x494180: 0x1000000f  b           . + 4 + (0xF << 2)
label_494184:
    if (ctx->pc == 0x494184u) {
        ctx->pc = 0x494188u;
        goto label_494188;
    }
    ctx->pc = 0x494180u;
    {
        const bool branch_taken_0x494180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x494180) {
            ctx->pc = 0x4941C0u;
            goto label_4941c0;
        }
    }
    ctx->pc = 0x494188u;
label_494188:
    // 0x494188: 0xc0497dc  jal         func_125F70
label_49418c:
    if (ctx->pc == 0x49418Cu) {
        ctx->pc = 0x49418Cu;
            // 0x49418c: 0xdfa401d8  ld          $a0, 0x1D8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->pc = 0x494190u;
        goto label_494190;
    }
    ctx->pc = 0x494188u;
    SET_GPR_U32(ctx, 31, 0x494190u);
    ctx->pc = 0x49418Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x494188u;
            // 0x49418c: 0xdfa401d8  ld          $a0, 0x1D8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494190u; }
        if (ctx->pc != 0x494190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494190u; }
        if (ctx->pc != 0x494190u) { return; }
    }
    ctx->pc = 0x494190u;
label_494190:
    // 0x494190: 0x1000000b  b           . + 4 + (0xB << 2)
label_494194:
    if (ctx->pc == 0x494194u) {
        ctx->pc = 0x494194u;
            // 0x494194: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x494198u;
        goto label_494198;
    }
    ctx->pc = 0x494190u;
    {
        const bool branch_taken_0x494190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x494194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494190u;
            // 0x494194: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x494190) {
            ctx->pc = 0x4941C0u;
            goto label_4941c0;
        }
    }
    ctx->pc = 0x494198u;
label_494198:
    // 0x494198: 0x10000009  b           . + 4 + (0x9 << 2)
label_49419c:
    if (ctx->pc == 0x49419Cu) {
        ctx->pc = 0x49419Cu;
            // 0x49419c: 0xc7b401d8  lwc1        $f20, 0x1D8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x4941A0u;
        goto label_4941a0;
    }
    ctx->pc = 0x494198u;
    {
        const bool branch_taken_0x494198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49419Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494198u;
            // 0x49419c: 0xc7b401d8  lwc1        $f20, 0x1D8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x494198) {
            ctx->pc = 0x4941C0u;
            goto label_4941c0;
        }
    }
    ctx->pc = 0x4941A0u;
label_4941a0:
    // 0x4941a0: 0x93a201d8  lbu         $v0, 0x1D8($sp)
    ctx->pc = 0x4941a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 472)));
label_4941a4:
    // 0x4941a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4941a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4941a8:
    // 0x4941a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4941a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4941ac:
    // 0x4941ac: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x4941acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_4941b0:
    // 0x4941b0: 0xc124524  jal         func_491490
label_4941b4:
    if (ctx->pc == 0x4941B4u) {
        ctx->pc = 0x4941B4u;
            // 0x4941b4: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->pc = 0x4941B8u;
        goto label_4941b8;
    }
    ctx->pc = 0x4941B0u;
    SET_GPR_U32(ctx, 31, 0x4941B8u);
    ctx->pc = 0x4941B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4941B0u;
            // 0x4941b4: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x491490u;
    if (runtime->hasFunction(0x491490u)) {
        auto targetFn = runtime->lookupFunction(0x491490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4941B8u; }
        if (ctx->pc != 0x4941B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00491490_0x491490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4941B8u; }
        if (ctx->pc != 0x4941B8u) { return; }
    }
    ctx->pc = 0x4941B8u;
label_4941b8:
    // 0x4941b8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4941b8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_4941bc:
    // 0x4941bc: 0x0  nop
    ctx->pc = 0x4941bcu;
    // NOP
label_4941c0:
    // 0x4941c0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4941c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_4941c4:
    // 0x4941c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4941c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4941c8:
    // 0x4941c8: 0x0  nop
    ctx->pc = 0x4941c8u;
    // NOP
label_4941cc:
    // 0x4941cc: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x4941ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4941d0:
    // 0x4941d0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4941d4:
    if (ctx->pc == 0x4941D4u) {
        ctx->pc = 0x4941D4u;
            // 0x4941d4: 0x4600a001  sub.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x4941D8u;
        goto label_4941d8;
    }
    ctx->pc = 0x4941D0u;
    {
        const bool branch_taken_0x4941d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4941d0) {
            ctx->pc = 0x4941D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4941D0u;
            // 0x4941d4: 0x4600a001  sub.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4941E8u;
            goto label_4941e8;
        }
    }
    ctx->pc = 0x4941D8u;
label_4941d8:
    // 0x4941d8: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4941d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4941dc:
    // 0x4941dc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4941dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4941e0:
    // 0x4941e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_4941e4:
    if (ctx->pc == 0x4941E4u) {
        ctx->pc = 0x4941E4u;
            // 0x4941e4: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x4941E8u;
        goto label_4941e8;
    }
    ctx->pc = 0x4941E0u;
    {
        const bool branch_taken_0x4941e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4941E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4941E0u;
            // 0x4941e4: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4941e0) {
            ctx->pc = 0x494200u;
            goto label_494200;
        }
    }
    ctx->pc = 0x4941E8u;
label_4941e8:
    // 0x4941e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4941e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4941ec:
    // 0x4941ec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4941ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4941f0:
    // 0x4941f0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4941f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4941f4:
    // 0x4941f4: 0x0  nop
    ctx->pc = 0x4941f4u;
    // NOP
label_4941f8:
    // 0x4941f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4941f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4941fc:
    // 0x4941fc: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x4941fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_494200:
    // 0x494200: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x494200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_494204:
    // 0x494204: 0x8e87004c  lw          $a3, 0x4C($s4)
    ctx->pc = 0x494204u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_494208:
    // 0x494208: 0x26840048  addiu       $a0, $s4, 0x48
    ctx->pc = 0x494208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_49420c:
    // 0x49420c: 0x8e850050  lw          $a1, 0x50($s4)
    ctx->pc = 0x49420cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_494210:
    // 0x494210: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x494210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_494214:
    // 0x494214: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x494214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_494218:
    // 0x494218: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x494218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_49421c:
    // 0x49421c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x49421cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_494220:
    // 0x494220: 0xc125914  jal         func_496450
label_494224:
    if (ctx->pc == 0x494224u) {
        ctx->pc = 0x494224u;
            // 0x494224: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->pc = 0x494228u;
        goto label_494228;
    }
    ctx->pc = 0x494220u;
    SET_GPR_U32(ctx, 31, 0x494228u);
    ctx->pc = 0x494224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x494220u;
            // 0x494224: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496450u;
    if (runtime->hasFunction(0x496450u)) {
        auto targetFn = runtime->lookupFunction(0x496450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494228u; }
        if (ctx->pc != 0x494228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496450_0x496450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494228u; }
        if (ctx->pc != 0x494228u) { return; }
    }
    ctx->pc = 0x494228u;
label_494228:
    // 0x494228: 0x10000011  b           . + 4 + (0x11 << 2)
label_49422c:
    if (ctx->pc == 0x49422Cu) {
        ctx->pc = 0x494230u;
        goto label_494230;
    }
    ctx->pc = 0x494228u;
    {
        const bool branch_taken_0x494228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x494228) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x494230u;
label_494230:
    // 0x494230: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x494230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_494234:
    // 0x494234: 0x1000000e  b           . + 4 + (0xE << 2)
label_494238:
    if (ctx->pc == 0x494238u) {
        ctx->pc = 0x494238u;
            // 0x494238: 0xa6820046  sh          $v0, 0x46($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 70), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x49423Cu;
        goto label_49423c;
    }
    ctx->pc = 0x494234u;
    {
        const bool branch_taken_0x494234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x494238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494234u;
            // 0x494238: 0xa6820046  sh          $v0, 0x46($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 70), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494234) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x49423Cu;
label_49423c:
    // 0x49423c: 0x0  nop
    ctx->pc = 0x49423cu;
    // NOP
label_494240:
    // 0x494240: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x494240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_494244:
    // 0x494244: 0x1000000a  b           . + 4 + (0xA << 2)
label_494248:
    if (ctx->pc == 0x494248u) {
        ctx->pc = 0x494248u;
            // 0x494248: 0xa6820046  sh          $v0, 0x46($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 70), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x49424Cu;
        goto label_49424c;
    }
    ctx->pc = 0x494244u;
    {
        const bool branch_taken_0x494244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x494248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494244u;
            // 0x494248: 0xa6820046  sh          $v0, 0x46($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 70), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494244) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x49424Cu;
label_49424c:
    // 0x49424c: 0x0  nop
    ctx->pc = 0x49424cu;
    // NOP
label_494250:
    // 0x494250: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x494250u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_494254:
    // 0x494254: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_494258:
    if (ctx->pc == 0x494258u) {
        ctx->pc = 0x49425Cu;
        goto label_49425c;
    }
    ctx->pc = 0x494254u;
    {
        const bool branch_taken_0x494254 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x494254) {
            ctx->pc = 0x494270u;
            goto label_494270;
        }
    }
    ctx->pc = 0x49425Cu;
label_49425c:
    // 0x49425c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x49425cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_494260:
    // 0x494260: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x494260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_494264:
    // 0x494264: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x494264u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_494268:
    // 0x494268: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x494268u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_49426c:
    // 0x49426c: 0x0  nop
    ctx->pc = 0x49426cu;
    // NOP
label_494270:
    // 0x494270: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x494270u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_494274:
    // 0x494274: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x494274u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_494278:
    // 0x494278: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x494278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_49427c:
    // 0x49427c: 0x1440f53f  bnez        $v0, . + 4 + (-0xAC1 << 2)
label_494280:
    if (ctx->pc == 0x494280u) {
        ctx->pc = 0x494280u;
            // 0x494280: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->pc = 0x494284u;
        goto label_494284;
    }
    ctx->pc = 0x49427Cu;
    {
        const bool branch_taken_0x49427c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x494280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49427Cu;
            // 0x494280: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49427c) {
            ctx->pc = 0x49177Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_49177c;
        }
    }
    ctx->pc = 0x494284u;
label_494284:
    // 0x494284: 0xc125690  jal         func_495A40
label_494288:
    if (ctx->pc == 0x494288u) {
        ctx->pc = 0x494288u;
            // 0x494288: 0x26840048  addiu       $a0, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->pc = 0x49428Cu;
        goto label_49428c;
    }
    ctx->pc = 0x494284u;
    SET_GPR_U32(ctx, 31, 0x49428Cu);
    ctx->pc = 0x494288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x494284u;
            // 0x494288: 0x26840048  addiu       $a0, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x495A40u;
    if (runtime->hasFunction(0x495A40u)) {
        auto targetFn = runtime->lookupFunction(0x495A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49428Cu; }
        if (ctx->pc != 0x49428Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00495A40_0x495a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49428Cu; }
        if (ctx->pc != 0x49428Cu) { return; }
    }
    ctx->pc = 0x49428Cu;
label_49428c:
    // 0x49428c: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x49428cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_494290:
    // 0x494290: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_494294:
    if (ctx->pc == 0x494294u) {
        ctx->pc = 0x494294u;
            // 0x494294: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x494298u;
        goto label_494298;
    }
    ctx->pc = 0x494290u;
    {
        const bool branch_taken_0x494290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x494290) {
            ctx->pc = 0x494294u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x494290u;
            // 0x494294: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4942A0u;
            goto label_4942a0;
        }
    }
    ctx->pc = 0x494298u;
label_494298:
    // 0x494298: 0xae9700a8  sw          $s7, 0xA8($s4)
    ctx->pc = 0x494298u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 168), GPR_U32(ctx, 23));
label_49429c:
    // 0x49429c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x49429cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_4942a0:
    // 0x4942a0: 0xc7bf002c  lwc1        $f31, 0x2C($sp)
    ctx->pc = 0x4942a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_4942a4:
    // 0x4942a4: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x4942a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4942a8:
    // 0x4942a8: 0xc7be0028  lwc1        $f30, 0x28($sp)
    ctx->pc = 0x4942a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_4942ac:
    // 0x4942ac: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x4942acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4942b0:
    // 0x4942b0: 0xc7bd0024  lwc1        $f29, 0x24($sp)
    ctx->pc = 0x4942b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_4942b4:
    // 0x4942b4: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x4942b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4942b8:
    // 0x4942b8: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x4942b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_4942bc:
    // 0x4942bc: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x4942bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4942c0:
    // 0x4942c0: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x4942c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_4942c4:
    // 0x4942c4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x4942c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4942c8:
    // 0x4942c8: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x4942c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_4942cc:
    // 0x4942cc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x4942ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4942d0:
    // 0x4942d0: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x4942d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_4942d4:
    // 0x4942d4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4942d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4942d8:
    // 0x4942d8: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x4942d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_4942dc:
    // 0x4942dc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4942dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4942e0:
    // 0x4942e0: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x4942e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_4942e4:
    // 0x4942e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4942e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4942e8:
    // 0x4942e8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4942e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4942ec:
    // 0x4942ec: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4942ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4942f0:
    // 0x4942f0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4942f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4942f4:
    // 0x4942f4: 0x3e00008  jr          $ra
label_4942f8:
    if (ctx->pc == 0x4942F8u) {
        ctx->pc = 0x4942F8u;
            // 0x4942f8: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->pc = 0x4942FCu;
        goto label_4942fc;
    }
    ctx->pc = 0x4942F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4942F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4942F4u;
            // 0x4942f8: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4942FCu;
label_4942fc:
    // 0x4942fc: 0x0  nop
    ctx->pc = 0x4942fcu;
    // NOP
}
