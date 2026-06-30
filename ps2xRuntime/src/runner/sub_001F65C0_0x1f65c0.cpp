#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F65C0
// Address: 0x1f65c0 - 0x1f6b90
void sub_001F65C0_0x1f65c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F65C0_0x1f65c0");
#endif

    switch (ctx->pc) {
        case 0x1f65c0u: goto label_1f65c0;
        case 0x1f65c4u: goto label_1f65c4;
        case 0x1f65c8u: goto label_1f65c8;
        case 0x1f65ccu: goto label_1f65cc;
        case 0x1f65d0u: goto label_1f65d0;
        case 0x1f65d4u: goto label_1f65d4;
        case 0x1f65d8u: goto label_1f65d8;
        case 0x1f65dcu: goto label_1f65dc;
        case 0x1f65e0u: goto label_1f65e0;
        case 0x1f65e4u: goto label_1f65e4;
        case 0x1f65e8u: goto label_1f65e8;
        case 0x1f65ecu: goto label_1f65ec;
        case 0x1f65f0u: goto label_1f65f0;
        case 0x1f65f4u: goto label_1f65f4;
        case 0x1f65f8u: goto label_1f65f8;
        case 0x1f65fcu: goto label_1f65fc;
        case 0x1f6600u: goto label_1f6600;
        case 0x1f6604u: goto label_1f6604;
        case 0x1f6608u: goto label_1f6608;
        case 0x1f660cu: goto label_1f660c;
        case 0x1f6610u: goto label_1f6610;
        case 0x1f6614u: goto label_1f6614;
        case 0x1f6618u: goto label_1f6618;
        case 0x1f661cu: goto label_1f661c;
        case 0x1f6620u: goto label_1f6620;
        case 0x1f6624u: goto label_1f6624;
        case 0x1f6628u: goto label_1f6628;
        case 0x1f662cu: goto label_1f662c;
        case 0x1f6630u: goto label_1f6630;
        case 0x1f6634u: goto label_1f6634;
        case 0x1f6638u: goto label_1f6638;
        case 0x1f663cu: goto label_1f663c;
        case 0x1f6640u: goto label_1f6640;
        case 0x1f6644u: goto label_1f6644;
        case 0x1f6648u: goto label_1f6648;
        case 0x1f664cu: goto label_1f664c;
        case 0x1f6650u: goto label_1f6650;
        case 0x1f6654u: goto label_1f6654;
        case 0x1f6658u: goto label_1f6658;
        case 0x1f665cu: goto label_1f665c;
        case 0x1f6660u: goto label_1f6660;
        case 0x1f6664u: goto label_1f6664;
        case 0x1f6668u: goto label_1f6668;
        case 0x1f666cu: goto label_1f666c;
        case 0x1f6670u: goto label_1f6670;
        case 0x1f6674u: goto label_1f6674;
        case 0x1f6678u: goto label_1f6678;
        case 0x1f667cu: goto label_1f667c;
        case 0x1f6680u: goto label_1f6680;
        case 0x1f6684u: goto label_1f6684;
        case 0x1f6688u: goto label_1f6688;
        case 0x1f668cu: goto label_1f668c;
        case 0x1f6690u: goto label_1f6690;
        case 0x1f6694u: goto label_1f6694;
        case 0x1f6698u: goto label_1f6698;
        case 0x1f669cu: goto label_1f669c;
        case 0x1f66a0u: goto label_1f66a0;
        case 0x1f66a4u: goto label_1f66a4;
        case 0x1f66a8u: goto label_1f66a8;
        case 0x1f66acu: goto label_1f66ac;
        case 0x1f66b0u: goto label_1f66b0;
        case 0x1f66b4u: goto label_1f66b4;
        case 0x1f66b8u: goto label_1f66b8;
        case 0x1f66bcu: goto label_1f66bc;
        case 0x1f66c0u: goto label_1f66c0;
        case 0x1f66c4u: goto label_1f66c4;
        case 0x1f66c8u: goto label_1f66c8;
        case 0x1f66ccu: goto label_1f66cc;
        case 0x1f66d0u: goto label_1f66d0;
        case 0x1f66d4u: goto label_1f66d4;
        case 0x1f66d8u: goto label_1f66d8;
        case 0x1f66dcu: goto label_1f66dc;
        case 0x1f66e0u: goto label_1f66e0;
        case 0x1f66e4u: goto label_1f66e4;
        case 0x1f66e8u: goto label_1f66e8;
        case 0x1f66ecu: goto label_1f66ec;
        case 0x1f66f0u: goto label_1f66f0;
        case 0x1f66f4u: goto label_1f66f4;
        case 0x1f66f8u: goto label_1f66f8;
        case 0x1f66fcu: goto label_1f66fc;
        case 0x1f6700u: goto label_1f6700;
        case 0x1f6704u: goto label_1f6704;
        case 0x1f6708u: goto label_1f6708;
        case 0x1f670cu: goto label_1f670c;
        case 0x1f6710u: goto label_1f6710;
        case 0x1f6714u: goto label_1f6714;
        case 0x1f6718u: goto label_1f6718;
        case 0x1f671cu: goto label_1f671c;
        case 0x1f6720u: goto label_1f6720;
        case 0x1f6724u: goto label_1f6724;
        case 0x1f6728u: goto label_1f6728;
        case 0x1f672cu: goto label_1f672c;
        case 0x1f6730u: goto label_1f6730;
        case 0x1f6734u: goto label_1f6734;
        case 0x1f6738u: goto label_1f6738;
        case 0x1f673cu: goto label_1f673c;
        case 0x1f6740u: goto label_1f6740;
        case 0x1f6744u: goto label_1f6744;
        case 0x1f6748u: goto label_1f6748;
        case 0x1f674cu: goto label_1f674c;
        case 0x1f6750u: goto label_1f6750;
        case 0x1f6754u: goto label_1f6754;
        case 0x1f6758u: goto label_1f6758;
        case 0x1f675cu: goto label_1f675c;
        case 0x1f6760u: goto label_1f6760;
        case 0x1f6764u: goto label_1f6764;
        case 0x1f6768u: goto label_1f6768;
        case 0x1f676cu: goto label_1f676c;
        case 0x1f6770u: goto label_1f6770;
        case 0x1f6774u: goto label_1f6774;
        case 0x1f6778u: goto label_1f6778;
        case 0x1f677cu: goto label_1f677c;
        case 0x1f6780u: goto label_1f6780;
        case 0x1f6784u: goto label_1f6784;
        case 0x1f6788u: goto label_1f6788;
        case 0x1f678cu: goto label_1f678c;
        case 0x1f6790u: goto label_1f6790;
        case 0x1f6794u: goto label_1f6794;
        case 0x1f6798u: goto label_1f6798;
        case 0x1f679cu: goto label_1f679c;
        case 0x1f67a0u: goto label_1f67a0;
        case 0x1f67a4u: goto label_1f67a4;
        case 0x1f67a8u: goto label_1f67a8;
        case 0x1f67acu: goto label_1f67ac;
        case 0x1f67b0u: goto label_1f67b0;
        case 0x1f67b4u: goto label_1f67b4;
        case 0x1f67b8u: goto label_1f67b8;
        case 0x1f67bcu: goto label_1f67bc;
        case 0x1f67c0u: goto label_1f67c0;
        case 0x1f67c4u: goto label_1f67c4;
        case 0x1f67c8u: goto label_1f67c8;
        case 0x1f67ccu: goto label_1f67cc;
        case 0x1f67d0u: goto label_1f67d0;
        case 0x1f67d4u: goto label_1f67d4;
        case 0x1f67d8u: goto label_1f67d8;
        case 0x1f67dcu: goto label_1f67dc;
        case 0x1f67e0u: goto label_1f67e0;
        case 0x1f67e4u: goto label_1f67e4;
        case 0x1f67e8u: goto label_1f67e8;
        case 0x1f67ecu: goto label_1f67ec;
        case 0x1f67f0u: goto label_1f67f0;
        case 0x1f67f4u: goto label_1f67f4;
        case 0x1f67f8u: goto label_1f67f8;
        case 0x1f67fcu: goto label_1f67fc;
        case 0x1f6800u: goto label_1f6800;
        case 0x1f6804u: goto label_1f6804;
        case 0x1f6808u: goto label_1f6808;
        case 0x1f680cu: goto label_1f680c;
        case 0x1f6810u: goto label_1f6810;
        case 0x1f6814u: goto label_1f6814;
        case 0x1f6818u: goto label_1f6818;
        case 0x1f681cu: goto label_1f681c;
        case 0x1f6820u: goto label_1f6820;
        case 0x1f6824u: goto label_1f6824;
        case 0x1f6828u: goto label_1f6828;
        case 0x1f682cu: goto label_1f682c;
        case 0x1f6830u: goto label_1f6830;
        case 0x1f6834u: goto label_1f6834;
        case 0x1f6838u: goto label_1f6838;
        case 0x1f683cu: goto label_1f683c;
        case 0x1f6840u: goto label_1f6840;
        case 0x1f6844u: goto label_1f6844;
        case 0x1f6848u: goto label_1f6848;
        case 0x1f684cu: goto label_1f684c;
        case 0x1f6850u: goto label_1f6850;
        case 0x1f6854u: goto label_1f6854;
        case 0x1f6858u: goto label_1f6858;
        case 0x1f685cu: goto label_1f685c;
        case 0x1f6860u: goto label_1f6860;
        case 0x1f6864u: goto label_1f6864;
        case 0x1f6868u: goto label_1f6868;
        case 0x1f686cu: goto label_1f686c;
        case 0x1f6870u: goto label_1f6870;
        case 0x1f6874u: goto label_1f6874;
        case 0x1f6878u: goto label_1f6878;
        case 0x1f687cu: goto label_1f687c;
        case 0x1f6880u: goto label_1f6880;
        case 0x1f6884u: goto label_1f6884;
        case 0x1f6888u: goto label_1f6888;
        case 0x1f688cu: goto label_1f688c;
        case 0x1f6890u: goto label_1f6890;
        case 0x1f6894u: goto label_1f6894;
        case 0x1f6898u: goto label_1f6898;
        case 0x1f689cu: goto label_1f689c;
        case 0x1f68a0u: goto label_1f68a0;
        case 0x1f68a4u: goto label_1f68a4;
        case 0x1f68a8u: goto label_1f68a8;
        case 0x1f68acu: goto label_1f68ac;
        case 0x1f68b0u: goto label_1f68b0;
        case 0x1f68b4u: goto label_1f68b4;
        case 0x1f68b8u: goto label_1f68b8;
        case 0x1f68bcu: goto label_1f68bc;
        case 0x1f68c0u: goto label_1f68c0;
        case 0x1f68c4u: goto label_1f68c4;
        case 0x1f68c8u: goto label_1f68c8;
        case 0x1f68ccu: goto label_1f68cc;
        case 0x1f68d0u: goto label_1f68d0;
        case 0x1f68d4u: goto label_1f68d4;
        case 0x1f68d8u: goto label_1f68d8;
        case 0x1f68dcu: goto label_1f68dc;
        case 0x1f68e0u: goto label_1f68e0;
        case 0x1f68e4u: goto label_1f68e4;
        case 0x1f68e8u: goto label_1f68e8;
        case 0x1f68ecu: goto label_1f68ec;
        case 0x1f68f0u: goto label_1f68f0;
        case 0x1f68f4u: goto label_1f68f4;
        case 0x1f68f8u: goto label_1f68f8;
        case 0x1f68fcu: goto label_1f68fc;
        case 0x1f6900u: goto label_1f6900;
        case 0x1f6904u: goto label_1f6904;
        case 0x1f6908u: goto label_1f6908;
        case 0x1f690cu: goto label_1f690c;
        case 0x1f6910u: goto label_1f6910;
        case 0x1f6914u: goto label_1f6914;
        case 0x1f6918u: goto label_1f6918;
        case 0x1f691cu: goto label_1f691c;
        case 0x1f6920u: goto label_1f6920;
        case 0x1f6924u: goto label_1f6924;
        case 0x1f6928u: goto label_1f6928;
        case 0x1f692cu: goto label_1f692c;
        case 0x1f6930u: goto label_1f6930;
        case 0x1f6934u: goto label_1f6934;
        case 0x1f6938u: goto label_1f6938;
        case 0x1f693cu: goto label_1f693c;
        case 0x1f6940u: goto label_1f6940;
        case 0x1f6944u: goto label_1f6944;
        case 0x1f6948u: goto label_1f6948;
        case 0x1f694cu: goto label_1f694c;
        case 0x1f6950u: goto label_1f6950;
        case 0x1f6954u: goto label_1f6954;
        case 0x1f6958u: goto label_1f6958;
        case 0x1f695cu: goto label_1f695c;
        case 0x1f6960u: goto label_1f6960;
        case 0x1f6964u: goto label_1f6964;
        case 0x1f6968u: goto label_1f6968;
        case 0x1f696cu: goto label_1f696c;
        case 0x1f6970u: goto label_1f6970;
        case 0x1f6974u: goto label_1f6974;
        case 0x1f6978u: goto label_1f6978;
        case 0x1f697cu: goto label_1f697c;
        case 0x1f6980u: goto label_1f6980;
        case 0x1f6984u: goto label_1f6984;
        case 0x1f6988u: goto label_1f6988;
        case 0x1f698cu: goto label_1f698c;
        case 0x1f6990u: goto label_1f6990;
        case 0x1f6994u: goto label_1f6994;
        case 0x1f6998u: goto label_1f6998;
        case 0x1f699cu: goto label_1f699c;
        case 0x1f69a0u: goto label_1f69a0;
        case 0x1f69a4u: goto label_1f69a4;
        case 0x1f69a8u: goto label_1f69a8;
        case 0x1f69acu: goto label_1f69ac;
        case 0x1f69b0u: goto label_1f69b0;
        case 0x1f69b4u: goto label_1f69b4;
        case 0x1f69b8u: goto label_1f69b8;
        case 0x1f69bcu: goto label_1f69bc;
        case 0x1f69c0u: goto label_1f69c0;
        case 0x1f69c4u: goto label_1f69c4;
        case 0x1f69c8u: goto label_1f69c8;
        case 0x1f69ccu: goto label_1f69cc;
        case 0x1f69d0u: goto label_1f69d0;
        case 0x1f69d4u: goto label_1f69d4;
        case 0x1f69d8u: goto label_1f69d8;
        case 0x1f69dcu: goto label_1f69dc;
        case 0x1f69e0u: goto label_1f69e0;
        case 0x1f69e4u: goto label_1f69e4;
        case 0x1f69e8u: goto label_1f69e8;
        case 0x1f69ecu: goto label_1f69ec;
        case 0x1f69f0u: goto label_1f69f0;
        case 0x1f69f4u: goto label_1f69f4;
        case 0x1f69f8u: goto label_1f69f8;
        case 0x1f69fcu: goto label_1f69fc;
        case 0x1f6a00u: goto label_1f6a00;
        case 0x1f6a04u: goto label_1f6a04;
        case 0x1f6a08u: goto label_1f6a08;
        case 0x1f6a0cu: goto label_1f6a0c;
        case 0x1f6a10u: goto label_1f6a10;
        case 0x1f6a14u: goto label_1f6a14;
        case 0x1f6a18u: goto label_1f6a18;
        case 0x1f6a1cu: goto label_1f6a1c;
        case 0x1f6a20u: goto label_1f6a20;
        case 0x1f6a24u: goto label_1f6a24;
        case 0x1f6a28u: goto label_1f6a28;
        case 0x1f6a2cu: goto label_1f6a2c;
        case 0x1f6a30u: goto label_1f6a30;
        case 0x1f6a34u: goto label_1f6a34;
        case 0x1f6a38u: goto label_1f6a38;
        case 0x1f6a3cu: goto label_1f6a3c;
        case 0x1f6a40u: goto label_1f6a40;
        case 0x1f6a44u: goto label_1f6a44;
        case 0x1f6a48u: goto label_1f6a48;
        case 0x1f6a4cu: goto label_1f6a4c;
        case 0x1f6a50u: goto label_1f6a50;
        case 0x1f6a54u: goto label_1f6a54;
        case 0x1f6a58u: goto label_1f6a58;
        case 0x1f6a5cu: goto label_1f6a5c;
        case 0x1f6a60u: goto label_1f6a60;
        case 0x1f6a64u: goto label_1f6a64;
        case 0x1f6a68u: goto label_1f6a68;
        case 0x1f6a6cu: goto label_1f6a6c;
        case 0x1f6a70u: goto label_1f6a70;
        case 0x1f6a74u: goto label_1f6a74;
        case 0x1f6a78u: goto label_1f6a78;
        case 0x1f6a7cu: goto label_1f6a7c;
        case 0x1f6a80u: goto label_1f6a80;
        case 0x1f6a84u: goto label_1f6a84;
        case 0x1f6a88u: goto label_1f6a88;
        case 0x1f6a8cu: goto label_1f6a8c;
        case 0x1f6a90u: goto label_1f6a90;
        case 0x1f6a94u: goto label_1f6a94;
        case 0x1f6a98u: goto label_1f6a98;
        case 0x1f6a9cu: goto label_1f6a9c;
        case 0x1f6aa0u: goto label_1f6aa0;
        case 0x1f6aa4u: goto label_1f6aa4;
        case 0x1f6aa8u: goto label_1f6aa8;
        case 0x1f6aacu: goto label_1f6aac;
        case 0x1f6ab0u: goto label_1f6ab0;
        case 0x1f6ab4u: goto label_1f6ab4;
        case 0x1f6ab8u: goto label_1f6ab8;
        case 0x1f6abcu: goto label_1f6abc;
        case 0x1f6ac0u: goto label_1f6ac0;
        case 0x1f6ac4u: goto label_1f6ac4;
        case 0x1f6ac8u: goto label_1f6ac8;
        case 0x1f6accu: goto label_1f6acc;
        case 0x1f6ad0u: goto label_1f6ad0;
        case 0x1f6ad4u: goto label_1f6ad4;
        case 0x1f6ad8u: goto label_1f6ad8;
        case 0x1f6adcu: goto label_1f6adc;
        case 0x1f6ae0u: goto label_1f6ae0;
        case 0x1f6ae4u: goto label_1f6ae4;
        case 0x1f6ae8u: goto label_1f6ae8;
        case 0x1f6aecu: goto label_1f6aec;
        case 0x1f6af0u: goto label_1f6af0;
        case 0x1f6af4u: goto label_1f6af4;
        case 0x1f6af8u: goto label_1f6af8;
        case 0x1f6afcu: goto label_1f6afc;
        case 0x1f6b00u: goto label_1f6b00;
        case 0x1f6b04u: goto label_1f6b04;
        case 0x1f6b08u: goto label_1f6b08;
        case 0x1f6b0cu: goto label_1f6b0c;
        case 0x1f6b10u: goto label_1f6b10;
        case 0x1f6b14u: goto label_1f6b14;
        case 0x1f6b18u: goto label_1f6b18;
        case 0x1f6b1cu: goto label_1f6b1c;
        case 0x1f6b20u: goto label_1f6b20;
        case 0x1f6b24u: goto label_1f6b24;
        case 0x1f6b28u: goto label_1f6b28;
        case 0x1f6b2cu: goto label_1f6b2c;
        case 0x1f6b30u: goto label_1f6b30;
        case 0x1f6b34u: goto label_1f6b34;
        case 0x1f6b38u: goto label_1f6b38;
        case 0x1f6b3cu: goto label_1f6b3c;
        case 0x1f6b40u: goto label_1f6b40;
        case 0x1f6b44u: goto label_1f6b44;
        case 0x1f6b48u: goto label_1f6b48;
        case 0x1f6b4cu: goto label_1f6b4c;
        case 0x1f6b50u: goto label_1f6b50;
        case 0x1f6b54u: goto label_1f6b54;
        case 0x1f6b58u: goto label_1f6b58;
        case 0x1f6b5cu: goto label_1f6b5c;
        case 0x1f6b60u: goto label_1f6b60;
        case 0x1f6b64u: goto label_1f6b64;
        case 0x1f6b68u: goto label_1f6b68;
        case 0x1f6b6cu: goto label_1f6b6c;
        case 0x1f6b70u: goto label_1f6b70;
        case 0x1f6b74u: goto label_1f6b74;
        case 0x1f6b78u: goto label_1f6b78;
        case 0x1f6b7cu: goto label_1f6b7c;
        case 0x1f6b80u: goto label_1f6b80;
        case 0x1f6b84u: goto label_1f6b84;
        case 0x1f6b88u: goto label_1f6b88;
        case 0x1f6b8cu: goto label_1f6b8c;
        default: break;
    }

    ctx->pc = 0x1f65c0u;

label_1f65c0:
    // 0x1f65c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1f65c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1f65c4:
    // 0x1f65c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f65c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f65c8:
    // 0x1f65c8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1f65c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1f65cc:
    // 0x1f65cc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f65ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f65d0:
    // 0x1f65d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f65d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f65d4:
    // 0x1f65d4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1f65d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f65d8:
    // 0x1f65d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f65d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f65dc:
    // 0x1f65dc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1f65dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f65e0:
    // 0x1f65e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f65e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f65e4:
    // 0x1f65e4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f65e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f65e8:
    // 0x1f65e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f65e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f65ec:
    // 0x1f65ec: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1f65ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1f65f0:
    // 0x1f65f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f65f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f65f4:
    // 0x1f65f4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1f65f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f65f8:
    // 0x1f65f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f65f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f65fc:
    // 0x1f65fc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1f65fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f6600:
    // 0x1f6600: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1f6600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1f6604:
    // 0x1f6604: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f6604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f6608:
    // 0x1f6608: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1f6608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1f660c:
    // 0x1f660c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1f660cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f6610:
    // 0x1f6610: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1f6614:
    if (ctx->pc == 0x1F6614u) {
        ctx->pc = 0x1F6614u;
            // 0x1f6614: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1F6618u;
        goto label_1f6618;
    }
    ctx->pc = 0x1F6610u;
    {
        const bool branch_taken_0x1f6610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6610u;
            // 0x1f6614: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6610) {
            ctx->pc = 0x1F6640u;
            goto label_1f6640;
        }
    }
    ctx->pc = 0x1F6618u;
label_1f6618:
    // 0x1f6618: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1f6618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1f661c:
    // 0x1f661c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1f661cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1f6620:
    // 0x1f6620: 0x2442af90  addiu       $v0, $v0, -0x5070
    ctx->pc = 0x1f6620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946704));
label_1f6624:
    // 0x1f6624: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f6624u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f6628:
    // 0x1f6628: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f6628u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1f662c:
    // 0x1f662c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1f662cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1f6630:
    // 0x1f6630: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f6630u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1f6634:
    // 0x1f6634: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1f6634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1f6638:
    // 0x1f6638: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1f6638u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1f663c:
    // 0x1f663c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1f663cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1f6640:
    // 0x1f6640: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1f6640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1f6644:
    // 0x1f6644: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1f6644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1f6648:
    // 0x1f6648: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1f6648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1f664c:
    // 0x1f664c: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x1f664cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f6650:
    // 0x1f6650: 0x24500030  addiu       $s0, $v0, 0x30
    ctx->pc = 0x1f6650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_1f6654:
    // 0x1f6654: 0xc0a4608  jal         func_291820
label_1f6658:
    if (ctx->pc == 0x1F6658u) {
        ctx->pc = 0x1F6658u;
            // 0x1f6658: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F665Cu;
        goto label_1f665c;
    }
    ctx->pc = 0x1F6654u;
    SET_GPR_U32(ctx, 31, 0x1F665Cu);
    ctx->pc = 0x1F6658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6654u;
            // 0x1f6658: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291820u;
    if (runtime->hasFunction(0x291820u)) {
        auto targetFn = runtime->lookupFunction(0x291820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F665Cu; }
        if (ctx->pc != 0x1F665Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291820_0x291820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F665Cu; }
        if (ctx->pc != 0x1F665Cu) { return; }
    }
    ctx->pc = 0x1F665Cu;
label_1f665c:
    // 0x1f665c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1f665cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6660:
    // 0x1f6660: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1f6660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f6664:
    // 0x1f6664: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1f6664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1f6668:
    // 0x1f6668: 0x460001c5  abs.s       $f7, $f0
    ctx->pc = 0x1f6668u;
    ctx->f[7] = FPU_ABS_S(ctx->f[0]);
label_1f666c:
    // 0x1f666c: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1f666cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6670:
    // 0x1f6670: 0x46000185  abs.s       $f6, $f0
    ctx->pc = 0x1f6670u;
    ctx->f[6] = FPU_ABS_S(ctx->f[0]);
label_1f6674:
    // 0x1f6674: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x1f6674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6678:
    // 0x1f6678: 0x46000145  abs.s       $f5, $f0
    ctx->pc = 0x1f6678u;
    ctx->f[5] = FPU_ABS_S(ctx->f[0]);
label_1f667c:
    // 0x1f667c: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x1f667cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6680:
    // 0x1f6680: 0x46000105  abs.s       $f4, $f0
    ctx->pc = 0x1f6680u;
    ctx->f[4] = FPU_ABS_S(ctx->f[0]);
label_1f6684:
    // 0x1f6684: 0xc4830020  lwc1        $f3, 0x20($a0)
    ctx->pc = 0x1f6684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f6688:
    // 0x1f6688: 0x46033834  c.lt.s      $f7, $f3
    ctx->pc = 0x1f6688u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f668c:
    // 0x1f668c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1f6690:
    if (ctx->pc == 0x1F6690u) {
        ctx->pc = 0x1F6690u;
            // 0x1f6690: 0x24850020  addiu       $a1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->pc = 0x1F6694u;
        goto label_1f6694;
    }
    ctx->pc = 0x1F668Cu;
    {
        const bool branch_taken_0x1f668c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F6690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F668Cu;
            // 0x1f6690: 0x24850020  addiu       $a1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f668c) {
            ctx->pc = 0x1F6698u;
            goto label_1f6698;
        }
    }
    ctx->pc = 0x1F6694u;
label_1f6694:
    // 0x1f6694: 0x460038c6  mov.s       $f3, $f7
    ctx->pc = 0x1f6694u;
    ctx->f[3] = FPU_MOV_S(ctx->f[7]);
label_1f6698:
    // 0x1f6698: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1f6698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f669c:
    // 0x1f669c: 0x46023034  c.lt.s      $f6, $f2
    ctx->pc = 0x1f669cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f66a0:
    // 0x1f66a0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1f66a4:
    if (ctx->pc == 0x1F66A4u) {
        ctx->pc = 0x1F66A8u;
        goto label_1f66a8;
    }
    ctx->pc = 0x1F66A0u;
    {
        const bool branch_taken_0x1f66a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f66a0) {
            ctx->pc = 0x1F66ACu;
            goto label_1f66ac;
        }
    }
    ctx->pc = 0x1F66A8u;
label_1f66a8:
    // 0x1f66a8: 0x46003086  mov.s       $f2, $f6
    ctx->pc = 0x1f66a8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[6]);
label_1f66ac:
    // 0x1f66ac: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1f66acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f66b0:
    // 0x1f66b0: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x1f66b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f66b4:
    // 0x1f66b4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1f66b8:
    if (ctx->pc == 0x1F66B8u) {
        ctx->pc = 0x1F66BCu;
        goto label_1f66bc;
    }
    ctx->pc = 0x1F66B4u;
    {
        const bool branch_taken_0x1f66b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f66b4) {
            ctx->pc = 0x1F66C0u;
            goto label_1f66c0;
        }
    }
    ctx->pc = 0x1F66BCu;
label_1f66bc:
    // 0x1f66bc: 0x46002846  mov.s       $f1, $f5
    ctx->pc = 0x1f66bcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[5]);
label_1f66c0:
    // 0x1f66c0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1f66c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f66c4:
    // 0x1f66c4: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x1f66c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f66c8:
    // 0x1f66c8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1f66cc:
    if (ctx->pc == 0x1F66CCu) {
        ctx->pc = 0x1F66D0u;
        goto label_1f66d0;
    }
    ctx->pc = 0x1F66C8u;
    {
        const bool branch_taken_0x1f66c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f66c8) {
            ctx->pc = 0x1F66D4u;
            goto label_1f66d4;
        }
    }
    ctx->pc = 0x1F66D0u;
label_1f66d0:
    // 0x1f66d0: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x1f66d0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
label_1f66d4:
    // 0x1f66d4: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x1f66d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_1f66d8:
    // 0x1f66d8: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1f66d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1f66dc:
    // 0x1f66dc: 0x46071801  sub.s       $f0, $f3, $f7
    ctx->pc = 0x1f66dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
label_1f66e0:
    // 0x1f66e0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1f66e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1f66e4:
    // 0x1f66e4: 0x46050801  sub.s       $f0, $f1, $f5
    ctx->pc = 0x1f66e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_1f66e8:
    // 0x1f66e8: 0x460610c1  sub.s       $f3, $f2, $f6
    ctx->pc = 0x1f66e8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
label_1f66ec:
    // 0x1f66ec: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1f66ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1f66f0:
    // 0x1f66f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f66f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f66f4:
    // 0x1f66f4: 0x0  nop
    ctx->pc = 0x1f66f4u;
    // NOP
label_1f66f8:
    // 0x1f66f8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1f66f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f66fc:
    // 0x1f66fc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1f6700:
    if (ctx->pc == 0x1F6700u) {
        ctx->pc = 0x1F6700u;
            // 0x1f6700: 0xe7a30084  swc1        $f3, 0x84($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->pc = 0x1F6704u;
        goto label_1f6704;
    }
    ctx->pc = 0x1F66FCu;
    {
        const bool branch_taken_0x1f66fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F6700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F66FCu;
            // 0x1f6700: 0xe7a30084  swc1        $f3, 0x84($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f66fc) {
            ctx->pc = 0x1F670Cu;
            goto label_1f670c;
        }
    }
    ctx->pc = 0x1F6704u;
label_1f6704:
    // 0x1f6704: 0x10000002  b           . + 4 + (0x2 << 2)
label_1f6708:
    if (ctx->pc == 0x1F6708u) {
        ctx->pc = 0x1F6708u;
            // 0x1f6708: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1F670Cu;
        goto label_1f670c;
    }
    ctx->pc = 0x1F6704u;
    {
        const bool branch_taken_0x1f6704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6704u;
            // 0x1f6708: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6704) {
            ctx->pc = 0x1F6710u;
            goto label_1f6710;
        }
    }
    ctx->pc = 0x1F670Cu;
label_1f670c:
    // 0x1f670c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f670cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6710:
    // 0x1f6710: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x1f6710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f6714:
    // 0x1f6714: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f6714u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f6718:
    // 0x1f6718: 0x0  nop
    ctx->pc = 0x1f6718u;
    // NOP
label_1f671c:
    // 0x1f671c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f671cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f6720:
    // 0x1f6720: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_1f6724:
    if (ctx->pc == 0x1F6724u) {
        ctx->pc = 0x1F6724u;
            // 0x1f6724: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F6728u;
        goto label_1f6728;
    }
    ctx->pc = 0x1F6720u;
    {
        const bool branch_taken_0x1f6720 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6720) {
            ctx->pc = 0x1F6724u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6720u;
            // 0x1f6724: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F672Cu;
            goto label_1f672c;
        }
    }
    ctx->pc = 0x1F6728u;
label_1f6728:
    // 0x1f6728: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1f6728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f672c:
    // 0x1f672c: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x1f672cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f6730:
    // 0x1f6730: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f6730u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f6734:
    // 0x1f6734: 0x0  nop
    ctx->pc = 0x1f6734u;
    // NOP
label_1f6738:
    // 0x1f6738: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f6738u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f673c:
    // 0x1f673c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_1f6740:
    if (ctx->pc == 0x1F6740u) {
        ctx->pc = 0x1F6740u;
            // 0x1f6740: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F6744u;
        goto label_1f6744;
    }
    ctx->pc = 0x1F673Cu;
    {
        const bool branch_taken_0x1f673c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f673c) {
            ctx->pc = 0x1F6740u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F673Cu;
            // 0x1f6740: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6748u;
            goto label_1f6748;
        }
    }
    ctx->pc = 0x1F6744u;
label_1f6744:
    // 0x1f6744: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1f6744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f6748:
    // 0x1f6748: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x1f6748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f674c:
    // 0x1f674c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f674cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f6750:
    // 0x1f6750: 0x0  nop
    ctx->pc = 0x1f6750u;
    // NOP
label_1f6754:
    // 0x1f6754: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f6754u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f6758:
    // 0x1f6758: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1f675c:
    if (ctx->pc == 0x1F675Cu) {
        ctx->pc = 0x1F675Cu;
            // 0x1f675c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F6760u;
        goto label_1f6760;
    }
    ctx->pc = 0x1F6758u;
    {
        const bool branch_taken_0x1f6758 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F675Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6758u;
            // 0x1f675c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6758) {
            ctx->pc = 0x1F6764u;
            goto label_1f6764;
        }
    }
    ctx->pc = 0x1F6760u;
label_1f6760:
    // 0x1f6760: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f6760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6764:
    // 0x1f6764: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x1f6764u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
label_1f6768:
    // 0x1f6768: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1f6768u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1f676c:
    // 0x1f676c: 0xe52825  or          $a1, $a3, $a1
    ctx->pc = 0x1f676cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
label_1f6770:
    // 0x1f6770: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1f6770u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1f6774:
    // 0x1f6774: 0x30a5000e  andi        $a1, $a1, 0xE
    ctx->pc = 0x1f6774u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)14);
label_1f6778:
    // 0x1f6778: 0x50a0005e  beql        $a1, $zero, . + 4 + (0x5E << 2)
label_1f677c:
    if (ctx->pc == 0x1F677Cu) {
        ctx->pc = 0x1F677Cu;
            // 0x1f677c: 0xc4820020  lwc1        $f2, 0x20($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x1F6780u;
        goto label_1f6780;
    }
    ctx->pc = 0x1F6778u;
    {
        const bool branch_taken_0x1f6778 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6778) {
            ctx->pc = 0x1F677Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6778u;
            // 0x1f677c: 0xc4820020  lwc1        $f2, 0x20($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F68F4u;
            goto label_1f68f4;
        }
    }
    ctx->pc = 0x1F6780u;
label_1f6780:
    // 0x1f6780: 0xc7a60080  lwc1        $f6, 0x80($sp)
    ctx->pc = 0x1f6780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f6784:
    // 0x1f6784: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x1f6784u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_1f6788:
    // 0x1f6788: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f6788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f678c:
    // 0x1f678c: 0x4606301e  madda.s     $f6, $f6
    ctx->pc = 0x1f678cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[6]));
label_1f6790:
    // 0x1f6790: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x1f6790u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_1f6794:
    // 0x1f6794: 0x460101c4  c1          0x101C4
    ctx->pc = 0x1f6794u;
    ctx->f[7] = FPU_SQRT_S(ctx->f[0]);
label_1f6798:
    // 0x1f6798: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1f6798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1f679c:
    // 0x1f679c: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x1f679cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1f67a0:
    // 0x1f67a0: 0x0  nop
    ctx->pc = 0x1f67a0u;
    // NOP
label_1f67a4:
    // 0x1f67a4: 0x46072143  div.s       $f5, $f4, $f7
    ctx->pc = 0x1f67a4u;
    if (ctx->f[7] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[5] = ctx->f[4] / ctx->f[7];
label_1f67a8:
    // 0x1f67a8: 0xc7a30084  lwc1        $f3, 0x84($sp)
    ctx->pc = 0x1f67a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f67ac:
    // 0x1f67ac: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x1f67acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f67b0:
    // 0x1f67b0: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x1f67b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f67b4:
    // 0x1f67b4: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x1f67b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_1f67b8:
    // 0x1f67b8: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1f67b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_1f67bc:
    // 0x1f67bc: 0xe7a30084  swc1        $f3, 0x84($sp)
    ctx->pc = 0x1f67bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1f67c0:
    // 0x1f67c0: 0xe7a1008c  swc1        $f1, 0x8C($sp)
    ctx->pc = 0x1f67c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1f67c4:
    // 0x1f67c4: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1f67c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_1f67c8:
    // 0x1f67c8: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x1f67c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1f67cc:
    // 0x1f67cc: 0x46053102  mul.s       $f4, $f6, $f5
    ctx->pc = 0x1f67ccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_1f67d0:
    // 0x1f67d0: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1f67d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f67d4:
    // 0x1f67d4: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x1f67d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f67d8:
    // 0x1f67d8: 0xc6c20004  lwc1        $f2, 0x4($s6)
    ctx->pc = 0x1f67d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f67dc:
    // 0x1f67dc: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x1f67dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_1f67e0:
    // 0x1f67e0: 0x46013841  sub.s       $f1, $f7, $f1
    ctx->pc = 0x1f67e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
label_1f67e4:
    // 0x1f67e4: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1f67e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f67e8:
    // 0x1f67e8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1f67ec:
    if (ctx->pc == 0x1F67ECu) {
        ctx->pc = 0x1F67ECu;
            // 0x1f67ec: 0xe7a40080  swc1        $f4, 0x80($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->pc = 0x1F67F0u;
        goto label_1f67f0;
    }
    ctx->pc = 0x1F67E8u;
    {
        const bool branch_taken_0x1f67e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F67ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F67E8u;
            // 0x1f67ec: 0xe7a40080  swc1        $f4, 0x80($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f67e8) {
            ctx->pc = 0x1F67F8u;
            goto label_1f67f8;
        }
    }
    ctx->pc = 0x1F67F0u;
label_1f67f0:
    // 0x1f67f0: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_1f67f4:
    if (ctx->pc == 0x1F67F4u) {
        ctx->pc = 0x1F67F4u;
            // 0x1f67f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F67F8u;
        goto label_1f67f8;
    }
    ctx->pc = 0x1F67F0u;
    {
        const bool branch_taken_0x1f67f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F67F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F67F0u;
            // 0x1f67f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f67f0) {
            ctx->pc = 0x1F6A84u;
            goto label_1f6a84;
        }
    }
    ctx->pc = 0x1F67F8u;
label_1f67f8:
    // 0x1f67f8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1f67f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1f67fc:
    // 0x1f67fc: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x1f67fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
label_1f6800:
    // 0x1f6800: 0x8fa60094  lw          $a2, 0x94($sp)
    ctx->pc = 0x1f6800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_1f6804:
    // 0x1f6804: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1f6804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1f6808:
    // 0x1f6808: 0xa93824  and         $a3, $a1, $t1
    ctx->pc = 0x1f6808u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
label_1f680c:
    // 0x1f680c: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x1f680cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_1f6810:
    // 0x1f6810: 0xc94024  and         $t0, $a2, $t1
    ctx->pc = 0x1f6810u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
label_1f6814:
    // 0x1f6814: 0x873826  xor         $a3, $a0, $a3
    ctx->pc = 0x1f6814u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 7));
label_1f6818:
    // 0x1f6818: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x1f6818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
label_1f681c:
    // 0x1f681c: 0xa93824  and         $a3, $a1, $t1
    ctx->pc = 0x1f681cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
label_1f6820:
    // 0x1f6820: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x1f6820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_1f6824:
    // 0x1f6824: 0x8fa50084  lw          $a1, 0x84($sp)
    ctx->pc = 0x1f6824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_1f6828:
    // 0x1f6828: 0x893024  and         $a2, $a0, $t1
    ctx->pc = 0x1f6828u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
label_1f682c:
    // 0x1f682c: 0xa82826  xor         $a1, $a1, $t0
    ctx->pc = 0x1f682cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 8));
label_1f6830:
    // 0x1f6830: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x1f6830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1f6834:
    // 0x1f6834: 0xafa50084  sw          $a1, 0x84($sp)
    ctx->pc = 0x1f6834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 5));
label_1f6838:
    // 0x1f6838: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1f6838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1f683c:
    // 0x1f683c: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x1f683cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f6840:
    // 0x1f6840: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x1f6840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f6844:
    // 0x1f6844: 0xa72826  xor         $a1, $a1, $a3
    ctx->pc = 0x1f6844u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 7));
label_1f6848:
    // 0x1f6848: 0xafa50088  sw          $a1, 0x88($sp)
    ctx->pc = 0x1f6848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
label_1f684c:
    // 0x1f684c: 0xc4840020  lwc1        $f4, 0x20($a0)
    ctx->pc = 0x1f684cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f6850:
    // 0x1f6850: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x1f6850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_1f6854:
    // 0x1f6854: 0xa62826  xor         $a1, $a1, $a2
    ctx->pc = 0x1f6854u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
label_1f6858:
    // 0x1f6858: 0xafa5008c  sw          $a1, 0x8C($sp)
    ctx->pc = 0x1f6858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 5));
label_1f685c:
    // 0x1f685c: 0xc7a70084  lwc1        $f7, 0x84($sp)
    ctx->pc = 0x1f685cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f6860:
    // 0x1f6860: 0xc7a50080  lwc1        $f5, 0x80($sp)
    ctx->pc = 0x1f6860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f6864:
    // 0x1f6864: 0xc7a60088  lwc1        $f6, 0x88($sp)
    ctx->pc = 0x1f6864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f6868:
    // 0x1f6868: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x1f6868u;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
label_1f686c:
    // 0x1f686c: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x1f686cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
label_1f6870:
    // 0x1f6870: 0x46002a07  neg.s       $f8, $f5
    ctx->pc = 0x1f6870u;
    ctx->f[8] = FPU_NEG_S(ctx->f[5]);
label_1f6874:
    // 0x1f6874: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1f6874u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1f6878:
    // 0x1f6878: 0x4603409c  madd.s      $f2, $f8, $f3
    ctx->pc = 0x1f6878u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[3]));
label_1f687c:
    // 0x1f687c: 0x46003187  neg.s       $f6, $f6
    ctx->pc = 0x1f687cu;
    ctx->f[6] = FPU_NEG_S(ctx->f[6]);
label_1f6880:
    // 0x1f6880: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1f6880u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1f6884:
    // 0x1f6884: 0x4604309c  madd.s      $f2, $f6, $f4
    ctx->pc = 0x1f6884u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
label_1f6888:
    // 0x1f6888: 0xe6220010  swc1        $f2, 0x10($s1)
    ctx->pc = 0x1f6888u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_1f688c:
    // 0x1f688c: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x1f688cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f6890:
    // 0x1f6890: 0xc7a5008c  lwc1        $f5, 0x8C($sp)
    ctx->pc = 0x1f6890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f6894:
    // 0x1f6894: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x1f6894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f6898:
    // 0x1f6898: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x1f6898u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
label_1f689c:
    // 0x1f689c: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1f689cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1f68a0:
    // 0x1f68a0: 0x4603409c  madd.s      $f2, $f8, $f3
    ctx->pc = 0x1f68a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[3]));
label_1f68a4:
    // 0x1f68a4: 0xc4840024  lwc1        $f4, 0x24($a0)
    ctx->pc = 0x1f68a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f68a8:
    // 0x1f68a8: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1f68a8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1f68ac:
    // 0x1f68ac: 0x46002947  neg.s       $f5, $f5
    ctx->pc = 0x1f68acu;
    ctx->f[5] = FPU_NEG_S(ctx->f[5]);
label_1f68b0:
    // 0x1f68b0: 0x4604309c  madd.s      $f2, $f6, $f4
    ctx->pc = 0x1f68b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
label_1f68b4:
    // 0x1f68b4: 0xe6220014  swc1        $f2, 0x14($s1)
    ctx->pc = 0x1f68b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_1f68b8:
    // 0x1f68b8: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x1f68b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f68bc:
    // 0x1f68bc: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x1f68bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f68c0:
    // 0x1f68c0: 0xc4840028  lwc1        $f4, 0x28($a0)
    ctx->pc = 0x1f68c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f68c4:
    // 0x1f68c4: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x1f68c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
label_1f68c8:
    // 0x1f68c8: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1f68c8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1f68cc:
    // 0x1f68cc: 0x4603409c  madd.s      $f2, $f8, $f3
    ctx->pc = 0x1f68ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[3]));
label_1f68d0:
    // 0x1f68d0: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1f68d0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1f68d4:
    // 0x1f68d4: 0x4604309c  madd.s      $f2, $f6, $f4
    ctx->pc = 0x1f68d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
label_1f68d8:
    // 0x1f68d8: 0xe6220018  swc1        $f2, 0x18($s1)
    ctx->pc = 0x1f68d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_1f68dc:
    // 0x1f68dc: 0xe7a80080  swc1        $f8, 0x80($sp)
    ctx->pc = 0x1f68dcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1f68e0:
    // 0x1f68e0: 0xe7a70084  swc1        $f7, 0x84($sp)
    ctx->pc = 0x1f68e0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1f68e4:
    // 0x1f68e4: 0xe7a60088  swc1        $f6, 0x88($sp)
    ctx->pc = 0x1f68e4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1f68e8:
    // 0x1f68e8: 0xe7a5008c  swc1        $f5, 0x8C($sp)
    ctx->pc = 0x1f68e8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1f68ec:
    // 0x1f68ec: 0x1000004a  b           . + 4 + (0x4A << 2)
label_1f68f0:
    if (ctx->pc == 0x1F68F0u) {
        ctx->pc = 0x1F68F0u;
            // 0x1f68f0: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->pc = 0x1F68F4u;
        goto label_1f68f4;
    }
    ctx->pc = 0x1F68ECu;
    {
        const bool branch_taken_0x1f68ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F68F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F68ECu;
            // 0x1f68f0: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f68ec) {
            ctx->pc = 0x1F6A18u;
            goto label_1f6a18;
        }
    }
    ctx->pc = 0x1F68F4u;
label_1f68f4:
    // 0x1f68f4: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x1f68f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f68f8:
    // 0x1f68f8: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x1f68f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f68fc:
    // 0x1f68fc: 0x46023881  sub.s       $f2, $f7, $f2
    ctx->pc = 0x1f68fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
label_1f6900:
    // 0x1f6900: 0x46013041  sub.s       $f1, $f6, $f1
    ctx->pc = 0x1f6900u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
label_1f6904:
    // 0x1f6904: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1f6904u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f6908:
    // 0x1f6908: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_1f690c:
    if (ctx->pc == 0x1F690Cu) {
        ctx->pc = 0x1F690Cu;
            // 0x1f690c: 0x46002801  sub.s       $f0, $f5, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
        ctx->pc = 0x1F6910u;
        goto label_1f6910;
    }
    ctx->pc = 0x1F6908u;
    {
        const bool branch_taken_0x1f6908 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F690Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6908u;
            // 0x1f690c: 0x46002801  sub.s       $f0, $f5, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6908) {
            ctx->pc = 0x1F6964u;
            goto label_1f6964;
        }
    }
    ctx->pc = 0x1F6910u;
label_1f6910:
    // 0x1f6910: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f6910u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f6914:
    // 0x1f6914: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
label_1f6918:
    if (ctx->pc == 0x1F6918u) {
        ctx->pc = 0x1F6918u;
            // 0x1f6918: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->pc = 0x1F691Cu;
        goto label_1f691c;
    }
    ctx->pc = 0x1F6914u;
    {
        const bool branch_taken_0x1f6914 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6914) {
            ctx->pc = 0x1F6918u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6914u;
            // 0x1f6918: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6940u;
            goto label_1f6940;
        }
    }
    ctx->pc = 0x1F691Cu;
label_1f691c:
    // 0x1f691c: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1f691cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1f6920:
    // 0x1f6920: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f6920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6924:
    // 0x1f6924: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1f6924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6928:
    // 0x1f6928: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x1f6928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_1f692c:
    // 0x1f692c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1f692cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6930:
    // 0x1f6930: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x1f6930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_1f6934:
    // 0x1f6934: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1f6934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6938:
    // 0x1f6938: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1f693c:
    if (ctx->pc == 0x1F693Cu) {
        ctx->pc = 0x1F693Cu;
            // 0x1f693c: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->pc = 0x1F6940u;
        goto label_1f6940;
    }
    ctx->pc = 0x1F6938u;
    {
        const bool branch_taken_0x1f6938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F693Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6938u;
            // 0x1f693c: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6938) {
            ctx->pc = 0x1F69B8u;
            goto label_1f69b8;
        }
    }
    ctx->pc = 0x1F6940u;
label_1f6940:
    // 0x1f6940: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1f6940u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_1f6944:
    // 0x1f6944: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f6944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f6948:
    // 0x1f6948: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x1f6948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f694c:
    // 0x1f694c: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x1f694cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_1f6950:
    // 0x1f6950: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x1f6950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6954:
    // 0x1f6954: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x1f6954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_1f6958:
    // 0x1f6958: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x1f6958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f695c:
    // 0x1f695c: 0x10000016  b           . + 4 + (0x16 << 2)
label_1f6960:
    if (ctx->pc == 0x1F6960u) {
        ctx->pc = 0x1F6960u;
            // 0x1f6960: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->pc = 0x1F6964u;
        goto label_1f6964;
    }
    ctx->pc = 0x1F695Cu;
    {
        const bool branch_taken_0x1f695c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F695Cu;
            // 0x1f6960: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f695c) {
            ctx->pc = 0x1F69B8u;
            goto label_1f69b8;
        }
    }
    ctx->pc = 0x1F6964u;
label_1f6964:
    // 0x1f6964: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f6964u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f6968:
    // 0x1f6968: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
label_1f696c:
    if (ctx->pc == 0x1F696Cu) {
        ctx->pc = 0x1F696Cu;
            // 0x1f696c: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->pc = 0x1F6970u;
        goto label_1f6970;
    }
    ctx->pc = 0x1F6968u;
    {
        const bool branch_taken_0x1f6968 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6968) {
            ctx->pc = 0x1F696Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6968u;
            // 0x1f696c: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6998u;
            goto label_1f6998;
        }
    }
    ctx->pc = 0x1F6970u;
label_1f6970:
    // 0x1f6970: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1f6970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1f6974:
    // 0x1f6974: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x1f6974u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_1f6978:
    // 0x1f6978: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f6978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f697c:
    // 0x1f697c: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x1f697cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6980:
    // 0x1f6980: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x1f6980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_1f6984:
    // 0x1f6984: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x1f6984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6988:
    // 0x1f6988: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x1f6988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_1f698c:
    // 0x1f698c: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x1f698cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6990:
    // 0x1f6990: 0x10000009  b           . + 4 + (0x9 << 2)
label_1f6994:
    if (ctx->pc == 0x1F6994u) {
        ctx->pc = 0x1F6994u;
            // 0x1f6994: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->pc = 0x1F6998u;
        goto label_1f6998;
    }
    ctx->pc = 0x1F6990u;
    {
        const bool branch_taken_0x1f6990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6990u;
            // 0x1f6994: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6990) {
            ctx->pc = 0x1F69B8u;
            goto label_1f69b8;
        }
    }
    ctx->pc = 0x1F6998u;
label_1f6998:
    // 0x1f6998: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1f6998u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_1f699c:
    // 0x1f699c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f699cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f69a0:
    // 0x1f69a0: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x1f69a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f69a4:
    // 0x1f69a4: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x1f69a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_1f69a8:
    // 0x1f69a8: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x1f69a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f69ac:
    // 0x1f69ac: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x1f69acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_1f69b0:
    // 0x1f69b0: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x1f69b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f69b4:
    // 0x1f69b4: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x1f69b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_1f69b8:
    // 0x1f69b8: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1f69b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1f69bc:
    // 0x1f69bc: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x1f69bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_1f69c0:
    // 0x1f69c0: 0xc4a10090  lwc1        $f1, 0x90($a1)
    ctx->pc = 0x1f69c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f69c4:
    // 0x1f69c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f69c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f69c8:
    // 0x1f69c8: 0x0  nop
    ctx->pc = 0x1f69c8u;
    // NOP
label_1f69cc:
    // 0x1f69cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f69ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f69d0:
    // 0x1f69d0: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
label_1f69d4:
    if (ctx->pc == 0x1F69D4u) {
        ctx->pc = 0x1F69D4u;
            // 0x1f69d4: 0xc4810010  lwc1        $f1, 0x10($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x1F69D8u;
        goto label_1f69d8;
    }
    ctx->pc = 0x1F69D0u;
    {
        const bool branch_taken_0x1f69d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f69d0) {
            ctx->pc = 0x1F69D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F69D0u;
            // 0x1f69d4: 0xc4810010  lwc1        $f1, 0x10($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6A0Cu;
            goto label_1f6a0c;
        }
    }
    ctx->pc = 0x1F69D8u;
label_1f69d8:
    // 0x1f69d8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1f69d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f69dc:
    // 0x1f69dc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f69dcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1f69e0:
    // 0x1f69e0: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x1f69e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_1f69e4:
    // 0x1f69e4: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1f69e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f69e8:
    // 0x1f69e8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f69e8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1f69ec:
    // 0x1f69ec: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x1f69ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_1f69f0:
    // 0x1f69f0: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1f69f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f69f4:
    // 0x1f69f4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f69f4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1f69f8:
    // 0x1f69f8: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x1f69f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_1f69fc:
    // 0x1f69fc: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x1f69fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6a00:
    // 0x1f6a00: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f6a00u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1f6a04:
    // 0x1f6a04: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x1f6a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_1f6a08:
    // 0x1f6a08: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1f6a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f6a0c:
    // 0x1f6a0c: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x1f6a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6a10:
    // 0x1f6a10: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1f6a10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1f6a14:
    // 0x1f6a14: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f6a14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f6a18:
    // 0x1f6a18: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x1f6a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f6a1c:
    // 0x1f6a1c: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x1f6a1cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
label_1f6a20:
    // 0x1f6a20: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x1f6a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f6a24:
    // 0x1f6a24: 0x46030101  sub.s       $f4, $f0, $f3
    ctx->pc = 0x1f6a24u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1f6a28:
    // 0x1f6a28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f6a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f6a2c:
    // 0x1f6a2c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1f6a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6a30:
    // 0x1f6a30: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1f6a30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f6a34:
    // 0x1f6a34: 0x0  nop
    ctx->pc = 0x1f6a34u;
    // NOP
label_1f6a38:
    // 0x1f6a38: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x1f6a38u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f6a3c:
    // 0x1f6a3c: 0x4602201c  madd.s      $f0, $f4, $f2
    ctx->pc = 0x1f6a3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
label_1f6a40:
    // 0x1f6a40: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1f6a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1f6a44:
    // 0x1f6a44: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1f6a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6a48:
    // 0x1f6a48: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x1f6a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f6a4c:
    // 0x1f6a4c: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x1f6a4cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f6a50:
    // 0x1f6a50: 0x4602201c  madd.s      $f0, $f4, $f2
    ctx->pc = 0x1f6a50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
label_1f6a54:
    // 0x1f6a54: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1f6a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1f6a58:
    // 0x1f6a58: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1f6a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6a5c:
    // 0x1f6a5c: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x1f6a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f6a60:
    // 0x1f6a60: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x1f6a60u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f6a64:
    // 0x1f6a64: 0x4602201c  madd.s      $f0, $f4, $f2
    ctx->pc = 0x1f6a64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
label_1f6a68:
    // 0x1f6a68: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1f6a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1f6a6c:
    // 0x1f6a6c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1f6a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6a70:
    // 0x1f6a70: 0xc622001c  lwc1        $f2, 0x1C($s1)
    ctx->pc = 0x1f6a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f6a74:
    // 0x1f6a74: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x1f6a74u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f6a78:
    // 0x1f6a78: 0x4602201c  madd.s      $f0, $f4, $f2
    ctx->pc = 0x1f6a78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
label_1f6a7c:
    // 0x1f6a7c: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x1f6a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1f6a80:
    // 0x1f6a80: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x1f6a80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_1f6a84:
    // 0x1f6a84: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1f6a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_1f6a88:
    // 0x1f6a88: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1f6a88u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_1f6a8c:
    // 0x1f6a8c: 0x50600019  beql        $v1, $zero, . + 4 + (0x19 << 2)
label_1f6a90:
    if (ctx->pc == 0x1F6A90u) {
        ctx->pc = 0x1F6A90u;
            // 0x1f6a90: 0x9685000c  lhu         $a1, 0xC($s4) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x1F6A94u;
        goto label_1f6a94;
    }
    ctx->pc = 0x1F6A8Cu;
    {
        const bool branch_taken_0x1f6a8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6a8c) {
            ctx->pc = 0x1F6A90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6A8Cu;
            // 0x1f6a90: 0x9685000c  lhu         $a1, 0xC($s4) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6AF4u;
            goto label_1f6af4;
        }
    }
    ctx->pc = 0x1F6A94u;
label_1f6a94:
    // 0x1f6a94: 0x9684000c  lhu         $a0, 0xC($s4)
    ctx->pc = 0x1f6a94u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_1f6a98:
    // 0x1f6a98: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f6a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1f6a9c:
    // 0x1f6a9c: 0x5483000d  bnel        $a0, $v1, . + 4 + (0xD << 2)
label_1f6aa0:
    if (ctx->pc == 0x1F6AA0u) {
        ctx->pc = 0x1F6AA0u;
            // 0x1f6aa0: 0x9684000c  lhu         $a0, 0xC($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x1F6AA4u;
        goto label_1f6aa4;
    }
    ctx->pc = 0x1F6A9Cu;
    {
        const bool branch_taken_0x1f6a9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f6a9c) {
            ctx->pc = 0x1F6AA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6A9Cu;
            // 0x1f6aa0: 0x9684000c  lhu         $a0, 0xC($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6AD4u;
            goto label_1f6ad4;
        }
    }
    ctx->pc = 0x1F6AA4u;
label_1f6aa4:
    // 0x1f6aa4: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1f6aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1f6aa8:
    // 0x1f6aa8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f6aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f6aac:
    // 0x1f6aac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f6aacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f6ab0:
    // 0x1f6ab0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1f6ab0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f6ab4:
    // 0x1f6ab4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1f6ab4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f6ab8:
    // 0x1f6ab8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f6ab8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6abc:
    // 0x1f6abc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f6abcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f6ac0:
    // 0x1f6ac0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1f6ac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1f6ac4:
    // 0x1f6ac4: 0x320f809  jalr        $t9
label_1f6ac8:
    if (ctx->pc == 0x1F6AC8u) {
        ctx->pc = 0x1F6AC8u;
            // 0x1f6ac8: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F6ACCu;
        goto label_1f6acc;
    }
    ctx->pc = 0x1F6AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F6ACCu);
        ctx->pc = 0x1F6AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6AC4u;
            // 0x1f6ac8: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F6ACCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F6ACCu; }
            if (ctx->pc != 0x1F6ACCu) { return; }
        }
        }
    }
    ctx->pc = 0x1F6ACCu;
label_1f6acc:
    // 0x1f6acc: 0xa682000c  sh          $v0, 0xC($s4)
    ctx->pc = 0x1f6accu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 2));
label_1f6ad0:
    // 0x1f6ad0: 0x9684000c  lhu         $a0, 0xC($s4)
    ctx->pc = 0x1f6ad0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_1f6ad4:
    // 0x1f6ad4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f6ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1f6ad8:
    // 0x1f6ad8: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
label_1f6adc:
    if (ctx->pc == 0x1F6ADCu) {
        ctx->pc = 0x1F6AE0u;
        goto label_1f6ae0;
    }
    ctx->pc = 0x1F6AD8u;
    {
        const bool branch_taken_0x1f6ad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f6ad8) {
            ctx->pc = 0x1F6B1Cu;
            goto label_1f6b1c;
        }
    }
    ctx->pc = 0x1F6AE0u;
label_1f6ae0:
    // 0x1f6ae0: 0xae240020  sw          $a0, 0x20($s1)
    ctx->pc = 0x1f6ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 4));
label_1f6ae4:
    // 0x1f6ae4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f6ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f6ae8:
    // 0x1f6ae8: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1f6ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1f6aec:
    // 0x1f6aec: 0x1000000b  b           . + 4 + (0xB << 2)
label_1f6af0:
    if (ctx->pc == 0x1F6AF0u) {
        ctx->pc = 0x1F6AF0u;
            // 0x1f6af0: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1F6AF4u;
        goto label_1f6af4;
    }
    ctx->pc = 0x1F6AECu;
    {
        const bool branch_taken_0x1f6aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6AECu;
            // 0x1f6af0: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6aec) {
            ctx->pc = 0x1F6B1Cu;
            goto label_1f6b1c;
        }
    }
    ctx->pc = 0x1F6AF4u;
label_1f6af4:
    // 0x1f6af4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f6af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1f6af8:
    // 0x1f6af8: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
label_1f6afc:
    if (ctx->pc == 0x1F6AFCu) {
        ctx->pc = 0x1F6B00u;
        goto label_1f6b00;
    }
    ctx->pc = 0x1F6AF8u;
    {
        const bool branch_taken_0x1f6af8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f6af8) {
            ctx->pc = 0x1F6B1Cu;
            goto label_1f6b1c;
        }
    }
    ctx->pc = 0x1F6B00u;
label_1f6b00:
    // 0x1f6b00: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1f6b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1f6b04:
    // 0x1f6b04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f6b04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f6b08:
    // 0x1f6b08: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1f6b08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1f6b0c:
    // 0x1f6b0c: 0x320f809  jalr        $t9
label_1f6b10:
    if (ctx->pc == 0x1F6B10u) {
        ctx->pc = 0x1F6B10u;
            // 0x1f6b10: 0x8e460004  lw          $a2, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x1F6B14u;
        goto label_1f6b14;
    }
    ctx->pc = 0x1F6B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F6B14u);
        ctx->pc = 0x1F6B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6B0Cu;
            // 0x1f6b10: 0x8e460004  lw          $a2, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F6B14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F6B14u; }
            if (ctx->pc != 0x1F6B14u) { return; }
        }
        }
    }
    ctx->pc = 0x1F6B14u;
label_1f6b14:
    // 0x1f6b14: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f6b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1f6b18:
    // 0x1f6b18: 0xa683000c  sh          $v1, 0xC($s4)
    ctx->pc = 0x1f6b18u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 3));
label_1f6b1c:
    // 0x1f6b1c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f6b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f6b20:
    // 0x1f6b20: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1f6b20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1f6b24:
    // 0x1f6b24: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1f6b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1f6b28:
    // 0x1f6b28: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f6b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f6b2c:
    // 0x1f6b2c: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1f6b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1f6b30:
    // 0x1f6b30: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1f6b30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f6b34:
    // 0x1f6b34: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f6b38:
    if (ctx->pc == 0x1F6B38u) {
        ctx->pc = 0x1F6B38u;
            // 0x1f6b38: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1F6B3Cu;
        goto label_1f6b3c;
    }
    ctx->pc = 0x1F6B34u;
    {
        const bool branch_taken_0x1f6b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6B34u;
            // 0x1f6b38: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6b34) {
            ctx->pc = 0x1F6B64u;
            goto label_1f6b64;
        }
    }
    ctx->pc = 0x1F6B3Cu;
label_1f6b3c:
    // 0x1f6b3c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1f6b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1f6b40:
    // 0x1f6b40: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1f6b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1f6b44:
    // 0x1f6b44: 0x2463afa0  addiu       $v1, $v1, -0x5060
    ctx->pc = 0x1f6b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946720));
label_1f6b48:
    // 0x1f6b48: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f6b48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1f6b4c:
    // 0x1f6b4c: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f6b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1f6b50:
    // 0x1f6b50: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1f6b50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1f6b54:
    // 0x1f6b54: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f6b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1f6b58:
    // 0x1f6b58: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1f6b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1f6b5c:
    // 0x1f6b5c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1f6b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1f6b60:
    // 0x1f6b60: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1f6b60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1f6b64:
    // 0x1f6b64: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1f6b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1f6b68:
    // 0x1f6b68: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f6b68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f6b6c:
    // 0x1f6b6c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f6b6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f6b70:
    // 0x1f6b70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f6b70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f6b74:
    // 0x1f6b74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f6b74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f6b78:
    // 0x1f6b78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f6b78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f6b7c:
    // 0x1f6b7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f6b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f6b80:
    // 0x1f6b80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f6b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f6b84:
    // 0x1f6b84: 0x3e00008  jr          $ra
label_1f6b88:
    if (ctx->pc == 0x1F6B88u) {
        ctx->pc = 0x1F6B88u;
            // 0x1f6b88: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1F6B8Cu;
        goto label_1f6b8c;
    }
    ctx->pc = 0x1F6B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6B84u;
            // 0x1f6b88: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F6B8Cu;
label_1f6b8c:
    // 0x1f6b8c: 0x0  nop
    ctx->pc = 0x1f6b8cu;
    // NOP
}
