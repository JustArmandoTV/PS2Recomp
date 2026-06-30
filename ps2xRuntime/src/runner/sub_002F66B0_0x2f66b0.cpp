#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F66B0
// Address: 0x2f66b0 - 0x2f6ea0
void sub_002F66B0_0x2f66b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F66B0_0x2f66b0");
#endif

    switch (ctx->pc) {
        case 0x2f66b0u: goto label_2f66b0;
        case 0x2f66b4u: goto label_2f66b4;
        case 0x2f66b8u: goto label_2f66b8;
        case 0x2f66bcu: goto label_2f66bc;
        case 0x2f66c0u: goto label_2f66c0;
        case 0x2f66c4u: goto label_2f66c4;
        case 0x2f66c8u: goto label_2f66c8;
        case 0x2f66ccu: goto label_2f66cc;
        case 0x2f66d0u: goto label_2f66d0;
        case 0x2f66d4u: goto label_2f66d4;
        case 0x2f66d8u: goto label_2f66d8;
        case 0x2f66dcu: goto label_2f66dc;
        case 0x2f66e0u: goto label_2f66e0;
        case 0x2f66e4u: goto label_2f66e4;
        case 0x2f66e8u: goto label_2f66e8;
        case 0x2f66ecu: goto label_2f66ec;
        case 0x2f66f0u: goto label_2f66f0;
        case 0x2f66f4u: goto label_2f66f4;
        case 0x2f66f8u: goto label_2f66f8;
        case 0x2f66fcu: goto label_2f66fc;
        case 0x2f6700u: goto label_2f6700;
        case 0x2f6704u: goto label_2f6704;
        case 0x2f6708u: goto label_2f6708;
        case 0x2f670cu: goto label_2f670c;
        case 0x2f6710u: goto label_2f6710;
        case 0x2f6714u: goto label_2f6714;
        case 0x2f6718u: goto label_2f6718;
        case 0x2f671cu: goto label_2f671c;
        case 0x2f6720u: goto label_2f6720;
        case 0x2f6724u: goto label_2f6724;
        case 0x2f6728u: goto label_2f6728;
        case 0x2f672cu: goto label_2f672c;
        case 0x2f6730u: goto label_2f6730;
        case 0x2f6734u: goto label_2f6734;
        case 0x2f6738u: goto label_2f6738;
        case 0x2f673cu: goto label_2f673c;
        case 0x2f6740u: goto label_2f6740;
        case 0x2f6744u: goto label_2f6744;
        case 0x2f6748u: goto label_2f6748;
        case 0x2f674cu: goto label_2f674c;
        case 0x2f6750u: goto label_2f6750;
        case 0x2f6754u: goto label_2f6754;
        case 0x2f6758u: goto label_2f6758;
        case 0x2f675cu: goto label_2f675c;
        case 0x2f6760u: goto label_2f6760;
        case 0x2f6764u: goto label_2f6764;
        case 0x2f6768u: goto label_2f6768;
        case 0x2f676cu: goto label_2f676c;
        case 0x2f6770u: goto label_2f6770;
        case 0x2f6774u: goto label_2f6774;
        case 0x2f6778u: goto label_2f6778;
        case 0x2f677cu: goto label_2f677c;
        case 0x2f6780u: goto label_2f6780;
        case 0x2f6784u: goto label_2f6784;
        case 0x2f6788u: goto label_2f6788;
        case 0x2f678cu: goto label_2f678c;
        case 0x2f6790u: goto label_2f6790;
        case 0x2f6794u: goto label_2f6794;
        case 0x2f6798u: goto label_2f6798;
        case 0x2f679cu: goto label_2f679c;
        case 0x2f67a0u: goto label_2f67a0;
        case 0x2f67a4u: goto label_2f67a4;
        case 0x2f67a8u: goto label_2f67a8;
        case 0x2f67acu: goto label_2f67ac;
        case 0x2f67b0u: goto label_2f67b0;
        case 0x2f67b4u: goto label_2f67b4;
        case 0x2f67b8u: goto label_2f67b8;
        case 0x2f67bcu: goto label_2f67bc;
        case 0x2f67c0u: goto label_2f67c0;
        case 0x2f67c4u: goto label_2f67c4;
        case 0x2f67c8u: goto label_2f67c8;
        case 0x2f67ccu: goto label_2f67cc;
        case 0x2f67d0u: goto label_2f67d0;
        case 0x2f67d4u: goto label_2f67d4;
        case 0x2f67d8u: goto label_2f67d8;
        case 0x2f67dcu: goto label_2f67dc;
        case 0x2f67e0u: goto label_2f67e0;
        case 0x2f67e4u: goto label_2f67e4;
        case 0x2f67e8u: goto label_2f67e8;
        case 0x2f67ecu: goto label_2f67ec;
        case 0x2f67f0u: goto label_2f67f0;
        case 0x2f67f4u: goto label_2f67f4;
        case 0x2f67f8u: goto label_2f67f8;
        case 0x2f67fcu: goto label_2f67fc;
        case 0x2f6800u: goto label_2f6800;
        case 0x2f6804u: goto label_2f6804;
        case 0x2f6808u: goto label_2f6808;
        case 0x2f680cu: goto label_2f680c;
        case 0x2f6810u: goto label_2f6810;
        case 0x2f6814u: goto label_2f6814;
        case 0x2f6818u: goto label_2f6818;
        case 0x2f681cu: goto label_2f681c;
        case 0x2f6820u: goto label_2f6820;
        case 0x2f6824u: goto label_2f6824;
        case 0x2f6828u: goto label_2f6828;
        case 0x2f682cu: goto label_2f682c;
        case 0x2f6830u: goto label_2f6830;
        case 0x2f6834u: goto label_2f6834;
        case 0x2f6838u: goto label_2f6838;
        case 0x2f683cu: goto label_2f683c;
        case 0x2f6840u: goto label_2f6840;
        case 0x2f6844u: goto label_2f6844;
        case 0x2f6848u: goto label_2f6848;
        case 0x2f684cu: goto label_2f684c;
        case 0x2f6850u: goto label_2f6850;
        case 0x2f6854u: goto label_2f6854;
        case 0x2f6858u: goto label_2f6858;
        case 0x2f685cu: goto label_2f685c;
        case 0x2f6860u: goto label_2f6860;
        case 0x2f6864u: goto label_2f6864;
        case 0x2f6868u: goto label_2f6868;
        case 0x2f686cu: goto label_2f686c;
        case 0x2f6870u: goto label_2f6870;
        case 0x2f6874u: goto label_2f6874;
        case 0x2f6878u: goto label_2f6878;
        case 0x2f687cu: goto label_2f687c;
        case 0x2f6880u: goto label_2f6880;
        case 0x2f6884u: goto label_2f6884;
        case 0x2f6888u: goto label_2f6888;
        case 0x2f688cu: goto label_2f688c;
        case 0x2f6890u: goto label_2f6890;
        case 0x2f6894u: goto label_2f6894;
        case 0x2f6898u: goto label_2f6898;
        case 0x2f689cu: goto label_2f689c;
        case 0x2f68a0u: goto label_2f68a0;
        case 0x2f68a4u: goto label_2f68a4;
        case 0x2f68a8u: goto label_2f68a8;
        case 0x2f68acu: goto label_2f68ac;
        case 0x2f68b0u: goto label_2f68b0;
        case 0x2f68b4u: goto label_2f68b4;
        case 0x2f68b8u: goto label_2f68b8;
        case 0x2f68bcu: goto label_2f68bc;
        case 0x2f68c0u: goto label_2f68c0;
        case 0x2f68c4u: goto label_2f68c4;
        case 0x2f68c8u: goto label_2f68c8;
        case 0x2f68ccu: goto label_2f68cc;
        case 0x2f68d0u: goto label_2f68d0;
        case 0x2f68d4u: goto label_2f68d4;
        case 0x2f68d8u: goto label_2f68d8;
        case 0x2f68dcu: goto label_2f68dc;
        case 0x2f68e0u: goto label_2f68e0;
        case 0x2f68e4u: goto label_2f68e4;
        case 0x2f68e8u: goto label_2f68e8;
        case 0x2f68ecu: goto label_2f68ec;
        case 0x2f68f0u: goto label_2f68f0;
        case 0x2f68f4u: goto label_2f68f4;
        case 0x2f68f8u: goto label_2f68f8;
        case 0x2f68fcu: goto label_2f68fc;
        case 0x2f6900u: goto label_2f6900;
        case 0x2f6904u: goto label_2f6904;
        case 0x2f6908u: goto label_2f6908;
        case 0x2f690cu: goto label_2f690c;
        case 0x2f6910u: goto label_2f6910;
        case 0x2f6914u: goto label_2f6914;
        case 0x2f6918u: goto label_2f6918;
        case 0x2f691cu: goto label_2f691c;
        case 0x2f6920u: goto label_2f6920;
        case 0x2f6924u: goto label_2f6924;
        case 0x2f6928u: goto label_2f6928;
        case 0x2f692cu: goto label_2f692c;
        case 0x2f6930u: goto label_2f6930;
        case 0x2f6934u: goto label_2f6934;
        case 0x2f6938u: goto label_2f6938;
        case 0x2f693cu: goto label_2f693c;
        case 0x2f6940u: goto label_2f6940;
        case 0x2f6944u: goto label_2f6944;
        case 0x2f6948u: goto label_2f6948;
        case 0x2f694cu: goto label_2f694c;
        case 0x2f6950u: goto label_2f6950;
        case 0x2f6954u: goto label_2f6954;
        case 0x2f6958u: goto label_2f6958;
        case 0x2f695cu: goto label_2f695c;
        case 0x2f6960u: goto label_2f6960;
        case 0x2f6964u: goto label_2f6964;
        case 0x2f6968u: goto label_2f6968;
        case 0x2f696cu: goto label_2f696c;
        case 0x2f6970u: goto label_2f6970;
        case 0x2f6974u: goto label_2f6974;
        case 0x2f6978u: goto label_2f6978;
        case 0x2f697cu: goto label_2f697c;
        case 0x2f6980u: goto label_2f6980;
        case 0x2f6984u: goto label_2f6984;
        case 0x2f6988u: goto label_2f6988;
        case 0x2f698cu: goto label_2f698c;
        case 0x2f6990u: goto label_2f6990;
        case 0x2f6994u: goto label_2f6994;
        case 0x2f6998u: goto label_2f6998;
        case 0x2f699cu: goto label_2f699c;
        case 0x2f69a0u: goto label_2f69a0;
        case 0x2f69a4u: goto label_2f69a4;
        case 0x2f69a8u: goto label_2f69a8;
        case 0x2f69acu: goto label_2f69ac;
        case 0x2f69b0u: goto label_2f69b0;
        case 0x2f69b4u: goto label_2f69b4;
        case 0x2f69b8u: goto label_2f69b8;
        case 0x2f69bcu: goto label_2f69bc;
        case 0x2f69c0u: goto label_2f69c0;
        case 0x2f69c4u: goto label_2f69c4;
        case 0x2f69c8u: goto label_2f69c8;
        case 0x2f69ccu: goto label_2f69cc;
        case 0x2f69d0u: goto label_2f69d0;
        case 0x2f69d4u: goto label_2f69d4;
        case 0x2f69d8u: goto label_2f69d8;
        case 0x2f69dcu: goto label_2f69dc;
        case 0x2f69e0u: goto label_2f69e0;
        case 0x2f69e4u: goto label_2f69e4;
        case 0x2f69e8u: goto label_2f69e8;
        case 0x2f69ecu: goto label_2f69ec;
        case 0x2f69f0u: goto label_2f69f0;
        case 0x2f69f4u: goto label_2f69f4;
        case 0x2f69f8u: goto label_2f69f8;
        case 0x2f69fcu: goto label_2f69fc;
        case 0x2f6a00u: goto label_2f6a00;
        case 0x2f6a04u: goto label_2f6a04;
        case 0x2f6a08u: goto label_2f6a08;
        case 0x2f6a0cu: goto label_2f6a0c;
        case 0x2f6a10u: goto label_2f6a10;
        case 0x2f6a14u: goto label_2f6a14;
        case 0x2f6a18u: goto label_2f6a18;
        case 0x2f6a1cu: goto label_2f6a1c;
        case 0x2f6a20u: goto label_2f6a20;
        case 0x2f6a24u: goto label_2f6a24;
        case 0x2f6a28u: goto label_2f6a28;
        case 0x2f6a2cu: goto label_2f6a2c;
        case 0x2f6a30u: goto label_2f6a30;
        case 0x2f6a34u: goto label_2f6a34;
        case 0x2f6a38u: goto label_2f6a38;
        case 0x2f6a3cu: goto label_2f6a3c;
        case 0x2f6a40u: goto label_2f6a40;
        case 0x2f6a44u: goto label_2f6a44;
        case 0x2f6a48u: goto label_2f6a48;
        case 0x2f6a4cu: goto label_2f6a4c;
        case 0x2f6a50u: goto label_2f6a50;
        case 0x2f6a54u: goto label_2f6a54;
        case 0x2f6a58u: goto label_2f6a58;
        case 0x2f6a5cu: goto label_2f6a5c;
        case 0x2f6a60u: goto label_2f6a60;
        case 0x2f6a64u: goto label_2f6a64;
        case 0x2f6a68u: goto label_2f6a68;
        case 0x2f6a6cu: goto label_2f6a6c;
        case 0x2f6a70u: goto label_2f6a70;
        case 0x2f6a74u: goto label_2f6a74;
        case 0x2f6a78u: goto label_2f6a78;
        case 0x2f6a7cu: goto label_2f6a7c;
        case 0x2f6a80u: goto label_2f6a80;
        case 0x2f6a84u: goto label_2f6a84;
        case 0x2f6a88u: goto label_2f6a88;
        case 0x2f6a8cu: goto label_2f6a8c;
        case 0x2f6a90u: goto label_2f6a90;
        case 0x2f6a94u: goto label_2f6a94;
        case 0x2f6a98u: goto label_2f6a98;
        case 0x2f6a9cu: goto label_2f6a9c;
        case 0x2f6aa0u: goto label_2f6aa0;
        case 0x2f6aa4u: goto label_2f6aa4;
        case 0x2f6aa8u: goto label_2f6aa8;
        case 0x2f6aacu: goto label_2f6aac;
        case 0x2f6ab0u: goto label_2f6ab0;
        case 0x2f6ab4u: goto label_2f6ab4;
        case 0x2f6ab8u: goto label_2f6ab8;
        case 0x2f6abcu: goto label_2f6abc;
        case 0x2f6ac0u: goto label_2f6ac0;
        case 0x2f6ac4u: goto label_2f6ac4;
        case 0x2f6ac8u: goto label_2f6ac8;
        case 0x2f6accu: goto label_2f6acc;
        case 0x2f6ad0u: goto label_2f6ad0;
        case 0x2f6ad4u: goto label_2f6ad4;
        case 0x2f6ad8u: goto label_2f6ad8;
        case 0x2f6adcu: goto label_2f6adc;
        case 0x2f6ae0u: goto label_2f6ae0;
        case 0x2f6ae4u: goto label_2f6ae4;
        case 0x2f6ae8u: goto label_2f6ae8;
        case 0x2f6aecu: goto label_2f6aec;
        case 0x2f6af0u: goto label_2f6af0;
        case 0x2f6af4u: goto label_2f6af4;
        case 0x2f6af8u: goto label_2f6af8;
        case 0x2f6afcu: goto label_2f6afc;
        case 0x2f6b00u: goto label_2f6b00;
        case 0x2f6b04u: goto label_2f6b04;
        case 0x2f6b08u: goto label_2f6b08;
        case 0x2f6b0cu: goto label_2f6b0c;
        case 0x2f6b10u: goto label_2f6b10;
        case 0x2f6b14u: goto label_2f6b14;
        case 0x2f6b18u: goto label_2f6b18;
        case 0x2f6b1cu: goto label_2f6b1c;
        case 0x2f6b20u: goto label_2f6b20;
        case 0x2f6b24u: goto label_2f6b24;
        case 0x2f6b28u: goto label_2f6b28;
        case 0x2f6b2cu: goto label_2f6b2c;
        case 0x2f6b30u: goto label_2f6b30;
        case 0x2f6b34u: goto label_2f6b34;
        case 0x2f6b38u: goto label_2f6b38;
        case 0x2f6b3cu: goto label_2f6b3c;
        case 0x2f6b40u: goto label_2f6b40;
        case 0x2f6b44u: goto label_2f6b44;
        case 0x2f6b48u: goto label_2f6b48;
        case 0x2f6b4cu: goto label_2f6b4c;
        case 0x2f6b50u: goto label_2f6b50;
        case 0x2f6b54u: goto label_2f6b54;
        case 0x2f6b58u: goto label_2f6b58;
        case 0x2f6b5cu: goto label_2f6b5c;
        case 0x2f6b60u: goto label_2f6b60;
        case 0x2f6b64u: goto label_2f6b64;
        case 0x2f6b68u: goto label_2f6b68;
        case 0x2f6b6cu: goto label_2f6b6c;
        case 0x2f6b70u: goto label_2f6b70;
        case 0x2f6b74u: goto label_2f6b74;
        case 0x2f6b78u: goto label_2f6b78;
        case 0x2f6b7cu: goto label_2f6b7c;
        case 0x2f6b80u: goto label_2f6b80;
        case 0x2f6b84u: goto label_2f6b84;
        case 0x2f6b88u: goto label_2f6b88;
        case 0x2f6b8cu: goto label_2f6b8c;
        case 0x2f6b90u: goto label_2f6b90;
        case 0x2f6b94u: goto label_2f6b94;
        case 0x2f6b98u: goto label_2f6b98;
        case 0x2f6b9cu: goto label_2f6b9c;
        case 0x2f6ba0u: goto label_2f6ba0;
        case 0x2f6ba4u: goto label_2f6ba4;
        case 0x2f6ba8u: goto label_2f6ba8;
        case 0x2f6bacu: goto label_2f6bac;
        case 0x2f6bb0u: goto label_2f6bb0;
        case 0x2f6bb4u: goto label_2f6bb4;
        case 0x2f6bb8u: goto label_2f6bb8;
        case 0x2f6bbcu: goto label_2f6bbc;
        case 0x2f6bc0u: goto label_2f6bc0;
        case 0x2f6bc4u: goto label_2f6bc4;
        case 0x2f6bc8u: goto label_2f6bc8;
        case 0x2f6bccu: goto label_2f6bcc;
        case 0x2f6bd0u: goto label_2f6bd0;
        case 0x2f6bd4u: goto label_2f6bd4;
        case 0x2f6bd8u: goto label_2f6bd8;
        case 0x2f6bdcu: goto label_2f6bdc;
        case 0x2f6be0u: goto label_2f6be0;
        case 0x2f6be4u: goto label_2f6be4;
        case 0x2f6be8u: goto label_2f6be8;
        case 0x2f6becu: goto label_2f6bec;
        case 0x2f6bf0u: goto label_2f6bf0;
        case 0x2f6bf4u: goto label_2f6bf4;
        case 0x2f6bf8u: goto label_2f6bf8;
        case 0x2f6bfcu: goto label_2f6bfc;
        case 0x2f6c00u: goto label_2f6c00;
        case 0x2f6c04u: goto label_2f6c04;
        case 0x2f6c08u: goto label_2f6c08;
        case 0x2f6c0cu: goto label_2f6c0c;
        case 0x2f6c10u: goto label_2f6c10;
        case 0x2f6c14u: goto label_2f6c14;
        case 0x2f6c18u: goto label_2f6c18;
        case 0x2f6c1cu: goto label_2f6c1c;
        case 0x2f6c20u: goto label_2f6c20;
        case 0x2f6c24u: goto label_2f6c24;
        case 0x2f6c28u: goto label_2f6c28;
        case 0x2f6c2cu: goto label_2f6c2c;
        case 0x2f6c30u: goto label_2f6c30;
        case 0x2f6c34u: goto label_2f6c34;
        case 0x2f6c38u: goto label_2f6c38;
        case 0x2f6c3cu: goto label_2f6c3c;
        case 0x2f6c40u: goto label_2f6c40;
        case 0x2f6c44u: goto label_2f6c44;
        case 0x2f6c48u: goto label_2f6c48;
        case 0x2f6c4cu: goto label_2f6c4c;
        case 0x2f6c50u: goto label_2f6c50;
        case 0x2f6c54u: goto label_2f6c54;
        case 0x2f6c58u: goto label_2f6c58;
        case 0x2f6c5cu: goto label_2f6c5c;
        case 0x2f6c60u: goto label_2f6c60;
        case 0x2f6c64u: goto label_2f6c64;
        case 0x2f6c68u: goto label_2f6c68;
        case 0x2f6c6cu: goto label_2f6c6c;
        case 0x2f6c70u: goto label_2f6c70;
        case 0x2f6c74u: goto label_2f6c74;
        case 0x2f6c78u: goto label_2f6c78;
        case 0x2f6c7cu: goto label_2f6c7c;
        case 0x2f6c80u: goto label_2f6c80;
        case 0x2f6c84u: goto label_2f6c84;
        case 0x2f6c88u: goto label_2f6c88;
        case 0x2f6c8cu: goto label_2f6c8c;
        case 0x2f6c90u: goto label_2f6c90;
        case 0x2f6c94u: goto label_2f6c94;
        case 0x2f6c98u: goto label_2f6c98;
        case 0x2f6c9cu: goto label_2f6c9c;
        case 0x2f6ca0u: goto label_2f6ca0;
        case 0x2f6ca4u: goto label_2f6ca4;
        case 0x2f6ca8u: goto label_2f6ca8;
        case 0x2f6cacu: goto label_2f6cac;
        case 0x2f6cb0u: goto label_2f6cb0;
        case 0x2f6cb4u: goto label_2f6cb4;
        case 0x2f6cb8u: goto label_2f6cb8;
        case 0x2f6cbcu: goto label_2f6cbc;
        case 0x2f6cc0u: goto label_2f6cc0;
        case 0x2f6cc4u: goto label_2f6cc4;
        case 0x2f6cc8u: goto label_2f6cc8;
        case 0x2f6cccu: goto label_2f6ccc;
        case 0x2f6cd0u: goto label_2f6cd0;
        case 0x2f6cd4u: goto label_2f6cd4;
        case 0x2f6cd8u: goto label_2f6cd8;
        case 0x2f6cdcu: goto label_2f6cdc;
        case 0x2f6ce0u: goto label_2f6ce0;
        case 0x2f6ce4u: goto label_2f6ce4;
        case 0x2f6ce8u: goto label_2f6ce8;
        case 0x2f6cecu: goto label_2f6cec;
        case 0x2f6cf0u: goto label_2f6cf0;
        case 0x2f6cf4u: goto label_2f6cf4;
        case 0x2f6cf8u: goto label_2f6cf8;
        case 0x2f6cfcu: goto label_2f6cfc;
        case 0x2f6d00u: goto label_2f6d00;
        case 0x2f6d04u: goto label_2f6d04;
        case 0x2f6d08u: goto label_2f6d08;
        case 0x2f6d0cu: goto label_2f6d0c;
        case 0x2f6d10u: goto label_2f6d10;
        case 0x2f6d14u: goto label_2f6d14;
        case 0x2f6d18u: goto label_2f6d18;
        case 0x2f6d1cu: goto label_2f6d1c;
        case 0x2f6d20u: goto label_2f6d20;
        case 0x2f6d24u: goto label_2f6d24;
        case 0x2f6d28u: goto label_2f6d28;
        case 0x2f6d2cu: goto label_2f6d2c;
        case 0x2f6d30u: goto label_2f6d30;
        case 0x2f6d34u: goto label_2f6d34;
        case 0x2f6d38u: goto label_2f6d38;
        case 0x2f6d3cu: goto label_2f6d3c;
        case 0x2f6d40u: goto label_2f6d40;
        case 0x2f6d44u: goto label_2f6d44;
        case 0x2f6d48u: goto label_2f6d48;
        case 0x2f6d4cu: goto label_2f6d4c;
        case 0x2f6d50u: goto label_2f6d50;
        case 0x2f6d54u: goto label_2f6d54;
        case 0x2f6d58u: goto label_2f6d58;
        case 0x2f6d5cu: goto label_2f6d5c;
        case 0x2f6d60u: goto label_2f6d60;
        case 0x2f6d64u: goto label_2f6d64;
        case 0x2f6d68u: goto label_2f6d68;
        case 0x2f6d6cu: goto label_2f6d6c;
        case 0x2f6d70u: goto label_2f6d70;
        case 0x2f6d74u: goto label_2f6d74;
        case 0x2f6d78u: goto label_2f6d78;
        case 0x2f6d7cu: goto label_2f6d7c;
        case 0x2f6d80u: goto label_2f6d80;
        case 0x2f6d84u: goto label_2f6d84;
        case 0x2f6d88u: goto label_2f6d88;
        case 0x2f6d8cu: goto label_2f6d8c;
        case 0x2f6d90u: goto label_2f6d90;
        case 0x2f6d94u: goto label_2f6d94;
        case 0x2f6d98u: goto label_2f6d98;
        case 0x2f6d9cu: goto label_2f6d9c;
        case 0x2f6da0u: goto label_2f6da0;
        case 0x2f6da4u: goto label_2f6da4;
        case 0x2f6da8u: goto label_2f6da8;
        case 0x2f6dacu: goto label_2f6dac;
        case 0x2f6db0u: goto label_2f6db0;
        case 0x2f6db4u: goto label_2f6db4;
        case 0x2f6db8u: goto label_2f6db8;
        case 0x2f6dbcu: goto label_2f6dbc;
        case 0x2f6dc0u: goto label_2f6dc0;
        case 0x2f6dc4u: goto label_2f6dc4;
        case 0x2f6dc8u: goto label_2f6dc8;
        case 0x2f6dccu: goto label_2f6dcc;
        case 0x2f6dd0u: goto label_2f6dd0;
        case 0x2f6dd4u: goto label_2f6dd4;
        case 0x2f6dd8u: goto label_2f6dd8;
        case 0x2f6ddcu: goto label_2f6ddc;
        case 0x2f6de0u: goto label_2f6de0;
        case 0x2f6de4u: goto label_2f6de4;
        case 0x2f6de8u: goto label_2f6de8;
        case 0x2f6decu: goto label_2f6dec;
        case 0x2f6df0u: goto label_2f6df0;
        case 0x2f6df4u: goto label_2f6df4;
        case 0x2f6df8u: goto label_2f6df8;
        case 0x2f6dfcu: goto label_2f6dfc;
        case 0x2f6e00u: goto label_2f6e00;
        case 0x2f6e04u: goto label_2f6e04;
        case 0x2f6e08u: goto label_2f6e08;
        case 0x2f6e0cu: goto label_2f6e0c;
        case 0x2f6e10u: goto label_2f6e10;
        case 0x2f6e14u: goto label_2f6e14;
        case 0x2f6e18u: goto label_2f6e18;
        case 0x2f6e1cu: goto label_2f6e1c;
        case 0x2f6e20u: goto label_2f6e20;
        case 0x2f6e24u: goto label_2f6e24;
        case 0x2f6e28u: goto label_2f6e28;
        case 0x2f6e2cu: goto label_2f6e2c;
        case 0x2f6e30u: goto label_2f6e30;
        case 0x2f6e34u: goto label_2f6e34;
        case 0x2f6e38u: goto label_2f6e38;
        case 0x2f6e3cu: goto label_2f6e3c;
        case 0x2f6e40u: goto label_2f6e40;
        case 0x2f6e44u: goto label_2f6e44;
        case 0x2f6e48u: goto label_2f6e48;
        case 0x2f6e4cu: goto label_2f6e4c;
        case 0x2f6e50u: goto label_2f6e50;
        case 0x2f6e54u: goto label_2f6e54;
        case 0x2f6e58u: goto label_2f6e58;
        case 0x2f6e5cu: goto label_2f6e5c;
        case 0x2f6e60u: goto label_2f6e60;
        case 0x2f6e64u: goto label_2f6e64;
        case 0x2f6e68u: goto label_2f6e68;
        case 0x2f6e6cu: goto label_2f6e6c;
        case 0x2f6e70u: goto label_2f6e70;
        case 0x2f6e74u: goto label_2f6e74;
        case 0x2f6e78u: goto label_2f6e78;
        case 0x2f6e7cu: goto label_2f6e7c;
        case 0x2f6e80u: goto label_2f6e80;
        case 0x2f6e84u: goto label_2f6e84;
        case 0x2f6e88u: goto label_2f6e88;
        case 0x2f6e8cu: goto label_2f6e8c;
        case 0x2f6e90u: goto label_2f6e90;
        case 0x2f6e94u: goto label_2f6e94;
        case 0x2f6e98u: goto label_2f6e98;
        case 0x2f6e9cu: goto label_2f6e9c;
        default: break;
    }

    ctx->pc = 0x2f66b0u;

label_2f66b0:
    // 0x2f66b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2f66b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2f66b4:
    // 0x2f66b4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f66b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f66b8:
    // 0x2f66b8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2f66b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2f66bc:
    // 0x2f66bc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2f66bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2f66c0:
    // 0x2f66c0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2f66c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2f66c4:
    // 0x2f66c4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2f66c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2f66c8:
    // 0x2f66c8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2f66c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2f66cc:
    // 0x2f66cc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2f66ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2f66d0:
    // 0x2f66d0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2f66d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2f66d4:
    // 0x2f66d4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2f66d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2f66d8:
    // 0x2f66d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f66d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2f66dc:
    // 0x2f66dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f66dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2f66e0:
    // 0x2f66e0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2f66e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2f66e4:
    // 0x2f66e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f66e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f66e8:
    // 0x2f66e8: 0xc441ee40  lwc1        $f1, -0x11C0($v0)
    ctx->pc = 0x2f66e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f66ec:
    // 0x2f66ec: 0x8c9500c8  lw          $s5, 0xC8($a0)
    ctx->pc = 0x2f66ecu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_2f66f0:
    // 0x2f66f0: 0xc460ee44  lwc1        $f0, -0x11BC($v1)
    ctx->pc = 0x2f66f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f66f4:
    // 0x2f66f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f66f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f66f8:
    // 0x2f66f8: 0x8c8400cc  lw          $a0, 0xCC($a0)
    ctx->pc = 0x2f66f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
label_2f66fc:
    // 0x2f66fc: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2f66fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_2f6700:
    // 0x2f6700: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x2f6700u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2f6704:
    // 0x2f6704: 0x8eb40550  lw          $s4, 0x550($s5)
    ctx->pc = 0x2f6704u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1360)));
label_2f6708:
    // 0x2f6708: 0x8eb30e38  lw          $s3, 0xE38($s5)
    ctx->pc = 0x2f6708u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3640)));
label_2f670c:
    // 0x2f670c: 0x90520c6a  lbu         $s2, 0xC6A($v0)
    ctx->pc = 0x2f670cu;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3178)));
label_2f6710:
    // 0x2f6710: 0x8c510968  lw          $s1, 0x968($v0)
    ctx->pc = 0x2f6710u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_2f6714:
    // 0x2f6714: 0x148001d0  bnez        $a0, . + 4 + (0x1D0 << 2)
label_2f6718:
    if (ctx->pc == 0x2F6718u) {
        ctx->pc = 0x2F6718u;
            // 0x2f6718: 0xe7a000ac  swc1        $f0, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->pc = 0x2F671Cu;
        goto label_2f671c;
    }
    ctx->pc = 0x2F6714u;
    {
        const bool branch_taken_0x2f6714 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6714u;
            // 0x2f6718: 0xe7a000ac  swc1        $f0, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6714) {
            ctx->pc = 0x2F6E58u;
            goto label_2f6e58;
        }
    }
    ctx->pc = 0x2F671Cu;
label_2f671c:
    // 0x2f671c: 0xc0754b4  jal         func_1D52D0
label_2f6720:
    if (ctx->pc == 0x2F6720u) {
        ctx->pc = 0x2F6720u;
            // 0x2f6720: 0x26a40440  addiu       $a0, $s5, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1088));
        ctx->pc = 0x2F6724u;
        goto label_2f6724;
    }
    ctx->pc = 0x2F671Cu;
    SET_GPR_U32(ctx, 31, 0x2F6724u);
    ctx->pc = 0x2F6720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F671Cu;
            // 0x2f6720: 0x26a40440  addiu       $a0, $s5, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6724u; }
        if (ctx->pc != 0x2F6724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6724u; }
        if (ctx->pc != 0x2F6724u) { return; }
    }
    ctx->pc = 0x2F6724u;
label_2f6724:
    // 0x2f6724: 0x8284010f  lb          $a0, 0x10F($s4)
    ctx->pc = 0x2f6724u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 271)));
label_2f6728:
    // 0x2f6728: 0x148000d2  bnez        $a0, . + 4 + (0xD2 << 2)
label_2f672c:
    if (ctx->pc == 0x2F672Cu) {
        ctx->pc = 0x2F672Cu;
            // 0x2f672c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F6730u;
        goto label_2f6730;
    }
    ctx->pc = 0x2F6728u;
    {
        const bool branch_taken_0x2f6728 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F672Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6728u;
            // 0x2f672c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6728) {
            ctx->pc = 0x2F6A74u;
            goto label_2f6a74;
        }
    }
    ctx->pc = 0x2F6730u;
label_2f6730:
    // 0x2f6730: 0x3c033eed  lui         $v1, 0x3EED
    ctx->pc = 0x2f6730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16109 << 16));
label_2f6734:
    // 0x2f6734: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x2f6734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
label_2f6738:
    // 0x2f6738: 0xc6a10de4  lwc1        $f1, 0xDE4($s5)
    ctx->pc = 0x2f6738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f673c:
    // 0x2f673c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f673cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f6740:
    // 0x2f6740: 0x0  nop
    ctx->pc = 0x2f6740u;
    // NOP
label_2f6744:
    // 0x2f6744: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f6744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f6748:
    // 0x2f6748: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
label_2f674c:
    if (ctx->pc == 0x2F674Cu) {
        ctx->pc = 0x2F674Cu;
            // 0x2f674c: 0x8e830020  lw          $v1, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->pc = 0x2F6750u;
        goto label_2f6750;
    }
    ctx->pc = 0x2F6748u;
    {
        const bool branch_taken_0x2f6748 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f6748) {
            ctx->pc = 0x2F674Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6748u;
            // 0x2f674c: 0x8e830020  lw          $v1, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F6790u;
            goto label_2f6790;
        }
    }
    ctx->pc = 0x2F6750u;
label_2f6750:
    // 0x2f6750: 0x0  nop
    ctx->pc = 0x2f6750u;
    // NOP
label_2f6754:
    // 0x2f6754: 0x0  nop
    ctx->pc = 0x2f6754u;
    // NOP
label_2f6758:
    // 0x2f6758: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x2f6758u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
label_2f675c:
    // 0x2f675c: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x2f675cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
label_2f6760:
    // 0x2f6760: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2f6760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_2f6764:
    // 0x2f6764: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2f6764u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f6768:
    // 0x2f6768: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x2f6768u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f676c:
    // 0x2f676c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f676cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f6770:
    // 0x2f6770: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f6770u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f6774:
    // 0x2f6774: 0x0  nop
    ctx->pc = 0x2f6774u;
    // NOP
label_2f6778:
    // 0x2f6778: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2f6778u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f677c:
    // 0x2f677c: 0xc6a00dbc  lwc1        $f0, 0xDBC($s5)
    ctx->pc = 0x2f677cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f6780:
    // 0x2f6780: 0x46020d1c  madd.s      $f20, $f1, $f2
    ctx->pc = 0x2f6780u;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_2f6784:
    // 0x2f6784: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2f6784u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2f6788:
    // 0x2f6788: 0x10000039  b           . + 4 + (0x39 << 2)
label_2f678c:
    if (ctx->pc == 0x2F678Cu) {
        ctx->pc = 0x2F678Cu;
            // 0x2f678c: 0xe680002c  swc1        $f0, 0x2C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
        ctx->pc = 0x2F6790u;
        goto label_2f6790;
    }
    ctx->pc = 0x2F6788u;
    {
        const bool branch_taken_0x2f6788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F678Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6788u;
            // 0x2f678c: 0xe680002c  swc1        $f0, 0x2C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6788) {
            ctx->pc = 0x2F6870u;
            goto label_2f6870;
        }
    }
    ctx->pc = 0x2F6790u;
label_2f6790:
    // 0x2f6790: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2f6790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2f6794:
    // 0x2f6794: 0x5060002e  beql        $v1, $zero, . + 4 + (0x2E << 2)
label_2f6798:
    if (ctx->pc == 0x2F6798u) {
        ctx->pc = 0x2F6798u;
            // 0x2f6798: 0x3c033f99  lui         $v1, 0x3F99 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
        ctx->pc = 0x2F679Cu;
        goto label_2f679c;
    }
    ctx->pc = 0x2F6794u;
    {
        const bool branch_taken_0x2f6794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6794) {
            ctx->pc = 0x2F6798u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6794u;
            // 0x2f6798: 0x3c033f99  lui         $v1, 0x3F99 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F6850u;
            goto label_2f6850;
        }
    }
    ctx->pc = 0x2F679Cu;
label_2f679c:
    // 0x2f679c: 0x8283010c  lb          $v1, 0x10C($s4)
    ctx->pc = 0x2f679cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 268)));
label_2f67a0:
    // 0x2f67a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f67a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f67a4:
    // 0x2f67a4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f67a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2f67a8:
    // 0x2f67a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f67a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f67ac:
    // 0x2f67ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f67acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2f67b0:
    // 0x2f67b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f67b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f67b4:
    // 0x2f67b4: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x2f67b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2f67b8:
    // 0x2f67b8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2f67b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2f67bc:
    // 0x2f67bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f67bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f67c0:
    // 0x2f67c0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2f67c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2f67c4:
    // 0x2f67c4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2f67c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2f67c8:
    // 0x2f67c8: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x2f67c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_2f67cc:
    // 0x2f67cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f67ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f67d0:
    // 0x2f67d0: 0x8e990058  lw          $t9, 0x58($s4)
    ctx->pc = 0x2f67d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_2f67d4:
    // 0x2f67d4: 0x8285010d  lb          $a1, 0x10D($s4)
    ctx->pc = 0x2f67d4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 269)));
label_2f67d8:
    // 0x2f67d8: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2f67d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2f67dc:
    // 0x2f67dc: 0x320f809  jalr        $t9
label_2f67e0:
    if (ctx->pc == 0x2F67E0u) {
        ctx->pc = 0x2F67E0u;
            // 0x2f67e0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2F67E4u;
        goto label_2f67e4;
    }
    ctx->pc = 0x2F67DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F67E4u);
        ctx->pc = 0x2F67E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F67DCu;
            // 0x2f67e0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F67E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F67E4u; }
            if (ctx->pc != 0x2F67E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2F67E4u;
label_2f67e4:
    // 0x2f67e4: 0x8e990058  lw          $t9, 0x58($s4)
    ctx->pc = 0x2f67e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_2f67e8:
    // 0x2f67e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2f67e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f67ec:
    // 0x2f67ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f67ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f67f0:
    // 0x2f67f0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2f67f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2f67f4:
    // 0x2f67f4: 0x320f809  jalr        $t9
label_2f67f8:
    if (ctx->pc == 0x2F67F8u) {
        ctx->pc = 0x2F67F8u;
            // 0x2f67f8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F67FCu;
        goto label_2f67fc;
    }
    ctx->pc = 0x2F67F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F67FCu);
        ctx->pc = 0x2F67F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F67F4u;
            // 0x2f67f8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F67FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F67FCu; }
            if (ctx->pc != 0x2F67FCu) { return; }
        }
        }
    }
    ctx->pc = 0x2F67FCu;
label_2f67fc:
    // 0x2f67fc: 0x3c033eed  lui         $v1, 0x3EED
    ctx->pc = 0x2f67fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16109 << 16));
label_2f6800:
    // 0x2f6800: 0x3464097b  ori         $a0, $v1, 0x97B
    ctx->pc = 0x2f6800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
label_2f6804:
    // 0x2f6804: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x2f6804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f6808:
    // 0x2f6808: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2f6808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
label_2f680c:
    // 0x2f680c: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x2f680cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2f6810:
    // 0x2f6810: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2f6810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_2f6814:
    // 0x2f6814: 0xc6a50de4  lwc1        $f5, 0xDE4($s5)
    ctx->pc = 0x2f6814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2f6818:
    // 0x2f6818: 0x46040081  sub.s       $f2, $f0, $f4
    ctx->pc = 0x2f6818u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_2f681c:
    // 0x2f681c: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x2f681cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_2f6820:
    // 0x2f6820: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2f6820u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2f6824:
    // 0x2f6824: 0x0  nop
    ctx->pc = 0x2f6824u;
    // NOP
label_2f6828:
    // 0x2f6828: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2f6828u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_2f682c:
    // 0x2f682c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2f682cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2f6830:
    // 0x2f6830: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x2f6830u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_2f6834:
    // 0x2f6834: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f6834u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f6838:
    // 0x2f6838: 0x0  nop
    ctx->pc = 0x2f6838u;
    // NOP
label_2f683c:
    // 0x2f683c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2f683cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2f6840:
    // 0x2f6840: 0xc6a00dbc  lwc1        $f0, 0xDBC($s5)
    ctx->pc = 0x2f6840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f6844:
    // 0x2f6844: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f6844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f6848:
    // 0x2f6848: 0x10000188  b           . + 4 + (0x188 << 2)
label_2f684c:
    if (ctx->pc == 0x2F684Cu) {
        ctx->pc = 0x2F684Cu;
            // 0x2f684c: 0xe680002c  swc1        $f0, 0x2C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
        ctx->pc = 0x2F6850u;
        goto label_2f6850;
    }
    ctx->pc = 0x2F6848u;
    {
        const bool branch_taken_0x2f6848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F684Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6848u;
            // 0x2f684c: 0xe680002c  swc1        $f0, 0x2C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6848) {
            ctx->pc = 0x2F6E6Cu;
            goto label_2f6e6c;
        }
    }
    ctx->pc = 0x2F6850u;
label_2f6850:
    // 0x2f6850: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2f6850u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f6854:
    // 0x2f6854: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2f6854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_2f6858:
    // 0x2f6858: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x2f6858u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f685c:
    // 0x2f685c: 0xc6a00dbc  lwc1        $f0, 0xDBC($s5)
    ctx->pc = 0x2f685cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f6860:
    // 0x2f6860: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x2f6860u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2f6864:
    // 0x2f6864: 0x0  nop
    ctx->pc = 0x2f6864u;
    // NOP
label_2f6868:
    // 0x2f6868: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2f6868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2f686c:
    // 0x2f686c: 0xe680002c  swc1        $f0, 0x2C($s4)
    ctx->pc = 0x2f686cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
label_2f6870:
    // 0x2f6870: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x2f6870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
label_2f6874:
    // 0x2f6874: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2f6874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_2f6878:
    // 0x2f6878: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f6878u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f687c:
    // 0x2f687c: 0x0  nop
    ctx->pc = 0x2f687cu;
    // NOP
label_2f6880:
    // 0x2f6880: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2f6880u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f6884:
    // 0x2f6884: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_2f6888:
    if (ctx->pc == 0x2F6888u) {
        ctx->pc = 0x2F6888u;
            // 0x2f6888: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2F688Cu;
        goto label_2f688c;
    }
    ctx->pc = 0x2F6884u;
    {
        const bool branch_taken_0x2f6884 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f6884) {
            ctx->pc = 0x2F6888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6884u;
            // 0x2f6888: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F6894u;
            goto label_2f6894;
        }
    }
    ctx->pc = 0x2F688Cu;
label_2f688c:
    // 0x2f688c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2f688cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2f6890:
    // 0x2f6890: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2f6890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f6894:
    // 0x2f6894: 0x52630057  beql        $s3, $v1, . + 4 + (0x57 << 2)
label_2f6898:
    if (ctx->pc == 0x2F6898u) {
        ctx->pc = 0x2F6898u;
            // 0x2f6898: 0x161e3c  dsll32      $v1, $s6, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 24));
        ctx->pc = 0x2F689Cu;
        goto label_2f689c;
    }
    ctx->pc = 0x2F6894u;
    {
        const bool branch_taken_0x2f6894 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f6894) {
            ctx->pc = 0x2F6898u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6894u;
            // 0x2f6898: 0x161e3c  dsll32      $v1, $s6, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F69F4u;
            goto label_2f69f4;
        }
    }
    ctx->pc = 0x2F689Cu;
label_2f689c:
    // 0x2f689c: 0xc681003c  lwc1        $f1, 0x3C($s4)
    ctx->pc = 0x2f689cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f68a0:
    // 0x2f68a0: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2f68a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_2f68a4:
    // 0x2f68a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f68a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f68a8:
    // 0x2f68a8: 0x0  nop
    ctx->pc = 0x2f68a8u;
    // NOP
label_2f68ac:
    // 0x2f68ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f68acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f68b0:
    // 0x2f68b0: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_2f68b4:
    if (ctx->pc == 0x2F68B4u) {
        ctx->pc = 0x2F68B4u;
            // 0x2f68b4: 0x3c034170  lui         $v1, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
        ctx->pc = 0x2F68B8u;
        goto label_2f68b8;
    }
    ctx->pc = 0x2F68B0u;
    {
        const bool branch_taken_0x2f68b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f68b0) {
            ctx->pc = 0x2F68B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F68B0u;
            // 0x2f68b4: 0x3c034170  lui         $v1, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F68D4u;
            goto label_2f68d4;
        }
    }
    ctx->pc = 0x2F68B8u;
label_2f68b8:
    // 0x2f68b8: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x2f68b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
label_2f68bc:
    // 0x2f68bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f68bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f68c0:
    // 0x2f68c0: 0x0  nop
    ctx->pc = 0x2f68c0u;
    // NOP
label_2f68c4:
    // 0x2f68c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f68c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f68c8:
    // 0x2f68c8: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
label_2f68cc:
    if (ctx->pc == 0x2F68CCu) {
        ctx->pc = 0x2F68CCu;
            // 0x2f68cc: 0x920300dc  lbu         $v1, 0xDC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->pc = 0x2F68D0u;
        goto label_2f68d0;
    }
    ctx->pc = 0x2F68C8u;
    {
        const bool branch_taken_0x2f68c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f68c8) {
            ctx->pc = 0x2F68CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F68C8u;
            // 0x2f68cc: 0x920300dc  lbu         $v1, 0xDC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F6904u;
            goto label_2f6904;
        }
    }
    ctx->pc = 0x2F68D0u;
label_2f68d0:
    // 0x2f68d0: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x2f68d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
label_2f68d4:
    // 0x2f68d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f68d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f68d8:
    // 0x2f68d8: 0x0  nop
    ctx->pc = 0x2f68d8u;
    // NOP
label_2f68dc:
    // 0x2f68dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f68dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f68e0:
    // 0x2f68e0: 0x45030043  bc1tl       . + 4 + (0x43 << 2)
label_2f68e4:
    if (ctx->pc == 0x2F68E4u) {
        ctx->pc = 0x2F68E4u;
            // 0x2f68e4: 0xa20000dc  sb          $zero, 0xDC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 220), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2F68E8u;
        goto label_2f68e8;
    }
    ctx->pc = 0x2F68E0u;
    {
        const bool branch_taken_0x2f68e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f68e0) {
            ctx->pc = 0x2F68E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F68E0u;
            // 0x2f68e4: 0xa20000dc  sb          $zero, 0xDC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 220), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F69F0u;
            goto label_2f69f0;
        }
    }
    ctx->pc = 0x2F68E8u;
label_2f68e8:
    // 0x2f68e8: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x2f68e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
label_2f68ec:
    // 0x2f68ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f68ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f68f0:
    // 0x2f68f0: 0x0  nop
    ctx->pc = 0x2f68f0u;
    // NOP
label_2f68f4:
    // 0x2f68f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f68f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f68f8:
    // 0x2f68f8: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
label_2f68fc:
    if (ctx->pc == 0x2F68FCu) {
        ctx->pc = 0x2F6900u;
        goto label_2f6900;
    }
    ctx->pc = 0x2F68F8u;
    {
        const bool branch_taken_0x2f68f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f68f8) {
            ctx->pc = 0x2F69ECu;
            goto label_2f69ec;
        }
    }
    ctx->pc = 0x2F6900u;
label_2f6900:
    // 0x2f6900: 0x920300dc  lbu         $v1, 0xDC($s0)
    ctx->pc = 0x2f6900u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 220)));
label_2f6904:
    // 0x2f6904: 0x54600037  bnel        $v1, $zero, . + 4 + (0x37 << 2)
label_2f6908:
    if (ctx->pc == 0x2F6908u) {
        ctx->pc = 0x2F6908u;
            // 0x2f6908: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F690Cu;
        goto label_2f690c;
    }
    ctx->pc = 0x2F6904u;
    {
        const bool branch_taken_0x2f6904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6904) {
            ctx->pc = 0x2F6908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6904u;
            // 0x2f6908: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F69E4u;
            goto label_2f69e4;
        }
    }
    ctx->pc = 0x2F690Cu;
label_2f690c:
    // 0x2f690c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2f690cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2f6910:
    // 0x2f6910: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
label_2f6914:
    if (ctx->pc == 0x2F6914u) {
        ctx->pc = 0x2F6914u;
            // 0x2f6914: 0x8ea40d60  lw          $a0, 0xD60($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3424)));
        ctx->pc = 0x2F6918u;
        goto label_2f6918;
    }
    ctx->pc = 0x2F6910u;
    {
        const bool branch_taken_0x2f6910 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F6914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6910u;
            // 0x2f6914: 0x8ea40d60  lw          $a0, 0xD60($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6910) {
            ctx->pc = 0x2F692Cu;
            goto label_2f692c;
        }
    }
    ctx->pc = 0x2F6918u;
label_2f6918:
    // 0x2f6918: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f6918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f691c:
    // 0x2f691c: 0x52220004  beql        $s1, $v0, . + 4 + (0x4 << 2)
label_2f6920:
    if (ctx->pc == 0x2F6920u) {
        ctx->pc = 0x2F6920u;
            // 0x2f6920: 0x8ea20da4  lw          $v0, 0xDA4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3492)));
        ctx->pc = 0x2F6924u;
        goto label_2f6924;
    }
    ctx->pc = 0x2F691Cu;
    {
        const bool branch_taken_0x2f691c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f691c) {
            ctx->pc = 0x2F6920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F691Cu;
            // 0x2f6920: 0x8ea20da4  lw          $v0, 0xDA4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3492)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F6930u;
            goto label_2f6930;
        }
    }
    ctx->pc = 0x2F6924u;
label_2f6924:
    // 0x2f6924: 0x1000000e  b           . + 4 + (0xE << 2)
label_2f6928:
    if (ctx->pc == 0x2F6928u) {
        ctx->pc = 0x2F6928u;
            // 0x2f6928: 0x8c990030  lw          $t9, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->pc = 0x2F692Cu;
        goto label_2f692c;
    }
    ctx->pc = 0x2F6924u;
    {
        const bool branch_taken_0x2f6924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6924u;
            // 0x2f6928: 0x8c990030  lw          $t9, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6924) {
            ctx->pc = 0x2F6960u;
            goto label_2f6960;
        }
    }
    ctx->pc = 0x2F692Cu;
label_2f692c:
    // 0x2f692c: 0x8ea20da4  lw          $v0, 0xDA4($s5)
    ctx->pc = 0x2f692cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3492)));
label_2f6930:
    // 0x2f6930: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2f6930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_2f6934:
    // 0x2f6934: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_2f6938:
    if (ctx->pc == 0x2F6938u) {
        ctx->pc = 0x2F693Cu;
        goto label_2f693c;
    }
    ctx->pc = 0x2F6934u;
    {
        const bool branch_taken_0x2f6934 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2f6934) {
            ctx->pc = 0x2F695Cu;
            goto label_2f695c;
        }
    }
    ctx->pc = 0x2F693Cu;
label_2f693c:
    // 0x2f693c: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x2f693cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2f6940:
    // 0x2f6940: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2f6940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2f6944:
    // 0x2f6944: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2f6944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2f6948:
    // 0x2f6948: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2f6948u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2f694c:
    // 0x2f694c: 0x320f809  jalr        $t9
label_2f6950:
    if (ctx->pc == 0x2F6950u) {
        ctx->pc = 0x2F6950u;
            // 0x2f6950: 0x8c4500a8  lw          $a1, 0xA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
        ctx->pc = 0x2F6954u;
        goto label_2f6954;
    }
    ctx->pc = 0x2F694Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F6954u);
        ctx->pc = 0x2F6950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F694Cu;
            // 0x2f6950: 0x8c4500a8  lw          $a1, 0xA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F6954u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F6954u; }
            if (ctx->pc != 0x2F6954u) { return; }
        }
        }
    }
    ctx->pc = 0x2F6954u;
label_2f6954:
    // 0x2f6954: 0x10000007  b           . + 4 + (0x7 << 2)
label_2f6958:
    if (ctx->pc == 0x2F6958u) {
        ctx->pc = 0x2F6958u;
            // 0x2f6958: 0x8ea30da4  lw          $v1, 0xDA4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3492)));
        ctx->pc = 0x2F695Cu;
        goto label_2f695c;
    }
    ctx->pc = 0x2F6954u;
    {
        const bool branch_taken_0x2f6954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6954u;
            // 0x2f6958: 0x8ea30da4  lw          $v1, 0xDA4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6954) {
            ctx->pc = 0x2F6974u;
            goto label_2f6974;
        }
    }
    ctx->pc = 0x2F695Cu;
label_2f695c:
    // 0x2f695c: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x2f695cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2f6960:
    // 0x2f6960: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x2f6960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_2f6964:
    // 0x2f6964: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2f6964u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2f6968:
    // 0x2f6968: 0x320f809  jalr        $t9
label_2f696c:
    if (ctx->pc == 0x2F696Cu) {
        ctx->pc = 0x2F696Cu;
            // 0x2f696c: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x2F6970u;
        goto label_2f6970;
    }
    ctx->pc = 0x2F6968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F6970u);
        ctx->pc = 0x2F696Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6968u;
            // 0x2f696c: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F6970u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F6970u; }
            if (ctx->pc != 0x2F6970u) { return; }
        }
        }
    }
    ctx->pc = 0x2F6970u;
label_2f6970:
    // 0x2f6970: 0x8ea30da4  lw          $v1, 0xDA4($s5)
    ctx->pc = 0x2f6970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3492)));
label_2f6974:
    // 0x2f6974: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x2f6974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_2f6978:
    // 0x2f6978: 0x18600019  blez        $v1, . + 4 + (0x19 << 2)
label_2f697c:
    if (ctx->pc == 0x2F697Cu) {
        ctx->pc = 0x2F6980u;
        goto label_2f6980;
    }
    ctx->pc = 0x2F6978u;
    {
        const bool branch_taken_0x2f6978 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2f6978) {
            ctx->pc = 0x2F69E0u;
            goto label_2f69e0;
        }
    }
    ctx->pc = 0x2F6980u;
label_2f6980:
    // 0x2f6980: 0x8ea30e34  lw          $v1, 0xE34($s5)
    ctx->pc = 0x2f6980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
label_2f6984:
    // 0x2f6984: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x2f6984u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2f6988:
    // 0x2f6988: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_2f698c:
    if (ctx->pc == 0x2F698Cu) {
        ctx->pc = 0x2F698Cu;
            // 0x2f698c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F6990u;
        goto label_2f6990;
    }
    ctx->pc = 0x2F6988u;
    {
        const bool branch_taken_0x2f6988 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2F698Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6988u;
            // 0x2f698c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6988) {
            ctx->pc = 0x2F69A0u;
            goto label_2f69a0;
        }
    }
    ctx->pc = 0x2F6990u;
label_2f6990:
    // 0x2f6990: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x2f6990u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_2f6994:
    // 0x2f6994: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_2f6998:
    if (ctx->pc == 0x2F6998u) {
        ctx->pc = 0x2F699Cu;
        goto label_2f699c;
    }
    ctx->pc = 0x2F6994u;
    {
        const bool branch_taken_0x2f6994 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6994) {
            ctx->pc = 0x2F69A0u;
            goto label_2f69a0;
        }
    }
    ctx->pc = 0x2F699Cu;
label_2f699c:
    // 0x2f699c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f699cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f69a0:
    // 0x2f69a0: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_2f69a4:
    if (ctx->pc == 0x2F69A4u) {
        ctx->pc = 0x2F69A8u;
        goto label_2f69a8;
    }
    ctx->pc = 0x2F69A0u;
    {
        const bool branch_taken_0x2f69a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f69a0) {
            ctx->pc = 0x2F69BCu;
            goto label_2f69bc;
        }
    }
    ctx->pc = 0x2F69A8u;
label_2f69a8:
    // 0x2f69a8: 0xc075eb4  jal         func_1D7AD0
label_2f69ac:
    if (ctx->pc == 0x2F69ACu) {
        ctx->pc = 0x2F69ACu;
            // 0x2f69ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F69B0u;
        goto label_2f69b0;
    }
    ctx->pc = 0x2F69A8u;
    SET_GPR_U32(ctx, 31, 0x2F69B0u);
    ctx->pc = 0x2F69ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F69A8u;
            // 0x2f69ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F69B0u; }
        if (ctx->pc != 0x2F69B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F69B0u; }
        if (ctx->pc != 0x2F69B0u) { return; }
    }
    ctx->pc = 0x2F69B0u;
label_2f69b0:
    // 0x2f69b0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2f69b4:
    if (ctx->pc == 0x2F69B4u) {
        ctx->pc = 0x2F69B8u;
        goto label_2f69b8;
    }
    ctx->pc = 0x2F69B0u;
    {
        const bool branch_taken_0x2f69b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f69b0) {
            ctx->pc = 0x2F69BCu;
            goto label_2f69bc;
        }
    }
    ctx->pc = 0x2F69B8u;
label_2f69b8:
    // 0x2f69b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f69b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f69bc:
    // 0x2f69bc: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
label_2f69c0:
    if (ctx->pc == 0x2F69C0u) {
        ctx->pc = 0x2F69C0u;
            // 0x2f69c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F69C4u;
        goto label_2f69c4;
    }
    ctx->pc = 0x2F69BCu;
    {
        const bool branch_taken_0x2f69bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f69bc) {
            ctx->pc = 0x2F69C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F69BCu;
            // 0x2f69c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F69D8u;
            goto label_2f69d8;
        }
    }
    ctx->pc = 0x2F69C4u;
label_2f69c4:
    // 0x2f69c4: 0x8ea40e34  lw          $a0, 0xE34($s5)
    ctx->pc = 0x2f69c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
label_2f69c8:
    // 0x2f69c8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2f69c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f69cc:
    // 0x2f69cc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_2f69d0:
    if (ctx->pc == 0x2F69D0u) {
        ctx->pc = 0x2F69D4u;
        goto label_2f69d4;
    }
    ctx->pc = 0x2F69CCu;
    {
        const bool branch_taken_0x2f69cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f69cc) {
            ctx->pc = 0x2F69E0u;
            goto label_2f69e0;
        }
    }
    ctx->pc = 0x2F69D4u;
label_2f69d4:
    // 0x2f69d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f69d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f69d8:
    // 0x2f69d8: 0xc0ba5b4  jal         func_2E96D0
label_2f69dc:
    if (ctx->pc == 0x2F69DCu) {
        ctx->pc = 0x2F69DCu;
            // 0x2f69dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F69E0u;
        goto label_2f69e0;
    }
    ctx->pc = 0x2F69D8u;
    SET_GPR_U32(ctx, 31, 0x2F69E0u);
    ctx->pc = 0x2F69DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F69D8u;
            // 0x2f69dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E96D0u;
    if (runtime->hasFunction(0x2E96D0u)) {
        auto targetFn = runtime->lookupFunction(0x2E96D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F69E0u; }
        if (ctx->pc != 0x2F69E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E96D0_0x2e96d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F69E0u; }
        if (ctx->pc != 0x2F69E0u) { return; }
    }
    ctx->pc = 0x2F69E0u;
label_2f69e0:
    // 0x2f69e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f69e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f69e4:
    // 0x2f69e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2f69e8:
    if (ctx->pc == 0x2F69E8u) {
        ctx->pc = 0x2F69E8u;
            // 0x2f69e8: 0xa20300dc  sb          $v1, 0xDC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 220), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2F69ECu;
        goto label_2f69ec;
    }
    ctx->pc = 0x2F69E4u;
    {
        const bool branch_taken_0x2f69e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F69E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F69E4u;
            // 0x2f69e8: 0xa20300dc  sb          $v1, 0xDC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 220), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f69e4) {
            ctx->pc = 0x2F69F0u;
            goto label_2f69f0;
        }
    }
    ctx->pc = 0x2F69ECu;
label_2f69ec:
    // 0x2f69ec: 0xa20000dc  sb          $zero, 0xDC($s0)
    ctx->pc = 0x2f69ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 220), (uint8_t)GPR_U32(ctx, 0));
label_2f69f0:
    // 0x2f69f0: 0x161e3c  dsll32      $v1, $s6, 24
    ctx->pc = 0x2f69f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 24));
label_2f69f4:
    // 0x2f69f4: 0xa2800112  sb          $zero, 0x112($s4)
    ctx->pc = 0x2f69f4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 274), (uint8_t)GPR_U32(ctx, 0));
label_2f69f8:
    // 0x2f69f8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2f69f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_2f69fc:
    // 0x2f69fc: 0xa296010f  sb          $s6, 0x10F($s4)
    ctx->pc = 0x2f69fcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 271), (uint8_t)GPR_U32(ctx, 22));
label_2f6a00:
    // 0x2f6a00: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x2f6a00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2f6a04:
    // 0x2f6a04: 0x82860112  lb          $a2, 0x112($s4)
    ctx->pc = 0x2f6a04u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 274)));
label_2f6a08:
    // 0x2f6a08: 0x171e3c  dsll32      $v1, $s7, 24
    ctx->pc = 0x2f6a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 24));
label_2f6a0c:
    // 0x2f6a0c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2f6a0cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_2f6a10:
    // 0x2f6a10: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2f6a10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2f6a14:
    // 0x2f6a14: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2f6a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2f6a18:
    // 0x2f6a18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f6a18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f6a1c:
    // 0x2f6a1c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2f6a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2f6a20:
    // 0x2f6a20: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2f6a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2f6a24:
    // 0x2f6a24: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x2f6a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_2f6a28:
    // 0x2f6a28: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2f6a28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_2f6a2c:
    // 0x2f6a2c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2f6a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2f6a30:
    // 0x2f6a30: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2f6a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2f6a34:
    // 0x2f6a34: 0xae830014  sw          $v1, 0x14($s4)
    ctx->pc = 0x2f6a34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
label_2f6a38:
    // 0x2f6a38: 0xa2800114  sb          $zero, 0x114($s4)
    ctx->pc = 0x2f6a38u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 276), (uint8_t)GPR_U32(ctx, 0));
label_2f6a3c:
    // 0x2f6a3c: 0xa2970111  sb          $s7, 0x111($s4)
    ctx->pc = 0x2f6a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 273), (uint8_t)GPR_U32(ctx, 23));
label_2f6a40:
    // 0x2f6a40: 0x82830114  lb          $v1, 0x114($s4)
    ctx->pc = 0x2f6a40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 276)));
label_2f6a44:
    // 0x2f6a44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2f6a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2f6a48:
    // 0x2f6a48: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2f6a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2f6a4c:
    // 0x2f6a4c: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x2f6a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_2f6a50:
    // 0x2f6a50: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2f6a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2f6a54:
    // 0x2f6a54: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2f6a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2f6a58:
    // 0x2f6a58: 0xae83001c  sw          $v1, 0x1C($s4)
    ctx->pc = 0x2f6a58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 3));
label_2f6a5c:
    // 0x2f6a5c: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x2f6a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_2f6a60:
    // 0x2f6a60: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2f6a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_2f6a64:
    // 0x2f6a64: 0xae830020  sw          $v1, 0x20($s4)
    ctx->pc = 0x2f6a64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 3));
label_2f6a68:
    // 0x2f6a68: 0xe6800050  swc1        $f0, 0x50($s4)
    ctx->pc = 0x2f6a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 80), bits); }
label_2f6a6c:
    // 0x2f6a6c: 0x100000ff  b           . + 4 + (0xFF << 2)
label_2f6a70:
    if (ctx->pc == 0x2F6A70u) {
        ctx->pc = 0x2F6A70u;
            // 0x2f6a70: 0xae800054  sw          $zero, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 0));
        ctx->pc = 0x2F6A74u;
        goto label_2f6a74;
    }
    ctx->pc = 0x2F6A6Cu;
    {
        const bool branch_taken_0x2f6a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6A6Cu;
            // 0x2f6a70: 0xae800054  sw          $zero, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6a6c) {
            ctx->pc = 0x2F6E6Cu;
            goto label_2f6e6c;
        }
    }
    ctx->pc = 0x2F6A74u;
label_2f6a74:
    // 0x2f6a74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f6a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f6a78:
    // 0x2f6a78: 0x5486009b  bnel        $a0, $a2, . + 4 + (0x9B << 2)
label_2f6a7c:
    if (ctx->pc == 0x2F6A7Cu) {
        ctx->pc = 0x2F6A7Cu;
            // 0x2f6a7c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2F6A80u;
        goto label_2f6a80;
    }
    ctx->pc = 0x2F6A78u;
    {
        const bool branch_taken_0x2f6a78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x2f6a78) {
            ctx->pc = 0x2F6A7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6A78u;
            // 0x2f6a7c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F6CE8u;
            goto label_2f6ce8;
        }
    }
    ctx->pc = 0x2F6A80u;
label_2f6a80:
    // 0x2f6a80: 0x3c033eed  lui         $v1, 0x3EED
    ctx->pc = 0x2f6a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16109 << 16));
label_2f6a84:
    // 0x2f6a84: 0x3464097b  ori         $a0, $v1, 0x97B
    ctx->pc = 0x2f6a84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
label_2f6a88:
    // 0x2f6a88: 0xc6a40de4  lwc1        $f4, 0xDE4($s5)
    ctx->pc = 0x2f6a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2f6a8c:
    // 0x2f6a8c: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2f6a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
label_2f6a90:
    // 0x2f6a90: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x2f6a90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_2f6a94:
    // 0x2f6a94: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2f6a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_2f6a98:
    // 0x2f6a98: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x2f6a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f6a9c:
    // 0x2f6a9c: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x2f6a9cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
label_2f6aa0:
    // 0x2f6aa0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2f6aa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2f6aa4:
    // 0x2f6aa4: 0x46050081  sub.s       $f2, $f0, $f5
    ctx->pc = 0x2f6aa4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_2f6aa8:
    // 0x2f6aa8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2f6aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2f6aac:
    // 0x2f6aac: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2f6aacu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_2f6ab0:
    // 0x2f6ab0: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x2f6ab0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_2f6ab4:
    // 0x2f6ab4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f6ab4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f6ab8:
    // 0x2f6ab8: 0x0  nop
    ctx->pc = 0x2f6ab8u;
    // NOP
label_2f6abc:
    // 0x2f6abc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2f6abcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2f6ac0:
    // 0x2f6ac0: 0xc6a00dbc  lwc1        $f0, 0xDBC($s5)
    ctx->pc = 0x2f6ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f6ac4:
    // 0x2f6ac4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f6ac4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f6ac8:
    // 0x2f6ac8: 0xe680002c  swc1        $f0, 0x2C($s4)
    ctx->pc = 0x2f6ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
label_2f6acc:
    // 0x2f6acc: 0xc6a00de4  lwc1        $f0, 0xDE4($s5)
    ctx->pc = 0x2f6accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f6ad0:
    // 0x2f6ad0: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2f6ad0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f6ad4:
    // 0x2f6ad4: 0x4502002b  bc1fl       . + 4 + (0x2B << 2)
label_2f6ad8:
    if (ctx->pc == 0x2F6AD8u) {
        ctx->pc = 0x2F6AD8u;
            // 0x2f6ad8: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2F6ADCu;
        goto label_2f6adc;
    }
    ctx->pc = 0x2F6AD4u;
    {
        const bool branch_taken_0x2f6ad4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f6ad4) {
            ctx->pc = 0x2F6AD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6AD4u;
            // 0x2f6ad8: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F6B84u;
            goto label_2f6b84;
        }
    }
    ctx->pc = 0x2F6ADCu;
label_2f6adc:
    // 0x2f6adc: 0x8283010c  lb          $v1, 0x10C($s4)
    ctx->pc = 0x2f6adcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 268)));
label_2f6ae0:
    // 0x2f6ae0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f6ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2f6ae4:
    // 0x2f6ae4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f6ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2f6ae8:
    // 0x2f6ae8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f6ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f6aec:
    // 0x2f6aec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f6aecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f6af0:
    // 0x2f6af0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f6af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f6af4:
    // 0x2f6af4: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x2f6af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2f6af8:
    // 0x2f6af8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2f6af8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2f6afc:
    // 0x2f6afc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2f6afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2f6b00:
    // 0x2f6b00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f6b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f6b04:
    // 0x2f6b04: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2f6b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2f6b08:
    // 0x2f6b08: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2f6b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2f6b0c:
    // 0x2f6b0c: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x2f6b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_2f6b10:
    // 0x2f6b10: 0x8e990058  lw          $t9, 0x58($s4)
    ctx->pc = 0x2f6b10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_2f6b14:
    // 0x2f6b14: 0x8285010d  lb          $a1, 0x10D($s4)
    ctx->pc = 0x2f6b14u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 269)));
label_2f6b18:
    // 0x2f6b18: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2f6b18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2f6b1c:
    // 0x2f6b1c: 0x320f809  jalr        $t9
label_2f6b20:
    if (ctx->pc == 0x2F6B20u) {
        ctx->pc = 0x2F6B20u;
            // 0x2f6b20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F6B24u;
        goto label_2f6b24;
    }
    ctx->pc = 0x2F6B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F6B24u);
        ctx->pc = 0x2F6B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6B1Cu;
            // 0x2f6b20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F6B24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F6B24u; }
            if (ctx->pc != 0x2F6B24u) { return; }
        }
        }
    }
    ctx->pc = 0x2F6B24u;
label_2f6b24:
    // 0x2f6b24: 0x8e990058  lw          $t9, 0x58($s4)
    ctx->pc = 0x2f6b24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_2f6b28:
    // 0x2f6b28: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2f6b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f6b2c:
    // 0x2f6b2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f6b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f6b30:
    // 0x2f6b30: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2f6b30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2f6b34:
    // 0x2f6b34: 0x320f809  jalr        $t9
label_2f6b38:
    if (ctx->pc == 0x2F6B38u) {
        ctx->pc = 0x2F6B38u;
            // 0x2f6b38: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F6B3Cu;
        goto label_2f6b3c;
    }
    ctx->pc = 0x2F6B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F6B3Cu);
        ctx->pc = 0x2F6B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6B34u;
            // 0x2f6b38: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F6B3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F6B3Cu; }
            if (ctx->pc != 0x2F6B3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2F6B3Cu;
label_2f6b3c:
    // 0x2f6b3c: 0x3c033eed  lui         $v1, 0x3EED
    ctx->pc = 0x2f6b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16109 << 16));
label_2f6b40:
    // 0x2f6b40: 0x3464097b  ori         $a0, $v1, 0x97B
    ctx->pc = 0x2f6b40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
label_2f6b44:
    // 0x2f6b44: 0xc6a10de4  lwc1        $f1, 0xDE4($s5)
    ctx->pc = 0x2f6b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f6b48:
    // 0x2f6b48: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2f6b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
label_2f6b4c:
    // 0x2f6b4c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f6b4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f6b50:
    // 0x2f6b50: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x2f6b50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_2f6b54:
    // 0x2f6b54: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x2f6b54u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[0];
label_2f6b58:
    // 0x2f6b58: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2f6b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2f6b5c:
    // 0x2f6b5c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f6b5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f6b60:
    // 0x2f6b60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f6b60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f6b64:
    // 0x2f6b64: 0x0  nop
    ctx->pc = 0x2f6b64u;
    // NOP
label_2f6b68:
    // 0x2f6b68: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2f6b68u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f6b6c:
    // 0x2f6b6c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2f6b6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f6b70:
    // 0x2f6b70: 0xc6a00dbc  lwc1        $f0, 0xDBC($s5)
    ctx->pc = 0x2f6b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f6b74:
    // 0x2f6b74: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x2f6b74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2f6b78:
    // 0x2f6b78: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f6b78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f6b7c:
    // 0x2f6b7c: 0xe680002c  swc1        $f0, 0x2C($s4)
    ctx->pc = 0x2f6b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
label_2f6b80:
    // 0x2f6b80: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2f6b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f6b84:
    // 0x2f6b84: 0x526300ba  beql        $s3, $v1, . + 4 + (0xBA << 2)
label_2f6b88:
    if (ctx->pc == 0x2F6B88u) {
        ctx->pc = 0x2F6B88u;
            // 0x2f6b88: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x2F6B8Cu;
        goto label_2f6b8c;
    }
    ctx->pc = 0x2F6B84u;
    {
        const bool branch_taken_0x2f6b84 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f6b84) {
            ctx->pc = 0x2F6B88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6B84u;
            // 0x2f6b88: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F6E70u;
            goto label_2f6e70;
        }
    }
    ctx->pc = 0x2F6B8Cu;
label_2f6b8c:
    // 0x2f6b8c: 0xc681003c  lwc1        $f1, 0x3C($s4)
    ctx->pc = 0x2f6b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f6b90:
    // 0x2f6b90: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2f6b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_2f6b94:
    // 0x2f6b94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f6b94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f6b98:
    // 0x2f6b98: 0x0  nop
    ctx->pc = 0x2f6b98u;
    // NOP
label_2f6b9c:
    // 0x2f6b9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f6b9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f6ba0:
    // 0x2f6ba0: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_2f6ba4:
    if (ctx->pc == 0x2F6BA4u) {
        ctx->pc = 0x2F6BA4u;
            // 0x2f6ba4: 0x3c0340e0  lui         $v1, 0x40E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
        ctx->pc = 0x2F6BA8u;
        goto label_2f6ba8;
    }
    ctx->pc = 0x2F6BA0u;
    {
        const bool branch_taken_0x2f6ba0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f6ba0) {
            ctx->pc = 0x2F6BA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6BA0u;
            // 0x2f6ba4: 0x3c0340e0  lui         $v1, 0x40E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F6BC4u;
            goto label_2f6bc4;
        }
    }
    ctx->pc = 0x2F6BA8u;
label_2f6ba8:
    // 0x2f6ba8: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x2f6ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_2f6bac:
    // 0x2f6bac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f6bacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f6bb0:
    // 0x2f6bb0: 0x0  nop
    ctx->pc = 0x2f6bb0u;
    // NOP
label_2f6bb4:
    // 0x2f6bb4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f6bb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f6bb8:
    // 0x2f6bb8: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
label_2f6bbc:
    if (ctx->pc == 0x2F6BBCu) {
        ctx->pc = 0x2F6BBCu;
            // 0x2f6bbc: 0x920300dc  lbu         $v1, 0xDC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->pc = 0x2F6BC0u;
        goto label_2f6bc0;
    }
    ctx->pc = 0x2F6BB8u;
    {
        const bool branch_taken_0x2f6bb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f6bb8) {
            ctx->pc = 0x2F6BBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6BB8u;
            // 0x2f6bbc: 0x920300dc  lbu         $v1, 0xDC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F6BF4u;
            goto label_2f6bf4;
        }
    }
    ctx->pc = 0x2F6BC0u;
label_2f6bc0:
    // 0x2f6bc0: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x2f6bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
label_2f6bc4:
    // 0x2f6bc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f6bc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f6bc8:
    // 0x2f6bc8: 0x0  nop
    ctx->pc = 0x2f6bc8u;
    // NOP
label_2f6bcc:
    // 0x2f6bcc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f6bccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f6bd0:
    // 0x2f6bd0: 0x450300a6  bc1tl       . + 4 + (0xA6 << 2)
label_2f6bd4:
    if (ctx->pc == 0x2F6BD4u) {
        ctx->pc = 0x2F6BD4u;
            // 0x2f6bd4: 0xa20000dc  sb          $zero, 0xDC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 220), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2F6BD8u;
        goto label_2f6bd8;
    }
    ctx->pc = 0x2F6BD0u;
    {
        const bool branch_taken_0x2f6bd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f6bd0) {
            ctx->pc = 0x2F6BD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6BD0u;
            // 0x2f6bd4: 0xa20000dc  sb          $zero, 0xDC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 220), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F6E6Cu;
            goto label_2f6e6c;
        }
    }
    ctx->pc = 0x2F6BD8u;
label_2f6bd8:
    // 0x2f6bd8: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x2f6bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
label_2f6bdc:
    // 0x2f6bdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f6bdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f6be0:
    // 0x2f6be0: 0x0  nop
    ctx->pc = 0x2f6be0u;
    // NOP
label_2f6be4:
    // 0x2f6be4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f6be4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f6be8:
    // 0x2f6be8: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
label_2f6bec:
    if (ctx->pc == 0x2F6BECu) {
        ctx->pc = 0x2F6BF0u;
        goto label_2f6bf0;
    }
    ctx->pc = 0x2F6BE8u;
    {
        const bool branch_taken_0x2f6be8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f6be8) {
            ctx->pc = 0x2F6CDCu;
            goto label_2f6cdc;
        }
    }
    ctx->pc = 0x2F6BF0u;
label_2f6bf0:
    // 0x2f6bf0: 0x920300dc  lbu         $v1, 0xDC($s0)
    ctx->pc = 0x2f6bf0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 220)));
label_2f6bf4:
    // 0x2f6bf4: 0x54600037  bnel        $v1, $zero, . + 4 + (0x37 << 2)
label_2f6bf8:
    if (ctx->pc == 0x2F6BF8u) {
        ctx->pc = 0x2F6BF8u;
            // 0x2f6bf8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F6BFCu;
        goto label_2f6bfc;
    }
    ctx->pc = 0x2F6BF4u;
    {
        const bool branch_taken_0x2f6bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6bf4) {
            ctx->pc = 0x2F6BF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6BF4u;
            // 0x2f6bf8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F6CD4u;
            goto label_2f6cd4;
        }
    }
    ctx->pc = 0x2F6BFCu;
label_2f6bfc:
    // 0x2f6bfc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2f6bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2f6c00:
    // 0x2f6c00: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
label_2f6c04:
    if (ctx->pc == 0x2F6C04u) {
        ctx->pc = 0x2F6C04u;
            // 0x2f6c04: 0x8ea40d60  lw          $a0, 0xD60($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3424)));
        ctx->pc = 0x2F6C08u;
        goto label_2f6c08;
    }
    ctx->pc = 0x2F6C00u;
    {
        const bool branch_taken_0x2f6c00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F6C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6C00u;
            // 0x2f6c04: 0x8ea40d60  lw          $a0, 0xD60($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6c00) {
            ctx->pc = 0x2F6C1Cu;
            goto label_2f6c1c;
        }
    }
    ctx->pc = 0x2F6C08u;
label_2f6c08:
    // 0x2f6c08: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f6c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f6c0c:
    // 0x2f6c0c: 0x52220004  beql        $s1, $v0, . + 4 + (0x4 << 2)
label_2f6c10:
    if (ctx->pc == 0x2F6C10u) {
        ctx->pc = 0x2F6C10u;
            // 0x2f6c10: 0x8ea20da4  lw          $v0, 0xDA4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3492)));
        ctx->pc = 0x2F6C14u;
        goto label_2f6c14;
    }
    ctx->pc = 0x2F6C0Cu;
    {
        const bool branch_taken_0x2f6c0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f6c0c) {
            ctx->pc = 0x2F6C10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6C0Cu;
            // 0x2f6c10: 0x8ea20da4  lw          $v0, 0xDA4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3492)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F6C20u;
            goto label_2f6c20;
        }
    }
    ctx->pc = 0x2F6C14u;
label_2f6c14:
    // 0x2f6c14: 0x1000000e  b           . + 4 + (0xE << 2)
label_2f6c18:
    if (ctx->pc == 0x2F6C18u) {
        ctx->pc = 0x2F6C18u;
            // 0x2f6c18: 0x8c990030  lw          $t9, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->pc = 0x2F6C1Cu;
        goto label_2f6c1c;
    }
    ctx->pc = 0x2F6C14u;
    {
        const bool branch_taken_0x2f6c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6C14u;
            // 0x2f6c18: 0x8c990030  lw          $t9, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6c14) {
            ctx->pc = 0x2F6C50u;
            goto label_2f6c50;
        }
    }
    ctx->pc = 0x2F6C1Cu;
label_2f6c1c:
    // 0x2f6c1c: 0x8ea20da4  lw          $v0, 0xDA4($s5)
    ctx->pc = 0x2f6c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3492)));
label_2f6c20:
    // 0x2f6c20: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2f6c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_2f6c24:
    // 0x2f6c24: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_2f6c28:
    if (ctx->pc == 0x2F6C28u) {
        ctx->pc = 0x2F6C2Cu;
        goto label_2f6c2c;
    }
    ctx->pc = 0x2F6C24u;
    {
        const bool branch_taken_0x2f6c24 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2f6c24) {
            ctx->pc = 0x2F6C4Cu;
            goto label_2f6c4c;
        }
    }
    ctx->pc = 0x2F6C2Cu;
label_2f6c2c:
    // 0x2f6c2c: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x2f6c2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2f6c30:
    // 0x2f6c30: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2f6c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2f6c34:
    // 0x2f6c34: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2f6c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2f6c38:
    // 0x2f6c38: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2f6c38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2f6c3c:
    // 0x2f6c3c: 0x320f809  jalr        $t9
label_2f6c40:
    if (ctx->pc == 0x2F6C40u) {
        ctx->pc = 0x2F6C40u;
            // 0x2f6c40: 0x8c4500a8  lw          $a1, 0xA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
        ctx->pc = 0x2F6C44u;
        goto label_2f6c44;
    }
    ctx->pc = 0x2F6C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F6C44u);
        ctx->pc = 0x2F6C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6C3Cu;
            // 0x2f6c40: 0x8c4500a8  lw          $a1, 0xA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F6C44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F6C44u; }
            if (ctx->pc != 0x2F6C44u) { return; }
        }
        }
    }
    ctx->pc = 0x2F6C44u;
label_2f6c44:
    // 0x2f6c44: 0x10000007  b           . + 4 + (0x7 << 2)
label_2f6c48:
    if (ctx->pc == 0x2F6C48u) {
        ctx->pc = 0x2F6C48u;
            // 0x2f6c48: 0x8ea30da4  lw          $v1, 0xDA4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3492)));
        ctx->pc = 0x2F6C4Cu;
        goto label_2f6c4c;
    }
    ctx->pc = 0x2F6C44u;
    {
        const bool branch_taken_0x2f6c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6C44u;
            // 0x2f6c48: 0x8ea30da4  lw          $v1, 0xDA4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6c44) {
            ctx->pc = 0x2F6C64u;
            goto label_2f6c64;
        }
    }
    ctx->pc = 0x2F6C4Cu;
label_2f6c4c:
    // 0x2f6c4c: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x2f6c4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2f6c50:
    // 0x2f6c50: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x2f6c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_2f6c54:
    // 0x2f6c54: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2f6c54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2f6c58:
    // 0x2f6c58: 0x320f809  jalr        $t9
label_2f6c5c:
    if (ctx->pc == 0x2F6C5Cu) {
        ctx->pc = 0x2F6C5Cu;
            // 0x2f6c5c: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x2F6C60u;
        goto label_2f6c60;
    }
    ctx->pc = 0x2F6C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F6C60u);
        ctx->pc = 0x2F6C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6C58u;
            // 0x2f6c5c: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F6C60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F6C60u; }
            if (ctx->pc != 0x2F6C60u) { return; }
        }
        }
    }
    ctx->pc = 0x2F6C60u;
label_2f6c60:
    // 0x2f6c60: 0x8ea30da4  lw          $v1, 0xDA4($s5)
    ctx->pc = 0x2f6c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3492)));
label_2f6c64:
    // 0x2f6c64: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x2f6c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_2f6c68:
    // 0x2f6c68: 0x18600019  blez        $v1, . + 4 + (0x19 << 2)
label_2f6c6c:
    if (ctx->pc == 0x2F6C6Cu) {
        ctx->pc = 0x2F6C70u;
        goto label_2f6c70;
    }
    ctx->pc = 0x2F6C68u;
    {
        const bool branch_taken_0x2f6c68 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2f6c68) {
            ctx->pc = 0x2F6CD0u;
            goto label_2f6cd0;
        }
    }
    ctx->pc = 0x2F6C70u;
label_2f6c70:
    // 0x2f6c70: 0x8ea30e34  lw          $v1, 0xE34($s5)
    ctx->pc = 0x2f6c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
label_2f6c74:
    // 0x2f6c74: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x2f6c74u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2f6c78:
    // 0x2f6c78: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_2f6c7c:
    if (ctx->pc == 0x2F6C7Cu) {
        ctx->pc = 0x2F6C7Cu;
            // 0x2f6c7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F6C80u;
        goto label_2f6c80;
    }
    ctx->pc = 0x2F6C78u;
    {
        const bool branch_taken_0x2f6c78 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2F6C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6C78u;
            // 0x2f6c7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6c78) {
            ctx->pc = 0x2F6C90u;
            goto label_2f6c90;
        }
    }
    ctx->pc = 0x2F6C80u;
label_2f6c80:
    // 0x2f6c80: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x2f6c80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_2f6c84:
    // 0x2f6c84: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_2f6c88:
    if (ctx->pc == 0x2F6C88u) {
        ctx->pc = 0x2F6C8Cu;
        goto label_2f6c8c;
    }
    ctx->pc = 0x2F6C84u;
    {
        const bool branch_taken_0x2f6c84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6c84) {
            ctx->pc = 0x2F6C90u;
            goto label_2f6c90;
        }
    }
    ctx->pc = 0x2F6C8Cu;
label_2f6c8c:
    // 0x2f6c8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f6c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f6c90:
    // 0x2f6c90: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_2f6c94:
    if (ctx->pc == 0x2F6C94u) {
        ctx->pc = 0x2F6C98u;
        goto label_2f6c98;
    }
    ctx->pc = 0x2F6C90u;
    {
        const bool branch_taken_0x2f6c90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6c90) {
            ctx->pc = 0x2F6CACu;
            goto label_2f6cac;
        }
    }
    ctx->pc = 0x2F6C98u;
label_2f6c98:
    // 0x2f6c98: 0xc075eb4  jal         func_1D7AD0
label_2f6c9c:
    if (ctx->pc == 0x2F6C9Cu) {
        ctx->pc = 0x2F6C9Cu;
            // 0x2f6c9c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F6CA0u;
        goto label_2f6ca0;
    }
    ctx->pc = 0x2F6C98u;
    SET_GPR_U32(ctx, 31, 0x2F6CA0u);
    ctx->pc = 0x2F6C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6C98u;
            // 0x2f6c9c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6CA0u; }
        if (ctx->pc != 0x2F6CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6CA0u; }
        if (ctx->pc != 0x2F6CA0u) { return; }
    }
    ctx->pc = 0x2F6CA0u;
label_2f6ca0:
    // 0x2f6ca0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2f6ca4:
    if (ctx->pc == 0x2F6CA4u) {
        ctx->pc = 0x2F6CA8u;
        goto label_2f6ca8;
    }
    ctx->pc = 0x2F6CA0u;
    {
        const bool branch_taken_0x2f6ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6ca0) {
            ctx->pc = 0x2F6CACu;
            goto label_2f6cac;
        }
    }
    ctx->pc = 0x2F6CA8u;
label_2f6ca8:
    // 0x2f6ca8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f6ca8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f6cac:
    // 0x2f6cac: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
label_2f6cb0:
    if (ctx->pc == 0x2F6CB0u) {
        ctx->pc = 0x2F6CB0u;
            // 0x2f6cb0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F6CB4u;
        goto label_2f6cb4;
    }
    ctx->pc = 0x2F6CACu;
    {
        const bool branch_taken_0x2f6cac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6cac) {
            ctx->pc = 0x2F6CB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6CACu;
            // 0x2f6cb0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F6CC8u;
            goto label_2f6cc8;
        }
    }
    ctx->pc = 0x2F6CB4u;
label_2f6cb4:
    // 0x2f6cb4: 0x8ea40e34  lw          $a0, 0xE34($s5)
    ctx->pc = 0x2f6cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
label_2f6cb8:
    // 0x2f6cb8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2f6cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f6cbc:
    // 0x2f6cbc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_2f6cc0:
    if (ctx->pc == 0x2F6CC0u) {
        ctx->pc = 0x2F6CC4u;
        goto label_2f6cc4;
    }
    ctx->pc = 0x2F6CBCu;
    {
        const bool branch_taken_0x2f6cbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f6cbc) {
            ctx->pc = 0x2F6CD0u;
            goto label_2f6cd0;
        }
    }
    ctx->pc = 0x2F6CC4u;
label_2f6cc4:
    // 0x2f6cc4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f6cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f6cc8:
    // 0x2f6cc8: 0xc0ba5b4  jal         func_2E96D0
label_2f6ccc:
    if (ctx->pc == 0x2F6CCCu) {
        ctx->pc = 0x2F6CCCu;
            // 0x2f6ccc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F6CD0u;
        goto label_2f6cd0;
    }
    ctx->pc = 0x2F6CC8u;
    SET_GPR_U32(ctx, 31, 0x2F6CD0u);
    ctx->pc = 0x2F6CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6CC8u;
            // 0x2f6ccc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E96D0u;
    if (runtime->hasFunction(0x2E96D0u)) {
        auto targetFn = runtime->lookupFunction(0x2E96D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6CD0u; }
        if (ctx->pc != 0x2F6CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E96D0_0x2e96d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6CD0u; }
        if (ctx->pc != 0x2F6CD0u) { return; }
    }
    ctx->pc = 0x2F6CD0u;
label_2f6cd0:
    // 0x2f6cd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f6cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f6cd4:
    // 0x2f6cd4: 0x10000065  b           . + 4 + (0x65 << 2)
label_2f6cd8:
    if (ctx->pc == 0x2F6CD8u) {
        ctx->pc = 0x2F6CD8u;
            // 0x2f6cd8: 0xa20300dc  sb          $v1, 0xDC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 220), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2F6CDCu;
        goto label_2f6cdc;
    }
    ctx->pc = 0x2F6CD4u;
    {
        const bool branch_taken_0x2f6cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6CD4u;
            // 0x2f6cd8: 0xa20300dc  sb          $v1, 0xDC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 220), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6cd4) {
            ctx->pc = 0x2F6E6Cu;
            goto label_2f6e6c;
        }
    }
    ctx->pc = 0x2F6CDCu;
label_2f6cdc:
    // 0x2f6cdc: 0xa20000dc  sb          $zero, 0xDC($s0)
    ctx->pc = 0x2f6cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 220), (uint8_t)GPR_U32(ctx, 0));
label_2f6ce0:
    // 0x2f6ce0: 0x10000062  b           . + 4 + (0x62 << 2)
label_2f6ce4:
    if (ctx->pc == 0x2F6CE4u) {
        ctx->pc = 0x2F6CE8u;
        goto label_2f6ce8;
    }
    ctx->pc = 0x2F6CE0u;
    {
        const bool branch_taken_0x2f6ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6ce0) {
            ctx->pc = 0x2F6E6Cu;
            goto label_2f6e6c;
        }
    }
    ctx->pc = 0x2F6CE8u;
label_2f6ce8:
    // 0x2f6ce8: 0x14830060  bne         $a0, $v1, . + 4 + (0x60 << 2)
label_2f6cec:
    if (ctx->pc == 0x2F6CECu) {
        ctx->pc = 0x2F6CF0u;
        goto label_2f6cf0;
    }
    ctx->pc = 0x2F6CE8u;
    {
        const bool branch_taken_0x2f6ce8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f6ce8) {
            ctx->pc = 0x2F6E6Cu;
            goto label_2f6e6c;
        }
    }
    ctx->pc = 0x2F6CF0u;
label_2f6cf0:
    // 0x2f6cf0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2f6cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f6cf4:
    // 0x2f6cf4: 0x1263005d  beq         $s3, $v1, . + 4 + (0x5D << 2)
label_2f6cf8:
    if (ctx->pc == 0x2F6CF8u) {
        ctx->pc = 0x2F6CFCu;
        goto label_2f6cfc;
    }
    ctx->pc = 0x2F6CF4u;
    {
        const bool branch_taken_0x2f6cf4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f6cf4) {
            ctx->pc = 0x2F6E6Cu;
            goto label_2f6e6c;
        }
    }
    ctx->pc = 0x2F6CFCu;
label_2f6cfc:
    // 0x2f6cfc: 0xc681003c  lwc1        $f1, 0x3C($s4)
    ctx->pc = 0x2f6cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f6d00:
    // 0x2f6d00: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f6d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_2f6d04:
    // 0x2f6d04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f6d04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f6d08:
    // 0x2f6d08: 0x0  nop
    ctx->pc = 0x2f6d08u;
    // NOP
label_2f6d0c:
    // 0x2f6d0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f6d0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f6d10:
    // 0x2f6d10: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_2f6d14:
    if (ctx->pc == 0x2F6D14u) {
        ctx->pc = 0x2F6D14u;
            // 0x2f6d14: 0x3c0341c8  lui         $v1, 0x41C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
        ctx->pc = 0x2F6D18u;
        goto label_2f6d18;
    }
    ctx->pc = 0x2F6D10u;
    {
        const bool branch_taken_0x2f6d10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f6d10) {
            ctx->pc = 0x2F6D14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6D10u;
            // 0x2f6d14: 0x3c0341c8  lui         $v1, 0x41C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F6D34u;
            goto label_2f6d34;
        }
    }
    ctx->pc = 0x2F6D18u;
label_2f6d18:
    // 0x2f6d18: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x2f6d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
label_2f6d1c:
    // 0x2f6d1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f6d1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f6d20:
    // 0x2f6d20: 0x0  nop
    ctx->pc = 0x2f6d20u;
    // NOP
label_2f6d24:
    // 0x2f6d24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f6d24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f6d28:
    // 0x2f6d28: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
label_2f6d2c:
    if (ctx->pc == 0x2F6D2Cu) {
        ctx->pc = 0x2F6D2Cu;
            // 0x2f6d2c: 0x920300dc  lbu         $v1, 0xDC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->pc = 0x2F6D30u;
        goto label_2f6d30;
    }
    ctx->pc = 0x2F6D28u;
    {
        const bool branch_taken_0x2f6d28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f6d28) {
            ctx->pc = 0x2F6D2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6D28u;
            // 0x2f6d2c: 0x920300dc  lbu         $v1, 0xDC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F6D64u;
            goto label_2f6d64;
        }
    }
    ctx->pc = 0x2F6D30u;
label_2f6d30:
    // 0x2f6d30: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x2f6d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
label_2f6d34:
    // 0x2f6d34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f6d34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f6d38:
    // 0x2f6d38: 0x0  nop
    ctx->pc = 0x2f6d38u;
    // NOP
label_2f6d3c:
    // 0x2f6d3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f6d3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f6d40:
    // 0x2f6d40: 0x4503004a  bc1tl       . + 4 + (0x4A << 2)
label_2f6d44:
    if (ctx->pc == 0x2F6D44u) {
        ctx->pc = 0x2F6D44u;
            // 0x2f6d44: 0xa20000dc  sb          $zero, 0xDC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 220), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2F6D48u;
        goto label_2f6d48;
    }
    ctx->pc = 0x2F6D40u;
    {
        const bool branch_taken_0x2f6d40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f6d40) {
            ctx->pc = 0x2F6D44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6D40u;
            // 0x2f6d44: 0xa20000dc  sb          $zero, 0xDC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 220), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F6E6Cu;
            goto label_2f6e6c;
        }
    }
    ctx->pc = 0x2F6D48u;
label_2f6d48:
    // 0x2f6d48: 0x3c0341d8  lui         $v1, 0x41D8
    ctx->pc = 0x2f6d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16856 << 16));
label_2f6d4c:
    // 0x2f6d4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f6d4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f6d50:
    // 0x2f6d50: 0x0  nop
    ctx->pc = 0x2f6d50u;
    // NOP
label_2f6d54:
    // 0x2f6d54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f6d54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f6d58:
    // 0x2f6d58: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
label_2f6d5c:
    if (ctx->pc == 0x2F6D5Cu) {
        ctx->pc = 0x2F6D60u;
        goto label_2f6d60;
    }
    ctx->pc = 0x2F6D58u;
    {
        const bool branch_taken_0x2f6d58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f6d58) {
            ctx->pc = 0x2F6E4Cu;
            goto label_2f6e4c;
        }
    }
    ctx->pc = 0x2F6D60u;
label_2f6d60:
    // 0x2f6d60: 0x920300dc  lbu         $v1, 0xDC($s0)
    ctx->pc = 0x2f6d60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 220)));
label_2f6d64:
    // 0x2f6d64: 0x54600037  bnel        $v1, $zero, . + 4 + (0x37 << 2)
label_2f6d68:
    if (ctx->pc == 0x2F6D68u) {
        ctx->pc = 0x2F6D68u;
            // 0x2f6d68: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F6D6Cu;
        goto label_2f6d6c;
    }
    ctx->pc = 0x2F6D64u;
    {
        const bool branch_taken_0x2f6d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6d64) {
            ctx->pc = 0x2F6D68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6D64u;
            // 0x2f6d68: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F6E44u;
            goto label_2f6e44;
        }
    }
    ctx->pc = 0x2F6D6Cu;
label_2f6d6c:
    // 0x2f6d6c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2f6d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2f6d70:
    // 0x2f6d70: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
label_2f6d74:
    if (ctx->pc == 0x2F6D74u) {
        ctx->pc = 0x2F6D74u;
            // 0x2f6d74: 0x8ea40d60  lw          $a0, 0xD60($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3424)));
        ctx->pc = 0x2F6D78u;
        goto label_2f6d78;
    }
    ctx->pc = 0x2F6D70u;
    {
        const bool branch_taken_0x2f6d70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F6D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6D70u;
            // 0x2f6d74: 0x8ea40d60  lw          $a0, 0xD60($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6d70) {
            ctx->pc = 0x2F6D8Cu;
            goto label_2f6d8c;
        }
    }
    ctx->pc = 0x2F6D78u;
label_2f6d78:
    // 0x2f6d78: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f6d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f6d7c:
    // 0x2f6d7c: 0x52220004  beql        $s1, $v0, . + 4 + (0x4 << 2)
label_2f6d80:
    if (ctx->pc == 0x2F6D80u) {
        ctx->pc = 0x2F6D80u;
            // 0x2f6d80: 0x8ea20da4  lw          $v0, 0xDA4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3492)));
        ctx->pc = 0x2F6D84u;
        goto label_2f6d84;
    }
    ctx->pc = 0x2F6D7Cu;
    {
        const bool branch_taken_0x2f6d7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f6d7c) {
            ctx->pc = 0x2F6D80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6D7Cu;
            // 0x2f6d80: 0x8ea20da4  lw          $v0, 0xDA4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3492)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F6D90u;
            goto label_2f6d90;
        }
    }
    ctx->pc = 0x2F6D84u;
label_2f6d84:
    // 0x2f6d84: 0x1000000e  b           . + 4 + (0xE << 2)
label_2f6d88:
    if (ctx->pc == 0x2F6D88u) {
        ctx->pc = 0x2F6D88u;
            // 0x2f6d88: 0x8c990030  lw          $t9, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->pc = 0x2F6D8Cu;
        goto label_2f6d8c;
    }
    ctx->pc = 0x2F6D84u;
    {
        const bool branch_taken_0x2f6d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6D84u;
            // 0x2f6d88: 0x8c990030  lw          $t9, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6d84) {
            ctx->pc = 0x2F6DC0u;
            goto label_2f6dc0;
        }
    }
    ctx->pc = 0x2F6D8Cu;
label_2f6d8c:
    // 0x2f6d8c: 0x8ea20da4  lw          $v0, 0xDA4($s5)
    ctx->pc = 0x2f6d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3492)));
label_2f6d90:
    // 0x2f6d90: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2f6d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_2f6d94:
    // 0x2f6d94: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_2f6d98:
    if (ctx->pc == 0x2F6D98u) {
        ctx->pc = 0x2F6D9Cu;
        goto label_2f6d9c;
    }
    ctx->pc = 0x2F6D94u;
    {
        const bool branch_taken_0x2f6d94 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2f6d94) {
            ctx->pc = 0x2F6DBCu;
            goto label_2f6dbc;
        }
    }
    ctx->pc = 0x2F6D9Cu;
label_2f6d9c:
    // 0x2f6d9c: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x2f6d9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2f6da0:
    // 0x2f6da0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2f6da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2f6da4:
    // 0x2f6da4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2f6da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2f6da8:
    // 0x2f6da8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2f6da8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2f6dac:
    // 0x2f6dac: 0x320f809  jalr        $t9
label_2f6db0:
    if (ctx->pc == 0x2F6DB0u) {
        ctx->pc = 0x2F6DB0u;
            // 0x2f6db0: 0x8c4500a8  lw          $a1, 0xA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
        ctx->pc = 0x2F6DB4u;
        goto label_2f6db4;
    }
    ctx->pc = 0x2F6DACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F6DB4u);
        ctx->pc = 0x2F6DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6DACu;
            // 0x2f6db0: 0x8c4500a8  lw          $a1, 0xA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F6DB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F6DB4u; }
            if (ctx->pc != 0x2F6DB4u) { return; }
        }
        }
    }
    ctx->pc = 0x2F6DB4u;
label_2f6db4:
    // 0x2f6db4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2f6db8:
    if (ctx->pc == 0x2F6DB8u) {
        ctx->pc = 0x2F6DB8u;
            // 0x2f6db8: 0x8ea30da4  lw          $v1, 0xDA4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3492)));
        ctx->pc = 0x2F6DBCu;
        goto label_2f6dbc;
    }
    ctx->pc = 0x2F6DB4u;
    {
        const bool branch_taken_0x2f6db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6DB4u;
            // 0x2f6db8: 0x8ea30da4  lw          $v1, 0xDA4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6db4) {
            ctx->pc = 0x2F6DD4u;
            goto label_2f6dd4;
        }
    }
    ctx->pc = 0x2F6DBCu;
label_2f6dbc:
    // 0x2f6dbc: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x2f6dbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2f6dc0:
    // 0x2f6dc0: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x2f6dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_2f6dc4:
    // 0x2f6dc4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2f6dc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2f6dc8:
    // 0x2f6dc8: 0x320f809  jalr        $t9
label_2f6dcc:
    if (ctx->pc == 0x2F6DCCu) {
        ctx->pc = 0x2F6DCCu;
            // 0x2f6dcc: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x2F6DD0u;
        goto label_2f6dd0;
    }
    ctx->pc = 0x2F6DC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F6DD0u);
        ctx->pc = 0x2F6DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6DC8u;
            // 0x2f6dcc: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F6DD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F6DD0u; }
            if (ctx->pc != 0x2F6DD0u) { return; }
        }
        }
    }
    ctx->pc = 0x2F6DD0u;
label_2f6dd0:
    // 0x2f6dd0: 0x8ea30da4  lw          $v1, 0xDA4($s5)
    ctx->pc = 0x2f6dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3492)));
label_2f6dd4:
    // 0x2f6dd4: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x2f6dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_2f6dd8:
    // 0x2f6dd8: 0x18600019  blez        $v1, . + 4 + (0x19 << 2)
label_2f6ddc:
    if (ctx->pc == 0x2F6DDCu) {
        ctx->pc = 0x2F6DE0u;
        goto label_2f6de0;
    }
    ctx->pc = 0x2F6DD8u;
    {
        const bool branch_taken_0x2f6dd8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2f6dd8) {
            ctx->pc = 0x2F6E40u;
            goto label_2f6e40;
        }
    }
    ctx->pc = 0x2F6DE0u;
label_2f6de0:
    // 0x2f6de0: 0x8ea30e34  lw          $v1, 0xE34($s5)
    ctx->pc = 0x2f6de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
label_2f6de4:
    // 0x2f6de4: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x2f6de4u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2f6de8:
    // 0x2f6de8: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_2f6dec:
    if (ctx->pc == 0x2F6DECu) {
        ctx->pc = 0x2F6DECu;
            // 0x2f6dec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F6DF0u;
        goto label_2f6df0;
    }
    ctx->pc = 0x2F6DE8u;
    {
        const bool branch_taken_0x2f6de8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2F6DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6DE8u;
            // 0x2f6dec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6de8) {
            ctx->pc = 0x2F6E00u;
            goto label_2f6e00;
        }
    }
    ctx->pc = 0x2F6DF0u;
label_2f6df0:
    // 0x2f6df0: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x2f6df0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_2f6df4:
    // 0x2f6df4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_2f6df8:
    if (ctx->pc == 0x2F6DF8u) {
        ctx->pc = 0x2F6DFCu;
        goto label_2f6dfc;
    }
    ctx->pc = 0x2F6DF4u;
    {
        const bool branch_taken_0x2f6df4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6df4) {
            ctx->pc = 0x2F6E00u;
            goto label_2f6e00;
        }
    }
    ctx->pc = 0x2F6DFCu;
label_2f6dfc:
    // 0x2f6dfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f6dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f6e00:
    // 0x2f6e00: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_2f6e04:
    if (ctx->pc == 0x2F6E04u) {
        ctx->pc = 0x2F6E08u;
        goto label_2f6e08;
    }
    ctx->pc = 0x2F6E00u;
    {
        const bool branch_taken_0x2f6e00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6e00) {
            ctx->pc = 0x2F6E1Cu;
            goto label_2f6e1c;
        }
    }
    ctx->pc = 0x2F6E08u;
label_2f6e08:
    // 0x2f6e08: 0xc075eb4  jal         func_1D7AD0
label_2f6e0c:
    if (ctx->pc == 0x2F6E0Cu) {
        ctx->pc = 0x2F6E0Cu;
            // 0x2f6e0c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F6E10u;
        goto label_2f6e10;
    }
    ctx->pc = 0x2F6E08u;
    SET_GPR_U32(ctx, 31, 0x2F6E10u);
    ctx->pc = 0x2F6E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6E08u;
            // 0x2f6e0c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6E10u; }
        if (ctx->pc != 0x2F6E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6E10u; }
        if (ctx->pc != 0x2F6E10u) { return; }
    }
    ctx->pc = 0x2F6E10u;
label_2f6e10:
    // 0x2f6e10: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2f6e14:
    if (ctx->pc == 0x2F6E14u) {
        ctx->pc = 0x2F6E18u;
        goto label_2f6e18;
    }
    ctx->pc = 0x2F6E10u;
    {
        const bool branch_taken_0x2f6e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6e10) {
            ctx->pc = 0x2F6E1Cu;
            goto label_2f6e1c;
        }
    }
    ctx->pc = 0x2F6E18u;
label_2f6e18:
    // 0x2f6e18: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f6e18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f6e1c:
    // 0x2f6e1c: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
label_2f6e20:
    if (ctx->pc == 0x2F6E20u) {
        ctx->pc = 0x2F6E20u;
            // 0x2f6e20: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F6E24u;
        goto label_2f6e24;
    }
    ctx->pc = 0x2F6E1Cu;
    {
        const bool branch_taken_0x2f6e1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6e1c) {
            ctx->pc = 0x2F6E20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6E1Cu;
            // 0x2f6e20: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F6E38u;
            goto label_2f6e38;
        }
    }
    ctx->pc = 0x2F6E24u;
label_2f6e24:
    // 0x2f6e24: 0x8ea40e34  lw          $a0, 0xE34($s5)
    ctx->pc = 0x2f6e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
label_2f6e28:
    // 0x2f6e28: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2f6e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f6e2c:
    // 0x2f6e2c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_2f6e30:
    if (ctx->pc == 0x2F6E30u) {
        ctx->pc = 0x2F6E34u;
        goto label_2f6e34;
    }
    ctx->pc = 0x2F6E2Cu;
    {
        const bool branch_taken_0x2f6e2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f6e2c) {
            ctx->pc = 0x2F6E40u;
            goto label_2f6e40;
        }
    }
    ctx->pc = 0x2F6E34u;
label_2f6e34:
    // 0x2f6e34: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f6e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f6e38:
    // 0x2f6e38: 0xc0ba5b4  jal         func_2E96D0
label_2f6e3c:
    if (ctx->pc == 0x2F6E3Cu) {
        ctx->pc = 0x2F6E3Cu;
            // 0x2f6e3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F6E40u;
        goto label_2f6e40;
    }
    ctx->pc = 0x2F6E38u;
    SET_GPR_U32(ctx, 31, 0x2F6E40u);
    ctx->pc = 0x2F6E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6E38u;
            // 0x2f6e3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E96D0u;
    if (runtime->hasFunction(0x2E96D0u)) {
        auto targetFn = runtime->lookupFunction(0x2E96D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6E40u; }
        if (ctx->pc != 0x2F6E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E96D0_0x2e96d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6E40u; }
        if (ctx->pc != 0x2F6E40u) { return; }
    }
    ctx->pc = 0x2F6E40u;
label_2f6e40:
    // 0x2f6e40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f6e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f6e44:
    // 0x2f6e44: 0x10000009  b           . + 4 + (0x9 << 2)
label_2f6e48:
    if (ctx->pc == 0x2F6E48u) {
        ctx->pc = 0x2F6E48u;
            // 0x2f6e48: 0xa20300dc  sb          $v1, 0xDC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 220), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2F6E4Cu;
        goto label_2f6e4c;
    }
    ctx->pc = 0x2F6E44u;
    {
        const bool branch_taken_0x2f6e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6E44u;
            // 0x2f6e48: 0xa20300dc  sb          $v1, 0xDC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 220), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6e44) {
            ctx->pc = 0x2F6E6Cu;
            goto label_2f6e6c;
        }
    }
    ctx->pc = 0x2F6E4Cu;
label_2f6e4c:
    // 0x2f6e4c: 0xa20000dc  sb          $zero, 0xDC($s0)
    ctx->pc = 0x2f6e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 220), (uint8_t)GPR_U32(ctx, 0));
label_2f6e50:
    // 0x2f6e50: 0x10000006  b           . + 4 + (0x6 << 2)
label_2f6e54:
    if (ctx->pc == 0x2F6E54u) {
        ctx->pc = 0x2F6E58u;
        goto label_2f6e58;
    }
    ctx->pc = 0x2F6E50u;
    {
        const bool branch_taken_0x2f6e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6e50) {
            ctx->pc = 0x2F6E6Cu;
            goto label_2f6e6c;
        }
    }
    ctx->pc = 0x2F6E58u;
label_2f6e58:
    // 0x2f6e58: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x2f6e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2f6e5c:
    // 0x2f6e5c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f6e5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f6e60:
    // 0x2f6e60: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x2f6e60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_2f6e64:
    // 0x2f6e64: 0x320f809  jalr        $t9
label_2f6e68:
    if (ctx->pc == 0x2F6E68u) {
        ctx->pc = 0x2F6E6Cu;
        goto label_2f6e6c;
    }
    ctx->pc = 0x2F6E64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F6E6Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F6E6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F6E6Cu; }
            if (ctx->pc != 0x2F6E6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2F6E6Cu;
label_2f6e6c:
    // 0x2f6e6c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2f6e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2f6e70:
    // 0x2f6e70: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2f6e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f6e74:
    // 0x2f6e74: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2f6e74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2f6e78:
    // 0x2f6e78: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2f6e78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2f6e7c:
    // 0x2f6e7c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2f6e7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2f6e80:
    // 0x2f6e80: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2f6e80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f6e84:
    // 0x2f6e84: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2f6e84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f6e88:
    // 0x2f6e88: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f6e88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f6e8c:
    // 0x2f6e8c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f6e8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f6e90:
    // 0x2f6e90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f6e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f6e94:
    // 0x2f6e94: 0x3e00008  jr          $ra
label_2f6e98:
    if (ctx->pc == 0x2F6E98u) {
        ctx->pc = 0x2F6E98u;
            // 0x2f6e98: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x2F6E9Cu;
        goto label_2f6e9c;
    }
    ctx->pc = 0x2F6E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6E94u;
            // 0x2f6e98: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F6E9Cu;
label_2f6e9c:
    // 0x2f6e9c: 0x0  nop
    ctx->pc = 0x2f6e9cu;
    // NOP
}
