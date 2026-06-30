#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C67F0
// Address: 0x3c67f0 - 0x3c6f70
void sub_003C67F0_0x3c67f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C67F0_0x3c67f0");
#endif

    switch (ctx->pc) {
        case 0x3c67f0u: goto label_3c67f0;
        case 0x3c67f4u: goto label_3c67f4;
        case 0x3c67f8u: goto label_3c67f8;
        case 0x3c67fcu: goto label_3c67fc;
        case 0x3c6800u: goto label_3c6800;
        case 0x3c6804u: goto label_3c6804;
        case 0x3c6808u: goto label_3c6808;
        case 0x3c680cu: goto label_3c680c;
        case 0x3c6810u: goto label_3c6810;
        case 0x3c6814u: goto label_3c6814;
        case 0x3c6818u: goto label_3c6818;
        case 0x3c681cu: goto label_3c681c;
        case 0x3c6820u: goto label_3c6820;
        case 0x3c6824u: goto label_3c6824;
        case 0x3c6828u: goto label_3c6828;
        case 0x3c682cu: goto label_3c682c;
        case 0x3c6830u: goto label_3c6830;
        case 0x3c6834u: goto label_3c6834;
        case 0x3c6838u: goto label_3c6838;
        case 0x3c683cu: goto label_3c683c;
        case 0x3c6840u: goto label_3c6840;
        case 0x3c6844u: goto label_3c6844;
        case 0x3c6848u: goto label_3c6848;
        case 0x3c684cu: goto label_3c684c;
        case 0x3c6850u: goto label_3c6850;
        case 0x3c6854u: goto label_3c6854;
        case 0x3c6858u: goto label_3c6858;
        case 0x3c685cu: goto label_3c685c;
        case 0x3c6860u: goto label_3c6860;
        case 0x3c6864u: goto label_3c6864;
        case 0x3c6868u: goto label_3c6868;
        case 0x3c686cu: goto label_3c686c;
        case 0x3c6870u: goto label_3c6870;
        case 0x3c6874u: goto label_3c6874;
        case 0x3c6878u: goto label_3c6878;
        case 0x3c687cu: goto label_3c687c;
        case 0x3c6880u: goto label_3c6880;
        case 0x3c6884u: goto label_3c6884;
        case 0x3c6888u: goto label_3c6888;
        case 0x3c688cu: goto label_3c688c;
        case 0x3c6890u: goto label_3c6890;
        case 0x3c6894u: goto label_3c6894;
        case 0x3c6898u: goto label_3c6898;
        case 0x3c689cu: goto label_3c689c;
        case 0x3c68a0u: goto label_3c68a0;
        case 0x3c68a4u: goto label_3c68a4;
        case 0x3c68a8u: goto label_3c68a8;
        case 0x3c68acu: goto label_3c68ac;
        case 0x3c68b0u: goto label_3c68b0;
        case 0x3c68b4u: goto label_3c68b4;
        case 0x3c68b8u: goto label_3c68b8;
        case 0x3c68bcu: goto label_3c68bc;
        case 0x3c68c0u: goto label_3c68c0;
        case 0x3c68c4u: goto label_3c68c4;
        case 0x3c68c8u: goto label_3c68c8;
        case 0x3c68ccu: goto label_3c68cc;
        case 0x3c68d0u: goto label_3c68d0;
        case 0x3c68d4u: goto label_3c68d4;
        case 0x3c68d8u: goto label_3c68d8;
        case 0x3c68dcu: goto label_3c68dc;
        case 0x3c68e0u: goto label_3c68e0;
        case 0x3c68e4u: goto label_3c68e4;
        case 0x3c68e8u: goto label_3c68e8;
        case 0x3c68ecu: goto label_3c68ec;
        case 0x3c68f0u: goto label_3c68f0;
        case 0x3c68f4u: goto label_3c68f4;
        case 0x3c68f8u: goto label_3c68f8;
        case 0x3c68fcu: goto label_3c68fc;
        case 0x3c6900u: goto label_3c6900;
        case 0x3c6904u: goto label_3c6904;
        case 0x3c6908u: goto label_3c6908;
        case 0x3c690cu: goto label_3c690c;
        case 0x3c6910u: goto label_3c6910;
        case 0x3c6914u: goto label_3c6914;
        case 0x3c6918u: goto label_3c6918;
        case 0x3c691cu: goto label_3c691c;
        case 0x3c6920u: goto label_3c6920;
        case 0x3c6924u: goto label_3c6924;
        case 0x3c6928u: goto label_3c6928;
        case 0x3c692cu: goto label_3c692c;
        case 0x3c6930u: goto label_3c6930;
        case 0x3c6934u: goto label_3c6934;
        case 0x3c6938u: goto label_3c6938;
        case 0x3c693cu: goto label_3c693c;
        case 0x3c6940u: goto label_3c6940;
        case 0x3c6944u: goto label_3c6944;
        case 0x3c6948u: goto label_3c6948;
        case 0x3c694cu: goto label_3c694c;
        case 0x3c6950u: goto label_3c6950;
        case 0x3c6954u: goto label_3c6954;
        case 0x3c6958u: goto label_3c6958;
        case 0x3c695cu: goto label_3c695c;
        case 0x3c6960u: goto label_3c6960;
        case 0x3c6964u: goto label_3c6964;
        case 0x3c6968u: goto label_3c6968;
        case 0x3c696cu: goto label_3c696c;
        case 0x3c6970u: goto label_3c6970;
        case 0x3c6974u: goto label_3c6974;
        case 0x3c6978u: goto label_3c6978;
        case 0x3c697cu: goto label_3c697c;
        case 0x3c6980u: goto label_3c6980;
        case 0x3c6984u: goto label_3c6984;
        case 0x3c6988u: goto label_3c6988;
        case 0x3c698cu: goto label_3c698c;
        case 0x3c6990u: goto label_3c6990;
        case 0x3c6994u: goto label_3c6994;
        case 0x3c6998u: goto label_3c6998;
        case 0x3c699cu: goto label_3c699c;
        case 0x3c69a0u: goto label_3c69a0;
        case 0x3c69a4u: goto label_3c69a4;
        case 0x3c69a8u: goto label_3c69a8;
        case 0x3c69acu: goto label_3c69ac;
        case 0x3c69b0u: goto label_3c69b0;
        case 0x3c69b4u: goto label_3c69b4;
        case 0x3c69b8u: goto label_3c69b8;
        case 0x3c69bcu: goto label_3c69bc;
        case 0x3c69c0u: goto label_3c69c0;
        case 0x3c69c4u: goto label_3c69c4;
        case 0x3c69c8u: goto label_3c69c8;
        case 0x3c69ccu: goto label_3c69cc;
        case 0x3c69d0u: goto label_3c69d0;
        case 0x3c69d4u: goto label_3c69d4;
        case 0x3c69d8u: goto label_3c69d8;
        case 0x3c69dcu: goto label_3c69dc;
        case 0x3c69e0u: goto label_3c69e0;
        case 0x3c69e4u: goto label_3c69e4;
        case 0x3c69e8u: goto label_3c69e8;
        case 0x3c69ecu: goto label_3c69ec;
        case 0x3c69f0u: goto label_3c69f0;
        case 0x3c69f4u: goto label_3c69f4;
        case 0x3c69f8u: goto label_3c69f8;
        case 0x3c69fcu: goto label_3c69fc;
        case 0x3c6a00u: goto label_3c6a00;
        case 0x3c6a04u: goto label_3c6a04;
        case 0x3c6a08u: goto label_3c6a08;
        case 0x3c6a0cu: goto label_3c6a0c;
        case 0x3c6a10u: goto label_3c6a10;
        case 0x3c6a14u: goto label_3c6a14;
        case 0x3c6a18u: goto label_3c6a18;
        case 0x3c6a1cu: goto label_3c6a1c;
        case 0x3c6a20u: goto label_3c6a20;
        case 0x3c6a24u: goto label_3c6a24;
        case 0x3c6a28u: goto label_3c6a28;
        case 0x3c6a2cu: goto label_3c6a2c;
        case 0x3c6a30u: goto label_3c6a30;
        case 0x3c6a34u: goto label_3c6a34;
        case 0x3c6a38u: goto label_3c6a38;
        case 0x3c6a3cu: goto label_3c6a3c;
        case 0x3c6a40u: goto label_3c6a40;
        case 0x3c6a44u: goto label_3c6a44;
        case 0x3c6a48u: goto label_3c6a48;
        case 0x3c6a4cu: goto label_3c6a4c;
        case 0x3c6a50u: goto label_3c6a50;
        case 0x3c6a54u: goto label_3c6a54;
        case 0x3c6a58u: goto label_3c6a58;
        case 0x3c6a5cu: goto label_3c6a5c;
        case 0x3c6a60u: goto label_3c6a60;
        case 0x3c6a64u: goto label_3c6a64;
        case 0x3c6a68u: goto label_3c6a68;
        case 0x3c6a6cu: goto label_3c6a6c;
        case 0x3c6a70u: goto label_3c6a70;
        case 0x3c6a74u: goto label_3c6a74;
        case 0x3c6a78u: goto label_3c6a78;
        case 0x3c6a7cu: goto label_3c6a7c;
        case 0x3c6a80u: goto label_3c6a80;
        case 0x3c6a84u: goto label_3c6a84;
        case 0x3c6a88u: goto label_3c6a88;
        case 0x3c6a8cu: goto label_3c6a8c;
        case 0x3c6a90u: goto label_3c6a90;
        case 0x3c6a94u: goto label_3c6a94;
        case 0x3c6a98u: goto label_3c6a98;
        case 0x3c6a9cu: goto label_3c6a9c;
        case 0x3c6aa0u: goto label_3c6aa0;
        case 0x3c6aa4u: goto label_3c6aa4;
        case 0x3c6aa8u: goto label_3c6aa8;
        case 0x3c6aacu: goto label_3c6aac;
        case 0x3c6ab0u: goto label_3c6ab0;
        case 0x3c6ab4u: goto label_3c6ab4;
        case 0x3c6ab8u: goto label_3c6ab8;
        case 0x3c6abcu: goto label_3c6abc;
        case 0x3c6ac0u: goto label_3c6ac0;
        case 0x3c6ac4u: goto label_3c6ac4;
        case 0x3c6ac8u: goto label_3c6ac8;
        case 0x3c6accu: goto label_3c6acc;
        case 0x3c6ad0u: goto label_3c6ad0;
        case 0x3c6ad4u: goto label_3c6ad4;
        case 0x3c6ad8u: goto label_3c6ad8;
        case 0x3c6adcu: goto label_3c6adc;
        case 0x3c6ae0u: goto label_3c6ae0;
        case 0x3c6ae4u: goto label_3c6ae4;
        case 0x3c6ae8u: goto label_3c6ae8;
        case 0x3c6aecu: goto label_3c6aec;
        case 0x3c6af0u: goto label_3c6af0;
        case 0x3c6af4u: goto label_3c6af4;
        case 0x3c6af8u: goto label_3c6af8;
        case 0x3c6afcu: goto label_3c6afc;
        case 0x3c6b00u: goto label_3c6b00;
        case 0x3c6b04u: goto label_3c6b04;
        case 0x3c6b08u: goto label_3c6b08;
        case 0x3c6b0cu: goto label_3c6b0c;
        case 0x3c6b10u: goto label_3c6b10;
        case 0x3c6b14u: goto label_3c6b14;
        case 0x3c6b18u: goto label_3c6b18;
        case 0x3c6b1cu: goto label_3c6b1c;
        case 0x3c6b20u: goto label_3c6b20;
        case 0x3c6b24u: goto label_3c6b24;
        case 0x3c6b28u: goto label_3c6b28;
        case 0x3c6b2cu: goto label_3c6b2c;
        case 0x3c6b30u: goto label_3c6b30;
        case 0x3c6b34u: goto label_3c6b34;
        case 0x3c6b38u: goto label_3c6b38;
        case 0x3c6b3cu: goto label_3c6b3c;
        case 0x3c6b40u: goto label_3c6b40;
        case 0x3c6b44u: goto label_3c6b44;
        case 0x3c6b48u: goto label_3c6b48;
        case 0x3c6b4cu: goto label_3c6b4c;
        case 0x3c6b50u: goto label_3c6b50;
        case 0x3c6b54u: goto label_3c6b54;
        case 0x3c6b58u: goto label_3c6b58;
        case 0x3c6b5cu: goto label_3c6b5c;
        case 0x3c6b60u: goto label_3c6b60;
        case 0x3c6b64u: goto label_3c6b64;
        case 0x3c6b68u: goto label_3c6b68;
        case 0x3c6b6cu: goto label_3c6b6c;
        case 0x3c6b70u: goto label_3c6b70;
        case 0x3c6b74u: goto label_3c6b74;
        case 0x3c6b78u: goto label_3c6b78;
        case 0x3c6b7cu: goto label_3c6b7c;
        case 0x3c6b80u: goto label_3c6b80;
        case 0x3c6b84u: goto label_3c6b84;
        case 0x3c6b88u: goto label_3c6b88;
        case 0x3c6b8cu: goto label_3c6b8c;
        case 0x3c6b90u: goto label_3c6b90;
        case 0x3c6b94u: goto label_3c6b94;
        case 0x3c6b98u: goto label_3c6b98;
        case 0x3c6b9cu: goto label_3c6b9c;
        case 0x3c6ba0u: goto label_3c6ba0;
        case 0x3c6ba4u: goto label_3c6ba4;
        case 0x3c6ba8u: goto label_3c6ba8;
        case 0x3c6bacu: goto label_3c6bac;
        case 0x3c6bb0u: goto label_3c6bb0;
        case 0x3c6bb4u: goto label_3c6bb4;
        case 0x3c6bb8u: goto label_3c6bb8;
        case 0x3c6bbcu: goto label_3c6bbc;
        case 0x3c6bc0u: goto label_3c6bc0;
        case 0x3c6bc4u: goto label_3c6bc4;
        case 0x3c6bc8u: goto label_3c6bc8;
        case 0x3c6bccu: goto label_3c6bcc;
        case 0x3c6bd0u: goto label_3c6bd0;
        case 0x3c6bd4u: goto label_3c6bd4;
        case 0x3c6bd8u: goto label_3c6bd8;
        case 0x3c6bdcu: goto label_3c6bdc;
        case 0x3c6be0u: goto label_3c6be0;
        case 0x3c6be4u: goto label_3c6be4;
        case 0x3c6be8u: goto label_3c6be8;
        case 0x3c6becu: goto label_3c6bec;
        case 0x3c6bf0u: goto label_3c6bf0;
        case 0x3c6bf4u: goto label_3c6bf4;
        case 0x3c6bf8u: goto label_3c6bf8;
        case 0x3c6bfcu: goto label_3c6bfc;
        case 0x3c6c00u: goto label_3c6c00;
        case 0x3c6c04u: goto label_3c6c04;
        case 0x3c6c08u: goto label_3c6c08;
        case 0x3c6c0cu: goto label_3c6c0c;
        case 0x3c6c10u: goto label_3c6c10;
        case 0x3c6c14u: goto label_3c6c14;
        case 0x3c6c18u: goto label_3c6c18;
        case 0x3c6c1cu: goto label_3c6c1c;
        case 0x3c6c20u: goto label_3c6c20;
        case 0x3c6c24u: goto label_3c6c24;
        case 0x3c6c28u: goto label_3c6c28;
        case 0x3c6c2cu: goto label_3c6c2c;
        case 0x3c6c30u: goto label_3c6c30;
        case 0x3c6c34u: goto label_3c6c34;
        case 0x3c6c38u: goto label_3c6c38;
        case 0x3c6c3cu: goto label_3c6c3c;
        case 0x3c6c40u: goto label_3c6c40;
        case 0x3c6c44u: goto label_3c6c44;
        case 0x3c6c48u: goto label_3c6c48;
        case 0x3c6c4cu: goto label_3c6c4c;
        case 0x3c6c50u: goto label_3c6c50;
        case 0x3c6c54u: goto label_3c6c54;
        case 0x3c6c58u: goto label_3c6c58;
        case 0x3c6c5cu: goto label_3c6c5c;
        case 0x3c6c60u: goto label_3c6c60;
        case 0x3c6c64u: goto label_3c6c64;
        case 0x3c6c68u: goto label_3c6c68;
        case 0x3c6c6cu: goto label_3c6c6c;
        case 0x3c6c70u: goto label_3c6c70;
        case 0x3c6c74u: goto label_3c6c74;
        case 0x3c6c78u: goto label_3c6c78;
        case 0x3c6c7cu: goto label_3c6c7c;
        case 0x3c6c80u: goto label_3c6c80;
        case 0x3c6c84u: goto label_3c6c84;
        case 0x3c6c88u: goto label_3c6c88;
        case 0x3c6c8cu: goto label_3c6c8c;
        case 0x3c6c90u: goto label_3c6c90;
        case 0x3c6c94u: goto label_3c6c94;
        case 0x3c6c98u: goto label_3c6c98;
        case 0x3c6c9cu: goto label_3c6c9c;
        case 0x3c6ca0u: goto label_3c6ca0;
        case 0x3c6ca4u: goto label_3c6ca4;
        case 0x3c6ca8u: goto label_3c6ca8;
        case 0x3c6cacu: goto label_3c6cac;
        case 0x3c6cb0u: goto label_3c6cb0;
        case 0x3c6cb4u: goto label_3c6cb4;
        case 0x3c6cb8u: goto label_3c6cb8;
        case 0x3c6cbcu: goto label_3c6cbc;
        case 0x3c6cc0u: goto label_3c6cc0;
        case 0x3c6cc4u: goto label_3c6cc4;
        case 0x3c6cc8u: goto label_3c6cc8;
        case 0x3c6cccu: goto label_3c6ccc;
        case 0x3c6cd0u: goto label_3c6cd0;
        case 0x3c6cd4u: goto label_3c6cd4;
        case 0x3c6cd8u: goto label_3c6cd8;
        case 0x3c6cdcu: goto label_3c6cdc;
        case 0x3c6ce0u: goto label_3c6ce0;
        case 0x3c6ce4u: goto label_3c6ce4;
        case 0x3c6ce8u: goto label_3c6ce8;
        case 0x3c6cecu: goto label_3c6cec;
        case 0x3c6cf0u: goto label_3c6cf0;
        case 0x3c6cf4u: goto label_3c6cf4;
        case 0x3c6cf8u: goto label_3c6cf8;
        case 0x3c6cfcu: goto label_3c6cfc;
        case 0x3c6d00u: goto label_3c6d00;
        case 0x3c6d04u: goto label_3c6d04;
        case 0x3c6d08u: goto label_3c6d08;
        case 0x3c6d0cu: goto label_3c6d0c;
        case 0x3c6d10u: goto label_3c6d10;
        case 0x3c6d14u: goto label_3c6d14;
        case 0x3c6d18u: goto label_3c6d18;
        case 0x3c6d1cu: goto label_3c6d1c;
        case 0x3c6d20u: goto label_3c6d20;
        case 0x3c6d24u: goto label_3c6d24;
        case 0x3c6d28u: goto label_3c6d28;
        case 0x3c6d2cu: goto label_3c6d2c;
        case 0x3c6d30u: goto label_3c6d30;
        case 0x3c6d34u: goto label_3c6d34;
        case 0x3c6d38u: goto label_3c6d38;
        case 0x3c6d3cu: goto label_3c6d3c;
        case 0x3c6d40u: goto label_3c6d40;
        case 0x3c6d44u: goto label_3c6d44;
        case 0x3c6d48u: goto label_3c6d48;
        case 0x3c6d4cu: goto label_3c6d4c;
        case 0x3c6d50u: goto label_3c6d50;
        case 0x3c6d54u: goto label_3c6d54;
        case 0x3c6d58u: goto label_3c6d58;
        case 0x3c6d5cu: goto label_3c6d5c;
        case 0x3c6d60u: goto label_3c6d60;
        case 0x3c6d64u: goto label_3c6d64;
        case 0x3c6d68u: goto label_3c6d68;
        case 0x3c6d6cu: goto label_3c6d6c;
        case 0x3c6d70u: goto label_3c6d70;
        case 0x3c6d74u: goto label_3c6d74;
        case 0x3c6d78u: goto label_3c6d78;
        case 0x3c6d7cu: goto label_3c6d7c;
        case 0x3c6d80u: goto label_3c6d80;
        case 0x3c6d84u: goto label_3c6d84;
        case 0x3c6d88u: goto label_3c6d88;
        case 0x3c6d8cu: goto label_3c6d8c;
        case 0x3c6d90u: goto label_3c6d90;
        case 0x3c6d94u: goto label_3c6d94;
        case 0x3c6d98u: goto label_3c6d98;
        case 0x3c6d9cu: goto label_3c6d9c;
        case 0x3c6da0u: goto label_3c6da0;
        case 0x3c6da4u: goto label_3c6da4;
        case 0x3c6da8u: goto label_3c6da8;
        case 0x3c6dacu: goto label_3c6dac;
        case 0x3c6db0u: goto label_3c6db0;
        case 0x3c6db4u: goto label_3c6db4;
        case 0x3c6db8u: goto label_3c6db8;
        case 0x3c6dbcu: goto label_3c6dbc;
        case 0x3c6dc0u: goto label_3c6dc0;
        case 0x3c6dc4u: goto label_3c6dc4;
        case 0x3c6dc8u: goto label_3c6dc8;
        case 0x3c6dccu: goto label_3c6dcc;
        case 0x3c6dd0u: goto label_3c6dd0;
        case 0x3c6dd4u: goto label_3c6dd4;
        case 0x3c6dd8u: goto label_3c6dd8;
        case 0x3c6ddcu: goto label_3c6ddc;
        case 0x3c6de0u: goto label_3c6de0;
        case 0x3c6de4u: goto label_3c6de4;
        case 0x3c6de8u: goto label_3c6de8;
        case 0x3c6decu: goto label_3c6dec;
        case 0x3c6df0u: goto label_3c6df0;
        case 0x3c6df4u: goto label_3c6df4;
        case 0x3c6df8u: goto label_3c6df8;
        case 0x3c6dfcu: goto label_3c6dfc;
        case 0x3c6e00u: goto label_3c6e00;
        case 0x3c6e04u: goto label_3c6e04;
        case 0x3c6e08u: goto label_3c6e08;
        case 0x3c6e0cu: goto label_3c6e0c;
        case 0x3c6e10u: goto label_3c6e10;
        case 0x3c6e14u: goto label_3c6e14;
        case 0x3c6e18u: goto label_3c6e18;
        case 0x3c6e1cu: goto label_3c6e1c;
        case 0x3c6e20u: goto label_3c6e20;
        case 0x3c6e24u: goto label_3c6e24;
        case 0x3c6e28u: goto label_3c6e28;
        case 0x3c6e2cu: goto label_3c6e2c;
        case 0x3c6e30u: goto label_3c6e30;
        case 0x3c6e34u: goto label_3c6e34;
        case 0x3c6e38u: goto label_3c6e38;
        case 0x3c6e3cu: goto label_3c6e3c;
        case 0x3c6e40u: goto label_3c6e40;
        case 0x3c6e44u: goto label_3c6e44;
        case 0x3c6e48u: goto label_3c6e48;
        case 0x3c6e4cu: goto label_3c6e4c;
        case 0x3c6e50u: goto label_3c6e50;
        case 0x3c6e54u: goto label_3c6e54;
        case 0x3c6e58u: goto label_3c6e58;
        case 0x3c6e5cu: goto label_3c6e5c;
        case 0x3c6e60u: goto label_3c6e60;
        case 0x3c6e64u: goto label_3c6e64;
        case 0x3c6e68u: goto label_3c6e68;
        case 0x3c6e6cu: goto label_3c6e6c;
        case 0x3c6e70u: goto label_3c6e70;
        case 0x3c6e74u: goto label_3c6e74;
        case 0x3c6e78u: goto label_3c6e78;
        case 0x3c6e7cu: goto label_3c6e7c;
        case 0x3c6e80u: goto label_3c6e80;
        case 0x3c6e84u: goto label_3c6e84;
        case 0x3c6e88u: goto label_3c6e88;
        case 0x3c6e8cu: goto label_3c6e8c;
        case 0x3c6e90u: goto label_3c6e90;
        case 0x3c6e94u: goto label_3c6e94;
        case 0x3c6e98u: goto label_3c6e98;
        case 0x3c6e9cu: goto label_3c6e9c;
        case 0x3c6ea0u: goto label_3c6ea0;
        case 0x3c6ea4u: goto label_3c6ea4;
        case 0x3c6ea8u: goto label_3c6ea8;
        case 0x3c6eacu: goto label_3c6eac;
        case 0x3c6eb0u: goto label_3c6eb0;
        case 0x3c6eb4u: goto label_3c6eb4;
        case 0x3c6eb8u: goto label_3c6eb8;
        case 0x3c6ebcu: goto label_3c6ebc;
        case 0x3c6ec0u: goto label_3c6ec0;
        case 0x3c6ec4u: goto label_3c6ec4;
        case 0x3c6ec8u: goto label_3c6ec8;
        case 0x3c6eccu: goto label_3c6ecc;
        case 0x3c6ed0u: goto label_3c6ed0;
        case 0x3c6ed4u: goto label_3c6ed4;
        case 0x3c6ed8u: goto label_3c6ed8;
        case 0x3c6edcu: goto label_3c6edc;
        case 0x3c6ee0u: goto label_3c6ee0;
        case 0x3c6ee4u: goto label_3c6ee4;
        case 0x3c6ee8u: goto label_3c6ee8;
        case 0x3c6eecu: goto label_3c6eec;
        case 0x3c6ef0u: goto label_3c6ef0;
        case 0x3c6ef4u: goto label_3c6ef4;
        case 0x3c6ef8u: goto label_3c6ef8;
        case 0x3c6efcu: goto label_3c6efc;
        case 0x3c6f00u: goto label_3c6f00;
        case 0x3c6f04u: goto label_3c6f04;
        case 0x3c6f08u: goto label_3c6f08;
        case 0x3c6f0cu: goto label_3c6f0c;
        case 0x3c6f10u: goto label_3c6f10;
        case 0x3c6f14u: goto label_3c6f14;
        case 0x3c6f18u: goto label_3c6f18;
        case 0x3c6f1cu: goto label_3c6f1c;
        case 0x3c6f20u: goto label_3c6f20;
        case 0x3c6f24u: goto label_3c6f24;
        case 0x3c6f28u: goto label_3c6f28;
        case 0x3c6f2cu: goto label_3c6f2c;
        case 0x3c6f30u: goto label_3c6f30;
        case 0x3c6f34u: goto label_3c6f34;
        case 0x3c6f38u: goto label_3c6f38;
        case 0x3c6f3cu: goto label_3c6f3c;
        case 0x3c6f40u: goto label_3c6f40;
        case 0x3c6f44u: goto label_3c6f44;
        case 0x3c6f48u: goto label_3c6f48;
        case 0x3c6f4cu: goto label_3c6f4c;
        case 0x3c6f50u: goto label_3c6f50;
        case 0x3c6f54u: goto label_3c6f54;
        case 0x3c6f58u: goto label_3c6f58;
        case 0x3c6f5cu: goto label_3c6f5c;
        case 0x3c6f60u: goto label_3c6f60;
        case 0x3c6f64u: goto label_3c6f64;
        case 0x3c6f68u: goto label_3c6f68;
        case 0x3c6f6cu: goto label_3c6f6c;
        default: break;
    }

    ctx->pc = 0x3c67f0u;

label_3c67f0:
    // 0x3c67f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c67f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3c67f4:
    // 0x3c67f4: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x3c67f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_3c67f8:
    // 0x3c67f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c67f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3c67fc:
    // 0x3c67fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c67fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c6800:
    // 0x3c6800: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c6800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c6804:
    // 0x3c6804: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c6804u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c6808:
    // 0x3c6808: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c6808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c680c:
    // 0x3c680c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c680cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c6810:
    // 0x3c6810: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3c6810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c6814:
    // 0x3c6814: 0x3445aeec  ori         $a1, $v0, 0xAEEC
    ctx->pc = 0x3c6814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44780);
label_3c6818:
    // 0x3c6818: 0xc0ee760  jal         func_3B9D80
label_3c681c:
    if (ctx->pc == 0x3C681Cu) {
        ctx->pc = 0x3C681Cu;
            // 0x3c681c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C6820u;
        goto label_3c6820;
    }
    ctx->pc = 0x3C6818u;
    SET_GPR_U32(ctx, 31, 0x3C6820u);
    ctx->pc = 0x3C681Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6818u;
            // 0x3c681c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D80u;
    if (runtime->hasFunction(0x3B9D80u)) {
        auto targetFn = runtime->lookupFunction(0x3B9D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C6820u; }
        if (ctx->pc != 0x3C6820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9D80_0x3b9d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C6820u; }
        if (ctx->pc != 0x3C6820u) { return; }
    }
    ctx->pc = 0x3C6820u;
label_3c6820:
    // 0x3c6820: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3c6820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3c6824:
    // 0x3c6824: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3c6824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3c6828:
    // 0x3c6828: 0x24428d70  addiu       $v0, $v0, -0x7290
    ctx->pc = 0x3c6828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937968));
label_3c682c:
    // 0x3c682c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3c682cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3c6830:
    // 0x3c6830: 0xae510058  sw          $s1, 0x58($s2)
    ctx->pc = 0x3c6830u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 17));
label_3c6834:
    // 0x3c6834: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3c6834u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c6838:
    // 0x3c6838: 0xa243005c  sb          $v1, 0x5C($s2)
    ctx->pc = 0x3c6838u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 92), (uint8_t)GPR_U32(ctx, 3));
label_3c683c:
    // 0x3c683c: 0xa250005d  sb          $s0, 0x5D($s2)
    ctx->pc = 0x3c683cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 93), (uint8_t)GPR_U32(ctx, 16));
label_3c6840:
    // 0x3c6840: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c6840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3c6844:
    // 0x3c6844: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c6844u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c6848:
    // 0x3c6848: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c6848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c684c:
    // 0x3c684c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c684cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c6850:
    // 0x3c6850: 0x3e00008  jr          $ra
label_3c6854:
    if (ctx->pc == 0x3C6854u) {
        ctx->pc = 0x3C6854u;
            // 0x3c6854: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3C6858u;
        goto label_3c6858;
    }
    ctx->pc = 0x3C6850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C6854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6850u;
            // 0x3c6854: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C6858u;
label_3c6858:
    // 0x3c6858: 0x0  nop
    ctx->pc = 0x3c6858u;
    // NOP
label_3c685c:
    // 0x3c685c: 0x0  nop
    ctx->pc = 0x3c685cu;
    // NOP
label_3c6860:
    // 0x3c6860: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3c6860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3c6864:
    // 0x3c6864: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3c6864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3c6868:
    // 0x3c6868: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3c6868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3c686c:
    // 0x3c686c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3c686cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3c6870:
    // 0x3c6870: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3c6870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3c6874:
    // 0x3c6874: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3c6874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3c6878:
    // 0x3c6878: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3c6878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3c687c:
    // 0x3c687c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3c687cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3c6880:
    // 0x3c6880: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3c6880u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c6884:
    // 0x3c6884: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3c6884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3c6888:
    // 0x3c6888: 0x3c140067  lui         $s4, 0x67
    ctx->pc = 0x3c6888u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)103 << 16));
label_3c688c:
    // 0x3c688c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c688cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c6890:
    // 0x3c6890: 0x2694a890  addiu       $s4, $s4, -0x5770
    ctx->pc = 0x3c6890u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294944912));
label_3c6894:
    // 0x3c6894: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c6894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c6898:
    // 0x3c6898: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x3c6898u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c689c:
    // 0x3c689c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c689cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c68a0:
    // 0x3c68a0: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x3c68a0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
label_3c68a4:
    // 0x3c68a4: 0x8c6389e0  lw          $v1, -0x7620($v1)
    ctx->pc = 0x3c68a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_3c68a8:
    // 0x3c68a8: 0x84960058  lh          $s6, 0x58($a0)
    ctx->pc = 0x3c68a8u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 88)));
label_3c68ac:
    // 0x3c68ac: 0x8497005a  lh          $s7, 0x5A($a0)
    ctx->pc = 0x3c68acu;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 90)));
label_3c68b0:
    // 0x3c68b0: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x3c68b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_3c68b4:
    // 0x3c68b4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c68b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3c68b8:
    // 0x3c68b8: 0x8c650eac  lw          $a1, 0xEAC($v1)
    ctx->pc = 0x3c68b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3756)));
label_3c68bc:
    // 0x3c68bc: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x3c68bcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3c68c0:
    // 0x3c68c0: 0x90b00116  lbu         $s0, 0x116($a1)
    ctx->pc = 0x3c68c0u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 278)));
label_3c68c4:
    // 0x3c68c4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3c68c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3c68c8:
    // 0x3c68c8: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_3c68cc:
    if (ctx->pc == 0x3C68CCu) {
        ctx->pc = 0x3C68CCu;
            // 0x3c68cc: 0x26312108  addiu       $s1, $s1, 0x2108 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8456));
        ctx->pc = 0x3C68D0u;
        goto label_3c68d0;
    }
    ctx->pc = 0x3C68C8u;
    {
        const bool branch_taken_0x3c68c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C68CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C68C8u;
            // 0x3c68cc: 0x26312108  addiu       $s1, $s1, 0x2108 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c68c8) {
            ctx->pc = 0x3C68F0u;
            goto label_3c68f0;
        }
    }
    ctx->pc = 0x3C68D0u;
label_3c68d0:
    // 0x3c68d0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3c68d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c68d4:
    // 0x3c68d4: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_3c68d8:
    if (ctx->pc == 0x3C68D8u) {
        ctx->pc = 0x3C68DCu;
        goto label_3c68dc;
    }
    ctx->pc = 0x3C68D4u;
    {
        const bool branch_taken_0x3c68d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c68d4) {
            ctx->pc = 0x3C68F0u;
            goto label_3c68f0;
        }
    }
    ctx->pc = 0x3C68DCu;
label_3c68dc:
    // 0x3c68dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c68dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c68e0:
    // 0x3c68e0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_3c68e4:
    if (ctx->pc == 0x3C68E4u) {
        ctx->pc = 0x3C68E8u;
        goto label_3c68e8;
    }
    ctx->pc = 0x3C68E0u;
    {
        const bool branch_taken_0x3c68e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c68e0) {
            ctx->pc = 0x3C68F0u;
            goto label_3c68f0;
        }
    }
    ctx->pc = 0x3C68E8u;
label_3c68e8:
    // 0x3c68e8: 0x1000007c  b           . + 4 + (0x7C << 2)
label_3c68ec:
    if (ctx->pc == 0x3C68ECu) {
        ctx->pc = 0x3C68ECu;
            // 0x3c68ec: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x3C68F0u;
        goto label_3c68f0;
    }
    ctx->pc = 0x3C68E8u;
    {
        const bool branch_taken_0x3c68e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C68ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C68E8u;
            // 0x3c68ec: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c68e8) {
            ctx->pc = 0x3C6ADCu;
            goto label_3c6adc;
        }
    }
    ctx->pc = 0x3C68F0u;
label_3c68f0:
    // 0x3c68f0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c68f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c68f4:
    // 0x3c68f4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3c68f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3c68f8:
    // 0x3c68f8: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3c68f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3c68fc:
    // 0x3c68fc: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x3c68fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_3c6900:
    // 0x3c6900: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_3c6904:
    if (ctx->pc == 0x3C6904u) {
        ctx->pc = 0x3C6908u;
        goto label_3c6908;
    }
    ctx->pc = 0x3C6900u;
    {
        const bool branch_taken_0x3c6900 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6900) {
            ctx->pc = 0x3C6924u;
            goto label_3c6924;
        }
    }
    ctx->pc = 0x3C6908u;
label_3c6908:
    // 0x3c6908: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x3c6908u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3c690c:
    // 0x3c690c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3c690cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c6910:
    // 0x3c6910: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c6910u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c6914:
    // 0x3c6914: 0x320f809  jalr        $t9
label_3c6918:
    if (ctx->pc == 0x3C6918u) {
        ctx->pc = 0x3C6918u;
            // 0x3c6918: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C691Cu;
        goto label_3c691c;
    }
    ctx->pc = 0x3C6914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C691Cu);
        ctx->pc = 0x3C6918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6914u;
            // 0x3c6918: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C691Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C691Cu; }
            if (ctx->pc != 0x3C691Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3C691Cu;
label_3c691c:
    // 0x3c691c: 0x1000006e  b           . + 4 + (0x6E << 2)
label_3c6920:
    if (ctx->pc == 0x3C6920u) {
        ctx->pc = 0x3C6924u;
        goto label_3c6924;
    }
    ctx->pc = 0x3C691Cu;
    {
        const bool branch_taken_0x3c691c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c691c) {
            ctx->pc = 0x3C6AD8u;
            goto label_3c6ad8;
        }
    }
    ctx->pc = 0x3C6924u;
label_3c6924:
    // 0x3c6924: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c6924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c6928:
    // 0x3c6928: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3c6928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3c692c:
    // 0x3c692c: 0xc0506ac  jal         func_141AB0
label_3c6930:
    if (ctx->pc == 0x3C6930u) {
        ctx->pc = 0x3C6930u;
            // 0x3c6930: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3C6934u;
        goto label_3c6934;
    }
    ctx->pc = 0x3C692Cu;
    SET_GPR_U32(ctx, 31, 0x3C6934u);
    ctx->pc = 0x3C6930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C692Cu;
            // 0x3c6930: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C6934u; }
        if (ctx->pc != 0x3C6934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C6934u; }
        if (ctx->pc != 0x3C6934u) { return; }
    }
    ctx->pc = 0x3C6934u;
label_3c6934:
    // 0x3c6934: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x3c6934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_3c6938:
    // 0x3c6938: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3c6938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c693c:
    // 0x3c693c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x3c693cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c6940:
    // 0x3c6940: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3c6940u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3c6944:
    // 0x3c6944: 0x320f809  jalr        $t9
label_3c6948:
    if (ctx->pc == 0x3C6948u) {
        ctx->pc = 0x3C6948u;
            // 0x3c6948: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3C694Cu;
        goto label_3c694c;
    }
    ctx->pc = 0x3C6944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C694Cu);
        ctx->pc = 0x3C6948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6944u;
            // 0x3c6948: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C694Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C694Cu; }
            if (ctx->pc != 0x3C694Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3C694Cu;
label_3c694c:
    // 0x3c694c: 0x26b20008  addiu       $s2, $s5, 0x8
    ctx->pc = 0x3c694cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_3c6950:
    // 0x3c6950: 0x321e00ff  andi        $fp, $s0, 0xFF
    ctx->pc = 0x3c6950u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_3c6954:
    // 0x3c6954: 0x3a620001  xori        $v0, $s3, 0x1
    ctx->pc = 0x3c6954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
label_3c6958:
    // 0x3c6958: 0x86a3005c  lh          $v1, 0x5C($s5)
    ctx->pc = 0x3c6958u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 92)));
label_3c695c:
    // 0x3c695c: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x3c695cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3c6960:
    // 0x3c6960: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x3c6960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_3c6964:
    // 0x3c6964: 0x42023  negu        $a0, $a0
    ctx->pc = 0x3c6964u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_3c6968:
    // 0x3c6968: 0x90450060  lbu         $a1, 0x60($v0)
    ctx->pc = 0x3c6968u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 96)));
label_3c696c:
    // 0x3c696c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x3c696cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3c6970:
    // 0x3c6970: 0x3c5082a  slt         $at, $fp, $a1
    ctx->pc = 0x3c6970u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3c6974:
    // 0x3c6974: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c6974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3c6978:
    // 0x3c6978: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3c6978u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3c697c:
    // 0x3c697c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3c6980:
    if (ctx->pc == 0x3C6980u) {
        ctx->pc = 0x3C6980u;
            // 0x3c6980: 0x2c21021  addu        $v0, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->pc = 0x3C6984u;
        goto label_3c6984;
    }
    ctx->pc = 0x3C697Cu;
    {
        const bool branch_taken_0x3c697c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C697Cu;
            // 0x3c6980: 0x2c21021  addu        $v0, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c697c) {
            ctx->pc = 0x3C6988u;
            goto label_3c6988;
        }
    }
    ctx->pc = 0x3C6984u;
label_3c6984:
    // 0x3c6984: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x3c6984u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_3c6988:
    // 0x3c6988: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x3c6988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3c698c:
    // 0x3c698c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c698cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c6990:
    // 0x3c6990: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x3c6990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3c6994:
    // 0x3c6994: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3c6994u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3c6998:
    // 0x3c6998: 0x86290000  lh          $t1, 0x0($s1)
    ctx->pc = 0x3c6998u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_3c699c:
    // 0x3c699c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3c699cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3c69a0:
    // 0x3c69a0: 0x833025  or          $a2, $a0, $v1
    ctx->pc = 0x3c69a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3c69a4:
    // 0x3c69a4: 0x86280002  lh          $t0, 0x2($s1)
    ctx->pc = 0x3c69a4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_3c69a8:
    // 0x3c69a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3c69a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c69ac:
    // 0x3c69ac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3c69acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c69b0:
    // 0x3c69b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c69b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c69b4:
    // 0x3c69b4: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3c69b4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c69b8:
    // 0x3c69b8: 0x0  nop
    ctx->pc = 0x3c69b8u;
    // NOP
label_3c69bc:
    // 0x3c69bc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3c69bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3c69c0:
    // 0x3c69c0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3c69c0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c69c4:
    // 0x3c69c4: 0x0  nop
    ctx->pc = 0x3c69c4u;
    // NOP
label_3c69c8:
    // 0x3c69c8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3c69c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3c69cc:
    // 0x3c69cc: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x3c69ccu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c69d0:
    // 0x3c69d0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x3c69d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3c69d4:
    // 0x3c69d4: 0xc6450064  lwc1        $f5, 0x64($s2)
    ctx->pc = 0x3c69d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3c69d8:
    // 0x3c69d8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3c69d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3c69dc:
    // 0x3c69dc: 0xc683000c  lwc1        $f3, 0xC($s4)
    ctx->pc = 0x3c69dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3c69e0:
    // 0x3c69e0: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x3c69e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c69e4:
    // 0x3c69e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c69e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3c69e8:
    // 0x3c69e8: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x3c69e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_3c69ec:
    // 0x3c69ec: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x3c69ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_3c69f0:
    // 0x3c69f0: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x3c69f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_3c69f4:
    // 0x3c69f4: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x3c69f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_3c69f8:
    // 0x3c69f8: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x3c69f8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3c69fc:
    // 0x3c69fc: 0x46020b80  add.s       $f14, $f1, $f2
    ctx->pc = 0x3c69fcu;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3c6a00:
    // 0x3c6a00: 0x46030341  sub.s       $f13, $f0, $f3
    ctx->pc = 0x3c6a00u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_3c6a04:
    // 0x3c6a04: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3c6a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3c6a08:
    // 0x3c6a08: 0xc0bc284  jal         func_2F0A10
label_3c6a0c:
    if (ctx->pc == 0x3C6A0Cu) {
        ctx->pc = 0x3C6A0Cu;
            // 0x3c6a0c: 0x460303c0  add.s       $f15, $f0, $f3 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->pc = 0x3C6A10u;
        goto label_3c6a10;
    }
    ctx->pc = 0x3C6A08u;
    SET_GPR_U32(ctx, 31, 0x3C6A10u);
    ctx->pc = 0x3C6A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6A08u;
            // 0x3c6a0c: 0x460303c0  add.s       $f15, $f0, $f3 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C6A10u; }
        if (ctx->pc != 0x3C6A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C6A10u; }
        if (ctx->pc != 0x3C6A10u) { return; }
    }
    ctx->pc = 0x3C6A10u;
label_3c6a10:
    // 0x3c6a10: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3c6a10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3c6a14:
    // 0x3c6a14: 0x1e60ffcf  bgtz        $s3, . + 4 + (-0x31 << 2)
label_3c6a18:
    if (ctx->pc == 0x3C6A18u) {
        ctx->pc = 0x3C6A18u;
            // 0x3c6a18: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->pc = 0x3C6A1Cu;
        goto label_3c6a1c;
    }
    ctx->pc = 0x3C6A14u;
    {
        const bool branch_taken_0x3c6a14 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x3C6A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6A14u;
            // 0x3c6a18: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6a14) {
            ctx->pc = 0x3C6954u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3c6954;
        }
    }
    ctx->pc = 0x3C6A1Cu;
label_3c6a1c:
    // 0x3c6a1c: 0x92a20060  lbu         $v0, 0x60($s5)
    ctx->pc = 0x3c6a1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 96)));
label_3c6a20:
    // 0x3c6a20: 0x3c2082a  slt         $at, $fp, $v0
    ctx->pc = 0x3c6a20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3c6a24:
    // 0x3c6a24: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3c6a28:
    if (ctx->pc == 0x3C6A28u) {
        ctx->pc = 0x3C6A2Cu;
        goto label_3c6a2c;
    }
    ctx->pc = 0x3C6A24u;
    {
        const bool branch_taken_0x3c6a24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6a24) {
            ctx->pc = 0x3C6A30u;
            goto label_3c6a30;
        }
    }
    ctx->pc = 0x3C6A2Cu;
label_3c6a2c:
    // 0x3c6a2c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x3c6a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_3c6a30:
    // 0x3c6a30: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x3c6a30u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c6a34:
    // 0x3c6a34: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x3c6a34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3c6a38:
    // 0x3c6a38: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3c6a38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3c6a3c:
    // 0x3c6a3c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3c6a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3c6a40:
    // 0x3c6a40: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x3c6a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3c6a44:
    // 0x3c6a44: 0x86290000  lh          $t1, 0x0($s1)
    ctx->pc = 0x3c6a44u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_3c6a48:
    // 0x3c6a48: 0x833025  or          $a2, $a0, $v1
    ctx->pc = 0x3c6a48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3c6a4c:
    // 0x3c6a4c: 0x86280002  lh          $t0, 0x2($s1)
    ctx->pc = 0x3c6a4cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_3c6a50:
    // 0x3c6a50: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3c6a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c6a54:
    // 0x3c6a54: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3c6a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c6a58:
    // 0x3c6a58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c6a58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c6a5c:
    // 0x3c6a5c: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x3c6a5cu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c6a60:
    // 0x3c6a60: 0x0  nop
    ctx->pc = 0x3c6a60u;
    // NOP
label_3c6a64:
    // 0x3c6a64: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3c6a64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3c6a68:
    // 0x3c6a68: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3c6a68u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c6a6c:
    // 0x3c6a6c: 0x0  nop
    ctx->pc = 0x3c6a6cu;
    // NOP
label_3c6a70:
    // 0x3c6a70: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3c6a70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3c6a74:
    // 0x3c6a74: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3c6a74u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c6a78:
    // 0x3c6a78: 0x0  nop
    ctx->pc = 0x3c6a78u;
    // NOP
label_3c6a7c:
    // 0x3c6a7c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3c6a7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3c6a80:
    // 0x3c6a80: 0xc6a50064  lwc1        $f5, 0x64($s5)
    ctx->pc = 0x3c6a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3c6a84:
    // 0x3c6a84: 0xc683000c  lwc1        $f3, 0xC($s4)
    ctx->pc = 0x3c6a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3c6a88:
    // 0x3c6a88: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x3c6a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c6a8c:
    // 0x3c6a8c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x3c6a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3c6a90:
    // 0x3c6a90: 0x0  nop
    ctx->pc = 0x3c6a90u;
    // NOP
label_3c6a94:
    // 0x3c6a94: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x3c6a94u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_3c6a98:
    // 0x3c6a98: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3c6a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3c6a9c:
    // 0x3c6a9c: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x3c6a9cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_3c6aa0:
    // 0x3c6aa0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x3c6aa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_3c6aa4:
    // 0x3c6aa4: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x3c6aa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_3c6aa8:
    // 0x3c6aa8: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x3c6aa8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3c6aac:
    // 0x3c6aac: 0x46001380  add.s       $f14, $f2, $f0
    ctx->pc = 0x3c6aacu;
    ctx->f[14] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3c6ab0:
    // 0x3c6ab0: 0x46030b41  sub.s       $f13, $f1, $f3
    ctx->pc = 0x3c6ab0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_3c6ab4:
    // 0x3c6ab4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3c6ab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3c6ab8:
    // 0x3c6ab8: 0xc0bc284  jal         func_2F0A10
label_3c6abc:
    if (ctx->pc == 0x3C6ABCu) {
        ctx->pc = 0x3C6ABCu;
            // 0x3c6abc: 0x46030bc0  add.s       $f15, $f1, $f3 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
        ctx->pc = 0x3C6AC0u;
        goto label_3c6ac0;
    }
    ctx->pc = 0x3C6AB8u;
    SET_GPR_U32(ctx, 31, 0x3C6AC0u);
    ctx->pc = 0x3C6ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6AB8u;
            // 0x3c6abc: 0x46030bc0  add.s       $f15, $f1, $f3 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C6AC0u; }
        if (ctx->pc != 0x3C6AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C6AC0u; }
        if (ctx->pc != 0x3C6AC0u) { return; }
    }
    ctx->pc = 0x3C6AC0u;
label_3c6ac0:
    // 0x3c6ac0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x3c6ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_3c6ac4:
    // 0x3c6ac4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3c6ac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c6ac8:
    // 0x3c6ac8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x3c6ac8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c6acc:
    // 0x3c6acc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3c6accu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3c6ad0:
    // 0x3c6ad0: 0x320f809  jalr        $t9
label_3c6ad4:
    if (ctx->pc == 0x3C6AD4u) {
        ctx->pc = 0x3C6AD8u;
        goto label_3c6ad8;
    }
    ctx->pc = 0x3C6AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C6AD8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C6AD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C6AD8u; }
            if (ctx->pc != 0x3C6AD8u) { return; }
        }
        }
    }
    ctx->pc = 0x3C6AD8u;
label_3c6ad8:
    // 0x3c6ad8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3c6ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3c6adc:
    // 0x3c6adc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3c6adcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c6ae0:
    // 0x3c6ae0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3c6ae0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c6ae4:
    // 0x3c6ae4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3c6ae4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c6ae8:
    // 0x3c6ae8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3c6ae8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c6aec:
    // 0x3c6aec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3c6aecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c6af0:
    // 0x3c6af0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3c6af0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c6af4:
    // 0x3c6af4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c6af4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c6af8:
    // 0x3c6af8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c6af8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c6afc:
    // 0x3c6afc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c6afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c6b00:
    // 0x3c6b00: 0x3e00008  jr          $ra
label_3c6b04:
    if (ctx->pc == 0x3C6B04u) {
        ctx->pc = 0x3C6B04u;
            // 0x3c6b04: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3C6B08u;
        goto label_3c6b08;
    }
    ctx->pc = 0x3C6B00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C6B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6B00u;
            // 0x3c6b04: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C6B08u;
label_3c6b08:
    // 0x3c6b08: 0x0  nop
    ctx->pc = 0x3c6b08u;
    // NOP
label_3c6b0c:
    // 0x3c6b0c: 0x0  nop
    ctx->pc = 0x3c6b0cu;
    // NOP
label_3c6b10:
    // 0x3c6b10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c6b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3c6b14:
    // 0x3c6b14: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3c6b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3c6b18:
    // 0x3c6b18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c6b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3c6b1c:
    // 0x3c6b1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c6b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c6b20:
    // 0x3c6b20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c6b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c6b24:
    // 0x3c6b24: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3c6b24u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3c6b28:
    // 0x3c6b28: 0x8c708a08  lw          $s0, -0x75F8($v1)
    ctx->pc = 0x3c6b28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3c6b2c:
    // 0x3c6b2c: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x3c6b2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3c6b30:
    // 0x3c6b30: 0x102000ef  beqz        $at, . + 4 + (0xEF << 2)
label_3c6b34:
    if (ctx->pc == 0x3C6B34u) {
        ctx->pc = 0x3C6B34u;
            // 0x3c6b34: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C6B38u;
        goto label_3c6b38;
    }
    ctx->pc = 0x3C6B30u;
    {
        const bool branch_taken_0x3c6b30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6B30u;
            // 0x3c6b34: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6b30) {
            ctx->pc = 0x3C6EF0u;
            goto label_3c6ef0;
        }
    }
    ctx->pc = 0x3C6B38u;
label_3c6b38:
    // 0x3c6b38: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3c6b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3c6b3c:
    // 0x3c6b3c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3c6b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_3c6b40:
    // 0x3c6b40: 0x24a58e70  addiu       $a1, $a1, -0x7190
    ctx->pc = 0x3c6b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938224));
label_3c6b44:
    // 0x3c6b44: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3c6b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3c6b48:
    // 0x3c6b48: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3c6b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3c6b4c:
    // 0x3c6b4c: 0x600008  jr          $v1
label_3c6b50:
    if (ctx->pc == 0x3C6B50u) {
        ctx->pc = 0x3C6B54u;
        goto label_3c6b54;
    }
    ctx->pc = 0x3C6B4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3C6B54u: goto label_3c6b54;
            case 0x3C6B70u: goto label_3c6b70;
            case 0x3C6C80u: goto label_3c6c80;
            case 0x3C6CE8u: goto label_3c6ce8;
            case 0x3C6EC4u: goto label_3c6ec4;
            case 0x3C6EDCu: goto label_3c6edc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3C6B54u;
label_3c6b54:
    // 0x3c6b54: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x3c6b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
label_3c6b58:
    // 0x3c6b58: 0xc073234  jal         func_1CC8D0
label_3c6b5c:
    if (ctx->pc == 0x3C6B5Cu) {
        ctx->pc = 0x3C6B5Cu;
            // 0x3c6b5c: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x3C6B60u;
        goto label_3c6b60;
    }
    ctx->pc = 0x3C6B58u;
    SET_GPR_U32(ctx, 31, 0x3C6B60u);
    ctx->pc = 0x3C6B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6B58u;
            // 0x3c6b5c: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C6B60u; }
        if (ctx->pc != 0x3C6B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C6B60u; }
        if (ctx->pc != 0x3C6B60u) { return; }
    }
    ctx->pc = 0x3C6B60u;
label_3c6b60:
    // 0x3c6b60: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3c6b60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c6b64:
    // 0x3c6b64: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3c6b64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3c6b68:
    // 0x3c6b68: 0x320f809  jalr        $t9
label_3c6b6c:
    if (ctx->pc == 0x3C6B6Cu) {
        ctx->pc = 0x3C6B6Cu;
            // 0x3c6b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C6B70u;
        goto label_3c6b70;
    }
    ctx->pc = 0x3C6B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C6B70u);
        ctx->pc = 0x3C6B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6B68u;
            // 0x3c6b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C6B70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C6B70u; }
            if (ctx->pc != 0x3C6B70u) { return; }
        }
        }
    }
    ctx->pc = 0x3C6B70u;
label_3c6b70:
    // 0x3c6b70: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c6b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3c6b74:
    // 0x3c6b74: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3c6b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3c6b78:
    // 0x3c6b78: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3c6b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_3c6b7c:
    // 0x3c6b7c: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x3c6b7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_3c6b80:
    // 0x3c6b80: 0x50200008  beql        $at, $zero, . + 4 + (0x8 << 2)
label_3c6b84:
    if (ctx->pc == 0x3C6B84u) {
        ctx->pc = 0x3C6B84u;
            // 0x3c6b84: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3C6B88u;
        goto label_3c6b88;
    }
    ctx->pc = 0x3C6B80u;
    {
        const bool branch_taken_0x3c6b80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6b80) {
            ctx->pc = 0x3C6B84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6B80u;
            // 0x3c6b84: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C6BA4u;
            goto label_3c6ba4;
        }
    }
    ctx->pc = 0x3C6B88u;
label_3c6b88:
    // 0x3c6b88: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3c6b88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c6b8c:
    // 0x3c6b8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c6b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c6b90:
    // 0x3c6b90: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c6b90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c6b94:
    // 0x3c6b94: 0x320f809  jalr        $t9
label_3c6b98:
    if (ctx->pc == 0x3C6B98u) {
        ctx->pc = 0x3C6B98u;
            // 0x3c6b98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C6B9Cu;
        goto label_3c6b9c;
    }
    ctx->pc = 0x3C6B94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C6B9Cu);
        ctx->pc = 0x3C6B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6B94u;
            // 0x3c6b98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C6B9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C6B9Cu; }
            if (ctx->pc != 0x3C6B9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3C6B9Cu;
label_3c6b9c:
    // 0x3c6b9c: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_3c6ba0:
    if (ctx->pc == 0x3C6BA0u) {
        ctx->pc = 0x3C6BA0u;
            // 0x3c6ba0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3C6BA4u;
        goto label_3c6ba4;
    }
    ctx->pc = 0x3C6B9Cu;
    {
        const bool branch_taken_0x3c6b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6B9Cu;
            // 0x3c6ba0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6b9c) {
            ctx->pc = 0x3C6EF4u;
            goto label_3c6ef4;
        }
    }
    ctx->pc = 0x3C6BA4u;
label_3c6ba4:
    // 0x3c6ba4: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x3c6ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c6ba8:
    // 0x3c6ba8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c6ba8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3c6bac:
    // 0x3c6bac: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x3c6bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
label_3c6bb0:
    // 0x3c6bb0: 0xc6230070  lwc1        $f3, 0x70($s1)
    ctx->pc = 0x3c6bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3c6bb4:
    // 0x3c6bb4: 0xc6220054  lwc1        $f2, 0x54($s1)
    ctx->pc = 0x3c6bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c6bb8:
    // 0x3c6bb8: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x3c6bb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c6bbc:
    // 0x3c6bbc: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
label_3c6bc0:
    if (ctx->pc == 0x3C6BC0u) {
        ctx->pc = 0x3C6BC0u;
            // 0x3c6bc0: 0x3c0341f0  lui         $v1, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
        ctx->pc = 0x3C6BC4u;
        goto label_3c6bc4;
    }
    ctx->pc = 0x3C6BBCu;
    {
        const bool branch_taken_0x3c6bbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c6bbc) {
            ctx->pc = 0x3C6BC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6BBCu;
            // 0x3c6bc0: 0x3c0341f0  lui         $v1, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C6BECu;
            goto label_3c6bec;
        }
    }
    ctx->pc = 0x3C6BC4u;
label_3c6bc4:
    // 0x3c6bc4: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x3c6bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_3c6bc8:
    // 0x3c6bc8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3c6bc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c6bcc:
    // 0x3c6bcc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3c6bccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3c6bd0:
    // 0x3c6bd0: 0x320f809  jalr        $t9
label_3c6bd4:
    if (ctx->pc == 0x3C6BD4u) {
        ctx->pc = 0x3C6BD4u;
            // 0x3c6bd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C6BD8u;
        goto label_3c6bd8;
    }
    ctx->pc = 0x3C6BD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C6BD8u);
        ctx->pc = 0x3C6BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6BD0u;
            // 0x3c6bd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C6BD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C6BD8u; }
            if (ctx->pc != 0x3C6BD8u) { return; }
        }
        }
    }
    ctx->pc = 0x3C6BD8u;
label_3c6bd8:
    // 0x3c6bd8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x3c6bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_3c6bdc:
    // 0x3c6bdc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3c6bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3c6be0:
    // 0x3c6be0: 0xae240064  sw          $a0, 0x64($s1)
    ctx->pc = 0x3c6be0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 4));
label_3c6be4:
    // 0x3c6be4: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_3c6be8:
    if (ctx->pc == 0x3C6BE8u) {
        ctx->pc = 0x3C6BE8u;
            // 0x3c6be8: 0xa2230060  sb          $v1, 0x60($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 96), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3C6BECu;
        goto label_3c6bec;
    }
    ctx->pc = 0x3C6BE4u;
    {
        const bool branch_taken_0x3c6be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6BE4u;
            // 0x3c6be8: 0xa2230060  sb          $v1, 0x60($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 96), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6be4) {
            ctx->pc = 0x3C6EF0u;
            goto label_3c6ef0;
        }
    }
    ctx->pc = 0x3C6BECu;
label_3c6bec:
    // 0x3c6bec: 0x3c043f40  lui         $a0, 0x3F40
    ctx->pc = 0x3c6becu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16192 << 16));
label_3c6bf0:
    // 0x3c6bf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c6bf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c6bf4:
    // 0x3c6bf4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x3c6bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_3c6bf8:
    // 0x3c6bf8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3c6bf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_3c6bfc:
    // 0x3c6bfc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3c6bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3c6c00:
    // 0x3c6c00: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3c6c00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c6c04:
    // 0x3c6c04: 0x0  nop
    ctx->pc = 0x3c6c04u;
    // NOP
label_3c6c08:
    // 0x3c6c08: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3c6c08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3c6c0c:
    // 0x3c6c0c: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x3c6c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_3c6c10:
    // 0x3c6c10: 0x46030043  div.s       $f1, $f0, $f3
    ctx->pc = 0x3c6c10u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[3];
label_3c6c14:
    // 0x3c6c14: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3c6c14u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c6c18:
    // 0x3c6c18: 0x0  nop
    ctx->pc = 0x3c6c18u;
    // NOP
label_3c6c1c:
    // 0x3c6c1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c6c1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3c6c20:
    // 0x3c6c20: 0xe6200064  swc1        $f0, 0x64($s1)
    ctx->pc = 0x3c6c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
label_3c6c24:
    // 0x3c6c24: 0xc6220054  lwc1        $f2, 0x54($s1)
    ctx->pc = 0x3c6c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c6c28:
    // 0x3c6c28: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x3c6c28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3c6c2c:
    // 0x3c6c2c: 0xc6210070  lwc1        $f1, 0x70($s1)
    ctx->pc = 0x3c6c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c6c30:
    // 0x3c6c30: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3c6c30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3c6c34:
    // 0x3c6c34: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3c6c34u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_3c6c38:
    // 0x3c6c38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c6c38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c6c3c:
    // 0x3c6c3c: 0x0  nop
    ctx->pc = 0x3c6c3cu;
    // NOP
label_3c6c40:
    // 0x3c6c40: 0x0  nop
    ctx->pc = 0x3c6c40u;
    // NOP
label_3c6c44:
    // 0x3c6c44: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c6c44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c6c48:
    // 0x3c6c48: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3c6c4c:
    if (ctx->pc == 0x3C6C4Cu) {
        ctx->pc = 0x3C6C4Cu;
            // 0x3c6c4c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3C6C50u;
        goto label_3c6c50;
    }
    ctx->pc = 0x3C6C48u;
    {
        const bool branch_taken_0x3c6c48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c6c48) {
            ctx->pc = 0x3C6C4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6C48u;
            // 0x3c6c4c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C6C60u;
            goto label_3c6c60;
        }
    }
    ctx->pc = 0x3C6C50u;
label_3c6c50:
    // 0x3c6c50: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c6c50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c6c54:
    // 0x3c6c54: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3c6c54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3c6c58:
    // 0x3c6c58: 0x10000007  b           . + 4 + (0x7 << 2)
label_3c6c5c:
    if (ctx->pc == 0x3C6C5Cu) {
        ctx->pc = 0x3C6C5Cu;
            // 0x3c6c5c: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3C6C60u;
        goto label_3c6c60;
    }
    ctx->pc = 0x3C6C58u;
    {
        const bool branch_taken_0x3c6c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6C58u;
            // 0x3c6c5c: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6c58) {
            ctx->pc = 0x3C6C78u;
            goto label_3c6c78;
        }
    }
    ctx->pc = 0x3C6C60u;
label_3c6c60:
    // 0x3c6c60: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3c6c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3c6c64:
    // 0x3c6c64: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c6c64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c6c68:
    // 0x3c6c68: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3c6c68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3c6c6c:
    // 0x3c6c6c: 0x0  nop
    ctx->pc = 0x3c6c6cu;
    // NOP
label_3c6c70:
    // 0x3c6c70: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3c6c70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3c6c74:
    // 0x3c6c74: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3c6c74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3c6c78:
    // 0x3c6c78: 0x1000009d  b           . + 4 + (0x9D << 2)
label_3c6c7c:
    if (ctx->pc == 0x3C6C7Cu) {
        ctx->pc = 0x3C6C7Cu;
            // 0x3c6c7c: 0xa2240060  sb          $a0, 0x60($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 96), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x3C6C80u;
        goto label_3c6c80;
    }
    ctx->pc = 0x3C6C78u;
    {
        const bool branch_taken_0x3c6c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6C78u;
            // 0x3c6c7c: 0xa2240060  sb          $a0, 0x60($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 96), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6c78) {
            ctx->pc = 0x3C6EF0u;
            goto label_3c6ef0;
        }
    }
    ctx->pc = 0x3C6C80u;
label_3c6c80:
    // 0x3c6c80: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c6c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3c6c84:
    // 0x3c6c84: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3c6c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3c6c88:
    // 0x3c6c88: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3c6c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_3c6c8c:
    // 0x3c6c8c: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x3c6c8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_3c6c90:
    // 0x3c6c90: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_3c6c94:
    if (ctx->pc == 0x3C6C94u) {
        ctx->pc = 0x3C6C94u;
            // 0x3c6c94: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3C6C98u;
        goto label_3c6c98;
    }
    ctx->pc = 0x3C6C90u;
    {
        const bool branch_taken_0x3c6c90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6c90) {
            ctx->pc = 0x3C6C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6C90u;
            // 0x3c6c94: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C6CB0u;
            goto label_3c6cb0;
        }
    }
    ctx->pc = 0x3C6C98u;
label_3c6c98:
    // 0x3c6c98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c6c98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c6c9c:
    // 0x3c6c9c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c6c9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c6ca0:
    // 0x3c6ca0: 0x320f809  jalr        $t9
label_3c6ca4:
    if (ctx->pc == 0x3C6CA4u) {
        ctx->pc = 0x3C6CA4u;
            // 0x3c6ca4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C6CA8u;
        goto label_3c6ca8;
    }
    ctx->pc = 0x3C6CA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C6CA8u);
        ctx->pc = 0x3C6CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6CA0u;
            // 0x3c6ca4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C6CA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C6CA8u; }
            if (ctx->pc != 0x3C6CA8u) { return; }
        }
        }
    }
    ctx->pc = 0x3C6CA8u;
label_3c6ca8:
    // 0x3c6ca8: 0x10000091  b           . + 4 + (0x91 << 2)
label_3c6cac:
    if (ctx->pc == 0x3C6CACu) {
        ctx->pc = 0x3C6CB0u;
        goto label_3c6cb0;
    }
    ctx->pc = 0x3C6CA8u;
    {
        const bool branch_taken_0x3c6ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6ca8) {
            ctx->pc = 0x3C6EF0u;
            goto label_3c6ef0;
        }
    }
    ctx->pc = 0x3C6CB0u;
label_3c6cb0:
    // 0x3c6cb0: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x3c6cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c6cb4:
    // 0x3c6cb4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x3c6cb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3c6cb8:
    // 0x3c6cb8: 0xe6210054  swc1        $f1, 0x54($s1)
    ctx->pc = 0x3c6cb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
label_3c6cbc:
    // 0x3c6cbc: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x3c6cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c6cc0:
    // 0x3c6cc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6cc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c6cc4:
    // 0x3c6cc4: 0x4501008a  bc1t        . + 4 + (0x8A << 2)
label_3c6cc8:
    if (ctx->pc == 0x3C6CC8u) {
        ctx->pc = 0x3C6CCCu;
        goto label_3c6ccc;
    }
    ctx->pc = 0x3C6CC4u;
    {
        const bool branch_taken_0x3c6cc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c6cc4) {
            ctx->pc = 0x3C6EF0u;
            goto label_3c6ef0;
        }
    }
    ctx->pc = 0x3C6CCCu;
label_3c6ccc:
    // 0x3c6ccc: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x3c6cccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_3c6cd0:
    // 0x3c6cd0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c6cd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c6cd4:
    // 0x3c6cd4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3c6cd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3c6cd8:
    // 0x3c6cd8: 0x320f809  jalr        $t9
label_3c6cdc:
    if (ctx->pc == 0x3C6CDCu) {
        ctx->pc = 0x3C6CE0u;
        goto label_3c6ce0;
    }
    ctx->pc = 0x3C6CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C6CE0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C6CE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C6CE0u; }
            if (ctx->pc != 0x3C6CE0u) { return; }
        }
        }
    }
    ctx->pc = 0x3C6CE0u;
label_3c6ce0:
    // 0x3c6ce0: 0x10000083  b           . + 4 + (0x83 << 2)
label_3c6ce4:
    if (ctx->pc == 0x3C6CE4u) {
        ctx->pc = 0x3C6CE8u;
        goto label_3c6ce8;
    }
    ctx->pc = 0x3C6CE0u;
    {
        const bool branch_taken_0x3c6ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6ce0) {
            ctx->pc = 0x3C6EF0u;
            goto label_3c6ef0;
        }
    }
    ctx->pc = 0x3C6CE8u;
label_3c6ce8:
    // 0x3c6ce8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c6ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3c6cec:
    // 0x3c6cec: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3c6cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3c6cf0:
    // 0x3c6cf0: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3c6cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_3c6cf4:
    // 0x3c6cf4: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x3c6cf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_3c6cf8:
    // 0x3c6cf8: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_3c6cfc:
    if (ctx->pc == 0x3C6CFCu) {
        ctx->pc = 0x3C6CFCu;
            // 0x3c6cfc: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3C6D00u;
        goto label_3c6d00;
    }
    ctx->pc = 0x3C6CF8u;
    {
        const bool branch_taken_0x3c6cf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6cf8) {
            ctx->pc = 0x3C6CFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6CF8u;
            // 0x3c6cfc: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C6D18u;
            goto label_3c6d18;
        }
    }
    ctx->pc = 0x3C6D00u;
label_3c6d00:
    // 0x3c6d00: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c6d00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c6d04:
    // 0x3c6d04: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c6d04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c6d08:
    // 0x3c6d08: 0x320f809  jalr        $t9
label_3c6d0c:
    if (ctx->pc == 0x3C6D0Cu) {
        ctx->pc = 0x3C6D0Cu;
            // 0x3c6d0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C6D10u;
        goto label_3c6d10;
    }
    ctx->pc = 0x3C6D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C6D10u);
        ctx->pc = 0x3C6D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6D08u;
            // 0x3c6d0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C6D10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C6D10u; }
            if (ctx->pc != 0x3C6D10u) { return; }
        }
        }
    }
    ctx->pc = 0x3C6D10u;
label_3c6d10:
    // 0x3c6d10: 0x10000077  b           . + 4 + (0x77 << 2)
label_3c6d14:
    if (ctx->pc == 0x3C6D14u) {
        ctx->pc = 0x3C6D18u;
        goto label_3c6d18;
    }
    ctx->pc = 0x3C6D10u;
    {
        const bool branch_taken_0x3c6d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6d10) {
            ctx->pc = 0x3C6EF0u;
            goto label_3c6ef0;
        }
    }
    ctx->pc = 0x3C6D18u;
label_3c6d18:
    // 0x3c6d18: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x3c6d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c6d1c:
    // 0x3c6d1c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x3c6d1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3c6d20:
    // 0x3c6d20: 0xe6210054  swc1        $f1, 0x54($s1)
    ctx->pc = 0x3c6d20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
label_3c6d24:
    // 0x3c6d24: 0xc6200078  lwc1        $f0, 0x78($s1)
    ctx->pc = 0x3c6d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c6d28:
    // 0x3c6d28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c6d28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c6d2c:
    // 0x3c6d2c: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_3c6d30:
    if (ctx->pc == 0x3C6D30u) {
        ctx->pc = 0x3C6D30u;
            // 0x3c6d30: 0x8625005e  lh          $a1, 0x5E($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 94)));
        ctx->pc = 0x3C6D34u;
        goto label_3c6d34;
    }
    ctx->pc = 0x3C6D2Cu;
    {
        const bool branch_taken_0x3c6d2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c6d2c) {
            ctx->pc = 0x3C6D30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6D2Cu;
            // 0x3c6d30: 0x8625005e  lh          $a1, 0x5E($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 94)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C6D4Cu;
            goto label_3c6d4c;
        }
    }
    ctx->pc = 0x3C6D34u;
label_3c6d34:
    // 0x3c6d34: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x3c6d34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_3c6d38:
    // 0x3c6d38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c6d38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c6d3c:
    // 0x3c6d3c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c6d3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c6d40:
    // 0x3c6d40: 0x320f809  jalr        $t9
label_3c6d44:
    if (ctx->pc == 0x3C6D44u) {
        ctx->pc = 0x3C6D44u;
            // 0x3c6d44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C6D48u;
        goto label_3c6d48;
    }
    ctx->pc = 0x3C6D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C6D48u);
        ctx->pc = 0x3C6D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6D40u;
            // 0x3c6d44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C6D48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C6D48u; }
            if (ctx->pc != 0x3C6D48u) { return; }
        }
        }
    }
    ctx->pc = 0x3C6D48u;
label_3c6d48:
    // 0x3c6d48: 0x8625005e  lh          $a1, 0x5E($s1)
    ctx->pc = 0x3c6d48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 94)));
label_3c6d4c:
    // 0x3c6d4c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3c6d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3c6d50:
    // 0x3c6d50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c6d50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c6d54:
    // 0x3c6d54: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x3c6d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_3c6d58:
    // 0x3c6d58: 0xc6220054  lwc1        $f2, 0x54($s1)
    ctx->pc = 0x3c6d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c6d5c:
    // 0x3c6d5c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3c6d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3c6d60:
    // 0x3c6d60: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x3c6d60u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3c6d64:
    // 0x3c6d64: 0x0  nop
    ctx->pc = 0x3c6d64u;
    // NOP
label_3c6d68:
    // 0x3c6d68: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3c6d68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3c6d6c:
    // 0x3c6d6c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3c6d6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3c6d70:
    // 0x3c6d70: 0xc6200078  lwc1        $f0, 0x78($s1)
    ctx->pc = 0x3c6d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c6d74:
    // 0x3c6d74: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x3c6d74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3c6d78:
    // 0x3c6d78: 0x0  nop
    ctx->pc = 0x3c6d78u;
    // NOP
label_3c6d7c:
    // 0x3c6d7c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x3c6d7cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_3c6d80:
    // 0x3c6d80: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c6d80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c6d84:
    // 0x3c6d84: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3c6d84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3c6d88:
    // 0x3c6d88: 0x0  nop
    ctx->pc = 0x3c6d88u;
    // NOP
label_3c6d8c:
    // 0x3c6d8c: 0xa625005c  sh          $a1, 0x5C($s1)
    ctx->pc = 0x3c6d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 92), (uint16_t)GPR_U32(ctx, 5));
label_3c6d90:
    // 0x3c6d90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c6d90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c6d94:
    // 0x3c6d94: 0xc6240054  lwc1        $f4, 0x54($s1)
    ctx->pc = 0x3c6d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3c6d98:
    // 0x3c6d98: 0xc6220078  lwc1        $f2, 0x78($s1)
    ctx->pc = 0x3c6d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c6d9c:
    // 0x3c6d9c: 0x46022083  div.s       $f2, $f4, $f2
    ctx->pc = 0x3c6d9cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[2] = ctx->f[4] / ctx->f[2];
label_3c6da0:
    // 0x3c6da0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3c6da0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3c6da4:
    // 0x3c6da4: 0xe6210064  swc1        $f1, 0x64($s1)
    ctx->pc = 0x3c6da4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
label_3c6da8:
    // 0x3c6da8: 0xc6220054  lwc1        $f2, 0x54($s1)
    ctx->pc = 0x3c6da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c6dac:
    // 0x3c6dac: 0xc6210078  lwc1        $f1, 0x78($s1)
    ctx->pc = 0x3c6dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c6db0:
    // 0x3c6db0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3c6db0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3c6db4:
    // 0x3c6db4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3c6db4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_3c6db8:
    // 0x3c6db8: 0x0  nop
    ctx->pc = 0x3c6db8u;
    // NOP
label_3c6dbc:
    // 0x3c6dbc: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x3c6dbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_3c6dc0:
    // 0x3c6dc0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c6dc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c6dc4:
    // 0x3c6dc4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3c6dc8:
    if (ctx->pc == 0x3C6DC8u) {
        ctx->pc = 0x3C6DC8u;
            // 0x3c6dc8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3C6DCCu;
        goto label_3c6dcc;
    }
    ctx->pc = 0x3C6DC4u;
    {
        const bool branch_taken_0x3c6dc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c6dc4) {
            ctx->pc = 0x3C6DC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6DC4u;
            // 0x3c6dc8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C6DDCu;
            goto label_3c6ddc;
        }
    }
    ctx->pc = 0x3C6DCCu;
label_3c6dcc:
    // 0x3c6dcc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c6dccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c6dd0:
    // 0x3c6dd0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3c6dd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3c6dd4:
    // 0x3c6dd4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3c6dd8:
    if (ctx->pc == 0x3C6DD8u) {
        ctx->pc = 0x3C6DD8u;
            // 0x3c6dd8: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3C6DDCu;
        goto label_3c6ddc;
    }
    ctx->pc = 0x3C6DD4u;
    {
        const bool branch_taken_0x3c6dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6DD4u;
            // 0x3c6dd8: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6dd4) {
            ctx->pc = 0x3C6DF4u;
            goto label_3c6df4;
        }
    }
    ctx->pc = 0x3C6DDCu;
label_3c6ddc:
    // 0x3c6ddc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3c6ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3c6de0:
    // 0x3c6de0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c6de0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c6de4:
    // 0x3c6de4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3c6de4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3c6de8:
    // 0x3c6de8: 0x0  nop
    ctx->pc = 0x3c6de8u;
    // NOP
label_3c6dec:
    // 0x3c6dec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3c6decu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3c6df0:
    // 0x3c6df0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3c6df0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3c6df4:
    // 0x3c6df4: 0xa2240060  sb          $a0, 0x60($s1)
    ctx->pc = 0x3c6df4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 96), (uint8_t)GPR_U32(ctx, 4));
label_3c6df8:
    // 0x3c6df8: 0x3c0342fe  lui         $v1, 0x42FE
    ctx->pc = 0x3c6df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17150 << 16));
label_3c6dfc:
    // 0x3c6dfc: 0xc6220054  lwc1        $f2, 0x54($s1)
    ctx->pc = 0x3c6dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c6e00:
    // 0x3c6e00: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3c6e00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3c6e04:
    // 0x3c6e04: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3c6e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3c6e08:
    // 0x3c6e08: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3c6e08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3c6e0c:
    // 0x3c6e0c: 0xc6210078  lwc1        $f1, 0x78($s1)
    ctx->pc = 0x3c6e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c6e10:
    // 0x3c6e10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c6e10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c6e14:
    // 0x3c6e14: 0x0  nop
    ctx->pc = 0x3c6e14u;
    // NOP
label_3c6e18:
    // 0x3c6e18: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3c6e18u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_3c6e1c:
    // 0x3c6e1c: 0x0  nop
    ctx->pc = 0x3c6e1cu;
    // NOP
label_3c6e20:
    // 0x3c6e20: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x3c6e20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_3c6e24:
    // 0x3c6e24: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c6e24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c6e28:
    // 0x3c6e28: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3c6e2c:
    if (ctx->pc == 0x3C6E2Cu) {
        ctx->pc = 0x3C6E2Cu;
            // 0x3c6e2c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3C6E30u;
        goto label_3c6e30;
    }
    ctx->pc = 0x3C6E28u;
    {
        const bool branch_taken_0x3c6e28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c6e28) {
            ctx->pc = 0x3C6E2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6E28u;
            // 0x3c6e2c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C6E40u;
            goto label_3c6e40;
        }
    }
    ctx->pc = 0x3C6E30u;
label_3c6e30:
    // 0x3c6e30: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c6e30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c6e34:
    // 0x3c6e34: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3c6e34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3c6e38:
    // 0x3c6e38: 0x10000007  b           . + 4 + (0x7 << 2)
label_3c6e3c:
    if (ctx->pc == 0x3C6E3Cu) {
        ctx->pc = 0x3C6E3Cu;
            // 0x3c6e3c: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3C6E40u;
        goto label_3c6e40;
    }
    ctx->pc = 0x3C6E38u;
    {
        const bool branch_taken_0x3c6e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6E38u;
            // 0x3c6e3c: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6e38) {
            ctx->pc = 0x3C6E58u;
            goto label_3c6e58;
        }
    }
    ctx->pc = 0x3C6E40u;
label_3c6e40:
    // 0x3c6e40: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3c6e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3c6e44:
    // 0x3c6e44: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c6e44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c6e48:
    // 0x3c6e48: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3c6e48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3c6e4c:
    // 0x3c6e4c: 0x0  nop
    ctx->pc = 0x3c6e4cu;
    // NOP
label_3c6e50:
    // 0x3c6e50: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3c6e50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3c6e54:
    // 0x3c6e54: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3c6e54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3c6e58:
    // 0x3c6e58: 0xa2240061  sb          $a0, 0x61($s1)
    ctx->pc = 0x3c6e58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 4));
label_3c6e5c:
    // 0x3c6e5c: 0x3c0342fe  lui         $v1, 0x42FE
    ctx->pc = 0x3c6e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17150 << 16));
label_3c6e60:
    // 0x3c6e60: 0xc6220054  lwc1        $f2, 0x54($s1)
    ctx->pc = 0x3c6e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c6e64:
    // 0x3c6e64: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3c6e64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3c6e68:
    // 0x3c6e68: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3c6e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3c6e6c:
    // 0x3c6e6c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3c6e6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3c6e70:
    // 0x3c6e70: 0xc6210078  lwc1        $f1, 0x78($s1)
    ctx->pc = 0x3c6e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c6e74:
    // 0x3c6e74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c6e74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c6e78:
    // 0x3c6e78: 0x0  nop
    ctx->pc = 0x3c6e78u;
    // NOP
label_3c6e7c:
    // 0x3c6e7c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3c6e7cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_3c6e80:
    // 0x3c6e80: 0x0  nop
    ctx->pc = 0x3c6e80u;
    // NOP
label_3c6e84:
    // 0x3c6e84: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x3c6e84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_3c6e88:
    // 0x3c6e88: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c6e88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c6e8c:
    // 0x3c6e8c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3c6e90:
    if (ctx->pc == 0x3C6E90u) {
        ctx->pc = 0x3C6E90u;
            // 0x3c6e90: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3C6E94u;
        goto label_3c6e94;
    }
    ctx->pc = 0x3C6E8Cu;
    {
        const bool branch_taken_0x3c6e8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c6e8c) {
            ctx->pc = 0x3C6E90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6E8Cu;
            // 0x3c6e90: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C6EA4u;
            goto label_3c6ea4;
        }
    }
    ctx->pc = 0x3C6E94u;
label_3c6e94:
    // 0x3c6e94: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c6e94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c6e98:
    // 0x3c6e98: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3c6e98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3c6e9c:
    // 0x3c6e9c: 0x10000007  b           . + 4 + (0x7 << 2)
label_3c6ea0:
    if (ctx->pc == 0x3C6EA0u) {
        ctx->pc = 0x3C6EA0u;
            // 0x3c6ea0: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3C6EA4u;
        goto label_3c6ea4;
    }
    ctx->pc = 0x3C6E9Cu;
    {
        const bool branch_taken_0x3c6e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6E9Cu;
            // 0x3c6ea0: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6e9c) {
            ctx->pc = 0x3C6EBCu;
            goto label_3c6ebc;
        }
    }
    ctx->pc = 0x3C6EA4u;
label_3c6ea4:
    // 0x3c6ea4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3c6ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3c6ea8:
    // 0x3c6ea8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c6ea8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c6eac:
    // 0x3c6eac: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3c6eacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3c6eb0:
    // 0x3c6eb0: 0x0  nop
    ctx->pc = 0x3c6eb0u;
    // NOP
label_3c6eb4:
    // 0x3c6eb4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3c6eb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3c6eb8:
    // 0x3c6eb8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3c6eb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3c6ebc:
    // 0x3c6ebc: 0x1000000c  b           . + 4 + (0xC << 2)
label_3c6ec0:
    if (ctx->pc == 0x3C6EC0u) {
        ctx->pc = 0x3C6EC0u;
            // 0x3c6ec0: 0xa2240062  sb          $a0, 0x62($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 98), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x3C6EC4u;
        goto label_3c6ec4;
    }
    ctx->pc = 0x3C6EBCu;
    {
        const bool branch_taken_0x3c6ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6EBCu;
            // 0x3c6ec0: 0xa2240062  sb          $a0, 0x62($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 98), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6ebc) {
            ctx->pc = 0x3C6EF0u;
            goto label_3c6ef0;
        }
    }
    ctx->pc = 0x3C6EC4u;
label_3c6ec4:
    // 0x3c6ec4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c6ec4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c6ec8:
    // 0x3c6ec8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3c6ec8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3c6ecc:
    // 0x3c6ecc: 0x320f809  jalr        $t9
label_3c6ed0:
    if (ctx->pc == 0x3C6ED0u) {
        ctx->pc = 0x3C6ED4u;
        goto label_3c6ed4;
    }
    ctx->pc = 0x3C6ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C6ED4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C6ED4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C6ED4u; }
            if (ctx->pc != 0x3C6ED4u) { return; }
        }
        }
    }
    ctx->pc = 0x3C6ED4u;
label_3c6ed4:
    // 0x3c6ed4: 0x10000006  b           . + 4 + (0x6 << 2)
label_3c6ed8:
    if (ctx->pc == 0x3C6ED8u) {
        ctx->pc = 0x3C6EDCu;
        goto label_3c6edc;
    }
    ctx->pc = 0x3C6ED4u;
    {
        const bool branch_taken_0x3c6ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6ed4) {
            ctx->pc = 0x3C6EF0u;
            goto label_3c6ef0;
        }
    }
    ctx->pc = 0x3C6EDCu;
label_3c6edc:
    // 0x3c6edc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3c6edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3c6ee0:
    // 0x3c6ee0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c6ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c6ee4:
    // 0x3c6ee4: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3c6ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3c6ee8:
    // 0x3c6ee8: 0xc057b7c  jal         func_15EDF0
label_3c6eec:
    if (ctx->pc == 0x3C6EECu) {
        ctx->pc = 0x3C6EECu;
            // 0x3c6eec: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3C6EF0u;
        goto label_3c6ef0;
    }
    ctx->pc = 0x3C6EE8u;
    SET_GPR_U32(ctx, 31, 0x3C6EF0u);
    ctx->pc = 0x3C6EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6EE8u;
            // 0x3c6eec: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C6EF0u; }
        if (ctx->pc != 0x3C6EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C6EF0u; }
        if (ctx->pc != 0x3C6EF0u) { return; }
    }
    ctx->pc = 0x3C6EF0u;
label_3c6ef0:
    // 0x3c6ef0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c6ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3c6ef4:
    // 0x3c6ef4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c6ef4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c6ef8:
    // 0x3c6ef8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c6ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c6efc:
    // 0x3c6efc: 0x3e00008  jr          $ra
label_3c6f00:
    if (ctx->pc == 0x3C6F00u) {
        ctx->pc = 0x3C6F00u;
            // 0x3c6f00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3C6F04u;
        goto label_3c6f04;
    }
    ctx->pc = 0x3C6EFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C6F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6EFCu;
            // 0x3c6f00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C6F04u;
label_3c6f04:
    // 0x3c6f04: 0x0  nop
    ctx->pc = 0x3c6f04u;
    // NOP
label_3c6f08:
    // 0x3c6f08: 0x0  nop
    ctx->pc = 0x3c6f08u;
    // NOP
label_3c6f0c:
    // 0x3c6f0c: 0x0  nop
    ctx->pc = 0x3c6f0cu;
    // NOP
label_3c6f10:
    // 0x3c6f10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c6f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3c6f14:
    // 0x3c6f14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c6f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3c6f18:
    // 0x3c6f18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c6f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c6f1c:
    // 0x3c6f1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c6f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c6f20:
    // 0x3c6f20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c6f20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c6f24:
    // 0x3c6f24: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_3c6f28:
    if (ctx->pc == 0x3C6F28u) {
        ctx->pc = 0x3C6F28u;
            // 0x3c6f28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C6F2Cu;
        goto label_3c6f2c;
    }
    ctx->pc = 0x3C6F24u;
    {
        const bool branch_taken_0x3c6f24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6F24u;
            // 0x3c6f28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6f24) {
            ctx->pc = 0x3C6F58u;
            goto label_3c6f58;
        }
    }
    ctx->pc = 0x3C6F2Cu;
label_3c6f2c:
    // 0x3c6f2c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3c6f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3c6f30:
    // 0x3c6f30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c6f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c6f34:
    // 0x3c6f34: 0x24428db0  addiu       $v0, $v0, -0x7250
    ctx->pc = 0x3c6f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938032));
label_3c6f38:
    // 0x3c6f38: 0xc0ee744  jal         func_3B9D10
label_3c6f3c:
    if (ctx->pc == 0x3C6F3Cu) {
        ctx->pc = 0x3C6F3Cu;
            // 0x3c6f3c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3C6F40u;
        goto label_3c6f40;
    }
    ctx->pc = 0x3C6F38u;
    SET_GPR_U32(ctx, 31, 0x3C6F40u);
    ctx->pc = 0x3C6F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6F38u;
            // 0x3c6f3c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D10u;
    if (runtime->hasFunction(0x3B9D10u)) {
        auto targetFn = runtime->lookupFunction(0x3B9D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C6F40u; }
        if (ctx->pc != 0x3C6F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9D10_0x3b9d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C6F40u; }
        if (ctx->pc != 0x3C6F40u) { return; }
    }
    ctx->pc = 0x3C6F40u;
label_3c6f40:
    // 0x3c6f40: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3c6f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3c6f44:
    // 0x3c6f44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3c6f44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3c6f48:
    // 0x3c6f48: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3c6f4c:
    if (ctx->pc == 0x3C6F4Cu) {
        ctx->pc = 0x3C6F4Cu;
            // 0x3c6f4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C6F50u;
        goto label_3c6f50;
    }
    ctx->pc = 0x3C6F48u;
    {
        const bool branch_taken_0x3c6f48 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3c6f48) {
            ctx->pc = 0x3C6F4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6F48u;
            // 0x3c6f4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C6F5Cu;
            goto label_3c6f5c;
        }
    }
    ctx->pc = 0x3C6F50u;
label_3c6f50:
    // 0x3c6f50: 0xc0400a8  jal         func_1002A0
label_3c6f54:
    if (ctx->pc == 0x3C6F54u) {
        ctx->pc = 0x3C6F54u;
            // 0x3c6f54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C6F58u;
        goto label_3c6f58;
    }
    ctx->pc = 0x3C6F50u;
    SET_GPR_U32(ctx, 31, 0x3C6F58u);
    ctx->pc = 0x3C6F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6F50u;
            // 0x3c6f54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C6F58u; }
        if (ctx->pc != 0x3C6F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C6F58u; }
        if (ctx->pc != 0x3C6F58u) { return; }
    }
    ctx->pc = 0x3C6F58u;
label_3c6f58:
    // 0x3c6f58: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3c6f58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c6f5c:
    // 0x3c6f5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c6f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3c6f60:
    // 0x3c6f60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c6f60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c6f64:
    // 0x3c6f64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c6f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c6f68:
    // 0x3c6f68: 0x3e00008  jr          $ra
label_3c6f6c:
    if (ctx->pc == 0x3C6F6Cu) {
        ctx->pc = 0x3C6F6Cu;
            // 0x3c6f6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3C6F70u;
        goto label_fallthrough_0x3c6f68;
    }
    ctx->pc = 0x3C6F68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C6F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6F68u;
            // 0x3c6f6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3c6f68:
    ctx->pc = 0x3C6F70u;
}
