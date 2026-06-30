#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00537610
// Address: 0x537610 - 0x538050
void sub_00537610_0x537610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00537610_0x537610");
#endif

    switch (ctx->pc) {
        case 0x537610u: goto label_537610;
        case 0x537614u: goto label_537614;
        case 0x537618u: goto label_537618;
        case 0x53761cu: goto label_53761c;
        case 0x537620u: goto label_537620;
        case 0x537624u: goto label_537624;
        case 0x537628u: goto label_537628;
        case 0x53762cu: goto label_53762c;
        case 0x537630u: goto label_537630;
        case 0x537634u: goto label_537634;
        case 0x537638u: goto label_537638;
        case 0x53763cu: goto label_53763c;
        case 0x537640u: goto label_537640;
        case 0x537644u: goto label_537644;
        case 0x537648u: goto label_537648;
        case 0x53764cu: goto label_53764c;
        case 0x537650u: goto label_537650;
        case 0x537654u: goto label_537654;
        case 0x537658u: goto label_537658;
        case 0x53765cu: goto label_53765c;
        case 0x537660u: goto label_537660;
        case 0x537664u: goto label_537664;
        case 0x537668u: goto label_537668;
        case 0x53766cu: goto label_53766c;
        case 0x537670u: goto label_537670;
        case 0x537674u: goto label_537674;
        case 0x537678u: goto label_537678;
        case 0x53767cu: goto label_53767c;
        case 0x537680u: goto label_537680;
        case 0x537684u: goto label_537684;
        case 0x537688u: goto label_537688;
        case 0x53768cu: goto label_53768c;
        case 0x537690u: goto label_537690;
        case 0x537694u: goto label_537694;
        case 0x537698u: goto label_537698;
        case 0x53769cu: goto label_53769c;
        case 0x5376a0u: goto label_5376a0;
        case 0x5376a4u: goto label_5376a4;
        case 0x5376a8u: goto label_5376a8;
        case 0x5376acu: goto label_5376ac;
        case 0x5376b0u: goto label_5376b0;
        case 0x5376b4u: goto label_5376b4;
        case 0x5376b8u: goto label_5376b8;
        case 0x5376bcu: goto label_5376bc;
        case 0x5376c0u: goto label_5376c0;
        case 0x5376c4u: goto label_5376c4;
        case 0x5376c8u: goto label_5376c8;
        case 0x5376ccu: goto label_5376cc;
        case 0x5376d0u: goto label_5376d0;
        case 0x5376d4u: goto label_5376d4;
        case 0x5376d8u: goto label_5376d8;
        case 0x5376dcu: goto label_5376dc;
        case 0x5376e0u: goto label_5376e0;
        case 0x5376e4u: goto label_5376e4;
        case 0x5376e8u: goto label_5376e8;
        case 0x5376ecu: goto label_5376ec;
        case 0x5376f0u: goto label_5376f0;
        case 0x5376f4u: goto label_5376f4;
        case 0x5376f8u: goto label_5376f8;
        case 0x5376fcu: goto label_5376fc;
        case 0x537700u: goto label_537700;
        case 0x537704u: goto label_537704;
        case 0x537708u: goto label_537708;
        case 0x53770cu: goto label_53770c;
        case 0x537710u: goto label_537710;
        case 0x537714u: goto label_537714;
        case 0x537718u: goto label_537718;
        case 0x53771cu: goto label_53771c;
        case 0x537720u: goto label_537720;
        case 0x537724u: goto label_537724;
        case 0x537728u: goto label_537728;
        case 0x53772cu: goto label_53772c;
        case 0x537730u: goto label_537730;
        case 0x537734u: goto label_537734;
        case 0x537738u: goto label_537738;
        case 0x53773cu: goto label_53773c;
        case 0x537740u: goto label_537740;
        case 0x537744u: goto label_537744;
        case 0x537748u: goto label_537748;
        case 0x53774cu: goto label_53774c;
        case 0x537750u: goto label_537750;
        case 0x537754u: goto label_537754;
        case 0x537758u: goto label_537758;
        case 0x53775cu: goto label_53775c;
        case 0x537760u: goto label_537760;
        case 0x537764u: goto label_537764;
        case 0x537768u: goto label_537768;
        case 0x53776cu: goto label_53776c;
        case 0x537770u: goto label_537770;
        case 0x537774u: goto label_537774;
        case 0x537778u: goto label_537778;
        case 0x53777cu: goto label_53777c;
        case 0x537780u: goto label_537780;
        case 0x537784u: goto label_537784;
        case 0x537788u: goto label_537788;
        case 0x53778cu: goto label_53778c;
        case 0x537790u: goto label_537790;
        case 0x537794u: goto label_537794;
        case 0x537798u: goto label_537798;
        case 0x53779cu: goto label_53779c;
        case 0x5377a0u: goto label_5377a0;
        case 0x5377a4u: goto label_5377a4;
        case 0x5377a8u: goto label_5377a8;
        case 0x5377acu: goto label_5377ac;
        case 0x5377b0u: goto label_5377b0;
        case 0x5377b4u: goto label_5377b4;
        case 0x5377b8u: goto label_5377b8;
        case 0x5377bcu: goto label_5377bc;
        case 0x5377c0u: goto label_5377c0;
        case 0x5377c4u: goto label_5377c4;
        case 0x5377c8u: goto label_5377c8;
        case 0x5377ccu: goto label_5377cc;
        case 0x5377d0u: goto label_5377d0;
        case 0x5377d4u: goto label_5377d4;
        case 0x5377d8u: goto label_5377d8;
        case 0x5377dcu: goto label_5377dc;
        case 0x5377e0u: goto label_5377e0;
        case 0x5377e4u: goto label_5377e4;
        case 0x5377e8u: goto label_5377e8;
        case 0x5377ecu: goto label_5377ec;
        case 0x5377f0u: goto label_5377f0;
        case 0x5377f4u: goto label_5377f4;
        case 0x5377f8u: goto label_5377f8;
        case 0x5377fcu: goto label_5377fc;
        case 0x537800u: goto label_537800;
        case 0x537804u: goto label_537804;
        case 0x537808u: goto label_537808;
        case 0x53780cu: goto label_53780c;
        case 0x537810u: goto label_537810;
        case 0x537814u: goto label_537814;
        case 0x537818u: goto label_537818;
        case 0x53781cu: goto label_53781c;
        case 0x537820u: goto label_537820;
        case 0x537824u: goto label_537824;
        case 0x537828u: goto label_537828;
        case 0x53782cu: goto label_53782c;
        case 0x537830u: goto label_537830;
        case 0x537834u: goto label_537834;
        case 0x537838u: goto label_537838;
        case 0x53783cu: goto label_53783c;
        case 0x537840u: goto label_537840;
        case 0x537844u: goto label_537844;
        case 0x537848u: goto label_537848;
        case 0x53784cu: goto label_53784c;
        case 0x537850u: goto label_537850;
        case 0x537854u: goto label_537854;
        case 0x537858u: goto label_537858;
        case 0x53785cu: goto label_53785c;
        case 0x537860u: goto label_537860;
        case 0x537864u: goto label_537864;
        case 0x537868u: goto label_537868;
        case 0x53786cu: goto label_53786c;
        case 0x537870u: goto label_537870;
        case 0x537874u: goto label_537874;
        case 0x537878u: goto label_537878;
        case 0x53787cu: goto label_53787c;
        case 0x537880u: goto label_537880;
        case 0x537884u: goto label_537884;
        case 0x537888u: goto label_537888;
        case 0x53788cu: goto label_53788c;
        case 0x537890u: goto label_537890;
        case 0x537894u: goto label_537894;
        case 0x537898u: goto label_537898;
        case 0x53789cu: goto label_53789c;
        case 0x5378a0u: goto label_5378a0;
        case 0x5378a4u: goto label_5378a4;
        case 0x5378a8u: goto label_5378a8;
        case 0x5378acu: goto label_5378ac;
        case 0x5378b0u: goto label_5378b0;
        case 0x5378b4u: goto label_5378b4;
        case 0x5378b8u: goto label_5378b8;
        case 0x5378bcu: goto label_5378bc;
        case 0x5378c0u: goto label_5378c0;
        case 0x5378c4u: goto label_5378c4;
        case 0x5378c8u: goto label_5378c8;
        case 0x5378ccu: goto label_5378cc;
        case 0x5378d0u: goto label_5378d0;
        case 0x5378d4u: goto label_5378d4;
        case 0x5378d8u: goto label_5378d8;
        case 0x5378dcu: goto label_5378dc;
        case 0x5378e0u: goto label_5378e0;
        case 0x5378e4u: goto label_5378e4;
        case 0x5378e8u: goto label_5378e8;
        case 0x5378ecu: goto label_5378ec;
        case 0x5378f0u: goto label_5378f0;
        case 0x5378f4u: goto label_5378f4;
        case 0x5378f8u: goto label_5378f8;
        case 0x5378fcu: goto label_5378fc;
        case 0x537900u: goto label_537900;
        case 0x537904u: goto label_537904;
        case 0x537908u: goto label_537908;
        case 0x53790cu: goto label_53790c;
        case 0x537910u: goto label_537910;
        case 0x537914u: goto label_537914;
        case 0x537918u: goto label_537918;
        case 0x53791cu: goto label_53791c;
        case 0x537920u: goto label_537920;
        case 0x537924u: goto label_537924;
        case 0x537928u: goto label_537928;
        case 0x53792cu: goto label_53792c;
        case 0x537930u: goto label_537930;
        case 0x537934u: goto label_537934;
        case 0x537938u: goto label_537938;
        case 0x53793cu: goto label_53793c;
        case 0x537940u: goto label_537940;
        case 0x537944u: goto label_537944;
        case 0x537948u: goto label_537948;
        case 0x53794cu: goto label_53794c;
        case 0x537950u: goto label_537950;
        case 0x537954u: goto label_537954;
        case 0x537958u: goto label_537958;
        case 0x53795cu: goto label_53795c;
        case 0x537960u: goto label_537960;
        case 0x537964u: goto label_537964;
        case 0x537968u: goto label_537968;
        case 0x53796cu: goto label_53796c;
        case 0x537970u: goto label_537970;
        case 0x537974u: goto label_537974;
        case 0x537978u: goto label_537978;
        case 0x53797cu: goto label_53797c;
        case 0x537980u: goto label_537980;
        case 0x537984u: goto label_537984;
        case 0x537988u: goto label_537988;
        case 0x53798cu: goto label_53798c;
        case 0x537990u: goto label_537990;
        case 0x537994u: goto label_537994;
        case 0x537998u: goto label_537998;
        case 0x53799cu: goto label_53799c;
        case 0x5379a0u: goto label_5379a0;
        case 0x5379a4u: goto label_5379a4;
        case 0x5379a8u: goto label_5379a8;
        case 0x5379acu: goto label_5379ac;
        case 0x5379b0u: goto label_5379b0;
        case 0x5379b4u: goto label_5379b4;
        case 0x5379b8u: goto label_5379b8;
        case 0x5379bcu: goto label_5379bc;
        case 0x5379c0u: goto label_5379c0;
        case 0x5379c4u: goto label_5379c4;
        case 0x5379c8u: goto label_5379c8;
        case 0x5379ccu: goto label_5379cc;
        case 0x5379d0u: goto label_5379d0;
        case 0x5379d4u: goto label_5379d4;
        case 0x5379d8u: goto label_5379d8;
        case 0x5379dcu: goto label_5379dc;
        case 0x5379e0u: goto label_5379e0;
        case 0x5379e4u: goto label_5379e4;
        case 0x5379e8u: goto label_5379e8;
        case 0x5379ecu: goto label_5379ec;
        case 0x5379f0u: goto label_5379f0;
        case 0x5379f4u: goto label_5379f4;
        case 0x5379f8u: goto label_5379f8;
        case 0x5379fcu: goto label_5379fc;
        case 0x537a00u: goto label_537a00;
        case 0x537a04u: goto label_537a04;
        case 0x537a08u: goto label_537a08;
        case 0x537a0cu: goto label_537a0c;
        case 0x537a10u: goto label_537a10;
        case 0x537a14u: goto label_537a14;
        case 0x537a18u: goto label_537a18;
        case 0x537a1cu: goto label_537a1c;
        case 0x537a20u: goto label_537a20;
        case 0x537a24u: goto label_537a24;
        case 0x537a28u: goto label_537a28;
        case 0x537a2cu: goto label_537a2c;
        case 0x537a30u: goto label_537a30;
        case 0x537a34u: goto label_537a34;
        case 0x537a38u: goto label_537a38;
        case 0x537a3cu: goto label_537a3c;
        case 0x537a40u: goto label_537a40;
        case 0x537a44u: goto label_537a44;
        case 0x537a48u: goto label_537a48;
        case 0x537a4cu: goto label_537a4c;
        case 0x537a50u: goto label_537a50;
        case 0x537a54u: goto label_537a54;
        case 0x537a58u: goto label_537a58;
        case 0x537a5cu: goto label_537a5c;
        case 0x537a60u: goto label_537a60;
        case 0x537a64u: goto label_537a64;
        case 0x537a68u: goto label_537a68;
        case 0x537a6cu: goto label_537a6c;
        case 0x537a70u: goto label_537a70;
        case 0x537a74u: goto label_537a74;
        case 0x537a78u: goto label_537a78;
        case 0x537a7cu: goto label_537a7c;
        case 0x537a80u: goto label_537a80;
        case 0x537a84u: goto label_537a84;
        case 0x537a88u: goto label_537a88;
        case 0x537a8cu: goto label_537a8c;
        case 0x537a90u: goto label_537a90;
        case 0x537a94u: goto label_537a94;
        case 0x537a98u: goto label_537a98;
        case 0x537a9cu: goto label_537a9c;
        case 0x537aa0u: goto label_537aa0;
        case 0x537aa4u: goto label_537aa4;
        case 0x537aa8u: goto label_537aa8;
        case 0x537aacu: goto label_537aac;
        case 0x537ab0u: goto label_537ab0;
        case 0x537ab4u: goto label_537ab4;
        case 0x537ab8u: goto label_537ab8;
        case 0x537abcu: goto label_537abc;
        case 0x537ac0u: goto label_537ac0;
        case 0x537ac4u: goto label_537ac4;
        case 0x537ac8u: goto label_537ac8;
        case 0x537accu: goto label_537acc;
        case 0x537ad0u: goto label_537ad0;
        case 0x537ad4u: goto label_537ad4;
        case 0x537ad8u: goto label_537ad8;
        case 0x537adcu: goto label_537adc;
        case 0x537ae0u: goto label_537ae0;
        case 0x537ae4u: goto label_537ae4;
        case 0x537ae8u: goto label_537ae8;
        case 0x537aecu: goto label_537aec;
        case 0x537af0u: goto label_537af0;
        case 0x537af4u: goto label_537af4;
        case 0x537af8u: goto label_537af8;
        case 0x537afcu: goto label_537afc;
        case 0x537b00u: goto label_537b00;
        case 0x537b04u: goto label_537b04;
        case 0x537b08u: goto label_537b08;
        case 0x537b0cu: goto label_537b0c;
        case 0x537b10u: goto label_537b10;
        case 0x537b14u: goto label_537b14;
        case 0x537b18u: goto label_537b18;
        case 0x537b1cu: goto label_537b1c;
        case 0x537b20u: goto label_537b20;
        case 0x537b24u: goto label_537b24;
        case 0x537b28u: goto label_537b28;
        case 0x537b2cu: goto label_537b2c;
        case 0x537b30u: goto label_537b30;
        case 0x537b34u: goto label_537b34;
        case 0x537b38u: goto label_537b38;
        case 0x537b3cu: goto label_537b3c;
        case 0x537b40u: goto label_537b40;
        case 0x537b44u: goto label_537b44;
        case 0x537b48u: goto label_537b48;
        case 0x537b4cu: goto label_537b4c;
        case 0x537b50u: goto label_537b50;
        case 0x537b54u: goto label_537b54;
        case 0x537b58u: goto label_537b58;
        case 0x537b5cu: goto label_537b5c;
        case 0x537b60u: goto label_537b60;
        case 0x537b64u: goto label_537b64;
        case 0x537b68u: goto label_537b68;
        case 0x537b6cu: goto label_537b6c;
        case 0x537b70u: goto label_537b70;
        case 0x537b74u: goto label_537b74;
        case 0x537b78u: goto label_537b78;
        case 0x537b7cu: goto label_537b7c;
        case 0x537b80u: goto label_537b80;
        case 0x537b84u: goto label_537b84;
        case 0x537b88u: goto label_537b88;
        case 0x537b8cu: goto label_537b8c;
        case 0x537b90u: goto label_537b90;
        case 0x537b94u: goto label_537b94;
        case 0x537b98u: goto label_537b98;
        case 0x537b9cu: goto label_537b9c;
        case 0x537ba0u: goto label_537ba0;
        case 0x537ba4u: goto label_537ba4;
        case 0x537ba8u: goto label_537ba8;
        case 0x537bacu: goto label_537bac;
        case 0x537bb0u: goto label_537bb0;
        case 0x537bb4u: goto label_537bb4;
        case 0x537bb8u: goto label_537bb8;
        case 0x537bbcu: goto label_537bbc;
        case 0x537bc0u: goto label_537bc0;
        case 0x537bc4u: goto label_537bc4;
        case 0x537bc8u: goto label_537bc8;
        case 0x537bccu: goto label_537bcc;
        case 0x537bd0u: goto label_537bd0;
        case 0x537bd4u: goto label_537bd4;
        case 0x537bd8u: goto label_537bd8;
        case 0x537bdcu: goto label_537bdc;
        case 0x537be0u: goto label_537be0;
        case 0x537be4u: goto label_537be4;
        case 0x537be8u: goto label_537be8;
        case 0x537becu: goto label_537bec;
        case 0x537bf0u: goto label_537bf0;
        case 0x537bf4u: goto label_537bf4;
        case 0x537bf8u: goto label_537bf8;
        case 0x537bfcu: goto label_537bfc;
        case 0x537c00u: goto label_537c00;
        case 0x537c04u: goto label_537c04;
        case 0x537c08u: goto label_537c08;
        case 0x537c0cu: goto label_537c0c;
        case 0x537c10u: goto label_537c10;
        case 0x537c14u: goto label_537c14;
        case 0x537c18u: goto label_537c18;
        case 0x537c1cu: goto label_537c1c;
        case 0x537c20u: goto label_537c20;
        case 0x537c24u: goto label_537c24;
        case 0x537c28u: goto label_537c28;
        case 0x537c2cu: goto label_537c2c;
        case 0x537c30u: goto label_537c30;
        case 0x537c34u: goto label_537c34;
        case 0x537c38u: goto label_537c38;
        case 0x537c3cu: goto label_537c3c;
        case 0x537c40u: goto label_537c40;
        case 0x537c44u: goto label_537c44;
        case 0x537c48u: goto label_537c48;
        case 0x537c4cu: goto label_537c4c;
        case 0x537c50u: goto label_537c50;
        case 0x537c54u: goto label_537c54;
        case 0x537c58u: goto label_537c58;
        case 0x537c5cu: goto label_537c5c;
        case 0x537c60u: goto label_537c60;
        case 0x537c64u: goto label_537c64;
        case 0x537c68u: goto label_537c68;
        case 0x537c6cu: goto label_537c6c;
        case 0x537c70u: goto label_537c70;
        case 0x537c74u: goto label_537c74;
        case 0x537c78u: goto label_537c78;
        case 0x537c7cu: goto label_537c7c;
        case 0x537c80u: goto label_537c80;
        case 0x537c84u: goto label_537c84;
        case 0x537c88u: goto label_537c88;
        case 0x537c8cu: goto label_537c8c;
        case 0x537c90u: goto label_537c90;
        case 0x537c94u: goto label_537c94;
        case 0x537c98u: goto label_537c98;
        case 0x537c9cu: goto label_537c9c;
        case 0x537ca0u: goto label_537ca0;
        case 0x537ca4u: goto label_537ca4;
        case 0x537ca8u: goto label_537ca8;
        case 0x537cacu: goto label_537cac;
        case 0x537cb0u: goto label_537cb0;
        case 0x537cb4u: goto label_537cb4;
        case 0x537cb8u: goto label_537cb8;
        case 0x537cbcu: goto label_537cbc;
        case 0x537cc0u: goto label_537cc0;
        case 0x537cc4u: goto label_537cc4;
        case 0x537cc8u: goto label_537cc8;
        case 0x537cccu: goto label_537ccc;
        case 0x537cd0u: goto label_537cd0;
        case 0x537cd4u: goto label_537cd4;
        case 0x537cd8u: goto label_537cd8;
        case 0x537cdcu: goto label_537cdc;
        case 0x537ce0u: goto label_537ce0;
        case 0x537ce4u: goto label_537ce4;
        case 0x537ce8u: goto label_537ce8;
        case 0x537cecu: goto label_537cec;
        case 0x537cf0u: goto label_537cf0;
        case 0x537cf4u: goto label_537cf4;
        case 0x537cf8u: goto label_537cf8;
        case 0x537cfcu: goto label_537cfc;
        case 0x537d00u: goto label_537d00;
        case 0x537d04u: goto label_537d04;
        case 0x537d08u: goto label_537d08;
        case 0x537d0cu: goto label_537d0c;
        case 0x537d10u: goto label_537d10;
        case 0x537d14u: goto label_537d14;
        case 0x537d18u: goto label_537d18;
        case 0x537d1cu: goto label_537d1c;
        case 0x537d20u: goto label_537d20;
        case 0x537d24u: goto label_537d24;
        case 0x537d28u: goto label_537d28;
        case 0x537d2cu: goto label_537d2c;
        case 0x537d30u: goto label_537d30;
        case 0x537d34u: goto label_537d34;
        case 0x537d38u: goto label_537d38;
        case 0x537d3cu: goto label_537d3c;
        case 0x537d40u: goto label_537d40;
        case 0x537d44u: goto label_537d44;
        case 0x537d48u: goto label_537d48;
        case 0x537d4cu: goto label_537d4c;
        case 0x537d50u: goto label_537d50;
        case 0x537d54u: goto label_537d54;
        case 0x537d58u: goto label_537d58;
        case 0x537d5cu: goto label_537d5c;
        case 0x537d60u: goto label_537d60;
        case 0x537d64u: goto label_537d64;
        case 0x537d68u: goto label_537d68;
        case 0x537d6cu: goto label_537d6c;
        case 0x537d70u: goto label_537d70;
        case 0x537d74u: goto label_537d74;
        case 0x537d78u: goto label_537d78;
        case 0x537d7cu: goto label_537d7c;
        case 0x537d80u: goto label_537d80;
        case 0x537d84u: goto label_537d84;
        case 0x537d88u: goto label_537d88;
        case 0x537d8cu: goto label_537d8c;
        case 0x537d90u: goto label_537d90;
        case 0x537d94u: goto label_537d94;
        case 0x537d98u: goto label_537d98;
        case 0x537d9cu: goto label_537d9c;
        case 0x537da0u: goto label_537da0;
        case 0x537da4u: goto label_537da4;
        case 0x537da8u: goto label_537da8;
        case 0x537dacu: goto label_537dac;
        case 0x537db0u: goto label_537db0;
        case 0x537db4u: goto label_537db4;
        case 0x537db8u: goto label_537db8;
        case 0x537dbcu: goto label_537dbc;
        case 0x537dc0u: goto label_537dc0;
        case 0x537dc4u: goto label_537dc4;
        case 0x537dc8u: goto label_537dc8;
        case 0x537dccu: goto label_537dcc;
        case 0x537dd0u: goto label_537dd0;
        case 0x537dd4u: goto label_537dd4;
        case 0x537dd8u: goto label_537dd8;
        case 0x537ddcu: goto label_537ddc;
        case 0x537de0u: goto label_537de0;
        case 0x537de4u: goto label_537de4;
        case 0x537de8u: goto label_537de8;
        case 0x537decu: goto label_537dec;
        case 0x537df0u: goto label_537df0;
        case 0x537df4u: goto label_537df4;
        case 0x537df8u: goto label_537df8;
        case 0x537dfcu: goto label_537dfc;
        case 0x537e00u: goto label_537e00;
        case 0x537e04u: goto label_537e04;
        case 0x537e08u: goto label_537e08;
        case 0x537e0cu: goto label_537e0c;
        case 0x537e10u: goto label_537e10;
        case 0x537e14u: goto label_537e14;
        case 0x537e18u: goto label_537e18;
        case 0x537e1cu: goto label_537e1c;
        case 0x537e20u: goto label_537e20;
        case 0x537e24u: goto label_537e24;
        case 0x537e28u: goto label_537e28;
        case 0x537e2cu: goto label_537e2c;
        case 0x537e30u: goto label_537e30;
        case 0x537e34u: goto label_537e34;
        case 0x537e38u: goto label_537e38;
        case 0x537e3cu: goto label_537e3c;
        case 0x537e40u: goto label_537e40;
        case 0x537e44u: goto label_537e44;
        case 0x537e48u: goto label_537e48;
        case 0x537e4cu: goto label_537e4c;
        case 0x537e50u: goto label_537e50;
        case 0x537e54u: goto label_537e54;
        case 0x537e58u: goto label_537e58;
        case 0x537e5cu: goto label_537e5c;
        case 0x537e60u: goto label_537e60;
        case 0x537e64u: goto label_537e64;
        case 0x537e68u: goto label_537e68;
        case 0x537e6cu: goto label_537e6c;
        case 0x537e70u: goto label_537e70;
        case 0x537e74u: goto label_537e74;
        case 0x537e78u: goto label_537e78;
        case 0x537e7cu: goto label_537e7c;
        case 0x537e80u: goto label_537e80;
        case 0x537e84u: goto label_537e84;
        case 0x537e88u: goto label_537e88;
        case 0x537e8cu: goto label_537e8c;
        case 0x537e90u: goto label_537e90;
        case 0x537e94u: goto label_537e94;
        case 0x537e98u: goto label_537e98;
        case 0x537e9cu: goto label_537e9c;
        case 0x537ea0u: goto label_537ea0;
        case 0x537ea4u: goto label_537ea4;
        case 0x537ea8u: goto label_537ea8;
        case 0x537eacu: goto label_537eac;
        case 0x537eb0u: goto label_537eb0;
        case 0x537eb4u: goto label_537eb4;
        case 0x537eb8u: goto label_537eb8;
        case 0x537ebcu: goto label_537ebc;
        case 0x537ec0u: goto label_537ec0;
        case 0x537ec4u: goto label_537ec4;
        case 0x537ec8u: goto label_537ec8;
        case 0x537eccu: goto label_537ecc;
        case 0x537ed0u: goto label_537ed0;
        case 0x537ed4u: goto label_537ed4;
        case 0x537ed8u: goto label_537ed8;
        case 0x537edcu: goto label_537edc;
        case 0x537ee0u: goto label_537ee0;
        case 0x537ee4u: goto label_537ee4;
        case 0x537ee8u: goto label_537ee8;
        case 0x537eecu: goto label_537eec;
        case 0x537ef0u: goto label_537ef0;
        case 0x537ef4u: goto label_537ef4;
        case 0x537ef8u: goto label_537ef8;
        case 0x537efcu: goto label_537efc;
        case 0x537f00u: goto label_537f00;
        case 0x537f04u: goto label_537f04;
        case 0x537f08u: goto label_537f08;
        case 0x537f0cu: goto label_537f0c;
        case 0x537f10u: goto label_537f10;
        case 0x537f14u: goto label_537f14;
        case 0x537f18u: goto label_537f18;
        case 0x537f1cu: goto label_537f1c;
        case 0x537f20u: goto label_537f20;
        case 0x537f24u: goto label_537f24;
        case 0x537f28u: goto label_537f28;
        case 0x537f2cu: goto label_537f2c;
        case 0x537f30u: goto label_537f30;
        case 0x537f34u: goto label_537f34;
        case 0x537f38u: goto label_537f38;
        case 0x537f3cu: goto label_537f3c;
        case 0x537f40u: goto label_537f40;
        case 0x537f44u: goto label_537f44;
        case 0x537f48u: goto label_537f48;
        case 0x537f4cu: goto label_537f4c;
        case 0x537f50u: goto label_537f50;
        case 0x537f54u: goto label_537f54;
        case 0x537f58u: goto label_537f58;
        case 0x537f5cu: goto label_537f5c;
        case 0x537f60u: goto label_537f60;
        case 0x537f64u: goto label_537f64;
        case 0x537f68u: goto label_537f68;
        case 0x537f6cu: goto label_537f6c;
        case 0x537f70u: goto label_537f70;
        case 0x537f74u: goto label_537f74;
        case 0x537f78u: goto label_537f78;
        case 0x537f7cu: goto label_537f7c;
        case 0x537f80u: goto label_537f80;
        case 0x537f84u: goto label_537f84;
        case 0x537f88u: goto label_537f88;
        case 0x537f8cu: goto label_537f8c;
        case 0x537f90u: goto label_537f90;
        case 0x537f94u: goto label_537f94;
        case 0x537f98u: goto label_537f98;
        case 0x537f9cu: goto label_537f9c;
        case 0x537fa0u: goto label_537fa0;
        case 0x537fa4u: goto label_537fa4;
        case 0x537fa8u: goto label_537fa8;
        case 0x537facu: goto label_537fac;
        case 0x537fb0u: goto label_537fb0;
        case 0x537fb4u: goto label_537fb4;
        case 0x537fb8u: goto label_537fb8;
        case 0x537fbcu: goto label_537fbc;
        case 0x537fc0u: goto label_537fc0;
        case 0x537fc4u: goto label_537fc4;
        case 0x537fc8u: goto label_537fc8;
        case 0x537fccu: goto label_537fcc;
        case 0x537fd0u: goto label_537fd0;
        case 0x537fd4u: goto label_537fd4;
        case 0x537fd8u: goto label_537fd8;
        case 0x537fdcu: goto label_537fdc;
        case 0x537fe0u: goto label_537fe0;
        case 0x537fe4u: goto label_537fe4;
        case 0x537fe8u: goto label_537fe8;
        case 0x537fecu: goto label_537fec;
        case 0x537ff0u: goto label_537ff0;
        case 0x537ff4u: goto label_537ff4;
        case 0x537ff8u: goto label_537ff8;
        case 0x537ffcu: goto label_537ffc;
        case 0x538000u: goto label_538000;
        case 0x538004u: goto label_538004;
        case 0x538008u: goto label_538008;
        case 0x53800cu: goto label_53800c;
        case 0x538010u: goto label_538010;
        case 0x538014u: goto label_538014;
        case 0x538018u: goto label_538018;
        case 0x53801cu: goto label_53801c;
        case 0x538020u: goto label_538020;
        case 0x538024u: goto label_538024;
        case 0x538028u: goto label_538028;
        case 0x53802cu: goto label_53802c;
        case 0x538030u: goto label_538030;
        case 0x538034u: goto label_538034;
        case 0x538038u: goto label_538038;
        case 0x53803cu: goto label_53803c;
        case 0x538040u: goto label_538040;
        case 0x538044u: goto label_538044;
        case 0x538048u: goto label_538048;
        case 0x53804cu: goto label_53804c;
        default: break;
    }

    ctx->pc = 0x537610u;

label_537610:
    // 0x537610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x537610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_537614:
    // 0x537614: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x537614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_537618:
    // 0x537618: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x537618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53761c:
    // 0x53761c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53761cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_537620:
    // 0x537620: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x537620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_537624:
    // 0x537624: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_537628:
    if (ctx->pc == 0x537628u) {
        ctx->pc = 0x537628u;
            // 0x537628: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53762Cu;
        goto label_53762c;
    }
    ctx->pc = 0x537624u;
    {
        const bool branch_taken_0x537624 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x537628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537624u;
            // 0x537628: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x537624) {
            ctx->pc = 0x537668u;
            goto label_537668;
        }
    }
    ctx->pc = 0x53762Cu;
label_53762c:
    // 0x53762c: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x53762cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_537630:
    // 0x537630: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_537634:
    if (ctx->pc == 0x537634u) {
        ctx->pc = 0x537638u;
        goto label_537638;
    }
    ctx->pc = 0x537630u;
    {
        const bool branch_taken_0x537630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x537630) {
            ctx->pc = 0x537640u;
            goto label_537640;
        }
    }
    ctx->pc = 0x537638u;
label_537638:
    // 0x537638: 0xc07507c  jal         func_1D41F0
label_53763c:
    if (ctx->pc == 0x53763Cu) {
        ctx->pc = 0x53763Cu;
            // 0x53763c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x537640u;
        goto label_537640;
    }
    ctx->pc = 0x537638u;
    SET_GPR_U32(ctx, 31, 0x537640u);
    ctx->pc = 0x53763Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537638u;
            // 0x53763c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537640u; }
        if (ctx->pc != 0x537640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537640u; }
        if (ctx->pc != 0x537640u) { return; }
    }
    ctx->pc = 0x537640u;
label_537640:
    // 0x537640: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
label_537644:
    if (ctx->pc == 0x537644u) {
        ctx->pc = 0x537644u;
            // 0x537644: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x537648u;
        goto label_537648;
    }
    ctx->pc = 0x537640u;
    {
        const bool branch_taken_0x537640 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x537640) {
            ctx->pc = 0x537644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x537640u;
            // 0x537644: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x537654u;
            goto label_537654;
        }
    }
    ctx->pc = 0x537648u;
label_537648:
    // 0x537648: 0xc07507c  jal         func_1D41F0
label_53764c:
    if (ctx->pc == 0x53764Cu) {
        ctx->pc = 0x53764Cu;
            // 0x53764c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x537650u;
        goto label_537650;
    }
    ctx->pc = 0x537648u;
    SET_GPR_U32(ctx, 31, 0x537650u);
    ctx->pc = 0x53764Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537648u;
            // 0x53764c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537650u; }
        if (ctx->pc != 0x537650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537650u; }
        if (ctx->pc != 0x537650u) { return; }
    }
    ctx->pc = 0x537650u;
label_537650:
    // 0x537650: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x537650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_537654:
    // 0x537654: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x537654u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_537658:
    // 0x537658: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_53765c:
    if (ctx->pc == 0x53765Cu) {
        ctx->pc = 0x53765Cu;
            // 0x53765c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x537660u;
        goto label_537660;
    }
    ctx->pc = 0x537658u;
    {
        const bool branch_taken_0x537658 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x537658) {
            ctx->pc = 0x53765Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x537658u;
            // 0x53765c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53766Cu;
            goto label_53766c;
        }
    }
    ctx->pc = 0x537660u;
label_537660:
    // 0x537660: 0xc0400a8  jal         func_1002A0
label_537664:
    if (ctx->pc == 0x537664u) {
        ctx->pc = 0x537664u;
            // 0x537664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x537668u;
        goto label_537668;
    }
    ctx->pc = 0x537660u;
    SET_GPR_U32(ctx, 31, 0x537668u);
    ctx->pc = 0x537664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537660u;
            // 0x537664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537668u; }
        if (ctx->pc != 0x537668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537668u; }
        if (ctx->pc != 0x537668u) { return; }
    }
    ctx->pc = 0x537668u;
label_537668:
    // 0x537668: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x537668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53766c:
    // 0x53766c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x53766cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_537670:
    // 0x537670: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x537670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_537674:
    // 0x537674: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x537674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_537678:
    // 0x537678: 0x3e00008  jr          $ra
label_53767c:
    if (ctx->pc == 0x53767Cu) {
        ctx->pc = 0x53767Cu;
            // 0x53767c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x537680u;
        goto label_537680;
    }
    ctx->pc = 0x537678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53767Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537678u;
            // 0x53767c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x537680u;
label_537680:
    // 0x537680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x537680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_537684:
    // 0x537684: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x537684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_537688:
    // 0x537688: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x537688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53768c:
    // 0x53768c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53768cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_537690:
    // 0x537690: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x537690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_537694:
    // 0x537694: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_537698:
    if (ctx->pc == 0x537698u) {
        ctx->pc = 0x537698u;
            // 0x537698: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53769Cu;
        goto label_53769c;
    }
    ctx->pc = 0x537694u;
    {
        const bool branch_taken_0x537694 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x537698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537694u;
            // 0x537698: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x537694) {
            ctx->pc = 0x53770Cu;
            goto label_53770c;
        }
    }
    ctx->pc = 0x53769Cu;
label_53769c:
    // 0x53769c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x53769cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5376a0:
    // 0x5376a0: 0x24427070  addiu       $v0, $v0, 0x7070
    ctx->pc = 0x5376a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28784));
label_5376a4:
    // 0x5376a4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x5376a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_5376a8:
    // 0x5376a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5376a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5376ac:
    // 0x5376ac: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x5376acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_5376b0:
    // 0x5376b0: 0x320f809  jalr        $t9
label_5376b4:
    if (ctx->pc == 0x5376B4u) {
        ctx->pc = 0x5376B8u;
        goto label_5376b8;
    }
    ctx->pc = 0x5376B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5376B8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5376B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5376B8u; }
            if (ctx->pc != 0x5376B8u) { return; }
        }
        }
    }
    ctx->pc = 0x5376B8u;
label_5376b8:
    // 0x5376b8: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x5376b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
label_5376bc:
    // 0x5376bc: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x5376bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_5376c0:
    // 0x5376c0: 0x24a57730  addiu       $a1, $a1, 0x7730
    ctx->pc = 0x5376c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30512));
label_5376c4:
    // 0x5376c4: 0x24060160  addiu       $a2, $zero, 0x160
    ctx->pc = 0x5376c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_5376c8:
    // 0x5376c8: 0xc0407e8  jal         func_101FA0
label_5376cc:
    if (ctx->pc == 0x5376CCu) {
        ctx->pc = 0x5376CCu;
            // 0x5376cc: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x5376D0u;
        goto label_5376d0;
    }
    ctx->pc = 0x5376C8u;
    SET_GPR_U32(ctx, 31, 0x5376D0u);
    ctx->pc = 0x5376CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5376C8u;
            // 0x5376cc: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5376D0u; }
        if (ctx->pc != 0x5376D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5376D0u; }
        if (ctx->pc != 0x5376D0u) { return; }
    }
    ctx->pc = 0x5376D0u;
label_5376d0:
    // 0x5376d0: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_5376d4:
    if (ctx->pc == 0x5376D4u) {
        ctx->pc = 0x5376D4u;
            // 0x5376d4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x5376D8u;
        goto label_5376d8;
    }
    ctx->pc = 0x5376D0u;
    {
        const bool branch_taken_0x5376d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x5376d0) {
            ctx->pc = 0x5376D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5376D0u;
            // 0x5376d4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5376F8u;
            goto label_5376f8;
        }
    }
    ctx->pc = 0x5376D8u;
label_5376d8:
    // 0x5376d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x5376d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_5376dc:
    // 0x5376dc: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x5376dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_5376e0:
    // 0x5376e0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_5376e4:
    if (ctx->pc == 0x5376E4u) {
        ctx->pc = 0x5376E4u;
            // 0x5376e4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x5376E8u;
        goto label_5376e8;
    }
    ctx->pc = 0x5376E0u;
    {
        const bool branch_taken_0x5376e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x5376E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5376E0u;
            // 0x5376e4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5376e0) {
            ctx->pc = 0x5376F4u;
            goto label_5376f4;
        }
    }
    ctx->pc = 0x5376E8u;
label_5376e8:
    // 0x5376e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x5376e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_5376ec:
    // 0x5376ec: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x5376ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_5376f0:
    // 0x5376f0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x5376f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_5376f4:
    // 0x5376f4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x5376f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_5376f8:
    // 0x5376f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5376f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_5376fc:
    // 0x5376fc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_537700:
    if (ctx->pc == 0x537700u) {
        ctx->pc = 0x537700u;
            // 0x537700: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x537704u;
        goto label_537704;
    }
    ctx->pc = 0x5376FCu;
    {
        const bool branch_taken_0x5376fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5376fc) {
            ctx->pc = 0x537700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5376FCu;
            // 0x537700: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x537710u;
            goto label_537710;
        }
    }
    ctx->pc = 0x537704u;
label_537704:
    // 0x537704: 0xc0400a8  jal         func_1002A0
label_537708:
    if (ctx->pc == 0x537708u) {
        ctx->pc = 0x537708u;
            // 0x537708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53770Cu;
        goto label_53770c;
    }
    ctx->pc = 0x537704u;
    SET_GPR_U32(ctx, 31, 0x53770Cu);
    ctx->pc = 0x537708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537704u;
            // 0x537708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53770Cu; }
        if (ctx->pc != 0x53770Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53770Cu; }
        if (ctx->pc != 0x53770Cu) { return; }
    }
    ctx->pc = 0x53770Cu;
label_53770c:
    // 0x53770c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x53770cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_537710:
    // 0x537710: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x537710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_537714:
    // 0x537714: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x537714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_537718:
    // 0x537718: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x537718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53771c:
    // 0x53771c: 0x3e00008  jr          $ra
label_537720:
    if (ctx->pc == 0x537720u) {
        ctx->pc = 0x537720u;
            // 0x537720: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x537724u;
        goto label_537724;
    }
    ctx->pc = 0x53771Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x537720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53771Cu;
            // 0x537720: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x537724u;
label_537724:
    // 0x537724: 0x0  nop
    ctx->pc = 0x537724u;
    // NOP
label_537728:
    // 0x537728: 0x0  nop
    ctx->pc = 0x537728u;
    // NOP
label_53772c:
    // 0x53772c: 0x0  nop
    ctx->pc = 0x53772cu;
    // NOP
label_537730:
    // 0x537730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x537730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_537734:
    // 0x537734: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x537734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_537738:
    // 0x537738: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x537738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53773c:
    // 0x53773c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53773cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_537740:
    // 0x537740: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x537740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_537744:
    // 0x537744: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_537748:
    if (ctx->pc == 0x537748u) {
        ctx->pc = 0x537748u;
            // 0x537748: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53774Cu;
        goto label_53774c;
    }
    ctx->pc = 0x537744u;
    {
        const bool branch_taken_0x537744 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x537748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537744u;
            // 0x537748: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x537744) {
            ctx->pc = 0x5377B8u;
            goto label_5377b8;
        }
    }
    ctx->pc = 0x53774Cu;
label_53774c:
    // 0x53774c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x53774cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_537750:
    // 0x537750: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x537750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_537754:
    // 0x537754: 0x246370b0  addiu       $v1, $v1, 0x70B0
    ctx->pc = 0x537754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28848));
label_537758:
    // 0x537758: 0x244270f0  addiu       $v0, $v0, 0x70F0
    ctx->pc = 0x537758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28912));
label_53775c:
    // 0x53775c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x53775cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_537760:
    // 0x537760: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x537760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_537764:
    // 0x537764: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x537764u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_537768:
    // 0x537768: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x537768u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_53776c:
    // 0x53776c: 0x320f809  jalr        $t9
label_537770:
    if (ctx->pc == 0x537770u) {
        ctx->pc = 0x537774u;
        goto label_537774;
    }
    ctx->pc = 0x53776Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x537774u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x537774u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x537774u; }
            if (ctx->pc != 0x537774u) { return; }
        }
        }
    }
    ctx->pc = 0x537774u;
label_537774:
    // 0x537774: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_537778:
    if (ctx->pc == 0x537778u) {
        ctx->pc = 0x537778u;
            // 0x537778: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x53777Cu;
        goto label_53777c;
    }
    ctx->pc = 0x537774u;
    {
        const bool branch_taken_0x537774 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x537774) {
            ctx->pc = 0x537778u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x537774u;
            // 0x537778: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5377A4u;
            goto label_5377a4;
        }
    }
    ctx->pc = 0x53777Cu;
label_53777c:
    // 0x53777c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x53777cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_537780:
    // 0x537780: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x537780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_537784:
    // 0x537784: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x537784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
label_537788:
    // 0x537788: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x537788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
label_53778c:
    // 0x53778c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x53778cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_537790:
    // 0x537790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x537790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_537794:
    // 0x537794: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x537794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_537798:
    // 0x537798: 0xc0aee40  jal         func_2BB900
label_53779c:
    if (ctx->pc == 0x53779Cu) {
        ctx->pc = 0x53779Cu;
            // 0x53779c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5377A0u;
        goto label_5377a0;
    }
    ctx->pc = 0x537798u;
    SET_GPR_U32(ctx, 31, 0x5377A0u);
    ctx->pc = 0x53779Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537798u;
            // 0x53779c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB900u;
    if (runtime->hasFunction(0x2BB900u)) {
        auto targetFn = runtime->lookupFunction(0x2BB900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5377A0u; }
        if (ctx->pc != 0x5377A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB900_0x2bb900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5377A0u; }
        if (ctx->pc != 0x5377A0u) { return; }
    }
    ctx->pc = 0x5377A0u;
label_5377a0:
    // 0x5377a0: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x5377a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_5377a4:
    // 0x5377a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5377a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_5377a8:
    // 0x5377a8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_5377ac:
    if (ctx->pc == 0x5377ACu) {
        ctx->pc = 0x5377ACu;
            // 0x5377ac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5377B0u;
        goto label_5377b0;
    }
    ctx->pc = 0x5377A8u;
    {
        const bool branch_taken_0x5377a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5377a8) {
            ctx->pc = 0x5377ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5377A8u;
            // 0x5377ac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5377BCu;
            goto label_5377bc;
        }
    }
    ctx->pc = 0x5377B0u;
label_5377b0:
    // 0x5377b0: 0xc0400a8  jal         func_1002A0
label_5377b4:
    if (ctx->pc == 0x5377B4u) {
        ctx->pc = 0x5377B4u;
            // 0x5377b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5377B8u;
        goto label_5377b8;
    }
    ctx->pc = 0x5377B0u;
    SET_GPR_U32(ctx, 31, 0x5377B8u);
    ctx->pc = 0x5377B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5377B0u;
            // 0x5377b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5377B8u; }
        if (ctx->pc != 0x5377B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5377B8u; }
        if (ctx->pc != 0x5377B8u) { return; }
    }
    ctx->pc = 0x5377B8u;
label_5377b8:
    // 0x5377b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x5377b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5377bc:
    // 0x5377bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5377bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5377c0:
    // 0x5377c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5377c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5377c4:
    // 0x5377c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5377c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5377c8:
    // 0x5377c8: 0x3e00008  jr          $ra
label_5377cc:
    if (ctx->pc == 0x5377CCu) {
        ctx->pc = 0x5377CCu;
            // 0x5377cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x5377D0u;
        goto label_5377d0;
    }
    ctx->pc = 0x5377C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5377CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5377C8u;
            // 0x5377cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5377D0u;
label_5377d0:
    // 0x5377d0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x5377d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_5377d4:
    // 0x5377d4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x5377d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_5377d8:
    // 0x5377d8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x5377d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_5377dc:
    // 0x5377dc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x5377dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_5377e0:
    // 0x5377e0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x5377e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_5377e4:
    // 0x5377e4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x5377e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_5377e8:
    // 0x5377e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x5377e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_5377ec:
    // 0x5377ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x5377ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_5377f0:
    // 0x5377f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x5377f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_5377f4:
    // 0x5377f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5377f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5377f8:
    // 0x5377f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5377f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5377fc:
    // 0x5377fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5377fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_537800:
    // 0x537800: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x537800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_537804:
    // 0x537804: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x537804u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_537808:
    // 0x537808: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x537808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_53780c:
    // 0x53780c: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_537810:
    if (ctx->pc == 0x537810u) {
        ctx->pc = 0x537810u;
            // 0x537810: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x537814u;
        goto label_537814;
    }
    ctx->pc = 0x53780Cu;
    {
        const bool branch_taken_0x53780c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x537810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53780Cu;
            // 0x537810: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53780c) {
            ctx->pc = 0x537850u;
            goto label_537850;
        }
    }
    ctx->pc = 0x537814u;
label_537814:
    // 0x537814: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x537814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_537818:
    // 0x537818: 0x50a3008a  beql        $a1, $v1, . + 4 + (0x8A << 2)
label_53781c:
    if (ctx->pc == 0x53781Cu) {
        ctx->pc = 0x53781Cu;
            // 0x53781c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x537820u;
        goto label_537820;
    }
    ctx->pc = 0x537818u;
    {
        const bool branch_taken_0x537818 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x537818) {
            ctx->pc = 0x53781Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x537818u;
            // 0x53781c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x537A44u;
            goto label_537a44;
        }
    }
    ctx->pc = 0x537820u;
label_537820:
    // 0x537820: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x537820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_537824:
    // 0x537824: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_537828:
    if (ctx->pc == 0x537828u) {
        ctx->pc = 0x537828u;
            // 0x537828: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x53782Cu;
        goto label_53782c;
    }
    ctx->pc = 0x537824u;
    {
        const bool branch_taken_0x537824 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x537824) {
            ctx->pc = 0x537828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x537824u;
            // 0x537828: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x537834u;
            goto label_537834;
        }
    }
    ctx->pc = 0x53782Cu;
label_53782c:
    // 0x53782c: 0x10000084  b           . + 4 + (0x84 << 2)
label_537830:
    if (ctx->pc == 0x537830u) {
        ctx->pc = 0x537834u;
        goto label_537834;
    }
    ctx->pc = 0x53782Cu;
    {
        const bool branch_taken_0x53782c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53782c) {
            ctx->pc = 0x537A40u;
            goto label_537a40;
        }
    }
    ctx->pc = 0x537834u;
label_537834:
    // 0x537834: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x537834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_537838:
    // 0x537838: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x537838u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_53783c:
    // 0x53783c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x53783cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_537840:
    // 0x537840: 0x320f809  jalr        $t9
label_537844:
    if (ctx->pc == 0x537844u) {
        ctx->pc = 0x537844u;
            // 0x537844: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x537848u;
        goto label_537848;
    }
    ctx->pc = 0x537840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x537848u);
        ctx->pc = 0x537844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537840u;
            // 0x537844: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x537848u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x537848u; }
            if (ctx->pc != 0x537848u) { return; }
        }
        }
    }
    ctx->pc = 0x537848u;
label_537848:
    // 0x537848: 0x1000007d  b           . + 4 + (0x7D << 2)
label_53784c:
    if (ctx->pc == 0x53784Cu) {
        ctx->pc = 0x537850u;
        goto label_537850;
    }
    ctx->pc = 0x537848u;
    {
        const bool branch_taken_0x537848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x537848) {
            ctx->pc = 0x537A40u;
            goto label_537a40;
        }
    }
    ctx->pc = 0x537850u;
label_537850:
    // 0x537850: 0x8eb70070  lw          $s7, 0x70($s5)
    ctx->pc = 0x537850u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_537854:
    // 0x537854: 0x12e0007a  beqz        $s7, . + 4 + (0x7A << 2)
label_537858:
    if (ctx->pc == 0x537858u) {
        ctx->pc = 0x53785Cu;
        goto label_53785c;
    }
    ctx->pc = 0x537854u;
    {
        const bool branch_taken_0x537854 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x537854) {
            ctx->pc = 0x537A40u;
            goto label_537a40;
        }
    }
    ctx->pc = 0x53785Cu;
label_53785c:
    // 0x53785c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x53785cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_537860:
    // 0x537860: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x537860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_537864:
    // 0x537864: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x537864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_537868:
    // 0x537868: 0x26b20084  addiu       $s2, $s5, 0x84
    ctx->pc = 0x537868u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_53786c:
    // 0x53786c: 0x8c7ee378  lw          $fp, -0x1C88($v1)
    ctx->pc = 0x53786cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_537870:
    // 0x537870: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x537870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_537874:
    // 0x537874: 0x8c960130  lw          $s6, 0x130($a0)
    ctx->pc = 0x537874u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_537878:
    // 0x537878: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x537878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_53787c:
    // 0x53787c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x53787cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_537880:
    // 0x537880: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x537880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_537884:
    // 0x537884: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x537884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_537888:
    // 0x537888: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x537888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_53788c:
    // 0x53788c: 0x26a2008c  addiu       $v0, $s5, 0x8C
    ctx->pc = 0x53788cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 140));
label_537890:
    // 0x537890: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x537890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_537894:
    // 0x537894: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x537894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_537898:
    // 0x537898: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x537898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_53789c:
    // 0x53789c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x53789cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5378a0:
    // 0x5378a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x5378a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5378a4:
    // 0x5378a4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x5378a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_5378a8:
    // 0x5378a8: 0xc04e738  jal         func_139CE0
label_5378ac:
    if (ctx->pc == 0x5378ACu) {
        ctx->pc = 0x5378ACu;
            // 0x5378ac: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->pc = 0x5378B0u;
        goto label_5378b0;
    }
    ctx->pc = 0x5378A8u;
    SET_GPR_U32(ctx, 31, 0x5378B0u);
    ctx->pc = 0x5378ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5378A8u;
            // 0x5378ac: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5378B0u; }
        if (ctx->pc != 0x5378B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5378B0u; }
        if (ctx->pc != 0x5378B0u) { return; }
    }
    ctx->pc = 0x5378B0u;
label_5378b0:
    // 0x5378b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5378b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5378b4:
    // 0x5378b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5378b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5378b8:
    // 0x5378b8: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x5378b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_5378bc:
    // 0x5378bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x5378bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5378c0:
    // 0x5378c0: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x5378c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_5378c4:
    // 0x5378c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x5378c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5378c8:
    // 0x5378c8: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x5378c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_5378cc:
    // 0x5378cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x5378ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5378d0:
    // 0x5378d0: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x5378d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_5378d4:
    // 0x5378d4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x5378d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_5378d8:
    // 0x5378d8: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x5378d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_5378dc:
    // 0x5378dc: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x5378dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_5378e0:
    // 0x5378e0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x5378e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_5378e4:
    // 0x5378e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x5378e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5378e8:
    // 0x5378e8: 0xc14e1a0  jal         func_538680
label_5378ec:
    if (ctx->pc == 0x5378ECu) {
        ctx->pc = 0x5378ECu;
            // 0x5378ec: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5378F0u;
        goto label_5378f0;
    }
    ctx->pc = 0x5378E8u;
    SET_GPR_U32(ctx, 31, 0x5378F0u);
    ctx->pc = 0x5378ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5378E8u;
            // 0x5378ec: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x538680u;
    if (runtime->hasFunction(0x538680u)) {
        auto targetFn = runtime->lookupFunction(0x538680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5378F0u; }
        if (ctx->pc != 0x5378F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00538680_0x538680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5378F0u; }
        if (ctx->pc != 0x5378F0u) { return; }
    }
    ctx->pc = 0x5378F0u;
label_5378f0:
    // 0x5378f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x5378f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_5378f4:
    // 0x5378f4: 0x237102b  sltu        $v0, $s1, $s7
    ctx->pc = 0x5378f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_5378f8:
    // 0x5378f8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_5378fc:
    if (ctx->pc == 0x5378FCu) {
        ctx->pc = 0x5378FCu;
            // 0x5378fc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x537900u;
        goto label_537900;
    }
    ctx->pc = 0x5378F8u;
    {
        const bool branch_taken_0x5378f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x5378FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5378F8u;
            // 0x5378fc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5378f8) {
            ctx->pc = 0x5378C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5378c8;
        }
    }
    ctx->pc = 0x537900u;
label_537900:
    // 0x537900: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x537900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_537904:
    // 0x537904: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x537904u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_537908:
    // 0x537908: 0x19200008  blez        $t1, . + 4 + (0x8 << 2)
label_53790c:
    if (ctx->pc == 0x53790Cu) {
        ctx->pc = 0x53790Cu;
            // 0x53790c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x537910u;
        goto label_537910;
    }
    ctx->pc = 0x537908u;
    {
        const bool branch_taken_0x537908 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x53790Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537908u;
            // 0x53790c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x537908) {
            ctx->pc = 0x53792Cu;
            goto label_53792c;
        }
    }
    ctx->pc = 0x537910u;
label_537910:
    // 0x537910: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x537910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_537914:
    // 0x537914: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x537914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_537918:
    // 0x537918: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x537918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_53791c:
    // 0x53791c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x53791cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_537920:
    // 0x537920: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x537920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_537924:
    // 0x537924: 0xc055754  jal         func_155D50
label_537928:
    if (ctx->pc == 0x537928u) {
        ctx->pc = 0x537928u;
            // 0x537928: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x53792Cu;
        goto label_53792c;
    }
    ctx->pc = 0x537924u;
    SET_GPR_U32(ctx, 31, 0x53792Cu);
    ctx->pc = 0x537928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537924u;
            // 0x537928: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155D50u;
    if (runtime->hasFunction(0x155D50u)) {
        auto targetFn = runtime->lookupFunction(0x155D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53792Cu; }
        if (ctx->pc != 0x53792Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155D50_0x155d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53792Cu; }
        if (ctx->pc != 0x53792Cu) { return; }
    }
    ctx->pc = 0x53792Cu;
label_53792c:
    // 0x53792c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x53792cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_537930:
    // 0x537930: 0xc04e738  jal         func_139CE0
label_537934:
    if (ctx->pc == 0x537934u) {
        ctx->pc = 0x537934u;
            // 0x537934: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x537938u;
        goto label_537938;
    }
    ctx->pc = 0x537930u;
    SET_GPR_U32(ctx, 31, 0x537938u);
    ctx->pc = 0x537934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537930u;
            // 0x537934: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537938u; }
        if (ctx->pc != 0x537938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537938u; }
        if (ctx->pc != 0x537938u) { return; }
    }
    ctx->pc = 0x537938u;
label_537938:
    // 0x537938: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x537938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53793c:
    // 0x53793c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53793cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_537940:
    // 0x537940: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x537940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_537944:
    // 0x537944: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x537944u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_537948:
    // 0x537948: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x537948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_53794c:
    // 0x53794c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x53794cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_537950:
    // 0x537950: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x537950u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_537954:
    // 0x537954: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x537954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_537958:
    // 0x537958: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x537958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_53795c:
    // 0x53795c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x53795cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_537960:
    // 0x537960: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x537960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_537964:
    // 0x537964: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x537964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_537968:
    // 0x537968: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x537968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_53796c:
    // 0x53796c: 0x24530050  addiu       $s3, $v0, 0x50
    ctx->pc = 0x53796cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_537970:
    // 0x537970: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x537970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_537974:
    // 0x537974: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x537974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_537978:
    // 0x537978: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x537978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_53797c:
    // 0x53797c: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x53797cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_537980:
    // 0x537980: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x537980u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_537984:
    // 0x537984: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x537984u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_537988:
    // 0x537988: 0xc14e60c  jal         func_539830
label_53798c:
    if (ctx->pc == 0x53798Cu) {
        ctx->pc = 0x53798Cu;
            // 0x53798c: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x537990u;
        goto label_537990;
    }
    ctx->pc = 0x537988u;
    SET_GPR_U32(ctx, 31, 0x537990u);
    ctx->pc = 0x53798Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537988u;
            // 0x53798c: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x539830u;
    if (runtime->hasFunction(0x539830u)) {
        auto targetFn = runtime->lookupFunction(0x539830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537990u; }
        if (ctx->pc != 0x537990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00539830_0x539830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537990u; }
        if (ctx->pc != 0x537990u) { return; }
    }
    ctx->pc = 0x537990u;
label_537990:
    // 0x537990: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_537994:
    if (ctx->pc == 0x537994u) {
        ctx->pc = 0x537998u;
        goto label_537998;
    }
    ctx->pc = 0x537990u;
    {
        const bool branch_taken_0x537990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x537990) {
            ctx->pc = 0x5379E8u;
            goto label_5379e8;
        }
    }
    ctx->pc = 0x537998u;
label_537998:
    // 0x537998: 0x8eb00098  lw          $s0, 0x98($s5)
    ctx->pc = 0x537998u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 152)));
label_53799c:
    // 0x53799c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x53799cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_5379a0:
    // 0x5379a0: 0x86030066  lh          $v1, 0x66($s0)
    ctx->pc = 0x5379a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
label_5379a4:
    // 0x5379a4: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x5379a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_5379a8:
    // 0x5379a8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x5379a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_5379ac:
    // 0x5379ac: 0xc04cce8  jal         func_1333A0
label_5379b0:
    if (ctx->pc == 0x5379B0u) {
        ctx->pc = 0x5379B0u;
            // 0x5379b0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x5379B4u;
        goto label_5379b4;
    }
    ctx->pc = 0x5379ACu;
    SET_GPR_U32(ctx, 31, 0x5379B4u);
    ctx->pc = 0x5379B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5379ACu;
            // 0x5379b0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5379B4u; }
        if (ctx->pc != 0x5379B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5379B4u; }
        if (ctx->pc != 0x5379B4u) { return; }
    }
    ctx->pc = 0x5379B4u;
label_5379b4:
    // 0x5379b4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x5379b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_5379b8:
    // 0x5379b8: 0x86050066  lh          $a1, 0x66($s0)
    ctx->pc = 0x5379b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
label_5379bc:
    // 0x5379bc: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x5379bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_5379c0:
    // 0x5379c0: 0x86040064  lh          $a0, 0x64($s0)
    ctx->pc = 0x5379c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
label_5379c4:
    // 0x5379c4: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x5379c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
label_5379c8:
    // 0x5379c8: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x5379c8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_5379cc:
    // 0x5379cc: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x5379ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_5379d0:
    // 0x5379d0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x5379d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_5379d4:
    // 0x5379d4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x5379d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_5379d8:
    // 0x5379d8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x5379d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_5379dc:
    // 0x5379dc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x5379dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_5379e0:
    // 0x5379e0: 0xa6030066  sh          $v1, 0x66($s0)
    ctx->pc = 0x5379e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 3));
label_5379e4:
    // 0x5379e4: 0x0  nop
    ctx->pc = 0x5379e4u;
    // NOP
label_5379e8:
    // 0x5379e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x5379e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_5379ec:
    // 0x5379ec: 0x2e430003  sltiu       $v1, $s2, 0x3
    ctx->pc = 0x5379ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_5379f0:
    // 0x5379f0: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
label_5379f4:
    if (ctx->pc == 0x5379F4u) {
        ctx->pc = 0x5379F4u;
            // 0x5379f4: 0x26730160  addiu       $s3, $s3, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 352));
        ctx->pc = 0x5379F8u;
        goto label_5379f8;
    }
    ctx->pc = 0x5379F0u;
    {
        const bool branch_taken_0x5379f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5379F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5379F0u;
            // 0x5379f4: 0x26730160  addiu       $s3, $s3, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5379f0) {
            ctx->pc = 0x537970u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_537970;
        }
    }
    ctx->pc = 0x5379F8u;
label_5379f8:
    // 0x5379f8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x5379f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_5379fc:
    // 0x5379fc: 0x297182b  sltu        $v1, $s4, $s7
    ctx->pc = 0x5379fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_537a00:
    // 0x537a00: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
label_537a04:
    if (ctx->pc == 0x537A04u) {
        ctx->pc = 0x537A04u;
            // 0x537a04: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x537A08u;
        goto label_537a08;
    }
    ctx->pc = 0x537A00u;
    {
        const bool branch_taken_0x537a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x537A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537A00u;
            // 0x537a04: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x537a00) {
            ctx->pc = 0x537950u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_537950;
        }
    }
    ctx->pc = 0x537A08u;
label_537a08:
    // 0x537a08: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x537a08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_537a0c:
    // 0x537a0c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x537a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_537a10:
    // 0x537a10: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x537a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_537a14:
    // 0x537a14: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x537a14u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_537a18:
    // 0x537a18: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_537a1c:
    if (ctx->pc == 0x537A1Cu) {
        ctx->pc = 0x537A20u;
        goto label_537a20;
    }
    ctx->pc = 0x537A18u;
    {
        const bool branch_taken_0x537a18 = (GPR_S32(ctx, 9) <= 0);
        if (branch_taken_0x537a18) {
            ctx->pc = 0x537A40u;
            goto label_537a40;
        }
    }
    ctx->pc = 0x537A20u;
label_537a20:
    // 0x537a20: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x537a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_537a24:
    // 0x537a24: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x537a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_537a28:
    // 0x537a28: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x537a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_537a2c:
    // 0x537a2c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x537a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_537a30:
    // 0x537a30: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x537a30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_537a34:
    // 0x537a34: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x537a34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_537a38:
    // 0x537a38: 0xc055ea8  jal         func_157AA0
label_537a3c:
    if (ctx->pc == 0x537A3Cu) {
        ctx->pc = 0x537A3Cu;
            // 0x537a3c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x537A40u;
        goto label_537a40;
    }
    ctx->pc = 0x537A38u;
    SET_GPR_U32(ctx, 31, 0x537A40u);
    ctx->pc = 0x537A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537A38u;
            // 0x537a3c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537A40u; }
        if (ctx->pc != 0x537A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537A40u; }
        if (ctx->pc != 0x537A40u) { return; }
    }
    ctx->pc = 0x537A40u;
label_537a40:
    // 0x537a40: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x537a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_537a44:
    // 0x537a44: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x537a44u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_537a48:
    // 0x537a48: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x537a48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_537a4c:
    // 0x537a4c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x537a4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_537a50:
    // 0x537a50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x537a50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_537a54:
    // 0x537a54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x537a54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_537a58:
    // 0x537a58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x537a58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_537a5c:
    // 0x537a5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x537a5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_537a60:
    // 0x537a60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x537a60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_537a64:
    // 0x537a64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x537a64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_537a68:
    // 0x537a68: 0x3e00008  jr          $ra
label_537a6c:
    if (ctx->pc == 0x537A6Cu) {
        ctx->pc = 0x537A6Cu;
            // 0x537a6c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x537A70u;
        goto label_537a70;
    }
    ctx->pc = 0x537A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x537A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537A68u;
            // 0x537a6c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x537A70u;
label_537a70:
    // 0x537a70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x537a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_537a74:
    // 0x537a74: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x537a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_537a78:
    // 0x537a78: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x537a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_537a7c:
    // 0x537a7c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x537a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_537a80:
    // 0x537a80: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x537a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_537a84:
    // 0x537a84: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x537a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_537a88:
    // 0x537a88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x537a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_537a8c:
    // 0x537a8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x537a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_537a90:
    // 0x537a90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x537a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_537a94:
    // 0x537a94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x537a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_537a98:
    // 0x537a98: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x537a98u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_537a9c:
    // 0x537a9c: 0x10a3002c  beq         $a1, $v1, . + 4 + (0x2C << 2)
label_537aa0:
    if (ctx->pc == 0x537AA0u) {
        ctx->pc = 0x537AA0u;
            // 0x537aa0: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x537AA4u;
        goto label_537aa4;
    }
    ctx->pc = 0x537A9Cu;
    {
        const bool branch_taken_0x537a9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x537AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537A9Cu;
            // 0x537aa0: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x537a9c) {
            ctx->pc = 0x537B50u;
            goto label_537b50;
        }
    }
    ctx->pc = 0x537AA4u;
label_537aa4:
    // 0x537aa4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x537aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_537aa8:
    // 0x537aa8: 0x50a30012  beql        $a1, $v1, . + 4 + (0x12 << 2)
label_537aac:
    if (ctx->pc == 0x537AACu) {
        ctx->pc = 0x537AACu;
            // 0x537aac: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x537AB0u;
        goto label_537ab0;
    }
    ctx->pc = 0x537AA8u;
    {
        const bool branch_taken_0x537aa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x537aa8) {
            ctx->pc = 0x537AACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x537AA8u;
            // 0x537aac: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x537AF4u;
            goto label_537af4;
        }
    }
    ctx->pc = 0x537AB0u;
label_537ab0:
    // 0x537ab0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x537ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_537ab4:
    // 0x537ab4: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_537ab8:
    if (ctx->pc == 0x537AB8u) {
        ctx->pc = 0x537ABCu;
        goto label_537abc;
    }
    ctx->pc = 0x537AB4u;
    {
        const bool branch_taken_0x537ab4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x537ab4) {
            ctx->pc = 0x537AC4u;
            goto label_537ac4;
        }
    }
    ctx->pc = 0x537ABCu;
label_537abc:
    // 0x537abc: 0x10000068  b           . + 4 + (0x68 << 2)
label_537ac0:
    if (ctx->pc == 0x537AC0u) {
        ctx->pc = 0x537AC4u;
        goto label_537ac4;
    }
    ctx->pc = 0x537ABCu;
    {
        const bool branch_taken_0x537abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x537abc) {
            ctx->pc = 0x537C60u;
            goto label_537c60;
        }
    }
    ctx->pc = 0x537AC4u;
label_537ac4:
    // 0x537ac4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x537ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_537ac8:
    // 0x537ac8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x537ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_537acc:
    // 0x537acc: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x537accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_537ad0:
    // 0x537ad0: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x537ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_537ad4:
    // 0x537ad4: 0x10650062  beq         $v1, $a1, . + 4 + (0x62 << 2)
label_537ad8:
    if (ctx->pc == 0x537AD8u) {
        ctx->pc = 0x537ADCu;
        goto label_537adc;
    }
    ctx->pc = 0x537AD4u;
    {
        const bool branch_taken_0x537ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x537ad4) {
            ctx->pc = 0x537C60u;
            goto label_537c60;
        }
    }
    ctx->pc = 0x537ADCu;
label_537adc:
    // 0x537adc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x537adcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_537ae0:
    // 0x537ae0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x537ae0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_537ae4:
    // 0x537ae4: 0x320f809  jalr        $t9
label_537ae8:
    if (ctx->pc == 0x537AE8u) {
        ctx->pc = 0x537AECu;
        goto label_537aec;
    }
    ctx->pc = 0x537AE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x537AECu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x537AECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x537AECu; }
            if (ctx->pc != 0x537AECu) { return; }
        }
        }
    }
    ctx->pc = 0x537AECu;
label_537aec:
    // 0x537aec: 0x1000005c  b           . + 4 + (0x5C << 2)
label_537af0:
    if (ctx->pc == 0x537AF0u) {
        ctx->pc = 0x537AF4u;
        goto label_537af4;
    }
    ctx->pc = 0x537AECu;
    {
        const bool branch_taken_0x537aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x537aec) {
            ctx->pc = 0x537C60u;
            goto label_537c60;
        }
    }
    ctx->pc = 0x537AF4u;
label_537af4:
    // 0x537af4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x537af4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_537af8:
    // 0x537af8: 0x320f809  jalr        $t9
label_537afc:
    if (ctx->pc == 0x537AFCu) {
        ctx->pc = 0x537B00u;
        goto label_537b00;
    }
    ctx->pc = 0x537AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x537B00u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x537B00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x537B00u; }
            if (ctx->pc != 0x537B00u) { return; }
        }
        }
    }
    ctx->pc = 0x537B00u;
label_537b00:
    // 0x537b00: 0x8ec30070  lw          $v1, 0x70($s6)
    ctx->pc = 0x537b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_537b04:
    // 0x537b04: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x537b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_537b08:
    // 0x537b08: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x537b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_537b0c:
    // 0x537b0c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x537b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_537b10:
    // 0x537b10: 0x26d0008c  addiu       $s0, $s6, 0x8C
    ctx->pc = 0x537b10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 140));
label_537b14:
    // 0x537b14: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x537b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_537b18:
    // 0x537b18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x537b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_537b1c:
    // 0x537b1c: 0xc040140  jal         func_100500
label_537b20:
    if (ctx->pc == 0x537B20u) {
        ctx->pc = 0x537B20u;
            // 0x537b20: 0x23980  sll         $a3, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->pc = 0x537B24u;
        goto label_537b24;
    }
    ctx->pc = 0x537B1Cu;
    SET_GPR_U32(ctx, 31, 0x537B24u);
    ctx->pc = 0x537B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537B1Cu;
            // 0x537b20: 0x23980  sll         $a3, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537B24u; }
        if (ctx->pc != 0x537B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537B24u; }
        if (ctx->pc != 0x537B24u) { return; }
    }
    ctx->pc = 0x537B24u;
label_537b24:
    // 0x537b24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x537b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_537b28:
    // 0x537b28: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_537b2c:
    if (ctx->pc == 0x537B2Cu) {
        ctx->pc = 0x537B2Cu;
            // 0x537b2c: 0xaec40098  sw          $a0, 0x98($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 152), GPR_U32(ctx, 4));
        ctx->pc = 0x537B30u;
        goto label_537b30;
    }
    ctx->pc = 0x537B28u;
    {
        const bool branch_taken_0x537b28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x537b28) {
            ctx->pc = 0x537B2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x537B28u;
            // 0x537b2c: 0xaec40098  sw          $a0, 0x98($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 152), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x537B50u;
            goto label_537b50;
        }
    }
    ctx->pc = 0x537B30u;
label_537b30:
    // 0x537b30: 0x8ec30070  lw          $v1, 0x70($s6)
    ctx->pc = 0x537b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_537b34:
    // 0x537b34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x537b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_537b38:
    // 0x537b38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x537b38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_537b3c:
    // 0x537b3c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x537b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_537b40:
    // 0x537b40: 0xc0b4554  jal         func_2D1550
label_537b44:
    if (ctx->pc == 0x537B44u) {
        ctx->pc = 0x537B44u;
            // 0x537b44: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x537B48u;
        goto label_537b48;
    }
    ctx->pc = 0x537B40u;
    SET_GPR_U32(ctx, 31, 0x537B48u);
    ctx->pc = 0x537B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537B40u;
            // 0x537b44: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1550u;
    if (runtime->hasFunction(0x2D1550u)) {
        auto targetFn = runtime->lookupFunction(0x2D1550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537B48u; }
        if (ctx->pc != 0x537B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1550_0x2d1550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537B48u; }
        if (ctx->pc != 0x537B48u) { return; }
    }
    ctx->pc = 0x537B48u;
label_537b48:
    // 0x537b48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x537b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_537b4c:
    // 0x537b4c: 0xaec40098  sw          $a0, 0x98($s6)
    ctx->pc = 0x537b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 152), GPR_U32(ctx, 4));
label_537b50:
    // 0x537b50: 0x8ed10070  lw          $s1, 0x70($s6)
    ctx->pc = 0x537b50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_537b54:
    // 0x537b54: 0x12200042  beqz        $s1, . + 4 + (0x42 << 2)
label_537b58:
    if (ctx->pc == 0x537B58u) {
        ctx->pc = 0x537B5Cu;
        goto label_537b5c;
    }
    ctx->pc = 0x537B54u;
    {
        const bool branch_taken_0x537b54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x537b54) {
            ctx->pc = 0x537C60u;
            goto label_537c60;
        }
    }
    ctx->pc = 0x537B5Cu;
label_537b5c:
    // 0x537b5c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x537b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_537b60:
    // 0x537b60: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x537b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_537b64:
    // 0x537b64: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x537b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_537b68:
    // 0x537b68: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x537b68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_537b6c:
    // 0x537b6c: 0x1460003c  bnez        $v1, . + 4 + (0x3C << 2)
label_537b70:
    if (ctx->pc == 0x537B70u) {
        ctx->pc = 0x537B74u;
        goto label_537b74;
    }
    ctx->pc = 0x537B6Cu;
    {
        const bool branch_taken_0x537b6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x537b6c) {
            ctx->pc = 0x537C60u;
            goto label_537c60;
        }
    }
    ctx->pc = 0x537B74u;
label_537b74:
    // 0x537b74: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x537b74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_537b78:
    // 0x537b78: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x537b78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_537b7c:
    // 0x537b7c: 0x8ec40074  lw          $a0, 0x74($s6)
    ctx->pc = 0x537b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_537b80:
    // 0x537b80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x537b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_537b84:
    // 0x537b84: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x537b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_537b88:
    // 0x537b88: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x537b88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_537b8c:
    // 0x537b8c: 0x8e040498  lw          $a0, 0x498($s0)
    ctx->pc = 0x537b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
label_537b90:
    // 0x537b90: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
label_537b94:
    if (ctx->pc == 0x537B94u) {
        ctx->pc = 0x537B98u;
        goto label_537b98;
    }
    ctx->pc = 0x537B90u;
    {
        const bool branch_taken_0x537b90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x537b90) {
            ctx->pc = 0x537BE8u;
            goto label_537be8;
        }
    }
    ctx->pc = 0x537B98u;
label_537b98:
    // 0x537b98: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_537b9c:
    if (ctx->pc == 0x537B9Cu) {
        ctx->pc = 0x537BA0u;
        goto label_537ba0;
    }
    ctx->pc = 0x537B98u;
    {
        const bool branch_taken_0x537b98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x537b98) {
            ctx->pc = 0x537BA8u;
            goto label_537ba8;
        }
    }
    ctx->pc = 0x537BA0u;
label_537ba0:
    // 0x537ba0: 0x1000002b  b           . + 4 + (0x2B << 2)
label_537ba4:
    if (ctx->pc == 0x537BA4u) {
        ctx->pc = 0x537BA8u;
        goto label_537ba8;
    }
    ctx->pc = 0x537BA0u;
    {
        const bool branch_taken_0x537ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x537ba0) {
            ctx->pc = 0x537C50u;
            goto label_537c50;
        }
    }
    ctx->pc = 0x537BA8u;
label_537ba8:
    // 0x537ba8: 0xae000498  sw          $zero, 0x498($s0)
    ctx->pc = 0x537ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 0));
label_537bac:
    // 0x537bac: 0x26140050  addiu       $s4, $s0, 0x50
    ctx->pc = 0x537bacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_537bb0:
    // 0x537bb0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x537bb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_537bb4:
    // 0x537bb4: 0x0  nop
    ctx->pc = 0x537bb4u;
    // NOP
label_537bb8:
    // 0x537bb8: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x537bb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_537bbc:
    // 0x537bbc: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x537bbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_537bc0:
    // 0x537bc0: 0x320f809  jalr        $t9
label_537bc4:
    if (ctx->pc == 0x537BC4u) {
        ctx->pc = 0x537BC4u;
            // 0x537bc4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x537BC8u;
        goto label_537bc8;
    }
    ctx->pc = 0x537BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x537BC8u);
        ctx->pc = 0x537BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537BC0u;
            // 0x537bc4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x537BC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x537BC8u; }
            if (ctx->pc != 0x537BC8u) { return; }
        }
        }
    }
    ctx->pc = 0x537BC8u;
label_537bc8:
    // 0x537bc8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x537bc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_537bcc:
    // 0x537bcc: 0x2e630003  sltiu       $v1, $s3, 0x3
    ctx->pc = 0x537bccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_537bd0:
    // 0x537bd0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_537bd4:
    if (ctx->pc == 0x537BD4u) {
        ctx->pc = 0x537BD4u;
            // 0x537bd4: 0x26940160  addiu       $s4, $s4, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 352));
        ctx->pc = 0x537BD8u;
        goto label_537bd8;
    }
    ctx->pc = 0x537BD0u;
    {
        const bool branch_taken_0x537bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x537BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537BD0u;
            // 0x537bd4: 0x26940160  addiu       $s4, $s4, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x537bd0) {
            ctx->pc = 0x537BB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_537bb8;
        }
    }
    ctx->pc = 0x537BD8u;
label_537bd8:
    // 0x537bd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x537bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_537bdc:
    // 0x537bdc: 0x1000001c  b           . + 4 + (0x1C << 2)
label_537be0:
    if (ctx->pc == 0x537BE0u) {
        ctx->pc = 0x537BE0u;
            // 0x537be0: 0xae030498  sw          $v1, 0x498($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 3));
        ctx->pc = 0x537BE4u;
        goto label_537be4;
    }
    ctx->pc = 0x537BDCu;
    {
        const bool branch_taken_0x537bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x537BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537BDCu;
            // 0x537be0: 0xae030498  sw          $v1, 0x498($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x537bdc) {
            ctx->pc = 0x537C50u;
            goto label_537c50;
        }
    }
    ctx->pc = 0x537BE4u;
label_537be4:
    // 0x537be4: 0x0  nop
    ctx->pc = 0x537be4u;
    // NOP
label_537be8:
    // 0x537be8: 0x8e040490  lw          $a0, 0x490($s0)
    ctx->pc = 0x537be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1168)));
label_537bec:
    // 0x537bec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x537becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_537bf0:
    // 0x537bf0: 0xc122d2c  jal         func_48B4B0
label_537bf4:
    if (ctx->pc == 0x537BF4u) {
        ctx->pc = 0x537BF4u;
            // 0x537bf4: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x537BF8u;
        goto label_537bf8;
    }
    ctx->pc = 0x537BF0u;
    SET_GPR_U32(ctx, 31, 0x537BF8u);
    ctx->pc = 0x537BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537BF0u;
            // 0x537bf4: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537BF8u; }
        if (ctx->pc != 0x537BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537BF8u; }
        if (ctx->pc != 0x537BF8u) { return; }
    }
    ctx->pc = 0x537BF8u;
label_537bf8:
    // 0x537bf8: 0x8e070494  lw          $a3, 0x494($s0)
    ctx->pc = 0x537bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
label_537bfc:
    // 0x537bfc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x537bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_537c00:
    // 0x537c00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x537c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_537c04:
    // 0x537c04: 0xc04ca18  jal         func_132860
label_537c08:
    if (ctx->pc == 0x537C08u) {
        ctx->pc = 0x537C08u;
            // 0x537c08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x537C0Cu;
        goto label_537c0c;
    }
    ctx->pc = 0x537C04u;
    SET_GPR_U32(ctx, 31, 0x537C0Cu);
    ctx->pc = 0x537C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537C04u;
            // 0x537c08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537C0Cu; }
        if (ctx->pc != 0x537C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537C0Cu; }
        if (ctx->pc != 0x537C0Cu) { return; }
    }
    ctx->pc = 0x537C0Cu;
label_537c0c:
    // 0x537c0c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x537c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_537c10:
    // 0x537c10: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x537c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_537c14:
    // 0x537c14: 0xc04c72c  jal         func_131CB0
label_537c18:
    if (ctx->pc == 0x537C18u) {
        ctx->pc = 0x537C18u;
            // 0x537c18: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x537C1Cu;
        goto label_537c1c;
    }
    ctx->pc = 0x537C14u;
    SET_GPR_U32(ctx, 31, 0x537C1Cu);
    ctx->pc = 0x537C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537C14u;
            // 0x537c18: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537C1Cu; }
        if (ctx->pc != 0x537C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537C1Cu; }
        if (ctx->pc != 0x537C1Cu) { return; }
    }
    ctx->pc = 0x537C1Cu;
label_537c1c:
    // 0x537c1c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x537c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_537c20:
    // 0x537c20: 0xc04c720  jal         func_131C80
label_537c24:
    if (ctx->pc == 0x537C24u) {
        ctx->pc = 0x537C24u;
            // 0x537c24: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x537C28u;
        goto label_537c28;
    }
    ctx->pc = 0x537C20u;
    SET_GPR_U32(ctx, 31, 0x537C28u);
    ctx->pc = 0x537C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537C20u;
            // 0x537c24: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537C28u; }
        if (ctx->pc != 0x537C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537C28u; }
        if (ctx->pc != 0x537C28u) { return; }
    }
    ctx->pc = 0x537C28u;
label_537c28:
    // 0x537c28: 0x26130050  addiu       $s3, $s0, 0x50
    ctx->pc = 0x537c28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_537c2c:
    // 0x537c2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x537c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_537c30:
    // 0x537c30: 0xc0e3658  jal         func_38D960
label_537c34:
    if (ctx->pc == 0x537C34u) {
        ctx->pc = 0x537C34u;
            // 0x537c34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x537C38u;
        goto label_537c38;
    }
    ctx->pc = 0x537C30u;
    SET_GPR_U32(ctx, 31, 0x537C38u);
    ctx->pc = 0x537C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537C30u;
            // 0x537c34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537C38u; }
        if (ctx->pc != 0x537C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537C38u; }
        if (ctx->pc != 0x537C38u) { return; }
    }
    ctx->pc = 0x537C38u;
label_537c38:
    // 0x537c38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x537c38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_537c3c:
    // 0x537c3c: 0x26730160  addiu       $s3, $s3, 0x160
    ctx->pc = 0x537c3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 352));
label_537c40:
    // 0x537c40: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x537c40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_537c44:
    // 0x537c44: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_537c48:
    if (ctx->pc == 0x537C48u) {
        ctx->pc = 0x537C4Cu;
        goto label_537c4c;
    }
    ctx->pc = 0x537C44u;
    {
        const bool branch_taken_0x537c44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x537c44) {
            ctx->pc = 0x537C30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_537c30;
        }
    }
    ctx->pc = 0x537C4Cu;
label_537c4c:
    // 0x537c4c: 0x0  nop
    ctx->pc = 0x537c4cu;
    // NOP
label_537c50:
    // 0x537c50: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x537c50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_537c54:
    // 0x537c54: 0x2b1182b  sltu        $v1, $s5, $s1
    ctx->pc = 0x537c54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_537c58:
    // 0x537c58: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
label_537c5c:
    if (ctx->pc == 0x537C5Cu) {
        ctx->pc = 0x537C5Cu;
            // 0x537c5c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x537C60u;
        goto label_537c60;
    }
    ctx->pc = 0x537C58u;
    {
        const bool branch_taken_0x537c58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x537C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537C58u;
            // 0x537c5c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x537c58) {
            ctx->pc = 0x537B7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_537b7c;
        }
    }
    ctx->pc = 0x537C60u;
label_537c60:
    // 0x537c60: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x537c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_537c64:
    // 0x537c64: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x537c64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_537c68:
    // 0x537c68: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x537c68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_537c6c:
    // 0x537c6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x537c6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_537c70:
    // 0x537c70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x537c70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_537c74:
    // 0x537c74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x537c74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_537c78:
    // 0x537c78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x537c78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_537c7c:
    // 0x537c7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x537c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_537c80:
    // 0x537c80: 0x3e00008  jr          $ra
label_537c84:
    if (ctx->pc == 0x537C84u) {
        ctx->pc = 0x537C84u;
            // 0x537c84: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x537C88u;
        goto label_537c88;
    }
    ctx->pc = 0x537C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x537C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537C80u;
            // 0x537c84: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x537C88u;
label_537c88:
    // 0x537c88: 0x0  nop
    ctx->pc = 0x537c88u;
    // NOP
label_537c8c:
    // 0x537c8c: 0x0  nop
    ctx->pc = 0x537c8cu;
    // NOP
label_537c90:
    // 0x537c90: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x537c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_537c94:
    // 0x537c94: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x537c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_537c98:
    // 0x537c98: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x537c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_537c9c:
    // 0x537c9c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x537c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_537ca0:
    // 0x537ca0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x537ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_537ca4:
    // 0x537ca4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x537ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_537ca8:
    // 0x537ca8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x537ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_537cac:
    // 0x537cac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x537cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_537cb0:
    // 0x537cb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x537cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_537cb4:
    // 0x537cb4: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x537cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_537cb8:
    // 0x537cb8: 0x12200055  beqz        $s1, . + 4 + (0x55 << 2)
label_537cbc:
    if (ctx->pc == 0x537CBCu) {
        ctx->pc = 0x537CBCu;
            // 0x537cbc: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x537CC0u;
        goto label_537cc0;
    }
    ctx->pc = 0x537CB8u;
    {
        const bool branch_taken_0x537cb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x537CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537CB8u;
            // 0x537cbc: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x537cb8) {
            ctx->pc = 0x537E10u;
            goto label_537e10;
        }
    }
    ctx->pc = 0x537CC0u;
label_537cc0:
    // 0x537cc0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x537cc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_537cc4:
    // 0x537cc4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x537cc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_537cc8:
    // 0x537cc8: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x537cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_537ccc:
    // 0x537ccc: 0x8ec30074  lw          $v1, 0x74($s6)
    ctx->pc = 0x537cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_537cd0:
    // 0x537cd0: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x537cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_537cd4:
    // 0x537cd4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x537cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_537cd8:
    // 0x537cd8: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x537cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_537cdc:
    // 0x537cdc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x537cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_537ce0:
    // 0x537ce0: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x537ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_537ce4:
    // 0x537ce4: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x537ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_537ce8:
    // 0x537ce8: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x537ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_537cec:
    // 0x537cec: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x537cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_537cf0:
    // 0x537cf0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x537cf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_537cf4:
    // 0x537cf4: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x537cf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_537cf8:
    // 0x537cf8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x537cf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_537cfc:
    // 0x537cfc: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x537cfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_537d00:
    // 0x537d00: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x537d00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_537d04:
    // 0x537d04: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x537d04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_537d08:
    // 0x537d08: 0x44131000  mfc1        $s3, $f2
    ctx->pc = 0x537d08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
label_537d0c:
    // 0x537d0c: 0x44140800  mfc1        $s4, $f1
    ctx->pc = 0x537d0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
label_537d10:
    // 0x537d10: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x537d10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_537d14:
    // 0x537d14: 0xc04f29c  jal         func_13CA70
label_537d18:
    if (ctx->pc == 0x537D18u) {
        ctx->pc = 0x537D18u;
            // 0x537d18: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x537D1Cu;
        goto label_537d1c;
    }
    ctx->pc = 0x537D14u;
    SET_GPR_U32(ctx, 31, 0x537D1Cu);
    ctx->pc = 0x537D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537D14u;
            // 0x537d18: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CA70u;
    if (runtime->hasFunction(0x13CA70u)) {
        auto targetFn = runtime->lookupFunction(0x13CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537D1Cu; }
        if (ctx->pc != 0x537D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CA70_0x13ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537D1Cu; }
        if (ctx->pc != 0x537D1Cu) { return; }
    }
    ctx->pc = 0x537D1Cu;
label_537d1c:
    // 0x537d1c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x537d1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_537d20:
    // 0x537d20: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x537d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_537d24:
    // 0x537d24: 0xc04cdf0  jal         func_1337C0
label_537d28:
    if (ctx->pc == 0x537D28u) {
        ctx->pc = 0x537D28u;
            // 0x537d28: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x537D2Cu;
        goto label_537d2c;
    }
    ctx->pc = 0x537D24u;
    SET_GPR_U32(ctx, 31, 0x537D2Cu);
    ctx->pc = 0x537D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537D24u;
            // 0x537d28: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537D2Cu; }
        if (ctx->pc != 0x537D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537D2Cu; }
        if (ctx->pc != 0x537D2Cu) { return; }
    }
    ctx->pc = 0x537D2Cu;
label_537d2c:
    // 0x537d2c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x537d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_537d30:
    // 0x537d30: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x537d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_537d34:
    // 0x537d34: 0xc04cdd0  jal         func_133740
label_537d38:
    if (ctx->pc == 0x537D38u) {
        ctx->pc = 0x537D38u;
            // 0x537d38: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x537D3Cu;
        goto label_537d3c;
    }
    ctx->pc = 0x537D34u;
    SET_GPR_U32(ctx, 31, 0x537D3Cu);
    ctx->pc = 0x537D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537D34u;
            // 0x537d38: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537D3Cu; }
        if (ctx->pc != 0x537D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537D3Cu; }
        if (ctx->pc != 0x537D3Cu) { return; }
    }
    ctx->pc = 0x537D3Cu;
label_537d3c:
    // 0x537d3c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x537d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_537d40:
    // 0x537d40: 0xc04c994  jal         func_132650
label_537d44:
    if (ctx->pc == 0x537D44u) {
        ctx->pc = 0x537D44u;
            // 0x537d44: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x537D48u;
        goto label_537d48;
    }
    ctx->pc = 0x537D40u;
    SET_GPR_U32(ctx, 31, 0x537D48u);
    ctx->pc = 0x537D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537D40u;
            // 0x537d44: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537D48u; }
        if (ctx->pc != 0x537D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537D48u; }
        if (ctx->pc != 0x537D48u) { return; }
    }
    ctx->pc = 0x537D48u;
label_537d48:
    // 0x537d48: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x537d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_537d4c:
    // 0x537d4c: 0xc04f278  jal         func_13C9E0
label_537d50:
    if (ctx->pc == 0x537D50u) {
        ctx->pc = 0x537D50u;
            // 0x537d50: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x537D54u;
        goto label_537d54;
    }
    ctx->pc = 0x537D4Cu;
    SET_GPR_U32(ctx, 31, 0x537D54u);
    ctx->pc = 0x537D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537D4Cu;
            // 0x537d50: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537D54u; }
        if (ctx->pc != 0x537D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537D54u; }
        if (ctx->pc != 0x537D54u) { return; }
    }
    ctx->pc = 0x537D54u;
label_537d54:
    // 0x537d54: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x537d54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_537d58:
    // 0x537d58: 0x26040470  addiu       $a0, $s0, 0x470
    ctx->pc = 0x537d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1136));
label_537d5c:
    // 0x537d5c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x537d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_537d60:
    // 0x537d60: 0xc04cca0  jal         func_133280
label_537d64:
    if (ctx->pc == 0x537D64u) {
        ctx->pc = 0x537D64u;
            // 0x537d64: 0x24c6d2b0  addiu       $a2, $a2, -0x2D50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955696));
        ctx->pc = 0x537D68u;
        goto label_537d68;
    }
    ctx->pc = 0x537D60u;
    SET_GPR_U32(ctx, 31, 0x537D68u);
    ctx->pc = 0x537D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537D60u;
            // 0x537d64: 0x24c6d2b0  addiu       $a2, $a2, -0x2D50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537D68u; }
        if (ctx->pc != 0x537D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537D68u; }
        if (ctx->pc != 0x537D68u) { return; }
    }
    ctx->pc = 0x537D68u;
label_537d68:
    // 0x537d68: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x537d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_537d6c:
    // 0x537d6c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x537d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_537d70:
    // 0x537d70: 0xc462cfb0  lwc1        $f2, -0x3050($v1)
    ctx->pc = 0x537d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_537d74:
    // 0x537d74: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x537d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_537d78:
    // 0x537d78: 0xc441cfb4  lwc1        $f1, -0x304C($v0)
    ctx->pc = 0x537d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_537d7c:
    // 0x537d7c: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x537d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_537d80:
    // 0x537d80: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x537d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_537d84:
    // 0x537d84: 0xc460cfbc  lwc1        $f0, -0x3044($v1)
    ctx->pc = 0x537d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_537d88:
    // 0x537d88: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x537d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_537d8c:
    // 0x537d8c: 0xe7a20180  swc1        $f2, 0x180($sp)
    ctx->pc = 0x537d8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_537d90:
    // 0x537d90: 0xe7a10184  swc1        $f1, 0x184($sp)
    ctx->pc = 0x537d90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_537d94:
    // 0x537d94: 0x8c43cfb8  lw          $v1, -0x3048($v0)
    ctx->pc = 0x537d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954936)));
label_537d98:
    // 0x537d98: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x537d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_537d9c:
    // 0x537d9c: 0xafa30188  sw          $v1, 0x188($sp)
    ctx->pc = 0x537d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 3));
label_537da0:
    // 0x537da0: 0x3c0238c9  lui         $v0, 0x38C9
    ctx->pc = 0x537da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14537 << 16));
label_537da4:
    // 0x537da4: 0xc6010494  lwc1        $f1, 0x494($s0)
    ctx->pc = 0x537da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_537da8:
    // 0x537da8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x537da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_537dac:
    // 0x537dac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x537dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_537db0:
    // 0x537db0: 0x0  nop
    ctx->pc = 0x537db0u;
    // NOP
label_537db4:
    // 0x537db4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x537db4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_537db8:
    // 0x537db8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x537db8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_537dbc:
    // 0x537dbc: 0xc04f278  jal         func_13C9E0
label_537dc0:
    if (ctx->pc == 0x537DC0u) {
        ctx->pc = 0x537DC0u;
            // 0x537dc0: 0xe7a00188  swc1        $f0, 0x188($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
        ctx->pc = 0x537DC4u;
        goto label_537dc4;
    }
    ctx->pc = 0x537DBCu;
    SET_GPR_U32(ctx, 31, 0x537DC4u);
    ctx->pc = 0x537DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537DBCu;
            // 0x537dc0: 0xe7a00188  swc1        $f0, 0x188($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537DC4u; }
        if (ctx->pc != 0x537DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537DC4u; }
        if (ctx->pc != 0x537DC4u) { return; }
    }
    ctx->pc = 0x537DC4u;
label_537dc4:
    // 0x537dc4: 0x26040480  addiu       $a0, $s0, 0x480
    ctx->pc = 0x537dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
label_537dc8:
    // 0x537dc8: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x537dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_537dcc:
    // 0x537dcc: 0xc04cca0  jal         func_133280
label_537dd0:
    if (ctx->pc == 0x537DD0u) {
        ctx->pc = 0x537DD0u;
            // 0x537dd0: 0x27a60180  addiu       $a2, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x537DD4u;
        goto label_537dd4;
    }
    ctx->pc = 0x537DCCu;
    SET_GPR_U32(ctx, 31, 0x537DD4u);
    ctx->pc = 0x537DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537DCCu;
            // 0x537dd0: 0x27a60180  addiu       $a2, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537DD4u; }
        if (ctx->pc != 0x537DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537DD4u; }
        if (ctx->pc != 0x537DD4u) { return; }
    }
    ctx->pc = 0x537DD4u;
label_537dd4:
    // 0x537dd4: 0xae000498  sw          $zero, 0x498($s0)
    ctx->pc = 0x537dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 0));
label_537dd8:
    // 0x537dd8: 0x26130050  addiu       $s3, $s0, 0x50
    ctx->pc = 0x537dd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_537ddc:
    // 0x537ddc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x537ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_537de0:
    // 0x537de0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x537de0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_537de4:
    // 0x537de4: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x537de4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_537de8:
    // 0x537de8: 0x320f809  jalr        $t9
label_537dec:
    if (ctx->pc == 0x537DECu) {
        ctx->pc = 0x537DECu;
            // 0x537dec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x537DF0u;
        goto label_537df0;
    }
    ctx->pc = 0x537DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x537DF0u);
        ctx->pc = 0x537DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537DE8u;
            // 0x537dec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x537DF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x537DF0u; }
            if (ctx->pc != 0x537DF0u) { return; }
        }
        }
    }
    ctx->pc = 0x537DF0u;
label_537df0:
    // 0x537df0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x537df0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_537df4:
    // 0x537df4: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x537df4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_537df8:
    // 0x537df8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_537dfc:
    if (ctx->pc == 0x537DFCu) {
        ctx->pc = 0x537DFCu;
            // 0x537dfc: 0x26730160  addiu       $s3, $s3, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 352));
        ctx->pc = 0x537E00u;
        goto label_537e00;
    }
    ctx->pc = 0x537DF8u;
    {
        const bool branch_taken_0x537df8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x537DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537DF8u;
            // 0x537dfc: 0x26730160  addiu       $s3, $s3, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x537df8) {
            ctx->pc = 0x537DE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_537de0;
        }
    }
    ctx->pc = 0x537E00u;
label_537e00:
    // 0x537e00: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x537e00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_537e04:
    // 0x537e04: 0x2b1182b  sltu        $v1, $s5, $s1
    ctx->pc = 0x537e04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_537e08:
    // 0x537e08: 0x1460ffaf  bnez        $v1, . + 4 + (-0x51 << 2)
label_537e0c:
    if (ctx->pc == 0x537E0Cu) {
        ctx->pc = 0x537E0Cu;
            // 0x537e0c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x537E10u;
        goto label_537e10;
    }
    ctx->pc = 0x537E08u;
    {
        const bool branch_taken_0x537e08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x537E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537E08u;
            // 0x537e0c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x537e08) {
            ctx->pc = 0x537CC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_537cc8;
        }
    }
    ctx->pc = 0x537E10u;
label_537e10:
    // 0x537e10: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x537e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_537e14:
    // 0x537e14: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x537e14u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_537e18:
    // 0x537e18: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x537e18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_537e1c:
    // 0x537e1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x537e1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_537e20:
    // 0x537e20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x537e20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_537e24:
    // 0x537e24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x537e24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_537e28:
    // 0x537e28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x537e28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_537e2c:
    // 0x537e2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x537e2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_537e30:
    // 0x537e30: 0x3e00008  jr          $ra
label_537e34:
    if (ctx->pc == 0x537E34u) {
        ctx->pc = 0x537E34u;
            // 0x537e34: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x537E38u;
        goto label_537e38;
    }
    ctx->pc = 0x537E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x537E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537E30u;
            // 0x537e34: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x537E38u;
label_537e38:
    // 0x537e38: 0x0  nop
    ctx->pc = 0x537e38u;
    // NOP
label_537e3c:
    // 0x537e3c: 0x0  nop
    ctx->pc = 0x537e3cu;
    // NOP
label_537e40:
    // 0x537e40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x537e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_537e44:
    // 0x537e44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x537e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_537e48:
    // 0x537e48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x537e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_537e4c:
    // 0x537e4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x537e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_537e50:
    // 0x537e50: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x537e50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_537e54:
    // 0x537e54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x537e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_537e58:
    // 0x537e58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x537e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_537e5c:
    // 0x537e5c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x537e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_537e60:
    // 0x537e60: 0x10600073  beqz        $v1, . + 4 + (0x73 << 2)
label_537e64:
    if (ctx->pc == 0x537E64u) {
        ctx->pc = 0x537E64u;
            // 0x537e64: 0x24910084  addiu       $s1, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->pc = 0x537E68u;
        goto label_537e68;
    }
    ctx->pc = 0x537E60u;
    {
        const bool branch_taken_0x537e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x537E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537E60u;
            // 0x537e64: 0x24910084  addiu       $s1, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x537e60) {
            ctx->pc = 0x538030u;
            goto label_538030;
        }
    }
    ctx->pc = 0x537E68u;
label_537e68:
    // 0x537e68: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x537e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_537e6c:
    // 0x537e6c: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x537e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
label_537e70:
    // 0x537e70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x537e70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_537e74:
    // 0x537e74: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x537e74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_537e78:
    // 0x537e78: 0x320f809  jalr        $t9
label_537e7c:
    if (ctx->pc == 0x537E7Cu) {
        ctx->pc = 0x537E7Cu;
            // 0x537e7c: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x537E80u;
        goto label_537e80;
    }
    ctx->pc = 0x537E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x537E80u);
        ctx->pc = 0x537E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537E78u;
            // 0x537e7c: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x537E80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x537E80u; }
            if (ctx->pc != 0x537E80u) { return; }
        }
        }
    }
    ctx->pc = 0x537E80u;
label_537e80:
    // 0x537e80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x537e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_537e84:
    // 0x537e84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x537e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_537e88:
    // 0x537e88: 0xc075128  jal         func_1D44A0
label_537e8c:
    if (ctx->pc == 0x537E8Cu) {
        ctx->pc = 0x537E8Cu;
            // 0x537e8c: 0x26650004  addiu       $a1, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x537E90u;
        goto label_537e90;
    }
    ctx->pc = 0x537E88u;
    SET_GPR_U32(ctx, 31, 0x537E90u);
    ctx->pc = 0x537E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537E88u;
            // 0x537e8c: 0x26650004  addiu       $a1, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537E90u; }
        if (ctx->pc != 0x537E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537E90u; }
        if (ctx->pc != 0x537E90u) { return; }
    }
    ctx->pc = 0x537E90u;
label_537e90:
    // 0x537e90: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x537e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_537e94:
    // 0x537e94: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x537e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_537e98:
    // 0x537e98: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x537e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_537e9c:
    // 0x537e9c: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x537e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_537ea0:
    // 0x537ea0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x537ea0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_537ea4:
    // 0x537ea4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_537ea8:
    if (ctx->pc == 0x537EA8u) {
        ctx->pc = 0x537EA8u;
            // 0x537ea8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x537EACu;
        goto label_537eac;
    }
    ctx->pc = 0x537EA4u;
    {
        const bool branch_taken_0x537ea4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x537ea4) {
            ctx->pc = 0x537EA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x537EA4u;
            // 0x537ea8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x537EB8u;
            goto label_537eb8;
        }
    }
    ctx->pc = 0x537EACu;
label_537eac:
    // 0x537eac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x537eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_537eb0:
    // 0x537eb0: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x537eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_537eb4:
    // 0x537eb4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x537eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_537eb8:
    // 0x537eb8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x537eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_537ebc:
    // 0x537ebc: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x537ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_537ec0:
    // 0x537ec0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x537ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_537ec4:
    // 0x537ec4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x537ec4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_537ec8:
    // 0x537ec8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_537ecc:
    if (ctx->pc == 0x537ECCu) {
        ctx->pc = 0x537ECCu;
            // 0x537ecc: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x537ED0u;
        goto label_537ed0;
    }
    ctx->pc = 0x537EC8u;
    {
        const bool branch_taken_0x537ec8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x537ec8) {
            ctx->pc = 0x537ECCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x537EC8u;
            // 0x537ecc: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x537EDCu;
            goto label_537edc;
        }
    }
    ctx->pc = 0x537ED0u;
label_537ed0:
    // 0x537ed0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x537ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_537ed4:
    // 0x537ed4: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x537ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_537ed8:
    // 0x537ed8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x537ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_537edc:
    // 0x537edc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x537edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_537ee0:
    // 0x537ee0: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x537ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_537ee4:
    // 0x537ee4: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x537ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_537ee8:
    // 0x537ee8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x537ee8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_537eec:
    // 0x537eec: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_537ef0:
    if (ctx->pc == 0x537EF0u) {
        ctx->pc = 0x537EF0u;
            // 0x537ef0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x537EF4u;
        goto label_537ef4;
    }
    ctx->pc = 0x537EECu;
    {
        const bool branch_taken_0x537eec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x537eec) {
            ctx->pc = 0x537EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x537EECu;
            // 0x537ef0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x537F00u;
            goto label_537f00;
        }
    }
    ctx->pc = 0x537EF4u;
label_537ef4:
    // 0x537ef4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x537ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_537ef8:
    // 0x537ef8: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x537ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_537efc:
    // 0x537efc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x537efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_537f00:
    // 0x537f00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x537f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_537f04:
    // 0x537f04: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x537f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_537f08:
    // 0x537f08: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x537f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_537f0c:
    // 0x537f0c: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x537f0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_537f10:
    // 0x537f10: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x537f10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_537f14:
    // 0x537f14: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_537f18:
    if (ctx->pc == 0x537F18u) {
        ctx->pc = 0x537F18u;
            // 0x537f18: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x537F1Cu;
        goto label_537f1c;
    }
    ctx->pc = 0x537F14u;
    {
        const bool branch_taken_0x537f14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x537f14) {
            ctx->pc = 0x537F18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x537F14u;
            // 0x537f18: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x537F28u;
            goto label_537f28;
        }
    }
    ctx->pc = 0x537F1Cu;
label_537f1c:
    // 0x537f1c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x537f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_537f20:
    // 0x537f20: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x537f20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_537f24:
    // 0x537f24: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x537f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_537f28:
    // 0x537f28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x537f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_537f2c:
    // 0x537f2c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x537f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_537f30:
    // 0x537f30: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x537f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_537f34:
    // 0x537f34: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x537f34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_537f38:
    // 0x537f38: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x537f38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_537f3c:
    // 0x537f3c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_537f40:
    if (ctx->pc == 0x537F40u) {
        ctx->pc = 0x537F40u;
            // 0x537f40: 0x8e620020  lw          $v0, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->pc = 0x537F44u;
        goto label_537f44;
    }
    ctx->pc = 0x537F3Cu;
    {
        const bool branch_taken_0x537f3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x537f3c) {
            ctx->pc = 0x537F40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x537F3Cu;
            // 0x537f40: 0x8e620020  lw          $v0, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x537F50u;
            goto label_537f50;
        }
    }
    ctx->pc = 0x537F44u;
label_537f44:
    // 0x537f44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x537f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_537f48:
    // 0x537f48: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x537f48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_537f4c:
    // 0x537f4c: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x537f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_537f50:
    // 0x537f50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x537f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_537f54:
    // 0x537f54: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x537f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_537f58:
    // 0x537f58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x537f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_537f5c:
    // 0x537f5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x537f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_537f60:
    // 0x537f60: 0xc074f30  jal         func_1D3CC0
label_537f64:
    if (ctx->pc == 0x537F64u) {
        ctx->pc = 0x537F64u;
            // 0x537f64: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x537F68u;
        goto label_537f68;
    }
    ctx->pc = 0x537F60u;
    SET_GPR_U32(ctx, 31, 0x537F68u);
    ctx->pc = 0x537F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537F60u;
            // 0x537f64: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537F68u; }
        if (ctx->pc != 0x537F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537F68u; }
        if (ctx->pc != 0x537F68u) { return; }
    }
    ctx->pc = 0x537F68u;
label_537f68:
    // 0x537f68: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x537f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_537f6c:
    // 0x537f6c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x537f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_537f70:
    // 0x537f70: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x537f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_537f74:
    // 0x537f74: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x537f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_537f78:
    // 0x537f78: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x537f78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_537f7c:
    // 0x537f7c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_537f80:
    if (ctx->pc == 0x537F80u) {
        ctx->pc = 0x537F80u;
            // 0x537f80: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x537F84u;
        goto label_537f84;
    }
    ctx->pc = 0x537F7Cu;
    {
        const bool branch_taken_0x537f7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x537f7c) {
            ctx->pc = 0x537F80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x537F7Cu;
            // 0x537f80: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x537F90u;
            goto label_537f90;
        }
    }
    ctx->pc = 0x537F84u;
label_537f84:
    // 0x537f84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x537f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_537f88:
    // 0x537f88: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x537f88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_537f8c:
    // 0x537f8c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x537f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_537f90:
    // 0x537f90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x537f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_537f94:
    // 0x537f94: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x537f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_537f98:
    // 0x537f98: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x537f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_537f9c:
    // 0x537f9c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x537f9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_537fa0:
    // 0x537fa0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_537fa4:
    if (ctx->pc == 0x537FA4u) {
        ctx->pc = 0x537FA4u;
            // 0x537fa4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x537FA8u;
        goto label_537fa8;
    }
    ctx->pc = 0x537FA0u;
    {
        const bool branch_taken_0x537fa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x537fa0) {
            ctx->pc = 0x537FA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x537FA0u;
            // 0x537fa4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x537FB4u;
            goto label_537fb4;
        }
    }
    ctx->pc = 0x537FA8u;
label_537fa8:
    // 0x537fa8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x537fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_537fac:
    // 0x537fac: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x537facu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_537fb0:
    // 0x537fb0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x537fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_537fb4:
    // 0x537fb4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x537fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_537fb8:
    // 0x537fb8: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x537fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_537fbc:
    // 0x537fbc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x537fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_537fc0:
    // 0x537fc0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x537fc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_537fc4:
    // 0x537fc4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_537fc8:
    if (ctx->pc == 0x537FC8u) {
        ctx->pc = 0x537FC8u;
            // 0x537fc8: 0x8e660020  lw          $a2, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->pc = 0x537FCCu;
        goto label_537fcc;
    }
    ctx->pc = 0x537FC4u;
    {
        const bool branch_taken_0x537fc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x537fc4) {
            ctx->pc = 0x537FC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x537FC4u;
            // 0x537fc8: 0x8e660020  lw          $a2, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x537FD8u;
            goto label_537fd8;
        }
    }
    ctx->pc = 0x537FCCu;
label_537fcc:
    // 0x537fcc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x537fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_537fd0:
    // 0x537fd0: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x537fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_537fd4:
    // 0x537fd4: 0x8e660020  lw          $a2, 0x20($s3)
    ctx->pc = 0x537fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_537fd8:
    // 0x537fd8: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x537fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_537fdc:
    // 0x537fdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x537fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_537fe0:
    // 0x537fe0: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x537fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_537fe4:
    // 0x537fe4: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x537fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
label_537fe8:
    // 0x537fe8: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x537fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_537fec:
    // 0x537fec: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x537fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_537ff0:
    // 0x537ff0: 0xc0751b8  jal         func_1D46E0
label_537ff4:
    if (ctx->pc == 0x537FF4u) {
        ctx->pc = 0x537FF4u;
            // 0x537ff4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x537FF8u;
        goto label_537ff8;
    }
    ctx->pc = 0x537FF0u;
    SET_GPR_U32(ctx, 31, 0x537FF8u);
    ctx->pc = 0x537FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537FF0u;
            // 0x537ff4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537FF8u; }
        if (ctx->pc != 0x537FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537FF8u; }
        if (ctx->pc != 0x537FF8u) { return; }
    }
    ctx->pc = 0x537FF8u;
label_537ff8:
    // 0x537ff8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x537ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_537ffc:
    // 0x537ffc: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x537ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_538000:
    // 0x538000: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x538000u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_538004:
    // 0x538004: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_538008:
    if (ctx->pc == 0x538008u) {
        ctx->pc = 0x53800Cu;
        goto label_53800c;
    }
    ctx->pc = 0x538004u;
    {
        const bool branch_taken_0x538004 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x538004) {
            ctx->pc = 0x538014u;
            goto label_538014;
        }
    }
    ctx->pc = 0x53800Cu;
label_53800c:
    // 0x53800c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x53800cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_538010:
    // 0x538010: 0xac70e3c8  sw          $s0, -0x1C38($v1)
    ctx->pc = 0x538010u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 16));
label_538014:
    // 0x538014: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x538014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_538018:
    // 0x538018: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x538018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_53801c:
    // 0x53801c: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x53801cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_538020:
    // 0x538020: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_538024:
    if (ctx->pc == 0x538024u) {
        ctx->pc = 0x538024u;
            // 0x538024: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x538028u;
        goto label_538028;
    }
    ctx->pc = 0x538020u;
    {
        const bool branch_taken_0x538020 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x538020) {
            ctx->pc = 0x538024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x538020u;
            // 0x538024: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x538034u;
            goto label_538034;
        }
    }
    ctx->pc = 0x538028u;
label_538028:
    // 0x538028: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x538028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53802c:
    // 0x53802c: 0xac70e3d0  sw          $s0, -0x1C30($v1)
    ctx->pc = 0x53802cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 16));
label_538030:
    // 0x538030: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x538030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_538034:
    // 0x538034: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x538034u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_538038:
    // 0x538038: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x538038u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53803c:
    // 0x53803c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53803cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_538040:
    // 0x538040: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x538040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_538044:
    // 0x538044: 0x3e00008  jr          $ra
label_538048:
    if (ctx->pc == 0x538048u) {
        ctx->pc = 0x538048u;
            // 0x538048: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x53804Cu;
        goto label_53804c;
    }
    ctx->pc = 0x538044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x538048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x538044u;
            // 0x538048: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53804Cu;
label_53804c:
    // 0x53804c: 0x0  nop
    ctx->pc = 0x53804cu;
    // NOP
}
