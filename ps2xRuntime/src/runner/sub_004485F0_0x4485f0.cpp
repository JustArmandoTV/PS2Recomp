#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004485F0
// Address: 0x4485f0 - 0x448f50
void sub_004485F0_0x4485f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004485F0_0x4485f0");
#endif

    switch (ctx->pc) {
        case 0x4485f0u: goto label_4485f0;
        case 0x4485f4u: goto label_4485f4;
        case 0x4485f8u: goto label_4485f8;
        case 0x4485fcu: goto label_4485fc;
        case 0x448600u: goto label_448600;
        case 0x448604u: goto label_448604;
        case 0x448608u: goto label_448608;
        case 0x44860cu: goto label_44860c;
        case 0x448610u: goto label_448610;
        case 0x448614u: goto label_448614;
        case 0x448618u: goto label_448618;
        case 0x44861cu: goto label_44861c;
        case 0x448620u: goto label_448620;
        case 0x448624u: goto label_448624;
        case 0x448628u: goto label_448628;
        case 0x44862cu: goto label_44862c;
        case 0x448630u: goto label_448630;
        case 0x448634u: goto label_448634;
        case 0x448638u: goto label_448638;
        case 0x44863cu: goto label_44863c;
        case 0x448640u: goto label_448640;
        case 0x448644u: goto label_448644;
        case 0x448648u: goto label_448648;
        case 0x44864cu: goto label_44864c;
        case 0x448650u: goto label_448650;
        case 0x448654u: goto label_448654;
        case 0x448658u: goto label_448658;
        case 0x44865cu: goto label_44865c;
        case 0x448660u: goto label_448660;
        case 0x448664u: goto label_448664;
        case 0x448668u: goto label_448668;
        case 0x44866cu: goto label_44866c;
        case 0x448670u: goto label_448670;
        case 0x448674u: goto label_448674;
        case 0x448678u: goto label_448678;
        case 0x44867cu: goto label_44867c;
        case 0x448680u: goto label_448680;
        case 0x448684u: goto label_448684;
        case 0x448688u: goto label_448688;
        case 0x44868cu: goto label_44868c;
        case 0x448690u: goto label_448690;
        case 0x448694u: goto label_448694;
        case 0x448698u: goto label_448698;
        case 0x44869cu: goto label_44869c;
        case 0x4486a0u: goto label_4486a0;
        case 0x4486a4u: goto label_4486a4;
        case 0x4486a8u: goto label_4486a8;
        case 0x4486acu: goto label_4486ac;
        case 0x4486b0u: goto label_4486b0;
        case 0x4486b4u: goto label_4486b4;
        case 0x4486b8u: goto label_4486b8;
        case 0x4486bcu: goto label_4486bc;
        case 0x4486c0u: goto label_4486c0;
        case 0x4486c4u: goto label_4486c4;
        case 0x4486c8u: goto label_4486c8;
        case 0x4486ccu: goto label_4486cc;
        case 0x4486d0u: goto label_4486d0;
        case 0x4486d4u: goto label_4486d4;
        case 0x4486d8u: goto label_4486d8;
        case 0x4486dcu: goto label_4486dc;
        case 0x4486e0u: goto label_4486e0;
        case 0x4486e4u: goto label_4486e4;
        case 0x4486e8u: goto label_4486e8;
        case 0x4486ecu: goto label_4486ec;
        case 0x4486f0u: goto label_4486f0;
        case 0x4486f4u: goto label_4486f4;
        case 0x4486f8u: goto label_4486f8;
        case 0x4486fcu: goto label_4486fc;
        case 0x448700u: goto label_448700;
        case 0x448704u: goto label_448704;
        case 0x448708u: goto label_448708;
        case 0x44870cu: goto label_44870c;
        case 0x448710u: goto label_448710;
        case 0x448714u: goto label_448714;
        case 0x448718u: goto label_448718;
        case 0x44871cu: goto label_44871c;
        case 0x448720u: goto label_448720;
        case 0x448724u: goto label_448724;
        case 0x448728u: goto label_448728;
        case 0x44872cu: goto label_44872c;
        case 0x448730u: goto label_448730;
        case 0x448734u: goto label_448734;
        case 0x448738u: goto label_448738;
        case 0x44873cu: goto label_44873c;
        case 0x448740u: goto label_448740;
        case 0x448744u: goto label_448744;
        case 0x448748u: goto label_448748;
        case 0x44874cu: goto label_44874c;
        case 0x448750u: goto label_448750;
        case 0x448754u: goto label_448754;
        case 0x448758u: goto label_448758;
        case 0x44875cu: goto label_44875c;
        case 0x448760u: goto label_448760;
        case 0x448764u: goto label_448764;
        case 0x448768u: goto label_448768;
        case 0x44876cu: goto label_44876c;
        case 0x448770u: goto label_448770;
        case 0x448774u: goto label_448774;
        case 0x448778u: goto label_448778;
        case 0x44877cu: goto label_44877c;
        case 0x448780u: goto label_448780;
        case 0x448784u: goto label_448784;
        case 0x448788u: goto label_448788;
        case 0x44878cu: goto label_44878c;
        case 0x448790u: goto label_448790;
        case 0x448794u: goto label_448794;
        case 0x448798u: goto label_448798;
        case 0x44879cu: goto label_44879c;
        case 0x4487a0u: goto label_4487a0;
        case 0x4487a4u: goto label_4487a4;
        case 0x4487a8u: goto label_4487a8;
        case 0x4487acu: goto label_4487ac;
        case 0x4487b0u: goto label_4487b0;
        case 0x4487b4u: goto label_4487b4;
        case 0x4487b8u: goto label_4487b8;
        case 0x4487bcu: goto label_4487bc;
        case 0x4487c0u: goto label_4487c0;
        case 0x4487c4u: goto label_4487c4;
        case 0x4487c8u: goto label_4487c8;
        case 0x4487ccu: goto label_4487cc;
        case 0x4487d0u: goto label_4487d0;
        case 0x4487d4u: goto label_4487d4;
        case 0x4487d8u: goto label_4487d8;
        case 0x4487dcu: goto label_4487dc;
        case 0x4487e0u: goto label_4487e0;
        case 0x4487e4u: goto label_4487e4;
        case 0x4487e8u: goto label_4487e8;
        case 0x4487ecu: goto label_4487ec;
        case 0x4487f0u: goto label_4487f0;
        case 0x4487f4u: goto label_4487f4;
        case 0x4487f8u: goto label_4487f8;
        case 0x4487fcu: goto label_4487fc;
        case 0x448800u: goto label_448800;
        case 0x448804u: goto label_448804;
        case 0x448808u: goto label_448808;
        case 0x44880cu: goto label_44880c;
        case 0x448810u: goto label_448810;
        case 0x448814u: goto label_448814;
        case 0x448818u: goto label_448818;
        case 0x44881cu: goto label_44881c;
        case 0x448820u: goto label_448820;
        case 0x448824u: goto label_448824;
        case 0x448828u: goto label_448828;
        case 0x44882cu: goto label_44882c;
        case 0x448830u: goto label_448830;
        case 0x448834u: goto label_448834;
        case 0x448838u: goto label_448838;
        case 0x44883cu: goto label_44883c;
        case 0x448840u: goto label_448840;
        case 0x448844u: goto label_448844;
        case 0x448848u: goto label_448848;
        case 0x44884cu: goto label_44884c;
        case 0x448850u: goto label_448850;
        case 0x448854u: goto label_448854;
        case 0x448858u: goto label_448858;
        case 0x44885cu: goto label_44885c;
        case 0x448860u: goto label_448860;
        case 0x448864u: goto label_448864;
        case 0x448868u: goto label_448868;
        case 0x44886cu: goto label_44886c;
        case 0x448870u: goto label_448870;
        case 0x448874u: goto label_448874;
        case 0x448878u: goto label_448878;
        case 0x44887cu: goto label_44887c;
        case 0x448880u: goto label_448880;
        case 0x448884u: goto label_448884;
        case 0x448888u: goto label_448888;
        case 0x44888cu: goto label_44888c;
        case 0x448890u: goto label_448890;
        case 0x448894u: goto label_448894;
        case 0x448898u: goto label_448898;
        case 0x44889cu: goto label_44889c;
        case 0x4488a0u: goto label_4488a0;
        case 0x4488a4u: goto label_4488a4;
        case 0x4488a8u: goto label_4488a8;
        case 0x4488acu: goto label_4488ac;
        case 0x4488b0u: goto label_4488b0;
        case 0x4488b4u: goto label_4488b4;
        case 0x4488b8u: goto label_4488b8;
        case 0x4488bcu: goto label_4488bc;
        case 0x4488c0u: goto label_4488c0;
        case 0x4488c4u: goto label_4488c4;
        case 0x4488c8u: goto label_4488c8;
        case 0x4488ccu: goto label_4488cc;
        case 0x4488d0u: goto label_4488d0;
        case 0x4488d4u: goto label_4488d4;
        case 0x4488d8u: goto label_4488d8;
        case 0x4488dcu: goto label_4488dc;
        case 0x4488e0u: goto label_4488e0;
        case 0x4488e4u: goto label_4488e4;
        case 0x4488e8u: goto label_4488e8;
        case 0x4488ecu: goto label_4488ec;
        case 0x4488f0u: goto label_4488f0;
        case 0x4488f4u: goto label_4488f4;
        case 0x4488f8u: goto label_4488f8;
        case 0x4488fcu: goto label_4488fc;
        case 0x448900u: goto label_448900;
        case 0x448904u: goto label_448904;
        case 0x448908u: goto label_448908;
        case 0x44890cu: goto label_44890c;
        case 0x448910u: goto label_448910;
        case 0x448914u: goto label_448914;
        case 0x448918u: goto label_448918;
        case 0x44891cu: goto label_44891c;
        case 0x448920u: goto label_448920;
        case 0x448924u: goto label_448924;
        case 0x448928u: goto label_448928;
        case 0x44892cu: goto label_44892c;
        case 0x448930u: goto label_448930;
        case 0x448934u: goto label_448934;
        case 0x448938u: goto label_448938;
        case 0x44893cu: goto label_44893c;
        case 0x448940u: goto label_448940;
        case 0x448944u: goto label_448944;
        case 0x448948u: goto label_448948;
        case 0x44894cu: goto label_44894c;
        case 0x448950u: goto label_448950;
        case 0x448954u: goto label_448954;
        case 0x448958u: goto label_448958;
        case 0x44895cu: goto label_44895c;
        case 0x448960u: goto label_448960;
        case 0x448964u: goto label_448964;
        case 0x448968u: goto label_448968;
        case 0x44896cu: goto label_44896c;
        case 0x448970u: goto label_448970;
        case 0x448974u: goto label_448974;
        case 0x448978u: goto label_448978;
        case 0x44897cu: goto label_44897c;
        case 0x448980u: goto label_448980;
        case 0x448984u: goto label_448984;
        case 0x448988u: goto label_448988;
        case 0x44898cu: goto label_44898c;
        case 0x448990u: goto label_448990;
        case 0x448994u: goto label_448994;
        case 0x448998u: goto label_448998;
        case 0x44899cu: goto label_44899c;
        case 0x4489a0u: goto label_4489a0;
        case 0x4489a4u: goto label_4489a4;
        case 0x4489a8u: goto label_4489a8;
        case 0x4489acu: goto label_4489ac;
        case 0x4489b0u: goto label_4489b0;
        case 0x4489b4u: goto label_4489b4;
        case 0x4489b8u: goto label_4489b8;
        case 0x4489bcu: goto label_4489bc;
        case 0x4489c0u: goto label_4489c0;
        case 0x4489c4u: goto label_4489c4;
        case 0x4489c8u: goto label_4489c8;
        case 0x4489ccu: goto label_4489cc;
        case 0x4489d0u: goto label_4489d0;
        case 0x4489d4u: goto label_4489d4;
        case 0x4489d8u: goto label_4489d8;
        case 0x4489dcu: goto label_4489dc;
        case 0x4489e0u: goto label_4489e0;
        case 0x4489e4u: goto label_4489e4;
        case 0x4489e8u: goto label_4489e8;
        case 0x4489ecu: goto label_4489ec;
        case 0x4489f0u: goto label_4489f0;
        case 0x4489f4u: goto label_4489f4;
        case 0x4489f8u: goto label_4489f8;
        case 0x4489fcu: goto label_4489fc;
        case 0x448a00u: goto label_448a00;
        case 0x448a04u: goto label_448a04;
        case 0x448a08u: goto label_448a08;
        case 0x448a0cu: goto label_448a0c;
        case 0x448a10u: goto label_448a10;
        case 0x448a14u: goto label_448a14;
        case 0x448a18u: goto label_448a18;
        case 0x448a1cu: goto label_448a1c;
        case 0x448a20u: goto label_448a20;
        case 0x448a24u: goto label_448a24;
        case 0x448a28u: goto label_448a28;
        case 0x448a2cu: goto label_448a2c;
        case 0x448a30u: goto label_448a30;
        case 0x448a34u: goto label_448a34;
        case 0x448a38u: goto label_448a38;
        case 0x448a3cu: goto label_448a3c;
        case 0x448a40u: goto label_448a40;
        case 0x448a44u: goto label_448a44;
        case 0x448a48u: goto label_448a48;
        case 0x448a4cu: goto label_448a4c;
        case 0x448a50u: goto label_448a50;
        case 0x448a54u: goto label_448a54;
        case 0x448a58u: goto label_448a58;
        case 0x448a5cu: goto label_448a5c;
        case 0x448a60u: goto label_448a60;
        case 0x448a64u: goto label_448a64;
        case 0x448a68u: goto label_448a68;
        case 0x448a6cu: goto label_448a6c;
        case 0x448a70u: goto label_448a70;
        case 0x448a74u: goto label_448a74;
        case 0x448a78u: goto label_448a78;
        case 0x448a7cu: goto label_448a7c;
        case 0x448a80u: goto label_448a80;
        case 0x448a84u: goto label_448a84;
        case 0x448a88u: goto label_448a88;
        case 0x448a8cu: goto label_448a8c;
        case 0x448a90u: goto label_448a90;
        case 0x448a94u: goto label_448a94;
        case 0x448a98u: goto label_448a98;
        case 0x448a9cu: goto label_448a9c;
        case 0x448aa0u: goto label_448aa0;
        case 0x448aa4u: goto label_448aa4;
        case 0x448aa8u: goto label_448aa8;
        case 0x448aacu: goto label_448aac;
        case 0x448ab0u: goto label_448ab0;
        case 0x448ab4u: goto label_448ab4;
        case 0x448ab8u: goto label_448ab8;
        case 0x448abcu: goto label_448abc;
        case 0x448ac0u: goto label_448ac0;
        case 0x448ac4u: goto label_448ac4;
        case 0x448ac8u: goto label_448ac8;
        case 0x448accu: goto label_448acc;
        case 0x448ad0u: goto label_448ad0;
        case 0x448ad4u: goto label_448ad4;
        case 0x448ad8u: goto label_448ad8;
        case 0x448adcu: goto label_448adc;
        case 0x448ae0u: goto label_448ae0;
        case 0x448ae4u: goto label_448ae4;
        case 0x448ae8u: goto label_448ae8;
        case 0x448aecu: goto label_448aec;
        case 0x448af0u: goto label_448af0;
        case 0x448af4u: goto label_448af4;
        case 0x448af8u: goto label_448af8;
        case 0x448afcu: goto label_448afc;
        case 0x448b00u: goto label_448b00;
        case 0x448b04u: goto label_448b04;
        case 0x448b08u: goto label_448b08;
        case 0x448b0cu: goto label_448b0c;
        case 0x448b10u: goto label_448b10;
        case 0x448b14u: goto label_448b14;
        case 0x448b18u: goto label_448b18;
        case 0x448b1cu: goto label_448b1c;
        case 0x448b20u: goto label_448b20;
        case 0x448b24u: goto label_448b24;
        case 0x448b28u: goto label_448b28;
        case 0x448b2cu: goto label_448b2c;
        case 0x448b30u: goto label_448b30;
        case 0x448b34u: goto label_448b34;
        case 0x448b38u: goto label_448b38;
        case 0x448b3cu: goto label_448b3c;
        case 0x448b40u: goto label_448b40;
        case 0x448b44u: goto label_448b44;
        case 0x448b48u: goto label_448b48;
        case 0x448b4cu: goto label_448b4c;
        case 0x448b50u: goto label_448b50;
        case 0x448b54u: goto label_448b54;
        case 0x448b58u: goto label_448b58;
        case 0x448b5cu: goto label_448b5c;
        case 0x448b60u: goto label_448b60;
        case 0x448b64u: goto label_448b64;
        case 0x448b68u: goto label_448b68;
        case 0x448b6cu: goto label_448b6c;
        case 0x448b70u: goto label_448b70;
        case 0x448b74u: goto label_448b74;
        case 0x448b78u: goto label_448b78;
        case 0x448b7cu: goto label_448b7c;
        case 0x448b80u: goto label_448b80;
        case 0x448b84u: goto label_448b84;
        case 0x448b88u: goto label_448b88;
        case 0x448b8cu: goto label_448b8c;
        case 0x448b90u: goto label_448b90;
        case 0x448b94u: goto label_448b94;
        case 0x448b98u: goto label_448b98;
        case 0x448b9cu: goto label_448b9c;
        case 0x448ba0u: goto label_448ba0;
        case 0x448ba4u: goto label_448ba4;
        case 0x448ba8u: goto label_448ba8;
        case 0x448bacu: goto label_448bac;
        case 0x448bb0u: goto label_448bb0;
        case 0x448bb4u: goto label_448bb4;
        case 0x448bb8u: goto label_448bb8;
        case 0x448bbcu: goto label_448bbc;
        case 0x448bc0u: goto label_448bc0;
        case 0x448bc4u: goto label_448bc4;
        case 0x448bc8u: goto label_448bc8;
        case 0x448bccu: goto label_448bcc;
        case 0x448bd0u: goto label_448bd0;
        case 0x448bd4u: goto label_448bd4;
        case 0x448bd8u: goto label_448bd8;
        case 0x448bdcu: goto label_448bdc;
        case 0x448be0u: goto label_448be0;
        case 0x448be4u: goto label_448be4;
        case 0x448be8u: goto label_448be8;
        case 0x448becu: goto label_448bec;
        case 0x448bf0u: goto label_448bf0;
        case 0x448bf4u: goto label_448bf4;
        case 0x448bf8u: goto label_448bf8;
        case 0x448bfcu: goto label_448bfc;
        case 0x448c00u: goto label_448c00;
        case 0x448c04u: goto label_448c04;
        case 0x448c08u: goto label_448c08;
        case 0x448c0cu: goto label_448c0c;
        case 0x448c10u: goto label_448c10;
        case 0x448c14u: goto label_448c14;
        case 0x448c18u: goto label_448c18;
        case 0x448c1cu: goto label_448c1c;
        case 0x448c20u: goto label_448c20;
        case 0x448c24u: goto label_448c24;
        case 0x448c28u: goto label_448c28;
        case 0x448c2cu: goto label_448c2c;
        case 0x448c30u: goto label_448c30;
        case 0x448c34u: goto label_448c34;
        case 0x448c38u: goto label_448c38;
        case 0x448c3cu: goto label_448c3c;
        case 0x448c40u: goto label_448c40;
        case 0x448c44u: goto label_448c44;
        case 0x448c48u: goto label_448c48;
        case 0x448c4cu: goto label_448c4c;
        case 0x448c50u: goto label_448c50;
        case 0x448c54u: goto label_448c54;
        case 0x448c58u: goto label_448c58;
        case 0x448c5cu: goto label_448c5c;
        case 0x448c60u: goto label_448c60;
        case 0x448c64u: goto label_448c64;
        case 0x448c68u: goto label_448c68;
        case 0x448c6cu: goto label_448c6c;
        case 0x448c70u: goto label_448c70;
        case 0x448c74u: goto label_448c74;
        case 0x448c78u: goto label_448c78;
        case 0x448c7cu: goto label_448c7c;
        case 0x448c80u: goto label_448c80;
        case 0x448c84u: goto label_448c84;
        case 0x448c88u: goto label_448c88;
        case 0x448c8cu: goto label_448c8c;
        case 0x448c90u: goto label_448c90;
        case 0x448c94u: goto label_448c94;
        case 0x448c98u: goto label_448c98;
        case 0x448c9cu: goto label_448c9c;
        case 0x448ca0u: goto label_448ca0;
        case 0x448ca4u: goto label_448ca4;
        case 0x448ca8u: goto label_448ca8;
        case 0x448cacu: goto label_448cac;
        case 0x448cb0u: goto label_448cb0;
        case 0x448cb4u: goto label_448cb4;
        case 0x448cb8u: goto label_448cb8;
        case 0x448cbcu: goto label_448cbc;
        case 0x448cc0u: goto label_448cc0;
        case 0x448cc4u: goto label_448cc4;
        case 0x448cc8u: goto label_448cc8;
        case 0x448cccu: goto label_448ccc;
        case 0x448cd0u: goto label_448cd0;
        case 0x448cd4u: goto label_448cd4;
        case 0x448cd8u: goto label_448cd8;
        case 0x448cdcu: goto label_448cdc;
        case 0x448ce0u: goto label_448ce0;
        case 0x448ce4u: goto label_448ce4;
        case 0x448ce8u: goto label_448ce8;
        case 0x448cecu: goto label_448cec;
        case 0x448cf0u: goto label_448cf0;
        case 0x448cf4u: goto label_448cf4;
        case 0x448cf8u: goto label_448cf8;
        case 0x448cfcu: goto label_448cfc;
        case 0x448d00u: goto label_448d00;
        case 0x448d04u: goto label_448d04;
        case 0x448d08u: goto label_448d08;
        case 0x448d0cu: goto label_448d0c;
        case 0x448d10u: goto label_448d10;
        case 0x448d14u: goto label_448d14;
        case 0x448d18u: goto label_448d18;
        case 0x448d1cu: goto label_448d1c;
        case 0x448d20u: goto label_448d20;
        case 0x448d24u: goto label_448d24;
        case 0x448d28u: goto label_448d28;
        case 0x448d2cu: goto label_448d2c;
        case 0x448d30u: goto label_448d30;
        case 0x448d34u: goto label_448d34;
        case 0x448d38u: goto label_448d38;
        case 0x448d3cu: goto label_448d3c;
        case 0x448d40u: goto label_448d40;
        case 0x448d44u: goto label_448d44;
        case 0x448d48u: goto label_448d48;
        case 0x448d4cu: goto label_448d4c;
        case 0x448d50u: goto label_448d50;
        case 0x448d54u: goto label_448d54;
        case 0x448d58u: goto label_448d58;
        case 0x448d5cu: goto label_448d5c;
        case 0x448d60u: goto label_448d60;
        case 0x448d64u: goto label_448d64;
        case 0x448d68u: goto label_448d68;
        case 0x448d6cu: goto label_448d6c;
        case 0x448d70u: goto label_448d70;
        case 0x448d74u: goto label_448d74;
        case 0x448d78u: goto label_448d78;
        case 0x448d7cu: goto label_448d7c;
        case 0x448d80u: goto label_448d80;
        case 0x448d84u: goto label_448d84;
        case 0x448d88u: goto label_448d88;
        case 0x448d8cu: goto label_448d8c;
        case 0x448d90u: goto label_448d90;
        case 0x448d94u: goto label_448d94;
        case 0x448d98u: goto label_448d98;
        case 0x448d9cu: goto label_448d9c;
        case 0x448da0u: goto label_448da0;
        case 0x448da4u: goto label_448da4;
        case 0x448da8u: goto label_448da8;
        case 0x448dacu: goto label_448dac;
        case 0x448db0u: goto label_448db0;
        case 0x448db4u: goto label_448db4;
        case 0x448db8u: goto label_448db8;
        case 0x448dbcu: goto label_448dbc;
        case 0x448dc0u: goto label_448dc0;
        case 0x448dc4u: goto label_448dc4;
        case 0x448dc8u: goto label_448dc8;
        case 0x448dccu: goto label_448dcc;
        case 0x448dd0u: goto label_448dd0;
        case 0x448dd4u: goto label_448dd4;
        case 0x448dd8u: goto label_448dd8;
        case 0x448ddcu: goto label_448ddc;
        case 0x448de0u: goto label_448de0;
        case 0x448de4u: goto label_448de4;
        case 0x448de8u: goto label_448de8;
        case 0x448decu: goto label_448dec;
        case 0x448df0u: goto label_448df0;
        case 0x448df4u: goto label_448df4;
        case 0x448df8u: goto label_448df8;
        case 0x448dfcu: goto label_448dfc;
        case 0x448e00u: goto label_448e00;
        case 0x448e04u: goto label_448e04;
        case 0x448e08u: goto label_448e08;
        case 0x448e0cu: goto label_448e0c;
        case 0x448e10u: goto label_448e10;
        case 0x448e14u: goto label_448e14;
        case 0x448e18u: goto label_448e18;
        case 0x448e1cu: goto label_448e1c;
        case 0x448e20u: goto label_448e20;
        case 0x448e24u: goto label_448e24;
        case 0x448e28u: goto label_448e28;
        case 0x448e2cu: goto label_448e2c;
        case 0x448e30u: goto label_448e30;
        case 0x448e34u: goto label_448e34;
        case 0x448e38u: goto label_448e38;
        case 0x448e3cu: goto label_448e3c;
        case 0x448e40u: goto label_448e40;
        case 0x448e44u: goto label_448e44;
        case 0x448e48u: goto label_448e48;
        case 0x448e4cu: goto label_448e4c;
        case 0x448e50u: goto label_448e50;
        case 0x448e54u: goto label_448e54;
        case 0x448e58u: goto label_448e58;
        case 0x448e5cu: goto label_448e5c;
        case 0x448e60u: goto label_448e60;
        case 0x448e64u: goto label_448e64;
        case 0x448e68u: goto label_448e68;
        case 0x448e6cu: goto label_448e6c;
        case 0x448e70u: goto label_448e70;
        case 0x448e74u: goto label_448e74;
        case 0x448e78u: goto label_448e78;
        case 0x448e7cu: goto label_448e7c;
        case 0x448e80u: goto label_448e80;
        case 0x448e84u: goto label_448e84;
        case 0x448e88u: goto label_448e88;
        case 0x448e8cu: goto label_448e8c;
        case 0x448e90u: goto label_448e90;
        case 0x448e94u: goto label_448e94;
        case 0x448e98u: goto label_448e98;
        case 0x448e9cu: goto label_448e9c;
        case 0x448ea0u: goto label_448ea0;
        case 0x448ea4u: goto label_448ea4;
        case 0x448ea8u: goto label_448ea8;
        case 0x448eacu: goto label_448eac;
        case 0x448eb0u: goto label_448eb0;
        case 0x448eb4u: goto label_448eb4;
        case 0x448eb8u: goto label_448eb8;
        case 0x448ebcu: goto label_448ebc;
        case 0x448ec0u: goto label_448ec0;
        case 0x448ec4u: goto label_448ec4;
        case 0x448ec8u: goto label_448ec8;
        case 0x448eccu: goto label_448ecc;
        case 0x448ed0u: goto label_448ed0;
        case 0x448ed4u: goto label_448ed4;
        case 0x448ed8u: goto label_448ed8;
        case 0x448edcu: goto label_448edc;
        case 0x448ee0u: goto label_448ee0;
        case 0x448ee4u: goto label_448ee4;
        case 0x448ee8u: goto label_448ee8;
        case 0x448eecu: goto label_448eec;
        case 0x448ef0u: goto label_448ef0;
        case 0x448ef4u: goto label_448ef4;
        case 0x448ef8u: goto label_448ef8;
        case 0x448efcu: goto label_448efc;
        case 0x448f00u: goto label_448f00;
        case 0x448f04u: goto label_448f04;
        case 0x448f08u: goto label_448f08;
        case 0x448f0cu: goto label_448f0c;
        case 0x448f10u: goto label_448f10;
        case 0x448f14u: goto label_448f14;
        case 0x448f18u: goto label_448f18;
        case 0x448f1cu: goto label_448f1c;
        case 0x448f20u: goto label_448f20;
        case 0x448f24u: goto label_448f24;
        case 0x448f28u: goto label_448f28;
        case 0x448f2cu: goto label_448f2c;
        case 0x448f30u: goto label_448f30;
        case 0x448f34u: goto label_448f34;
        case 0x448f38u: goto label_448f38;
        case 0x448f3cu: goto label_448f3c;
        case 0x448f40u: goto label_448f40;
        case 0x448f44u: goto label_448f44;
        case 0x448f48u: goto label_448f48;
        case 0x448f4cu: goto label_448f4c;
        default: break;
    }

    ctx->pc = 0x4485f0u;

label_4485f0:
    // 0x4485f0: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x4485f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
label_4485f4:
    // 0x4485f4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4485f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4485f8:
    // 0x4485f8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4485f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4485fc:
    // 0x4485fc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4485fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_448600:
    // 0x448600: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x448600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_448604:
    // 0x448604: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x448604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_448608:
    // 0x448608: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x448608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_44860c:
    // 0x44860c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x44860cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_448610:
    // 0x448610: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x448610u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_448614:
    // 0x448614: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x448614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_448618:
    // 0x448618: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x448618u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_44861c:
    // 0x44861c: 0x8c8301c4  lw          $v1, 0x1C4($a0)
    ctx->pc = 0x44861cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 452)));
label_448620:
    // 0x448620: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x448620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_448624:
    // 0x448624: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x448624u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_448628:
    // 0x448628: 0x1020023f  beqz        $at, . + 4 + (0x23F << 2)
label_44862c:
    if (ctx->pc == 0x44862Cu) {
        ctx->pc = 0x44862Cu;
            // 0x44862c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x448630u;
        goto label_448630;
    }
    ctx->pc = 0x448628u;
    {
        const bool branch_taken_0x448628 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x44862Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x448628u;
            // 0x44862c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448628) {
            ctx->pc = 0x448F28u;
            goto label_448f28;
        }
    }
    ctx->pc = 0x448630u;
label_448630:
    // 0x448630: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x448630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_448634:
    // 0x448634: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x448634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_448638:
    // 0x448638: 0x2484d710  addiu       $a0, $a0, -0x28F0
    ctx->pc = 0x448638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956816));
label_44863c:
    // 0x44863c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x44863cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_448640:
    // 0x448640: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x448640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_448644:
    // 0x448644: 0x600008  jr          $v1
label_448648:
    if (ctx->pc == 0x448648u) {
        ctx->pc = 0x44864Cu;
        goto label_44864c;
    }
    ctx->pc = 0x448644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x44864Cu: goto label_44864c;
            case 0x448768u: goto label_448768;
            case 0x448B74u: goto label_448b74;
            case 0x448C78u: goto label_448c78;
            case 0x448E34u: goto label_448e34;
            case 0x448F28u: goto label_448f28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x44864Cu;
label_44864c:
    // 0x44864c: 0xc62101cc  lwc1        $f1, 0x1CC($s1)
    ctx->pc = 0x44864cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_448650:
    // 0x448650: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x448650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_448654:
    // 0x448654: 0x0  nop
    ctx->pc = 0x448654u;
    // NOP
label_448658:
    // 0x448658: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x448658u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_44865c:
    // 0x44865c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x44865cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_448660:
    // 0x448660: 0x45000231  bc1f        . + 4 + (0x231 << 2)
label_448664:
    if (ctx->pc == 0x448664u) {
        ctx->pc = 0x448664u;
            // 0x448664: 0xe62101cc  swc1        $f1, 0x1CC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 460), bits); }
        ctx->pc = 0x448668u;
        goto label_448668;
    }
    ctx->pc = 0x448660u;
    {
        const bool branch_taken_0x448660 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x448664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x448660u;
            // 0x448664: 0xe62101cc  swc1        $f1, 0x1CC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 460), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x448660) {
            ctx->pc = 0x448F28u;
            goto label_448f28;
        }
    }
    ctx->pc = 0x448668u;
label_448668:
    // 0x448668: 0xe62001d0  swc1        $f0, 0x1D0($s1)
    ctx->pc = 0x448668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 464), bits); }
label_44866c:
    // 0x44866c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x44866cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_448670:
    // 0x448670: 0xae2201c4  sw          $v0, 0x1C4($s1)
    ctx->pc = 0x448670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 2));
label_448674:
    // 0x448674: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x448674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_448678:
    // 0x448678: 0x8e060d9c  lw          $a2, 0xD9C($s0)
    ctx->pc = 0x448678u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3484)));
label_44867c:
    // 0x44867c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x44867cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_448680:
    // 0x448680: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x448680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_448684:
    // 0x448684: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x448684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_448688:
    // 0x448688: 0xc51024  and         $v0, $a2, $a1
    ctx->pc = 0x448688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_44868c:
    // 0x44868c: 0xae020d9c  sw          $v0, 0xD9C($s0)
    ctx->pc = 0x44868cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3484), GPR_U32(ctx, 2));
label_448690:
    // 0x448690: 0x8e020d60  lw          $v0, 0xD60($s0)
    ctx->pc = 0x448690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_448694:
    // 0x448694: 0xa044001c  sb          $a0, 0x1C($v0)
    ctx->pc = 0x448694u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 4));
label_448698:
    // 0x448698: 0x8e120d74  lw          $s2, 0xD74($s0)
    ctx->pc = 0x448698u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_44869c:
    // 0x44869c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x44869cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4486a0:
    // 0x4486a0: 0x8e4202c8  lw          $v0, 0x2C8($s2)
    ctx->pc = 0x4486a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 712)));
label_4486a4:
    // 0x4486a4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4486a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4486a8:
    // 0x4486a8: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x4486a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_4486ac:
    // 0x4486ac: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x4486acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_4486b0:
    // 0x4486b0: 0xc0a545c  jal         func_295170
label_4486b4:
    if (ctx->pc == 0x4486B4u) {
        ctx->pc = 0x4486B4u;
            // 0x4486b4: 0x629824  and         $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x4486B8u;
        goto label_4486b8;
    }
    ctx->pc = 0x4486B0u;
    SET_GPR_U32(ctx, 31, 0x4486B8u);
    ctx->pc = 0x4486B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4486B0u;
            // 0x4486b4: 0x629824  and         $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4486B8u; }
        if (ctx->pc != 0x4486B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4486B8u; }
        if (ctx->pc != 0x4486B8u) { return; }
    }
    ctx->pc = 0x4486B8u;
label_4486b8:
    // 0x4486b8: 0xac53002c  sw          $s3, 0x2C($v0)
    ctx->pc = 0x4486b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 19));
label_4486bc:
    // 0x4486bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4486bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4486c0:
    // 0x4486c0: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x4486c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4486c4:
    // 0x4486c4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4486c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4486c8:
    // 0x4486c8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4486c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4486cc:
    // 0x4486cc: 0xc08bf20  jal         func_22FC80
label_4486d0:
    if (ctx->pc == 0x4486D0u) {
        ctx->pc = 0x4486D0u;
            // 0x4486d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4486D4u;
        goto label_4486d4;
    }
    ctx->pc = 0x4486CCu;
    SET_GPR_U32(ctx, 31, 0x4486D4u);
    ctx->pc = 0x4486D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4486CCu;
            // 0x4486d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4486D4u; }
        if (ctx->pc != 0x4486D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4486D4u; }
        if (ctx->pc != 0x4486D4u) { return; }
    }
    ctx->pc = 0x4486D4u;
label_4486d4:
    // 0x4486d4: 0x262401e0  addiu       $a0, $s1, 0x1E0
    ctx->pc = 0x4486d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
label_4486d8:
    // 0x4486d8: 0xc04cc04  jal         func_133010
label_4486dc:
    if (ctx->pc == 0x4486DCu) {
        ctx->pc = 0x4486DCu;
            // 0x4486dc: 0x26250120  addiu       $a1, $s1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
        ctx->pc = 0x4486E0u;
        goto label_4486e0;
    }
    ctx->pc = 0x4486D8u;
    SET_GPR_U32(ctx, 31, 0x4486E0u);
    ctx->pc = 0x4486DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4486D8u;
            // 0x4486dc: 0x26250120  addiu       $a1, $s1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4486E0u; }
        if (ctx->pc != 0x4486E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4486E0u; }
        if (ctx->pc != 0x4486E0u) { return; }
    }
    ctx->pc = 0x4486E0u;
label_4486e0:
    // 0x4486e0: 0x262401f0  addiu       $a0, $s1, 0x1F0
    ctx->pc = 0x4486e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
label_4486e4:
    // 0x4486e4: 0xc04c720  jal         func_131C80
label_4486e8:
    if (ctx->pc == 0x4486E8u) {
        ctx->pc = 0x4486E8u;
            // 0x4486e8: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x4486ECu;
        goto label_4486ec;
    }
    ctx->pc = 0x4486E4u;
    SET_GPR_U32(ctx, 31, 0x4486ECu);
    ctx->pc = 0x4486E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4486E4u;
            // 0x4486e8: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4486ECu; }
        if (ctx->pc != 0x4486ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4486ECu; }
        if (ctx->pc != 0x4486ECu) { return; }
    }
    ctx->pc = 0x4486ECu;
label_4486ec:
    // 0x4486ec: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x4486ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_4486f0:
    // 0x4486f0: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x4486f0u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4486f4:
    // 0x4486f4: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_4486f8:
    if (ctx->pc == 0x4486F8u) {
        ctx->pc = 0x4486F8u;
            // 0x4486f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4486FCu;
        goto label_4486fc;
    }
    ctx->pc = 0x4486F4u;
    {
        const bool branch_taken_0x4486f4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4486F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4486F4u;
            // 0x4486f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4486f4) {
            ctx->pc = 0x44870Cu;
            goto label_44870c;
        }
    }
    ctx->pc = 0x4486FCu;
label_4486fc:
    // 0x4486fc: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x4486fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_448700:
    // 0x448700: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_448704:
    if (ctx->pc == 0x448704u) {
        ctx->pc = 0x448708u;
        goto label_448708;
    }
    ctx->pc = 0x448700u;
    {
        const bool branch_taken_0x448700 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x448700) {
            ctx->pc = 0x44870Cu;
            goto label_44870c;
        }
    }
    ctx->pc = 0x448708u;
label_448708:
    // 0x448708: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x448708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_44870c:
    // 0x44870c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_448710:
    if (ctx->pc == 0x448710u) {
        ctx->pc = 0x448714u;
        goto label_448714;
    }
    ctx->pc = 0x44870Cu;
    {
        const bool branch_taken_0x44870c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x44870c) {
            ctx->pc = 0x448728u;
            goto label_448728;
        }
    }
    ctx->pc = 0x448714u;
label_448714:
    // 0x448714: 0xc075eb4  jal         func_1D7AD0
label_448718:
    if (ctx->pc == 0x448718u) {
        ctx->pc = 0x448718u;
            // 0x448718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44871Cu;
        goto label_44871c;
    }
    ctx->pc = 0x448714u;
    SET_GPR_U32(ctx, 31, 0x44871Cu);
    ctx->pc = 0x448718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448714u;
            // 0x448718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44871Cu; }
        if (ctx->pc != 0x44871Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44871Cu; }
        if (ctx->pc != 0x44871Cu) { return; }
    }
    ctx->pc = 0x44871Cu;
label_44871c:
    // 0x44871c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_448720:
    if (ctx->pc == 0x448720u) {
        ctx->pc = 0x448724u;
        goto label_448724;
    }
    ctx->pc = 0x44871Cu;
    {
        const bool branch_taken_0x44871c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44871c) {
            ctx->pc = 0x448728u;
            goto label_448728;
        }
    }
    ctx->pc = 0x448724u;
label_448724:
    // 0x448724: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x448724u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_448728:
    // 0x448728: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
label_44872c:
    if (ctx->pc == 0x44872Cu) {
        ctx->pc = 0x44872Cu;
            // 0x44872c: 0x8e040d60  lw          $a0, 0xD60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
        ctx->pc = 0x448730u;
        goto label_448730;
    }
    ctx->pc = 0x448728u;
    {
        const bool branch_taken_0x448728 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x448728) {
            ctx->pc = 0x44872Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x448728u;
            // 0x44872c: 0x8e040d60  lw          $a0, 0xD60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x448744u;
            goto label_448744;
        }
    }
    ctx->pc = 0x448730u;
label_448730:
    // 0x448730: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x448730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_448734:
    // 0x448734: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x448734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_448738:
    // 0x448738: 0x548301fc  bnel        $a0, $v1, . + 4 + (0x1FC << 2)
label_44873c:
    if (ctx->pc == 0x44873Cu) {
        ctx->pc = 0x44873Cu;
            // 0x44873c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x448740u;
        goto label_448740;
    }
    ctx->pc = 0x448738u;
    {
        const bool branch_taken_0x448738 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x448738) {
            ctx->pc = 0x44873Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x448738u;
            // 0x44873c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x448F2Cu;
            goto label_448f2c;
        }
    }
    ctx->pc = 0x448740u;
label_448740:
    // 0x448740: 0x8e040d60  lw          $a0, 0xD60($s0)
    ctx->pc = 0x448740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_448744:
    // 0x448744: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x448744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_448748:
    // 0x448748: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x448748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_44874c:
    // 0x44874c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x44874cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_448750:
    // 0x448750: 0x320f809  jalr        $t9
label_448754:
    if (ctx->pc == 0x448754u) {
        ctx->pc = 0x448754u;
            // 0x448754: 0x344513a9  ori         $a1, $v0, 0x13A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5033);
        ctx->pc = 0x448758u;
        goto label_448758;
    }
    ctx->pc = 0x448750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x448758u);
        ctx->pc = 0x448754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x448750u;
            // 0x448754: 0x344513a9  ori         $a1, $v0, 0x13A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5033);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x448758u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x448758u; }
            if (ctx->pc != 0x448758u) { return; }
        }
        }
    }
    ctx->pc = 0x448758u;
label_448758:
    // 0x448758: 0xc072a56  jal         func_1CA958
label_44875c:
    if (ctx->pc == 0x44875Cu) {
        ctx->pc = 0x44875Cu;
            // 0x44875c: 0x92240214  lbu         $a0, 0x214($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 532)));
        ctx->pc = 0x448760u;
        goto label_448760;
    }
    ctx->pc = 0x448758u;
    SET_GPR_U32(ctx, 31, 0x448760u);
    ctx->pc = 0x44875Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448758u;
            // 0x44875c: 0x92240214  lbu         $a0, 0x214($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 532)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA958u;
    if (runtime->hasFunction(0x1CA958u)) {
        auto targetFn = runtime->lookupFunction(0x1CA958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448760u; }
        if (ctx->pc != 0x448760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA958_0x1ca958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448760u; }
        if (ctx->pc != 0x448760u) { return; }
    }
    ctx->pc = 0x448760u;
label_448760:
    // 0x448760: 0x100001f1  b           . + 4 + (0x1F1 << 2)
label_448764:
    if (ctx->pc == 0x448764u) {
        ctx->pc = 0x448768u;
        goto label_448768;
    }
    ctx->pc = 0x448760u;
    {
        const bool branch_taken_0x448760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x448760) {
            ctx->pc = 0x448F28u;
            goto label_448f28;
        }
    }
    ctx->pc = 0x448768u;
label_448768:
    // 0x448768: 0x8e2201d4  lw          $v0, 0x1D4($s1)
    ctx->pc = 0x448768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_44876c:
    // 0x44876c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x44876cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_448770:
    // 0x448770: 0x262501e0  addiu       $a1, $s1, 0x1E0
    ctx->pc = 0x448770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
label_448774:
    // 0x448774: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x448774u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_448778:
    // 0x448778: 0xc04cc04  jal         func_133010
label_44877c:
    if (ctx->pc == 0x44877Cu) {
        ctx->pc = 0x44877Cu;
            // 0x44877c: 0x26330030  addiu       $s3, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->pc = 0x448780u;
        goto label_448780;
    }
    ctx->pc = 0x448778u;
    SET_GPR_U32(ctx, 31, 0x448780u);
    ctx->pc = 0x44877Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448778u;
            // 0x44877c: 0x26330030  addiu       $s3, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448780u; }
        if (ctx->pc != 0x448780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448780u; }
        if (ctx->pc != 0x448780u) { return; }
    }
    ctx->pc = 0x448780u;
label_448780:
    // 0x448780: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x448780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_448784:
    // 0x448784: 0xc04c720  jal         func_131C80
label_448788:
    if (ctx->pc == 0x448788u) {
        ctx->pc = 0x448788u;
            // 0x448788: 0x262501f0  addiu       $a1, $s1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
        ctx->pc = 0x44878Cu;
        goto label_44878c;
    }
    ctx->pc = 0x448784u;
    SET_GPR_U32(ctx, 31, 0x44878Cu);
    ctx->pc = 0x448788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448784u;
            // 0x448788: 0x262501f0  addiu       $a1, $s1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44878Cu; }
        if (ctx->pc != 0x44878Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44878Cu; }
        if (ctx->pc != 0x44878Cu) { return; }
    }
    ctx->pc = 0x44878Cu;
label_44878c:
    // 0x44878c: 0x262401e0  addiu       $a0, $s1, 0x1E0
    ctx->pc = 0x44878cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
label_448790:
    // 0x448790: 0xc04cc04  jal         func_133010
label_448794:
    if (ctx->pc == 0x448794u) {
        ctx->pc = 0x448794u;
            // 0x448794: 0x266500f0  addiu       $a1, $s3, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
        ctx->pc = 0x448798u;
        goto label_448798;
    }
    ctx->pc = 0x448790u;
    SET_GPR_U32(ctx, 31, 0x448798u);
    ctx->pc = 0x448794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448790u;
            // 0x448794: 0x266500f0  addiu       $a1, $s3, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448798u; }
        if (ctx->pc != 0x448798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448798u; }
        if (ctx->pc != 0x448798u) { return; }
    }
    ctx->pc = 0x448798u;
label_448798:
    // 0x448798: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x448798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_44879c:
    // 0x44879c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x44879cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_4487a0:
    // 0x4487a0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4487a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4487a4:
    // 0x4487a4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4487a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4487a8:
    // 0x4487a8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x4487a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4487ac:
    // 0x4487ac: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x4487acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4487b0:
    // 0x4487b0: 0xc089688  jal         func_225A20
label_4487b4:
    if (ctx->pc == 0x4487B4u) {
        ctx->pc = 0x4487B4u;
            // 0x4487b4: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->pc = 0x4487B8u;
        goto label_4487b8;
    }
    ctx->pc = 0x4487B0u;
    SET_GPR_U32(ctx, 31, 0x4487B8u);
    ctx->pc = 0x4487B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4487B0u;
            // 0x4487b4: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4487B8u; }
        if (ctx->pc != 0x4487B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4487B8u; }
        if (ctx->pc != 0x4487B8u) { return; }
    }
    ctx->pc = 0x4487B8u;
label_4487b8:
    // 0x4487b8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x4487b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4487bc:
    // 0x4487bc: 0xc0a3828  jal         func_28E0A0
label_4487c0:
    if (ctx->pc == 0x4487C0u) {
        ctx->pc = 0x4487C0u;
            // 0x4487c0: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x4487C4u;
        goto label_4487c4;
    }
    ctx->pc = 0x4487BCu;
    SET_GPR_U32(ctx, 31, 0x4487C4u);
    ctx->pc = 0x4487C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4487BCu;
            // 0x4487c0: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0A0u;
    if (runtime->hasFunction(0x28E0A0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4487C4u; }
        if (ctx->pc != 0x4487C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0A0_0x28e0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4487C4u; }
        if (ctx->pc != 0x4487C4u) { return; }
    }
    ctx->pc = 0x4487C4u;
label_4487c4:
    // 0x4487c4: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x4487c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4487c8:
    // 0x4487c8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x4487c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_4487cc:
    // 0x4487cc: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x4487ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4487d0:
    // 0x4487d0: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x4487d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_4487d4:
    // 0x4487d4: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x4487d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4487d8:
    // 0x4487d8: 0xe7a002d8  swc1        $f0, 0x2D8($sp)
    ctx->pc = 0x4487d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 728), bits); }
label_4487dc:
    // 0x4487dc: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x4487dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4487e0:
    // 0x4487e0: 0xe7a202d0  swc1        $f2, 0x2D0($sp)
    ctx->pc = 0x4487e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
label_4487e4:
    // 0x4487e4: 0xe7a102d4  swc1        $f1, 0x2D4($sp)
    ctx->pc = 0x4487e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 724), bits); }
label_4487e8:
    // 0x4487e8: 0xc04cc04  jal         func_133010
label_4487ec:
    if (ctx->pc == 0x4487ECu) {
        ctx->pc = 0x4487ECu;
            // 0x4487ec: 0xe7a002dc  swc1        $f0, 0x2DC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 732), bits); }
        ctx->pc = 0x4487F0u;
        goto label_4487f0;
    }
    ctx->pc = 0x4487E8u;
    SET_GPR_U32(ctx, 31, 0x4487F0u);
    ctx->pc = 0x4487ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4487E8u;
            // 0x4487ec: 0xe7a002dc  swc1        $f0, 0x2DC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 732), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4487F0u; }
        if (ctx->pc != 0x4487F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4487F0u; }
        if (ctx->pc != 0x4487F0u) { return; }
    }
    ctx->pc = 0x4487F0u;
label_4487f0:
    // 0x4487f0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x4487f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_4487f4:
    // 0x4487f4: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x4487f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
label_4487f8:
    // 0x4487f8: 0xc04cc44  jal         func_133110
label_4487fc:
    if (ctx->pc == 0x4487FCu) {
        ctx->pc = 0x4487FCu;
            // 0x4487fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x448800u;
        goto label_448800;
    }
    ctx->pc = 0x4487F8u;
    SET_GPR_U32(ctx, 31, 0x448800u);
    ctx->pc = 0x4487FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4487F8u;
            // 0x4487fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448800u; }
        if (ctx->pc != 0x448800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448800u; }
        if (ctx->pc != 0x448800u) { return; }
    }
    ctx->pc = 0x448800u;
label_448800:
    // 0x448800: 0xc7a10158  lwc1        $f1, 0x158($sp)
    ctx->pc = 0x448800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_448804:
    // 0x448804: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x448804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_448808:
    // 0x448808: 0xc7ac0154  lwc1        $f12, 0x154($sp)
    ctx->pc = 0x448808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_44880c:
    // 0x44880c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x44880cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_448810:
    // 0x448810: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x448810u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_448814:
    // 0x448814: 0x46000344  c1          0x344
    ctx->pc = 0x448814u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_448818:
    // 0x448818: 0x0  nop
    ctx->pc = 0x448818u;
    // NOP
label_44881c:
    // 0x44881c: 0x0  nop
    ctx->pc = 0x44881cu;
    // NOP
label_448820:
    // 0x448820: 0xc04780a  jal         func_11E028
label_448824:
    if (ctx->pc == 0x448824u) {
        ctx->pc = 0x448828u;
        goto label_448828;
    }
    ctx->pc = 0x448820u;
    SET_GPR_U32(ctx, 31, 0x448828u);
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448828u; }
        if (ctx->pc != 0x448828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448828u; }
        if (ctx->pc != 0x448828u) { return; }
    }
    ctx->pc = 0x448828u;
label_448828:
    // 0x448828: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x448828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_44882c:
    // 0x44882c: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x44882cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_448830:
    // 0x448830: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x448830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_448834:
    // 0x448834: 0x0  nop
    ctx->pc = 0x448834u;
    // NOP
label_448838:
    // 0x448838: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x448838u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_44883c:
    // 0x44883c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x44883cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_448840:
    // 0x448840: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x448840u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_448844:
    // 0x448844: 0xc7ac0150  lwc1        $f12, 0x150($sp)
    ctx->pc = 0x448844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_448848:
    // 0x448848: 0xc7ad0158  lwc1        $f13, 0x158($sp)
    ctx->pc = 0x448848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_44884c:
    // 0x44884c: 0xc04780a  jal         func_11E028
label_448850:
    if (ctx->pc == 0x448850u) {
        ctx->pc = 0x448850u;
            // 0x448850: 0x2a023  negu        $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->pc = 0x448854u;
        goto label_448854;
    }
    ctx->pc = 0x44884Cu;
    SET_GPR_U32(ctx, 31, 0x448854u);
    ctx->pc = 0x448850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44884Cu;
            // 0x448850: 0x2a023  negu        $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448854u; }
        if (ctx->pc != 0x448854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448854u; }
        if (ctx->pc != 0x448854u) { return; }
    }
    ctx->pc = 0x448854u;
label_448854:
    // 0x448854: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x448854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_448858:
    // 0x448858: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x448858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_44885c:
    // 0x44885c: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x44885cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_448860:
    // 0x448860: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x448860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_448864:
    // 0x448864: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x448864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_448868:
    // 0x448868: 0x0  nop
    ctx->pc = 0x448868u;
    // NOP
label_44886c:
    // 0x44886c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x44886cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_448870:
    // 0x448870: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x448870u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_448874:
    // 0x448874: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x448874u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_448878:
    // 0x448878: 0xc04ca18  jal         func_132860
label_44887c:
    if (ctx->pc == 0x44887Cu) {
        ctx->pc = 0x44887Cu;
            // 0x44887c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x448880u;
        goto label_448880;
    }
    ctx->pc = 0x448878u;
    SET_GPR_U32(ctx, 31, 0x448880u);
    ctx->pc = 0x44887Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448878u;
            // 0x44887c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448880u; }
        if (ctx->pc != 0x448880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448880u; }
        if (ctx->pc != 0x448880u) { return; }
    }
    ctx->pc = 0x448880u;
label_448880:
    // 0x448880: 0x262401f0  addiu       $a0, $s1, 0x1F0
    ctx->pc = 0x448880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
label_448884:
    // 0x448884: 0x27a502c0  addiu       $a1, $sp, 0x2C0
    ctx->pc = 0x448884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_448888:
    // 0x448888: 0xc04c72c  jal         func_131CB0
label_44888c:
    if (ctx->pc == 0x44888Cu) {
        ctx->pc = 0x44888Cu;
            // 0x44888c: 0x27a602d0  addiu       $a2, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->pc = 0x448890u;
        goto label_448890;
    }
    ctx->pc = 0x448888u;
    SET_GPR_U32(ctx, 31, 0x448890u);
    ctx->pc = 0x44888Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448888u;
            // 0x44888c: 0x27a602d0  addiu       $a2, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448890u; }
        if (ctx->pc != 0x448890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448890u; }
        if (ctx->pc != 0x448890u) { return; }
    }
    ctx->pc = 0x448890u;
label_448890:
    // 0x448890: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x448890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_448894:
    // 0x448894: 0xc04f278  jal         func_13C9E0
label_448898:
    if (ctx->pc == 0x448898u) {
        ctx->pc = 0x448898u;
            // 0x448898: 0x27a502c0  addiu       $a1, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->pc = 0x44889Cu;
        goto label_44889c;
    }
    ctx->pc = 0x448894u;
    SET_GPR_U32(ctx, 31, 0x44889Cu);
    ctx->pc = 0x448898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448894u;
            // 0x448898: 0x27a502c0  addiu       $a1, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44889Cu; }
        if (ctx->pc != 0x44889Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44889Cu; }
        if (ctx->pc != 0x44889Cu) { return; }
    }
    ctx->pc = 0x44889Cu;
label_44889c:
    // 0x44889c: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x44889cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_4488a0:
    // 0x4488a0: 0xc04ce80  jal         func_133A00
label_4488a4:
    if (ctx->pc == 0x4488A4u) {
        ctx->pc = 0x4488A4u;
            // 0x4488a4: 0x262501e0  addiu       $a1, $s1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
        ctx->pc = 0x4488A8u;
        goto label_4488a8;
    }
    ctx->pc = 0x4488A0u;
    SET_GPR_U32(ctx, 31, 0x4488A8u);
    ctx->pc = 0x4488A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4488A0u;
            // 0x4488a4: 0x262501e0  addiu       $a1, $s1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4488A8u; }
        if (ctx->pc != 0x4488A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4488A8u; }
        if (ctx->pc != 0x4488A8u) { return; }
    }
    ctx->pc = 0x4488A8u;
label_4488a8:
    // 0x4488a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4488a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4488ac:
    // 0x4488ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4488acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4488b0:
    // 0x4488b0: 0xc0d87e0  jal         func_361F80
label_4488b4:
    if (ctx->pc == 0x4488B4u) {
        ctx->pc = 0x4488B4u;
            // 0x4488b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4488B8u;
        goto label_4488b8;
    }
    ctx->pc = 0x4488B0u;
    SET_GPR_U32(ctx, 31, 0x4488B8u);
    ctx->pc = 0x4488B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4488B0u;
            // 0x4488b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361F80u;
    if (runtime->hasFunction(0x361F80u)) {
        auto targetFn = runtime->lookupFunction(0x361F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4488B8u; }
        if (ctx->pc != 0x4488B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361F80_0x361f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4488B8u; }
        if (ctx->pc != 0x4488B8u) { return; }
    }
    ctx->pc = 0x4488B8u;
label_4488b8:
    // 0x4488b8: 0x520000a9  beql        $s0, $zero, . + 4 + (0xA9 << 2)
label_4488bc:
    if (ctx->pc == 0x4488BCu) {
        ctx->pc = 0x4488BCu;
            // 0x4488bc: 0x96640110  lhu         $a0, 0x110($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 272)));
        ctx->pc = 0x4488C0u;
        goto label_4488c0;
    }
    ctx->pc = 0x4488B8u;
    {
        const bool branch_taken_0x4488b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4488b8) {
            ctx->pc = 0x4488BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4488B8u;
            // 0x4488bc: 0x96640110  lhu         $a0, 0x110($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x448B60u;
            goto label_448b60;
        }
    }
    ctx->pc = 0x4488C0u;
label_4488c0:
    // 0x4488c0: 0xc6600120  lwc1        $f0, 0x120($s3)
    ctx->pc = 0x4488c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4488c4:
    // 0x4488c4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x4488c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4488c8:
    // 0x4488c8: 0xe6000de4  swc1        $f0, 0xDE4($s0)
    ctx->pc = 0x4488c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3556), bits); }
label_4488cc:
    // 0x4488cc: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x4488ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_4488d0:
    // 0x4488d0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4488d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4488d4:
    // 0x4488d4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4488d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4488d8:
    // 0x4488d8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x4488d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4488dc:
    // 0x4488dc: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x4488dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4488e0:
    // 0x4488e0: 0xc089688  jal         func_225A20
label_4488e4:
    if (ctx->pc == 0x4488E4u) {
        ctx->pc = 0x4488E4u;
            // 0x4488e4: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->pc = 0x4488E8u;
        goto label_4488e8;
    }
    ctx->pc = 0x4488E0u;
    SET_GPR_U32(ctx, 31, 0x4488E8u);
    ctx->pc = 0x4488E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4488E0u;
            // 0x4488e4: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4488E8u; }
        if (ctx->pc != 0x4488E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4488E8u; }
        if (ctx->pc != 0x4488E8u) { return; }
    }
    ctx->pc = 0x4488E8u;
label_4488e8:
    // 0x4488e8: 0xc7ac00f0  lwc1        $f12, 0xF0($sp)
    ctx->pc = 0x4488e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4488ec:
    // 0x4488ec: 0xc7ad00f4  lwc1        $f13, 0xF4($sp)
    ctx->pc = 0x4488ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4488f0:
    // 0x4488f0: 0xc7ae00f8  lwc1        $f14, 0xF8($sp)
    ctx->pc = 0x4488f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4488f4:
    // 0x4488f4: 0xc04cbd8  jal         func_132F60
label_4488f8:
    if (ctx->pc == 0x4488F8u) {
        ctx->pc = 0x4488F8u;
            // 0x4488f8: 0x27a40260  addiu       $a0, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->pc = 0x4488FCu;
        goto label_4488fc;
    }
    ctx->pc = 0x4488F4u;
    SET_GPR_U32(ctx, 31, 0x4488FCu);
    ctx->pc = 0x4488F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4488F4u;
            // 0x4488f8: 0x27a40260  addiu       $a0, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4488FCu; }
        if (ctx->pc != 0x4488FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4488FCu; }
        if (ctx->pc != 0x4488FCu) { return; }
    }
    ctx->pc = 0x4488FCu;
label_4488fc:
    // 0x4488fc: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x4488fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_448900:
    // 0x448900: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x448900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_448904:
    // 0x448904: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x448904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_448908:
    // 0x448908: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x448908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_44890c:
    // 0x44890c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x44890cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_448910:
    // 0x448910: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x448910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_448914:
    // 0x448914: 0xc089688  jal         func_225A20
label_448918:
    if (ctx->pc == 0x448918u) {
        ctx->pc = 0x448918u;
            // 0x448918: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->pc = 0x44891Cu;
        goto label_44891c;
    }
    ctx->pc = 0x448914u;
    SET_GPR_U32(ctx, 31, 0x44891Cu);
    ctx->pc = 0x448918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448914u;
            // 0x448918: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44891Cu; }
        if (ctx->pc != 0x44891Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44891Cu; }
        if (ctx->pc != 0x44891Cu) { return; }
    }
    ctx->pc = 0x44891Cu;
label_44891c:
    // 0x44891c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x44891cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_448920:
    // 0x448920: 0xc0a3828  jal         func_28E0A0
label_448924:
    if (ctx->pc == 0x448924u) {
        ctx->pc = 0x448924u;
            // 0x448924: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x448928u;
        goto label_448928;
    }
    ctx->pc = 0x448920u;
    SET_GPR_U32(ctx, 31, 0x448928u);
    ctx->pc = 0x448924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448920u;
            // 0x448924: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0A0u;
    if (runtime->hasFunction(0x28E0A0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448928u; }
        if (ctx->pc != 0x448928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0A0_0x28e0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448928u; }
        if (ctx->pc != 0x448928u) { return; }
    }
    ctx->pc = 0x448928u;
label_448928:
    // 0x448928: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x448928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44892c:
    // 0x44892c: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x44892cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_448930:
    // 0x448930: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x448930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_448934:
    // 0x448934: 0x27a50280  addiu       $a1, $sp, 0x280
    ctx->pc = 0x448934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_448938:
    // 0x448938: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x448938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44893c:
    // 0x44893c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x44893cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_448940:
    // 0x448940: 0xe7a00278  swc1        $f0, 0x278($sp)
    ctx->pc = 0x448940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
label_448944:
    // 0x448944: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x448944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_448948:
    // 0x448948: 0xe7a20270  swc1        $f2, 0x270($sp)
    ctx->pc = 0x448948u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
label_44894c:
    // 0x44894c: 0xe7a10274  swc1        $f1, 0x274($sp)
    ctx->pc = 0x44894cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
label_448950:
    // 0x448950: 0xc04cca0  jal         func_133280
label_448954:
    if (ctx->pc == 0x448954u) {
        ctx->pc = 0x448954u;
            // 0x448954: 0xe7a0027c  swc1        $f0, 0x27C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
        ctx->pc = 0x448958u;
        goto label_448958;
    }
    ctx->pc = 0x448950u;
    SET_GPR_U32(ctx, 31, 0x448958u);
    ctx->pc = 0x448954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448950u;
            // 0x448954: 0xe7a0027c  swc1        $f0, 0x27C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448958u; }
        if (ctx->pc != 0x448958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448958u; }
        if (ctx->pc != 0x448958u) { return; }
    }
    ctx->pc = 0x448958u;
label_448958:
    // 0x448958: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x448958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_44895c:
    // 0x44895c: 0x27a502c0  addiu       $a1, $sp, 0x2C0
    ctx->pc = 0x44895cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_448960:
    // 0x448960: 0xc04c72c  jal         func_131CB0
label_448964:
    if (ctx->pc == 0x448964u) {
        ctx->pc = 0x448964u;
            // 0x448964: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x448968u;
        goto label_448968;
    }
    ctx->pc = 0x448960u;
    SET_GPR_U32(ctx, 31, 0x448968u);
    ctx->pc = 0x448964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448960u;
            // 0x448964: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448968u; }
        if (ctx->pc != 0x448968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448968u; }
        if (ctx->pc != 0x448968u) { return; }
    }
    ctx->pc = 0x448968u;
label_448968:
    // 0x448968: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x448968u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
label_44896c:
    // 0x44896c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44896cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_448970:
    // 0x448970: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x448970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_448974:
    // 0x448974: 0x27a60270  addiu       $a2, $sp, 0x270
    ctx->pc = 0x448974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_448978:
    // 0x448978: 0xc122c1c  jal         func_48B070
label_44897c:
    if (ctx->pc == 0x44897Cu) {
        ctx->pc = 0x44897Cu;
            // 0x44897c: 0x24e7d600  addiu       $a3, $a3, -0x2A00 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956544));
        ctx->pc = 0x448980u;
        goto label_448980;
    }
    ctx->pc = 0x448978u;
    SET_GPR_U32(ctx, 31, 0x448980u);
    ctx->pc = 0x44897Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448978u;
            // 0x44897c: 0x24e7d600  addiu       $a3, $a3, -0x2A00 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B070u;
    if (runtime->hasFunction(0x48B070u)) {
        auto targetFn = runtime->lookupFunction(0x48B070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448980u; }
        if (ctx->pc != 0x448980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B070_0x48b070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448980u; }
        if (ctx->pc != 0x448980u) { return; }
    }
    ctx->pc = 0x448980u;
label_448980:
    // 0x448980: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x448980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_448984:
    // 0x448984: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x448984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_448988:
    // 0x448988: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x448988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_44898c:
    // 0x44898c: 0xc122be4  jal         func_48AF90
label_448990:
    if (ctx->pc == 0x448990u) {
        ctx->pc = 0x448990u;
            // 0x448990: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x448994u;
        goto label_448994;
    }
    ctx->pc = 0x44898Cu;
    SET_GPR_U32(ctx, 31, 0x448994u);
    ctx->pc = 0x448990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44898Cu;
            // 0x448990: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AF90u;
    if (runtime->hasFunction(0x48AF90u)) {
        auto targetFn = runtime->lookupFunction(0x48AF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448994u; }
        if (ctx->pc != 0x448994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AF90_0x48af90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448994u; }
        if (ctx->pc != 0x448994u) { return; }
    }
    ctx->pc = 0x448994u;
label_448994:
    // 0x448994: 0x8e020d60  lw          $v0, 0xD60($s0)
    ctx->pc = 0x448994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_448998:
    // 0x448998: 0x80450004  lb          $a1, 0x4($v0)
    ctx->pc = 0x448998u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_44899c:
    // 0x44899c: 0xc0fbac4  jal         func_3EEB10
label_4489a0:
    if (ctx->pc == 0x4489A0u) {
        ctx->pc = 0x4489A0u;
            // 0x4489a0: 0x8e2401d4  lw          $a0, 0x1D4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
        ctx->pc = 0x4489A4u;
        goto label_4489a4;
    }
    ctx->pc = 0x44899Cu;
    SET_GPR_U32(ctx, 31, 0x4489A4u);
    ctx->pc = 0x4489A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44899Cu;
            // 0x4489a0: 0x8e2401d4  lw          $a0, 0x1D4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EEB10u;
    if (runtime->hasFunction(0x3EEB10u)) {
        auto targetFn = runtime->lookupFunction(0x3EEB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4489A4u; }
        if (ctx->pc != 0x4489A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EEB10_0x3eeb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4489A4u; }
        if (ctx->pc != 0x4489A4u) { return; }
    }
    ctx->pc = 0x4489A4u;
label_4489a4:
    // 0x4489a4: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x4489a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_4489a8:
    // 0x4489a8: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x4489a8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4489ac:
    // 0x4489ac: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_4489b0:
    if (ctx->pc == 0x4489B0u) {
        ctx->pc = 0x4489B0u;
            // 0x4489b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4489B4u;
        goto label_4489b4;
    }
    ctx->pc = 0x4489ACu;
    {
        const bool branch_taken_0x4489ac = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4489B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4489ACu;
            // 0x4489b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4489ac) {
            ctx->pc = 0x4489C4u;
            goto label_4489c4;
        }
    }
    ctx->pc = 0x4489B4u;
label_4489b4:
    // 0x4489b4: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x4489b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_4489b8:
    // 0x4489b8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4489bc:
    if (ctx->pc == 0x4489BCu) {
        ctx->pc = 0x4489C0u;
        goto label_4489c0;
    }
    ctx->pc = 0x4489B8u;
    {
        const bool branch_taken_0x4489b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4489b8) {
            ctx->pc = 0x4489C4u;
            goto label_4489c4;
        }
    }
    ctx->pc = 0x4489C0u;
label_4489c0:
    // 0x4489c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4489c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4489c4:
    // 0x4489c4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_4489c8:
    if (ctx->pc == 0x4489C8u) {
        ctx->pc = 0x4489CCu;
        goto label_4489cc;
    }
    ctx->pc = 0x4489C4u;
    {
        const bool branch_taken_0x4489c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4489c4) {
            ctx->pc = 0x4489E0u;
            goto label_4489e0;
        }
    }
    ctx->pc = 0x4489CCu;
label_4489cc:
    // 0x4489cc: 0xc075eb4  jal         func_1D7AD0
label_4489d0:
    if (ctx->pc == 0x4489D0u) {
        ctx->pc = 0x4489D0u;
            // 0x4489d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4489D4u;
        goto label_4489d4;
    }
    ctx->pc = 0x4489CCu;
    SET_GPR_U32(ctx, 31, 0x4489D4u);
    ctx->pc = 0x4489D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4489CCu;
            // 0x4489d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4489D4u; }
        if (ctx->pc != 0x4489D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4489D4u; }
        if (ctx->pc != 0x4489D4u) { return; }
    }
    ctx->pc = 0x4489D4u;
label_4489d4:
    // 0x4489d4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4489d8:
    if (ctx->pc == 0x4489D8u) {
        ctx->pc = 0x4489DCu;
        goto label_4489dc;
    }
    ctx->pc = 0x4489D4u;
    {
        const bool branch_taken_0x4489d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4489d4) {
            ctx->pc = 0x4489E0u;
            goto label_4489e0;
        }
    }
    ctx->pc = 0x4489DCu;
label_4489dc:
    // 0x4489dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4489dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4489e0:
    // 0x4489e0: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
label_4489e4:
    if (ctx->pc == 0x4489E4u) {
        ctx->pc = 0x4489E4u;
            // 0x4489e4: 0x8e240210  lw          $a0, 0x210($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
        ctx->pc = 0x4489E8u;
        goto label_4489e8;
    }
    ctx->pc = 0x4489E0u;
    {
        const bool branch_taken_0x4489e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x4489e0) {
            ctx->pc = 0x4489E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4489E0u;
            // 0x4489e4: 0x8e240210  lw          $a0, 0x210($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4489FCu;
            goto label_4489fc;
        }
    }
    ctx->pc = 0x4489E8u;
label_4489e8:
    // 0x4489e8: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x4489e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_4489ec:
    // 0x4489ec: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4489ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4489f0:
    // 0x4489f0: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_4489f4:
    if (ctx->pc == 0x4489F4u) {
        ctx->pc = 0x4489F4u;
            // 0x4489f4: 0xc6630108  lwc1        $f3, 0x108($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x4489F8u;
        goto label_4489f8;
    }
    ctx->pc = 0x4489F0u;
    {
        const bool branch_taken_0x4489f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4489f0) {
            ctx->pc = 0x4489F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4489F0u;
            // 0x4489f4: 0xc6630108  lwc1        $f3, 0x108($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x448A08u;
            goto label_448a08;
        }
    }
    ctx->pc = 0x4489F8u;
label_4489f8:
    // 0x4489f8: 0x8e240210  lw          $a0, 0x210($s1)
    ctx->pc = 0x4489f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_4489fc:
    // 0x4489fc: 0xc10c9d8  jal         func_432760
label_448a00:
    if (ctx->pc == 0x448A00u) {
        ctx->pc = 0x448A04u;
        goto label_448a04;
    }
    ctx->pc = 0x4489FCu;
    SET_GPR_U32(ctx, 31, 0x448A04u);
    ctx->pc = 0x432760u;
    if (runtime->hasFunction(0x432760u)) {
        auto targetFn = runtime->lookupFunction(0x432760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448A04u; }
        if (ctx->pc != 0x448A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432760_0x432760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448A04u; }
        if (ctx->pc != 0x448A04u) { return; }
    }
    ctx->pc = 0x448A04u;
label_448a04:
    // 0x448a04: 0xc6630108  lwc1        $f3, 0x108($s3)
    ctx->pc = 0x448a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_448a08:
    // 0x448a08: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x448a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
label_448a0c:
    // 0x448a0c: 0xc6620104  lwc1        $f2, 0x104($s3)
    ctx->pc = 0x448a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_448a10:
    // 0x448a10: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x448a10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_448a14:
    // 0x448a14: 0x0  nop
    ctx->pc = 0x448a14u;
    // NOP
label_448a18:
    // 0x448a18: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x448a18u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_448a1c:
    // 0x448a1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x448a1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_448a20:
    // 0x448a20: 0x4602185d  msub.s      $f1, $f3, $f2
    ctx->pc = 0x448a20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_448a24:
    // 0x448a24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x448a24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_448a28:
    // 0x448a28: 0x4500004c  bc1f        . + 4 + (0x4C << 2)
label_448a2c:
    if (ctx->pc == 0x448A2Cu) {
        ctx->pc = 0x448A30u;
        goto label_448a30;
    }
    ctx->pc = 0x448A28u;
    {
        const bool branch_taken_0x448a28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x448a28) {
            ctx->pc = 0x448B5Cu;
            goto label_448b5c;
        }
    }
    ctx->pc = 0x448A30u;
label_448a30:
    // 0x448a30: 0x8e040550  lw          $a0, 0x550($s0)
    ctx->pc = 0x448a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_448a34:
    // 0x448a34: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x448a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_448a38:
    // 0x448a38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x448a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_448a3c:
    // 0x448a3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x448a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_448a40:
    // 0x448a40: 0x8083010e  lb          $v1, 0x10E($a0)
    ctx->pc = 0x448a40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 270)));
label_448a44:
    // 0x448a44: 0x8082010d  lb          $v0, 0x10D($a0)
    ctx->pc = 0x448a44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 269)));
label_448a48:
    // 0x448a48: 0xa082010e  sb          $v0, 0x10E($a0)
    ctx->pc = 0x448a48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 270), (uint8_t)GPR_U32(ctx, 2));
label_448a4c:
    // 0x448a4c: 0xa083010d  sb          $v1, 0x10D($a0)
    ctx->pc = 0x448a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 269), (uint8_t)GPR_U32(ctx, 3));
label_448a50:
    // 0x448a50: 0x8e040d70  lw          $a0, 0xD70($s0)
    ctx->pc = 0x448a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_448a54:
    // 0x448a54: 0xc0bdf9c  jal         func_2F7E70
label_448a58:
    if (ctx->pc == 0x448A58u) {
        ctx->pc = 0x448A58u;
            // 0x448a58: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x448A5Cu;
        goto label_448a5c;
    }
    ctx->pc = 0x448A54u;
    SET_GPR_U32(ctx, 31, 0x448A5Cu);
    ctx->pc = 0x448A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448A54u;
            // 0x448a58: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448A5Cu; }
        if (ctx->pc != 0x448A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448A5Cu; }
        if (ctx->pc != 0x448A5Cu) { return; }
    }
    ctx->pc = 0x448A5Cu;
label_448a5c:
    // 0x448a5c: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x448a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_448a60:
    // 0x448a60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x448a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_448a64:
    // 0x448a64: 0xae020db8  sw          $v0, 0xDB8($s0)
    ctx->pc = 0x448a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 2));
label_448a68:
    // 0x448a68: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x448a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_448a6c:
    // 0x448a6c: 0x8e020d9c  lw          $v0, 0xD9C($s0)
    ctx->pc = 0x448a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3484)));
label_448a70:
    // 0x448a70: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x448a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_448a74:
    // 0x448a74: 0xae020d9c  sw          $v0, 0xD9C($s0)
    ctx->pc = 0x448a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3484), GPR_U32(ctx, 2));
label_448a78:
    // 0x448a78: 0x8e020d60  lw          $v0, 0xD60($s0)
    ctx->pc = 0x448a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_448a7c:
    // 0x448a7c: 0xa044001c  sb          $a0, 0x1C($v0)
    ctx->pc = 0x448a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 4));
label_448a80:
    // 0x448a80: 0x8e120d74  lw          $s2, 0xD74($s0)
    ctx->pc = 0x448a80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_448a84:
    // 0x448a84: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x448a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_448a88:
    // 0x448a88: 0x8e4202c8  lw          $v0, 0x2C8($s2)
    ctx->pc = 0x448a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 712)));
label_448a8c:
    // 0x448a8c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x448a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_448a90:
    // 0x448a90: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x448a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_448a94:
    // 0x448a94: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x448a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_448a98:
    // 0x448a98: 0xc0a545c  jal         func_295170
label_448a9c:
    if (ctx->pc == 0x448A9Cu) {
        ctx->pc = 0x448A9Cu;
            // 0x448a9c: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x448AA0u;
        goto label_448aa0;
    }
    ctx->pc = 0x448A98u;
    SET_GPR_U32(ctx, 31, 0x448AA0u);
    ctx->pc = 0x448A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448A98u;
            // 0x448a9c: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448AA0u; }
        if (ctx->pc != 0x448AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448AA0u; }
        if (ctx->pc != 0x448AA0u) { return; }
    }
    ctx->pc = 0x448AA0u;
label_448aa0:
    // 0x448aa0: 0xac54002c  sw          $s4, 0x2C($v0)
    ctx->pc = 0x448aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 20));
label_448aa4:
    // 0x448aa4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x448aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_448aa8:
    // 0x448aa8: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x448aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_448aac:
    // 0x448aac: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x448aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_448ab0:
    // 0x448ab0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x448ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_448ab4:
    // 0x448ab4: 0xc08bf20  jal         func_22FC80
label_448ab8:
    if (ctx->pc == 0x448AB8u) {
        ctx->pc = 0x448AB8u;
            // 0x448ab8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x448ABCu;
        goto label_448abc;
    }
    ctx->pc = 0x448AB4u;
    SET_GPR_U32(ctx, 31, 0x448ABCu);
    ctx->pc = 0x448AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448AB4u;
            // 0x448ab8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448ABCu; }
        if (ctx->pc != 0x448ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448ABCu; }
        if (ctx->pc != 0x448ABCu) { return; }
    }
    ctx->pc = 0x448ABCu;
label_448abc:
    // 0x448abc: 0x8e020d74  lw          $v0, 0xD74($s0)
    ctx->pc = 0x448abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_448ac0:
    // 0x448ac0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x448ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_448ac4:
    // 0x448ac4: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x448ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_448ac8:
    // 0x448ac8: 0x24051fff  addiu       $a1, $zero, 0x1FFF
    ctx->pc = 0x448ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8191));
label_448acc:
    // 0x448acc: 0xc04f29c  jal         func_13CA70
label_448ad0:
    if (ctx->pc == 0x448AD0u) {
        ctx->pc = 0x448AD0u;
            // 0x448ad0: 0xac4302b0  sw          $v1, 0x2B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 3));
        ctx->pc = 0x448AD4u;
        goto label_448ad4;
    }
    ctx->pc = 0x448ACCu;
    SET_GPR_U32(ctx, 31, 0x448AD4u);
    ctx->pc = 0x448AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448ACCu;
            // 0x448ad0: 0xac4302b0  sw          $v1, 0x2B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CA70u;
    if (runtime->hasFunction(0x13CA70u)) {
        auto targetFn = runtime->lookupFunction(0x13CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448AD4u; }
        if (ctx->pc != 0x448AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CA70_0x13ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448AD4u; }
        if (ctx->pc != 0x448AD4u) { return; }
    }
    ctx->pc = 0x448AD4u;
label_448ad4:
    // 0x448ad4: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x448ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_448ad8:
    // 0x448ad8: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x448ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_448adc:
    // 0x448adc: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x448adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_448ae0:
    // 0x448ae0: 0xc04cca0  jal         func_133280
label_448ae4:
    if (ctx->pc == 0x448AE4u) {
        ctx->pc = 0x448AE4u;
            // 0x448ae4: 0x24c6d750  addiu       $a2, $a2, -0x28B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956880));
        ctx->pc = 0x448AE8u;
        goto label_448ae8;
    }
    ctx->pc = 0x448AE0u;
    SET_GPR_U32(ctx, 31, 0x448AE8u);
    ctx->pc = 0x448AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448AE0u;
            // 0x448ae4: 0x24c6d750  addiu       $a2, $a2, -0x28B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448AE8u; }
        if (ctx->pc != 0x448AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448AE8u; }
        if (ctx->pc != 0x448AE8u) { return; }
    }
    ctx->pc = 0x448AE8u;
label_448ae8:
    // 0x448ae8: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x448ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_448aec:
    // 0x448aec: 0xc04f278  jal         func_13C9E0
label_448af0:
    if (ctx->pc == 0x448AF0u) {
        ctx->pc = 0x448AF0u;
            // 0x448af0: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x448AF4u;
        goto label_448af4;
    }
    ctx->pc = 0x448AECu;
    SET_GPR_U32(ctx, 31, 0x448AF4u);
    ctx->pc = 0x448AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448AECu;
            // 0x448af0: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448AF4u; }
        if (ctx->pc != 0x448AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448AF4u; }
        if (ctx->pc != 0x448AF4u) { return; }
    }
    ctx->pc = 0x448AF4u;
label_448af4:
    // 0x448af4: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x448af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_448af8:
    // 0x448af8: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x448af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_448afc:
    // 0x448afc: 0xc04cca0  jal         func_133280
label_448b00:
    if (ctx->pc == 0x448B00u) {
        ctx->pc = 0x448B00u;
            // 0x448b00: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x448B04u;
        goto label_448b04;
    }
    ctx->pc = 0x448AFCu;
    SET_GPR_U32(ctx, 31, 0x448B04u);
    ctx->pc = 0x448B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448AFCu;
            // 0x448b00: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448B04u; }
        if (ctx->pc != 0x448B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448B04u; }
        if (ctx->pc != 0x448B04u) { return; }
    }
    ctx->pc = 0x448B04u;
label_448b04:
    // 0x448b04: 0x3c023f6d  lui         $v0, 0x3F6D
    ctx->pc = 0x448b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16237 << 16));
label_448b08:
    // 0x448b08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x448b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_448b0c:
    // 0x448b0c: 0x3443097b  ori         $v1, $v0, 0x97B
    ctx->pc = 0x448b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_448b10:
    // 0x448b10: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x448b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_448b14:
    // 0x448b14: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x448b14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_448b18:
    // 0x448b18: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x448b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_448b1c:
    // 0x448b1c: 0xc0767f0  jal         func_1D9FC0
label_448b20:
    if (ctx->pc == 0x448B20u) {
        ctx->pc = 0x448B20u;
            // 0x448b20: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x448B24u;
        goto label_448b24;
    }
    ctx->pc = 0x448B1Cu;
    SET_GPR_U32(ctx, 31, 0x448B24u);
    ctx->pc = 0x448B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448B1Cu;
            // 0x448b20: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448B24u; }
        if (ctx->pc != 0x448B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448B24u; }
        if (ctx->pc != 0x448B24u) { return; }
    }
    ctx->pc = 0x448B24u;
label_448b24:
    // 0x448b24: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x448b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_448b28:
    // 0x448b28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x448b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_448b2c:
    // 0x448b2c: 0x8e2301c8  lw          $v1, 0x1C8($s1)
    ctx->pc = 0x448b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
label_448b30:
    // 0x448b30: 0x8c450d98  lw          $a1, 0xD98($v0)
    ctx->pc = 0x448b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3480)));
label_448b34:
    // 0x448b34: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x448b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_448b38:
    // 0x448b38: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x448b38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_448b3c:
    // 0x448b3c: 0x802027  not         $a0, $a0
    ctx->pc = 0x448b3cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_448b40:
    // 0x448b40: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x448b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_448b44:
    // 0x448b44: 0xac62006c  sw          $v0, 0x6C($v1)
    ctx->pc = 0x448b44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 2));
label_448b48:
    // 0x448b48: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x448b48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_448b4c:
    // 0x448b4c: 0xc10c9b4  jal         func_4326D0
label_448b50:
    if (ctx->pc == 0x448B50u) {
        ctx->pc = 0x448B50u;
            // 0x448b50: 0x8e240210  lw          $a0, 0x210($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
        ctx->pc = 0x448B54u;
        goto label_448b54;
    }
    ctx->pc = 0x448B4Cu;
    SET_GPR_U32(ctx, 31, 0x448B54u);
    ctx->pc = 0x448B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448B4Cu;
            // 0x448b50: 0x8e240210  lw          $a0, 0x210($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448B54u; }
        if (ctx->pc != 0x448B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448B54u; }
        if (ctx->pc != 0x448B54u) { return; }
    }
    ctx->pc = 0x448B54u;
label_448b54:
    // 0x448b54: 0xc072aaa  jal         func_1CAAA8
label_448b58:
    if (ctx->pc == 0x448B58u) {
        ctx->pc = 0x448B58u;
            // 0x448b58: 0x92240214  lbu         $a0, 0x214($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 532)));
        ctx->pc = 0x448B5Cu;
        goto label_448b5c;
    }
    ctx->pc = 0x448B54u;
    SET_GPR_U32(ctx, 31, 0x448B5Cu);
    ctx->pc = 0x448B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448B54u;
            // 0x448b58: 0x92240214  lbu         $a0, 0x214($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 532)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448B5Cu; }
        if (ctx->pc != 0x448B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448B5Cu; }
        if (ctx->pc != 0x448B5Cu) { return; }
    }
    ctx->pc = 0x448B5Cu;
label_448b5c:
    // 0x448b5c: 0x96640110  lhu         $a0, 0x110($s3)
    ctx->pc = 0x448b5cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 272)));
label_448b60:
    // 0x448b60: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x448b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_448b64:
    // 0x448b64: 0x148300f0  bne         $a0, $v1, . + 4 + (0xF0 << 2)
label_448b68:
    if (ctx->pc == 0x448B68u) {
        ctx->pc = 0x448B6Cu;
        goto label_448b6c;
    }
    ctx->pc = 0x448B64u;
    {
        const bool branch_taken_0x448b64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x448b64) {
            ctx->pc = 0x448F28u;
            goto label_448f28;
        }
    }
    ctx->pc = 0x448B6Cu;
label_448b6c:
    // 0x448b6c: 0x100000ee  b           . + 4 + (0xEE << 2)
label_448b70:
    if (ctx->pc == 0x448B70u) {
        ctx->pc = 0x448B70u;
            // 0x448b70: 0xae2301c4  sw          $v1, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
        ctx->pc = 0x448B74u;
        goto label_448b74;
    }
    ctx->pc = 0x448B6Cu;
    {
        const bool branch_taken_0x448b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x448B6Cu;
            // 0x448b70: 0xae2301c4  sw          $v1, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448b6c) {
            ctx->pc = 0x448F28u;
            goto label_448f28;
        }
    }
    ctx->pc = 0x448B74u;
label_448b74:
    // 0x448b74: 0x260402c0  addiu       $a0, $s0, 0x2C0
    ctx->pc = 0x448b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_448b78:
    // 0x448b78: 0xc04cc34  jal         func_1330D0
label_448b7c:
    if (ctx->pc == 0x448B7Cu) {
        ctx->pc = 0x448B7Cu;
            // 0x448b7c: 0x26250200  addiu       $a1, $s1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
        ctx->pc = 0x448B80u;
        goto label_448b80;
    }
    ctx->pc = 0x448B78u;
    SET_GPR_U32(ctx, 31, 0x448B80u);
    ctx->pc = 0x448B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448B78u;
            // 0x448b7c: 0x26250200  addiu       $a1, $s1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448B80u; }
        if (ctx->pc != 0x448B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448B80u; }
        if (ctx->pc != 0x448B80u) { return; }
    }
    ctx->pc = 0x448B80u;
label_448b80:
    // 0x448b80: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x448b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
label_448b84:
    // 0x448b84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x448b84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_448b88:
    // 0x448b88: 0x0  nop
    ctx->pc = 0x448b88u;
    // NOP
label_448b8c:
    // 0x448b8c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x448b8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_448b90:
    // 0x448b90: 0x45020036  bc1fl       . + 4 + (0x36 << 2)
label_448b94:
    if (ctx->pc == 0x448B94u) {
        ctx->pc = 0x448B94u;
            // 0x448b94: 0x3c033f0e  lui         $v1, 0x3F0E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16142 << 16));
        ctx->pc = 0x448B98u;
        goto label_448b98;
    }
    ctx->pc = 0x448B90u;
    {
        const bool branch_taken_0x448b90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x448b90) {
            ctx->pc = 0x448B94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x448B90u;
            // 0x448b94: 0x3c033f0e  lui         $v1, 0x3F0E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16142 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x448C6Cu;
            goto label_448c6c;
        }
    }
    ctx->pc = 0x448B98u;
label_448b98:
    // 0x448b98: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x448b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_448b9c:
    // 0x448b9c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x448b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_448ba0:
    // 0x448ba0: 0xc46003a0  lwc1        $f0, 0x3A0($v1)
    ctx->pc = 0x448ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_448ba4:
    // 0x448ba4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x448ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_448ba8:
    // 0x448ba8: 0xc44203a4  lwc1        $f2, 0x3A4($v0)
    ctx->pc = 0x448ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_448bac:
    // 0x448bac: 0x26250200  addiu       $a1, $s1, 0x200
    ctx->pc = 0x448bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
label_448bb0:
    // 0x448bb0: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x448bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_448bb4:
    // 0x448bb4: 0x27a701c0  addiu       $a3, $sp, 0x1C0
    ctx->pc = 0x448bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_448bb8:
    // 0x448bb8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x448bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_448bbc:
    // 0x448bbc: 0xc46103a8  lwc1        $f1, 0x3A8($v1)
    ctx->pc = 0x448bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_448bc0:
    // 0x448bc0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x448bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_448bc4:
    // 0x448bc4: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x448bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_448bc8:
    // 0x448bc8: 0xc44003ac  lwc1        $f0, 0x3AC($v0)
    ctx->pc = 0x448bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_448bcc:
    // 0x448bcc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x448bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_448bd0:
    // 0x448bd0: 0xe7a201c4  swc1        $f2, 0x1C4($sp)
    ctx->pc = 0x448bd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_448bd4:
    // 0x448bd4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x448bd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_448bd8:
    // 0x448bd8: 0xe7a101c8  swc1        $f1, 0x1C8($sp)
    ctx->pc = 0x448bd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_448bdc:
    // 0x448bdc: 0xc122b74  jal         func_48ADD0
label_448be0:
    if (ctx->pc == 0x448BE0u) {
        ctx->pc = 0x448BE0u;
            // 0x448be0: 0xe7a001cc  swc1        $f0, 0x1CC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
        ctx->pc = 0x448BE4u;
        goto label_448be4;
    }
    ctx->pc = 0x448BDCu;
    SET_GPR_U32(ctx, 31, 0x448BE4u);
    ctx->pc = 0x448BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448BDCu;
            // 0x448be0: 0xe7a001cc  swc1        $f0, 0x1CC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x48ADD0u;
    if (runtime->hasFunction(0x48ADD0u)) {
        auto targetFn = runtime->lookupFunction(0x48ADD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448BE4u; }
        if (ctx->pc != 0x448BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048ADD0_0x48add0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448BE4u; }
        if (ctx->pc != 0x448BE4u) { return; }
    }
    ctx->pc = 0x448BE4u;
label_448be4:
    // 0x448be4: 0xae000de4  sw          $zero, 0xDE4($s0)
    ctx->pc = 0x448be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 0));
label_448be8:
    // 0x448be8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x448be8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_448bec:
    // 0x448bec: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x448becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_448bf0:
    // 0x448bf0: 0xae000de8  sw          $zero, 0xDE8($s0)
    ctx->pc = 0x448bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3560), GPR_U32(ctx, 0));
label_448bf4:
    // 0x448bf4: 0x26040340  addiu       $a0, $s0, 0x340
    ctx->pc = 0x448bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
label_448bf8:
    // 0x448bf8: 0xae020db8  sw          $v0, 0xDB8($s0)
    ctx->pc = 0x448bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 2));
label_448bfc:
    // 0x448bfc: 0xc04cc04  jal         func_133010
label_448c00:
    if (ctx->pc == 0x448C00u) {
        ctx->pc = 0x448C00u;
            // 0x448c00: 0x24a5d760  addiu       $a1, $a1, -0x28A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956896));
        ctx->pc = 0x448C04u;
        goto label_448c04;
    }
    ctx->pc = 0x448BFCu;
    SET_GPR_U32(ctx, 31, 0x448C04u);
    ctx->pc = 0x448C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448BFCu;
            // 0x448c00: 0x24a5d760  addiu       $a1, $a1, -0x28A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448C04u; }
        if (ctx->pc != 0x448C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448C04u; }
        if (ctx->pc != 0x448C04u) { return; }
    }
    ctx->pc = 0x448C04u;
label_448c04:
    // 0x448c04: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x448c04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_448c08:
    // 0x448c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x448c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_448c0c:
    // 0x448c0c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x448c0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_448c10:
    // 0x448c10: 0x320f809  jalr        $t9
label_448c14:
    if (ctx->pc == 0x448C14u) {
        ctx->pc = 0x448C14u;
            // 0x448c14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x448C18u;
        goto label_448c18;
    }
    ctx->pc = 0x448C10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x448C18u);
        ctx->pc = 0x448C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x448C10u;
            // 0x448c14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x448C18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x448C18u; }
            if (ctx->pc != 0x448C18u) { return; }
        }
        }
    }
    ctx->pc = 0x448C18u;
label_448c18:
    // 0x448c18: 0x8e100d74  lw          $s0, 0xD74($s0)
    ctx->pc = 0x448c18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_448c1c:
    // 0x448c1c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x448c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_448c20:
    // 0x448c20: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x448c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_448c24:
    // 0x448c24: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x448c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_448c28:
    // 0x448c28: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x448c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_448c2c:
    // 0x448c2c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x448c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_448c30:
    // 0x448c30: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x448c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_448c34:
    // 0x448c34: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x448c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_448c38:
    // 0x448c38: 0xc0a545c  jal         func_295170
label_448c3c:
    if (ctx->pc == 0x448C3Cu) {
        ctx->pc = 0x448C3Cu;
            // 0x448c3c: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x448C40u;
        goto label_448c40;
    }
    ctx->pc = 0x448C38u;
    SET_GPR_U32(ctx, 31, 0x448C40u);
    ctx->pc = 0x448C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448C38u;
            // 0x448c3c: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448C40u; }
        if (ctx->pc != 0x448C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448C40u; }
        if (ctx->pc != 0x448C40u) { return; }
    }
    ctx->pc = 0x448C40u;
label_448c40:
    // 0x448c40: 0xac52002c  sw          $s2, 0x2C($v0)
    ctx->pc = 0x448c40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 18));
label_448c44:
    // 0x448c44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x448c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_448c48:
    // 0x448c48: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x448c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_448c4c:
    // 0x448c4c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x448c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_448c50:
    // 0x448c50: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x448c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_448c54:
    // 0x448c54: 0xc08bf20  jal         func_22FC80
label_448c58:
    if (ctx->pc == 0x448C58u) {
        ctx->pc = 0x448C58u;
            // 0x448c58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x448C5Cu;
        goto label_448c5c;
    }
    ctx->pc = 0x448C54u;
    SET_GPR_U32(ctx, 31, 0x448C5Cu);
    ctx->pc = 0x448C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448C54u;
            // 0x448c58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448C5Cu; }
        if (ctx->pc != 0x448C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448C5Cu; }
        if (ctx->pc != 0x448C5Cu) { return; }
    }
    ctx->pc = 0x448C5Cu;
label_448c5c:
    // 0x448c5c: 0xae2001cc  sw          $zero, 0x1CC($s1)
    ctx->pc = 0x448c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 460), GPR_U32(ctx, 0));
label_448c60:
    // 0x448c60: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x448c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_448c64:
    // 0x448c64: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_448c68:
    if (ctx->pc == 0x448C68u) {
        ctx->pc = 0x448C68u;
            // 0x448c68: 0xae2301c4  sw          $v1, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
        ctx->pc = 0x448C6Cu;
        goto label_448c6c;
    }
    ctx->pc = 0x448C64u;
    {
        const bool branch_taken_0x448c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x448C64u;
            // 0x448c68: 0xae2301c4  sw          $v1, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448c64) {
            ctx->pc = 0x448F28u;
            goto label_448f28;
        }
    }
    ctx->pc = 0x448C6Cu;
label_448c6c:
    // 0x448c6c: 0x346338e4  ori         $v1, $v1, 0x38E4
    ctx->pc = 0x448c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14564);
label_448c70:
    // 0x448c70: 0x100000ad  b           . + 4 + (0xAD << 2)
label_448c74:
    if (ctx->pc == 0x448C74u) {
        ctx->pc = 0x448C74u;
            // 0x448c74: 0xae030de4  sw          $v1, 0xDE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 3));
        ctx->pc = 0x448C78u;
        goto label_448c78;
    }
    ctx->pc = 0x448C70u;
    {
        const bool branch_taken_0x448c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x448C70u;
            // 0x448c74: 0xae030de4  sw          $v1, 0xDE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448c70) {
            ctx->pc = 0x448F28u;
            goto label_448f28;
        }
    }
    ctx->pc = 0x448C78u;
label_448c78:
    // 0x448c78: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x448c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_448c7c:
    // 0x448c7c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x448c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_448c80:
    // 0x448c80: 0xc04f278  jal         func_13C9E0
label_448c84:
    if (ctx->pc == 0x448C84u) {
        ctx->pc = 0x448C84u;
            // 0x448c84: 0x26120890  addiu       $s2, $s0, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
        ctx->pc = 0x448C88u;
        goto label_448c88;
    }
    ctx->pc = 0x448C80u;
    SET_GPR_U32(ctx, 31, 0x448C88u);
    ctx->pc = 0x448C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448C80u;
            // 0x448c84: 0x26120890  addiu       $s2, $s0, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448C88u; }
        if (ctx->pc != 0x448C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448C88u; }
        if (ctx->pc != 0x448C88u) { return; }
    }
    ctx->pc = 0x448C88u;
label_448c88:
    // 0x448c88: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x448c88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_448c8c:
    // 0x448c8c: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x448c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_448c90:
    // 0x448c90: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x448c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_448c94:
    // 0x448c94: 0xc04cca0  jal         func_133280
label_448c98:
    if (ctx->pc == 0x448C98u) {
        ctx->pc = 0x448C98u;
            // 0x448c98: 0x24c6d750  addiu       $a2, $a2, -0x28B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956880));
        ctx->pc = 0x448C9Cu;
        goto label_448c9c;
    }
    ctx->pc = 0x448C94u;
    SET_GPR_U32(ctx, 31, 0x448C9Cu);
    ctx->pc = 0x448C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448C94u;
            // 0x448c98: 0x24c6d750  addiu       $a2, $a2, -0x28B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448C9Cu; }
        if (ctx->pc != 0x448C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448C9Cu; }
        if (ctx->pc != 0x448C9Cu) { return; }
    }
    ctx->pc = 0x448C9Cu;
label_448c9c:
    // 0x448c9c: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x448c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
label_448ca0:
    // 0x448ca0: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x448ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_448ca4:
    // 0x448ca4: 0xc075378  jal         func_1D4DE0
label_448ca8:
    if (ctx->pc == 0x448CA8u) {
        ctx->pc = 0x448CA8u;
            // 0x448ca8: 0x26060830  addiu       $a2, $s0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
        ctx->pc = 0x448CACu;
        goto label_448cac;
    }
    ctx->pc = 0x448CA4u;
    SET_GPR_U32(ctx, 31, 0x448CACu);
    ctx->pc = 0x448CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448CA4u;
            // 0x448ca8: 0x26060830  addiu       $a2, $s0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448CACu; }
        if (ctx->pc != 0x448CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448CACu; }
        if (ctx->pc != 0x448CACu) { return; }
    }
    ctx->pc = 0x448CACu;
label_448cac:
    // 0x448cac: 0xc6010880  lwc1        $f1, 0x880($s0)
    ctx->pc = 0x448cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_448cb0:
    // 0x448cb0: 0x2604087c  addiu       $a0, $s0, 0x87C
    ctx->pc = 0x448cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2172));
label_448cb4:
    // 0x448cb4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x448cb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_448cb8:
    // 0x448cb8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x448cb8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_448cbc:
    // 0x448cbc: 0xc0c753c  jal         func_31D4F0
label_448cc0:
    if (ctx->pc == 0x448CC0u) {
        ctx->pc = 0x448CC0u;
            // 0x448cc0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x448CC4u;
        goto label_448cc4;
    }
    ctx->pc = 0x448CBCu;
    SET_GPR_U32(ctx, 31, 0x448CC4u);
    ctx->pc = 0x448CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448CBCu;
            // 0x448cc0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448CC4u; }
        if (ctx->pc != 0x448CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448CC4u; }
        if (ctx->pc != 0x448CC4u) { return; }
    }
    ctx->pc = 0x448CC4u;
label_448cc4:
    // 0x448cc4: 0xc60c0930  lwc1        $f12, 0x930($s0)
    ctx->pc = 0x448cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_448cc8:
    // 0x448cc8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x448cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_448ccc:
    // 0x448ccc: 0xc60d0880  lwc1        $f13, 0x880($s0)
    ctx->pc = 0x448cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_448cd0:
    // 0x448cd0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x448cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_448cd4:
    // 0x448cd4: 0xc0c753c  jal         func_31D4F0
label_448cd8:
    if (ctx->pc == 0x448CD8u) {
        ctx->pc = 0x448CD8u;
            // 0x448cd8: 0x2644009c  addiu       $a0, $s2, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 156));
        ctx->pc = 0x448CDCu;
        goto label_448cdc;
    }
    ctx->pc = 0x448CD4u;
    SET_GPR_U32(ctx, 31, 0x448CDCu);
    ctx->pc = 0x448CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448CD4u;
            // 0x448cd8: 0x2644009c  addiu       $a0, $s2, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448CDCu; }
        if (ctx->pc != 0x448CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448CDCu; }
        if (ctx->pc != 0x448CDCu) { return; }
    }
    ctx->pc = 0x448CDCu;
label_448cdc:
    // 0x448cdc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x448cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_448ce0:
    // 0x448ce0: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x448ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_448ce4:
    // 0x448ce4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x448ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_448ce8:
    // 0x448ce8: 0x26450080  addiu       $a1, $s2, 0x80
    ctx->pc = 0x448ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_448cec:
    // 0x448cec: 0xc0c6250  jal         func_318940
label_448cf0:
    if (ctx->pc == 0x448CF0u) {
        ctx->pc = 0x448CF0u;
            // 0x448cf0: 0x26060560  addiu       $a2, $s0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
        ctx->pc = 0x448CF4u;
        goto label_448cf4;
    }
    ctx->pc = 0x448CECu;
    SET_GPR_U32(ctx, 31, 0x448CF4u);
    ctx->pc = 0x448CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448CECu;
            // 0x448cf0: 0x26060560  addiu       $a2, $s0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448CF4u; }
        if (ctx->pc != 0x448CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448CF4u; }
        if (ctx->pc != 0x448CF4u) { return; }
    }
    ctx->pc = 0x448CF4u;
label_448cf4:
    // 0x448cf4: 0x8e020d74  lw          $v0, 0xD74($s0)
    ctx->pc = 0x448cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_448cf8:
    // 0x448cf8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x448cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_448cfc:
    // 0x448cfc: 0x26250200  addiu       $a1, $s1, 0x200
    ctx->pc = 0x448cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
label_448d00:
    // 0x448d00: 0xc04cc04  jal         func_133010
label_448d04:
    if (ctx->pc == 0x448D04u) {
        ctx->pc = 0x448D04u;
            // 0x448d04: 0xac4002b0  sw          $zero, 0x2B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 0));
        ctx->pc = 0x448D08u;
        goto label_448d08;
    }
    ctx->pc = 0x448D00u;
    SET_GPR_U32(ctx, 31, 0x448D08u);
    ctx->pc = 0x448D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448D00u;
            // 0x448d04: 0xac4002b0  sw          $zero, 0x2B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448D08u; }
        if (ctx->pc != 0x448D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448D08u; }
        if (ctx->pc != 0x448D08u) { return; }
    }
    ctx->pc = 0x448D08u;
label_448d08:
    // 0x448d08: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x448d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
label_448d0c:
    // 0x448d0c: 0x26040340  addiu       $a0, $s0, 0x340
    ctx->pc = 0x448d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
label_448d10:
    // 0x448d10: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x448d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_448d14:
    // 0x448d14: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x448d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_448d18:
    // 0x448d18: 0xc7a10164  lwc1        $f1, 0x164($sp)
    ctx->pc = 0x448d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_448d1c:
    // 0x448d1c: 0x260602c0  addiu       $a2, $s0, 0x2C0
    ctx->pc = 0x448d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_448d20:
    // 0x448d20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x448d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_448d24:
    // 0x448d24: 0x0  nop
    ctx->pc = 0x448d24u;
    // NOP
label_448d28:
    // 0x448d28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x448d28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_448d2c:
    // 0x448d2c: 0xc04cc90  jal         func_133240
label_448d30:
    if (ctx->pc == 0x448D30u) {
        ctx->pc = 0x448D30u;
            // 0x448d30: 0xe7a00164  swc1        $f0, 0x164($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
        ctx->pc = 0x448D34u;
        goto label_448d34;
    }
    ctx->pc = 0x448D2Cu;
    SET_GPR_U32(ctx, 31, 0x448D34u);
    ctx->pc = 0x448D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448D2Cu;
            // 0x448d30: 0xe7a00164  swc1        $f0, 0x164($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448D34u; }
        if (ctx->pc != 0x448D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448D34u; }
        if (ctx->pc != 0x448D34u) { return; }
    }
    ctx->pc = 0x448D34u;
label_448d34:
    // 0x448d34: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x448d34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_448d38:
    // 0x448d38: 0x26040340  addiu       $a0, $s0, 0x340
    ctx->pc = 0x448d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
label_448d3c:
    // 0x448d3c: 0xc04cc04  jal         func_133010
label_448d40:
    if (ctx->pc == 0x448D40u) {
        ctx->pc = 0x448D40u;
            // 0x448d40: 0x24a5d760  addiu       $a1, $a1, -0x28A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956896));
        ctx->pc = 0x448D44u;
        goto label_448d44;
    }
    ctx->pc = 0x448D3Cu;
    SET_GPR_U32(ctx, 31, 0x448D44u);
    ctx->pc = 0x448D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448D3Cu;
            // 0x448d40: 0x24a5d760  addiu       $a1, $a1, -0x28A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448D44u; }
        if (ctx->pc != 0x448D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448D44u; }
        if (ctx->pc != 0x448D44u) { return; }
    }
    ctx->pc = 0x448D44u;
label_448d44:
    // 0x448d44: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x448d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
label_448d48:
    // 0x448d48: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x448d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_448d4c:
    // 0x448d4c: 0xae2301cc  sw          $v1, 0x1CC($s1)
    ctx->pc = 0x448d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 460), GPR_U32(ctx, 3));
label_448d50:
    // 0x448d50: 0xae2201c4  sw          $v0, 0x1C4($s1)
    ctx->pc = 0x448d50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 2));
label_448d54:
    // 0x448d54: 0x8e3101c8  lw          $s1, 0x1C8($s1)
    ctx->pc = 0x448d54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
label_448d58:
    // 0x448d58: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x448d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_448d5c:
    // 0x448d5c: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_448d60:
    if (ctx->pc == 0x448D60u) {
        ctx->pc = 0x448D60u;
            // 0x448d60: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x448D64u;
        goto label_448d64;
    }
    ctx->pc = 0x448D5Cu;
    {
        const bool branch_taken_0x448d5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x448d5c) {
            ctx->pc = 0x448D60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x448D5Cu;
            // 0x448d60: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x448D8Cu;
            goto label_448d8c;
        }
    }
    ctx->pc = 0x448D64u;
label_448d64:
    // 0x448d64: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x448d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_448d68:
    // 0x448d68: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x448d68u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_448d6c:
    // 0x448d6c: 0x8e4201c4  lw          $v0, 0x1C4($s2)
    ctx->pc = 0x448d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
label_448d70:
    // 0x448d70: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_448d74:
    if (ctx->pc == 0x448D74u) {
        ctx->pc = 0x448D74u;
            // 0x448d74: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->pc = 0x448D78u;
        goto label_448d78;
    }
    ctx->pc = 0x448D70u;
    {
        const bool branch_taken_0x448d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x448d70) {
            ctx->pc = 0x448D74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x448D70u;
            // 0x448d74: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x448D80u;
            goto label_448d80;
        }
    }
    ctx->pc = 0x448D78u;
label_448d78:
    // 0x448d78: 0x10000005  b           . + 4 + (0x5 << 2)
label_448d7c:
    if (ctx->pc == 0x448D7Cu) {
        ctx->pc = 0x448D7Cu;
            // 0x448d7c: 0xae500008  sw          $s0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
        ctx->pc = 0x448D80u;
        goto label_448d80;
    }
    ctx->pc = 0x448D78u;
    {
        const bool branch_taken_0x448d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x448D78u;
            // 0x448d7c: 0xae500008  sw          $s0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448d78) {
            ctx->pc = 0x448D90u;
            goto label_448d90;
        }
    }
    ctx->pc = 0x448D80u;
label_448d80:
    // 0x448d80: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_448d84:
    if (ctx->pc == 0x448D84u) {
        ctx->pc = 0x448D84u;
            // 0x448d84: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x448D88u;
        goto label_448d88;
    }
    ctx->pc = 0x448D80u;
    {
        const bool branch_taken_0x448d80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x448D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x448D80u;
            // 0x448d84: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448d80) {
            ctx->pc = 0x448D68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_448d68;
        }
    }
    ctx->pc = 0x448D88u;
label_448d88:
    // 0x448d88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x448d88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_448d8c:
    // 0x448d8c: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x448d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
label_448d90:
    // 0x448d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x448d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_448d94:
    // 0x448d94: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x448d94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_448d98:
    // 0x448d98: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x448d98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_448d9c:
    // 0x448d9c: 0x320f809  jalr        $t9
label_448da0:
    if (ctx->pc == 0x448DA0u) {
        ctx->pc = 0x448DA0u;
            // 0x448da0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x448DA4u;
        goto label_448da4;
    }
    ctx->pc = 0x448D9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x448DA4u);
        ctx->pc = 0x448DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x448D9Cu;
            // 0x448da0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x448DA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x448DA4u; }
            if (ctx->pc != 0x448DA4u) { return; }
        }
        }
    }
    ctx->pc = 0x448DA4u;
label_448da4:
    // 0x448da4: 0x8e100550  lw          $s0, 0x550($s0)
    ctx->pc = 0x448da4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_448da8:
    // 0x448da8: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x448da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_448dac:
    // 0x448dac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x448dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_448db0:
    // 0x448db0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x448db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_448db4:
    // 0x448db4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x448db4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_448db8:
    // 0x448db8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x448db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_448dbc:
    // 0x448dbc: 0x8202010d  lb          $v0, 0x10D($s0)
    ctx->pc = 0x448dbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_448dc0:
    // 0x448dc0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x448dc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_448dc4:
    // 0x448dc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x448dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_448dc8:
    // 0x448dc8: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x448dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_448dcc:
    // 0x448dcc: 0xa202010e  sb          $v0, 0x10E($s0)
    ctx->pc = 0x448dccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 270), (uint8_t)GPR_U32(ctx, 2));
label_448dd0:
    // 0x448dd0: 0xa200010d  sb          $zero, 0x10D($s0)
    ctx->pc = 0x448dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 269), (uint8_t)GPR_U32(ctx, 0));
label_448dd4:
    // 0x448dd4: 0x8202010c  lb          $v0, 0x10C($s0)
    ctx->pc = 0x448dd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_448dd8:
    // 0x448dd8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x448dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_448ddc:
    // 0x448ddc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x448ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_448de0:
    // 0x448de0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x448de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_448de4:
    // 0x448de4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x448de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_448de8:
    // 0x448de8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x448de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_448dec:
    // 0x448dec: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x448decu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_448df0:
    // 0x448df0: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x448df0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_448df4:
    // 0x448df4: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x448df4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_448df8:
    // 0x448df8: 0x320f809  jalr        $t9
label_448dfc:
    if (ctx->pc == 0x448DFCu) {
        ctx->pc = 0x448DFCu;
            // 0x448dfc: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x448E00u;
        goto label_448e00;
    }
    ctx->pc = 0x448DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x448E00u);
        ctx->pc = 0x448DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x448DF8u;
            // 0x448dfc: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x448E00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x448E00u; }
            if (ctx->pc != 0x448E00u) { return; }
        }
        }
    }
    ctx->pc = 0x448E00u;
label_448e00:
    // 0x448e00: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x448e00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_448e04:
    // 0x448e04: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x448e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_448e08:
    // 0x448e08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x448e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_448e0c:
    // 0x448e0c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x448e0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_448e10:
    // 0x448e10: 0x320f809  jalr        $t9
label_448e14:
    if (ctx->pc == 0x448E14u) {
        ctx->pc = 0x448E14u;
            // 0x448e14: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x448E18u;
        goto label_448e18;
    }
    ctx->pc = 0x448E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x448E18u);
        ctx->pc = 0x448E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x448E10u;
            // 0x448e14: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x448E18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x448E18u; }
            if (ctx->pc != 0x448E18u) { return; }
        }
        }
    }
    ctx->pc = 0x448E18u;
label_448e18:
    // 0x448e18: 0xae5101c8  sw          $s1, 0x1C8($s2)
    ctx->pc = 0x448e18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 456), GPR_U32(ctx, 17));
label_448e1c:
    // 0x448e1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x448e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_448e20:
    // 0x448e20: 0xae4401c0  sw          $a0, 0x1C0($s2)
    ctx->pc = 0x448e20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 448), GPR_U32(ctx, 4));
label_448e24:
    // 0x448e24: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x448e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
label_448e28:
    // 0x448e28: 0xae4401c4  sw          $a0, 0x1C4($s2)
    ctx->pc = 0x448e28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 4));
label_448e2c:
    // 0x448e2c: 0x1000003e  b           . + 4 + (0x3E << 2)
label_448e30:
    if (ctx->pc == 0x448E30u) {
        ctx->pc = 0x448E30u;
            // 0x448e30: 0xae4301cc  sw          $v1, 0x1CC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 460), GPR_U32(ctx, 3));
        ctx->pc = 0x448E34u;
        goto label_448e34;
    }
    ctx->pc = 0x448E2Cu;
    {
        const bool branch_taken_0x448e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x448E2Cu;
            // 0x448e30: 0xae4301cc  sw          $v1, 0x1CC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 460), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448e2c) {
            ctx->pc = 0x448F28u;
            goto label_448f28;
        }
    }
    ctx->pc = 0x448E34u;
label_448e34:
    // 0x448e34: 0xc62101cc  lwc1        $f1, 0x1CC($s1)
    ctx->pc = 0x448e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_448e38:
    // 0x448e38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x448e38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_448e3c:
    // 0x448e3c: 0x0  nop
    ctx->pc = 0x448e3cu;
    // NOP
label_448e40:
    // 0x448e40: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x448e40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_448e44:
    // 0x448e44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x448e44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_448e48:
    // 0x448e48: 0x45000037  bc1f        . + 4 + (0x37 << 2)
label_448e4c:
    if (ctx->pc == 0x448E4Cu) {
        ctx->pc = 0x448E4Cu;
            // 0x448e4c: 0xe62101cc  swc1        $f1, 0x1CC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 460), bits); }
        ctx->pc = 0x448E50u;
        goto label_448e50;
    }
    ctx->pc = 0x448E48u;
    {
        const bool branch_taken_0x448e48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x448E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x448E48u;
            // 0x448e4c: 0xe62101cc  swc1        $f1, 0x1CC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 460), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x448e48) {
            ctx->pc = 0x448F28u;
            goto label_448f28;
        }
    }
    ctx->pc = 0x448E50u;
label_448e50:
    // 0x448e50: 0x8e3001c8  lw          $s0, 0x1C8($s1)
    ctx->pc = 0x448e50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
label_448e54:
    // 0x448e54: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x448e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_448e58:
    // 0x448e58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x448e58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_448e5c:
    // 0x448e5c: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x448e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_448e60:
    // 0x448e60: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x448e60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_448e64:
    // 0x448e64: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_448e68:
    if (ctx->pc == 0x448E68u) {
        ctx->pc = 0x448E68u;
            // 0x448e68: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x448E6Cu;
        goto label_448e6c;
    }
    ctx->pc = 0x448E64u;
    {
        const bool branch_taken_0x448e64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x448e64) {
            ctx->pc = 0x448E68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x448E64u;
            // 0x448e68: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x448E7Cu;
            goto label_448e7c;
        }
    }
    ctx->pc = 0x448E6Cu;
label_448e6c:
    // 0x448e6c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x448e6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_448e70:
    // 0x448e70: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x448e70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_448e74:
    // 0x448e74: 0x10000007  b           . + 4 + (0x7 << 2)
label_448e78:
    if (ctx->pc == 0x448E78u) {
        ctx->pc = 0x448E78u;
            // 0x448e78: 0xc6010034  lwc1        $f1, 0x34($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x448E7Cu;
        goto label_448e7c;
    }
    ctx->pc = 0x448E74u;
    {
        const bool branch_taken_0x448e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x448E74u;
            // 0x448e78: 0xc6010034  lwc1        $f1, 0x34($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x448e74) {
            ctx->pc = 0x448E94u;
            goto label_448e94;
        }
    }
    ctx->pc = 0x448E7Cu;
label_448e7c:
    // 0x448e7c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x448e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_448e80:
    // 0x448e80: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x448e80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_448e84:
    // 0x448e84: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x448e84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_448e88:
    // 0x448e88: 0x0  nop
    ctx->pc = 0x448e88u;
    // NOP
label_448e8c:
    // 0x448e8c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x448e8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_448e90:
    // 0x448e90: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x448e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_448e94:
    // 0x448e94: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x448e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_448e98:
    // 0x448e98: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x448e98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_448e9c:
    // 0x448e9c: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x448e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_448ea0:
    // 0x448ea0: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x448ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_448ea4:
    // 0x448ea4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x448ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_448ea8:
    // 0x448ea8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x448ea8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_448eac:
    // 0x448eac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x448eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_448eb0:
    // 0x448eb0: 0x0  nop
    ctx->pc = 0x448eb0u;
    // NOP
label_448eb4:
    // 0x448eb4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x448eb4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_448eb8:
    // 0x448eb8: 0xc60d0038  lwc1        $f13, 0x38($s0)
    ctx->pc = 0x448eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_448ebc:
    // 0x448ebc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x448ebcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_448ec0:
    // 0x448ec0: 0x0  nop
    ctx->pc = 0x448ec0u;
    // NOP
label_448ec4:
    // 0x448ec4: 0x0  nop
    ctx->pc = 0x448ec4u;
    // NOP
label_448ec8:
    // 0x448ec8: 0xc122b58  jal         func_48AD60
label_448ecc:
    if (ctx->pc == 0x448ECCu) {
        ctx->pc = 0x448ED0u;
        goto label_448ed0;
    }
    ctx->pc = 0x448EC8u;
    SET_GPR_U32(ctx, 31, 0x448ED0u);
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448ED0u; }
        if (ctx->pc != 0x448ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448ED0u; }
        if (ctx->pc != 0x448ED0u) { return; }
    }
    ctx->pc = 0x448ED0u;
label_448ed0:
    // 0x448ed0: 0xc6340150  lwc1        $f20, 0x150($s1)
    ctx->pc = 0x448ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_448ed4:
    // 0x448ed4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x448ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_448ed8:
    // 0x448ed8: 0x26320030  addiu       $s2, $s1, 0x30
    ctx->pc = 0x448ed8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_448edc:
    // 0x448edc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x448edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_448ee0:
    // 0x448ee0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x448ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_448ee4:
    // 0x448ee4: 0xc0d87e0  jal         func_361F80
label_448ee8:
    if (ctx->pc == 0x448EE8u) {
        ctx->pc = 0x448EE8u;
            // 0x448ee8: 0xae220150  sw          $v0, 0x150($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 2));
        ctx->pc = 0x448EECu;
        goto label_448eec;
    }
    ctx->pc = 0x448EE4u;
    SET_GPR_U32(ctx, 31, 0x448EECu);
    ctx->pc = 0x448EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448EE4u;
            // 0x448ee8: 0xae220150  sw          $v0, 0x150($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361F80u;
    if (runtime->hasFunction(0x361F80u)) {
        auto targetFn = runtime->lookupFunction(0x361F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448EECu; }
        if (ctx->pc != 0x448EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361F80_0x361f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448EECu; }
        if (ctx->pc != 0x448EECu) { return; }
    }
    ctx->pc = 0x448EECu;
label_448eec:
    // 0x448eec: 0x26240200  addiu       $a0, $s1, 0x200
    ctx->pc = 0x448eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
label_448ef0:
    // 0x448ef0: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x448ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_448ef4:
    // 0x448ef4: 0xc04cc04  jal         func_133010
label_448ef8:
    if (ctx->pc == 0x448EF8u) {
        ctx->pc = 0x448EF8u;
            // 0x448ef8: 0xe6540120  swc1        $f20, 0x120($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 288), bits); }
        ctx->pc = 0x448EFCu;
        goto label_448efc;
    }
    ctx->pc = 0x448EF4u;
    SET_GPR_U32(ctx, 31, 0x448EFCu);
    ctx->pc = 0x448EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448EF4u;
            // 0x448ef8: 0xe6540120  swc1        $f20, 0x120($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 288), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448EFCu; }
        if (ctx->pc != 0x448EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448EFCu; }
        if (ctx->pc != 0x448EFCu) { return; }
    }
    ctx->pc = 0x448EFCu;
label_448efc:
    // 0x448efc: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x448efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_448f00:
    // 0x448f00: 0xc04cc04  jal         func_133010
label_448f04:
    if (ctx->pc == 0x448F04u) {
        ctx->pc = 0x448F04u;
            // 0x448f04: 0x264500f0  addiu       $a1, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->pc = 0x448F08u;
        goto label_448f08;
    }
    ctx->pc = 0x448F00u;
    SET_GPR_U32(ctx, 31, 0x448F08u);
    ctx->pc = 0x448F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448F00u;
            // 0x448f04: 0x264500f0  addiu       $a1, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448F08u; }
        if (ctx->pc != 0x448F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448F08u; }
        if (ctx->pc != 0x448F08u) { return; }
    }
    ctx->pc = 0x448F08u;
label_448f08:
    // 0x448f08: 0x26450090  addiu       $a1, $s2, 0x90
    ctx->pc = 0x448f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_448f0c:
    // 0x448f0c: 0xc04c720  jal         func_131C80
label_448f10:
    if (ctx->pc == 0x448F10u) {
        ctx->pc = 0x448F10u;
            // 0x448f10: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x448F14u;
        goto label_448f14;
    }
    ctx->pc = 0x448F0Cu;
    SET_GPR_U32(ctx, 31, 0x448F14u);
    ctx->pc = 0x448F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448F0Cu;
            // 0x448f10: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448F14u; }
        if (ctx->pc != 0x448F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448F14u; }
        if (ctx->pc != 0x448F14u) { return; }
    }
    ctx->pc = 0x448F14u;
label_448f14:
    // 0x448f14: 0xae3001c8  sw          $s0, 0x1C8($s1)
    ctx->pc = 0x448f14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 456), GPR_U32(ctx, 16));
label_448f18:
    // 0x448f18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x448f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_448f1c:
    // 0x448f1c: 0xae2301c0  sw          $v1, 0x1C0($s1)
    ctx->pc = 0x448f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 3));
label_448f20:
    // 0x448f20: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x448f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_448f24:
    // 0x448f24: 0xae2301c4  sw          $v1, 0x1C4($s1)
    ctx->pc = 0x448f24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
label_448f28:
    // 0x448f28: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x448f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_448f2c:
    // 0x448f2c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x448f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_448f30:
    // 0x448f30: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x448f30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_448f34:
    // 0x448f34: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x448f34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_448f38:
    // 0x448f38: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x448f38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_448f3c:
    // 0x448f3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x448f3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_448f40:
    // 0x448f40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x448f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_448f44:
    // 0x448f44: 0x3e00008  jr          $ra
label_448f48:
    if (ctx->pc == 0x448F48u) {
        ctx->pc = 0x448F48u;
            // 0x448f48: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->pc = 0x448F4Cu;
        goto label_448f4c;
    }
    ctx->pc = 0x448F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x448F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x448F44u;
            // 0x448f48: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x448F4Cu;
label_448f4c:
    // 0x448f4c: 0x0  nop
    ctx->pc = 0x448f4cu;
    // NOP
}
