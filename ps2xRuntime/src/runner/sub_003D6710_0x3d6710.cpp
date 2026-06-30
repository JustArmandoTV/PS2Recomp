#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D6710
// Address: 0x3d6710 - 0x3d7590
void sub_003D6710_0x3d6710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D6710_0x3d6710");
#endif

    switch (ctx->pc) {
        case 0x3d6710u: goto label_3d6710;
        case 0x3d6714u: goto label_3d6714;
        case 0x3d6718u: goto label_3d6718;
        case 0x3d671cu: goto label_3d671c;
        case 0x3d6720u: goto label_3d6720;
        case 0x3d6724u: goto label_3d6724;
        case 0x3d6728u: goto label_3d6728;
        case 0x3d672cu: goto label_3d672c;
        case 0x3d6730u: goto label_3d6730;
        case 0x3d6734u: goto label_3d6734;
        case 0x3d6738u: goto label_3d6738;
        case 0x3d673cu: goto label_3d673c;
        case 0x3d6740u: goto label_3d6740;
        case 0x3d6744u: goto label_3d6744;
        case 0x3d6748u: goto label_3d6748;
        case 0x3d674cu: goto label_3d674c;
        case 0x3d6750u: goto label_3d6750;
        case 0x3d6754u: goto label_3d6754;
        case 0x3d6758u: goto label_3d6758;
        case 0x3d675cu: goto label_3d675c;
        case 0x3d6760u: goto label_3d6760;
        case 0x3d6764u: goto label_3d6764;
        case 0x3d6768u: goto label_3d6768;
        case 0x3d676cu: goto label_3d676c;
        case 0x3d6770u: goto label_3d6770;
        case 0x3d6774u: goto label_3d6774;
        case 0x3d6778u: goto label_3d6778;
        case 0x3d677cu: goto label_3d677c;
        case 0x3d6780u: goto label_3d6780;
        case 0x3d6784u: goto label_3d6784;
        case 0x3d6788u: goto label_3d6788;
        case 0x3d678cu: goto label_3d678c;
        case 0x3d6790u: goto label_3d6790;
        case 0x3d6794u: goto label_3d6794;
        case 0x3d6798u: goto label_3d6798;
        case 0x3d679cu: goto label_3d679c;
        case 0x3d67a0u: goto label_3d67a0;
        case 0x3d67a4u: goto label_3d67a4;
        case 0x3d67a8u: goto label_3d67a8;
        case 0x3d67acu: goto label_3d67ac;
        case 0x3d67b0u: goto label_3d67b0;
        case 0x3d67b4u: goto label_3d67b4;
        case 0x3d67b8u: goto label_3d67b8;
        case 0x3d67bcu: goto label_3d67bc;
        case 0x3d67c0u: goto label_3d67c0;
        case 0x3d67c4u: goto label_3d67c4;
        case 0x3d67c8u: goto label_3d67c8;
        case 0x3d67ccu: goto label_3d67cc;
        case 0x3d67d0u: goto label_3d67d0;
        case 0x3d67d4u: goto label_3d67d4;
        case 0x3d67d8u: goto label_3d67d8;
        case 0x3d67dcu: goto label_3d67dc;
        case 0x3d67e0u: goto label_3d67e0;
        case 0x3d67e4u: goto label_3d67e4;
        case 0x3d67e8u: goto label_3d67e8;
        case 0x3d67ecu: goto label_3d67ec;
        case 0x3d67f0u: goto label_3d67f0;
        case 0x3d67f4u: goto label_3d67f4;
        case 0x3d67f8u: goto label_3d67f8;
        case 0x3d67fcu: goto label_3d67fc;
        case 0x3d6800u: goto label_3d6800;
        case 0x3d6804u: goto label_3d6804;
        case 0x3d6808u: goto label_3d6808;
        case 0x3d680cu: goto label_3d680c;
        case 0x3d6810u: goto label_3d6810;
        case 0x3d6814u: goto label_3d6814;
        case 0x3d6818u: goto label_3d6818;
        case 0x3d681cu: goto label_3d681c;
        case 0x3d6820u: goto label_3d6820;
        case 0x3d6824u: goto label_3d6824;
        case 0x3d6828u: goto label_3d6828;
        case 0x3d682cu: goto label_3d682c;
        case 0x3d6830u: goto label_3d6830;
        case 0x3d6834u: goto label_3d6834;
        case 0x3d6838u: goto label_3d6838;
        case 0x3d683cu: goto label_3d683c;
        case 0x3d6840u: goto label_3d6840;
        case 0x3d6844u: goto label_3d6844;
        case 0x3d6848u: goto label_3d6848;
        case 0x3d684cu: goto label_3d684c;
        case 0x3d6850u: goto label_3d6850;
        case 0x3d6854u: goto label_3d6854;
        case 0x3d6858u: goto label_3d6858;
        case 0x3d685cu: goto label_3d685c;
        case 0x3d6860u: goto label_3d6860;
        case 0x3d6864u: goto label_3d6864;
        case 0x3d6868u: goto label_3d6868;
        case 0x3d686cu: goto label_3d686c;
        case 0x3d6870u: goto label_3d6870;
        case 0x3d6874u: goto label_3d6874;
        case 0x3d6878u: goto label_3d6878;
        case 0x3d687cu: goto label_3d687c;
        case 0x3d6880u: goto label_3d6880;
        case 0x3d6884u: goto label_3d6884;
        case 0x3d6888u: goto label_3d6888;
        case 0x3d688cu: goto label_3d688c;
        case 0x3d6890u: goto label_3d6890;
        case 0x3d6894u: goto label_3d6894;
        case 0x3d6898u: goto label_3d6898;
        case 0x3d689cu: goto label_3d689c;
        case 0x3d68a0u: goto label_3d68a0;
        case 0x3d68a4u: goto label_3d68a4;
        case 0x3d68a8u: goto label_3d68a8;
        case 0x3d68acu: goto label_3d68ac;
        case 0x3d68b0u: goto label_3d68b0;
        case 0x3d68b4u: goto label_3d68b4;
        case 0x3d68b8u: goto label_3d68b8;
        case 0x3d68bcu: goto label_3d68bc;
        case 0x3d68c0u: goto label_3d68c0;
        case 0x3d68c4u: goto label_3d68c4;
        case 0x3d68c8u: goto label_3d68c8;
        case 0x3d68ccu: goto label_3d68cc;
        case 0x3d68d0u: goto label_3d68d0;
        case 0x3d68d4u: goto label_3d68d4;
        case 0x3d68d8u: goto label_3d68d8;
        case 0x3d68dcu: goto label_3d68dc;
        case 0x3d68e0u: goto label_3d68e0;
        case 0x3d68e4u: goto label_3d68e4;
        case 0x3d68e8u: goto label_3d68e8;
        case 0x3d68ecu: goto label_3d68ec;
        case 0x3d68f0u: goto label_3d68f0;
        case 0x3d68f4u: goto label_3d68f4;
        case 0x3d68f8u: goto label_3d68f8;
        case 0x3d68fcu: goto label_3d68fc;
        case 0x3d6900u: goto label_3d6900;
        case 0x3d6904u: goto label_3d6904;
        case 0x3d6908u: goto label_3d6908;
        case 0x3d690cu: goto label_3d690c;
        case 0x3d6910u: goto label_3d6910;
        case 0x3d6914u: goto label_3d6914;
        case 0x3d6918u: goto label_3d6918;
        case 0x3d691cu: goto label_3d691c;
        case 0x3d6920u: goto label_3d6920;
        case 0x3d6924u: goto label_3d6924;
        case 0x3d6928u: goto label_3d6928;
        case 0x3d692cu: goto label_3d692c;
        case 0x3d6930u: goto label_3d6930;
        case 0x3d6934u: goto label_3d6934;
        case 0x3d6938u: goto label_3d6938;
        case 0x3d693cu: goto label_3d693c;
        case 0x3d6940u: goto label_3d6940;
        case 0x3d6944u: goto label_3d6944;
        case 0x3d6948u: goto label_3d6948;
        case 0x3d694cu: goto label_3d694c;
        case 0x3d6950u: goto label_3d6950;
        case 0x3d6954u: goto label_3d6954;
        case 0x3d6958u: goto label_3d6958;
        case 0x3d695cu: goto label_3d695c;
        case 0x3d6960u: goto label_3d6960;
        case 0x3d6964u: goto label_3d6964;
        case 0x3d6968u: goto label_3d6968;
        case 0x3d696cu: goto label_3d696c;
        case 0x3d6970u: goto label_3d6970;
        case 0x3d6974u: goto label_3d6974;
        case 0x3d6978u: goto label_3d6978;
        case 0x3d697cu: goto label_3d697c;
        case 0x3d6980u: goto label_3d6980;
        case 0x3d6984u: goto label_3d6984;
        case 0x3d6988u: goto label_3d6988;
        case 0x3d698cu: goto label_3d698c;
        case 0x3d6990u: goto label_3d6990;
        case 0x3d6994u: goto label_3d6994;
        case 0x3d6998u: goto label_3d6998;
        case 0x3d699cu: goto label_3d699c;
        case 0x3d69a0u: goto label_3d69a0;
        case 0x3d69a4u: goto label_3d69a4;
        case 0x3d69a8u: goto label_3d69a8;
        case 0x3d69acu: goto label_3d69ac;
        case 0x3d69b0u: goto label_3d69b0;
        case 0x3d69b4u: goto label_3d69b4;
        case 0x3d69b8u: goto label_3d69b8;
        case 0x3d69bcu: goto label_3d69bc;
        case 0x3d69c0u: goto label_3d69c0;
        case 0x3d69c4u: goto label_3d69c4;
        case 0x3d69c8u: goto label_3d69c8;
        case 0x3d69ccu: goto label_3d69cc;
        case 0x3d69d0u: goto label_3d69d0;
        case 0x3d69d4u: goto label_3d69d4;
        case 0x3d69d8u: goto label_3d69d8;
        case 0x3d69dcu: goto label_3d69dc;
        case 0x3d69e0u: goto label_3d69e0;
        case 0x3d69e4u: goto label_3d69e4;
        case 0x3d69e8u: goto label_3d69e8;
        case 0x3d69ecu: goto label_3d69ec;
        case 0x3d69f0u: goto label_3d69f0;
        case 0x3d69f4u: goto label_3d69f4;
        case 0x3d69f8u: goto label_3d69f8;
        case 0x3d69fcu: goto label_3d69fc;
        case 0x3d6a00u: goto label_3d6a00;
        case 0x3d6a04u: goto label_3d6a04;
        case 0x3d6a08u: goto label_3d6a08;
        case 0x3d6a0cu: goto label_3d6a0c;
        case 0x3d6a10u: goto label_3d6a10;
        case 0x3d6a14u: goto label_3d6a14;
        case 0x3d6a18u: goto label_3d6a18;
        case 0x3d6a1cu: goto label_3d6a1c;
        case 0x3d6a20u: goto label_3d6a20;
        case 0x3d6a24u: goto label_3d6a24;
        case 0x3d6a28u: goto label_3d6a28;
        case 0x3d6a2cu: goto label_3d6a2c;
        case 0x3d6a30u: goto label_3d6a30;
        case 0x3d6a34u: goto label_3d6a34;
        case 0x3d6a38u: goto label_3d6a38;
        case 0x3d6a3cu: goto label_3d6a3c;
        case 0x3d6a40u: goto label_3d6a40;
        case 0x3d6a44u: goto label_3d6a44;
        case 0x3d6a48u: goto label_3d6a48;
        case 0x3d6a4cu: goto label_3d6a4c;
        case 0x3d6a50u: goto label_3d6a50;
        case 0x3d6a54u: goto label_3d6a54;
        case 0x3d6a58u: goto label_3d6a58;
        case 0x3d6a5cu: goto label_3d6a5c;
        case 0x3d6a60u: goto label_3d6a60;
        case 0x3d6a64u: goto label_3d6a64;
        case 0x3d6a68u: goto label_3d6a68;
        case 0x3d6a6cu: goto label_3d6a6c;
        case 0x3d6a70u: goto label_3d6a70;
        case 0x3d6a74u: goto label_3d6a74;
        case 0x3d6a78u: goto label_3d6a78;
        case 0x3d6a7cu: goto label_3d6a7c;
        case 0x3d6a80u: goto label_3d6a80;
        case 0x3d6a84u: goto label_3d6a84;
        case 0x3d6a88u: goto label_3d6a88;
        case 0x3d6a8cu: goto label_3d6a8c;
        case 0x3d6a90u: goto label_3d6a90;
        case 0x3d6a94u: goto label_3d6a94;
        case 0x3d6a98u: goto label_3d6a98;
        case 0x3d6a9cu: goto label_3d6a9c;
        case 0x3d6aa0u: goto label_3d6aa0;
        case 0x3d6aa4u: goto label_3d6aa4;
        case 0x3d6aa8u: goto label_3d6aa8;
        case 0x3d6aacu: goto label_3d6aac;
        case 0x3d6ab0u: goto label_3d6ab0;
        case 0x3d6ab4u: goto label_3d6ab4;
        case 0x3d6ab8u: goto label_3d6ab8;
        case 0x3d6abcu: goto label_3d6abc;
        case 0x3d6ac0u: goto label_3d6ac0;
        case 0x3d6ac4u: goto label_3d6ac4;
        case 0x3d6ac8u: goto label_3d6ac8;
        case 0x3d6accu: goto label_3d6acc;
        case 0x3d6ad0u: goto label_3d6ad0;
        case 0x3d6ad4u: goto label_3d6ad4;
        case 0x3d6ad8u: goto label_3d6ad8;
        case 0x3d6adcu: goto label_3d6adc;
        case 0x3d6ae0u: goto label_3d6ae0;
        case 0x3d6ae4u: goto label_3d6ae4;
        case 0x3d6ae8u: goto label_3d6ae8;
        case 0x3d6aecu: goto label_3d6aec;
        case 0x3d6af0u: goto label_3d6af0;
        case 0x3d6af4u: goto label_3d6af4;
        case 0x3d6af8u: goto label_3d6af8;
        case 0x3d6afcu: goto label_3d6afc;
        case 0x3d6b00u: goto label_3d6b00;
        case 0x3d6b04u: goto label_3d6b04;
        case 0x3d6b08u: goto label_3d6b08;
        case 0x3d6b0cu: goto label_3d6b0c;
        case 0x3d6b10u: goto label_3d6b10;
        case 0x3d6b14u: goto label_3d6b14;
        case 0x3d6b18u: goto label_3d6b18;
        case 0x3d6b1cu: goto label_3d6b1c;
        case 0x3d6b20u: goto label_3d6b20;
        case 0x3d6b24u: goto label_3d6b24;
        case 0x3d6b28u: goto label_3d6b28;
        case 0x3d6b2cu: goto label_3d6b2c;
        case 0x3d6b30u: goto label_3d6b30;
        case 0x3d6b34u: goto label_3d6b34;
        case 0x3d6b38u: goto label_3d6b38;
        case 0x3d6b3cu: goto label_3d6b3c;
        case 0x3d6b40u: goto label_3d6b40;
        case 0x3d6b44u: goto label_3d6b44;
        case 0x3d6b48u: goto label_3d6b48;
        case 0x3d6b4cu: goto label_3d6b4c;
        case 0x3d6b50u: goto label_3d6b50;
        case 0x3d6b54u: goto label_3d6b54;
        case 0x3d6b58u: goto label_3d6b58;
        case 0x3d6b5cu: goto label_3d6b5c;
        case 0x3d6b60u: goto label_3d6b60;
        case 0x3d6b64u: goto label_3d6b64;
        case 0x3d6b68u: goto label_3d6b68;
        case 0x3d6b6cu: goto label_3d6b6c;
        case 0x3d6b70u: goto label_3d6b70;
        case 0x3d6b74u: goto label_3d6b74;
        case 0x3d6b78u: goto label_3d6b78;
        case 0x3d6b7cu: goto label_3d6b7c;
        case 0x3d6b80u: goto label_3d6b80;
        case 0x3d6b84u: goto label_3d6b84;
        case 0x3d6b88u: goto label_3d6b88;
        case 0x3d6b8cu: goto label_3d6b8c;
        case 0x3d6b90u: goto label_3d6b90;
        case 0x3d6b94u: goto label_3d6b94;
        case 0x3d6b98u: goto label_3d6b98;
        case 0x3d6b9cu: goto label_3d6b9c;
        case 0x3d6ba0u: goto label_3d6ba0;
        case 0x3d6ba4u: goto label_3d6ba4;
        case 0x3d6ba8u: goto label_3d6ba8;
        case 0x3d6bacu: goto label_3d6bac;
        case 0x3d6bb0u: goto label_3d6bb0;
        case 0x3d6bb4u: goto label_3d6bb4;
        case 0x3d6bb8u: goto label_3d6bb8;
        case 0x3d6bbcu: goto label_3d6bbc;
        case 0x3d6bc0u: goto label_3d6bc0;
        case 0x3d6bc4u: goto label_3d6bc4;
        case 0x3d6bc8u: goto label_3d6bc8;
        case 0x3d6bccu: goto label_3d6bcc;
        case 0x3d6bd0u: goto label_3d6bd0;
        case 0x3d6bd4u: goto label_3d6bd4;
        case 0x3d6bd8u: goto label_3d6bd8;
        case 0x3d6bdcu: goto label_3d6bdc;
        case 0x3d6be0u: goto label_3d6be0;
        case 0x3d6be4u: goto label_3d6be4;
        case 0x3d6be8u: goto label_3d6be8;
        case 0x3d6becu: goto label_3d6bec;
        case 0x3d6bf0u: goto label_3d6bf0;
        case 0x3d6bf4u: goto label_3d6bf4;
        case 0x3d6bf8u: goto label_3d6bf8;
        case 0x3d6bfcu: goto label_3d6bfc;
        case 0x3d6c00u: goto label_3d6c00;
        case 0x3d6c04u: goto label_3d6c04;
        case 0x3d6c08u: goto label_3d6c08;
        case 0x3d6c0cu: goto label_3d6c0c;
        case 0x3d6c10u: goto label_3d6c10;
        case 0x3d6c14u: goto label_3d6c14;
        case 0x3d6c18u: goto label_3d6c18;
        case 0x3d6c1cu: goto label_3d6c1c;
        case 0x3d6c20u: goto label_3d6c20;
        case 0x3d6c24u: goto label_3d6c24;
        case 0x3d6c28u: goto label_3d6c28;
        case 0x3d6c2cu: goto label_3d6c2c;
        case 0x3d6c30u: goto label_3d6c30;
        case 0x3d6c34u: goto label_3d6c34;
        case 0x3d6c38u: goto label_3d6c38;
        case 0x3d6c3cu: goto label_3d6c3c;
        case 0x3d6c40u: goto label_3d6c40;
        case 0x3d6c44u: goto label_3d6c44;
        case 0x3d6c48u: goto label_3d6c48;
        case 0x3d6c4cu: goto label_3d6c4c;
        case 0x3d6c50u: goto label_3d6c50;
        case 0x3d6c54u: goto label_3d6c54;
        case 0x3d6c58u: goto label_3d6c58;
        case 0x3d6c5cu: goto label_3d6c5c;
        case 0x3d6c60u: goto label_3d6c60;
        case 0x3d6c64u: goto label_3d6c64;
        case 0x3d6c68u: goto label_3d6c68;
        case 0x3d6c6cu: goto label_3d6c6c;
        case 0x3d6c70u: goto label_3d6c70;
        case 0x3d6c74u: goto label_3d6c74;
        case 0x3d6c78u: goto label_3d6c78;
        case 0x3d6c7cu: goto label_3d6c7c;
        case 0x3d6c80u: goto label_3d6c80;
        case 0x3d6c84u: goto label_3d6c84;
        case 0x3d6c88u: goto label_3d6c88;
        case 0x3d6c8cu: goto label_3d6c8c;
        case 0x3d6c90u: goto label_3d6c90;
        case 0x3d6c94u: goto label_3d6c94;
        case 0x3d6c98u: goto label_3d6c98;
        case 0x3d6c9cu: goto label_3d6c9c;
        case 0x3d6ca0u: goto label_3d6ca0;
        case 0x3d6ca4u: goto label_3d6ca4;
        case 0x3d6ca8u: goto label_3d6ca8;
        case 0x3d6cacu: goto label_3d6cac;
        case 0x3d6cb0u: goto label_3d6cb0;
        case 0x3d6cb4u: goto label_3d6cb4;
        case 0x3d6cb8u: goto label_3d6cb8;
        case 0x3d6cbcu: goto label_3d6cbc;
        case 0x3d6cc0u: goto label_3d6cc0;
        case 0x3d6cc4u: goto label_3d6cc4;
        case 0x3d6cc8u: goto label_3d6cc8;
        case 0x3d6cccu: goto label_3d6ccc;
        case 0x3d6cd0u: goto label_3d6cd0;
        case 0x3d6cd4u: goto label_3d6cd4;
        case 0x3d6cd8u: goto label_3d6cd8;
        case 0x3d6cdcu: goto label_3d6cdc;
        case 0x3d6ce0u: goto label_3d6ce0;
        case 0x3d6ce4u: goto label_3d6ce4;
        case 0x3d6ce8u: goto label_3d6ce8;
        case 0x3d6cecu: goto label_3d6cec;
        case 0x3d6cf0u: goto label_3d6cf0;
        case 0x3d6cf4u: goto label_3d6cf4;
        case 0x3d6cf8u: goto label_3d6cf8;
        case 0x3d6cfcu: goto label_3d6cfc;
        case 0x3d6d00u: goto label_3d6d00;
        case 0x3d6d04u: goto label_3d6d04;
        case 0x3d6d08u: goto label_3d6d08;
        case 0x3d6d0cu: goto label_3d6d0c;
        case 0x3d6d10u: goto label_3d6d10;
        case 0x3d6d14u: goto label_3d6d14;
        case 0x3d6d18u: goto label_3d6d18;
        case 0x3d6d1cu: goto label_3d6d1c;
        case 0x3d6d20u: goto label_3d6d20;
        case 0x3d6d24u: goto label_3d6d24;
        case 0x3d6d28u: goto label_3d6d28;
        case 0x3d6d2cu: goto label_3d6d2c;
        case 0x3d6d30u: goto label_3d6d30;
        case 0x3d6d34u: goto label_3d6d34;
        case 0x3d6d38u: goto label_3d6d38;
        case 0x3d6d3cu: goto label_3d6d3c;
        case 0x3d6d40u: goto label_3d6d40;
        case 0x3d6d44u: goto label_3d6d44;
        case 0x3d6d48u: goto label_3d6d48;
        case 0x3d6d4cu: goto label_3d6d4c;
        case 0x3d6d50u: goto label_3d6d50;
        case 0x3d6d54u: goto label_3d6d54;
        case 0x3d6d58u: goto label_3d6d58;
        case 0x3d6d5cu: goto label_3d6d5c;
        case 0x3d6d60u: goto label_3d6d60;
        case 0x3d6d64u: goto label_3d6d64;
        case 0x3d6d68u: goto label_3d6d68;
        case 0x3d6d6cu: goto label_3d6d6c;
        case 0x3d6d70u: goto label_3d6d70;
        case 0x3d6d74u: goto label_3d6d74;
        case 0x3d6d78u: goto label_3d6d78;
        case 0x3d6d7cu: goto label_3d6d7c;
        case 0x3d6d80u: goto label_3d6d80;
        case 0x3d6d84u: goto label_3d6d84;
        case 0x3d6d88u: goto label_3d6d88;
        case 0x3d6d8cu: goto label_3d6d8c;
        case 0x3d6d90u: goto label_3d6d90;
        case 0x3d6d94u: goto label_3d6d94;
        case 0x3d6d98u: goto label_3d6d98;
        case 0x3d6d9cu: goto label_3d6d9c;
        case 0x3d6da0u: goto label_3d6da0;
        case 0x3d6da4u: goto label_3d6da4;
        case 0x3d6da8u: goto label_3d6da8;
        case 0x3d6dacu: goto label_3d6dac;
        case 0x3d6db0u: goto label_3d6db0;
        case 0x3d6db4u: goto label_3d6db4;
        case 0x3d6db8u: goto label_3d6db8;
        case 0x3d6dbcu: goto label_3d6dbc;
        case 0x3d6dc0u: goto label_3d6dc0;
        case 0x3d6dc4u: goto label_3d6dc4;
        case 0x3d6dc8u: goto label_3d6dc8;
        case 0x3d6dccu: goto label_3d6dcc;
        case 0x3d6dd0u: goto label_3d6dd0;
        case 0x3d6dd4u: goto label_3d6dd4;
        case 0x3d6dd8u: goto label_3d6dd8;
        case 0x3d6ddcu: goto label_3d6ddc;
        case 0x3d6de0u: goto label_3d6de0;
        case 0x3d6de4u: goto label_3d6de4;
        case 0x3d6de8u: goto label_3d6de8;
        case 0x3d6decu: goto label_3d6dec;
        case 0x3d6df0u: goto label_3d6df0;
        case 0x3d6df4u: goto label_3d6df4;
        case 0x3d6df8u: goto label_3d6df8;
        case 0x3d6dfcu: goto label_3d6dfc;
        case 0x3d6e00u: goto label_3d6e00;
        case 0x3d6e04u: goto label_3d6e04;
        case 0x3d6e08u: goto label_3d6e08;
        case 0x3d6e0cu: goto label_3d6e0c;
        case 0x3d6e10u: goto label_3d6e10;
        case 0x3d6e14u: goto label_3d6e14;
        case 0x3d6e18u: goto label_3d6e18;
        case 0x3d6e1cu: goto label_3d6e1c;
        case 0x3d6e20u: goto label_3d6e20;
        case 0x3d6e24u: goto label_3d6e24;
        case 0x3d6e28u: goto label_3d6e28;
        case 0x3d6e2cu: goto label_3d6e2c;
        case 0x3d6e30u: goto label_3d6e30;
        case 0x3d6e34u: goto label_3d6e34;
        case 0x3d6e38u: goto label_3d6e38;
        case 0x3d6e3cu: goto label_3d6e3c;
        case 0x3d6e40u: goto label_3d6e40;
        case 0x3d6e44u: goto label_3d6e44;
        case 0x3d6e48u: goto label_3d6e48;
        case 0x3d6e4cu: goto label_3d6e4c;
        case 0x3d6e50u: goto label_3d6e50;
        case 0x3d6e54u: goto label_3d6e54;
        case 0x3d6e58u: goto label_3d6e58;
        case 0x3d6e5cu: goto label_3d6e5c;
        case 0x3d6e60u: goto label_3d6e60;
        case 0x3d6e64u: goto label_3d6e64;
        case 0x3d6e68u: goto label_3d6e68;
        case 0x3d6e6cu: goto label_3d6e6c;
        case 0x3d6e70u: goto label_3d6e70;
        case 0x3d6e74u: goto label_3d6e74;
        case 0x3d6e78u: goto label_3d6e78;
        case 0x3d6e7cu: goto label_3d6e7c;
        case 0x3d6e80u: goto label_3d6e80;
        case 0x3d6e84u: goto label_3d6e84;
        case 0x3d6e88u: goto label_3d6e88;
        case 0x3d6e8cu: goto label_3d6e8c;
        case 0x3d6e90u: goto label_3d6e90;
        case 0x3d6e94u: goto label_3d6e94;
        case 0x3d6e98u: goto label_3d6e98;
        case 0x3d6e9cu: goto label_3d6e9c;
        case 0x3d6ea0u: goto label_3d6ea0;
        case 0x3d6ea4u: goto label_3d6ea4;
        case 0x3d6ea8u: goto label_3d6ea8;
        case 0x3d6eacu: goto label_3d6eac;
        case 0x3d6eb0u: goto label_3d6eb0;
        case 0x3d6eb4u: goto label_3d6eb4;
        case 0x3d6eb8u: goto label_3d6eb8;
        case 0x3d6ebcu: goto label_3d6ebc;
        case 0x3d6ec0u: goto label_3d6ec0;
        case 0x3d6ec4u: goto label_3d6ec4;
        case 0x3d6ec8u: goto label_3d6ec8;
        case 0x3d6eccu: goto label_3d6ecc;
        case 0x3d6ed0u: goto label_3d6ed0;
        case 0x3d6ed4u: goto label_3d6ed4;
        case 0x3d6ed8u: goto label_3d6ed8;
        case 0x3d6edcu: goto label_3d6edc;
        case 0x3d6ee0u: goto label_3d6ee0;
        case 0x3d6ee4u: goto label_3d6ee4;
        case 0x3d6ee8u: goto label_3d6ee8;
        case 0x3d6eecu: goto label_3d6eec;
        case 0x3d6ef0u: goto label_3d6ef0;
        case 0x3d6ef4u: goto label_3d6ef4;
        case 0x3d6ef8u: goto label_3d6ef8;
        case 0x3d6efcu: goto label_3d6efc;
        case 0x3d6f00u: goto label_3d6f00;
        case 0x3d6f04u: goto label_3d6f04;
        case 0x3d6f08u: goto label_3d6f08;
        case 0x3d6f0cu: goto label_3d6f0c;
        case 0x3d6f10u: goto label_3d6f10;
        case 0x3d6f14u: goto label_3d6f14;
        case 0x3d6f18u: goto label_3d6f18;
        case 0x3d6f1cu: goto label_3d6f1c;
        case 0x3d6f20u: goto label_3d6f20;
        case 0x3d6f24u: goto label_3d6f24;
        case 0x3d6f28u: goto label_3d6f28;
        case 0x3d6f2cu: goto label_3d6f2c;
        case 0x3d6f30u: goto label_3d6f30;
        case 0x3d6f34u: goto label_3d6f34;
        case 0x3d6f38u: goto label_3d6f38;
        case 0x3d6f3cu: goto label_3d6f3c;
        case 0x3d6f40u: goto label_3d6f40;
        case 0x3d6f44u: goto label_3d6f44;
        case 0x3d6f48u: goto label_3d6f48;
        case 0x3d6f4cu: goto label_3d6f4c;
        case 0x3d6f50u: goto label_3d6f50;
        case 0x3d6f54u: goto label_3d6f54;
        case 0x3d6f58u: goto label_3d6f58;
        case 0x3d6f5cu: goto label_3d6f5c;
        case 0x3d6f60u: goto label_3d6f60;
        case 0x3d6f64u: goto label_3d6f64;
        case 0x3d6f68u: goto label_3d6f68;
        case 0x3d6f6cu: goto label_3d6f6c;
        case 0x3d6f70u: goto label_3d6f70;
        case 0x3d6f74u: goto label_3d6f74;
        case 0x3d6f78u: goto label_3d6f78;
        case 0x3d6f7cu: goto label_3d6f7c;
        case 0x3d6f80u: goto label_3d6f80;
        case 0x3d6f84u: goto label_3d6f84;
        case 0x3d6f88u: goto label_3d6f88;
        case 0x3d6f8cu: goto label_3d6f8c;
        case 0x3d6f90u: goto label_3d6f90;
        case 0x3d6f94u: goto label_3d6f94;
        case 0x3d6f98u: goto label_3d6f98;
        case 0x3d6f9cu: goto label_3d6f9c;
        case 0x3d6fa0u: goto label_3d6fa0;
        case 0x3d6fa4u: goto label_3d6fa4;
        case 0x3d6fa8u: goto label_3d6fa8;
        case 0x3d6facu: goto label_3d6fac;
        case 0x3d6fb0u: goto label_3d6fb0;
        case 0x3d6fb4u: goto label_3d6fb4;
        case 0x3d6fb8u: goto label_3d6fb8;
        case 0x3d6fbcu: goto label_3d6fbc;
        case 0x3d6fc0u: goto label_3d6fc0;
        case 0x3d6fc4u: goto label_3d6fc4;
        case 0x3d6fc8u: goto label_3d6fc8;
        case 0x3d6fccu: goto label_3d6fcc;
        case 0x3d6fd0u: goto label_3d6fd0;
        case 0x3d6fd4u: goto label_3d6fd4;
        case 0x3d6fd8u: goto label_3d6fd8;
        case 0x3d6fdcu: goto label_3d6fdc;
        case 0x3d6fe0u: goto label_3d6fe0;
        case 0x3d6fe4u: goto label_3d6fe4;
        case 0x3d6fe8u: goto label_3d6fe8;
        case 0x3d6fecu: goto label_3d6fec;
        case 0x3d6ff0u: goto label_3d6ff0;
        case 0x3d6ff4u: goto label_3d6ff4;
        case 0x3d6ff8u: goto label_3d6ff8;
        case 0x3d6ffcu: goto label_3d6ffc;
        case 0x3d7000u: goto label_3d7000;
        case 0x3d7004u: goto label_3d7004;
        case 0x3d7008u: goto label_3d7008;
        case 0x3d700cu: goto label_3d700c;
        case 0x3d7010u: goto label_3d7010;
        case 0x3d7014u: goto label_3d7014;
        case 0x3d7018u: goto label_3d7018;
        case 0x3d701cu: goto label_3d701c;
        case 0x3d7020u: goto label_3d7020;
        case 0x3d7024u: goto label_3d7024;
        case 0x3d7028u: goto label_3d7028;
        case 0x3d702cu: goto label_3d702c;
        case 0x3d7030u: goto label_3d7030;
        case 0x3d7034u: goto label_3d7034;
        case 0x3d7038u: goto label_3d7038;
        case 0x3d703cu: goto label_3d703c;
        case 0x3d7040u: goto label_3d7040;
        case 0x3d7044u: goto label_3d7044;
        case 0x3d7048u: goto label_3d7048;
        case 0x3d704cu: goto label_3d704c;
        case 0x3d7050u: goto label_3d7050;
        case 0x3d7054u: goto label_3d7054;
        case 0x3d7058u: goto label_3d7058;
        case 0x3d705cu: goto label_3d705c;
        case 0x3d7060u: goto label_3d7060;
        case 0x3d7064u: goto label_3d7064;
        case 0x3d7068u: goto label_3d7068;
        case 0x3d706cu: goto label_3d706c;
        case 0x3d7070u: goto label_3d7070;
        case 0x3d7074u: goto label_3d7074;
        case 0x3d7078u: goto label_3d7078;
        case 0x3d707cu: goto label_3d707c;
        case 0x3d7080u: goto label_3d7080;
        case 0x3d7084u: goto label_3d7084;
        case 0x3d7088u: goto label_3d7088;
        case 0x3d708cu: goto label_3d708c;
        case 0x3d7090u: goto label_3d7090;
        case 0x3d7094u: goto label_3d7094;
        case 0x3d7098u: goto label_3d7098;
        case 0x3d709cu: goto label_3d709c;
        case 0x3d70a0u: goto label_3d70a0;
        case 0x3d70a4u: goto label_3d70a4;
        case 0x3d70a8u: goto label_3d70a8;
        case 0x3d70acu: goto label_3d70ac;
        case 0x3d70b0u: goto label_3d70b0;
        case 0x3d70b4u: goto label_3d70b4;
        case 0x3d70b8u: goto label_3d70b8;
        case 0x3d70bcu: goto label_3d70bc;
        case 0x3d70c0u: goto label_3d70c0;
        case 0x3d70c4u: goto label_3d70c4;
        case 0x3d70c8u: goto label_3d70c8;
        case 0x3d70ccu: goto label_3d70cc;
        case 0x3d70d0u: goto label_3d70d0;
        case 0x3d70d4u: goto label_3d70d4;
        case 0x3d70d8u: goto label_3d70d8;
        case 0x3d70dcu: goto label_3d70dc;
        case 0x3d70e0u: goto label_3d70e0;
        case 0x3d70e4u: goto label_3d70e4;
        case 0x3d70e8u: goto label_3d70e8;
        case 0x3d70ecu: goto label_3d70ec;
        case 0x3d70f0u: goto label_3d70f0;
        case 0x3d70f4u: goto label_3d70f4;
        case 0x3d70f8u: goto label_3d70f8;
        case 0x3d70fcu: goto label_3d70fc;
        case 0x3d7100u: goto label_3d7100;
        case 0x3d7104u: goto label_3d7104;
        case 0x3d7108u: goto label_3d7108;
        case 0x3d710cu: goto label_3d710c;
        case 0x3d7110u: goto label_3d7110;
        case 0x3d7114u: goto label_3d7114;
        case 0x3d7118u: goto label_3d7118;
        case 0x3d711cu: goto label_3d711c;
        case 0x3d7120u: goto label_3d7120;
        case 0x3d7124u: goto label_3d7124;
        case 0x3d7128u: goto label_3d7128;
        case 0x3d712cu: goto label_3d712c;
        case 0x3d7130u: goto label_3d7130;
        case 0x3d7134u: goto label_3d7134;
        case 0x3d7138u: goto label_3d7138;
        case 0x3d713cu: goto label_3d713c;
        case 0x3d7140u: goto label_3d7140;
        case 0x3d7144u: goto label_3d7144;
        case 0x3d7148u: goto label_3d7148;
        case 0x3d714cu: goto label_3d714c;
        case 0x3d7150u: goto label_3d7150;
        case 0x3d7154u: goto label_3d7154;
        case 0x3d7158u: goto label_3d7158;
        case 0x3d715cu: goto label_3d715c;
        case 0x3d7160u: goto label_3d7160;
        case 0x3d7164u: goto label_3d7164;
        case 0x3d7168u: goto label_3d7168;
        case 0x3d716cu: goto label_3d716c;
        case 0x3d7170u: goto label_3d7170;
        case 0x3d7174u: goto label_3d7174;
        case 0x3d7178u: goto label_3d7178;
        case 0x3d717cu: goto label_3d717c;
        case 0x3d7180u: goto label_3d7180;
        case 0x3d7184u: goto label_3d7184;
        case 0x3d7188u: goto label_3d7188;
        case 0x3d718cu: goto label_3d718c;
        case 0x3d7190u: goto label_3d7190;
        case 0x3d7194u: goto label_3d7194;
        case 0x3d7198u: goto label_3d7198;
        case 0x3d719cu: goto label_3d719c;
        case 0x3d71a0u: goto label_3d71a0;
        case 0x3d71a4u: goto label_3d71a4;
        case 0x3d71a8u: goto label_3d71a8;
        case 0x3d71acu: goto label_3d71ac;
        case 0x3d71b0u: goto label_3d71b0;
        case 0x3d71b4u: goto label_3d71b4;
        case 0x3d71b8u: goto label_3d71b8;
        case 0x3d71bcu: goto label_3d71bc;
        case 0x3d71c0u: goto label_3d71c0;
        case 0x3d71c4u: goto label_3d71c4;
        case 0x3d71c8u: goto label_3d71c8;
        case 0x3d71ccu: goto label_3d71cc;
        case 0x3d71d0u: goto label_3d71d0;
        case 0x3d71d4u: goto label_3d71d4;
        case 0x3d71d8u: goto label_3d71d8;
        case 0x3d71dcu: goto label_3d71dc;
        case 0x3d71e0u: goto label_3d71e0;
        case 0x3d71e4u: goto label_3d71e4;
        case 0x3d71e8u: goto label_3d71e8;
        case 0x3d71ecu: goto label_3d71ec;
        case 0x3d71f0u: goto label_3d71f0;
        case 0x3d71f4u: goto label_3d71f4;
        case 0x3d71f8u: goto label_3d71f8;
        case 0x3d71fcu: goto label_3d71fc;
        case 0x3d7200u: goto label_3d7200;
        case 0x3d7204u: goto label_3d7204;
        case 0x3d7208u: goto label_3d7208;
        case 0x3d720cu: goto label_3d720c;
        case 0x3d7210u: goto label_3d7210;
        case 0x3d7214u: goto label_3d7214;
        case 0x3d7218u: goto label_3d7218;
        case 0x3d721cu: goto label_3d721c;
        case 0x3d7220u: goto label_3d7220;
        case 0x3d7224u: goto label_3d7224;
        case 0x3d7228u: goto label_3d7228;
        case 0x3d722cu: goto label_3d722c;
        case 0x3d7230u: goto label_3d7230;
        case 0x3d7234u: goto label_3d7234;
        case 0x3d7238u: goto label_3d7238;
        case 0x3d723cu: goto label_3d723c;
        case 0x3d7240u: goto label_3d7240;
        case 0x3d7244u: goto label_3d7244;
        case 0x3d7248u: goto label_3d7248;
        case 0x3d724cu: goto label_3d724c;
        case 0x3d7250u: goto label_3d7250;
        case 0x3d7254u: goto label_3d7254;
        case 0x3d7258u: goto label_3d7258;
        case 0x3d725cu: goto label_3d725c;
        case 0x3d7260u: goto label_3d7260;
        case 0x3d7264u: goto label_3d7264;
        case 0x3d7268u: goto label_3d7268;
        case 0x3d726cu: goto label_3d726c;
        case 0x3d7270u: goto label_3d7270;
        case 0x3d7274u: goto label_3d7274;
        case 0x3d7278u: goto label_3d7278;
        case 0x3d727cu: goto label_3d727c;
        case 0x3d7280u: goto label_3d7280;
        case 0x3d7284u: goto label_3d7284;
        case 0x3d7288u: goto label_3d7288;
        case 0x3d728cu: goto label_3d728c;
        case 0x3d7290u: goto label_3d7290;
        case 0x3d7294u: goto label_3d7294;
        case 0x3d7298u: goto label_3d7298;
        case 0x3d729cu: goto label_3d729c;
        case 0x3d72a0u: goto label_3d72a0;
        case 0x3d72a4u: goto label_3d72a4;
        case 0x3d72a8u: goto label_3d72a8;
        case 0x3d72acu: goto label_3d72ac;
        case 0x3d72b0u: goto label_3d72b0;
        case 0x3d72b4u: goto label_3d72b4;
        case 0x3d72b8u: goto label_3d72b8;
        case 0x3d72bcu: goto label_3d72bc;
        case 0x3d72c0u: goto label_3d72c0;
        case 0x3d72c4u: goto label_3d72c4;
        case 0x3d72c8u: goto label_3d72c8;
        case 0x3d72ccu: goto label_3d72cc;
        case 0x3d72d0u: goto label_3d72d0;
        case 0x3d72d4u: goto label_3d72d4;
        case 0x3d72d8u: goto label_3d72d8;
        case 0x3d72dcu: goto label_3d72dc;
        case 0x3d72e0u: goto label_3d72e0;
        case 0x3d72e4u: goto label_3d72e4;
        case 0x3d72e8u: goto label_3d72e8;
        case 0x3d72ecu: goto label_3d72ec;
        case 0x3d72f0u: goto label_3d72f0;
        case 0x3d72f4u: goto label_3d72f4;
        case 0x3d72f8u: goto label_3d72f8;
        case 0x3d72fcu: goto label_3d72fc;
        case 0x3d7300u: goto label_3d7300;
        case 0x3d7304u: goto label_3d7304;
        case 0x3d7308u: goto label_3d7308;
        case 0x3d730cu: goto label_3d730c;
        case 0x3d7310u: goto label_3d7310;
        case 0x3d7314u: goto label_3d7314;
        case 0x3d7318u: goto label_3d7318;
        case 0x3d731cu: goto label_3d731c;
        case 0x3d7320u: goto label_3d7320;
        case 0x3d7324u: goto label_3d7324;
        case 0x3d7328u: goto label_3d7328;
        case 0x3d732cu: goto label_3d732c;
        case 0x3d7330u: goto label_3d7330;
        case 0x3d7334u: goto label_3d7334;
        case 0x3d7338u: goto label_3d7338;
        case 0x3d733cu: goto label_3d733c;
        case 0x3d7340u: goto label_3d7340;
        case 0x3d7344u: goto label_3d7344;
        case 0x3d7348u: goto label_3d7348;
        case 0x3d734cu: goto label_3d734c;
        case 0x3d7350u: goto label_3d7350;
        case 0x3d7354u: goto label_3d7354;
        case 0x3d7358u: goto label_3d7358;
        case 0x3d735cu: goto label_3d735c;
        case 0x3d7360u: goto label_3d7360;
        case 0x3d7364u: goto label_3d7364;
        case 0x3d7368u: goto label_3d7368;
        case 0x3d736cu: goto label_3d736c;
        case 0x3d7370u: goto label_3d7370;
        case 0x3d7374u: goto label_3d7374;
        case 0x3d7378u: goto label_3d7378;
        case 0x3d737cu: goto label_3d737c;
        case 0x3d7380u: goto label_3d7380;
        case 0x3d7384u: goto label_3d7384;
        case 0x3d7388u: goto label_3d7388;
        case 0x3d738cu: goto label_3d738c;
        case 0x3d7390u: goto label_3d7390;
        case 0x3d7394u: goto label_3d7394;
        case 0x3d7398u: goto label_3d7398;
        case 0x3d739cu: goto label_3d739c;
        case 0x3d73a0u: goto label_3d73a0;
        case 0x3d73a4u: goto label_3d73a4;
        case 0x3d73a8u: goto label_3d73a8;
        case 0x3d73acu: goto label_3d73ac;
        case 0x3d73b0u: goto label_3d73b0;
        case 0x3d73b4u: goto label_3d73b4;
        case 0x3d73b8u: goto label_3d73b8;
        case 0x3d73bcu: goto label_3d73bc;
        case 0x3d73c0u: goto label_3d73c0;
        case 0x3d73c4u: goto label_3d73c4;
        case 0x3d73c8u: goto label_3d73c8;
        case 0x3d73ccu: goto label_3d73cc;
        case 0x3d73d0u: goto label_3d73d0;
        case 0x3d73d4u: goto label_3d73d4;
        case 0x3d73d8u: goto label_3d73d8;
        case 0x3d73dcu: goto label_3d73dc;
        case 0x3d73e0u: goto label_3d73e0;
        case 0x3d73e4u: goto label_3d73e4;
        case 0x3d73e8u: goto label_3d73e8;
        case 0x3d73ecu: goto label_3d73ec;
        case 0x3d73f0u: goto label_3d73f0;
        case 0x3d73f4u: goto label_3d73f4;
        case 0x3d73f8u: goto label_3d73f8;
        case 0x3d73fcu: goto label_3d73fc;
        case 0x3d7400u: goto label_3d7400;
        case 0x3d7404u: goto label_3d7404;
        case 0x3d7408u: goto label_3d7408;
        case 0x3d740cu: goto label_3d740c;
        case 0x3d7410u: goto label_3d7410;
        case 0x3d7414u: goto label_3d7414;
        case 0x3d7418u: goto label_3d7418;
        case 0x3d741cu: goto label_3d741c;
        case 0x3d7420u: goto label_3d7420;
        case 0x3d7424u: goto label_3d7424;
        case 0x3d7428u: goto label_3d7428;
        case 0x3d742cu: goto label_3d742c;
        case 0x3d7430u: goto label_3d7430;
        case 0x3d7434u: goto label_3d7434;
        case 0x3d7438u: goto label_3d7438;
        case 0x3d743cu: goto label_3d743c;
        case 0x3d7440u: goto label_3d7440;
        case 0x3d7444u: goto label_3d7444;
        case 0x3d7448u: goto label_3d7448;
        case 0x3d744cu: goto label_3d744c;
        case 0x3d7450u: goto label_3d7450;
        case 0x3d7454u: goto label_3d7454;
        case 0x3d7458u: goto label_3d7458;
        case 0x3d745cu: goto label_3d745c;
        case 0x3d7460u: goto label_3d7460;
        case 0x3d7464u: goto label_3d7464;
        case 0x3d7468u: goto label_3d7468;
        case 0x3d746cu: goto label_3d746c;
        case 0x3d7470u: goto label_3d7470;
        case 0x3d7474u: goto label_3d7474;
        case 0x3d7478u: goto label_3d7478;
        case 0x3d747cu: goto label_3d747c;
        case 0x3d7480u: goto label_3d7480;
        case 0x3d7484u: goto label_3d7484;
        case 0x3d7488u: goto label_3d7488;
        case 0x3d748cu: goto label_3d748c;
        case 0x3d7490u: goto label_3d7490;
        case 0x3d7494u: goto label_3d7494;
        case 0x3d7498u: goto label_3d7498;
        case 0x3d749cu: goto label_3d749c;
        case 0x3d74a0u: goto label_3d74a0;
        case 0x3d74a4u: goto label_3d74a4;
        case 0x3d74a8u: goto label_3d74a8;
        case 0x3d74acu: goto label_3d74ac;
        case 0x3d74b0u: goto label_3d74b0;
        case 0x3d74b4u: goto label_3d74b4;
        case 0x3d74b8u: goto label_3d74b8;
        case 0x3d74bcu: goto label_3d74bc;
        case 0x3d74c0u: goto label_3d74c0;
        case 0x3d74c4u: goto label_3d74c4;
        case 0x3d74c8u: goto label_3d74c8;
        case 0x3d74ccu: goto label_3d74cc;
        case 0x3d74d0u: goto label_3d74d0;
        case 0x3d74d4u: goto label_3d74d4;
        case 0x3d74d8u: goto label_3d74d8;
        case 0x3d74dcu: goto label_3d74dc;
        case 0x3d74e0u: goto label_3d74e0;
        case 0x3d74e4u: goto label_3d74e4;
        case 0x3d74e8u: goto label_3d74e8;
        case 0x3d74ecu: goto label_3d74ec;
        case 0x3d74f0u: goto label_3d74f0;
        case 0x3d74f4u: goto label_3d74f4;
        case 0x3d74f8u: goto label_3d74f8;
        case 0x3d74fcu: goto label_3d74fc;
        case 0x3d7500u: goto label_3d7500;
        case 0x3d7504u: goto label_3d7504;
        case 0x3d7508u: goto label_3d7508;
        case 0x3d750cu: goto label_3d750c;
        case 0x3d7510u: goto label_3d7510;
        case 0x3d7514u: goto label_3d7514;
        case 0x3d7518u: goto label_3d7518;
        case 0x3d751cu: goto label_3d751c;
        case 0x3d7520u: goto label_3d7520;
        case 0x3d7524u: goto label_3d7524;
        case 0x3d7528u: goto label_3d7528;
        case 0x3d752cu: goto label_3d752c;
        case 0x3d7530u: goto label_3d7530;
        case 0x3d7534u: goto label_3d7534;
        case 0x3d7538u: goto label_3d7538;
        case 0x3d753cu: goto label_3d753c;
        case 0x3d7540u: goto label_3d7540;
        case 0x3d7544u: goto label_3d7544;
        case 0x3d7548u: goto label_3d7548;
        case 0x3d754cu: goto label_3d754c;
        case 0x3d7550u: goto label_3d7550;
        case 0x3d7554u: goto label_3d7554;
        case 0x3d7558u: goto label_3d7558;
        case 0x3d755cu: goto label_3d755c;
        case 0x3d7560u: goto label_3d7560;
        case 0x3d7564u: goto label_3d7564;
        case 0x3d7568u: goto label_3d7568;
        case 0x3d756cu: goto label_3d756c;
        case 0x3d7570u: goto label_3d7570;
        case 0x3d7574u: goto label_3d7574;
        case 0x3d7578u: goto label_3d7578;
        case 0x3d757cu: goto label_3d757c;
        case 0x3d7580u: goto label_3d7580;
        case 0x3d7584u: goto label_3d7584;
        case 0x3d7588u: goto label_3d7588;
        case 0x3d758cu: goto label_3d758c;
        default: break;
    }

    ctx->pc = 0x3d6710u;

label_3d6710:
    // 0x3d6710: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d6710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3d6714:
    // 0x3d6714: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3d6714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d6718:
    // 0x3d6718: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3d6718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3d671c:
    // 0x3d671c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d671cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3d6720:
    // 0x3d6720: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d6720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d6724:
    // 0x3d6724: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3d6724u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d6728:
    // 0x3d6728: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d6728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d672c:
    // 0x3d672c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d672cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d6730:
    // 0x3d6730: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d6730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d6734:
    // 0x3d6734: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3d6734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d6738:
    // 0x3d6738: 0xc10ca68  jal         func_4329A0
label_3d673c:
    if (ctx->pc == 0x3D673Cu) {
        ctx->pc = 0x3D673Cu;
            // 0x3d673c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3D6740u;
        goto label_3d6740;
    }
    ctx->pc = 0x3D6738u;
    SET_GPR_U32(ctx, 31, 0x3D6740u);
    ctx->pc = 0x3D673Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6738u;
            // 0x3d673c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6740u; }
        if (ctx->pc != 0x3D6740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6740u; }
        if (ctx->pc != 0x3D6740u) { return; }
    }
    ctx->pc = 0x3D6740u;
label_3d6740:
    // 0x3d6740: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3d6740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3d6744:
    // 0x3d6744: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3d6744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3d6748:
    // 0x3d6748: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x3d6748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_3d674c:
    // 0x3d674c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x3d674cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_3d6750:
    // 0x3d6750: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3d6750u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_3d6754:
    // 0x3d6754: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x3d6754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_3d6758:
    // 0x3d6758: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3d6758u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_3d675c:
    // 0x3d675c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d675cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d6760:
    // 0x3d6760: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x3d6760u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_3d6764:
    // 0x3d6764: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d6764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3d6768:
    // 0x3d6768: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x3d6768u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_3d676c:
    // 0x3d676c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3d676cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3d6770:
    // 0x3d6770: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x3d6770u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_3d6774:
    // 0x3d6774: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x3d6774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_3d6778:
    // 0x3d6778: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x3d6778u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_3d677c:
    // 0x3d677c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x3d677cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_3d6780:
    // 0x3d6780: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x3d6780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_3d6784:
    // 0x3d6784: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3d6784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3d6788:
    // 0x3d6788: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x3d6788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3d678c:
    // 0x3d678c: 0xc0582cc  jal         func_160B30
label_3d6790:
    if (ctx->pc == 0x3D6790u) {
        ctx->pc = 0x3D6790u;
            // 0x3d6790: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x3D6794u;
        goto label_3d6794;
    }
    ctx->pc = 0x3D678Cu;
    SET_GPR_U32(ctx, 31, 0x3D6794u);
    ctx->pc = 0x3D6790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D678Cu;
            // 0x3d6790: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6794u; }
        if (ctx->pc != 0x3D6794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6794u; }
        if (ctx->pc != 0x3D6794u) { return; }
    }
    ctx->pc = 0x3D6794u;
label_3d6794:
    // 0x3d6794: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d6794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3d6798:
    // 0x3d6798: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x3d6798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_3d679c:
    // 0x3d679c: 0x24639500  addiu       $v1, $v1, -0x6B00
    ctx->pc = 0x3d679cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939904));
label_3d67a0:
    // 0x3d67a0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x3d67a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_3d67a4:
    // 0x3d67a4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x3d67a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_3d67a8:
    // 0x3d67a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d67a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3d67ac:
    // 0x3d67ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d67acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3d67b0:
    // 0x3d67b0: 0xac446ea8  sw          $a0, 0x6EA8($v0)
    ctx->pc = 0x3d67b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28328), GPR_U32(ctx, 4));
label_3d67b4:
    // 0x3d67b4: 0x24639510  addiu       $v1, $v1, -0x6AF0
    ctx->pc = 0x3d67b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939920));
label_3d67b8:
    // 0x3d67b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d67b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3d67bc:
    // 0x3d67bc: 0x24429548  addiu       $v0, $v0, -0x6AB8
    ctx->pc = 0x3d67bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939976));
label_3d67c0:
    // 0x3d67c0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3d67c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_3d67c4:
    // 0x3d67c4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x3d67c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_3d67c8:
    // 0x3d67c8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x3d67c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_3d67cc:
    // 0x3d67cc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x3d67ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_3d67d0:
    // 0x3d67d0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x3d67d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_3d67d4:
    // 0x3d67d4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x3d67d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_3d67d8:
    // 0x3d67d8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x3d67d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_3d67dc:
    // 0x3d67dc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x3d67dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_3d67e0:
    // 0x3d67e0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x3d67e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_3d67e4:
    // 0x3d67e4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x3d67e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_3d67e8:
    // 0x3d67e8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x3d67e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_3d67ec:
    // 0x3d67ec: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x3d67ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_3d67f0:
    // 0x3d67f0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x3d67f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_3d67f4:
    // 0x3d67f4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_3d67f8:
    if (ctx->pc == 0x3D67F8u) {
        ctx->pc = 0x3D67FCu;
        goto label_3d67fc;
    }
    ctx->pc = 0x3D67F4u;
    {
        const bool branch_taken_0x3d67f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d67f4) {
            ctx->pc = 0x3D6888u;
            goto label_3d6888;
        }
    }
    ctx->pc = 0x3D67FCu;
label_3d67fc:
    // 0x3d67fc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x3d67fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_3d6800:
    // 0x3d6800: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3d6800u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3d6804:
    // 0x3d6804: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3d6804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3d6808:
    // 0x3d6808: 0xc040138  jal         func_1004E0
label_3d680c:
    if (ctx->pc == 0x3D680Cu) {
        ctx->pc = 0x3D680Cu;
            // 0x3d680c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x3D6810u;
        goto label_3d6810;
    }
    ctx->pc = 0x3D6808u;
    SET_GPR_U32(ctx, 31, 0x3D6810u);
    ctx->pc = 0x3D680Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6808u;
            // 0x3d680c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6810u; }
        if (ctx->pc != 0x3D6810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6810u; }
        if (ctx->pc != 0x3D6810u) { return; }
    }
    ctx->pc = 0x3D6810u;
label_3d6810:
    // 0x3d6810: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3d6810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
label_3d6814:
    // 0x3d6814: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x3d6814u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
label_3d6818:
    // 0x3d6818: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d6818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d681c:
    // 0x3d681c: 0x24a568b0  addiu       $a1, $a1, 0x68B0
    ctx->pc = 0x3d681cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26800));
label_3d6820:
    // 0x3d6820: 0x24c660a0  addiu       $a2, $a2, 0x60A0
    ctx->pc = 0x3d6820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24736));
label_3d6824:
    // 0x3d6824: 0x240700f0  addiu       $a3, $zero, 0xF0
    ctx->pc = 0x3d6824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_3d6828:
    // 0x3d6828: 0xc040840  jal         func_102100
label_3d682c:
    if (ctx->pc == 0x3D682Cu) {
        ctx->pc = 0x3D682Cu;
            // 0x3d682c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D6830u;
        goto label_3d6830;
    }
    ctx->pc = 0x3D6828u;
    SET_GPR_U32(ctx, 31, 0x3D6830u);
    ctx->pc = 0x3D682Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6828u;
            // 0x3d682c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6830u; }
        if (ctx->pc != 0x3D6830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6830u; }
        if (ctx->pc != 0x3D6830u) { return; }
    }
    ctx->pc = 0x3D6830u;
label_3d6830:
    // 0x3d6830: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x3d6830u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_3d6834:
    // 0x3d6834: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d6834u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d6838:
    // 0x3d6838: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x3d6838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_3d683c:
    // 0x3d683c: 0xc0788fc  jal         func_1E23F0
label_3d6840:
    if (ctx->pc == 0x3D6840u) {
        ctx->pc = 0x3D6840u;
            // 0x3d6840: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D6844u;
        goto label_3d6844;
    }
    ctx->pc = 0x3D683Cu;
    SET_GPR_U32(ctx, 31, 0x3D6844u);
    ctx->pc = 0x3D6840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D683Cu;
            // 0x3d6840: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6844u; }
        if (ctx->pc != 0x3D6844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6844u; }
        if (ctx->pc != 0x3D6844u) { return; }
    }
    ctx->pc = 0x3D6844u;
label_3d6844:
    // 0x3d6844: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x3d6844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_3d6848:
    // 0x3d6848: 0xc0788fc  jal         func_1E23F0
label_3d684c:
    if (ctx->pc == 0x3D684Cu) {
        ctx->pc = 0x3D684Cu;
            // 0x3d684c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D6850u;
        goto label_3d6850;
    }
    ctx->pc = 0x3D6848u;
    SET_GPR_U32(ctx, 31, 0x3D6850u);
    ctx->pc = 0x3D684Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6848u;
            // 0x3d684c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6850u; }
        if (ctx->pc != 0x3D6850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6850u; }
        if (ctx->pc != 0x3D6850u) { return; }
    }
    ctx->pc = 0x3D6850u;
label_3d6850:
    // 0x3d6850: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3d6850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d6854:
    // 0x3d6854: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x3d6854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_3d6858:
    // 0x3d6858: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x3d6858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_3d685c:
    // 0x3d685c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x3d685cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_3d6860:
    // 0x3d6860: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d6860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d6864:
    // 0x3d6864: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x3d6864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_3d6868:
    // 0x3d6868: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x3d6868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_3d686c:
    // 0x3d686c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d686cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3d6870:
    // 0x3d6870: 0xc0a997c  jal         func_2A65F0
label_3d6874:
    if (ctx->pc == 0x3D6874u) {
        ctx->pc = 0x3D6874u;
            // 0x3d6874: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3D6878u;
        goto label_3d6878;
    }
    ctx->pc = 0x3D6870u;
    SET_GPR_U32(ctx, 31, 0x3D6878u);
    ctx->pc = 0x3D6874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6870u;
            // 0x3d6874: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6878u; }
        if (ctx->pc != 0x3D6878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6878u; }
        if (ctx->pc != 0x3D6878u) { return; }
    }
    ctx->pc = 0x3D6878u;
label_3d6878:
    // 0x3d6878: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3d6878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3d687c:
    // 0x3d687c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x3d687cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3d6880:
    // 0x3d6880: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_3d6884:
    if (ctx->pc == 0x3D6884u) {
        ctx->pc = 0x3D6884u;
            // 0x3d6884: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->pc = 0x3D6888u;
        goto label_3d6888;
    }
    ctx->pc = 0x3D6880u;
    {
        const bool branch_taken_0x3d6880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D6884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6880u;
            // 0x3d6884: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6880) {
            ctx->pc = 0x3D6854u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3d6854;
        }
    }
    ctx->pc = 0x3D6888u;
label_3d6888:
    // 0x3d6888: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3d6888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d688c:
    // 0x3d688c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3d688cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3d6890:
    // 0x3d6890: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d6890u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d6894:
    // 0x3d6894: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d6894u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d6898:
    // 0x3d6898: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d6898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d689c:
    // 0x3d689c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d689cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d68a0:
    // 0x3d68a0: 0x3e00008  jr          $ra
label_3d68a4:
    if (ctx->pc == 0x3D68A4u) {
        ctx->pc = 0x3D68A4u;
            // 0x3d68a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3D68A8u;
        goto label_3d68a8;
    }
    ctx->pc = 0x3D68A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D68A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D68A0u;
            // 0x3d68a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D68A8u;
label_3d68a8:
    // 0x3d68a8: 0x0  nop
    ctx->pc = 0x3d68a8u;
    // NOP
label_3d68ac:
    // 0x3d68ac: 0x0  nop
    ctx->pc = 0x3d68acu;
    // NOP
label_3d68b0:
    // 0x3d68b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d68b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3d68b4:
    // 0x3d68b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d68b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d68b8:
    // 0x3d68b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d68b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d68bc:
    // 0x3d68bc: 0xc0b1370  jal         func_2C4DC0
label_3d68c0:
    if (ctx->pc == 0x3D68C0u) {
        ctx->pc = 0x3D68C0u;
            // 0x3d68c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D68C4u;
        goto label_3d68c4;
    }
    ctx->pc = 0x3D68BCu;
    SET_GPR_U32(ctx, 31, 0x3D68C4u);
    ctx->pc = 0x3D68C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D68BCu;
            // 0x3d68c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (runtime->hasFunction(0x2C4DC0u)) {
        auto targetFn = runtime->lookupFunction(0x2C4DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D68C4u; }
        if (ctx->pc != 0x3D68C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4DC0_0x2c4dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D68C4u; }
        if (ctx->pc != 0x3D68C4u) { return; }
    }
    ctx->pc = 0x3D68C4u;
label_3d68c4:
    // 0x3d68c4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d68c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3d68c8:
    // 0x3d68c8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d68c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3d68cc:
    // 0x3d68cc: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x3d68ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
label_3d68d0:
    // 0x3d68d0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x3d68d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_3d68d4:
    // 0x3d68d4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3d68d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3d68d8:
    // 0x3d68d8: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x3d68d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
label_3d68dc:
    // 0x3d68dc: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3d68dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3d68e0:
    // 0x3d68e0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x3d68e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_3d68e4:
    // 0x3d68e4: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x3d68e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_3d68e8:
    // 0x3d68e8: 0x24a59450  addiu       $a1, $a1, -0x6BB0
    ctx->pc = 0x3d68e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939728));
label_3d68ec:
    // 0x3d68ec: 0xa20000d4  sb          $zero, 0xD4($s0)
    ctx->pc = 0x3d68ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 212), (uint8_t)GPR_U32(ctx, 0));
label_3d68f0:
    // 0x3d68f0: 0x24849490  addiu       $a0, $a0, -0x6B70
    ctx->pc = 0x3d68f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939792));
label_3d68f4:
    // 0x3d68f4: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x3d68f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
label_3d68f8:
    // 0x3d68f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d68f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d68fc:
    // 0x3d68fc: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x3d68fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_3d6900:
    // 0x3d6900: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d6900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d6904:
    // 0x3d6904: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x3d6904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_3d6908:
    // 0x3d6908: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x3d6908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_3d690c:
    // 0x3d690c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x3d690cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_3d6910:
    // 0x3d6910: 0xa20300e8  sb          $v1, 0xE8($s0)
    ctx->pc = 0x3d6910u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 232), (uint8_t)GPR_U32(ctx, 3));
label_3d6914:
    // 0x3d6914: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d6914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d6918:
    // 0x3d6918: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d6918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d691c:
    // 0x3d691c: 0x3e00008  jr          $ra
label_3d6920:
    if (ctx->pc == 0x3D6920u) {
        ctx->pc = 0x3D6920u;
            // 0x3d6920: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3D6924u;
        goto label_3d6924;
    }
    ctx->pc = 0x3D691Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D6920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D691Cu;
            // 0x3d6920: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D6924u;
label_3d6924:
    // 0x3d6924: 0x0  nop
    ctx->pc = 0x3d6924u;
    // NOP
label_3d6928:
    // 0x3d6928: 0x0  nop
    ctx->pc = 0x3d6928u;
    // NOP
label_3d692c:
    // 0x3d692c: 0x0  nop
    ctx->pc = 0x3d692cu;
    // NOP
label_3d6930:
    // 0x3d6930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d6930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d6934:
    // 0x3d6934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d6934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d6938:
    // 0x3d6938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d6938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d693c:
    // 0x3d693c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d693cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d6940:
    // 0x3d6940: 0x8c90009c  lw          $s0, 0x9C($a0)
    ctx->pc = 0x3d6940u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_3d6944:
    // 0x3d6944: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_3d6948:
    if (ctx->pc == 0x3D6948u) {
        ctx->pc = 0x3D6948u;
            // 0x3d6948: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D694Cu;
        goto label_3d694c;
    }
    ctx->pc = 0x3D6944u;
    {
        const bool branch_taken_0x3d6944 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6944u;
            // 0x3d6948: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6944) {
            ctx->pc = 0x3D697Cu;
            goto label_3d697c;
        }
    }
    ctx->pc = 0x3D694Cu;
label_3d694c:
    // 0x3d694c: 0xc04008c  jal         func_100230
label_3d6950:
    if (ctx->pc == 0x3D6950u) {
        ctx->pc = 0x3D6950u;
            // 0x3d6950: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3D6954u;
        goto label_3d6954;
    }
    ctx->pc = 0x3D694Cu;
    SET_GPR_U32(ctx, 31, 0x3D6954u);
    ctx->pc = 0x3D6950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D694Cu;
            // 0x3d6950: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6954u; }
        if (ctx->pc != 0x3D6954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6954u; }
        if (ctx->pc != 0x3D6954u) { return; }
    }
    ctx->pc = 0x3D6954u;
label_3d6954:
    // 0x3d6954: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3d6954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d6958:
    // 0x3d6958: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x3d6958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_3d695c:
    // 0x3d695c: 0xc0407c0  jal         func_101F00
label_3d6960:
    if (ctx->pc == 0x3D6960u) {
        ctx->pc = 0x3D6960u;
            // 0x3d6960: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->pc = 0x3D6964u;
        goto label_3d6964;
    }
    ctx->pc = 0x3D695Cu;
    SET_GPR_U32(ctx, 31, 0x3D6964u);
    ctx->pc = 0x3D6960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D695Cu;
            // 0x3d6960: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6964u; }
        if (ctx->pc != 0x3D6964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6964u; }
        if (ctx->pc != 0x3D6964u) { return; }
    }
    ctx->pc = 0x3D6964u;
label_3d6964:
    // 0x3d6964: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3d6964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3d6968:
    // 0x3d6968: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x3d6968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_3d696c:
    // 0x3d696c: 0xc0407c0  jal         func_101F00
label_3d6970:
    if (ctx->pc == 0x3D6970u) {
        ctx->pc = 0x3D6970u;
            // 0x3d6970: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->pc = 0x3D6974u;
        goto label_3d6974;
    }
    ctx->pc = 0x3D696Cu;
    SET_GPR_U32(ctx, 31, 0x3D6974u);
    ctx->pc = 0x3D6970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D696Cu;
            // 0x3d6970: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6974u; }
        if (ctx->pc != 0x3D6974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6974u; }
        if (ctx->pc != 0x3D6974u) { return; }
    }
    ctx->pc = 0x3D6974u;
label_3d6974:
    // 0x3d6974: 0xc0400a8  jal         func_1002A0
label_3d6978:
    if (ctx->pc == 0x3D6978u) {
        ctx->pc = 0x3D6978u;
            // 0x3d6978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D697Cu;
        goto label_3d697c;
    }
    ctx->pc = 0x3D6974u;
    SET_GPR_U32(ctx, 31, 0x3D697Cu);
    ctx->pc = 0x3D6978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6974u;
            // 0x3d6978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D697Cu; }
        if (ctx->pc != 0x3D697Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D697Cu; }
        if (ctx->pc != 0x3D697Cu) { return; }
    }
    ctx->pc = 0x3D697Cu;
label_3d697c:
    // 0x3d697c: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x3d697cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_3d6980:
    // 0x3d6980: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x3d6980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_3d6984:
    // 0x3d6984: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3d6988:
    if (ctx->pc == 0x3D6988u) {
        ctx->pc = 0x3D6988u;
            // 0x3d6988: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x3D698Cu;
        goto label_3d698c;
    }
    ctx->pc = 0x3D6984u;
    {
        const bool branch_taken_0x3d6984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6984) {
            ctx->pc = 0x3D6988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6984u;
            // 0x3d6988: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D69A0u;
            goto label_3d69a0;
        }
    }
    ctx->pc = 0x3D698Cu;
label_3d698c:
    // 0x3d698c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x3d698cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_3d6990:
    // 0x3d6990: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3d6990u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3d6994:
    // 0x3d6994: 0x320f809  jalr        $t9
label_3d6998:
    if (ctx->pc == 0x3D6998u) {
        ctx->pc = 0x3D6998u;
            // 0x3d6998: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D699Cu;
        goto label_3d699c;
    }
    ctx->pc = 0x3D6994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D699Cu);
        ctx->pc = 0x3D6998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6994u;
            // 0x3d6998: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D699Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D699Cu; }
            if (ctx->pc != 0x3D699Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3D699Cu;
label_3d699c:
    // 0x3d699c: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x3d699cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_3d69a0:
    // 0x3d69a0: 0x8e2400e4  lw          $a0, 0xE4($s1)
    ctx->pc = 0x3d69a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_3d69a4:
    // 0x3d69a4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3d69a8:
    if (ctx->pc == 0x3D69A8u) {
        ctx->pc = 0x3D69A8u;
            // 0x3d69a8: 0xae2000e4  sw          $zero, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
        ctx->pc = 0x3D69ACu;
        goto label_3d69ac;
    }
    ctx->pc = 0x3D69A4u;
    {
        const bool branch_taken_0x3d69a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d69a4) {
            ctx->pc = 0x3D69A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D69A4u;
            // 0x3d69a8: 0xae2000e4  sw          $zero, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D69C0u;
            goto label_3d69c0;
        }
    }
    ctx->pc = 0x3D69ACu;
label_3d69ac:
    // 0x3d69ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d69acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d69b0:
    // 0x3d69b0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3d69b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3d69b4:
    // 0x3d69b4: 0x320f809  jalr        $t9
label_3d69b8:
    if (ctx->pc == 0x3D69B8u) {
        ctx->pc = 0x3D69B8u;
            // 0x3d69b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D69BCu;
        goto label_3d69bc;
    }
    ctx->pc = 0x3D69B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D69BCu);
        ctx->pc = 0x3D69B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D69B4u;
            // 0x3d69b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D69BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D69BCu; }
            if (ctx->pc != 0x3D69BCu) { return; }
        }
        }
    }
    ctx->pc = 0x3D69BCu;
label_3d69bc:
    // 0x3d69bc: 0xae2000e4  sw          $zero, 0xE4($s1)
    ctx->pc = 0x3d69bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
label_3d69c0:
    // 0x3d69c0: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x3d69c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3d69c4:
    // 0x3d69c4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3d69c8:
    if (ctx->pc == 0x3D69C8u) {
        ctx->pc = 0x3D69C8u;
            // 0x3d69c8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x3D69CCu;
        goto label_3d69cc;
    }
    ctx->pc = 0x3D69C4u;
    {
        const bool branch_taken_0x3d69c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d69c4) {
            ctx->pc = 0x3D69C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D69C4u;
            // 0x3d69c8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D69E0u;
            goto label_3d69e0;
        }
    }
    ctx->pc = 0x3D69CCu;
label_3d69cc:
    // 0x3d69cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d69ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d69d0:
    // 0x3d69d0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3d69d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3d69d4:
    // 0x3d69d4: 0x320f809  jalr        $t9
label_3d69d8:
    if (ctx->pc == 0x3D69D8u) {
        ctx->pc = 0x3D69D8u;
            // 0x3d69d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D69DCu;
        goto label_3d69dc;
    }
    ctx->pc = 0x3D69D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D69DCu);
        ctx->pc = 0x3D69D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D69D4u;
            // 0x3d69d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D69DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D69DCu; }
            if (ctx->pc != 0x3D69DCu) { return; }
        }
        }
    }
    ctx->pc = 0x3D69DCu;
label_3d69dc:
    // 0x3d69dc: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x3d69dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_3d69e0:
    // 0x3d69e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d69e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d69e4:
    // 0x3d69e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d69e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d69e8:
    // 0x3d69e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d69e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d69ec:
    // 0x3d69ec: 0x3e00008  jr          $ra
label_3d69f0:
    if (ctx->pc == 0x3D69F0u) {
        ctx->pc = 0x3D69F0u;
            // 0x3d69f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3D69F4u;
        goto label_3d69f4;
    }
    ctx->pc = 0x3D69ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D69F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D69ECu;
            // 0x3d69f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D69F4u;
label_3d69f4:
    // 0x3d69f4: 0x0  nop
    ctx->pc = 0x3d69f4u;
    // NOP
label_3d69f8:
    // 0x3d69f8: 0x0  nop
    ctx->pc = 0x3d69f8u;
    // NOP
label_3d69fc:
    // 0x3d69fc: 0x0  nop
    ctx->pc = 0x3d69fcu;
    // NOP
label_3d6a00:
    // 0x3d6a00: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x3d6a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_3d6a04:
    // 0x3d6a04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d6a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3d6a08:
    // 0x3d6a08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d6a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d6a0c:
    // 0x3d6a0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3d6a0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d6a10:
    // 0x3d6a10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d6a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d6a14:
    // 0x3d6a14: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3d6a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3d6a18:
    // 0x3d6a18: 0xc0892d0  jal         func_224B40
label_3d6a1c:
    if (ctx->pc == 0x3D6A1Cu) {
        ctx->pc = 0x3D6A1Cu;
            // 0x3d6a1c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x3D6A20u;
        goto label_3d6a20;
    }
    ctx->pc = 0x3D6A18u;
    SET_GPR_U32(ctx, 31, 0x3D6A20u);
    ctx->pc = 0x3D6A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6A18u;
            // 0x3d6a1c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6A20u; }
        if (ctx->pc != 0x3D6A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6A20u; }
        if (ctx->pc != 0x3D6A20u) { return; }
    }
    ctx->pc = 0x3D6A20u;
label_3d6a20:
    // 0x3d6a20: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d6a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3d6a24:
    // 0x3d6a24: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d6a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d6a28:
    // 0x3d6a28: 0x8c426ea8  lw          $v0, 0x6EA8($v0)
    ctx->pc = 0x3d6a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28328)));
label_3d6a2c:
    // 0x3d6a2c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3d6a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3d6a30:
    // 0x3d6a30: 0x8c70e3e0  lw          $s0, -0x1C20($v1)
    ctx->pc = 0x3d6a30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_3d6a34:
    // 0x3d6a34: 0x8c510060  lw          $s1, 0x60($v0)
    ctx->pc = 0x3d6a34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_3d6a38:
    // 0x3d6a38: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3d6a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3d6a3c:
    // 0x3d6a3c: 0xc0b6e68  jal         func_2DB9A0
label_3d6a40:
    if (ctx->pc == 0x3D6A40u) {
        ctx->pc = 0x3D6A40u;
            // 0x3d6a40: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x3D6A44u;
        goto label_3d6a44;
    }
    ctx->pc = 0x3D6A3Cu;
    SET_GPR_U32(ctx, 31, 0x3D6A44u);
    ctx->pc = 0x3D6A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6A3Cu;
            // 0x3d6a40: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6A44u; }
        if (ctx->pc != 0x3D6A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6A44u; }
        if (ctx->pc != 0x3D6A44u) { return; }
    }
    ctx->pc = 0x3D6A44u;
label_3d6a44:
    // 0x3d6a44: 0xc0b6dac  jal         func_2DB6B0
label_3d6a48:
    if (ctx->pc == 0x3D6A48u) {
        ctx->pc = 0x3D6A48u;
            // 0x3d6a48: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3D6A4Cu;
        goto label_3d6a4c;
    }
    ctx->pc = 0x3D6A44u;
    SET_GPR_U32(ctx, 31, 0x3D6A4Cu);
    ctx->pc = 0x3D6A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6A44u;
            // 0x3d6a48: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6A4Cu; }
        if (ctx->pc != 0x3D6A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6A4Cu; }
        if (ctx->pc != 0x3D6A4Cu) { return; }
    }
    ctx->pc = 0x3D6A4Cu;
label_3d6a4c:
    // 0x3d6a4c: 0xc0cac94  jal         func_32B250
label_3d6a50:
    if (ctx->pc == 0x3D6A50u) {
        ctx->pc = 0x3D6A50u;
            // 0x3d6a50: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3D6A54u;
        goto label_3d6a54;
    }
    ctx->pc = 0x3D6A4Cu;
    SET_GPR_U32(ctx, 31, 0x3D6A54u);
    ctx->pc = 0x3D6A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6A4Cu;
            // 0x3d6a50: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6A54u; }
        if (ctx->pc != 0x3D6A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6A54u; }
        if (ctx->pc != 0x3D6A54u) { return; }
    }
    ctx->pc = 0x3D6A54u;
label_3d6a54:
    // 0x3d6a54: 0xc0cac84  jal         func_32B210
label_3d6a58:
    if (ctx->pc == 0x3D6A58u) {
        ctx->pc = 0x3D6A58u;
            // 0x3d6a58: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3D6A5Cu;
        goto label_3d6a5c;
    }
    ctx->pc = 0x3D6A54u;
    SET_GPR_U32(ctx, 31, 0x3D6A5Cu);
    ctx->pc = 0x3D6A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6A54u;
            // 0x3d6a58: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6A5Cu; }
        if (ctx->pc != 0x3D6A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6A5Cu; }
        if (ctx->pc != 0x3D6A5Cu) { return; }
    }
    ctx->pc = 0x3D6A5Cu;
label_3d6a5c:
    // 0x3d6a5c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3d6a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3d6a60:
    // 0x3d6a60: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3d6a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3d6a64:
    // 0x3d6a64: 0xc44cc920  lwc1        $f12, -0x36E0($v0)
    ctx->pc = 0x3d6a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3d6a68:
    // 0x3d6a68: 0xc0a5a68  jal         func_2969A0
label_3d6a6c:
    if (ctx->pc == 0x3D6A6Cu) {
        ctx->pc = 0x3D6A6Cu;
            // 0x3d6a6c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3D6A70u;
        goto label_3d6a70;
    }
    ctx->pc = 0x3D6A68u;
    SET_GPR_U32(ctx, 31, 0x3D6A70u);
    ctx->pc = 0x3D6A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6A68u;
            // 0x3d6a6c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6A70u; }
        if (ctx->pc != 0x3D6A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6A70u; }
        if (ctx->pc != 0x3D6A70u) { return; }
    }
    ctx->pc = 0x3D6A70u;
label_3d6a70:
    // 0x3d6a70: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d6a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3d6a74:
    // 0x3d6a74: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3d6a74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d6a78:
    // 0x3d6a78: 0x8c436ea8  lw          $v1, 0x6EA8($v0)
    ctx->pc = 0x3d6a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28328)));
label_3d6a7c:
    // 0x3d6a7c: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x3d6a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3d6a80:
    // 0x3d6a80: 0xc7ab0094  lwc1        $f11, 0x94($sp)
    ctx->pc = 0x3d6a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_3d6a84:
    // 0x3d6a84: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x3d6a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_3d6a88:
    // 0x3d6a88: 0xc7aa0098  lwc1        $f10, 0x98($sp)
    ctx->pc = 0x3d6a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_3d6a8c:
    // 0x3d6a8c: 0x8c660060  lw          $a2, 0x60($v1)
    ctx->pc = 0x3d6a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_3d6a90:
    // 0x3d6a90: 0x3c023f05  lui         $v0, 0x3F05
    ctx->pc = 0x3d6a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16133 << 16));
label_3d6a94:
    // 0x3d6a94: 0x34481eb8  ori         $t0, $v0, 0x1EB8
    ctx->pc = 0x3d6a94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7864);
label_3d6a98:
    // 0x3d6a98: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x3d6a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_3d6a9c:
    // 0x3d6a9c: 0xafa600c4  sw          $a2, 0xC4($sp)
    ctx->pc = 0x3d6a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 6));
label_3d6aa0:
    // 0x3d6aa0: 0x34470120  ori         $a3, $v0, 0x120
    ctx->pc = 0x3d6aa0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_3d6aa4:
    // 0x3d6aa4: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x3d6aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d6aa8:
    // 0x3d6aa8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d6aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d6aac:
    // 0x3d6aac: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x3d6aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d6ab0:
    // 0x3d6ab0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3d6ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3d6ab4:
    // 0x3d6ab4: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x3d6ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d6ab8:
    // 0x3d6ab8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d6ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d6abc:
    // 0x3d6abc: 0xc7a9009c  lwc1        $f9, 0x9C($sp)
    ctx->pc = 0x3d6abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_3d6ac0:
    // 0x3d6ac0: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x3d6ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_3d6ac4:
    // 0x3d6ac4: 0xc7a800a0  lwc1        $f8, 0xA0($sp)
    ctx->pc = 0x3d6ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_3d6ac8:
    // 0x3d6ac8: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x3d6ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_3d6acc:
    // 0x3d6acc: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x3d6accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_3d6ad0:
    // 0x3d6ad0: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x3d6ad0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_3d6ad4:
    // 0x3d6ad4: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x3d6ad4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_3d6ad8:
    // 0x3d6ad8: 0xc650002c  lwc1        $f16, 0x2C($s2)
    ctx->pc = 0x3d6ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_3d6adc:
    // 0x3d6adc: 0xc64f0028  lwc1        $f15, 0x28($s2)
    ctx->pc = 0x3d6adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_3d6ae0:
    // 0x3d6ae0: 0xc64e0024  lwc1        $f14, 0x24($s2)
    ctx->pc = 0x3d6ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3d6ae4:
    // 0x3d6ae4: 0xc64d0020  lwc1        $f13, 0x20($s2)
    ctx->pc = 0x3d6ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3d6ae8:
    // 0x3d6ae8: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x3d6ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d6aec:
    // 0x3d6aec: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x3d6aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d6af0:
    // 0x3d6af0: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x3d6af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d6af4:
    // 0x3d6af4: 0xa3a90170  sb          $t1, 0x170($sp)
    ctx->pc = 0x3d6af4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 9));
label_3d6af8:
    // 0x3d6af8: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x3d6af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_3d6afc:
    // 0x3d6afc: 0xafa8016c  sw          $t0, 0x16C($sp)
    ctx->pc = 0x3d6afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 8));
label_3d6b00:
    // 0x3d6b00: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x3d6b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d6b04:
    // 0x3d6b04: 0xafa700c0  sw          $a3, 0xC0($sp)
    ctx->pc = 0x3d6b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 7));
label_3d6b08:
    // 0x3d6b08: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x3d6b08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_3d6b0c:
    // 0x3d6b0c: 0xa3a30172  sb          $v1, 0x172($sp)
    ctx->pc = 0x3d6b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 370), (uint8_t)GPR_U32(ctx, 3));
label_3d6b10:
    // 0x3d6b10: 0xe7a1013c  swc1        $f1, 0x13C($sp)
    ctx->pc = 0x3d6b10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_3d6b14:
    // 0x3d6b14: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x3d6b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_3d6b18:
    // 0x3d6b18: 0xc7a700a4  lwc1        $f7, 0xA4($sp)
    ctx->pc = 0x3d6b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3d6b1c:
    // 0x3d6b1c: 0xc7a600a8  lwc1        $f6, 0xA8($sp)
    ctx->pc = 0x3d6b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3d6b20:
    // 0x3d6b20: 0xc7a500ac  lwc1        $f5, 0xAC($sp)
    ctx->pc = 0x3d6b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3d6b24:
    // 0x3d6b24: 0xc7a400b0  lwc1        $f4, 0xB0($sp)
    ctx->pc = 0x3d6b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3d6b28:
    // 0x3d6b28: 0xc7a300b4  lwc1        $f3, 0xB4($sp)
    ctx->pc = 0x3d6b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3d6b2c:
    // 0x3d6b2c: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x3d6b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d6b30:
    // 0x3d6b30: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x3d6b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d6b34:
    // 0x3d6b34: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x3d6b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d6b38:
    // 0x3d6b38: 0xe7ad00e0  swc1        $f13, 0xE0($sp)
    ctx->pc = 0x3d6b38u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_3d6b3c:
    // 0x3d6b3c: 0xe7ae00e4  swc1        $f14, 0xE4($sp)
    ctx->pc = 0x3d6b3cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_3d6b40:
    // 0x3d6b40: 0xe7af00e8  swc1        $f15, 0xE8($sp)
    ctx->pc = 0x3d6b40u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_3d6b44:
    // 0x3d6b44: 0xe7b000ec  swc1        $f16, 0xEC($sp)
    ctx->pc = 0x3d6b44u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_3d6b48:
    // 0x3d6b48: 0xe7ac0110  swc1        $f12, 0x110($sp)
    ctx->pc = 0x3d6b48u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_3d6b4c:
    // 0x3d6b4c: 0xe7ab0114  swc1        $f11, 0x114($sp)
    ctx->pc = 0x3d6b4cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_3d6b50:
    // 0x3d6b50: 0xe7aa0118  swc1        $f10, 0x118($sp)
    ctx->pc = 0x3d6b50u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_3d6b54:
    // 0x3d6b54: 0xe7a9011c  swc1        $f9, 0x11C($sp)
    ctx->pc = 0x3d6b54u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_3d6b58:
    // 0x3d6b58: 0xe7a80120  swc1        $f8, 0x120($sp)
    ctx->pc = 0x3d6b58u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_3d6b5c:
    // 0x3d6b5c: 0xe7a70124  swc1        $f7, 0x124($sp)
    ctx->pc = 0x3d6b5cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_3d6b60:
    // 0x3d6b60: 0xe7a60128  swc1        $f6, 0x128($sp)
    ctx->pc = 0x3d6b60u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_3d6b64:
    // 0x3d6b64: 0xe7a5012c  swc1        $f5, 0x12C($sp)
    ctx->pc = 0x3d6b64u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_3d6b68:
    // 0x3d6b68: 0xe7a40130  swc1        $f4, 0x130($sp)
    ctx->pc = 0x3d6b68u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_3d6b6c:
    // 0x3d6b6c: 0xe7a30134  swc1        $f3, 0x134($sp)
    ctx->pc = 0x3d6b6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_3d6b70:
    // 0x3d6b70: 0xe7a20144  swc1        $f2, 0x144($sp)
    ctx->pc = 0x3d6b70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_3d6b74:
    // 0x3d6b74: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x3d6b74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_3d6b78:
    // 0x3d6b78: 0xc0a7a88  jal         func_29EA20
label_3d6b7c:
    if (ctx->pc == 0x3D6B7Cu) {
        ctx->pc = 0x3D6B7Cu;
            // 0x3d6b7c: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x3D6B80u;
        goto label_3d6b80;
    }
    ctx->pc = 0x3D6B78u;
    SET_GPR_U32(ctx, 31, 0x3D6B80u);
    ctx->pc = 0x3D6B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6B78u;
            // 0x3d6b7c: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6B80u; }
        if (ctx->pc != 0x3D6B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6B80u; }
        if (ctx->pc != 0x3D6B80u) { return; }
    }
    ctx->pc = 0x3D6B80u;
label_3d6b80:
    // 0x3d6b80: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x3d6b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_3d6b84:
    // 0x3d6b84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d6b84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d6b88:
    // 0x3d6b88: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_3d6b8c:
    if (ctx->pc == 0x3D6B8Cu) {
        ctx->pc = 0x3D6B8Cu;
            // 0x3d6b8c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3D6B90u;
        goto label_3d6b90;
    }
    ctx->pc = 0x3D6B88u;
    {
        const bool branch_taken_0x3d6b88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6B88u;
            // 0x3d6b8c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6b88) {
            ctx->pc = 0x3D6BD8u;
            goto label_3d6bd8;
        }
    }
    ctx->pc = 0x3D6B90u;
label_3d6b90:
    // 0x3d6b90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d6b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d6b94:
    // 0x3d6b94: 0xc088ef4  jal         func_223BD0
label_3d6b98:
    if (ctx->pc == 0x3D6B98u) {
        ctx->pc = 0x3D6B98u;
            // 0x3d6b98: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3D6B9Cu;
        goto label_3d6b9c;
    }
    ctx->pc = 0x3D6B94u;
    SET_GPR_U32(ctx, 31, 0x3D6B9Cu);
    ctx->pc = 0x3D6B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6B94u;
            // 0x3d6b98: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6B9Cu; }
        if (ctx->pc != 0x3D6B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6B9Cu; }
        if (ctx->pc != 0x3D6B9Cu) { return; }
    }
    ctx->pc = 0x3D6B9Cu;
label_3d6b9c:
    // 0x3d6b9c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3d6b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3d6ba0:
    // 0x3d6ba0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3d6ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3d6ba4:
    // 0x3d6ba4: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x3d6ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_3d6ba8:
    // 0x3d6ba8: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x3d6ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_3d6bac:
    // 0x3d6bac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3d6bacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3d6bb0:
    // 0x3d6bb0: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x3d6bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
label_3d6bb4:
    // 0x3d6bb4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d6bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d6bb8:
    // 0x3d6bb8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3d6bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3d6bbc:
    // 0x3d6bbc: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x3d6bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
label_3d6bc0:
    // 0x3d6bc0: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x3d6bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
label_3d6bc4:
    // 0x3d6bc4: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x3d6bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_3d6bc8:
    // 0x3d6bc8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3d6bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3d6bcc:
    // 0x3d6bcc: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x3d6bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3d6bd0:
    // 0x3d6bd0: 0xc088b38  jal         func_222CE0
label_3d6bd4:
    if (ctx->pc == 0x3D6BD4u) {
        ctx->pc = 0x3D6BD4u;
            // 0x3d6bd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D6BD8u;
        goto label_3d6bd8;
    }
    ctx->pc = 0x3D6BD0u;
    SET_GPR_U32(ctx, 31, 0x3D6BD8u);
    ctx->pc = 0x3D6BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6BD0u;
            // 0x3d6bd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6BD8u; }
        if (ctx->pc != 0x3D6BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6BD8u; }
        if (ctx->pc != 0x3D6BD8u) { return; }
    }
    ctx->pc = 0x3D6BD8u;
label_3d6bd8:
    // 0x3d6bd8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3d6bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d6bdc:
    // 0x3d6bdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d6bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d6be0:
    // 0x3d6be0: 0xc08c164  jal         func_230590
label_3d6be4:
    if (ctx->pc == 0x3D6BE4u) {
        ctx->pc = 0x3D6BE4u;
            // 0x3d6be4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D6BE8u;
        goto label_3d6be8;
    }
    ctx->pc = 0x3D6BE0u;
    SET_GPR_U32(ctx, 31, 0x3D6BE8u);
    ctx->pc = 0x3D6BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6BE0u;
            // 0x3d6be4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6BE8u; }
        if (ctx->pc != 0x3D6BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6BE8u; }
        if (ctx->pc != 0x3D6BE8u) { return; }
    }
    ctx->pc = 0x3D6BE8u;
label_3d6be8:
    // 0x3d6be8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d6be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d6bec:
    // 0x3d6bec: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3d6becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3d6bf0:
    // 0x3d6bf0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d6bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d6bf4:
    // 0x3d6bf4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3d6bf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d6bf8:
    // 0x3d6bf8: 0xc08914c  jal         func_224530
label_3d6bfc:
    if (ctx->pc == 0x3D6BFCu) {
        ctx->pc = 0x3D6BFCu;
            // 0x3d6bfc: 0xae200200  sw          $zero, 0x200($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x3D6C00u;
        goto label_3d6c00;
    }
    ctx->pc = 0x3D6BF8u;
    SET_GPR_U32(ctx, 31, 0x3D6C00u);
    ctx->pc = 0x3D6BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6BF8u;
            // 0x3d6bfc: 0xae200200  sw          $zero, 0x200($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6C00u; }
        if (ctx->pc != 0x3D6C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6C00u; }
        if (ctx->pc != 0x3D6C00u) { return; }
    }
    ctx->pc = 0x3D6C00u;
label_3d6c00:
    // 0x3d6c00: 0x3c0343d1  lui         $v1, 0x43D1
    ctx->pc = 0x3d6c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17361 << 16));
label_3d6c04:
    // 0x3d6c04: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x3d6c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_3d6c08:
    // 0x3d6c08: 0x34637084  ori         $v1, $v1, 0x7084
    ctx->pc = 0x3d6c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28804);
label_3d6c0c:
    // 0x3d6c0c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3d6c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_3d6c10:
    // 0x3d6c10: 0xae230154  sw          $v1, 0x154($s1)
    ctx->pc = 0x3d6c10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 3));
label_3d6c14:
    // 0x3d6c14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d6c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d6c18:
    // 0x3d6c18: 0xae220158  sw          $v0, 0x158($s1)
    ctx->pc = 0x3d6c18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
label_3d6c1c:
    // 0x3d6c1c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3d6c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3d6c20:
    // 0x3d6c20: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x3d6c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d6c24:
    // 0x3d6c24: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3d6c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3d6c28:
    // 0x3d6c28: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x3d6c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d6c2c:
    // 0x3d6c2c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x3d6c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d6c30:
    // 0x3d6c30: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3d6c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3d6c34:
    // 0x3d6c34: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x3d6c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_3d6c38:
    // 0x3d6c38: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x3d6c38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3d6c3c:
    // 0x3d6c3c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x3d6c3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3d6c40:
    // 0x3d6c40: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x3d6c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3d6c44:
    // 0x3d6c44: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x3d6c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d6c48:
    // 0x3d6c48: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x3d6c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d6c4c:
    // 0x3d6c4c: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x3d6c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d6c50:
    // 0x3d6c50: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3d6c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3d6c54:
    // 0x3d6c54: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3d6c54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3d6c58:
    // 0x3d6c58: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x3d6c58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3d6c5c:
    // 0x3d6c5c: 0xc0892b0  jal         func_224AC0
label_3d6c60:
    if (ctx->pc == 0x3D6C60u) {
        ctx->pc = 0x3D6C60u;
            // 0x3d6c60: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x3D6C64u;
        goto label_3d6c64;
    }
    ctx->pc = 0x3D6C5Cu;
    SET_GPR_U32(ctx, 31, 0x3D6C64u);
    ctx->pc = 0x3D6C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6C5Cu;
            // 0x3d6c60: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6C64u; }
        if (ctx->pc != 0x3D6C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6C64u; }
        if (ctx->pc != 0x3D6C64u) { return; }
    }
    ctx->pc = 0x3D6C64u;
label_3d6c64:
    // 0x3d6c64: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x3d6c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_3d6c68:
    // 0x3d6c68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d6c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d6c6c:
    // 0x3d6c6c: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x3d6c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_3d6c70:
    // 0x3d6c70: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3d6c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3d6c74:
    // 0x3d6c74: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x3d6c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_3d6c78:
    // 0x3d6c78: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3d6c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3d6c7c:
    // 0x3d6c7c: 0xc0891d8  jal         func_224760
label_3d6c80:
    if (ctx->pc == 0x3D6C80u) {
        ctx->pc = 0x3D6C80u;
            // 0x3d6c80: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x3D6C84u;
        goto label_3d6c84;
    }
    ctx->pc = 0x3D6C7Cu;
    SET_GPR_U32(ctx, 31, 0x3D6C84u);
    ctx->pc = 0x3D6C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6C7Cu;
            // 0x3d6c80: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6C84u; }
        if (ctx->pc != 0x3D6C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6C84u; }
        if (ctx->pc != 0x3D6C84u) { return; }
    }
    ctx->pc = 0x3D6C84u;
label_3d6c84:
    // 0x3d6c84: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x3d6c84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
label_3d6c88:
    // 0x3d6c88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d6c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d6c8c:
    // 0x3d6c8c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3d6c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3d6c90:
    // 0x3d6c90: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x3d6c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3d6c94:
    // 0x3d6c94: 0xc0a7a88  jal         func_29EA20
label_3d6c98:
    if (ctx->pc == 0x3D6C98u) {
        ctx->pc = 0x3D6C98u;
            // 0x3d6c98: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x3D6C9Cu;
        goto label_3d6c9c;
    }
    ctx->pc = 0x3D6C94u;
    SET_GPR_U32(ctx, 31, 0x3D6C9Cu);
    ctx->pc = 0x3D6C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6C94u;
            // 0x3d6c98: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6C9Cu; }
        if (ctx->pc != 0x3D6C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6C9Cu; }
        if (ctx->pc != 0x3D6C9Cu) { return; }
    }
    ctx->pc = 0x3D6C9Cu;
label_3d6c9c:
    // 0x3d6c9c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x3d6c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3d6ca0:
    // 0x3d6ca0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d6ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d6ca4:
    // 0x3d6ca4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_3d6ca8:
    if (ctx->pc == 0x3D6CA8u) {
        ctx->pc = 0x3D6CA8u;
            // 0x3d6ca8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3D6CACu;
        goto label_3d6cac;
    }
    ctx->pc = 0x3D6CA4u;
    {
        const bool branch_taken_0x3d6ca4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6CA4u;
            // 0x3d6ca8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6ca4) {
            ctx->pc = 0x3D6CC8u;
            goto label_3d6cc8;
        }
    }
    ctx->pc = 0x3D6CACu;
label_3d6cac:
    // 0x3d6cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d6cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d6cb0:
    // 0x3d6cb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d6cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d6cb4:
    // 0x3d6cb4: 0xc0869d0  jal         func_21A740
label_3d6cb8:
    if (ctx->pc == 0x3D6CB8u) {
        ctx->pc = 0x3D6CB8u;
            // 0x3d6cb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D6CBCu;
        goto label_3d6cbc;
    }
    ctx->pc = 0x3D6CB4u;
    SET_GPR_U32(ctx, 31, 0x3D6CBCu);
    ctx->pc = 0x3D6CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6CB4u;
            // 0x3d6cb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6CBCu; }
        if (ctx->pc != 0x3D6CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6CBCu; }
        if (ctx->pc != 0x3D6CBCu) { return; }
    }
    ctx->pc = 0x3D6CBCu;
label_3d6cbc:
    // 0x3d6cbc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3d6cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3d6cc0:
    // 0x3d6cc0: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x3d6cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_3d6cc4:
    // 0x3d6cc4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3d6cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3d6cc8:
    // 0x3d6cc8: 0xae300210  sw          $s0, 0x210($s1)
    ctx->pc = 0x3d6cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 16));
label_3d6ccc:
    // 0x3d6ccc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d6cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d6cd0:
    // 0x3d6cd0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3d6cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3d6cd4:
    // 0x3d6cd4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3d6cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d6cd8:
    // 0x3d6cd8: 0xc08c650  jal         func_231940
label_3d6cdc:
    if (ctx->pc == 0x3D6CDCu) {
        ctx->pc = 0x3D6CDCu;
            // 0x3d6cdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D6CE0u;
        goto label_3d6ce0;
    }
    ctx->pc = 0x3D6CD8u;
    SET_GPR_U32(ctx, 31, 0x3D6CE0u);
    ctx->pc = 0x3D6CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6CD8u;
            // 0x3d6cdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6CE0u; }
        if (ctx->pc != 0x3D6CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6CE0u; }
        if (ctx->pc != 0x3D6CE0u) { return; }
    }
    ctx->pc = 0x3D6CE0u;
label_3d6ce0:
    // 0x3d6ce0: 0xc040180  jal         func_100600
label_3d6ce4:
    if (ctx->pc == 0x3D6CE4u) {
        ctx->pc = 0x3D6CE4u;
            // 0x3d6ce4: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x3D6CE8u;
        goto label_3d6ce8;
    }
    ctx->pc = 0x3D6CE0u;
    SET_GPR_U32(ctx, 31, 0x3D6CE8u);
    ctx->pc = 0x3D6CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6CE0u;
            // 0x3d6ce4: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6CE8u; }
        if (ctx->pc != 0x3D6CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6CE8u; }
        if (ctx->pc != 0x3D6CE8u) { return; }
    }
    ctx->pc = 0x3D6CE8u;
label_3d6ce8:
    // 0x3d6ce8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_3d6cec:
    if (ctx->pc == 0x3D6CECu) {
        ctx->pc = 0x3D6CECu;
            // 0x3d6cec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D6CF0u;
        goto label_3d6cf0;
    }
    ctx->pc = 0x3D6CE8u;
    {
        const bool branch_taken_0x3d6ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6CE8u;
            // 0x3d6cec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6ce8) {
            ctx->pc = 0x3D6D58u;
            goto label_3d6d58;
        }
    }
    ctx->pc = 0x3D6CF0u;
label_3d6cf0:
    // 0x3d6cf0: 0x8e470050  lw          $a3, 0x50($s2)
    ctx->pc = 0x3d6cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_3d6cf4:
    // 0x3d6cf4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x3d6cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_3d6cf8:
    // 0x3d6cf8: 0x248421e0  addiu       $a0, $a0, 0x21E0
    ctx->pc = 0x3d6cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
label_3d6cfc:
    // 0x3d6cfc: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3d6cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_3d6d00:
    // 0x3d6d00: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d6d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3d6d04:
    // 0x3d6d04: 0x3c023ee6  lui         $v0, 0x3EE6
    ctx->pc = 0x3d6d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16102 << 16));
label_3d6d08:
    // 0x3d6d08: 0xae040048  sw          $a0, 0x48($s0)
    ctx->pc = 0x3d6d08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
label_3d6d0c:
    // 0x3d6d0c: 0x3c06c000  lui         $a2, 0xC000
    ctx->pc = 0x3d6d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49152 << 16));
label_3d6d10:
    // 0x3d6d10: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x3d6d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_3d6d14:
    // 0x3d6d14: 0x24a59960  addiu       $a1, $a1, -0x66A0
    ctx->pc = 0x3d6d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941024));
label_3d6d18:
    // 0x3d6d18: 0xae070024  sw          $a3, 0x24($s0)
    ctx->pc = 0x3d6d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 7));
label_3d6d1c:
    // 0x3d6d1c: 0x246385d0  addiu       $v1, $v1, -0x7A30
    ctx->pc = 0x3d6d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936016));
label_3d6d20:
    // 0x3d6d20: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x3d6d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
label_3d6d24:
    // 0x3d6d24: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x3d6d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_3d6d28:
    // 0x3d6d28: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x3d6d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_3d6d2c:
    // 0x3d6d2c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x3d6d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_3d6d30:
    // 0x3d6d30: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x3d6d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_3d6d34:
    // 0x3d6d34: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x3d6d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_3d6d38:
    // 0x3d6d38: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x3d6d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_3d6d3c:
    // 0x3d6d3c: 0xae05003c  sw          $a1, 0x3C($s0)
    ctx->pc = 0x3d6d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 5));
label_3d6d40:
    // 0x3d6d40: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x3d6d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_3d6d44:
    // 0x3d6d44: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x3d6d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_3d6d48:
    // 0x3d6d48: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x3d6d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_3d6d4c:
    // 0x3d6d4c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x3d6d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_3d6d50:
    // 0x3d6d50: 0xc04c968  jal         func_1325A0
label_3d6d54:
    if (ctx->pc == 0x3D6D54u) {
        ctx->pc = 0x3D6D54u;
            // 0x3d6d54: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x3D6D58u;
        goto label_3d6d58;
    }
    ctx->pc = 0x3D6D50u;
    SET_GPR_U32(ctx, 31, 0x3D6D58u);
    ctx->pc = 0x3D6D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6D50u;
            // 0x3d6d54: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6D58u; }
        if (ctx->pc != 0x3D6D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6D58u; }
        if (ctx->pc != 0x3D6D58u) { return; }
    }
    ctx->pc = 0x3D6D58u;
label_3d6d58:
    // 0x3d6d58: 0xae5000a0  sw          $s0, 0xA0($s2)
    ctx->pc = 0x3d6d58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 16));
label_3d6d5c:
    // 0x3d6d5c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3d6d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3d6d60:
    // 0x3d6d60: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x3d6d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_3d6d64:
    // 0x3d6d64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3d6d64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d6d68:
    // 0x3d6d68: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3d6d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3d6d6c:
    // 0x3d6d6c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3d6d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3d6d70:
    // 0x3d6d70: 0xae4200b0  sw          $v0, 0xB0($s2)
    ctx->pc = 0x3d6d70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
label_3d6d74:
    // 0x3d6d74: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x3d6d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d6d78:
    // 0x3d6d78: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3d6d78u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d6d7c:
    // 0x3d6d7c: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
label_3d6d80:
    if (ctx->pc == 0x3D6D80u) {
        ctx->pc = 0x3D6D80u;
            // 0x3d6d80: 0x8e070060  lw          $a3, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->pc = 0x3D6D84u;
        goto label_3d6d84;
    }
    ctx->pc = 0x3D6D7Cu;
    {
        const bool branch_taken_0x3d6d7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d6d7c) {
            ctx->pc = 0x3D6D80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6D7Cu;
            // 0x3d6d80: 0x8e070060  lw          $a3, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D6DCCu;
            goto label_3d6dcc;
        }
    }
    ctx->pc = 0x3D6D84u;
label_3d6d84:
    // 0x3d6d84: 0x8e070060  lw          $a3, 0x60($s0)
    ctx->pc = 0x3d6d84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_3d6d88:
    // 0x3d6d88: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x3d6d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3d6d8c:
    // 0x3d6d8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3d6d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d6d90:
    // 0x3d6d90: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x3d6d90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
label_3d6d94:
    // 0x3d6d94: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x3d6d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
label_3d6d98:
    // 0x3d6d98: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x3d6d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_3d6d9c:
    // 0x3d6d9c: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x3d6d9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_3d6da0:
    // 0x3d6da0: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x3d6da0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
label_3d6da4:
    // 0x3d6da4: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x3d6da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
label_3d6da8:
    // 0x3d6da8: 0xae45008c  sw          $a1, 0x8C($s2)
    ctx->pc = 0x3d6da8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 5));
label_3d6dac:
    // 0x3d6dac: 0xae440070  sw          $a0, 0x70($s2)
    ctx->pc = 0x3d6dacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 4));
label_3d6db0:
    // 0x3d6db0: 0xae430078  sw          $v1, 0x78($s2)
    ctx->pc = 0x3d6db0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 3));
label_3d6db4:
    // 0x3d6db4: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x3d6db4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
label_3d6db8:
    // 0x3d6db8: 0xa2400068  sb          $zero, 0x68($s2)
    ctx->pc = 0x3d6db8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 0));
label_3d6dbc:
    // 0x3d6dbc: 0xa2450069  sb          $a1, 0x69($s2)
    ctx->pc = 0x3d6dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 5));
label_3d6dc0:
    // 0x3d6dc0: 0xa240006a  sb          $zero, 0x6A($s2)
    ctx->pc = 0x3d6dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 0));
label_3d6dc4:
    // 0x3d6dc4: 0x10000011  b           . + 4 + (0x11 << 2)
label_3d6dc8:
    if (ctx->pc == 0x3D6DC8u) {
        ctx->pc = 0x3D6DC8u;
            // 0x3d6dc8: 0xa245006b  sb          $a1, 0x6B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x3D6DCCu;
        goto label_3d6dcc;
    }
    ctx->pc = 0x3D6DC4u;
    {
        const bool branch_taken_0x3d6dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6DC4u;
            // 0x3d6dc8: 0xa245006b  sb          $a1, 0x6B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6dc4) {
            ctx->pc = 0x3D6E0Cu;
            goto label_3d6e0c;
        }
    }
    ctx->pc = 0x3D6DCCu;
label_3d6dcc:
    // 0x3d6dcc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3d6dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3d6dd0:
    // 0x3d6dd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d6dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d6dd4:
    // 0x3d6dd4: 0x3c0541f0  lui         $a1, 0x41F0
    ctx->pc = 0x3d6dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16880 << 16));
label_3d6dd8:
    // 0x3d6dd8: 0x3c044416  lui         $a0, 0x4416
    ctx->pc = 0x3d6dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17430 << 16));
label_3d6ddc:
    // 0x3d6ddc: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x3d6ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
label_3d6de0:
    // 0x3d6de0: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x3d6de0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_3d6de4:
    // 0x3d6de4: 0xae070060  sw          $a3, 0x60($s0)
    ctx->pc = 0x3d6de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 7));
label_3d6de8:
    // 0x3d6de8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3d6de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3d6dec:
    // 0x3d6dec: 0xae46008c  sw          $a2, 0x8C($s2)
    ctx->pc = 0x3d6decu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 6));
label_3d6df0:
    // 0x3d6df0: 0xae450070  sw          $a1, 0x70($s2)
    ctx->pc = 0x3d6df0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 5));
label_3d6df4:
    // 0x3d6df4: 0xae440078  sw          $a0, 0x78($s2)
    ctx->pc = 0x3d6df4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 4));
label_3d6df8:
    // 0x3d6df8: 0xae430080  sw          $v1, 0x80($s2)
    ctx->pc = 0x3d6df8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 3));
label_3d6dfc:
    // 0x3d6dfc: 0xa2420068  sb          $v0, 0x68($s2)
    ctx->pc = 0x3d6dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 2));
label_3d6e00:
    // 0x3d6e00: 0xa2400069  sb          $zero, 0x69($s2)
    ctx->pc = 0x3d6e00u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 0));
label_3d6e04:
    // 0x3d6e04: 0xa240006a  sb          $zero, 0x6A($s2)
    ctx->pc = 0x3d6e04u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 0));
label_3d6e08:
    // 0x3d6e08: 0xa246006b  sb          $a2, 0x6B($s2)
    ctx->pc = 0x3d6e08u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 6));
label_3d6e0c:
    // 0x3d6e0c: 0xc040180  jal         func_100600
label_3d6e10:
    if (ctx->pc == 0x3D6E10u) {
        ctx->pc = 0x3D6E10u;
            // 0x3d6e10: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x3D6E14u;
        goto label_3d6e14;
    }
    ctx->pc = 0x3D6E0Cu;
    SET_GPR_U32(ctx, 31, 0x3D6E14u);
    ctx->pc = 0x3D6E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6E0Cu;
            // 0x3d6e10: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6E14u; }
        if (ctx->pc != 0x3D6E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6E14u; }
        if (ctx->pc != 0x3D6E14u) { return; }
    }
    ctx->pc = 0x3D6E14u;
label_3d6e14:
    // 0x3d6e14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d6e14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d6e18:
    // 0x3d6e18: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_3d6e1c:
    if (ctx->pc == 0x3D6E1Cu) {
        ctx->pc = 0x3D6E20u;
        goto label_3d6e20;
    }
    ctx->pc = 0x3D6E18u;
    {
        const bool branch_taken_0x3d6e18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6e18) {
            ctx->pc = 0x3D6E98u;
            goto label_3d6e98;
        }
    }
    ctx->pc = 0x3D6E20u;
label_3d6e20:
    // 0x3d6e20: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3d6e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3d6e24:
    // 0x3d6e24: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3d6e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3d6e28:
    // 0x3d6e28: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3d6e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3d6e2c:
    // 0x3d6e2c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x3d6e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3d6e30:
    // 0x3d6e30: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3d6e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_3d6e34:
    // 0x3d6e34: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3d6e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_3d6e38:
    // 0x3d6e38: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x3d6e38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_3d6e3c:
    // 0x3d6e3c: 0xc040138  jal         func_1004E0
label_3d6e40:
    if (ctx->pc == 0x3D6E40u) {
        ctx->pc = 0x3D6E40u;
            // 0x3d6e40: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3D6E44u;
        goto label_3d6e44;
    }
    ctx->pc = 0x3D6E3Cu;
    SET_GPR_U32(ctx, 31, 0x3D6E44u);
    ctx->pc = 0x3D6E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6E3Cu;
            // 0x3d6e40: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6E44u; }
        if (ctx->pc != 0x3D6E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6E44u; }
        if (ctx->pc != 0x3D6E44u) { return; }
    }
    ctx->pc = 0x3D6E44u;
label_3d6e44:
    // 0x3d6e44: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3d6e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3d6e48:
    // 0x3d6e48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d6e48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d6e4c:
    // 0x3d6e4c: 0xc040138  jal         func_1004E0
label_3d6e50:
    if (ctx->pc == 0x3D6E50u) {
        ctx->pc = 0x3D6E50u;
            // 0x3d6e50: 0x240401f0  addiu       $a0, $zero, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
        ctx->pc = 0x3D6E54u;
        goto label_3d6e54;
    }
    ctx->pc = 0x3D6E4Cu;
    SET_GPR_U32(ctx, 31, 0x3D6E54u);
    ctx->pc = 0x3D6E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6E4Cu;
            // 0x3d6e50: 0x240401f0  addiu       $a0, $zero, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6E54u; }
        if (ctx->pc != 0x3D6E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6E54u; }
        if (ctx->pc != 0x3D6E54u) { return; }
    }
    ctx->pc = 0x3D6E54u;
label_3d6e54:
    // 0x3d6e54: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x3d6e54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_3d6e58:
    // 0x3d6e58: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x3d6e58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_3d6e5c:
    // 0x3d6e5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d6e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d6e60:
    // 0x3d6e60: 0x24a583b0  addiu       $a1, $a1, -0x7C50
    ctx->pc = 0x3d6e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935472));
label_3d6e64:
    // 0x3d6e64: 0x24c6b410  addiu       $a2, $a2, -0x4BF0
    ctx->pc = 0x3d6e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947856));
label_3d6e68:
    // 0x3d6e68: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x3d6e68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_3d6e6c:
    // 0x3d6e6c: 0xc040840  jal         func_102100
label_3d6e70:
    if (ctx->pc == 0x3D6E70u) {
        ctx->pc = 0x3D6E70u;
            // 0x3d6e70: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3D6E74u;
        goto label_3d6e74;
    }
    ctx->pc = 0x3D6E6Cu;
    SET_GPR_U32(ctx, 31, 0x3D6E74u);
    ctx->pc = 0x3D6E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6E6Cu;
            // 0x3d6e70: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6E74u; }
        if (ctx->pc != 0x3D6E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6E74u; }
        if (ctx->pc != 0x3D6E74u) { return; }
    }
    ctx->pc = 0x3D6E74u;
label_3d6e74:
    // 0x3d6e74: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3d6e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3d6e78:
    // 0x3d6e78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3d6e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d6e7c:
    // 0x3d6e7c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d6e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3d6e80:
    // 0x3d6e80: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3d6e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3d6e84:
    // 0x3d6e84: 0x28830005  slti        $v1, $a0, 0x5
    ctx->pc = 0x3d6e84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
label_3d6e88:
    // 0x3d6e88: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x3d6e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_3d6e8c:
    // 0x3d6e8c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3d6e8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3d6e90:
    // 0x3d6e90: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_3d6e94:
    if (ctx->pc == 0x3D6E94u) {
        ctx->pc = 0x3D6E98u;
        goto label_3d6e98;
    }
    ctx->pc = 0x3D6E90u;
    {
        const bool branch_taken_0x3d6e90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d6e90) {
            ctx->pc = 0x3D6E7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3d6e7c;
        }
    }
    ctx->pc = 0x3D6E98u;
label_3d6e98:
    // 0x3d6e98: 0xae50009c  sw          $s0, 0x9C($s2)
    ctx->pc = 0x3d6e98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 16));
label_3d6e9c:
    // 0x3d6e9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d6e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d6ea0:
    // 0x3d6ea0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3d6ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_3d6ea4:
    // 0x3d6ea4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3d6ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d6ea8:
    // 0x3d6ea8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3d6ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d6eac:
    // 0x3d6eac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3d6eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d6eb0:
    // 0x3d6eb0: 0xc0e7d2c  jal         func_39F4B0
label_3d6eb4:
    if (ctx->pc == 0x3D6EB4u) {
        ctx->pc = 0x3D6EB4u;
            // 0x3d6eb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D6EB8u;
        goto label_3d6eb8;
    }
    ctx->pc = 0x3D6EB0u;
    SET_GPR_U32(ctx, 31, 0x3D6EB8u);
    ctx->pc = 0x3D6EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6EB0u;
            // 0x3d6eb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6EB8u; }
        if (ctx->pc != 0x3D6EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6EB8u; }
        if (ctx->pc != 0x3D6EB8u) { return; }
    }
    ctx->pc = 0x3D6EB8u;
label_3d6eb8:
    // 0x3d6eb8: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x3d6eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_3d6ebc:
    // 0x3d6ebc: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3d6ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_3d6ec0:
    // 0x3d6ec0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3d6ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d6ec4:
    // 0x3d6ec4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3d6ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d6ec8:
    // 0x3d6ec8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3d6ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d6ecc:
    // 0x3d6ecc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3d6eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d6ed0:
    // 0x3d6ed0: 0xc0e7d2c  jal         func_39F4B0
label_3d6ed4:
    if (ctx->pc == 0x3D6ED4u) {
        ctx->pc = 0x3D6ED4u;
            // 0x3d6ed4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D6ED8u;
        goto label_3d6ed8;
    }
    ctx->pc = 0x3D6ED0u;
    SET_GPR_U32(ctx, 31, 0x3D6ED8u);
    ctx->pc = 0x3D6ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6ED0u;
            // 0x3d6ed4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6ED8u; }
        if (ctx->pc != 0x3D6ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6ED8u; }
        if (ctx->pc != 0x3D6ED8u) { return; }
    }
    ctx->pc = 0x3D6ED8u;
label_3d6ed8:
    // 0x3d6ed8: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x3d6ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_3d6edc:
    // 0x3d6edc: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3d6edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_3d6ee0:
    // 0x3d6ee0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3d6ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d6ee4:
    // 0x3d6ee4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3d6ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d6ee8:
    // 0x3d6ee8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3d6ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d6eec:
    // 0x3d6eec: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3d6eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3d6ef0:
    // 0x3d6ef0: 0xc0e7d2c  jal         func_39F4B0
label_3d6ef4:
    if (ctx->pc == 0x3D6EF4u) {
        ctx->pc = 0x3D6EF4u;
            // 0x3d6ef4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D6EF8u;
        goto label_3d6ef8;
    }
    ctx->pc = 0x3D6EF0u;
    SET_GPR_U32(ctx, 31, 0x3D6EF8u);
    ctx->pc = 0x3D6EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6EF0u;
            // 0x3d6ef4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6EF8u; }
        if (ctx->pc != 0x3D6EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6EF8u; }
        if (ctx->pc != 0x3D6EF8u) { return; }
    }
    ctx->pc = 0x3D6EF8u;
label_3d6ef8:
    // 0x3d6ef8: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x3d6ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_3d6efc:
    // 0x3d6efc: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3d6efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_3d6f00:
    // 0x3d6f00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3d6f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d6f04:
    // 0x3d6f04: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3d6f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3d6f08:
    // 0x3d6f08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3d6f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d6f0c:
    // 0x3d6f0c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x3d6f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3d6f10:
    // 0x3d6f10: 0xc0e7d2c  jal         func_39F4B0
label_3d6f14:
    if (ctx->pc == 0x3D6F14u) {
        ctx->pc = 0x3D6F14u;
            // 0x3d6f14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D6F18u;
        goto label_3d6f18;
    }
    ctx->pc = 0x3D6F10u;
    SET_GPR_U32(ctx, 31, 0x3D6F18u);
    ctx->pc = 0x3D6F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6F10u;
            // 0x3d6f14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6F18u; }
        if (ctx->pc != 0x3D6F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6F18u; }
        if (ctx->pc != 0x3D6F18u) { return; }
    }
    ctx->pc = 0x3D6F18u;
label_3d6f18:
    // 0x3d6f18: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x3d6f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_3d6f1c:
    // 0x3d6f1c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3d6f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_3d6f20:
    // 0x3d6f20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3d6f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d6f24:
    // 0x3d6f24: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3d6f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3d6f28:
    // 0x3d6f28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3d6f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d6f2c:
    // 0x3d6f2c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x3d6f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3d6f30:
    // 0x3d6f30: 0xc0e7d2c  jal         func_39F4B0
label_3d6f34:
    if (ctx->pc == 0x3D6F34u) {
        ctx->pc = 0x3D6F34u;
            // 0x3d6f34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D6F38u;
        goto label_3d6f38;
    }
    ctx->pc = 0x3D6F30u;
    SET_GPR_U32(ctx, 31, 0x3D6F38u);
    ctx->pc = 0x3D6F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6F30u;
            // 0x3d6f34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6F38u; }
        if (ctx->pc != 0x3D6F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6F38u; }
        if (ctx->pc != 0x3D6F38u) { return; }
    }
    ctx->pc = 0x3D6F38u;
label_3d6f38:
    // 0x3d6f38: 0x8e4500b0  lw          $a1, 0xB0($s2)
    ctx->pc = 0x3d6f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_3d6f3c:
    // 0x3d6f3c: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x3d6f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_3d6f40:
    // 0x3d6f40: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d6f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3d6f44:
    // 0x3d6f44: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3d6f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_3d6f48:
    // 0x3d6f48: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x3d6f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_3d6f4c:
    // 0x3d6f4c: 0xae4300b0  sw          $v1, 0xB0($s2)
    ctx->pc = 0x3d6f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 3));
label_3d6f50:
    // 0x3d6f50: 0x8c500e80  lw          $s0, 0xE80($v0)
    ctx->pc = 0x3d6f50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3d6f54:
    // 0x3d6f54: 0xc040180  jal         func_100600
label_3d6f58:
    if (ctx->pc == 0x3D6F58u) {
        ctx->pc = 0x3D6F58u;
            // 0x3d6f58: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x3D6F5Cu;
        goto label_3d6f5c;
    }
    ctx->pc = 0x3D6F54u;
    SET_GPR_U32(ctx, 31, 0x3D6F5Cu);
    ctx->pc = 0x3D6F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6F54u;
            // 0x3d6f58: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6F5Cu; }
        if (ctx->pc != 0x3D6F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6F5Cu; }
        if (ctx->pc != 0x3D6F5Cu) { return; }
    }
    ctx->pc = 0x3D6F5Cu;
label_3d6f5c:
    // 0x3d6f5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d6f5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d6f60:
    // 0x3d6f60: 0x5220000f  beql        $s1, $zero, . + 4 + (0xF << 2)
label_3d6f64:
    if (ctx->pc == 0x3D6F64u) {
        ctx->pc = 0x3D6F64u;
            // 0x3d6f64: 0xae5100e4  sw          $s1, 0xE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 17));
        ctx->pc = 0x3D6F68u;
        goto label_3d6f68;
    }
    ctx->pc = 0x3D6F60u;
    {
        const bool branch_taken_0x3d6f60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6f60) {
            ctx->pc = 0x3D6F64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6F60u;
            // 0x3d6f64: 0xae5100e4  sw          $s1, 0xE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D6FA0u;
            goto label_3d6fa0;
        }
    }
    ctx->pc = 0x3D6F68u;
label_3d6f68:
    // 0x3d6f68: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3d6f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3d6f6c:
    // 0x3d6f6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3d6f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d6f70:
    // 0x3d6f70: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x3d6f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_3d6f74:
    // 0x3d6f74: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x3d6f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3d6f78:
    // 0x3d6f78: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3d6f78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3d6f7c:
    // 0x3d6f7c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3d6f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3d6f80:
    // 0x3d6f80: 0xc040138  jal         func_1004E0
label_3d6f84:
    if (ctx->pc == 0x3D6F84u) {
        ctx->pc = 0x3D6F84u;
            // 0x3d6f84: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3D6F88u;
        goto label_3d6f88;
    }
    ctx->pc = 0x3D6F80u;
    SET_GPR_U32(ctx, 31, 0x3D6F88u);
    ctx->pc = 0x3D6F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6F80u;
            // 0x3d6f84: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6F88u; }
        if (ctx->pc != 0x3D6F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6F88u; }
        if (ctx->pc != 0x3D6F88u) { return; }
    }
    ctx->pc = 0x3D6F88u;
label_3d6f88:
    // 0x3d6f88: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3d6f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3d6f8c:
    // 0x3d6f8c: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x3d6f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_3d6f90:
    // 0x3d6f90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d6f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d6f94:
    // 0x3d6f94: 0xc04a576  jal         func_1295D8
label_3d6f98:
    if (ctx->pc == 0x3D6F98u) {
        ctx->pc = 0x3D6F98u;
            // 0x3d6f98: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3D6F9Cu;
        goto label_3d6f9c;
    }
    ctx->pc = 0x3D6F94u;
    SET_GPR_U32(ctx, 31, 0x3D6F9Cu);
    ctx->pc = 0x3D6F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6F94u;
            // 0x3d6f98: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6F9Cu; }
        if (ctx->pc != 0x3D6F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6F9Cu; }
        if (ctx->pc != 0x3D6F9Cu) { return; }
    }
    ctx->pc = 0x3D6F9Cu;
label_3d6f9c:
    // 0x3d6f9c: 0xae5100e4  sw          $s1, 0xE4($s2)
    ctx->pc = 0x3d6f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 17));
label_3d6fa0:
    // 0x3d6fa0: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x3d6fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_3d6fa4:
    // 0x3d6fa4: 0x92050c6a  lbu         $a1, 0xC6A($s0)
    ctx->pc = 0x3d6fa4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3178)));
label_3d6fa8:
    // 0x3d6fa8: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x3d6fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_3d6fac:
    // 0x3d6fac: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3d6facu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_3d6fb0:
    // 0x3d6fb0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d6fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3d6fb4:
    // 0x3d6fb4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3d6fb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d6fb8:
    // 0x3d6fb8: 0x24c69938  addiu       $a2, $a2, -0x66C8
    ctx->pc = 0x3d6fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940984));
label_3d6fbc:
    // 0x3d6fbc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3d6fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3d6fc0:
    // 0x3d6fc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d6fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d6fc4:
    // 0x3d6fc4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3d6fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_3d6fc8:
    // 0x3d6fc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d6fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d6fcc:
    // 0x3d6fcc: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x3d6fccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d6fd0:
    // 0x3d6fd0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3d6fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3d6fd4:
    // 0x3d6fd4: 0xc122cd8  jal         func_48B360
label_3d6fd8:
    if (ctx->pc == 0x3D6FD8u) {
        ctx->pc = 0x3D6FD8u;
            // 0x3d6fd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D6FDCu;
        goto label_3d6fdc;
    }
    ctx->pc = 0x3D6FD4u;
    SET_GPR_U32(ctx, 31, 0x3D6FDCu);
    ctx->pc = 0x3D6FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6FD4u;
            // 0x3d6fd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6FDCu; }
        if (ctx->pc != 0x3D6FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6FDCu; }
        if (ctx->pc != 0x3D6FDCu) { return; }
    }
    ctx->pc = 0x3D6FDCu;
label_3d6fdc:
    // 0x3d6fdc: 0x92050c6a  lbu         $a1, 0xC6A($s0)
    ctx->pc = 0x3d6fdcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3178)));
label_3d6fe0:
    // 0x3d6fe0: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3d6fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_3d6fe4:
    // 0x3d6fe4: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x3d6fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_3d6fe8:
    // 0x3d6fe8: 0x24c69940  addiu       $a2, $a2, -0x66C0
    ctx->pc = 0x3d6fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940992));
label_3d6fec:
    // 0x3d6fec: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x3d6fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_3d6ff0:
    // 0x3d6ff0: 0x8e4400e4  lw          $a0, 0xE4($s2)
    ctx->pc = 0x3d6ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
label_3d6ff4:
    // 0x3d6ff4: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x3d6ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3d6ff8:
    // 0x3d6ff8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d6ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3d6ffc:
    // 0x3d6ffc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x3d6ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_3d7000:
    // 0x3d7000: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3d7000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d7004:
    // 0x3d7004: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x3d7004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3d7008:
    // 0x3d7008: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3d7008u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d700c:
    // 0x3d700c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3d700cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3d7010:
    // 0x3d7010: 0xc122cd8  jal         func_48B360
label_3d7014:
    if (ctx->pc == 0x3D7014u) {
        ctx->pc = 0x3D7014u;
            // 0x3d7014: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D7018u;
        goto label_3d7018;
    }
    ctx->pc = 0x3D7010u;
    SET_GPR_U32(ctx, 31, 0x3D7018u);
    ctx->pc = 0x3D7014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7010u;
            // 0x3d7014: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7018u; }
        if (ctx->pc != 0x3D7018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7018u; }
        if (ctx->pc != 0x3D7018u) { return; }
    }
    ctx->pc = 0x3D7018u;
label_3d7018:
    // 0x3d7018: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d7018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d701c:
    // 0x3d701c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d701cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d7020:
    // 0x3d7020: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d7020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d7024:
    // 0x3d7024: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d7024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d7028:
    // 0x3d7028: 0x3e00008  jr          $ra
label_3d702c:
    if (ctx->pc == 0x3D702Cu) {
        ctx->pc = 0x3D702Cu;
            // 0x3d702c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x3D7030u;
        goto label_3d7030;
    }
    ctx->pc = 0x3D7028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D702Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7028u;
            // 0x3d702c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D7030u;
label_3d7030:
    // 0x3d7030: 0x3e00008  jr          $ra
label_3d7034:
    if (ctx->pc == 0x3D7034u) {
        ctx->pc = 0x3D7038u;
        goto label_3d7038;
    }
    ctx->pc = 0x3D7030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D7038u;
label_3d7038:
    // 0x3d7038: 0x0  nop
    ctx->pc = 0x3d7038u;
    // NOP
label_3d703c:
    // 0x3d703c: 0x0  nop
    ctx->pc = 0x3d703cu;
    // NOP
label_3d7040:
    // 0x3d7040: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3d7040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3d7044:
    // 0x3d7044: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d7044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3d7048:
    // 0x3d7048: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d7048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d704c:
    // 0x3d704c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3d704cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3d7050:
    // 0x3d7050: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3d7050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3d7054:
    // 0x3d7054: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3d7054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3d7058:
    // 0x3d7058: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x3d7058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_3d705c:
    // 0x3d705c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_3d7060:
    if (ctx->pc == 0x3D7060u) {
        ctx->pc = 0x3D7060u;
            // 0x3d7060: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D7064u;
        goto label_3d7064;
    }
    ctx->pc = 0x3D705Cu;
    {
        const bool branch_taken_0x3d705c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D7060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D705Cu;
            // 0x3d7060: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d705c) {
            ctx->pc = 0x3D706Cu;
            goto label_3d706c;
        }
    }
    ctx->pc = 0x3D7064u;
label_3d7064:
    // 0x3d7064: 0x10000012  b           . + 4 + (0x12 << 2)
label_3d7068:
    if (ctx->pc == 0x3D7068u) {
        ctx->pc = 0x3D7068u;
            // 0x3d7068: 0x8cd00050  lw          $s0, 0x50($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
        ctx->pc = 0x3D706Cu;
        goto label_3d706c;
    }
    ctx->pc = 0x3D7064u;
    {
        const bool branch_taken_0x3d7064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7064u;
            // 0x3d7068: 0x8cd00050  lw          $s0, 0x50($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7064) {
            ctx->pc = 0x3D70B0u;
            goto label_3d70b0;
        }
    }
    ctx->pc = 0x3D706Cu;
label_3d706c:
    // 0x3d706c: 0xc4ac0000  lwc1        $f12, 0x0($a1)
    ctx->pc = 0x3d706cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3d7070:
    // 0x3d7070: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x3d7070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3d7074:
    // 0x3d7074: 0xc4ae0008  lwc1        $f14, 0x8($a1)
    ctx->pc = 0x3d7074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3d7078:
    // 0x3d7078: 0xc04cbd8  jal         func_132F60
label_3d707c:
    if (ctx->pc == 0x3D707Cu) {
        ctx->pc = 0x3D707Cu;
            // 0x3d707c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3D7080u;
        goto label_3d7080;
    }
    ctx->pc = 0x3D7078u;
    SET_GPR_U32(ctx, 31, 0x3D7080u);
    ctx->pc = 0x3D707Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7078u;
            // 0x3d707c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7080u; }
        if (ctx->pc != 0x3D7080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7080u; }
        if (ctx->pc != 0x3D7080u) { return; }
    }
    ctx->pc = 0x3D7080u;
label_3d7080:
    // 0x3d7080: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x3d7080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3d7084:
    // 0x3d7084: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3d7084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d7088:
    // 0x3d7088: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x3d7088u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_3d708c:
    // 0x3d708c: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x3d708cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_3d7090:
    // 0x3d7090: 0xc7ad0074  lwc1        $f13, 0x74($sp)
    ctx->pc = 0x3d7090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3d7094:
    // 0x3d7094: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3d7094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d7098:
    // 0x3d7098: 0xc7ae0078  lwc1        $f14, 0x78($sp)
    ctx->pc = 0x3d7098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3d709c:
    // 0x3d709c: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x3d709cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
label_3d70a0:
    // 0x3d70a0: 0xc0bafb8  jal         func_2EBEE0
label_3d70a4:
    if (ctx->pc == 0x3D70A4u) {
        ctx->pc = 0x3D70A4u;
            // 0x3d70a4: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->pc = 0x3D70A8u;
        goto label_3d70a8;
    }
    ctx->pc = 0x3D70A0u;
    SET_GPR_U32(ctx, 31, 0x3D70A8u);
    ctx->pc = 0x3D70A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D70A0u;
            // 0x3d70a4: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D70A8u; }
        if (ctx->pc != 0x3D70A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D70A8u; }
        if (ctx->pc != 0x3D70A8u) { return; }
    }
    ctx->pc = 0x3D70A8u;
label_3d70a8:
    // 0x3d70a8: 0x1000004a  b           . + 4 + (0x4A << 2)
label_3d70ac:
    if (ctx->pc == 0x3D70ACu) {
        ctx->pc = 0x3D70ACu;
            // 0x3d70ac: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3D70B0u;
        goto label_3d70b0;
    }
    ctx->pc = 0x3D70A8u;
    {
        const bool branch_taken_0x3d70a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D70ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D70A8u;
            // 0x3d70ac: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d70a8) {
            ctx->pc = 0x3D71D4u;
            goto label_3d71d4;
        }
    }
    ctx->pc = 0x3D70B0u;
label_3d70b0:
    // 0x3d70b0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3d70b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d70b4:
    // 0x3d70b4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3d70b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d70b8:
    // 0x3d70b8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x3d70b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3d70bc:
    // 0x3d70bc: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x3d70bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d70c0:
    // 0x3d70c0: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x3d70c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3d70c4:
    // 0x3d70c4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3d70c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d70c8:
    // 0x3d70c8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x3d70c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3d70cc:
    // 0x3d70cc: 0xc04f278  jal         func_13C9E0
label_3d70d0:
    if (ctx->pc == 0x3D70D0u) {
        ctx->pc = 0x3D70D0u;
            // 0x3d70d0: 0x24c50020  addiu       $a1, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->pc = 0x3D70D4u;
        goto label_3d70d4;
    }
    ctx->pc = 0x3D70CCu;
    SET_GPR_U32(ctx, 31, 0x3D70D4u);
    ctx->pc = 0x3D70D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D70CCu;
            // 0x3d70d0: 0x24c50020  addiu       $a1, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D70D4u; }
        if (ctx->pc != 0x3D70D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D70D4u; }
        if (ctx->pc != 0x3D70D4u) { return; }
    }
    ctx->pc = 0x3D70D4u;
label_3d70d4:
    // 0x3d70d4: 0xc6020188  lwc1        $f2, 0x188($s0)
    ctx->pc = 0x3d70d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d70d8:
    // 0x3d70d8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3d70d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_3d70dc:
    // 0x3d70dc: 0xc6010184  lwc1        $f1, 0x184($s0)
    ctx->pc = 0x3d70dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d70e0:
    // 0x3d70e0: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x3d70e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_3d70e4:
    // 0x3d70e4: 0xc6000180  lwc1        $f0, 0x180($s0)
    ctx->pc = 0x3d70e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d70e8:
    // 0x3d70e8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3d70e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3d70ec:
    // 0x3d70ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3d70ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d70f0:
    // 0x3d70f0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3d70f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d70f4:
    // 0x3d70f4: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x3d70f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3d70f8:
    // 0x3d70f8: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x3d70f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3d70fc:
    // 0x3d70fc: 0xc04cb6c  jal         func_132DB0
label_3d7100:
    if (ctx->pc == 0x3D7100u) {
        ctx->pc = 0x3D7100u;
            // 0x3d7100: 0xe7a20088  swc1        $f2, 0x88($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x3D7104u;
        goto label_3d7104;
    }
    ctx->pc = 0x3D70FCu;
    SET_GPR_U32(ctx, 31, 0x3D7104u);
    ctx->pc = 0x3D7100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D70FCu;
            // 0x3d7100: 0xe7a20088  swc1        $f2, 0x88($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DB0u;
    if (runtime->hasFunction(0x132DB0u)) {
        auto targetFn = runtime->lookupFunction(0x132DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7104u; }
        if (ctx->pc != 0x3D7104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132DB0_0x132db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7104u; }
        if (ctx->pc != 0x3D7104u) { return; }
    }
    ctx->pc = 0x3D7104u;
label_3d7104:
    // 0x3d7104: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3d7104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3d7108:
    // 0x3d7108: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3d7108u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_3d710c:
    // 0x3d710c: 0x24c69a20  addiu       $a2, $a2, -0x65E0
    ctx->pc = 0x3d710cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941216));
label_3d7110:
    // 0x3d7110: 0xc04cafc  jal         func_132BF0
label_3d7114:
    if (ctx->pc == 0x3D7114u) {
        ctx->pc = 0x3D7114u;
            // 0x3d7114: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D7118u;
        goto label_3d7118;
    }
    ctx->pc = 0x3D7110u;
    SET_GPR_U32(ctx, 31, 0x3D7118u);
    ctx->pc = 0x3D7114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7110u;
            // 0x3d7114: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7118u; }
        if (ctx->pc != 0x3D7118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7118u; }
        if (ctx->pc != 0x3D7118u) { return; }
    }
    ctx->pc = 0x3D7118u;
label_3d7118:
    // 0x3d7118: 0xc040180  jal         func_100600
label_3d711c:
    if (ctx->pc == 0x3D711Cu) {
        ctx->pc = 0x3D711Cu;
            // 0x3d711c: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->pc = 0x3D7120u;
        goto label_3d7120;
    }
    ctx->pc = 0x3D7118u;
    SET_GPR_U32(ctx, 31, 0x3D7120u);
    ctx->pc = 0x3D711Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7118u;
            // 0x3d711c: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7120u; }
        if (ctx->pc != 0x3D7120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7120u; }
        if (ctx->pc != 0x3D7120u) { return; }
    }
    ctx->pc = 0x3D7120u;
label_3d7120:
    // 0x3d7120: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d7120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d7124:
    // 0x3d7124: 0x1080002a  beqz        $a0, . + 4 + (0x2A << 2)
label_3d7128:
    if (ctx->pc == 0x3D7128u) {
        ctx->pc = 0x3D712Cu;
        goto label_3d712c;
    }
    ctx->pc = 0x3D7124u;
    {
        const bool branch_taken_0x3d7124 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7124) {
            ctx->pc = 0x3D71D0u;
            goto label_3d71d0;
        }
    }
    ctx->pc = 0x3D712Cu;
label_3d712c:
    // 0x3d712c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3d712cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3d7130:
    // 0x3d7130: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3d7130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3d7134:
    // 0x3d7134: 0xc4419a60  lwc1        $f1, -0x65A0($v0)
    ctx->pc = 0x3d7134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d7138:
    // 0x3d7138: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d7138u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d713c:
    // 0x3d713c: 0x0  nop
    ctx->pc = 0x3d713cu;
    // NOP
label_3d7140:
    // 0x3d7140: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3d7140u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d7144:
    // 0x3d7144: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3d7148:
    if (ctx->pc == 0x3D7148u) {
        ctx->pc = 0x3D7148u;
            // 0x3d7148: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3D714Cu;
        goto label_3d714c;
    }
    ctx->pc = 0x3D7144u;
    {
        const bool branch_taken_0x3d7144 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d7144) {
            ctx->pc = 0x3D7148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7144u;
            // 0x3d7148: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D715Cu;
            goto label_3d715c;
        }
    }
    ctx->pc = 0x3D714Cu;
label_3d714c:
    // 0x3d714c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d714cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3d7150:
    // 0x3d7150: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3d7150u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3d7154:
    // 0x3d7154: 0x10000006  b           . + 4 + (0x6 << 2)
label_3d7158:
    if (ctx->pc == 0x3D7158u) {
        ctx->pc = 0x3D715Cu;
        goto label_3d715c;
    }
    ctx->pc = 0x3D7154u;
    {
        const bool branch_taken_0x3d7154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7154) {
            ctx->pc = 0x3D7170u;
            goto label_3d7170;
        }
    }
    ctx->pc = 0x3D715Cu;
label_3d715c:
    // 0x3d715c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3d715cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3d7160:
    // 0x3d7160: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d7160u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3d7164:
    // 0x3d7164: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3d7164u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3d7168:
    // 0x3d7168: 0x0  nop
    ctx->pc = 0x3d7168u;
    // NOP
label_3d716c:
    // 0x3d716c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3d716cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3d7170:
    // 0x3d7170: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3d7170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3d7174:
    // 0x3d7174: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x3d7174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_3d7178:
    // 0x3d7178: 0x24639a30  addiu       $v1, $v1, -0x65D0
    ctx->pc = 0x3d7178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941232));
label_3d717c:
    // 0x3d717c: 0x3c090066  lui         $t1, 0x66
    ctx->pc = 0x3d717cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)102 << 16));
label_3d7180:
    // 0x3d7180: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3d7180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3d7184:
    // 0x3d7184: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3d7184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_3d7188:
    // 0x3d7188: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x3d7188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
label_3d718c:
    // 0x3d718c: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x3d718cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_3d7190:
    // 0x3d7190: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x3d7190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3d7194:
    // 0x3d7194: 0x3c0a0066  lui         $t2, 0x66
    ctx->pc = 0x3d7194u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)102 << 16));
label_3d7198:
    // 0x3d7198: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x3d7198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
label_3d719c:
    // 0x3d719c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3d719cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3d71a0:
    // 0x3d71a0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x3d71a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_3d71a4:
    // 0x3d71a4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3d71a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d71a8:
    // 0x3d71a8: 0xc7ac0094  lwc1        $f12, 0x94($sp)
    ctx->pc = 0x3d71a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3d71ac:
    // 0x3d71ac: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x3d71acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d71b0:
    // 0x3d71b0: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x3d71b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3d71b4:
    // 0x3d71b4: 0x27a80090  addiu       $t0, $sp, 0x90
    ctx->pc = 0x3d71b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3d71b8:
    // 0x3d71b8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x3d71b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_3d71bc:
    // 0x3d71bc: 0x25299a40  addiu       $t1, $t1, -0x65C0
    ctx->pc = 0x3d71bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294941248));
label_3d71c0:
    // 0x3d71c0: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x3d71c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_3d71c4:
    // 0x3d71c4: 0x254a9a50  addiu       $t2, $t2, -0x65B0
    ctx->pc = 0x3d71c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294941264));
label_3d71c8:
    // 0x3d71c8: 0xc0db488  jal         func_36D220
label_3d71cc:
    if (ctx->pc == 0x3D71CCu) {
        ctx->pc = 0x3D71CCu;
            // 0x3d71cc: 0x27ab0080  addiu       $t3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3D71D0u;
        goto label_3d71d0;
    }
    ctx->pc = 0x3D71C8u;
    SET_GPR_U32(ctx, 31, 0x3D71D0u);
    ctx->pc = 0x3D71CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D71C8u;
            // 0x3d71cc: 0x27ab0080  addiu       $t3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D220u;
    if (runtime->hasFunction(0x36D220u)) {
        auto targetFn = runtime->lookupFunction(0x36D220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D71D0u; }
        if (ctx->pc != 0x3D71D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D220_0x36d220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D71D0u; }
        if (ctx->pc != 0x3D71D0u) { return; }
    }
    ctx->pc = 0x3D71D0u;
label_3d71d0:
    // 0x3d71d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d71d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d71d4:
    // 0x3d71d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3d71d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d71d8:
    // 0x3d71d8: 0x3e00008  jr          $ra
label_3d71dc:
    if (ctx->pc == 0x3D71DCu) {
        ctx->pc = 0x3D71DCu;
            // 0x3d71dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3D71E0u;
        goto label_3d71e0;
    }
    ctx->pc = 0x3D71D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D71DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D71D8u;
            // 0x3d71dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D71E0u;
label_3d71e0:
    // 0x3d71e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d71e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3d71e4:
    // 0x3d71e4: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3d71e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_3d71e8:
    // 0x3d71e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d71e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d71ec:
    // 0x3d71ec: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3d71ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d71f0:
    // 0x3d71f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3d71f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3d71f4:
    // 0x3d71f4: 0x24c699d8  addiu       $a2, $a2, -0x6628
    ctx->pc = 0x3d71f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941144));
label_3d71f8:
    // 0x3d71f8: 0xc4a202c0  lwc1        $f2, 0x2C0($a1)
    ctx->pc = 0x3d71f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d71fc:
    // 0x3d71fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d71fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d7200:
    // 0x3d7200: 0xc4a102c4  lwc1        $f1, 0x2C4($a1)
    ctx->pc = 0x3d7200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d7204:
    // 0x3d7204: 0xc4a002c8  lwc1        $f0, 0x2C8($a1)
    ctx->pc = 0x3d7204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d7208:
    // 0x3d7208: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x3d7208u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3d720c:
    // 0x3d720c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3d720cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3d7210:
    // 0x3d7210: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3d7210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3d7214:
    // 0x3d7214: 0xc4a20300  lwc1        $f2, 0x300($a1)
    ctx->pc = 0x3d7214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d7218:
    // 0x3d7218: 0xc4a10304  lwc1        $f1, 0x304($a1)
    ctx->pc = 0x3d7218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d721c:
    // 0x3d721c: 0xc4a00308  lwc1        $f0, 0x308($a1)
    ctx->pc = 0x3d721cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d7220:
    // 0x3d7220: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x3d7220u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3d7224:
    // 0x3d7224: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3d7224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d7228:
    // 0x3d7228: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x3d7228u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3d722c:
    // 0x3d722c: 0xc04cafc  jal         func_132BF0
label_3d7230:
    if (ctx->pc == 0x3D7230u) {
        ctx->pc = 0x3D7230u;
            // 0x3d7230: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->pc = 0x3D7234u;
        goto label_3d7234;
    }
    ctx->pc = 0x3D722Cu;
    SET_GPR_U32(ctx, 31, 0x3D7234u);
    ctx->pc = 0x3D7230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D722Cu;
            // 0x3d7230: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7234u; }
        if (ctx->pc != 0x3D7234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7234u; }
        if (ctx->pc != 0x3D7234u) { return; }
    }
    ctx->pc = 0x3D7234u;
label_3d7234:
    // 0x3d7234: 0xc040180  jal         func_100600
label_3d7238:
    if (ctx->pc == 0x3D7238u) {
        ctx->pc = 0x3D7238u;
            // 0x3d7238: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->pc = 0x3D723Cu;
        goto label_3d723c;
    }
    ctx->pc = 0x3D7234u;
    SET_GPR_U32(ctx, 31, 0x3D723Cu);
    ctx->pc = 0x3D7238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7234u;
            // 0x3d7238: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D723Cu; }
        if (ctx->pc != 0x3D723Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D723Cu; }
        if (ctx->pc != 0x3D723Cu) { return; }
    }
    ctx->pc = 0x3D723Cu;
label_3d723c:
    // 0x3d723c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d723cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d7240:
    // 0x3d7240: 0x5080002a  beql        $a0, $zero, . + 4 + (0x2A << 2)
label_3d7244:
    if (ctx->pc == 0x3D7244u) {
        ctx->pc = 0x3D7244u;
            // 0x3d7244: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3D7248u;
        goto label_3d7248;
    }
    ctx->pc = 0x3D7240u;
    {
        const bool branch_taken_0x3d7240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7240) {
            ctx->pc = 0x3D7244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7240u;
            // 0x3d7244: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D72ECu;
            goto label_3d72ec;
        }
    }
    ctx->pc = 0x3D7248u;
label_3d7248:
    // 0x3d7248: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3d7248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3d724c:
    // 0x3d724c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3d724cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3d7250:
    // 0x3d7250: 0xc4419a18  lwc1        $f1, -0x65E8($v0)
    ctx->pc = 0x3d7250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d7254:
    // 0x3d7254: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d7254u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d7258:
    // 0x3d7258: 0x0  nop
    ctx->pc = 0x3d7258u;
    // NOP
label_3d725c:
    // 0x3d725c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3d725cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d7260:
    // 0x3d7260: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3d7264:
    if (ctx->pc == 0x3D7264u) {
        ctx->pc = 0x3D7264u;
            // 0x3d7264: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3D7268u;
        goto label_3d7268;
    }
    ctx->pc = 0x3D7260u;
    {
        const bool branch_taken_0x3d7260 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d7260) {
            ctx->pc = 0x3D7264u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7260u;
            // 0x3d7264: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D7278u;
            goto label_3d7278;
        }
    }
    ctx->pc = 0x3D7268u;
label_3d7268:
    // 0x3d7268: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d7268u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3d726c:
    // 0x3d726c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3d726cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3d7270:
    // 0x3d7270: 0x10000006  b           . + 4 + (0x6 << 2)
label_3d7274:
    if (ctx->pc == 0x3D7274u) {
        ctx->pc = 0x3D7278u;
        goto label_3d7278;
    }
    ctx->pc = 0x3D7270u;
    {
        const bool branch_taken_0x3d7270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7270) {
            ctx->pc = 0x3D728Cu;
            goto label_3d728c;
        }
    }
    ctx->pc = 0x3D7278u;
label_3d7278:
    // 0x3d7278: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3d7278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3d727c:
    // 0x3d727c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d727cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3d7280:
    // 0x3d7280: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3d7280u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3d7284:
    // 0x3d7284: 0x0  nop
    ctx->pc = 0x3d7284u;
    // NOP
label_3d7288:
    // 0x3d7288: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d7288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3d728c:
    // 0x3d728c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3d728cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3d7290:
    // 0x3d7290: 0x3c090066  lui         $t1, 0x66
    ctx->pc = 0x3d7290u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)102 << 16));
label_3d7294:
    // 0x3d7294: 0x244299e8  addiu       $v0, $v0, -0x6618
    ctx->pc = 0x3d7294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941160));
label_3d7298:
    // 0x3d7298: 0x3c0a0066  lui         $t2, 0x66
    ctx->pc = 0x3d7298u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)102 << 16));
label_3d729c:
    // 0x3d729c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3d729cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_3d72a0:
    // 0x3d72a0: 0x26070890  addiu       $a3, $s0, 0x890
    ctx->pc = 0x3d72a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_3d72a4:
    // 0x3d72a4: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x3d72a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
label_3d72a8:
    // 0x3d72a8: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x3d72a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_3d72ac:
    // 0x3d72ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3d72acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d72b0:
    // 0x3d72b0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3d72b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3d72b4:
    // 0x3d72b4: 0x3c02bf33  lui         $v0, 0xBF33
    ctx->pc = 0x3d72b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48947 << 16));
label_3d72b8:
    // 0x3d72b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3d72b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d72bc:
    // 0x3d72bc: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x3d72bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3d72c0:
    // 0x3d72c0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x3d72c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_3d72c4:
    // 0x3d72c4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x3d72c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_3d72c8:
    // 0x3d72c8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3d72c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d72cc:
    // 0x3d72cc: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x3d72ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_3d72d0:
    // 0x3d72d0: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x3d72d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3d72d4:
    // 0x3d72d4: 0x252999f8  addiu       $t1, $t1, -0x6608
    ctx->pc = 0x3d72d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294941176));
label_3d72d8:
    // 0x3d72d8: 0x254a9a08  addiu       $t2, $t2, -0x65F8
    ctx->pc = 0x3d72d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294941192));
label_3d72dc:
    // 0x3d72dc: 0x27ab0030  addiu       $t3, $sp, 0x30
    ctx->pc = 0x3d72dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d72e0:
    // 0x3d72e0: 0xc0db488  jal         func_36D220
label_3d72e4:
    if (ctx->pc == 0x3D72E4u) {
        ctx->pc = 0x3D72E4u;
            // 0x3d72e4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x3D72E8u;
        goto label_3d72e8;
    }
    ctx->pc = 0x3D72E0u;
    SET_GPR_U32(ctx, 31, 0x3D72E8u);
    ctx->pc = 0x3D72E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D72E0u;
            // 0x3d72e4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D220u;
    if (runtime->hasFunction(0x36D220u)) {
        auto targetFn = runtime->lookupFunction(0x36D220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D72E8u; }
        if (ctx->pc != 0x3D72E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D220_0x36d220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D72E8u; }
        if (ctx->pc != 0x3D72E8u) { return; }
    }
    ctx->pc = 0x3D72E8u;
label_3d72e8:
    // 0x3d72e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d72e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d72ec:
    // 0x3d72ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3d72ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d72f0:
    // 0x3d72f0: 0x3e00008  jr          $ra
label_3d72f4:
    if (ctx->pc == 0x3D72F4u) {
        ctx->pc = 0x3D72F4u;
            // 0x3d72f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3D72F8u;
        goto label_3d72f8;
    }
    ctx->pc = 0x3D72F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D72F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D72F0u;
            // 0x3d72f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D72F8u;
label_3d72f8:
    // 0x3d72f8: 0x0  nop
    ctx->pc = 0x3d72f8u;
    // NOP
label_3d72fc:
    // 0x3d72fc: 0x0  nop
    ctx->pc = 0x3d72fcu;
    // NOP
label_3d7300:
    // 0x3d7300: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d7300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3d7304:
    // 0x3d7304: 0x8ca40d60  lw          $a0, 0xD60($a1)
    ctx->pc = 0x3d7304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3424)));
label_3d7308:
    // 0x3d7308: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x3d7308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3d730c:
    // 0x3d730c: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x3d730cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3d7310:
    // 0x3d7310: 0x90630c6a  lbu         $v1, 0xC6A($v1)
    ctx->pc = 0x3d7310u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3178)));
label_3d7314:
    // 0x3d7314: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3d7314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3d7318:
    // 0x3d7318: 0x24429930  addiu       $v0, $v0, -0x66D0
    ctx->pc = 0x3d7318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940976));
label_3d731c:
    // 0x3d731c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3d731cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3d7320:
    // 0x3d7320: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d7320u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3d7324:
    // 0x3d7324: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d7324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d7328:
    // 0x3d7328: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3d7328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d732c:
    // 0x3d732c: 0x3200008  jr          $t9
label_3d7330:
    if (ctx->pc == 0x3D7330u) {
        ctx->pc = 0x3D7334u;
        goto label_3d7334;
    }
    ctx->pc = 0x3D732Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D7334u;
label_3d7334:
    // 0x3d7334: 0x0  nop
    ctx->pc = 0x3d7334u;
    // NOP
label_3d7338:
    // 0x3d7338: 0x0  nop
    ctx->pc = 0x3d7338u;
    // NOP
label_3d733c:
    // 0x3d733c: 0x0  nop
    ctx->pc = 0x3d733cu;
    // NOP
label_3d7340:
    // 0x3d7340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d7340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3d7344:
    // 0x3d7344: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d7344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d7348:
    // 0x3d7348: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d7348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d734c:
    // 0x3d734c: 0x908300e8  lbu         $v1, 0xE8($a0)
    ctx->pc = 0x3d734cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 232)));
label_3d7350:
    // 0x3d7350: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_3d7354:
    if (ctx->pc == 0x3D7354u) {
        ctx->pc = 0x3D7354u;
            // 0x3d7354: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D7358u;
        goto label_3d7358;
    }
    ctx->pc = 0x3D7350u;
    {
        const bool branch_taken_0x3d7350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7350u;
            // 0x3d7354: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7350) {
            ctx->pc = 0x3D736Cu;
            goto label_3d736c;
        }
    }
    ctx->pc = 0x3D7358u;
label_3d7358:
    // 0x3d7358: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x3d7358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_3d735c:
    // 0x3d735c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d735cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d7360:
    // 0x3d7360: 0xc122d2c  jal         func_48B4B0
label_3d7364:
    if (ctx->pc == 0x3D7364u) {
        ctx->pc = 0x3D7364u;
            // 0x3d7364: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x3D7368u;
        goto label_3d7368;
    }
    ctx->pc = 0x3D7360u;
    SET_GPR_U32(ctx, 31, 0x3D7368u);
    ctx->pc = 0x3D7364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7360u;
            // 0x3d7364: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7368u; }
        if (ctx->pc != 0x3D7368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7368u; }
        if (ctx->pc != 0x3D7368u) { return; }
    }
    ctx->pc = 0x3D7368u;
label_3d7368:
    // 0x3d7368: 0xa20000e8  sb          $zero, 0xE8($s0)
    ctx->pc = 0x3d7368u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 232), (uint8_t)GPR_U32(ctx, 0));
label_3d736c:
    // 0x3d736c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d736cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d7370:
    // 0x3d7370: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d7370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d7374:
    // 0x3d7374: 0x3e00008  jr          $ra
label_3d7378:
    if (ctx->pc == 0x3D7378u) {
        ctx->pc = 0x3D7378u;
            // 0x3d7378: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3D737Cu;
        goto label_3d737c;
    }
    ctx->pc = 0x3D7374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7374u;
            // 0x3d7378: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D737Cu;
label_3d737c:
    // 0x3d737c: 0x0  nop
    ctx->pc = 0x3d737cu;
    // NOP
label_3d7380:
    // 0x3d7380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d7380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3d7384:
    // 0x3d7384: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d7384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d7388:
    // 0x3d7388: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d7388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d738c:
    // 0x3d738c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d738cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d7390:
    // 0x3d7390: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d7390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d7394:
    // 0x3d7394: 0xc0ba938  jal         func_2EA4E0
label_3d7398:
    if (ctx->pc == 0x3D7398u) {
        ctx->pc = 0x3D7398u;
            // 0x3d7398: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x3D739Cu;
        goto label_3d739c;
    }
    ctx->pc = 0x3D7394u;
    SET_GPR_U32(ctx, 31, 0x3D739Cu);
    ctx->pc = 0x3D7398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7394u;
            // 0x3d7398: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA4E0u;
    if (runtime->hasFunction(0x2EA4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EA4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D739Cu; }
        if (ctx->pc != 0x3D739Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EA4E0_0x2ea4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D739Cu; }
        if (ctx->pc != 0x3D739Cu) { return; }
    }
    ctx->pc = 0x3D739Cu;
label_3d739c:
    // 0x3d739c: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x3d739cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_3d73a0:
    // 0x3d73a0: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x3d73a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3d73a4:
    // 0x3d73a4: 0xc122d2c  jal         func_48B4B0
label_3d73a8:
    if (ctx->pc == 0x3D73A8u) {
        ctx->pc = 0x3D73A8u;
            // 0x3d73a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D73ACu;
        goto label_3d73ac;
    }
    ctx->pc = 0x3D73A4u;
    SET_GPR_U32(ctx, 31, 0x3D73ACu);
    ctx->pc = 0x3D73A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D73A4u;
            // 0x3d73a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D73ACu; }
        if (ctx->pc != 0x3D73ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D73ACu; }
        if (ctx->pc != 0x3D73ACu) { return; }
    }
    ctx->pc = 0x3D73ACu;
label_3d73ac:
    // 0x3d73ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d73acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d73b0:
    // 0x3d73b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d73b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d73b4:
    // 0x3d73b4: 0x3e00008  jr          $ra
label_3d73b8:
    if (ctx->pc == 0x3D73B8u) {
        ctx->pc = 0x3D73B8u;
            // 0x3d73b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3D73BCu;
        goto label_3d73bc;
    }
    ctx->pc = 0x3D73B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D73B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D73B4u;
            // 0x3d73b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D73BCu;
label_3d73bc:
    // 0x3d73bc: 0x0  nop
    ctx->pc = 0x3d73bcu;
    // NOP
label_3d73c0:
    // 0x3d73c0: 0x8c8500e0  lw          $a1, 0xE0($a0)
    ctx->pc = 0x3d73c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_3d73c4:
    // 0x3d73c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d73c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d73c8:
    // 0x3d73c8: 0x10a3001e  beq         $a1, $v1, . + 4 + (0x1E << 2)
label_3d73cc:
    if (ctx->pc == 0x3D73CCu) {
        ctx->pc = 0x3D73D0u;
        goto label_3d73d0;
    }
    ctx->pc = 0x3D73C8u;
    {
        const bool branch_taken_0x3d73c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d73c8) {
            ctx->pc = 0x3D7444u;
            goto label_3d7444;
        }
    }
    ctx->pc = 0x3D73D0u;
label_3d73d0:
    // 0x3d73d0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_3d73d4:
    if (ctx->pc == 0x3D73D4u) {
        ctx->pc = 0x3D73D8u;
        goto label_3d73d8;
    }
    ctx->pc = 0x3D73D0u;
    {
        const bool branch_taken_0x3d73d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d73d0) {
            ctx->pc = 0x3D73E0u;
            goto label_3d73e0;
        }
    }
    ctx->pc = 0x3D73D8u;
label_3d73d8:
    // 0x3d73d8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3d73dc:
    if (ctx->pc == 0x3D73DCu) {
        ctx->pc = 0x3D73E0u;
        goto label_3d73e0;
    }
    ctx->pc = 0x3D73D8u;
    {
        const bool branch_taken_0x3d73d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d73d8) {
            ctx->pc = 0x3D7444u;
            goto label_3d7444;
        }
    }
    ctx->pc = 0x3D73E0u;
label_3d73e0:
    // 0x3d73e0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3d73e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3d73e4:
    // 0x3d73e4: 0x8c85009c  lw          $a1, 0x9C($a0)
    ctx->pc = 0x3d73e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_3d73e8:
    // 0x3d73e8: 0x8c636ea8  lw          $v1, 0x6EA8($v1)
    ctx->pc = 0x3d73e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28328)));
label_3d73ec:
    // 0x3d73ec: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x3d73ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_3d73f0:
    // 0x3d73f0: 0x8c690030  lw          $t1, 0x30($v1)
    ctx->pc = 0x3d73f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_3d73f4:
    // 0x3d73f4: 0xaca9000c  sw          $t1, 0xC($a1)
    ctx->pc = 0x3d73f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 9));
label_3d73f8:
    // 0x3d73f8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3d73f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3d73fc:
    // 0x3d73fc: 0x8cab0000  lw          $t3, 0x0($a1)
    ctx->pc = 0x3d73fcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3d7400:
    // 0x3d7400: 0x8caa0010  lw          $t2, 0x10($a1)
    ctx->pc = 0x3d7400u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_3d7404:
    // 0x3d7404: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x3d7404u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_3d7408:
    // 0x3d7408: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x3d7408u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_3d740c:
    // 0x3d740c: 0x8c65f7b8  lw          $a1, -0x848($v1)
    ctx->pc = 0x3d740cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965176)));
label_3d7410:
    // 0x3d7410: 0x8d070018  lw          $a3, 0x18($t0)
    ctx->pc = 0x3d7410u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_3d7414:
    // 0x3d7414: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x3d7414u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_3d7418:
    // 0x3d7418: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x3d7418u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_3d741c:
    // 0x3d741c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x3d741cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_3d7420:
    // 0x3d7420: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x3d7420u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_3d7424:
    // 0x3d7424: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x3d7424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_3d7428:
    // 0x3d7428: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x3d7428u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3d742c:
    // 0x3d742c: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x3d742cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_3d7430:
    // 0x3d7430: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x3d7430u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3d7434:
    // 0x3d7434: 0x1d40fff3  bgtz        $t2, . + 4 + (-0xD << 2)
label_3d7438:
    if (ctx->pc == 0x3D7438u) {
        ctx->pc = 0x3D7438u;
            // 0x3d7438: 0xa1050020  sb          $a1, 0x20($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 32), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x3D743Cu;
        goto label_3d743c;
    }
    ctx->pc = 0x3D7434u;
    {
        const bool branch_taken_0x3d7434 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x3D7438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7434u;
            // 0x3d7438: 0xa1050020  sb          $a1, 0x20($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 32), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7434) {
            ctx->pc = 0x3D7404u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3d7404;
        }
    }
    ctx->pc = 0x3D743Cu;
label_3d743c:
    // 0x3d743c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d743cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d7440:
    // 0x3d7440: 0xac8300e0  sw          $v1, 0xE0($a0)
    ctx->pc = 0x3d7440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
label_3d7444:
    // 0x3d7444: 0x3e00008  jr          $ra
label_3d7448:
    if (ctx->pc == 0x3D7448u) {
        ctx->pc = 0x3D744Cu;
        goto label_3d744c;
    }
    ctx->pc = 0x3D7444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D744Cu;
label_3d744c:
    // 0x3d744c: 0x0  nop
    ctx->pc = 0x3d744cu;
    // NOP
label_3d7450:
    // 0x3d7450: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d7450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3d7454:
    // 0x3d7454: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d7454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d7458:
    // 0x3d7458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d7458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d745c:
    // 0x3d745c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d745cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d7460:
    // 0x3d7460: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d7460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d7464:
    // 0x3d7464: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x3d7464u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_3d7468:
    // 0x3d7468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d7468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d746c:
    // 0x3d746c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3d746cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_3d7470:
    // 0x3d7470: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x3d7470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_3d7474:
    // 0x3d7474: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x3d7474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_3d7478:
    // 0x3d7478: 0xc088b74  jal         func_222DD0
label_3d747c:
    if (ctx->pc == 0x3D747Cu) {
        ctx->pc = 0x3D747Cu;
            // 0x3d747c: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x3D7480u;
        goto label_3d7480;
    }
    ctx->pc = 0x3D7478u;
    SET_GPR_U32(ctx, 31, 0x3D7480u);
    ctx->pc = 0x3D747Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7478u;
            // 0x3d747c: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7480u; }
        if (ctx->pc != 0x3D7480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7480u; }
        if (ctx->pc != 0x3D7480u) { return; }
    }
    ctx->pc = 0x3D7480u;
label_3d7480:
    // 0x3d7480: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x3d7480u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3d7484:
    // 0x3d7484: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x3d7484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_3d7488:
    // 0x3d7488: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3d7488u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3d748c:
    // 0x3d748c: 0x320f809  jalr        $t9
label_3d7490:
    if (ctx->pc == 0x3D7490u) {
        ctx->pc = 0x3D7490u;
            // 0x3d7490: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3D7494u;
        goto label_3d7494;
    }
    ctx->pc = 0x3D748Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D7494u);
        ctx->pc = 0x3D7490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D748Cu;
            // 0x3d7490: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D7494u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D7494u; }
            if (ctx->pc != 0x3D7494u) { return; }
        }
        }
    }
    ctx->pc = 0x3D7494u;
label_3d7494:
    // 0x3d7494: 0xc088b74  jal         func_222DD0
label_3d7498:
    if (ctx->pc == 0x3D7498u) {
        ctx->pc = 0x3D7498u;
            // 0x3d7498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D749Cu;
        goto label_3d749c;
    }
    ctx->pc = 0x3D7494u;
    SET_GPR_U32(ctx, 31, 0x3D749Cu);
    ctx->pc = 0x3D7498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7494u;
            // 0x3d7498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D749Cu; }
        if (ctx->pc != 0x3D749Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D749Cu; }
        if (ctx->pc != 0x3D749Cu) { return; }
    }
    ctx->pc = 0x3D749Cu;
label_3d749c:
    // 0x3d749c: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x3d749cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3d74a0:
    // 0x3d74a0: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x3d74a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_3d74a4:
    // 0x3d74a4: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x3d74a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_3d74a8:
    // 0x3d74a8: 0x320f809  jalr        $t9
label_3d74ac:
    if (ctx->pc == 0x3D74ACu) {
        ctx->pc = 0x3D74ACu;
            // 0x3d74ac: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3D74B0u;
        goto label_3d74b0;
    }
    ctx->pc = 0x3D74A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D74B0u);
        ctx->pc = 0x3D74ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D74A8u;
            // 0x3d74ac: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D74B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D74B0u; }
            if (ctx->pc != 0x3D74B0u) { return; }
        }
        }
    }
    ctx->pc = 0x3D74B0u;
label_3d74b0:
    // 0x3d74b0: 0x3c0300e1  lui         $v1, 0xE1
    ctx->pc = 0x3d74b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)225 << 16));
label_3d74b4:
    // 0x3d74b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d74b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d74b8:
    // 0x3d74b8: 0x34630120  ori         $v1, $v1, 0x120
    ctx->pc = 0x3d74b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)288);
label_3d74bc:
    // 0x3d74bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d74bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d74c0:
    // 0x3d74c0: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x3d74c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_3d74c4:
    // 0x3d74c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d74c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d74c8:
    // 0x3d74c8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3d74c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3d74cc:
    // 0x3d74cc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3d74ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d74d0:
    // 0x3d74d0: 0xc08bff0  jal         func_22FFC0
label_3d74d4:
    if (ctx->pc == 0x3D74D4u) {
        ctx->pc = 0x3D74D4u;
            // 0x3d74d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D74D8u;
        goto label_3d74d8;
    }
    ctx->pc = 0x3D74D0u;
    SET_GPR_U32(ctx, 31, 0x3D74D8u);
    ctx->pc = 0x3D74D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D74D0u;
            // 0x3d74d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D74D8u; }
        if (ctx->pc != 0x3D74D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D74D8u; }
        if (ctx->pc != 0x3D74D8u) { return; }
    }
    ctx->pc = 0x3D74D8u;
label_3d74d8:
    // 0x3d74d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d74d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d74dc:
    // 0x3d74dc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3d74dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3d74e0:
    // 0x3d74e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d74e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d74e4:
    // 0x3d74e4: 0xc08914c  jal         func_224530
label_3d74e8:
    if (ctx->pc == 0x3D74E8u) {
        ctx->pc = 0x3D74E8u;
            // 0x3d74e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D74ECu;
        goto label_3d74ec;
    }
    ctx->pc = 0x3D74E4u;
    SET_GPR_U32(ctx, 31, 0x3D74ECu);
    ctx->pc = 0x3D74E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D74E4u;
            // 0x3d74e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D74ECu; }
        if (ctx->pc != 0x3D74ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D74ECu; }
        if (ctx->pc != 0x3D74ECu) { return; }
    }
    ctx->pc = 0x3D74ECu;
label_3d74ec:
    // 0x3d74ec: 0xc0e393c  jal         func_38E4F0
label_3d74f0:
    if (ctx->pc == 0x3D74F0u) {
        ctx->pc = 0x3D74F0u;
            // 0x3d74f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D74F4u;
        goto label_3d74f4;
    }
    ctx->pc = 0x3D74ECu;
    SET_GPR_U32(ctx, 31, 0x3D74F4u);
    ctx->pc = 0x3D74F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D74ECu;
            // 0x3d74f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D74F4u; }
        if (ctx->pc != 0x3D74F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D74F4u; }
        if (ctx->pc != 0x3D74F4u) { return; }
    }
    ctx->pc = 0x3D74F4u;
label_3d74f4:
    // 0x3d74f4: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x3d74f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_3d74f8:
    // 0x3d74f8: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x3d74f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
label_3d74fc:
    // 0x3d74fc: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x3d74fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3d7500:
    // 0x3d7500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d7500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d7504:
    // 0x3d7504: 0x3c0243d1  lui         $v0, 0x43D1
    ctx->pc = 0x3d7504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17361 << 16));
label_3d7508:
    // 0x3d7508: 0xae030160  sw          $v1, 0x160($s0)
    ctx->pc = 0x3d7508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 3));
label_3d750c:
    // 0x3d750c: 0x34427084  ori         $v0, $v0, 0x7084
    ctx->pc = 0x3d750cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28804);
label_3d7510:
    // 0x3d7510: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3d7510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3d7514:
    // 0x3d7514: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x3d7514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
label_3d7518:
    // 0x3d7518: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3d7518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d751c:
    // 0x3d751c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x3d751cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_3d7520:
    // 0x3d7520: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3d7520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_3d7524:
    // 0x3d7524: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x3d7524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
label_3d7528:
    // 0x3d7528: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x3d7528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d752c:
    // 0x3d752c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x3d752cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d7530:
    // 0x3d7530: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x3d7530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d7534:
    // 0x3d7534: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3d7534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3d7538:
    // 0x3d7538: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x3d7538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_3d753c:
    // 0x3d753c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3d753cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3d7540:
    // 0x3d7540: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x3d7540u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3d7544:
    // 0x3d7544: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x3d7544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3d7548:
    // 0x3d7548: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x3d7548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d754c:
    // 0x3d754c: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x3d754cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d7550:
    // 0x3d7550: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x3d7550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d7554:
    // 0x3d7554: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3d7554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3d7558:
    // 0x3d7558: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x3d7558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3d755c:
    // 0x3d755c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x3d755cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3d7560:
    // 0x3d7560: 0xc0892b0  jal         func_224AC0
label_3d7564:
    if (ctx->pc == 0x3D7564u) {
        ctx->pc = 0x3D7564u;
            // 0x3d7564: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x3D7568u;
        goto label_3d7568;
    }
    ctx->pc = 0x3D7560u;
    SET_GPR_U32(ctx, 31, 0x3D7568u);
    ctx->pc = 0x3D7564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D7560u;
            // 0x3d7564: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7568u; }
        if (ctx->pc != 0x3D7568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D7568u; }
        if (ctx->pc != 0x3D7568u) { return; }
    }
    ctx->pc = 0x3D7568u;
label_3d7568:
    // 0x3d7568: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d7568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d756c:
    // 0x3d756c: 0xa22300e8  sb          $v1, 0xE8($s1)
    ctx->pc = 0x3d756cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 232), (uint8_t)GPR_U32(ctx, 3));
label_3d7570:
    // 0x3d7570: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d7570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d7574:
    // 0x3d7574: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d7574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d7578:
    // 0x3d7578: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d7578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d757c:
    // 0x3d757c: 0x3e00008  jr          $ra
label_3d7580:
    if (ctx->pc == 0x3D7580u) {
        ctx->pc = 0x3D7580u;
            // 0x3d7580: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3D7584u;
        goto label_3d7584;
    }
    ctx->pc = 0x3D757Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D757Cu;
            // 0x3d7580: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D7584u;
label_3d7584:
    // 0x3d7584: 0x0  nop
    ctx->pc = 0x3d7584u;
    // NOP
label_3d7588:
    // 0x3d7588: 0x0  nop
    ctx->pc = 0x3d7588u;
    // NOP
label_3d758c:
    // 0x3d758c: 0x0  nop
    ctx->pc = 0x3d758cu;
    // NOP
}
