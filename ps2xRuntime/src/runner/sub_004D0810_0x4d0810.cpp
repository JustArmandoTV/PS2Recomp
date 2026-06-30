#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D0810
// Address: 0x4d0810 - 0x4d0d60
void sub_004D0810_0x4d0810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D0810_0x4d0810");
#endif

    switch (ctx->pc) {
        case 0x4d0810u: goto label_4d0810;
        case 0x4d0814u: goto label_4d0814;
        case 0x4d0818u: goto label_4d0818;
        case 0x4d081cu: goto label_4d081c;
        case 0x4d0820u: goto label_4d0820;
        case 0x4d0824u: goto label_4d0824;
        case 0x4d0828u: goto label_4d0828;
        case 0x4d082cu: goto label_4d082c;
        case 0x4d0830u: goto label_4d0830;
        case 0x4d0834u: goto label_4d0834;
        case 0x4d0838u: goto label_4d0838;
        case 0x4d083cu: goto label_4d083c;
        case 0x4d0840u: goto label_4d0840;
        case 0x4d0844u: goto label_4d0844;
        case 0x4d0848u: goto label_4d0848;
        case 0x4d084cu: goto label_4d084c;
        case 0x4d0850u: goto label_4d0850;
        case 0x4d0854u: goto label_4d0854;
        case 0x4d0858u: goto label_4d0858;
        case 0x4d085cu: goto label_4d085c;
        case 0x4d0860u: goto label_4d0860;
        case 0x4d0864u: goto label_4d0864;
        case 0x4d0868u: goto label_4d0868;
        case 0x4d086cu: goto label_4d086c;
        case 0x4d0870u: goto label_4d0870;
        case 0x4d0874u: goto label_4d0874;
        case 0x4d0878u: goto label_4d0878;
        case 0x4d087cu: goto label_4d087c;
        case 0x4d0880u: goto label_4d0880;
        case 0x4d0884u: goto label_4d0884;
        case 0x4d0888u: goto label_4d0888;
        case 0x4d088cu: goto label_4d088c;
        case 0x4d0890u: goto label_4d0890;
        case 0x4d0894u: goto label_4d0894;
        case 0x4d0898u: goto label_4d0898;
        case 0x4d089cu: goto label_4d089c;
        case 0x4d08a0u: goto label_4d08a0;
        case 0x4d08a4u: goto label_4d08a4;
        case 0x4d08a8u: goto label_4d08a8;
        case 0x4d08acu: goto label_4d08ac;
        case 0x4d08b0u: goto label_4d08b0;
        case 0x4d08b4u: goto label_4d08b4;
        case 0x4d08b8u: goto label_4d08b8;
        case 0x4d08bcu: goto label_4d08bc;
        case 0x4d08c0u: goto label_4d08c0;
        case 0x4d08c4u: goto label_4d08c4;
        case 0x4d08c8u: goto label_4d08c8;
        case 0x4d08ccu: goto label_4d08cc;
        case 0x4d08d0u: goto label_4d08d0;
        case 0x4d08d4u: goto label_4d08d4;
        case 0x4d08d8u: goto label_4d08d8;
        case 0x4d08dcu: goto label_4d08dc;
        case 0x4d08e0u: goto label_4d08e0;
        case 0x4d08e4u: goto label_4d08e4;
        case 0x4d08e8u: goto label_4d08e8;
        case 0x4d08ecu: goto label_4d08ec;
        case 0x4d08f0u: goto label_4d08f0;
        case 0x4d08f4u: goto label_4d08f4;
        case 0x4d08f8u: goto label_4d08f8;
        case 0x4d08fcu: goto label_4d08fc;
        case 0x4d0900u: goto label_4d0900;
        case 0x4d0904u: goto label_4d0904;
        case 0x4d0908u: goto label_4d0908;
        case 0x4d090cu: goto label_4d090c;
        case 0x4d0910u: goto label_4d0910;
        case 0x4d0914u: goto label_4d0914;
        case 0x4d0918u: goto label_4d0918;
        case 0x4d091cu: goto label_4d091c;
        case 0x4d0920u: goto label_4d0920;
        case 0x4d0924u: goto label_4d0924;
        case 0x4d0928u: goto label_4d0928;
        case 0x4d092cu: goto label_4d092c;
        case 0x4d0930u: goto label_4d0930;
        case 0x4d0934u: goto label_4d0934;
        case 0x4d0938u: goto label_4d0938;
        case 0x4d093cu: goto label_4d093c;
        case 0x4d0940u: goto label_4d0940;
        case 0x4d0944u: goto label_4d0944;
        case 0x4d0948u: goto label_4d0948;
        case 0x4d094cu: goto label_4d094c;
        case 0x4d0950u: goto label_4d0950;
        case 0x4d0954u: goto label_4d0954;
        case 0x4d0958u: goto label_4d0958;
        case 0x4d095cu: goto label_4d095c;
        case 0x4d0960u: goto label_4d0960;
        case 0x4d0964u: goto label_4d0964;
        case 0x4d0968u: goto label_4d0968;
        case 0x4d096cu: goto label_4d096c;
        case 0x4d0970u: goto label_4d0970;
        case 0x4d0974u: goto label_4d0974;
        case 0x4d0978u: goto label_4d0978;
        case 0x4d097cu: goto label_4d097c;
        case 0x4d0980u: goto label_4d0980;
        case 0x4d0984u: goto label_4d0984;
        case 0x4d0988u: goto label_4d0988;
        case 0x4d098cu: goto label_4d098c;
        case 0x4d0990u: goto label_4d0990;
        case 0x4d0994u: goto label_4d0994;
        case 0x4d0998u: goto label_4d0998;
        case 0x4d099cu: goto label_4d099c;
        case 0x4d09a0u: goto label_4d09a0;
        case 0x4d09a4u: goto label_4d09a4;
        case 0x4d09a8u: goto label_4d09a8;
        case 0x4d09acu: goto label_4d09ac;
        case 0x4d09b0u: goto label_4d09b0;
        case 0x4d09b4u: goto label_4d09b4;
        case 0x4d09b8u: goto label_4d09b8;
        case 0x4d09bcu: goto label_4d09bc;
        case 0x4d09c0u: goto label_4d09c0;
        case 0x4d09c4u: goto label_4d09c4;
        case 0x4d09c8u: goto label_4d09c8;
        case 0x4d09ccu: goto label_4d09cc;
        case 0x4d09d0u: goto label_4d09d0;
        case 0x4d09d4u: goto label_4d09d4;
        case 0x4d09d8u: goto label_4d09d8;
        case 0x4d09dcu: goto label_4d09dc;
        case 0x4d09e0u: goto label_4d09e0;
        case 0x4d09e4u: goto label_4d09e4;
        case 0x4d09e8u: goto label_4d09e8;
        case 0x4d09ecu: goto label_4d09ec;
        case 0x4d09f0u: goto label_4d09f0;
        case 0x4d09f4u: goto label_4d09f4;
        case 0x4d09f8u: goto label_4d09f8;
        case 0x4d09fcu: goto label_4d09fc;
        case 0x4d0a00u: goto label_4d0a00;
        case 0x4d0a04u: goto label_4d0a04;
        case 0x4d0a08u: goto label_4d0a08;
        case 0x4d0a0cu: goto label_4d0a0c;
        case 0x4d0a10u: goto label_4d0a10;
        case 0x4d0a14u: goto label_4d0a14;
        case 0x4d0a18u: goto label_4d0a18;
        case 0x4d0a1cu: goto label_4d0a1c;
        case 0x4d0a20u: goto label_4d0a20;
        case 0x4d0a24u: goto label_4d0a24;
        case 0x4d0a28u: goto label_4d0a28;
        case 0x4d0a2cu: goto label_4d0a2c;
        case 0x4d0a30u: goto label_4d0a30;
        case 0x4d0a34u: goto label_4d0a34;
        case 0x4d0a38u: goto label_4d0a38;
        case 0x4d0a3cu: goto label_4d0a3c;
        case 0x4d0a40u: goto label_4d0a40;
        case 0x4d0a44u: goto label_4d0a44;
        case 0x4d0a48u: goto label_4d0a48;
        case 0x4d0a4cu: goto label_4d0a4c;
        case 0x4d0a50u: goto label_4d0a50;
        case 0x4d0a54u: goto label_4d0a54;
        case 0x4d0a58u: goto label_4d0a58;
        case 0x4d0a5cu: goto label_4d0a5c;
        case 0x4d0a60u: goto label_4d0a60;
        case 0x4d0a64u: goto label_4d0a64;
        case 0x4d0a68u: goto label_4d0a68;
        case 0x4d0a6cu: goto label_4d0a6c;
        case 0x4d0a70u: goto label_4d0a70;
        case 0x4d0a74u: goto label_4d0a74;
        case 0x4d0a78u: goto label_4d0a78;
        case 0x4d0a7cu: goto label_4d0a7c;
        case 0x4d0a80u: goto label_4d0a80;
        case 0x4d0a84u: goto label_4d0a84;
        case 0x4d0a88u: goto label_4d0a88;
        case 0x4d0a8cu: goto label_4d0a8c;
        case 0x4d0a90u: goto label_4d0a90;
        case 0x4d0a94u: goto label_4d0a94;
        case 0x4d0a98u: goto label_4d0a98;
        case 0x4d0a9cu: goto label_4d0a9c;
        case 0x4d0aa0u: goto label_4d0aa0;
        case 0x4d0aa4u: goto label_4d0aa4;
        case 0x4d0aa8u: goto label_4d0aa8;
        case 0x4d0aacu: goto label_4d0aac;
        case 0x4d0ab0u: goto label_4d0ab0;
        case 0x4d0ab4u: goto label_4d0ab4;
        case 0x4d0ab8u: goto label_4d0ab8;
        case 0x4d0abcu: goto label_4d0abc;
        case 0x4d0ac0u: goto label_4d0ac0;
        case 0x4d0ac4u: goto label_4d0ac4;
        case 0x4d0ac8u: goto label_4d0ac8;
        case 0x4d0accu: goto label_4d0acc;
        case 0x4d0ad0u: goto label_4d0ad0;
        case 0x4d0ad4u: goto label_4d0ad4;
        case 0x4d0ad8u: goto label_4d0ad8;
        case 0x4d0adcu: goto label_4d0adc;
        case 0x4d0ae0u: goto label_4d0ae0;
        case 0x4d0ae4u: goto label_4d0ae4;
        case 0x4d0ae8u: goto label_4d0ae8;
        case 0x4d0aecu: goto label_4d0aec;
        case 0x4d0af0u: goto label_4d0af0;
        case 0x4d0af4u: goto label_4d0af4;
        case 0x4d0af8u: goto label_4d0af8;
        case 0x4d0afcu: goto label_4d0afc;
        case 0x4d0b00u: goto label_4d0b00;
        case 0x4d0b04u: goto label_4d0b04;
        case 0x4d0b08u: goto label_4d0b08;
        case 0x4d0b0cu: goto label_4d0b0c;
        case 0x4d0b10u: goto label_4d0b10;
        case 0x4d0b14u: goto label_4d0b14;
        case 0x4d0b18u: goto label_4d0b18;
        case 0x4d0b1cu: goto label_4d0b1c;
        case 0x4d0b20u: goto label_4d0b20;
        case 0x4d0b24u: goto label_4d0b24;
        case 0x4d0b28u: goto label_4d0b28;
        case 0x4d0b2cu: goto label_4d0b2c;
        case 0x4d0b30u: goto label_4d0b30;
        case 0x4d0b34u: goto label_4d0b34;
        case 0x4d0b38u: goto label_4d0b38;
        case 0x4d0b3cu: goto label_4d0b3c;
        case 0x4d0b40u: goto label_4d0b40;
        case 0x4d0b44u: goto label_4d0b44;
        case 0x4d0b48u: goto label_4d0b48;
        case 0x4d0b4cu: goto label_4d0b4c;
        case 0x4d0b50u: goto label_4d0b50;
        case 0x4d0b54u: goto label_4d0b54;
        case 0x4d0b58u: goto label_4d0b58;
        case 0x4d0b5cu: goto label_4d0b5c;
        case 0x4d0b60u: goto label_4d0b60;
        case 0x4d0b64u: goto label_4d0b64;
        case 0x4d0b68u: goto label_4d0b68;
        case 0x4d0b6cu: goto label_4d0b6c;
        case 0x4d0b70u: goto label_4d0b70;
        case 0x4d0b74u: goto label_4d0b74;
        case 0x4d0b78u: goto label_4d0b78;
        case 0x4d0b7cu: goto label_4d0b7c;
        case 0x4d0b80u: goto label_4d0b80;
        case 0x4d0b84u: goto label_4d0b84;
        case 0x4d0b88u: goto label_4d0b88;
        case 0x4d0b8cu: goto label_4d0b8c;
        case 0x4d0b90u: goto label_4d0b90;
        case 0x4d0b94u: goto label_4d0b94;
        case 0x4d0b98u: goto label_4d0b98;
        case 0x4d0b9cu: goto label_4d0b9c;
        case 0x4d0ba0u: goto label_4d0ba0;
        case 0x4d0ba4u: goto label_4d0ba4;
        case 0x4d0ba8u: goto label_4d0ba8;
        case 0x4d0bacu: goto label_4d0bac;
        case 0x4d0bb0u: goto label_4d0bb0;
        case 0x4d0bb4u: goto label_4d0bb4;
        case 0x4d0bb8u: goto label_4d0bb8;
        case 0x4d0bbcu: goto label_4d0bbc;
        case 0x4d0bc0u: goto label_4d0bc0;
        case 0x4d0bc4u: goto label_4d0bc4;
        case 0x4d0bc8u: goto label_4d0bc8;
        case 0x4d0bccu: goto label_4d0bcc;
        case 0x4d0bd0u: goto label_4d0bd0;
        case 0x4d0bd4u: goto label_4d0bd4;
        case 0x4d0bd8u: goto label_4d0bd8;
        case 0x4d0bdcu: goto label_4d0bdc;
        case 0x4d0be0u: goto label_4d0be0;
        case 0x4d0be4u: goto label_4d0be4;
        case 0x4d0be8u: goto label_4d0be8;
        case 0x4d0becu: goto label_4d0bec;
        case 0x4d0bf0u: goto label_4d0bf0;
        case 0x4d0bf4u: goto label_4d0bf4;
        case 0x4d0bf8u: goto label_4d0bf8;
        case 0x4d0bfcu: goto label_4d0bfc;
        case 0x4d0c00u: goto label_4d0c00;
        case 0x4d0c04u: goto label_4d0c04;
        case 0x4d0c08u: goto label_4d0c08;
        case 0x4d0c0cu: goto label_4d0c0c;
        case 0x4d0c10u: goto label_4d0c10;
        case 0x4d0c14u: goto label_4d0c14;
        case 0x4d0c18u: goto label_4d0c18;
        case 0x4d0c1cu: goto label_4d0c1c;
        case 0x4d0c20u: goto label_4d0c20;
        case 0x4d0c24u: goto label_4d0c24;
        case 0x4d0c28u: goto label_4d0c28;
        case 0x4d0c2cu: goto label_4d0c2c;
        case 0x4d0c30u: goto label_4d0c30;
        case 0x4d0c34u: goto label_4d0c34;
        case 0x4d0c38u: goto label_4d0c38;
        case 0x4d0c3cu: goto label_4d0c3c;
        case 0x4d0c40u: goto label_4d0c40;
        case 0x4d0c44u: goto label_4d0c44;
        case 0x4d0c48u: goto label_4d0c48;
        case 0x4d0c4cu: goto label_4d0c4c;
        case 0x4d0c50u: goto label_4d0c50;
        case 0x4d0c54u: goto label_4d0c54;
        case 0x4d0c58u: goto label_4d0c58;
        case 0x4d0c5cu: goto label_4d0c5c;
        case 0x4d0c60u: goto label_4d0c60;
        case 0x4d0c64u: goto label_4d0c64;
        case 0x4d0c68u: goto label_4d0c68;
        case 0x4d0c6cu: goto label_4d0c6c;
        case 0x4d0c70u: goto label_4d0c70;
        case 0x4d0c74u: goto label_4d0c74;
        case 0x4d0c78u: goto label_4d0c78;
        case 0x4d0c7cu: goto label_4d0c7c;
        case 0x4d0c80u: goto label_4d0c80;
        case 0x4d0c84u: goto label_4d0c84;
        case 0x4d0c88u: goto label_4d0c88;
        case 0x4d0c8cu: goto label_4d0c8c;
        case 0x4d0c90u: goto label_4d0c90;
        case 0x4d0c94u: goto label_4d0c94;
        case 0x4d0c98u: goto label_4d0c98;
        case 0x4d0c9cu: goto label_4d0c9c;
        case 0x4d0ca0u: goto label_4d0ca0;
        case 0x4d0ca4u: goto label_4d0ca4;
        case 0x4d0ca8u: goto label_4d0ca8;
        case 0x4d0cacu: goto label_4d0cac;
        case 0x4d0cb0u: goto label_4d0cb0;
        case 0x4d0cb4u: goto label_4d0cb4;
        case 0x4d0cb8u: goto label_4d0cb8;
        case 0x4d0cbcu: goto label_4d0cbc;
        case 0x4d0cc0u: goto label_4d0cc0;
        case 0x4d0cc4u: goto label_4d0cc4;
        case 0x4d0cc8u: goto label_4d0cc8;
        case 0x4d0cccu: goto label_4d0ccc;
        case 0x4d0cd0u: goto label_4d0cd0;
        case 0x4d0cd4u: goto label_4d0cd4;
        case 0x4d0cd8u: goto label_4d0cd8;
        case 0x4d0cdcu: goto label_4d0cdc;
        case 0x4d0ce0u: goto label_4d0ce0;
        case 0x4d0ce4u: goto label_4d0ce4;
        case 0x4d0ce8u: goto label_4d0ce8;
        case 0x4d0cecu: goto label_4d0cec;
        case 0x4d0cf0u: goto label_4d0cf0;
        case 0x4d0cf4u: goto label_4d0cf4;
        case 0x4d0cf8u: goto label_4d0cf8;
        case 0x4d0cfcu: goto label_4d0cfc;
        case 0x4d0d00u: goto label_4d0d00;
        case 0x4d0d04u: goto label_4d0d04;
        case 0x4d0d08u: goto label_4d0d08;
        case 0x4d0d0cu: goto label_4d0d0c;
        case 0x4d0d10u: goto label_4d0d10;
        case 0x4d0d14u: goto label_4d0d14;
        case 0x4d0d18u: goto label_4d0d18;
        case 0x4d0d1cu: goto label_4d0d1c;
        case 0x4d0d20u: goto label_4d0d20;
        case 0x4d0d24u: goto label_4d0d24;
        case 0x4d0d28u: goto label_4d0d28;
        case 0x4d0d2cu: goto label_4d0d2c;
        case 0x4d0d30u: goto label_4d0d30;
        case 0x4d0d34u: goto label_4d0d34;
        case 0x4d0d38u: goto label_4d0d38;
        case 0x4d0d3cu: goto label_4d0d3c;
        case 0x4d0d40u: goto label_4d0d40;
        case 0x4d0d44u: goto label_4d0d44;
        case 0x4d0d48u: goto label_4d0d48;
        case 0x4d0d4cu: goto label_4d0d4c;
        case 0x4d0d50u: goto label_4d0d50;
        case 0x4d0d54u: goto label_4d0d54;
        case 0x4d0d58u: goto label_4d0d58;
        case 0x4d0d5cu: goto label_4d0d5c;
        default: break;
    }

    ctx->pc = 0x4d0810u;

label_4d0810:
    // 0x4d0810: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4d0810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4d0814:
    // 0x4d0814: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4d0814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4d0818:
    // 0x4d0818: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4d0818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4d081c:
    // 0x4d081c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4d081cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4d0820:
    // 0x4d0820: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4d0820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4d0824:
    // 0x4d0824: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4d0824u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d0828:
    // 0x4d0828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d0828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d082c:
    // 0x4d082c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d082cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d0830:
    // 0x4d0830: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4d0830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4d0834:
    // 0x4d0834: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4d0834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4d0838:
    // 0x4d0838: 0xc10ca68  jal         func_4329A0
label_4d083c:
    if (ctx->pc == 0x4D083Cu) {
        ctx->pc = 0x4D083Cu;
            // 0x4d083c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4D0840u;
        goto label_4d0840;
    }
    ctx->pc = 0x4D0838u;
    SET_GPR_U32(ctx, 31, 0x4D0840u);
    ctx->pc = 0x4D083Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0838u;
            // 0x4d083c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0840u; }
        if (ctx->pc != 0x4D0840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0840u; }
        if (ctx->pc != 0x4D0840u) { return; }
    }
    ctx->pc = 0x4D0840u;
label_4d0840:
    // 0x4d0840: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4d0840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4d0844:
    // 0x4d0844: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4d0844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4d0848:
    // 0x4d0848: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4d0848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4d084c:
    // 0x4d084c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4d084cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4d0850:
    // 0x4d0850: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d0850u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4d0854:
    // 0x4d0854: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4d0854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_4d0858:
    // 0x4d0858: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4d0858u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4d085c:
    // 0x4d085c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4d085cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4d0860:
    // 0x4d0860: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4d0860u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_4d0864:
    // 0x4d0864: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d0864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4d0868:
    // 0x4d0868: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4d0868u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_4d086c:
    // 0x4d086c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4d086cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4d0870:
    // 0x4d0870: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4d0870u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_4d0874:
    // 0x4d0874: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4d0874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_4d0878:
    // 0x4d0878: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4d0878u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_4d087c:
    // 0x4d087c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4d087cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_4d0880:
    // 0x4d0880: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4d0880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_4d0884:
    // 0x4d0884: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4d0884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4d0888:
    // 0x4d0888: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4d0888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4d088c:
    // 0x4d088c: 0xc0582cc  jal         func_160B30
label_4d0890:
    if (ctx->pc == 0x4D0890u) {
        ctx->pc = 0x4D0890u;
            // 0x4d0890: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x4D0894u;
        goto label_4d0894;
    }
    ctx->pc = 0x4D088Cu;
    SET_GPR_U32(ctx, 31, 0x4D0894u);
    ctx->pc = 0x4D0890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D088Cu;
            // 0x4d0890: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0894u; }
        if (ctx->pc != 0x4D0894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0894u; }
        if (ctx->pc != 0x4D0894u) { return; }
    }
    ctx->pc = 0x4D0894u;
label_4d0894:
    // 0x4d0894: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d0894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d0898:
    // 0x4d0898: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4d0898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_4d089c:
    // 0x4d089c: 0x24631f68  addiu       $v1, $v1, 0x1F68
    ctx->pc = 0x4d089cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8040));
label_4d08a0:
    // 0x4d08a0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4d08a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_4d08a4:
    // 0x4d08a4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4d08a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_4d08a8:
    // 0x4d08a8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d08a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4d08ac:
    // 0x4d08ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d08acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d08b0:
    // 0x4d08b0: 0xac44aa28  sw          $a0, -0x55D8($v0)
    ctx->pc = 0x4d08b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945320), GPR_U32(ctx, 4));
label_4d08b4:
    // 0x4d08b4: 0x24631f80  addiu       $v1, $v1, 0x1F80
    ctx->pc = 0x4d08b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8064));
label_4d08b8:
    // 0x4d08b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d08b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d08bc:
    // 0x4d08bc: 0x24421fb8  addiu       $v0, $v0, 0x1FB8
    ctx->pc = 0x4d08bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8120));
label_4d08c0:
    // 0x4d08c0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d08c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4d08c4:
    // 0x4d08c4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4d08c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_4d08c8:
    // 0x4d08c8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4d08c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_4d08cc:
    // 0x4d08cc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4d08ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_4d08d0:
    // 0x4d08d0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4d08d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_4d08d4:
    // 0x4d08d4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4d08d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_4d08d8:
    // 0x4d08d8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4d08d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_4d08dc:
    // 0x4d08dc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4d08dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_4d08e0:
    // 0x4d08e0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4d08e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_4d08e4:
    // 0x4d08e4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4d08e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_4d08e8:
    // 0x4d08e8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4d08e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_4d08ec:
    // 0x4d08ec: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4d08ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_4d08f0:
    // 0x4d08f0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4d08f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4d08f4:
    // 0x4d08f4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_4d08f8:
    if (ctx->pc == 0x4D08F8u) {
        ctx->pc = 0x4D08FCu;
        goto label_4d08fc;
    }
    ctx->pc = 0x4D08F4u;
    {
        const bool branch_taken_0x4d08f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d08f4) {
            ctx->pc = 0x4D0988u;
            goto label_4d0988;
        }
    }
    ctx->pc = 0x4D08FCu;
label_4d08fc:
    // 0x4d08fc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x4d08fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_4d0900:
    // 0x4d0900: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x4d0900u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4d0904:
    // 0x4d0904: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x4d0904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_4d0908:
    // 0x4d0908: 0xc040138  jal         func_1004E0
label_4d090c:
    if (ctx->pc == 0x4D090Cu) {
        ctx->pc = 0x4D090Cu;
            // 0x4d090c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4D0910u;
        goto label_4d0910;
    }
    ctx->pc = 0x4D0908u;
    SET_GPR_U32(ctx, 31, 0x4D0910u);
    ctx->pc = 0x4D090Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0908u;
            // 0x4d090c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0910u; }
        if (ctx->pc != 0x4D0910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0910u; }
        if (ctx->pc != 0x4D0910u) { return; }
    }
    ctx->pc = 0x4D0910u;
label_4d0910:
    // 0x4d0910: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4d0910u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
label_4d0914:
    // 0x4d0914: 0x3c06004d  lui         $a2, 0x4D
    ctx->pc = 0x4d0914u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)77 << 16));
label_4d0918:
    // 0x4d0918: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d0918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d091c:
    // 0x4d091c: 0x24a509b0  addiu       $a1, $a1, 0x9B0
    ctx->pc = 0x4d091cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2480));
label_4d0920:
    // 0x4d0920: 0x24c60150  addiu       $a2, $a2, 0x150
    ctx->pc = 0x4d0920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 336));
label_4d0924:
    // 0x4d0924: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x4d0924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_4d0928:
    // 0x4d0928: 0xc040840  jal         func_102100
label_4d092c:
    if (ctx->pc == 0x4D092Cu) {
        ctx->pc = 0x4D092Cu;
            // 0x4d092c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D0930u;
        goto label_4d0930;
    }
    ctx->pc = 0x4D0928u;
    SET_GPR_U32(ctx, 31, 0x4D0930u);
    ctx->pc = 0x4D092Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0928u;
            // 0x4d092c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0930u; }
        if (ctx->pc != 0x4D0930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0930u; }
        if (ctx->pc != 0x4D0930u) { return; }
    }
    ctx->pc = 0x4D0930u;
label_4d0930:
    // 0x4d0930: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4d0930u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_4d0934:
    // 0x4d0934: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4d0934u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d0938:
    // 0x4d0938: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4d0938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_4d093c:
    // 0x4d093c: 0xc0788fc  jal         func_1E23F0
label_4d0940:
    if (ctx->pc == 0x4D0940u) {
        ctx->pc = 0x4D0940u;
            // 0x4d0940: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D0944u;
        goto label_4d0944;
    }
    ctx->pc = 0x4D093Cu;
    SET_GPR_U32(ctx, 31, 0x4D0944u);
    ctx->pc = 0x4D0940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D093Cu;
            // 0x4d0940: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0944u; }
        if (ctx->pc != 0x4D0944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0944u; }
        if (ctx->pc != 0x4D0944u) { return; }
    }
    ctx->pc = 0x4D0944u;
label_4d0944:
    // 0x4d0944: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4d0944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4d0948:
    // 0x4d0948: 0xc0788fc  jal         func_1E23F0
label_4d094c:
    if (ctx->pc == 0x4D094Cu) {
        ctx->pc = 0x4D094Cu;
            // 0x4d094c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D0950u;
        goto label_4d0950;
    }
    ctx->pc = 0x4D0948u;
    SET_GPR_U32(ctx, 31, 0x4D0950u);
    ctx->pc = 0x4D094Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0948u;
            // 0x4d094c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0950u; }
        if (ctx->pc != 0x4D0950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0950u; }
        if (ctx->pc != 0x4D0950u) { return; }
    }
    ctx->pc = 0x4D0950u;
label_4d0950:
    // 0x4d0950: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4d0950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d0954:
    // 0x4d0954: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4d0954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_4d0958:
    // 0x4d0958: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4d0958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4d095c:
    // 0x4d095c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4d095cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_4d0960:
    // 0x4d0960: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4d0960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d0964:
    // 0x4d0964: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4d0964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_4d0968:
    // 0x4d0968: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4d0968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_4d096c:
    // 0x4d096c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4d096cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4d0970:
    // 0x4d0970: 0xc0a997c  jal         func_2A65F0
label_4d0974:
    if (ctx->pc == 0x4D0974u) {
        ctx->pc = 0x4D0974u;
            // 0x4d0974: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4D0978u;
        goto label_4d0978;
    }
    ctx->pc = 0x4D0970u;
    SET_GPR_U32(ctx, 31, 0x4D0978u);
    ctx->pc = 0x4D0974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0970u;
            // 0x4d0974: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0978u; }
        if (ctx->pc != 0x4D0978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0978u; }
        if (ctx->pc != 0x4D0978u) { return; }
    }
    ctx->pc = 0x4D0978u;
label_4d0978:
    // 0x4d0978: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4d0978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4d097c:
    // 0x4d097c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4d097cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4d0980:
    // 0x4d0980: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_4d0984:
    if (ctx->pc == 0x4D0984u) {
        ctx->pc = 0x4D0984u;
            // 0x4d0984: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->pc = 0x4D0988u;
        goto label_4d0988;
    }
    ctx->pc = 0x4D0980u;
    {
        const bool branch_taken_0x4d0980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D0984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0980u;
            // 0x4d0984: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0980) {
            ctx->pc = 0x4D0954u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d0954;
        }
    }
    ctx->pc = 0x4D0988u;
label_4d0988:
    // 0x4d0988: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4d0988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4d098c:
    // 0x4d098c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4d098cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d0990:
    // 0x4d0990: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4d0990u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d0994:
    // 0x4d0994: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4d0994u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d0998:
    // 0x4d0998: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d0998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d099c:
    // 0x4d099c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d099cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d09a0:
    // 0x4d09a0: 0x3e00008  jr          $ra
label_4d09a4:
    if (ctx->pc == 0x4D09A4u) {
        ctx->pc = 0x4D09A4u;
            // 0x4d09a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4D09A8u;
        goto label_4d09a8;
    }
    ctx->pc = 0x4D09A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D09A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D09A0u;
            // 0x4d09a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D09A8u;
label_4d09a8:
    // 0x4d09a8: 0x0  nop
    ctx->pc = 0x4d09a8u;
    // NOP
label_4d09ac:
    // 0x4d09ac: 0x0  nop
    ctx->pc = 0x4d09acu;
    // NOP
label_4d09b0:
    // 0x4d09b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d09b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d09b4:
    // 0x4d09b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d09b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d09b8:
    // 0x4d09b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d09b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d09bc:
    // 0x4d09bc: 0xc12e6bc  jal         func_4B9AF0
label_4d09c0:
    if (ctx->pc == 0x4D09C0u) {
        ctx->pc = 0x4D09C0u;
            // 0x4d09c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D09C4u;
        goto label_4d09c4;
    }
    ctx->pc = 0x4D09BCu;
    SET_GPR_U32(ctx, 31, 0x4D09C4u);
    ctx->pc = 0x4D09C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D09BCu;
            // 0x4d09c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9AF0u;
    if (runtime->hasFunction(0x4B9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x4B9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D09C4u; }
        if (ctx->pc != 0x4D09C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9AF0_0x4b9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D09C4u; }
        if (ctx->pc != 0x4D09C4u) { return; }
    }
    ctx->pc = 0x4D09C4u;
label_4d09c4:
    // 0x4d09c4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d09c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d09c8:
    // 0x4d09c8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d09c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d09cc:
    // 0x4d09cc: 0x24422020  addiu       $v0, $v0, 0x2020
    ctx->pc = 0x4d09ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8224));
label_4d09d0:
    // 0x4d09d0: 0x24632060  addiu       $v1, $v1, 0x2060
    ctx->pc = 0x4d09d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8288));
label_4d09d4:
    // 0x4d09d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4d09d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4d09d8:
    // 0x4d09d8: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4d09d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_4d09dc:
    // 0x4d09dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d09dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d09e0:
    // 0x4d09e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d09e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d09e4:
    // 0x4d09e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d09e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d09e8:
    // 0x4d09e8: 0x3e00008  jr          $ra
label_4d09ec:
    if (ctx->pc == 0x4D09ECu) {
        ctx->pc = 0x4D09ECu;
            // 0x4d09ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4D09F0u;
        goto label_4d09f0;
    }
    ctx->pc = 0x4D09E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D09ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D09E8u;
            // 0x4d09ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D09F0u;
label_4d09f0:
    // 0x4d09f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d09f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d09f4:
    // 0x4d09f4: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d09f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4d09f8:
    // 0x4d09f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d09f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d09fc:
    // 0x4d09fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4d09fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4d0a00:
    // 0x4d0a00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d0a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d0a04:
    // 0x4d0a04: 0x8c42aa28  lw          $v0, -0x55D8($v0)
    ctx->pc = 0x4d0a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945320)));
label_4d0a08:
    // 0x4d0a08: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x4d0a08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_4d0a0c:
    // 0x4d0a0c: 0xc12e608  jal         func_4B9820
label_4d0a10:
    if (ctx->pc == 0x4D0A10u) {
        ctx->pc = 0x4D0A10u;
            // 0x4d0a10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D0A14u;
        goto label_4d0a14;
    }
    ctx->pc = 0x4D0A0Cu;
    SET_GPR_U32(ctx, 31, 0x4D0A14u);
    ctx->pc = 0x4D0A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0A0Cu;
            // 0x4d0a10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9820u;
    if (runtime->hasFunction(0x4B9820u)) {
        auto targetFn = runtime->lookupFunction(0x4B9820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0A14u; }
        if (ctx->pc != 0x4D0A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9820_0x4b9820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0A14u; }
        if (ctx->pc != 0x4D0A14u) { return; }
    }
    ctx->pc = 0x4D0A14u;
label_4d0a14:
    // 0x4d0a14: 0xa20000d1  sb          $zero, 0xD1($s0)
    ctx->pc = 0x4d0a14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 209), (uint8_t)GPR_U32(ctx, 0));
label_4d0a18:
    // 0x4d0a18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d0a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d0a1c:
    // 0x4d0a1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d0a1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d0a20:
    // 0x4d0a20: 0x3e00008  jr          $ra
label_4d0a24:
    if (ctx->pc == 0x4D0A24u) {
        ctx->pc = 0x4D0A24u;
            // 0x4d0a24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4D0A28u;
        goto label_4d0a28;
    }
    ctx->pc = 0x4D0A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D0A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0A20u;
            // 0x4d0a24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D0A28u;
label_4d0a28:
    // 0x4d0a28: 0x0  nop
    ctx->pc = 0x4d0a28u;
    // NOP
label_4d0a2c:
    // 0x4d0a2c: 0x0  nop
    ctx->pc = 0x4d0a2cu;
    // NOP
label_4d0a30:
    // 0x4d0a30: 0x3e00008  jr          $ra
label_4d0a34:
    if (ctx->pc == 0x4D0A34u) {
        ctx->pc = 0x4D0A34u;
            // 0x4d0a34: 0x24024269  addiu       $v0, $zero, 0x4269 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17001));
        ctx->pc = 0x4D0A38u;
        goto label_4d0a38;
    }
    ctx->pc = 0x4D0A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D0A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0A30u;
            // 0x4d0a34: 0x24024269  addiu       $v0, $zero, 0x4269 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17001));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D0A38u;
label_4d0a38:
    // 0x4d0a38: 0x0  nop
    ctx->pc = 0x4d0a38u;
    // NOP
label_4d0a3c:
    // 0x4d0a3c: 0x0  nop
    ctx->pc = 0x4d0a3cu;
    // NOP
label_4d0a40:
    // 0x4d0a40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4d0a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4d0a44:
    // 0x4d0a44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4d0a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4d0a48:
    // 0x4d0a48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4d0a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4d0a4c:
    // 0x4d0a4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4d0a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4d0a50:
    // 0x4d0a50: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4d0a50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d0a54:
    // 0x4d0a54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4d0a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4d0a58:
    // 0x4d0a58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d0a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d0a5c:
    // 0x4d0a5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d0a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d0a60:
    // 0x4d0a60: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4d0a60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4d0a64:
    // 0x4d0a64: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4d0a68:
    if (ctx->pc == 0x4D0A68u) {
        ctx->pc = 0x4D0A68u;
            // 0x4d0a68: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D0A6Cu;
        goto label_4d0a6c;
    }
    ctx->pc = 0x4D0A64u;
    {
        const bool branch_taken_0x4d0a64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0A64u;
            // 0x4d0a68: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0a64) {
            ctx->pc = 0x4D0AA8u;
            goto label_4d0aa8;
        }
    }
    ctx->pc = 0x4D0A6Cu;
label_4d0a6c:
    // 0x4d0a6c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d0a6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d0a70:
    // 0x4d0a70: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4d0a70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d0a74:
    // 0x4d0a74: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4d0a74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d0a78:
    // 0x4d0a78: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4d0a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4d0a7c:
    // 0x4d0a7c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4d0a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4d0a80:
    // 0x4d0a80: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4d0a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4d0a84:
    // 0x4d0a84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d0a84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d0a88:
    // 0x4d0a88: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4d0a88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4d0a8c:
    // 0x4d0a8c: 0x320f809  jalr        $t9
label_4d0a90:
    if (ctx->pc == 0x4D0A90u) {
        ctx->pc = 0x4D0A94u;
        goto label_4d0a94;
    }
    ctx->pc = 0x4D0A8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D0A94u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D0A94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D0A94u; }
            if (ctx->pc != 0x4D0A94u) { return; }
        }
        }
    }
    ctx->pc = 0x4D0A94u;
label_4d0a94:
    // 0x4d0a94: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4d0a94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4d0a98:
    // 0x4d0a98: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4d0a98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4d0a9c:
    // 0x4d0a9c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4d0a9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4d0aa0:
    // 0x4d0aa0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4d0aa4:
    if (ctx->pc == 0x4D0AA4u) {
        ctx->pc = 0x4D0AA4u;
            // 0x4d0aa4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4D0AA8u;
        goto label_4d0aa8;
    }
    ctx->pc = 0x4D0AA0u;
    {
        const bool branch_taken_0x4d0aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D0AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0AA0u;
            // 0x4d0aa4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0aa0) {
            ctx->pc = 0x4D0A78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d0a78;
        }
    }
    ctx->pc = 0x4D0AA8u;
label_4d0aa8:
    // 0x4d0aa8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4d0aa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4d0aac:
    // 0x4d0aac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4d0aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4d0ab0:
    // 0x4d0ab0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4d0ab0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4d0ab4:
    // 0x4d0ab4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4d0ab4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d0ab8:
    // 0x4d0ab8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4d0ab8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d0abc:
    // 0x4d0abc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d0abcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d0ac0:
    // 0x4d0ac0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d0ac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d0ac4:
    // 0x4d0ac4: 0x3e00008  jr          $ra
label_4d0ac8:
    if (ctx->pc == 0x4D0AC8u) {
        ctx->pc = 0x4D0AC8u;
            // 0x4d0ac8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4D0ACCu;
        goto label_4d0acc;
    }
    ctx->pc = 0x4D0AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D0AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0AC4u;
            // 0x4d0ac8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D0ACCu;
label_4d0acc:
    // 0x4d0acc: 0x0  nop
    ctx->pc = 0x4d0accu;
    // NOP
label_4d0ad0:
    // 0x4d0ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d0ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4d0ad4:
    // 0x4d0ad4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4d0ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d0ad8:
    // 0x4d0ad8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d0ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d0adc:
    // 0x4d0adc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4d0adcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4d0ae0:
    // 0x4d0ae0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d0ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d0ae4:
    // 0x4d0ae4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4d0ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4d0ae8:
    // 0x4d0ae8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4d0ae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4d0aec:
    // 0x4d0aec: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4d0aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4d0af0:
    // 0x4d0af0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4d0af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4d0af4:
    // 0x4d0af4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d0af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d0af8:
    // 0x4d0af8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4d0af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4d0afc:
    // 0x4d0afc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4d0afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d0b00:
    // 0x4d0b00: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4d0b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4d0b04:
    // 0x4d0b04: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4d0b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4d0b08:
    // 0x4d0b08: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4d0b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4d0b0c:
    // 0x4d0b0c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4d0b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4d0b10:
    // 0x4d0b10: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4d0b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4d0b14:
    // 0x4d0b14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4d0b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4d0b18:
    // 0x4d0b18: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4d0b18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4d0b1c:
    // 0x4d0b1c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4d0b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4d0b20:
    // 0x4d0b20: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4d0b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4d0b24:
    // 0x4d0b24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4d0b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4d0b28:
    // 0x4d0b28: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4d0b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d0b2c:
    // 0x4d0b2c: 0xc0a997c  jal         func_2A65F0
label_4d0b30:
    if (ctx->pc == 0x4D0B30u) {
        ctx->pc = 0x4D0B30u;
            // 0x4d0b30: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4D0B34u;
        goto label_4d0b34;
    }
    ctx->pc = 0x4D0B2Cu;
    SET_GPR_U32(ctx, 31, 0x4D0B34u);
    ctx->pc = 0x4D0B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0B2Cu;
            // 0x4d0b30: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0B34u; }
        if (ctx->pc != 0x4D0B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0B34u; }
        if (ctx->pc != 0x4D0B34u) { return; }
    }
    ctx->pc = 0x4D0B34u;
label_4d0b34:
    // 0x4d0b34: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4d0b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4d0b38:
    // 0x4d0b38: 0xc0d879c  jal         func_361E70
label_4d0b3c:
    if (ctx->pc == 0x4D0B3Cu) {
        ctx->pc = 0x4D0B3Cu;
            // 0x4d0b3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D0B40u;
        goto label_4d0b40;
    }
    ctx->pc = 0x4D0B38u;
    SET_GPR_U32(ctx, 31, 0x4D0B40u);
    ctx->pc = 0x4D0B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0B38u;
            // 0x4d0b3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0B40u; }
        if (ctx->pc != 0x4D0B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0B40u; }
        if (ctx->pc != 0x4D0B40u) { return; }
    }
    ctx->pc = 0x4D0B40u;
label_4d0b40:
    // 0x4d0b40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d0b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d0b44:
    // 0x4d0b44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d0b44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d0b48:
    // 0x4d0b48: 0x3e00008  jr          $ra
label_4d0b4c:
    if (ctx->pc == 0x4D0B4Cu) {
        ctx->pc = 0x4D0B4Cu;
            // 0x4d0b4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4D0B50u;
        goto label_4d0b50;
    }
    ctx->pc = 0x4D0B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D0B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0B48u;
            // 0x4d0b4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D0B50u;
label_4d0b50:
    // 0x4d0b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d0b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d0b54:
    // 0x4d0b54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d0b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d0b58:
    // 0x4d0b58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d0b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d0b5c:
    // 0x4d0b5c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4d0b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4d0b60:
    // 0x4d0b60: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4d0b64:
    if (ctx->pc == 0x4D0B64u) {
        ctx->pc = 0x4D0B64u;
            // 0x4d0b64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D0B68u;
        goto label_4d0b68;
    }
    ctx->pc = 0x4D0B60u;
    {
        const bool branch_taken_0x4d0b60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0B60u;
            // 0x4d0b64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0b60) {
            ctx->pc = 0x4D0C80u;
            goto label_4d0c80;
        }
    }
    ctx->pc = 0x4D0B68u;
label_4d0b68:
    // 0x4d0b68: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4d0b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4d0b6c:
    // 0x4d0b6c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4d0b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4d0b70:
    // 0x4d0b70: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4d0b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4d0b74:
    // 0x4d0b74: 0xc075128  jal         func_1D44A0
label_4d0b78:
    if (ctx->pc == 0x4D0B78u) {
        ctx->pc = 0x4D0B78u;
            // 0x4d0b78: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4D0B7Cu;
        goto label_4d0b7c;
    }
    ctx->pc = 0x4D0B74u;
    SET_GPR_U32(ctx, 31, 0x4D0B7Cu);
    ctx->pc = 0x4D0B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0B74u;
            // 0x4d0b78: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0B7Cu; }
        if (ctx->pc != 0x4D0B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0B7Cu; }
        if (ctx->pc != 0x4D0B7Cu) { return; }
    }
    ctx->pc = 0x4D0B7Cu;
label_4d0b7c:
    // 0x4d0b7c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4d0b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4d0b80:
    // 0x4d0b80: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d0b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d0b84:
    // 0x4d0b84: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4d0b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4d0b88:
    // 0x4d0b88: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4d0b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4d0b8c:
    // 0x4d0b8c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4d0b8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4d0b90:
    // 0x4d0b90: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4d0b94:
    if (ctx->pc == 0x4D0B94u) {
        ctx->pc = 0x4D0B94u;
            // 0x4d0b94: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4D0B98u;
        goto label_4d0b98;
    }
    ctx->pc = 0x4D0B90u;
    {
        const bool branch_taken_0x4d0b90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0B90u;
            // 0x4d0b94: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0b90) {
            ctx->pc = 0x4D0BA0u;
            goto label_4d0ba0;
        }
    }
    ctx->pc = 0x4D0B98u;
label_4d0b98:
    // 0x4d0b98: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d0b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d0b9c:
    // 0x4d0b9c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4d0b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4d0ba0:
    // 0x4d0ba0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4d0ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d0ba4:
    // 0x4d0ba4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d0ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d0ba8:
    // 0x4d0ba8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4d0ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4d0bac:
    // 0x4d0bac: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4d0bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4d0bb0:
    // 0x4d0bb0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4d0bb0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4d0bb4:
    // 0x4d0bb4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4d0bb8:
    if (ctx->pc == 0x4D0BB8u) {
        ctx->pc = 0x4D0BB8u;
            // 0x4d0bb8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4D0BBCu;
        goto label_4d0bbc;
    }
    ctx->pc = 0x4D0BB4u;
    {
        const bool branch_taken_0x4d0bb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0bb4) {
            ctx->pc = 0x4D0BB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0BB4u;
            // 0x4d0bb8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D0BC8u;
            goto label_4d0bc8;
        }
    }
    ctx->pc = 0x4D0BBCu;
label_4d0bbc:
    // 0x4d0bbc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d0bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d0bc0:
    // 0x4d0bc0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4d0bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4d0bc4:
    // 0x4d0bc4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4d0bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d0bc8:
    // 0x4d0bc8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d0bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d0bcc:
    // 0x4d0bcc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4d0bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4d0bd0:
    // 0x4d0bd0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4d0bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4d0bd4:
    // 0x4d0bd4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4d0bd4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4d0bd8:
    // 0x4d0bd8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4d0bdc:
    if (ctx->pc == 0x4D0BDCu) {
        ctx->pc = 0x4D0BDCu;
            // 0x4d0bdc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4D0BE0u;
        goto label_4d0be0;
    }
    ctx->pc = 0x4D0BD8u;
    {
        const bool branch_taken_0x4d0bd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0bd8) {
            ctx->pc = 0x4D0BDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0BD8u;
            // 0x4d0bdc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D0BECu;
            goto label_4d0bec;
        }
    }
    ctx->pc = 0x4D0BE0u;
label_4d0be0:
    // 0x4d0be0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d0be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d0be4:
    // 0x4d0be4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4d0be4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4d0be8:
    // 0x4d0be8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4d0be8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4d0bec:
    // 0x4d0bec: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4d0becu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4d0bf0:
    // 0x4d0bf0: 0x320f809  jalr        $t9
label_4d0bf4:
    if (ctx->pc == 0x4D0BF4u) {
        ctx->pc = 0x4D0BF4u;
            // 0x4d0bf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D0BF8u;
        goto label_4d0bf8;
    }
    ctx->pc = 0x4D0BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D0BF8u);
        ctx->pc = 0x4D0BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0BF0u;
            // 0x4d0bf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D0BF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D0BF8u; }
            if (ctx->pc != 0x4D0BF8u) { return; }
        }
        }
    }
    ctx->pc = 0x4D0BF8u;
label_4d0bf8:
    // 0x4d0bf8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4d0bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4d0bfc:
    // 0x4d0bfc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d0bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d0c00:
    // 0x4d0c00: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4d0c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4d0c04:
    // 0x4d0c04: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4d0c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4d0c08:
    // 0x4d0c08: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4d0c08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4d0c0c:
    // 0x4d0c0c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4d0c0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4d0c10:
    // 0x4d0c10: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4d0c14:
    if (ctx->pc == 0x4D0C14u) {
        ctx->pc = 0x4D0C14u;
            // 0x4d0c14: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4D0C18u;
        goto label_4d0c18;
    }
    ctx->pc = 0x4D0C10u;
    {
        const bool branch_taken_0x4d0c10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0c10) {
            ctx->pc = 0x4D0C14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0C10u;
            // 0x4d0c14: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D0C24u;
            goto label_4d0c24;
        }
    }
    ctx->pc = 0x4D0C18u;
label_4d0c18:
    // 0x4d0c18: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d0c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d0c1c:
    // 0x4d0c1c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4d0c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4d0c20:
    // 0x4d0c20: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4d0c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4d0c24:
    // 0x4d0c24: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d0c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d0c28:
    // 0x4d0c28: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4d0c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4d0c2c:
    // 0x4d0c2c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4d0c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4d0c30:
    // 0x4d0c30: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4d0c30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4d0c34:
    // 0x4d0c34: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4d0c34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4d0c38:
    // 0x4d0c38: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4d0c3c:
    if (ctx->pc == 0x4D0C3Cu) {
        ctx->pc = 0x4D0C40u;
        goto label_4d0c40;
    }
    ctx->pc = 0x4D0C38u;
    {
        const bool branch_taken_0x4d0c38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0c38) {
            ctx->pc = 0x4D0C48u;
            goto label_4d0c48;
        }
    }
    ctx->pc = 0x4D0C40u;
label_4d0c40:
    // 0x4d0c40: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d0c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d0c44:
    // 0x4d0c44: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4d0c44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4d0c48:
    // 0x4d0c48: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d0c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d0c4c:
    // 0x4d0c4c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4d0c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4d0c50:
    // 0x4d0c50: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4d0c50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4d0c54:
    // 0x4d0c54: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4d0c58:
    if (ctx->pc == 0x4D0C58u) {
        ctx->pc = 0x4D0C5Cu;
        goto label_4d0c5c;
    }
    ctx->pc = 0x4D0C54u;
    {
        const bool branch_taken_0x4d0c54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0c54) {
            ctx->pc = 0x4D0C64u;
            goto label_4d0c64;
        }
    }
    ctx->pc = 0x4D0C5Cu;
label_4d0c5c:
    // 0x4d0c5c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d0c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d0c60:
    // 0x4d0c60: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4d0c60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4d0c64:
    // 0x4d0c64: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d0c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d0c68:
    // 0x4d0c68: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4d0c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4d0c6c:
    // 0x4d0c6c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4d0c6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4d0c70:
    // 0x4d0c70: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4d0c74:
    if (ctx->pc == 0x4D0C74u) {
        ctx->pc = 0x4D0C74u;
            // 0x4d0c74: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4D0C78u;
        goto label_4d0c78;
    }
    ctx->pc = 0x4D0C70u;
    {
        const bool branch_taken_0x4d0c70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0c70) {
            ctx->pc = 0x4D0C74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0C70u;
            // 0x4d0c74: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D0C84u;
            goto label_4d0c84;
        }
    }
    ctx->pc = 0x4D0C78u;
label_4d0c78:
    // 0x4d0c78: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d0c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d0c7c:
    // 0x4d0c7c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4d0c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4d0c80:
    // 0x4d0c80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d0c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d0c84:
    // 0x4d0c84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d0c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d0c88:
    // 0x4d0c88: 0x3e00008  jr          $ra
label_4d0c8c:
    if (ctx->pc == 0x4D0C8Cu) {
        ctx->pc = 0x4D0C8Cu;
            // 0x4d0c8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4D0C90u;
        goto label_4d0c90;
    }
    ctx->pc = 0x4D0C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D0C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0C88u;
            // 0x4d0c8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D0C90u;
label_4d0c90:
    // 0x4d0c90: 0x8134054  j           func_4D0150
label_4d0c94:
    if (ctx->pc == 0x4D0C94u) {
        ctx->pc = 0x4D0C94u;
            // 0x4d0c94: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4D0C98u;
        goto label_4d0c98;
    }
    ctx->pc = 0x4D0C90u;
    ctx->pc = 0x4D0C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0C90u;
            // 0x4d0c94: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D0150u;
    {
        auto targetFn = runtime->lookupFunction(0x4D0150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4D0C98u;
label_4d0c98:
    // 0x4d0c98: 0x0  nop
    ctx->pc = 0x4d0c98u;
    // NOP
label_4d0c9c:
    // 0x4d0c9c: 0x0  nop
    ctx->pc = 0x4d0c9cu;
    // NOP
label_4d0ca0:
    // 0x4d0ca0: 0x8134198  j           func_4D0660
label_4d0ca4:
    if (ctx->pc == 0x4D0CA4u) {
        ctx->pc = 0x4D0CA4u;
            // 0x4d0ca4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4D0CA8u;
        goto label_4d0ca8;
    }
    ctx->pc = 0x4D0CA0u;
    ctx->pc = 0x4D0CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0CA0u;
            // 0x4d0ca4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D0660u;
    {
        auto targetFn = runtime->lookupFunction(0x4D0660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4D0CA8u;
label_4d0ca8:
    // 0x4d0ca8: 0x0  nop
    ctx->pc = 0x4d0ca8u;
    // NOP
label_4d0cac:
    // 0x4d0cac: 0x0  nop
    ctx->pc = 0x4d0cacu;
    // NOP
label_4d0cb0:
    // 0x4d0cb0: 0x8133ffc  j           func_4CFFF0
label_4d0cb4:
    if (ctx->pc == 0x4D0CB4u) {
        ctx->pc = 0x4D0CB4u;
            // 0x4d0cb4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4D0CB8u;
        goto label_4d0cb8;
    }
    ctx->pc = 0x4D0CB0u;
    ctx->pc = 0x4D0CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0CB0u;
            // 0x4d0cb4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CFFF0u;
    if (runtime->hasFunction(0x4CFFF0u)) {
        auto targetFn = runtime->lookupFunction(0x4CFFF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004CFFF0_0x4cfff0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4D0CB8u;
label_4d0cb8:
    // 0x4d0cb8: 0x0  nop
    ctx->pc = 0x4d0cb8u;
    // NOP
label_4d0cbc:
    // 0x4d0cbc: 0x0  nop
    ctx->pc = 0x4d0cbcu;
    // NOP
label_4d0cc0:
    // 0x4d0cc0: 0x8133fd8  j           func_4CFF60
label_4d0cc4:
    if (ctx->pc == 0x4D0CC4u) {
        ctx->pc = 0x4D0CC4u;
            // 0x4d0cc4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4D0CC8u;
        goto label_4d0cc8;
    }
    ctx->pc = 0x4D0CC0u;
    ctx->pc = 0x4D0CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0CC0u;
            // 0x4d0cc4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CFF60u;
    {
        auto targetFn = runtime->lookupFunction(0x4CFF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4D0CC8u;
label_4d0cc8:
    // 0x4d0cc8: 0x0  nop
    ctx->pc = 0x4d0cc8u;
    // NOP
label_4d0ccc:
    // 0x4d0ccc: 0x0  nop
    ctx->pc = 0x4d0cccu;
    // NOP
label_4d0cd0:
    // 0x4d0cd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d0cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4d0cd4:
    // 0x4d0cd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d0cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4d0cd8:
    // 0x4d0cd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d0cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d0cdc:
    // 0x4d0cdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d0cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d0ce0:
    // 0x4d0ce0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d0ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d0ce4:
    // 0x4d0ce4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_4d0ce8:
    if (ctx->pc == 0x4D0CE8u) {
        ctx->pc = 0x4D0CE8u;
            // 0x4d0ce8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D0CECu;
        goto label_4d0cec;
    }
    ctx->pc = 0x4D0CE4u;
    {
        const bool branch_taken_0x4d0ce4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0CE4u;
            // 0x4d0ce8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0ce4) {
            ctx->pc = 0x4D0D40u;
            goto label_4d0d40;
        }
    }
    ctx->pc = 0x4D0CECu;
label_4d0cec:
    // 0x4d0cec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d0cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d0cf0:
    // 0x4d0cf0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d0cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d0cf4:
    // 0x4d0cf4: 0x246320c0  addiu       $v1, $v1, 0x20C0
    ctx->pc = 0x4d0cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8384));
label_4d0cf8:
    // 0x4d0cf8: 0x244220f8  addiu       $v0, $v0, 0x20F8
    ctx->pc = 0x4d0cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8440));
label_4d0cfc:
    // 0x4d0cfc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d0cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4d0d00:
    // 0x4d0d00: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_4d0d04:
    if (ctx->pc == 0x4D0D04u) {
        ctx->pc = 0x4D0D04u;
            // 0x4d0d04: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4D0D08u;
        goto label_4d0d08;
    }
    ctx->pc = 0x4D0D00u;
    {
        const bool branch_taken_0x4d0d00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0D00u;
            // 0x4d0d04: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0d00) {
            ctx->pc = 0x4D0D28u;
            goto label_4d0d28;
        }
    }
    ctx->pc = 0x4D0D08u;
label_4d0d08:
    // 0x4d0d08: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d0d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d0d0c:
    // 0x4d0d0c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d0d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d0d10:
    // 0x4d0d10: 0x24632170  addiu       $v1, $v1, 0x2170
    ctx->pc = 0x4d0d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8560));
label_4d0d14:
    // 0x4d0d14: 0x244221a8  addiu       $v0, $v0, 0x21A8
    ctx->pc = 0x4d0d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8616));
label_4d0d18:
    // 0x4d0d18: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d0d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4d0d1c:
    // 0x4d0d1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4d0d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d0d20:
    // 0x4d0d20: 0xc134358  jal         func_4D0D60
label_4d0d24:
    if (ctx->pc == 0x4D0D24u) {
        ctx->pc = 0x4D0D24u;
            // 0x4d0d24: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4D0D28u;
        goto label_4d0d28;
    }
    ctx->pc = 0x4D0D20u;
    SET_GPR_U32(ctx, 31, 0x4D0D28u);
    ctx->pc = 0x4D0D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0D20u;
            // 0x4d0d24: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D0D60u;
    if (runtime->hasFunction(0x4D0D60u)) {
        auto targetFn = runtime->lookupFunction(0x4D0D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0D28u; }
        if (ctx->pc != 0x4D0D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D0D60_0x4d0d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0D28u; }
        if (ctx->pc != 0x4D0D28u) { return; }
    }
    ctx->pc = 0x4D0D28u;
label_4d0d28:
    // 0x4d0d28: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4d0d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4d0d2c:
    // 0x4d0d2c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4d0d2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4d0d30:
    // 0x4d0d30: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4d0d34:
    if (ctx->pc == 0x4D0D34u) {
        ctx->pc = 0x4D0D34u;
            // 0x4d0d34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D0D38u;
        goto label_4d0d38;
    }
    ctx->pc = 0x4D0D30u;
    {
        const bool branch_taken_0x4d0d30 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4d0d30) {
            ctx->pc = 0x4D0D34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0D30u;
            // 0x4d0d34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D0D44u;
            goto label_4d0d44;
        }
    }
    ctx->pc = 0x4D0D38u;
label_4d0d38:
    // 0x4d0d38: 0xc0400a8  jal         func_1002A0
label_4d0d3c:
    if (ctx->pc == 0x4D0D3Cu) {
        ctx->pc = 0x4D0D3Cu;
            // 0x4d0d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D0D40u;
        goto label_4d0d40;
    }
    ctx->pc = 0x4D0D38u;
    SET_GPR_U32(ctx, 31, 0x4D0D40u);
    ctx->pc = 0x4D0D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0D38u;
            // 0x4d0d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0D40u; }
        if (ctx->pc != 0x4D0D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0D40u; }
        if (ctx->pc != 0x4D0D40u) { return; }
    }
    ctx->pc = 0x4D0D40u;
label_4d0d40:
    // 0x4d0d40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d0d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d0d44:
    // 0x4d0d44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d0d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d0d48:
    // 0x4d0d48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d0d48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d0d4c:
    // 0x4d0d4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d0d4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d0d50:
    // 0x4d0d50: 0x3e00008  jr          $ra
label_4d0d54:
    if (ctx->pc == 0x4D0D54u) {
        ctx->pc = 0x4D0D54u;
            // 0x4d0d54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4D0D58u;
        goto label_4d0d58;
    }
    ctx->pc = 0x4D0D50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D0D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0D50u;
            // 0x4d0d54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D0D58u;
label_4d0d58:
    // 0x4d0d58: 0x0  nop
    ctx->pc = 0x4d0d58u;
    // NOP
label_4d0d5c:
    // 0x4d0d5c: 0x0  nop
    ctx->pc = 0x4d0d5cu;
    // NOP
}
