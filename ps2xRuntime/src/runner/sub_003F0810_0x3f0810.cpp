#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F0810
// Address: 0x3f0810 - 0x3f1060
void sub_003F0810_0x3f0810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F0810_0x3f0810");
#endif

    switch (ctx->pc) {
        case 0x3f0810u: goto label_3f0810;
        case 0x3f0814u: goto label_3f0814;
        case 0x3f0818u: goto label_3f0818;
        case 0x3f081cu: goto label_3f081c;
        case 0x3f0820u: goto label_3f0820;
        case 0x3f0824u: goto label_3f0824;
        case 0x3f0828u: goto label_3f0828;
        case 0x3f082cu: goto label_3f082c;
        case 0x3f0830u: goto label_3f0830;
        case 0x3f0834u: goto label_3f0834;
        case 0x3f0838u: goto label_3f0838;
        case 0x3f083cu: goto label_3f083c;
        case 0x3f0840u: goto label_3f0840;
        case 0x3f0844u: goto label_3f0844;
        case 0x3f0848u: goto label_3f0848;
        case 0x3f084cu: goto label_3f084c;
        case 0x3f0850u: goto label_3f0850;
        case 0x3f0854u: goto label_3f0854;
        case 0x3f0858u: goto label_3f0858;
        case 0x3f085cu: goto label_3f085c;
        case 0x3f0860u: goto label_3f0860;
        case 0x3f0864u: goto label_3f0864;
        case 0x3f0868u: goto label_3f0868;
        case 0x3f086cu: goto label_3f086c;
        case 0x3f0870u: goto label_3f0870;
        case 0x3f0874u: goto label_3f0874;
        case 0x3f0878u: goto label_3f0878;
        case 0x3f087cu: goto label_3f087c;
        case 0x3f0880u: goto label_3f0880;
        case 0x3f0884u: goto label_3f0884;
        case 0x3f0888u: goto label_3f0888;
        case 0x3f088cu: goto label_3f088c;
        case 0x3f0890u: goto label_3f0890;
        case 0x3f0894u: goto label_3f0894;
        case 0x3f0898u: goto label_3f0898;
        case 0x3f089cu: goto label_3f089c;
        case 0x3f08a0u: goto label_3f08a0;
        case 0x3f08a4u: goto label_3f08a4;
        case 0x3f08a8u: goto label_3f08a8;
        case 0x3f08acu: goto label_3f08ac;
        case 0x3f08b0u: goto label_3f08b0;
        case 0x3f08b4u: goto label_3f08b4;
        case 0x3f08b8u: goto label_3f08b8;
        case 0x3f08bcu: goto label_3f08bc;
        case 0x3f08c0u: goto label_3f08c0;
        case 0x3f08c4u: goto label_3f08c4;
        case 0x3f08c8u: goto label_3f08c8;
        case 0x3f08ccu: goto label_3f08cc;
        case 0x3f08d0u: goto label_3f08d0;
        case 0x3f08d4u: goto label_3f08d4;
        case 0x3f08d8u: goto label_3f08d8;
        case 0x3f08dcu: goto label_3f08dc;
        case 0x3f08e0u: goto label_3f08e0;
        case 0x3f08e4u: goto label_3f08e4;
        case 0x3f08e8u: goto label_3f08e8;
        case 0x3f08ecu: goto label_3f08ec;
        case 0x3f08f0u: goto label_3f08f0;
        case 0x3f08f4u: goto label_3f08f4;
        case 0x3f08f8u: goto label_3f08f8;
        case 0x3f08fcu: goto label_3f08fc;
        case 0x3f0900u: goto label_3f0900;
        case 0x3f0904u: goto label_3f0904;
        case 0x3f0908u: goto label_3f0908;
        case 0x3f090cu: goto label_3f090c;
        case 0x3f0910u: goto label_3f0910;
        case 0x3f0914u: goto label_3f0914;
        case 0x3f0918u: goto label_3f0918;
        case 0x3f091cu: goto label_3f091c;
        case 0x3f0920u: goto label_3f0920;
        case 0x3f0924u: goto label_3f0924;
        case 0x3f0928u: goto label_3f0928;
        case 0x3f092cu: goto label_3f092c;
        case 0x3f0930u: goto label_3f0930;
        case 0x3f0934u: goto label_3f0934;
        case 0x3f0938u: goto label_3f0938;
        case 0x3f093cu: goto label_3f093c;
        case 0x3f0940u: goto label_3f0940;
        case 0x3f0944u: goto label_3f0944;
        case 0x3f0948u: goto label_3f0948;
        case 0x3f094cu: goto label_3f094c;
        case 0x3f0950u: goto label_3f0950;
        case 0x3f0954u: goto label_3f0954;
        case 0x3f0958u: goto label_3f0958;
        case 0x3f095cu: goto label_3f095c;
        case 0x3f0960u: goto label_3f0960;
        case 0x3f0964u: goto label_3f0964;
        case 0x3f0968u: goto label_3f0968;
        case 0x3f096cu: goto label_3f096c;
        case 0x3f0970u: goto label_3f0970;
        case 0x3f0974u: goto label_3f0974;
        case 0x3f0978u: goto label_3f0978;
        case 0x3f097cu: goto label_3f097c;
        case 0x3f0980u: goto label_3f0980;
        case 0x3f0984u: goto label_3f0984;
        case 0x3f0988u: goto label_3f0988;
        case 0x3f098cu: goto label_3f098c;
        case 0x3f0990u: goto label_3f0990;
        case 0x3f0994u: goto label_3f0994;
        case 0x3f0998u: goto label_3f0998;
        case 0x3f099cu: goto label_3f099c;
        case 0x3f09a0u: goto label_3f09a0;
        case 0x3f09a4u: goto label_3f09a4;
        case 0x3f09a8u: goto label_3f09a8;
        case 0x3f09acu: goto label_3f09ac;
        case 0x3f09b0u: goto label_3f09b0;
        case 0x3f09b4u: goto label_3f09b4;
        case 0x3f09b8u: goto label_3f09b8;
        case 0x3f09bcu: goto label_3f09bc;
        case 0x3f09c0u: goto label_3f09c0;
        case 0x3f09c4u: goto label_3f09c4;
        case 0x3f09c8u: goto label_3f09c8;
        case 0x3f09ccu: goto label_3f09cc;
        case 0x3f09d0u: goto label_3f09d0;
        case 0x3f09d4u: goto label_3f09d4;
        case 0x3f09d8u: goto label_3f09d8;
        case 0x3f09dcu: goto label_3f09dc;
        case 0x3f09e0u: goto label_3f09e0;
        case 0x3f09e4u: goto label_3f09e4;
        case 0x3f09e8u: goto label_3f09e8;
        case 0x3f09ecu: goto label_3f09ec;
        case 0x3f09f0u: goto label_3f09f0;
        case 0x3f09f4u: goto label_3f09f4;
        case 0x3f09f8u: goto label_3f09f8;
        case 0x3f09fcu: goto label_3f09fc;
        case 0x3f0a00u: goto label_3f0a00;
        case 0x3f0a04u: goto label_3f0a04;
        case 0x3f0a08u: goto label_3f0a08;
        case 0x3f0a0cu: goto label_3f0a0c;
        case 0x3f0a10u: goto label_3f0a10;
        case 0x3f0a14u: goto label_3f0a14;
        case 0x3f0a18u: goto label_3f0a18;
        case 0x3f0a1cu: goto label_3f0a1c;
        case 0x3f0a20u: goto label_3f0a20;
        case 0x3f0a24u: goto label_3f0a24;
        case 0x3f0a28u: goto label_3f0a28;
        case 0x3f0a2cu: goto label_3f0a2c;
        case 0x3f0a30u: goto label_3f0a30;
        case 0x3f0a34u: goto label_3f0a34;
        case 0x3f0a38u: goto label_3f0a38;
        case 0x3f0a3cu: goto label_3f0a3c;
        case 0x3f0a40u: goto label_3f0a40;
        case 0x3f0a44u: goto label_3f0a44;
        case 0x3f0a48u: goto label_3f0a48;
        case 0x3f0a4cu: goto label_3f0a4c;
        case 0x3f0a50u: goto label_3f0a50;
        case 0x3f0a54u: goto label_3f0a54;
        case 0x3f0a58u: goto label_3f0a58;
        case 0x3f0a5cu: goto label_3f0a5c;
        case 0x3f0a60u: goto label_3f0a60;
        case 0x3f0a64u: goto label_3f0a64;
        case 0x3f0a68u: goto label_3f0a68;
        case 0x3f0a6cu: goto label_3f0a6c;
        case 0x3f0a70u: goto label_3f0a70;
        case 0x3f0a74u: goto label_3f0a74;
        case 0x3f0a78u: goto label_3f0a78;
        case 0x3f0a7cu: goto label_3f0a7c;
        case 0x3f0a80u: goto label_3f0a80;
        case 0x3f0a84u: goto label_3f0a84;
        case 0x3f0a88u: goto label_3f0a88;
        case 0x3f0a8cu: goto label_3f0a8c;
        case 0x3f0a90u: goto label_3f0a90;
        case 0x3f0a94u: goto label_3f0a94;
        case 0x3f0a98u: goto label_3f0a98;
        case 0x3f0a9cu: goto label_3f0a9c;
        case 0x3f0aa0u: goto label_3f0aa0;
        case 0x3f0aa4u: goto label_3f0aa4;
        case 0x3f0aa8u: goto label_3f0aa8;
        case 0x3f0aacu: goto label_3f0aac;
        case 0x3f0ab0u: goto label_3f0ab0;
        case 0x3f0ab4u: goto label_3f0ab4;
        case 0x3f0ab8u: goto label_3f0ab8;
        case 0x3f0abcu: goto label_3f0abc;
        case 0x3f0ac0u: goto label_3f0ac0;
        case 0x3f0ac4u: goto label_3f0ac4;
        case 0x3f0ac8u: goto label_3f0ac8;
        case 0x3f0accu: goto label_3f0acc;
        case 0x3f0ad0u: goto label_3f0ad0;
        case 0x3f0ad4u: goto label_3f0ad4;
        case 0x3f0ad8u: goto label_3f0ad8;
        case 0x3f0adcu: goto label_3f0adc;
        case 0x3f0ae0u: goto label_3f0ae0;
        case 0x3f0ae4u: goto label_3f0ae4;
        case 0x3f0ae8u: goto label_3f0ae8;
        case 0x3f0aecu: goto label_3f0aec;
        case 0x3f0af0u: goto label_3f0af0;
        case 0x3f0af4u: goto label_3f0af4;
        case 0x3f0af8u: goto label_3f0af8;
        case 0x3f0afcu: goto label_3f0afc;
        case 0x3f0b00u: goto label_3f0b00;
        case 0x3f0b04u: goto label_3f0b04;
        case 0x3f0b08u: goto label_3f0b08;
        case 0x3f0b0cu: goto label_3f0b0c;
        case 0x3f0b10u: goto label_3f0b10;
        case 0x3f0b14u: goto label_3f0b14;
        case 0x3f0b18u: goto label_3f0b18;
        case 0x3f0b1cu: goto label_3f0b1c;
        case 0x3f0b20u: goto label_3f0b20;
        case 0x3f0b24u: goto label_3f0b24;
        case 0x3f0b28u: goto label_3f0b28;
        case 0x3f0b2cu: goto label_3f0b2c;
        case 0x3f0b30u: goto label_3f0b30;
        case 0x3f0b34u: goto label_3f0b34;
        case 0x3f0b38u: goto label_3f0b38;
        case 0x3f0b3cu: goto label_3f0b3c;
        case 0x3f0b40u: goto label_3f0b40;
        case 0x3f0b44u: goto label_3f0b44;
        case 0x3f0b48u: goto label_3f0b48;
        case 0x3f0b4cu: goto label_3f0b4c;
        case 0x3f0b50u: goto label_3f0b50;
        case 0x3f0b54u: goto label_3f0b54;
        case 0x3f0b58u: goto label_3f0b58;
        case 0x3f0b5cu: goto label_3f0b5c;
        case 0x3f0b60u: goto label_3f0b60;
        case 0x3f0b64u: goto label_3f0b64;
        case 0x3f0b68u: goto label_3f0b68;
        case 0x3f0b6cu: goto label_3f0b6c;
        case 0x3f0b70u: goto label_3f0b70;
        case 0x3f0b74u: goto label_3f0b74;
        case 0x3f0b78u: goto label_3f0b78;
        case 0x3f0b7cu: goto label_3f0b7c;
        case 0x3f0b80u: goto label_3f0b80;
        case 0x3f0b84u: goto label_3f0b84;
        case 0x3f0b88u: goto label_3f0b88;
        case 0x3f0b8cu: goto label_3f0b8c;
        case 0x3f0b90u: goto label_3f0b90;
        case 0x3f0b94u: goto label_3f0b94;
        case 0x3f0b98u: goto label_3f0b98;
        case 0x3f0b9cu: goto label_3f0b9c;
        case 0x3f0ba0u: goto label_3f0ba0;
        case 0x3f0ba4u: goto label_3f0ba4;
        case 0x3f0ba8u: goto label_3f0ba8;
        case 0x3f0bacu: goto label_3f0bac;
        case 0x3f0bb0u: goto label_3f0bb0;
        case 0x3f0bb4u: goto label_3f0bb4;
        case 0x3f0bb8u: goto label_3f0bb8;
        case 0x3f0bbcu: goto label_3f0bbc;
        case 0x3f0bc0u: goto label_3f0bc0;
        case 0x3f0bc4u: goto label_3f0bc4;
        case 0x3f0bc8u: goto label_3f0bc8;
        case 0x3f0bccu: goto label_3f0bcc;
        case 0x3f0bd0u: goto label_3f0bd0;
        case 0x3f0bd4u: goto label_3f0bd4;
        case 0x3f0bd8u: goto label_3f0bd8;
        case 0x3f0bdcu: goto label_3f0bdc;
        case 0x3f0be0u: goto label_3f0be0;
        case 0x3f0be4u: goto label_3f0be4;
        case 0x3f0be8u: goto label_3f0be8;
        case 0x3f0becu: goto label_3f0bec;
        case 0x3f0bf0u: goto label_3f0bf0;
        case 0x3f0bf4u: goto label_3f0bf4;
        case 0x3f0bf8u: goto label_3f0bf8;
        case 0x3f0bfcu: goto label_3f0bfc;
        case 0x3f0c00u: goto label_3f0c00;
        case 0x3f0c04u: goto label_3f0c04;
        case 0x3f0c08u: goto label_3f0c08;
        case 0x3f0c0cu: goto label_3f0c0c;
        case 0x3f0c10u: goto label_3f0c10;
        case 0x3f0c14u: goto label_3f0c14;
        case 0x3f0c18u: goto label_3f0c18;
        case 0x3f0c1cu: goto label_3f0c1c;
        case 0x3f0c20u: goto label_3f0c20;
        case 0x3f0c24u: goto label_3f0c24;
        case 0x3f0c28u: goto label_3f0c28;
        case 0x3f0c2cu: goto label_3f0c2c;
        case 0x3f0c30u: goto label_3f0c30;
        case 0x3f0c34u: goto label_3f0c34;
        case 0x3f0c38u: goto label_3f0c38;
        case 0x3f0c3cu: goto label_3f0c3c;
        case 0x3f0c40u: goto label_3f0c40;
        case 0x3f0c44u: goto label_3f0c44;
        case 0x3f0c48u: goto label_3f0c48;
        case 0x3f0c4cu: goto label_3f0c4c;
        case 0x3f0c50u: goto label_3f0c50;
        case 0x3f0c54u: goto label_3f0c54;
        case 0x3f0c58u: goto label_3f0c58;
        case 0x3f0c5cu: goto label_3f0c5c;
        case 0x3f0c60u: goto label_3f0c60;
        case 0x3f0c64u: goto label_3f0c64;
        case 0x3f0c68u: goto label_3f0c68;
        case 0x3f0c6cu: goto label_3f0c6c;
        case 0x3f0c70u: goto label_3f0c70;
        case 0x3f0c74u: goto label_3f0c74;
        case 0x3f0c78u: goto label_3f0c78;
        case 0x3f0c7cu: goto label_3f0c7c;
        case 0x3f0c80u: goto label_3f0c80;
        case 0x3f0c84u: goto label_3f0c84;
        case 0x3f0c88u: goto label_3f0c88;
        case 0x3f0c8cu: goto label_3f0c8c;
        case 0x3f0c90u: goto label_3f0c90;
        case 0x3f0c94u: goto label_3f0c94;
        case 0x3f0c98u: goto label_3f0c98;
        case 0x3f0c9cu: goto label_3f0c9c;
        case 0x3f0ca0u: goto label_3f0ca0;
        case 0x3f0ca4u: goto label_3f0ca4;
        case 0x3f0ca8u: goto label_3f0ca8;
        case 0x3f0cacu: goto label_3f0cac;
        case 0x3f0cb0u: goto label_3f0cb0;
        case 0x3f0cb4u: goto label_3f0cb4;
        case 0x3f0cb8u: goto label_3f0cb8;
        case 0x3f0cbcu: goto label_3f0cbc;
        case 0x3f0cc0u: goto label_3f0cc0;
        case 0x3f0cc4u: goto label_3f0cc4;
        case 0x3f0cc8u: goto label_3f0cc8;
        case 0x3f0cccu: goto label_3f0ccc;
        case 0x3f0cd0u: goto label_3f0cd0;
        case 0x3f0cd4u: goto label_3f0cd4;
        case 0x3f0cd8u: goto label_3f0cd8;
        case 0x3f0cdcu: goto label_3f0cdc;
        case 0x3f0ce0u: goto label_3f0ce0;
        case 0x3f0ce4u: goto label_3f0ce4;
        case 0x3f0ce8u: goto label_3f0ce8;
        case 0x3f0cecu: goto label_3f0cec;
        case 0x3f0cf0u: goto label_3f0cf0;
        case 0x3f0cf4u: goto label_3f0cf4;
        case 0x3f0cf8u: goto label_3f0cf8;
        case 0x3f0cfcu: goto label_3f0cfc;
        case 0x3f0d00u: goto label_3f0d00;
        case 0x3f0d04u: goto label_3f0d04;
        case 0x3f0d08u: goto label_3f0d08;
        case 0x3f0d0cu: goto label_3f0d0c;
        case 0x3f0d10u: goto label_3f0d10;
        case 0x3f0d14u: goto label_3f0d14;
        case 0x3f0d18u: goto label_3f0d18;
        case 0x3f0d1cu: goto label_3f0d1c;
        case 0x3f0d20u: goto label_3f0d20;
        case 0x3f0d24u: goto label_3f0d24;
        case 0x3f0d28u: goto label_3f0d28;
        case 0x3f0d2cu: goto label_3f0d2c;
        case 0x3f0d30u: goto label_3f0d30;
        case 0x3f0d34u: goto label_3f0d34;
        case 0x3f0d38u: goto label_3f0d38;
        case 0x3f0d3cu: goto label_3f0d3c;
        case 0x3f0d40u: goto label_3f0d40;
        case 0x3f0d44u: goto label_3f0d44;
        case 0x3f0d48u: goto label_3f0d48;
        case 0x3f0d4cu: goto label_3f0d4c;
        case 0x3f0d50u: goto label_3f0d50;
        case 0x3f0d54u: goto label_3f0d54;
        case 0x3f0d58u: goto label_3f0d58;
        case 0x3f0d5cu: goto label_3f0d5c;
        case 0x3f0d60u: goto label_3f0d60;
        case 0x3f0d64u: goto label_3f0d64;
        case 0x3f0d68u: goto label_3f0d68;
        case 0x3f0d6cu: goto label_3f0d6c;
        case 0x3f0d70u: goto label_3f0d70;
        case 0x3f0d74u: goto label_3f0d74;
        case 0x3f0d78u: goto label_3f0d78;
        case 0x3f0d7cu: goto label_3f0d7c;
        case 0x3f0d80u: goto label_3f0d80;
        case 0x3f0d84u: goto label_3f0d84;
        case 0x3f0d88u: goto label_3f0d88;
        case 0x3f0d8cu: goto label_3f0d8c;
        case 0x3f0d90u: goto label_3f0d90;
        case 0x3f0d94u: goto label_3f0d94;
        case 0x3f0d98u: goto label_3f0d98;
        case 0x3f0d9cu: goto label_3f0d9c;
        case 0x3f0da0u: goto label_3f0da0;
        case 0x3f0da4u: goto label_3f0da4;
        case 0x3f0da8u: goto label_3f0da8;
        case 0x3f0dacu: goto label_3f0dac;
        case 0x3f0db0u: goto label_3f0db0;
        case 0x3f0db4u: goto label_3f0db4;
        case 0x3f0db8u: goto label_3f0db8;
        case 0x3f0dbcu: goto label_3f0dbc;
        case 0x3f0dc0u: goto label_3f0dc0;
        case 0x3f0dc4u: goto label_3f0dc4;
        case 0x3f0dc8u: goto label_3f0dc8;
        case 0x3f0dccu: goto label_3f0dcc;
        case 0x3f0dd0u: goto label_3f0dd0;
        case 0x3f0dd4u: goto label_3f0dd4;
        case 0x3f0dd8u: goto label_3f0dd8;
        case 0x3f0ddcu: goto label_3f0ddc;
        case 0x3f0de0u: goto label_3f0de0;
        case 0x3f0de4u: goto label_3f0de4;
        case 0x3f0de8u: goto label_3f0de8;
        case 0x3f0decu: goto label_3f0dec;
        case 0x3f0df0u: goto label_3f0df0;
        case 0x3f0df4u: goto label_3f0df4;
        case 0x3f0df8u: goto label_3f0df8;
        case 0x3f0dfcu: goto label_3f0dfc;
        case 0x3f0e00u: goto label_3f0e00;
        case 0x3f0e04u: goto label_3f0e04;
        case 0x3f0e08u: goto label_3f0e08;
        case 0x3f0e0cu: goto label_3f0e0c;
        case 0x3f0e10u: goto label_3f0e10;
        case 0x3f0e14u: goto label_3f0e14;
        case 0x3f0e18u: goto label_3f0e18;
        case 0x3f0e1cu: goto label_3f0e1c;
        case 0x3f0e20u: goto label_3f0e20;
        case 0x3f0e24u: goto label_3f0e24;
        case 0x3f0e28u: goto label_3f0e28;
        case 0x3f0e2cu: goto label_3f0e2c;
        case 0x3f0e30u: goto label_3f0e30;
        case 0x3f0e34u: goto label_3f0e34;
        case 0x3f0e38u: goto label_3f0e38;
        case 0x3f0e3cu: goto label_3f0e3c;
        case 0x3f0e40u: goto label_3f0e40;
        case 0x3f0e44u: goto label_3f0e44;
        case 0x3f0e48u: goto label_3f0e48;
        case 0x3f0e4cu: goto label_3f0e4c;
        case 0x3f0e50u: goto label_3f0e50;
        case 0x3f0e54u: goto label_3f0e54;
        case 0x3f0e58u: goto label_3f0e58;
        case 0x3f0e5cu: goto label_3f0e5c;
        case 0x3f0e60u: goto label_3f0e60;
        case 0x3f0e64u: goto label_3f0e64;
        case 0x3f0e68u: goto label_3f0e68;
        case 0x3f0e6cu: goto label_3f0e6c;
        case 0x3f0e70u: goto label_3f0e70;
        case 0x3f0e74u: goto label_3f0e74;
        case 0x3f0e78u: goto label_3f0e78;
        case 0x3f0e7cu: goto label_3f0e7c;
        case 0x3f0e80u: goto label_3f0e80;
        case 0x3f0e84u: goto label_3f0e84;
        case 0x3f0e88u: goto label_3f0e88;
        case 0x3f0e8cu: goto label_3f0e8c;
        case 0x3f0e90u: goto label_3f0e90;
        case 0x3f0e94u: goto label_3f0e94;
        case 0x3f0e98u: goto label_3f0e98;
        case 0x3f0e9cu: goto label_3f0e9c;
        case 0x3f0ea0u: goto label_3f0ea0;
        case 0x3f0ea4u: goto label_3f0ea4;
        case 0x3f0ea8u: goto label_3f0ea8;
        case 0x3f0eacu: goto label_3f0eac;
        case 0x3f0eb0u: goto label_3f0eb0;
        case 0x3f0eb4u: goto label_3f0eb4;
        case 0x3f0eb8u: goto label_3f0eb8;
        case 0x3f0ebcu: goto label_3f0ebc;
        case 0x3f0ec0u: goto label_3f0ec0;
        case 0x3f0ec4u: goto label_3f0ec4;
        case 0x3f0ec8u: goto label_3f0ec8;
        case 0x3f0eccu: goto label_3f0ecc;
        case 0x3f0ed0u: goto label_3f0ed0;
        case 0x3f0ed4u: goto label_3f0ed4;
        case 0x3f0ed8u: goto label_3f0ed8;
        case 0x3f0edcu: goto label_3f0edc;
        case 0x3f0ee0u: goto label_3f0ee0;
        case 0x3f0ee4u: goto label_3f0ee4;
        case 0x3f0ee8u: goto label_3f0ee8;
        case 0x3f0eecu: goto label_3f0eec;
        case 0x3f0ef0u: goto label_3f0ef0;
        case 0x3f0ef4u: goto label_3f0ef4;
        case 0x3f0ef8u: goto label_3f0ef8;
        case 0x3f0efcu: goto label_3f0efc;
        case 0x3f0f00u: goto label_3f0f00;
        case 0x3f0f04u: goto label_3f0f04;
        case 0x3f0f08u: goto label_3f0f08;
        case 0x3f0f0cu: goto label_3f0f0c;
        case 0x3f0f10u: goto label_3f0f10;
        case 0x3f0f14u: goto label_3f0f14;
        case 0x3f0f18u: goto label_3f0f18;
        case 0x3f0f1cu: goto label_3f0f1c;
        case 0x3f0f20u: goto label_3f0f20;
        case 0x3f0f24u: goto label_3f0f24;
        case 0x3f0f28u: goto label_3f0f28;
        case 0x3f0f2cu: goto label_3f0f2c;
        case 0x3f0f30u: goto label_3f0f30;
        case 0x3f0f34u: goto label_3f0f34;
        case 0x3f0f38u: goto label_3f0f38;
        case 0x3f0f3cu: goto label_3f0f3c;
        case 0x3f0f40u: goto label_3f0f40;
        case 0x3f0f44u: goto label_3f0f44;
        case 0x3f0f48u: goto label_3f0f48;
        case 0x3f0f4cu: goto label_3f0f4c;
        case 0x3f0f50u: goto label_3f0f50;
        case 0x3f0f54u: goto label_3f0f54;
        case 0x3f0f58u: goto label_3f0f58;
        case 0x3f0f5cu: goto label_3f0f5c;
        case 0x3f0f60u: goto label_3f0f60;
        case 0x3f0f64u: goto label_3f0f64;
        case 0x3f0f68u: goto label_3f0f68;
        case 0x3f0f6cu: goto label_3f0f6c;
        case 0x3f0f70u: goto label_3f0f70;
        case 0x3f0f74u: goto label_3f0f74;
        case 0x3f0f78u: goto label_3f0f78;
        case 0x3f0f7cu: goto label_3f0f7c;
        case 0x3f0f80u: goto label_3f0f80;
        case 0x3f0f84u: goto label_3f0f84;
        case 0x3f0f88u: goto label_3f0f88;
        case 0x3f0f8cu: goto label_3f0f8c;
        case 0x3f0f90u: goto label_3f0f90;
        case 0x3f0f94u: goto label_3f0f94;
        case 0x3f0f98u: goto label_3f0f98;
        case 0x3f0f9cu: goto label_3f0f9c;
        case 0x3f0fa0u: goto label_3f0fa0;
        case 0x3f0fa4u: goto label_3f0fa4;
        case 0x3f0fa8u: goto label_3f0fa8;
        case 0x3f0facu: goto label_3f0fac;
        case 0x3f0fb0u: goto label_3f0fb0;
        case 0x3f0fb4u: goto label_3f0fb4;
        case 0x3f0fb8u: goto label_3f0fb8;
        case 0x3f0fbcu: goto label_3f0fbc;
        case 0x3f0fc0u: goto label_3f0fc0;
        case 0x3f0fc4u: goto label_3f0fc4;
        case 0x3f0fc8u: goto label_3f0fc8;
        case 0x3f0fccu: goto label_3f0fcc;
        case 0x3f0fd0u: goto label_3f0fd0;
        case 0x3f0fd4u: goto label_3f0fd4;
        case 0x3f0fd8u: goto label_3f0fd8;
        case 0x3f0fdcu: goto label_3f0fdc;
        case 0x3f0fe0u: goto label_3f0fe0;
        case 0x3f0fe4u: goto label_3f0fe4;
        case 0x3f0fe8u: goto label_3f0fe8;
        case 0x3f0fecu: goto label_3f0fec;
        case 0x3f0ff0u: goto label_3f0ff0;
        case 0x3f0ff4u: goto label_3f0ff4;
        case 0x3f0ff8u: goto label_3f0ff8;
        case 0x3f0ffcu: goto label_3f0ffc;
        case 0x3f1000u: goto label_3f1000;
        case 0x3f1004u: goto label_3f1004;
        case 0x3f1008u: goto label_3f1008;
        case 0x3f100cu: goto label_3f100c;
        case 0x3f1010u: goto label_3f1010;
        case 0x3f1014u: goto label_3f1014;
        case 0x3f1018u: goto label_3f1018;
        case 0x3f101cu: goto label_3f101c;
        case 0x3f1020u: goto label_3f1020;
        case 0x3f1024u: goto label_3f1024;
        case 0x3f1028u: goto label_3f1028;
        case 0x3f102cu: goto label_3f102c;
        case 0x3f1030u: goto label_3f1030;
        case 0x3f1034u: goto label_3f1034;
        case 0x3f1038u: goto label_3f1038;
        case 0x3f103cu: goto label_3f103c;
        case 0x3f1040u: goto label_3f1040;
        case 0x3f1044u: goto label_3f1044;
        case 0x3f1048u: goto label_3f1048;
        case 0x3f104cu: goto label_3f104c;
        case 0x3f1050u: goto label_3f1050;
        case 0x3f1054u: goto label_3f1054;
        case 0x3f1058u: goto label_3f1058;
        case 0x3f105cu: goto label_3f105c;
        default: break;
    }

    ctx->pc = 0x3f0810u;

label_3f0810:
    // 0x3f0810: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3f0810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3f0814:
    // 0x3f0814: 0x2485ff9c  addiu       $a1, $a0, -0x64
    ctx->pc = 0x3f0814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
label_3f0818:
    // 0x3f0818: 0x24429f38  addiu       $v0, $v0, -0x60C8
    ctx->pc = 0x3f0818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942520));
label_3f081c:
    // 0x3f081c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3f081cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3f0820:
    // 0x3f0820: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3f0820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3f0824:
    // 0x3f0824: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3f0824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f0828:
    // 0x3f0828: 0x3e00008  jr          $ra
label_3f082c:
    if (ctx->pc == 0x3F082Cu) {
        ctx->pc = 0x3F082Cu;
            // 0x3f082c: 0xac656f08  sw          $a1, 0x6F08($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28424), GPR_U32(ctx, 5));
        ctx->pc = 0x3F0830u;
        goto label_3f0830;
    }
    ctx->pc = 0x3F0828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F082Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0828u;
            // 0x3f082c: 0xac656f08  sw          $a1, 0x6F08($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28424), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F0830u;
label_3f0830:
    // 0x3f0830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f0830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3f0834:
    // 0x3f0834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f0834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3f0838:
    // 0x3f0838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f0838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f083c:
    // 0x3f083c: 0xac80009c  sw          $zero, 0x9C($a0)
    ctx->pc = 0x3f083cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 0));
label_3f0840:
    // 0x3f0840: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f0840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f0844:
    // 0x3f0844: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x3f0844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_3f0848:
    // 0x3f0848: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3f084c:
    if (ctx->pc == 0x3F084Cu) {
        ctx->pc = 0x3F084Cu;
            // 0x3f084c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x3F0850u;
        goto label_3f0850;
    }
    ctx->pc = 0x3F0848u;
    {
        const bool branch_taken_0x3f0848 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f0848) {
            ctx->pc = 0x3F084Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0848u;
            // 0x3f084c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F0864u;
            goto label_3f0864;
        }
    }
    ctx->pc = 0x3F0850u;
label_3f0850:
    // 0x3f0850: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x3f0850u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_3f0854:
    // 0x3f0854: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3f0854u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3f0858:
    // 0x3f0858: 0x320f809  jalr        $t9
label_3f085c:
    if (ctx->pc == 0x3F085Cu) {
        ctx->pc = 0x3F085Cu;
            // 0x3f085c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F0860u;
        goto label_3f0860;
    }
    ctx->pc = 0x3F0858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F0860u);
        ctx->pc = 0x3F085Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0858u;
            // 0x3f085c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F0860u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F0860u; }
            if (ctx->pc != 0x3F0860u) { return; }
        }
        }
    }
    ctx->pc = 0x3F0860u;
label_3f0860:
    // 0x3f0860: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x3f0860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_3f0864:
    // 0x3f0864: 0x8e04013c  lw          $a0, 0x13C($s0)
    ctx->pc = 0x3f0864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
label_3f0868:
    // 0x3f0868: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3f086c:
    if (ctx->pc == 0x3F086Cu) {
        ctx->pc = 0x3F086Cu;
            // 0x3f086c: 0x8e040138  lw          $a0, 0x138($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
        ctx->pc = 0x3F0870u;
        goto label_3f0870;
    }
    ctx->pc = 0x3F0868u;
    {
        const bool branch_taken_0x3f0868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f0868) {
            ctx->pc = 0x3F086Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0868u;
            // 0x3f086c: 0x8e040138  lw          $a0, 0x138($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F0884u;
            goto label_3f0884;
        }
    }
    ctx->pc = 0x3F0870u;
label_3f0870:
    // 0x3f0870: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f0870u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f0874:
    // 0x3f0874: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3f0874u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3f0878:
    // 0x3f0878: 0x320f809  jalr        $t9
label_3f087c:
    if (ctx->pc == 0x3F087Cu) {
        ctx->pc = 0x3F087Cu;
            // 0x3f087c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F0880u;
        goto label_3f0880;
    }
    ctx->pc = 0x3F0878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F0880u);
        ctx->pc = 0x3F087Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0878u;
            // 0x3f087c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F0880u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F0880u; }
            if (ctx->pc != 0x3F0880u) { return; }
        }
        }
    }
    ctx->pc = 0x3F0880u;
label_3f0880:
    // 0x3f0880: 0x8e040138  lw          $a0, 0x138($s0)
    ctx->pc = 0x3f0880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_3f0884:
    // 0x3f0884: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_3f0888:
    if (ctx->pc == 0x3F0888u) {
        ctx->pc = 0x3F0888u;
            // 0x3f0888: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x3F088Cu;
        goto label_3f088c;
    }
    ctx->pc = 0x3F0884u;
    {
        const bool branch_taken_0x3f0884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f0884) {
            ctx->pc = 0x3F0888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0884u;
            // 0x3f0888: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F08A8u;
            goto label_3f08a8;
        }
    }
    ctx->pc = 0x3F088Cu;
label_3f088c:
    // 0x3f088c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3f0890:
    if (ctx->pc == 0x3F0890u) {
        ctx->pc = 0x3F0894u;
        goto label_3f0894;
    }
    ctx->pc = 0x3F088Cu;
    {
        const bool branch_taken_0x3f088c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f088c) {
            ctx->pc = 0x3F08A4u;
            goto label_3f08a4;
        }
    }
    ctx->pc = 0x3F0894u;
label_3f0894:
    // 0x3f0894: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f0894u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f0898:
    // 0x3f0898: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3f0898u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3f089c:
    // 0x3f089c: 0x320f809  jalr        $t9
label_3f08a0:
    if (ctx->pc == 0x3F08A0u) {
        ctx->pc = 0x3F08A0u;
            // 0x3f08a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F08A4u;
        goto label_3f08a4;
    }
    ctx->pc = 0x3F089Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F08A4u);
        ctx->pc = 0x3F08A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F089Cu;
            // 0x3f08a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F08A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F08A4u; }
            if (ctx->pc != 0x3F08A4u) { return; }
        }
        }
    }
    ctx->pc = 0x3F08A4u;
label_3f08a4:
    // 0x3f08a4: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3f08a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3f08a8:
    // 0x3f08a8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3f08ac:
    if (ctx->pc == 0x3F08ACu) {
        ctx->pc = 0x3F08ACu;
            // 0x3f08ac: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x3F08B0u;
        goto label_3f08b0;
    }
    ctx->pc = 0x3F08A8u;
    {
        const bool branch_taken_0x3f08a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f08a8) {
            ctx->pc = 0x3F08ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F08A8u;
            // 0x3f08ac: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F08C4u;
            goto label_3f08c4;
        }
    }
    ctx->pc = 0x3F08B0u;
label_3f08b0:
    // 0x3f08b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f08b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f08b4:
    // 0x3f08b4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3f08b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3f08b8:
    // 0x3f08b8: 0x320f809  jalr        $t9
label_3f08bc:
    if (ctx->pc == 0x3F08BCu) {
        ctx->pc = 0x3F08BCu;
            // 0x3f08bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F08C0u;
        goto label_3f08c0;
    }
    ctx->pc = 0x3F08B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F08C0u);
        ctx->pc = 0x3F08BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F08B8u;
            // 0x3f08bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F08C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F08C0u; }
            if (ctx->pc != 0x3F08C0u) { return; }
        }
        }
    }
    ctx->pc = 0x3F08C0u;
label_3f08c0:
    // 0x3f08c0: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x3f08c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_3f08c4:
    // 0x3f08c4: 0x8e040140  lw          $a0, 0x140($s0)
    ctx->pc = 0x3f08c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
label_3f08c8:
    // 0x3f08c8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3f08cc:
    if (ctx->pc == 0x3F08CCu) {
        ctx->pc = 0x3F08CCu;
            // 0x3f08cc: 0xae000140  sw          $zero, 0x140($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
        ctx->pc = 0x3F08D0u;
        goto label_3f08d0;
    }
    ctx->pc = 0x3F08C8u;
    {
        const bool branch_taken_0x3f08c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f08c8) {
            ctx->pc = 0x3F08CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F08C8u;
            // 0x3f08cc: 0xae000140  sw          $zero, 0x140($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F08E4u;
            goto label_3f08e4;
        }
    }
    ctx->pc = 0x3F08D0u;
label_3f08d0:
    // 0x3f08d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f08d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f08d4:
    // 0x3f08d4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3f08d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3f08d8:
    // 0x3f08d8: 0x320f809  jalr        $t9
label_3f08dc:
    if (ctx->pc == 0x3F08DCu) {
        ctx->pc = 0x3F08DCu;
            // 0x3f08dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F08E0u;
        goto label_3f08e0;
    }
    ctx->pc = 0x3F08D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F08E0u);
        ctx->pc = 0x3F08DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F08D8u;
            // 0x3f08dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F08E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F08E0u; }
            if (ctx->pc != 0x3F08E0u) { return; }
        }
        }
    }
    ctx->pc = 0x3F08E0u;
label_3f08e0:
    // 0x3f08e0: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x3f08e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
label_3f08e4:
    // 0x3f08e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f08e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3f08e8:
    // 0x3f08e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f08e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f08ec:
    // 0x3f08ec: 0x3e00008  jr          $ra
label_3f08f0:
    if (ctx->pc == 0x3F08F0u) {
        ctx->pc = 0x3F08F0u;
            // 0x3f08f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3F08F4u;
        goto label_3f08f4;
    }
    ctx->pc = 0x3F08ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F08F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F08ECu;
            // 0x3f08f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F08F4u;
label_3f08f4:
    // 0x3f08f4: 0x0  nop
    ctx->pc = 0x3f08f4u;
    // NOP
label_3f08f8:
    // 0x3f08f8: 0x0  nop
    ctx->pc = 0x3f08f8u;
    // NOP
label_3f08fc:
    // 0x3f08fc: 0x0  nop
    ctx->pc = 0x3f08fcu;
    // NOP
label_3f0900:
    // 0x3f0900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f0900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3f0904:
    // 0x3f0904: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f0904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3f0908:
    // 0x3f0908: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f0908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f090c:
    // 0x3f090c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f090cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f0910:
    // 0x3f0910: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f0910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f0914:
    // 0x3f0914: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_3f0918:
    if (ctx->pc == 0x3F0918u) {
        ctx->pc = 0x3F0918u;
            // 0x3f0918: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F091Cu;
        goto label_3f091c;
    }
    ctx->pc = 0x3F0914u;
    {
        const bool branch_taken_0x3f0914 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0914u;
            // 0x3f0918: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0914) {
            ctx->pc = 0x3F0978u;
            goto label_3f0978;
        }
    }
    ctx->pc = 0x3F091Cu;
label_3f091c:
    // 0x3f091c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3f091cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3f0920:
    // 0x3f0920: 0x2442a040  addiu       $v0, $v0, -0x5FC0
    ctx->pc = 0x3f0920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942784));
label_3f0924:
    // 0x3f0924: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_3f0928:
    if (ctx->pc == 0x3F0928u) {
        ctx->pc = 0x3F0928u;
            // 0x3f0928: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3F092Cu;
        goto label_3f092c;
    }
    ctx->pc = 0x3F0924u;
    {
        const bool branch_taken_0x3f0924 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0924u;
            // 0x3f0928: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0924) {
            ctx->pc = 0x3F0960u;
            goto label_3f0960;
        }
    }
    ctx->pc = 0x3F092Cu;
label_3f092c:
    // 0x3f092c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3f092cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3f0930:
    // 0x3f0930: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x3f0930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_3f0934:
    // 0x3f0934: 0xc0d37dc  jal         func_34DF70
label_3f0938:
    if (ctx->pc == 0x3F0938u) {
        ctx->pc = 0x3F0938u;
            // 0x3f0938: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3F093Cu;
        goto label_3f093c;
    }
    ctx->pc = 0x3F0934u;
    SET_GPR_U32(ctx, 31, 0x3F093Cu);
    ctx->pc = 0x3F0938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0934u;
            // 0x3f0938: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F093Cu; }
        if (ctx->pc != 0x3F093Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F093Cu; }
        if (ctx->pc != 0x3F093Cu) { return; }
    }
    ctx->pc = 0x3F093Cu;
label_3f093c:
    // 0x3f093c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_3f0940:
    if (ctx->pc == 0x3F0940u) {
        ctx->pc = 0x3F0940u;
            // 0x3f0940: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x3F0944u;
        goto label_3f0944;
    }
    ctx->pc = 0x3F093Cu;
    {
        const bool branch_taken_0x3f093c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f093c) {
            ctx->pc = 0x3F0940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F093Cu;
            // 0x3f0940: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F0964u;
            goto label_3f0964;
        }
    }
    ctx->pc = 0x3F0944u;
label_3f0944:
    // 0x3f0944: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3f0944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3f0948:
    // 0x3f0948: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x3f0948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_3f094c:
    // 0x3f094c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_3f0950:
    if (ctx->pc == 0x3F0950u) {
        ctx->pc = 0x3F0950u;
            // 0x3f0950: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3F0954u;
        goto label_3f0954;
    }
    ctx->pc = 0x3F094Cu;
    {
        const bool branch_taken_0x3f094c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F094Cu;
            // 0x3f0950: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f094c) {
            ctx->pc = 0x3F0960u;
            goto label_3f0960;
        }
    }
    ctx->pc = 0x3F0954u;
label_3f0954:
    // 0x3f0954: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3f0954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3f0958:
    // 0x3f0958: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x3f0958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_3f095c:
    // 0x3f095c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3f095cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3f0960:
    // 0x3f0960: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3f0960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3f0964:
    // 0x3f0964: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3f0964u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3f0968:
    // 0x3f0968: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3f096c:
    if (ctx->pc == 0x3F096Cu) {
        ctx->pc = 0x3F096Cu;
            // 0x3f096c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F0970u;
        goto label_3f0970;
    }
    ctx->pc = 0x3F0968u;
    {
        const bool branch_taken_0x3f0968 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3f0968) {
            ctx->pc = 0x3F096Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0968u;
            // 0x3f096c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F097Cu;
            goto label_3f097c;
        }
    }
    ctx->pc = 0x3F0970u;
label_3f0970:
    // 0x3f0970: 0xc0400a8  jal         func_1002A0
label_3f0974:
    if (ctx->pc == 0x3F0974u) {
        ctx->pc = 0x3F0974u;
            // 0x3f0974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F0978u;
        goto label_3f0978;
    }
    ctx->pc = 0x3F0970u;
    SET_GPR_U32(ctx, 31, 0x3F0978u);
    ctx->pc = 0x3F0974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0970u;
            // 0x3f0974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0978u; }
        if (ctx->pc != 0x3F0978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0978u; }
        if (ctx->pc != 0x3F0978u) { return; }
    }
    ctx->pc = 0x3F0978u;
label_3f0978:
    // 0x3f0978: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3f0978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f097c:
    // 0x3f097c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f097cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3f0980:
    // 0x3f0980: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f0980u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f0984:
    // 0x3f0984: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f0984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f0988:
    // 0x3f0988: 0x3e00008  jr          $ra
label_3f098c:
    if (ctx->pc == 0x3F098Cu) {
        ctx->pc = 0x3F098Cu;
            // 0x3f098c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3F0990u;
        goto label_3f0990;
    }
    ctx->pc = 0x3F0988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F098Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0988u;
            // 0x3f098c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F0990u;
label_3f0990:
    // 0x3f0990: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x3f0990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_3f0994:
    // 0x3f0994: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f0994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3f0998:
    // 0x3f0998: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f0998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f099c:
    // 0x3f099c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f099cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f09a0:
    // 0x3f09a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f09a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f09a4:
    // 0x3f09a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f09a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f09a8:
    // 0x3f09a8: 0xc0892d0  jal         func_224B40
label_3f09ac:
    if (ctx->pc == 0x3F09ACu) {
        ctx->pc = 0x3F09ACu;
            // 0x3f09ac: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3F09B0u;
        goto label_3f09b0;
    }
    ctx->pc = 0x3F09A8u;
    SET_GPR_U32(ctx, 31, 0x3F09B0u);
    ctx->pc = 0x3F09ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F09A8u;
            // 0x3f09ac: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F09B0u; }
        if (ctx->pc != 0x3F09B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F09B0u; }
        if (ctx->pc != 0x3F09B0u) { return; }
    }
    ctx->pc = 0x3F09B0u;
label_3f09b0:
    // 0x3f09b0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3f09b4:
    // 0x3f09b4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3f09b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3f09b8:
    // 0x3f09b8: 0x8c426f08  lw          $v0, 0x6F08($v0)
    ctx->pc = 0x3f09b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28424)));
label_3f09bc:
    // 0x3f09bc: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x3f09bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_3f09c0:
    // 0x3f09c0: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x3f09c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_3f09c4:
    // 0x3f09c4: 0xc0b6e68  jal         func_2DB9A0
label_3f09c8:
    if (ctx->pc == 0x3F09C8u) {
        ctx->pc = 0x3F09C8u;
            // 0x3f09c8: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->pc = 0x3F09CCu;
        goto label_3f09cc;
    }
    ctx->pc = 0x3F09C4u;
    SET_GPR_U32(ctx, 31, 0x3F09CCu);
    ctx->pc = 0x3F09C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F09C4u;
            // 0x3f09c8: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F09CCu; }
        if (ctx->pc != 0x3F09CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F09CCu; }
        if (ctx->pc != 0x3F09CCu) { return; }
    }
    ctx->pc = 0x3F09CCu;
label_3f09cc:
    // 0x3f09cc: 0xc0b6dac  jal         func_2DB6B0
label_3f09d0:
    if (ctx->pc == 0x3F09D0u) {
        ctx->pc = 0x3F09D0u;
            // 0x3f09d0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3F09D4u;
        goto label_3f09d4;
    }
    ctx->pc = 0x3F09CCu;
    SET_GPR_U32(ctx, 31, 0x3F09D4u);
    ctx->pc = 0x3F09D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F09CCu;
            // 0x3f09d0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F09D4u; }
        if (ctx->pc != 0x3F09D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F09D4u; }
        if (ctx->pc != 0x3F09D4u) { return; }
    }
    ctx->pc = 0x3F09D4u;
label_3f09d4:
    // 0x3f09d4: 0xc0cac94  jal         func_32B250
label_3f09d8:
    if (ctx->pc == 0x3F09D8u) {
        ctx->pc = 0x3F09D8u;
            // 0x3f09d8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3F09DCu;
        goto label_3f09dc;
    }
    ctx->pc = 0x3F09D4u;
    SET_GPR_U32(ctx, 31, 0x3F09DCu);
    ctx->pc = 0x3F09D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F09D4u;
            // 0x3f09d8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F09DCu; }
        if (ctx->pc != 0x3F09DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F09DCu; }
        if (ctx->pc != 0x3F09DCu) { return; }
    }
    ctx->pc = 0x3F09DCu;
label_3f09dc:
    // 0x3f09dc: 0xc0cac84  jal         func_32B210
label_3f09e0:
    if (ctx->pc == 0x3F09E0u) {
        ctx->pc = 0x3F09E0u;
            // 0x3f09e0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3F09E4u;
        goto label_3f09e4;
    }
    ctx->pc = 0x3F09DCu;
    SET_GPR_U32(ctx, 31, 0x3F09E4u);
    ctx->pc = 0x3F09E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F09DCu;
            // 0x3f09e0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F09E4u; }
        if (ctx->pc != 0x3F09E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F09E4u; }
        if (ctx->pc != 0x3F09E4u) { return; }
    }
    ctx->pc = 0x3F09E4u;
label_3f09e4:
    // 0x3f09e4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3f09e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3f09e8:
    // 0x3f09e8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3f09e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_3f09ec:
    // 0x3f09ec: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x3f09ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3f09f0:
    // 0x3f09f0: 0xc0a5a68  jal         func_2969A0
label_3f09f4:
    if (ctx->pc == 0x3F09F4u) {
        ctx->pc = 0x3F09F4u;
            // 0x3f09f4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3F09F8u;
        goto label_3f09f8;
    }
    ctx->pc = 0x3F09F0u;
    SET_GPR_U32(ctx, 31, 0x3F09F8u);
    ctx->pc = 0x3F09F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F09F0u;
            // 0x3f09f4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F09F8u; }
        if (ctx->pc != 0x3F09F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F09F8u; }
        if (ctx->pc != 0x3F09F8u) { return; }
    }
    ctx->pc = 0x3F09F8u;
label_3f09f8:
    // 0x3f09f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f09f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3f09fc:
    // 0x3f09fc: 0x3c0a42c8  lui         $t2, 0x42C8
    ctx->pc = 0x3f09fcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17096 << 16));
label_3f0a00:
    // 0x3f0a00: 0x8c436f08  lw          $v1, 0x6F08($v0)
    ctx->pc = 0x3f0a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28424)));
label_3f0a04:
    // 0x3f0a04: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x3f0a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f0a08:
    // 0x3f0a08: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x3f0a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f0a0c:
    // 0x3f0a0c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3f0a0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f0a10:
    // 0x3f0a10: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x3f0a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f0a14:
    // 0x3f0a14: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3f0a14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f0a18:
    // 0x3f0a18: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x3f0a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_3f0a1c:
    // 0x3f0a1c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x3f0a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_3f0a20:
    // 0x3f0a20: 0x3448d70a  ori         $t0, $v0, 0xD70A
    ctx->pc = 0x3f0a20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_3f0a24:
    // 0x3f0a24: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x3f0a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_3f0a28:
    // 0x3f0a28: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x3f0a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_3f0a2c:
    // 0x3f0a2c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x3f0a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_3f0a30:
    // 0x3f0a30: 0xafa400d4  sw          $a0, 0xD4($sp)
    ctx->pc = 0x3f0a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 4));
label_3f0a34:
    // 0x3f0a34: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x3f0a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_3f0a38:
    // 0x3f0a38: 0xc62a0018  lwc1        $f10, 0x18($s1)
    ctx->pc = 0x3f0a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_3f0a3c:
    // 0x3f0a3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f0a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f0a40:
    // 0x3f0a40: 0xc6290014  lwc1        $f9, 0x14($s1)
    ctx->pc = 0x3f0a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_3f0a44:
    // 0x3f0a44: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3f0a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3f0a48:
    // 0x3f0a48: 0xc6280010  lwc1        $f8, 0x10($s1)
    ctx->pc = 0x3f0a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_3f0a4c:
    // 0x3f0a4c: 0xc7a700a0  lwc1        $f7, 0xA0($sp)
    ctx->pc = 0x3f0a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3f0a50:
    // 0x3f0a50: 0xc7a600a4  lwc1        $f6, 0xA4($sp)
    ctx->pc = 0x3f0a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3f0a54:
    // 0x3f0a54: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x3f0a54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_3f0a58:
    // 0x3f0a58: 0xafaa0178  sw          $t2, 0x178($sp)
    ctx->pc = 0x3f0a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 10));
label_3f0a5c:
    // 0x3f0a5c: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x3f0a5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_3f0a60:
    // 0x3f0a60: 0xa3a90180  sb          $t1, 0x180($sp)
    ctx->pc = 0x3f0a60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 9));
label_3f0a64:
    // 0x3f0a64: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x3f0a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_3f0a68:
    // 0x3f0a68: 0xafa8017c  sw          $t0, 0x17C($sp)
    ctx->pc = 0x3f0a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 8));
label_3f0a6c:
    // 0x3f0a6c: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x3f0a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f0a70:
    // 0x3f0a70: 0xa3a70182  sb          $a3, 0x182($sp)
    ctx->pc = 0x3f0a70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 386), (uint8_t)GPR_U32(ctx, 7));
label_3f0a74:
    // 0x3f0a74: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x3f0a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f0a78:
    // 0x3f0a78: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x3f0a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_3f0a7c:
    // 0x3f0a7c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x3f0a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f0a80:
    // 0x3f0a80: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x3f0a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_3f0a84:
    // 0x3f0a84: 0xe7a20140  swc1        $f2, 0x140($sp)
    ctx->pc = 0x3f0a84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_3f0a88:
    // 0x3f0a88: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x3f0a88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_3f0a8c:
    // 0x3f0a8c: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x3f0a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_3f0a90:
    // 0x3f0a90: 0xc7a200cc  lwc1        $f2, 0xCC($sp)
    ctx->pc = 0x3f0a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f0a94:
    // 0x3f0a94: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x3f0a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f0a98:
    // 0x3f0a98: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x3f0a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f0a9c:
    // 0x3f0a9c: 0xe7a2014c  swc1        $f2, 0x14C($sp)
    ctx->pc = 0x3f0a9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_3f0aa0:
    // 0x3f0aa0: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x3f0aa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_3f0aa4:
    // 0x3f0aa4: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x3f0aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_3f0aa8:
    // 0x3f0aa8: 0xc7a500a8  lwc1        $f5, 0xA8($sp)
    ctx->pc = 0x3f0aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3f0aac:
    // 0x3f0aac: 0xc7a400ac  lwc1        $f4, 0xAC($sp)
    ctx->pc = 0x3f0aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3f0ab0:
    // 0x3f0ab0: 0xc7a300b0  lwc1        $f3, 0xB0($sp)
    ctx->pc = 0x3f0ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3f0ab4:
    // 0x3f0ab4: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x3f0ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f0ab8:
    // 0x3f0ab8: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x3f0ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f0abc:
    // 0x3f0abc: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x3f0abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f0ac0:
    // 0x3f0ac0: 0xe7a800e0  swc1        $f8, 0xE0($sp)
    ctx->pc = 0x3f0ac0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_3f0ac4:
    // 0x3f0ac4: 0xe7a900e4  swc1        $f9, 0xE4($sp)
    ctx->pc = 0x3f0ac4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_3f0ac8:
    // 0x3f0ac8: 0xe7aa00e8  swc1        $f10, 0xE8($sp)
    ctx->pc = 0x3f0ac8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_3f0acc:
    // 0x3f0acc: 0xe7a70120  swc1        $f7, 0x120($sp)
    ctx->pc = 0x3f0accu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_3f0ad0:
    // 0x3f0ad0: 0xe7a60124  swc1        $f6, 0x124($sp)
    ctx->pc = 0x3f0ad0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_3f0ad4:
    // 0x3f0ad4: 0xe7a50128  swc1        $f5, 0x128($sp)
    ctx->pc = 0x3f0ad4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_3f0ad8:
    // 0x3f0ad8: 0xe7a4012c  swc1        $f4, 0x12C($sp)
    ctx->pc = 0x3f0ad8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_3f0adc:
    // 0x3f0adc: 0xe7a30130  swc1        $f3, 0x130($sp)
    ctx->pc = 0x3f0adcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_3f0ae0:
    // 0x3f0ae0: 0xe7a20158  swc1        $f2, 0x158($sp)
    ctx->pc = 0x3f0ae0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_3f0ae4:
    // 0x3f0ae4: 0xe7a1015c  swc1        $f1, 0x15C($sp)
    ctx->pc = 0x3f0ae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_3f0ae8:
    // 0x3f0ae8: 0xc0a7a88  jal         func_29EA20
label_3f0aec:
    if (ctx->pc == 0x3F0AECu) {
        ctx->pc = 0x3F0AECu;
            // 0x3f0aec: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->pc = 0x3F0AF0u;
        goto label_3f0af0;
    }
    ctx->pc = 0x3F0AE8u;
    SET_GPR_U32(ctx, 31, 0x3F0AF0u);
    ctx->pc = 0x3F0AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0AE8u;
            // 0x3f0aec: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0AF0u; }
        if (ctx->pc != 0x3F0AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0AF0u; }
        if (ctx->pc != 0x3F0AF0u) { return; }
    }
    ctx->pc = 0x3F0AF0u;
label_3f0af0:
    // 0x3f0af0: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x3f0af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_3f0af4:
    // 0x3f0af4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f0af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f0af8:
    // 0x3f0af8: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_3f0afc:
    if (ctx->pc == 0x3F0AFCu) {
        ctx->pc = 0x3F0AFCu;
            // 0x3f0afc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3F0B00u;
        goto label_3f0b00;
    }
    ctx->pc = 0x3F0AF8u;
    {
        const bool branch_taken_0x3f0af8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0AF8u;
            // 0x3f0afc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0af8) {
            ctx->pc = 0x3F0B48u;
            goto label_3f0b48;
        }
    }
    ctx->pc = 0x3F0B00u;
label_3f0b00:
    // 0x3f0b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0b04:
    // 0x3f0b04: 0xc088ef4  jal         func_223BD0
label_3f0b08:
    if (ctx->pc == 0x3F0B08u) {
        ctx->pc = 0x3F0B08u;
            // 0x3f0b08: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3F0B0Cu;
        goto label_3f0b0c;
    }
    ctx->pc = 0x3F0B04u;
    SET_GPR_U32(ctx, 31, 0x3F0B0Cu);
    ctx->pc = 0x3F0B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0B04u;
            // 0x3f0b08: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0B0Cu; }
        if (ctx->pc != 0x3F0B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0B0Cu; }
        if (ctx->pc != 0x3F0B0Cu) { return; }
    }
    ctx->pc = 0x3F0B0Cu;
label_3f0b0c:
    // 0x3f0b0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3f0b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3f0b10:
    // 0x3f0b10: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3f0b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3f0b14:
    // 0x3f0b14: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x3f0b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_3f0b18:
    // 0x3f0b18: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x3f0b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_3f0b1c:
    // 0x3f0b1c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3f0b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3f0b20:
    // 0x3f0b20: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x3f0b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_3f0b24:
    // 0x3f0b24: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f0b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f0b28:
    // 0x3f0b28: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3f0b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3f0b2c:
    // 0x3f0b2c: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x3f0b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_3f0b30:
    // 0x3f0b30: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x3f0b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_3f0b34:
    // 0x3f0b34: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x3f0b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_3f0b38:
    // 0x3f0b38: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3f0b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3f0b3c:
    // 0x3f0b3c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x3f0b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3f0b40:
    // 0x3f0b40: 0xc088b38  jal         func_222CE0
label_3f0b44:
    if (ctx->pc == 0x3F0B44u) {
        ctx->pc = 0x3F0B44u;
            // 0x3f0b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F0B48u;
        goto label_3f0b48;
    }
    ctx->pc = 0x3F0B40u;
    SET_GPR_U32(ctx, 31, 0x3F0B48u);
    ctx->pc = 0x3F0B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0B40u;
            // 0x3f0b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0B48u; }
        if (ctx->pc != 0x3F0B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0B48u; }
        if (ctx->pc != 0x3F0B48u) { return; }
    }
    ctx->pc = 0x3F0B48u;
label_3f0b48:
    // 0x3f0b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0b4c:
    // 0x3f0b4c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3f0b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3f0b50:
    // 0x3f0b50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3f0b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f0b54:
    // 0x3f0b54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f0b54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f0b58:
    // 0x3f0b58: 0xc08914c  jal         func_224530
label_3f0b5c:
    if (ctx->pc == 0x3F0B5Cu) {
        ctx->pc = 0x3F0B5Cu;
            // 0x3f0b5c: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x3F0B60u;
        goto label_3f0b60;
    }
    ctx->pc = 0x3F0B58u;
    SET_GPR_U32(ctx, 31, 0x3F0B60u);
    ctx->pc = 0x3F0B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0B58u;
            // 0x3f0b5c: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0B60u; }
        if (ctx->pc != 0x3F0B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0B60u; }
        if (ctx->pc != 0x3F0B60u) { return; }
    }
    ctx->pc = 0x3F0B60u;
label_3f0b60:
    // 0x3f0b60: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x3f0b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f0b64:
    // 0x3f0b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0b68:
    // 0x3f0b68: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x3f0b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f0b6c:
    // 0x3f0b6c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3f0b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3f0b70:
    // 0x3f0b70: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x3f0b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f0b74:
    // 0x3f0b74: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3f0b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3f0b78:
    // 0x3f0b78: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3f0b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3f0b7c:
    // 0x3f0b7c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x3f0b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_3f0b80:
    // 0x3f0b80: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x3f0b80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3f0b84:
    // 0x3f0b84: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x3f0b84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3f0b88:
    // 0x3f0b88: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x3f0b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3f0b8c:
    // 0x3f0b8c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x3f0b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f0b90:
    // 0x3f0b90: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x3f0b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f0b94:
    // 0x3f0b94: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x3f0b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f0b98:
    // 0x3f0b98: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3f0b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3f0b9c:
    // 0x3f0b9c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3f0b9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3f0ba0:
    // 0x3f0ba0: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x3f0ba0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3f0ba4:
    // 0x3f0ba4: 0xc0892b0  jal         func_224AC0
label_3f0ba8:
    if (ctx->pc == 0x3F0BA8u) {
        ctx->pc = 0x3F0BA8u;
            // 0x3f0ba8: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x3F0BACu;
        goto label_3f0bac;
    }
    ctx->pc = 0x3F0BA4u;
    SET_GPR_U32(ctx, 31, 0x3F0BACu);
    ctx->pc = 0x3F0BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0BA4u;
            // 0x3f0ba8: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0BACu; }
        if (ctx->pc != 0x3F0BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0BACu; }
        if (ctx->pc != 0x3F0BACu) { return; }
    }
    ctx->pc = 0x3F0BACu;
label_3f0bac:
    // 0x3f0bac: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x3f0bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_3f0bb0:
    // 0x3f0bb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0bb4:
    // 0x3f0bb4: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x3f0bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_3f0bb8:
    // 0x3f0bb8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3f0bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3f0bbc:
    // 0x3f0bbc: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x3f0bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_3f0bc0:
    // 0x3f0bc0: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3f0bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3f0bc4:
    // 0x3f0bc4: 0xc0891d8  jal         func_224760
label_3f0bc8:
    if (ctx->pc == 0x3F0BC8u) {
        ctx->pc = 0x3F0BC8u;
            // 0x3f0bc8: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x3F0BCCu;
        goto label_3f0bcc;
    }
    ctx->pc = 0x3F0BC4u;
    SET_GPR_U32(ctx, 31, 0x3F0BCCu);
    ctx->pc = 0x3F0BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0BC4u;
            // 0x3f0bc8: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0BCCu; }
        if (ctx->pc != 0x3F0BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0BCCu; }
        if (ctx->pc != 0x3F0BCCu) { return; }
    }
    ctx->pc = 0x3F0BCCu;
label_3f0bcc:
    // 0x3f0bcc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f0bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f0bd0:
    // 0x3f0bd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f0bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0bd4:
    // 0x3f0bd4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3f0bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3f0bd8:
    // 0x3f0bd8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3f0bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3f0bdc:
    // 0x3f0bdc: 0xc08c164  jal         func_230590
label_3f0be0:
    if (ctx->pc == 0x3F0BE0u) {
        ctx->pc = 0x3F0BE0u;
            // 0x3f0be0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F0BE4u;
        goto label_3f0be4;
    }
    ctx->pc = 0x3F0BDCu;
    SET_GPR_U32(ctx, 31, 0x3F0BE4u);
    ctx->pc = 0x3F0BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0BDCu;
            // 0x3f0be0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0BE4u; }
        if (ctx->pc != 0x3F0BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0BE4u; }
        if (ctx->pc != 0x3F0BE4u) { return; }
    }
    ctx->pc = 0x3F0BE4u;
label_3f0be4:
    // 0x3f0be4: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x3f0be4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_3f0be8:
    // 0x3f0be8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f0be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f0bec:
    // 0x3f0bec: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3f0becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3f0bf0:
    // 0x3f0bf0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x3f0bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3f0bf4:
    // 0x3f0bf4: 0xc0a7a88  jal         func_29EA20
label_3f0bf8:
    if (ctx->pc == 0x3F0BF8u) {
        ctx->pc = 0x3F0BF8u;
            // 0x3f0bf8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x3F0BFCu;
        goto label_3f0bfc;
    }
    ctx->pc = 0x3F0BF4u;
    SET_GPR_U32(ctx, 31, 0x3F0BFCu);
    ctx->pc = 0x3F0BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0BF4u;
            // 0x3f0bf8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0BFCu; }
        if (ctx->pc != 0x3F0BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0BFCu; }
        if (ctx->pc != 0x3F0BFCu) { return; }
    }
    ctx->pc = 0x3F0BFCu;
label_3f0bfc:
    // 0x3f0bfc: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x3f0bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3f0c00:
    // 0x3f0c00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f0c00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f0c04:
    // 0x3f0c04: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_3f0c08:
    if (ctx->pc == 0x3F0C08u) {
        ctx->pc = 0x3F0C08u;
            // 0x3f0c08: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3F0C0Cu;
        goto label_3f0c0c;
    }
    ctx->pc = 0x3F0C04u;
    {
        const bool branch_taken_0x3f0c04 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0C04u;
            // 0x3f0c08: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0c04) {
            ctx->pc = 0x3F0C28u;
            goto label_3f0c28;
        }
    }
    ctx->pc = 0x3F0C0Cu;
label_3f0c0c:
    // 0x3f0c0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f0c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f0c10:
    // 0x3f0c10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f0c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0c14:
    // 0x3f0c14: 0xc0869d0  jal         func_21A740
label_3f0c18:
    if (ctx->pc == 0x3F0C18u) {
        ctx->pc = 0x3F0C18u;
            // 0x3f0c18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F0C1Cu;
        goto label_3f0c1c;
    }
    ctx->pc = 0x3F0C14u;
    SET_GPR_U32(ctx, 31, 0x3F0C1Cu);
    ctx->pc = 0x3F0C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0C14u;
            // 0x3f0c18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0C1Cu; }
        if (ctx->pc != 0x3F0C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0C1Cu; }
        if (ctx->pc != 0x3F0C1Cu) { return; }
    }
    ctx->pc = 0x3F0C1Cu;
label_3f0c1c:
    // 0x3f0c1c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3f0c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3f0c20:
    // 0x3f0c20: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x3f0c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_3f0c24:
    // 0x3f0c24: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3f0c24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3f0c28:
    // 0x3f0c28: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x3f0c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_3f0c2c:
    // 0x3f0c2c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f0c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f0c30:
    // 0x3f0c30: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3f0c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3f0c34:
    // 0x3f0c34: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3f0c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3f0c38:
    // 0x3f0c38: 0xc08c650  jal         func_231940
label_3f0c3c:
    if (ctx->pc == 0x3F0C3Cu) {
        ctx->pc = 0x3F0C3Cu;
            // 0x3f0c3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F0C40u;
        goto label_3f0c40;
    }
    ctx->pc = 0x3F0C38u;
    SET_GPR_U32(ctx, 31, 0x3F0C40u);
    ctx->pc = 0x3F0C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0C38u;
            // 0x3f0c3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0C40u; }
        if (ctx->pc != 0x3F0C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0C40u; }
        if (ctx->pc != 0x3F0C40u) { return; }
    }
    ctx->pc = 0x3F0C40u;
label_3f0c40:
    // 0x3f0c40: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x3f0c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_3f0c44:
    // 0x3f0c44: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3f0c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_3f0c48:
    // 0x3f0c48: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x3f0c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_3f0c4c:
    // 0x3f0c4c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3f0c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3f0c50:
    // 0x3f0c50: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f0c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f0c54:
    // 0x3f0c54: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x3f0c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
label_3f0c58:
    // 0x3f0c58: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3f0c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3f0c5c:
    // 0x3f0c5c: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x3f0c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_3f0c60:
    // 0x3f0c60: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x3f0c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
label_3f0c64:
    // 0x3f0c64: 0xc0a7a88  jal         func_29EA20
label_3f0c68:
    if (ctx->pc == 0x3F0C68u) {
        ctx->pc = 0x3F0C68u;
            // 0x3f0c68: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x3F0C6Cu;
        goto label_3f0c6c;
    }
    ctx->pc = 0x3F0C64u;
    SET_GPR_U32(ctx, 31, 0x3F0C6Cu);
    ctx->pc = 0x3F0C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0C64u;
            // 0x3f0c68: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0C6Cu; }
        if (ctx->pc != 0x3F0C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0C6Cu; }
        if (ctx->pc != 0x3F0C6Cu) { return; }
    }
    ctx->pc = 0x3F0C6Cu;
label_3f0c6c:
    // 0x3f0c6c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3f0c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3f0c70:
    // 0x3f0c70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f0c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f0c74:
    // 0x3f0c74: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_3f0c78:
    if (ctx->pc == 0x3F0C78u) {
        ctx->pc = 0x3F0C78u;
            // 0x3f0c78: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3F0C7Cu;
        goto label_3f0c7c;
    }
    ctx->pc = 0x3F0C74u;
    {
        const bool branch_taken_0x3f0c74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0C74u;
            // 0x3f0c78: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0c74) {
            ctx->pc = 0x3F0C94u;
            goto label_3f0c94;
        }
    }
    ctx->pc = 0x3F0C7Cu;
label_3f0c7c:
    // 0x3f0c7c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3f0c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3f0c80:
    // 0x3f0c80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0c84:
    // 0x3f0c84: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x3f0c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3f0c88:
    // 0x3f0c88: 0xc0804bc  jal         func_2012F0
label_3f0c8c:
    if (ctx->pc == 0x3F0C8Cu) {
        ctx->pc = 0x3F0C8Cu;
            // 0x3f0c8c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3F0C90u;
        goto label_3f0c90;
    }
    ctx->pc = 0x3F0C88u;
    SET_GPR_U32(ctx, 31, 0x3F0C90u);
    ctx->pc = 0x3F0C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0C88u;
            // 0x3f0c8c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0C90u; }
        if (ctx->pc != 0x3F0C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0C90u; }
        if (ctx->pc != 0x3F0C90u) { return; }
    }
    ctx->pc = 0x3F0C90u;
label_3f0c90:
    // 0x3f0c90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f0c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f0c94:
    // 0x3f0c94: 0xc040180  jal         func_100600
label_3f0c98:
    if (ctx->pc == 0x3F0C98u) {
        ctx->pc = 0x3F0C98u;
            // 0x3f0c98: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x3F0C9Cu;
        goto label_3f0c9c;
    }
    ctx->pc = 0x3F0C94u;
    SET_GPR_U32(ctx, 31, 0x3F0C9Cu);
    ctx->pc = 0x3F0C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0C94u;
            // 0x3f0c98: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0C9Cu; }
        if (ctx->pc != 0x3F0C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0C9Cu; }
        if (ctx->pc != 0x3F0C9Cu) { return; }
    }
    ctx->pc = 0x3F0C9Cu;
label_3f0c9c:
    // 0x3f0c9c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_3f0ca0:
    if (ctx->pc == 0x3F0CA0u) {
        ctx->pc = 0x3F0CA0u;
            // 0x3f0ca0: 0xae220138  sw          $v0, 0x138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
        ctx->pc = 0x3F0CA4u;
        goto label_3f0ca4;
    }
    ctx->pc = 0x3F0C9Cu;
    {
        const bool branch_taken_0x3f0c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f0c9c) {
            ctx->pc = 0x3F0CA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0C9Cu;
            // 0x3f0ca0: 0xae220138  sw          $v0, 0x138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F0CE0u;
            goto label_3f0ce0;
        }
    }
    ctx->pc = 0x3F0CA4u;
label_3f0ca4:
    // 0x3f0ca4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x3f0ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_3f0ca8:
    // 0x3f0ca8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3f0ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3f0cac:
    // 0x3f0cac: 0x2484cfe0  addiu       $a0, $a0, -0x3020
    ctx->pc = 0x3f0cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954976));
label_3f0cb0:
    // 0x3f0cb0: 0x246324a0  addiu       $v1, $v1, 0x24A0
    ctx->pc = 0x3f0cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9376));
label_3f0cb4:
    // 0x3f0cb4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3f0cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_3f0cb8:
    // 0x3f0cb8: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x3f0cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_3f0cbc:
    // 0x3f0cbc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3f0cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3f0cc0:
    // 0x3f0cc0: 0x24842460  addiu       $a0, $a0, 0x2460
    ctx->pc = 0x3f0cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9312));
label_3f0cc4:
    // 0x3f0cc4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3f0cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3f0cc8:
    // 0x3f0cc8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3f0cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_3f0ccc:
    // 0x3f0ccc: 0x2463a040  addiu       $v1, $v1, -0x5FC0
    ctx->pc = 0x3f0cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942784));
label_3f0cd0:
    // 0x3f0cd0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3f0cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_3f0cd4:
    // 0x3f0cd4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3f0cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3f0cd8:
    // 0x3f0cd8: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x3f0cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
label_3f0cdc:
    // 0x3f0cdc: 0xae220138  sw          $v0, 0x138($s1)
    ctx->pc = 0x3f0cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
label_3f0ce0:
    // 0x3f0ce0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f0ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f0ce4:
    // 0x3f0ce4: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x3f0ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3f0ce8:
    // 0x3f0ce8: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x3f0ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3f0cec:
    // 0x3f0cec: 0xc0d37ec  jal         func_34DFB0
label_3f0cf0:
    if (ctx->pc == 0x3F0CF0u) {
        ctx->pc = 0x3F0CF0u;
            // 0x3f0cf0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F0CF4u;
        goto label_3f0cf4;
    }
    ctx->pc = 0x3F0CECu;
    SET_GPR_U32(ctx, 31, 0x3F0CF4u);
    ctx->pc = 0x3F0CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0CECu;
            // 0x3f0cf0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0CF4u; }
        if (ctx->pc != 0x3F0CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0CF4u; }
        if (ctx->pc != 0x3F0CF4u) { return; }
    }
    ctx->pc = 0x3F0CF4u;
label_3f0cf4:
    // 0x3f0cf4: 0xae30013c  sw          $s0, 0x13C($s1)
    ctx->pc = 0x3f0cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 316), GPR_U32(ctx, 16));
label_3f0cf8:
    // 0x3f0cf8: 0x3c023d08  lui         $v0, 0x3D08
    ctx->pc = 0x3f0cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15624 << 16));
label_3f0cfc:
    // 0x3f0cfc: 0xae200144  sw          $zero, 0x144($s1)
    ctx->pc = 0x3f0cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 0));
label_3f0d00:
    // 0x3f0d00: 0x34448889  ori         $a0, $v0, 0x8889
    ctx->pc = 0x3f0d00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_3f0d04:
    // 0x3f0d04: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x3f0d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3f0d08:
    // 0x3f0d08: 0xa22000d8  sb          $zero, 0xD8($s1)
    ctx->pc = 0x3f0d08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 216), (uint8_t)GPR_U32(ctx, 0));
label_3f0d0c:
    // 0x3f0d0c: 0xae2300dc  sw          $v1, 0xDC($s1)
    ctx->pc = 0x3f0d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 3));
label_3f0d10:
    // 0x3f0d10: 0x3c023bb6  lui         $v0, 0x3BB6
    ctx->pc = 0x3f0d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15286 << 16));
label_3f0d14:
    // 0x3f0d14: 0xae200120  sw          $zero, 0x120($s1)
    ctx->pc = 0x3f0d14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
label_3f0d18:
    // 0x3f0d18: 0x34450b61  ori         $a1, $v0, 0xB61
    ctx->pc = 0x3f0d18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2913);
label_3f0d1c:
    // 0x3f0d1c: 0xae200124  sw          $zero, 0x124($s1)
    ctx->pc = 0x3f0d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 0));
label_3f0d20:
    // 0x3f0d20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f0d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f0d24:
    // 0x3f0d24: 0xae200128  sw          $zero, 0x128($s1)
    ctx->pc = 0x3f0d24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 0));
label_3f0d28:
    // 0x3f0d28: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x3f0d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_3f0d2c:
    // 0x3f0d2c: 0xae24012c  sw          $a0, 0x12C($s1)
    ctx->pc = 0x3f0d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 4));
label_3f0d30:
    // 0x3f0d30: 0xae250130  sw          $a1, 0x130($s1)
    ctx->pc = 0x3f0d30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 5));
label_3f0d34:
    // 0x3f0d34: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3f0d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3f0d38:
    // 0x3f0d38: 0xae200134  sw          $zero, 0x134($s1)
    ctx->pc = 0x3f0d38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 0));
label_3f0d3c:
    // 0x3f0d3c: 0xa2230068  sb          $v1, 0x68($s1)
    ctx->pc = 0x3f0d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 3));
label_3f0d40:
    // 0x3f0d40: 0xa2200069  sb          $zero, 0x69($s1)
    ctx->pc = 0x3f0d40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 0));
label_3f0d44:
    // 0x3f0d44: 0xa223006a  sb          $v1, 0x6A($s1)
    ctx->pc = 0x3f0d44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 106), (uint8_t)GPR_U32(ctx, 3));
label_3f0d48:
    // 0x3f0d48: 0xa220006b  sb          $zero, 0x6B($s1)
    ctx->pc = 0x3f0d48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 0));
label_3f0d4c:
    // 0x3f0d4c: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x3f0d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_3f0d50:
    // 0x3f0d50: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3f0d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3f0d54:
    // 0x3f0d54: 0xc040180  jal         func_100600
label_3f0d58:
    if (ctx->pc == 0x3F0D58u) {
        ctx->pc = 0x3F0D58u;
            // 0x3f0d58: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x3F0D5Cu;
        goto label_3f0d5c;
    }
    ctx->pc = 0x3F0D54u;
    SET_GPR_U32(ctx, 31, 0x3F0D5Cu);
    ctx->pc = 0x3F0D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0D54u;
            // 0x3f0d58: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0D5Cu; }
        if (ctx->pc != 0x3F0D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0D5Cu; }
        if (ctx->pc != 0x3F0D5Cu) { return; }
    }
    ctx->pc = 0x3F0D5Cu;
label_3f0d5c:
    // 0x3f0d5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f0d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f0d60:
    // 0x3f0d60: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_3f0d64:
    if (ctx->pc == 0x3F0D64u) {
        ctx->pc = 0x3F0D64u;
            // 0x3f0d64: 0x3c024774  lui         $v0, 0x4774 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18292 << 16));
        ctx->pc = 0x3F0D68u;
        goto label_3f0d68;
    }
    ctx->pc = 0x3F0D60u;
    {
        const bool branch_taken_0x3f0d60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f0d60) {
            ctx->pc = 0x3F0D64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0D60u;
            // 0x3f0d64: 0x3c024774  lui         $v0, 0x4774 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18292 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F0DA0u;
            goto label_3f0da0;
        }
    }
    ctx->pc = 0x3F0D68u;
label_3f0d68:
    // 0x3f0d68: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3f0d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3f0d6c:
    // 0x3f0d6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f0d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f0d70:
    // 0x3f0d70: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x3f0d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_3f0d74:
    // 0x3f0d74: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3f0d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3f0d78:
    // 0x3f0d78: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3f0d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3f0d7c:
    // 0x3f0d7c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3f0d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3f0d80:
    // 0x3f0d80: 0xc040138  jal         func_1004E0
label_3f0d84:
    if (ctx->pc == 0x3F0D84u) {
        ctx->pc = 0x3F0D84u;
            // 0x3f0d84: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3F0D88u;
        goto label_3f0d88;
    }
    ctx->pc = 0x3F0D80u;
    SET_GPR_U32(ctx, 31, 0x3F0D88u);
    ctx->pc = 0x3F0D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0D80u;
            // 0x3f0d84: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0D88u; }
        if (ctx->pc != 0x3F0D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0D88u; }
        if (ctx->pc != 0x3F0D88u) { return; }
    }
    ctx->pc = 0x3F0D88u;
label_3f0d88:
    // 0x3f0d88: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3f0d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3f0d8c:
    // 0x3f0d8c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x3f0d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_3f0d90:
    // 0x3f0d90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f0d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f0d94:
    // 0x3f0d94: 0xc04a576  jal         func_1295D8
label_3f0d98:
    if (ctx->pc == 0x3F0D98u) {
        ctx->pc = 0x3F0D98u;
            // 0x3f0d98: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3F0D9Cu;
        goto label_3f0d9c;
    }
    ctx->pc = 0x3F0D94u;
    SET_GPR_U32(ctx, 31, 0x3F0D9Cu);
    ctx->pc = 0x3F0D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0D94u;
            // 0x3f0d98: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0D9Cu; }
        if (ctx->pc != 0x3F0D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0D9Cu; }
        if (ctx->pc != 0x3F0D9Cu) { return; }
    }
    ctx->pc = 0x3F0D9Cu;
label_3f0d9c:
    // 0x3f0d9c: 0x3c024774  lui         $v0, 0x4774
    ctx->pc = 0x3f0d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18292 << 16));
label_3f0da0:
    // 0x3f0da0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3f0da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3f0da4:
    // 0x3f0da4: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x3f0da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_3f0da8:
    // 0x3f0da8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0dac:
    // 0x3f0dac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3f0dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f0db0:
    // 0x3f0db0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f0db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f0db4:
    // 0x3f0db4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x3f0db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_3f0db8:
    // 0x3f0db8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f0db8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f0dbc:
    // 0x3f0dbc: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x3f0dbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f0dc0:
    // 0x3f0dc0: 0x344615ae  ori         $a2, $v0, 0x15AE
    ctx->pc = 0x3f0dc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5550);
label_3f0dc4:
    // 0x3f0dc4: 0xc122cd8  jal         func_48B360
label_3f0dc8:
    if (ctx->pc == 0x3F0DC8u) {
        ctx->pc = 0x3F0DC8u;
            // 0x3f0dc8: 0xae300140  sw          $s0, 0x140($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 16));
        ctx->pc = 0x3F0DCCu;
        goto label_3f0dcc;
    }
    ctx->pc = 0x3F0DC4u;
    SET_GPR_U32(ctx, 31, 0x3F0DCCu);
    ctx->pc = 0x3F0DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0DC4u;
            // 0x3f0dc8: 0xae300140  sw          $s0, 0x140($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0DCCu; }
        if (ctx->pc != 0x3F0DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0DCCu; }
        if (ctx->pc != 0x3F0DCCu) { return; }
    }
    ctx->pc = 0x3F0DCCu;
label_3f0dcc:
    // 0x3f0dcc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f0dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3f0dd0:
    // 0x3f0dd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f0dd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f0dd4:
    // 0x3f0dd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f0dd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f0dd8:
    // 0x3f0dd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f0dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f0ddc:
    // 0x3f0ddc: 0x3e00008  jr          $ra
label_3f0de0:
    if (ctx->pc == 0x3F0DE0u) {
        ctx->pc = 0x3F0DE0u;
            // 0x3f0de0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x3F0DE4u;
        goto label_3f0de4;
    }
    ctx->pc = 0x3F0DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F0DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0DDCu;
            // 0x3f0de0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F0DE4u;
label_3f0de4:
    // 0x3f0de4: 0x0  nop
    ctx->pc = 0x3f0de4u;
    // NOP
label_3f0de8:
    // 0x3f0de8: 0x0  nop
    ctx->pc = 0x3f0de8u;
    // NOP
label_3f0dec:
    // 0x3f0dec: 0x0  nop
    ctx->pc = 0x3f0decu;
    // NOP
label_3f0df0:
    // 0x3f0df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f0df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3f0df4:
    // 0x3f0df4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f0df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3f0df8:
    // 0x3f0df8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f0df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f0dfc:
    // 0x3f0dfc: 0xc0e3580  jal         func_38D600
label_3f0e00:
    if (ctx->pc == 0x3F0E00u) {
        ctx->pc = 0x3F0E00u;
            // 0x3f0e00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F0E04u;
        goto label_3f0e04;
    }
    ctx->pc = 0x3F0DFCu;
    SET_GPR_U32(ctx, 31, 0x3F0E04u);
    ctx->pc = 0x3F0E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0DFCu;
            // 0x3f0e00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0E04u; }
        if (ctx->pc != 0x3F0E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0E04u; }
        if (ctx->pc != 0x3F0E04u) { return; }
    }
    ctx->pc = 0x3F0E04u;
label_3f0e04:
    // 0x3f0e04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3f0e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f0e08:
    // 0x3f0e08: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x3f0e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_3f0e0c:
    // 0x3f0e0c: 0xae04008c  sw          $a0, 0x8C($s0)
    ctx->pc = 0x3f0e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 4));
label_3f0e10:
    // 0x3f0e10: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x3f0e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
label_3f0e14:
    // 0x3f0e14: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x3f0e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
label_3f0e18:
    // 0x3f0e18: 0x3c034443  lui         $v1, 0x4443
    ctx->pc = 0x3f0e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17475 << 16));
label_3f0e1c:
    // 0x3f0e1c: 0xae040078  sw          $a0, 0x78($s0)
    ctx->pc = 0x3f0e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
label_3f0e20:
    // 0x3f0e20: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x3f0e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_3f0e24:
    // 0x3f0e24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f0e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3f0e28:
    // 0x3f0e28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f0e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f0e2c:
    // 0x3f0e2c: 0x3e00008  jr          $ra
label_3f0e30:
    if (ctx->pc == 0x3F0E30u) {
        ctx->pc = 0x3F0E30u;
            // 0x3f0e30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3F0E34u;
        goto label_3f0e34;
    }
    ctx->pc = 0x3F0E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F0E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0E2Cu;
            // 0x3f0e30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F0E34u;
label_3f0e34:
    // 0x3f0e34: 0x0  nop
    ctx->pc = 0x3f0e34u;
    // NOP
label_3f0e38:
    // 0x3f0e38: 0x0  nop
    ctx->pc = 0x3f0e38u;
    // NOP
label_3f0e3c:
    // 0x3f0e3c: 0x0  nop
    ctx->pc = 0x3f0e3cu;
    // NOP
label_3f0e40:
    // 0x3f0e40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f0e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3f0e44:
    // 0x3f0e44: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3f0e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f0e48:
    // 0x3f0e48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f0e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3f0e4c:
    // 0x3f0e4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f0e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f0e50:
    // 0x3f0e50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f0e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f0e54:
    // 0x3f0e54: 0xc0baaa0  jal         func_2EAA80
label_3f0e58:
    if (ctx->pc == 0x3F0E58u) {
        ctx->pc = 0x3F0E58u;
            // 0x3f0e58: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x3F0E5Cu;
        goto label_3f0e5c;
    }
    ctx->pc = 0x3F0E54u;
    SET_GPR_U32(ctx, 31, 0x3F0E5Cu);
    ctx->pc = 0x3F0E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0E54u;
            // 0x3f0e58: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0E5Cu; }
        if (ctx->pc != 0x3F0E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0E5Cu; }
        if (ctx->pc != 0x3F0E5Cu) { return; }
    }
    ctx->pc = 0x3F0E5Cu;
label_3f0e5c:
    // 0x3f0e5c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3f0e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3f0e60:
    // 0x3f0e60: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x3f0e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3f0e64:
    // 0x3f0e64: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x3f0e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_3f0e68:
    // 0x3f0e68: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f0e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f0e6c:
    // 0x3f0e6c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3f0e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3f0e70:
    // 0x3f0e70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3f0e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3f0e74:
    // 0x3f0e74: 0xc04cc90  jal         func_133240
label_3f0e78:
    if (ctx->pc == 0x3F0E78u) {
        ctx->pc = 0x3F0E78u;
            // 0x3f0e78: 0x24460200  addiu       $a2, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->pc = 0x3F0E7Cu;
        goto label_3f0e7c;
    }
    ctx->pc = 0x3F0E74u;
    SET_GPR_U32(ctx, 31, 0x3F0E7Cu);
    ctx->pc = 0x3F0E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0E74u;
            // 0x3f0e78: 0x24460200  addiu       $a2, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0E7Cu; }
        if (ctx->pc != 0x3F0E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0E7Cu; }
        if (ctx->pc != 0x3F0E7Cu) { return; }
    }
    ctx->pc = 0x3F0E7Cu;
label_3f0e7c:
    // 0x3f0e7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f0e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3f0e80:
    // 0x3f0e80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f0e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f0e84:
    // 0x3f0e84: 0x3e00008  jr          $ra
label_3f0e88:
    if (ctx->pc == 0x3F0E88u) {
        ctx->pc = 0x3F0E88u;
            // 0x3f0e88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3F0E8Cu;
        goto label_3f0e8c;
    }
    ctx->pc = 0x3F0E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F0E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0E84u;
            // 0x3f0e88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F0E8Cu;
label_3f0e8c:
    // 0x3f0e8c: 0x0  nop
    ctx->pc = 0x3f0e8cu;
    // NOP
label_3f0e90:
    // 0x3f0e90: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x3f0e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_3f0e94:
    // 0x3f0e94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f0e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f0e98:
    // 0x3f0e98: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_3f0e9c:
    if (ctx->pc == 0x3F0E9Cu) {
        ctx->pc = 0x3F0EA0u;
        goto label_3f0ea0;
    }
    ctx->pc = 0x3F0E98u;
    {
        const bool branch_taken_0x3f0e98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f0e98) {
            ctx->pc = 0x3F0EA8u;
            goto label_3f0ea8;
        }
    }
    ctx->pc = 0x3F0EA0u;
label_3f0ea0:
    // 0x3f0ea0: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_3f0ea4:
    if (ctx->pc == 0x3F0EA4u) {
        ctx->pc = 0x3F0EA4u;
            // 0x3f0ea4: 0xac8300d0  sw          $v1, 0xD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
        ctx->pc = 0x3F0EA8u;
        goto label_3f0ea8;
    }
    ctx->pc = 0x3F0EA0u;
    {
        const bool branch_taken_0x3f0ea0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f0ea0) {
            ctx->pc = 0x3F0EA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0EA0u;
            // 0x3f0ea4: 0xac8300d0  sw          $v1, 0xD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F0EA8u;
            goto label_3f0ea8;
        }
    }
    ctx->pc = 0x3F0EA8u;
label_3f0ea8:
    // 0x3f0ea8: 0x3e00008  jr          $ra
label_3f0eac:
    if (ctx->pc == 0x3F0EACu) {
        ctx->pc = 0x3F0EB0u;
        goto label_3f0eb0;
    }
    ctx->pc = 0x3F0EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F0EB0u;
label_3f0eb0:
    // 0x3f0eb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f0eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3f0eb4:
    // 0x3f0eb4: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x3f0eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_3f0eb8:
    // 0x3f0eb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f0eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3f0ebc:
    // 0x3f0ebc: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x3f0ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_3f0ec0:
    // 0x3f0ec0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f0ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f0ec4:
    // 0x3f0ec4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f0ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f0ec8:
    // 0x3f0ec8: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x3f0ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_3f0ecc:
    // 0x3f0ecc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f0eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f0ed0:
    // 0x3f0ed0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3f0ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f0ed4:
    // 0x3f0ed4: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x3f0ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_3f0ed8:
    // 0x3f0ed8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3f0ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3f0edc:
    // 0x3f0edc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3f0edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3f0ee0:
    // 0x3f0ee0: 0xc08bff0  jal         func_22FFC0
label_3f0ee4:
    if (ctx->pc == 0x3F0EE4u) {
        ctx->pc = 0x3F0EE4u;
            // 0x3f0ee4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F0EE8u;
        goto label_3f0ee8;
    }
    ctx->pc = 0x3F0EE0u;
    SET_GPR_U32(ctx, 31, 0x3F0EE8u);
    ctx->pc = 0x3F0EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0EE0u;
            // 0x3f0ee4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0EE8u; }
        if (ctx->pc != 0x3F0EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0EE8u; }
        if (ctx->pc != 0x3F0EE8u) { return; }
    }
    ctx->pc = 0x3F0EE8u;
label_3f0ee8:
    // 0x3f0ee8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3f0ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3f0eec:
    // 0x3f0eec: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3f0eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3f0ef0:
    // 0x3f0ef0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3f0ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f0ef4:
    // 0x3f0ef4: 0xc08914c  jal         func_224530
label_3f0ef8:
    if (ctx->pc == 0x3F0EF8u) {
        ctx->pc = 0x3F0EF8u;
            // 0x3f0ef8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F0EFCu;
        goto label_3f0efc;
    }
    ctx->pc = 0x3F0EF4u;
    SET_GPR_U32(ctx, 31, 0x3F0EFCu);
    ctx->pc = 0x3F0EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0EF4u;
            // 0x3f0ef8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0EFCu; }
        if (ctx->pc != 0x3F0EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0EFCu; }
        if (ctx->pc != 0x3F0EFCu) { return; }
    }
    ctx->pc = 0x3F0EFCu;
label_3f0efc:
    // 0x3f0efc: 0xc0e393c  jal         func_38E4F0
label_3f0f00:
    if (ctx->pc == 0x3F0F00u) {
        ctx->pc = 0x3F0F00u;
            // 0x3f0f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F0F04u;
        goto label_3f0f04;
    }
    ctx->pc = 0x3F0EFCu;
    SET_GPR_U32(ctx, 31, 0x3F0F04u);
    ctx->pc = 0x3F0F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0EFCu;
            // 0x3f0f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0F04u; }
        if (ctx->pc != 0x3F0F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0F04u; }
        if (ctx->pc != 0x3F0F04u) { return; }
    }
    ctx->pc = 0x3F0F04u;
label_3f0f04:
    // 0x3f0f04: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x3f0f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_3f0f08:
    // 0x3f0f08: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x3f0f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3f0f0c:
    // 0x3f0f0c: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x3f0f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
label_3f0f10:
    // 0x3f0f10: 0xa20000d8  sb          $zero, 0xD8($s0)
    ctx->pc = 0x3f0f10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 216), (uint8_t)GPR_U32(ctx, 0));
label_3f0f14:
    // 0x3f0f14: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x3f0f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
label_3f0f18:
    // 0x3f0f18: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x3f0f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
label_3f0f1c:
    // 0x3f0f1c: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x3f0f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
label_3f0f20:
    // 0x3f0f20: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x3f0f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
label_3f0f24:
    // 0x3f0f24: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x3f0f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
label_3f0f28:
    // 0x3f0f28: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x3f0f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_3f0f2c:
    // 0x3f0f2c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_3f0f30:
    if (ctx->pc == 0x3F0F30u) {
        ctx->pc = 0x3F0F30u;
            // 0x3f0f30: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3F0F34u;
        goto label_3f0f34;
    }
    ctx->pc = 0x3F0F2Cu;
    {
        const bool branch_taken_0x3f0f2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f0f2c) {
            ctx->pc = 0x3F0F30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0F2Cu;
            // 0x3f0f30: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F0F4Cu;
            goto label_3f0f4c;
        }
    }
    ctx->pc = 0x3F0F34u;
label_3f0f34:
    // 0x3f0f34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f0f34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f0f38:
    // 0x3f0f38: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3f0f38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3f0f3c:
    // 0x3f0f3c: 0x320f809  jalr        $t9
label_3f0f40:
    if (ctx->pc == 0x3F0F40u) {
        ctx->pc = 0x3F0F40u;
            // 0x3f0f40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F0F44u;
        goto label_3f0f44;
    }
    ctx->pc = 0x3F0F3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F0F44u);
        ctx->pc = 0x3F0F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0F3Cu;
            // 0x3f0f40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F0F44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F0F44u; }
            if (ctx->pc != 0x3F0F44u) { return; }
        }
        }
    }
    ctx->pc = 0x3F0F44u;
label_3f0f44:
    // 0x3f0f44: 0xae000148  sw          $zero, 0x148($s0)
    ctx->pc = 0x3f0f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 0));
label_3f0f48:
    // 0x3f0f48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f0f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3f0f4c:
    // 0x3f0f4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f0f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f0f50:
    // 0x3f0f50: 0x3e00008  jr          $ra
label_3f0f54:
    if (ctx->pc == 0x3F0F54u) {
        ctx->pc = 0x3F0F54u;
            // 0x3f0f54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3F0F58u;
        goto label_3f0f58;
    }
    ctx->pc = 0x3F0F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F0F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0F50u;
            // 0x3f0f54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F0F58u;
label_3f0f58:
    // 0x3f0f58: 0x0  nop
    ctx->pc = 0x3f0f58u;
    // NOP
label_3f0f5c:
    // 0x3f0f5c: 0x0  nop
    ctx->pc = 0x3f0f5cu;
    // NOP
label_3f0f60:
    // 0x3f0f60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f0f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3f0f64:
    // 0x3f0f64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f0f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3f0f68:
    // 0x3f0f68: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3f0f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3f0f6c:
    // 0x3f0f6c: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x3f0f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_3f0f70:
    // 0x3f0f70: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_3f0f74:
    if (ctx->pc == 0x3F0F74u) {
        ctx->pc = 0x3F0F74u;
            // 0x3f0f74: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3F0F78u;
        goto label_3f0f78;
    }
    ctx->pc = 0x3F0F70u;
    {
        const bool branch_taken_0x3f0f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f0f70) {
            ctx->pc = 0x3F0F74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0F70u;
            // 0x3f0f74: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F0F88u;
            goto label_3f0f88;
        }
    }
    ctx->pc = 0x3F0F78u;
label_3f0f78:
    // 0x3f0f78: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x3f0f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
label_3f0f7c:
    // 0x3f0f7c: 0xc073234  jal         func_1CC8D0
label_3f0f80:
    if (ctx->pc == 0x3F0F80u) {
        ctx->pc = 0x3F0F80u;
            // 0x3f0f80: 0x344415a9  ori         $a0, $v0, 0x15A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5545);
        ctx->pc = 0x3F0F84u;
        goto label_3f0f84;
    }
    ctx->pc = 0x3F0F7Cu;
    SET_GPR_U32(ctx, 31, 0x3F0F84u);
    ctx->pc = 0x3F0F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0F7Cu;
            // 0x3f0f80: 0x344415a9  ori         $a0, $v0, 0x15A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5545);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0F84u; }
        if (ctx->pc != 0x3F0F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0F84u; }
        if (ctx->pc != 0x3F0F84u) { return; }
    }
    ctx->pc = 0x3F0F84u;
label_3f0f84:
    // 0x3f0f84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f0f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3f0f88:
    // 0x3f0f88: 0x3e00008  jr          $ra
label_3f0f8c:
    if (ctx->pc == 0x3F0F8Cu) {
        ctx->pc = 0x3F0F8Cu;
            // 0x3f0f8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3F0F90u;
        goto label_3f0f90;
    }
    ctx->pc = 0x3F0F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F0F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0F88u;
            // 0x3f0f8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F0F90u;
label_3f0f90:
    // 0x3f0f90: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x3f0f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_3f0f94:
    // 0x3f0f94: 0x8073234  j           func_1CC8D0
label_3f0f98:
    if (ctx->pc == 0x3F0F98u) {
        ctx->pc = 0x3F0F98u;
            // 0x3f0f98: 0x344415a9  ori         $a0, $v0, 0x15A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5545);
        ctx->pc = 0x3F0F9Cu;
        goto label_3f0f9c;
    }
    ctx->pc = 0x3F0F94u;
    ctx->pc = 0x3F0F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0F94u;
            // 0x3f0f98: 0x344415a9  ori         $a0, $v0, 0x15A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5545);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3F0F9Cu;
label_3f0f9c:
    // 0x3f0f9c: 0x0  nop
    ctx->pc = 0x3f0f9cu;
    // NOP
label_3f0fa0:
    // 0x3f0fa0: 0x3e00008  jr          $ra
label_3f0fa4:
    if (ctx->pc == 0x3F0FA4u) {
        ctx->pc = 0x3F0FA4u;
            // 0x3f0fa4: 0x240236c4  addiu       $v0, $zero, 0x36C4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14020));
        ctx->pc = 0x3F0FA8u;
        goto label_3f0fa8;
    }
    ctx->pc = 0x3F0FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F0FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0FA0u;
            // 0x3f0fa4: 0x240236c4  addiu       $v0, $zero, 0x36C4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14020));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F0FA8u;
label_3f0fa8:
    // 0x3f0fa8: 0x0  nop
    ctx->pc = 0x3f0fa8u;
    // NOP
label_3f0fac:
    // 0x3f0fac: 0x0  nop
    ctx->pc = 0x3f0facu;
    // NOP
label_3f0fb0:
    // 0x3f0fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f0fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3f0fb4:
    // 0x3f0fb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3f0fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f0fb8:
    // 0x3f0fb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f0fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3f0fbc:
    // 0x3f0fbc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x3f0fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_3f0fc0:
    // 0x3f0fc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f0fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f0fc4:
    // 0x3f0fc4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x3f0fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3f0fc8:
    // 0x3f0fc8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3f0fc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f0fcc:
    // 0x3f0fcc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x3f0fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_3f0fd0:
    // 0x3f0fd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3f0fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3f0fd4:
    // 0x3f0fd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f0fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3f0fd8:
    // 0x3f0fd8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x3f0fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_3f0fdc:
    // 0x3f0fdc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3f0fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f0fe0:
    // 0x3f0fe0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3f0fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3f0fe4:
    // 0x3f0fe4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3f0fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3f0fe8:
    // 0x3f0fe8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x3f0fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_3f0fec:
    // 0x3f0fec: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x3f0fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_3f0ff0:
    // 0x3f0ff0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x3f0ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3f0ff4:
    // 0x3f0ff4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3f0ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3f0ff8:
    // 0x3f0ff8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x3f0ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_3f0ffc:
    // 0x3f0ffc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x3f0ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3f1000:
    // 0x3f1000: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x3f1000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_3f1004:
    // 0x3f1004: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3f1004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3f1008:
    // 0x3f1008: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3f1008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3f100c:
    // 0x3f100c: 0xc0a997c  jal         func_2A65F0
label_3f1010:
    if (ctx->pc == 0x3F1010u) {
        ctx->pc = 0x3F1010u;
            // 0x3f1010: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x3F1014u;
        goto label_3f1014;
    }
    ctx->pc = 0x3F100Cu;
    SET_GPR_U32(ctx, 31, 0x3F1014u);
    ctx->pc = 0x3F1010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F100Cu;
            // 0x3f1010: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1014u; }
        if (ctx->pc != 0x3F1014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1014u; }
        if (ctx->pc != 0x3F1014u) { return; }
    }
    ctx->pc = 0x3F1014u;
label_3f1014:
    // 0x3f1014: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x3f1014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3f1018:
    // 0x3f1018: 0xc0d879c  jal         func_361E70
label_3f101c:
    if (ctx->pc == 0x3F101Cu) {
        ctx->pc = 0x3F101Cu;
            // 0x3f101c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F1020u;
        goto label_3f1020;
    }
    ctx->pc = 0x3F1018u;
    SET_GPR_U32(ctx, 31, 0x3F1020u);
    ctx->pc = 0x3F101Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1018u;
            // 0x3f101c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1020u; }
        if (ctx->pc != 0x3F1020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1020u; }
        if (ctx->pc != 0x3F1020u) { return; }
    }
    ctx->pc = 0x3F1020u;
label_3f1020:
    // 0x3f1020: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f1020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3f1024:
    // 0x3f1024: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f1024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f1028:
    // 0x3f1028: 0x3e00008  jr          $ra
label_3f102c:
    if (ctx->pc == 0x3F102Cu) {
        ctx->pc = 0x3F102Cu;
            // 0x3f102c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3F1030u;
        goto label_3f1030;
    }
    ctx->pc = 0x3F1028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F102Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1028u;
            // 0x3f102c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F1030u;
label_3f1030:
    // 0x3f1030: 0x80fbd60  j           func_3EF580
label_3f1034:
    if (ctx->pc == 0x3F1034u) {
        ctx->pc = 0x3F1034u;
            // 0x3f1034: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x3F1038u;
        goto label_3f1038;
    }
    ctx->pc = 0x3F1030u;
    ctx->pc = 0x3F1034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1030u;
            // 0x3f1034: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EF580u;
    {
        auto targetFn = runtime->lookupFunction(0x3EF580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3F1038u;
label_3f1038:
    // 0x3f1038: 0x0  nop
    ctx->pc = 0x3f1038u;
    // NOP
label_3f103c:
    // 0x3f103c: 0x0  nop
    ctx->pc = 0x3f103cu;
    // NOP
label_3f1040:
    // 0x3f1040: 0x80fc14c  j           func_3F0530
label_3f1044:
    if (ctx->pc == 0x3F1044u) {
        ctx->pc = 0x3F1044u;
            // 0x3f1044: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3F1048u;
        goto label_3f1048;
    }
    ctx->pc = 0x3F1040u;
    ctx->pc = 0x3F1044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1040u;
            // 0x3f1044: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F0530u;
    {
        auto targetFn = runtime->lookupFunction(0x3F0530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3F1048u;
label_3f1048:
    // 0x3f1048: 0x0  nop
    ctx->pc = 0x3f1048u;
    // NOP
label_3f104c:
    // 0x3f104c: 0x0  nop
    ctx->pc = 0x3f104cu;
    // NOP
label_3f1050:
    // 0x3f1050: 0x80fbcdc  j           func_3EF370
label_3f1054:
    if (ctx->pc == 0x3F1054u) {
        ctx->pc = 0x3F1054u;
            // 0x3f1054: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3F1058u;
        goto label_3f1058;
    }
    ctx->pc = 0x3F1050u;
    ctx->pc = 0x3F1054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1050u;
            // 0x3f1054: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EF370u;
    {
        auto targetFn = runtime->lookupFunction(0x3EF370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3F1058u;
label_3f1058:
    // 0x3f1058: 0x0  nop
    ctx->pc = 0x3f1058u;
    // NOP
label_3f105c:
    // 0x3f105c: 0x0  nop
    ctx->pc = 0x3f105cu;
    // NOP
}
