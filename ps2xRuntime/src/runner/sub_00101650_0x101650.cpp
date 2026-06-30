#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00101650
// Address: 0x101650 - 0x101f00
void sub_00101650_0x101650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101650_0x101650");
#endif

    switch (ctx->pc) {
        case 0x101650u: goto label_101650;
        case 0x101654u: goto label_101654;
        case 0x101658u: goto label_101658;
        case 0x10165cu: goto label_10165c;
        case 0x101660u: goto label_101660;
        case 0x101664u: goto label_101664;
        case 0x101668u: goto label_101668;
        case 0x10166cu: goto label_10166c;
        case 0x101670u: goto label_101670;
        case 0x101674u: goto label_101674;
        case 0x101678u: goto label_101678;
        case 0x10167cu: goto label_10167c;
        case 0x101680u: goto label_101680;
        case 0x101684u: goto label_101684;
        case 0x101688u: goto label_101688;
        case 0x10168cu: goto label_10168c;
        case 0x101690u: goto label_101690;
        case 0x101694u: goto label_101694;
        case 0x101698u: goto label_101698;
        case 0x10169cu: goto label_10169c;
        case 0x1016a0u: goto label_1016a0;
        case 0x1016a4u: goto label_1016a4;
        case 0x1016a8u: goto label_1016a8;
        case 0x1016acu: goto label_1016ac;
        case 0x1016b0u: goto label_1016b0;
        case 0x1016b4u: goto label_1016b4;
        case 0x1016b8u: goto label_1016b8;
        case 0x1016bcu: goto label_1016bc;
        case 0x1016c0u: goto label_1016c0;
        case 0x1016c4u: goto label_1016c4;
        case 0x1016c8u: goto label_1016c8;
        case 0x1016ccu: goto label_1016cc;
        case 0x1016d0u: goto label_1016d0;
        case 0x1016d4u: goto label_1016d4;
        case 0x1016d8u: goto label_1016d8;
        case 0x1016dcu: goto label_1016dc;
        case 0x1016e0u: goto label_1016e0;
        case 0x1016e4u: goto label_1016e4;
        case 0x1016e8u: goto label_1016e8;
        case 0x1016ecu: goto label_1016ec;
        case 0x1016f0u: goto label_1016f0;
        case 0x1016f4u: goto label_1016f4;
        case 0x1016f8u: goto label_1016f8;
        case 0x1016fcu: goto label_1016fc;
        case 0x101700u: goto label_101700;
        case 0x101704u: goto label_101704;
        case 0x101708u: goto label_101708;
        case 0x10170cu: goto label_10170c;
        case 0x101710u: goto label_101710;
        case 0x101714u: goto label_101714;
        case 0x101718u: goto label_101718;
        case 0x10171cu: goto label_10171c;
        case 0x101720u: goto label_101720;
        case 0x101724u: goto label_101724;
        case 0x101728u: goto label_101728;
        case 0x10172cu: goto label_10172c;
        case 0x101730u: goto label_101730;
        case 0x101734u: goto label_101734;
        case 0x101738u: goto label_101738;
        case 0x10173cu: goto label_10173c;
        case 0x101740u: goto label_101740;
        case 0x101744u: goto label_101744;
        case 0x101748u: goto label_101748;
        case 0x10174cu: goto label_10174c;
        case 0x101750u: goto label_101750;
        case 0x101754u: goto label_101754;
        case 0x101758u: goto label_101758;
        case 0x10175cu: goto label_10175c;
        case 0x101760u: goto label_101760;
        case 0x101764u: goto label_101764;
        case 0x101768u: goto label_101768;
        case 0x10176cu: goto label_10176c;
        case 0x101770u: goto label_101770;
        case 0x101774u: goto label_101774;
        case 0x101778u: goto label_101778;
        case 0x10177cu: goto label_10177c;
        case 0x101780u: goto label_101780;
        case 0x101784u: goto label_101784;
        case 0x101788u: goto label_101788;
        case 0x10178cu: goto label_10178c;
        case 0x101790u: goto label_101790;
        case 0x101794u: goto label_101794;
        case 0x101798u: goto label_101798;
        case 0x10179cu: goto label_10179c;
        case 0x1017a0u: goto label_1017a0;
        case 0x1017a4u: goto label_1017a4;
        case 0x1017a8u: goto label_1017a8;
        case 0x1017acu: goto label_1017ac;
        case 0x1017b0u: goto label_1017b0;
        case 0x1017b4u: goto label_1017b4;
        case 0x1017b8u: goto label_1017b8;
        case 0x1017bcu: goto label_1017bc;
        case 0x1017c0u: goto label_1017c0;
        case 0x1017c4u: goto label_1017c4;
        case 0x1017c8u: goto label_1017c8;
        case 0x1017ccu: goto label_1017cc;
        case 0x1017d0u: goto label_1017d0;
        case 0x1017d4u: goto label_1017d4;
        case 0x1017d8u: goto label_1017d8;
        case 0x1017dcu: goto label_1017dc;
        case 0x1017e0u: goto label_1017e0;
        case 0x1017e4u: goto label_1017e4;
        case 0x1017e8u: goto label_1017e8;
        case 0x1017ecu: goto label_1017ec;
        case 0x1017f0u: goto label_1017f0;
        case 0x1017f4u: goto label_1017f4;
        case 0x1017f8u: goto label_1017f8;
        case 0x1017fcu: goto label_1017fc;
        case 0x101800u: goto label_101800;
        case 0x101804u: goto label_101804;
        case 0x101808u: goto label_101808;
        case 0x10180cu: goto label_10180c;
        case 0x101810u: goto label_101810;
        case 0x101814u: goto label_101814;
        case 0x101818u: goto label_101818;
        case 0x10181cu: goto label_10181c;
        case 0x101820u: goto label_101820;
        case 0x101824u: goto label_101824;
        case 0x101828u: goto label_101828;
        case 0x10182cu: goto label_10182c;
        case 0x101830u: goto label_101830;
        case 0x101834u: goto label_101834;
        case 0x101838u: goto label_101838;
        case 0x10183cu: goto label_10183c;
        case 0x101840u: goto label_101840;
        case 0x101844u: goto label_101844;
        case 0x101848u: goto label_101848;
        case 0x10184cu: goto label_10184c;
        case 0x101850u: goto label_101850;
        case 0x101854u: goto label_101854;
        case 0x101858u: goto label_101858;
        case 0x10185cu: goto label_10185c;
        case 0x101860u: goto label_101860;
        case 0x101864u: goto label_101864;
        case 0x101868u: goto label_101868;
        case 0x10186cu: goto label_10186c;
        case 0x101870u: goto label_101870;
        case 0x101874u: goto label_101874;
        case 0x101878u: goto label_101878;
        case 0x10187cu: goto label_10187c;
        case 0x101880u: goto label_101880;
        case 0x101884u: goto label_101884;
        case 0x101888u: goto label_101888;
        case 0x10188cu: goto label_10188c;
        case 0x101890u: goto label_101890;
        case 0x101894u: goto label_101894;
        case 0x101898u: goto label_101898;
        case 0x10189cu: goto label_10189c;
        case 0x1018a0u: goto label_1018a0;
        case 0x1018a4u: goto label_1018a4;
        case 0x1018a8u: goto label_1018a8;
        case 0x1018acu: goto label_1018ac;
        case 0x1018b0u: goto label_1018b0;
        case 0x1018b4u: goto label_1018b4;
        case 0x1018b8u: goto label_1018b8;
        case 0x1018bcu: goto label_1018bc;
        case 0x1018c0u: goto label_1018c0;
        case 0x1018c4u: goto label_1018c4;
        case 0x1018c8u: goto label_1018c8;
        case 0x1018ccu: goto label_1018cc;
        case 0x1018d0u: goto label_1018d0;
        case 0x1018d4u: goto label_1018d4;
        case 0x1018d8u: goto label_1018d8;
        case 0x1018dcu: goto label_1018dc;
        case 0x1018e0u: goto label_1018e0;
        case 0x1018e4u: goto label_1018e4;
        case 0x1018e8u: goto label_1018e8;
        case 0x1018ecu: goto label_1018ec;
        case 0x1018f0u: goto label_1018f0;
        case 0x1018f4u: goto label_1018f4;
        case 0x1018f8u: goto label_1018f8;
        case 0x1018fcu: goto label_1018fc;
        case 0x101900u: goto label_101900;
        case 0x101904u: goto label_101904;
        case 0x101908u: goto label_101908;
        case 0x10190cu: goto label_10190c;
        case 0x101910u: goto label_101910;
        case 0x101914u: goto label_101914;
        case 0x101918u: goto label_101918;
        case 0x10191cu: goto label_10191c;
        case 0x101920u: goto label_101920;
        case 0x101924u: goto label_101924;
        case 0x101928u: goto label_101928;
        case 0x10192cu: goto label_10192c;
        case 0x101930u: goto label_101930;
        case 0x101934u: goto label_101934;
        case 0x101938u: goto label_101938;
        case 0x10193cu: goto label_10193c;
        case 0x101940u: goto label_101940;
        case 0x101944u: goto label_101944;
        case 0x101948u: goto label_101948;
        case 0x10194cu: goto label_10194c;
        case 0x101950u: goto label_101950;
        case 0x101954u: goto label_101954;
        case 0x101958u: goto label_101958;
        case 0x10195cu: goto label_10195c;
        case 0x101960u: goto label_101960;
        case 0x101964u: goto label_101964;
        case 0x101968u: goto label_101968;
        case 0x10196cu: goto label_10196c;
        case 0x101970u: goto label_101970;
        case 0x101974u: goto label_101974;
        case 0x101978u: goto label_101978;
        case 0x10197cu: goto label_10197c;
        case 0x101980u: goto label_101980;
        case 0x101984u: goto label_101984;
        case 0x101988u: goto label_101988;
        case 0x10198cu: goto label_10198c;
        case 0x101990u: goto label_101990;
        case 0x101994u: goto label_101994;
        case 0x101998u: goto label_101998;
        case 0x10199cu: goto label_10199c;
        case 0x1019a0u: goto label_1019a0;
        case 0x1019a4u: goto label_1019a4;
        case 0x1019a8u: goto label_1019a8;
        case 0x1019acu: goto label_1019ac;
        case 0x1019b0u: goto label_1019b0;
        case 0x1019b4u: goto label_1019b4;
        case 0x1019b8u: goto label_1019b8;
        case 0x1019bcu: goto label_1019bc;
        case 0x1019c0u: goto label_1019c0;
        case 0x1019c4u: goto label_1019c4;
        case 0x1019c8u: goto label_1019c8;
        case 0x1019ccu: goto label_1019cc;
        case 0x1019d0u: goto label_1019d0;
        case 0x1019d4u: goto label_1019d4;
        case 0x1019d8u: goto label_1019d8;
        case 0x1019dcu: goto label_1019dc;
        case 0x1019e0u: goto label_1019e0;
        case 0x1019e4u: goto label_1019e4;
        case 0x1019e8u: goto label_1019e8;
        case 0x1019ecu: goto label_1019ec;
        case 0x1019f0u: goto label_1019f0;
        case 0x1019f4u: goto label_1019f4;
        case 0x1019f8u: goto label_1019f8;
        case 0x1019fcu: goto label_1019fc;
        case 0x101a00u: goto label_101a00;
        case 0x101a04u: goto label_101a04;
        case 0x101a08u: goto label_101a08;
        case 0x101a0cu: goto label_101a0c;
        case 0x101a10u: goto label_101a10;
        case 0x101a14u: goto label_101a14;
        case 0x101a18u: goto label_101a18;
        case 0x101a1cu: goto label_101a1c;
        case 0x101a20u: goto label_101a20;
        case 0x101a24u: goto label_101a24;
        case 0x101a28u: goto label_101a28;
        case 0x101a2cu: goto label_101a2c;
        case 0x101a30u: goto label_101a30;
        case 0x101a34u: goto label_101a34;
        case 0x101a38u: goto label_101a38;
        case 0x101a3cu: goto label_101a3c;
        case 0x101a40u: goto label_101a40;
        case 0x101a44u: goto label_101a44;
        case 0x101a48u: goto label_101a48;
        case 0x101a4cu: goto label_101a4c;
        case 0x101a50u: goto label_101a50;
        case 0x101a54u: goto label_101a54;
        case 0x101a58u: goto label_101a58;
        case 0x101a5cu: goto label_101a5c;
        case 0x101a60u: goto label_101a60;
        case 0x101a64u: goto label_101a64;
        case 0x101a68u: goto label_101a68;
        case 0x101a6cu: goto label_101a6c;
        case 0x101a70u: goto label_101a70;
        case 0x101a74u: goto label_101a74;
        case 0x101a78u: goto label_101a78;
        case 0x101a7cu: goto label_101a7c;
        case 0x101a80u: goto label_101a80;
        case 0x101a84u: goto label_101a84;
        case 0x101a88u: goto label_101a88;
        case 0x101a8cu: goto label_101a8c;
        case 0x101a90u: goto label_101a90;
        case 0x101a94u: goto label_101a94;
        case 0x101a98u: goto label_101a98;
        case 0x101a9cu: goto label_101a9c;
        case 0x101aa0u: goto label_101aa0;
        case 0x101aa4u: goto label_101aa4;
        case 0x101aa8u: goto label_101aa8;
        case 0x101aacu: goto label_101aac;
        case 0x101ab0u: goto label_101ab0;
        case 0x101ab4u: goto label_101ab4;
        case 0x101ab8u: goto label_101ab8;
        case 0x101abcu: goto label_101abc;
        case 0x101ac0u: goto label_101ac0;
        case 0x101ac4u: goto label_101ac4;
        case 0x101ac8u: goto label_101ac8;
        case 0x101accu: goto label_101acc;
        case 0x101ad0u: goto label_101ad0;
        case 0x101ad4u: goto label_101ad4;
        case 0x101ad8u: goto label_101ad8;
        case 0x101adcu: goto label_101adc;
        case 0x101ae0u: goto label_101ae0;
        case 0x101ae4u: goto label_101ae4;
        case 0x101ae8u: goto label_101ae8;
        case 0x101aecu: goto label_101aec;
        case 0x101af0u: goto label_101af0;
        case 0x101af4u: goto label_101af4;
        case 0x101af8u: goto label_101af8;
        case 0x101afcu: goto label_101afc;
        case 0x101b00u: goto label_101b00;
        case 0x101b04u: goto label_101b04;
        case 0x101b08u: goto label_101b08;
        case 0x101b0cu: goto label_101b0c;
        case 0x101b10u: goto label_101b10;
        case 0x101b14u: goto label_101b14;
        case 0x101b18u: goto label_101b18;
        case 0x101b1cu: goto label_101b1c;
        case 0x101b20u: goto label_101b20;
        case 0x101b24u: goto label_101b24;
        case 0x101b28u: goto label_101b28;
        case 0x101b2cu: goto label_101b2c;
        case 0x101b30u: goto label_101b30;
        case 0x101b34u: goto label_101b34;
        case 0x101b38u: goto label_101b38;
        case 0x101b3cu: goto label_101b3c;
        case 0x101b40u: goto label_101b40;
        case 0x101b44u: goto label_101b44;
        case 0x101b48u: goto label_101b48;
        case 0x101b4cu: goto label_101b4c;
        case 0x101b50u: goto label_101b50;
        case 0x101b54u: goto label_101b54;
        case 0x101b58u: goto label_101b58;
        case 0x101b5cu: goto label_101b5c;
        case 0x101b60u: goto label_101b60;
        case 0x101b64u: goto label_101b64;
        case 0x101b68u: goto label_101b68;
        case 0x101b6cu: goto label_101b6c;
        case 0x101b70u: goto label_101b70;
        case 0x101b74u: goto label_101b74;
        case 0x101b78u: goto label_101b78;
        case 0x101b7cu: goto label_101b7c;
        case 0x101b80u: goto label_101b80;
        case 0x101b84u: goto label_101b84;
        case 0x101b88u: goto label_101b88;
        case 0x101b8cu: goto label_101b8c;
        case 0x101b90u: goto label_101b90;
        case 0x101b94u: goto label_101b94;
        case 0x101b98u: goto label_101b98;
        case 0x101b9cu: goto label_101b9c;
        case 0x101ba0u: goto label_101ba0;
        case 0x101ba4u: goto label_101ba4;
        case 0x101ba8u: goto label_101ba8;
        case 0x101bacu: goto label_101bac;
        case 0x101bb0u: goto label_101bb0;
        case 0x101bb4u: goto label_101bb4;
        case 0x101bb8u: goto label_101bb8;
        case 0x101bbcu: goto label_101bbc;
        case 0x101bc0u: goto label_101bc0;
        case 0x101bc4u: goto label_101bc4;
        case 0x101bc8u: goto label_101bc8;
        case 0x101bccu: goto label_101bcc;
        case 0x101bd0u: goto label_101bd0;
        case 0x101bd4u: goto label_101bd4;
        case 0x101bd8u: goto label_101bd8;
        case 0x101bdcu: goto label_101bdc;
        case 0x101be0u: goto label_101be0;
        case 0x101be4u: goto label_101be4;
        case 0x101be8u: goto label_101be8;
        case 0x101becu: goto label_101bec;
        case 0x101bf0u: goto label_101bf0;
        case 0x101bf4u: goto label_101bf4;
        case 0x101bf8u: goto label_101bf8;
        case 0x101bfcu: goto label_101bfc;
        case 0x101c00u: goto label_101c00;
        case 0x101c04u: goto label_101c04;
        case 0x101c08u: goto label_101c08;
        case 0x101c0cu: goto label_101c0c;
        case 0x101c10u: goto label_101c10;
        case 0x101c14u: goto label_101c14;
        case 0x101c18u: goto label_101c18;
        case 0x101c1cu: goto label_101c1c;
        case 0x101c20u: goto label_101c20;
        case 0x101c24u: goto label_101c24;
        case 0x101c28u: goto label_101c28;
        case 0x101c2cu: goto label_101c2c;
        case 0x101c30u: goto label_101c30;
        case 0x101c34u: goto label_101c34;
        case 0x101c38u: goto label_101c38;
        case 0x101c3cu: goto label_101c3c;
        case 0x101c40u: goto label_101c40;
        case 0x101c44u: goto label_101c44;
        case 0x101c48u: goto label_101c48;
        case 0x101c4cu: goto label_101c4c;
        case 0x101c50u: goto label_101c50;
        case 0x101c54u: goto label_101c54;
        case 0x101c58u: goto label_101c58;
        case 0x101c5cu: goto label_101c5c;
        case 0x101c60u: goto label_101c60;
        case 0x101c64u: goto label_101c64;
        case 0x101c68u: goto label_101c68;
        case 0x101c6cu: goto label_101c6c;
        case 0x101c70u: goto label_101c70;
        case 0x101c74u: goto label_101c74;
        case 0x101c78u: goto label_101c78;
        case 0x101c7cu: goto label_101c7c;
        case 0x101c80u: goto label_101c80;
        case 0x101c84u: goto label_101c84;
        case 0x101c88u: goto label_101c88;
        case 0x101c8cu: goto label_101c8c;
        case 0x101c90u: goto label_101c90;
        case 0x101c94u: goto label_101c94;
        case 0x101c98u: goto label_101c98;
        case 0x101c9cu: goto label_101c9c;
        case 0x101ca0u: goto label_101ca0;
        case 0x101ca4u: goto label_101ca4;
        case 0x101ca8u: goto label_101ca8;
        case 0x101cacu: goto label_101cac;
        case 0x101cb0u: goto label_101cb0;
        case 0x101cb4u: goto label_101cb4;
        case 0x101cb8u: goto label_101cb8;
        case 0x101cbcu: goto label_101cbc;
        case 0x101cc0u: goto label_101cc0;
        case 0x101cc4u: goto label_101cc4;
        case 0x101cc8u: goto label_101cc8;
        case 0x101cccu: goto label_101ccc;
        case 0x101cd0u: goto label_101cd0;
        case 0x101cd4u: goto label_101cd4;
        case 0x101cd8u: goto label_101cd8;
        case 0x101cdcu: goto label_101cdc;
        case 0x101ce0u: goto label_101ce0;
        case 0x101ce4u: goto label_101ce4;
        case 0x101ce8u: goto label_101ce8;
        case 0x101cecu: goto label_101cec;
        case 0x101cf0u: goto label_101cf0;
        case 0x101cf4u: goto label_101cf4;
        case 0x101cf8u: goto label_101cf8;
        case 0x101cfcu: goto label_101cfc;
        case 0x101d00u: goto label_101d00;
        case 0x101d04u: goto label_101d04;
        case 0x101d08u: goto label_101d08;
        case 0x101d0cu: goto label_101d0c;
        case 0x101d10u: goto label_101d10;
        case 0x101d14u: goto label_101d14;
        case 0x101d18u: goto label_101d18;
        case 0x101d1cu: goto label_101d1c;
        case 0x101d20u: goto label_101d20;
        case 0x101d24u: goto label_101d24;
        case 0x101d28u: goto label_101d28;
        case 0x101d2cu: goto label_101d2c;
        case 0x101d30u: goto label_101d30;
        case 0x101d34u: goto label_101d34;
        case 0x101d38u: goto label_101d38;
        case 0x101d3cu: goto label_101d3c;
        case 0x101d40u: goto label_101d40;
        case 0x101d44u: goto label_101d44;
        case 0x101d48u: goto label_101d48;
        case 0x101d4cu: goto label_101d4c;
        case 0x101d50u: goto label_101d50;
        case 0x101d54u: goto label_101d54;
        case 0x101d58u: goto label_101d58;
        case 0x101d5cu: goto label_101d5c;
        case 0x101d60u: goto label_101d60;
        case 0x101d64u: goto label_101d64;
        case 0x101d68u: goto label_101d68;
        case 0x101d6cu: goto label_101d6c;
        case 0x101d70u: goto label_101d70;
        case 0x101d74u: goto label_101d74;
        case 0x101d78u: goto label_101d78;
        case 0x101d7cu: goto label_101d7c;
        case 0x101d80u: goto label_101d80;
        case 0x101d84u: goto label_101d84;
        case 0x101d88u: goto label_101d88;
        case 0x101d8cu: goto label_101d8c;
        case 0x101d90u: goto label_101d90;
        case 0x101d94u: goto label_101d94;
        case 0x101d98u: goto label_101d98;
        case 0x101d9cu: goto label_101d9c;
        case 0x101da0u: goto label_101da0;
        case 0x101da4u: goto label_101da4;
        case 0x101da8u: goto label_101da8;
        case 0x101dacu: goto label_101dac;
        case 0x101db0u: goto label_101db0;
        case 0x101db4u: goto label_101db4;
        case 0x101db8u: goto label_101db8;
        case 0x101dbcu: goto label_101dbc;
        case 0x101dc0u: goto label_101dc0;
        case 0x101dc4u: goto label_101dc4;
        case 0x101dc8u: goto label_101dc8;
        case 0x101dccu: goto label_101dcc;
        case 0x101dd0u: goto label_101dd0;
        case 0x101dd4u: goto label_101dd4;
        case 0x101dd8u: goto label_101dd8;
        case 0x101ddcu: goto label_101ddc;
        case 0x101de0u: goto label_101de0;
        case 0x101de4u: goto label_101de4;
        case 0x101de8u: goto label_101de8;
        case 0x101decu: goto label_101dec;
        case 0x101df0u: goto label_101df0;
        case 0x101df4u: goto label_101df4;
        case 0x101df8u: goto label_101df8;
        case 0x101dfcu: goto label_101dfc;
        case 0x101e00u: goto label_101e00;
        case 0x101e04u: goto label_101e04;
        case 0x101e08u: goto label_101e08;
        case 0x101e0cu: goto label_101e0c;
        case 0x101e10u: goto label_101e10;
        case 0x101e14u: goto label_101e14;
        case 0x101e18u: goto label_101e18;
        case 0x101e1cu: goto label_101e1c;
        case 0x101e20u: goto label_101e20;
        case 0x101e24u: goto label_101e24;
        case 0x101e28u: goto label_101e28;
        case 0x101e2cu: goto label_101e2c;
        case 0x101e30u: goto label_101e30;
        case 0x101e34u: goto label_101e34;
        case 0x101e38u: goto label_101e38;
        case 0x101e3cu: goto label_101e3c;
        case 0x101e40u: goto label_101e40;
        case 0x101e44u: goto label_101e44;
        case 0x101e48u: goto label_101e48;
        case 0x101e4cu: goto label_101e4c;
        case 0x101e50u: goto label_101e50;
        case 0x101e54u: goto label_101e54;
        case 0x101e58u: goto label_101e58;
        case 0x101e5cu: goto label_101e5c;
        case 0x101e60u: goto label_101e60;
        case 0x101e64u: goto label_101e64;
        case 0x101e68u: goto label_101e68;
        case 0x101e6cu: goto label_101e6c;
        case 0x101e70u: goto label_101e70;
        case 0x101e74u: goto label_101e74;
        case 0x101e78u: goto label_101e78;
        case 0x101e7cu: goto label_101e7c;
        case 0x101e80u: goto label_101e80;
        case 0x101e84u: goto label_101e84;
        case 0x101e88u: goto label_101e88;
        case 0x101e8cu: goto label_101e8c;
        case 0x101e90u: goto label_101e90;
        case 0x101e94u: goto label_101e94;
        case 0x101e98u: goto label_101e98;
        case 0x101e9cu: goto label_101e9c;
        case 0x101ea0u: goto label_101ea0;
        case 0x101ea4u: goto label_101ea4;
        case 0x101ea8u: goto label_101ea8;
        case 0x101eacu: goto label_101eac;
        case 0x101eb0u: goto label_101eb0;
        case 0x101eb4u: goto label_101eb4;
        case 0x101eb8u: goto label_101eb8;
        case 0x101ebcu: goto label_101ebc;
        case 0x101ec0u: goto label_101ec0;
        case 0x101ec4u: goto label_101ec4;
        case 0x101ec8u: goto label_101ec8;
        case 0x101eccu: goto label_101ecc;
        case 0x101ed0u: goto label_101ed0;
        case 0x101ed4u: goto label_101ed4;
        case 0x101ed8u: goto label_101ed8;
        case 0x101edcu: goto label_101edc;
        case 0x101ee0u: goto label_101ee0;
        case 0x101ee4u: goto label_101ee4;
        case 0x101ee8u: goto label_101ee8;
        case 0x101eecu: goto label_101eec;
        case 0x101ef0u: goto label_101ef0;
        case 0x101ef4u: goto label_101ef4;
        case 0x101ef8u: goto label_101ef8;
        case 0x101efcu: goto label_101efc;
        default: break;
    }

    ctx->pc = 0x101650u;

label_101650:
    // 0x101650: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x101650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_101654:
    // 0x101654: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x101654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_101658:
    // 0x101658: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x101658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_10165c:
    // 0x10165c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x10165cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_101660:
    // 0x101660: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x101660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_101664:
    // 0x101664: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x101664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_101668:
    // 0x101668: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x101668u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10166c:
    // 0x10166c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x10166cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_101670:
    // 0x101670: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x101670u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_101674:
    // 0x101674: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x101674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_101678:
    // 0x101678: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x101678u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_10167c:
    // 0x10167c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x10167cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_101680:
    // 0x101680: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x101680u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_101684:
    // 0x101684: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x101684u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_101688:
    // 0x101688: 0xc440e120  lwc1        $f0, -0x1EE0($v0)
    ctx->pc = 0x101688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10168c:
    // 0x10168c: 0x8c7089e0  lw          $s0, -0x7620($v1)
    ctx->pc = 0x10168cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_101690:
    // 0x101690: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x101690u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_101694:
    // 0x101694: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x101694u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_101698:
    // 0x101698: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x101698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_10169c:
    // 0x10169c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x10169cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1016a0:
    // 0x1016a0: 0xc442e124  lwc1        $f2, -0x1EDC($v0)
    ctx->pc = 0x1016a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1016a4:
    // 0x1016a4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1016a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1016a8:
    // 0x1016a8: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x1016a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
label_1016ac:
    // 0x1016ac: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1016acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1016b0:
    // 0x1016b0: 0xc441e128  lwc1        $f1, -0x1ED8($v0)
    ctx->pc = 0x1016b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1016b4:
    // 0x1016b4: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x1016b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1016b8:
    // 0x1016b8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1016b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1016bc:
    // 0x1016bc: 0xc440e12c  lwc1        $f0, -0x1ED4($v0)
    ctx->pc = 0x1016bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1016c0:
    // 0x1016c0: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x1016c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1016c4:
    // 0x1016c4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1016c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_1016c8:
    // 0x1016c8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1016c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1016cc:
    // 0x1016cc: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x1016ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1016d0:
    // 0x1016d0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x1016d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_1016d4:
    // 0x1016d4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1016d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1016d8:
    // 0x1016d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1016d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1016dc:
    // 0x1016dc: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x1016dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1016e0:
    // 0x1016e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1016e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1016e4:
    // 0x1016e4: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x1016e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1016e8:
    // 0x1016e8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1016e8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1016ec:
    // 0x1016ec: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1016ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1016f0:
    // 0x1016f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1016f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1016f4:
    // 0x1016f4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1016f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1016f8:
    // 0x1016f8: 0x0  nop
    ctx->pc = 0x1016f8u;
    // NOP
label_1016fc:
    // 0x1016fc: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1016fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_101700:
    // 0x101700: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_101704:
    if (ctx->pc == 0x101704u) {
        ctx->pc = 0x101704u;
            // 0x101704: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->pc = 0x101708u;
        goto label_101708;
    }
    ctx->pc = 0x101700u;
    {
        const bool branch_taken_0x101700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101700u;
            // 0x101704: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101700) {
            ctx->pc = 0x101718u;
            goto label_101718;
        }
    }
    ctx->pc = 0x101708u;
label_101708:
    // 0x101708: 0x24a28000  addiu       $v0, $a1, -0x8000
    ctx->pc = 0x101708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
label_10170c:
    // 0x10170c: 0x24428001  addiu       $v0, $v0, -0x7FFF
    ctx->pc = 0x10170cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934529));
label_101710:
    // 0x101710: 0x10000008  b           . + 4 + (0x8 << 2)
label_101714:
    if (ctx->pc == 0x101714u) {
        ctx->pc = 0x101714u;
            // 0x101714: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x101718u;
        goto label_101718;
    }
    ctx->pc = 0x101710u;
    {
        const bool branch_taken_0x101710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101710u;
            // 0x101714: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101710) {
            ctx->pc = 0x101734u;
            goto label_101734;
        }
    }
    ctx->pc = 0x101718u;
label_101718:
    // 0x101718: 0x3c01ffff  lui         $at, 0xFFFF
    ctx->pc = 0x101718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65535 << 16));
label_10171c:
    // 0x10171c: 0x34210002  ori         $at, $at, 0x2
    ctx->pc = 0x10171cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2);
label_101720:
    // 0x101720: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x101720u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_101724:
    // 0x101724: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_101728:
    if (ctx->pc == 0x101728u) {
        ctx->pc = 0x101728u;
            // 0x101728: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x10172Cu;
        goto label_10172c;
    }
    ctx->pc = 0x101724u;
    {
        const bool branch_taken_0x101724 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x101724) {
            ctx->pc = 0x101728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x101724u;
            // 0x101728: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x101738u;
            goto label_101738;
        }
    }
    ctx->pc = 0x10172Cu;
label_10172c:
    // 0x10172c: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x10172cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_101730:
    // 0x101730: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x101730u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_101734:
    // 0x101734: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x101734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_101738:
    // 0x101738: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x101738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_10173c:
    // 0x10173c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x10173cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_101740:
    // 0x101740: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x101740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_101744:
    // 0x101744: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x101744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_101748:
    // 0x101748: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_10174c:
    if (ctx->pc == 0x10174Cu) {
        ctx->pc = 0x10174Cu;
            // 0x10174c: 0xae640004  sw          $a0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
        ctx->pc = 0x101750u;
        goto label_101750;
    }
    ctx->pc = 0x101748u;
    {
        const bool branch_taken_0x101748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10174Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101748u;
            // 0x10174c: 0xae640004  sw          $a0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101748) {
            ctx->pc = 0x101760u;
            goto label_101760;
        }
    }
    ctx->pc = 0x101750u;
label_101750:
    // 0x101750: 0x24828000  addiu       $v0, $a0, -0x8000
    ctx->pc = 0x101750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
label_101754:
    // 0x101754: 0x24428001  addiu       $v0, $v0, -0x7FFF
    ctx->pc = 0x101754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934529));
label_101758:
    // 0x101758: 0x10000008  b           . + 4 + (0x8 << 2)
label_10175c:
    if (ctx->pc == 0x10175Cu) {
        ctx->pc = 0x10175Cu;
            // 0x10175c: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x101760u;
        goto label_101760;
    }
    ctx->pc = 0x101758u;
    {
        const bool branch_taken_0x101758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10175Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101758u;
            // 0x10175c: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101758) {
            ctx->pc = 0x10177Cu;
            goto label_10177c;
        }
    }
    ctx->pc = 0x101760u;
label_101760:
    // 0x101760: 0x3c01ffff  lui         $at, 0xFFFF
    ctx->pc = 0x101760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65535 << 16));
label_101764:
    // 0x101764: 0x34210002  ori         $at, $at, 0x2
    ctx->pc = 0x101764u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2);
label_101768:
    // 0x101768: 0x81082a  slt         $at, $a0, $at
    ctx->pc = 0x101768u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_10176c:
    // 0x10176c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_101770:
    if (ctx->pc == 0x101770u) {
        ctx->pc = 0x101770u;
            // 0x101770: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->pc = 0x101774u;
        goto label_101774;
    }
    ctx->pc = 0x10176Cu;
    {
        const bool branch_taken_0x10176c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x10176c) {
            ctx->pc = 0x101770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10176Cu;
            // 0x101770: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x101780u;
            goto label_101780;
        }
    }
    ctx->pc = 0x101774u;
label_101774:
    // 0x101774: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x101774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_101778:
    // 0x101778: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x101778u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_10177c:
    // 0x10177c: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x10177cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_101780:
    // 0x101780: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x101780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_101784:
    // 0x101784: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x101784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_101788:
    // 0x101788: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x101788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10178c:
    // 0x10178c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x10178cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_101790:
    // 0x101790: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_101794:
    if (ctx->pc == 0x101794u) {
        ctx->pc = 0x101794u;
            // 0x101794: 0xae640008  sw          $a0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 4));
        ctx->pc = 0x101798u;
        goto label_101798;
    }
    ctx->pc = 0x101790u;
    {
        const bool branch_taken_0x101790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101790u;
            // 0x101794: 0xae640008  sw          $a0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101790) {
            ctx->pc = 0x1017A8u;
            goto label_1017a8;
        }
    }
    ctx->pc = 0x101798u;
label_101798:
    // 0x101798: 0x24828000  addiu       $v0, $a0, -0x8000
    ctx->pc = 0x101798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
label_10179c:
    // 0x10179c: 0x24428001  addiu       $v0, $v0, -0x7FFF
    ctx->pc = 0x10179cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934529));
label_1017a0:
    // 0x1017a0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1017a4:
    if (ctx->pc == 0x1017A4u) {
        ctx->pc = 0x1017A4u;
            // 0x1017a4: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x1017A8u;
        goto label_1017a8;
    }
    ctx->pc = 0x1017A0u;
    {
        const bool branch_taken_0x1017a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1017A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1017A0u;
            // 0x1017a4: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1017a0) {
            ctx->pc = 0x1017C4u;
            goto label_1017c4;
        }
    }
    ctx->pc = 0x1017A8u;
label_1017a8:
    // 0x1017a8: 0x3c01ffff  lui         $at, 0xFFFF
    ctx->pc = 0x1017a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65535 << 16));
label_1017ac:
    // 0x1017ac: 0x34210002  ori         $at, $at, 0x2
    ctx->pc = 0x1017acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2);
label_1017b0:
    // 0x1017b0: 0x81082a  slt         $at, $a0, $at
    ctx->pc = 0x1017b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_1017b4:
    // 0x1017b4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_1017b8:
    if (ctx->pc == 0x1017B8u) {
        ctx->pc = 0x1017B8u;
            // 0x1017b8: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x1017BCu;
        goto label_1017bc;
    }
    ctx->pc = 0x1017B4u;
    {
        const bool branch_taken_0x1017b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1017b4) {
            ctx->pc = 0x1017B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1017B4u;
            // 0x1017b8: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1017C8u;
            goto label_1017c8;
        }
    }
    ctx->pc = 0x1017BCu;
label_1017bc:
    // 0x1017bc: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1017bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1017c0:
    // 0x1017c0: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x1017c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_1017c4:
    // 0x1017c4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1017c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1017c8:
    // 0x1017c8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1017c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1017cc:
    // 0x1017cc: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x1017ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_1017d0:
    // 0x1017d0: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x1017d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1017d4:
    // 0x1017d4: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x1017d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1017d8:
    // 0x1017d8: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1017d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1017dc:
    // 0x1017dc: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1017dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1017e0:
    // 0x1017e0: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x1017e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1017e4:
    // 0x1017e4: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1017e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_1017e8:
    // 0x1017e8: 0xc04f380  jal         func_13CE00
label_1017ec:
    if (ctx->pc == 0x1017ECu) {
        ctx->pc = 0x1017ECu;
            // 0x1017ec: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1017F0u;
        goto label_1017f0;
    }
    ctx->pc = 0x1017E8u;
    SET_GPR_U32(ctx, 31, 0x1017F0u);
    ctx->pc = 0x1017ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1017E8u;
            // 0x1017ec: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CE00u;
    if (runtime->hasFunction(0x13CE00u)) {
        auto targetFn = runtime->lookupFunction(0x13CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1017F0u; }
        if (ctx->pc != 0x1017F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CE00_0x13ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1017F0u; }
        if (ctx->pc != 0x1017F0u) { return; }
    }
    ctx->pc = 0x1017F0u;
label_1017f0:
    // 0x1017f0: 0xc66c0024  lwc1        $f12, 0x24($s3)
    ctx->pc = 0x1017f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1017f4:
    // 0x1017f4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1017f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1017f8:
    // 0x1017f8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1017f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1017fc:
    // 0x1017fc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1017fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_101800:
    // 0x101800: 0xc04ce50  jal         func_133940
label_101804:
    if (ctx->pc == 0x101804u) {
        ctx->pc = 0x101804u;
            // 0x101804: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x101808u;
        goto label_101808;
    }
    ctx->pc = 0x101800u;
    SET_GPR_U32(ctx, 31, 0x101808u);
    ctx->pc = 0x101804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101800u;
            // 0x101804: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101808u; }
        if (ctx->pc != 0x101808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101808u; }
        if (ctx->pc != 0x101808u) { return; }
    }
    ctx->pc = 0x101808u;
label_101808:
    // 0x101808: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x101808u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_10180c:
    // 0x10180c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x10180cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_101810:
    // 0x101810: 0xe7b50094  swc1        $f21, 0x94($sp)
    ctx->pc = 0x101810u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_101814:
    // 0x101814: 0xe7b40098  swc1        $f20, 0x98($sp)
    ctx->pc = 0x101814u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_101818:
    // 0x101818: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x101818u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10181c:
    // 0x10181c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x10181cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_101820:
    // 0x101820: 0x320f809  jalr        $t9
label_101824:
    if (ctx->pc == 0x101824u) {
        ctx->pc = 0x101824u;
            // 0x101824: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x101828u;
        goto label_101828;
    }
    ctx->pc = 0x101820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x101828u);
        ctx->pc = 0x101824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101820u;
            // 0x101824: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x101828u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x101828u; }
            if (ctx->pc != 0x101828u) { return; }
        }
        }
    }
    ctx->pc = 0x101828u;
label_101828:
    // 0x101828: 0x111023  negu        $v0, $s1
    ctx->pc = 0x101828u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_10182c:
    // 0x10182c: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x10182cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_101830:
    // 0x101830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x101830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_101834:
    // 0x101834: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x101834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_101838:
    // 0x101838: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x101838u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_10183c:
    // 0x10183c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x10183cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_101840:
    // 0x101840: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x101840u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_101844:
    // 0x101844: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x101844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_101848:
    // 0x101848: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x101848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_10184c:
    // 0x10184c: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x10184cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_101850:
    // 0x101850: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x101850u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_101854:
    // 0x101854: 0x0  nop
    ctx->pc = 0x101854u;
    // NOP
label_101858:
    // 0x101858: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x101858u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_10185c:
    // 0x10185c: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x10185cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_101860:
    // 0x101860: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x101860u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_101864:
    // 0x101864: 0x320f809  jalr        $t9
label_101868:
    if (ctx->pc == 0x101868u) {
        ctx->pc = 0x101868u;
            // 0x101868: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->pc = 0x10186Cu;
        goto label_10186c;
    }
    ctx->pc = 0x101864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10186Cu);
        ctx->pc = 0x101868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101864u;
            // 0x101868: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10186Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10186Cu; }
            if (ctx->pc != 0x10186Cu) { return; }
        }
        }
    }
    ctx->pc = 0x10186Cu;
label_10186c:
    // 0x10186c: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x10186cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_101870:
    // 0x101870: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x101870u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_101874:
    // 0x101874: 0x320f809  jalr        $t9
label_101878:
    if (ctx->pc == 0x101878u) {
        ctx->pc = 0x101878u;
            // 0x101878: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x10187Cu;
        goto label_10187c;
    }
    ctx->pc = 0x101874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10187Cu);
        ctx->pc = 0x101878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101874u;
            // 0x101878: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10187Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10187Cu; }
            if (ctx->pc != 0x10187Cu) { return; }
        }
        }
    }
    ctx->pc = 0x10187Cu;
label_10187c:
    // 0x10187c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x10187cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_101880:
    // 0x101880: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x101880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_101884:
    // 0x101884: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x101884u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_101888:
    // 0x101888: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x101888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_10188c:
    // 0x10188c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x10188cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_101890:
    // 0x101890: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x101890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_101894:
    // 0x101894: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x101894u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_101898:
    // 0x101898: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x101898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10189c:
    // 0x10189c: 0x3e00008  jr          $ra
label_1018a0:
    if (ctx->pc == 0x1018A0u) {
        ctx->pc = 0x1018A0u;
            // 0x1018a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1018A4u;
        goto label_1018a4;
    }
    ctx->pc = 0x10189Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1018A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10189Cu;
            // 0x1018a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1018A4u;
label_1018a4:
    // 0x1018a4: 0x0  nop
    ctx->pc = 0x1018a4u;
    // NOP
label_1018a8:
    // 0x1018a8: 0x0  nop
    ctx->pc = 0x1018a8u;
    // NOP
label_1018ac:
    // 0x1018ac: 0x0  nop
    ctx->pc = 0x1018acu;
    // NOP
label_1018b0:
    // 0x1018b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1018b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1018b4:
    // 0x1018b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1018b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1018b8:
    // 0x1018b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1018b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1018bc:
    // 0x1018bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1018bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1018c0:
    // 0x1018c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1018c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1018c4:
    // 0x1018c4: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x1018c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1018c8:
    // 0x1018c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1018c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1018cc:
    // 0x1018cc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1018ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1018d0:
    // 0x1018d0: 0x320f809  jalr        $t9
label_1018d4:
    if (ctx->pc == 0x1018D4u) {
        ctx->pc = 0x1018D4u;
            // 0x1018d4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1018D8u;
        goto label_1018d8;
    }
    ctx->pc = 0x1018D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1018D8u);
        ctx->pc = 0x1018D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1018D0u;
            // 0x1018d4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1018D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1018D8u; }
            if (ctx->pc != 0x1018D8u) { return; }
        }
        }
    }
    ctx->pc = 0x1018D8u;
label_1018d8:
    // 0x1018d8: 0x92220024  lbu         $v0, 0x24($s1)
    ctx->pc = 0x1018d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
label_1018dc:
    // 0x1018dc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1018e0:
    if (ctx->pc == 0x1018E0u) {
        ctx->pc = 0x1018E4u;
        goto label_1018e4;
    }
    ctx->pc = 0x1018DCu;
    {
        const bool branch_taken_0x1018dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1018dc) {
            ctx->pc = 0x101900u;
            goto label_101900;
        }
    }
    ctx->pc = 0x1018E4u;
label_1018e4:
    // 0x1018e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1018e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1018e8:
    // 0x1018e8: 0x8c4267f0  lw          $v0, 0x67F0($v0)
    ctx->pc = 0x1018e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26608)));
label_1018ec:
    // 0x1018ec: 0x40f809  jalr        $v0
label_1018f0:
    if (ctx->pc == 0x1018F0u) {
        ctx->pc = 0x1018F0u;
            // 0x1018f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1018F4u;
        goto label_1018f4;
    }
    ctx->pc = 0x1018ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1018F4u);
        ctx->pc = 0x1018F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1018ECu;
            // 0x1018f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1018F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1018F4u; }
            if (ctx->pc != 0x1018F4u) { return; }
        }
        }
    }
    ctx->pc = 0x1018F4u;
label_1018f4:
    // 0x1018f4: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_1018f8:
    if (ctx->pc == 0x1018F8u) {
        ctx->pc = 0x1018F8u;
            // 0x1018f8: 0x92220024  lbu         $v0, 0x24($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->pc = 0x1018FCu;
        goto label_1018fc;
    }
    ctx->pc = 0x1018F4u;
    {
        const bool branch_taken_0x1018f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1018F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1018F4u;
            // 0x1018f8: 0x92220024  lbu         $v0, 0x24($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1018f4) {
            ctx->pc = 0x1018DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1018dc;
        }
    }
    ctx->pc = 0x1018FCu;
label_1018fc:
    // 0x1018fc: 0x0  nop
    ctx->pc = 0x1018fcu;
    // NOP
label_101900:
    // 0x101900: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x101900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_101904:
    // 0x101904: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x101904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_101908:
    // 0x101908: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x101908u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_10190c:
    // 0x10190c: 0x320f809  jalr        $t9
label_101910:
    if (ctx->pc == 0x101910u) {
        ctx->pc = 0x101914u;
        goto label_101914;
    }
    ctx->pc = 0x10190Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x101914u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x101914u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x101914u; }
            if (ctx->pc != 0x101914u) { return; }
        }
        }
    }
    ctx->pc = 0x101914u;
label_101914:
    // 0x101914: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x101914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_101918:
    // 0x101918: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x101918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10191c:
    // 0x10191c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10191cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_101920:
    // 0x101920: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x101920u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_101924:
    // 0x101924: 0x3e00008  jr          $ra
label_101928:
    if (ctx->pc == 0x101928u) {
        ctx->pc = 0x101928u;
            // 0x101928: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x10192Cu;
        goto label_10192c;
    }
    ctx->pc = 0x101924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101924u;
            // 0x101928: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10192Cu;
label_10192c:
    // 0x10192c: 0x0  nop
    ctx->pc = 0x10192cu;
    // NOP
label_101930:
    // 0x101930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x101930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_101934:
    // 0x101934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x101934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_101938:
    // 0x101938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x101938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10193c:
    // 0x10193c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10193cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_101940:
    // 0x101940: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x101940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_101944:
    // 0x101944: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_101948:
    if (ctx->pc == 0x101948u) {
        ctx->pc = 0x101948u;
            // 0x101948: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10194Cu;
        goto label_10194c;
    }
    ctx->pc = 0x101944u;
    {
        const bool branch_taken_0x101944 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x101948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101944u;
            // 0x101948: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101944) {
            ctx->pc = 0x1019B0u;
            goto label_1019b0;
        }
    }
    ctx->pc = 0x10194Cu;
label_10194c:
    // 0x10194c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x10194cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_101950:
    // 0x101950: 0x2442ca80  addiu       $v0, $v0, -0x3580
    ctx->pc = 0x101950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953600));
label_101954:
    // 0x101954: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x101954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_101958:
    // 0x101958: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x101958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_10195c:
    // 0x10195c: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
label_101960:
    if (ctx->pc == 0x101960u) {
        ctx->pc = 0x101964u;
        goto label_101964;
    }
    ctx->pc = 0x10195Cu;
    {
        const bool branch_taken_0x10195c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x10195c) {
            ctx->pc = 0x101974u;
            goto label_101974;
        }
    }
    ctx->pc = 0x101964u;
label_101964:
    // 0x101964: 0xc04306c  jal         func_10C1B0
label_101968:
    if (ctx->pc == 0x101968u) {
        ctx->pc = 0x10196Cu;
        goto label_10196c;
    }
    ctx->pc = 0x101964u;
    SET_GPR_U32(ctx, 31, 0x10196Cu);
    ctx->pc = 0x10C1B0u;
    if (runtime->hasFunction(0x10C1B0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10196Cu; }
        if (ctx->pc != 0x10196Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C1B0_0x10c1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10196Cu; }
        if (ctx->pc != 0x10196Cu) { return; }
    }
    ctx->pc = 0x10196Cu;
label_10196c:
    // 0x10196c: 0xc04305c  jal         func_10C170
label_101970:
    if (ctx->pc == 0x101970u) {
        ctx->pc = 0x101970u;
            // 0x101970: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x101974u;
        goto label_101974;
    }
    ctx->pc = 0x10196Cu;
    SET_GPR_U32(ctx, 31, 0x101974u);
    ctx->pc = 0x101970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10196Cu;
            // 0x101970: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C170u;
    if (runtime->hasFunction(0x10C170u)) {
        auto targetFn = runtime->lookupFunction(0x10C170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101974u; }
        if (ctx->pc != 0x101974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C170_0x10c170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101974u; }
        if (ctx->pc != 0x101974u) { return; }
    }
    ctx->pc = 0x101974u;
label_101974:
    // 0x101974: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_101978:
    if (ctx->pc == 0x101978u) {
        ctx->pc = 0x101978u;
            // 0x101978: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x10197Cu;
        goto label_10197c;
    }
    ctx->pc = 0x101974u;
    {
        const bool branch_taken_0x101974 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x101974) {
            ctx->pc = 0x101978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x101974u;
            // 0x101978: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10199Cu;
            goto label_10199c;
        }
    }
    ctx->pc = 0x10197Cu;
label_10197c:
    // 0x10197c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x10197cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_101980:
    // 0x101980: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x101980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_101984:
    // 0x101984: 0x2463ca60  addiu       $v1, $v1, -0x35A0
    ctx->pc = 0x101984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953568));
label_101988:
    // 0x101988: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x101988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_10198c:
    // 0x10198c: 0x8c4267e0  lw          $v0, 0x67E0($v0)
    ctx->pc = 0x10198cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26592)));
label_101990:
    // 0x101990: 0x40f809  jalr        $v0
label_101994:
    if (ctx->pc == 0x101994u) {
        ctx->pc = 0x101994u;
            // 0x101994: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x101998u;
        goto label_101998;
    }
    ctx->pc = 0x101990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x101998u);
        ctx->pc = 0x101994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101990u;
            // 0x101994: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x101998u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x101998u; }
            if (ctx->pc != 0x101998u) { return; }
        }
        }
    }
    ctx->pc = 0x101998u;
label_101998:
    // 0x101998: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x101998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_10199c:
    // 0x10199c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x10199cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1019a0:
    // 0x1019a0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_1019a4:
    if (ctx->pc == 0x1019A4u) {
        ctx->pc = 0x1019A4u;
            // 0x1019a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1019A8u;
        goto label_1019a8;
    }
    ctx->pc = 0x1019A0u;
    {
        const bool branch_taken_0x1019a0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1019a0) {
            ctx->pc = 0x1019A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1019A0u;
            // 0x1019a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1019B4u;
            goto label_1019b4;
        }
    }
    ctx->pc = 0x1019A8u;
label_1019a8:
    // 0x1019a8: 0xc0400a8  jal         func_1002A0
label_1019ac:
    if (ctx->pc == 0x1019ACu) {
        ctx->pc = 0x1019ACu;
            // 0x1019ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1019B0u;
        goto label_1019b0;
    }
    ctx->pc = 0x1019A8u;
    SET_GPR_U32(ctx, 31, 0x1019B0u);
    ctx->pc = 0x1019ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1019A8u;
            // 0x1019ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1019B0u; }
        if (ctx->pc != 0x1019B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1019B0u; }
        if (ctx->pc != 0x1019B0u) { return; }
    }
    ctx->pc = 0x1019B0u;
label_1019b0:
    // 0x1019b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1019b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1019b4:
    // 0x1019b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1019b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1019b8:
    // 0x1019b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1019b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1019bc:
    // 0x1019bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1019bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1019c0:
    // 0x1019c0: 0x3e00008  jr          $ra
label_1019c4:
    if (ctx->pc == 0x1019C4u) {
        ctx->pc = 0x1019C4u;
            // 0x1019c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1019C8u;
        goto label_1019c8;
    }
    ctx->pc = 0x1019C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1019C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1019C0u;
            // 0x1019c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1019C8u;
label_1019c8:
    // 0x1019c8: 0x0  nop
    ctx->pc = 0x1019c8u;
    // NOP
label_1019cc:
    // 0x1019cc: 0x0  nop
    ctx->pc = 0x1019ccu;
    // NOP
label_1019d0:
    // 0x1019d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1019d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1019d4:
    // 0x1019d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1019d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1019d8:
    // 0x1019d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1019d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1019dc:
    // 0x1019dc: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1019dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1019e0:
    // 0x1019e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1019e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1019e4:
    // 0x1019e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1019e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1019e8:
    // 0x1019e8: 0xc04a576  jal         func_1295D8
label_1019ec:
    if (ctx->pc == 0x1019ECu) {
        ctx->pc = 0x1019ECu;
            // 0x1019ec: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1019F0u;
        goto label_1019f0;
    }
    ctx->pc = 0x1019E8u;
    SET_GPR_U32(ctx, 31, 0x1019F0u);
    ctx->pc = 0x1019ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1019E8u;
            // 0x1019ec: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1019F0u; }
        if (ctx->pc != 0x1019F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1019F0u; }
        if (ctx->pc != 0x1019F0u) { return; }
    }
    ctx->pc = 0x1019F0u;
label_1019f0:
    // 0x1019f0: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1019f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_1019f4:
    // 0x1019f4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1019f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1019f8:
    // 0x1019f8: 0x24631a40  addiu       $v1, $v1, 0x1A40
    ctx->pc = 0x1019f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6720));
label_1019fc:
    // 0x1019fc: 0x244203f0  addiu       $v0, $v0, 0x3F0
    ctx->pc = 0x1019fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
label_101a00:
    // 0x101a00: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x101a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_101a04:
    // 0x101a04: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x101a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_101a08:
    // 0x101a08: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x101a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_101a0c:
    // 0x101a0c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x101a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_101a10:
    // 0x101a10: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x101a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_101a14:
    // 0x101a14: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x101a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
label_101a18:
    // 0x101a18: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x101a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_101a1c:
    // 0x101a1c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x101a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_101a20:
    // 0x101a20: 0xc043058  jal         func_10C160
label_101a24:
    if (ctx->pc == 0x101A24u) {
        ctx->pc = 0x101A24u;
            // 0x101a24: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->pc = 0x101A28u;
        goto label_101a28;
    }
    ctx->pc = 0x101A20u;
    SET_GPR_U32(ctx, 31, 0x101A28u);
    ctx->pc = 0x101A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101A20u;
            // 0x101a24: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C160u;
    if (runtime->hasFunction(0x10C160u)) {
        auto targetFn = runtime->lookupFunction(0x10C160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101A28u; }
        if (ctx->pc != 0x101A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C160_0x10c160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101A28u; }
        if (ctx->pc != 0x101A28u) { return; }
    }
    ctx->pc = 0x101A28u;
label_101a28:
    // 0x101a28: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x101a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_101a2c:
    // 0x101a2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x101a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_101a30:
    // 0x101a30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_101a34:
    // 0x101a34: 0x3e00008  jr          $ra
label_101a38:
    if (ctx->pc == 0x101A38u) {
        ctx->pc = 0x101A38u;
            // 0x101a38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x101A3Cu;
        goto label_101a3c;
    }
    ctx->pc = 0x101A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101A34u;
            // 0x101a38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101A3Cu;
label_101a3c:
    // 0x101a3c: 0x0  nop
    ctx->pc = 0x101a3cu;
    // NOP
label_101a40:
    // 0x101a40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x101a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_101a44:
    // 0x101a44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x101a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_101a48:
    // 0x101a48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x101a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_101a4c:
    // 0x101a4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x101a4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_101a50:
    // 0x101a50: 0xafb00028  sw          $s0, 0x28($sp)
    ctx->pc = 0x101a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 16));
label_101a54:
    // 0x101a54: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x101a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_101a58:
    // 0x101a58: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x101a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_101a5c:
    // 0x101a5c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x101a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_101a60:
    // 0x101a60: 0x40f809  jalr        $v0
label_101a64:
    if (ctx->pc == 0x101A64u) {
        ctx->pc = 0x101A64u;
            // 0x101a64: 0x27a40028  addiu       $a0, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->pc = 0x101A68u;
        goto label_101a68;
    }
    ctx->pc = 0x101A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x101A68u);
        ctx->pc = 0x101A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101A60u;
            // 0x101a64: 0x27a40028  addiu       $a0, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x101A68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x101A68u; }
            if (ctx->pc != 0x101A68u) { return; }
        }
        }
    }
    ctx->pc = 0x101A68u;
label_101a68:
    // 0x101a68: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x101a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_101a6c:
    // 0x101a6c: 0xa2000024  sb          $zero, 0x24($s0)
    ctx->pc = 0x101a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 0));
label_101a70:
    // 0x101a70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x101a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_101a74:
    // 0x101a74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101a74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_101a78:
    // 0x101a78: 0x3e00008  jr          $ra
label_101a7c:
    if (ctx->pc == 0x101A7Cu) {
        ctx->pc = 0x101A7Cu;
            // 0x101a7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x101A80u;
        goto label_101a80;
    }
    ctx->pc = 0x101A78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101A78u;
            // 0x101a7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101A80u;
label_101a80:
    // 0x101a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x101a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_101a84:
    // 0x101a84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x101a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_101a88:
    // 0x101a88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x101a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_101a8c:
    // 0x101a8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x101a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_101a90:
    // 0x101a90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x101a90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_101a94:
    // 0x101a94: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x101a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_101a98:
    // 0x101a98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x101a98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_101a9c:
    // 0x101a9c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x101a9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_101aa0:
    // 0x101aa0: 0x320f809  jalr        $t9
label_101aa4:
    if (ctx->pc == 0x101AA4u) {
        ctx->pc = 0x101AA8u;
        goto label_101aa8;
    }
    ctx->pc = 0x101AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x101AA8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x101AA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x101AA8u; }
            if (ctx->pc != 0x101AA8u) { return; }
        }
        }
    }
    ctx->pc = 0x101AA8u;
label_101aa8:
    // 0x101aa8: 0x92220024  lbu         $v0, 0x24($s1)
    ctx->pc = 0x101aa8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
label_101aac:
    // 0x101aac: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_101ab0:
    if (ctx->pc == 0x101AB0u) {
        ctx->pc = 0x101AB0u;
            // 0x101ab0: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x101AB4u;
        goto label_101ab4;
    }
    ctx->pc = 0x101AACu;
    {
        const bool branch_taken_0x101aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101AACu;
            // 0x101ab0: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x101aac) {
            ctx->pc = 0x101AE0u;
            goto label_101ae0;
        }
    }
    ctx->pc = 0x101AB4u;
label_101ab4:
    // 0x101ab4: 0xc04306c  jal         func_10C1B0
label_101ab8:
    if (ctx->pc == 0x101AB8u) {
        ctx->pc = 0x101AB8u;
            // 0x101ab8: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->pc = 0x101ABCu;
        goto label_101abc;
    }
    ctx->pc = 0x101AB4u;
    SET_GPR_U32(ctx, 31, 0x101ABCu);
    ctx->pc = 0x101AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101AB4u;
            // 0x101ab8: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1B0u;
    if (runtime->hasFunction(0x10C1B0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101ABCu; }
        if (ctx->pc != 0x101ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C1B0_0x10c1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101ABCu; }
        if (ctx->pc != 0x101ABCu) { return; }
    }
    ctx->pc = 0x101ABCu;
label_101abc:
    // 0x101abc: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x101abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_101ac0:
    // 0x101ac0: 0xc043528  jal         func_10D4A0
label_101ac4:
    if (ctx->pc == 0x101AC4u) {
        ctx->pc = 0x101AC4u;
            // 0x101ac4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x101AC8u;
        goto label_101ac8;
    }
    ctx->pc = 0x101AC0u;
    SET_GPR_U32(ctx, 31, 0x101AC8u);
    ctx->pc = 0x101AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101AC0u;
            // 0x101ac4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D4A0u;
    if (runtime->hasFunction(0x10D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x10D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101AC8u; }
        if (ctx->pc != 0x101AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D4A0_0x10d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101AC8u; }
        if (ctx->pc != 0x101AC8u) { return; }
    }
    ctx->pc = 0x101AC8u;
label_101ac8:
    // 0x101ac8: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_101acc:
    if (ctx->pc == 0x101ACCu) {
        ctx->pc = 0x101ACCu;
            // 0x101acc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x101AD0u;
        goto label_101ad0;
    }
    ctx->pc = 0x101AC8u;
    {
        const bool branch_taken_0x101ac8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x101ac8) {
            ctx->pc = 0x101ACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x101AC8u;
            // 0x101acc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x101AD8u;
            goto label_101ad8;
        }
    }
    ctx->pc = 0x101AD0u;
label_101ad0:
    // 0x101ad0: 0x10000004  b           . + 4 + (0x4 << 2)
label_101ad4:
    if (ctx->pc == 0x101AD4u) {
        ctx->pc = 0x101AD4u;
            // 0x101ad4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x101AD8u;
        goto label_101ad8;
    }
    ctx->pc = 0x101AD0u;
    {
        const bool branch_taken_0x101ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101AD0u;
            // 0x101ad4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ad0) {
            ctx->pc = 0x101AE4u;
            goto label_101ae4;
        }
    }
    ctx->pc = 0x101AD8u;
label_101ad8:
    // 0x101ad8: 0x10000002  b           . + 4 + (0x2 << 2)
label_101adc:
    if (ctx->pc == 0x101ADCu) {
        ctx->pc = 0x101ADCu;
            // 0x101adc: 0xa2220024  sb          $v0, 0x24($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 36), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x101AE0u;
        goto label_101ae0;
    }
    ctx->pc = 0x101AD8u;
    {
        const bool branch_taken_0x101ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101AD8u;
            // 0x101adc: 0xa2220024  sb          $v0, 0x24($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 36), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ad8) {
            ctx->pc = 0x101AE4u;
            goto label_101ae4;
        }
    }
    ctx->pc = 0x101AE0u;
label_101ae0:
    // 0x101ae0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x101ae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101ae4:
    // 0x101ae4: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x101ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_101ae8:
    // 0x101ae8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x101ae8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_101aec:
    // 0x101aec: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x101aecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_101af0:
    // 0x101af0: 0x320f809  jalr        $t9
label_101af4:
    if (ctx->pc == 0x101AF4u) {
        ctx->pc = 0x101AF8u;
        goto label_101af8;
    }
    ctx->pc = 0x101AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x101AF8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x101AF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x101AF8u; }
            if (ctx->pc != 0x101AF8u) { return; }
        }
        }
    }
    ctx->pc = 0x101AF8u;
label_101af8:
    // 0x101af8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x101af8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_101afc:
    // 0x101afc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x101afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_101b00:
    // 0x101b00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x101b00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_101b04:
    // 0x101b04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_101b08:
    // 0x101b08: 0x3e00008  jr          $ra
label_101b0c:
    if (ctx->pc == 0x101B0Cu) {
        ctx->pc = 0x101B0Cu;
            // 0x101b0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x101B10u;
        goto label_101b10;
    }
    ctx->pc = 0x101B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101B08u;
            // 0x101b0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101B10u;
label_101b10:
    // 0x101b10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x101b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_101b14:
    // 0x101b14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x101b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_101b18:
    // 0x101b18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x101b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_101b1c:
    // 0x101b1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x101b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_101b20:
    // 0x101b20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x101b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_101b24:
    // 0x101b24: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x101b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_101b28:
    // 0x101b28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x101b28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_101b2c:
    // 0x101b2c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x101b2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_101b30:
    // 0x101b30: 0x320f809  jalr        $t9
label_101b34:
    if (ctx->pc == 0x101B34u) {
        ctx->pc = 0x101B34u;
            // 0x101b34: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x101B38u;
        goto label_101b38;
    }
    ctx->pc = 0x101B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x101B38u);
        ctx->pc = 0x101B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101B30u;
            // 0x101b34: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x101B38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x101B38u; }
            if (ctx->pc != 0x101B38u) { return; }
        }
        }
    }
    ctx->pc = 0x101B38u;
label_101b38:
    // 0x101b38: 0x92220024  lbu         $v0, 0x24($s1)
    ctx->pc = 0x101b38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
label_101b3c:
    // 0x101b3c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_101b40:
    if (ctx->pc == 0x101B40u) {
        ctx->pc = 0x101B44u;
        goto label_101b44;
    }
    ctx->pc = 0x101B3Cu;
    {
        const bool branch_taken_0x101b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101b3c) {
            ctx->pc = 0x101B58u;
            goto label_101b58;
        }
    }
    ctx->pc = 0x101B44u;
label_101b44:
    // 0x101b44: 0xc0434f6  jal         func_10D3D8
label_101b48:
    if (ctx->pc == 0x101B48u) {
        ctx->pc = 0x101B48u;
            // 0x101b48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x101B4Cu;
        goto label_101b4c;
    }
    ctx->pc = 0x101B44u;
    SET_GPR_U32(ctx, 31, 0x101B4Cu);
    ctx->pc = 0x101B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101B44u;
            // 0x101b48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D3D8u;
    if (runtime->hasFunction(0x10D3D8u)) {
        auto targetFn = runtime->lookupFunction(0x10D3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101B4Cu; }
        if (ctx->pc != 0x101B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D3D8_0x10d3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101B4Cu; }
        if (ctx->pc != 0x101B4Cu) { return; }
    }
    ctx->pc = 0x101B4Cu;
label_101b4c:
    // 0x101b4c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
label_101b50:
    if (ctx->pc == 0x101B50u) {
        ctx->pc = 0x101B50u;
            // 0x101b50: 0x92220024  lbu         $v0, 0x24($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->pc = 0x101B54u;
        goto label_101b54;
    }
    ctx->pc = 0x101B4Cu;
    {
        const bool branch_taken_0x101b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101B4Cu;
            // 0x101b50: 0x92220024  lbu         $v0, 0x24($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101b4c) {
            ctx->pc = 0x101B3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_101b3c;
        }
    }
    ctx->pc = 0x101B54u;
label_101b54:
    // 0x101b54: 0x0  nop
    ctx->pc = 0x101b54u;
    // NOP
label_101b58:
    // 0x101b58: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x101b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_101b5c:
    // 0x101b5c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x101b5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_101b60:
    // 0x101b60: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x101b60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_101b64:
    // 0x101b64: 0x320f809  jalr        $t9
label_101b68:
    if (ctx->pc == 0x101B68u) {
        ctx->pc = 0x101B6Cu;
        goto label_101b6c;
    }
    ctx->pc = 0x101B64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x101B6Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x101B6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x101B6Cu; }
            if (ctx->pc != 0x101B6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x101B6Cu;
label_101b6c:
    // 0x101b6c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x101b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_101b70:
    // 0x101b70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x101b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_101b74:
    // 0x101b74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_101b78:
    // 0x101b78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x101b78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_101b7c:
    // 0x101b7c: 0x3e00008  jr          $ra
label_101b80:
    if (ctx->pc == 0x101B80u) {
        ctx->pc = 0x101B80u;
            // 0x101b80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x101B84u;
        goto label_101b84;
    }
    ctx->pc = 0x101B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101B7Cu;
            // 0x101b80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101B84u;
label_101b84:
    // 0x101b84: 0x0  nop
    ctx->pc = 0x101b84u;
    // NOP
label_101b88:
    // 0x101b88: 0x0  nop
    ctx->pc = 0x101b88u;
    // NOP
label_101b8c:
    // 0x101b8c: 0x0  nop
    ctx->pc = 0x101b8cu;
    // NOP
label_101b90:
    // 0x101b90: 0x80430a4  j           func_10C290
label_101b94:
    if (ctx->pc == 0x101B94u) {
        ctx->pc = 0x101B94u;
            // 0x101b94: 0x8c840028  lw          $a0, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->pc = 0x101B98u;
        goto label_101b98;
    }
    ctx->pc = 0x101B90u;
    ctx->pc = 0x101B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101B90u;
            // 0x101b94: 0x8c840028  lw          $a0, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C290u;
    if (runtime->hasFunction(0x10C290u)) {
        auto targetFn = runtime->lookupFunction(0x10C290u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010C290_0x10c290(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x101B98u;
label_101b98:
    // 0x101b98: 0x0  nop
    ctx->pc = 0x101b98u;
    // NOP
label_101b9c:
    // 0x101b9c: 0x0  nop
    ctx->pc = 0x101b9cu;
    // NOP
label_101ba0:
    // 0x101ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x101ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_101ba4:
    // 0x101ba4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x101ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_101ba8:
    // 0x101ba8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x101ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_101bac:
    // 0x101bac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x101bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_101bb0:
    // 0x101bb0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_101bb4:
    if (ctx->pc == 0x101BB4u) {
        ctx->pc = 0x101BB4u;
            // 0x101bb4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x101BB8u;
        goto label_101bb8;
    }
    ctx->pc = 0x101BB0u;
    {
        const bool branch_taken_0x101bb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x101bb0) {
            ctx->pc = 0x101BB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x101BB0u;
            // 0x101bb4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x101BE4u;
            goto label_101be4;
        }
    }
    ctx->pc = 0x101BB8u;
label_101bb8:
    // 0x101bb8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x101bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_101bbc:
    // 0x101bbc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x101bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
label_101bc0:
    // 0x101bc0: 0x2442cab8  addiu       $v0, $v0, -0x3548
    ctx->pc = 0x101bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953656));
label_101bc4:
    // 0x101bc4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x101bc4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_101bc8:
    // 0x101bc8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x101bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_101bcc:
    // 0x101bcc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x101bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_101bd0:
    // 0x101bd0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_101bd4:
    if (ctx->pc == 0x101BD4u) {
        ctx->pc = 0x101BD4u;
            // 0x101bd4: 0xac408a00  sw          $zero, -0x7600($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294937088), GPR_U32(ctx, 0));
        ctx->pc = 0x101BD8u;
        goto label_101bd8;
    }
    ctx->pc = 0x101BD0u;
    {
        const bool branch_taken_0x101bd0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x101BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101BD0u;
            // 0x101bd4: 0xac408a00  sw          $zero, -0x7600($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294937088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101bd0) {
            ctx->pc = 0x101BE0u;
            goto label_101be0;
        }
    }
    ctx->pc = 0x101BD8u;
label_101bd8:
    // 0x101bd8: 0xc0400a8  jal         func_1002A0
label_101bdc:
    if (ctx->pc == 0x101BDCu) {
        ctx->pc = 0x101BE0u;
        goto label_101be0;
    }
    ctx->pc = 0x101BD8u;
    SET_GPR_U32(ctx, 31, 0x101BE0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101BE0u; }
        if (ctx->pc != 0x101BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101BE0u; }
        if (ctx->pc != 0x101BE0u) { return; }
    }
    ctx->pc = 0x101BE0u;
label_101be0:
    // 0x101be0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x101be0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_101be4:
    // 0x101be4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x101be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_101be8:
    // 0x101be8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_101bec:
    // 0x101bec: 0x3e00008  jr          $ra
label_101bf0:
    if (ctx->pc == 0x101BF0u) {
        ctx->pc = 0x101BF0u;
            // 0x101bf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x101BF4u;
        goto label_101bf4;
    }
    ctx->pc = 0x101BECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101BECu;
            // 0x101bf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101BF4u;
label_101bf4:
    // 0x101bf4: 0x0  nop
    ctx->pc = 0x101bf4u;
    // NOP
label_101bf8:
    // 0x101bf8: 0x0  nop
    ctx->pc = 0x101bf8u;
    // NOP
label_101bfc:
    // 0x101bfc: 0x0  nop
    ctx->pc = 0x101bfcu;
    // NOP
label_101c00:
    // 0x101c00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x101c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_101c04:
    // 0x101c04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x101c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_101c08:
    // 0x101c08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x101c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_101c0c:
    // 0x101c0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x101c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_101c10:
    // 0x101c10: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_101c14:
    if (ctx->pc == 0x101C14u) {
        ctx->pc = 0x101C14u;
            // 0x101c14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x101C18u;
        goto label_101c18;
    }
    ctx->pc = 0x101C10u;
    {
        const bool branch_taken_0x101c10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x101c10) {
            ctx->pc = 0x101C14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x101C10u;
            // 0x101c14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x101C44u;
            goto label_101c44;
        }
    }
    ctx->pc = 0x101C18u;
label_101c18:
    // 0x101c18: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x101c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_101c1c:
    // 0x101c1c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x101c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
label_101c20:
    // 0x101c20: 0x2442cad8  addiu       $v0, $v0, -0x3528
    ctx->pc = 0x101c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953688));
label_101c24:
    // 0x101c24: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x101c24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_101c28:
    // 0x101c28: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x101c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_101c2c:
    // 0x101c2c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x101c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_101c30:
    // 0x101c30: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_101c34:
    if (ctx->pc == 0x101C34u) {
        ctx->pc = 0x101C34u;
            // 0x101c34: 0xac408a08  sw          $zero, -0x75F8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294937096), GPR_U32(ctx, 0));
        ctx->pc = 0x101C38u;
        goto label_101c38;
    }
    ctx->pc = 0x101C30u;
    {
        const bool branch_taken_0x101c30 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x101C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101C30u;
            // 0x101c34: 0xac408a08  sw          $zero, -0x75F8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294937096), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101c30) {
            ctx->pc = 0x101C40u;
            goto label_101c40;
        }
    }
    ctx->pc = 0x101C38u;
label_101c38:
    // 0x101c38: 0xc0400a8  jal         func_1002A0
label_101c3c:
    if (ctx->pc == 0x101C3Cu) {
        ctx->pc = 0x101C40u;
        goto label_101c40;
    }
    ctx->pc = 0x101C38u;
    SET_GPR_U32(ctx, 31, 0x101C40u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101C40u; }
        if (ctx->pc != 0x101C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101C40u; }
        if (ctx->pc != 0x101C40u) { return; }
    }
    ctx->pc = 0x101C40u;
label_101c40:
    // 0x101c40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x101c40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_101c44:
    // 0x101c44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x101c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_101c48:
    // 0x101c48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101c48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_101c4c:
    // 0x101c4c: 0x3e00008  jr          $ra
label_101c50:
    if (ctx->pc == 0x101C50u) {
        ctx->pc = 0x101C50u;
            // 0x101c50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x101C54u;
        goto label_101c54;
    }
    ctx->pc = 0x101C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101C4Cu;
            // 0x101c50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101C54u;
label_101c54:
    // 0x101c54: 0x0  nop
    ctx->pc = 0x101c54u;
    // NOP
label_101c58:
    // 0x101c58: 0x0  nop
    ctx->pc = 0x101c58u;
    // NOP
label_101c5c:
    // 0x101c5c: 0x0  nop
    ctx->pc = 0x101c5cu;
    // NOP
label_101c60:
    // 0x101c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x101c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_101c64:
    // 0x101c64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x101c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_101c68:
    // 0x101c68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x101c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_101c6c:
    // 0x101c6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x101c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_101c70:
    // 0x101c70: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_101c74:
    if (ctx->pc == 0x101C74u) {
        ctx->pc = 0x101C74u;
            // 0x101c74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x101C78u;
        goto label_101c78;
    }
    ctx->pc = 0x101C70u;
    {
        const bool branch_taken_0x101c70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x101c70) {
            ctx->pc = 0x101C74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x101C70u;
            // 0x101c74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x101C9Cu;
            goto label_101c9c;
        }
    }
    ctx->pc = 0x101C78u;
label_101c78:
    // 0x101c78: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x101c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_101c7c:
    // 0x101c7c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x101c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_101c80:
    // 0x101c80: 0x2463caf0  addiu       $v1, $v1, -0x3510
    ctx->pc = 0x101c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953712));
label_101c84:
    // 0x101c84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x101c84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_101c88:
    // 0x101c88: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_101c8c:
    if (ctx->pc == 0x101C8Cu) {
        ctx->pc = 0x101C8Cu;
            // 0x101c8c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x101C90u;
        goto label_101c90;
    }
    ctx->pc = 0x101C88u;
    {
        const bool branch_taken_0x101c88 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x101C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101C88u;
            // 0x101c8c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101c88) {
            ctx->pc = 0x101C98u;
            goto label_101c98;
        }
    }
    ctx->pc = 0x101C90u;
label_101c90:
    // 0x101c90: 0xc0400a8  jal         func_1002A0
label_101c94:
    if (ctx->pc == 0x101C94u) {
        ctx->pc = 0x101C98u;
        goto label_101c98;
    }
    ctx->pc = 0x101C90u;
    SET_GPR_U32(ctx, 31, 0x101C98u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101C98u; }
        if (ctx->pc != 0x101C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101C98u; }
        if (ctx->pc != 0x101C98u) { return; }
    }
    ctx->pc = 0x101C98u;
label_101c98:
    // 0x101c98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x101c98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_101c9c:
    // 0x101c9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x101c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_101ca0:
    // 0x101ca0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_101ca4:
    // 0x101ca4: 0x3e00008  jr          $ra
label_101ca8:
    if (ctx->pc == 0x101CA8u) {
        ctx->pc = 0x101CA8u;
            // 0x101ca8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x101CACu;
        goto label_101cac;
    }
    ctx->pc = 0x101CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101CA4u;
            // 0x101ca8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101CACu;
label_101cac:
    // 0x101cac: 0x0  nop
    ctx->pc = 0x101cacu;
    // NOP
label_101cb0:
    // 0x101cb0: 0x3e00008  jr          $ra
label_101cb4:
    if (ctx->pc == 0x101CB4u) {
        ctx->pc = 0x101CB4u;
            // 0x101cb4: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->pc = 0x101CB8u;
        goto label_101cb8;
    }
    ctx->pc = 0x101CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101CB0u;
            // 0x101cb4: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101CB8u;
label_101cb8:
    // 0x101cb8: 0x0  nop
    ctx->pc = 0x101cb8u;
    // NOP
label_101cbc:
    // 0x101cbc: 0x0  nop
    ctx->pc = 0x101cbcu;
    // NOP
label_101cc0:
    // 0x101cc0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x101cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_101cc4:
    // 0x101cc4: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x101cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_101cc8:
    // 0x101cc8: 0x3e00008  jr          $ra
label_101ccc:
    if (ctx->pc == 0x101CCCu) {
        ctx->pc = 0x101CCCu;
            // 0x101ccc: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x101CD0u;
        goto label_101cd0;
    }
    ctx->pc = 0x101CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101CC8u;
            // 0x101ccc: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101CD0u;
label_101cd0:
    // 0x101cd0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x101cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_101cd4:
    // 0x101cd4: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x101cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_101cd8:
    // 0x101cd8: 0x3e00008  jr          $ra
label_101cdc:
    if (ctx->pc == 0x101CDCu) {
        ctx->pc = 0x101CDCu;
            // 0x101cdc: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x101CE0u;
        goto label_101ce0;
    }
    ctx->pc = 0x101CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101CD8u;
            // 0x101cdc: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101CE0u;
label_101ce0:
    // 0x101ce0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x101ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_101ce4:
    // 0x101ce4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x101ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_101ce8:
    // 0x101ce8: 0x3e00008  jr          $ra
label_101cec:
    if (ctx->pc == 0x101CECu) {
        ctx->pc = 0x101CECu;
            // 0x101cec: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x101CF0u;
        goto label_101cf0;
    }
    ctx->pc = 0x101CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101CE8u;
            // 0x101cec: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101CF0u;
label_101cf0:
    // 0x101cf0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x101cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_101cf4:
    // 0x101cf4: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x101cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_101cf8:
    // 0x101cf8: 0x3e00008  jr          $ra
label_101cfc:
    if (ctx->pc == 0x101CFCu) {
        ctx->pc = 0x101CFCu;
            // 0x101cfc: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x101D00u;
        goto label_101d00;
    }
    ctx->pc = 0x101CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101CF8u;
            // 0x101cfc: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101D00u;
label_101d00:
    // 0x101d00: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x101d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_101d04:
    // 0x101d04: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x101d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_101d08:
    // 0x101d08: 0x3e00008  jr          $ra
label_101d0c:
    if (ctx->pc == 0x101D0Cu) {
        ctx->pc = 0x101D0Cu;
            // 0x101d0c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x101D10u;
        goto label_101d10;
    }
    ctx->pc = 0x101D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101D08u;
            // 0x101d0c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101D10u;
label_101d10:
    // 0x101d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x101d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_101d14:
    // 0x101d14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x101d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_101d18:
    // 0x101d18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x101d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_101d1c:
    // 0x101d1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x101d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_101d20:
    // 0x101d20: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_101d24:
    if (ctx->pc == 0x101D24u) {
        ctx->pc = 0x101D24u;
            // 0x101d24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x101D28u;
        goto label_101d28;
    }
    ctx->pc = 0x101D20u;
    {
        const bool branch_taken_0x101d20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x101d20) {
            ctx->pc = 0x101D24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x101D20u;
            // 0x101d24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x101D54u;
            goto label_101d54;
        }
    }
    ctx->pc = 0x101D28u;
label_101d28:
    // 0x101d28: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x101d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_101d2c:
    // 0x101d2c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x101d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
label_101d30:
    // 0x101d30: 0x2442cb20  addiu       $v0, $v0, -0x34E0
    ctx->pc = 0x101d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953760));
label_101d34:
    // 0x101d34: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x101d34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_101d38:
    // 0x101d38: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x101d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_101d3c:
    // 0x101d3c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x101d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_101d40:
    // 0x101d40: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_101d44:
    if (ctx->pc == 0x101D44u) {
        ctx->pc = 0x101D44u;
            // 0x101d44: 0xac4089f0  sw          $zero, -0x7610($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294937072), GPR_U32(ctx, 0));
        ctx->pc = 0x101D48u;
        goto label_101d48;
    }
    ctx->pc = 0x101D40u;
    {
        const bool branch_taken_0x101d40 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x101D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101D40u;
            // 0x101d44: 0xac4089f0  sw          $zero, -0x7610($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294937072), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101d40) {
            ctx->pc = 0x101D50u;
            goto label_101d50;
        }
    }
    ctx->pc = 0x101D48u;
label_101d48:
    // 0x101d48: 0xc0400a8  jal         func_1002A0
label_101d4c:
    if (ctx->pc == 0x101D4Cu) {
        ctx->pc = 0x101D50u;
        goto label_101d50;
    }
    ctx->pc = 0x101D48u;
    SET_GPR_U32(ctx, 31, 0x101D50u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D50u; }
        if (ctx->pc != 0x101D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D50u; }
        if (ctx->pc != 0x101D50u) { return; }
    }
    ctx->pc = 0x101D50u;
label_101d50:
    // 0x101d50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x101d50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_101d54:
    // 0x101d54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x101d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_101d58:
    // 0x101d58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101d58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_101d5c:
    // 0x101d5c: 0x3e00008  jr          $ra
label_101d60:
    if (ctx->pc == 0x101D60u) {
        ctx->pc = 0x101D60u;
            // 0x101d60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x101D64u;
        goto label_101d64;
    }
    ctx->pc = 0x101D5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101D5Cu;
            // 0x101d60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101D64u;
label_101d64:
    // 0x101d64: 0x0  nop
    ctx->pc = 0x101d64u;
    // NOP
label_101d68:
    // 0x101d68: 0x0  nop
    ctx->pc = 0x101d68u;
    // NOP
label_101d6c:
    // 0x101d6c: 0x0  nop
    ctx->pc = 0x101d6cu;
    // NOP
label_101d70:
    // 0x101d70: 0x3e00008  jr          $ra
label_101d74:
    if (ctx->pc == 0x101D74u) {
        ctx->pc = 0x101D74u;
            // 0x101d74: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x101D78u;
        goto label_101d78;
    }
    ctx->pc = 0x101D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101D70u;
            // 0x101d74: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101D78u;
label_101d78:
    // 0x101d78: 0x0  nop
    ctx->pc = 0x101d78u;
    // NOP
label_101d7c:
    // 0x101d7c: 0x0  nop
    ctx->pc = 0x101d7cu;
    // NOP
label_101d80:
    // 0x101d80: 0x3e00008  jr          $ra
label_101d84:
    if (ctx->pc == 0x101D84u) {
        ctx->pc = 0x101D84u;
            // 0x101d84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x101D88u;
        goto label_101d88;
    }
    ctx->pc = 0x101D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101D80u;
            // 0x101d84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101D88u;
label_101d88:
    // 0x101d88: 0x0  nop
    ctx->pc = 0x101d88u;
    // NOP
label_101d8c:
    // 0x101d8c: 0x0  nop
    ctx->pc = 0x101d8cu;
    // NOP
label_101d90:
    // 0x101d90: 0x3e00008  jr          $ra
label_101d94:
    if (ctx->pc == 0x101D94u) {
        ctx->pc = 0x101D94u;
            // 0x101d94: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x101D98u;
        goto label_101d98;
    }
    ctx->pc = 0x101D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101D90u;
            // 0x101d94: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101D98u;
label_101d98:
    // 0x101d98: 0x0  nop
    ctx->pc = 0x101d98u;
    // NOP
label_101d9c:
    // 0x101d9c: 0x0  nop
    ctx->pc = 0x101d9cu;
    // NOP
label_101da0:
    // 0x101da0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x101da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_101da4:
    // 0x101da4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x101da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_101da8:
    // 0x101da8: 0x3e00008  jr          $ra
label_101dac:
    if (ctx->pc == 0x101DACu) {
        ctx->pc = 0x101DB0u;
        goto label_101db0;
    }
    ctx->pc = 0x101DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101DB0u;
label_101db0:
    // 0x101db0: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x101db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_101db4:
    // 0x101db4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x101db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_101db8:
    // 0x101db8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x101db8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_101dbc:
    // 0x101dbc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x101dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_101dc0:
    // 0x101dc0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x101dc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_101dc4:
    // 0x101dc4: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x101dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_101dc8:
    // 0x101dc8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x101dc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_101dcc:
    // 0x101dcc: 0x0  nop
    ctx->pc = 0x101dccu;
    // NOP
label_101dd0:
    // 0x101dd0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x101dd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_101dd4:
    // 0x101dd4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x101dd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_101dd8:
    // 0x101dd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x101dd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_101ddc:
    // 0x101ddc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x101ddcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_101de0:
    // 0x101de0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x101de0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_101de4:
    // 0x101de4: 0x0  nop
    ctx->pc = 0x101de4u;
    // NOP
label_101de8:
    // 0x101de8: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x101de8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_101dec:
    // 0x101dec: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x101decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_101df0:
    // 0x101df0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x101df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_101df4:
    // 0x101df4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x101df4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_101df8:
    // 0x101df8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x101df8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_101dfc:
    // 0x101dfc: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x101dfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_101e00:
    // 0x101e00: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x101e00u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_101e04:
    // 0x101e04: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x101e04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_101e08:
    // 0x101e08: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x101e08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_101e0c:
    // 0x101e0c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x101e0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_101e10:
    // 0x101e10: 0x3e00008  jr          $ra
label_101e14:
    if (ctx->pc == 0x101E14u) {
        ctx->pc = 0x101E14u;
            // 0x101e14: 0xa4a30002  sh          $v1, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x101E18u;
        goto label_101e18;
    }
    ctx->pc = 0x101E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101E10u;
            // 0x101e14: 0xa4a30002  sh          $v1, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101E18u;
label_101e18:
    // 0x101e18: 0x0  nop
    ctx->pc = 0x101e18u;
    // NOP
label_101e1c:
    // 0x101e1c: 0x0  nop
    ctx->pc = 0x101e1cu;
    // NOP
label_101e20:
    // 0x101e20: 0x3e00008  jr          $ra
label_101e24:
    if (ctx->pc == 0x101E24u) {
        ctx->pc = 0x101E28u;
        goto label_101e28;
    }
    ctx->pc = 0x101E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101E28u;
label_101e28:
    // 0x101e28: 0x0  nop
    ctx->pc = 0x101e28u;
    // NOP
label_101e2c:
    // 0x101e2c: 0x0  nop
    ctx->pc = 0x101e2cu;
    // NOP
label_101e30:
    // 0x101e30: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x101e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_101e34:
    // 0x101e34: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x101e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_101e38:
    // 0x101e38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x101e38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_101e3c:
    // 0x101e3c: 0x3c023bde  lui         $v0, 0x3BDE
    ctx->pc = 0x101e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15326 << 16));
label_101e40:
    // 0x101e40: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x101e40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_101e44:
    // 0x101e44: 0x344238e4  ori         $v0, $v0, 0x38E4
    ctx->pc = 0x101e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14564);
label_101e48:
    // 0x101e48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x101e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_101e4c:
    // 0x101e4c: 0x0  nop
    ctx->pc = 0x101e4cu;
    // NOP
label_101e50:
    // 0x101e50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x101e50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_101e54:
    // 0x101e54: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x101e54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_101e58:
    // 0x101e58: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x101e58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_101e5c:
    // 0x101e5c: 0x3e00008  jr          $ra
label_101e60:
    if (ctx->pc == 0x101E60u) {
        ctx->pc = 0x101E64u;
        goto label_101e64;
    }
    ctx->pc = 0x101E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101E64u;
label_101e64:
    // 0x101e64: 0x0  nop
    ctx->pc = 0x101e64u;
    // NOP
label_101e68:
    // 0x101e68: 0x0  nop
    ctx->pc = 0x101e68u;
    // NOP
label_101e6c:
    // 0x101e6c: 0x0  nop
    ctx->pc = 0x101e6cu;
    // NOP
label_101e70:
    // 0x101e70: 0xa61023  subu        $v0, $a1, $a2
    ctx->pc = 0x101e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_101e74:
    // 0x101e74: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x101e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_101e78:
    // 0x101e78: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x101e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_101e7c:
    // 0x101e7c: 0x3c023bde  lui         $v0, 0x3BDE
    ctx->pc = 0x101e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15326 << 16));
label_101e80:
    // 0x101e80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x101e80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_101e84:
    // 0x101e84: 0x344238e4  ori         $v0, $v0, 0x38E4
    ctx->pc = 0x101e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14564);
label_101e88:
    // 0x101e88: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x101e88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_101e8c:
    // 0x101e8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x101e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_101e90:
    // 0x101e90: 0x0  nop
    ctx->pc = 0x101e90u;
    // NOP
label_101e94:
    // 0x101e94: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x101e94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_101e98:
    // 0x101e98: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x101e98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_101e9c:
    // 0x101e9c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x101e9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_101ea0:
    // 0x101ea0: 0x3e00008  jr          $ra
label_101ea4:
    if (ctx->pc == 0x101EA4u) {
        ctx->pc = 0x101EA8u;
        goto label_101ea8;
    }
    ctx->pc = 0x101EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101EA8u;
label_101ea8:
    // 0x101ea8: 0x0  nop
    ctx->pc = 0x101ea8u;
    // NOP
label_101eac:
    // 0x101eac: 0x0  nop
    ctx->pc = 0x101eacu;
    // NOP
label_101eb0:
    // 0x101eb0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x101eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_101eb4:
    // 0x101eb4: 0x3e00008  jr          $ra
label_101eb8:
    if (ctx->pc == 0x101EB8u) {
        ctx->pc = 0x101EB8u;
            // 0x101eb8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x101EBCu;
        goto label_101ebc;
    }
    ctx->pc = 0x101EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101EB4u;
            // 0x101eb8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101EBCu;
label_101ebc:
    // 0x101ebc: 0x0  nop
    ctx->pc = 0x101ebcu;
    // NOP
label_101ec0:
    // 0x101ec0: 0x804078c  j           func_101E30
label_101ec4:
    if (ctx->pc == 0x101EC4u) {
        ctx->pc = 0x101EC4u;
            // 0x101ec4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x101EC8u;
        goto label_101ec8;
    }
    ctx->pc = 0x101EC0u;
    ctx->pc = 0x101EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101EC0u;
            // 0x101ec4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101E30u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_101e30;
    ctx->pc = 0x101EC8u;
label_101ec8:
    // 0x101ec8: 0x0  nop
    ctx->pc = 0x101ec8u;
    // NOP
label_101ecc:
    // 0x101ecc: 0x0  nop
    ctx->pc = 0x101eccu;
    // NOP
label_101ed0:
    // 0x101ed0: 0x804079c  j           func_101E70
label_101ed4:
    if (ctx->pc == 0x101ED4u) {
        ctx->pc = 0x101ED4u;
            // 0x101ed4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x101ED8u;
        goto label_101ed8;
    }
    ctx->pc = 0x101ED0u;
    ctx->pc = 0x101ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101ED0u;
            // 0x101ed4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101E70u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_101e70;
    ctx->pc = 0x101ED8u;
label_101ed8:
    // 0x101ed8: 0x0  nop
    ctx->pc = 0x101ed8u;
    // NOP
label_101edc:
    // 0x101edc: 0x0  nop
    ctx->pc = 0x101edcu;
    // NOP
label_101ee0:
    // 0x101ee0: 0x80407ac  j           func_101EB0
label_101ee4:
    if (ctx->pc == 0x101EE4u) {
        ctx->pc = 0x101EE4u;
            // 0x101ee4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x101EE8u;
        goto label_101ee8;
    }
    ctx->pc = 0x101EE0u;
    ctx->pc = 0x101EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101EE0u;
            // 0x101ee4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101EB0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_101eb0;
    ctx->pc = 0x101EE8u;
label_101ee8:
    // 0x101ee8: 0x0  nop
    ctx->pc = 0x101ee8u;
    // NOP
label_101eec:
    // 0x101eec: 0x0  nop
    ctx->pc = 0x101eecu;
    // NOP
label_101ef0:
    // 0x101ef0: 0x80403a4  j           func_100E90
label_101ef4:
    if (ctx->pc == 0x101EF4u) {
        ctx->pc = 0x101EF4u;
            // 0x101ef4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x101EF8u;
        goto label_101ef8;
    }
    ctx->pc = 0x101EF0u;
    ctx->pc = 0x101EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101EF0u;
            // 0x101ef4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100E90u;
    {
        auto targetFn = runtime->lookupFunction(0x100E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x101EF8u;
label_101ef8:
    // 0x101ef8: 0x0  nop
    ctx->pc = 0x101ef8u;
    // NOP
label_101efc:
    // 0x101efc: 0x0  nop
    ctx->pc = 0x101efcu;
    // NOP
}
