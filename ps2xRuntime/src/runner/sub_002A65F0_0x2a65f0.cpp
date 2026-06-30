#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A65F0
// Address: 0x2a65f0 - 0x2a83d0
void sub_002A65F0_0x2a65f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A65F0_0x2a65f0");
#endif

    switch (ctx->pc) {
        case 0x2a65f0u: goto label_2a65f0;
        case 0x2a65f4u: goto label_2a65f4;
        case 0x2a65f8u: goto label_2a65f8;
        case 0x2a65fcu: goto label_2a65fc;
        case 0x2a6600u: goto label_2a6600;
        case 0x2a6604u: goto label_2a6604;
        case 0x2a6608u: goto label_2a6608;
        case 0x2a660cu: goto label_2a660c;
        case 0x2a6610u: goto label_2a6610;
        case 0x2a6614u: goto label_2a6614;
        case 0x2a6618u: goto label_2a6618;
        case 0x2a661cu: goto label_2a661c;
        case 0x2a6620u: goto label_2a6620;
        case 0x2a6624u: goto label_2a6624;
        case 0x2a6628u: goto label_2a6628;
        case 0x2a662cu: goto label_2a662c;
        case 0x2a6630u: goto label_2a6630;
        case 0x2a6634u: goto label_2a6634;
        case 0x2a6638u: goto label_2a6638;
        case 0x2a663cu: goto label_2a663c;
        case 0x2a6640u: goto label_2a6640;
        case 0x2a6644u: goto label_2a6644;
        case 0x2a6648u: goto label_2a6648;
        case 0x2a664cu: goto label_2a664c;
        case 0x2a6650u: goto label_2a6650;
        case 0x2a6654u: goto label_2a6654;
        case 0x2a6658u: goto label_2a6658;
        case 0x2a665cu: goto label_2a665c;
        case 0x2a6660u: goto label_2a6660;
        case 0x2a6664u: goto label_2a6664;
        case 0x2a6668u: goto label_2a6668;
        case 0x2a666cu: goto label_2a666c;
        case 0x2a6670u: goto label_2a6670;
        case 0x2a6674u: goto label_2a6674;
        case 0x2a6678u: goto label_2a6678;
        case 0x2a667cu: goto label_2a667c;
        case 0x2a6680u: goto label_2a6680;
        case 0x2a6684u: goto label_2a6684;
        case 0x2a6688u: goto label_2a6688;
        case 0x2a668cu: goto label_2a668c;
        case 0x2a6690u: goto label_2a6690;
        case 0x2a6694u: goto label_2a6694;
        case 0x2a6698u: goto label_2a6698;
        case 0x2a669cu: goto label_2a669c;
        case 0x2a66a0u: goto label_2a66a0;
        case 0x2a66a4u: goto label_2a66a4;
        case 0x2a66a8u: goto label_2a66a8;
        case 0x2a66acu: goto label_2a66ac;
        case 0x2a66b0u: goto label_2a66b0;
        case 0x2a66b4u: goto label_2a66b4;
        case 0x2a66b8u: goto label_2a66b8;
        case 0x2a66bcu: goto label_2a66bc;
        case 0x2a66c0u: goto label_2a66c0;
        case 0x2a66c4u: goto label_2a66c4;
        case 0x2a66c8u: goto label_2a66c8;
        case 0x2a66ccu: goto label_2a66cc;
        case 0x2a66d0u: goto label_2a66d0;
        case 0x2a66d4u: goto label_2a66d4;
        case 0x2a66d8u: goto label_2a66d8;
        case 0x2a66dcu: goto label_2a66dc;
        case 0x2a66e0u: goto label_2a66e0;
        case 0x2a66e4u: goto label_2a66e4;
        case 0x2a66e8u: goto label_2a66e8;
        case 0x2a66ecu: goto label_2a66ec;
        case 0x2a66f0u: goto label_2a66f0;
        case 0x2a66f4u: goto label_2a66f4;
        case 0x2a66f8u: goto label_2a66f8;
        case 0x2a66fcu: goto label_2a66fc;
        case 0x2a6700u: goto label_2a6700;
        case 0x2a6704u: goto label_2a6704;
        case 0x2a6708u: goto label_2a6708;
        case 0x2a670cu: goto label_2a670c;
        case 0x2a6710u: goto label_2a6710;
        case 0x2a6714u: goto label_2a6714;
        case 0x2a6718u: goto label_2a6718;
        case 0x2a671cu: goto label_2a671c;
        case 0x2a6720u: goto label_2a6720;
        case 0x2a6724u: goto label_2a6724;
        case 0x2a6728u: goto label_2a6728;
        case 0x2a672cu: goto label_2a672c;
        case 0x2a6730u: goto label_2a6730;
        case 0x2a6734u: goto label_2a6734;
        case 0x2a6738u: goto label_2a6738;
        case 0x2a673cu: goto label_2a673c;
        case 0x2a6740u: goto label_2a6740;
        case 0x2a6744u: goto label_2a6744;
        case 0x2a6748u: goto label_2a6748;
        case 0x2a674cu: goto label_2a674c;
        case 0x2a6750u: goto label_2a6750;
        case 0x2a6754u: goto label_2a6754;
        case 0x2a6758u: goto label_2a6758;
        case 0x2a675cu: goto label_2a675c;
        case 0x2a6760u: goto label_2a6760;
        case 0x2a6764u: goto label_2a6764;
        case 0x2a6768u: goto label_2a6768;
        case 0x2a676cu: goto label_2a676c;
        case 0x2a6770u: goto label_2a6770;
        case 0x2a6774u: goto label_2a6774;
        case 0x2a6778u: goto label_2a6778;
        case 0x2a677cu: goto label_2a677c;
        case 0x2a6780u: goto label_2a6780;
        case 0x2a6784u: goto label_2a6784;
        case 0x2a6788u: goto label_2a6788;
        case 0x2a678cu: goto label_2a678c;
        case 0x2a6790u: goto label_2a6790;
        case 0x2a6794u: goto label_2a6794;
        case 0x2a6798u: goto label_2a6798;
        case 0x2a679cu: goto label_2a679c;
        case 0x2a67a0u: goto label_2a67a0;
        case 0x2a67a4u: goto label_2a67a4;
        case 0x2a67a8u: goto label_2a67a8;
        case 0x2a67acu: goto label_2a67ac;
        case 0x2a67b0u: goto label_2a67b0;
        case 0x2a67b4u: goto label_2a67b4;
        case 0x2a67b8u: goto label_2a67b8;
        case 0x2a67bcu: goto label_2a67bc;
        case 0x2a67c0u: goto label_2a67c0;
        case 0x2a67c4u: goto label_2a67c4;
        case 0x2a67c8u: goto label_2a67c8;
        case 0x2a67ccu: goto label_2a67cc;
        case 0x2a67d0u: goto label_2a67d0;
        case 0x2a67d4u: goto label_2a67d4;
        case 0x2a67d8u: goto label_2a67d8;
        case 0x2a67dcu: goto label_2a67dc;
        case 0x2a67e0u: goto label_2a67e0;
        case 0x2a67e4u: goto label_2a67e4;
        case 0x2a67e8u: goto label_2a67e8;
        case 0x2a67ecu: goto label_2a67ec;
        case 0x2a67f0u: goto label_2a67f0;
        case 0x2a67f4u: goto label_2a67f4;
        case 0x2a67f8u: goto label_2a67f8;
        case 0x2a67fcu: goto label_2a67fc;
        case 0x2a6800u: goto label_2a6800;
        case 0x2a6804u: goto label_2a6804;
        case 0x2a6808u: goto label_2a6808;
        case 0x2a680cu: goto label_2a680c;
        case 0x2a6810u: goto label_2a6810;
        case 0x2a6814u: goto label_2a6814;
        case 0x2a6818u: goto label_2a6818;
        case 0x2a681cu: goto label_2a681c;
        case 0x2a6820u: goto label_2a6820;
        case 0x2a6824u: goto label_2a6824;
        case 0x2a6828u: goto label_2a6828;
        case 0x2a682cu: goto label_2a682c;
        case 0x2a6830u: goto label_2a6830;
        case 0x2a6834u: goto label_2a6834;
        case 0x2a6838u: goto label_2a6838;
        case 0x2a683cu: goto label_2a683c;
        case 0x2a6840u: goto label_2a6840;
        case 0x2a6844u: goto label_2a6844;
        case 0x2a6848u: goto label_2a6848;
        case 0x2a684cu: goto label_2a684c;
        case 0x2a6850u: goto label_2a6850;
        case 0x2a6854u: goto label_2a6854;
        case 0x2a6858u: goto label_2a6858;
        case 0x2a685cu: goto label_2a685c;
        case 0x2a6860u: goto label_2a6860;
        case 0x2a6864u: goto label_2a6864;
        case 0x2a6868u: goto label_2a6868;
        case 0x2a686cu: goto label_2a686c;
        case 0x2a6870u: goto label_2a6870;
        case 0x2a6874u: goto label_2a6874;
        case 0x2a6878u: goto label_2a6878;
        case 0x2a687cu: goto label_2a687c;
        case 0x2a6880u: goto label_2a6880;
        case 0x2a6884u: goto label_2a6884;
        case 0x2a6888u: goto label_2a6888;
        case 0x2a688cu: goto label_2a688c;
        case 0x2a6890u: goto label_2a6890;
        case 0x2a6894u: goto label_2a6894;
        case 0x2a6898u: goto label_2a6898;
        case 0x2a689cu: goto label_2a689c;
        case 0x2a68a0u: goto label_2a68a0;
        case 0x2a68a4u: goto label_2a68a4;
        case 0x2a68a8u: goto label_2a68a8;
        case 0x2a68acu: goto label_2a68ac;
        case 0x2a68b0u: goto label_2a68b0;
        case 0x2a68b4u: goto label_2a68b4;
        case 0x2a68b8u: goto label_2a68b8;
        case 0x2a68bcu: goto label_2a68bc;
        case 0x2a68c0u: goto label_2a68c0;
        case 0x2a68c4u: goto label_2a68c4;
        case 0x2a68c8u: goto label_2a68c8;
        case 0x2a68ccu: goto label_2a68cc;
        case 0x2a68d0u: goto label_2a68d0;
        case 0x2a68d4u: goto label_2a68d4;
        case 0x2a68d8u: goto label_2a68d8;
        case 0x2a68dcu: goto label_2a68dc;
        case 0x2a68e0u: goto label_2a68e0;
        case 0x2a68e4u: goto label_2a68e4;
        case 0x2a68e8u: goto label_2a68e8;
        case 0x2a68ecu: goto label_2a68ec;
        case 0x2a68f0u: goto label_2a68f0;
        case 0x2a68f4u: goto label_2a68f4;
        case 0x2a68f8u: goto label_2a68f8;
        case 0x2a68fcu: goto label_2a68fc;
        case 0x2a6900u: goto label_2a6900;
        case 0x2a6904u: goto label_2a6904;
        case 0x2a6908u: goto label_2a6908;
        case 0x2a690cu: goto label_2a690c;
        case 0x2a6910u: goto label_2a6910;
        case 0x2a6914u: goto label_2a6914;
        case 0x2a6918u: goto label_2a6918;
        case 0x2a691cu: goto label_2a691c;
        case 0x2a6920u: goto label_2a6920;
        case 0x2a6924u: goto label_2a6924;
        case 0x2a6928u: goto label_2a6928;
        case 0x2a692cu: goto label_2a692c;
        case 0x2a6930u: goto label_2a6930;
        case 0x2a6934u: goto label_2a6934;
        case 0x2a6938u: goto label_2a6938;
        case 0x2a693cu: goto label_2a693c;
        case 0x2a6940u: goto label_2a6940;
        case 0x2a6944u: goto label_2a6944;
        case 0x2a6948u: goto label_2a6948;
        case 0x2a694cu: goto label_2a694c;
        case 0x2a6950u: goto label_2a6950;
        case 0x2a6954u: goto label_2a6954;
        case 0x2a6958u: goto label_2a6958;
        case 0x2a695cu: goto label_2a695c;
        case 0x2a6960u: goto label_2a6960;
        case 0x2a6964u: goto label_2a6964;
        case 0x2a6968u: goto label_2a6968;
        case 0x2a696cu: goto label_2a696c;
        case 0x2a6970u: goto label_2a6970;
        case 0x2a6974u: goto label_2a6974;
        case 0x2a6978u: goto label_2a6978;
        case 0x2a697cu: goto label_2a697c;
        case 0x2a6980u: goto label_2a6980;
        case 0x2a6984u: goto label_2a6984;
        case 0x2a6988u: goto label_2a6988;
        case 0x2a698cu: goto label_2a698c;
        case 0x2a6990u: goto label_2a6990;
        case 0x2a6994u: goto label_2a6994;
        case 0x2a6998u: goto label_2a6998;
        case 0x2a699cu: goto label_2a699c;
        case 0x2a69a0u: goto label_2a69a0;
        case 0x2a69a4u: goto label_2a69a4;
        case 0x2a69a8u: goto label_2a69a8;
        case 0x2a69acu: goto label_2a69ac;
        case 0x2a69b0u: goto label_2a69b0;
        case 0x2a69b4u: goto label_2a69b4;
        case 0x2a69b8u: goto label_2a69b8;
        case 0x2a69bcu: goto label_2a69bc;
        case 0x2a69c0u: goto label_2a69c0;
        case 0x2a69c4u: goto label_2a69c4;
        case 0x2a69c8u: goto label_2a69c8;
        case 0x2a69ccu: goto label_2a69cc;
        case 0x2a69d0u: goto label_2a69d0;
        case 0x2a69d4u: goto label_2a69d4;
        case 0x2a69d8u: goto label_2a69d8;
        case 0x2a69dcu: goto label_2a69dc;
        case 0x2a69e0u: goto label_2a69e0;
        case 0x2a69e4u: goto label_2a69e4;
        case 0x2a69e8u: goto label_2a69e8;
        case 0x2a69ecu: goto label_2a69ec;
        case 0x2a69f0u: goto label_2a69f0;
        case 0x2a69f4u: goto label_2a69f4;
        case 0x2a69f8u: goto label_2a69f8;
        case 0x2a69fcu: goto label_2a69fc;
        case 0x2a6a00u: goto label_2a6a00;
        case 0x2a6a04u: goto label_2a6a04;
        case 0x2a6a08u: goto label_2a6a08;
        case 0x2a6a0cu: goto label_2a6a0c;
        case 0x2a6a10u: goto label_2a6a10;
        case 0x2a6a14u: goto label_2a6a14;
        case 0x2a6a18u: goto label_2a6a18;
        case 0x2a6a1cu: goto label_2a6a1c;
        case 0x2a6a20u: goto label_2a6a20;
        case 0x2a6a24u: goto label_2a6a24;
        case 0x2a6a28u: goto label_2a6a28;
        case 0x2a6a2cu: goto label_2a6a2c;
        case 0x2a6a30u: goto label_2a6a30;
        case 0x2a6a34u: goto label_2a6a34;
        case 0x2a6a38u: goto label_2a6a38;
        case 0x2a6a3cu: goto label_2a6a3c;
        case 0x2a6a40u: goto label_2a6a40;
        case 0x2a6a44u: goto label_2a6a44;
        case 0x2a6a48u: goto label_2a6a48;
        case 0x2a6a4cu: goto label_2a6a4c;
        case 0x2a6a50u: goto label_2a6a50;
        case 0x2a6a54u: goto label_2a6a54;
        case 0x2a6a58u: goto label_2a6a58;
        case 0x2a6a5cu: goto label_2a6a5c;
        case 0x2a6a60u: goto label_2a6a60;
        case 0x2a6a64u: goto label_2a6a64;
        case 0x2a6a68u: goto label_2a6a68;
        case 0x2a6a6cu: goto label_2a6a6c;
        case 0x2a6a70u: goto label_2a6a70;
        case 0x2a6a74u: goto label_2a6a74;
        case 0x2a6a78u: goto label_2a6a78;
        case 0x2a6a7cu: goto label_2a6a7c;
        case 0x2a6a80u: goto label_2a6a80;
        case 0x2a6a84u: goto label_2a6a84;
        case 0x2a6a88u: goto label_2a6a88;
        case 0x2a6a8cu: goto label_2a6a8c;
        case 0x2a6a90u: goto label_2a6a90;
        case 0x2a6a94u: goto label_2a6a94;
        case 0x2a6a98u: goto label_2a6a98;
        case 0x2a6a9cu: goto label_2a6a9c;
        case 0x2a6aa0u: goto label_2a6aa0;
        case 0x2a6aa4u: goto label_2a6aa4;
        case 0x2a6aa8u: goto label_2a6aa8;
        case 0x2a6aacu: goto label_2a6aac;
        case 0x2a6ab0u: goto label_2a6ab0;
        case 0x2a6ab4u: goto label_2a6ab4;
        case 0x2a6ab8u: goto label_2a6ab8;
        case 0x2a6abcu: goto label_2a6abc;
        case 0x2a6ac0u: goto label_2a6ac0;
        case 0x2a6ac4u: goto label_2a6ac4;
        case 0x2a6ac8u: goto label_2a6ac8;
        case 0x2a6accu: goto label_2a6acc;
        case 0x2a6ad0u: goto label_2a6ad0;
        case 0x2a6ad4u: goto label_2a6ad4;
        case 0x2a6ad8u: goto label_2a6ad8;
        case 0x2a6adcu: goto label_2a6adc;
        case 0x2a6ae0u: goto label_2a6ae0;
        case 0x2a6ae4u: goto label_2a6ae4;
        case 0x2a6ae8u: goto label_2a6ae8;
        case 0x2a6aecu: goto label_2a6aec;
        case 0x2a6af0u: goto label_2a6af0;
        case 0x2a6af4u: goto label_2a6af4;
        case 0x2a6af8u: goto label_2a6af8;
        case 0x2a6afcu: goto label_2a6afc;
        case 0x2a6b00u: goto label_2a6b00;
        case 0x2a6b04u: goto label_2a6b04;
        case 0x2a6b08u: goto label_2a6b08;
        case 0x2a6b0cu: goto label_2a6b0c;
        case 0x2a6b10u: goto label_2a6b10;
        case 0x2a6b14u: goto label_2a6b14;
        case 0x2a6b18u: goto label_2a6b18;
        case 0x2a6b1cu: goto label_2a6b1c;
        case 0x2a6b20u: goto label_2a6b20;
        case 0x2a6b24u: goto label_2a6b24;
        case 0x2a6b28u: goto label_2a6b28;
        case 0x2a6b2cu: goto label_2a6b2c;
        case 0x2a6b30u: goto label_2a6b30;
        case 0x2a6b34u: goto label_2a6b34;
        case 0x2a6b38u: goto label_2a6b38;
        case 0x2a6b3cu: goto label_2a6b3c;
        case 0x2a6b40u: goto label_2a6b40;
        case 0x2a6b44u: goto label_2a6b44;
        case 0x2a6b48u: goto label_2a6b48;
        case 0x2a6b4cu: goto label_2a6b4c;
        case 0x2a6b50u: goto label_2a6b50;
        case 0x2a6b54u: goto label_2a6b54;
        case 0x2a6b58u: goto label_2a6b58;
        case 0x2a6b5cu: goto label_2a6b5c;
        case 0x2a6b60u: goto label_2a6b60;
        case 0x2a6b64u: goto label_2a6b64;
        case 0x2a6b68u: goto label_2a6b68;
        case 0x2a6b6cu: goto label_2a6b6c;
        case 0x2a6b70u: goto label_2a6b70;
        case 0x2a6b74u: goto label_2a6b74;
        case 0x2a6b78u: goto label_2a6b78;
        case 0x2a6b7cu: goto label_2a6b7c;
        case 0x2a6b80u: goto label_2a6b80;
        case 0x2a6b84u: goto label_2a6b84;
        case 0x2a6b88u: goto label_2a6b88;
        case 0x2a6b8cu: goto label_2a6b8c;
        case 0x2a6b90u: goto label_2a6b90;
        case 0x2a6b94u: goto label_2a6b94;
        case 0x2a6b98u: goto label_2a6b98;
        case 0x2a6b9cu: goto label_2a6b9c;
        case 0x2a6ba0u: goto label_2a6ba0;
        case 0x2a6ba4u: goto label_2a6ba4;
        case 0x2a6ba8u: goto label_2a6ba8;
        case 0x2a6bacu: goto label_2a6bac;
        case 0x2a6bb0u: goto label_2a6bb0;
        case 0x2a6bb4u: goto label_2a6bb4;
        case 0x2a6bb8u: goto label_2a6bb8;
        case 0x2a6bbcu: goto label_2a6bbc;
        case 0x2a6bc0u: goto label_2a6bc0;
        case 0x2a6bc4u: goto label_2a6bc4;
        case 0x2a6bc8u: goto label_2a6bc8;
        case 0x2a6bccu: goto label_2a6bcc;
        case 0x2a6bd0u: goto label_2a6bd0;
        case 0x2a6bd4u: goto label_2a6bd4;
        case 0x2a6bd8u: goto label_2a6bd8;
        case 0x2a6bdcu: goto label_2a6bdc;
        case 0x2a6be0u: goto label_2a6be0;
        case 0x2a6be4u: goto label_2a6be4;
        case 0x2a6be8u: goto label_2a6be8;
        case 0x2a6becu: goto label_2a6bec;
        case 0x2a6bf0u: goto label_2a6bf0;
        case 0x2a6bf4u: goto label_2a6bf4;
        case 0x2a6bf8u: goto label_2a6bf8;
        case 0x2a6bfcu: goto label_2a6bfc;
        case 0x2a6c00u: goto label_2a6c00;
        case 0x2a6c04u: goto label_2a6c04;
        case 0x2a6c08u: goto label_2a6c08;
        case 0x2a6c0cu: goto label_2a6c0c;
        case 0x2a6c10u: goto label_2a6c10;
        case 0x2a6c14u: goto label_2a6c14;
        case 0x2a6c18u: goto label_2a6c18;
        case 0x2a6c1cu: goto label_2a6c1c;
        case 0x2a6c20u: goto label_2a6c20;
        case 0x2a6c24u: goto label_2a6c24;
        case 0x2a6c28u: goto label_2a6c28;
        case 0x2a6c2cu: goto label_2a6c2c;
        case 0x2a6c30u: goto label_2a6c30;
        case 0x2a6c34u: goto label_2a6c34;
        case 0x2a6c38u: goto label_2a6c38;
        case 0x2a6c3cu: goto label_2a6c3c;
        case 0x2a6c40u: goto label_2a6c40;
        case 0x2a6c44u: goto label_2a6c44;
        case 0x2a6c48u: goto label_2a6c48;
        case 0x2a6c4cu: goto label_2a6c4c;
        case 0x2a6c50u: goto label_2a6c50;
        case 0x2a6c54u: goto label_2a6c54;
        case 0x2a6c58u: goto label_2a6c58;
        case 0x2a6c5cu: goto label_2a6c5c;
        case 0x2a6c60u: goto label_2a6c60;
        case 0x2a6c64u: goto label_2a6c64;
        case 0x2a6c68u: goto label_2a6c68;
        case 0x2a6c6cu: goto label_2a6c6c;
        case 0x2a6c70u: goto label_2a6c70;
        case 0x2a6c74u: goto label_2a6c74;
        case 0x2a6c78u: goto label_2a6c78;
        case 0x2a6c7cu: goto label_2a6c7c;
        case 0x2a6c80u: goto label_2a6c80;
        case 0x2a6c84u: goto label_2a6c84;
        case 0x2a6c88u: goto label_2a6c88;
        case 0x2a6c8cu: goto label_2a6c8c;
        case 0x2a6c90u: goto label_2a6c90;
        case 0x2a6c94u: goto label_2a6c94;
        case 0x2a6c98u: goto label_2a6c98;
        case 0x2a6c9cu: goto label_2a6c9c;
        case 0x2a6ca0u: goto label_2a6ca0;
        case 0x2a6ca4u: goto label_2a6ca4;
        case 0x2a6ca8u: goto label_2a6ca8;
        case 0x2a6cacu: goto label_2a6cac;
        case 0x2a6cb0u: goto label_2a6cb0;
        case 0x2a6cb4u: goto label_2a6cb4;
        case 0x2a6cb8u: goto label_2a6cb8;
        case 0x2a6cbcu: goto label_2a6cbc;
        case 0x2a6cc0u: goto label_2a6cc0;
        case 0x2a6cc4u: goto label_2a6cc4;
        case 0x2a6cc8u: goto label_2a6cc8;
        case 0x2a6cccu: goto label_2a6ccc;
        case 0x2a6cd0u: goto label_2a6cd0;
        case 0x2a6cd4u: goto label_2a6cd4;
        case 0x2a6cd8u: goto label_2a6cd8;
        case 0x2a6cdcu: goto label_2a6cdc;
        case 0x2a6ce0u: goto label_2a6ce0;
        case 0x2a6ce4u: goto label_2a6ce4;
        case 0x2a6ce8u: goto label_2a6ce8;
        case 0x2a6cecu: goto label_2a6cec;
        case 0x2a6cf0u: goto label_2a6cf0;
        case 0x2a6cf4u: goto label_2a6cf4;
        case 0x2a6cf8u: goto label_2a6cf8;
        case 0x2a6cfcu: goto label_2a6cfc;
        case 0x2a6d00u: goto label_2a6d00;
        case 0x2a6d04u: goto label_2a6d04;
        case 0x2a6d08u: goto label_2a6d08;
        case 0x2a6d0cu: goto label_2a6d0c;
        case 0x2a6d10u: goto label_2a6d10;
        case 0x2a6d14u: goto label_2a6d14;
        case 0x2a6d18u: goto label_2a6d18;
        case 0x2a6d1cu: goto label_2a6d1c;
        case 0x2a6d20u: goto label_2a6d20;
        case 0x2a6d24u: goto label_2a6d24;
        case 0x2a6d28u: goto label_2a6d28;
        case 0x2a6d2cu: goto label_2a6d2c;
        case 0x2a6d30u: goto label_2a6d30;
        case 0x2a6d34u: goto label_2a6d34;
        case 0x2a6d38u: goto label_2a6d38;
        case 0x2a6d3cu: goto label_2a6d3c;
        case 0x2a6d40u: goto label_2a6d40;
        case 0x2a6d44u: goto label_2a6d44;
        case 0x2a6d48u: goto label_2a6d48;
        case 0x2a6d4cu: goto label_2a6d4c;
        case 0x2a6d50u: goto label_2a6d50;
        case 0x2a6d54u: goto label_2a6d54;
        case 0x2a6d58u: goto label_2a6d58;
        case 0x2a6d5cu: goto label_2a6d5c;
        case 0x2a6d60u: goto label_2a6d60;
        case 0x2a6d64u: goto label_2a6d64;
        case 0x2a6d68u: goto label_2a6d68;
        case 0x2a6d6cu: goto label_2a6d6c;
        case 0x2a6d70u: goto label_2a6d70;
        case 0x2a6d74u: goto label_2a6d74;
        case 0x2a6d78u: goto label_2a6d78;
        case 0x2a6d7cu: goto label_2a6d7c;
        case 0x2a6d80u: goto label_2a6d80;
        case 0x2a6d84u: goto label_2a6d84;
        case 0x2a6d88u: goto label_2a6d88;
        case 0x2a6d8cu: goto label_2a6d8c;
        case 0x2a6d90u: goto label_2a6d90;
        case 0x2a6d94u: goto label_2a6d94;
        case 0x2a6d98u: goto label_2a6d98;
        case 0x2a6d9cu: goto label_2a6d9c;
        case 0x2a6da0u: goto label_2a6da0;
        case 0x2a6da4u: goto label_2a6da4;
        case 0x2a6da8u: goto label_2a6da8;
        case 0x2a6dacu: goto label_2a6dac;
        case 0x2a6db0u: goto label_2a6db0;
        case 0x2a6db4u: goto label_2a6db4;
        case 0x2a6db8u: goto label_2a6db8;
        case 0x2a6dbcu: goto label_2a6dbc;
        case 0x2a6dc0u: goto label_2a6dc0;
        case 0x2a6dc4u: goto label_2a6dc4;
        case 0x2a6dc8u: goto label_2a6dc8;
        case 0x2a6dccu: goto label_2a6dcc;
        case 0x2a6dd0u: goto label_2a6dd0;
        case 0x2a6dd4u: goto label_2a6dd4;
        case 0x2a6dd8u: goto label_2a6dd8;
        case 0x2a6ddcu: goto label_2a6ddc;
        case 0x2a6de0u: goto label_2a6de0;
        case 0x2a6de4u: goto label_2a6de4;
        case 0x2a6de8u: goto label_2a6de8;
        case 0x2a6decu: goto label_2a6dec;
        case 0x2a6df0u: goto label_2a6df0;
        case 0x2a6df4u: goto label_2a6df4;
        case 0x2a6df8u: goto label_2a6df8;
        case 0x2a6dfcu: goto label_2a6dfc;
        case 0x2a6e00u: goto label_2a6e00;
        case 0x2a6e04u: goto label_2a6e04;
        case 0x2a6e08u: goto label_2a6e08;
        case 0x2a6e0cu: goto label_2a6e0c;
        case 0x2a6e10u: goto label_2a6e10;
        case 0x2a6e14u: goto label_2a6e14;
        case 0x2a6e18u: goto label_2a6e18;
        case 0x2a6e1cu: goto label_2a6e1c;
        case 0x2a6e20u: goto label_2a6e20;
        case 0x2a6e24u: goto label_2a6e24;
        case 0x2a6e28u: goto label_2a6e28;
        case 0x2a6e2cu: goto label_2a6e2c;
        case 0x2a6e30u: goto label_2a6e30;
        case 0x2a6e34u: goto label_2a6e34;
        case 0x2a6e38u: goto label_2a6e38;
        case 0x2a6e3cu: goto label_2a6e3c;
        case 0x2a6e40u: goto label_2a6e40;
        case 0x2a6e44u: goto label_2a6e44;
        case 0x2a6e48u: goto label_2a6e48;
        case 0x2a6e4cu: goto label_2a6e4c;
        case 0x2a6e50u: goto label_2a6e50;
        case 0x2a6e54u: goto label_2a6e54;
        case 0x2a6e58u: goto label_2a6e58;
        case 0x2a6e5cu: goto label_2a6e5c;
        case 0x2a6e60u: goto label_2a6e60;
        case 0x2a6e64u: goto label_2a6e64;
        case 0x2a6e68u: goto label_2a6e68;
        case 0x2a6e6cu: goto label_2a6e6c;
        case 0x2a6e70u: goto label_2a6e70;
        case 0x2a6e74u: goto label_2a6e74;
        case 0x2a6e78u: goto label_2a6e78;
        case 0x2a6e7cu: goto label_2a6e7c;
        case 0x2a6e80u: goto label_2a6e80;
        case 0x2a6e84u: goto label_2a6e84;
        case 0x2a6e88u: goto label_2a6e88;
        case 0x2a6e8cu: goto label_2a6e8c;
        case 0x2a6e90u: goto label_2a6e90;
        case 0x2a6e94u: goto label_2a6e94;
        case 0x2a6e98u: goto label_2a6e98;
        case 0x2a6e9cu: goto label_2a6e9c;
        case 0x2a6ea0u: goto label_2a6ea0;
        case 0x2a6ea4u: goto label_2a6ea4;
        case 0x2a6ea8u: goto label_2a6ea8;
        case 0x2a6eacu: goto label_2a6eac;
        case 0x2a6eb0u: goto label_2a6eb0;
        case 0x2a6eb4u: goto label_2a6eb4;
        case 0x2a6eb8u: goto label_2a6eb8;
        case 0x2a6ebcu: goto label_2a6ebc;
        case 0x2a6ec0u: goto label_2a6ec0;
        case 0x2a6ec4u: goto label_2a6ec4;
        case 0x2a6ec8u: goto label_2a6ec8;
        case 0x2a6eccu: goto label_2a6ecc;
        case 0x2a6ed0u: goto label_2a6ed0;
        case 0x2a6ed4u: goto label_2a6ed4;
        case 0x2a6ed8u: goto label_2a6ed8;
        case 0x2a6edcu: goto label_2a6edc;
        case 0x2a6ee0u: goto label_2a6ee0;
        case 0x2a6ee4u: goto label_2a6ee4;
        case 0x2a6ee8u: goto label_2a6ee8;
        case 0x2a6eecu: goto label_2a6eec;
        case 0x2a6ef0u: goto label_2a6ef0;
        case 0x2a6ef4u: goto label_2a6ef4;
        case 0x2a6ef8u: goto label_2a6ef8;
        case 0x2a6efcu: goto label_2a6efc;
        case 0x2a6f00u: goto label_2a6f00;
        case 0x2a6f04u: goto label_2a6f04;
        case 0x2a6f08u: goto label_2a6f08;
        case 0x2a6f0cu: goto label_2a6f0c;
        case 0x2a6f10u: goto label_2a6f10;
        case 0x2a6f14u: goto label_2a6f14;
        case 0x2a6f18u: goto label_2a6f18;
        case 0x2a6f1cu: goto label_2a6f1c;
        case 0x2a6f20u: goto label_2a6f20;
        case 0x2a6f24u: goto label_2a6f24;
        case 0x2a6f28u: goto label_2a6f28;
        case 0x2a6f2cu: goto label_2a6f2c;
        case 0x2a6f30u: goto label_2a6f30;
        case 0x2a6f34u: goto label_2a6f34;
        case 0x2a6f38u: goto label_2a6f38;
        case 0x2a6f3cu: goto label_2a6f3c;
        case 0x2a6f40u: goto label_2a6f40;
        case 0x2a6f44u: goto label_2a6f44;
        case 0x2a6f48u: goto label_2a6f48;
        case 0x2a6f4cu: goto label_2a6f4c;
        case 0x2a6f50u: goto label_2a6f50;
        case 0x2a6f54u: goto label_2a6f54;
        case 0x2a6f58u: goto label_2a6f58;
        case 0x2a6f5cu: goto label_2a6f5c;
        case 0x2a6f60u: goto label_2a6f60;
        case 0x2a6f64u: goto label_2a6f64;
        case 0x2a6f68u: goto label_2a6f68;
        case 0x2a6f6cu: goto label_2a6f6c;
        case 0x2a6f70u: goto label_2a6f70;
        case 0x2a6f74u: goto label_2a6f74;
        case 0x2a6f78u: goto label_2a6f78;
        case 0x2a6f7cu: goto label_2a6f7c;
        case 0x2a6f80u: goto label_2a6f80;
        case 0x2a6f84u: goto label_2a6f84;
        case 0x2a6f88u: goto label_2a6f88;
        case 0x2a6f8cu: goto label_2a6f8c;
        case 0x2a6f90u: goto label_2a6f90;
        case 0x2a6f94u: goto label_2a6f94;
        case 0x2a6f98u: goto label_2a6f98;
        case 0x2a6f9cu: goto label_2a6f9c;
        case 0x2a6fa0u: goto label_2a6fa0;
        case 0x2a6fa4u: goto label_2a6fa4;
        case 0x2a6fa8u: goto label_2a6fa8;
        case 0x2a6facu: goto label_2a6fac;
        case 0x2a6fb0u: goto label_2a6fb0;
        case 0x2a6fb4u: goto label_2a6fb4;
        case 0x2a6fb8u: goto label_2a6fb8;
        case 0x2a6fbcu: goto label_2a6fbc;
        case 0x2a6fc0u: goto label_2a6fc0;
        case 0x2a6fc4u: goto label_2a6fc4;
        case 0x2a6fc8u: goto label_2a6fc8;
        case 0x2a6fccu: goto label_2a6fcc;
        case 0x2a6fd0u: goto label_2a6fd0;
        case 0x2a6fd4u: goto label_2a6fd4;
        case 0x2a6fd8u: goto label_2a6fd8;
        case 0x2a6fdcu: goto label_2a6fdc;
        case 0x2a6fe0u: goto label_2a6fe0;
        case 0x2a6fe4u: goto label_2a6fe4;
        case 0x2a6fe8u: goto label_2a6fe8;
        case 0x2a6fecu: goto label_2a6fec;
        case 0x2a6ff0u: goto label_2a6ff0;
        case 0x2a6ff4u: goto label_2a6ff4;
        case 0x2a6ff8u: goto label_2a6ff8;
        case 0x2a6ffcu: goto label_2a6ffc;
        case 0x2a7000u: goto label_2a7000;
        case 0x2a7004u: goto label_2a7004;
        case 0x2a7008u: goto label_2a7008;
        case 0x2a700cu: goto label_2a700c;
        case 0x2a7010u: goto label_2a7010;
        case 0x2a7014u: goto label_2a7014;
        case 0x2a7018u: goto label_2a7018;
        case 0x2a701cu: goto label_2a701c;
        case 0x2a7020u: goto label_2a7020;
        case 0x2a7024u: goto label_2a7024;
        case 0x2a7028u: goto label_2a7028;
        case 0x2a702cu: goto label_2a702c;
        case 0x2a7030u: goto label_2a7030;
        case 0x2a7034u: goto label_2a7034;
        case 0x2a7038u: goto label_2a7038;
        case 0x2a703cu: goto label_2a703c;
        case 0x2a7040u: goto label_2a7040;
        case 0x2a7044u: goto label_2a7044;
        case 0x2a7048u: goto label_2a7048;
        case 0x2a704cu: goto label_2a704c;
        case 0x2a7050u: goto label_2a7050;
        case 0x2a7054u: goto label_2a7054;
        case 0x2a7058u: goto label_2a7058;
        case 0x2a705cu: goto label_2a705c;
        case 0x2a7060u: goto label_2a7060;
        case 0x2a7064u: goto label_2a7064;
        case 0x2a7068u: goto label_2a7068;
        case 0x2a706cu: goto label_2a706c;
        case 0x2a7070u: goto label_2a7070;
        case 0x2a7074u: goto label_2a7074;
        case 0x2a7078u: goto label_2a7078;
        case 0x2a707cu: goto label_2a707c;
        case 0x2a7080u: goto label_2a7080;
        case 0x2a7084u: goto label_2a7084;
        case 0x2a7088u: goto label_2a7088;
        case 0x2a708cu: goto label_2a708c;
        case 0x2a7090u: goto label_2a7090;
        case 0x2a7094u: goto label_2a7094;
        case 0x2a7098u: goto label_2a7098;
        case 0x2a709cu: goto label_2a709c;
        case 0x2a70a0u: goto label_2a70a0;
        case 0x2a70a4u: goto label_2a70a4;
        case 0x2a70a8u: goto label_2a70a8;
        case 0x2a70acu: goto label_2a70ac;
        case 0x2a70b0u: goto label_2a70b0;
        case 0x2a70b4u: goto label_2a70b4;
        case 0x2a70b8u: goto label_2a70b8;
        case 0x2a70bcu: goto label_2a70bc;
        case 0x2a70c0u: goto label_2a70c0;
        case 0x2a70c4u: goto label_2a70c4;
        case 0x2a70c8u: goto label_2a70c8;
        case 0x2a70ccu: goto label_2a70cc;
        case 0x2a70d0u: goto label_2a70d0;
        case 0x2a70d4u: goto label_2a70d4;
        case 0x2a70d8u: goto label_2a70d8;
        case 0x2a70dcu: goto label_2a70dc;
        case 0x2a70e0u: goto label_2a70e0;
        case 0x2a70e4u: goto label_2a70e4;
        case 0x2a70e8u: goto label_2a70e8;
        case 0x2a70ecu: goto label_2a70ec;
        case 0x2a70f0u: goto label_2a70f0;
        case 0x2a70f4u: goto label_2a70f4;
        case 0x2a70f8u: goto label_2a70f8;
        case 0x2a70fcu: goto label_2a70fc;
        case 0x2a7100u: goto label_2a7100;
        case 0x2a7104u: goto label_2a7104;
        case 0x2a7108u: goto label_2a7108;
        case 0x2a710cu: goto label_2a710c;
        case 0x2a7110u: goto label_2a7110;
        case 0x2a7114u: goto label_2a7114;
        case 0x2a7118u: goto label_2a7118;
        case 0x2a711cu: goto label_2a711c;
        case 0x2a7120u: goto label_2a7120;
        case 0x2a7124u: goto label_2a7124;
        case 0x2a7128u: goto label_2a7128;
        case 0x2a712cu: goto label_2a712c;
        case 0x2a7130u: goto label_2a7130;
        case 0x2a7134u: goto label_2a7134;
        case 0x2a7138u: goto label_2a7138;
        case 0x2a713cu: goto label_2a713c;
        case 0x2a7140u: goto label_2a7140;
        case 0x2a7144u: goto label_2a7144;
        case 0x2a7148u: goto label_2a7148;
        case 0x2a714cu: goto label_2a714c;
        case 0x2a7150u: goto label_2a7150;
        case 0x2a7154u: goto label_2a7154;
        case 0x2a7158u: goto label_2a7158;
        case 0x2a715cu: goto label_2a715c;
        case 0x2a7160u: goto label_2a7160;
        case 0x2a7164u: goto label_2a7164;
        case 0x2a7168u: goto label_2a7168;
        case 0x2a716cu: goto label_2a716c;
        case 0x2a7170u: goto label_2a7170;
        case 0x2a7174u: goto label_2a7174;
        case 0x2a7178u: goto label_2a7178;
        case 0x2a717cu: goto label_2a717c;
        case 0x2a7180u: goto label_2a7180;
        case 0x2a7184u: goto label_2a7184;
        case 0x2a7188u: goto label_2a7188;
        case 0x2a718cu: goto label_2a718c;
        case 0x2a7190u: goto label_2a7190;
        case 0x2a7194u: goto label_2a7194;
        case 0x2a7198u: goto label_2a7198;
        case 0x2a719cu: goto label_2a719c;
        case 0x2a71a0u: goto label_2a71a0;
        case 0x2a71a4u: goto label_2a71a4;
        case 0x2a71a8u: goto label_2a71a8;
        case 0x2a71acu: goto label_2a71ac;
        case 0x2a71b0u: goto label_2a71b0;
        case 0x2a71b4u: goto label_2a71b4;
        case 0x2a71b8u: goto label_2a71b8;
        case 0x2a71bcu: goto label_2a71bc;
        case 0x2a71c0u: goto label_2a71c0;
        case 0x2a71c4u: goto label_2a71c4;
        case 0x2a71c8u: goto label_2a71c8;
        case 0x2a71ccu: goto label_2a71cc;
        case 0x2a71d0u: goto label_2a71d0;
        case 0x2a71d4u: goto label_2a71d4;
        case 0x2a71d8u: goto label_2a71d8;
        case 0x2a71dcu: goto label_2a71dc;
        case 0x2a71e0u: goto label_2a71e0;
        case 0x2a71e4u: goto label_2a71e4;
        case 0x2a71e8u: goto label_2a71e8;
        case 0x2a71ecu: goto label_2a71ec;
        case 0x2a71f0u: goto label_2a71f0;
        case 0x2a71f4u: goto label_2a71f4;
        case 0x2a71f8u: goto label_2a71f8;
        case 0x2a71fcu: goto label_2a71fc;
        case 0x2a7200u: goto label_2a7200;
        case 0x2a7204u: goto label_2a7204;
        case 0x2a7208u: goto label_2a7208;
        case 0x2a720cu: goto label_2a720c;
        case 0x2a7210u: goto label_2a7210;
        case 0x2a7214u: goto label_2a7214;
        case 0x2a7218u: goto label_2a7218;
        case 0x2a721cu: goto label_2a721c;
        case 0x2a7220u: goto label_2a7220;
        case 0x2a7224u: goto label_2a7224;
        case 0x2a7228u: goto label_2a7228;
        case 0x2a722cu: goto label_2a722c;
        case 0x2a7230u: goto label_2a7230;
        case 0x2a7234u: goto label_2a7234;
        case 0x2a7238u: goto label_2a7238;
        case 0x2a723cu: goto label_2a723c;
        case 0x2a7240u: goto label_2a7240;
        case 0x2a7244u: goto label_2a7244;
        case 0x2a7248u: goto label_2a7248;
        case 0x2a724cu: goto label_2a724c;
        case 0x2a7250u: goto label_2a7250;
        case 0x2a7254u: goto label_2a7254;
        case 0x2a7258u: goto label_2a7258;
        case 0x2a725cu: goto label_2a725c;
        case 0x2a7260u: goto label_2a7260;
        case 0x2a7264u: goto label_2a7264;
        case 0x2a7268u: goto label_2a7268;
        case 0x2a726cu: goto label_2a726c;
        case 0x2a7270u: goto label_2a7270;
        case 0x2a7274u: goto label_2a7274;
        case 0x2a7278u: goto label_2a7278;
        case 0x2a727cu: goto label_2a727c;
        case 0x2a7280u: goto label_2a7280;
        case 0x2a7284u: goto label_2a7284;
        case 0x2a7288u: goto label_2a7288;
        case 0x2a728cu: goto label_2a728c;
        case 0x2a7290u: goto label_2a7290;
        case 0x2a7294u: goto label_2a7294;
        case 0x2a7298u: goto label_2a7298;
        case 0x2a729cu: goto label_2a729c;
        case 0x2a72a0u: goto label_2a72a0;
        case 0x2a72a4u: goto label_2a72a4;
        case 0x2a72a8u: goto label_2a72a8;
        case 0x2a72acu: goto label_2a72ac;
        case 0x2a72b0u: goto label_2a72b0;
        case 0x2a72b4u: goto label_2a72b4;
        case 0x2a72b8u: goto label_2a72b8;
        case 0x2a72bcu: goto label_2a72bc;
        case 0x2a72c0u: goto label_2a72c0;
        case 0x2a72c4u: goto label_2a72c4;
        case 0x2a72c8u: goto label_2a72c8;
        case 0x2a72ccu: goto label_2a72cc;
        case 0x2a72d0u: goto label_2a72d0;
        case 0x2a72d4u: goto label_2a72d4;
        case 0x2a72d8u: goto label_2a72d8;
        case 0x2a72dcu: goto label_2a72dc;
        case 0x2a72e0u: goto label_2a72e0;
        case 0x2a72e4u: goto label_2a72e4;
        case 0x2a72e8u: goto label_2a72e8;
        case 0x2a72ecu: goto label_2a72ec;
        case 0x2a72f0u: goto label_2a72f0;
        case 0x2a72f4u: goto label_2a72f4;
        case 0x2a72f8u: goto label_2a72f8;
        case 0x2a72fcu: goto label_2a72fc;
        case 0x2a7300u: goto label_2a7300;
        case 0x2a7304u: goto label_2a7304;
        case 0x2a7308u: goto label_2a7308;
        case 0x2a730cu: goto label_2a730c;
        case 0x2a7310u: goto label_2a7310;
        case 0x2a7314u: goto label_2a7314;
        case 0x2a7318u: goto label_2a7318;
        case 0x2a731cu: goto label_2a731c;
        case 0x2a7320u: goto label_2a7320;
        case 0x2a7324u: goto label_2a7324;
        case 0x2a7328u: goto label_2a7328;
        case 0x2a732cu: goto label_2a732c;
        case 0x2a7330u: goto label_2a7330;
        case 0x2a7334u: goto label_2a7334;
        case 0x2a7338u: goto label_2a7338;
        case 0x2a733cu: goto label_2a733c;
        case 0x2a7340u: goto label_2a7340;
        case 0x2a7344u: goto label_2a7344;
        case 0x2a7348u: goto label_2a7348;
        case 0x2a734cu: goto label_2a734c;
        case 0x2a7350u: goto label_2a7350;
        case 0x2a7354u: goto label_2a7354;
        case 0x2a7358u: goto label_2a7358;
        case 0x2a735cu: goto label_2a735c;
        case 0x2a7360u: goto label_2a7360;
        case 0x2a7364u: goto label_2a7364;
        case 0x2a7368u: goto label_2a7368;
        case 0x2a736cu: goto label_2a736c;
        case 0x2a7370u: goto label_2a7370;
        case 0x2a7374u: goto label_2a7374;
        case 0x2a7378u: goto label_2a7378;
        case 0x2a737cu: goto label_2a737c;
        case 0x2a7380u: goto label_2a7380;
        case 0x2a7384u: goto label_2a7384;
        case 0x2a7388u: goto label_2a7388;
        case 0x2a738cu: goto label_2a738c;
        case 0x2a7390u: goto label_2a7390;
        case 0x2a7394u: goto label_2a7394;
        case 0x2a7398u: goto label_2a7398;
        case 0x2a739cu: goto label_2a739c;
        case 0x2a73a0u: goto label_2a73a0;
        case 0x2a73a4u: goto label_2a73a4;
        case 0x2a73a8u: goto label_2a73a8;
        case 0x2a73acu: goto label_2a73ac;
        case 0x2a73b0u: goto label_2a73b0;
        case 0x2a73b4u: goto label_2a73b4;
        case 0x2a73b8u: goto label_2a73b8;
        case 0x2a73bcu: goto label_2a73bc;
        case 0x2a73c0u: goto label_2a73c0;
        case 0x2a73c4u: goto label_2a73c4;
        case 0x2a73c8u: goto label_2a73c8;
        case 0x2a73ccu: goto label_2a73cc;
        case 0x2a73d0u: goto label_2a73d0;
        case 0x2a73d4u: goto label_2a73d4;
        case 0x2a73d8u: goto label_2a73d8;
        case 0x2a73dcu: goto label_2a73dc;
        case 0x2a73e0u: goto label_2a73e0;
        case 0x2a73e4u: goto label_2a73e4;
        case 0x2a73e8u: goto label_2a73e8;
        case 0x2a73ecu: goto label_2a73ec;
        case 0x2a73f0u: goto label_2a73f0;
        case 0x2a73f4u: goto label_2a73f4;
        case 0x2a73f8u: goto label_2a73f8;
        case 0x2a73fcu: goto label_2a73fc;
        case 0x2a7400u: goto label_2a7400;
        case 0x2a7404u: goto label_2a7404;
        case 0x2a7408u: goto label_2a7408;
        case 0x2a740cu: goto label_2a740c;
        case 0x2a7410u: goto label_2a7410;
        case 0x2a7414u: goto label_2a7414;
        case 0x2a7418u: goto label_2a7418;
        case 0x2a741cu: goto label_2a741c;
        case 0x2a7420u: goto label_2a7420;
        case 0x2a7424u: goto label_2a7424;
        case 0x2a7428u: goto label_2a7428;
        case 0x2a742cu: goto label_2a742c;
        case 0x2a7430u: goto label_2a7430;
        case 0x2a7434u: goto label_2a7434;
        case 0x2a7438u: goto label_2a7438;
        case 0x2a743cu: goto label_2a743c;
        case 0x2a7440u: goto label_2a7440;
        case 0x2a7444u: goto label_2a7444;
        case 0x2a7448u: goto label_2a7448;
        case 0x2a744cu: goto label_2a744c;
        case 0x2a7450u: goto label_2a7450;
        case 0x2a7454u: goto label_2a7454;
        case 0x2a7458u: goto label_2a7458;
        case 0x2a745cu: goto label_2a745c;
        case 0x2a7460u: goto label_2a7460;
        case 0x2a7464u: goto label_2a7464;
        case 0x2a7468u: goto label_2a7468;
        case 0x2a746cu: goto label_2a746c;
        case 0x2a7470u: goto label_2a7470;
        case 0x2a7474u: goto label_2a7474;
        case 0x2a7478u: goto label_2a7478;
        case 0x2a747cu: goto label_2a747c;
        case 0x2a7480u: goto label_2a7480;
        case 0x2a7484u: goto label_2a7484;
        case 0x2a7488u: goto label_2a7488;
        case 0x2a748cu: goto label_2a748c;
        case 0x2a7490u: goto label_2a7490;
        case 0x2a7494u: goto label_2a7494;
        case 0x2a7498u: goto label_2a7498;
        case 0x2a749cu: goto label_2a749c;
        case 0x2a74a0u: goto label_2a74a0;
        case 0x2a74a4u: goto label_2a74a4;
        case 0x2a74a8u: goto label_2a74a8;
        case 0x2a74acu: goto label_2a74ac;
        case 0x2a74b0u: goto label_2a74b0;
        case 0x2a74b4u: goto label_2a74b4;
        case 0x2a74b8u: goto label_2a74b8;
        case 0x2a74bcu: goto label_2a74bc;
        case 0x2a74c0u: goto label_2a74c0;
        case 0x2a74c4u: goto label_2a74c4;
        case 0x2a74c8u: goto label_2a74c8;
        case 0x2a74ccu: goto label_2a74cc;
        case 0x2a74d0u: goto label_2a74d0;
        case 0x2a74d4u: goto label_2a74d4;
        case 0x2a74d8u: goto label_2a74d8;
        case 0x2a74dcu: goto label_2a74dc;
        case 0x2a74e0u: goto label_2a74e0;
        case 0x2a74e4u: goto label_2a74e4;
        case 0x2a74e8u: goto label_2a74e8;
        case 0x2a74ecu: goto label_2a74ec;
        case 0x2a74f0u: goto label_2a74f0;
        case 0x2a74f4u: goto label_2a74f4;
        case 0x2a74f8u: goto label_2a74f8;
        case 0x2a74fcu: goto label_2a74fc;
        case 0x2a7500u: goto label_2a7500;
        case 0x2a7504u: goto label_2a7504;
        case 0x2a7508u: goto label_2a7508;
        case 0x2a750cu: goto label_2a750c;
        case 0x2a7510u: goto label_2a7510;
        case 0x2a7514u: goto label_2a7514;
        case 0x2a7518u: goto label_2a7518;
        case 0x2a751cu: goto label_2a751c;
        case 0x2a7520u: goto label_2a7520;
        case 0x2a7524u: goto label_2a7524;
        case 0x2a7528u: goto label_2a7528;
        case 0x2a752cu: goto label_2a752c;
        case 0x2a7530u: goto label_2a7530;
        case 0x2a7534u: goto label_2a7534;
        case 0x2a7538u: goto label_2a7538;
        case 0x2a753cu: goto label_2a753c;
        case 0x2a7540u: goto label_2a7540;
        case 0x2a7544u: goto label_2a7544;
        case 0x2a7548u: goto label_2a7548;
        case 0x2a754cu: goto label_2a754c;
        case 0x2a7550u: goto label_2a7550;
        case 0x2a7554u: goto label_2a7554;
        case 0x2a7558u: goto label_2a7558;
        case 0x2a755cu: goto label_2a755c;
        case 0x2a7560u: goto label_2a7560;
        case 0x2a7564u: goto label_2a7564;
        case 0x2a7568u: goto label_2a7568;
        case 0x2a756cu: goto label_2a756c;
        case 0x2a7570u: goto label_2a7570;
        case 0x2a7574u: goto label_2a7574;
        case 0x2a7578u: goto label_2a7578;
        case 0x2a757cu: goto label_2a757c;
        case 0x2a7580u: goto label_2a7580;
        case 0x2a7584u: goto label_2a7584;
        case 0x2a7588u: goto label_2a7588;
        case 0x2a758cu: goto label_2a758c;
        case 0x2a7590u: goto label_2a7590;
        case 0x2a7594u: goto label_2a7594;
        case 0x2a7598u: goto label_2a7598;
        case 0x2a759cu: goto label_2a759c;
        case 0x2a75a0u: goto label_2a75a0;
        case 0x2a75a4u: goto label_2a75a4;
        case 0x2a75a8u: goto label_2a75a8;
        case 0x2a75acu: goto label_2a75ac;
        case 0x2a75b0u: goto label_2a75b0;
        case 0x2a75b4u: goto label_2a75b4;
        case 0x2a75b8u: goto label_2a75b8;
        case 0x2a75bcu: goto label_2a75bc;
        case 0x2a75c0u: goto label_2a75c0;
        case 0x2a75c4u: goto label_2a75c4;
        case 0x2a75c8u: goto label_2a75c8;
        case 0x2a75ccu: goto label_2a75cc;
        case 0x2a75d0u: goto label_2a75d0;
        case 0x2a75d4u: goto label_2a75d4;
        case 0x2a75d8u: goto label_2a75d8;
        case 0x2a75dcu: goto label_2a75dc;
        case 0x2a75e0u: goto label_2a75e0;
        case 0x2a75e4u: goto label_2a75e4;
        case 0x2a75e8u: goto label_2a75e8;
        case 0x2a75ecu: goto label_2a75ec;
        case 0x2a75f0u: goto label_2a75f0;
        case 0x2a75f4u: goto label_2a75f4;
        case 0x2a75f8u: goto label_2a75f8;
        case 0x2a75fcu: goto label_2a75fc;
        case 0x2a7600u: goto label_2a7600;
        case 0x2a7604u: goto label_2a7604;
        case 0x2a7608u: goto label_2a7608;
        case 0x2a760cu: goto label_2a760c;
        case 0x2a7610u: goto label_2a7610;
        case 0x2a7614u: goto label_2a7614;
        case 0x2a7618u: goto label_2a7618;
        case 0x2a761cu: goto label_2a761c;
        case 0x2a7620u: goto label_2a7620;
        case 0x2a7624u: goto label_2a7624;
        case 0x2a7628u: goto label_2a7628;
        case 0x2a762cu: goto label_2a762c;
        case 0x2a7630u: goto label_2a7630;
        case 0x2a7634u: goto label_2a7634;
        case 0x2a7638u: goto label_2a7638;
        case 0x2a763cu: goto label_2a763c;
        case 0x2a7640u: goto label_2a7640;
        case 0x2a7644u: goto label_2a7644;
        case 0x2a7648u: goto label_2a7648;
        case 0x2a764cu: goto label_2a764c;
        case 0x2a7650u: goto label_2a7650;
        case 0x2a7654u: goto label_2a7654;
        case 0x2a7658u: goto label_2a7658;
        case 0x2a765cu: goto label_2a765c;
        case 0x2a7660u: goto label_2a7660;
        case 0x2a7664u: goto label_2a7664;
        case 0x2a7668u: goto label_2a7668;
        case 0x2a766cu: goto label_2a766c;
        case 0x2a7670u: goto label_2a7670;
        case 0x2a7674u: goto label_2a7674;
        case 0x2a7678u: goto label_2a7678;
        case 0x2a767cu: goto label_2a767c;
        case 0x2a7680u: goto label_2a7680;
        case 0x2a7684u: goto label_2a7684;
        case 0x2a7688u: goto label_2a7688;
        case 0x2a768cu: goto label_2a768c;
        case 0x2a7690u: goto label_2a7690;
        case 0x2a7694u: goto label_2a7694;
        case 0x2a7698u: goto label_2a7698;
        case 0x2a769cu: goto label_2a769c;
        case 0x2a76a0u: goto label_2a76a0;
        case 0x2a76a4u: goto label_2a76a4;
        case 0x2a76a8u: goto label_2a76a8;
        case 0x2a76acu: goto label_2a76ac;
        case 0x2a76b0u: goto label_2a76b0;
        case 0x2a76b4u: goto label_2a76b4;
        case 0x2a76b8u: goto label_2a76b8;
        case 0x2a76bcu: goto label_2a76bc;
        case 0x2a76c0u: goto label_2a76c0;
        case 0x2a76c4u: goto label_2a76c4;
        case 0x2a76c8u: goto label_2a76c8;
        case 0x2a76ccu: goto label_2a76cc;
        case 0x2a76d0u: goto label_2a76d0;
        case 0x2a76d4u: goto label_2a76d4;
        case 0x2a76d8u: goto label_2a76d8;
        case 0x2a76dcu: goto label_2a76dc;
        case 0x2a76e0u: goto label_2a76e0;
        case 0x2a76e4u: goto label_2a76e4;
        case 0x2a76e8u: goto label_2a76e8;
        case 0x2a76ecu: goto label_2a76ec;
        case 0x2a76f0u: goto label_2a76f0;
        case 0x2a76f4u: goto label_2a76f4;
        case 0x2a76f8u: goto label_2a76f8;
        case 0x2a76fcu: goto label_2a76fc;
        case 0x2a7700u: goto label_2a7700;
        case 0x2a7704u: goto label_2a7704;
        case 0x2a7708u: goto label_2a7708;
        case 0x2a770cu: goto label_2a770c;
        case 0x2a7710u: goto label_2a7710;
        case 0x2a7714u: goto label_2a7714;
        case 0x2a7718u: goto label_2a7718;
        case 0x2a771cu: goto label_2a771c;
        case 0x2a7720u: goto label_2a7720;
        case 0x2a7724u: goto label_2a7724;
        case 0x2a7728u: goto label_2a7728;
        case 0x2a772cu: goto label_2a772c;
        case 0x2a7730u: goto label_2a7730;
        case 0x2a7734u: goto label_2a7734;
        case 0x2a7738u: goto label_2a7738;
        case 0x2a773cu: goto label_2a773c;
        case 0x2a7740u: goto label_2a7740;
        case 0x2a7744u: goto label_2a7744;
        case 0x2a7748u: goto label_2a7748;
        case 0x2a774cu: goto label_2a774c;
        case 0x2a7750u: goto label_2a7750;
        case 0x2a7754u: goto label_2a7754;
        case 0x2a7758u: goto label_2a7758;
        case 0x2a775cu: goto label_2a775c;
        case 0x2a7760u: goto label_2a7760;
        case 0x2a7764u: goto label_2a7764;
        case 0x2a7768u: goto label_2a7768;
        case 0x2a776cu: goto label_2a776c;
        case 0x2a7770u: goto label_2a7770;
        case 0x2a7774u: goto label_2a7774;
        case 0x2a7778u: goto label_2a7778;
        case 0x2a777cu: goto label_2a777c;
        case 0x2a7780u: goto label_2a7780;
        case 0x2a7784u: goto label_2a7784;
        case 0x2a7788u: goto label_2a7788;
        case 0x2a778cu: goto label_2a778c;
        case 0x2a7790u: goto label_2a7790;
        case 0x2a7794u: goto label_2a7794;
        case 0x2a7798u: goto label_2a7798;
        case 0x2a779cu: goto label_2a779c;
        case 0x2a77a0u: goto label_2a77a0;
        case 0x2a77a4u: goto label_2a77a4;
        case 0x2a77a8u: goto label_2a77a8;
        case 0x2a77acu: goto label_2a77ac;
        case 0x2a77b0u: goto label_2a77b0;
        case 0x2a77b4u: goto label_2a77b4;
        case 0x2a77b8u: goto label_2a77b8;
        case 0x2a77bcu: goto label_2a77bc;
        case 0x2a77c0u: goto label_2a77c0;
        case 0x2a77c4u: goto label_2a77c4;
        case 0x2a77c8u: goto label_2a77c8;
        case 0x2a77ccu: goto label_2a77cc;
        case 0x2a77d0u: goto label_2a77d0;
        case 0x2a77d4u: goto label_2a77d4;
        case 0x2a77d8u: goto label_2a77d8;
        case 0x2a77dcu: goto label_2a77dc;
        case 0x2a77e0u: goto label_2a77e0;
        case 0x2a77e4u: goto label_2a77e4;
        case 0x2a77e8u: goto label_2a77e8;
        case 0x2a77ecu: goto label_2a77ec;
        case 0x2a77f0u: goto label_2a77f0;
        case 0x2a77f4u: goto label_2a77f4;
        case 0x2a77f8u: goto label_2a77f8;
        case 0x2a77fcu: goto label_2a77fc;
        case 0x2a7800u: goto label_2a7800;
        case 0x2a7804u: goto label_2a7804;
        case 0x2a7808u: goto label_2a7808;
        case 0x2a780cu: goto label_2a780c;
        case 0x2a7810u: goto label_2a7810;
        case 0x2a7814u: goto label_2a7814;
        case 0x2a7818u: goto label_2a7818;
        case 0x2a781cu: goto label_2a781c;
        case 0x2a7820u: goto label_2a7820;
        case 0x2a7824u: goto label_2a7824;
        case 0x2a7828u: goto label_2a7828;
        case 0x2a782cu: goto label_2a782c;
        case 0x2a7830u: goto label_2a7830;
        case 0x2a7834u: goto label_2a7834;
        case 0x2a7838u: goto label_2a7838;
        case 0x2a783cu: goto label_2a783c;
        case 0x2a7840u: goto label_2a7840;
        case 0x2a7844u: goto label_2a7844;
        case 0x2a7848u: goto label_2a7848;
        case 0x2a784cu: goto label_2a784c;
        case 0x2a7850u: goto label_2a7850;
        case 0x2a7854u: goto label_2a7854;
        case 0x2a7858u: goto label_2a7858;
        case 0x2a785cu: goto label_2a785c;
        case 0x2a7860u: goto label_2a7860;
        case 0x2a7864u: goto label_2a7864;
        case 0x2a7868u: goto label_2a7868;
        case 0x2a786cu: goto label_2a786c;
        case 0x2a7870u: goto label_2a7870;
        case 0x2a7874u: goto label_2a7874;
        case 0x2a7878u: goto label_2a7878;
        case 0x2a787cu: goto label_2a787c;
        case 0x2a7880u: goto label_2a7880;
        case 0x2a7884u: goto label_2a7884;
        case 0x2a7888u: goto label_2a7888;
        case 0x2a788cu: goto label_2a788c;
        case 0x2a7890u: goto label_2a7890;
        case 0x2a7894u: goto label_2a7894;
        case 0x2a7898u: goto label_2a7898;
        case 0x2a789cu: goto label_2a789c;
        case 0x2a78a0u: goto label_2a78a0;
        case 0x2a78a4u: goto label_2a78a4;
        case 0x2a78a8u: goto label_2a78a8;
        case 0x2a78acu: goto label_2a78ac;
        case 0x2a78b0u: goto label_2a78b0;
        case 0x2a78b4u: goto label_2a78b4;
        case 0x2a78b8u: goto label_2a78b8;
        case 0x2a78bcu: goto label_2a78bc;
        case 0x2a78c0u: goto label_2a78c0;
        case 0x2a78c4u: goto label_2a78c4;
        case 0x2a78c8u: goto label_2a78c8;
        case 0x2a78ccu: goto label_2a78cc;
        case 0x2a78d0u: goto label_2a78d0;
        case 0x2a78d4u: goto label_2a78d4;
        case 0x2a78d8u: goto label_2a78d8;
        case 0x2a78dcu: goto label_2a78dc;
        case 0x2a78e0u: goto label_2a78e0;
        case 0x2a78e4u: goto label_2a78e4;
        case 0x2a78e8u: goto label_2a78e8;
        case 0x2a78ecu: goto label_2a78ec;
        case 0x2a78f0u: goto label_2a78f0;
        case 0x2a78f4u: goto label_2a78f4;
        case 0x2a78f8u: goto label_2a78f8;
        case 0x2a78fcu: goto label_2a78fc;
        case 0x2a7900u: goto label_2a7900;
        case 0x2a7904u: goto label_2a7904;
        case 0x2a7908u: goto label_2a7908;
        case 0x2a790cu: goto label_2a790c;
        case 0x2a7910u: goto label_2a7910;
        case 0x2a7914u: goto label_2a7914;
        case 0x2a7918u: goto label_2a7918;
        case 0x2a791cu: goto label_2a791c;
        case 0x2a7920u: goto label_2a7920;
        case 0x2a7924u: goto label_2a7924;
        case 0x2a7928u: goto label_2a7928;
        case 0x2a792cu: goto label_2a792c;
        case 0x2a7930u: goto label_2a7930;
        case 0x2a7934u: goto label_2a7934;
        case 0x2a7938u: goto label_2a7938;
        case 0x2a793cu: goto label_2a793c;
        case 0x2a7940u: goto label_2a7940;
        case 0x2a7944u: goto label_2a7944;
        case 0x2a7948u: goto label_2a7948;
        case 0x2a794cu: goto label_2a794c;
        case 0x2a7950u: goto label_2a7950;
        case 0x2a7954u: goto label_2a7954;
        case 0x2a7958u: goto label_2a7958;
        case 0x2a795cu: goto label_2a795c;
        case 0x2a7960u: goto label_2a7960;
        case 0x2a7964u: goto label_2a7964;
        case 0x2a7968u: goto label_2a7968;
        case 0x2a796cu: goto label_2a796c;
        case 0x2a7970u: goto label_2a7970;
        case 0x2a7974u: goto label_2a7974;
        case 0x2a7978u: goto label_2a7978;
        case 0x2a797cu: goto label_2a797c;
        case 0x2a7980u: goto label_2a7980;
        case 0x2a7984u: goto label_2a7984;
        case 0x2a7988u: goto label_2a7988;
        case 0x2a798cu: goto label_2a798c;
        case 0x2a7990u: goto label_2a7990;
        case 0x2a7994u: goto label_2a7994;
        case 0x2a7998u: goto label_2a7998;
        case 0x2a799cu: goto label_2a799c;
        case 0x2a79a0u: goto label_2a79a0;
        case 0x2a79a4u: goto label_2a79a4;
        case 0x2a79a8u: goto label_2a79a8;
        case 0x2a79acu: goto label_2a79ac;
        case 0x2a79b0u: goto label_2a79b0;
        case 0x2a79b4u: goto label_2a79b4;
        case 0x2a79b8u: goto label_2a79b8;
        case 0x2a79bcu: goto label_2a79bc;
        case 0x2a79c0u: goto label_2a79c0;
        case 0x2a79c4u: goto label_2a79c4;
        case 0x2a79c8u: goto label_2a79c8;
        case 0x2a79ccu: goto label_2a79cc;
        case 0x2a79d0u: goto label_2a79d0;
        case 0x2a79d4u: goto label_2a79d4;
        case 0x2a79d8u: goto label_2a79d8;
        case 0x2a79dcu: goto label_2a79dc;
        case 0x2a79e0u: goto label_2a79e0;
        case 0x2a79e4u: goto label_2a79e4;
        case 0x2a79e8u: goto label_2a79e8;
        case 0x2a79ecu: goto label_2a79ec;
        case 0x2a79f0u: goto label_2a79f0;
        case 0x2a79f4u: goto label_2a79f4;
        case 0x2a79f8u: goto label_2a79f8;
        case 0x2a79fcu: goto label_2a79fc;
        case 0x2a7a00u: goto label_2a7a00;
        case 0x2a7a04u: goto label_2a7a04;
        case 0x2a7a08u: goto label_2a7a08;
        case 0x2a7a0cu: goto label_2a7a0c;
        case 0x2a7a10u: goto label_2a7a10;
        case 0x2a7a14u: goto label_2a7a14;
        case 0x2a7a18u: goto label_2a7a18;
        case 0x2a7a1cu: goto label_2a7a1c;
        case 0x2a7a20u: goto label_2a7a20;
        case 0x2a7a24u: goto label_2a7a24;
        case 0x2a7a28u: goto label_2a7a28;
        case 0x2a7a2cu: goto label_2a7a2c;
        case 0x2a7a30u: goto label_2a7a30;
        case 0x2a7a34u: goto label_2a7a34;
        case 0x2a7a38u: goto label_2a7a38;
        case 0x2a7a3cu: goto label_2a7a3c;
        case 0x2a7a40u: goto label_2a7a40;
        case 0x2a7a44u: goto label_2a7a44;
        case 0x2a7a48u: goto label_2a7a48;
        case 0x2a7a4cu: goto label_2a7a4c;
        case 0x2a7a50u: goto label_2a7a50;
        case 0x2a7a54u: goto label_2a7a54;
        case 0x2a7a58u: goto label_2a7a58;
        case 0x2a7a5cu: goto label_2a7a5c;
        case 0x2a7a60u: goto label_2a7a60;
        case 0x2a7a64u: goto label_2a7a64;
        case 0x2a7a68u: goto label_2a7a68;
        case 0x2a7a6cu: goto label_2a7a6c;
        case 0x2a7a70u: goto label_2a7a70;
        case 0x2a7a74u: goto label_2a7a74;
        case 0x2a7a78u: goto label_2a7a78;
        case 0x2a7a7cu: goto label_2a7a7c;
        case 0x2a7a80u: goto label_2a7a80;
        case 0x2a7a84u: goto label_2a7a84;
        case 0x2a7a88u: goto label_2a7a88;
        case 0x2a7a8cu: goto label_2a7a8c;
        case 0x2a7a90u: goto label_2a7a90;
        case 0x2a7a94u: goto label_2a7a94;
        case 0x2a7a98u: goto label_2a7a98;
        case 0x2a7a9cu: goto label_2a7a9c;
        case 0x2a7aa0u: goto label_2a7aa0;
        case 0x2a7aa4u: goto label_2a7aa4;
        case 0x2a7aa8u: goto label_2a7aa8;
        case 0x2a7aacu: goto label_2a7aac;
        case 0x2a7ab0u: goto label_2a7ab0;
        case 0x2a7ab4u: goto label_2a7ab4;
        case 0x2a7ab8u: goto label_2a7ab8;
        case 0x2a7abcu: goto label_2a7abc;
        case 0x2a7ac0u: goto label_2a7ac0;
        case 0x2a7ac4u: goto label_2a7ac4;
        case 0x2a7ac8u: goto label_2a7ac8;
        case 0x2a7accu: goto label_2a7acc;
        case 0x2a7ad0u: goto label_2a7ad0;
        case 0x2a7ad4u: goto label_2a7ad4;
        case 0x2a7ad8u: goto label_2a7ad8;
        case 0x2a7adcu: goto label_2a7adc;
        case 0x2a7ae0u: goto label_2a7ae0;
        case 0x2a7ae4u: goto label_2a7ae4;
        case 0x2a7ae8u: goto label_2a7ae8;
        case 0x2a7aecu: goto label_2a7aec;
        case 0x2a7af0u: goto label_2a7af0;
        case 0x2a7af4u: goto label_2a7af4;
        case 0x2a7af8u: goto label_2a7af8;
        case 0x2a7afcu: goto label_2a7afc;
        case 0x2a7b00u: goto label_2a7b00;
        case 0x2a7b04u: goto label_2a7b04;
        case 0x2a7b08u: goto label_2a7b08;
        case 0x2a7b0cu: goto label_2a7b0c;
        case 0x2a7b10u: goto label_2a7b10;
        case 0x2a7b14u: goto label_2a7b14;
        case 0x2a7b18u: goto label_2a7b18;
        case 0x2a7b1cu: goto label_2a7b1c;
        case 0x2a7b20u: goto label_2a7b20;
        case 0x2a7b24u: goto label_2a7b24;
        case 0x2a7b28u: goto label_2a7b28;
        case 0x2a7b2cu: goto label_2a7b2c;
        case 0x2a7b30u: goto label_2a7b30;
        case 0x2a7b34u: goto label_2a7b34;
        case 0x2a7b38u: goto label_2a7b38;
        case 0x2a7b3cu: goto label_2a7b3c;
        case 0x2a7b40u: goto label_2a7b40;
        case 0x2a7b44u: goto label_2a7b44;
        case 0x2a7b48u: goto label_2a7b48;
        case 0x2a7b4cu: goto label_2a7b4c;
        case 0x2a7b50u: goto label_2a7b50;
        case 0x2a7b54u: goto label_2a7b54;
        case 0x2a7b58u: goto label_2a7b58;
        case 0x2a7b5cu: goto label_2a7b5c;
        case 0x2a7b60u: goto label_2a7b60;
        case 0x2a7b64u: goto label_2a7b64;
        case 0x2a7b68u: goto label_2a7b68;
        case 0x2a7b6cu: goto label_2a7b6c;
        case 0x2a7b70u: goto label_2a7b70;
        case 0x2a7b74u: goto label_2a7b74;
        case 0x2a7b78u: goto label_2a7b78;
        case 0x2a7b7cu: goto label_2a7b7c;
        case 0x2a7b80u: goto label_2a7b80;
        case 0x2a7b84u: goto label_2a7b84;
        case 0x2a7b88u: goto label_2a7b88;
        case 0x2a7b8cu: goto label_2a7b8c;
        case 0x2a7b90u: goto label_2a7b90;
        case 0x2a7b94u: goto label_2a7b94;
        case 0x2a7b98u: goto label_2a7b98;
        case 0x2a7b9cu: goto label_2a7b9c;
        case 0x2a7ba0u: goto label_2a7ba0;
        case 0x2a7ba4u: goto label_2a7ba4;
        case 0x2a7ba8u: goto label_2a7ba8;
        case 0x2a7bacu: goto label_2a7bac;
        case 0x2a7bb0u: goto label_2a7bb0;
        case 0x2a7bb4u: goto label_2a7bb4;
        case 0x2a7bb8u: goto label_2a7bb8;
        case 0x2a7bbcu: goto label_2a7bbc;
        case 0x2a7bc0u: goto label_2a7bc0;
        case 0x2a7bc4u: goto label_2a7bc4;
        case 0x2a7bc8u: goto label_2a7bc8;
        case 0x2a7bccu: goto label_2a7bcc;
        case 0x2a7bd0u: goto label_2a7bd0;
        case 0x2a7bd4u: goto label_2a7bd4;
        case 0x2a7bd8u: goto label_2a7bd8;
        case 0x2a7bdcu: goto label_2a7bdc;
        case 0x2a7be0u: goto label_2a7be0;
        case 0x2a7be4u: goto label_2a7be4;
        case 0x2a7be8u: goto label_2a7be8;
        case 0x2a7becu: goto label_2a7bec;
        case 0x2a7bf0u: goto label_2a7bf0;
        case 0x2a7bf4u: goto label_2a7bf4;
        case 0x2a7bf8u: goto label_2a7bf8;
        case 0x2a7bfcu: goto label_2a7bfc;
        case 0x2a7c00u: goto label_2a7c00;
        case 0x2a7c04u: goto label_2a7c04;
        case 0x2a7c08u: goto label_2a7c08;
        case 0x2a7c0cu: goto label_2a7c0c;
        case 0x2a7c10u: goto label_2a7c10;
        case 0x2a7c14u: goto label_2a7c14;
        case 0x2a7c18u: goto label_2a7c18;
        case 0x2a7c1cu: goto label_2a7c1c;
        case 0x2a7c20u: goto label_2a7c20;
        case 0x2a7c24u: goto label_2a7c24;
        case 0x2a7c28u: goto label_2a7c28;
        case 0x2a7c2cu: goto label_2a7c2c;
        case 0x2a7c30u: goto label_2a7c30;
        case 0x2a7c34u: goto label_2a7c34;
        case 0x2a7c38u: goto label_2a7c38;
        case 0x2a7c3cu: goto label_2a7c3c;
        case 0x2a7c40u: goto label_2a7c40;
        case 0x2a7c44u: goto label_2a7c44;
        case 0x2a7c48u: goto label_2a7c48;
        case 0x2a7c4cu: goto label_2a7c4c;
        case 0x2a7c50u: goto label_2a7c50;
        case 0x2a7c54u: goto label_2a7c54;
        case 0x2a7c58u: goto label_2a7c58;
        case 0x2a7c5cu: goto label_2a7c5c;
        case 0x2a7c60u: goto label_2a7c60;
        case 0x2a7c64u: goto label_2a7c64;
        case 0x2a7c68u: goto label_2a7c68;
        case 0x2a7c6cu: goto label_2a7c6c;
        case 0x2a7c70u: goto label_2a7c70;
        case 0x2a7c74u: goto label_2a7c74;
        case 0x2a7c78u: goto label_2a7c78;
        case 0x2a7c7cu: goto label_2a7c7c;
        case 0x2a7c80u: goto label_2a7c80;
        case 0x2a7c84u: goto label_2a7c84;
        case 0x2a7c88u: goto label_2a7c88;
        case 0x2a7c8cu: goto label_2a7c8c;
        case 0x2a7c90u: goto label_2a7c90;
        case 0x2a7c94u: goto label_2a7c94;
        case 0x2a7c98u: goto label_2a7c98;
        case 0x2a7c9cu: goto label_2a7c9c;
        case 0x2a7ca0u: goto label_2a7ca0;
        case 0x2a7ca4u: goto label_2a7ca4;
        case 0x2a7ca8u: goto label_2a7ca8;
        case 0x2a7cacu: goto label_2a7cac;
        case 0x2a7cb0u: goto label_2a7cb0;
        case 0x2a7cb4u: goto label_2a7cb4;
        case 0x2a7cb8u: goto label_2a7cb8;
        case 0x2a7cbcu: goto label_2a7cbc;
        case 0x2a7cc0u: goto label_2a7cc0;
        case 0x2a7cc4u: goto label_2a7cc4;
        case 0x2a7cc8u: goto label_2a7cc8;
        case 0x2a7cccu: goto label_2a7ccc;
        case 0x2a7cd0u: goto label_2a7cd0;
        case 0x2a7cd4u: goto label_2a7cd4;
        case 0x2a7cd8u: goto label_2a7cd8;
        case 0x2a7cdcu: goto label_2a7cdc;
        case 0x2a7ce0u: goto label_2a7ce0;
        case 0x2a7ce4u: goto label_2a7ce4;
        case 0x2a7ce8u: goto label_2a7ce8;
        case 0x2a7cecu: goto label_2a7cec;
        case 0x2a7cf0u: goto label_2a7cf0;
        case 0x2a7cf4u: goto label_2a7cf4;
        case 0x2a7cf8u: goto label_2a7cf8;
        case 0x2a7cfcu: goto label_2a7cfc;
        case 0x2a7d00u: goto label_2a7d00;
        case 0x2a7d04u: goto label_2a7d04;
        case 0x2a7d08u: goto label_2a7d08;
        case 0x2a7d0cu: goto label_2a7d0c;
        case 0x2a7d10u: goto label_2a7d10;
        case 0x2a7d14u: goto label_2a7d14;
        case 0x2a7d18u: goto label_2a7d18;
        case 0x2a7d1cu: goto label_2a7d1c;
        case 0x2a7d20u: goto label_2a7d20;
        case 0x2a7d24u: goto label_2a7d24;
        case 0x2a7d28u: goto label_2a7d28;
        case 0x2a7d2cu: goto label_2a7d2c;
        case 0x2a7d30u: goto label_2a7d30;
        case 0x2a7d34u: goto label_2a7d34;
        case 0x2a7d38u: goto label_2a7d38;
        case 0x2a7d3cu: goto label_2a7d3c;
        case 0x2a7d40u: goto label_2a7d40;
        case 0x2a7d44u: goto label_2a7d44;
        case 0x2a7d48u: goto label_2a7d48;
        case 0x2a7d4cu: goto label_2a7d4c;
        case 0x2a7d50u: goto label_2a7d50;
        case 0x2a7d54u: goto label_2a7d54;
        case 0x2a7d58u: goto label_2a7d58;
        case 0x2a7d5cu: goto label_2a7d5c;
        case 0x2a7d60u: goto label_2a7d60;
        case 0x2a7d64u: goto label_2a7d64;
        case 0x2a7d68u: goto label_2a7d68;
        case 0x2a7d6cu: goto label_2a7d6c;
        case 0x2a7d70u: goto label_2a7d70;
        case 0x2a7d74u: goto label_2a7d74;
        case 0x2a7d78u: goto label_2a7d78;
        case 0x2a7d7cu: goto label_2a7d7c;
        case 0x2a7d80u: goto label_2a7d80;
        case 0x2a7d84u: goto label_2a7d84;
        case 0x2a7d88u: goto label_2a7d88;
        case 0x2a7d8cu: goto label_2a7d8c;
        case 0x2a7d90u: goto label_2a7d90;
        case 0x2a7d94u: goto label_2a7d94;
        case 0x2a7d98u: goto label_2a7d98;
        case 0x2a7d9cu: goto label_2a7d9c;
        case 0x2a7da0u: goto label_2a7da0;
        case 0x2a7da4u: goto label_2a7da4;
        case 0x2a7da8u: goto label_2a7da8;
        case 0x2a7dacu: goto label_2a7dac;
        case 0x2a7db0u: goto label_2a7db0;
        case 0x2a7db4u: goto label_2a7db4;
        case 0x2a7db8u: goto label_2a7db8;
        case 0x2a7dbcu: goto label_2a7dbc;
        case 0x2a7dc0u: goto label_2a7dc0;
        case 0x2a7dc4u: goto label_2a7dc4;
        case 0x2a7dc8u: goto label_2a7dc8;
        case 0x2a7dccu: goto label_2a7dcc;
        case 0x2a7dd0u: goto label_2a7dd0;
        case 0x2a7dd4u: goto label_2a7dd4;
        case 0x2a7dd8u: goto label_2a7dd8;
        case 0x2a7ddcu: goto label_2a7ddc;
        case 0x2a7de0u: goto label_2a7de0;
        case 0x2a7de4u: goto label_2a7de4;
        case 0x2a7de8u: goto label_2a7de8;
        case 0x2a7decu: goto label_2a7dec;
        case 0x2a7df0u: goto label_2a7df0;
        case 0x2a7df4u: goto label_2a7df4;
        case 0x2a7df8u: goto label_2a7df8;
        case 0x2a7dfcu: goto label_2a7dfc;
        case 0x2a7e00u: goto label_2a7e00;
        case 0x2a7e04u: goto label_2a7e04;
        case 0x2a7e08u: goto label_2a7e08;
        case 0x2a7e0cu: goto label_2a7e0c;
        case 0x2a7e10u: goto label_2a7e10;
        case 0x2a7e14u: goto label_2a7e14;
        case 0x2a7e18u: goto label_2a7e18;
        case 0x2a7e1cu: goto label_2a7e1c;
        case 0x2a7e20u: goto label_2a7e20;
        case 0x2a7e24u: goto label_2a7e24;
        case 0x2a7e28u: goto label_2a7e28;
        case 0x2a7e2cu: goto label_2a7e2c;
        case 0x2a7e30u: goto label_2a7e30;
        case 0x2a7e34u: goto label_2a7e34;
        case 0x2a7e38u: goto label_2a7e38;
        case 0x2a7e3cu: goto label_2a7e3c;
        case 0x2a7e40u: goto label_2a7e40;
        case 0x2a7e44u: goto label_2a7e44;
        case 0x2a7e48u: goto label_2a7e48;
        case 0x2a7e4cu: goto label_2a7e4c;
        case 0x2a7e50u: goto label_2a7e50;
        case 0x2a7e54u: goto label_2a7e54;
        case 0x2a7e58u: goto label_2a7e58;
        case 0x2a7e5cu: goto label_2a7e5c;
        case 0x2a7e60u: goto label_2a7e60;
        case 0x2a7e64u: goto label_2a7e64;
        case 0x2a7e68u: goto label_2a7e68;
        case 0x2a7e6cu: goto label_2a7e6c;
        case 0x2a7e70u: goto label_2a7e70;
        case 0x2a7e74u: goto label_2a7e74;
        case 0x2a7e78u: goto label_2a7e78;
        case 0x2a7e7cu: goto label_2a7e7c;
        case 0x2a7e80u: goto label_2a7e80;
        case 0x2a7e84u: goto label_2a7e84;
        case 0x2a7e88u: goto label_2a7e88;
        case 0x2a7e8cu: goto label_2a7e8c;
        case 0x2a7e90u: goto label_2a7e90;
        case 0x2a7e94u: goto label_2a7e94;
        case 0x2a7e98u: goto label_2a7e98;
        case 0x2a7e9cu: goto label_2a7e9c;
        case 0x2a7ea0u: goto label_2a7ea0;
        case 0x2a7ea4u: goto label_2a7ea4;
        case 0x2a7ea8u: goto label_2a7ea8;
        case 0x2a7eacu: goto label_2a7eac;
        case 0x2a7eb0u: goto label_2a7eb0;
        case 0x2a7eb4u: goto label_2a7eb4;
        case 0x2a7eb8u: goto label_2a7eb8;
        case 0x2a7ebcu: goto label_2a7ebc;
        case 0x2a7ec0u: goto label_2a7ec0;
        case 0x2a7ec4u: goto label_2a7ec4;
        case 0x2a7ec8u: goto label_2a7ec8;
        case 0x2a7eccu: goto label_2a7ecc;
        case 0x2a7ed0u: goto label_2a7ed0;
        case 0x2a7ed4u: goto label_2a7ed4;
        case 0x2a7ed8u: goto label_2a7ed8;
        case 0x2a7edcu: goto label_2a7edc;
        case 0x2a7ee0u: goto label_2a7ee0;
        case 0x2a7ee4u: goto label_2a7ee4;
        case 0x2a7ee8u: goto label_2a7ee8;
        case 0x2a7eecu: goto label_2a7eec;
        case 0x2a7ef0u: goto label_2a7ef0;
        case 0x2a7ef4u: goto label_2a7ef4;
        case 0x2a7ef8u: goto label_2a7ef8;
        case 0x2a7efcu: goto label_2a7efc;
        case 0x2a7f00u: goto label_2a7f00;
        case 0x2a7f04u: goto label_2a7f04;
        case 0x2a7f08u: goto label_2a7f08;
        case 0x2a7f0cu: goto label_2a7f0c;
        case 0x2a7f10u: goto label_2a7f10;
        case 0x2a7f14u: goto label_2a7f14;
        case 0x2a7f18u: goto label_2a7f18;
        case 0x2a7f1cu: goto label_2a7f1c;
        case 0x2a7f20u: goto label_2a7f20;
        case 0x2a7f24u: goto label_2a7f24;
        case 0x2a7f28u: goto label_2a7f28;
        case 0x2a7f2cu: goto label_2a7f2c;
        case 0x2a7f30u: goto label_2a7f30;
        case 0x2a7f34u: goto label_2a7f34;
        case 0x2a7f38u: goto label_2a7f38;
        case 0x2a7f3cu: goto label_2a7f3c;
        case 0x2a7f40u: goto label_2a7f40;
        case 0x2a7f44u: goto label_2a7f44;
        case 0x2a7f48u: goto label_2a7f48;
        case 0x2a7f4cu: goto label_2a7f4c;
        case 0x2a7f50u: goto label_2a7f50;
        case 0x2a7f54u: goto label_2a7f54;
        case 0x2a7f58u: goto label_2a7f58;
        case 0x2a7f5cu: goto label_2a7f5c;
        case 0x2a7f60u: goto label_2a7f60;
        case 0x2a7f64u: goto label_2a7f64;
        case 0x2a7f68u: goto label_2a7f68;
        case 0x2a7f6cu: goto label_2a7f6c;
        case 0x2a7f70u: goto label_2a7f70;
        case 0x2a7f74u: goto label_2a7f74;
        case 0x2a7f78u: goto label_2a7f78;
        case 0x2a7f7cu: goto label_2a7f7c;
        case 0x2a7f80u: goto label_2a7f80;
        case 0x2a7f84u: goto label_2a7f84;
        case 0x2a7f88u: goto label_2a7f88;
        case 0x2a7f8cu: goto label_2a7f8c;
        case 0x2a7f90u: goto label_2a7f90;
        case 0x2a7f94u: goto label_2a7f94;
        case 0x2a7f98u: goto label_2a7f98;
        case 0x2a7f9cu: goto label_2a7f9c;
        case 0x2a7fa0u: goto label_2a7fa0;
        case 0x2a7fa4u: goto label_2a7fa4;
        case 0x2a7fa8u: goto label_2a7fa8;
        case 0x2a7facu: goto label_2a7fac;
        case 0x2a7fb0u: goto label_2a7fb0;
        case 0x2a7fb4u: goto label_2a7fb4;
        case 0x2a7fb8u: goto label_2a7fb8;
        case 0x2a7fbcu: goto label_2a7fbc;
        case 0x2a7fc0u: goto label_2a7fc0;
        case 0x2a7fc4u: goto label_2a7fc4;
        case 0x2a7fc8u: goto label_2a7fc8;
        case 0x2a7fccu: goto label_2a7fcc;
        case 0x2a7fd0u: goto label_2a7fd0;
        case 0x2a7fd4u: goto label_2a7fd4;
        case 0x2a7fd8u: goto label_2a7fd8;
        case 0x2a7fdcu: goto label_2a7fdc;
        case 0x2a7fe0u: goto label_2a7fe0;
        case 0x2a7fe4u: goto label_2a7fe4;
        case 0x2a7fe8u: goto label_2a7fe8;
        case 0x2a7fecu: goto label_2a7fec;
        case 0x2a7ff0u: goto label_2a7ff0;
        case 0x2a7ff4u: goto label_2a7ff4;
        case 0x2a7ff8u: goto label_2a7ff8;
        case 0x2a7ffcu: goto label_2a7ffc;
        case 0x2a8000u: goto label_2a8000;
        case 0x2a8004u: goto label_2a8004;
        case 0x2a8008u: goto label_2a8008;
        case 0x2a800cu: goto label_2a800c;
        case 0x2a8010u: goto label_2a8010;
        case 0x2a8014u: goto label_2a8014;
        case 0x2a8018u: goto label_2a8018;
        case 0x2a801cu: goto label_2a801c;
        case 0x2a8020u: goto label_2a8020;
        case 0x2a8024u: goto label_2a8024;
        case 0x2a8028u: goto label_2a8028;
        case 0x2a802cu: goto label_2a802c;
        case 0x2a8030u: goto label_2a8030;
        case 0x2a8034u: goto label_2a8034;
        case 0x2a8038u: goto label_2a8038;
        case 0x2a803cu: goto label_2a803c;
        case 0x2a8040u: goto label_2a8040;
        case 0x2a8044u: goto label_2a8044;
        case 0x2a8048u: goto label_2a8048;
        case 0x2a804cu: goto label_2a804c;
        case 0x2a8050u: goto label_2a8050;
        case 0x2a8054u: goto label_2a8054;
        case 0x2a8058u: goto label_2a8058;
        case 0x2a805cu: goto label_2a805c;
        case 0x2a8060u: goto label_2a8060;
        case 0x2a8064u: goto label_2a8064;
        case 0x2a8068u: goto label_2a8068;
        case 0x2a806cu: goto label_2a806c;
        case 0x2a8070u: goto label_2a8070;
        case 0x2a8074u: goto label_2a8074;
        case 0x2a8078u: goto label_2a8078;
        case 0x2a807cu: goto label_2a807c;
        case 0x2a8080u: goto label_2a8080;
        case 0x2a8084u: goto label_2a8084;
        case 0x2a8088u: goto label_2a8088;
        case 0x2a808cu: goto label_2a808c;
        case 0x2a8090u: goto label_2a8090;
        case 0x2a8094u: goto label_2a8094;
        case 0x2a8098u: goto label_2a8098;
        case 0x2a809cu: goto label_2a809c;
        case 0x2a80a0u: goto label_2a80a0;
        case 0x2a80a4u: goto label_2a80a4;
        case 0x2a80a8u: goto label_2a80a8;
        case 0x2a80acu: goto label_2a80ac;
        case 0x2a80b0u: goto label_2a80b0;
        case 0x2a80b4u: goto label_2a80b4;
        case 0x2a80b8u: goto label_2a80b8;
        case 0x2a80bcu: goto label_2a80bc;
        case 0x2a80c0u: goto label_2a80c0;
        case 0x2a80c4u: goto label_2a80c4;
        case 0x2a80c8u: goto label_2a80c8;
        case 0x2a80ccu: goto label_2a80cc;
        case 0x2a80d0u: goto label_2a80d0;
        case 0x2a80d4u: goto label_2a80d4;
        case 0x2a80d8u: goto label_2a80d8;
        case 0x2a80dcu: goto label_2a80dc;
        case 0x2a80e0u: goto label_2a80e0;
        case 0x2a80e4u: goto label_2a80e4;
        case 0x2a80e8u: goto label_2a80e8;
        case 0x2a80ecu: goto label_2a80ec;
        case 0x2a80f0u: goto label_2a80f0;
        case 0x2a80f4u: goto label_2a80f4;
        case 0x2a80f8u: goto label_2a80f8;
        case 0x2a80fcu: goto label_2a80fc;
        case 0x2a8100u: goto label_2a8100;
        case 0x2a8104u: goto label_2a8104;
        case 0x2a8108u: goto label_2a8108;
        case 0x2a810cu: goto label_2a810c;
        case 0x2a8110u: goto label_2a8110;
        case 0x2a8114u: goto label_2a8114;
        case 0x2a8118u: goto label_2a8118;
        case 0x2a811cu: goto label_2a811c;
        case 0x2a8120u: goto label_2a8120;
        case 0x2a8124u: goto label_2a8124;
        case 0x2a8128u: goto label_2a8128;
        case 0x2a812cu: goto label_2a812c;
        case 0x2a8130u: goto label_2a8130;
        case 0x2a8134u: goto label_2a8134;
        case 0x2a8138u: goto label_2a8138;
        case 0x2a813cu: goto label_2a813c;
        case 0x2a8140u: goto label_2a8140;
        case 0x2a8144u: goto label_2a8144;
        case 0x2a8148u: goto label_2a8148;
        case 0x2a814cu: goto label_2a814c;
        case 0x2a8150u: goto label_2a8150;
        case 0x2a8154u: goto label_2a8154;
        case 0x2a8158u: goto label_2a8158;
        case 0x2a815cu: goto label_2a815c;
        case 0x2a8160u: goto label_2a8160;
        case 0x2a8164u: goto label_2a8164;
        case 0x2a8168u: goto label_2a8168;
        case 0x2a816cu: goto label_2a816c;
        case 0x2a8170u: goto label_2a8170;
        case 0x2a8174u: goto label_2a8174;
        case 0x2a8178u: goto label_2a8178;
        case 0x2a817cu: goto label_2a817c;
        case 0x2a8180u: goto label_2a8180;
        case 0x2a8184u: goto label_2a8184;
        case 0x2a8188u: goto label_2a8188;
        case 0x2a818cu: goto label_2a818c;
        case 0x2a8190u: goto label_2a8190;
        case 0x2a8194u: goto label_2a8194;
        case 0x2a8198u: goto label_2a8198;
        case 0x2a819cu: goto label_2a819c;
        case 0x2a81a0u: goto label_2a81a0;
        case 0x2a81a4u: goto label_2a81a4;
        case 0x2a81a8u: goto label_2a81a8;
        case 0x2a81acu: goto label_2a81ac;
        case 0x2a81b0u: goto label_2a81b0;
        case 0x2a81b4u: goto label_2a81b4;
        case 0x2a81b8u: goto label_2a81b8;
        case 0x2a81bcu: goto label_2a81bc;
        case 0x2a81c0u: goto label_2a81c0;
        case 0x2a81c4u: goto label_2a81c4;
        case 0x2a81c8u: goto label_2a81c8;
        case 0x2a81ccu: goto label_2a81cc;
        case 0x2a81d0u: goto label_2a81d0;
        case 0x2a81d4u: goto label_2a81d4;
        case 0x2a81d8u: goto label_2a81d8;
        case 0x2a81dcu: goto label_2a81dc;
        case 0x2a81e0u: goto label_2a81e0;
        case 0x2a81e4u: goto label_2a81e4;
        case 0x2a81e8u: goto label_2a81e8;
        case 0x2a81ecu: goto label_2a81ec;
        case 0x2a81f0u: goto label_2a81f0;
        case 0x2a81f4u: goto label_2a81f4;
        case 0x2a81f8u: goto label_2a81f8;
        case 0x2a81fcu: goto label_2a81fc;
        case 0x2a8200u: goto label_2a8200;
        case 0x2a8204u: goto label_2a8204;
        case 0x2a8208u: goto label_2a8208;
        case 0x2a820cu: goto label_2a820c;
        case 0x2a8210u: goto label_2a8210;
        case 0x2a8214u: goto label_2a8214;
        case 0x2a8218u: goto label_2a8218;
        case 0x2a821cu: goto label_2a821c;
        case 0x2a8220u: goto label_2a8220;
        case 0x2a8224u: goto label_2a8224;
        case 0x2a8228u: goto label_2a8228;
        case 0x2a822cu: goto label_2a822c;
        case 0x2a8230u: goto label_2a8230;
        case 0x2a8234u: goto label_2a8234;
        case 0x2a8238u: goto label_2a8238;
        case 0x2a823cu: goto label_2a823c;
        case 0x2a8240u: goto label_2a8240;
        case 0x2a8244u: goto label_2a8244;
        case 0x2a8248u: goto label_2a8248;
        case 0x2a824cu: goto label_2a824c;
        case 0x2a8250u: goto label_2a8250;
        case 0x2a8254u: goto label_2a8254;
        case 0x2a8258u: goto label_2a8258;
        case 0x2a825cu: goto label_2a825c;
        case 0x2a8260u: goto label_2a8260;
        case 0x2a8264u: goto label_2a8264;
        case 0x2a8268u: goto label_2a8268;
        case 0x2a826cu: goto label_2a826c;
        case 0x2a8270u: goto label_2a8270;
        case 0x2a8274u: goto label_2a8274;
        case 0x2a8278u: goto label_2a8278;
        case 0x2a827cu: goto label_2a827c;
        case 0x2a8280u: goto label_2a8280;
        case 0x2a8284u: goto label_2a8284;
        case 0x2a8288u: goto label_2a8288;
        case 0x2a828cu: goto label_2a828c;
        case 0x2a8290u: goto label_2a8290;
        case 0x2a8294u: goto label_2a8294;
        case 0x2a8298u: goto label_2a8298;
        case 0x2a829cu: goto label_2a829c;
        case 0x2a82a0u: goto label_2a82a0;
        case 0x2a82a4u: goto label_2a82a4;
        case 0x2a82a8u: goto label_2a82a8;
        case 0x2a82acu: goto label_2a82ac;
        case 0x2a82b0u: goto label_2a82b0;
        case 0x2a82b4u: goto label_2a82b4;
        case 0x2a82b8u: goto label_2a82b8;
        case 0x2a82bcu: goto label_2a82bc;
        case 0x2a82c0u: goto label_2a82c0;
        case 0x2a82c4u: goto label_2a82c4;
        case 0x2a82c8u: goto label_2a82c8;
        case 0x2a82ccu: goto label_2a82cc;
        case 0x2a82d0u: goto label_2a82d0;
        case 0x2a82d4u: goto label_2a82d4;
        case 0x2a82d8u: goto label_2a82d8;
        case 0x2a82dcu: goto label_2a82dc;
        case 0x2a82e0u: goto label_2a82e0;
        case 0x2a82e4u: goto label_2a82e4;
        case 0x2a82e8u: goto label_2a82e8;
        case 0x2a82ecu: goto label_2a82ec;
        case 0x2a82f0u: goto label_2a82f0;
        case 0x2a82f4u: goto label_2a82f4;
        case 0x2a82f8u: goto label_2a82f8;
        case 0x2a82fcu: goto label_2a82fc;
        case 0x2a8300u: goto label_2a8300;
        case 0x2a8304u: goto label_2a8304;
        case 0x2a8308u: goto label_2a8308;
        case 0x2a830cu: goto label_2a830c;
        case 0x2a8310u: goto label_2a8310;
        case 0x2a8314u: goto label_2a8314;
        case 0x2a8318u: goto label_2a8318;
        case 0x2a831cu: goto label_2a831c;
        case 0x2a8320u: goto label_2a8320;
        case 0x2a8324u: goto label_2a8324;
        case 0x2a8328u: goto label_2a8328;
        case 0x2a832cu: goto label_2a832c;
        case 0x2a8330u: goto label_2a8330;
        case 0x2a8334u: goto label_2a8334;
        case 0x2a8338u: goto label_2a8338;
        case 0x2a833cu: goto label_2a833c;
        case 0x2a8340u: goto label_2a8340;
        case 0x2a8344u: goto label_2a8344;
        case 0x2a8348u: goto label_2a8348;
        case 0x2a834cu: goto label_2a834c;
        case 0x2a8350u: goto label_2a8350;
        case 0x2a8354u: goto label_2a8354;
        case 0x2a8358u: goto label_2a8358;
        case 0x2a835cu: goto label_2a835c;
        case 0x2a8360u: goto label_2a8360;
        case 0x2a8364u: goto label_2a8364;
        case 0x2a8368u: goto label_2a8368;
        case 0x2a836cu: goto label_2a836c;
        case 0x2a8370u: goto label_2a8370;
        case 0x2a8374u: goto label_2a8374;
        case 0x2a8378u: goto label_2a8378;
        case 0x2a837cu: goto label_2a837c;
        case 0x2a8380u: goto label_2a8380;
        case 0x2a8384u: goto label_2a8384;
        case 0x2a8388u: goto label_2a8388;
        case 0x2a838cu: goto label_2a838c;
        case 0x2a8390u: goto label_2a8390;
        case 0x2a8394u: goto label_2a8394;
        case 0x2a8398u: goto label_2a8398;
        case 0x2a839cu: goto label_2a839c;
        case 0x2a83a0u: goto label_2a83a0;
        case 0x2a83a4u: goto label_2a83a4;
        case 0x2a83a8u: goto label_2a83a8;
        case 0x2a83acu: goto label_2a83ac;
        case 0x2a83b0u: goto label_2a83b0;
        case 0x2a83b4u: goto label_2a83b4;
        case 0x2a83b8u: goto label_2a83b8;
        case 0x2a83bcu: goto label_2a83bc;
        case 0x2a83c0u: goto label_2a83c0;
        case 0x2a83c4u: goto label_2a83c4;
        case 0x2a83c8u: goto label_2a83c8;
        case 0x2a83ccu: goto label_2a83cc;
        default: break;
    }

    ctx->pc = 0x2a65f0u;

label_2a65f0:
    // 0x2a65f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2a65f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2a65f4:
    // 0x2a65f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2a65f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2a65f8:
    // 0x2a65f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2a65f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2a65fc:
    // 0x2a65fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2a65fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2a6600:
    // 0x2a6600: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2a6600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2a6604:
    // 0x2a6604: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a6604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2a6608:
    // 0x2a6608: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a6608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2a660c:
    // 0x2a660c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2a660cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a6610:
    // 0x2a6610: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a6610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2a6614:
    // 0x2a6614: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2a6614u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a6618:
    // 0x2a6618: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a6618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a661c:
    // 0x2a661c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2a661cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a6620:
    // 0x2a6620: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a6620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a6624:
    // 0x2a6624: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a6624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a6628:
    // 0x2a6628: 0x12800103  beqz        $s4, . + 4 + (0x103 << 2)
label_2a662c:
    if (ctx->pc == 0x2A662Cu) {
        ctx->pc = 0x2A662Cu;
            // 0x2a662c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2A6630u;
        goto label_2a6630;
    }
    ctx->pc = 0x2A6628u;
    {
        const bool branch_taken_0x2a6628 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A662Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6628u;
            // 0x2a662c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6628) {
            ctx->pc = 0x2A6A38u;
            goto label_2a6a38;
        }
    }
    ctx->pc = 0x2A6630u;
label_2a6630:
    // 0x2a6630: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2a6630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2a6634:
    // 0x2a6634: 0x281082b  sltu        $at, $s4, $at
    ctx->pc = 0x2a6634u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_2a6638:
    // 0x2a6638: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_2a663c:
    if (ctx->pc == 0x2A663Cu) {
        ctx->pc = 0x2A6640u;
        goto label_2a6640;
    }
    ctx->pc = 0x2A6638u;
    {
        const bool branch_taken_0x2a6638 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6638) {
            ctx->pc = 0x2A665Cu;
            goto label_2a665c;
        }
    }
    ctx->pc = 0x2A6640u;
label_2a6640:
    // 0x2a6640: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x2a6640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
label_2a6644:
    // 0x2a6644: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x2a6644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2a6648:
    // 0x2a6648: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2a6648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2a664c:
    // 0x2a664c: 0x741823  subu        $v1, $v1, $s4
    ctx->pc = 0x2a664cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2a6650:
    // 0x2a6650: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x2a6650u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2a6654:
    // 0x2a6654: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
label_2a6658:
    if (ctx->pc == 0x2A6658u) {
        ctx->pc = 0x2A6658u;
            // 0x2a6658: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->pc = 0x2A665Cu;
        goto label_2a665c;
    }
    ctx->pc = 0x2A6654u;
    {
        const bool branch_taken_0x2a6654 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6654) {
            ctx->pc = 0x2A6658u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6654u;
            // 0x2a6658: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A6680u;
            goto label_2a6680;
        }
    }
    ctx->pc = 0x2A665Cu;
label_2a665c:
    // 0x2a665c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2a665cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_2a6660:
    // 0x2a6660: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2a6660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_2a6664:
    // 0x2a6664: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x2a6664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
label_2a6668:
    // 0x2a6668: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2a6668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2a666c:
    // 0x2a666c: 0xc049e92  jal         func_127A48
label_2a6670:
    if (ctx->pc == 0x2A6670u) {
        ctx->pc = 0x2A6670u;
            // 0x2a6670: 0x24a50fc0  addiu       $a1, $a1, 0xFC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4032));
        ctx->pc = 0x2A6674u;
        goto label_2a6674;
    }
    ctx->pc = 0x2A666Cu;
    SET_GPR_U32(ctx, 31, 0x2A6674u);
    ctx->pc = 0x2A6670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A666Cu;
            // 0x2a6670: 0x24a50fc0  addiu       $a1, $a1, 0xFC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6674u; }
        if (ctx->pc != 0x2A6674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6674u; }
        if (ctx->pc != 0x2A6674u) { return; }
    }
    ctx->pc = 0x2A6674u;
label_2a6674:
    // 0x2a6674: 0xc04981a  jal         func_126068
label_2a6678:
    if (ctx->pc == 0x2A6678u) {
        ctx->pc = 0x2A667Cu;
        goto label_2a667c;
    }
    ctx->pc = 0x2A6674u;
    SET_GPR_U32(ctx, 31, 0x2A667Cu);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A667Cu; }
        if (ctx->pc != 0x2A667Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A667Cu; }
        if (ctx->pc != 0x2A667Cu) { return; }
    }
    ctx->pc = 0x2A667Cu;
label_2a667c:
    // 0x2a667c: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x2a667cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2a6680:
    // 0x2a6680: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2a6680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2a6684:
    // 0x2a6684: 0x948021  addu        $s0, $a0, $s4
    ctx->pc = 0x2a6684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_2a6688:
    // 0x2a6688: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x2a6688u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2a668c:
    // 0x2a668c: 0x54200030  bnel        $at, $zero, . + 4 + (0x30 << 2)
label_2a6690:
    if (ctx->pc == 0x2A6690u) {
        ctx->pc = 0x2A6690u;
            // 0x2a6690: 0x8eb10008  lw          $s1, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->pc = 0x2A6694u;
        goto label_2a6694;
    }
    ctx->pc = 0x2A668Cu;
    {
        const bool branch_taken_0x2a668c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a668c) {
            ctx->pc = 0x2A6690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A668Cu;
            // 0x2a6690: 0x8eb10008  lw          $s1, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A6750u;
            goto label_2a6750;
        }
    }
    ctx->pc = 0x2A6694u;
label_2a6694:
    // 0x2a6694: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x2a6694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_2a6698:
    // 0x2a6698: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2a6698u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2a669c:
    // 0x2a669c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2a669cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2a66a0:
    // 0x2a66a0: 0xb21823  subu        $v1, $a1, $s2
    ctx->pc = 0x2a66a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_2a66a4:
    // 0x2a66a4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_2a66a8:
    if (ctx->pc == 0x2A66A8u) {
        ctx->pc = 0x2A66A8u;
            // 0x2a66a8: 0x32083  sra         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
        ctx->pc = 0x2A66ACu;
        goto label_2a66ac;
    }
    ctx->pc = 0x2A66A4u;
    {
        const bool branch_taken_0x2a66a4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2A66A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A66A4u;
            // 0x2a66a8: 0x32083  sra         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a66a4) {
            ctx->pc = 0x2A66B4u;
            goto label_2a66b4;
        }
    }
    ctx->pc = 0x2A66ACu;
label_2a66ac:
    // 0x2a66ac: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x2a66acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_2a66b0:
    // 0x2a66b0: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x2a66b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
label_2a66b4:
    // 0x2a66b4: 0x941823  subu        $v1, $a0, $s4
    ctx->pc = 0x2a66b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_2a66b8:
    // 0x2a66b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a66b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2a66bc:
    // 0x2a66bc: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x2a66bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2a66c0:
    // 0x2a66c0: 0x263082b  sltu        $at, $s3, $v1
    ctx->pc = 0x2a66c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2a66c4:
    // 0x2a66c4: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_2a66c8:
    if (ctx->pc == 0x2A66C8u) {
        ctx->pc = 0x2A66CCu;
        goto label_2a66cc;
    }
    ctx->pc = 0x2A66C4u;
    {
        const bool branch_taken_0x2a66c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a66c4) {
            ctx->pc = 0x2A66E0u;
            goto label_2a66e0;
        }
    }
    ctx->pc = 0x2A66CCu;
label_2a66cc:
    // 0x2a66cc: 0x265082b  sltu        $at, $s3, $a1
    ctx->pc = 0x2a66ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2a66d0:
    // 0x2a66d0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2a66d4:
    if (ctx->pc == 0x2A66D4u) {
        ctx->pc = 0x2A66D8u;
        goto label_2a66d8;
    }
    ctx->pc = 0x2A66D0u;
    {
        const bool branch_taken_0x2a66d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a66d0) {
            ctx->pc = 0x2A66E0u;
            goto label_2a66e0;
        }
    }
    ctx->pc = 0x2A66D8u;
label_2a66d8:
    // 0x2a66d8: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x2a66d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_2a66dc:
    // 0x2a66dc: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x2a66dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_2a66e0:
    // 0x2a66e0: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_2a66e4:
    if (ctx->pc == 0x2A66E4u) {
        ctx->pc = 0x2A66E8u;
        goto label_2a66e8;
    }
    ctx->pc = 0x2A66E0u;
    {
        const bool branch_taken_0x2a66e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a66e0) {
            ctx->pc = 0x2A6718u;
            goto label_2a6718;
        }
    }
    ctx->pc = 0x2A66E8u;
label_2a66e8:
    // 0x2a66e8: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x2a66e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_2a66ec:
    // 0x2a66ec: 0x245082b  sltu        $at, $s2, $a1
    ctx->pc = 0x2a66ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2a66f0:
    // 0x2a66f0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_2a66f4:
    if (ctx->pc == 0x2A66F4u) {
        ctx->pc = 0x2A66F4u;
            // 0x2a66f4: 0xa32021  addu        $a0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->pc = 0x2A66F8u;
        goto label_2a66f8;
    }
    ctx->pc = 0x2A66F0u;
    {
        const bool branch_taken_0x2a66f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A66F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A66F0u;
            // 0x2a66f4: 0xa32021  addu        $a0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a66f0) {
            ctx->pc = 0x2A6718u;
            goto label_2a6718;
        }
    }
    ctx->pc = 0x2A66F8u;
label_2a66f8:
    // 0x2a66f8: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x2a66f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
label_2a66fc:
    // 0x2a66fc: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x2a66fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_2a6700:
    // 0x2a6700: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a6700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a6704:
    // 0x2a6704: 0x245082b  sltu        $at, $s2, $a1
    ctx->pc = 0x2a6704u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2a6708:
    // 0x2a6708: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2a6708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2a670c:
    // 0x2a670c: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
label_2a6710:
    if (ctx->pc == 0x2A6710u) {
        ctx->pc = 0x2A6714u;
        goto label_2a6714;
    }
    ctx->pc = 0x2A670Cu;
    {
        const bool branch_taken_0x2a670c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a670c) {
            ctx->pc = 0x2A66F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a66f8;
        }
    }
    ctx->pc = 0x2A6714u;
label_2a6714:
    // 0x2a6714: 0x0  nop
    ctx->pc = 0x2a6714u;
    // NOP
label_2a6718:
    // 0x2a6718: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_2a671c:
    if (ctx->pc == 0x2A671Cu) {
        ctx->pc = 0x2A671Cu;
            // 0x2a671c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A6720u;
        goto label_2a6720;
    }
    ctx->pc = 0x2A6718u;
    {
        const bool branch_taken_0x2a6718 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A671Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6718u;
            // 0x2a671c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6718) {
            ctx->pc = 0x2A6740u;
            goto label_2a6740;
        }
    }
    ctx->pc = 0x2A6720u;
label_2a6720:
    // 0x2a6720: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a6720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a6724:
    // 0x2a6724: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2a6724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2a6728:
    // 0x2a6728: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2a6728u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2a672c:
    // 0x2a672c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2a672cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2a6730:
    // 0x2a6730: 0x0  nop
    ctx->pc = 0x2a6730u;
    // NOP
label_2a6734:
    // 0x2a6734: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_2a6738:
    if (ctx->pc == 0x2A6738u) {
        ctx->pc = 0x2A673Cu;
        goto label_2a673c;
    }
    ctx->pc = 0x2A6734u;
    {
        const bool branch_taken_0x2a6734 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a6734) {
            ctx->pc = 0x2A6720u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a6720;
        }
    }
    ctx->pc = 0x2A673Cu;
label_2a673c:
    // 0x2a673c: 0x0  nop
    ctx->pc = 0x2a673cu;
    // NOP
label_2a6740:
    // 0x2a6740: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x2a6740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2a6744:
    // 0x2a6744: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2a6744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2a6748:
    // 0x2a6748: 0x100000bb  b           . + 4 + (0xBB << 2)
label_2a674c:
    if (ctx->pc == 0x2A674Cu) {
        ctx->pc = 0x2A674Cu;
            // 0x2a674c: 0xaea30004  sw          $v1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x2A6750u;
        goto label_2a6750;
    }
    ctx->pc = 0x2A6748u;
    {
        const bool branch_taken_0x2a6748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A674Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6748u;
            // 0x2a674c: 0xaea30004  sw          $v1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6748) {
            ctx->pc = 0x2A6A38u;
            goto label_2a6a38;
        }
    }
    ctx->pc = 0x2A6750u;
label_2a6750:
    // 0x2a6750: 0x2511023  subu        $v0, $s2, $s1
    ctx->pc = 0x2a6750u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_2a6754:
    // 0x2a6754: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_2a6758:
    if (ctx->pc == 0x2A6758u) {
        ctx->pc = 0x2A6758u;
            // 0x2a6758: 0x2f083  sra         $fp, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 2), 2));
        ctx->pc = 0x2A675Cu;
        goto label_2a675c;
    }
    ctx->pc = 0x2A6754u;
    {
        const bool branch_taken_0x2a6754 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2A6758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6754u;
            // 0x2a6758: 0x2f083  sra         $fp, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6754) {
            ctx->pc = 0x2A6764u;
            goto label_2a6764;
        }
    }
    ctx->pc = 0x2A675Cu;
label_2a675c:
    // 0x2a675c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2a675cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_2a6760:
    // 0x2a6760: 0x2f083  sra         $fp, $v0, 2
    ctx->pc = 0x2a6760u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 2), 2));
label_2a6764:
    // 0x2a6764: 0x8eb20000  lw          $s2, 0x0($s5)
    ctx->pc = 0x2a6764u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2a6768:
    // 0x2a6768: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
label_2a676c:
    if (ctx->pc == 0x2A676Cu) {
        ctx->pc = 0x2A676Cu;
            // 0x2a676c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A6770u;
        goto label_2a6770;
    }
    ctx->pc = 0x2A6768u;
    {
        const bool branch_taken_0x2a6768 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6768) {
            ctx->pc = 0x2A676Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6768u;
            // 0x2a676c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A6770u;
            goto label_2a6770;
        }
    }
    ctx->pc = 0x2A6770u;
label_2a6770:
    // 0x2a6770: 0x250082b  sltu        $at, $s2, $s0
    ctx->pc = 0x2a6770u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2a6774:
    // 0x2a6774: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_2a6778:
    if (ctx->pc == 0x2A6778u) {
        ctx->pc = 0x2A677Cu;
        goto label_2a677c;
    }
    ctx->pc = 0x2A6774u;
    {
        const bool branch_taken_0x2a6774 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6774) {
            ctx->pc = 0x2A67B8u;
            goto label_2a67b8;
        }
    }
    ctx->pc = 0x2A677Cu;
label_2a677c:
    // 0x2a677c: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x2a677cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
label_2a6780:
    // 0x2a6780: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a6780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2a6784:
    // 0x2a6784: 0x3c011fff  lui         $at, 0x1FFF
    ctx->pc = 0x2a6784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8191 << 16));
label_2a6788:
    // 0x2a6788: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x2a6788u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_2a678c:
    // 0x2a678c: 0x241082b  sltu        $at, $s2, $at
    ctx->pc = 0x2a678cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_2a6790:
    // 0x2a6790: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2a6794:
    if (ctx->pc == 0x2A6794u) {
        ctx->pc = 0x2A6798u;
        goto label_2a6798;
    }
    ctx->pc = 0x2A6790u;
    {
        const bool branch_taken_0x2a6790 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6790) {
            ctx->pc = 0x2A67A0u;
            goto label_2a67a0;
        }
    }
    ctx->pc = 0x2A6798u;
label_2a6798:
    // 0x2a6798: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a679c:
    if (ctx->pc == 0x2A679Cu) {
        ctx->pc = 0x2A679Cu;
            // 0x2a679c: 0x129040  sll         $s2, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x2A67A0u;
        goto label_2a67a0;
    }
    ctx->pc = 0x2A6798u;
    {
        const bool branch_taken_0x2a6798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A679Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6798u;
            // 0x2a679c: 0x129040  sll         $s2, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6798) {
            ctx->pc = 0x2A67A8u;
            goto label_2a67a8;
        }
    }
    ctx->pc = 0x2A67A0u;
label_2a67a0:
    // 0x2a67a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a67a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a67a4:
    // 0x2a67a4: 0x0  nop
    ctx->pc = 0x2a67a4u;
    // NOP
label_2a67a8:
    // 0x2a67a8: 0x250082b  sltu        $at, $s2, $s0
    ctx->pc = 0x2a67a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2a67ac:
    // 0x2a67ac: 0x5420fff6  bnel        $at, $zero, . + 4 + (-0xA << 2)
label_2a67b0:
    if (ctx->pc == 0x2A67B0u) {
        ctx->pc = 0x2A67B0u;
            // 0x2a67b0: 0x3c011fff  lui         $at, 0x1FFF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8191 << 16));
        ctx->pc = 0x2A67B4u;
        goto label_2a67b4;
    }
    ctx->pc = 0x2A67ACu;
    {
        const bool branch_taken_0x2a67ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a67ac) {
            ctx->pc = 0x2A67B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A67ACu;
            // 0x2a67b0: 0x3c011fff  lui         $at, 0x1FFF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8191 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A6788u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a6788;
        }
    }
    ctx->pc = 0x2A67B4u;
label_2a67b4:
    // 0x2a67b4: 0x0  nop
    ctx->pc = 0x2a67b4u;
    // NOP
label_2a67b8:
    // 0x2a67b8: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x2a67b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2a67bc:
    // 0x2a67bc: 0xc040180  jal         func_100600
label_2a67c0:
    if (ctx->pc == 0x2A67C0u) {
        ctx->pc = 0x2A67C0u;
            // 0x2a67c0: 0x26b60008  addiu       $s6, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->pc = 0x2A67C4u;
        goto label_2a67c4;
    }
    ctx->pc = 0x2A67BCu;
    SET_GPR_U32(ctx, 31, 0x2A67C4u);
    ctx->pc = 0x2A67C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A67BCu;
            // 0x2a67c0: 0x26b60008  addiu       $s6, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A67C4u; }
        if (ctx->pc != 0x2A67C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A67C4u; }
        if (ctx->pc != 0x2A67C4u) { return; }
    }
    ctx->pc = 0x2A67C4u;
label_2a67c4:
    // 0x2a67c4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2a67c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a67c8:
    // 0x2a67c8: 0x56e0000a  bnel        $s7, $zero, . + 4 + (0xA << 2)
label_2a67cc:
    if (ctx->pc == 0x2A67CCu) {
        ctx->pc = 0x2A67CCu;
            // 0x2a67cc: 0xaed70000  sw          $s7, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 23));
        ctx->pc = 0x2A67D0u;
        goto label_2a67d0;
    }
    ctx->pc = 0x2A67C8u;
    {
        const bool branch_taken_0x2a67c8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a67c8) {
            ctx->pc = 0x2A67CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A67C8u;
            // 0x2a67cc: 0xaed70000  sw          $s7, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A67F4u;
            goto label_2a67f4;
        }
    }
    ctx->pc = 0x2A67D0u;
label_2a67d0:
    // 0x2a67d0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2a67d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_2a67d4:
    // 0x2a67d4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2a67d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_2a67d8:
    // 0x2a67d8: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x2a67d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
label_2a67dc:
    // 0x2a67dc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2a67dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2a67e0:
    // 0x2a67e0: 0xc049e92  jal         func_127A48
label_2a67e4:
    if (ctx->pc == 0x2A67E4u) {
        ctx->pc = 0x2A67E4u;
            // 0x2a67e4: 0x24a5c870  addiu       $a1, $a1, -0x3790 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953072));
        ctx->pc = 0x2A67E8u;
        goto label_2a67e8;
    }
    ctx->pc = 0x2A67E0u;
    SET_GPR_U32(ctx, 31, 0x2A67E8u);
    ctx->pc = 0x2A67E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A67E0u;
            // 0x2a67e4: 0x24a5c870  addiu       $a1, $a1, -0x3790 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A67E8u; }
        if (ctx->pc != 0x2A67E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A67E8u; }
        if (ctx->pc != 0x2A67E8u) { return; }
    }
    ctx->pc = 0x2A67E8u;
label_2a67e8:
    // 0x2a67e8: 0xc04981a  jal         func_126068
label_2a67ec:
    if (ctx->pc == 0x2A67ECu) {
        ctx->pc = 0x2A67F0u;
        goto label_2a67f0;
    }
    ctx->pc = 0x2A67E8u;
    SET_GPR_U32(ctx, 31, 0x2A67F0u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A67F0u; }
        if (ctx->pc != 0x2A67F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A67F0u; }
        if (ctx->pc != 0x2A67F0u) { return; }
    }
    ctx->pc = 0x2A67F0u;
label_2a67f0:
    // 0x2a67f0: 0xaed70000  sw          $s7, 0x0($s6)
    ctx->pc = 0x2a67f0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 23));
label_2a67f4:
    // 0x2a67f4: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x2a67f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_2a67f8:
    // 0x2a67f8: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x2a67f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_2a67fc:
    // 0x2a67fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2a67fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a6800:
    // 0x2a6800: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_2a6804:
    if (ctx->pc == 0x2A6804u) {
        ctx->pc = 0x2A6804u;
            // 0x2a6804: 0x833021  addu        $a2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x2A6808u;
        goto label_2a6808;
    }
    ctx->pc = 0x2A6800u;
    {
        const bool branch_taken_0x2a6800 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6800u;
            // 0x2a6804: 0x833021  addu        $a2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6800) {
            ctx->pc = 0x2A6828u;
            goto label_2a6828;
        }
    }
    ctx->pc = 0x2A6808u;
label_2a6808:
    // 0x2a6808: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2a6808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a680c:
    // 0x2a680c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2a680cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_2a6810:
    // 0x2a6810: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x2a6810u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_2a6814:
    // 0x2a6814: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2a6814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_2a6818:
    // 0x2a6818: 0x0  nop
    ctx->pc = 0x2a6818u;
    // NOP
label_2a681c:
    // 0x2a681c: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
label_2a6820:
    if (ctx->pc == 0x2A6820u) {
        ctx->pc = 0x2A6824u;
        goto label_2a6824;
    }
    ctx->pc = 0x2A681Cu;
    {
        const bool branch_taken_0x2a681c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a681c) {
            ctx->pc = 0x2A6808u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a6808;
        }
    }
    ctx->pc = 0x2A6824u;
label_2a6824:
    // 0x2a6824: 0x0  nop
    ctx->pc = 0x2a6824u;
    // NOP
label_2a6828:
    // 0x2a6828: 0x52200082  beql        $s1, $zero, . + 4 + (0x82 << 2)
label_2a682c:
    if (ctx->pc == 0x2A682Cu) {
        ctx->pc = 0x2A682Cu;
            // 0x2a682c: 0xaeb00004  sw          $s0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 16));
        ctx->pc = 0x2A6830u;
        goto label_2a6830;
    }
    ctx->pc = 0x2A6828u;
    {
        const bool branch_taken_0x2a6828 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6828) {
            ctx->pc = 0x2A682Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6828u;
            // 0x2a682c: 0xaeb00004  sw          $s0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A6A34u;
            goto label_2a6a34;
        }
    }
    ctx->pc = 0x2A6830u;
label_2a6830:
    // 0x2a6830: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x2a6830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_2a6834:
    // 0x2a6834: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x2a6834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_2a6838:
    // 0x2a6838: 0x224082b  sltu        $at, $s1, $a0
    ctx->pc = 0x2a6838u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2a683c:
    // 0x2a683c: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
label_2a6840:
    if (ctx->pc == 0x2A6840u) {
        ctx->pc = 0x2A6840u;
            // 0x2a6840: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A6844u;
        goto label_2a6844;
    }
    ctx->pc = 0x2A683Cu;
    {
        const bool branch_taken_0x2a683c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A683Cu;
            // 0x2a6840: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a683c) {
            ctx->pc = 0x2A6920u;
            goto label_2a6920;
        }
    }
    ctx->pc = 0x2A6844u;
label_2a6844:
    // 0x2a6844: 0x24690003  addiu       $t1, $v1, 0x3
    ctx->pc = 0x2a6844u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_2a6848:
    // 0x2a6848: 0x2482ffe0  addiu       $v0, $a0, -0x20
    ctx->pc = 0x2a6848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
label_2a684c:
    // 0x2a684c: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
label_2a6850:
    if (ctx->pc == 0x2A6850u) {
        ctx->pc = 0x2A6850u;
            // 0x2a6850: 0x93883  sra         $a3, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 9), 2));
        ctx->pc = 0x2A6854u;
        goto label_2a6854;
    }
    ctx->pc = 0x2A684Cu;
    {
        const bool branch_taken_0x2a684c = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x2A6850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A684Cu;
            // 0x2a6850: 0x93883  sra         $a3, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a684c) {
            ctx->pc = 0x2A685Cu;
            goto label_2a685c;
        }
    }
    ctx->pc = 0x2A6854u;
label_2a6854:
    // 0x2a6854: 0x25270003  addiu       $a3, $t1, 0x3
    ctx->pc = 0x2a6854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
label_2a6858:
    // 0x2a6858: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x2a6858u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
label_2a685c:
    // 0x2a685c: 0x28e10009  slti        $at, $a3, 0x9
    ctx->pc = 0x2a685cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
label_2a6860:
    // 0x2a6860: 0x14200025  bnez        $at, . + 4 + (0x25 << 2)
label_2a6864:
    if (ctx->pc == 0x2A6864u) {
        ctx->pc = 0x2A6868u;
        goto label_2a6868;
    }
    ctx->pc = 0x2A6860u;
    {
        const bool branch_taken_0x2a6860 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a6860) {
            ctx->pc = 0x2A68F8u;
            goto label_2a68f8;
        }
    }
    ctx->pc = 0x2A6868u;
label_2a6868:
    // 0x2a6868: 0x91082b  sltu        $at, $a0, $s1
    ctx->pc = 0x2a6868u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_2a686c:
    // 0x2a686c: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
label_2a6870:
    if (ctx->pc == 0x2A6870u) {
        ctx->pc = 0x2A6870u;
            // 0x2a6870: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A6874u;
        goto label_2a6874;
    }
    ctx->pc = 0x2A686Cu;
    {
        const bool branch_taken_0x2a686c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A686Cu;
            // 0x2a6870: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a686c) {
            ctx->pc = 0x2A68A0u;
            goto label_2a68a0;
        }
    }
    ctx->pc = 0x2A6874u;
label_2a6874:
    // 0x2a6874: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x2a6874u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
label_2a6878:
    // 0x2a6878: 0x683824  and         $a3, $v1, $t0
    ctx->pc = 0x2a6878u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
label_2a687c:
    // 0x2a687c: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
label_2a6880:
    if (ctx->pc == 0x2A6880u) {
        ctx->pc = 0x2A6880u;
            // 0x2a6880: 0x640a0001  daddiu      $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x2A6884u;
        goto label_2a6884;
    }
    ctx->pc = 0x2A687Cu;
    {
        const bool branch_taken_0x2a687c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A687Cu;
            // 0x2a6880: 0x640a0001  daddiu      $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a687c) {
            ctx->pc = 0x2A6894u;
            goto label_2a6894;
        }
    }
    ctx->pc = 0x2A6884u;
label_2a6884:
    // 0x2a6884: 0x1283824  and         $a3, $t1, $t0
    ctx->pc = 0x2a6884u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
label_2a6888:
    // 0x2a6888: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
label_2a688c:
    if (ctx->pc == 0x2A688Cu) {
        ctx->pc = 0x2A6890u;
        goto label_2a6890;
    }
    ctx->pc = 0x2A6888u;
    {
        const bool branch_taken_0x2a6888 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6888) {
            ctx->pc = 0x2A6894u;
            goto label_2a6894;
        }
    }
    ctx->pc = 0x2A6890u;
label_2a6890:
    // 0x2a6890: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a6890u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a6894:
    // 0x2a6894: 0x11400002  beqz        $t2, . + 4 + (0x2 << 2)
label_2a6898:
    if (ctx->pc == 0x2A6898u) {
        ctx->pc = 0x2A689Cu;
        goto label_2a689c;
    }
    ctx->pc = 0x2A6894u;
    {
        const bool branch_taken_0x2a6894 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6894) {
            ctx->pc = 0x2A68A0u;
            goto label_2a68a0;
        }
    }
    ctx->pc = 0x2A689Cu;
label_2a689c:
    // 0x2a689c: 0x640b0001  daddiu      $t3, $zero, 0x1
    ctx->pc = 0x2a689cu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2a68a0:
    // 0x2a68a0: 0x11600015  beqz        $t3, . + 4 + (0x15 << 2)
label_2a68a4:
    if (ctx->pc == 0x2A68A4u) {
        ctx->pc = 0x2A68A8u;
        goto label_2a68a8;
    }
    ctx->pc = 0x2A68A0u;
    {
        const bool branch_taken_0x2a68a0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a68a0) {
            ctx->pc = 0x2A68F8u;
            goto label_2a68f8;
        }
    }
    ctx->pc = 0x2A68A8u;
label_2a68a8:
    // 0x2a68a8: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x2a68a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2a68ac:
    // 0x2a68ac: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x2a68acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_2a68b0:
    // 0x2a68b0: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x2a68b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2a68b4:
    // 0x2a68b4: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x2a68b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
label_2a68b8:
    // 0x2a68b8: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x2a68b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2a68bc:
    // 0x2a68bc: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x2a68bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
label_2a68c0:
    // 0x2a68c0: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x2a68c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_2a68c4:
    // 0x2a68c4: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x2a68c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
label_2a68c8:
    // 0x2a68c8: 0x8cc70010  lw          $a3, 0x10($a2)
    ctx->pc = 0x2a68c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_2a68cc:
    // 0x2a68cc: 0xaca70010  sw          $a3, 0x10($a1)
    ctx->pc = 0x2a68ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 7));
label_2a68d0:
    // 0x2a68d0: 0x8cc70014  lw          $a3, 0x14($a2)
    ctx->pc = 0x2a68d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_2a68d4:
    // 0x2a68d4: 0xaca70014  sw          $a3, 0x14($a1)
    ctx->pc = 0x2a68d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 7));
label_2a68d8:
    // 0x2a68d8: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x2a68d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_2a68dc:
    // 0x2a68dc: 0xaca70018  sw          $a3, 0x18($a1)
    ctx->pc = 0x2a68dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 7));
label_2a68e0:
    // 0x2a68e0: 0x8cc7001c  lw          $a3, 0x1C($a2)
    ctx->pc = 0x2a68e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_2a68e4:
    // 0x2a68e4: 0xaca7001c  sw          $a3, 0x1C($a1)
    ctx->pc = 0x2a68e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 7));
label_2a68e8:
    // 0x2a68e8: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2a68e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_2a68ec:
    // 0x2a68ec: 0xc2382b  sltu        $a3, $a2, $v0
    ctx->pc = 0x2a68ecu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a68f0:
    // 0x2a68f0: 0x14e0ffed  bnez        $a3, . + 4 + (-0x13 << 2)
label_2a68f4:
    if (ctx->pc == 0x2A68F4u) {
        ctx->pc = 0x2A68F4u;
            // 0x2a68f4: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->pc = 0x2A68F8u;
        goto label_2a68f8;
    }
    ctx->pc = 0x2A68F0u;
    {
        const bool branch_taken_0x2a68f0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A68F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A68F0u;
            // 0x2a68f4: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a68f0) {
            ctx->pc = 0x2A68A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a68a8;
        }
    }
    ctx->pc = 0x2A68F8u;
label_2a68f8:
    // 0x2a68f8: 0xc4082b  sltu        $at, $a2, $a0
    ctx->pc = 0x2a68f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2a68fc:
    // 0x2a68fc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_2a6900:
    if (ctx->pc == 0x2A6900u) {
        ctx->pc = 0x2A6904u;
        goto label_2a6904;
    }
    ctx->pc = 0x2A68FCu;
    {
        const bool branch_taken_0x2a68fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a68fc) {
            ctx->pc = 0x2A6920u;
            goto label_2a6920;
        }
    }
    ctx->pc = 0x2A6904u;
label_2a6904:
    // 0x2a6904: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2a6904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2a6908:
    // 0x2a6908: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2a6908u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2a690c:
    // 0x2a690c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2a690cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_2a6910:
    // 0x2a6910: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x2a6910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2a6914:
    // 0x2a6914: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2a6914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2a6918:
    // 0x2a6918: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_2a691c:
    if (ctx->pc == 0x2A691Cu) {
        ctx->pc = 0x2A6920u;
        goto label_2a6920;
    }
    ctx->pc = 0x2A6918u;
    {
        const bool branch_taken_0x2a6918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a6918) {
            ctx->pc = 0x2A6904u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a6904;
        }
    }
    ctx->pc = 0x2A6920u;
label_2a6920:
    // 0x2a6920: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x2a6920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2a6924:
    // 0x2a6924: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x2a6924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_2a6928:
    // 0x2a6928: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x2a6928u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_2a692c:
    // 0x2a692c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2a692cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2a6930:
    // 0x2a6930: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2a6930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a6934:
    // 0x2a6934: 0x2261021  addu        $v0, $s1, $a2
    ctx->pc = 0x2a6934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_2a6938:
    // 0x2a6938: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x2a6938u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a693c:
    // 0x2a693c: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
label_2a6940:
    if (ctx->pc == 0x2A6940u) {
        ctx->pc = 0x2A6940u;
            // 0x2a6940: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->pc = 0x2A6944u;
        goto label_2a6944;
    }
    ctx->pc = 0x2A693Cu;
    {
        const bool branch_taken_0x2a693c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A693Cu;
            // 0x2a6940: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a693c) {
            ctx->pc = 0x2A6A28u;
            goto label_2a6a28;
        }
    }
    ctx->pc = 0x2A6944u;
label_2a6944:
    // 0x2a6944: 0x444823  subu        $t1, $v0, $a0
    ctx->pc = 0x2a6944u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a6948:
    // 0x2a6948: 0x2447ffe0  addiu       $a3, $v0, -0x20
    ctx->pc = 0x2a6948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_2a694c:
    // 0x2a694c: 0x25280003  addiu       $t0, $t1, 0x3
    ctx->pc = 0x2a694cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
label_2a6950:
    // 0x2a6950: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
label_2a6954:
    if (ctx->pc == 0x2A6954u) {
        ctx->pc = 0x2A6954u;
            // 0x2a6954: 0x82883  sra         $a1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 8), 2));
        ctx->pc = 0x2A6958u;
        goto label_2a6958;
    }
    ctx->pc = 0x2A6950u;
    {
        const bool branch_taken_0x2a6950 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2A6954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6950u;
            // 0x2a6954: 0x82883  sra         $a1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6950) {
            ctx->pc = 0x2A6960u;
            goto label_2a6960;
        }
    }
    ctx->pc = 0x2A6958u;
label_2a6958:
    // 0x2a6958: 0x25050003  addiu       $a1, $t0, 0x3
    ctx->pc = 0x2a6958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_2a695c:
    // 0x2a695c: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x2a695cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
label_2a6960:
    // 0x2a6960: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x2a6960u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
label_2a6964:
    // 0x2a6964: 0x14200026  bnez        $at, . + 4 + (0x26 << 2)
label_2a6968:
    if (ctx->pc == 0x2A6968u) {
        ctx->pc = 0x2A696Cu;
        goto label_2a696c;
    }
    ctx->pc = 0x2A6964u;
    {
        const bool branch_taken_0x2a6964 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a6964) {
            ctx->pc = 0x2A6A00u;
            goto label_2a6a00;
        }
    }
    ctx->pc = 0x2A696Cu;
label_2a696c:
    // 0x2a696c: 0x44082b  sltu        $at, $v0, $a0
    ctx->pc = 0x2a696cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2a6970:
    // 0x2a6970: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
label_2a6974:
    if (ctx->pc == 0x2A6974u) {
        ctx->pc = 0x2A6974u;
            // 0x2a6974: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A6978u;
        goto label_2a6978;
    }
    ctx->pc = 0x2A6970u;
    {
        const bool branch_taken_0x2a6970 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6970u;
            // 0x2a6974: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6970) {
            ctx->pc = 0x2A69A4u;
            goto label_2a69a4;
        }
    }
    ctx->pc = 0x2A6978u;
label_2a6978:
    // 0x2a6978: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x2a6978u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_2a697c:
    // 0x2a697c: 0x1262824  and         $a1, $t1, $a2
    ctx->pc = 0x2a697cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 6));
label_2a6980:
    // 0x2a6980: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
label_2a6984:
    if (ctx->pc == 0x2A6984u) {
        ctx->pc = 0x2A6984u;
            // 0x2a6984: 0x640a0001  daddiu      $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x2A6988u;
        goto label_2a6988;
    }
    ctx->pc = 0x2A6980u;
    {
        const bool branch_taken_0x2a6980 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6980u;
            // 0x2a6984: 0x640a0001  daddiu      $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6980) {
            ctx->pc = 0x2A6998u;
            goto label_2a6998;
        }
    }
    ctx->pc = 0x2A6988u;
label_2a6988:
    // 0x2a6988: 0x1062824  and         $a1, $t0, $a2
    ctx->pc = 0x2a6988u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
label_2a698c:
    // 0x2a698c: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_2a6990:
    if (ctx->pc == 0x2A6990u) {
        ctx->pc = 0x2A6994u;
        goto label_2a6994;
    }
    ctx->pc = 0x2A698Cu;
    {
        const bool branch_taken_0x2a698c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a698c) {
            ctx->pc = 0x2A6998u;
            goto label_2a6998;
        }
    }
    ctx->pc = 0x2A6994u;
label_2a6994:
    // 0x2a6994: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a6994u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a6998:
    // 0x2a6998: 0x11400002  beqz        $t2, . + 4 + (0x2 << 2)
label_2a699c:
    if (ctx->pc == 0x2A699Cu) {
        ctx->pc = 0x2A69A0u;
        goto label_2a69a0;
    }
    ctx->pc = 0x2A6998u;
    {
        const bool branch_taken_0x2a6998 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6998) {
            ctx->pc = 0x2A69A4u;
            goto label_2a69a4;
        }
    }
    ctx->pc = 0x2A69A0u;
label_2a69a0:
    // 0x2a69a0: 0x640b0001  daddiu      $t3, $zero, 0x1
    ctx->pc = 0x2a69a0u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2a69a4:
    // 0x2a69a4: 0x11600016  beqz        $t3, . + 4 + (0x16 << 2)
label_2a69a8:
    if (ctx->pc == 0x2A69A8u) {
        ctx->pc = 0x2A69ACu;
        goto label_2a69ac;
    }
    ctx->pc = 0x2A69A4u;
    {
        const bool branch_taken_0x2a69a4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a69a4) {
            ctx->pc = 0x2A6A00u;
            goto label_2a6a00;
        }
    }
    ctx->pc = 0x2A69ACu;
label_2a69ac:
    // 0x2a69ac: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2a69acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a69b0:
    // 0x2a69b0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x2a69b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_2a69b4:
    // 0x2a69b4: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x2a69b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2a69b8:
    // 0x2a69b8: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x2a69b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_2a69bc:
    // 0x2a69bc: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x2a69bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2a69c0:
    // 0x2a69c0: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x2a69c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_2a69c4:
    // 0x2a69c4: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x2a69c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2a69c8:
    // 0x2a69c8: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x2a69c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
label_2a69cc:
    // 0x2a69cc: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x2a69ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2a69d0:
    // 0x2a69d0: 0xac650010  sw          $a1, 0x10($v1)
    ctx->pc = 0x2a69d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
label_2a69d4:
    // 0x2a69d4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x2a69d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2a69d8:
    // 0x2a69d8: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x2a69d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
label_2a69dc:
    // 0x2a69dc: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x2a69dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2a69e0:
    // 0x2a69e0: 0xac650018  sw          $a1, 0x18($v1)
    ctx->pc = 0x2a69e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
label_2a69e4:
    // 0x2a69e4: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x2a69e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_2a69e8:
    // 0x2a69e8: 0xac65001c  sw          $a1, 0x1C($v1)
    ctx->pc = 0x2a69e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 5));
label_2a69ec:
    // 0x2a69ec: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2a69ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_2a69f0:
    // 0x2a69f0: 0x87282b  sltu        $a1, $a0, $a3
    ctx->pc = 0x2a69f0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_2a69f4:
    // 0x2a69f4: 0x14a0ffed  bnez        $a1, . + 4 + (-0x13 << 2)
label_2a69f8:
    if (ctx->pc == 0x2A69F8u) {
        ctx->pc = 0x2A69F8u;
            // 0x2a69f8: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->pc = 0x2A69FCu;
        goto label_2a69fc;
    }
    ctx->pc = 0x2A69F4u;
    {
        const bool branch_taken_0x2a69f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A69F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A69F4u;
            // 0x2a69f8: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a69f4) {
            ctx->pc = 0x2A69ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a69ac;
        }
    }
    ctx->pc = 0x2A69FCu;
label_2a69fc:
    // 0x2a69fc: 0x0  nop
    ctx->pc = 0x2a69fcu;
    // NOP
label_2a6a00:
    // 0x2a6a00: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x2a6a00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a6a04:
    // 0x2a6a04: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_2a6a08:
    if (ctx->pc == 0x2A6A08u) {
        ctx->pc = 0x2A6A0Cu;
        goto label_2a6a0c;
    }
    ctx->pc = 0x2A6A04u;
    {
        const bool branch_taken_0x2a6a04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6a04) {
            ctx->pc = 0x2A6A28u;
            goto label_2a6a28;
        }
    }
    ctx->pc = 0x2A6A0Cu;
label_2a6a0c:
    // 0x2a6a0c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2a6a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a6a10:
    // 0x2a6a10: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x2a6a10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_2a6a14:
    // 0x2a6a14: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2a6a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2a6a18:
    // 0x2a6a18: 0x82282b  sltu        $a1, $a0, $v0
    ctx->pc = 0x2a6a18u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a6a1c:
    // 0x2a6a1c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2a6a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2a6a20:
    // 0x2a6a20: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
label_2a6a24:
    if (ctx->pc == 0x2A6A24u) {
        ctx->pc = 0x2A6A28u;
        goto label_2a6a28;
    }
    ctx->pc = 0x2A6A20u;
    {
        const bool branch_taken_0x2a6a20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a6a20) {
            ctx->pc = 0x2A6A0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a6a0c;
        }
    }
    ctx->pc = 0x2A6A28u;
label_2a6a28:
    // 0x2a6a28: 0xc0400a8  jal         func_1002A0
label_2a6a2c:
    if (ctx->pc == 0x2A6A2Cu) {
        ctx->pc = 0x2A6A2Cu;
            // 0x2a6a2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A6A30u;
        goto label_2a6a30;
    }
    ctx->pc = 0x2A6A28u;
    SET_GPR_U32(ctx, 31, 0x2A6A30u);
    ctx->pc = 0x2A6A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6A28u;
            // 0x2a6a2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6A30u; }
        if (ctx->pc != 0x2A6A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6A30u; }
        if (ctx->pc != 0x2A6A30u) { return; }
    }
    ctx->pc = 0x2A6A30u;
label_2a6a30:
    // 0x2a6a30: 0xaeb00004  sw          $s0, 0x4($s5)
    ctx->pc = 0x2a6a30u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 16));
label_2a6a34:
    // 0x2a6a34: 0xaeb20000  sw          $s2, 0x0($s5)
    ctx->pc = 0x2a6a34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 18));
label_2a6a38:
    // 0x2a6a38: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2a6a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2a6a3c:
    // 0x2a6a3c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2a6a3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2a6a40:
    // 0x2a6a40: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2a6a40u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2a6a44:
    // 0x2a6a44: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a6a44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2a6a48:
    // 0x2a6a48: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a6a48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2a6a4c:
    // 0x2a6a4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a6a4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2a6a50:
    // 0x2a6a50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a6a50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a6a54:
    // 0x2a6a54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a6a54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a6a58:
    // 0x2a6a58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a6a58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a6a5c:
    // 0x2a6a5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a6a5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a6a60:
    // 0x2a6a60: 0x3e00008  jr          $ra
label_2a6a64:
    if (ctx->pc == 0x2A6A64u) {
        ctx->pc = 0x2A6A64u;
            // 0x2a6a64: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2A6A68u;
        goto label_2a6a68;
    }
    ctx->pc = 0x2A6A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6A60u;
            // 0x2a6a64: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6A68u;
label_2a6a68:
    // 0x2a6a68: 0x0  nop
    ctx->pc = 0x2a6a68u;
    // NOP
label_2a6a6c:
    // 0x2a6a6c: 0x0  nop
    ctx->pc = 0x2a6a6cu;
    // NOP
label_2a6a70:
    // 0x2a6a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a6a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a6a74:
    // 0x2a6a74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a6a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a6a78:
    // 0x2a6a78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a6a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a6a7c:
    // 0x2a6a7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a6a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a6a80:
    // 0x2a6a80: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_2a6a84:
    if (ctx->pc == 0x2A6A84u) {
        ctx->pc = 0x2A6A84u;
            // 0x2a6a84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A6A88u;
        goto label_2a6a88;
    }
    ctx->pc = 0x2A6A80u;
    {
        const bool branch_taken_0x2a6a80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6a80) {
            ctx->pc = 0x2A6A84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6A80u;
            // 0x2a6a84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A6AC0u;
            goto label_2a6ac0;
        }
    }
    ctx->pc = 0x2A6A88u;
label_2a6a88:
    // 0x2a6a88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a6a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2a6a8c:
    // 0x2a6a8c: 0x2442fbb0  addiu       $v0, $v0, -0x450
    ctx->pc = 0x2a6a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966192));
label_2a6a90:
    // 0x2a6a90: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2a6a94:
    if (ctx->pc == 0x2A6A94u) {
        ctx->pc = 0x2A6A94u;
            // 0x2a6a94: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2A6A98u;
        goto label_2a6a98;
    }
    ctx->pc = 0x2A6A90u;
    {
        const bool branch_taken_0x2a6a90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6A90u;
            // 0x2a6a94: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6a90) {
            ctx->pc = 0x2A6AA4u;
            goto label_2a6aa4;
        }
    }
    ctx->pc = 0x2A6A98u;
label_2a6a98:
    // 0x2a6a98: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a6a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2a6a9c:
    // 0x2a6a9c: 0x2442fb70  addiu       $v0, $v0, -0x490
    ctx->pc = 0x2a6a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966128));
label_2a6aa0:
    // 0x2a6aa0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a6aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2a6aa4:
    // 0x2a6aa4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2a6aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_2a6aa8:
    // 0x2a6aa8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a6aa8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2a6aac:
    // 0x2a6aac: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_2a6ab0:
    if (ctx->pc == 0x2A6AB0u) {
        ctx->pc = 0x2A6AB4u;
        goto label_2a6ab4;
    }
    ctx->pc = 0x2A6AACu;
    {
        const bool branch_taken_0x2a6aac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a6aac) {
            ctx->pc = 0x2A6ABCu;
            goto label_2a6abc;
        }
    }
    ctx->pc = 0x2A6AB4u;
label_2a6ab4:
    // 0x2a6ab4: 0xc0400a8  jal         func_1002A0
label_2a6ab8:
    if (ctx->pc == 0x2A6AB8u) {
        ctx->pc = 0x2A6AB8u;
            // 0x2a6ab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A6ABCu;
        goto label_2a6abc;
    }
    ctx->pc = 0x2A6AB4u;
    SET_GPR_U32(ctx, 31, 0x2A6ABCu);
    ctx->pc = 0x2A6AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6AB4u;
            // 0x2a6ab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6ABCu; }
        if (ctx->pc != 0x2A6ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6ABCu; }
        if (ctx->pc != 0x2A6ABCu) { return; }
    }
    ctx->pc = 0x2A6ABCu;
label_2a6abc:
    // 0x2a6abc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a6abcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a6ac0:
    // 0x2a6ac0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a6ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a6ac4:
    // 0x2a6ac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a6ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a6ac8:
    // 0x2a6ac8: 0x3e00008  jr          $ra
label_2a6acc:
    if (ctx->pc == 0x2A6ACCu) {
        ctx->pc = 0x2A6ACCu;
            // 0x2a6acc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2A6AD0u;
        goto label_2a6ad0;
    }
    ctx->pc = 0x2A6AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6AC8u;
            // 0x2a6acc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6AD0u;
label_2a6ad0:
    // 0x2a6ad0: 0x3e00008  jr          $ra
label_2a6ad4:
    if (ctx->pc == 0x2A6AD4u) {
        ctx->pc = 0x2A6AD4u;
            // 0x2a6ad4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2A6AD8u;
        goto label_2a6ad8;
    }
    ctx->pc = 0x2A6AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6AD0u;
            // 0x2a6ad4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6AD8u;
label_2a6ad8:
    // 0x2a6ad8: 0x0  nop
    ctx->pc = 0x2a6ad8u;
    // NOP
label_2a6adc:
    // 0x2a6adc: 0x0  nop
    ctx->pc = 0x2a6adcu;
    // NOP
label_2a6ae0:
    // 0x2a6ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a6ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a6ae4:
    // 0x2a6ae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a6ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a6ae8:
    // 0x2a6ae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a6ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a6aec:
    // 0x2a6aec: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x2a6aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_2a6af0:
    // 0x2a6af0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a6af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a6af4:
    // 0x2a6af4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a6af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6af8:
    // 0x2a6af8: 0xe4800060  swc1        $f0, 0x60($a0)
    ctx->pc = 0x2a6af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
label_2a6afc:
    // 0x2a6afc: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x2a6afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_2a6b00:
    // 0x2a6b00: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a6b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6b04:
    // 0x2a6b04: 0xe4800064  swc1        $f0, 0x64($a0)
    ctx->pc = 0x2a6b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
label_2a6b08:
    // 0x2a6b08: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x2a6b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2a6b0c:
    // 0x2a6b0c: 0xc04cc04  jal         func_133010
label_2a6b10:
    if (ctx->pc == 0x2A6B10u) {
        ctx->pc = 0x2A6B10u;
            // 0x2a6b10: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->pc = 0x2A6B14u;
        goto label_2a6b14;
    }
    ctx->pc = 0x2A6B0Cu;
    SET_GPR_U32(ctx, 31, 0x2A6B14u);
    ctx->pc = 0x2A6B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6B0Cu;
            // 0x2a6b10: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6B14u; }
        if (ctx->pc != 0x2A6B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6B14u; }
        if (ctx->pc != 0x2A6B14u) { return; }
    }
    ctx->pc = 0x2A6B14u;
label_2a6b14:
    // 0x2a6b14: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x2a6b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2a6b18:
    // 0x2a6b18: 0xc04cc04  jal         func_133010
label_2a6b1c:
    if (ctx->pc == 0x2A6B1Cu) {
        ctx->pc = 0x2A6B1Cu;
            // 0x2a6b1c: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x2A6B20u;
        goto label_2a6b20;
    }
    ctx->pc = 0x2A6B18u;
    SET_GPR_U32(ctx, 31, 0x2A6B20u);
    ctx->pc = 0x2A6B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6B18u;
            // 0x2a6b1c: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6B20u; }
        if (ctx->pc != 0x2A6B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6B20u; }
        if (ctx->pc != 0x2A6B20u) { return; }
    }
    ctx->pc = 0x2A6B20u;
label_2a6b20:
    // 0x2a6b20: 0xa60000a0  sh          $zero, 0xA0($s0)
    ctx->pc = 0x2a6b20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 160), (uint16_t)GPR_U32(ctx, 0));
label_2a6b24:
    // 0x2a6b24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a6b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a6b28:
    // 0x2a6b28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a6b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a6b2c:
    // 0x2a6b2c: 0x3e00008  jr          $ra
label_2a6b30:
    if (ctx->pc == 0x2A6B30u) {
        ctx->pc = 0x2A6B30u;
            // 0x2a6b30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2A6B34u;
        goto label_2a6b34;
    }
    ctx->pc = 0x2A6B2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6B2Cu;
            // 0x2a6b30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6B34u;
label_2a6b34:
    // 0x2a6b34: 0x0  nop
    ctx->pc = 0x2a6b34u;
    // NOP
label_2a6b38:
    // 0x2a6b38: 0x0  nop
    ctx->pc = 0x2a6b38u;
    // NOP
label_2a6b3c:
    // 0x2a6b3c: 0x0  nop
    ctx->pc = 0x2a6b3cu;
    // NOP
label_2a6b40:
    // 0x2a6b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a6b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a6b44:
    // 0x2a6b44: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2a6b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2a6b48:
    // 0x2a6b48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a6b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a6b4c:
    // 0x2a6b4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a6b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a6b50:
    // 0x2a6b50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a6b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a6b54:
    // 0x2a6b54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a6b54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a6b58:
    // 0x2a6b58: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a6b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a6b5c:
    // 0x2a6b5c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2a6b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2a6b60:
    // 0x2a6b60: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x2a6b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_2a6b64:
    // 0x2a6b64: 0xc04a508  jal         func_129420
label_2a6b68:
    if (ctx->pc == 0x2A6B68u) {
        ctx->pc = 0x2A6B68u;
            // 0x2a6b68: 0x26250070  addiu       $a1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->pc = 0x2A6B6Cu;
        goto label_2a6b6c;
    }
    ctx->pc = 0x2A6B64u;
    SET_GPR_U32(ctx, 31, 0x2A6B6Cu);
    ctx->pc = 0x2A6B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6B64u;
            // 0x2a6b68: 0x26250070  addiu       $a1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6B6Cu; }
        if (ctx->pc != 0x2A6B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6B6Cu; }
        if (ctx->pc != 0x2A6B6Cu) { return; }
    }
    ctx->pc = 0x2A6B6Cu;
label_2a6b6c:
    // 0x2a6b6c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2a6b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2a6b70:
    // 0x2a6b70: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x2a6b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_2a6b74:
    // 0x2a6b74: 0x26250024  addiu       $a1, $s1, 0x24
    ctx->pc = 0x2a6b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
label_2a6b78:
    // 0x2a6b78: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2a6b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a6b7c:
    // 0x2a6b7c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2a6b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2a6b80:
    // 0x2a6b80: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2a6b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2a6b84:
    // 0x2a6b84: 0xc04a508  jal         func_129420
label_2a6b88:
    if (ctx->pc == 0x2A6B88u) {
        ctx->pc = 0x2A6B88u;
            // 0x2a6b88: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x2A6B8Cu;
        goto label_2a6b8c;
    }
    ctx->pc = 0x2A6B84u;
    SET_GPR_U32(ctx, 31, 0x2A6B8Cu);
    ctx->pc = 0x2A6B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6B84u;
            // 0x2a6b88: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6B8Cu; }
        if (ctx->pc != 0x2A6B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6B8Cu; }
        if (ctx->pc != 0x2A6B8Cu) { return; }
    }
    ctx->pc = 0x2A6B8Cu;
label_2a6b8c:
    // 0x2a6b8c: 0xc6200080  lwc1        $f0, 0x80($s1)
    ctx->pc = 0x2a6b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6b90:
    // 0x2a6b90: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x2a6b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_2a6b94:
    // 0x2a6b94: 0x26250028  addiu       $a1, $s1, 0x28
    ctx->pc = 0x2a6b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_2a6b98:
    // 0x2a6b98: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2a6b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a6b9c:
    // 0x2a6b9c: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x2a6b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_2a6ba0:
    // 0x2a6ba0: 0xc6200084  lwc1        $f0, 0x84($s1)
    ctx->pc = 0x2a6ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6ba4:
    // 0x2a6ba4: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x2a6ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_2a6ba8:
    // 0x2a6ba8: 0xc6200088  lwc1        $f0, 0x88($s1)
    ctx->pc = 0x2a6ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6bac:
    // 0x2a6bac: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2a6bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_2a6bb0:
    // 0x2a6bb0: 0x9222008d  lbu         $v0, 0x8D($s1)
    ctx->pc = 0x2a6bb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 141)));
label_2a6bb4:
    // 0x2a6bb4: 0xa2020034  sb          $v0, 0x34($s0)
    ctx->pc = 0x2a6bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 2));
label_2a6bb8:
    // 0x2a6bb8: 0x9222008c  lbu         $v0, 0x8C($s1)
    ctx->pc = 0x2a6bb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
label_2a6bbc:
    // 0x2a6bbc: 0xa2020035  sb          $v0, 0x35($s0)
    ctx->pc = 0x2a6bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 2));
label_2a6bc0:
    // 0x2a6bc0: 0x9222008e  lbu         $v0, 0x8E($s1)
    ctx->pc = 0x2a6bc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 142)));
label_2a6bc4:
    // 0x2a6bc4: 0xa2020036  sb          $v0, 0x36($s0)
    ctx->pc = 0x2a6bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 54), (uint8_t)GPR_U32(ctx, 2));
label_2a6bc8:
    // 0x2a6bc8: 0x9222008f  lbu         $v0, 0x8F($s1)
    ctx->pc = 0x2a6bc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 143)));
label_2a6bcc:
    // 0x2a6bcc: 0xc04a508  jal         func_129420
label_2a6bd0:
    if (ctx->pc == 0x2A6BD0u) {
        ctx->pc = 0x2A6BD0u;
            // 0x2a6bd0: 0xa2020037  sb          $v0, 0x37($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 55), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2A6BD4u;
        goto label_2a6bd4;
    }
    ctx->pc = 0x2A6BCCu;
    SET_GPR_U32(ctx, 31, 0x2A6BD4u);
    ctx->pc = 0x2A6BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6BCCu;
            // 0x2a6bd0: 0xa2020037  sb          $v0, 0x37($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 55), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6BD4u; }
        if (ctx->pc != 0x2A6BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6BD4u; }
        if (ctx->pc != 0x2A6BD4u) { return; }
    }
    ctx->pc = 0x2A6BD4u;
label_2a6bd4:
    // 0x2a6bd4: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x2a6bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2a6bd8:
    // 0x2a6bd8: 0x2604005c  addiu       $a0, $s0, 0x5C
    ctx->pc = 0x2a6bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
label_2a6bdc:
    // 0x2a6bdc: 0x2625003c  addiu       $a1, $s1, 0x3C
    ctx->pc = 0x2a6bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
label_2a6be0:
    // 0x2a6be0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2a6be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a6be4:
    // 0x2a6be4: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2a6be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_2a6be8:
    // 0x2a6be8: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2a6be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2a6bec:
    // 0x2a6bec: 0xc04a508  jal         func_129420
label_2a6bf0:
    if (ctx->pc == 0x2A6BF0u) {
        ctx->pc = 0x2A6BF0u;
            // 0x2a6bf0: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->pc = 0x2A6BF4u;
        goto label_2a6bf4;
    }
    ctx->pc = 0x2A6BECu;
    SET_GPR_U32(ctx, 31, 0x2A6BF4u);
    ctx->pc = 0x2A6BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6BECu;
            // 0x2a6bf0: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6BF4u; }
        if (ctx->pc != 0x2A6BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6BF4u; }
        if (ctx->pc != 0x2A6BF4u) { return; }
    }
    ctx->pc = 0x2A6BF4u;
label_2a6bf4:
    // 0x2a6bf4: 0x8e2300a8  lw          $v1, 0xA8($s1)
    ctx->pc = 0x2a6bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_2a6bf8:
    // 0x2a6bf8: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x2a6bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_2a6bfc:
    // 0x2a6bfc: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x2a6bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2a6c00:
    // 0x2a6c00: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2a6c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
label_2a6c04:
    // 0x2a6c04: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2a6c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6c08:
    // 0x2a6c08: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a6c08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2a6c0c:
    // 0x2a6c0c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2a6c0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2a6c10:
    // 0x2a6c10: 0x0  nop
    ctx->pc = 0x2a6c10u;
    // NOP
label_2a6c14:
    // 0x2a6c14: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x2a6c14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_2a6c18:
    // 0x2a6c18: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x2a6c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_2a6c1c:
    // 0x2a6c1c: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x2a6c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
label_2a6c20:
    // 0x2a6c20: 0xc62000a4  lwc1        $f0, 0xA4($s1)
    ctx->pc = 0x2a6c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6c24:
    // 0x2a6c24: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x2a6c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
label_2a6c28:
    // 0x2a6c28: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x2a6c28u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_2a6c2c:
    // 0x2a6c2c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2a6c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_2a6c30:
    // 0x2a6c30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a6c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a6c34:
    // 0x2a6c34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a6c34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a6c38:
    // 0x2a6c38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a6c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a6c3c:
    // 0x2a6c3c: 0x3e00008  jr          $ra
label_2a6c40:
    if (ctx->pc == 0x2A6C40u) {
        ctx->pc = 0x2A6C40u;
            // 0x2a6c40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2A6C44u;
        goto label_2a6c44;
    }
    ctx->pc = 0x2A6C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6C3Cu;
            // 0x2a6c40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6C44u;
label_2a6c44:
    // 0x2a6c44: 0x0  nop
    ctx->pc = 0x2a6c44u;
    // NOP
label_2a6c48:
    // 0x2a6c48: 0x0  nop
    ctx->pc = 0x2a6c48u;
    // NOP
label_2a6c4c:
    // 0x2a6c4c: 0x0  nop
    ctx->pc = 0x2a6c4cu;
    // NOP
label_2a6c50:
    // 0x2a6c50: 0x908300b4  lbu         $v1, 0xB4($a0)
    ctx->pc = 0x2a6c50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 180)));
label_2a6c54:
    // 0x2a6c54: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_2a6c58:
    if (ctx->pc == 0x2A6C58u) {
        ctx->pc = 0x2A6C5Cu;
        goto label_2a6c5c;
    }
    ctx->pc = 0x2A6C54u;
    {
        const bool branch_taken_0x2a6c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6c54) {
            ctx->pc = 0x2A6C60u;
            goto label_2a6c60;
        }
    }
    ctx->pc = 0x2A6C5Cu;
label_2a6c5c:
    // 0x2a6c5c: 0xa083008e  sb          $v1, 0x8E($a0)
    ctx->pc = 0x2a6c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 142), (uint8_t)GPR_U32(ctx, 3));
label_2a6c60:
    // 0x2a6c60: 0x3e00008  jr          $ra
label_2a6c64:
    if (ctx->pc == 0x2A6C64u) {
        ctx->pc = 0x2A6C68u;
        goto label_2a6c68;
    }
    ctx->pc = 0x2A6C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6C68u;
label_2a6c68:
    // 0x2a6c68: 0x0  nop
    ctx->pc = 0x2a6c68u;
    // NOP
label_2a6c6c:
    // 0x2a6c6c: 0x0  nop
    ctx->pc = 0x2a6c6cu;
    // NOP
label_2a6c70:
    // 0x2a6c70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2a6c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2a6c74:
    // 0x2a6c74: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2a6c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2a6c78:
    // 0x2a6c78: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2a6c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2a6c7c:
    // 0x2a6c7c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2a6c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2a6c80:
    // 0x2a6c80: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2a6c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2a6c84:
    // 0x2a6c84: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a6c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2a6c88:
    // 0x2a6c88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a6c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2a6c8c:
    // 0x2a6c8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a6c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2a6c90:
    // 0x2a6c90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a6c90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a6c94:
    // 0x2a6c94: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2a6c94u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2a6c98:
    // 0x2a6c98: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2a6c98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2a6c9c:
    // 0x2a6c9c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2a6c9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2a6ca0:
    // 0x2a6ca0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2a6ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2a6ca4:
    // 0x2a6ca4: 0x1460006c  bnez        $v1, . + 4 + (0x6C << 2)
label_2a6ca8:
    if (ctx->pc == 0x2A6CA8u) {
        ctx->pc = 0x2A6CA8u;
            // 0x2a6ca8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A6CACu;
        goto label_2a6cac;
    }
    ctx->pc = 0x2A6CA4u;
    {
        const bool branch_taken_0x2a6ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6CA4u;
            // 0x2a6ca8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6ca4) {
            ctx->pc = 0x2A6E58u;
            goto label_2a6e58;
        }
    }
    ctx->pc = 0x2A6CACu;
label_2a6cac:
    // 0x2a6cac: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x2a6cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a6cb0:
    // 0x2a6cb0: 0xc60d0020  lwc1        $f13, 0x20($s0)
    ctx->pc = 0x2a6cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2a6cb4:
    // 0x2a6cb4: 0xc60e0024  lwc1        $f14, 0x24($s0)
    ctx->pc = 0x2a6cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2a6cb8:
    // 0x2a6cb8: 0xc04cbd8  jal         func_132F60
label_2a6cbc:
    if (ctx->pc == 0x2A6CBCu) {
        ctx->pc = 0x2A6CBCu;
            // 0x2a6cbc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2A6CC0u;
        goto label_2a6cc0;
    }
    ctx->pc = 0x2A6CB8u;
    SET_GPR_U32(ctx, 31, 0x2A6CC0u);
    ctx->pc = 0x2A6CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6CB8u;
            // 0x2a6cbc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6CC0u; }
        if (ctx->pc != 0x2A6CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6CC0u; }
        if (ctx->pc != 0x2A6CC0u) { return; }
    }
    ctx->pc = 0x2A6CC0u;
label_2a6cc0:
    // 0x2a6cc0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2a6cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2a6cc4:
    // 0x2a6cc4: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x2a6cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_2a6cc8:
    // 0x2a6cc8: 0xc04cc04  jal         func_133010
label_2a6ccc:
    if (ctx->pc == 0x2A6CCCu) {
        ctx->pc = 0x2A6CCCu;
            // 0x2a6ccc: 0xae25001c  sw          $a1, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 5));
        ctx->pc = 0x2A6CD0u;
        goto label_2a6cd0;
    }
    ctx->pc = 0x2A6CC8u;
    SET_GPR_U32(ctx, 31, 0x2A6CD0u);
    ctx->pc = 0x2A6CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6CC8u;
            // 0x2a6ccc: 0xae25001c  sw          $a1, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6CD0u; }
        if (ctx->pc != 0x2A6CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6CD0u; }
        if (ctx->pc != 0x2A6CD0u) { return; }
    }
    ctx->pc = 0x2A6CD0u;
label_2a6cd0:
    // 0x2a6cd0: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x2a6cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2a6cd4:
    // 0x2a6cd4: 0xc04cc04  jal         func_133010
label_2a6cd8:
    if (ctx->pc == 0x2A6CD8u) {
        ctx->pc = 0x2A6CD8u;
            // 0x2a6cd8: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x2A6CDCu;
        goto label_2a6cdc;
    }
    ctx->pc = 0x2A6CD4u;
    SET_GPR_U32(ctx, 31, 0x2A6CDCu);
    ctx->pc = 0x2A6CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6CD4u;
            // 0x2a6cd8: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6CDCu; }
        if (ctx->pc != 0x2A6CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6CDCu; }
        if (ctx->pc != 0x2A6CDCu) { return; }
    }
    ctx->pc = 0x2A6CDCu;
label_2a6cdc:
    // 0x2a6cdc: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x2a6cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2a6ce0:
    // 0x2a6ce0: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x2a6ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_2a6ce4:
    // 0x2a6ce4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2a6ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2a6ce8:
    // 0x2a6ce8: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x2a6ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_2a6cec:
    // 0x2a6cec: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2a6cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2a6cf0:
    // 0x2a6cf0: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x2a6cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_2a6cf4:
    // 0x2a6cf4: 0xae240020  sw          $a0, 0x20($s1)
    ctx->pc = 0x2a6cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 4));
label_2a6cf8:
    // 0x2a6cf8: 0x3443126f  ori         $v1, $v0, 0x126F
    ctx->pc = 0x2a6cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_2a6cfc:
    // 0x2a6cfc: 0xae250024  sw          $a1, 0x24($s1)
    ctx->pc = 0x2a6cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 5));
label_2a6d00:
    // 0x2a6d00: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x2a6d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
label_2a6d04:
    // 0x2a6d04: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2a6d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a6d08:
    // 0x2a6d08: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x2a6d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_2a6d0c:
    // 0x2a6d0c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2a6d0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2a6d10:
    // 0x2a6d10: 0x3443be77  ori         $v1, $v0, 0xBE77
    ctx->pc = 0x2a6d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48759);
label_2a6d14:
    // 0x2a6d14: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2a6d14u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_2a6d18:
    // 0x2a6d18: 0x3c0238c9  lui         $v0, 0x38C9
    ctx->pc = 0x2a6d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14537 << 16));
label_2a6d1c:
    // 0x2a6d1c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2a6d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2a6d20:
    // 0x2a6d20: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a6d20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_2a6d24:
    // 0x2a6d24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a6d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6d28:
    // 0x2a6d28: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x2a6d28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2a6d2c:
    // 0x2a6d2c: 0x0  nop
    ctx->pc = 0x2a6d2cu;
    // NOP
label_2a6d30:
    // 0x2a6d30: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2a6d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2a6d34:
    // 0x2a6d34: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2a6d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2a6d38:
    // 0x2a6d38: 0x0  nop
    ctx->pc = 0x2a6d38u;
    // NOP
label_2a6d3c:
    // 0x2a6d3c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2a6d3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_2a6d40:
    // 0x2a6d40: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a6d40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a6d44:
    // 0x2a6d44: 0x0  nop
    ctx->pc = 0x2a6d44u;
    // NOP
label_2a6d48:
    // 0x2a6d48: 0x4601181a  mula.s      $f3, $f1
    ctx->pc = 0x2a6d48u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_2a6d4c:
    // 0x2a6d4c: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x2a6d4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_2a6d50:
    // 0x2a6d50: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a6d50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2a6d54:
    // 0x2a6d54: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2a6d54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2a6d58:
    // 0x2a6d58: 0x0  nop
    ctx->pc = 0x2a6d58u;
    // NOP
label_2a6d5c:
    // 0x2a6d5c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a6d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2a6d60:
    // 0x2a6d60: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a6d60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2a6d64:
    // 0x2a6d64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a6d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a6d68:
    // 0x2a6d68: 0x0  nop
    ctx->pc = 0x2a6d68u;
    // NOP
label_2a6d6c:
    // 0x2a6d6c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a6d6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2a6d70:
    // 0x2a6d70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a6d70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a6d74:
    // 0x2a6d74: 0xe6200060  swc1        $f0, 0x60($s1)
    ctx->pc = 0x2a6d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
label_2a6d78:
    // 0x2a6d78: 0xe6200064  swc1        $f0, 0x64($s1)
    ctx->pc = 0x2a6d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
label_2a6d7c:
    // 0x2a6d7c: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x2a6d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
label_2a6d80:
    // 0x2a6d80: 0xae200094  sw          $zero, 0x94($s1)
    ctx->pc = 0x2a6d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
label_2a6d84:
    // 0x2a6d84: 0xae200098  sw          $zero, 0x98($s1)
    ctx->pc = 0x2a6d84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
label_2a6d88:
    // 0x2a6d88: 0x92150037  lbu         $s5, 0x37($s0)
    ctx->pc = 0x2a6d88u;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 55)));
label_2a6d8c:
    // 0x2a6d8c: 0xc6140030  lwc1        $f20, 0x30($s0)
    ctx->pc = 0x2a6d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2a6d90:
    // 0x2a6d90: 0x92140036  lbu         $s4, 0x36($s0)
    ctx->pc = 0x2a6d90u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 54)));
label_2a6d94:
    // 0x2a6d94: 0xc615002c  lwc1        $f21, 0x2C($s0)
    ctx->pc = 0x2a6d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2a6d98:
    // 0x2a6d98: 0x92130034  lbu         $s3, 0x34($s0)
    ctx->pc = 0x2a6d98u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
label_2a6d9c:
    // 0x2a6d9c: 0xc6160028  lwc1        $f22, 0x28($s0)
    ctx->pc = 0x2a6d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2a6da0:
    // 0x2a6da0: 0x92120035  lbu         $s2, 0x35($s0)
    ctx->pc = 0x2a6da0u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
label_2a6da4:
    // 0x2a6da4: 0xc04cc04  jal         func_133010
label_2a6da8:
    if (ctx->pc == 0x2A6DA8u) {
        ctx->pc = 0x2A6DA8u;
            // 0x2a6da8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2A6DACu;
        goto label_2a6dac;
    }
    ctx->pc = 0x2A6DA4u;
    SET_GPR_U32(ctx, 31, 0x2A6DACu);
    ctx->pc = 0x2A6DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6DA4u;
            // 0x2a6da8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6DACu; }
        if (ctx->pc != 0x2A6DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6DACu; }
        if (ctx->pc != 0x2A6DACu) { return; }
    }
    ctx->pc = 0x2A6DACu;
label_2a6dac:
    // 0x2a6dac: 0xe6360080  swc1        $f22, 0x80($s1)
    ctx->pc = 0x2a6dacu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
label_2a6db0:
    // 0x2a6db0: 0xe6350084  swc1        $f21, 0x84($s1)
    ctx->pc = 0x2a6db0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
label_2a6db4:
    // 0x2a6db4: 0xe6340088  swc1        $f20, 0x88($s1)
    ctx->pc = 0x2a6db4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
label_2a6db8:
    // 0x2a6db8: 0xa233008d  sb          $s3, 0x8D($s1)
    ctx->pc = 0x2a6db8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 141), (uint8_t)GPR_U32(ctx, 19));
label_2a6dbc:
    // 0x2a6dbc: 0xa232008c  sb          $s2, 0x8C($s1)
    ctx->pc = 0x2a6dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 18));
label_2a6dc0:
    // 0x2a6dc0: 0xa234008e  sb          $s4, 0x8E($s1)
    ctx->pc = 0x2a6dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 142), (uint8_t)GPR_U32(ctx, 20));
label_2a6dc4:
    // 0x2a6dc4: 0xa235008f  sb          $s5, 0x8F($s1)
    ctx->pc = 0x2a6dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 143), (uint8_t)GPR_U32(ctx, 21));
label_2a6dc8:
    // 0x2a6dc8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2a6dc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a6dcc:
    // 0x2a6dcc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2a6dccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2a6dd0:
    // 0x2a6dd0: 0x320f809  jalr        $t9
label_2a6dd4:
    if (ctx->pc == 0x2A6DD4u) {
        ctx->pc = 0x2A6DD4u;
            // 0x2a6dd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A6DD8u;
        goto label_2a6dd8;
    }
    ctx->pc = 0x2A6DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A6DD8u);
        ctx->pc = 0x2A6DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6DD0u;
            // 0x2a6dd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A6DD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A6DD8u; }
            if (ctx->pc != 0x2A6DD8u) { return; }
        }
        }
    }
    ctx->pc = 0x2A6DD8u;
label_2a6dd8:
    // 0x2a6dd8: 0x92040050  lbu         $a0, 0x50($s0)
    ctx->pc = 0x2a6dd8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
label_2a6ddc:
    // 0x2a6ddc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a6ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2a6de0:
    // 0x2a6de0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a6de0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a6de4:
    // 0x2a6de4: 0xa22400b4  sb          $a0, 0xB4($s1)
    ctx->pc = 0x2a6de4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 180), (uint8_t)GPR_U32(ctx, 4));
label_2a6de8:
    // 0x2a6de8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2a6de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2a6dec:
    // 0x2a6dec: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x2a6decu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
label_2a6df0:
    // 0x2a6df0: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2a6df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2a6df4:
    // 0x2a6df4: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x2a6df4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_2a6df8:
    // 0x2a6df8: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x2a6df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2a6dfc:
    // 0x2a6dfc: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x2a6dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
label_2a6e00:
    // 0x2a6e00: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x2a6e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_2a6e04:
    // 0x2a6e04: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x2a6e04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
label_2a6e08:
    // 0x2a6e08: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x2a6e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_2a6e0c:
    // 0x2a6e0c: 0xae2300a8  sw          $v1, 0xA8($s1)
    ctx->pc = 0x2a6e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 3));
label_2a6e10:
    // 0x2a6e10: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2a6e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_2a6e14:
    // 0x2a6e14: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x2a6e14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
label_2a6e18:
    // 0x2a6e18: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x2a6e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6e1c:
    // 0x2a6e1c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2a6e1cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_2a6e20:
    // 0x2a6e20: 0xe62000a4  swc1        $f0, 0xA4($s1)
    ctx->pc = 0x2a6e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 164), bits); }
label_2a6e24:
    // 0x2a6e24: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x2a6e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_2a6e28:
    // 0x2a6e28: 0xae2300b0  sw          $v1, 0xB0($s1)
    ctx->pc = 0x2a6e28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
label_2a6e2c:
    // 0x2a6e2c: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x2a6e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_2a6e30:
    // 0x2a6e30: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x2a6e30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
label_2a6e34:
    // 0x2a6e34: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x2a6e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6e38:
    // 0x2a6e38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a6e38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a6e3c:
    // 0x2a6e3c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2a6e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2a6e40:
    // 0x2a6e40: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x2a6e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_2a6e44:
    // 0x2a6e44: 0xae230090  sw          $v1, 0x90($s1)
    ctx->pc = 0x2a6e44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 3));
label_2a6e48:
    // 0x2a6e48: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2a6e48u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_2a6e4c:
    // 0x2a6e4c: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x2a6e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
label_2a6e50:
    // 0x2a6e50: 0x10000014  b           . + 4 + (0x14 << 2)
label_2a6e54:
    if (ctx->pc == 0x2A6E54u) {
        ctx->pc = 0x2A6E54u;
            // 0x2a6e54: 0xae2000ac  sw          $zero, 0xAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
        ctx->pc = 0x2A6E58u;
        goto label_2a6e58;
    }
    ctx->pc = 0x2A6E50u;
    {
        const bool branch_taken_0x2a6e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6E50u;
            // 0x2a6e54: 0xae2000ac  sw          $zero, 0xAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6e50) {
            ctx->pc = 0x2A6EA4u;
            goto label_2a6ea4;
        }
    }
    ctx->pc = 0x2A6E58u;
label_2a6e58:
    // 0x2a6e58: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2a6e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2a6e5c:
    // 0x2a6e5c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_2a6e60:
    if (ctx->pc == 0x2A6E60u) {
        ctx->pc = 0x2A6E60u;
            // 0x2a6e60: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x2A6E64u;
        goto label_2a6e64;
    }
    ctx->pc = 0x2A6E5Cu;
    {
        const bool branch_taken_0x2a6e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6e5c) {
            ctx->pc = 0x2A6E60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6E5Cu;
            // 0x2a6e60: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A6E70u;
            goto label_2a6e70;
        }
    }
    ctx->pc = 0x2A6E64u;
label_2a6e64:
    // 0x2a6e64: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x2a6e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_2a6e68:
    // 0x2a6e68: 0xae230090  sw          $v1, 0x90($s1)
    ctx->pc = 0x2a6e68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 3));
label_2a6e6c:
    // 0x2a6e6c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a6e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2a6e70:
    // 0x2a6e70: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2a6e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_2a6e74:
    // 0x2a6e74: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2a6e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2a6e78:
    // 0x2a6e78: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_2a6e7c:
    if (ctx->pc == 0x2A6E7Cu) {
        ctx->pc = 0x2A6E7Cu;
            // 0x2a6e7c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x2A6E80u;
        goto label_2a6e80;
    }
    ctx->pc = 0x2A6E78u;
    {
        const bool branch_taken_0x2a6e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6e78) {
            ctx->pc = 0x2A6E7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6E78u;
            // 0x2a6e7c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A6E8Cu;
            goto label_2a6e8c;
        }
    }
    ctx->pc = 0x2A6E80u;
label_2a6e80:
    // 0x2a6e80: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x2a6e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_2a6e84:
    // 0x2a6e84: 0xae2300a8  sw          $v1, 0xA8($s1)
    ctx->pc = 0x2a6e84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 3));
label_2a6e88:
    // 0x2a6e88: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a6e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2a6e8c:
    // 0x2a6e8c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x2a6e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_2a6e90:
    // 0x2a6e90: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2a6e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2a6e94:
    // 0x2a6e94: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_2a6e98:
    if (ctx->pc == 0x2A6E98u) {
        ctx->pc = 0x2A6E98u;
            // 0x2a6e98: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x2A6E9Cu;
        goto label_2a6e9c;
    }
    ctx->pc = 0x2A6E94u;
    {
        const bool branch_taken_0x2a6e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6e94) {
            ctx->pc = 0x2A6E98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6E94u;
            // 0x2a6e98: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A6EA8u;
            goto label_2a6ea8;
        }
    }
    ctx->pc = 0x2A6E9Cu;
label_2a6e9c:
    // 0x2a6e9c: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2a6e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_2a6ea0:
    // 0x2a6ea0: 0xae2300ac  sw          $v1, 0xAC($s1)
    ctx->pc = 0x2a6ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 3));
label_2a6ea4:
    // 0x2a6ea4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2a6ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2a6ea8:
    // 0x2a6ea8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2a6ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2a6eac:
    // 0x2a6eac: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2a6eacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2a6eb0:
    // 0x2a6eb0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2a6eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2a6eb4:
    // 0x2a6eb4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2a6eb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2a6eb8:
    // 0x2a6eb8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2a6eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2a6ebc:
    // 0x2a6ebc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2a6ebcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2a6ec0:
    // 0x2a6ec0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a6ec0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a6ec4:
    // 0x2a6ec4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a6ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a6ec8:
    // 0x2a6ec8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a6ec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a6ecc:
    // 0x2a6ecc: 0x3e00008  jr          $ra
label_2a6ed0:
    if (ctx->pc == 0x2A6ED0u) {
        ctx->pc = 0x2A6ED0u;
            // 0x2a6ed0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2A6ED4u;
        goto label_2a6ed4;
    }
    ctx->pc = 0x2A6ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6ECCu;
            // 0x2a6ed0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6ED4u;
label_2a6ed4:
    // 0x2a6ed4: 0x0  nop
    ctx->pc = 0x2a6ed4u;
    // NOP
label_2a6ed8:
    // 0x2a6ed8: 0x0  nop
    ctx->pc = 0x2a6ed8u;
    // NOP
label_2a6edc:
    // 0x2a6edc: 0x0  nop
    ctx->pc = 0x2a6edcu;
    // NOP
label_2a6ee0:
    // 0x2a6ee0: 0x27bdfca0  addiu       $sp, $sp, -0x360
    ctx->pc = 0x2a6ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966432));
label_2a6ee4:
    // 0x2a6ee4: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2a6ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_2a6ee8:
    // 0x2a6ee8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2a6ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2a6eec:
    // 0x2a6eec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2a6eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2a6ef0:
    // 0x2a6ef0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2a6ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2a6ef4:
    // 0x2a6ef4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a6ef4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6ef8:
    // 0x2a6ef8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2a6ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2a6efc:
    // 0x2a6efc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2a6efcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a6f00:
    // 0x2a6f00: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2a6f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2a6f04:
    // 0x2a6f04: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2a6f04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a6f08:
    // 0x2a6f08: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a6f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2a6f0c:
    // 0x2a6f0c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a6f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2a6f10:
    // 0x2a6f10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a6f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2a6f14:
    // 0x2a6f14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a6f14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a6f18:
    // 0x2a6f18: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2a6f18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2a6f1c:
    // 0x2a6f1c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2a6f1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2a6f20:
    // 0x2a6f20: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x2a6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_2a6f24:
    // 0x2a6f24: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x2a6f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_2a6f28:
    // 0x2a6f28: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2a6f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6f2c:
    // 0x2a6f2c: 0xc4950000  lwc1        $f21, 0x0($a0)
    ctx->pc = 0x2a6f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2a6f30:
    // 0x2a6f30: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2a6f30u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a6f34:
    // 0x2a6f34: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2a6f38:
    if (ctx->pc == 0x2A6F38u) {
        ctx->pc = 0x2A6F38u;
            // 0x2a6f38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A6F3Cu;
        goto label_2a6f3c;
    }
    ctx->pc = 0x2A6F34u;
    {
        const bool branch_taken_0x2a6f34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A6F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6F34u;
            // 0x2a6f38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6f34) {
            ctx->pc = 0x2A6F48u;
            goto label_2a6f48;
        }
    }
    ctx->pc = 0x2A6F3Cu;
label_2a6f3c:
    // 0x2a6f3c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2a6f3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2a6f40:
    // 0x2a6f40: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2a6f44:
    if (ctx->pc == 0x2A6F44u) {
        ctx->pc = 0x2A6F44u;
            // 0x2a6f44: 0x8e330090  lw          $s3, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->pc = 0x2A6F48u;
        goto label_2a6f48;
    }
    ctx->pc = 0x2A6F40u;
    {
        const bool branch_taken_0x2a6f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6F40u;
            // 0x2a6f44: 0x8e330090  lw          $s3, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6f40) {
            ctx->pc = 0x2A6FBCu;
            goto label_2a6fbc;
        }
    }
    ctx->pc = 0x2A6F48u;
label_2a6f48:
    // 0x2a6f48: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2a6f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_2a6f4c:
    // 0x2a6f4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a6f4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6f50:
    // 0x2a6f50: 0x0  nop
    ctx->pc = 0x2a6f50u;
    // NOP
label_2a6f54:
    // 0x2a6f54: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2a6f54u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a6f58:
    // 0x2a6f58: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_2a6f5c:
    if (ctx->pc == 0x2A6F5Cu) {
        ctx->pc = 0x2A6F5Cu;
            // 0x2a6f5c: 0x3c0241f0  lui         $v0, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
        ctx->pc = 0x2A6F60u;
        goto label_2a6f60;
    }
    ctx->pc = 0x2A6F58u;
    {
        const bool branch_taken_0x2a6f58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a6f58) {
            ctx->pc = 0x2A6F5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6F58u;
            // 0x2a6f5c: 0x3c0241f0  lui         $v0, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A6F74u;
            goto label_2a6f74;
        }
    }
    ctx->pc = 0x2A6F60u;
label_2a6f60:
    // 0x2a6f60: 0x3c023ea8  lui         $v0, 0x3EA8
    ctx->pc = 0x2a6f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16040 << 16));
label_2a6f64:
    // 0x2a6f64: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x2a6f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
label_2a6f68:
    // 0x2a6f68: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2a6f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2a6f6c:
    // 0x2a6f6c: 0x10000012  b           . + 4 + (0x12 << 2)
label_2a6f70:
    if (ctx->pc == 0x2A6F70u) {
        ctx->pc = 0x2A6F74u;
        goto label_2a6f74;
    }
    ctx->pc = 0x2A6F6Cu;
    {
        const bool branch_taken_0x2a6f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6f6c) {
            ctx->pc = 0x2A6FB8u;
            goto label_2a6fb8;
        }
    }
    ctx->pc = 0x2A6F74u;
label_2a6f74:
    // 0x2a6f74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a6f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6f78:
    // 0x2a6f78: 0x0  nop
    ctx->pc = 0x2a6f78u;
    // NOP
label_2a6f7c:
    // 0x2a6f7c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2a6f7cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a6f80:
    // 0x2a6f80: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_2a6f84:
    if (ctx->pc == 0x2A6F84u) {
        ctx->pc = 0x2A6F84u;
            // 0x2a6f84: 0x3c0241c8  lui         $v0, 0x41C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
        ctx->pc = 0x2A6F88u;
        goto label_2a6f88;
    }
    ctx->pc = 0x2A6F80u;
    {
        const bool branch_taken_0x2a6f80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a6f80) {
            ctx->pc = 0x2A6F84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6F80u;
            // 0x2a6f84: 0x3c0241c8  lui         $v0, 0x41C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A6F98u;
            goto label_2a6f98;
        }
    }
    ctx->pc = 0x2A6F88u;
label_2a6f88:
    // 0x2a6f88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a6f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a6f8c:
    // 0x2a6f8c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2a6f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2a6f90:
    // 0x2a6f90: 0x10000009  b           . + 4 + (0x9 << 2)
label_2a6f94:
    if (ctx->pc == 0x2A6F94u) {
        ctx->pc = 0x2A6F98u;
        goto label_2a6f98;
    }
    ctx->pc = 0x2A6F90u;
    {
        const bool branch_taken_0x2a6f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6f90) {
            ctx->pc = 0x2A6FB8u;
            goto label_2a6fb8;
        }
    }
    ctx->pc = 0x2A6F98u;
label_2a6f98:
    // 0x2a6f98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a6f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6f9c:
    // 0x2a6f9c: 0x0  nop
    ctx->pc = 0x2a6f9cu;
    // NOP
label_2a6fa0:
    // 0x2a6fa0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2a6fa0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a6fa4:
    // 0x2a6fa4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2a6fa8:
    if (ctx->pc == 0x2A6FA8u) {
        ctx->pc = 0x2A6FACu;
        goto label_2a6fac;
    }
    ctx->pc = 0x2A6FA4u;
    {
        const bool branch_taken_0x2a6fa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a6fa4) {
            ctx->pc = 0x2A6FB8u;
            goto label_2a6fb8;
        }
    }
    ctx->pc = 0x2A6FACu;
label_2a6fac:
    // 0x2a6fac: 0x3c023f95  lui         $v0, 0x3F95
    ctx->pc = 0x2a6facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16277 << 16));
label_2a6fb0:
    // 0x2a6fb0: 0x34423f7d  ori         $v0, $v0, 0x3F7D
    ctx->pc = 0x2a6fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16253);
label_2a6fb4:
    // 0x2a6fb4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2a6fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2a6fb8:
    // 0x2a6fb8: 0x8e330090  lw          $s3, 0x90($s1)
    ctx->pc = 0x2a6fb8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_2a6fbc:
    // 0x2a6fbc: 0x32620800  andi        $v0, $s3, 0x800
    ctx->pc = 0x2a6fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2048);
label_2a6fc0:
    // 0x2a6fc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a6fc4:
    if (ctx->pc == 0x2A6FC4u) {
        ctx->pc = 0x2A6FC8u;
        goto label_2a6fc8;
    }
    ctx->pc = 0x2A6FC0u;
    {
        const bool branch_taken_0x2a6fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6fc0) {
            ctx->pc = 0x2A6FD8u;
            goto label_2a6fd8;
        }
    }
    ctx->pc = 0x2A6FC8u;
label_2a6fc8:
    // 0x2a6fc8: 0xe6350060  swc1        $f21, 0x60($s1)
    ctx->pc = 0x2a6fc8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
label_2a6fcc:
    // 0x2a6fcc: 0x2402f7ff  addiu       $v0, $zero, -0x801
    ctx->pc = 0x2a6fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
label_2a6fd0:
    // 0x2a6fd0: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x2a6fd0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_2a6fd4:
    // 0x2a6fd4: 0xe6350064  swc1        $f21, 0x64($s1)
    ctx->pc = 0x2a6fd4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
label_2a6fd8:
    // 0x2a6fd8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2a6fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2a6fdc:
    // 0x2a6fdc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2a6fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2a6fe0:
    // 0x2a6fe0: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x2a6fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_2a6fe4:
    // 0x2a6fe4: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x2a6fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_2a6fe8:
    // 0x2a6fe8: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_2a6fec:
    if (ctx->pc == 0x2A6FECu) {
        ctx->pc = 0x2A6FECu;
            // 0x2a6fec: 0x8e3200ac  lw          $s2, 0xAC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
        ctx->pc = 0x2A6FF0u;
        goto label_2a6ff0;
    }
    ctx->pc = 0x2A6FE8u;
    {
        const bool branch_taken_0x2a6fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a6fe8) {
            ctx->pc = 0x2A6FECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6FE8u;
            // 0x2a6fec: 0x8e3200ac  lw          $s2, 0xAC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A7000u;
            goto label_2a7000;
        }
    }
    ctx->pc = 0x2A6FF0u;
label_2a6ff0:
    // 0x2a6ff0: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x2a6ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
label_2a6ff4:
    // 0x2a6ff4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a6ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2a6ff8:
    // 0x2a6ff8: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x2a6ff8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_2a6ffc:
    // 0x2a6ffc: 0x8e3200ac  lw          $s2, 0xAC($s1)
    ctx->pc = 0x2a6ffcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_2a7000:
    // 0x2a7000: 0x52400008  beql        $s2, $zero, . + 4 + (0x8 << 2)
label_2a7004:
    if (ctx->pc == 0x2A7004u) {
        ctx->pc = 0x2A7004u;
            // 0x2a7004: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x2A7008u;
        goto label_2a7008;
    }
    ctx->pc = 0x2A7000u;
    {
        const bool branch_taken_0x2a7000 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7000) {
            ctx->pc = 0x2A7004u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7000u;
            // 0x2a7004: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A7024u;
            goto label_2a7024;
        }
    }
    ctx->pc = 0x2A7008u;
label_2a7008:
    // 0x2a7008: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2a7008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_2a700c:
    // 0x2a700c: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x2a700cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_2a7010:
    // 0x2a7010: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2a7014:
    if (ctx->pc == 0x2A7014u) {
        ctx->pc = 0x2A7018u;
        goto label_2a7018;
    }
    ctx->pc = 0x2A7010u;
    {
        const bool branch_taken_0x2a7010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7010) {
            ctx->pc = 0x2A7020u;
            goto label_2a7020;
        }
    }
    ctx->pc = 0x2A7018u;
label_2a7018:
    // 0x2a7018: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a701c:
    if (ctx->pc == 0x2A701Cu) {
        ctx->pc = 0x2A701Cu;
            // 0x2a701c: 0x8e430020  lw          $v1, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->pc = 0x2A7020u;
        goto label_2a7020;
    }
    ctx->pc = 0x2A7018u;
    {
        const bool branch_taken_0x2a7018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A701Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7018u;
            // 0x2a701c: 0x8e430020  lw          $v1, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7018) {
            ctx->pc = 0x2A7038u;
            goto label_2a7038;
        }
    }
    ctx->pc = 0x2A7020u;
label_2a7020:
    // 0x2a7020: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2a7020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2a7024:
    // 0x2a7024: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a7024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7028:
    // 0x2a7028: 0xc04a576  jal         func_1295D8
label_2a702c:
    if (ctx->pc == 0x2A702Cu) {
        ctx->pc = 0x2A702Cu;
            // 0x2a702c: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x2A7030u;
        goto label_2a7030;
    }
    ctx->pc = 0x2A7028u;
    SET_GPR_U32(ctx, 31, 0x2A7030u);
    ctx->pc = 0x2A702Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7028u;
            // 0x2a702c: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7030u; }
        if (ctx->pc != 0x2A7030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7030u; }
        if (ctx->pc != 0x2A7030u) { return; }
    }
    ctx->pc = 0x2A7030u;
label_2a7030:
    // 0x2a7030: 0x27b20190  addiu       $s2, $sp, 0x190
    ctx->pc = 0x2a7030u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2a7034:
    // 0x2a7034: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x2a7034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2a7038:
    // 0x2a7038: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a7038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2a703c:
    // 0x2a703c: 0x2639825  or          $s3, $s3, $v1
    ctx->pc = 0x2a703cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
label_2a7040:
    // 0x2a7040: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x2a7040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_2a7044:
    // 0x2a7044: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_2a7048:
    if (ctx->pc == 0x2A7048u) {
        ctx->pc = 0x2A7048u;
            // 0x2a7048: 0xc6210084  lwc1        $f1, 0x84($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x2A704Cu;
        goto label_2a704c;
    }
    ctx->pc = 0x2A7044u;
    {
        const bool branch_taken_0x2a7044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7044) {
            ctx->pc = 0x2A7048u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7044u;
            // 0x2a7048: 0xc6210084  lwc1        $f1, 0x84($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A709Cu;
            goto label_2a709c;
        }
    }
    ctx->pc = 0x2A704Cu;
label_2a704c:
    // 0x2a704c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2a704cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2a7050:
    // 0x2a7050: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2a7050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2a7054:
    // 0x2a7054: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x2a7054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_2a7058:
    // 0x2a7058: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x2a7058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_2a705c:
    // 0x2a705c: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
label_2a7060:
    if (ctx->pc == 0x2A7060u) {
        ctx->pc = 0x2A7064u;
        goto label_2a7064;
    }
    ctx->pc = 0x2A705Cu;
    {
        const bool branch_taken_0x2a705c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a705c) {
            ctx->pc = 0x2A7098u;
            goto label_2a7098;
        }
    }
    ctx->pc = 0x2A7064u;
label_2a7064:
    // 0x2a7064: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x2a7064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2a7068:
    // 0x2a7068: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x2a7068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
label_2a706c:
    // 0x2a706c: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x2a706cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_2a7070:
    // 0x2a7070: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a7074:
    // 0x2a7074: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2a7074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a7078:
    // 0x2a7078: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a7078u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a707c:
    // 0x2a707c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_2a7080:
    if (ctx->pc == 0x2A7080u) {
        ctx->pc = 0x2A7084u;
        goto label_2a7084;
    }
    ctx->pc = 0x2A707Cu;
    {
        const bool branch_taken_0x2a707c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a707c) {
            ctx->pc = 0x2A7098u;
            goto label_2a7098;
        }
    }
    ctx->pc = 0x2A7084u;
label_2a7084:
    // 0x2a7084: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a7084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a7088:
    // 0x2a7088: 0xc0aa0f4  jal         func_2A83D0
label_2a708c:
    if (ctx->pc == 0x2A708Cu) {
        ctx->pc = 0x2A708Cu;
            // 0x2a708c: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x2A7090u;
        goto label_2a7090;
    }
    ctx->pc = 0x2A7088u;
    SET_GPR_U32(ctx, 31, 0x2A7090u);
    ctx->pc = 0x2A708Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7088u;
            // 0x2a708c: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A83D0u;
    if (runtime->hasFunction(0x2A83D0u)) {
        auto targetFn = runtime->lookupFunction(0x2A83D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7090u; }
        if (ctx->pc != 0x2A7090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A83D0_0x2a83d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7090u; }
        if (ctx->pc != 0x2A7090u) { return; }
    }
    ctx->pc = 0x2A7090u;
label_2a7090:
    // 0x2a7090: 0x10000066  b           . + 4 + (0x66 << 2)
label_2a7094:
    if (ctx->pc == 0x2A7094u) {
        ctx->pc = 0x2A7094u;
            // 0x2a7094: 0xc7a101dc  lwc1        $f1, 0x1DC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x2A7098u;
        goto label_2a7098;
    }
    ctx->pc = 0x2A7090u;
    {
        const bool branch_taken_0x2a7090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7090u;
            // 0x2a7094: 0xc7a101dc  lwc1        $f1, 0x1DC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7090) {
            ctx->pc = 0x2A722Cu;
            goto label_2a722c;
        }
    }
    ctx->pc = 0x2A7098u;
label_2a7098:
    // 0x2a7098: 0xc6210084  lwc1        $f1, 0x84($s1)
    ctx->pc = 0x2a7098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a709c:
    // 0x2a709c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x2a709cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a70a0:
    // 0x2a70a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a70a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a70a4:
    // 0x2a70a4: 0xe7a001d0  swc1        $f0, 0x1D0($sp)
    ctx->pc = 0x2a70a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_2a70a8:
    // 0x2a70a8: 0xc6210080  lwc1        $f1, 0x80($s1)
    ctx->pc = 0x2a70a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a70ac:
    // 0x2a70ac: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2a70acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a70b0:
    // 0x2a70b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a70b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a70b4:
    // 0x2a70b4: 0xe7a001d4  swc1        $f0, 0x1D4($sp)
    ctx->pc = 0x2a70b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
label_2a70b8:
    // 0x2a70b8: 0xc6210088  lwc1        $f1, 0x88($s1)
    ctx->pc = 0x2a70b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a70bc:
    // 0x2a70bc: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x2a70bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a70c0:
    // 0x2a70c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a70c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a70c4:
    // 0x2a70c4: 0xe7a001d8  swc1        $f0, 0x1D8($sp)
    ctx->pc = 0x2a70c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_2a70c8:
    // 0x2a70c8: 0x9222008d  lbu         $v0, 0x8D($s1)
    ctx->pc = 0x2a70c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 141)));
label_2a70cc:
    // 0x2a70cc: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_2a70d0:
    if (ctx->pc == 0x2A70D0u) {
        ctx->pc = 0x2A70D0u;
            // 0x2a70d0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x2A70D4u;
        goto label_2a70d4;
    }
    ctx->pc = 0x2A70CCu;
    {
        const bool branch_taken_0x2a70cc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a70cc) {
            ctx->pc = 0x2A70D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A70CCu;
            // 0x2a70d0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A70E0u;
            goto label_2a70e0;
        }
    }
    ctx->pc = 0x2A70D4u;
label_2a70d4:
    // 0x2a70d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a70d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a70d8:
    // 0x2a70d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a70dc:
    if (ctx->pc == 0x2A70DCu) {
        ctx->pc = 0x2A70DCu;
            // 0x2a70dc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2A70E0u;
        goto label_2a70e0;
    }
    ctx->pc = 0x2A70D8u;
    {
        const bool branch_taken_0x2a70d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A70DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A70D8u;
            // 0x2a70dc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a70d8) {
            ctx->pc = 0x2A70F8u;
            goto label_2a70f8;
        }
    }
    ctx->pc = 0x2A70E0u;
label_2a70e0:
    // 0x2a70e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a70e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a70e4:
    // 0x2a70e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a70e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2a70e8:
    // 0x2a70e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a70e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a70ec:
    // 0x2a70ec: 0x0  nop
    ctx->pc = 0x2a70ecu;
    // NOP
label_2a70f0:
    // 0x2a70f0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a70f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2a70f4:
    // 0x2a70f4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a70f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a70f8:
    // 0x2a70f8: 0x8242001c  lb          $v0, 0x1C($s2)
    ctx->pc = 0x2a70f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
label_2a70fc:
    // 0x2a70fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a70fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a7100:
    // 0x2a7100: 0x0  nop
    ctx->pc = 0x2a7100u;
    // NOP
label_2a7104:
    // 0x2a7104: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a7104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a7108:
    // 0x2a7108: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a7108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a710c:
    // 0x2a710c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2a710cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_2a7110:
    // 0x2a7110: 0xe7a001dc  swc1        $f0, 0x1DC($sp)
    ctx->pc = 0x2a7110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
label_2a7114:
    // 0x2a7114: 0x9222008c  lbu         $v0, 0x8C($s1)
    ctx->pc = 0x2a7114u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
label_2a7118:
    // 0x2a7118: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_2a711c:
    if (ctx->pc == 0x2A711Cu) {
        ctx->pc = 0x2A711Cu;
            // 0x2a711c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x2A7120u;
        goto label_2a7120;
    }
    ctx->pc = 0x2A7118u;
    {
        const bool branch_taken_0x2a7118 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a7118) {
            ctx->pc = 0x2A711Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7118u;
            // 0x2a711c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A712Cu;
            goto label_2a712c;
        }
    }
    ctx->pc = 0x2A7120u;
label_2a7120:
    // 0x2a7120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a7124:
    // 0x2a7124: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a7128:
    if (ctx->pc == 0x2A7128u) {
        ctx->pc = 0x2A7128u;
            // 0x2a7128: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2A712Cu;
        goto label_2a712c;
    }
    ctx->pc = 0x2A7124u;
    {
        const bool branch_taken_0x2a7124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7124u;
            // 0x2a7128: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7124) {
            ctx->pc = 0x2A7144u;
            goto label_2a7144;
        }
    }
    ctx->pc = 0x2A712Cu;
label_2a712c:
    // 0x2a712c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a712cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a7130:
    // 0x2a7130: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a7130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2a7134:
    // 0x2a7134: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a7134u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a7138:
    // 0x2a7138: 0x0  nop
    ctx->pc = 0x2a7138u;
    // NOP
label_2a713c:
    // 0x2a713c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a713cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2a7140:
    // 0x2a7140: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a7140u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a7144:
    // 0x2a7144: 0x8242001d  lb          $v0, 0x1D($s2)
    ctx->pc = 0x2a7144u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 29)));
label_2a7148:
    // 0x2a7148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a714c:
    // 0x2a714c: 0x0  nop
    ctx->pc = 0x2a714cu;
    // NOP
label_2a7150:
    // 0x2a7150: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a7150u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a7154:
    // 0x2a7154: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a7154u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a7158:
    // 0x2a7158: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2a7158u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_2a715c:
    // 0x2a715c: 0xe7a001e0  swc1        $f0, 0x1E0($sp)
    ctx->pc = 0x2a715cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_2a7160:
    // 0x2a7160: 0x9222008e  lbu         $v0, 0x8E($s1)
    ctx->pc = 0x2a7160u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 142)));
label_2a7164:
    // 0x2a7164: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_2a7168:
    if (ctx->pc == 0x2A7168u) {
        ctx->pc = 0x2A7168u;
            // 0x2a7168: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x2A716Cu;
        goto label_2a716c;
    }
    ctx->pc = 0x2A7164u;
    {
        const bool branch_taken_0x2a7164 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a7164) {
            ctx->pc = 0x2A7168u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7164u;
            // 0x2a7168: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A7178u;
            goto label_2a7178;
        }
    }
    ctx->pc = 0x2A716Cu;
label_2a716c:
    // 0x2a716c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a716cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a7170:
    // 0x2a7170: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a7174:
    if (ctx->pc == 0x2A7174u) {
        ctx->pc = 0x2A7174u;
            // 0x2a7174: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2A7178u;
        goto label_2a7178;
    }
    ctx->pc = 0x2A7170u;
    {
        const bool branch_taken_0x2a7170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7170u;
            // 0x2a7174: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7170) {
            ctx->pc = 0x2A7190u;
            goto label_2a7190;
        }
    }
    ctx->pc = 0x2A7178u;
label_2a7178:
    // 0x2a7178: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a7178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a717c:
    // 0x2a717c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a717cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2a7180:
    // 0x2a7180: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a7180u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a7184:
    // 0x2a7184: 0x0  nop
    ctx->pc = 0x2a7184u;
    // NOP
label_2a7188:
    // 0x2a7188: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a7188u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2a718c:
    // 0x2a718c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a718cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a7190:
    // 0x2a7190: 0x8242001e  lb          $v0, 0x1E($s2)
    ctx->pc = 0x2a7190u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 30)));
label_2a7194:
    // 0x2a7194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a7198:
    // 0x2a7198: 0x0  nop
    ctx->pc = 0x2a7198u;
    // NOP
label_2a719c:
    // 0x2a719c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a719cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a71a0:
    // 0x2a71a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a71a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a71a4:
    // 0x2a71a4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2a71a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_2a71a8:
    // 0x2a71a8: 0xe7a001e4  swc1        $f0, 0x1E4($sp)
    ctx->pc = 0x2a71a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
label_2a71ac:
    // 0x2a71ac: 0x9222008f  lbu         $v0, 0x8F($s1)
    ctx->pc = 0x2a71acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 143)));
label_2a71b0:
    // 0x2a71b0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_2a71b4:
    if (ctx->pc == 0x2A71B4u) {
        ctx->pc = 0x2A71B4u;
            // 0x2a71b4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x2A71B8u;
        goto label_2a71b8;
    }
    ctx->pc = 0x2A71B0u;
    {
        const bool branch_taken_0x2a71b0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a71b0) {
            ctx->pc = 0x2A71B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A71B0u;
            // 0x2a71b4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A71C4u;
            goto label_2a71c4;
        }
    }
    ctx->pc = 0x2A71B8u;
label_2a71b8:
    // 0x2a71b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a71b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a71bc:
    // 0x2a71bc: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a71c0:
    if (ctx->pc == 0x2A71C0u) {
        ctx->pc = 0x2A71C0u;
            // 0x2a71c0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2A71C4u;
        goto label_2a71c4;
    }
    ctx->pc = 0x2A71BCu;
    {
        const bool branch_taken_0x2a71bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A71C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A71BCu;
            // 0x2a71c0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a71bc) {
            ctx->pc = 0x2A71DCu;
            goto label_2a71dc;
        }
    }
    ctx->pc = 0x2A71C4u;
label_2a71c4:
    // 0x2a71c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a71c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a71c8:
    // 0x2a71c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a71c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2a71cc:
    // 0x2a71cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a71ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a71d0:
    // 0x2a71d0: 0x0  nop
    ctx->pc = 0x2a71d0u;
    // NOP
label_2a71d4:
    // 0x2a71d4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a71d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2a71d8:
    // 0x2a71d8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a71d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a71dc:
    // 0x2a71dc: 0x8242001f  lb          $v0, 0x1F($s2)
    ctx->pc = 0x2a71dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 31)));
label_2a71e0:
    // 0x2a71e0: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2a71e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2a71e4:
    // 0x2a71e4: 0x26250070  addiu       $a1, $s1, 0x70
    ctx->pc = 0x2a71e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_2a71e8:
    // 0x2a71e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a71e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a71ec:
    // 0x2a71ec: 0x0  nop
    ctx->pc = 0x2a71ecu;
    // NOP
label_2a71f0:
    // 0x2a71f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a71f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a71f4:
    // 0x2a71f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a71f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a71f8:
    // 0x2a71f8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2a71f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_2a71fc:
    // 0x2a71fc: 0xc04cc04  jal         func_133010
label_2a7200:
    if (ctx->pc == 0x2A7200u) {
        ctx->pc = 0x2A7200u;
            // 0x2a7200: 0xe7a001e8  swc1        $f0, 0x1E8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
        ctx->pc = 0x2A7204u;
        goto label_2a7204;
    }
    ctx->pc = 0x2A71FCu;
    SET_GPR_U32(ctx, 31, 0x2A7204u);
    ctx->pc = 0x2A7200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A71FCu;
            // 0x2a7200: 0xe7a001e8  swc1        $f0, 0x1E8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7204u; }
        if (ctx->pc != 0x2A7204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7204u; }
        if (ctx->pc != 0x2A7204u) { return; }
    }
    ctx->pc = 0x2A7204u;
label_2a7204:
    // 0x2a7204: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x2a7204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a7208:
    // 0x2a7208: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x2a7208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2a720c:
    // 0x2a720c: 0xc64e0008  lwc1        $f14, 0x8($s2)
    ctx->pc = 0x2a720cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2a7210:
    // 0x2a7210: 0xc04cbd8  jal         func_132F60
label_2a7214:
    if (ctx->pc == 0x2A7214u) {
        ctx->pc = 0x2A7214u;
            // 0x2a7214: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x2A7218u;
        goto label_2a7218;
    }
    ctx->pc = 0x2A7210u;
    SET_GPR_U32(ctx, 31, 0x2A7218u);
    ctx->pc = 0x2A7214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7210u;
            // 0x2a7214: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7218u; }
        if (ctx->pc != 0x2A7218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7218u; }
        if (ctx->pc != 0x2A7218u) { return; }
    }
    ctx->pc = 0x2A7218u;
label_2a7218:
    // 0x2a7218: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2a7218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2a721c:
    // 0x2a721c: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x2a721cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_2a7220:
    // 0x2a7220: 0xc04cbe0  jal         func_132F80
label_2a7224:
    if (ctx->pc == 0x2A7224u) {
        ctx->pc = 0x2A7224u;
            // 0x2a7224: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A7228u;
        goto label_2a7228;
    }
    ctx->pc = 0x2A7220u;
    SET_GPR_U32(ctx, 31, 0x2A7228u);
    ctx->pc = 0x2A7224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7220u;
            // 0x2a7224: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7228u; }
        if (ctx->pc != 0x2A7228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7228u; }
        if (ctx->pc != 0x2A7228u) { return; }
    }
    ctx->pc = 0x2A7228u;
label_2a7228:
    // 0x2a7228: 0xc7a101dc  lwc1        $f1, 0x1DC($sp)
    ctx->pc = 0x2a7228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a722c:
    // 0x2a722c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a722cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a7230:
    // 0x2a7230: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a7234:
    // 0x2a7234: 0x0  nop
    ctx->pc = 0x2a7234u;
    // NOP
label_2a7238:
    // 0x2a7238: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a7238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a723c:
    // 0x2a723c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_2a7240:
    if (ctx->pc == 0x2A7240u) {
        ctx->pc = 0x2A7240u;
            // 0x2a7240: 0xc7a101e0  lwc1        $f1, 0x1E0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x2A7244u;
        goto label_2a7244;
    }
    ctx->pc = 0x2A723Cu;
    {
        const bool branch_taken_0x2a723c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a723c) {
            ctx->pc = 0x2A7240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A723Cu;
            // 0x2a7240: 0xc7a101e0  lwc1        $f1, 0x1E0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A724Cu;
            goto label_2a724c;
        }
    }
    ctx->pc = 0x2A7244u;
label_2a7244:
    // 0x2a7244: 0xe7a001dc  swc1        $f0, 0x1DC($sp)
    ctx->pc = 0x2a7244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
label_2a7248:
    // 0x2a7248: 0xc7a101e0  lwc1        $f1, 0x1E0($sp)
    ctx->pc = 0x2a7248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a724c:
    // 0x2a724c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a724cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a7250:
    // 0x2a7250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a7254:
    // 0x2a7254: 0x0  nop
    ctx->pc = 0x2a7254u;
    // NOP
label_2a7258:
    // 0x2a7258: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a7258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a725c:
    // 0x2a725c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_2a7260:
    if (ctx->pc == 0x2A7260u) {
        ctx->pc = 0x2A7260u;
            // 0x2a7260: 0xc7a101e4  lwc1        $f1, 0x1E4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x2A7264u;
        goto label_2a7264;
    }
    ctx->pc = 0x2A725Cu;
    {
        const bool branch_taken_0x2a725c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a725c) {
            ctx->pc = 0x2A7260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A725Cu;
            // 0x2a7260: 0xc7a101e4  lwc1        $f1, 0x1E4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A726Cu;
            goto label_2a726c;
        }
    }
    ctx->pc = 0x2A7264u;
label_2a7264:
    // 0x2a7264: 0xe7a001e0  swc1        $f0, 0x1E0($sp)
    ctx->pc = 0x2a7264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_2a7268:
    // 0x2a7268: 0xc7a101e4  lwc1        $f1, 0x1E4($sp)
    ctx->pc = 0x2a7268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a726c:
    // 0x2a726c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a726cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a7270:
    // 0x2a7270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a7274:
    // 0x2a7274: 0x0  nop
    ctx->pc = 0x2a7274u;
    // NOP
label_2a7278:
    // 0x2a7278: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a7278u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a727c:
    // 0x2a727c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_2a7280:
    if (ctx->pc == 0x2A7280u) {
        ctx->pc = 0x2A7280u;
            // 0x2a7280: 0xc7a101e8  lwc1        $f1, 0x1E8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x2A7284u;
        goto label_2a7284;
    }
    ctx->pc = 0x2A727Cu;
    {
        const bool branch_taken_0x2a727c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a727c) {
            ctx->pc = 0x2A7280u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A727Cu;
            // 0x2a7280: 0xc7a101e8  lwc1        $f1, 0x1E8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A728Cu;
            goto label_2a728c;
        }
    }
    ctx->pc = 0x2A7284u;
label_2a7284:
    // 0x2a7284: 0xe7a001e4  swc1        $f0, 0x1E4($sp)
    ctx->pc = 0x2a7284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
label_2a7288:
    // 0x2a7288: 0xc7a101e8  lwc1        $f1, 0x1E8($sp)
    ctx->pc = 0x2a7288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a728c:
    // 0x2a728c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a728cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a7290:
    // 0x2a7290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a7294:
    // 0x2a7294: 0x0  nop
    ctx->pc = 0x2a7294u;
    // NOP
label_2a7298:
    // 0x2a7298: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a7298u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a729c:
    // 0x2a729c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_2a72a0:
    if (ctx->pc == 0x2A72A0u) {
        ctx->pc = 0x2A72A0u;
            // 0x2a72a0: 0x8e25001c  lw          $a1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x2A72A4u;
        goto label_2a72a4;
    }
    ctx->pc = 0x2A729Cu;
    {
        const bool branch_taken_0x2a729c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a729c) {
            ctx->pc = 0x2A72A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A729Cu;
            // 0x2a72a0: 0x8e25001c  lw          $a1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A72ACu;
            goto label_2a72ac;
        }
    }
    ctx->pc = 0x2A72A4u;
label_2a72a4:
    // 0x2a72a4: 0xe7a001e8  swc1        $f0, 0x1E8($sp)
    ctx->pc = 0x2a72a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_2a72a8:
    // 0x2a72a8: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x2a72a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2a72ac:
    // 0x2a72ac: 0xc04cc04  jal         func_133010
label_2a72b0:
    if (ctx->pc == 0x2A72B0u) {
        ctx->pc = 0x2A72B0u;
            // 0x2a72b0: 0x27a40240  addiu       $a0, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->pc = 0x2A72B4u;
        goto label_2a72b4;
    }
    ctx->pc = 0x2A72ACu;
    SET_GPR_U32(ctx, 31, 0x2A72B4u);
    ctx->pc = 0x2A72B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A72ACu;
            // 0x2a72b0: 0x27a40240  addiu       $a0, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A72B4u; }
        if (ctx->pc != 0x2A72B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A72B4u; }
        if (ctx->pc != 0x2A72B4u) { return; }
    }
    ctx->pc = 0x2A72B4u;
label_2a72b4:
    // 0x2a72b4: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x2a72b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2a72b8:
    // 0x2a72b8: 0xc04cc04  jal         func_133010
label_2a72bc:
    if (ctx->pc == 0x2A72BCu) {
        ctx->pc = 0x2A72BCu;
            // 0x2a72bc: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x2A72C0u;
        goto label_2a72c0;
    }
    ctx->pc = 0x2A72B8u;
    SET_GPR_U32(ctx, 31, 0x2A72C0u);
    ctx->pc = 0x2A72BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A72B8u;
            // 0x2a72bc: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A72C0u; }
        if (ctx->pc != 0x2A72C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A72C0u; }
        if (ctx->pc != 0x2A72C0u) { return; }
    }
    ctx->pc = 0x2A72C0u;
label_2a72c0:
    // 0x2a72c0: 0xc6240054  lwc1        $f4, 0x54($s1)
    ctx->pc = 0x2a72c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2a72c4:
    // 0x2a72c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a72c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a72c8:
    // 0x2a72c8: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x2a72c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a72cc:
    // 0x2a72cc: 0xc62100a4  lwc1        $f1, 0xA4($s1)
    ctx->pc = 0x2a72ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a72d0:
    // 0x2a72d0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2a72d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2a72d4:
    // 0x2a72d4: 0x0  nop
    ctx->pc = 0x2a72d4u;
    // NOP
label_2a72d8:
    // 0x2a72d8: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x2a72d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a72dc:
    // 0x2a72dc: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_2a72e0:
    if (ctx->pc == 0x2A72E0u) {
        ctx->pc = 0x2A72E0u;
            // 0x2a72e0: 0x460400c1  sub.s       $f3, $f0, $f4 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
        ctx->pc = 0x2A72E4u;
        goto label_2a72e4;
    }
    ctx->pc = 0x2A72DCu;
    {
        const bool branch_taken_0x2a72dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A72E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A72DCu;
            // 0x2a72e0: 0x460400c1  sub.s       $f3, $f0, $f4 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a72dc) {
            ctx->pc = 0x2A7314u;
            goto label_2a7314;
        }
    }
    ctx->pc = 0x2A72E4u;
label_2a72e4:
    // 0x2a72e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2a72e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2a72e8:
    // 0x2a72e8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x2a72e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_2a72ec:
    // 0x2a72ec: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2a72ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a72f0:
    // 0x2a72f0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a72f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a72f4:
    // 0x2a72f4: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x2a72f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a72f8:
    // 0x2a72f8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2a72fc:
    if (ctx->pc == 0x2A72FCu) {
        ctx->pc = 0x2A7300u;
        goto label_2a7300;
    }
    ctx->pc = 0x2A72F8u;
    {
        const bool branch_taken_0x2a72f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a72f8) {
            ctx->pc = 0x2A7314u;
            goto label_2a7314;
        }
    }
    ctx->pc = 0x2A7300u;
label_2a7300:
    // 0x2a7300: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a7300u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a7304:
    // 0x2a7304: 0x0  nop
    ctx->pc = 0x2a7304u;
    // NOP
label_2a7308:
    // 0x2a7308: 0x46040018  adda.s      $f0, $f4
    ctx->pc = 0x2a7308u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_2a730c:
    // 0x2a730c: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x2a730cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_2a7310:
    // 0x2a7310: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x2a7310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
label_2a7314:
    // 0x2a7314: 0x52a00012  beql        $s5, $zero, . + 4 + (0x12 << 2)
label_2a7318:
    if (ctx->pc == 0x2A7318u) {
        ctx->pc = 0x2A7318u;
            // 0x2a7318: 0x2402bff3  addiu       $v0, $zero, -0x400D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950899));
        ctx->pc = 0x2A731Cu;
        goto label_2a731c;
    }
    ctx->pc = 0x2A7314u;
    {
        const bool branch_taken_0x2a7314 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7314) {
            ctx->pc = 0x2A7318u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7314u;
            // 0x2a7318: 0x2402bff3  addiu       $v0, $zero, -0x400D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950899));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A7360u;
            goto label_2a7360;
        }
    }
    ctx->pc = 0x2A731Cu;
label_2a731c:
    // 0x2a731c: 0xc6ac01a4  lwc1        $f12, 0x1A4($s5)
    ctx->pc = 0x2a731cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a7320:
    // 0x2a7320: 0xc6ad01a8  lwc1        $f13, 0x1A8($s5)
    ctx->pc = 0x2a7320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2a7324:
    // 0x2a7324: 0xc6ae01ac  lwc1        $f14, 0x1AC($s5)
    ctx->pc = 0x2a7324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2a7328:
    // 0x2a7328: 0xc04cbd8  jal         func_132F60
label_2a732c:
    if (ctx->pc == 0x2A732Cu) {
        ctx->pc = 0x2A732Cu;
            // 0x2a732c: 0x27a40270  addiu       $a0, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x2A7330u;
        goto label_2a7330;
    }
    ctx->pc = 0x2A7328u;
    SET_GPR_U32(ctx, 31, 0x2A7330u);
    ctx->pc = 0x2A732Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7328u;
            // 0x2a732c: 0x27a40270  addiu       $a0, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7330u; }
        if (ctx->pc != 0x2A7330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7330u; }
        if (ctx->pc != 0x2A7330u) { return; }
    }
    ctx->pc = 0x2A7330u;
label_2a7330:
    // 0x2a7330: 0xc6ac01b0  lwc1        $f12, 0x1B0($s5)
    ctx->pc = 0x2a7330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a7334:
    // 0x2a7334: 0xc6ad01b4  lwc1        $f13, 0x1B4($s5)
    ctx->pc = 0x2a7334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2a7338:
    // 0x2a7338: 0xc6ae01b8  lwc1        $f14, 0x1B8($s5)
    ctx->pc = 0x2a7338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2a733c:
    // 0x2a733c: 0xc04cbd8  jal         func_132F60
label_2a7340:
    if (ctx->pc == 0x2A7340u) {
        ctx->pc = 0x2A7340u;
            // 0x2a7340: 0x27a40260  addiu       $a0, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->pc = 0x2A7344u;
        goto label_2a7344;
    }
    ctx->pc = 0x2A733Cu;
    SET_GPR_U32(ctx, 31, 0x2A7344u);
    ctx->pc = 0x2A7340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A733Cu;
            // 0x2a7340: 0x27a40260  addiu       $a0, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7344u; }
        if (ctx->pc != 0x2A7344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7344u; }
        if (ctx->pc != 0x2A7344u) { return; }
    }
    ctx->pc = 0x2A7344u;
label_2a7344:
    // 0x2a7344: 0xc6ac01bc  lwc1        $f12, 0x1BC($s5)
    ctx->pc = 0x2a7344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a7348:
    // 0x2a7348: 0xc6ad01c0  lwc1        $f13, 0x1C0($s5)
    ctx->pc = 0x2a7348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2a734c:
    // 0x2a734c: 0xc6ae01c4  lwc1        $f14, 0x1C4($s5)
    ctx->pc = 0x2a734cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2a7350:
    // 0x2a7350: 0xc04cbd8  jal         func_132F60
label_2a7354:
    if (ctx->pc == 0x2A7354u) {
        ctx->pc = 0x2A7354u;
            // 0x2a7354: 0x27a40250  addiu       $a0, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x2A7358u;
        goto label_2a7358;
    }
    ctx->pc = 0x2A7350u;
    SET_GPR_U32(ctx, 31, 0x2A7358u);
    ctx->pc = 0x2A7354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7350u;
            // 0x2a7354: 0x27a40250  addiu       $a0, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7358u; }
        if (ctx->pc != 0x2A7358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7358u; }
        if (ctx->pc != 0x2A7358u) { return; }
    }
    ctx->pc = 0x2A7358u;
label_2a7358:
    // 0x2a7358: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a735c:
    if (ctx->pc == 0x2A735Cu) {
        ctx->pc = 0x2A735Cu;
            // 0x2a735c: 0xc7ad01d0  lwc1        $f13, 0x1D0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->pc = 0x2A7360u;
        goto label_2a7360;
    }
    ctx->pc = 0x2A7358u;
    {
        const bool branch_taken_0x2a7358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A735Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7358u;
            // 0x2a735c: 0xc7ad01d0  lwc1        $f13, 0x1D0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7358) {
            ctx->pc = 0x2A7368u;
            goto label_2a7368;
        }
    }
    ctx->pc = 0x2A7360u;
label_2a7360:
    // 0x2a7360: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x2a7360u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_2a7364:
    // 0x2a7364: 0xc7ad01d0  lwc1        $f13, 0x1D0($sp)
    ctx->pc = 0x2a7364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2a7368:
    // 0x2a7368: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x2a7368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_2a736c:
    // 0x2a736c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a736cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a7370:
    // 0x2a7370: 0xc04cbd8  jal         func_132F60
label_2a7374:
    if (ctx->pc == 0x2A7374u) {
        ctx->pc = 0x2A7374u;
            // 0x2a7374: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2A7378u;
        goto label_2a7378;
    }
    ctx->pc = 0x2A7370u;
    SET_GPR_U32(ctx, 31, 0x2A7378u);
    ctx->pc = 0x2A7374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7370u;
            // 0x2a7374: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7378u; }
        if (ctx->pc != 0x2A7378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7378u; }
        if (ctx->pc != 0x2A7378u) { return; }
    }
    ctx->pc = 0x2A7378u;
label_2a7378:
    // 0x2a7378: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a7378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a737c:
    // 0x2a737c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a737cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a7380:
    // 0x2a7380: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a7380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a7384:
    // 0x2a7384: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x2a7384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_2a7388:
    // 0x2a7388: 0xc04cbd8  jal         func_132F60
label_2a738c:
    if (ctx->pc == 0x2A738Cu) {
        ctx->pc = 0x2A738Cu;
            // 0x2a738c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2A7390u;
        goto label_2a7390;
    }
    ctx->pc = 0x2A7388u;
    SET_GPR_U32(ctx, 31, 0x2A7390u);
    ctx->pc = 0x2A738Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7388u;
            // 0x2a738c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7390u; }
        if (ctx->pc != 0x2A7390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7390u; }
        if (ctx->pc != 0x2A7390u) { return; }
    }
    ctx->pc = 0x2A7390u;
label_2a7390:
    // 0x2a7390: 0xc7a001d0  lwc1        $f0, 0x1D0($sp)
    ctx->pc = 0x2a7390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7394:
    // 0x2a7394: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2a7394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2a7398:
    // 0x2a7398: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a7398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a739c:
    // 0x2a739c: 0x27a40330  addiu       $a0, $sp, 0x330
    ctx->pc = 0x2a739cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
label_2a73a0:
    // 0x2a73a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a73a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a73a4:
    // 0x2a73a4: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x2a73a4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a73a8:
    // 0x2a73a8: 0xc04cbd8  jal         func_132F60
label_2a73ac:
    if (ctx->pc == 0x2A73ACu) {
        ctx->pc = 0x2A73ACu;
            // 0x2a73ac: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2A73B0u;
        goto label_2a73b0;
    }
    ctx->pc = 0x2A73A8u;
    SET_GPR_U32(ctx, 31, 0x2A73B0u);
    ctx->pc = 0x2A73ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A73A8u;
            // 0x2a73ac: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A73B0u; }
        if (ctx->pc != 0x2A73B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A73B0u; }
        if (ctx->pc != 0x2A73B0u) { return; }
    }
    ctx->pc = 0x2A73B0u;
label_2a73b0:
    // 0x2a73b0: 0xc7a001d4  lwc1        $f0, 0x1D4($sp)
    ctx->pc = 0x2a73b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a73b4:
    // 0x2a73b4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2a73b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2a73b8:
    // 0x2a73b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a73b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a73bc:
    // 0x2a73bc: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x2a73bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_2a73c0:
    // 0x2a73c0: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x2a73c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a73c4:
    // 0x2a73c4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2a73c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a73c8:
    // 0x2a73c8: 0xc04cbd8  jal         func_132F60
label_2a73cc:
    if (ctx->pc == 0x2A73CCu) {
        ctx->pc = 0x2A73CCu;
            // 0x2a73cc: 0x46000b82  mul.s       $f14, $f1, $f0 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x2A73D0u;
        goto label_2a73d0;
    }
    ctx->pc = 0x2A73C8u;
    SET_GPR_U32(ctx, 31, 0x2A73D0u);
    ctx->pc = 0x2A73CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A73C8u;
            // 0x2a73cc: 0x46000b82  mul.s       $f14, $f1, $f0 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A73D0u; }
        if (ctx->pc != 0x2A73D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A73D0u; }
        if (ctx->pc != 0x2A73D0u) { return; }
    }
    ctx->pc = 0x2A73D0u;
label_2a73d0:
    // 0x2a73d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a73d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a73d4:
    // 0x2a73d4: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x2a73d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_2a73d8:
    // 0x2a73d8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2a73d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a73dc:
    // 0x2a73dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a73dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a73e0:
    // 0x2a73e0: 0xc04cbd8  jal         func_132F60
label_2a73e4:
    if (ctx->pc == 0x2A73E4u) {
        ctx->pc = 0x2A73E4u;
            // 0x2a73e4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x2A73E8u;
        goto label_2a73e8;
    }
    ctx->pc = 0x2A73E0u;
    SET_GPR_U32(ctx, 31, 0x2A73E8u);
    ctx->pc = 0x2A73E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A73E0u;
            // 0x2a73e4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A73E8u; }
        if (ctx->pc != 0x2A73E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A73E8u; }
        if (ctx->pc != 0x2A73E8u) { return; }
    }
    ctx->pc = 0x2A73E8u;
label_2a73e8:
    // 0x2a73e8: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x2a73e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_2a73ec:
    // 0x2a73ec: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
label_2a73f0:
    if (ctx->pc == 0x2A73F0u) {
        ctx->pc = 0x2A73F0u;
            // 0x2a73f0: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x2A73F4u;
        goto label_2a73f4;
    }
    ctx->pc = 0x2A73ECu;
    {
        const bool branch_taken_0x2a73ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a73ec) {
            ctx->pc = 0x2A73F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A73ECu;
            // 0x2a73f0: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A74C4u;
            goto label_2a74c4;
        }
    }
    ctx->pc = 0x2A73F4u;
label_2a73f4:
    // 0x2a73f4: 0xc7a101dc  lwc1        $f1, 0x1DC($sp)
    ctx->pc = 0x2a73f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a73f8:
    // 0x2a73f8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2a73f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2a73fc:
    // 0x2a73fc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2a73fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2a7400:
    // 0x2a7400: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x2a7400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_2a7404:
    // 0x2a7404: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a7404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a7408:
    // 0x2a7408: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2a7408u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2a740c:
    // 0x2a740c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a740cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a7410:
    // 0x2a7410: 0x0  nop
    ctx->pc = 0x2a7410u;
    // NOP
label_2a7414:
    // 0x2a7414: 0x46010143  div.s       $f5, $f0, $f1
    ctx->pc = 0x2a7414u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[5] = ctx->f[0] / ctx->f[1];
label_2a7418:
    // 0x2a7418: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x2a7418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_2a741c:
    // 0x2a741c: 0x3444f983  ori         $a0, $v0, 0xF983
    ctx->pc = 0x2a741cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_2a7420:
    // 0x2a7420: 0x3c0238c9  lui         $v0, 0x38C9
    ctx->pc = 0x2a7420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14537 << 16));
label_2a7424:
    // 0x2a7424: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2a7424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2a7428:
    // 0x2a7428: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x2a7428u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2a742c:
    // 0x2a742c: 0x0  nop
    ctx->pc = 0x2a742cu;
    // NOP
label_2a7430:
    // 0x2a7430: 0x46151882  mul.s       $f2, $f3, $f21
    ctx->pc = 0x2a7430u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
label_2a7434:
    // 0x2a7434: 0xc6240060  lwc1        $f4, 0x60($s1)
    ctx->pc = 0x2a7434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2a7438:
    // 0x2a7438: 0x46050041  sub.s       $f1, $f0, $f5
    ctx->pc = 0x2a7438u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_2a743c:
    // 0x2a743c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2a743cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_2a7440:
    // 0x2a7440: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a7440u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_2a7444:
    // 0x2a7444: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a7448:
    // 0x2a7448: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x2a7448u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2a744c:
    // 0x2a744c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a744cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_2a7450:
    // 0x2a7450: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2a7450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2a7454:
    // 0x2a7454: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2a7454u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2a7458:
    // 0x2a7458: 0x0  nop
    ctx->pc = 0x2a7458u;
    // NOP
label_2a745c:
    // 0x2a745c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2a745cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2a7460:
    // 0x2a7460: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x2a7460u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2a7464:
    // 0x2a7464: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x2a7464u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2a7468:
    // 0x2a7468: 0x28428000  slti        $v0, $v0, -0x8000
    ctx->pc = 0x2a7468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294934528) ? 1 : 0);
label_2a746c:
    // 0x2a746c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2a746cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2a7470:
    // 0x2a7470: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2a7470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2a7474:
    // 0x2a7474: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2a7474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2a7478:
    // 0x2a7478: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2a7478u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2a747c:
    // 0x2a747c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a747cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_2a7480:
    // 0x2a7480: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2a7480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2a7484:
    // 0x2a7484: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x2a7484u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2a7488:
    // 0x2a7488: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x2a7488u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_2a748c:
    // 0x2a748c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2a748cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2a7490:
    // 0x2a7490: 0x0  nop
    ctx->pc = 0x2a7490u;
    // NOP
label_2a7494:
    // 0x2a7494: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2a7494u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_2a7498:
    // 0x2a7498: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x2a7498u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2a749c:
    // 0x2a749c: 0x4605185c  madd.s      $f1, $f3, $f5
    ctx->pc = 0x2a749cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[5]));
label_2a74a0:
    // 0x2a74a0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a74a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2a74a4:
    // 0x2a74a4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2a74a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2a74a8:
    // 0x2a74a8: 0x0  nop
    ctx->pc = 0x2a74a8u;
    // NOP
label_2a74ac:
    // 0x2a74ac: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a74acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2a74b0:
    // 0x2a74b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a74b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2a74b4:
    // 0x2a74b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a74b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a74b8:
    // 0x2a74b8: 0x0  nop
    ctx->pc = 0x2a74b8u;
    // NOP
label_2a74bc:
    // 0x2a74bc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a74bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2a74c0:
    // 0x2a74c0: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x2a74c0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a74c4:
    // 0x2a74c4: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x2a74c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
label_2a74c8:
    // 0x2a74c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a74c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a74cc:
    // 0x2a74cc: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x2a74ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
label_2a74d0:
    // 0x2a74d0: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x2a74d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_2a74d4:
    // 0x2a74d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a74d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a74d8:
    // 0x2a74d8: 0x0  nop
    ctx->pc = 0x2a74d8u;
    // NOP
label_2a74dc:
    // 0x2a74dc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2a74dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2a74e0:
    // 0x2a74e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a74e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2a74e4:
    // 0x2a74e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a74e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a74e8:
    // 0x2a74e8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2a74e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_2a74ec:
    // 0x2a74ec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a74ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a74f0:
    // 0x2a74f0: 0xc04c970  jal         func_1325C0
label_2a74f4:
    if (ctx->pc == 0x2A74F4u) {
        ctx->pc = 0x2A74F4u;
            // 0x2a74f4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2A74F8u;
        goto label_2a74f8;
    }
    ctx->pc = 0x2A74F0u;
    SET_GPR_U32(ctx, 31, 0x2A74F8u);
    ctx->pc = 0x2A74F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A74F0u;
            // 0x2a74f4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A74F8u; }
        if (ctx->pc != 0x2A74F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A74F8u; }
        if (ctx->pc != 0x2A74F8u) { return; }
    }
    ctx->pc = 0x2A74F8u;
label_2a74f8:
    // 0x2a74f8: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x2a74f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2a74fc:
    // 0x2a74fc: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x2a74fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_2a7500:
    // 0x2a7500: 0xc04c72c  jal         func_131CB0
label_2a7504:
    if (ctx->pc == 0x2A7504u) {
        ctx->pc = 0x2A7504u;
            // 0x2a7504: 0x27a60210  addiu       $a2, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = 0x2A7508u;
        goto label_2a7508;
    }
    ctx->pc = 0x2A7500u;
    SET_GPR_U32(ctx, 31, 0x2A7508u);
    ctx->pc = 0x2A7504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7500u;
            // 0x2a7504: 0x27a60210  addiu       $a2, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7508u; }
        if (ctx->pc != 0x2A7508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7508u; }
        if (ctx->pc != 0x2A7508u) { return; }
    }
    ctx->pc = 0x2A7508u;
label_2a7508:
    // 0x2a7508: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x2a7508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_2a750c:
    // 0x2a750c: 0xc04f278  jal         func_13C9E0
label_2a7510:
    if (ctx->pc == 0x2A7510u) {
        ctx->pc = 0x2A7510u;
            // 0x2a7510: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x2A7514u;
        goto label_2a7514;
    }
    ctx->pc = 0x2A750Cu;
    SET_GPR_U32(ctx, 31, 0x2A7514u);
    ctx->pc = 0x2A7510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A750Cu;
            // 0x2a7510: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7514u; }
        if (ctx->pc != 0x2A7514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7514u; }
        if (ctx->pc != 0x2A7514u) { return; }
    }
    ctx->pc = 0x2A7514u;
label_2a7514:
    // 0x2a7514: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x2a7514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_2a7518:
    // 0x2a7518: 0x27a502f0  addiu       $a1, $sp, 0x2F0
    ctx->pc = 0x2a7518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_2a751c:
    // 0x2a751c: 0xc04cca0  jal         func_133280
label_2a7520:
    if (ctx->pc == 0x2A7520u) {
        ctx->pc = 0x2A7520u;
            // 0x2a7520: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A7524u;
        goto label_2a7524;
    }
    ctx->pc = 0x2A751Cu;
    SET_GPR_U32(ctx, 31, 0x2A7524u);
    ctx->pc = 0x2A7520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A751Cu;
            // 0x2a7520: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7524u; }
        if (ctx->pc != 0x2A7524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7524u; }
        if (ctx->pc != 0x2A7524u) { return; }
    }
    ctx->pc = 0x2A7524u;
label_2a7524:
    // 0x2a7524: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x2a7524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_2a7528:
    // 0x2a7528: 0x27a502f0  addiu       $a1, $sp, 0x2F0
    ctx->pc = 0x2a7528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_2a752c:
    // 0x2a752c: 0xc04cca0  jal         func_133280
label_2a7530:
    if (ctx->pc == 0x2A7530u) {
        ctx->pc = 0x2A7530u;
            // 0x2a7530: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A7534u;
        goto label_2a7534;
    }
    ctx->pc = 0x2A752Cu;
    SET_GPR_U32(ctx, 31, 0x2A7534u);
    ctx->pc = 0x2A7530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A752Cu;
            // 0x2a7530: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7534u; }
        if (ctx->pc != 0x2A7534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7534u; }
        if (ctx->pc != 0x2A7534u) { return; }
    }
    ctx->pc = 0x2A7534u;
label_2a7534:
    // 0x2a7534: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x2a7534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_2a7538:
    // 0x2a7538: 0x27a502f0  addiu       $a1, $sp, 0x2F0
    ctx->pc = 0x2a7538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_2a753c:
    // 0x2a753c: 0xc04cca0  jal         func_133280
label_2a7540:
    if (ctx->pc == 0x2A7540u) {
        ctx->pc = 0x2A7540u;
            // 0x2a7540: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A7544u;
        goto label_2a7544;
    }
    ctx->pc = 0x2A753Cu;
    SET_GPR_U32(ctx, 31, 0x2A7544u);
    ctx->pc = 0x2A7540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A753Cu;
            // 0x2a7540: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7544u; }
        if (ctx->pc != 0x2A7544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7544u; }
        if (ctx->pc != 0x2A7544u) { return; }
    }
    ctx->pc = 0x2A7544u;
label_2a7544:
    // 0x2a7544: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x2a7544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_2a7548:
    // 0x2a7548: 0x27a502f0  addiu       $a1, $sp, 0x2F0
    ctx->pc = 0x2a7548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_2a754c:
    // 0x2a754c: 0xc04cca0  jal         func_133280
label_2a7550:
    if (ctx->pc == 0x2A7550u) {
        ctx->pc = 0x2A7550u;
            // 0x2a7550: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A7554u;
        goto label_2a7554;
    }
    ctx->pc = 0x2A754Cu;
    SET_GPR_U32(ctx, 31, 0x2A7554u);
    ctx->pc = 0x2A7550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A754Cu;
            // 0x2a7550: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7554u; }
        if (ctx->pc != 0x2A7554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7554u; }
        if (ctx->pc != 0x2A7554u) { return; }
    }
    ctx->pc = 0x2A7554u;
label_2a7554:
    // 0x2a7554: 0x27a40330  addiu       $a0, $sp, 0x330
    ctx->pc = 0x2a7554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
label_2a7558:
    // 0x2a7558: 0x27a502f0  addiu       $a1, $sp, 0x2F0
    ctx->pc = 0x2a7558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_2a755c:
    // 0x2a755c: 0xc04cca0  jal         func_133280
label_2a7560:
    if (ctx->pc == 0x2A7560u) {
        ctx->pc = 0x2A7560u;
            // 0x2a7560: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A7564u;
        goto label_2a7564;
    }
    ctx->pc = 0x2A755Cu;
    SET_GPR_U32(ctx, 31, 0x2A7564u);
    ctx->pc = 0x2A7560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A755Cu;
            // 0x2a7560: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7564u; }
        if (ctx->pc != 0x2A7564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7564u; }
        if (ctx->pc != 0x2A7564u) { return; }
    }
    ctx->pc = 0x2A7564u;
label_2a7564:
    // 0x2a7564: 0x32620002  andi        $v0, $s3, 0x2
    ctx->pc = 0x2a7564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
label_2a7568:
    // 0x2a7568: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_2a756c:
    if (ctx->pc == 0x2A756Cu) {
        ctx->pc = 0x2A7570u;
        goto label_2a7570;
    }
    ctx->pc = 0x2A7568u;
    {
        const bool branch_taken_0x2a7568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7568) {
            ctx->pc = 0x2A7640u;
            goto label_2a7640;
        }
    }
    ctx->pc = 0x2A7570u;
label_2a7570:
    // 0x2a7570: 0xc7a101e0  lwc1        $f1, 0x1E0($sp)
    ctx->pc = 0x2a7570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a7574:
    // 0x2a7574: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2a7574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2a7578:
    // 0x2a7578: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2a7578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2a757c:
    // 0x2a757c: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x2a757cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_2a7580:
    // 0x2a7580: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a7580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a7584:
    // 0x2a7584: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2a7584u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2a7588:
    // 0x2a7588: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a758c:
    // 0x2a758c: 0x0  nop
    ctx->pc = 0x2a758cu;
    // NOP
label_2a7590:
    // 0x2a7590: 0x46010143  div.s       $f5, $f0, $f1
    ctx->pc = 0x2a7590u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[5] = ctx->f[0] / ctx->f[1];
label_2a7594:
    // 0x2a7594: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x2a7594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_2a7598:
    // 0x2a7598: 0x3444f983  ori         $a0, $v0, 0xF983
    ctx->pc = 0x2a7598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_2a759c:
    // 0x2a759c: 0x3c0238c9  lui         $v0, 0x38C9
    ctx->pc = 0x2a759cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14537 << 16));
label_2a75a0:
    // 0x2a75a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2a75a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2a75a4:
    // 0x2a75a4: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x2a75a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2a75a8:
    // 0x2a75a8: 0x0  nop
    ctx->pc = 0x2a75a8u;
    // NOP
label_2a75ac:
    // 0x2a75ac: 0x46151882  mul.s       $f2, $f3, $f21
    ctx->pc = 0x2a75acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
label_2a75b0:
    // 0x2a75b0: 0xc6240064  lwc1        $f4, 0x64($s1)
    ctx->pc = 0x2a75b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2a75b4:
    // 0x2a75b4: 0x46050041  sub.s       $f1, $f0, $f5
    ctx->pc = 0x2a75b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_2a75b8:
    // 0x2a75b8: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2a75b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_2a75bc:
    // 0x2a75bc: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a75bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_2a75c0:
    // 0x2a75c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a75c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a75c4:
    // 0x2a75c4: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x2a75c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2a75c8:
    // 0x2a75c8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a75c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_2a75cc:
    // 0x2a75cc: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2a75ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2a75d0:
    // 0x2a75d0: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2a75d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2a75d4:
    // 0x2a75d4: 0x0  nop
    ctx->pc = 0x2a75d4u;
    // NOP
label_2a75d8:
    // 0x2a75d8: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2a75d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2a75dc:
    // 0x2a75dc: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x2a75dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2a75e0:
    // 0x2a75e0: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x2a75e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2a75e4:
    // 0x2a75e4: 0x28428000  slti        $v0, $v0, -0x8000
    ctx->pc = 0x2a75e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294934528) ? 1 : 0);
label_2a75e8:
    // 0x2a75e8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2a75e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2a75ec:
    // 0x2a75ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2a75ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2a75f0:
    // 0x2a75f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2a75f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2a75f4:
    // 0x2a75f4: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2a75f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2a75f8:
    // 0x2a75f8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a75f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_2a75fc:
    // 0x2a75fc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2a75fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2a7600:
    // 0x2a7600: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x2a7600u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2a7604:
    // 0x2a7604: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x2a7604u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_2a7608:
    // 0x2a7608: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2a7608u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2a760c:
    // 0x2a760c: 0x0  nop
    ctx->pc = 0x2a760cu;
    // NOP
label_2a7610:
    // 0x2a7610: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2a7610u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_2a7614:
    // 0x2a7614: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x2a7614u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2a7618:
    // 0x2a7618: 0x4605185c  madd.s      $f1, $f3, $f5
    ctx->pc = 0x2a7618u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[5]));
label_2a761c:
    // 0x2a761c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a761cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2a7620:
    // 0x2a7620: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2a7620u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2a7624:
    // 0x2a7624: 0x0  nop
    ctx->pc = 0x2a7624u;
    // NOP
label_2a7628:
    // 0x2a7628: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a7628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2a762c:
    // 0x2a762c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a762cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2a7630:
    // 0x2a7630: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a7630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a7634:
    // 0x2a7634: 0x0  nop
    ctx->pc = 0x2a7634u;
    // NOP
label_2a7638:
    // 0x2a7638: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a7638u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2a763c:
    // 0x2a763c: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x2a763cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a7640:
    // 0x2a7640: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x2a7640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2a7644:
    // 0x2a7644: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2a7644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a7648:
    // 0x2a7648: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2a7648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a764c:
    // 0x2a764c: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x2a764cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a7650:
    // 0x2a7650: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_2a7654:
    if (ctx->pc == 0x2A7654u) {
        ctx->pc = 0x2A7658u;
        goto label_2a7658;
    }
    ctx->pc = 0x2A7650u;
    {
        const bool branch_taken_0x2a7650 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a7650) {
            ctx->pc = 0x2A7698u;
            goto label_2a7698;
        }
    }
    ctx->pc = 0x2A7658u;
label_2a7658:
    // 0x2a7658: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x2a7658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a765c:
    // 0x2a765c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2a765cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a7660:
    // 0x2a7660: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2a7664:
    if (ctx->pc == 0x2A7664u) {
        ctx->pc = 0x2A7668u;
        goto label_2a7668;
    }
    ctx->pc = 0x2A7660u;
    {
        const bool branch_taken_0x2a7660 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a7660) {
            ctx->pc = 0x2A7678u;
            goto label_2a7678;
        }
    }
    ctx->pc = 0x2A7668u;
label_2a7668:
    // 0x2a7668: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x2a7668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_2a766c:
    // 0x2a766c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a766cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a7670:
    // 0x2a7670: 0x10000020  b           . + 4 + (0x20 << 2)
label_2a7674:
    if (ctx->pc == 0x2A7674u) {
        ctx->pc = 0x2A7674u;
            // 0x2a7674: 0xae220094  sw          $v0, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
        ctx->pc = 0x2A7678u;
        goto label_2a7678;
    }
    ctx->pc = 0x2A7670u;
    {
        const bool branch_taken_0x2a7670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7670u;
            // 0x2a7674: 0xae220094  sw          $v0, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7670) {
            ctx->pc = 0x2A76F4u;
            goto label_2a76f4;
        }
    }
    ctx->pc = 0x2A7678u;
label_2a7678:
    // 0x2a7678: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2a7678u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a767c:
    // 0x2a767c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_2a7680:
    if (ctx->pc == 0x2A7680u) {
        ctx->pc = 0x2A7680u;
            // 0x2a7680: 0x8e220094  lw          $v0, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->pc = 0x2A7684u;
        goto label_2a7684;
    }
    ctx->pc = 0x2A767Cu;
    {
        const bool branch_taken_0x2a767c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a767c) {
            ctx->pc = 0x2A7680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A767Cu;
            // 0x2a7680: 0x8e220094  lw          $v0, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A768Cu;
            goto label_2a768c;
        }
    }
    ctx->pc = 0x2A7684u;
label_2a7684:
    // 0x2a7684: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2a7688:
    if (ctx->pc == 0x2A7688u) {
        ctx->pc = 0x2A7688u;
            // 0x2a7688: 0xae200094  sw          $zero, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
        ctx->pc = 0x2A768Cu;
        goto label_2a768c;
    }
    ctx->pc = 0x2A7684u;
    {
        const bool branch_taken_0x2a7684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7684u;
            // 0x2a7688: 0xae200094  sw          $zero, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7684) {
            ctx->pc = 0x2A76F4u;
            goto label_2a76f4;
        }
    }
    ctx->pc = 0x2A768Cu;
label_2a768c:
    // 0x2a768c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a768cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2a7690:
    // 0x2a7690: 0x10000018  b           . + 4 + (0x18 << 2)
label_2a7694:
    if (ctx->pc == 0x2A7694u) {
        ctx->pc = 0x2A7694u;
            // 0x2a7694: 0xae220094  sw          $v0, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
        ctx->pc = 0x2A7698u;
        goto label_2a7698;
    }
    ctx->pc = 0x2A7690u;
    {
        const bool branch_taken_0x2a7690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7690u;
            // 0x2a7694: 0xae220094  sw          $v0, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7690) {
            ctx->pc = 0x2A76F4u;
            goto label_2a76f4;
        }
    }
    ctx->pc = 0x2A7698u;
label_2a7698:
    // 0x2a7698: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2a7698u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a769c:
    // 0x2a769c: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
label_2a76a0:
    if (ctx->pc == 0x2A76A0u) {
        ctx->pc = 0x2A76A0u;
            // 0x2a76a0: 0x8e220094  lw          $v0, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->pc = 0x2A76A4u;
        goto label_2a76a4;
    }
    ctx->pc = 0x2A769Cu;
    {
        const bool branch_taken_0x2a769c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a769c) {
            ctx->pc = 0x2A76A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A769Cu;
            // 0x2a76a0: 0x8e220094  lw          $v0, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A76E4u;
            goto label_2a76e4;
        }
    }
    ctx->pc = 0x2A76A4u;
label_2a76a4:
    // 0x2a76a4: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x2a76a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a76a8:
    // 0x2a76a8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2a76a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a76ac:
    // 0x2a76ac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2a76b0:
    if (ctx->pc == 0x2A76B0u) {
        ctx->pc = 0x2A76B4u;
        goto label_2a76b4;
    }
    ctx->pc = 0x2A76ACu;
    {
        const bool branch_taken_0x2a76ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a76ac) {
            ctx->pc = 0x2A76C4u;
            goto label_2a76c4;
        }
    }
    ctx->pc = 0x2A76B4u;
label_2a76b4:
    // 0x2a76b4: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x2a76b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_2a76b8:
    // 0x2a76b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a76b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a76bc:
    // 0x2a76bc: 0x1000000d  b           . + 4 + (0xD << 2)
label_2a76c0:
    if (ctx->pc == 0x2A76C0u) {
        ctx->pc = 0x2A76C0u;
            // 0x2a76c0: 0xae220094  sw          $v0, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
        ctx->pc = 0x2A76C4u;
        goto label_2a76c4;
    }
    ctx->pc = 0x2A76BCu;
    {
        const bool branch_taken_0x2a76bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A76C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A76BCu;
            // 0x2a76c0: 0xae220094  sw          $v0, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a76bc) {
            ctx->pc = 0x2A76F4u;
            goto label_2a76f4;
        }
    }
    ctx->pc = 0x2A76C4u;
label_2a76c4:
    // 0x2a76c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2a76c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a76c8:
    // 0x2a76c8: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_2a76cc:
    if (ctx->pc == 0x2A76CCu) {
        ctx->pc = 0x2A76CCu;
            // 0x2a76cc: 0x8e220094  lw          $v0, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->pc = 0x2A76D0u;
        goto label_2a76d0;
    }
    ctx->pc = 0x2A76C8u;
    {
        const bool branch_taken_0x2a76c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a76c8) {
            ctx->pc = 0x2A76CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A76C8u;
            // 0x2a76cc: 0x8e220094  lw          $v0, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A76D8u;
            goto label_2a76d8;
        }
    }
    ctx->pc = 0x2A76D0u;
label_2a76d0:
    // 0x2a76d0: 0x10000008  b           . + 4 + (0x8 << 2)
label_2a76d4:
    if (ctx->pc == 0x2A76D4u) {
        ctx->pc = 0x2A76D4u;
            // 0x2a76d4: 0xae200094  sw          $zero, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
        ctx->pc = 0x2A76D8u;
        goto label_2a76d8;
    }
    ctx->pc = 0x2A76D0u;
    {
        const bool branch_taken_0x2a76d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A76D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A76D0u;
            // 0x2a76d4: 0xae200094  sw          $zero, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a76d0) {
            ctx->pc = 0x2A76F4u;
            goto label_2a76f4;
        }
    }
    ctx->pc = 0x2A76D8u;
label_2a76d8:
    // 0x2a76d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a76d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2a76dc:
    // 0x2a76dc: 0x10000005  b           . + 4 + (0x5 << 2)
label_2a76e0:
    if (ctx->pc == 0x2A76E0u) {
        ctx->pc = 0x2A76E0u;
            // 0x2a76e0: 0xae220094  sw          $v0, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
        ctx->pc = 0x2A76E4u;
        goto label_2a76e4;
    }
    ctx->pc = 0x2A76DCu;
    {
        const bool branch_taken_0x2a76dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A76E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A76DCu;
            // 0x2a76e0: 0xae220094  sw          $v0, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a76dc) {
            ctx->pc = 0x2A76F4u;
            goto label_2a76f4;
        }
    }
    ctx->pc = 0x2A76E4u;
label_2a76e4:
    // 0x2a76e4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2a76e8:
    if (ctx->pc == 0x2A76E8u) {
        ctx->pc = 0x2A76E8u;
            // 0x2a76e8: 0xae200094  sw          $zero, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
        ctx->pc = 0x2A76ECu;
        goto label_2a76ec;
    }
    ctx->pc = 0x2A76E4u;
    {
        const bool branch_taken_0x2a76e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a76e4) {
            ctx->pc = 0x2A76E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A76E4u;
            // 0x2a76e8: 0xae200094  sw          $zero, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A76F4u;
            goto label_2a76f4;
        }
    }
    ctx->pc = 0x2A76ECu;
label_2a76ec:
    // 0x2a76ec: 0xe6210098  swc1        $f1, 0x98($s1)
    ctx->pc = 0x2a76ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
label_2a76f0:
    // 0x2a76f0: 0xae200094  sw          $zero, 0x94($s1)
    ctx->pc = 0x2a76f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
label_2a76f4:
    // 0x2a76f4: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x2a76f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_2a76f8:
    // 0x2a76f8: 0x2c41003d  sltiu       $at, $v0, 0x3D
    ctx->pc = 0x2a76f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)61) ? 1 : 0);
label_2a76fc:
    // 0x2a76fc: 0x54200027  bnel        $at, $zero, . + 4 + (0x27 << 2)
label_2a7700:
    if (ctx->pc == 0x2A7700u) {
        ctx->pc = 0x2A7700u;
            // 0x2a7700: 0x3c034622  lui         $v1, 0x4622 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
        ctx->pc = 0x2A7704u;
        goto label_2a7704;
    }
    ctx->pc = 0x2A76FCu;
    {
        const bool branch_taken_0x2a76fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a76fc) {
            ctx->pc = 0x2A7700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A76FCu;
            // 0x2a7700: 0x3c034622  lui         $v1, 0x4622 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A779Cu;
            goto label_2a779c;
        }
    }
    ctx->pc = 0x2A7704u;
label_2a7704:
    // 0x2a7704: 0x32621000  andi        $v0, $s3, 0x1000
    ctx->pc = 0x2a7704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4096);
label_2a7708:
    // 0x2a7708: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2a7708u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2a770c:
    // 0x2a770c: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
label_2a7710:
    if (ctx->pc == 0x2A7710u) {
        ctx->pc = 0x2A7714u;
        goto label_2a7714;
    }
    ctx->pc = 0x2A770Cu;
    {
        const bool branch_taken_0x2a770c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a770c) {
            ctx->pc = 0x2A7798u;
            goto label_2a7798;
        }
    }
    ctx->pc = 0x2A7714u;
label_2a7714:
    // 0x2a7714: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a7714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_2a7718:
    // 0x2a7718: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x2a7718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_2a771c:
    // 0x2a771c: 0xc6210098  lwc1        $f1, 0x98($s1)
    ctx->pc = 0x2a771cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a7720:
    // 0x2a7720: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a7720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2a7724:
    // 0x2a7724: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a7724u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a7728:
    // 0x2a7728: 0x0  nop
    ctx->pc = 0x2a7728u;
    // NOP
label_2a772c:
    // 0x2a772c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a772cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a7730:
    // 0x2a7730: 0xe6200098  swc1        $f0, 0x98($s1)
    ctx->pc = 0x2a7730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
label_2a7734:
    // 0x2a7734: 0xc441e150  lwc1        $f1, -0x1EB0($v0)
    ctx->pc = 0x2a7734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a7738:
    // 0x2a7738: 0xc6200098  lwc1        $f0, 0x98($s1)
    ctx->pc = 0x2a7738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a773c:
    // 0x2a773c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2a773cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a7740:
    // 0x2a7740: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_2a7744:
    if (ctx->pc == 0x2A7744u) {
        ctx->pc = 0x2A7744u;
            // 0x2a7744: 0xc6210068  lwc1        $f1, 0x68($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x2A7748u;
        goto label_2a7748;
    }
    ctx->pc = 0x2A7740u;
    {
        const bool branch_taken_0x2a7740 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a7740) {
            ctx->pc = 0x2A7744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7740u;
            // 0x2a7744: 0xc6210068  lwc1        $f1, 0x68($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A7750u;
            goto label_2a7750;
        }
    }
    ctx->pc = 0x2A7748u;
label_2a7748:
    // 0x2a7748: 0xe6210098  swc1        $f1, 0x98($s1)
    ctx->pc = 0x2a7748u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
label_2a774c:
    // 0x2a774c: 0xc6210068  lwc1        $f1, 0x68($s1)
    ctx->pc = 0x2a774cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a7750:
    // 0x2a7750: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a7750u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a7754:
    // 0x2a7754: 0x0  nop
    ctx->pc = 0x2a7754u;
    // NOP
label_2a7758:
    // 0x2a7758: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a7758u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a775c:
    // 0x2a775c: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_2a7760:
    if (ctx->pc == 0x2A7760u) {
        ctx->pc = 0x2A7760u;
            // 0x2a7760: 0x3c023c8e  lui         $v0, 0x3C8E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
        ctx->pc = 0x2A7764u;
        goto label_2a7764;
    }
    ctx->pc = 0x2A775Cu;
    {
        const bool branch_taken_0x2a775c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a775c) {
            ctx->pc = 0x2A7760u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A775Cu;
            // 0x2a7760: 0x3c023c8e  lui         $v0, 0x3C8E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A777Cu;
            goto label_2a777c;
        }
    }
    ctx->pc = 0x2A7764u;
label_2a7764:
    // 0x2a7764: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2a7764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_2a7768:
    // 0x2a7768: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a7768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_2a776c:
    // 0x2a776c: 0xc6200098  lwc1        $f0, 0x98($s1)
    ctx->pc = 0x2a776cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7770:
    // 0x2a7770: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a7770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a7774:
    // 0x2a7774: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a7778:
    if (ctx->pc == 0x2A7778u) {
        ctx->pc = 0x2A7778u;
            // 0x2a7778: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x2A777Cu;
        goto label_2a777c;
    }
    ctx->pc = 0x2A7774u;
    {
        const bool branch_taken_0x2a7774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7774u;
            // 0x2a7778: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7774) {
            ctx->pc = 0x2A7794u;
            goto label_2a7794;
        }
    }
    ctx->pc = 0x2A777Cu;
label_2a777c:
    // 0x2a777c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a777cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_2a7780:
    // 0x2a7780: 0xc6200098  lwc1        $f0, 0x98($s1)
    ctx->pc = 0x2a7780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7784:
    // 0x2a7784: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a7784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a7788:
    // 0x2a7788: 0x0  nop
    ctx->pc = 0x2a7788u;
    // NOP
label_2a778c:
    // 0x2a778c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a778cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a7790:
    // 0x2a7790: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2a7790u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2a7794:
    // 0x2a7794: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x2a7794u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_2a7798:
    // 0x2a7798: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x2a7798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
label_2a779c:
    // 0x2a779c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a779cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a77a0:
    // 0x2a77a0: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x2a77a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
label_2a77a4:
    // 0x2a77a4: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2a77a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_2a77a8:
    // 0x2a77a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a77a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a77ac:
    // 0x2a77ac: 0x0  nop
    ctx->pc = 0x2a77acu;
    // NOP
label_2a77b0:
    // 0x2a77b0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2a77b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_2a77b4:
    // 0x2a77b4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a77b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2a77b8:
    // 0x2a77b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a77b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a77bc:
    // 0x2a77bc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2a77bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_2a77c0:
    // 0x2a77c0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a77c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a77c4:
    // 0x2a77c4: 0xc04c970  jal         func_1325C0
label_2a77c8:
    if (ctx->pc == 0x2A77C8u) {
        ctx->pc = 0x2A77C8u;
            // 0x2a77c8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2A77CCu;
        goto label_2a77cc;
    }
    ctx->pc = 0x2A77C4u;
    SET_GPR_U32(ctx, 31, 0x2A77CCu);
    ctx->pc = 0x2A77C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A77C4u;
            // 0x2a77c8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A77CCu; }
        if (ctx->pc != 0x2A77CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A77CCu; }
        if (ctx->pc != 0x2A77CCu) { return; }
    }
    ctx->pc = 0x2A77CCu;
label_2a77cc:
    // 0x2a77cc: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x2a77ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2a77d0:
    // 0x2a77d0: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x2a77d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_2a77d4:
    // 0x2a77d4: 0xc04c72c  jal         func_131CB0
label_2a77d8:
    if (ctx->pc == 0x2A77D8u) {
        ctx->pc = 0x2A77D8u;
            // 0x2a77d8: 0x27a60200  addiu       $a2, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x2A77DCu;
        goto label_2a77dc;
    }
    ctx->pc = 0x2A77D4u;
    SET_GPR_U32(ctx, 31, 0x2A77DCu);
    ctx->pc = 0x2A77D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A77D4u;
            // 0x2a77d8: 0x27a60200  addiu       $a2, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A77DCu; }
        if (ctx->pc != 0x2A77DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A77DCu; }
        if (ctx->pc != 0x2A77DCu) { return; }
    }
    ctx->pc = 0x2A77DCu;
label_2a77dc:
    // 0x2a77dc: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x2a77dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_2a77e0:
    // 0x2a77e0: 0xc04f278  jal         func_13C9E0
label_2a77e4:
    if (ctx->pc == 0x2A77E4u) {
        ctx->pc = 0x2A77E4u;
            // 0x2a77e4: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x2A77E8u;
        goto label_2a77e8;
    }
    ctx->pc = 0x2A77E0u;
    SET_GPR_U32(ctx, 31, 0x2A77E8u);
    ctx->pc = 0x2A77E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A77E0u;
            // 0x2a77e4: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A77E8u; }
        if (ctx->pc != 0x2A77E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A77E8u; }
        if (ctx->pc != 0x2A77E8u) { return; }
    }
    ctx->pc = 0x2A77E8u;
label_2a77e8:
    // 0x2a77e8: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x2a77e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_2a77ec:
    // 0x2a77ec: 0x27a502f0  addiu       $a1, $sp, 0x2F0
    ctx->pc = 0x2a77ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_2a77f0:
    // 0x2a77f0: 0xc04cca0  jal         func_133280
label_2a77f4:
    if (ctx->pc == 0x2A77F4u) {
        ctx->pc = 0x2A77F4u;
            // 0x2a77f4: 0x27a601f0  addiu       $a2, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x2A77F8u;
        goto label_2a77f8;
    }
    ctx->pc = 0x2A77F0u;
    SET_GPR_U32(ctx, 31, 0x2A77F8u);
    ctx->pc = 0x2A77F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A77F0u;
            // 0x2a77f4: 0x27a601f0  addiu       $a2, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A77F8u; }
        if (ctx->pc != 0x2A77F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A77F8u; }
        if (ctx->pc != 0x2A77F8u) { return; }
    }
    ctx->pc = 0x2A77F8u;
label_2a77f8:
    // 0x2a77f8: 0x27a40350  addiu       $a0, $sp, 0x350
    ctx->pc = 0x2a77f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
label_2a77fc:
    // 0x2a77fc: 0x27a502e0  addiu       $a1, $sp, 0x2E0
    ctx->pc = 0x2a77fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_2a7800:
    // 0x2a7800: 0xc04cbe0  jal         func_132F80
label_2a7804:
    if (ctx->pc == 0x2A7804u) {
        ctx->pc = 0x2A7804u;
            // 0x2a7804: 0x27a60240  addiu       $a2, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->pc = 0x2A7808u;
        goto label_2a7808;
    }
    ctx->pc = 0x2A7800u;
    SET_GPR_U32(ctx, 31, 0x2A7808u);
    ctx->pc = 0x2A7804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7800u;
            // 0x2a7804: 0x27a60240  addiu       $a2, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7808u; }
        if (ctx->pc != 0x2A7808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7808u; }
        if (ctx->pc != 0x2A7808u) { return; }
    }
    ctx->pc = 0x2A7808u;
label_2a7808:
    // 0x2a7808: 0x27a40350  addiu       $a0, $sp, 0x350
    ctx->pc = 0x2a7808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
label_2a780c:
    // 0x2a780c: 0x27a602b0  addiu       $a2, $sp, 0x2B0
    ctx->pc = 0x2a780cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_2a7810:
    // 0x2a7810: 0xc04cbe0  jal         func_132F80
label_2a7814:
    if (ctx->pc == 0x2A7814u) {
        ctx->pc = 0x2A7814u;
            // 0x2a7814: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A7818u;
        goto label_2a7818;
    }
    ctx->pc = 0x2A7810u;
    SET_GPR_U32(ctx, 31, 0x2A7818u);
    ctx->pc = 0x2A7814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7810u;
            // 0x2a7814: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7818u; }
        if (ctx->pc != 0x2A7818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7818u; }
        if (ctx->pc != 0x2A7818u) { return; }
    }
    ctx->pc = 0x2A7818u;
label_2a7818:
    // 0x2a7818: 0x27a40340  addiu       $a0, $sp, 0x340
    ctx->pc = 0x2a7818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_2a781c:
    // 0x2a781c: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x2a781cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_2a7820:
    // 0x2a7820: 0xc04cbe0  jal         func_132F80
label_2a7824:
    if (ctx->pc == 0x2A7824u) {
        ctx->pc = 0x2A7824u;
            // 0x2a7824: 0x27a602d0  addiu       $a2, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->pc = 0x2A7828u;
        goto label_2a7828;
    }
    ctx->pc = 0x2A7820u;
    SET_GPR_U32(ctx, 31, 0x2A7828u);
    ctx->pc = 0x2A7824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7820u;
            // 0x2a7824: 0x27a602d0  addiu       $a2, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7828u; }
        if (ctx->pc != 0x2A7828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7828u; }
        if (ctx->pc != 0x2A7828u) { return; }
    }
    ctx->pc = 0x2A7828u;
label_2a7828:
    // 0x2a7828: 0x32620004  andi        $v0, $s3, 0x4
    ctx->pc = 0x2a7828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
label_2a782c:
    // 0x2a782c: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
label_2a7830:
    if (ctx->pc == 0x2A7830u) {
        ctx->pc = 0x2A7830u;
            // 0x2a7830: 0x32620100  andi        $v0, $s3, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
        ctx->pc = 0x2A7834u;
        goto label_2a7834;
    }
    ctx->pc = 0x2A782Cu;
    {
        const bool branch_taken_0x2a782c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a782c) {
            ctx->pc = 0x2A7830u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A782Cu;
            // 0x2a7830: 0x32620100  andi        $v0, $s3, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A790Cu;
            goto label_2a790c;
        }
    }
    ctx->pc = 0x2A7834u;
label_2a7834:
    // 0x2a7834: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x2a7834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7838:
    // 0x2a7838: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a7838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a783c:
    // 0x2a783c: 0x44824800  mtc1        $v0, $f9
    ctx->pc = 0x2a783cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_2a7840:
    // 0x2a7840: 0xc7a60350  lwc1        $f6, 0x350($sp)
    ctx->pc = 0x2a7840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2a7844:
    // 0x2a7844: 0x32624000  andi        $v0, $s3, 0x4000
    ctx->pc = 0x2a7844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16384);
label_2a7848:
    // 0x2a7848: 0x46004a83  div.s       $f10, $f9, $f0
    ctx->pc = 0x2a7848u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[10] = copysignf(INFINITY, ctx->f[9] * 0.0f); } else ctx->f[10] = ctx->f[9] / ctx->f[0];
label_2a784c:
    // 0x2a784c: 0x460a4a41  sub.s       $f9, $f9, $f10
    ctx->pc = 0x2a784cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[10]);
label_2a7850:
    // 0x2a7850: 0xc7a70270  lwc1        $f7, 0x270($sp)
    ctx->pc = 0x2a7850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2a7854:
    // 0x2a7854: 0x460a301a  mula.s      $f6, $f10
    ctx->pc = 0x2a7854u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
label_2a7858:
    // 0x2a7858: 0xc7a40354  lwc1        $f4, 0x354($sp)
    ctx->pc = 0x2a7858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2a785c:
    // 0x2a785c: 0x4609399c  madd.s      $f6, $f7, $f9
    ctx->pc = 0x2a785cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[9]));
label_2a7860:
    // 0x2a7860: 0xc7a50274  lwc1        $f5, 0x274($sp)
    ctx->pc = 0x2a7860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2a7864:
    // 0x2a7864: 0x460a201a  mula.s      $f4, $f10
    ctx->pc = 0x2a7864u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[10]);
label_2a7868:
    // 0x2a7868: 0xc7a20358  lwc1        $f2, 0x358($sp)
    ctx->pc = 0x2a7868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a786c:
    // 0x2a786c: 0x4609291c  madd.s      $f4, $f5, $f9
    ctx->pc = 0x2a786cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[9]));
label_2a7870:
    // 0x2a7870: 0xc7a30278  lwc1        $f3, 0x278($sp)
    ctx->pc = 0x2a7870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a7874:
    // 0x2a7874: 0x460a101a  mula.s      $f2, $f10
    ctx->pc = 0x2a7874u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
label_2a7878:
    // 0x2a7878: 0xc7a0035c  lwc1        $f0, 0x35C($sp)
    ctx->pc = 0x2a7878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a787c:
    // 0x2a787c: 0x4609189c  madd.s      $f2, $f3, $f9
    ctx->pc = 0x2a787cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[9]));
label_2a7880:
    // 0x2a7880: 0xc7a1027c  lwc1        $f1, 0x27C($sp)
    ctx->pc = 0x2a7880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a7884:
    // 0x2a7884: 0x460a001a  mula.s      $f0, $f10
    ctx->pc = 0x2a7884u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
label_2a7888:
    // 0x2a7888: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x2a7888u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_2a788c:
    // 0x2a788c: 0x0  nop
    ctx->pc = 0x2a788cu;
    // NOP
label_2a7890:
    // 0x2a7890: 0x4609081c  madd.s      $f0, $f1, $f9
    ctx->pc = 0x2a7890u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[9]));
label_2a7894:
    // 0x2a7894: 0xe7a60350  swc1        $f6, 0x350($sp)
    ctx->pc = 0x2a7894u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 848), bits); }
label_2a7898:
    // 0x2a7898: 0xe7a40354  swc1        $f4, 0x354($sp)
    ctx->pc = 0x2a7898u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 852), bits); }
label_2a789c:
    // 0x2a789c: 0xe7a20358  swc1        $f2, 0x358($sp)
    ctx->pc = 0x2a789cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 856), bits); }
label_2a78a0:
    // 0x2a78a0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2a78a4:
    if (ctx->pc == 0x2A78A4u) {
        ctx->pc = 0x2A78A4u;
            // 0x2a78a4: 0xe7a0035c  swc1        $f0, 0x35C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 860), bits); }
        ctx->pc = 0x2A78A8u;
        goto label_2a78a8;
    }
    ctx->pc = 0x2A78A0u;
    {
        const bool branch_taken_0x2a78a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A78A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A78A0u;
            // 0x2a78a4: 0xe7a0035c  swc1        $f0, 0x35C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 860), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a78a0) {
            ctx->pc = 0x2A7908u;
            goto label_2a7908;
        }
    }
    ctx->pc = 0x2A78A8u;
label_2a78a8:
    // 0x2a78a8: 0xc7a00340  lwc1        $f0, 0x340($sp)
    ctx->pc = 0x2a78a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a78ac:
    // 0x2a78ac: 0xc7a40344  lwc1        $f4, 0x344($sp)
    ctx->pc = 0x2a78acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2a78b0:
    // 0x2a78b0: 0xc7a20348  lwc1        $f2, 0x348($sp)
    ctx->pc = 0x2a78b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a78b4:
    // 0x2a78b4: 0x460a0182  mul.s       $f6, $f0, $f10
    ctx->pc = 0x2a78b4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
label_2a78b8:
    // 0x2a78b8: 0xc7a0034c  lwc1        $f0, 0x34C($sp)
    ctx->pc = 0x2a78b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a78bc:
    // 0x2a78bc: 0x460a2102  mul.s       $f4, $f4, $f10
    ctx->pc = 0x2a78bcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[10]);
label_2a78c0:
    // 0x2a78c0: 0xc7a70260  lwc1        $f7, 0x260($sp)
    ctx->pc = 0x2a78c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2a78c4:
    // 0x2a78c4: 0x46064018  adda.s      $f8, $f6
    ctx->pc = 0x2a78c4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[6]);
label_2a78c8:
    // 0x2a78c8: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x2a78c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
label_2a78cc:
    // 0x2a78cc: 0x4609399c  madd.s      $f6, $f7, $f9
    ctx->pc = 0x2a78ccu;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[9]));
label_2a78d0:
    // 0x2a78d0: 0xc7a50264  lwc1        $f5, 0x264($sp)
    ctx->pc = 0x2a78d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2a78d4:
    // 0x2a78d4: 0x46044018  adda.s      $f8, $f4
    ctx->pc = 0x2a78d4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[4]);
label_2a78d8:
    // 0x2a78d8: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x2a78d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
label_2a78dc:
    // 0x2a78dc: 0x4609291c  madd.s      $f4, $f5, $f9
    ctx->pc = 0x2a78dcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[9]));
label_2a78e0:
    // 0x2a78e0: 0xc7a30268  lwc1        $f3, 0x268($sp)
    ctx->pc = 0x2a78e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a78e4:
    // 0x2a78e4: 0x46024018  adda.s      $f8, $f2
    ctx->pc = 0x2a78e4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[2]);
label_2a78e8:
    // 0x2a78e8: 0xc7a1026c  lwc1        $f1, 0x26C($sp)
    ctx->pc = 0x2a78e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a78ec:
    // 0x2a78ec: 0x4609189c  madd.s      $f2, $f3, $f9
    ctx->pc = 0x2a78ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[9]));
label_2a78f0:
    // 0x2a78f0: 0x46004018  adda.s      $f8, $f0
    ctx->pc = 0x2a78f0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
label_2a78f4:
    // 0x2a78f4: 0x4609081c  madd.s      $f0, $f1, $f9
    ctx->pc = 0x2a78f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[9]));
label_2a78f8:
    // 0x2a78f8: 0xe7a60340  swc1        $f6, 0x340($sp)
    ctx->pc = 0x2a78f8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 832), bits); }
label_2a78fc:
    // 0x2a78fc: 0xe7a40344  swc1        $f4, 0x344($sp)
    ctx->pc = 0x2a78fcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 836), bits); }
label_2a7900:
    // 0x2a7900: 0xe7a20348  swc1        $f2, 0x348($sp)
    ctx->pc = 0x2a7900u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 840), bits); }
label_2a7904:
    // 0x2a7904: 0xe7a0034c  swc1        $f0, 0x34C($sp)
    ctx->pc = 0x2a7904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 844), bits); }
label_2a7908:
    // 0x2a7908: 0x32620100  andi        $v0, $s3, 0x100
    ctx->pc = 0x2a7908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
label_2a790c:
    // 0x2a790c: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
label_2a7910:
    if (ctx->pc == 0x2A7910u) {
        ctx->pc = 0x2A7910u;
            // 0x2a7910: 0x32620040  andi        $v0, $s3, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
        ctx->pc = 0x2A7914u;
        goto label_2a7914;
    }
    ctx->pc = 0x2A790Cu;
    {
        const bool branch_taken_0x2a790c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a790c) {
            ctx->pc = 0x2A7910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A790Cu;
            // 0x2a7910: 0x32620040  andi        $v0, $s3, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A79CCu;
            goto label_2a79cc;
        }
    }
    ctx->pc = 0x2A7914u;
label_2a7914:
    // 0x2a7914: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x2a7914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2a7918:
    // 0x2a7918: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2a7918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2a791c:
    // 0x2a791c: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x2a791cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_2a7920:
    // 0x2a7920: 0x50620029  beql        $v1, $v0, . + 4 + (0x29 << 2)
label_2a7924:
    if (ctx->pc == 0x2A7924u) {
        ctx->pc = 0x2A7924u;
            // 0x2a7924: 0x36730400  ori         $s3, $s3, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1024);
        ctx->pc = 0x2A7928u;
        goto label_2a7928;
    }
    ctx->pc = 0x2A7920u;
    {
        const bool branch_taken_0x2a7920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a7920) {
            ctx->pc = 0x2A7924u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7920u;
            // 0x2a7924: 0x36730400  ori         $s3, $s3, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A79C8u;
            goto label_2a79c8;
        }
    }
    ctx->pc = 0x2A7928u;
label_2a7928:
    // 0x2a7928: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2a7928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2a792c:
    // 0x2a792c: 0x50620024  beql        $v1, $v0, . + 4 + (0x24 << 2)
label_2a7930:
    if (ctx->pc == 0x2A7930u) {
        ctx->pc = 0x2A7930u;
            // 0x2a7930: 0x36630080  ori         $v1, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)128);
        ctx->pc = 0x2A7934u;
        goto label_2a7934;
    }
    ctx->pc = 0x2A792Cu;
    {
        const bool branch_taken_0x2a792c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a792c) {
            ctx->pc = 0x2A7930u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A792Cu;
            // 0x2a7930: 0x36630080  ori         $v1, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A79C0u;
            goto label_2a79c0;
        }
    }
    ctx->pc = 0x2A7934u;
label_2a7934:
    // 0x2a7934: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2a7934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2a7938:
    // 0x2a7938: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_2a793c:
    if (ctx->pc == 0x2A793Cu) {
        ctx->pc = 0x2A793Cu;
            // 0x2a793c: 0x90830004  lbu         $v1, 0x4($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x2A7940u;
        goto label_2a7940;
    }
    ctx->pc = 0x2A7938u;
    {
        const bool branch_taken_0x2a7938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a7938) {
            ctx->pc = 0x2A793Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7938u;
            // 0x2a793c: 0x90830004  lbu         $v1, 0x4($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A7970u;
            goto label_2a7970;
        }
    }
    ctx->pc = 0x2A7940u;
label_2a7940:
    // 0x2a7940: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a7940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a7944:
    // 0x2a7944: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
label_2a7948:
    if (ctx->pc == 0x2A7948u) {
        ctx->pc = 0x2A7948u;
            // 0x2a7948: 0x2402fb3f  addiu       $v0, $zero, -0x4C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966079));
        ctx->pc = 0x2A794Cu;
        goto label_2a794c;
    }
    ctx->pc = 0x2A7944u;
    {
        const bool branch_taken_0x2a7944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a7944) {
            ctx->pc = 0x2A7948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7944u;
            // 0x2a7948: 0x2402fb3f  addiu       $v0, $zero, -0x4C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966079));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A7960u;
            goto label_2a7960;
        }
    }
    ctx->pc = 0x2A794Cu;
label_2a794c:
    // 0x2a794c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2a7950:
    if (ctx->pc == 0x2A7950u) {
        ctx->pc = 0x2A7954u;
        goto label_2a7954;
    }
    ctx->pc = 0x2A794Cu;
    {
        const bool branch_taken_0x2a794c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a794c) {
            ctx->pc = 0x2A795Cu;
            goto label_2a795c;
        }
    }
    ctx->pc = 0x2A7954u;
label_2a7954:
    // 0x2a7954: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2a7958:
    if (ctx->pc == 0x2A7958u) {
        ctx->pc = 0x2A795Cu;
        goto label_2a795c;
    }
    ctx->pc = 0x2A7954u;
    {
        const bool branch_taken_0x2a7954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7954) {
            ctx->pc = 0x2A79C8u;
            goto label_2a79c8;
        }
    }
    ctx->pc = 0x2A795Cu;
label_2a795c:
    // 0x2a795c: 0x2402fb3f  addiu       $v0, $zero, -0x4C1
    ctx->pc = 0x2a795cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966079));
label_2a7960:
    // 0x2a7960: 0x12a00019  beqz        $s5, . + 4 + (0x19 << 2)
label_2a7964:
    if (ctx->pc == 0x2A7964u) {
        ctx->pc = 0x2A7964u;
            // 0x2a7964: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->pc = 0x2A7968u;
        goto label_2a7968;
    }
    ctx->pc = 0x2A7960u;
    {
        const bool branch_taken_0x2a7960 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7960u;
            // 0x2a7964: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7960) {
            ctx->pc = 0x2A79C8u;
            goto label_2a79c8;
        }
    }
    ctx->pc = 0x2A7968u;
label_2a7968:
    // 0x2a7968: 0x10000017  b           . + 4 + (0x17 << 2)
label_2a796c:
    if (ctx->pc == 0x2A796Cu) {
        ctx->pc = 0x2A796Cu;
            // 0x2a796c: 0x36730008  ori         $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8);
        ctx->pc = 0x2A7970u;
        goto label_2a7970;
    }
    ctx->pc = 0x2A7968u;
    {
        const bool branch_taken_0x2a7968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A796Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7968u;
            // 0x2a796c: 0x36730008  ori         $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7968) {
            ctx->pc = 0x2A79C8u;
            goto label_2a79c8;
        }
    }
    ctx->pc = 0x2A7970u;
label_2a7970:
    // 0x2a7970: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a7970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a7974:
    // 0x2a7974: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_2a7978:
    if (ctx->pc == 0x2A7978u) {
        ctx->pc = 0x2A797Cu;
        goto label_2a797c;
    }
    ctx->pc = 0x2A7974u;
    {
        const bool branch_taken_0x2a7974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a7974) {
            ctx->pc = 0x2A7998u;
            goto label_2a7998;
        }
    }
    ctx->pc = 0x2A797Cu;
label_2a797c:
    // 0x2a797c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a797cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a7980:
    // 0x2a7980: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2a7984:
    if (ctx->pc == 0x2A7984u) {
        ctx->pc = 0x2A7988u;
        goto label_2a7988;
    }
    ctx->pc = 0x2A7980u;
    {
        const bool branch_taken_0x2a7980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a7980) {
            ctx->pc = 0x2A7998u;
            goto label_2a7998;
        }
    }
    ctx->pc = 0x2A7988u;
label_2a7988:
    // 0x2a7988: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
label_2a798c:
    if (ctx->pc == 0x2A798Cu) {
        ctx->pc = 0x2A798Cu;
            // 0x2a798c: 0x64140001  daddiu      $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x2A7990u;
        goto label_2a7990;
    }
    ctx->pc = 0x2A7988u;
    {
        const bool branch_taken_0x2a7988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7988) {
            ctx->pc = 0x2A798Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7988u;
            // 0x2a798c: 0x64140001  daddiu      $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A79C8u;
            goto label_2a79c8;
        }
    }
    ctx->pc = 0x2A7990u;
label_2a7990:
    // 0x2a7990: 0x1000000d  b           . + 4 + (0xD << 2)
label_2a7994:
    if (ctx->pc == 0x2A7994u) {
        ctx->pc = 0x2A7998u;
        goto label_2a7998;
    }
    ctx->pc = 0x2A7990u;
    {
        const bool branch_taken_0x2a7990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7990) {
            ctx->pc = 0x2A79C8u;
            goto label_2a79c8;
        }
    }
    ctx->pc = 0x2A7998u;
label_2a7998:
    // 0x2a7998: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2a7998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2a799c:
    // 0x2a799c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2a799cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2a79a0:
    // 0x2a79a0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2a79a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_2a79a4:
    // 0x2a79a4: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x2a79a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_2a79a8:
    // 0x2a79a8: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_2a79ac:
    if (ctx->pc == 0x2A79ACu) {
        ctx->pc = 0x2A79B0u;
        goto label_2a79b0;
    }
    ctx->pc = 0x2A79A8u;
    {
        const bool branch_taken_0x2a79a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a79a8) {
            ctx->pc = 0x2A79C8u;
            goto label_2a79c8;
        }
    }
    ctx->pc = 0x2A79B0u;
label_2a79b0:
    // 0x2a79b0: 0x36630080  ori         $v1, $s3, 0x80
    ctx->pc = 0x2a79b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)128);
label_2a79b4:
    // 0x2a79b4: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x2a79b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_2a79b8:
    // 0x2a79b8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a79bc:
    if (ctx->pc == 0x2A79BCu) {
        ctx->pc = 0x2A79BCu;
            // 0x2a79bc: 0x629824  and         $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x2A79C0u;
        goto label_2a79c0;
    }
    ctx->pc = 0x2A79B8u;
    {
        const bool branch_taken_0x2a79b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A79BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A79B8u;
            // 0x2a79bc: 0x629824  and         $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a79b8) {
            ctx->pc = 0x2A79C8u;
            goto label_2a79c8;
        }
    }
    ctx->pc = 0x2A79C0u;
label_2a79c0:
    // 0x2a79c0: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x2a79c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_2a79c4:
    // 0x2a79c4: 0x629824  and         $s3, $v1, $v0
    ctx->pc = 0x2a79c4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2a79c8:
    // 0x2a79c8: 0x32620040  andi        $v0, $s3, 0x40
    ctx->pc = 0x2a79c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
label_2a79cc:
    // 0x2a79cc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2a79d0:
    if (ctx->pc == 0x2A79D0u) {
        ctx->pc = 0x2A79D0u;
            // 0x2a79d0: 0x32620020  andi        $v0, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
        ctx->pc = 0x2A79D4u;
        goto label_2a79d4;
    }
    ctx->pc = 0x2A79CCu;
    {
        const bool branch_taken_0x2a79cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a79cc) {
            ctx->pc = 0x2A79D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A79CCu;
            // 0x2a79d0: 0x32620020  andi        $v0, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A79F4u;
            goto label_2a79f4;
        }
    }
    ctx->pc = 0x2A79D4u;
label_2a79d4:
    // 0x2a79d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a79d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a79d8:
    // 0x2a79d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a79d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a79dc:
    // 0x2a79dc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a79dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a79e0:
    // 0x2a79e0: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x2a79e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_2a79e4:
    // 0x2a79e4: 0xc04cbd8  jal         func_132F60
label_2a79e8:
    if (ctx->pc == 0x2A79E8u) {
        ctx->pc = 0x2A79E8u;
            // 0x2a79e8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2A79ECu;
        goto label_2a79ec;
    }
    ctx->pc = 0x2A79E4u;
    SET_GPR_U32(ctx, 31, 0x2A79ECu);
    ctx->pc = 0x2A79E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A79E4u;
            // 0x2a79e8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A79ECu; }
        if (ctx->pc != 0x2A79ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A79ECu; }
        if (ctx->pc != 0x2A79ECu) { return; }
    }
    ctx->pc = 0x2A79ECu;
label_2a79ec:
    // 0x2a79ec: 0x10000060  b           . + 4 + (0x60 << 2)
label_2a79f0:
    if (ctx->pc == 0x2A79F0u) {
        ctx->pc = 0x2A79F0u;
            // 0x2a79f0: 0x32620008  andi        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x2A79F4u;
        goto label_2a79f4;
    }
    ctx->pc = 0x2A79ECu;
    {
        const bool branch_taken_0x2a79ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A79F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A79ECu;
            // 0x2a79f0: 0x32620008  andi        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a79ec) {
            ctx->pc = 0x2A7B70u;
            goto label_2a7b70;
        }
    }
    ctx->pc = 0x2A79F4u;
label_2a79f4:
    // 0x2a79f4: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
label_2a79f8:
    if (ctx->pc == 0x2A79F8u) {
        ctx->pc = 0x2A79FCu;
        goto label_2a79fc;
    }
    ctx->pc = 0x2A79F4u;
    {
        const bool branch_taken_0x2a79f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a79f4) {
            ctx->pc = 0x2A7B6Cu;
            goto label_2a7b6c;
        }
    }
    ctx->pc = 0x2A79FCu;
label_2a79fc:
    // 0x2a79fc: 0x32620400  andi        $v0, $s3, 0x400
    ctx->pc = 0x2a79fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1024);
label_2a7a00:
    // 0x2a7a00: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
label_2a7a04:
    if (ctx->pc == 0x2A7A04u) {
        ctx->pc = 0x2A7A04u;
            // 0x2a7a04: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->pc = 0x2A7A08u;
        goto label_2a7a08;
    }
    ctx->pc = 0x2A7A00u;
    {
        const bool branch_taken_0x2a7a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7a00) {
            ctx->pc = 0x2A7A04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7A00u;
            // 0x2a7a04: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A7AB4u;
            goto label_2a7ab4;
        }
    }
    ctx->pc = 0x2A7A08u;
label_2a7a08:
    // 0x2a7a08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a7a08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a7a0c:
    // 0x2a7a0c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a7a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a7a10:
    // 0x2a7a10: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a7a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a7a14:
    // 0x2a7a14: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2a7a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_2a7a18:
    // 0x2a7a18: 0xc04cbd8  jal         func_132F60
label_2a7a1c:
    if (ctx->pc == 0x2A7A1Cu) {
        ctx->pc = 0x2A7A1Cu;
            // 0x2a7a1c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2A7A20u;
        goto label_2a7a20;
    }
    ctx->pc = 0x2A7A18u;
    SET_GPR_U32(ctx, 31, 0x2A7A20u);
    ctx->pc = 0x2A7A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7A18u;
            // 0x2a7a1c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7A20u; }
        if (ctx->pc != 0x2A7A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7A20u; }
        if (ctx->pc != 0x2A7A20u) { return; }
    }
    ctx->pc = 0x2A7A20u;
label_2a7a20:
    // 0x2a7a20: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x2a7a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_2a7a24:
    // 0x2a7a24: 0x27a50340  addiu       $a1, $sp, 0x340
    ctx->pc = 0x2a7a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_2a7a28:
    // 0x2a7a28: 0xc04cc90  jal         func_133240
label_2a7a2c:
    if (ctx->pc == 0x2A7A2Cu) {
        ctx->pc = 0x2A7A2Cu;
            // 0x2a7a2c: 0x27a60350  addiu       $a2, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->pc = 0x2A7A30u;
        goto label_2a7a30;
    }
    ctx->pc = 0x2A7A28u;
    SET_GPR_U32(ctx, 31, 0x2A7A30u);
    ctx->pc = 0x2A7A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7A28u;
            // 0x2a7a2c: 0x27a60350  addiu       $a2, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7A30u; }
        if (ctx->pc != 0x2A7A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7A30u; }
        if (ctx->pc != 0x2A7A30u) { return; }
    }
    ctx->pc = 0x2A7A30u;
label_2a7a30:
    // 0x2a7a30: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x2a7a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_2a7a34:
    // 0x2a7a34: 0x27a50290  addiu       $a1, $sp, 0x290
    ctx->pc = 0x2a7a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_2a7a38:
    // 0x2a7a38: 0xc04cbf0  jal         func_132FC0
label_2a7a3c:
    if (ctx->pc == 0x2A7A3Cu) {
        ctx->pc = 0x2A7A3Cu;
            // 0x2a7a3c: 0x27a602a0  addiu       $a2, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->pc = 0x2A7A40u;
        goto label_2a7a40;
    }
    ctx->pc = 0x2A7A38u;
    SET_GPR_U32(ctx, 31, 0x2A7A40u);
    ctx->pc = 0x2A7A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7A38u;
            // 0x2a7a3c: 0x27a602a0  addiu       $a2, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7A40u; }
        if (ctx->pc != 0x2A7A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7A40u; }
        if (ctx->pc != 0x2A7A40u) { return; }
    }
    ctx->pc = 0x2A7A40u;
label_2a7a40:
    // 0x2a7a40: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x2a7a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_2a7a44:
    // 0x2a7a44: 0xc04cc44  jal         func_133110
label_2a7a48:
    if (ctx->pc == 0x2A7A48u) {
        ctx->pc = 0x2A7A48u;
            // 0x2a7a48: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A7A4Cu;
        goto label_2a7a4c;
    }
    ctx->pc = 0x2A7A44u;
    SET_GPR_U32(ctx, 31, 0x2A7A4Cu);
    ctx->pc = 0x2A7A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7A44u;
            // 0x2a7a48: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7A4Cu; }
        if (ctx->pc != 0x2A7A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7A4Cu; }
        if (ctx->pc != 0x2A7A4Cu) { return; }
    }
    ctx->pc = 0x2A7A4Cu;
label_2a7a4c:
    // 0x2a7a4c: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x2a7a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7a50:
    // 0x2a7a50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a7a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a7a54:
    // 0x2a7a54: 0xc7a40280  lwc1        $f4, 0x280($sp)
    ctx->pc = 0x2a7a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2a7a58:
    // 0x2a7a58: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x2a7a58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_2a7a5c:
    // 0x2a7a5c: 0x0  nop
    ctx->pc = 0x2a7a5cu;
    // NOP
label_2a7a60:
    // 0x2a7a60: 0x4605001a  mula.s      $f0, $f5
    ctx->pc = 0x2a7a60u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_2a7a64:
    // 0x2a7a64: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x2a7a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_2a7a68:
    // 0x2a7a68: 0x0  nop
    ctx->pc = 0x2a7a68u;
    // NOP
label_2a7a6c:
    // 0x2a7a6c: 0x4606211c  madd.s      $f4, $f4, $f6
    ctx->pc = 0x2a7a6cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
label_2a7a70:
    // 0x2a7a70: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x2a7a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a7a74:
    // 0x2a7a74: 0xc7a30284  lwc1        $f3, 0x284($sp)
    ctx->pc = 0x2a7a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a7a78:
    // 0x2a7a78: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x2a7a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7a7c:
    // 0x2a7a7c: 0x4605081a  mula.s      $f1, $f5
    ctx->pc = 0x2a7a7cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_2a7a80:
    // 0x2a7a80: 0x460618dc  madd.s      $f3, $f3, $f6
    ctx->pc = 0x2a7a80u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[6]));
label_2a7a84:
    // 0x2a7a84: 0x4605001a  mula.s      $f0, $f5
    ctx->pc = 0x2a7a84u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_2a7a88:
    // 0x2a7a88: 0xc7a20288  lwc1        $f2, 0x288($sp)
    ctx->pc = 0x2a7a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a7a8c:
    // 0x2a7a8c: 0xc7a0017c  lwc1        $f0, 0x17C($sp)
    ctx->pc = 0x2a7a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7a90:
    // 0x2a7a90: 0xc7a1028c  lwc1        $f1, 0x28C($sp)
    ctx->pc = 0x2a7a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a7a94:
    // 0x2a7a94: 0x4606109c  madd.s      $f2, $f2, $f6
    ctx->pc = 0x2a7a94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[6]));
label_2a7a98:
    // 0x2a7a98: 0x4605001a  mula.s      $f0, $f5
    ctx->pc = 0x2a7a98u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_2a7a9c:
    // 0x2a7a9c: 0x4606081c  madd.s      $f0, $f1, $f6
    ctx->pc = 0x2a7a9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[6]));
label_2a7aa0:
    // 0x2a7aa0: 0xe7a40280  swc1        $f4, 0x280($sp)
    ctx->pc = 0x2a7aa0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_2a7aa4:
    // 0x2a7aa4: 0xe7a30284  swc1        $f3, 0x284($sp)
    ctx->pc = 0x2a7aa4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
label_2a7aa8:
    // 0x2a7aa8: 0xe7a20288  swc1        $f2, 0x288($sp)
    ctx->pc = 0x2a7aa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
label_2a7aac:
    // 0x2a7aac: 0x1000002f  b           . + 4 + (0x2F << 2)
label_2a7ab0:
    if (ctx->pc == 0x2A7AB0u) {
        ctx->pc = 0x2A7AB0u;
            // 0x2a7ab0: 0xe7a0028c  swc1        $f0, 0x28C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 652), bits); }
        ctx->pc = 0x2A7AB4u;
        goto label_2a7ab4;
    }
    ctx->pc = 0x2A7AACu;
    {
        const bool branch_taken_0x2a7aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7AACu;
            // 0x2a7ab0: 0xe7a0028c  swc1        $f0, 0x28C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 652), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7aac) {
            ctx->pc = 0x2A7B6Cu;
            goto label_2a7b6c;
        }
    }
    ctx->pc = 0x2A7AB4u;
label_2a7ab4:
    // 0x2a7ab4: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
label_2a7ab8:
    if (ctx->pc == 0x2A7AB8u) {
        ctx->pc = 0x2A7AB8u;
            // 0x2a7ab8: 0x27a40290  addiu       $a0, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x2A7ABCu;
        goto label_2a7abc;
    }
    ctx->pc = 0x2A7AB4u;
    {
        const bool branch_taken_0x2a7ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7ab4) {
            ctx->pc = 0x2A7AB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7AB4u;
            // 0x2a7ab8: 0x27a40290  addiu       $a0, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A7B44u;
            goto label_2a7b44;
        }
    }
    ctx->pc = 0x2A7ABCu;
label_2a7abc:
    // 0x2a7abc: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x2a7abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_2a7ac0:
    // 0x2a7ac0: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_2a7ac4:
    if (ctx->pc == 0x2A7AC4u) {
        ctx->pc = 0x2A7AC4u;
            // 0x2a7ac4: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->pc = 0x2A7AC8u;
        goto label_2a7ac8;
    }
    ctx->pc = 0x2A7AC0u;
    {
        const bool branch_taken_0x2a7ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7ac0) {
            ctx->pc = 0x2A7AC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7AC0u;
            // 0x2a7ac4: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A7B34u;
            goto label_2a7b34;
        }
    }
    ctx->pc = 0x2A7AC8u;
label_2a7ac8:
    // 0x2a7ac8: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x2a7ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7acc:
    // 0x2a7acc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a7accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a7ad0:
    // 0x2a7ad0: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x2a7ad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_2a7ad4:
    // 0x2a7ad4: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x2a7ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2a7ad8:
    // 0x2a7ad8: 0xc7a40250  lwc1        $f4, 0x250($sp)
    ctx->pc = 0x2a7ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2a7adc:
    // 0x2a7adc: 0x46002983  div.s       $f6, $f5, $f0
    ctx->pc = 0x2a7adcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[6] = ctx->f[5] / ctx->f[0];
label_2a7ae0:
    // 0x2a7ae0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a7ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7ae4:
    // 0x2a7ae4: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x2a7ae4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_2a7ae8:
    // 0x2a7ae8: 0x4606001a  mula.s      $f0, $f6
    ctx->pc = 0x2a7ae8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_2a7aec:
    // 0x2a7aec: 0x4605201c  madd.s      $f0, $f4, $f5
    ctx->pc = 0x2a7aecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
label_2a7af0:
    // 0x2a7af0: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x2a7af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_2a7af4:
    // 0x2a7af4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2a7af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7af8:
    // 0x2a7af8: 0xc7a30254  lwc1        $f3, 0x254($sp)
    ctx->pc = 0x2a7af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a7afc:
    // 0x2a7afc: 0xc7a20258  lwc1        $f2, 0x258($sp)
    ctx->pc = 0x2a7afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a7b00:
    // 0x2a7b00: 0x4606001a  mula.s      $f0, $f6
    ctx->pc = 0x2a7b00u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_2a7b04:
    // 0x2a7b04: 0x4605181c  madd.s      $f0, $f3, $f5
    ctx->pc = 0x2a7b04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[5]));
label_2a7b08:
    // 0x2a7b08: 0xe7a00284  swc1        $f0, 0x284($sp)
    ctx->pc = 0x2a7b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
label_2a7b0c:
    // 0x2a7b0c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2a7b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7b10:
    // 0x2a7b10: 0xc7a1025c  lwc1        $f1, 0x25C($sp)
    ctx->pc = 0x2a7b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a7b14:
    // 0x2a7b14: 0x4606001a  mula.s      $f0, $f6
    ctx->pc = 0x2a7b14u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_2a7b18:
    // 0x2a7b18: 0x4605101c  madd.s      $f0, $f2, $f5
    ctx->pc = 0x2a7b18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
label_2a7b1c:
    // 0x2a7b1c: 0xe7a00288  swc1        $f0, 0x288($sp)
    ctx->pc = 0x2a7b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
label_2a7b20:
    // 0x2a7b20: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2a7b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7b24:
    // 0x2a7b24: 0x4606001a  mula.s      $f0, $f6
    ctx->pc = 0x2a7b24u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_2a7b28:
    // 0x2a7b28: 0x4605081c  madd.s      $f0, $f1, $f5
    ctx->pc = 0x2a7b28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[5]));
label_2a7b2c:
    // 0x2a7b2c: 0x1000000f  b           . + 4 + (0xF << 2)
label_2a7b30:
    if (ctx->pc == 0x2A7B30u) {
        ctx->pc = 0x2A7B30u;
            // 0x2a7b30: 0xe7a0028c  swc1        $f0, 0x28C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 652), bits); }
        ctx->pc = 0x2A7B34u;
        goto label_2a7b34;
    }
    ctx->pc = 0x2A7B2Cu;
    {
        const bool branch_taken_0x2a7b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7B2Cu;
            // 0x2a7b30: 0xe7a0028c  swc1        $f0, 0x28C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 652), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7b2c) {
            ctx->pc = 0x2A7B6Cu;
            goto label_2a7b6c;
        }
    }
    ctx->pc = 0x2A7B34u;
label_2a7b34:
    // 0x2a7b34: 0xc04cc04  jal         func_133010
label_2a7b38:
    if (ctx->pc == 0x2A7B38u) {
        ctx->pc = 0x2A7B38u;
            // 0x2a7b38: 0x27a40280  addiu       $a0, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x2A7B3Cu;
        goto label_2a7b3c;
    }
    ctx->pc = 0x2A7B34u;
    SET_GPR_U32(ctx, 31, 0x2A7B3Cu);
    ctx->pc = 0x2A7B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7B34u;
            // 0x2a7b38: 0x27a40280  addiu       $a0, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7B3Cu; }
        if (ctx->pc != 0x2A7B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7B3Cu; }
        if (ctx->pc != 0x2A7B3Cu) { return; }
    }
    ctx->pc = 0x2A7B3Cu;
label_2a7b3c:
    // 0x2a7b3c: 0x1000000b  b           . + 4 + (0xB << 2)
label_2a7b40:
    if (ctx->pc == 0x2A7B40u) {
        ctx->pc = 0x2A7B44u;
        goto label_2a7b44;
    }
    ctx->pc = 0x2A7B3Cu;
    {
        const bool branch_taken_0x2a7b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7b3c) {
            ctx->pc = 0x2A7B6Cu;
            goto label_2a7b6c;
        }
    }
    ctx->pc = 0x2A7B44u;
label_2a7b44:
    // 0x2a7b44: 0x27a50340  addiu       $a1, $sp, 0x340
    ctx->pc = 0x2a7b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_2a7b48:
    // 0x2a7b48: 0xc04cc90  jal         func_133240
label_2a7b4c:
    if (ctx->pc == 0x2A7B4Cu) {
        ctx->pc = 0x2A7B4Cu;
            // 0x2a7b4c: 0x27a60350  addiu       $a2, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->pc = 0x2A7B50u;
        goto label_2a7b50;
    }
    ctx->pc = 0x2A7B48u;
    SET_GPR_U32(ctx, 31, 0x2A7B50u);
    ctx->pc = 0x2A7B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7B48u;
            // 0x2a7b4c: 0x27a60350  addiu       $a2, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7B50u; }
        if (ctx->pc != 0x2A7B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7B50u; }
        if (ctx->pc != 0x2A7B50u) { return; }
    }
    ctx->pc = 0x2A7B50u;
label_2a7b50:
    // 0x2a7b50: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x2a7b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_2a7b54:
    // 0x2a7b54: 0x27a50290  addiu       $a1, $sp, 0x290
    ctx->pc = 0x2a7b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_2a7b58:
    // 0x2a7b58: 0xc04cbf0  jal         func_132FC0
label_2a7b5c:
    if (ctx->pc == 0x2A7B5Cu) {
        ctx->pc = 0x2A7B5Cu;
            // 0x2a7b5c: 0x27a602a0  addiu       $a2, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->pc = 0x2A7B60u;
        goto label_2a7b60;
    }
    ctx->pc = 0x2A7B58u;
    SET_GPR_U32(ctx, 31, 0x2A7B60u);
    ctx->pc = 0x2A7B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7B58u;
            // 0x2a7b5c: 0x27a602a0  addiu       $a2, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7B60u; }
        if (ctx->pc != 0x2A7B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7B60u; }
        if (ctx->pc != 0x2A7B60u) { return; }
    }
    ctx->pc = 0x2A7B60u;
label_2a7b60:
    // 0x2a7b60: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x2a7b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_2a7b64:
    // 0x2a7b64: 0xc04cc44  jal         func_133110
label_2a7b68:
    if (ctx->pc == 0x2A7B68u) {
        ctx->pc = 0x2A7B68u;
            // 0x2a7b68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A7B6Cu;
        goto label_2a7b6c;
    }
    ctx->pc = 0x2A7B64u;
    SET_GPR_U32(ctx, 31, 0x2A7B6Cu);
    ctx->pc = 0x2A7B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7B64u;
            // 0x2a7b68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7B6Cu; }
        if (ctx->pc != 0x2A7B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7B6Cu; }
        if (ctx->pc != 0x2A7B6Cu) { return; }
    }
    ctx->pc = 0x2A7B6Cu;
label_2a7b6c:
    // 0x2a7b6c: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x2a7b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_2a7b70:
    // 0x2a7b70: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_2a7b74:
    if (ctx->pc == 0x2A7B74u) {
        ctx->pc = 0x2A7B74u;
            // 0x2a7b74: 0x32622000  andi        $v0, $s3, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8192);
        ctx->pc = 0x2A7B78u;
        goto label_2a7b78;
    }
    ctx->pc = 0x2A7B70u;
    {
        const bool branch_taken_0x2a7b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7b70) {
            ctx->pc = 0x2A7B74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7B70u;
            // 0x2a7b74: 0x32622000  andi        $v0, $s3, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A7BE0u;
            goto label_2a7be0;
        }
    }
    ctx->pc = 0x2A7B78u;
label_2a7b78:
    // 0x2a7b78: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x2a7b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7b7c:
    // 0x2a7b7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a7b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a7b80:
    // 0x2a7b80: 0x44824000  mtc1        $v0, $f8
    ctx->pc = 0x2a7b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_2a7b84:
    // 0x2a7b84: 0xc7a60280  lwc1        $f6, 0x280($sp)
    ctx->pc = 0x2a7b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2a7b88:
    // 0x2a7b88: 0x46004243  div.s       $f9, $f8, $f0
    ctx->pc = 0x2a7b88u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[9] = copysignf(INFINITY, ctx->f[8] * 0.0f); } else ctx->f[9] = ctx->f[8] / ctx->f[0];
label_2a7b8c:
    // 0x2a7b8c: 0x46094201  sub.s       $f8, $f8, $f9
    ctx->pc = 0x2a7b8cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[9]);
label_2a7b90:
    // 0x2a7b90: 0xc7a70250  lwc1        $f7, 0x250($sp)
    ctx->pc = 0x2a7b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2a7b94:
    // 0x2a7b94: 0x4609301a  mula.s      $f6, $f9
    ctx->pc = 0x2a7b94u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
label_2a7b98:
    // 0x2a7b98: 0xc7a40284  lwc1        $f4, 0x284($sp)
    ctx->pc = 0x2a7b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2a7b9c:
    // 0x2a7b9c: 0x4608399c  madd.s      $f6, $f7, $f8
    ctx->pc = 0x2a7b9cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[8]));
label_2a7ba0:
    // 0x2a7ba0: 0xc7a50254  lwc1        $f5, 0x254($sp)
    ctx->pc = 0x2a7ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2a7ba4:
    // 0x2a7ba4: 0x4609201a  mula.s      $f4, $f9
    ctx->pc = 0x2a7ba4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
label_2a7ba8:
    // 0x2a7ba8: 0xc7a20288  lwc1        $f2, 0x288($sp)
    ctx->pc = 0x2a7ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a7bac:
    // 0x2a7bac: 0x4608291c  madd.s      $f4, $f5, $f8
    ctx->pc = 0x2a7bacu;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[8]));
label_2a7bb0:
    // 0x2a7bb0: 0xc7a30258  lwc1        $f3, 0x258($sp)
    ctx->pc = 0x2a7bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a7bb4:
    // 0x2a7bb4: 0x4609101a  mula.s      $f2, $f9
    ctx->pc = 0x2a7bb4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
label_2a7bb8:
    // 0x2a7bb8: 0xc7a0028c  lwc1        $f0, 0x28C($sp)
    ctx->pc = 0x2a7bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7bbc:
    // 0x2a7bbc: 0x4608189c  madd.s      $f2, $f3, $f8
    ctx->pc = 0x2a7bbcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[8]));
label_2a7bc0:
    // 0x2a7bc0: 0xc7a1025c  lwc1        $f1, 0x25C($sp)
    ctx->pc = 0x2a7bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a7bc4:
    // 0x2a7bc4: 0x4609001a  mula.s      $f0, $f9
    ctx->pc = 0x2a7bc4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
label_2a7bc8:
    // 0x2a7bc8: 0xe7a60280  swc1        $f6, 0x280($sp)
    ctx->pc = 0x2a7bc8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_2a7bcc:
    // 0x2a7bcc: 0x4608081c  madd.s      $f0, $f1, $f8
    ctx->pc = 0x2a7bccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[8]));
label_2a7bd0:
    // 0x2a7bd0: 0xe7a40284  swc1        $f4, 0x284($sp)
    ctx->pc = 0x2a7bd0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
label_2a7bd4:
    // 0x2a7bd4: 0xe7a20288  swc1        $f2, 0x288($sp)
    ctx->pc = 0x2a7bd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
label_2a7bd8:
    // 0x2a7bd8: 0xe7a0028c  swc1        $f0, 0x28C($sp)
    ctx->pc = 0x2a7bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 652), bits); }
label_2a7bdc:
    // 0x2a7bdc: 0x32622000  andi        $v0, $s3, 0x2000
    ctx->pc = 0x2a7bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8192);
label_2a7be0:
    // 0x2a7be0: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_2a7be4:
    if (ctx->pc == 0x2A7BE4u) {
        ctx->pc = 0x2A7BE4u;
            // 0x2a7be4: 0x32628000  andi        $v0, $s3, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
        ctx->pc = 0x2A7BE8u;
        goto label_2a7be8;
    }
    ctx->pc = 0x2A7BE0u;
    {
        const bool branch_taken_0x2a7be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7be0) {
            ctx->pc = 0x2A7BE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7BE0u;
            // 0x2a7be4: 0x32628000  andi        $v0, $s3, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A7C50u;
            goto label_2a7c50;
        }
    }
    ctx->pc = 0x2A7BE8u;
label_2a7be8:
    // 0x2a7be8: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x2a7be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2a7bec:
    // 0x2a7bec: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2a7becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2a7bf0:
    // 0x2a7bf0: 0xc04cc90  jal         func_133240
label_2a7bf4:
    if (ctx->pc == 0x2A7BF4u) {
        ctx->pc = 0x2A7BF4u;
            // 0x2a7bf4: 0x26260040  addiu       $a2, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->pc = 0x2A7BF8u;
        goto label_2a7bf8;
    }
    ctx->pc = 0x2A7BF0u;
    SET_GPR_U32(ctx, 31, 0x2A7BF8u);
    ctx->pc = 0x2A7BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7BF0u;
            // 0x2a7bf4: 0x26260040  addiu       $a2, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7BF8u; }
        if (ctx->pc != 0x2A7BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7BF8u; }
        if (ctx->pc != 0x2A7BF8u) { return; }
    }
    ctx->pc = 0x2A7BF8u;
label_2a7bf8:
    // 0x2a7bf8: 0xc7a10270  lwc1        $f1, 0x270($sp)
    ctx->pc = 0x2a7bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a7bfc:
    // 0x2a7bfc: 0xc7a70160  lwc1        $f7, 0x160($sp)
    ctx->pc = 0x2a7bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2a7c00:
    // 0x2a7c00: 0xc7a20260  lwc1        $f2, 0x260($sp)
    ctx->pc = 0x2a7c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a7c04:
    // 0x2a7c04: 0xc7a00274  lwc1        $f0, 0x274($sp)
    ctx->pc = 0x2a7c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7c08:
    // 0x2a7c08: 0x46070940  add.s       $f5, $f1, $f7
    ctx->pc = 0x2a7c08u;
    ctx->f[5] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
label_2a7c0c:
    // 0x2a7c0c: 0xc7a60164  lwc1        $f6, 0x164($sp)
    ctx->pc = 0x2a7c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2a7c10:
    // 0x2a7c10: 0xc7a10264  lwc1        $f1, 0x264($sp)
    ctx->pc = 0x2a7c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a7c14:
    // 0x2a7c14: 0xe7a50350  swc1        $f5, 0x350($sp)
    ctx->pc = 0x2a7c14u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 848), bits); }
label_2a7c18:
    // 0x2a7c18: 0x46060140  add.s       $f5, $f0, $f6
    ctx->pc = 0x2a7c18u;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_2a7c1c:
    // 0x2a7c1c: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x2a7c1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_2a7c20:
    // 0x2a7c20: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x2a7c20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
label_2a7c24:
    // 0x2a7c24: 0xc7a40278  lwc1        $f4, 0x278($sp)
    ctx->pc = 0x2a7c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2a7c28:
    // 0x2a7c28: 0xc7a30168  lwc1        $f3, 0x168($sp)
    ctx->pc = 0x2a7c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a7c2c:
    // 0x2a7c2c: 0xc7a00268  lwc1        $f0, 0x268($sp)
    ctx->pc = 0x2a7c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7c30:
    // 0x2a7c30: 0xe7a10344  swc1        $f1, 0x344($sp)
    ctx->pc = 0x2a7c30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 836), bits); }
label_2a7c34:
    // 0x2a7c34: 0x46032040  add.s       $f1, $f4, $f3
    ctx->pc = 0x2a7c34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_2a7c38:
    // 0x2a7c38: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2a7c38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_2a7c3c:
    // 0x2a7c3c: 0xe7a50354  swc1        $f5, 0x354($sp)
    ctx->pc = 0x2a7c3cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 852), bits); }
label_2a7c40:
    // 0x2a7c40: 0xe7a20340  swc1        $f2, 0x340($sp)
    ctx->pc = 0x2a7c40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 832), bits); }
label_2a7c44:
    // 0x2a7c44: 0xe7a10358  swc1        $f1, 0x358($sp)
    ctx->pc = 0x2a7c44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 856), bits); }
label_2a7c48:
    // 0x2a7c48: 0xe7a00348  swc1        $f0, 0x348($sp)
    ctx->pc = 0x2a7c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 840), bits); }
label_2a7c4c:
    // 0x2a7c4c: 0x32628000  andi        $v0, $s3, 0x8000
    ctx->pc = 0x2a7c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
label_2a7c50:
    // 0x2a7c50: 0x50400047  beql        $v0, $zero, . + 4 + (0x47 << 2)
label_2a7c54:
    if (ctx->pc == 0x2A7C54u) {
        ctx->pc = 0x2A7C54u;
            // 0x2a7c54: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->pc = 0x2A7C58u;
        goto label_2a7c58;
    }
    ctx->pc = 0x2A7C50u;
    {
        const bool branch_taken_0x2a7c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7c50) {
            ctx->pc = 0x2A7C54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7C50u;
            // 0x2a7c54: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A7D70u;
            goto label_2a7d70;
        }
    }
    ctx->pc = 0x2A7C58u;
label_2a7c58:
    // 0x2a7c58: 0x32624000  andi        $v0, $s3, 0x4000
    ctx->pc = 0x2a7c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16384);
label_2a7c5c:
    // 0x2a7c5c: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_2a7c60:
    if (ctx->pc == 0x2A7C60u) {
        ctx->pc = 0x2A7C60u;
            // 0x2a7c60: 0xc6200070  lwc1        $f0, 0x70($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x2A7C64u;
        goto label_2a7c64;
    }
    ctx->pc = 0x2A7C5Cu;
    {
        const bool branch_taken_0x2a7c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7c5c) {
            ctx->pc = 0x2A7C60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7C5Cu;
            // 0x2a7c60: 0xc6200070  lwc1        $f0, 0x70($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A7CD0u;
            goto label_2a7cd0;
        }
    }
    ctx->pc = 0x2A7C64u;
label_2a7c64:
    // 0x2a7c64: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x2a7c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7c68:
    // 0x2a7c68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a7c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a7c6c:
    // 0x2a7c6c: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x2a7c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_2a7c70:
    // 0x2a7c70: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2a7c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2a7c74:
    // 0x2a7c74: 0xc7a40260  lwc1        $f4, 0x260($sp)
    ctx->pc = 0x2a7c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2a7c78:
    // 0x2a7c78: 0x46002983  div.s       $f6, $f5, $f0
    ctx->pc = 0x2a7c78u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[6] = ctx->f[5] / ctx->f[0];
label_2a7c7c:
    // 0x2a7c7c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a7c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7c80:
    // 0x2a7c80: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x2a7c80u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_2a7c84:
    // 0x2a7c84: 0x4606001a  mula.s      $f0, $f6
    ctx->pc = 0x2a7c84u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_2a7c88:
    // 0x2a7c88: 0x4605201c  madd.s      $f0, $f4, $f5
    ctx->pc = 0x2a7c88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
label_2a7c8c:
    // 0x2a7c8c: 0xe7a00340  swc1        $f0, 0x340($sp)
    ctx->pc = 0x2a7c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 832), bits); }
label_2a7c90:
    // 0x2a7c90: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2a7c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7c94:
    // 0x2a7c94: 0xc7a30264  lwc1        $f3, 0x264($sp)
    ctx->pc = 0x2a7c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a7c98:
    // 0x2a7c98: 0xc7a20268  lwc1        $f2, 0x268($sp)
    ctx->pc = 0x2a7c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a7c9c:
    // 0x2a7c9c: 0x4606001a  mula.s      $f0, $f6
    ctx->pc = 0x2a7c9cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_2a7ca0:
    // 0x2a7ca0: 0x4605181c  madd.s      $f0, $f3, $f5
    ctx->pc = 0x2a7ca0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[5]));
label_2a7ca4:
    // 0x2a7ca4: 0xe7a00344  swc1        $f0, 0x344($sp)
    ctx->pc = 0x2a7ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 836), bits); }
label_2a7ca8:
    // 0x2a7ca8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2a7ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7cac:
    // 0x2a7cac: 0xc7a1026c  lwc1        $f1, 0x26C($sp)
    ctx->pc = 0x2a7cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a7cb0:
    // 0x2a7cb0: 0x4606001a  mula.s      $f0, $f6
    ctx->pc = 0x2a7cb0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_2a7cb4:
    // 0x2a7cb4: 0x4605101c  madd.s      $f0, $f2, $f5
    ctx->pc = 0x2a7cb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
label_2a7cb8:
    // 0x2a7cb8: 0xe7a00348  swc1        $f0, 0x348($sp)
    ctx->pc = 0x2a7cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 840), bits); }
label_2a7cbc:
    // 0x2a7cbc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2a7cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7cc0:
    // 0x2a7cc0: 0x4606001a  mula.s      $f0, $f6
    ctx->pc = 0x2a7cc0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_2a7cc4:
    // 0x2a7cc4: 0x4605081c  madd.s      $f0, $f1, $f5
    ctx->pc = 0x2a7cc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[5]));
label_2a7cc8:
    // 0x2a7cc8: 0xe7a0034c  swc1        $f0, 0x34C($sp)
    ctx->pc = 0x2a7cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 844), bits); }
label_2a7ccc:
    // 0x2a7ccc: 0xc6200070  lwc1        $f0, 0x70($s1)
    ctx->pc = 0x2a7cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7cd0:
    // 0x2a7cd0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2a7cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_2a7cd4:
    // 0x2a7cd4: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x2a7cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_2a7cd8:
    // 0x2a7cd8: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x2a7cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
label_2a7cdc:
    // 0x2a7cdc: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x2a7cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7ce0:
    // 0x2a7ce0: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x2a7ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
label_2a7ce4:
    // 0x2a7ce4: 0xc6200078  lwc1        $f0, 0x78($s1)
    ctx->pc = 0x2a7ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7ce8:
    // 0x2a7ce8: 0xe60001ac  swc1        $f0, 0x1AC($s0)
    ctx->pc = 0x2a7ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 428), bits); }
label_2a7cec:
    // 0x2a7cec: 0xc7a00340  lwc1        $f0, 0x340($sp)
    ctx->pc = 0x2a7cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7cf0:
    // 0x2a7cf0: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x2a7cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
label_2a7cf4:
    // 0x2a7cf4: 0xc7a00344  lwc1        $f0, 0x344($sp)
    ctx->pc = 0x2a7cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7cf8:
    // 0x2a7cf8: 0xe60001b4  swc1        $f0, 0x1B4($s0)
    ctx->pc = 0x2a7cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 436), bits); }
label_2a7cfc:
    // 0x2a7cfc: 0xc7a00348  lwc1        $f0, 0x348($sp)
    ctx->pc = 0x2a7cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7d00:
    // 0x2a7d00: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2a7d04:
    if (ctx->pc == 0x2A7D04u) {
        ctx->pc = 0x2A7D04u;
            // 0x2a7d04: 0xe60001b8  swc1        $f0, 0x1B8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
        ctx->pc = 0x2A7D08u;
        goto label_2a7d08;
    }
    ctx->pc = 0x2A7D00u;
    {
        const bool branch_taken_0x2a7d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7D00u;
            // 0x2a7d04: 0xe60001b8  swc1        $f0, 0x1B8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7d00) {
            ctx->pc = 0x2A7D50u;
            goto label_2a7d50;
        }
    }
    ctx->pc = 0x2A7D08u;
label_2a7d08:
    // 0x2a7d08: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2a7d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2a7d0c:
    // 0x2a7d0c: 0x26250070  addiu       $a1, $s1, 0x70
    ctx->pc = 0x2a7d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_2a7d10:
    // 0x2a7d10: 0xc04cc90  jal         func_133240
label_2a7d14:
    if (ctx->pc == 0x2A7D14u) {
        ctx->pc = 0x2A7D14u;
            // 0x2a7d14: 0x27a60340  addiu       $a2, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->pc = 0x2A7D18u;
        goto label_2a7d18;
    }
    ctx->pc = 0x2A7D10u;
    SET_GPR_U32(ctx, 31, 0x2A7D18u);
    ctx->pc = 0x2A7D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7D10u;
            // 0x2a7d14: 0x27a60340  addiu       $a2, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7D18u; }
        if (ctx->pc != 0x2A7D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7D18u; }
        if (ctx->pc != 0x2A7D18u) { return; }
    }
    ctx->pc = 0x2A7D18u;
label_2a7d18:
    // 0x2a7d18: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2a7d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2a7d1c:
    // 0x2a7d1c: 0xc04cc44  jal         func_133110
label_2a7d20:
    if (ctx->pc == 0x2A7D20u) {
        ctx->pc = 0x2A7D20u;
            // 0x2a7d20: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A7D24u;
        goto label_2a7d24;
    }
    ctx->pc = 0x2A7D1Cu;
    SET_GPR_U32(ctx, 31, 0x2A7D24u);
    ctx->pc = 0x2A7D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7D1Cu;
            // 0x2a7d20: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7D24u; }
        if (ctx->pc != 0x2A7D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7D24u; }
        if (ctx->pc != 0x2A7D24u) { return; }
    }
    ctx->pc = 0x2A7D24u;
label_2a7d24:
    // 0x2a7d24: 0x8e260038  lw          $a2, 0x38($s1)
    ctx->pc = 0x2a7d24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_2a7d28:
    // 0x2a7d28: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2a7d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2a7d2c:
    // 0x2a7d2c: 0xc04cbf0  jal         func_132FC0
label_2a7d30:
    if (ctx->pc == 0x2A7D30u) {
        ctx->pc = 0x2A7D30u;
            // 0x2a7d30: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x2A7D34u;
        goto label_2a7d34;
    }
    ctx->pc = 0x2A7D2Cu;
    SET_GPR_U32(ctx, 31, 0x2A7D34u);
    ctx->pc = 0x2A7D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7D2Cu;
            // 0x2a7d30: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7D34u; }
        if (ctx->pc != 0x2A7D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7D34u; }
        if (ctx->pc != 0x2A7D34u) { return; }
    }
    ctx->pc = 0x2A7D34u;
label_2a7d34:
    // 0x2a7d34: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x2a7d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7d38:
    // 0x2a7d38: 0xe60001bc  swc1        $f0, 0x1BC($s0)
    ctx->pc = 0x2a7d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
label_2a7d3c:
    // 0x2a7d3c: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x2a7d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7d40:
    // 0x2a7d40: 0xe60001c0  swc1        $f0, 0x1C0($s0)
    ctx->pc = 0x2a7d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 448), bits); }
label_2a7d44:
    // 0x2a7d44: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x2a7d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7d48:
    // 0x2a7d48: 0x100000ce  b           . + 4 + (0xCE << 2)
label_2a7d4c:
    if (ctx->pc == 0x2A7D4Cu) {
        ctx->pc = 0x2A7D4Cu;
            // 0x2a7d4c: 0xe60001c4  swc1        $f0, 0x1C4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 452), bits); }
        ctx->pc = 0x2A7D50u;
        goto label_2a7d50;
    }
    ctx->pc = 0x2A7D48u;
    {
        const bool branch_taken_0x2a7d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7D48u;
            // 0x2a7d4c: 0xe60001c4  swc1        $f0, 0x1C4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 452), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7d48) {
            ctx->pc = 0x2A8084u;
            goto label_2a8084;
        }
    }
    ctx->pc = 0x2A7D50u;
label_2a7d50:
    // 0x2a7d50: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x2a7d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_2a7d54:
    // 0x2a7d54: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a7d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7d58:
    // 0x2a7d58: 0xe60001bc  swc1        $f0, 0x1BC($s0)
    ctx->pc = 0x2a7d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
label_2a7d5c:
    // 0x2a7d5c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2a7d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7d60:
    // 0x2a7d60: 0xe60001c0  swc1        $f0, 0x1C0($s0)
    ctx->pc = 0x2a7d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 448), bits); }
label_2a7d64:
    // 0x2a7d64: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2a7d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7d68:
    // 0x2a7d68: 0x100000c6  b           . + 4 + (0xC6 << 2)
label_2a7d6c:
    if (ctx->pc == 0x2A7D6Cu) {
        ctx->pc = 0x2A7D6Cu;
            // 0x2a7d6c: 0xe60001c4  swc1        $f0, 0x1C4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 452), bits); }
        ctx->pc = 0x2A7D70u;
        goto label_2a7d70;
    }
    ctx->pc = 0x2A7D68u;
    {
        const bool branch_taken_0x2a7d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7D68u;
            // 0x2a7d6c: 0xe60001c4  swc1        $f0, 0x1C4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 452), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7d68) {
            ctx->pc = 0x2A8084u;
            goto label_2a8084;
        }
    }
    ctx->pc = 0x2A7D70u;
label_2a7d70:
    // 0x2a7d70: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x2a7d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_2a7d74:
    // 0x2a7d74: 0x50400050  beql        $v0, $zero, . + 4 + (0x50 << 2)
label_2a7d78:
    if (ctx->pc == 0x2A7D78u) {
        ctx->pc = 0x2A7D78u;
            // 0x2a7d78: 0xc7a00350  lwc1        $f0, 0x350($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x2A7D7Cu;
        goto label_2a7d7c;
    }
    ctx->pc = 0x2A7D74u;
    {
        const bool branch_taken_0x2a7d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7d74) {
            ctx->pc = 0x2A7D78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7D74u;
            // 0x2a7d78: 0xc7a00350  lwc1        $f0, 0x350($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A7EB8u;
            goto label_2a7eb8;
        }
    }
    ctx->pc = 0x2A7D7Cu;
label_2a7d7c:
    // 0x2a7d7c: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x2a7d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_2a7d80:
    // 0x2a7d80: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2a7d80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a7d84:
    // 0x2a7d84: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a7d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7d88:
    // 0x2a7d88: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a7d88u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a7d8c:
    // 0x2a7d8c: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
label_2a7d90:
    if (ctx->pc == 0x2A7D90u) {
        ctx->pc = 0x2A7D90u;
            // 0x2a7d90: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x2A7D94u;
        goto label_2a7d94;
    }
    ctx->pc = 0x2A7D8Cu;
    {
        const bool branch_taken_0x2a7d8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a7d8c) {
            ctx->pc = 0x2A7D90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7D8Cu;
            // 0x2a7d90: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A7DECu;
            goto label_2a7dec;
        }
    }
    ctx->pc = 0x2A7D94u;
label_2a7d94:
    // 0x2a7d94: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2a7d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7d98:
    // 0x2a7d98: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a7d98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a7d9c:
    // 0x2a7d9c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_2a7da0:
    if (ctx->pc == 0x2A7DA0u) {
        ctx->pc = 0x2A7DA4u;
        goto label_2a7da4;
    }
    ctx->pc = 0x2A7D9Cu;
    {
        const bool branch_taken_0x2a7d9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a7d9c) {
            ctx->pc = 0x2A7DE8u;
            goto label_2a7de8;
        }
    }
    ctx->pc = 0x2A7DA4u;
label_2a7da4:
    // 0x2a7da4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2a7da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7da8:
    // 0x2a7da8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a7da8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a7dac:
    // 0x2a7dac: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_2a7db0:
    if (ctx->pc == 0x2A7DB0u) {
        ctx->pc = 0x2A7DB4u;
        goto label_2a7db4;
    }
    ctx->pc = 0x2A7DACu;
    {
        const bool branch_taken_0x2a7dac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a7dac) {
            ctx->pc = 0x2A7DE8u;
            goto label_2a7de8;
        }
    }
    ctx->pc = 0x2A7DB4u;
label_2a7db4:
    // 0x2a7db4: 0xc7a00340  lwc1        $f0, 0x340($sp)
    ctx->pc = 0x2a7db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7db8:
    // 0x2a7db8: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x2a7db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
label_2a7dbc:
    // 0x2a7dbc: 0xc7a00344  lwc1        $f0, 0x344($sp)
    ctx->pc = 0x2a7dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7dc0:
    // 0x2a7dc0: 0xe60001b4  swc1        $f0, 0x1B4($s0)
    ctx->pc = 0x2a7dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 436), bits); }
label_2a7dc4:
    // 0x2a7dc4: 0xc7a00348  lwc1        $f0, 0x348($sp)
    ctx->pc = 0x2a7dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7dc8:
    // 0x2a7dc8: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x2a7dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
label_2a7dcc:
    // 0x2a7dcc: 0xc7a00350  lwc1        $f0, 0x350($sp)
    ctx->pc = 0x2a7dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7dd0:
    // 0x2a7dd0: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x2a7dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
label_2a7dd4:
    // 0x2a7dd4: 0xc7a00354  lwc1        $f0, 0x354($sp)
    ctx->pc = 0x2a7dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7dd8:
    // 0x2a7dd8: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x2a7dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
label_2a7ddc:
    // 0x2a7ddc: 0xc7a00358  lwc1        $f0, 0x358($sp)
    ctx->pc = 0x2a7ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7de0:
    // 0x2a7de0: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_2a7de4:
    if (ctx->pc == 0x2A7DE4u) {
        ctx->pc = 0x2A7DE4u;
            // 0x2a7de4: 0xe60001ac  swc1        $f0, 0x1AC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 428), bits); }
        ctx->pc = 0x2A7DE8u;
        goto label_2a7de8;
    }
    ctx->pc = 0x2A7DE0u;
    {
        const bool branch_taken_0x2a7de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7DE0u;
            // 0x2a7de4: 0xe60001ac  swc1        $f0, 0x1AC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 428), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7de0) {
            ctx->pc = 0x2A806Cu;
            goto label_2a806c;
        }
    }
    ctx->pc = 0x2A7DE8u;
label_2a7de8:
    // 0x2a7de8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a7de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7dec:
    // 0x2a7dec: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2a7decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2a7df0:
    // 0x2a7df0: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x2a7df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
label_2a7df4:
    // 0x2a7df4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2a7df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7df8:
    // 0x2a7df8: 0xe60001b4  swc1        $f0, 0x1B4($s0)
    ctx->pc = 0x2a7df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 436), bits); }
label_2a7dfc:
    // 0x2a7dfc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2a7dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7e00:
    // 0x2a7e00: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x2a7e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
label_2a7e04:
    // 0x2a7e04: 0x8e260038  lw          $a2, 0x38($s1)
    ctx->pc = 0x2a7e04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_2a7e08:
    // 0x2a7e08: 0xc04cc90  jal         func_133240
label_2a7e0c:
    if (ctx->pc == 0x2A7E0Cu) {
        ctx->pc = 0x2A7E0Cu;
            // 0x2a7e0c: 0x27a50240  addiu       $a1, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->pc = 0x2A7E10u;
        goto label_2a7e10;
    }
    ctx->pc = 0x2A7E08u;
    SET_GPR_U32(ctx, 31, 0x2A7E10u);
    ctx->pc = 0x2A7E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7E08u;
            // 0x2a7e0c: 0x27a50240  addiu       $a1, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7E10u; }
        if (ctx->pc != 0x2A7E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7E10u; }
        if (ctx->pc != 0x2A7E10u) { return; }
    }
    ctx->pc = 0x2A7E10u;
label_2a7e10:
    // 0x2a7e10: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2a7e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2a7e14:
    // 0x2a7e14: 0xc04cc44  jal         func_133110
label_2a7e18:
    if (ctx->pc == 0x2A7E18u) {
        ctx->pc = 0x2A7E18u;
            // 0x2a7e18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A7E1Cu;
        goto label_2a7e1c;
    }
    ctx->pc = 0x2A7E14u;
    SET_GPR_U32(ctx, 31, 0x2A7E1Cu);
    ctx->pc = 0x2A7E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7E14u;
            // 0x2a7e18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7E1Cu; }
        if (ctx->pc != 0x2A7E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7E1Cu; }
        if (ctx->pc != 0x2A7E1Cu) { return; }
    }
    ctx->pc = 0x2A7E1Cu;
label_2a7e1c:
    // 0x2a7e1c: 0xc7ac01d4  lwc1        $f12, 0x1D4($sp)
    ctx->pc = 0x2a7e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a7e20:
    // 0x2a7e20: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2a7e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2a7e24:
    // 0x2a7e24: 0xc04cc70  jal         func_1331C0
label_2a7e28:
    if (ctx->pc == 0x2A7E28u) {
        ctx->pc = 0x2A7E28u;
            // 0x2a7e28: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A7E2Cu;
        goto label_2a7e2c;
    }
    ctx->pc = 0x2A7E24u;
    SET_GPR_U32(ctx, 31, 0x2A7E2Cu);
    ctx->pc = 0x2A7E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7E24u;
            // 0x2a7e28: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7E2Cu; }
        if (ctx->pc != 0x2A7E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7E2Cu; }
        if (ctx->pc != 0x2A7E2Cu) { return; }
    }
    ctx->pc = 0x2A7E2Cu;
label_2a7e2c:
    // 0x2a7e2c: 0x27a40350  addiu       $a0, $sp, 0x350
    ctx->pc = 0x2a7e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
label_2a7e30:
    // 0x2a7e30: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x2a7e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_2a7e34:
    // 0x2a7e34: 0xc04cbe0  jal         func_132F80
label_2a7e38:
    if (ctx->pc == 0x2A7E38u) {
        ctx->pc = 0x2A7E38u;
            // 0x2a7e38: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x2A7E3Cu;
        goto label_2a7e3c;
    }
    ctx->pc = 0x2A7E34u;
    SET_GPR_U32(ctx, 31, 0x2A7E3Cu);
    ctx->pc = 0x2A7E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7E34u;
            // 0x2a7e38: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7E3Cu; }
        if (ctx->pc != 0x2A7E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7E3Cu; }
        if (ctx->pc != 0x2A7E3Cu) { return; }
    }
    ctx->pc = 0x2A7E3Cu;
label_2a7e3c:
    // 0x2a7e3c: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x2a7e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7e40:
    // 0x2a7e40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a7e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a7e44:
    // 0x2a7e44: 0x44824000  mtc1        $v0, $f8
    ctx->pc = 0x2a7e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_2a7e48:
    // 0x2a7e48: 0xc7a60350  lwc1        $f6, 0x350($sp)
    ctx->pc = 0x2a7e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2a7e4c:
    // 0x2a7e4c: 0x46004243  div.s       $f9, $f8, $f0
    ctx->pc = 0x2a7e4cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[9] = copysignf(INFINITY, ctx->f[8] * 0.0f); } else ctx->f[9] = ctx->f[8] / ctx->f[0];
label_2a7e50:
    // 0x2a7e50: 0x46094201  sub.s       $f8, $f8, $f9
    ctx->pc = 0x2a7e50u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[9]);
label_2a7e54:
    // 0x2a7e54: 0xc7a70270  lwc1        $f7, 0x270($sp)
    ctx->pc = 0x2a7e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2a7e58:
    // 0x2a7e58: 0x4609301a  mula.s      $f6, $f9
    ctx->pc = 0x2a7e58u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
label_2a7e5c:
    // 0x2a7e5c: 0xc7a40354  lwc1        $f4, 0x354($sp)
    ctx->pc = 0x2a7e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2a7e60:
    // 0x2a7e60: 0x4608399c  madd.s      $f6, $f7, $f8
    ctx->pc = 0x2a7e60u;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[8]));
label_2a7e64:
    // 0x2a7e64: 0xc7a50274  lwc1        $f5, 0x274($sp)
    ctx->pc = 0x2a7e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2a7e68:
    // 0x2a7e68: 0x4609201a  mula.s      $f4, $f9
    ctx->pc = 0x2a7e68u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
label_2a7e6c:
    // 0x2a7e6c: 0xc7a20358  lwc1        $f2, 0x358($sp)
    ctx->pc = 0x2a7e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a7e70:
    // 0x2a7e70: 0x4608291c  madd.s      $f4, $f5, $f8
    ctx->pc = 0x2a7e70u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[8]));
label_2a7e74:
    // 0x2a7e74: 0xc7a30278  lwc1        $f3, 0x278($sp)
    ctx->pc = 0x2a7e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a7e78:
    // 0x2a7e78: 0x4609101a  mula.s      $f2, $f9
    ctx->pc = 0x2a7e78u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
label_2a7e7c:
    // 0x2a7e7c: 0xc7a0035c  lwc1        $f0, 0x35C($sp)
    ctx->pc = 0x2a7e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7e80:
    // 0x2a7e80: 0x4608189c  madd.s      $f2, $f3, $f8
    ctx->pc = 0x2a7e80u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[8]));
label_2a7e84:
    // 0x2a7e84: 0xc7a1027c  lwc1        $f1, 0x27C($sp)
    ctx->pc = 0x2a7e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a7e88:
    // 0x2a7e88: 0x4609001a  mula.s      $f0, $f9
    ctx->pc = 0x2a7e88u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
label_2a7e8c:
    // 0x2a7e8c: 0xe7a60350  swc1        $f6, 0x350($sp)
    ctx->pc = 0x2a7e8cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 848), bits); }
label_2a7e90:
    // 0x2a7e90: 0x4608081c  madd.s      $f0, $f1, $f8
    ctx->pc = 0x2a7e90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[8]));
label_2a7e94:
    // 0x2a7e94: 0xe7a40354  swc1        $f4, 0x354($sp)
    ctx->pc = 0x2a7e94u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 852), bits); }
label_2a7e98:
    // 0x2a7e98: 0xe7a20358  swc1        $f2, 0x358($sp)
    ctx->pc = 0x2a7e98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 856), bits); }
label_2a7e9c:
    // 0x2a7e9c: 0xe7a0035c  swc1        $f0, 0x35C($sp)
    ctx->pc = 0x2a7e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 860), bits); }
label_2a7ea0:
    // 0x2a7ea0: 0xe60601a4  swc1        $f6, 0x1A4($s0)
    ctx->pc = 0x2a7ea0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
label_2a7ea4:
    // 0x2a7ea4: 0xc7a00354  lwc1        $f0, 0x354($sp)
    ctx->pc = 0x2a7ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7ea8:
    // 0x2a7ea8: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x2a7ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
label_2a7eac:
    // 0x2a7eac: 0xc7a00358  lwc1        $f0, 0x358($sp)
    ctx->pc = 0x2a7eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7eb0:
    // 0x2a7eb0: 0x1000006e  b           . + 4 + (0x6E << 2)
label_2a7eb4:
    if (ctx->pc == 0x2A7EB4u) {
        ctx->pc = 0x2A7EB4u;
            // 0x2a7eb4: 0xe60001ac  swc1        $f0, 0x1AC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 428), bits); }
        ctx->pc = 0x2A7EB8u;
        goto label_2a7eb8;
    }
    ctx->pc = 0x2A7EB0u;
    {
        const bool branch_taken_0x2a7eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7EB0u;
            // 0x2a7eb4: 0xe60001ac  swc1        $f0, 0x1AC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 428), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7eb0) {
            ctx->pc = 0x2A806Cu;
            goto label_2a806c;
        }
    }
    ctx->pc = 0x2A7EB8u;
label_2a7eb8:
    // 0x2a7eb8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x2a7eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_2a7ebc:
    // 0x2a7ebc: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x2a7ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_2a7ec0:
    // 0x2a7ec0: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x2a7ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
label_2a7ec4:
    // 0x2a7ec4: 0xc7a00354  lwc1        $f0, 0x354($sp)
    ctx->pc = 0x2a7ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7ec8:
    // 0x2a7ec8: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x2a7ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
label_2a7ecc:
    // 0x2a7ecc: 0xc7a00358  lwc1        $f0, 0x358($sp)
    ctx->pc = 0x2a7eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7ed0:
    // 0x2a7ed0: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
label_2a7ed4:
    if (ctx->pc == 0x2A7ED4u) {
        ctx->pc = 0x2A7ED4u;
            // 0x2a7ed4: 0xe60001ac  swc1        $f0, 0x1AC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 428), bits); }
        ctx->pc = 0x2A7ED8u;
        goto label_2a7ed8;
    }
    ctx->pc = 0x2A7ED0u;
    {
        const bool branch_taken_0x2a7ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7ED0u;
            // 0x2a7ed4: 0xe60001ac  swc1        $f0, 0x1AC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 428), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7ed0) {
            ctx->pc = 0x2A8054u;
            goto label_2a8054;
        }
    }
    ctx->pc = 0x2A7ED8u;
label_2a7ed8:
    // 0x2a7ed8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2a7ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2a7edc:
    // 0x2a7edc: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2a7edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2a7ee0:
    // 0x2a7ee0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2a7ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_2a7ee4:
    // 0x2a7ee4: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x2a7ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_2a7ee8:
    // 0x2a7ee8: 0x5443005b  bnel        $v0, $v1, . + 4 + (0x5B << 2)
label_2a7eec:
    if (ctx->pc == 0x2A7EECu) {
        ctx->pc = 0x2A7EECu;
            // 0x2a7eec: 0xc7a00340  lwc1        $f0, 0x340($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x2A7EF0u;
        goto label_2a7ef0;
    }
    ctx->pc = 0x2A7EE8u;
    {
        const bool branch_taken_0x2a7ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a7ee8) {
            ctx->pc = 0x2A7EECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7EE8u;
            // 0x2a7eec: 0xc7a00340  lwc1        $f0, 0x340($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8058u;
            goto label_2a8058;
        }
    }
    ctx->pc = 0x2A7EF0u;
label_2a7ef0:
    // 0x2a7ef0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2a7ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2a7ef4:
    // 0x2a7ef4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2a7ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2a7ef8:
    // 0x2a7ef8: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x2a7ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_2a7efc:
    // 0x2a7efc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a7efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7f00:
    // 0x2a7f00: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2a7f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2a7f04:
    // 0x2a7f04: 0x8c52012c  lw          $s2, 0x12C($v0)
    ctx->pc = 0x2a7f04u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_2a7f08:
    // 0x2a7f08: 0xa7a000d0  sh          $zero, 0xD0($sp)
    ctx->pc = 0x2a7f08u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 208), (uint16_t)GPR_U32(ctx, 0));
label_2a7f0c:
    // 0x2a7f0c: 0xa7a000d2  sh          $zero, 0xD2($sp)
    ctx->pc = 0x2a7f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 210), (uint16_t)GPR_U32(ctx, 0));
label_2a7f10:
    // 0x2a7f10: 0xc04a576  jal         func_1295D8
label_2a7f14:
    if (ctx->pc == 0x2A7F14u) {
        ctx->pc = 0x2A7F14u;
            // 0x2a7f14: 0xa7a000d4  sh          $zero, 0xD4($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 212), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2A7F18u;
        goto label_2a7f18;
    }
    ctx->pc = 0x2A7F10u;
    SET_GPR_U32(ctx, 31, 0x2A7F18u);
    ctx->pc = 0x2A7F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7F10u;
            // 0x2a7f14: 0xa7a000d4  sh          $zero, 0xD4($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 212), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7F18u; }
        if (ctx->pc != 0x2A7F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7F18u; }
        if (ctx->pc != 0x2A7F18u) { return; }
    }
    ctx->pc = 0x2A7F18u;
label_2a7f18:
    // 0x2a7f18: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2a7f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2a7f1c:
    // 0x2a7f1c: 0x27a50340  addiu       $a1, $sp, 0x340
    ctx->pc = 0x2a7f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_2a7f20:
    // 0x2a7f20: 0xc04cc90  jal         func_133240
label_2a7f24:
    if (ctx->pc == 0x2A7F24u) {
        ctx->pc = 0x2A7F24u;
            // 0x2a7f24: 0x27a60350  addiu       $a2, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->pc = 0x2A7F28u;
        goto label_2a7f28;
    }
    ctx->pc = 0x2A7F20u;
    SET_GPR_U32(ctx, 31, 0x2A7F28u);
    ctx->pc = 0x2A7F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7F20u;
            // 0x2a7f24: 0x27a60350  addiu       $a2, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7F28u; }
        if (ctx->pc != 0x2A7F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7F28u; }
        if (ctx->pc != 0x2A7F28u) { return; }
    }
    ctx->pc = 0x2A7F28u;
label_2a7f28:
    // 0x2a7f28: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2a7f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2a7f2c:
    // 0x2a7f2c: 0xc04cc44  jal         func_133110
label_2a7f30:
    if (ctx->pc == 0x2A7F30u) {
        ctx->pc = 0x2A7F30u;
            // 0x2a7f30: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A7F34u;
        goto label_2a7f34;
    }
    ctx->pc = 0x2A7F2Cu;
    SET_GPR_U32(ctx, 31, 0x2A7F34u);
    ctx->pc = 0x2A7F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7F2Cu;
            // 0x2a7f30: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7F34u; }
        if (ctx->pc != 0x2A7F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7F34u; }
        if (ctx->pc != 0x2A7F34u) { return; }
    }
    ctx->pc = 0x2A7F34u;
label_2a7f34:
    // 0x2a7f34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a7f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a7f38:
    // 0x2a7f38: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2a7f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2a7f3c:
    // 0x2a7f3c: 0x27a60340  addiu       $a2, $sp, 0x340
    ctx->pc = 0x2a7f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_2a7f40:
    // 0x2a7f40: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x2a7f40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2a7f44:
    // 0x2a7f44: 0xc0c614c  jal         func_318530
label_2a7f48:
    if (ctx->pc == 0x2A7F48u) {
        ctx->pc = 0x2A7F48u;
            // 0x2a7f48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A7F4Cu;
        goto label_2a7f4c;
    }
    ctx->pc = 0x2A7F44u;
    SET_GPR_U32(ctx, 31, 0x2A7F4Cu);
    ctx->pc = 0x2A7F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7F44u;
            // 0x2a7f48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318530u;
    if (runtime->hasFunction(0x318530u)) {
        auto targetFn = runtime->lookupFunction(0x318530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7F4Cu; }
        if (ctx->pc != 0x2A7F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318530_0x318530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7F4Cu; }
        if (ctx->pc != 0x2A7F4Cu) { return; }
    }
    ctx->pc = 0x2A7F4Cu;
label_2a7f4c:
    // 0x2a7f4c: 0x8e490008  lw          $t1, 0x8($s2)
    ctx->pc = 0x2a7f4cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2a7f50:
    // 0x2a7f50: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2a7f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2a7f54:
    // 0x2a7f54: 0x97a200d2  lhu         $v0, 0xD2($sp)
    ctx->pc = 0x2a7f54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 210)));
label_2a7f58:
    // 0x2a7f58: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a7f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2a7f5c:
    // 0x2a7f5c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2a7f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2a7f60:
    // 0x2a7f60: 0x27a70340  addiu       $a3, $sp, 0x340
    ctx->pc = 0x2a7f60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_2a7f64:
    // 0x2a7f64: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x2a7f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_2a7f68:
    // 0x2a7f68: 0x24180  sll         $t0, $v0, 6
    ctx->pc = 0x2a7f68u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_2a7f6c:
    // 0x2a7f6c: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x2a7f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_2a7f70:
    // 0x2a7f70: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x2a7f70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_2a7f74:
    // 0x2a7f74: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x2a7f74u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_2a7f78:
    // 0x2a7f78: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a7f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2a7f7c:
    // 0x2a7f7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a7f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a7f80:
    // 0x2a7f80: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2a7f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a7f84:
    // 0x2a7f84: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2a7f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a7f88:
    // 0x2a7f88: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2a7f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a7f8c:
    // 0x2a7f8c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2a7f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7f90:
    // 0x2a7f90: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x2a7f90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2a7f94:
    // 0x2a7f94: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x2a7f94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_2a7f98:
    // 0x2a7f98: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x2a7f98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_2a7f9c:
    // 0x2a7f9c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2a7f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_2a7fa0:
    // 0x2a7fa0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2a7fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2a7fa4:
    // 0x2a7fa4: 0x95030002  lhu         $v1, 0x2($t0)
    ctx->pc = 0x2a7fa4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_2a7fa8:
    // 0x2a7fa8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2a7fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2a7fac:
    // 0x2a7fac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a7facu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2a7fb0:
    // 0x2a7fb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a7fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a7fb4:
    // 0x2a7fb4: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2a7fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a7fb8:
    // 0x2a7fb8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2a7fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a7fbc:
    // 0x2a7fbc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2a7fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a7fc0:
    // 0x2a7fc0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2a7fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7fc4:
    // 0x2a7fc4: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x2a7fc4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2a7fc8:
    // 0x2a7fc8: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x2a7fc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_2a7fcc:
    // 0x2a7fcc: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x2a7fccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2a7fd0:
    // 0x2a7fd0: 0xc0bc5e8  jal         func_2F17A0
label_2a7fd4:
    if (ctx->pc == 0x2A7FD4u) {
        ctx->pc = 0x2A7FD4u;
            // 0x2a7fd4: 0xe7a000ac  swc1        $f0, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->pc = 0x2A7FD8u;
        goto label_2a7fd8;
    }
    ctx->pc = 0x2A7FD0u;
    SET_GPR_U32(ctx, 31, 0x2A7FD8u);
    ctx->pc = 0x2A7FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7FD0u;
            // 0x2a7fd4: 0xe7a000ac  swc1        $f0, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F17A0u;
    if (runtime->hasFunction(0x2F17A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F17A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7FD8u; }
        if (ctx->pc != 0x2A7FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F17A0_0x2f17a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7FD8u; }
        if (ctx->pc != 0x2A7FD8u) { return; }
    }
    ctx->pc = 0x2A7FD8u;
label_2a7fd8:
    // 0x2a7fd8: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x2a7fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7fdc:
    // 0x2a7fdc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a7fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a7fe0:
    // 0x2a7fe0: 0x44824000  mtc1        $v0, $f8
    ctx->pc = 0x2a7fe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_2a7fe4:
    // 0x2a7fe4: 0xc7a60120  lwc1        $f6, 0x120($sp)
    ctx->pc = 0x2a7fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2a7fe8:
    // 0x2a7fe8: 0x46004243  div.s       $f9, $f8, $f0
    ctx->pc = 0x2a7fe8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[9] = copysignf(INFINITY, ctx->f[8] * 0.0f); } else ctx->f[9] = ctx->f[8] / ctx->f[0];
label_2a7fec:
    // 0x2a7fec: 0x46094201  sub.s       $f8, $f8, $f9
    ctx->pc = 0x2a7fecu;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[9]);
label_2a7ff0:
    // 0x2a7ff0: 0xc7a70260  lwc1        $f7, 0x260($sp)
    ctx->pc = 0x2a7ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2a7ff4:
    // 0x2a7ff4: 0x4609301a  mula.s      $f6, $f9
    ctx->pc = 0x2a7ff4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
label_2a7ff8:
    // 0x2a7ff8: 0xc7a40124  lwc1        $f4, 0x124($sp)
    ctx->pc = 0x2a7ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2a7ffc:
    // 0x2a7ffc: 0x4608399c  madd.s      $f6, $f7, $f8
    ctx->pc = 0x2a7ffcu;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[8]));
label_2a8000:
    // 0x2a8000: 0xc7a50264  lwc1        $f5, 0x264($sp)
    ctx->pc = 0x2a8000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2a8004:
    // 0x2a8004: 0x4609201a  mula.s      $f4, $f9
    ctx->pc = 0x2a8004u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
label_2a8008:
    // 0x2a8008: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x2a8008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a800c:
    // 0x2a800c: 0x4608291c  madd.s      $f4, $f5, $f8
    ctx->pc = 0x2a800cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[8]));
label_2a8010:
    // 0x2a8010: 0xc7a30268  lwc1        $f3, 0x268($sp)
    ctx->pc = 0x2a8010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a8014:
    // 0x2a8014: 0x4609101a  mula.s      $f2, $f9
    ctx->pc = 0x2a8014u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
label_2a8018:
    // 0x2a8018: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x2a8018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a801c:
    // 0x2a801c: 0x4608189c  madd.s      $f2, $f3, $f8
    ctx->pc = 0x2a801cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[8]));
label_2a8020:
    // 0x2a8020: 0xc7a1026c  lwc1        $f1, 0x26C($sp)
    ctx->pc = 0x2a8020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a8024:
    // 0x2a8024: 0x4609001a  mula.s      $f0, $f9
    ctx->pc = 0x2a8024u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
label_2a8028:
    // 0x2a8028: 0xe7a60120  swc1        $f6, 0x120($sp)
    ctx->pc = 0x2a8028u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_2a802c:
    // 0x2a802c: 0x4608081c  madd.s      $f0, $f1, $f8
    ctx->pc = 0x2a802cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[8]));
label_2a8030:
    // 0x2a8030: 0xe7a40124  swc1        $f4, 0x124($sp)
    ctx->pc = 0x2a8030u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_2a8034:
    // 0x2a8034: 0xe7a20128  swc1        $f2, 0x128($sp)
    ctx->pc = 0x2a8034u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_2a8038:
    // 0x2a8038: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x2a8038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_2a803c:
    // 0x2a803c: 0xe60601b0  swc1        $f6, 0x1B0($s0)
    ctx->pc = 0x2a803cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
label_2a8040:
    // 0x2a8040: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x2a8040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a8044:
    // 0x2a8044: 0xe60001b4  swc1        $f0, 0x1B4($s0)
    ctx->pc = 0x2a8044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 436), bits); }
label_2a8048:
    // 0x2a8048: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x2a8048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a804c:
    // 0x2a804c: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a8050:
    if (ctx->pc == 0x2A8050u) {
        ctx->pc = 0x2A8050u;
            // 0x2a8050: 0xe60001b8  swc1        $f0, 0x1B8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
        ctx->pc = 0x2A8054u;
        goto label_2a8054;
    }
    ctx->pc = 0x2A804Cu;
    {
        const bool branch_taken_0x2a804c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A804Cu;
            // 0x2a8050: 0xe60001b8  swc1        $f0, 0x1B8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a804c) {
            ctx->pc = 0x2A806Cu;
            goto label_2a806c;
        }
    }
    ctx->pc = 0x2A8054u;
label_2a8054:
    // 0x2a8054: 0xc7a00340  lwc1        $f0, 0x340($sp)
    ctx->pc = 0x2a8054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a8058:
    // 0x2a8058: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x2a8058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
label_2a805c:
    // 0x2a805c: 0xc7a00344  lwc1        $f0, 0x344($sp)
    ctx->pc = 0x2a805cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a8060:
    // 0x2a8060: 0xe60001b4  swc1        $f0, 0x1B4($s0)
    ctx->pc = 0x2a8060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 436), bits); }
label_2a8064:
    // 0x2a8064: 0xc7a00348  lwc1        $f0, 0x348($sp)
    ctx->pc = 0x2a8064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a8068:
    // 0x2a8068: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x2a8068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
label_2a806c:
    // 0x2a806c: 0xc7a00280  lwc1        $f0, 0x280($sp)
    ctx->pc = 0x2a806cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a8070:
    // 0x2a8070: 0xe60001bc  swc1        $f0, 0x1BC($s0)
    ctx->pc = 0x2a8070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
label_2a8074:
    // 0x2a8074: 0xc7a00284  lwc1        $f0, 0x284($sp)
    ctx->pc = 0x2a8074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a8078:
    // 0x2a8078: 0xe60001c0  swc1        $f0, 0x1C0($s0)
    ctx->pc = 0x2a8078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 448), bits); }
label_2a807c:
    // 0x2a807c: 0xc7a00288  lwc1        $f0, 0x288($sp)
    ctx->pc = 0x2a807cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a8080:
    // 0x2a8080: 0xe60001c4  swc1        $f0, 0x1C4($s0)
    ctx->pc = 0x2a8080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 452), bits); }
label_2a8084:
    // 0x2a8084: 0x32620100  andi        $v0, $s3, 0x100
    ctx->pc = 0x2a8084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
label_2a8088:
    // 0x2a8088: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2a8088u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2a808c:
    // 0x2a808c: 0x54200050  bnel        $at, $zero, . + 4 + (0x50 << 2)
label_2a8090:
    if (ctx->pc == 0x2A8090u) {
        ctx->pc = 0x2A8090u;
            // 0x2a8090: 0x3c024336  lui         $v0, 0x4336 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
        ctx->pc = 0x2A8094u;
        goto label_2a8094;
    }
    ctx->pc = 0x2A808Cu;
    {
        const bool branch_taken_0x2a808c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a808c) {
            ctx->pc = 0x2A8090u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A808Cu;
            // 0x2a8090: 0x3c024336  lui         $v0, 0x4336 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A81D0u;
            goto label_2a81d0;
        }
    }
    ctx->pc = 0x2A8094u;
label_2a8094:
    // 0x2a8094: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x2a8094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_2a8098:
    // 0x2a8098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a8098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a809c:
    // 0x2a809c: 0x1462004b  bne         $v1, $v0, . + 4 + (0x4B << 2)
label_2a80a0:
    if (ctx->pc == 0x2A80A0u) {
        ctx->pc = 0x2A80A4u;
        goto label_2a80a4;
    }
    ctx->pc = 0x2A809Cu;
    {
        const bool branch_taken_0x2a809c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a809c) {
            ctx->pc = 0x2A81CCu;
            goto label_2a81cc;
        }
    }
    ctx->pc = 0x2A80A4u;
label_2a80a4:
    // 0x2a80a4: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2a80a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_2a80a8:
    // 0x2a80a8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2a80a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_2a80ac:
    // 0x2a80ac: 0x922400a2  lbu         $a0, 0xA2($s1)
    ctx->pc = 0x2a80acu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 162)));
label_2a80b0:
    // 0x2a80b0: 0xc4441000  lwc1        $f4, 0x1000($v0)
    ctx->pc = 0x2a80b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2a80b4:
    // 0x2a80b4: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_2a80b8:
    if (ctx->pc == 0x2A80B8u) {
        ctx->pc = 0x2A80B8u;
            // 0x2a80b8: 0xc4651000  lwc1        $f5, 0x1000($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->pc = 0x2A80BCu;
        goto label_2a80bc;
    }
    ctx->pc = 0x2A80B4u;
    {
        const bool branch_taken_0x2a80b4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2A80B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A80B4u;
            // 0x2a80b8: 0xc4651000  lwc1        $f5, 0x1000($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a80b4) {
            ctx->pc = 0x2A80C8u;
            goto label_2a80c8;
        }
    }
    ctx->pc = 0x2A80BCu;
label_2a80bc:
    // 0x2a80bc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a80bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a80c0:
    // 0x2a80c0: 0x10000008  b           . + 4 + (0x8 << 2)
label_2a80c4:
    if (ctx->pc == 0x2A80C4u) {
        ctx->pc = 0x2A80C4u;
            // 0x2a80c4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2A80C8u;
        goto label_2a80c8;
    }
    ctx->pc = 0x2A80C0u;
    {
        const bool branch_taken_0x2a80c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A80C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A80C0u;
            // 0x2a80c4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a80c0) {
            ctx->pc = 0x2A80E4u;
            goto label_2a80e4;
        }
    }
    ctx->pc = 0x2A80C8u;
label_2a80c8:
    // 0x2a80c8: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2a80c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_2a80cc:
    // 0x2a80cc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2a80ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2a80d0:
    // 0x2a80d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a80d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2a80d4:
    // 0x2a80d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a80d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a80d8:
    // 0x2a80d8: 0x0  nop
    ctx->pc = 0x2a80d8u;
    // NOP
label_2a80dc:
    // 0x2a80dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a80dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a80e0:
    // 0x2a80e0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a80e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2a80e4:
    // 0x2a80e4: 0x0  nop
    ctx->pc = 0x2a80e4u;
    // NOP
label_2a80e8:
    // 0x2a80e8: 0x0  nop
    ctx->pc = 0x2a80e8u;
    // NOP
label_2a80ec:
    // 0x2a80ec: 0x460400c3  div.s       $f3, $f0, $f4
    ctx->pc = 0x2a80ecu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[3] = ctx->f[0] / ctx->f[4];
label_2a80f0:
    // 0x2a80f0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2a80f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_2a80f4:
    // 0x2a80f4: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x2a80f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_2a80f8:
    // 0x2a80f8: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2a80f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_2a80fc:
    // 0x2a80fc: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x2a80fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_2a8100:
    // 0x2a8100: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a8100u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a8104:
    // 0x2a8104: 0x0  nop
    ctx->pc = 0x2a8104u;
    // NOP
label_2a8108:
    // 0x2a8108: 0x46030041  sub.s       $f1, $f0, $f3
    ctx->pc = 0x2a8108u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_2a810c:
    // 0x2a810c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a810cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a8110:
    // 0x2a8110: 0xc7a201d8  lwc1        $f2, 0x1D8($sp)
    ctx->pc = 0x2a8110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a8114:
    // 0x2a8114: 0x4603001a  mula.s      $f0, $f3
    ctx->pc = 0x2a8114u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2a8118:
    // 0x2a8118: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x2a8118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_2a811c:
    // 0x2a811c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a811cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a8120:
    // 0x2a8120: 0x0  nop
    ctx->pc = 0x2a8120u;
    // NOP
label_2a8124:
    // 0x2a8124: 0xe7a001d8  swc1        $f0, 0x1D8($sp)
    ctx->pc = 0x2a8124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_2a8128:
    // 0x2a8128: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a8128u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a812c:
    // 0x2a812c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a812cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2a8130:
    // 0x2a8130: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2a8130u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2a8134:
    // 0x2a8134: 0x0  nop
    ctx->pc = 0x2a8134u;
    // NOP
label_2a8138:
    // 0x2a8138: 0xae020194  sw          $v0, 0x194($s0)
    ctx->pc = 0x2a8138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 2));
label_2a813c:
    // 0x2a813c: 0x922200a2  lbu         $v0, 0xA2($s1)
    ctx->pc = 0x2a813cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 162)));
label_2a8140:
    // 0x2a8140: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a8140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a8144:
    // 0x2a8144: 0xa22200a2  sb          $v0, 0xA2($s1)
    ctx->pc = 0x2a8144u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 162), (uint8_t)GPR_U32(ctx, 2));
label_2a8148:
    // 0x2a8148: 0x922200a2  lbu         $v0, 0xA2($s1)
    ctx->pc = 0x2a8148u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 162)));
label_2a814c:
    // 0x2a814c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_2a8150:
    if (ctx->pc == 0x2A8150u) {
        ctx->pc = 0x2A8150u;
            // 0x2a8150: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x2A8154u;
        goto label_2a8154;
    }
    ctx->pc = 0x2A814Cu;
    {
        const bool branch_taken_0x2a814c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a814c) {
            ctx->pc = 0x2A8150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A814Cu;
            // 0x2a8150: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8160u;
            goto label_2a8160;
        }
    }
    ctx->pc = 0x2A8154u;
label_2a8154:
    // 0x2a8154: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a8158:
    // 0x2a8158: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a815c:
    if (ctx->pc == 0x2A815Cu) {
        ctx->pc = 0x2A815Cu;
            // 0x2a815c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2A8160u;
        goto label_2a8160;
    }
    ctx->pc = 0x2A8158u;
    {
        const bool branch_taken_0x2a8158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A815Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8158u;
            // 0x2a815c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8158) {
            ctx->pc = 0x2A8178u;
            goto label_2a8178;
        }
    }
    ctx->pc = 0x2A8160u;
label_2a8160:
    // 0x2a8160: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a8160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a8164:
    // 0x2a8164: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a8164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2a8168:
    // 0x2a8168: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a8168u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a816c:
    // 0x2a816c: 0x0  nop
    ctx->pc = 0x2a816cu;
    // NOP
label_2a8170:
    // 0x2a8170: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a8170u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a8174:
    // 0x2a8174: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a8174u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2a8178:
    // 0x2a8178: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x2a8178u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a817c:
    // 0x2a817c: 0x4503001f  bc1tl       . + 4 + (0x1F << 2)
label_2a8180:
    if (ctx->pc == 0x2A8180u) {
        ctx->pc = 0x2A8180u;
            // 0x2a8180: 0xc7a001d8  lwc1        $f0, 0x1D8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x2A8184u;
        goto label_2a8184;
    }
    ctx->pc = 0x2A817Cu;
    {
        const bool branch_taken_0x2a817c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a817c) {
            ctx->pc = 0x2A8180u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A817Cu;
            // 0x2a8180: 0xc7a001d8  lwc1        $f0, 0x1D8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A81FCu;
            goto label_2a81fc;
        }
    }
    ctx->pc = 0x2A8184u;
label_2a8184:
    // 0x2a8184: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2a8184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_2a8188:
    // 0x2a8188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a818c:
    // 0x2a818c: 0x0  nop
    ctx->pc = 0x2a818cu;
    // NOP
label_2a8190:
    // 0x2a8190: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x2a8190u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a8194:
    // 0x2a8194: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_2a8198:
    if (ctx->pc == 0x2A8198u) {
        ctx->pc = 0x2A8198u;
            // 0x2a8198: 0x46002801  sub.s       $f0, $f5, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
        ctx->pc = 0x2A819Cu;
        goto label_2a819c;
    }
    ctx->pc = 0x2A8194u;
    {
        const bool branch_taken_0x2a8194 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a8194) {
            ctx->pc = 0x2A8198u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8194u;
            // 0x2a8198: 0x46002801  sub.s       $f0, $f5, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A81ACu;
            goto label_2a81ac;
        }
    }
    ctx->pc = 0x2A819Cu;
label_2a819c:
    // 0x2a819c: 0x46002824  .word       0x46002824                   # cvt.w.s     $f0, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a819cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2a81a0:
    // 0x2a81a0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2a81a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2a81a4:
    // 0x2a81a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a81a8:
    if (ctx->pc == 0x2A81A8u) {
        ctx->pc = 0x2A81A8u;
            // 0x2a81a8: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x2A81ACu;
        goto label_2a81ac;
    }
    ctx->pc = 0x2A81A4u;
    {
        const bool branch_taken_0x2a81a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A81A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A81A4u;
            // 0x2a81a8: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a81a4) {
            ctx->pc = 0x2A81C4u;
            goto label_2a81c4;
        }
    }
    ctx->pc = 0x2A81ACu;
label_2a81ac:
    // 0x2a81ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2a81acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2a81b0:
    // 0x2a81b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a81b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2a81b4:
    // 0x2a81b4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2a81b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2a81b8:
    // 0x2a81b8: 0x0  nop
    ctx->pc = 0x2a81b8u;
    // NOP
label_2a81bc:
    // 0x2a81bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a81bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2a81c0:
    // 0x2a81c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2a81c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2a81c4:
    // 0x2a81c4: 0x1000000c  b           . + 4 + (0xC << 2)
label_2a81c8:
    if (ctx->pc == 0x2A81C8u) {
        ctx->pc = 0x2A81C8u;
            // 0x2a81c8: 0xa22300a2  sb          $v1, 0xA2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 162), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2A81CCu;
        goto label_2a81cc;
    }
    ctx->pc = 0x2A81C4u;
    {
        const bool branch_taken_0x2a81c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A81C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A81C4u;
            // 0x2a81c8: 0xa22300a2  sb          $v1, 0xA2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 162), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a81c4) {
            ctx->pc = 0x2A81F8u;
            goto label_2a81f8;
        }
    }
    ctx->pc = 0x2A81CCu;
label_2a81cc:
    // 0x2a81cc: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x2a81ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_2a81d0:
    // 0x2a81d0: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x2a81d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_2a81d4:
    // 0x2a81d4: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x2a81d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a81d8:
    // 0x2a81d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a81d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a81dc:
    // 0x2a81dc: 0x0  nop
    ctx->pc = 0x2a81dcu;
    // NOP
label_2a81e0:
    // 0x2a81e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a81e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a81e4:
    // 0x2a81e4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a81e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2a81e8:
    // 0x2a81e8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2a81e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2a81ec:
    // 0x2a81ec: 0x0  nop
    ctx->pc = 0x2a81ecu;
    // NOP
label_2a81f0:
    // 0x2a81f0: 0xae020194  sw          $v0, 0x194($s0)
    ctx->pc = 0x2a81f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 2));
label_2a81f4:
    // 0x2a81f4: 0xa22000a2  sb          $zero, 0xA2($s1)
    ctx->pc = 0x2a81f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 162), (uint8_t)GPR_U32(ctx, 0));
label_2a81f8:
    // 0x2a81f8: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x2a81f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a81fc:
    // 0x2a81fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a81fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a8200:
    // 0x2a8200: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a8200u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2a8204:
    // 0x2a8204: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2a8204u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2a8208:
    // 0x2a8208: 0x0  nop
    ctx->pc = 0x2a8208u;
    // NOP
label_2a820c:
    // 0x2a820c: 0xae020194  sw          $v0, 0x194($s0)
    ctx->pc = 0x2a820cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 2));
label_2a8210:
    // 0x2a8210: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x2a8210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2a8214:
    // 0x2a8214: 0xc04cc04  jal         func_133010
label_2a8218:
    if (ctx->pc == 0x2A8218u) {
        ctx->pc = 0x2A8218u;
            // 0x2a8218: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->pc = 0x2A821Cu;
        goto label_2a821c;
    }
    ctx->pc = 0x2A8214u;
    SET_GPR_U32(ctx, 31, 0x2A821Cu);
    ctx->pc = 0x2A8218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8214u;
            // 0x2a8218: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A821Cu; }
        if (ctx->pc != 0x2A821Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A821Cu; }
        if (ctx->pc != 0x2A821Cu) { return; }
    }
    ctx->pc = 0x2A821Cu;
label_2a821c:
    // 0x2a821c: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x2a821cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_2a8220:
    // 0x2a8220: 0xc04cc04  jal         func_133010
label_2a8224:
    if (ctx->pc == 0x2A8224u) {
        ctx->pc = 0x2A8224u;
            // 0x2a8224: 0x27a50240  addiu       $a1, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->pc = 0x2A8228u;
        goto label_2a8228;
    }
    ctx->pc = 0x2A8220u;
    SET_GPR_U32(ctx, 31, 0x2A8228u);
    ctx->pc = 0x2A8224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8220u;
            // 0x2a8224: 0x27a50240  addiu       $a1, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8228u; }
        if (ctx->pc != 0x2A8228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8228u; }
        if (ctx->pc != 0x2A8228u) { return; }
    }
    ctx->pc = 0x2A8228u;
label_2a8228:
    // 0x2a8228: 0xe6340060  swc1        $f20, 0x60($s1)
    ctx->pc = 0x2a8228u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
label_2a822c:
    // 0x2a822c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2a822cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2a8230:
    // 0x2a8230: 0xe6350064  swc1        $f21, 0x64($s1)
    ctx->pc = 0x2a8230u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
label_2a8234:
    // 0x2a8234: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x2a8234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2a8238:
    // 0x2a8238: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a8238u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a823c:
    // 0x2a823c: 0x0  nop
    ctx->pc = 0x2a823cu;
    // NOP
label_2a8240:
    // 0x2a8240: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a8240u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2a8244:
    // 0x2a8244: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2a8244u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2a8248:
    // 0x2a8248: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a8248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a824c:
    // 0x2a824c: 0xc04cbd8  jal         func_132F60
label_2a8250:
    if (ctx->pc == 0x2A8250u) {
        ctx->pc = 0x2A8250u;
            // 0x2a8250: 0xe6200068  swc1        $f0, 0x68($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
        ctx->pc = 0x2A8254u;
        goto label_2a8254;
    }
    ctx->pc = 0x2A824Cu;
    SET_GPR_U32(ctx, 31, 0x2A8254u);
    ctx->pc = 0x2A8250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A824Cu;
            // 0x2a8250: 0xe6200068  swc1        $f0, 0x68($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8254u; }
        if (ctx->pc != 0x2A8254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8254u; }
        if (ctx->pc != 0x2A8254u) { return; }
    }
    ctx->pc = 0x2A8254u;
label_2a8254:
    // 0x2a8254: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2a8254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2a8258:
    // 0x2a8258: 0x27a50340  addiu       $a1, $sp, 0x340
    ctx->pc = 0x2a8258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_2a825c:
    // 0x2a825c: 0xc04cc90  jal         func_133240
label_2a8260:
    if (ctx->pc == 0x2A8260u) {
        ctx->pc = 0x2A8260u;
            // 0x2a8260: 0x27a60350  addiu       $a2, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->pc = 0x2A8264u;
        goto label_2a8264;
    }
    ctx->pc = 0x2A825Cu;
    SET_GPR_U32(ctx, 31, 0x2A8264u);
    ctx->pc = 0x2A8260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A825Cu;
            // 0x2a8260: 0x27a60350  addiu       $a2, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8264u; }
        if (ctx->pc != 0x2A8264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8264u; }
        if (ctx->pc != 0x2A8264u) { return; }
    }
    ctx->pc = 0x2A8264u;
label_2a8264:
    // 0x2a8264: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x2a8264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2a8268:
    // 0x2a8268: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2a8268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2a826c:
    // 0x2a826c: 0xc04cc90  jal         func_133240
label_2a8270:
    if (ctx->pc == 0x2A8270u) {
        ctx->pc = 0x2A8270u;
            // 0x2a8270: 0x27a60350  addiu       $a2, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->pc = 0x2A8274u;
        goto label_2a8274;
    }
    ctx->pc = 0x2A826Cu;
    SET_GPR_U32(ctx, 31, 0x2A8274u);
    ctx->pc = 0x2A8270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A826Cu;
            // 0x2a8270: 0x27a60350  addiu       $a2, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8274u; }
        if (ctx->pc != 0x2A8274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8274u; }
        if (ctx->pc != 0x2A8274u) { return; }
    }
    ctx->pc = 0x2A8274u;
label_2a8274:
    // 0x2a8274: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x2a8274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_2a8278:
    // 0x2a8278: 0xc04cc08  jal         func_133020
label_2a827c:
    if (ctx->pc == 0x2A827Cu) {
        ctx->pc = 0x2A827Cu;
            // 0x2a827c: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x2A8280u;
        goto label_2a8280;
    }
    ctx->pc = 0x2A8278u;
    SET_GPR_U32(ctx, 31, 0x2A8280u);
    ctx->pc = 0x2A827Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8278u;
            // 0x2a827c: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8280u; }
        if (ctx->pc != 0x2A8280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8280u; }
        if (ctx->pc != 0x2A8280u) { return; }
    }
    ctx->pc = 0x2A8280u;
label_2a8280:
    // 0x2a8280: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2a8280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2a8284:
    // 0x2a8284: 0x27a602c0  addiu       $a2, $sp, 0x2C0
    ctx->pc = 0x2a8284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_2a8288:
    // 0x2a8288: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2a8288u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_2a828c:
    // 0x2a828c: 0xc04cc7c  jal         func_1331F0
label_2a8290:
    if (ctx->pc == 0x2A8290u) {
        ctx->pc = 0x2A8290u;
            // 0x2a8290: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8294u;
        goto label_2a8294;
    }
    ctx->pc = 0x2A828Cu;
    SET_GPR_U32(ctx, 31, 0x2A8294u);
    ctx->pc = 0x2A8290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A828Cu;
            // 0x2a8290: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8294u; }
        if (ctx->pc != 0x2A8294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8294u; }
        if (ctx->pc != 0x2A8294u) { return; }
    }
    ctx->pc = 0x2A8294u;
label_2a8294:
    // 0x2a8294: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x2a8294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_2a8298:
    // 0x2a8298: 0xc04cc08  jal         func_133020
label_2a829c:
    if (ctx->pc == 0x2A829Cu) {
        ctx->pc = 0x2A829Cu;
            // 0x2a829c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x2A82A0u;
        goto label_2a82a0;
    }
    ctx->pc = 0x2A8298u;
    SET_GPR_U32(ctx, 31, 0x2A82A0u);
    ctx->pc = 0x2A829Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8298u;
            // 0x2a829c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A82A0u; }
        if (ctx->pc != 0x2A82A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A82A0u; }
        if (ctx->pc != 0x2A82A0u) { return; }
    }
    ctx->pc = 0x2A82A0u;
label_2a82a0:
    // 0x2a82a0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2a82a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2a82a4:
    // 0x2a82a4: 0x27a602c0  addiu       $a2, $sp, 0x2C0
    ctx->pc = 0x2a82a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_2a82a8:
    // 0x2a82a8: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2a82a8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_2a82ac:
    // 0x2a82ac: 0xc04cc7c  jal         func_1331F0
label_2a82b0:
    if (ctx->pc == 0x2A82B0u) {
        ctx->pc = 0x2A82B0u;
            // 0x2a82b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A82B4u;
        goto label_2a82b4;
    }
    ctx->pc = 0x2A82ACu;
    SET_GPR_U32(ctx, 31, 0x2A82B4u);
    ctx->pc = 0x2A82B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A82ACu;
            // 0x2a82b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A82B4u; }
        if (ctx->pc != 0x2A82B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A82B4u; }
        if (ctx->pc != 0x2A82B4u) { return; }
    }
    ctx->pc = 0x2A82B4u;
label_2a82b4:
    // 0x2a82b4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2a82b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2a82b8:
    // 0x2a82b8: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2a82b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2a82bc:
    // 0x2a82bc: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2a82bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2a82c0:
    // 0x2a82c0: 0xc04cc90  jal         func_133240
label_2a82c4:
    if (ctx->pc == 0x2A82C4u) {
        ctx->pc = 0x2A82C4u;
            // 0x2a82c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A82C8u;
        goto label_2a82c8;
    }
    ctx->pc = 0x2A82C0u;
    SET_GPR_U32(ctx, 31, 0x2A82C8u);
    ctx->pc = 0x2A82C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A82C0u;
            // 0x2a82c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A82C8u; }
        if (ctx->pc != 0x2A82C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A82C8u; }
        if (ctx->pc != 0x2A82C8u) { return; }
    }
    ctx->pc = 0x2A82C8u;
label_2a82c8:
    // 0x2a82c8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2a82c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2a82cc:
    // 0x2a82cc: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2a82ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2a82d0:
    // 0x2a82d0: 0xc04cc90  jal         func_133240
label_2a82d4:
    if (ctx->pc == 0x2A82D4u) {
        ctx->pc = 0x2A82D4u;
            // 0x2a82d4: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x2A82D8u;
        goto label_2a82d8;
    }
    ctx->pc = 0x2A82D0u;
    SET_GPR_U32(ctx, 31, 0x2A82D8u);
    ctx->pc = 0x2A82D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A82D0u;
            // 0x2a82d4: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A82D8u; }
        if (ctx->pc != 0x2A82D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A82D8u; }
        if (ctx->pc != 0x2A82D8u) { return; }
    }
    ctx->pc = 0x2A82D8u;
label_2a82d8:
    // 0x2a82d8: 0xc04cc14  jal         func_133050
label_2a82dc:
    if (ctx->pc == 0x2A82DCu) {
        ctx->pc = 0x2A82DCu;
            // 0x2a82dc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2A82E0u;
        goto label_2a82e0;
    }
    ctx->pc = 0x2A82D8u;
    SET_GPR_U32(ctx, 31, 0x2A82E0u);
    ctx->pc = 0x2A82DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A82D8u;
            // 0x2a82dc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A82E0u; }
        if (ctx->pc != 0x2A82E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A82E0u; }
        if (ctx->pc != 0x2A82E0u) { return; }
    }
    ctx->pc = 0x2A82E0u;
label_2a82e0:
    // 0x2a82e0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2a82e0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2a82e4:
    // 0x2a82e4: 0xc04cc14  jal         func_133050
label_2a82e8:
    if (ctx->pc == 0x2A82E8u) {
        ctx->pc = 0x2A82E8u;
            // 0x2a82e8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2A82ECu;
        goto label_2a82ec;
    }
    ctx->pc = 0x2A82E4u;
    SET_GPR_U32(ctx, 31, 0x2A82ECu);
    ctx->pc = 0x2A82E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A82E4u;
            // 0x2a82e8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A82ECu; }
        if (ctx->pc != 0x2A82ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A82ECu; }
        if (ctx->pc != 0x2A82ECu) { return; }
    }
    ctx->pc = 0x2A82ECu;
label_2a82ec:
    // 0x2a82ec: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2a82ecu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2a82f0:
    // 0x2a82f0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2a82f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2a82f4:
    // 0x2a82f4: 0xc04cc08  jal         func_133020
label_2a82f8:
    if (ctx->pc == 0x2A82F8u) {
        ctx->pc = 0x2A82F8u;
            // 0x2a82f8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2A82FCu;
        goto label_2a82fc;
    }
    ctx->pc = 0x2A82F4u;
    SET_GPR_U32(ctx, 31, 0x2A82FCu);
    ctx->pc = 0x2A82F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A82F4u;
            // 0x2a82f8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A82FCu; }
        if (ctx->pc != 0x2A82FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A82FCu; }
        if (ctx->pc != 0x2A82FCu) { return; }
    }
    ctx->pc = 0x2A82FCu;
label_2a82fc:
    // 0x2a82fc: 0x0  nop
    ctx->pc = 0x2a82fcu;
    // NOP
label_2a8300:
    // 0x2a8300: 0x0  nop
    ctx->pc = 0x2a8300u;
    // NOP
label_2a8304:
    // 0x2a8304: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x2a8304u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[20];
label_2a8308:
    // 0x2a8308: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a8308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a830c:
    // 0x2a830c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a830cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a8310:
    // 0x2a8310: 0x0  nop
    ctx->pc = 0x2a8310u;
    // NOP
label_2a8314:
    // 0x2a8314: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2a8314u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a8318:
    // 0x2a8318: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_2a831c:
    if (ctx->pc == 0x2A831Cu) {
        ctx->pc = 0x2A8320u;
        goto label_2a8320;
    }
    ctx->pc = 0x2A8318u;
    {
        const bool branch_taken_0x2a8318 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a8318) {
            ctx->pc = 0x2A8344u;
            goto label_2a8344;
        }
    }
    ctx->pc = 0x2A8320u;
label_2a8320:
    // 0x2a8320: 0xc0477fe  jal         func_11DFF8
label_2a8324:
    if (ctx->pc == 0x2A8324u) {
        ctx->pc = 0x2A8328u;
        goto label_2a8328;
    }
    ctx->pc = 0x2A8320u;
    SET_GPR_U32(ctx, 31, 0x2A8328u);
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8328u; }
        if (ctx->pc != 0x2A8328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8328u; }
        if (ctx->pc != 0x2A8328u) { return; }
    }
    ctx->pc = 0x2A8328u;
label_2a8328:
    // 0x2a8328: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x2a8328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_2a832c:
    // 0x2a832c: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x2a832cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_2a8330:
    // 0x2a8330: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a8330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a8334:
    // 0x2a8334: 0x0  nop
    ctx->pc = 0x2a8334u;
    // NOP
label_2a8338:
    // 0x2a8338: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a8338u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a833c:
    // 0x2a833c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a833cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2a8340:
    // 0x2a8340: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x2a8340u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_2a8344:
    // 0x2a8344: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2a8344u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a8348:
    // 0x2a8348: 0x3c0238c9  lui         $v0, 0x38C9
    ctx->pc = 0x2a8348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14537 << 16));
label_2a834c:
    // 0x2a834c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a834cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a8350:
    // 0x2a8350: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2a8350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2a8354:
    // 0x2a8354: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a8354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a8358:
    // 0x2a8358: 0x0  nop
    ctx->pc = 0x2a8358u;
    // NOP
label_2a835c:
    // 0x2a835c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a835cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a8360:
    // 0x2a8360: 0xe620009c  swc1        $f0, 0x9C($s1)
    ctx->pc = 0x2a8360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
label_2a8364:
    // 0x2a8364: 0xc6210068  lwc1        $f1, 0x68($s1)
    ctx->pc = 0x2a8364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a8368:
    // 0x2a8368: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a8368u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a836c:
    // 0x2a836c: 0x0  nop
    ctx->pc = 0x2a836cu;
    // NOP
label_2a8370:
    // 0x2a8370: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a8370u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a8374:
    // 0x2a8374: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_2a8378:
    if (ctx->pc == 0x2A8378u) {
        ctx->pc = 0x2A8378u;
            // 0x2a8378: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A837Cu;
        goto label_2a837c;
    }
    ctx->pc = 0x2A8374u;
    {
        const bool branch_taken_0x2a8374 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a8374) {
            ctx->pc = 0x2A8378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8374u;
            // 0x2a8378: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8398u;
            goto label_2a8398;
        }
    }
    ctx->pc = 0x2A837Cu;
label_2a837c:
    // 0x2a837c: 0xc620009c  lwc1        $f0, 0x9C($s1)
    ctx->pc = 0x2a837cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a8380:
    // 0x2a8380: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2a8380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2a8384:
    // 0x2a8384: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a8384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a8388:
    // 0x2a8388: 0x0  nop
    ctx->pc = 0x2a8388u;
    // NOP
label_2a838c:
    // 0x2a838c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a838cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a8390:
    // 0x2a8390: 0xe620009c  swc1        $f0, 0x9C($s1)
    ctx->pc = 0x2a8390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
label_2a8394:
    // 0x2a8394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a8394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a8398:
    // 0x2a8398: 0xc0a9388  jal         func_2A4E20
label_2a839c:
    if (ctx->pc == 0x2A839Cu) {
        ctx->pc = 0x2A83A0u;
        goto label_2a83a0;
    }
    ctx->pc = 0x2A8398u;
    SET_GPR_U32(ctx, 31, 0x2A83A0u);
    ctx->pc = 0x2A4E20u;
    if (runtime->hasFunction(0x2A4E20u)) {
        auto targetFn = runtime->lookupFunction(0x2A4E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A83A0u; }
        if (ctx->pc != 0x2A83A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4E20_0x2a4e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A83A0u; }
        if (ctx->pc != 0x2A83A0u) { return; }
    }
    ctx->pc = 0x2A83A0u;
label_2a83a0:
    // 0x2a83a0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2a83a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2a83a4:
    // 0x2a83a4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2a83a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2a83a8:
    // 0x2a83a8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2a83a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2a83ac:
    // 0x2a83ac: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2a83acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2a83b0:
    // 0x2a83b0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2a83b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2a83b4:
    // 0x2a83b4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2a83b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2a83b8:
    // 0x2a83b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a83b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a83bc:
    // 0x2a83bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a83bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a83c0:
    // 0x2a83c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a83c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a83c4:
    // 0x2a83c4: 0x3e00008  jr          $ra
label_2a83c8:
    if (ctx->pc == 0x2A83C8u) {
        ctx->pc = 0x2A83C8u;
            // 0x2a83c8: 0x27bd0360  addiu       $sp, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->pc = 0x2A83CCu;
        goto label_2a83cc;
    }
    ctx->pc = 0x2A83C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A83C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A83C4u;
            // 0x2a83c8: 0x27bd0360  addiu       $sp, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A83CCu;
label_2a83cc:
    // 0x2a83cc: 0x0  nop
    ctx->pc = 0x2a83ccu;
    // NOP
}
