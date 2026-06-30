#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00476640
// Address: 0x476640 - 0x476eb0
void sub_00476640_0x476640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00476640_0x476640");
#endif

    switch (ctx->pc) {
        case 0x476640u: goto label_476640;
        case 0x476644u: goto label_476644;
        case 0x476648u: goto label_476648;
        case 0x47664cu: goto label_47664c;
        case 0x476650u: goto label_476650;
        case 0x476654u: goto label_476654;
        case 0x476658u: goto label_476658;
        case 0x47665cu: goto label_47665c;
        case 0x476660u: goto label_476660;
        case 0x476664u: goto label_476664;
        case 0x476668u: goto label_476668;
        case 0x47666cu: goto label_47666c;
        case 0x476670u: goto label_476670;
        case 0x476674u: goto label_476674;
        case 0x476678u: goto label_476678;
        case 0x47667cu: goto label_47667c;
        case 0x476680u: goto label_476680;
        case 0x476684u: goto label_476684;
        case 0x476688u: goto label_476688;
        case 0x47668cu: goto label_47668c;
        case 0x476690u: goto label_476690;
        case 0x476694u: goto label_476694;
        case 0x476698u: goto label_476698;
        case 0x47669cu: goto label_47669c;
        case 0x4766a0u: goto label_4766a0;
        case 0x4766a4u: goto label_4766a4;
        case 0x4766a8u: goto label_4766a8;
        case 0x4766acu: goto label_4766ac;
        case 0x4766b0u: goto label_4766b0;
        case 0x4766b4u: goto label_4766b4;
        case 0x4766b8u: goto label_4766b8;
        case 0x4766bcu: goto label_4766bc;
        case 0x4766c0u: goto label_4766c0;
        case 0x4766c4u: goto label_4766c4;
        case 0x4766c8u: goto label_4766c8;
        case 0x4766ccu: goto label_4766cc;
        case 0x4766d0u: goto label_4766d0;
        case 0x4766d4u: goto label_4766d4;
        case 0x4766d8u: goto label_4766d8;
        case 0x4766dcu: goto label_4766dc;
        case 0x4766e0u: goto label_4766e0;
        case 0x4766e4u: goto label_4766e4;
        case 0x4766e8u: goto label_4766e8;
        case 0x4766ecu: goto label_4766ec;
        case 0x4766f0u: goto label_4766f0;
        case 0x4766f4u: goto label_4766f4;
        case 0x4766f8u: goto label_4766f8;
        case 0x4766fcu: goto label_4766fc;
        case 0x476700u: goto label_476700;
        case 0x476704u: goto label_476704;
        case 0x476708u: goto label_476708;
        case 0x47670cu: goto label_47670c;
        case 0x476710u: goto label_476710;
        case 0x476714u: goto label_476714;
        case 0x476718u: goto label_476718;
        case 0x47671cu: goto label_47671c;
        case 0x476720u: goto label_476720;
        case 0x476724u: goto label_476724;
        case 0x476728u: goto label_476728;
        case 0x47672cu: goto label_47672c;
        case 0x476730u: goto label_476730;
        case 0x476734u: goto label_476734;
        case 0x476738u: goto label_476738;
        case 0x47673cu: goto label_47673c;
        case 0x476740u: goto label_476740;
        case 0x476744u: goto label_476744;
        case 0x476748u: goto label_476748;
        case 0x47674cu: goto label_47674c;
        case 0x476750u: goto label_476750;
        case 0x476754u: goto label_476754;
        case 0x476758u: goto label_476758;
        case 0x47675cu: goto label_47675c;
        case 0x476760u: goto label_476760;
        case 0x476764u: goto label_476764;
        case 0x476768u: goto label_476768;
        case 0x47676cu: goto label_47676c;
        case 0x476770u: goto label_476770;
        case 0x476774u: goto label_476774;
        case 0x476778u: goto label_476778;
        case 0x47677cu: goto label_47677c;
        case 0x476780u: goto label_476780;
        case 0x476784u: goto label_476784;
        case 0x476788u: goto label_476788;
        case 0x47678cu: goto label_47678c;
        case 0x476790u: goto label_476790;
        case 0x476794u: goto label_476794;
        case 0x476798u: goto label_476798;
        case 0x47679cu: goto label_47679c;
        case 0x4767a0u: goto label_4767a0;
        case 0x4767a4u: goto label_4767a4;
        case 0x4767a8u: goto label_4767a8;
        case 0x4767acu: goto label_4767ac;
        case 0x4767b0u: goto label_4767b0;
        case 0x4767b4u: goto label_4767b4;
        case 0x4767b8u: goto label_4767b8;
        case 0x4767bcu: goto label_4767bc;
        case 0x4767c0u: goto label_4767c0;
        case 0x4767c4u: goto label_4767c4;
        case 0x4767c8u: goto label_4767c8;
        case 0x4767ccu: goto label_4767cc;
        case 0x4767d0u: goto label_4767d0;
        case 0x4767d4u: goto label_4767d4;
        case 0x4767d8u: goto label_4767d8;
        case 0x4767dcu: goto label_4767dc;
        case 0x4767e0u: goto label_4767e0;
        case 0x4767e4u: goto label_4767e4;
        case 0x4767e8u: goto label_4767e8;
        case 0x4767ecu: goto label_4767ec;
        case 0x4767f0u: goto label_4767f0;
        case 0x4767f4u: goto label_4767f4;
        case 0x4767f8u: goto label_4767f8;
        case 0x4767fcu: goto label_4767fc;
        case 0x476800u: goto label_476800;
        case 0x476804u: goto label_476804;
        case 0x476808u: goto label_476808;
        case 0x47680cu: goto label_47680c;
        case 0x476810u: goto label_476810;
        case 0x476814u: goto label_476814;
        case 0x476818u: goto label_476818;
        case 0x47681cu: goto label_47681c;
        case 0x476820u: goto label_476820;
        case 0x476824u: goto label_476824;
        case 0x476828u: goto label_476828;
        case 0x47682cu: goto label_47682c;
        case 0x476830u: goto label_476830;
        case 0x476834u: goto label_476834;
        case 0x476838u: goto label_476838;
        case 0x47683cu: goto label_47683c;
        case 0x476840u: goto label_476840;
        case 0x476844u: goto label_476844;
        case 0x476848u: goto label_476848;
        case 0x47684cu: goto label_47684c;
        case 0x476850u: goto label_476850;
        case 0x476854u: goto label_476854;
        case 0x476858u: goto label_476858;
        case 0x47685cu: goto label_47685c;
        case 0x476860u: goto label_476860;
        case 0x476864u: goto label_476864;
        case 0x476868u: goto label_476868;
        case 0x47686cu: goto label_47686c;
        case 0x476870u: goto label_476870;
        case 0x476874u: goto label_476874;
        case 0x476878u: goto label_476878;
        case 0x47687cu: goto label_47687c;
        case 0x476880u: goto label_476880;
        case 0x476884u: goto label_476884;
        case 0x476888u: goto label_476888;
        case 0x47688cu: goto label_47688c;
        case 0x476890u: goto label_476890;
        case 0x476894u: goto label_476894;
        case 0x476898u: goto label_476898;
        case 0x47689cu: goto label_47689c;
        case 0x4768a0u: goto label_4768a0;
        case 0x4768a4u: goto label_4768a4;
        case 0x4768a8u: goto label_4768a8;
        case 0x4768acu: goto label_4768ac;
        case 0x4768b0u: goto label_4768b0;
        case 0x4768b4u: goto label_4768b4;
        case 0x4768b8u: goto label_4768b8;
        case 0x4768bcu: goto label_4768bc;
        case 0x4768c0u: goto label_4768c0;
        case 0x4768c4u: goto label_4768c4;
        case 0x4768c8u: goto label_4768c8;
        case 0x4768ccu: goto label_4768cc;
        case 0x4768d0u: goto label_4768d0;
        case 0x4768d4u: goto label_4768d4;
        case 0x4768d8u: goto label_4768d8;
        case 0x4768dcu: goto label_4768dc;
        case 0x4768e0u: goto label_4768e0;
        case 0x4768e4u: goto label_4768e4;
        case 0x4768e8u: goto label_4768e8;
        case 0x4768ecu: goto label_4768ec;
        case 0x4768f0u: goto label_4768f0;
        case 0x4768f4u: goto label_4768f4;
        case 0x4768f8u: goto label_4768f8;
        case 0x4768fcu: goto label_4768fc;
        case 0x476900u: goto label_476900;
        case 0x476904u: goto label_476904;
        case 0x476908u: goto label_476908;
        case 0x47690cu: goto label_47690c;
        case 0x476910u: goto label_476910;
        case 0x476914u: goto label_476914;
        case 0x476918u: goto label_476918;
        case 0x47691cu: goto label_47691c;
        case 0x476920u: goto label_476920;
        case 0x476924u: goto label_476924;
        case 0x476928u: goto label_476928;
        case 0x47692cu: goto label_47692c;
        case 0x476930u: goto label_476930;
        case 0x476934u: goto label_476934;
        case 0x476938u: goto label_476938;
        case 0x47693cu: goto label_47693c;
        case 0x476940u: goto label_476940;
        case 0x476944u: goto label_476944;
        case 0x476948u: goto label_476948;
        case 0x47694cu: goto label_47694c;
        case 0x476950u: goto label_476950;
        case 0x476954u: goto label_476954;
        case 0x476958u: goto label_476958;
        case 0x47695cu: goto label_47695c;
        case 0x476960u: goto label_476960;
        case 0x476964u: goto label_476964;
        case 0x476968u: goto label_476968;
        case 0x47696cu: goto label_47696c;
        case 0x476970u: goto label_476970;
        case 0x476974u: goto label_476974;
        case 0x476978u: goto label_476978;
        case 0x47697cu: goto label_47697c;
        case 0x476980u: goto label_476980;
        case 0x476984u: goto label_476984;
        case 0x476988u: goto label_476988;
        case 0x47698cu: goto label_47698c;
        case 0x476990u: goto label_476990;
        case 0x476994u: goto label_476994;
        case 0x476998u: goto label_476998;
        case 0x47699cu: goto label_47699c;
        case 0x4769a0u: goto label_4769a0;
        case 0x4769a4u: goto label_4769a4;
        case 0x4769a8u: goto label_4769a8;
        case 0x4769acu: goto label_4769ac;
        case 0x4769b0u: goto label_4769b0;
        case 0x4769b4u: goto label_4769b4;
        case 0x4769b8u: goto label_4769b8;
        case 0x4769bcu: goto label_4769bc;
        case 0x4769c0u: goto label_4769c0;
        case 0x4769c4u: goto label_4769c4;
        case 0x4769c8u: goto label_4769c8;
        case 0x4769ccu: goto label_4769cc;
        case 0x4769d0u: goto label_4769d0;
        case 0x4769d4u: goto label_4769d4;
        case 0x4769d8u: goto label_4769d8;
        case 0x4769dcu: goto label_4769dc;
        case 0x4769e0u: goto label_4769e0;
        case 0x4769e4u: goto label_4769e4;
        case 0x4769e8u: goto label_4769e8;
        case 0x4769ecu: goto label_4769ec;
        case 0x4769f0u: goto label_4769f0;
        case 0x4769f4u: goto label_4769f4;
        case 0x4769f8u: goto label_4769f8;
        case 0x4769fcu: goto label_4769fc;
        case 0x476a00u: goto label_476a00;
        case 0x476a04u: goto label_476a04;
        case 0x476a08u: goto label_476a08;
        case 0x476a0cu: goto label_476a0c;
        case 0x476a10u: goto label_476a10;
        case 0x476a14u: goto label_476a14;
        case 0x476a18u: goto label_476a18;
        case 0x476a1cu: goto label_476a1c;
        case 0x476a20u: goto label_476a20;
        case 0x476a24u: goto label_476a24;
        case 0x476a28u: goto label_476a28;
        case 0x476a2cu: goto label_476a2c;
        case 0x476a30u: goto label_476a30;
        case 0x476a34u: goto label_476a34;
        case 0x476a38u: goto label_476a38;
        case 0x476a3cu: goto label_476a3c;
        case 0x476a40u: goto label_476a40;
        case 0x476a44u: goto label_476a44;
        case 0x476a48u: goto label_476a48;
        case 0x476a4cu: goto label_476a4c;
        case 0x476a50u: goto label_476a50;
        case 0x476a54u: goto label_476a54;
        case 0x476a58u: goto label_476a58;
        case 0x476a5cu: goto label_476a5c;
        case 0x476a60u: goto label_476a60;
        case 0x476a64u: goto label_476a64;
        case 0x476a68u: goto label_476a68;
        case 0x476a6cu: goto label_476a6c;
        case 0x476a70u: goto label_476a70;
        case 0x476a74u: goto label_476a74;
        case 0x476a78u: goto label_476a78;
        case 0x476a7cu: goto label_476a7c;
        case 0x476a80u: goto label_476a80;
        case 0x476a84u: goto label_476a84;
        case 0x476a88u: goto label_476a88;
        case 0x476a8cu: goto label_476a8c;
        case 0x476a90u: goto label_476a90;
        case 0x476a94u: goto label_476a94;
        case 0x476a98u: goto label_476a98;
        case 0x476a9cu: goto label_476a9c;
        case 0x476aa0u: goto label_476aa0;
        case 0x476aa4u: goto label_476aa4;
        case 0x476aa8u: goto label_476aa8;
        case 0x476aacu: goto label_476aac;
        case 0x476ab0u: goto label_476ab0;
        case 0x476ab4u: goto label_476ab4;
        case 0x476ab8u: goto label_476ab8;
        case 0x476abcu: goto label_476abc;
        case 0x476ac0u: goto label_476ac0;
        case 0x476ac4u: goto label_476ac4;
        case 0x476ac8u: goto label_476ac8;
        case 0x476accu: goto label_476acc;
        case 0x476ad0u: goto label_476ad0;
        case 0x476ad4u: goto label_476ad4;
        case 0x476ad8u: goto label_476ad8;
        case 0x476adcu: goto label_476adc;
        case 0x476ae0u: goto label_476ae0;
        case 0x476ae4u: goto label_476ae4;
        case 0x476ae8u: goto label_476ae8;
        case 0x476aecu: goto label_476aec;
        case 0x476af0u: goto label_476af0;
        case 0x476af4u: goto label_476af4;
        case 0x476af8u: goto label_476af8;
        case 0x476afcu: goto label_476afc;
        case 0x476b00u: goto label_476b00;
        case 0x476b04u: goto label_476b04;
        case 0x476b08u: goto label_476b08;
        case 0x476b0cu: goto label_476b0c;
        case 0x476b10u: goto label_476b10;
        case 0x476b14u: goto label_476b14;
        case 0x476b18u: goto label_476b18;
        case 0x476b1cu: goto label_476b1c;
        case 0x476b20u: goto label_476b20;
        case 0x476b24u: goto label_476b24;
        case 0x476b28u: goto label_476b28;
        case 0x476b2cu: goto label_476b2c;
        case 0x476b30u: goto label_476b30;
        case 0x476b34u: goto label_476b34;
        case 0x476b38u: goto label_476b38;
        case 0x476b3cu: goto label_476b3c;
        case 0x476b40u: goto label_476b40;
        case 0x476b44u: goto label_476b44;
        case 0x476b48u: goto label_476b48;
        case 0x476b4cu: goto label_476b4c;
        case 0x476b50u: goto label_476b50;
        case 0x476b54u: goto label_476b54;
        case 0x476b58u: goto label_476b58;
        case 0x476b5cu: goto label_476b5c;
        case 0x476b60u: goto label_476b60;
        case 0x476b64u: goto label_476b64;
        case 0x476b68u: goto label_476b68;
        case 0x476b6cu: goto label_476b6c;
        case 0x476b70u: goto label_476b70;
        case 0x476b74u: goto label_476b74;
        case 0x476b78u: goto label_476b78;
        case 0x476b7cu: goto label_476b7c;
        case 0x476b80u: goto label_476b80;
        case 0x476b84u: goto label_476b84;
        case 0x476b88u: goto label_476b88;
        case 0x476b8cu: goto label_476b8c;
        case 0x476b90u: goto label_476b90;
        case 0x476b94u: goto label_476b94;
        case 0x476b98u: goto label_476b98;
        case 0x476b9cu: goto label_476b9c;
        case 0x476ba0u: goto label_476ba0;
        case 0x476ba4u: goto label_476ba4;
        case 0x476ba8u: goto label_476ba8;
        case 0x476bacu: goto label_476bac;
        case 0x476bb0u: goto label_476bb0;
        case 0x476bb4u: goto label_476bb4;
        case 0x476bb8u: goto label_476bb8;
        case 0x476bbcu: goto label_476bbc;
        case 0x476bc0u: goto label_476bc0;
        case 0x476bc4u: goto label_476bc4;
        case 0x476bc8u: goto label_476bc8;
        case 0x476bccu: goto label_476bcc;
        case 0x476bd0u: goto label_476bd0;
        case 0x476bd4u: goto label_476bd4;
        case 0x476bd8u: goto label_476bd8;
        case 0x476bdcu: goto label_476bdc;
        case 0x476be0u: goto label_476be0;
        case 0x476be4u: goto label_476be4;
        case 0x476be8u: goto label_476be8;
        case 0x476becu: goto label_476bec;
        case 0x476bf0u: goto label_476bf0;
        case 0x476bf4u: goto label_476bf4;
        case 0x476bf8u: goto label_476bf8;
        case 0x476bfcu: goto label_476bfc;
        case 0x476c00u: goto label_476c00;
        case 0x476c04u: goto label_476c04;
        case 0x476c08u: goto label_476c08;
        case 0x476c0cu: goto label_476c0c;
        case 0x476c10u: goto label_476c10;
        case 0x476c14u: goto label_476c14;
        case 0x476c18u: goto label_476c18;
        case 0x476c1cu: goto label_476c1c;
        case 0x476c20u: goto label_476c20;
        case 0x476c24u: goto label_476c24;
        case 0x476c28u: goto label_476c28;
        case 0x476c2cu: goto label_476c2c;
        case 0x476c30u: goto label_476c30;
        case 0x476c34u: goto label_476c34;
        case 0x476c38u: goto label_476c38;
        case 0x476c3cu: goto label_476c3c;
        case 0x476c40u: goto label_476c40;
        case 0x476c44u: goto label_476c44;
        case 0x476c48u: goto label_476c48;
        case 0x476c4cu: goto label_476c4c;
        case 0x476c50u: goto label_476c50;
        case 0x476c54u: goto label_476c54;
        case 0x476c58u: goto label_476c58;
        case 0x476c5cu: goto label_476c5c;
        case 0x476c60u: goto label_476c60;
        case 0x476c64u: goto label_476c64;
        case 0x476c68u: goto label_476c68;
        case 0x476c6cu: goto label_476c6c;
        case 0x476c70u: goto label_476c70;
        case 0x476c74u: goto label_476c74;
        case 0x476c78u: goto label_476c78;
        case 0x476c7cu: goto label_476c7c;
        case 0x476c80u: goto label_476c80;
        case 0x476c84u: goto label_476c84;
        case 0x476c88u: goto label_476c88;
        case 0x476c8cu: goto label_476c8c;
        case 0x476c90u: goto label_476c90;
        case 0x476c94u: goto label_476c94;
        case 0x476c98u: goto label_476c98;
        case 0x476c9cu: goto label_476c9c;
        case 0x476ca0u: goto label_476ca0;
        case 0x476ca4u: goto label_476ca4;
        case 0x476ca8u: goto label_476ca8;
        case 0x476cacu: goto label_476cac;
        case 0x476cb0u: goto label_476cb0;
        case 0x476cb4u: goto label_476cb4;
        case 0x476cb8u: goto label_476cb8;
        case 0x476cbcu: goto label_476cbc;
        case 0x476cc0u: goto label_476cc0;
        case 0x476cc4u: goto label_476cc4;
        case 0x476cc8u: goto label_476cc8;
        case 0x476cccu: goto label_476ccc;
        case 0x476cd0u: goto label_476cd0;
        case 0x476cd4u: goto label_476cd4;
        case 0x476cd8u: goto label_476cd8;
        case 0x476cdcu: goto label_476cdc;
        case 0x476ce0u: goto label_476ce0;
        case 0x476ce4u: goto label_476ce4;
        case 0x476ce8u: goto label_476ce8;
        case 0x476cecu: goto label_476cec;
        case 0x476cf0u: goto label_476cf0;
        case 0x476cf4u: goto label_476cf4;
        case 0x476cf8u: goto label_476cf8;
        case 0x476cfcu: goto label_476cfc;
        case 0x476d00u: goto label_476d00;
        case 0x476d04u: goto label_476d04;
        case 0x476d08u: goto label_476d08;
        case 0x476d0cu: goto label_476d0c;
        case 0x476d10u: goto label_476d10;
        case 0x476d14u: goto label_476d14;
        case 0x476d18u: goto label_476d18;
        case 0x476d1cu: goto label_476d1c;
        case 0x476d20u: goto label_476d20;
        case 0x476d24u: goto label_476d24;
        case 0x476d28u: goto label_476d28;
        case 0x476d2cu: goto label_476d2c;
        case 0x476d30u: goto label_476d30;
        case 0x476d34u: goto label_476d34;
        case 0x476d38u: goto label_476d38;
        case 0x476d3cu: goto label_476d3c;
        case 0x476d40u: goto label_476d40;
        case 0x476d44u: goto label_476d44;
        case 0x476d48u: goto label_476d48;
        case 0x476d4cu: goto label_476d4c;
        case 0x476d50u: goto label_476d50;
        case 0x476d54u: goto label_476d54;
        case 0x476d58u: goto label_476d58;
        case 0x476d5cu: goto label_476d5c;
        case 0x476d60u: goto label_476d60;
        case 0x476d64u: goto label_476d64;
        case 0x476d68u: goto label_476d68;
        case 0x476d6cu: goto label_476d6c;
        case 0x476d70u: goto label_476d70;
        case 0x476d74u: goto label_476d74;
        case 0x476d78u: goto label_476d78;
        case 0x476d7cu: goto label_476d7c;
        case 0x476d80u: goto label_476d80;
        case 0x476d84u: goto label_476d84;
        case 0x476d88u: goto label_476d88;
        case 0x476d8cu: goto label_476d8c;
        case 0x476d90u: goto label_476d90;
        case 0x476d94u: goto label_476d94;
        case 0x476d98u: goto label_476d98;
        case 0x476d9cu: goto label_476d9c;
        case 0x476da0u: goto label_476da0;
        case 0x476da4u: goto label_476da4;
        case 0x476da8u: goto label_476da8;
        case 0x476dacu: goto label_476dac;
        case 0x476db0u: goto label_476db0;
        case 0x476db4u: goto label_476db4;
        case 0x476db8u: goto label_476db8;
        case 0x476dbcu: goto label_476dbc;
        case 0x476dc0u: goto label_476dc0;
        case 0x476dc4u: goto label_476dc4;
        case 0x476dc8u: goto label_476dc8;
        case 0x476dccu: goto label_476dcc;
        case 0x476dd0u: goto label_476dd0;
        case 0x476dd4u: goto label_476dd4;
        case 0x476dd8u: goto label_476dd8;
        case 0x476ddcu: goto label_476ddc;
        case 0x476de0u: goto label_476de0;
        case 0x476de4u: goto label_476de4;
        case 0x476de8u: goto label_476de8;
        case 0x476decu: goto label_476dec;
        case 0x476df0u: goto label_476df0;
        case 0x476df4u: goto label_476df4;
        case 0x476df8u: goto label_476df8;
        case 0x476dfcu: goto label_476dfc;
        case 0x476e00u: goto label_476e00;
        case 0x476e04u: goto label_476e04;
        case 0x476e08u: goto label_476e08;
        case 0x476e0cu: goto label_476e0c;
        case 0x476e10u: goto label_476e10;
        case 0x476e14u: goto label_476e14;
        case 0x476e18u: goto label_476e18;
        case 0x476e1cu: goto label_476e1c;
        case 0x476e20u: goto label_476e20;
        case 0x476e24u: goto label_476e24;
        case 0x476e28u: goto label_476e28;
        case 0x476e2cu: goto label_476e2c;
        case 0x476e30u: goto label_476e30;
        case 0x476e34u: goto label_476e34;
        case 0x476e38u: goto label_476e38;
        case 0x476e3cu: goto label_476e3c;
        case 0x476e40u: goto label_476e40;
        case 0x476e44u: goto label_476e44;
        case 0x476e48u: goto label_476e48;
        case 0x476e4cu: goto label_476e4c;
        case 0x476e50u: goto label_476e50;
        case 0x476e54u: goto label_476e54;
        case 0x476e58u: goto label_476e58;
        case 0x476e5cu: goto label_476e5c;
        case 0x476e60u: goto label_476e60;
        case 0x476e64u: goto label_476e64;
        case 0x476e68u: goto label_476e68;
        case 0x476e6cu: goto label_476e6c;
        case 0x476e70u: goto label_476e70;
        case 0x476e74u: goto label_476e74;
        case 0x476e78u: goto label_476e78;
        case 0x476e7cu: goto label_476e7c;
        case 0x476e80u: goto label_476e80;
        case 0x476e84u: goto label_476e84;
        case 0x476e88u: goto label_476e88;
        case 0x476e8cu: goto label_476e8c;
        case 0x476e90u: goto label_476e90;
        case 0x476e94u: goto label_476e94;
        case 0x476e98u: goto label_476e98;
        case 0x476e9cu: goto label_476e9c;
        case 0x476ea0u: goto label_476ea0;
        case 0x476ea4u: goto label_476ea4;
        case 0x476ea8u: goto label_476ea8;
        case 0x476eacu: goto label_476eac;
        default: break;
    }

    ctx->pc = 0x476640u;

label_476640:
    // 0x476640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x476640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_476644:
    // 0x476644: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x476644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_476648:
    // 0x476648: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x476648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47664c:
    // 0x47664c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47664cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_476650:
    // 0x476650: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x476650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_476654:
    // 0x476654: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x476654u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_476658:
    // 0x476658: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x476658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_47665c:
    // 0x47665c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x47665cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_476660:
    // 0x476660: 0x320f809  jalr        $t9
label_476664:
    if (ctx->pc == 0x476664u) {
        ctx->pc = 0x476664u;
            // 0x476664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x476668u;
        goto label_476668;
    }
    ctx->pc = 0x476660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x476668u);
        ctx->pc = 0x476664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476660u;
            // 0x476664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x476668u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x476668u; }
            if (ctx->pc != 0x476668u) { return; }
        }
        }
    }
    ctx->pc = 0x476668u;
label_476668:
    // 0x476668: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x476668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_47666c:
    // 0x47666c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x47666cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_476670:
    // 0x476670: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x476670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_476674:
    // 0x476674: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x476674u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_476678:
    // 0x476678: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x476678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_47667c:
    // 0x47667c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x47667cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_476680:
    // 0x476680: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x476680u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_476684:
    // 0x476684: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x476684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_476688:
    // 0x476688: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x476688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47668c:
    // 0x47668c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47668cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_476690:
    // 0x476690: 0x3e00008  jr          $ra
label_476694:
    if (ctx->pc == 0x476694u) {
        ctx->pc = 0x476694u;
            // 0x476694: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x476698u;
        goto label_476698;
    }
    ctx->pc = 0x476690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x476694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476690u;
            // 0x476694: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x476698u;
label_476698:
    // 0x476698: 0x0  nop
    ctx->pc = 0x476698u;
    // NOP
label_47669c:
    // 0x47669c: 0x0  nop
    ctx->pc = 0x47669cu;
    // NOP
label_4766a0:
    // 0x4766a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4766a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4766a4:
    // 0x4766a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4766a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4766a8:
    // 0x4766a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4766a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4766ac:
    // 0x4766ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4766acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4766b0:
    // 0x4766b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4766b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4766b4:
    // 0x4766b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4766b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4766b8:
    // 0x4766b8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4766b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4766bc:
    // 0x4766bc: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_4766c0:
    if (ctx->pc == 0x4766C0u) {
        ctx->pc = 0x4766C0u;
            // 0x4766c0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4766C4u;
        goto label_4766c4;
    }
    ctx->pc = 0x4766BCu;
    {
        const bool branch_taken_0x4766bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4766C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4766BCu;
            // 0x4766c0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4766bc) {
            ctx->pc = 0x476728u;
            goto label_476728;
        }
    }
    ctx->pc = 0x4766C4u;
label_4766c4:
    // 0x4766c4: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x4766c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4766c8:
    // 0x4766c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4766c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4766cc:
    // 0x4766cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4766ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4766d0:
    // 0x4766d0: 0x54500012  bnel        $v0, $s0, . + 4 + (0x12 << 2)
label_4766d4:
    if (ctx->pc == 0x4766D4u) {
        ctx->pc = 0x4766D4u;
            // 0x4766d4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x4766D8u;
        goto label_4766d8;
    }
    ctx->pc = 0x4766D0u;
    {
        const bool branch_taken_0x4766d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x4766d0) {
            ctx->pc = 0x4766D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4766D0u;
            // 0x4766d4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47671Cu;
            goto label_47671c;
        }
    }
    ctx->pc = 0x4766D8u;
label_4766d8:
    // 0x4766d8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x4766d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4766dc:
    // 0x4766dc: 0xc2082b  sltu        $at, $a2, $v0
    ctx->pc = 0x4766dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4766e0:
    // 0x4766e0: 0x5020000b  beql        $at, $zero, . + 4 + (0xB << 2)
label_4766e4:
    if (ctx->pc == 0x4766E4u) {
        ctx->pc = 0x4766E4u;
            // 0x4766e4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x4766E8u;
        goto label_4766e8;
    }
    ctx->pc = 0x4766E0u;
    {
        const bool branch_taken_0x4766e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4766e0) {
            ctx->pc = 0x4766E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4766E0u;
            // 0x4766e4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x476710u;
            goto label_476710;
        }
    }
    ctx->pc = 0x4766E8u;
label_4766e8:
    // 0x4766e8: 0x661023  subu        $v0, $v1, $a2
    ctx->pc = 0x4766e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_4766ec:
    // 0x4766ec: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x4766ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4766f0:
    // 0x4766f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4766f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4766f4:
    // 0x4766f4: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x4766f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_4766f8:
    // 0x4766f8: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x4766f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4766fc:
    // 0x4766fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4766fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_476700:
    // 0x476700: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x476700u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_476704:
    // 0x476704: 0xc04a508  jal         func_129420
label_476708:
    if (ctx->pc == 0x476708u) {
        ctx->pc = 0x476708u;
            // 0x476708: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->pc = 0x47670Cu;
        goto label_47670c;
    }
    ctx->pc = 0x476704u;
    SET_GPR_U32(ctx, 31, 0x47670Cu);
    ctx->pc = 0x476708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476704u;
            // 0x476708: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47670Cu; }
        if (ctx->pc != 0x47670Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47670Cu; }
        if (ctx->pc != 0x47670Cu) { return; }
    }
    ctx->pc = 0x47670Cu;
label_47670c:
    // 0x47670c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x47670cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_476710:
    // 0x476710: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x476710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_476714:
    // 0x476714: 0x10000004  b           . + 4 + (0x4 << 2)
label_476718:
    if (ctx->pc == 0x476718u) {
        ctx->pc = 0x476718u;
            // 0x476718: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x47671Cu;
        goto label_47671c;
    }
    ctx->pc = 0x476714u;
    {
        const bool branch_taken_0x476714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x476718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476714u;
            // 0x476718: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476714) {
            ctx->pc = 0x476728u;
            goto label_476728;
        }
    }
    ctx->pc = 0x47671Cu;
label_47671c:
    // 0x47671c: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x47671cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_476720:
    // 0x476720: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_476724:
    if (ctx->pc == 0x476724u) {
        ctx->pc = 0x476724u;
            // 0x476724: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x476728u;
        goto label_476728;
    }
    ctx->pc = 0x476720u;
    {
        const bool branch_taken_0x476720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x476724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476720u;
            // 0x476724: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476720) {
            ctx->pc = 0x4766CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4766cc;
        }
    }
    ctx->pc = 0x476728u;
label_476728:
    // 0x476728: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x476728u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47672c:
    // 0x47672c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x47672cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_476730:
    // 0x476730: 0x320f809  jalr        $t9
label_476734:
    if (ctx->pc == 0x476734u) {
        ctx->pc = 0x476734u;
            // 0x476734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x476738u;
        goto label_476738;
    }
    ctx->pc = 0x476730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x476738u);
        ctx->pc = 0x476734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476730u;
            // 0x476734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x476738u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x476738u; }
            if (ctx->pc != 0x476738u) { return; }
        }
        }
    }
    ctx->pc = 0x476738u;
label_476738:
    // 0x476738: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x476738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_47673c:
    // 0x47673c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x47673cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_476740:
    // 0x476740: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x476740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_476744:
    // 0x476744: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x476744u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_476748:
    // 0x476748: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x476748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_47674c:
    // 0x47674c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x47674cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_476750:
    // 0x476750: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x476750u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_476754:
    // 0x476754: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x476754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_476758:
    // 0x476758: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x476758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47675c:
    // 0x47675c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47675cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_476760:
    // 0x476760: 0x3e00008  jr          $ra
label_476764:
    if (ctx->pc == 0x476764u) {
        ctx->pc = 0x476764u;
            // 0x476764: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x476768u;
        goto label_476768;
    }
    ctx->pc = 0x476760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x476764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476760u;
            // 0x476764: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x476768u;
label_476768:
    // 0x476768: 0x0  nop
    ctx->pc = 0x476768u;
    // NOP
label_47676c:
    // 0x47676c: 0x0  nop
    ctx->pc = 0x47676cu;
    // NOP
label_476770:
    // 0x476770: 0x811ce80  j           func_473A00
label_476774:
    if (ctx->pc == 0x476774u) {
        ctx->pc = 0x476774u;
            // 0x476774: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x476778u;
        goto label_476778;
    }
    ctx->pc = 0x476770u;
    ctx->pc = 0x476774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476770u;
            // 0x476774: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x473A00u;
    {
        auto targetFn = runtime->lookupFunction(0x473A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x476778u;
label_476778:
    // 0x476778: 0x0  nop
    ctx->pc = 0x476778u;
    // NOP
label_47677c:
    // 0x47677c: 0x0  nop
    ctx->pc = 0x47677cu;
    // NOP
label_476780:
    // 0x476780: 0x811d1c4  j           func_474710
label_476784:
    if (ctx->pc == 0x476784u) {
        ctx->pc = 0x476784u;
            // 0x476784: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x476788u;
        goto label_476788;
    }
    ctx->pc = 0x476780u;
    ctx->pc = 0x476784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476780u;
            // 0x476784: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x474710u;
    {
        auto targetFn = runtime->lookupFunction(0x474710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x476788u;
label_476788:
    // 0x476788: 0x0  nop
    ctx->pc = 0x476788u;
    // NOP
label_47678c:
    // 0x47678c: 0x0  nop
    ctx->pc = 0x47678cu;
    // NOP
label_476790:
    // 0x476790: 0x811ce28  j           func_4738A0
label_476794:
    if (ctx->pc == 0x476794u) {
        ctx->pc = 0x476794u;
            // 0x476794: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x476798u;
        goto label_476798;
    }
    ctx->pc = 0x476790u;
    ctx->pc = 0x476794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476790u;
            // 0x476794: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4738A0u;
    if (runtime->hasFunction(0x4738A0u)) {
        auto targetFn = runtime->lookupFunction(0x4738A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004738A0_0x4738a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x476798u;
label_476798:
    // 0x476798: 0x0  nop
    ctx->pc = 0x476798u;
    // NOP
label_47679c:
    // 0x47679c: 0x0  nop
    ctx->pc = 0x47679cu;
    // NOP
label_4767a0:
    // 0x4767a0: 0x811ce04  j           func_473810
label_4767a4:
    if (ctx->pc == 0x4767A4u) {
        ctx->pc = 0x4767A4u;
            // 0x4767a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4767A8u;
        goto label_4767a8;
    }
    ctx->pc = 0x4767A0u;
    ctx->pc = 0x4767A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4767A0u;
            // 0x4767a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x473810u;
    {
        auto targetFn = runtime->lookupFunction(0x473810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4767A8u;
label_4767a8:
    // 0x4767a8: 0x0  nop
    ctx->pc = 0x4767a8u;
    // NOP
label_4767ac:
    // 0x4767ac: 0x0  nop
    ctx->pc = 0x4767acu;
    // NOP
label_4767b0:
    // 0x4767b0: 0x8c850088  lw          $a1, 0x88($a0)
    ctx->pc = 0x4767b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_4767b4:
    // 0x4767b4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4767b8:
    if (ctx->pc == 0x4767B8u) {
        ctx->pc = 0x4767B8u;
            // 0x4767b8: 0x8c830084  lw          $v1, 0x84($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
        ctx->pc = 0x4767BCu;
        goto label_4767bc;
    }
    ctx->pc = 0x4767B4u;
    {
        const bool branch_taken_0x4767b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4767B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4767B4u;
            // 0x4767b8: 0x8c830084  lw          $v1, 0x84($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4767b4) {
            ctx->pc = 0x4767D8u;
            goto label_4767d8;
        }
    }
    ctx->pc = 0x4767BCu;
label_4767bc:
    // 0x4767bc: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x4767bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
label_4767c0:
    // 0x4767c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4767c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4767c4:
    // 0x4767c4: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x4767c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_4767c8:
    // 0x4767c8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x4767c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_4767cc:
    // 0x4767cc: 0x0  nop
    ctx->pc = 0x4767ccu;
    // NOP
label_4767d0:
    // 0x4767d0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_4767d4:
    if (ctx->pc == 0x4767D4u) {
        ctx->pc = 0x4767D8u;
        goto label_4767d8;
    }
    ctx->pc = 0x4767D0u;
    {
        const bool branch_taken_0x4767d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4767d0) {
            ctx->pc = 0x4767BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4767bc;
        }
    }
    ctx->pc = 0x4767D8u;
label_4767d8:
    // 0x4767d8: 0x3e00008  jr          $ra
label_4767dc:
    if (ctx->pc == 0x4767DCu) {
        ctx->pc = 0x4767E0u;
        goto label_4767e0;
    }
    ctx->pc = 0x4767D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4767E0u;
label_4767e0:
    // 0x4767e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4767e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4767e4:
    // 0x4767e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4767e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4767e8:
    // 0x4767e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4767e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4767ec:
    // 0x4767ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4767ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4767f0:
    // 0x4767f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4767f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4767f4:
    // 0x4767f4: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_4767f8:
    if (ctx->pc == 0x4767F8u) {
        ctx->pc = 0x4767F8u;
            // 0x4767f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4767FCu;
        goto label_4767fc;
    }
    ctx->pc = 0x4767F4u;
    {
        const bool branch_taken_0x4767f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4767F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4767F4u;
            // 0x4767f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4767f4) {
            ctx->pc = 0x476860u;
            goto label_476860;
        }
    }
    ctx->pc = 0x4767FCu;
label_4767fc:
    // 0x4767fc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4767fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_476800:
    // 0x476800: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x476800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_476804:
    // 0x476804: 0x2463eb80  addiu       $v1, $v1, -0x1480
    ctx->pc = 0x476804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962048));
label_476808:
    // 0x476808: 0x2442ebb8  addiu       $v0, $v0, -0x1448
    ctx->pc = 0x476808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962104));
label_47680c:
    // 0x47680c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x47680cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_476810:
    // 0x476810: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_476814:
    if (ctx->pc == 0x476814u) {
        ctx->pc = 0x476814u;
            // 0x476814: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x476818u;
        goto label_476818;
    }
    ctx->pc = 0x476810u;
    {
        const bool branch_taken_0x476810 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x476814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476810u;
            // 0x476814: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476810) {
            ctx->pc = 0x476848u;
            goto label_476848;
        }
    }
    ctx->pc = 0x476818u;
label_476818:
    // 0x476818: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x476818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_47681c:
    // 0x47681c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x47681cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_476820:
    // 0x476820: 0x246308e0  addiu       $v1, $v1, 0x8E0
    ctx->pc = 0x476820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2272));
label_476824:
    // 0x476824: 0x24420918  addiu       $v0, $v0, 0x918
    ctx->pc = 0x476824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2328));
label_476828:
    // 0x476828: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x476828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_47682c:
    // 0x47682c: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x47682cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_476830:
    // 0x476830: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x476830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_476834:
    // 0x476834: 0xc0aed1c  jal         func_2BB470
label_476838:
    if (ctx->pc == 0x476838u) {
        ctx->pc = 0x476838u;
            // 0x476838: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47683Cu;
        goto label_47683c;
    }
    ctx->pc = 0x476834u;
    SET_GPR_U32(ctx, 31, 0x47683Cu);
    ctx->pc = 0x476838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476834u;
            // 0x476838: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB470u;
    if (runtime->hasFunction(0x2BB470u)) {
        auto targetFn = runtime->lookupFunction(0x2BB470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47683Cu; }
        if (ctx->pc != 0x47683Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB470_0x2bb470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47683Cu; }
        if (ctx->pc != 0x47683Cu) { return; }
    }
    ctx->pc = 0x47683Cu;
label_47683c:
    // 0x47683c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47683cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_476840:
    // 0x476840: 0xc0b1ec8  jal         func_2C7B20
label_476844:
    if (ctx->pc == 0x476844u) {
        ctx->pc = 0x476844u;
            // 0x476844: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x476848u;
        goto label_476848;
    }
    ctx->pc = 0x476840u;
    SET_GPR_U32(ctx, 31, 0x476848u);
    ctx->pc = 0x476844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476840u;
            // 0x476844: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7B20u;
    if (runtime->hasFunction(0x2C7B20u)) {
        auto targetFn = runtime->lookupFunction(0x2C7B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476848u; }
        if (ctx->pc != 0x476848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C7B20_0x2c7b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476848u; }
        if (ctx->pc != 0x476848u) { return; }
    }
    ctx->pc = 0x476848u;
label_476848:
    // 0x476848: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x476848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_47684c:
    // 0x47684c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x47684cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_476850:
    // 0x476850: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_476854:
    if (ctx->pc == 0x476854u) {
        ctx->pc = 0x476854u;
            // 0x476854: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x476858u;
        goto label_476858;
    }
    ctx->pc = 0x476850u;
    {
        const bool branch_taken_0x476850 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x476850) {
            ctx->pc = 0x476854u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x476850u;
            // 0x476854: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x476864u;
            goto label_476864;
        }
    }
    ctx->pc = 0x476858u;
label_476858:
    // 0x476858: 0xc0400a8  jal         func_1002A0
label_47685c:
    if (ctx->pc == 0x47685Cu) {
        ctx->pc = 0x47685Cu;
            // 0x47685c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x476860u;
        goto label_476860;
    }
    ctx->pc = 0x476858u;
    SET_GPR_U32(ctx, 31, 0x476860u);
    ctx->pc = 0x47685Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476858u;
            // 0x47685c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476860u; }
        if (ctx->pc != 0x476860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476860u; }
        if (ctx->pc != 0x476860u) { return; }
    }
    ctx->pc = 0x476860u;
label_476860:
    // 0x476860: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x476860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_476864:
    // 0x476864: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x476864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_476868:
    // 0x476868: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x476868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47686c:
    // 0x47686c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47686cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_476870:
    // 0x476870: 0x3e00008  jr          $ra
label_476874:
    if (ctx->pc == 0x476874u) {
        ctx->pc = 0x476874u;
            // 0x476874: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x476878u;
        goto label_476878;
    }
    ctx->pc = 0x476870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x476874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476870u;
            // 0x476874: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x476878u;
label_476878:
    // 0x476878: 0x0  nop
    ctx->pc = 0x476878u;
    // NOP
label_47687c:
    // 0x47687c: 0x0  nop
    ctx->pc = 0x47687cu;
    // NOP
label_476880:
    // 0x476880: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x476880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_476884:
    // 0x476884: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x476884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_476888:
    // 0x476888: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x476888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_47688c:
    // 0x47688c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x47688cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_476890:
    // 0x476890: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x476890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_476894:
    // 0x476894: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x476894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_476898:
    // 0x476898: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x476898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_47689c:
    // 0x47689c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x47689cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4768a0:
    // 0x4768a0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4768a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4768a4:
    // 0x4768a4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4768a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4768a8:
    // 0x4768a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4768a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4768ac:
    // 0x4768ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4768acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4768b0:
    // 0x4768b0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4768b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4768b4:
    // 0x4768b4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4768b4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4768b8:
    // 0x4768b8: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_4768bc:
    if (ctx->pc == 0x4768BCu) {
        ctx->pc = 0x4768BCu;
            // 0x4768bc: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4768C0u;
        goto label_4768c0;
    }
    ctx->pc = 0x4768B8u;
    {
        const bool branch_taken_0x4768b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4768BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4768B8u;
            // 0x4768bc: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4768b8) {
            ctx->pc = 0x476908u;
            goto label_476908;
        }
    }
    ctx->pc = 0x4768C0u;
label_4768c0:
    // 0x4768c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4768c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4768c4:
    // 0x4768c4: 0x10a3007e  beq         $a1, $v1, . + 4 + (0x7E << 2)
label_4768c8:
    if (ctx->pc == 0x4768C8u) {
        ctx->pc = 0x4768CCu;
        goto label_4768cc;
    }
    ctx->pc = 0x4768C4u;
    {
        const bool branch_taken_0x4768c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4768c4) {
            ctx->pc = 0x476AC0u;
            goto label_476ac0;
        }
    }
    ctx->pc = 0x4768CCu;
label_4768cc:
    // 0x4768cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4768ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4768d0:
    // 0x4768d0: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4768d4:
    if (ctx->pc == 0x4768D4u) {
        ctx->pc = 0x4768D8u;
        goto label_4768d8;
    }
    ctx->pc = 0x4768D0u;
    {
        const bool branch_taken_0x4768d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4768d0) {
            ctx->pc = 0x4768E0u;
            goto label_4768e0;
        }
    }
    ctx->pc = 0x4768D8u;
label_4768d8:
    // 0x4768d8: 0x10000079  b           . + 4 + (0x79 << 2)
label_4768dc:
    if (ctx->pc == 0x4768DCu) {
        ctx->pc = 0x4768E0u;
        goto label_4768e0;
    }
    ctx->pc = 0x4768D8u;
    {
        const bool branch_taken_0x4768d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4768d8) {
            ctx->pc = 0x476AC0u;
            goto label_476ac0;
        }
    }
    ctx->pc = 0x4768E0u;
label_4768e0:
    // 0x4768e0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4768e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4768e4:
    // 0x4768e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4768e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4768e8:
    // 0x4768e8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4768e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4768ec:
    // 0x4768ec: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4768ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4768f0:
    // 0x4768f0: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4768f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4768f4:
    // 0x4768f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4768f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4768f8:
    // 0x4768f8: 0x320f809  jalr        $t9
label_4768fc:
    if (ctx->pc == 0x4768FCu) {
        ctx->pc = 0x4768FCu;
            // 0x4768fc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x476900u;
        goto label_476900;
    }
    ctx->pc = 0x4768F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x476900u);
        ctx->pc = 0x4768FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4768F8u;
            // 0x4768fc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x476900u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x476900u; }
            if (ctx->pc != 0x476900u) { return; }
        }
        }
    }
    ctx->pc = 0x476900u;
label_476900:
    // 0x476900: 0x1000006f  b           . + 4 + (0x6F << 2)
label_476904:
    if (ctx->pc == 0x476904u) {
        ctx->pc = 0x476908u;
        goto label_476908;
    }
    ctx->pc = 0x476900u;
    {
        const bool branch_taken_0x476900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x476900) {
            ctx->pc = 0x476AC0u;
            goto label_476ac0;
        }
    }
    ctx->pc = 0x476908u;
label_476908:
    // 0x476908: 0x8fc30070  lw          $v1, 0x70($fp)
    ctx->pc = 0x476908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 112)));
label_47690c:
    // 0x47690c: 0x1060006c  beqz        $v1, . + 4 + (0x6C << 2)
label_476910:
    if (ctx->pc == 0x476910u) {
        ctx->pc = 0x476910u;
            // 0x476910: 0x7fa300c0  sq          $v1, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
        ctx->pc = 0x476914u;
        goto label_476914;
    }
    ctx->pc = 0x47690Cu;
    {
        const bool branch_taken_0x47690c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x476910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47690Cu;
            // 0x476910: 0x7fa300c0  sq          $v1, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47690c) {
            ctx->pc = 0x476AC0u;
            goto label_476ac0;
        }
    }
    ctx->pc = 0x476914u;
label_476914:
    // 0x476914: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x476914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_476918:
    // 0x476918: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x476918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_47691c:
    // 0x47691c: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x47691cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_476920:
    // 0x476920: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x476920u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_476924:
    // 0x476924: 0x8c75e378  lw          $s5, -0x1C88($v1)
    ctx->pc = 0x476924u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_476928:
    // 0x476928: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x476928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47692c:
    // 0x47692c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47692cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_476930:
    // 0x476930: 0x8c56e370  lw          $s6, -0x1C90($v0)
    ctx->pc = 0x476930u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_476934:
    // 0x476934: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x476934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_476938:
    // 0x476938: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x476938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_47693c:
    // 0x47693c: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x47693cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_476940:
    // 0x476940: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x476940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_476944:
    // 0x476944: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x476944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_476948:
    // 0x476948: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x476948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_47694c:
    // 0x47694c: 0xc454f2d0  lwc1        $f20, -0xD30($v0)
    ctx->pc = 0x47694cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_476950:
    // 0x476950: 0x8fc20088  lw          $v0, 0x88($fp)
    ctx->pc = 0x476950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 136)));
label_476954:
    // 0x476954: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x476954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_476958:
    // 0x476958: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x476958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_47695c:
    // 0x47695c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47695cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_476960:
    // 0x476960: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x476960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_476964:
    // 0x476964: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x476964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_476968:
    // 0x476968: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x476968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_47696c:
    // 0x47696c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x47696cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_476970:
    // 0x476970: 0x8fc20074  lw          $v0, 0x74($fp)
    ctx->pc = 0x476970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_476974:
    // 0x476974: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x476974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_476978:
    // 0x476978: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x476978u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_47697c:
    // 0x47697c: 0xc0d1c14  jal         func_347050
label_476980:
    if (ctx->pc == 0x476980u) {
        ctx->pc = 0x476980u;
            // 0x476980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x476984u;
        goto label_476984;
    }
    ctx->pc = 0x47697Cu;
    SET_GPR_U32(ctx, 31, 0x476984u);
    ctx->pc = 0x476980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47697Cu;
            // 0x476980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476984u; }
        if (ctx->pc != 0x476984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476984u; }
        if (ctx->pc != 0x476984u) { return; }
    }
    ctx->pc = 0x476984u;
label_476984:
    // 0x476984: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x476984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_476988:
    // 0x476988: 0xc04f278  jal         func_13C9E0
label_47698c:
    if (ctx->pc == 0x47698Cu) {
        ctx->pc = 0x47698Cu;
            // 0x47698c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x476990u;
        goto label_476990;
    }
    ctx->pc = 0x476988u;
    SET_GPR_U32(ctx, 31, 0x476990u);
    ctx->pc = 0x47698Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476988u;
            // 0x47698c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476990u; }
        if (ctx->pc != 0x476990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476990u; }
        if (ctx->pc != 0x476990u) { return; }
    }
    ctx->pc = 0x476990u;
label_476990:
    // 0x476990: 0xc0d1dc8  jal         func_347720
label_476994:
    if (ctx->pc == 0x476994u) {
        ctx->pc = 0x476994u;
            // 0x476994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x476998u;
        goto label_476998;
    }
    ctx->pc = 0x476990u;
    SET_GPR_U32(ctx, 31, 0x476998u);
    ctx->pc = 0x476994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476990u;
            // 0x476994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476998u; }
        if (ctx->pc != 0x476998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476998u; }
        if (ctx->pc != 0x476998u) { return; }
    }
    ctx->pc = 0x476998u;
label_476998:
    // 0x476998: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x476998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_47699c:
    // 0x47699c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x47699cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4769a0:
    // 0x4769a0: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x4769a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4769a4:
    // 0x4769a4: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x4769a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4769a8:
    // 0x4769a8: 0xc04ce50  jal         func_133940
label_4769ac:
    if (ctx->pc == 0x4769ACu) {
        ctx->pc = 0x4769ACu;
            // 0x4769ac: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x4769B0u;
        goto label_4769b0;
    }
    ctx->pc = 0x4769A8u;
    SET_GPR_U32(ctx, 31, 0x4769B0u);
    ctx->pc = 0x4769ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4769A8u;
            // 0x4769ac: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4769B0u; }
        if (ctx->pc != 0x4769B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4769B0u; }
        if (ctx->pc != 0x4769B0u) { return; }
    }
    ctx->pc = 0x4769B0u;
label_4769b0:
    // 0x4769b0: 0xc0d1c10  jal         func_347040
label_4769b4:
    if (ctx->pc == 0x4769B4u) {
        ctx->pc = 0x4769B4u;
            // 0x4769b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4769B8u;
        goto label_4769b8;
    }
    ctx->pc = 0x4769B0u;
    SET_GPR_U32(ctx, 31, 0x4769B8u);
    ctx->pc = 0x4769B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4769B0u;
            // 0x4769b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4769B8u; }
        if (ctx->pc != 0x4769B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4769B8u; }
        if (ctx->pc != 0x4769B8u) { return; }
    }
    ctx->pc = 0x4769B8u;
label_4769b8:
    // 0x4769b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4769b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4769bc:
    // 0x4769bc: 0xc04ce80  jal         func_133A00
label_4769c0:
    if (ctx->pc == 0x4769C0u) {
        ctx->pc = 0x4769C0u;
            // 0x4769c0: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x4769C4u;
        goto label_4769c4;
    }
    ctx->pc = 0x4769BCu;
    SET_GPR_U32(ctx, 31, 0x4769C4u);
    ctx->pc = 0x4769C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4769BCu;
            // 0x4769c0: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4769C4u; }
        if (ctx->pc != 0x4769C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4769C4u; }
        if (ctx->pc != 0x4769C4u) { return; }
    }
    ctx->pc = 0x4769C4u;
label_4769c4:
    // 0x4769c4: 0xc0d63d8  jal         func_358F60
label_4769c8:
    if (ctx->pc == 0x4769C8u) {
        ctx->pc = 0x4769C8u;
            // 0x4769c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4769CCu;
        goto label_4769cc;
    }
    ctx->pc = 0x4769C4u;
    SET_GPR_U32(ctx, 31, 0x4769CCu);
    ctx->pc = 0x4769C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4769C4u;
            // 0x4769c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358F60u;
    if (runtime->hasFunction(0x358F60u)) {
        auto targetFn = runtime->lookupFunction(0x358F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4769CCu; }
        if (ctx->pc != 0x4769CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358F60_0x358f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4769CCu; }
        if (ctx->pc != 0x4769CCu) { return; }
    }
    ctx->pc = 0x4769CCu;
label_4769cc:
    // 0x4769cc: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x4769ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_4769d0:
    // 0x4769d0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x4769d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4769d4:
    // 0x4769d4: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x4769d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4769d8:
    // 0x4769d8: 0xc0d4108  jal         func_350420
label_4769dc:
    if (ctx->pc == 0x4769DCu) {
        ctx->pc = 0x4769DCu;
            // 0x4769dc: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x4769E0u;
        goto label_4769e0;
    }
    ctx->pc = 0x4769D8u;
    SET_GPR_U32(ctx, 31, 0x4769E0u);
    ctx->pc = 0x4769DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4769D8u;
            // 0x4769dc: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4769E0u; }
        if (ctx->pc != 0x4769E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4769E0u; }
        if (ctx->pc != 0x4769E0u) { return; }
    }
    ctx->pc = 0x4769E0u;
label_4769e0:
    // 0x4769e0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4769e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4769e4:
    // 0x4769e4: 0xc0d4104  jal         func_350410
label_4769e8:
    if (ctx->pc == 0x4769E8u) {
        ctx->pc = 0x4769E8u;
            // 0x4769e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4769ECu;
        goto label_4769ec;
    }
    ctx->pc = 0x4769E4u;
    SET_GPR_U32(ctx, 31, 0x4769ECu);
    ctx->pc = 0x4769E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4769E4u;
            // 0x4769e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4769ECu; }
        if (ctx->pc != 0x4769ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4769ECu; }
        if (ctx->pc != 0x4769ECu) { return; }
    }
    ctx->pc = 0x4769ECu;
label_4769ec:
    // 0x4769ec: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x4769ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_4769f0:
    // 0x4769f0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4769f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4769f4:
    // 0x4769f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4769f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4769f8:
    // 0x4769f8: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x4769f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4769fc:
    // 0x4769fc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4769fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_476a00:
    // 0x476a00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x476a00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_476a04:
    // 0x476a04: 0xc0d40ac  jal         func_3502B0
label_476a08:
    if (ctx->pc == 0x476A08u) {
        ctx->pc = 0x476A08u;
            // 0x476a08: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x476A0Cu;
        goto label_476a0c;
    }
    ctx->pc = 0x476A04u;
    SET_GPR_U32(ctx, 31, 0x476A0Cu);
    ctx->pc = 0x476A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476A04u;
            // 0x476a08: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476A0Cu; }
        if (ctx->pc != 0x476A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476A0Cu; }
        if (ctx->pc != 0x476A0Cu) { return; }
    }
    ctx->pc = 0x476A0Cu;
label_476a0c:
    // 0x476a0c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x476a0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_476a10:
    // 0x476a10: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
label_476a14:
    if (ctx->pc == 0x476A14u) {
        ctx->pc = 0x476A14u;
            // 0x476a14: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x476A18u;
        goto label_476a18;
    }
    ctx->pc = 0x476A10u;
    {
        const bool branch_taken_0x476a10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x476A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476A10u;
            // 0x476a14: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476a10) {
            ctx->pc = 0x476AA8u;
            goto label_476aa8;
        }
    }
    ctx->pc = 0x476A18u;
label_476a18:
    // 0x476a18: 0xc04e738  jal         func_139CE0
label_476a1c:
    if (ctx->pc == 0x476A1Cu) {
        ctx->pc = 0x476A1Cu;
            // 0x476a1c: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x476A20u;
        goto label_476a20;
    }
    ctx->pc = 0x476A18u;
    SET_GPR_U32(ctx, 31, 0x476A20u);
    ctx->pc = 0x476A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476A18u;
            // 0x476a1c: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476A20u; }
        if (ctx->pc != 0x476A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476A20u; }
        if (ctx->pc != 0x476A20u) { return; }
    }
    ctx->pc = 0x476A20u;
label_476a20:
    // 0x476a20: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x476a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_476a24:
    // 0x476a24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x476a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_476a28:
    // 0x476a28: 0xc04e4a4  jal         func_139290
label_476a2c:
    if (ctx->pc == 0x476A2Cu) {
        ctx->pc = 0x476A2Cu;
            // 0x476a2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x476A30u;
        goto label_476a30;
    }
    ctx->pc = 0x476A28u;
    SET_GPR_U32(ctx, 31, 0x476A30u);
    ctx->pc = 0x476A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476A28u;
            // 0x476a2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476A30u; }
        if (ctx->pc != 0x476A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476A30u; }
        if (ctx->pc != 0x476A30u) { return; }
    }
    ctx->pc = 0x476A30u;
label_476a30:
    // 0x476a30: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x476a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_476a34:
    // 0x476a34: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x476a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_476a38:
    // 0x476a38: 0xc04cd60  jal         func_133580
label_476a3c:
    if (ctx->pc == 0x476A3Cu) {
        ctx->pc = 0x476A3Cu;
            // 0x476a3c: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x476A40u;
        goto label_476a40;
    }
    ctx->pc = 0x476A38u;
    SET_GPR_U32(ctx, 31, 0x476A40u);
    ctx->pc = 0x476A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476A38u;
            // 0x476a3c: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476A40u; }
        if (ctx->pc != 0x476A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476A40u; }
        if (ctx->pc != 0x476A40u) { return; }
    }
    ctx->pc = 0x476A40u;
label_476a40:
    // 0x476a40: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x476a40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_476a44:
    // 0x476a44: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x476a44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_476a48:
    // 0x476a48: 0x320f809  jalr        $t9
label_476a4c:
    if (ctx->pc == 0x476A4Cu) {
        ctx->pc = 0x476A4Cu;
            // 0x476a4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x476A50u;
        goto label_476a50;
    }
    ctx->pc = 0x476A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x476A50u);
        ctx->pc = 0x476A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476A48u;
            // 0x476a4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x476A50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x476A50u; }
            if (ctx->pc != 0x476A50u) { return; }
        }
        }
    }
    ctx->pc = 0x476A50u;
label_476a50:
    // 0x476a50: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x476a50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_476a54:
    // 0x476a54: 0xc66c000c  lwc1        $f12, 0xC($s3)
    ctx->pc = 0x476a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_476a58:
    // 0x476a58: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x476a58u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_476a5c:
    // 0x476a5c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x476a5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_476a60:
    // 0x476a60: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x476a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_476a64:
    // 0x476a64: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x476a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_476a68:
    // 0x476a68: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x476a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_476a6c:
    // 0x476a6c: 0x27a800f0  addiu       $t0, $sp, 0xF0
    ctx->pc = 0x476a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_476a70:
    // 0x476a70: 0xc04cff4  jal         func_133FD0
label_476a74:
    if (ctx->pc == 0x476A74u) {
        ctx->pc = 0x476A74u;
            // 0x476a74: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->pc = 0x476A78u;
        goto label_476a78;
    }
    ctx->pc = 0x476A70u;
    SET_GPR_U32(ctx, 31, 0x476A78u);
    ctx->pc = 0x476A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476A70u;
            // 0x476a74: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476A78u; }
        if (ctx->pc != 0x476A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476A78u; }
        if (ctx->pc != 0x476A78u) { return; }
    }
    ctx->pc = 0x476A78u;
label_476a78:
    // 0x476a78: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x476a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_476a7c:
    // 0x476a7c: 0xc66c001c  lwc1        $f12, 0x1C($s3)
    ctx->pc = 0x476a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_476a80:
    // 0x476a80: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x476a80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_476a84:
    // 0x476a84: 0xc054bbc  jal         func_152EF0
label_476a88:
    if (ctx->pc == 0x476A88u) {
        ctx->pc = 0x476A88u;
            // 0x476a88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x476A8Cu;
        goto label_476a8c;
    }
    ctx->pc = 0x476A84u;
    SET_GPR_U32(ctx, 31, 0x476A8Cu);
    ctx->pc = 0x476A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476A84u;
            // 0x476a88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476A8Cu; }
        if (ctx->pc != 0x476A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476A8Cu; }
        if (ctx->pc != 0x476A8Cu) { return; }
    }
    ctx->pc = 0x476A8Cu;
label_476a8c:
    // 0x476a8c: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x476a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_476a90:
    // 0x476a90: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x476a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_476a94:
    // 0x476a94: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x476a94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_476a98:
    // 0x476a98: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x476a98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_476a9c:
    // 0x476a9c: 0xc054c2c  jal         func_1530B0
label_476aa0:
    if (ctx->pc == 0x476AA0u) {
        ctx->pc = 0x476AA0u;
            // 0x476aa0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x476AA4u;
        goto label_476aa4;
    }
    ctx->pc = 0x476A9Cu;
    SET_GPR_U32(ctx, 31, 0x476AA4u);
    ctx->pc = 0x476AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476A9Cu;
            // 0x476aa0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476AA4u; }
        if (ctx->pc != 0x476AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476AA4u; }
        if (ctx->pc != 0x476AA4u) { return; }
    }
    ctx->pc = 0x476AA4u;
label_476aa4:
    // 0x476aa4: 0x0  nop
    ctx->pc = 0x476aa4u;
    // NOP
label_476aa8:
    // 0x476aa8: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x476aa8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_476aac:
    // 0x476aac: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x476aacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_476ab0:
    // 0x476ab0: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x476ab0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_476ab4:
    // 0x476ab4: 0x1460ffae  bnez        $v1, . + 4 + (-0x52 << 2)
label_476ab8:
    if (ctx->pc == 0x476AB8u) {
        ctx->pc = 0x476AB8u;
            // 0x476ab8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x476ABCu;
        goto label_476abc;
    }
    ctx->pc = 0x476AB4u;
    {
        const bool branch_taken_0x476ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x476AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476AB4u;
            // 0x476ab8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476ab4) {
            ctx->pc = 0x476970u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_476970;
        }
    }
    ctx->pc = 0x476ABCu;
label_476abc:
    // 0x476abc: 0x0  nop
    ctx->pc = 0x476abcu;
    // NOP
label_476ac0:
    // 0x476ac0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x476ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_476ac4:
    // 0x476ac4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x476ac4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_476ac8:
    // 0x476ac8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x476ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_476acc:
    // 0x476acc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x476accu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_476ad0:
    // 0x476ad0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x476ad0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_476ad4:
    // 0x476ad4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x476ad4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_476ad8:
    // 0x476ad8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x476ad8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_476adc:
    // 0x476adc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x476adcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_476ae0:
    // 0x476ae0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x476ae0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_476ae4:
    // 0x476ae4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x476ae4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_476ae8:
    // 0x476ae8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x476ae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_476aec:
    // 0x476aec: 0x3e00008  jr          $ra
label_476af0:
    if (ctx->pc == 0x476AF0u) {
        ctx->pc = 0x476AF0u;
            // 0x476af0: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x476AF4u;
        goto label_476af4;
    }
    ctx->pc = 0x476AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x476AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476AECu;
            // 0x476af0: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x476AF4u;
label_476af4:
    // 0x476af4: 0x0  nop
    ctx->pc = 0x476af4u;
    // NOP
label_476af8:
    // 0x476af8: 0x0  nop
    ctx->pc = 0x476af8u;
    // NOP
label_476afc:
    // 0x476afc: 0x0  nop
    ctx->pc = 0x476afcu;
    // NOP
label_476b00:
    // 0x476b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x476b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_476b04:
    // 0x476b04: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x476b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_476b08:
    // 0x476b08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x476b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_476b0c:
    // 0x476b0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x476b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_476b10:
    // 0x476b10: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x476b10u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_476b14:
    // 0x476b14: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_476b18:
    if (ctx->pc == 0x476B18u) {
        ctx->pc = 0x476B18u;
            // 0x476b18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x476B1Cu;
        goto label_476b1c;
    }
    ctx->pc = 0x476B14u;
    {
        const bool branch_taken_0x476b14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x476B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476B14u;
            // 0x476b18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476b14) {
            ctx->pc = 0x476B48u;
            goto label_476b48;
        }
    }
    ctx->pc = 0x476B1Cu;
label_476b1c:
    // 0x476b1c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x476b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_476b20:
    // 0x476b20: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_476b24:
    if (ctx->pc == 0x476B24u) {
        ctx->pc = 0x476B24u;
            // 0x476b24: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x476B28u;
        goto label_476b28;
    }
    ctx->pc = 0x476B20u;
    {
        const bool branch_taken_0x476b20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x476b20) {
            ctx->pc = 0x476B24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x476B20u;
            // 0x476b24: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x476B3Cu;
            goto label_476b3c;
        }
    }
    ctx->pc = 0x476B28u;
label_476b28:
    // 0x476b28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x476b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_476b2c:
    // 0x476b2c: 0x10a30044  beq         $a1, $v1, . + 4 + (0x44 << 2)
label_476b30:
    if (ctx->pc == 0x476B30u) {
        ctx->pc = 0x476B34u;
        goto label_476b34;
    }
    ctx->pc = 0x476B2Cu;
    {
        const bool branch_taken_0x476b2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x476b2c) {
            ctx->pc = 0x476C40u;
            goto label_476c40;
        }
    }
    ctx->pc = 0x476B34u;
label_476b34:
    // 0x476b34: 0x10000042  b           . + 4 + (0x42 << 2)
label_476b38:
    if (ctx->pc == 0x476B38u) {
        ctx->pc = 0x476B3Cu;
        goto label_476b3c;
    }
    ctx->pc = 0x476B34u;
    {
        const bool branch_taken_0x476b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x476b34) {
            ctx->pc = 0x476C40u;
            goto label_476c40;
        }
    }
    ctx->pc = 0x476B3Cu;
label_476b3c:
    // 0x476b3c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x476b3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_476b40:
    // 0x476b40: 0x320f809  jalr        $t9
label_476b44:
    if (ctx->pc == 0x476B44u) {
        ctx->pc = 0x476B48u;
        goto label_476b48;
    }
    ctx->pc = 0x476B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x476B48u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x476B48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x476B48u; }
            if (ctx->pc != 0x476B48u) { return; }
        }
        }
    }
    ctx->pc = 0x476B48u;
label_476b48:
    // 0x476b48: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x476b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_476b4c:
    // 0x476b4c: 0x8e090088  lw          $t1, 0x88($s0)
    ctx->pc = 0x476b4cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_476b50:
    // 0x476b50: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x476b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_476b54:
    // 0x476b54: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x476b54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_476b58:
    // 0x476b58: 0x8e080084  lw          $t0, 0x84($s0)
    ctx->pc = 0x476b58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_476b5c:
    // 0x476b5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x476b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_476b60:
    // 0x476b60: 0xc4640018  lwc1        $f4, 0x18($v1)
    ctx->pc = 0x476b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_476b64:
    // 0x476b64: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x476b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_476b68:
    // 0x476b68: 0x2527000c  addiu       $a3, $t1, 0xC
    ctx->pc = 0x476b68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
label_476b6c:
    // 0x476b6c: 0x2526001c  addiu       $a2, $t1, 0x1C
    ctx->pc = 0x476b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 28));
label_476b70:
    // 0x476b70: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x476b70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_476b74:
    // 0x476b74: 0xe520000c  swc1        $f0, 0xC($t1)
    ctx->pc = 0x476b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
label_476b78:
    // 0x476b78: 0xc520001c  lwc1        $f0, 0x1C($t1)
    ctx->pc = 0x476b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_476b7c:
    // 0x476b7c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x476b7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_476b80:
    // 0x476b80: 0xe520001c  swc1        $f0, 0x1C($t1)
    ctx->pc = 0x476b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 28), bits); }
label_476b84:
    // 0x476b84: 0x8d240008  lw          $a0, 0x8($t1)
    ctx->pc = 0x476b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_476b88:
    // 0x476b88: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x476b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_476b8c:
    // 0x476b8c: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x476b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_476b90:
    // 0x476b90: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x476b90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_476b94:
    // 0x476b94: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_476b98:
    if (ctx->pc == 0x476B98u) {
        ctx->pc = 0x476B98u;
            // 0x476b98: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x476B9Cu;
        goto label_476b9c;
    }
    ctx->pc = 0x476B94u;
    {
        const bool branch_taken_0x476b94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x476B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476B94u;
            // 0x476b98: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476b94) {
            ctx->pc = 0x476BA0u;
            goto label_476ba0;
        }
    }
    ctx->pc = 0x476B9Cu;
label_476b9c:
    // 0x476b9c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x476b9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_476ba0:
    // 0x476ba0: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_476ba4:
    if (ctx->pc == 0x476BA4u) {
        ctx->pc = 0x476BA4u;
            // 0x476ba4: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x476BA8u;
        goto label_476ba8;
    }
    ctx->pc = 0x476BA0u;
    {
        const bool branch_taken_0x476ba0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x476ba0) {
            ctx->pc = 0x476BA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x476BA0u;
            // 0x476ba4: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x476BB4u;
            goto label_476bb4;
        }
    }
    ctx->pc = 0x476BA8u;
label_476ba8:
    // 0x476ba8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x476ba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_476bac:
    // 0x476bac: 0x10000007  b           . + 4 + (0x7 << 2)
label_476bb0:
    if (ctx->pc == 0x476BB0u) {
        ctx->pc = 0x476BB0u;
            // 0x476bb0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x476BB4u;
        goto label_476bb4;
    }
    ctx->pc = 0x476BACu;
    {
        const bool branch_taken_0x476bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x476BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476BACu;
            // 0x476bb0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x476bac) {
            ctx->pc = 0x476BCCu;
            goto label_476bcc;
        }
    }
    ctx->pc = 0x476BB4u;
label_476bb4:
    // 0x476bb4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x476bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_476bb8:
    // 0x476bb8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x476bb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_476bbc:
    // 0x476bbc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x476bbcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_476bc0:
    // 0x476bc0: 0x0  nop
    ctx->pc = 0x476bc0u;
    // NOP
label_476bc4:
    // 0x476bc4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x476bc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_476bc8:
    // 0x476bc8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x476bc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_476bcc:
    // 0x476bcc: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x476bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_476bd0:
    // 0x476bd0: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x476bd0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_476bd4:
    // 0x476bd4: 0x4601181d  msub.s      $f0, $f3, $f1
    ctx->pc = 0x476bd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_476bd8:
    // 0x476bd8: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x476bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_476bdc:
    // 0x476bdc: 0x8d240014  lw          $a0, 0x14($t1)
    ctx->pc = 0x476bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
label_476be0:
    // 0x476be0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x476be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_476be4:
    // 0x476be4: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x476be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_476be8:
    // 0x476be8: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x476be8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_476bec:
    // 0x476bec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_476bf0:
    if (ctx->pc == 0x476BF0u) {
        ctx->pc = 0x476BF0u;
            // 0x476bf0: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x476BF4u;
        goto label_476bf4;
    }
    ctx->pc = 0x476BECu;
    {
        const bool branch_taken_0x476bec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x476BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476BECu;
            // 0x476bf0: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476bec) {
            ctx->pc = 0x476BF8u;
            goto label_476bf8;
        }
    }
    ctx->pc = 0x476BF4u;
label_476bf4:
    // 0x476bf4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x476bf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_476bf8:
    // 0x476bf8: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_476bfc:
    if (ctx->pc == 0x476BFCu) {
        ctx->pc = 0x476BFCu;
            // 0x476bfc: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x476C00u;
        goto label_476c00;
    }
    ctx->pc = 0x476BF8u;
    {
        const bool branch_taken_0x476bf8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x476bf8) {
            ctx->pc = 0x476BFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x476BF8u;
            // 0x476bfc: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x476C0Cu;
            goto label_476c0c;
        }
    }
    ctx->pc = 0x476C00u;
label_476c00:
    // 0x476c00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x476c00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_476c04:
    // 0x476c04: 0x10000007  b           . + 4 + (0x7 << 2)
label_476c08:
    if (ctx->pc == 0x476C08u) {
        ctx->pc = 0x476C08u;
            // 0x476c08: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x476C0Cu;
        goto label_476c0c;
    }
    ctx->pc = 0x476C04u;
    {
        const bool branch_taken_0x476c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x476C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476C04u;
            // 0x476c08: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x476c04) {
            ctx->pc = 0x476C24u;
            goto label_476c24;
        }
    }
    ctx->pc = 0x476C0Cu;
label_476c0c:
    // 0x476c0c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x476c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_476c10:
    // 0x476c10: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x476c10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_476c14:
    // 0x476c14: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x476c14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_476c18:
    // 0x476c18: 0x0  nop
    ctx->pc = 0x476c18u;
    // NOP
label_476c1c:
    // 0x476c1c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x476c1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_476c20:
    // 0x476c20: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x476c20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_476c24:
    // 0x476c24: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x476c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_476c28:
    // 0x476c28: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x476c28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_476c2c:
    // 0x476c2c: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x476c2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
label_476c30:
    // 0x476c30: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x476c30u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_476c34:
    // 0x476c34: 0x4601181d  msub.s      $f0, $f3, $f1
    ctx->pc = 0x476c34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_476c38:
    // 0x476c38: 0x1500ffca  bnez        $t0, . + 4 + (-0x36 << 2)
label_476c3c:
    if (ctx->pc == 0x476C3Cu) {
        ctx->pc = 0x476C3Cu;
            // 0x476c3c: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->pc = 0x476C40u;
        goto label_476c40;
    }
    ctx->pc = 0x476C38u;
    {
        const bool branch_taken_0x476c38 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x476C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476C38u;
            // 0x476c3c: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x476c38) {
            ctx->pc = 0x476B64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_476b64;
        }
    }
    ctx->pc = 0x476C40u;
label_476c40:
    // 0x476c40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x476c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_476c44:
    // 0x476c44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x476c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_476c48:
    // 0x476c48: 0x3e00008  jr          $ra
label_476c4c:
    if (ctx->pc == 0x476C4Cu) {
        ctx->pc = 0x476C4Cu;
            // 0x476c4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x476C50u;
        goto label_476c50;
    }
    ctx->pc = 0x476C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x476C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476C48u;
            // 0x476c4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x476C50u;
label_476c50:
    // 0x476c50: 0x811d9f8  j           func_4767E0
label_476c54:
    if (ctx->pc == 0x476C54u) {
        ctx->pc = 0x476C54u;
            // 0x476c54: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x476C58u;
        goto label_476c58;
    }
    ctx->pc = 0x476C50u;
    ctx->pc = 0x476C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476C50u;
            // 0x476c54: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4767E0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_4767e0;
    ctx->pc = 0x476C58u;
label_476c58:
    // 0x476c58: 0x0  nop
    ctx->pc = 0x476c58u;
    // NOP
label_476c5c:
    // 0x476c5c: 0x0  nop
    ctx->pc = 0x476c5cu;
    // NOP
label_476c60:
    // 0x476c60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x476c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_476c64:
    // 0x476c64: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x476c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_476c68:
    // 0x476c68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x476c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_476c6c:
    // 0x476c6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x476c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_476c70:
    // 0x476c70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x476c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_476c74:
    // 0x476c74: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x476c74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_476c78:
    // 0x476c78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x476c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_476c7c:
    // 0x476c7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x476c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_476c80:
    // 0x476c80: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x476c80u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_476c84:
    // 0x476c84: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
label_476c88:
    if (ctx->pc == 0x476C88u) {
        ctx->pc = 0x476C88u;
            // 0x476c88: 0xc6610058  lwc1        $f1, 0x58($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x476C8Cu;
        goto label_476c8c;
    }
    ctx->pc = 0x476C84u;
    {
        const bool branch_taken_0x476c84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x476c84) {
            ctx->pc = 0x476C88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x476C84u;
            // 0x476c88: 0xc6610058  lwc1        $f1, 0x58($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x476CA4u;
            goto label_476ca4;
        }
    }
    ctx->pc = 0x476C8Cu;
label_476c8c:
    // 0x476c8c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x476c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_476c90:
    // 0x476c90: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_476c94:
    if (ctx->pc == 0x476C94u) {
        ctx->pc = 0x476C98u;
        goto label_476c98;
    }
    ctx->pc = 0x476C90u;
    {
        const bool branch_taken_0x476c90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x476c90) {
            ctx->pc = 0x476CA0u;
            goto label_476ca0;
        }
    }
    ctx->pc = 0x476C98u;
label_476c98:
    // 0x476c98: 0x1000007c  b           . + 4 + (0x7C << 2)
label_476c9c:
    if (ctx->pc == 0x476C9Cu) {
        ctx->pc = 0x476C9Cu;
            // 0x476c9c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x476CA0u;
        goto label_476ca0;
    }
    ctx->pc = 0x476C98u;
    {
        const bool branch_taken_0x476c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x476C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476C98u;
            // 0x476c9c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476c98) {
            ctx->pc = 0x476E8Cu;
            goto label_476e8c;
        }
    }
    ctx->pc = 0x476CA0u;
label_476ca0:
    // 0x476ca0: 0xc6610058  lwc1        $f1, 0x58($s3)
    ctx->pc = 0x476ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_476ca4:
    // 0x476ca4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x476ca4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_476ca8:
    // 0x476ca8: 0x0  nop
    ctx->pc = 0x476ca8u;
    // NOP
label_476cac:
    // 0x476cac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x476cacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_476cb0:
    // 0x476cb0: 0x45000075  bc1f        . + 4 + (0x75 << 2)
label_476cb4:
    if (ctx->pc == 0x476CB4u) {
        ctx->pc = 0x476CB8u;
        goto label_476cb8;
    }
    ctx->pc = 0x476CB0u;
    {
        const bool branch_taken_0x476cb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x476cb0) {
            ctx->pc = 0x476E88u;
            goto label_476e88;
        }
    }
    ctx->pc = 0x476CB8u;
label_476cb8:
    // 0x476cb8: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x476cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_476cbc:
    // 0x476cbc: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x476cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_476cc0:
    // 0x476cc0: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x476cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_476cc4:
    // 0x476cc4: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_476cc8:
    if (ctx->pc == 0x476CC8u) {
        ctx->pc = 0x476CC8u;
            // 0x476cc8: 0x24a5f300  addiu       $a1, $a1, -0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963968));
        ctx->pc = 0x476CCCu;
        goto label_476ccc;
    }
    ctx->pc = 0x476CC4u;
    {
        const bool branch_taken_0x476cc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x476CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476CC4u;
            // 0x476cc8: 0x24a5f300  addiu       $a1, $a1, -0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476cc4) {
            ctx->pc = 0x476D58u;
            goto label_476d58;
        }
    }
    ctx->pc = 0x476CCCu;
label_476ccc:
    // 0x476ccc: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x476cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_476cd0:
    // 0x476cd0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_476cd4:
    if (ctx->pc == 0x476CD4u) {
        ctx->pc = 0x476CD4u;
            // 0x476cd4: 0x640800ff  daddiu      $t0, $zero, 0xFF (Delay Slot)
        SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)255);
        ctx->pc = 0x476CD8u;
        goto label_476cd8;
    }
    ctx->pc = 0x476CD0u;
    {
        const bool branch_taken_0x476cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x476CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476CD0u;
            // 0x476cd4: 0x640800ff  daddiu      $t0, $zero, 0xFF (Delay Slot)
        SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x476cd0) {
            ctx->pc = 0x476D38u;
            goto label_476d38;
        }
    }
    ctx->pc = 0x476CD8u;
label_476cd8:
    // 0x476cd8: 0xc66200a4  lwc1        $f2, 0xA4($s3)
    ctx->pc = 0x476cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_476cdc:
    // 0x476cdc: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x476cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_476ce0:
    // 0x476ce0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x476ce0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_476ce4:
    // 0x476ce4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x476ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_476ce8:
    // 0x476ce8: 0xc6610064  lwc1        $f1, 0x64($s3)
    ctx->pc = 0x476ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_476cec:
    // 0x476cec: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x476cecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_476cf0:
    // 0x476cf0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x476cf0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_476cf4:
    // 0x476cf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x476cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_476cf8:
    // 0x476cf8: 0x0  nop
    ctx->pc = 0x476cf8u;
    // NOP
label_476cfc:
    // 0x476cfc: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x476cfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_476d00:
    // 0x476d00: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x476d00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_476d04:
    // 0x476d04: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_476d08:
    if (ctx->pc == 0x476D08u) {
        ctx->pc = 0x476D08u;
            // 0x476d08: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x476D0Cu;
        goto label_476d0c;
    }
    ctx->pc = 0x476D04u;
    {
        const bool branch_taken_0x476d04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x476d04) {
            ctx->pc = 0x476D08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x476D04u;
            // 0x476d08: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x476D1Cu;
            goto label_476d1c;
        }
    }
    ctx->pc = 0x476D0Cu;
label_476d0c:
    // 0x476d0c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x476d0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_476d10:
    // 0x476d10: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x476d10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_476d14:
    // 0x476d14: 0x10000007  b           . + 4 + (0x7 << 2)
label_476d18:
    if (ctx->pc == 0x476D18u) {
        ctx->pc = 0x476D18u;
            // 0x476d18: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x476D1Cu;
        goto label_476d1c;
    }
    ctx->pc = 0x476D14u;
    {
        const bool branch_taken_0x476d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x476D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476D14u;
            // 0x476d18: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x476d14) {
            ctx->pc = 0x476D34u;
            goto label_476d34;
        }
    }
    ctx->pc = 0x476D1Cu;
label_476d1c:
    // 0x476d1c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x476d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_476d20:
    // 0x476d20: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x476d20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_476d24:
    // 0x476d24: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x476d24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_476d28:
    // 0x476d28: 0x0  nop
    ctx->pc = 0x476d28u;
    // NOP
label_476d2c:
    // 0x476d2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x476d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_476d30:
    // 0x476d30: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x476d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_476d34:
    // 0x476d34: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x476d34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_476d38:
    // 0x476d38: 0x94a60004  lhu         $a2, 0x4($a1)
    ctx->pc = 0x476d38u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_476d3c:
    // 0x476d3c: 0x94a70006  lhu         $a3, 0x6($a1)
    ctx->pc = 0x476d3cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_476d40:
    // 0x476d40: 0x8e64005c  lw          $a0, 0x5C($s3)
    ctx->pc = 0x476d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_476d44:
    // 0x476d44: 0x8e650060  lw          $a1, 0x60($s3)
    ctx->pc = 0x476d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_476d48:
    // 0x476d48: 0xc0bc760  jal         func_2F1D80
label_476d4c:
    if (ctx->pc == 0x476D4Cu) {
        ctx->pc = 0x476D4Cu;
            // 0x476d4c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x476D50u;
        goto label_476d50;
    }
    ctx->pc = 0x476D48u;
    SET_GPR_U32(ctx, 31, 0x476D50u);
    ctx->pc = 0x476D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476D48u;
            // 0x476d4c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D80u;
    if (runtime->hasFunction(0x2F1D80u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476D50u; }
        if (ctx->pc != 0x476D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1D80_0x2f1d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476D50u; }
        if (ctx->pc != 0x476D50u) { return; }
    }
    ctx->pc = 0x476D50u;
label_476d50:
    // 0x476d50: 0xc11dbac  jal         func_476EB0
label_476d54:
    if (ctx->pc == 0x476D54u) {
        ctx->pc = 0x476D54u;
            // 0x476d54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x476D58u;
        goto label_476d58;
    }
    ctx->pc = 0x476D50u;
    SET_GPR_U32(ctx, 31, 0x476D58u);
    ctx->pc = 0x476D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476D50u;
            // 0x476d54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x476EB0u;
    if (runtime->hasFunction(0x476EB0u)) {
        auto targetFn = runtime->lookupFunction(0x476EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476D58u; }
        if (ctx->pc != 0x476D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00476EB0_0x476eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476D58u; }
        if (ctx->pc != 0x476D58u) { return; }
    }
    ctx->pc = 0x476D58u;
label_476d58:
    // 0x476d58: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x476d58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_476d5c:
    // 0x476d5c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x476d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_476d60:
    // 0x476d60: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x476d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_476d64:
    // 0x476d64: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x476d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_476d68:
    // 0x476d68: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
label_476d6c:
    if (ctx->pc == 0x476D6Cu) {
        ctx->pc = 0x476D6Cu;
            // 0x476d6c: 0x26110074  addiu       $s1, $s0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
        ctx->pc = 0x476D70u;
        goto label_476d70;
    }
    ctx->pc = 0x476D68u;
    {
        const bool branch_taken_0x476d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x476D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476D68u;
            // 0x476d6c: 0x26110074  addiu       $s1, $s0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476d68) {
            ctx->pc = 0x476E48u;
            goto label_476e48;
        }
    }
    ctx->pc = 0x476D70u;
label_476d70:
    // 0x476d70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x476d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_476d74:
    // 0x476d74: 0xc11dc90  jal         func_477240
label_476d78:
    if (ctx->pc == 0x476D78u) {
        ctx->pc = 0x476D78u;
            // 0x476d78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x476D7Cu;
        goto label_476d7c;
    }
    ctx->pc = 0x476D74u;
    SET_GPR_U32(ctx, 31, 0x476D7Cu);
    ctx->pc = 0x476D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476D74u;
            // 0x476d78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x477240u;
    if (runtime->hasFunction(0x477240u)) {
        auto targetFn = runtime->lookupFunction(0x477240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476D7Cu; }
        if (ctx->pc != 0x476D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00477240_0x477240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476D7Cu; }
        if (ctx->pc != 0x476D7Cu) { return; }
    }
    ctx->pc = 0x476D7Cu;
label_476d7c:
    // 0x476d7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x476d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_476d80:
    // 0x476d80: 0xc11e1cc  jal         func_478730
label_476d84:
    if (ctx->pc == 0x476D84u) {
        ctx->pc = 0x476D84u;
            // 0x476d84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x476D88u;
        goto label_476d88;
    }
    ctx->pc = 0x476D80u;
    SET_GPR_U32(ctx, 31, 0x476D88u);
    ctx->pc = 0x476D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476D80u;
            // 0x476d84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x478730u;
    if (runtime->hasFunction(0x478730u)) {
        auto targetFn = runtime->lookupFunction(0x478730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476D88u; }
        if (ctx->pc != 0x476D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00478730_0x478730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476D88u; }
        if (ctx->pc != 0x476D88u) { return; }
    }
    ctx->pc = 0x476D88u;
label_476d88:
    // 0x476d88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x476d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_476d8c:
    // 0x476d8c: 0xc11e0fc  jal         func_4783F0
label_476d90:
    if (ctx->pc == 0x476D90u) {
        ctx->pc = 0x476D90u;
            // 0x476d90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x476D94u;
        goto label_476d94;
    }
    ctx->pc = 0x476D8Cu;
    SET_GPR_U32(ctx, 31, 0x476D94u);
    ctx->pc = 0x476D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476D8Cu;
            // 0x476d90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4783F0u;
    if (runtime->hasFunction(0x4783F0u)) {
        auto targetFn = runtime->lookupFunction(0x4783F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476D94u; }
        if (ctx->pc != 0x476D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004783F0_0x4783f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476D94u; }
        if (ctx->pc != 0x476D94u) { return; }
    }
    ctx->pc = 0x476D94u;
label_476d94:
    // 0x476d94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x476d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_476d98:
    // 0x476d98: 0xc11df28  jal         func_477CA0
label_476d9c:
    if (ctx->pc == 0x476D9Cu) {
        ctx->pc = 0x476D9Cu;
            // 0x476d9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x476DA0u;
        goto label_476da0;
    }
    ctx->pc = 0x476D98u;
    SET_GPR_U32(ctx, 31, 0x476DA0u);
    ctx->pc = 0x476D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476D98u;
            // 0x476d9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x477CA0u;
    if (runtime->hasFunction(0x477CA0u)) {
        auto targetFn = runtime->lookupFunction(0x477CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476DA0u; }
        if (ctx->pc != 0x476DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00477CA0_0x477ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476DA0u; }
        if (ctx->pc != 0x476DA0u) { return; }
    }
    ctx->pc = 0x476DA0u;
label_476da0:
    // 0x476da0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x476da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_476da4:
    // 0x476da4: 0xc11ddd8  jal         func_477760
label_476da8:
    if (ctx->pc == 0x476DA8u) {
        ctx->pc = 0x476DA8u;
            // 0x476da8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x476DACu;
        goto label_476dac;
    }
    ctx->pc = 0x476DA4u;
    SET_GPR_U32(ctx, 31, 0x476DACu);
    ctx->pc = 0x476DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476DA4u;
            // 0x476da8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x477760u;
    if (runtime->hasFunction(0x477760u)) {
        auto targetFn = runtime->lookupFunction(0x477760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476DACu; }
        if (ctx->pc != 0x476DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00477760_0x477760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476DACu; }
        if (ctx->pc != 0x476DACu) { return; }
    }
    ctx->pc = 0x476DACu;
label_476dac:
    // 0x476dac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x476dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_476db0:
    // 0x476db0: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x476db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_476db4:
    // 0x476db4: 0xc0506ac  jal         func_141AB0
label_476db8:
    if (ctx->pc == 0x476DB8u) {
        ctx->pc = 0x476DB8u;
            // 0x476db8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x476DBCu;
        goto label_476dbc;
    }
    ctx->pc = 0x476DB4u;
    SET_GPR_U32(ctx, 31, 0x476DBCu);
    ctx->pc = 0x476DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476DB4u;
            // 0x476db8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476DBCu; }
        if (ctx->pc != 0x476DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476DBCu; }
        if (ctx->pc != 0x476DBCu) { return; }
    }
    ctx->pc = 0x476DBCu;
label_476dbc:
    // 0x476dbc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x476dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_476dc0:
    // 0x476dc0: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x476dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_476dc4:
    // 0x476dc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x476dc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_476dc8:
    // 0x476dc8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x476dc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_476dcc:
    // 0x476dcc: 0x320f809  jalr        $t9
label_476dd0:
    if (ctx->pc == 0x476DD0u) {
        ctx->pc = 0x476DD0u;
            // 0x476dd0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x476DD4u;
        goto label_476dd4;
    }
    ctx->pc = 0x476DCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x476DD4u);
        ctx->pc = 0x476DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476DCCu;
            // 0x476dd0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x476DD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x476DD4u; }
            if (ctx->pc != 0x476DD4u) { return; }
        }
        }
    }
    ctx->pc = 0x476DD4u;
label_476dd4:
    // 0x476dd4: 0xc110754  jal         func_441D50
label_476dd8:
    if (ctx->pc == 0x476DD8u) {
        ctx->pc = 0x476DD8u;
            // 0x476dd8: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->pc = 0x476DDCu;
        goto label_476ddc;
    }
    ctx->pc = 0x476DD4u;
    SET_GPR_U32(ctx, 31, 0x476DDCu);
    ctx->pc = 0x476DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476DD4u;
            // 0x476dd8: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x441D50u;
    if (runtime->hasFunction(0x441D50u)) {
        auto targetFn = runtime->lookupFunction(0x441D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476DDCu; }
        if (ctx->pc != 0x476DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00441D50_0x441d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476DDCu; }
        if (ctx->pc != 0x476DDCu) { return; }
    }
    ctx->pc = 0x476DDCu;
label_476ddc:
    // 0x476ddc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x476ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_476de0:
    // 0x476de0: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x476de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_476de4:
    // 0x476de4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x476de4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_476de8:
    // 0x476de8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x476de8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_476dec:
    // 0x476dec: 0x320f809  jalr        $t9
label_476df0:
    if (ctx->pc == 0x476DF0u) {
        ctx->pc = 0x476DF4u;
        goto label_476df4;
    }
    ctx->pc = 0x476DECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x476DF4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x476DF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x476DF4u; }
            if (ctx->pc != 0x476DF4u) { return; }
        }
        }
    }
    ctx->pc = 0x476DF4u;
label_476df4:
    // 0x476df4: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x476df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_476df8:
    // 0x476df8: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_476dfc:
    if (ctx->pc == 0x476DFCu) {
        ctx->pc = 0x476E00u;
        goto label_476e00;
    }
    ctx->pc = 0x476DF8u;
    {
        const bool branch_taken_0x476df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x476df8) {
            ctx->pc = 0x476E48u;
            goto label_476e48;
        }
    }
    ctx->pc = 0x476E00u;
label_476e00:
    // 0x476e00: 0xc05068c  jal         func_141A30
label_476e04:
    if (ctx->pc == 0x476E04u) {
        ctx->pc = 0x476E04u;
            // 0x476e04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x476E08u;
        goto label_476e08;
    }
    ctx->pc = 0x476E00u;
    SET_GPR_U32(ctx, 31, 0x476E08u);
    ctx->pc = 0x476E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476E00u;
            // 0x476e04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476E08u; }
        if (ctx->pc != 0x476E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476E08u; }
        if (ctx->pc != 0x476E08u) { return; }
    }
    ctx->pc = 0x476E08u;
label_476e08:
    // 0x476e08: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x476e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_476e0c:
    // 0x476e0c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x476e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_476e10:
    // 0x476e10: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x476e10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_476e14:
    // 0x476e14: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x476e14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_476e18:
    // 0x476e18: 0x320f809  jalr        $t9
label_476e1c:
    if (ctx->pc == 0x476E1Cu) {
        ctx->pc = 0x476E1Cu;
            // 0x476e1c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x476E20u;
        goto label_476e20;
    }
    ctx->pc = 0x476E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x476E20u);
        ctx->pc = 0x476E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476E18u;
            // 0x476e1c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x476E20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x476E20u; }
            if (ctx->pc != 0x476E20u) { return; }
        }
        }
    }
    ctx->pc = 0x476E20u;
label_476e20:
    // 0x476e20: 0xc110754  jal         func_441D50
label_476e24:
    if (ctx->pc == 0x476E24u) {
        ctx->pc = 0x476E24u;
            // 0x476e24: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->pc = 0x476E28u;
        goto label_476e28;
    }
    ctx->pc = 0x476E20u;
    SET_GPR_U32(ctx, 31, 0x476E28u);
    ctx->pc = 0x476E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476E20u;
            // 0x476e24: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x441D50u;
    if (runtime->hasFunction(0x441D50u)) {
        auto targetFn = runtime->lookupFunction(0x441D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476E28u; }
        if (ctx->pc != 0x476E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00441D50_0x441d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476E28u; }
        if (ctx->pc != 0x476E28u) { return; }
    }
    ctx->pc = 0x476E28u;
label_476e28:
    // 0x476e28: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x476e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_476e2c:
    // 0x476e2c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x476e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_476e30:
    // 0x476e30: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x476e30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_476e34:
    // 0x476e34: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x476e34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_476e38:
    // 0x476e38: 0x320f809  jalr        $t9
label_476e3c:
    if (ctx->pc == 0x476E3Cu) {
        ctx->pc = 0x476E40u;
        goto label_476e40;
    }
    ctx->pc = 0x476E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x476E40u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x476E40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x476E40u; }
            if (ctx->pc != 0x476E40u) { return; }
        }
        }
    }
    ctx->pc = 0x476E40u;
label_476e40:
    // 0x476e40: 0xc05068c  jal         func_141A30
label_476e44:
    if (ctx->pc == 0x476E44u) {
        ctx->pc = 0x476E44u;
            // 0x476e44: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x476E48u;
        goto label_476e48;
    }
    ctx->pc = 0x476E40u;
    SET_GPR_U32(ctx, 31, 0x476E48u);
    ctx->pc = 0x476E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476E40u;
            // 0x476e44: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476E48u; }
        if (ctx->pc != 0x476E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476E48u; }
        if (ctx->pc != 0x476E48u) { return; }
    }
    ctx->pc = 0x476E48u;
label_476e48:
    // 0x476e48: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x476e48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_476e4c:
    // 0x476e4c: 0x2a430008  slti        $v1, $s2, 0x8
    ctx->pc = 0x476e4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
label_476e50:
    // 0x476e50: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
label_476e54:
    if (ctx->pc == 0x476E54u) {
        ctx->pc = 0x476E54u;
            // 0x476e54: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->pc = 0x476E58u;
        goto label_476e58;
    }
    ctx->pc = 0x476E50u;
    {
        const bool branch_taken_0x476e50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x476E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476E50u;
            // 0x476e54: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476e50) {
            ctx->pc = 0x476D60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_476d60;
        }
    }
    ctx->pc = 0x476E58u;
label_476e58:
    // 0x476e58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x476e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_476e5c:
    // 0x476e5c: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x476e5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_476e60:
    // 0x476e60: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x476e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_476e64:
    // 0x476e64: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x476e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_476e68:
    // 0x476e68: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_476e6c:
    if (ctx->pc == 0x476E6Cu) {
        ctx->pc = 0x476E6Cu;
            // 0x476e6c: 0x26250074  addiu       $a1, $s1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
        ctx->pc = 0x476E70u;
        goto label_476e70;
    }
    ctx->pc = 0x476E68u;
    {
        const bool branch_taken_0x476e68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x476E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476E68u;
            // 0x476e6c: 0x26250074  addiu       $a1, $s1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476e68) {
            ctx->pc = 0x476E78u;
            goto label_476e78;
        }
    }
    ctx->pc = 0x476E70u;
label_476e70:
    // 0x476e70: 0xc11dd28  jal         func_4774A0
label_476e74:
    if (ctx->pc == 0x476E74u) {
        ctx->pc = 0x476E74u;
            // 0x476e74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x476E78u;
        goto label_476e78;
    }
    ctx->pc = 0x476E70u;
    SET_GPR_U32(ctx, 31, 0x476E78u);
    ctx->pc = 0x476E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476E70u;
            // 0x476e74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4774A0u;
    if (runtime->hasFunction(0x4774A0u)) {
        auto targetFn = runtime->lookupFunction(0x4774A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476E78u; }
        if (ctx->pc != 0x476E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004774A0_0x4774a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476E78u; }
        if (ctx->pc != 0x476E78u) { return; }
    }
    ctx->pc = 0x476E78u;
label_476e78:
    // 0x476e78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x476e78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_476e7c:
    // 0x476e7c: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x476e7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
label_476e80:
    // 0x476e80: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_476e84:
    if (ctx->pc == 0x476E84u) {
        ctx->pc = 0x476E84u;
            // 0x476e84: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->pc = 0x476E88u;
        goto label_476e88;
    }
    ctx->pc = 0x476E80u;
    {
        const bool branch_taken_0x476e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x476E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476E80u;
            // 0x476e84: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476e80) {
            ctx->pc = 0x476E60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_476e60;
        }
    }
    ctx->pc = 0x476E88u;
label_476e88:
    // 0x476e88: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x476e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_476e8c:
    // 0x476e8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x476e8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_476e90:
    // 0x476e90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x476e90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_476e94:
    // 0x476e94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x476e94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_476e98:
    // 0x476e98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x476e98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_476e9c:
    // 0x476e9c: 0x3e00008  jr          $ra
label_476ea0:
    if (ctx->pc == 0x476EA0u) {
        ctx->pc = 0x476EA0u;
            // 0x476ea0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x476EA4u;
        goto label_476ea4;
    }
    ctx->pc = 0x476E9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x476EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476E9Cu;
            // 0x476ea0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x476EA4u;
label_476ea4:
    // 0x476ea4: 0x0  nop
    ctx->pc = 0x476ea4u;
    // NOP
label_476ea8:
    // 0x476ea8: 0x0  nop
    ctx->pc = 0x476ea8u;
    // NOP
label_476eac:
    // 0x476eac: 0x0  nop
    ctx->pc = 0x476eacu;
    // NOP
}
