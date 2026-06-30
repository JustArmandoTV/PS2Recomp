#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A27C0
// Address: 0x3a27c0 - 0x3a2c80
void sub_003A27C0_0x3a27c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A27C0_0x3a27c0");
#endif

    switch (ctx->pc) {
        case 0x3a27c0u: goto label_3a27c0;
        case 0x3a27c4u: goto label_3a27c4;
        case 0x3a27c8u: goto label_3a27c8;
        case 0x3a27ccu: goto label_3a27cc;
        case 0x3a27d0u: goto label_3a27d0;
        case 0x3a27d4u: goto label_3a27d4;
        case 0x3a27d8u: goto label_3a27d8;
        case 0x3a27dcu: goto label_3a27dc;
        case 0x3a27e0u: goto label_3a27e0;
        case 0x3a27e4u: goto label_3a27e4;
        case 0x3a27e8u: goto label_3a27e8;
        case 0x3a27ecu: goto label_3a27ec;
        case 0x3a27f0u: goto label_3a27f0;
        case 0x3a27f4u: goto label_3a27f4;
        case 0x3a27f8u: goto label_3a27f8;
        case 0x3a27fcu: goto label_3a27fc;
        case 0x3a2800u: goto label_3a2800;
        case 0x3a2804u: goto label_3a2804;
        case 0x3a2808u: goto label_3a2808;
        case 0x3a280cu: goto label_3a280c;
        case 0x3a2810u: goto label_3a2810;
        case 0x3a2814u: goto label_3a2814;
        case 0x3a2818u: goto label_3a2818;
        case 0x3a281cu: goto label_3a281c;
        case 0x3a2820u: goto label_3a2820;
        case 0x3a2824u: goto label_3a2824;
        case 0x3a2828u: goto label_3a2828;
        case 0x3a282cu: goto label_3a282c;
        case 0x3a2830u: goto label_3a2830;
        case 0x3a2834u: goto label_3a2834;
        case 0x3a2838u: goto label_3a2838;
        case 0x3a283cu: goto label_3a283c;
        case 0x3a2840u: goto label_3a2840;
        case 0x3a2844u: goto label_3a2844;
        case 0x3a2848u: goto label_3a2848;
        case 0x3a284cu: goto label_3a284c;
        case 0x3a2850u: goto label_3a2850;
        case 0x3a2854u: goto label_3a2854;
        case 0x3a2858u: goto label_3a2858;
        case 0x3a285cu: goto label_3a285c;
        case 0x3a2860u: goto label_3a2860;
        case 0x3a2864u: goto label_3a2864;
        case 0x3a2868u: goto label_3a2868;
        case 0x3a286cu: goto label_3a286c;
        case 0x3a2870u: goto label_3a2870;
        case 0x3a2874u: goto label_3a2874;
        case 0x3a2878u: goto label_3a2878;
        case 0x3a287cu: goto label_3a287c;
        case 0x3a2880u: goto label_3a2880;
        case 0x3a2884u: goto label_3a2884;
        case 0x3a2888u: goto label_3a2888;
        case 0x3a288cu: goto label_3a288c;
        case 0x3a2890u: goto label_3a2890;
        case 0x3a2894u: goto label_3a2894;
        case 0x3a2898u: goto label_3a2898;
        case 0x3a289cu: goto label_3a289c;
        case 0x3a28a0u: goto label_3a28a0;
        case 0x3a28a4u: goto label_3a28a4;
        case 0x3a28a8u: goto label_3a28a8;
        case 0x3a28acu: goto label_3a28ac;
        case 0x3a28b0u: goto label_3a28b0;
        case 0x3a28b4u: goto label_3a28b4;
        case 0x3a28b8u: goto label_3a28b8;
        case 0x3a28bcu: goto label_3a28bc;
        case 0x3a28c0u: goto label_3a28c0;
        case 0x3a28c4u: goto label_3a28c4;
        case 0x3a28c8u: goto label_3a28c8;
        case 0x3a28ccu: goto label_3a28cc;
        case 0x3a28d0u: goto label_3a28d0;
        case 0x3a28d4u: goto label_3a28d4;
        case 0x3a28d8u: goto label_3a28d8;
        case 0x3a28dcu: goto label_3a28dc;
        case 0x3a28e0u: goto label_3a28e0;
        case 0x3a28e4u: goto label_3a28e4;
        case 0x3a28e8u: goto label_3a28e8;
        case 0x3a28ecu: goto label_3a28ec;
        case 0x3a28f0u: goto label_3a28f0;
        case 0x3a28f4u: goto label_3a28f4;
        case 0x3a28f8u: goto label_3a28f8;
        case 0x3a28fcu: goto label_3a28fc;
        case 0x3a2900u: goto label_3a2900;
        case 0x3a2904u: goto label_3a2904;
        case 0x3a2908u: goto label_3a2908;
        case 0x3a290cu: goto label_3a290c;
        case 0x3a2910u: goto label_3a2910;
        case 0x3a2914u: goto label_3a2914;
        case 0x3a2918u: goto label_3a2918;
        case 0x3a291cu: goto label_3a291c;
        case 0x3a2920u: goto label_3a2920;
        case 0x3a2924u: goto label_3a2924;
        case 0x3a2928u: goto label_3a2928;
        case 0x3a292cu: goto label_3a292c;
        case 0x3a2930u: goto label_3a2930;
        case 0x3a2934u: goto label_3a2934;
        case 0x3a2938u: goto label_3a2938;
        case 0x3a293cu: goto label_3a293c;
        case 0x3a2940u: goto label_3a2940;
        case 0x3a2944u: goto label_3a2944;
        case 0x3a2948u: goto label_3a2948;
        case 0x3a294cu: goto label_3a294c;
        case 0x3a2950u: goto label_3a2950;
        case 0x3a2954u: goto label_3a2954;
        case 0x3a2958u: goto label_3a2958;
        case 0x3a295cu: goto label_3a295c;
        case 0x3a2960u: goto label_3a2960;
        case 0x3a2964u: goto label_3a2964;
        case 0x3a2968u: goto label_3a2968;
        case 0x3a296cu: goto label_3a296c;
        case 0x3a2970u: goto label_3a2970;
        case 0x3a2974u: goto label_3a2974;
        case 0x3a2978u: goto label_3a2978;
        case 0x3a297cu: goto label_3a297c;
        case 0x3a2980u: goto label_3a2980;
        case 0x3a2984u: goto label_3a2984;
        case 0x3a2988u: goto label_3a2988;
        case 0x3a298cu: goto label_3a298c;
        case 0x3a2990u: goto label_3a2990;
        case 0x3a2994u: goto label_3a2994;
        case 0x3a2998u: goto label_3a2998;
        case 0x3a299cu: goto label_3a299c;
        case 0x3a29a0u: goto label_3a29a0;
        case 0x3a29a4u: goto label_3a29a4;
        case 0x3a29a8u: goto label_3a29a8;
        case 0x3a29acu: goto label_3a29ac;
        case 0x3a29b0u: goto label_3a29b0;
        case 0x3a29b4u: goto label_3a29b4;
        case 0x3a29b8u: goto label_3a29b8;
        case 0x3a29bcu: goto label_3a29bc;
        case 0x3a29c0u: goto label_3a29c0;
        case 0x3a29c4u: goto label_3a29c4;
        case 0x3a29c8u: goto label_3a29c8;
        case 0x3a29ccu: goto label_3a29cc;
        case 0x3a29d0u: goto label_3a29d0;
        case 0x3a29d4u: goto label_3a29d4;
        case 0x3a29d8u: goto label_3a29d8;
        case 0x3a29dcu: goto label_3a29dc;
        case 0x3a29e0u: goto label_3a29e0;
        case 0x3a29e4u: goto label_3a29e4;
        case 0x3a29e8u: goto label_3a29e8;
        case 0x3a29ecu: goto label_3a29ec;
        case 0x3a29f0u: goto label_3a29f0;
        case 0x3a29f4u: goto label_3a29f4;
        case 0x3a29f8u: goto label_3a29f8;
        case 0x3a29fcu: goto label_3a29fc;
        case 0x3a2a00u: goto label_3a2a00;
        case 0x3a2a04u: goto label_3a2a04;
        case 0x3a2a08u: goto label_3a2a08;
        case 0x3a2a0cu: goto label_3a2a0c;
        case 0x3a2a10u: goto label_3a2a10;
        case 0x3a2a14u: goto label_3a2a14;
        case 0x3a2a18u: goto label_3a2a18;
        case 0x3a2a1cu: goto label_3a2a1c;
        case 0x3a2a20u: goto label_3a2a20;
        case 0x3a2a24u: goto label_3a2a24;
        case 0x3a2a28u: goto label_3a2a28;
        case 0x3a2a2cu: goto label_3a2a2c;
        case 0x3a2a30u: goto label_3a2a30;
        case 0x3a2a34u: goto label_3a2a34;
        case 0x3a2a38u: goto label_3a2a38;
        case 0x3a2a3cu: goto label_3a2a3c;
        case 0x3a2a40u: goto label_3a2a40;
        case 0x3a2a44u: goto label_3a2a44;
        case 0x3a2a48u: goto label_3a2a48;
        case 0x3a2a4cu: goto label_3a2a4c;
        case 0x3a2a50u: goto label_3a2a50;
        case 0x3a2a54u: goto label_3a2a54;
        case 0x3a2a58u: goto label_3a2a58;
        case 0x3a2a5cu: goto label_3a2a5c;
        case 0x3a2a60u: goto label_3a2a60;
        case 0x3a2a64u: goto label_3a2a64;
        case 0x3a2a68u: goto label_3a2a68;
        case 0x3a2a6cu: goto label_3a2a6c;
        case 0x3a2a70u: goto label_3a2a70;
        case 0x3a2a74u: goto label_3a2a74;
        case 0x3a2a78u: goto label_3a2a78;
        case 0x3a2a7cu: goto label_3a2a7c;
        case 0x3a2a80u: goto label_3a2a80;
        case 0x3a2a84u: goto label_3a2a84;
        case 0x3a2a88u: goto label_3a2a88;
        case 0x3a2a8cu: goto label_3a2a8c;
        case 0x3a2a90u: goto label_3a2a90;
        case 0x3a2a94u: goto label_3a2a94;
        case 0x3a2a98u: goto label_3a2a98;
        case 0x3a2a9cu: goto label_3a2a9c;
        case 0x3a2aa0u: goto label_3a2aa0;
        case 0x3a2aa4u: goto label_3a2aa4;
        case 0x3a2aa8u: goto label_3a2aa8;
        case 0x3a2aacu: goto label_3a2aac;
        case 0x3a2ab0u: goto label_3a2ab0;
        case 0x3a2ab4u: goto label_3a2ab4;
        case 0x3a2ab8u: goto label_3a2ab8;
        case 0x3a2abcu: goto label_3a2abc;
        case 0x3a2ac0u: goto label_3a2ac0;
        case 0x3a2ac4u: goto label_3a2ac4;
        case 0x3a2ac8u: goto label_3a2ac8;
        case 0x3a2accu: goto label_3a2acc;
        case 0x3a2ad0u: goto label_3a2ad0;
        case 0x3a2ad4u: goto label_3a2ad4;
        case 0x3a2ad8u: goto label_3a2ad8;
        case 0x3a2adcu: goto label_3a2adc;
        case 0x3a2ae0u: goto label_3a2ae0;
        case 0x3a2ae4u: goto label_3a2ae4;
        case 0x3a2ae8u: goto label_3a2ae8;
        case 0x3a2aecu: goto label_3a2aec;
        case 0x3a2af0u: goto label_3a2af0;
        case 0x3a2af4u: goto label_3a2af4;
        case 0x3a2af8u: goto label_3a2af8;
        case 0x3a2afcu: goto label_3a2afc;
        case 0x3a2b00u: goto label_3a2b00;
        case 0x3a2b04u: goto label_3a2b04;
        case 0x3a2b08u: goto label_3a2b08;
        case 0x3a2b0cu: goto label_3a2b0c;
        case 0x3a2b10u: goto label_3a2b10;
        case 0x3a2b14u: goto label_3a2b14;
        case 0x3a2b18u: goto label_3a2b18;
        case 0x3a2b1cu: goto label_3a2b1c;
        case 0x3a2b20u: goto label_3a2b20;
        case 0x3a2b24u: goto label_3a2b24;
        case 0x3a2b28u: goto label_3a2b28;
        case 0x3a2b2cu: goto label_3a2b2c;
        case 0x3a2b30u: goto label_3a2b30;
        case 0x3a2b34u: goto label_3a2b34;
        case 0x3a2b38u: goto label_3a2b38;
        case 0x3a2b3cu: goto label_3a2b3c;
        case 0x3a2b40u: goto label_3a2b40;
        case 0x3a2b44u: goto label_3a2b44;
        case 0x3a2b48u: goto label_3a2b48;
        case 0x3a2b4cu: goto label_3a2b4c;
        case 0x3a2b50u: goto label_3a2b50;
        case 0x3a2b54u: goto label_3a2b54;
        case 0x3a2b58u: goto label_3a2b58;
        case 0x3a2b5cu: goto label_3a2b5c;
        case 0x3a2b60u: goto label_3a2b60;
        case 0x3a2b64u: goto label_3a2b64;
        case 0x3a2b68u: goto label_3a2b68;
        case 0x3a2b6cu: goto label_3a2b6c;
        case 0x3a2b70u: goto label_3a2b70;
        case 0x3a2b74u: goto label_3a2b74;
        case 0x3a2b78u: goto label_3a2b78;
        case 0x3a2b7cu: goto label_3a2b7c;
        case 0x3a2b80u: goto label_3a2b80;
        case 0x3a2b84u: goto label_3a2b84;
        case 0x3a2b88u: goto label_3a2b88;
        case 0x3a2b8cu: goto label_3a2b8c;
        case 0x3a2b90u: goto label_3a2b90;
        case 0x3a2b94u: goto label_3a2b94;
        case 0x3a2b98u: goto label_3a2b98;
        case 0x3a2b9cu: goto label_3a2b9c;
        case 0x3a2ba0u: goto label_3a2ba0;
        case 0x3a2ba4u: goto label_3a2ba4;
        case 0x3a2ba8u: goto label_3a2ba8;
        case 0x3a2bacu: goto label_3a2bac;
        case 0x3a2bb0u: goto label_3a2bb0;
        case 0x3a2bb4u: goto label_3a2bb4;
        case 0x3a2bb8u: goto label_3a2bb8;
        case 0x3a2bbcu: goto label_3a2bbc;
        case 0x3a2bc0u: goto label_3a2bc0;
        case 0x3a2bc4u: goto label_3a2bc4;
        case 0x3a2bc8u: goto label_3a2bc8;
        case 0x3a2bccu: goto label_3a2bcc;
        case 0x3a2bd0u: goto label_3a2bd0;
        case 0x3a2bd4u: goto label_3a2bd4;
        case 0x3a2bd8u: goto label_3a2bd8;
        case 0x3a2bdcu: goto label_3a2bdc;
        case 0x3a2be0u: goto label_3a2be0;
        case 0x3a2be4u: goto label_3a2be4;
        case 0x3a2be8u: goto label_3a2be8;
        case 0x3a2becu: goto label_3a2bec;
        case 0x3a2bf0u: goto label_3a2bf0;
        case 0x3a2bf4u: goto label_3a2bf4;
        case 0x3a2bf8u: goto label_3a2bf8;
        case 0x3a2bfcu: goto label_3a2bfc;
        case 0x3a2c00u: goto label_3a2c00;
        case 0x3a2c04u: goto label_3a2c04;
        case 0x3a2c08u: goto label_3a2c08;
        case 0x3a2c0cu: goto label_3a2c0c;
        case 0x3a2c10u: goto label_3a2c10;
        case 0x3a2c14u: goto label_3a2c14;
        case 0x3a2c18u: goto label_3a2c18;
        case 0x3a2c1cu: goto label_3a2c1c;
        case 0x3a2c20u: goto label_3a2c20;
        case 0x3a2c24u: goto label_3a2c24;
        case 0x3a2c28u: goto label_3a2c28;
        case 0x3a2c2cu: goto label_3a2c2c;
        case 0x3a2c30u: goto label_3a2c30;
        case 0x3a2c34u: goto label_3a2c34;
        case 0x3a2c38u: goto label_3a2c38;
        case 0x3a2c3cu: goto label_3a2c3c;
        case 0x3a2c40u: goto label_3a2c40;
        case 0x3a2c44u: goto label_3a2c44;
        case 0x3a2c48u: goto label_3a2c48;
        case 0x3a2c4cu: goto label_3a2c4c;
        case 0x3a2c50u: goto label_3a2c50;
        case 0x3a2c54u: goto label_3a2c54;
        case 0x3a2c58u: goto label_3a2c58;
        case 0x3a2c5cu: goto label_3a2c5c;
        case 0x3a2c60u: goto label_3a2c60;
        case 0x3a2c64u: goto label_3a2c64;
        case 0x3a2c68u: goto label_3a2c68;
        case 0x3a2c6cu: goto label_3a2c6c;
        case 0x3a2c70u: goto label_3a2c70;
        case 0x3a2c74u: goto label_3a2c74;
        case 0x3a2c78u: goto label_3a2c78;
        case 0x3a2c7cu: goto label_3a2c7c;
        default: break;
    }

    ctx->pc = 0x3a27c0u;

label_3a27c0:
    // 0x3a27c0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x3a27c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_3a27c4:
    // 0x3a27c4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3a27c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3a27c8:
    // 0x3a27c8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3a27c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3a27cc:
    // 0x3a27cc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3a27ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3a27d0:
    // 0x3a27d0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3a27d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3a27d4:
    // 0x3a27d4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3a27d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3a27d8:
    // 0x3a27d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3a27d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3a27dc:
    // 0x3a27dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3a27dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3a27e0:
    // 0x3a27e0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3a27e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a27e4:
    // 0x3a27e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3a27e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3a27e8:
    // 0x3a27e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a27e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3a27ec:
    // 0x3a27ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a27ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a27f0:
    // 0x3a27f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a27f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a27f4:
    // 0x3a27f4: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x3a27f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3a27f8:
    // 0x3a27f8: 0xafa500ac  sw          $a1, 0xAC($sp)
    ctx->pc = 0x3a27f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
label_3a27fc:
    // 0x3a27fc: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x3a27fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3a2800:
    // 0x3a2800: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x3a2800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3a2804:
    // 0x3a2804: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3a2804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3a2808:
    // 0x3a2808: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x3a2808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
label_3a280c:
    // 0x3a280c: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x3a280cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3a2810:
    // 0x3a2810: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3a2810u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3a2814:
    // 0x3a2814: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3a2814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3a2818:
    // 0x3a2818: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3a2818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3a281c:
    // 0x3a281c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3a281cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3a2820:
    // 0x3a2820: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a2820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3a2824:
    // 0x3a2824: 0xc0fe54c  jal         func_3F9530
label_3a2828:
    if (ctx->pc == 0x3A2828u) {
        ctx->pc = 0x3A2828u;
            // 0x3a2828: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x3A282Cu;
        goto label_3a282c;
    }
    ctx->pc = 0x3A2824u;
    SET_GPR_U32(ctx, 31, 0x3A282Cu);
    ctx->pc = 0x3A2828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2824u;
            // 0x3a2828: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A282Cu; }
        if (ctx->pc != 0x3A282Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A282Cu; }
        if (ctx->pc != 0x3A282Cu) { return; }
    }
    ctx->pc = 0x3A282Cu;
label_3a282c:
    // 0x3a282c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3a282cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3a2830:
    // 0x3a2830: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x3a2830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_3a2834:
    // 0x3a2834: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x3a2834u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a2838:
    // 0x3a2838: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3a2838u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a283c:
    // 0x3a283c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x3a283cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3a2840:
    // 0x3a2840: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a2840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3a2844:
    // 0x3a2844: 0x101b00  sll         $v1, $s0, 12
    ctx->pc = 0x3a2844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 12));
label_3a2848:
    // 0x3a2848: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x3a2848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3a284c:
    // 0x3a284c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x3a284cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_3a2850:
    // 0x3a2850: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a2850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a2854:
    // 0x3a2854: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3a2854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_3a2858:
    // 0x3a2858: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3a2858u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a285c:
    // 0x3a285c: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x3a285cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3a2860:
    // 0x3a2860: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x3a2860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_3a2864:
    // 0x3a2864: 0xc0fe54c  jal         func_3F9530
label_3a2868:
    if (ctx->pc == 0x3A2868u) {
        ctx->pc = 0x3A2868u;
            // 0x3a2868: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3A286Cu;
        goto label_3a286c;
    }
    ctx->pc = 0x3A2864u;
    SET_GPR_U32(ctx, 31, 0x3A286Cu);
    ctx->pc = 0x3A2868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2864u;
            // 0x3a2868: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A286Cu; }
        if (ctx->pc != 0x3A286Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A286Cu; }
        if (ctx->pc != 0x3A286Cu) { return; }
    }
    ctx->pc = 0x3A286Cu;
label_3a286c:
    // 0x3a286c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a286cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a2870:
    // 0x3a2870: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
label_3a2874:
    if (ctx->pc == 0x3A2874u) {
        ctx->pc = 0x3A2878u;
        goto label_3a2878;
    }
    ctx->pc = 0x3A2870u;
    {
        const bool branch_taken_0x3a2870 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2870) {
            ctx->pc = 0x3A28D8u;
            goto label_3a28d8;
        }
    }
    ctx->pc = 0x3A2878u;
label_3a2878:
    // 0x3a2878: 0x8eb10034  lw          $s1, 0x34($s5)
    ctx->pc = 0x3a2878u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_3a287c:
    // 0x3a287c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3a287cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3a2880:
    // 0x3a2880: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x3a2880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3a2884:
    // 0x3a2884: 0x2442fd60  addiu       $v0, $v0, -0x2A0
    ctx->pc = 0x3a2884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966624));
label_3a2888:
    // 0x3a2888: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3a2888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a288c:
    // 0x3a288c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3a288cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3a2890:
    // 0x3a2890: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x3a2890u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_3a2894:
    // 0x3a2894: 0xae510018  sw          $s1, 0x18($s2)
    ctx->pc = 0x3a2894u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 17));
label_3a2898:
    // 0x3a2898: 0xae46001c  sw          $a2, 0x1C($s2)
    ctx->pc = 0x3a2898u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 6));
label_3a289c:
    // 0x3a289c: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x3a289cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_3a28a0:
    // 0x3a28a0: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x3a28a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_3a28a4:
    // 0x3a28a4: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x3a28a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_3a28a8:
    // 0x3a28a8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3a28a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a28ac:
    // 0x3a28ac: 0xc0fe54c  jal         func_3F9530
label_3a28b0:
    if (ctx->pc == 0x3A28B0u) {
        ctx->pc = 0x3A28B0u;
            // 0x3a28b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A28B4u;
        goto label_3a28b4;
    }
    ctx->pc = 0x3A28ACu;
    SET_GPR_U32(ctx, 31, 0x3A28B4u);
    ctx->pc = 0x3A28B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A28ACu;
            // 0x3a28b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A28B4u; }
        if (ctx->pc != 0x3A28B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A28B4u; }
        if (ctx->pc != 0x3A28B4u) { return; }
    }
    ctx->pc = 0x3A28B4u;
label_3a28b4:
    // 0x3a28b4: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x3a28b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_3a28b8:
    // 0x3a28b8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3a28b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3a28bc:
    // 0x3a28bc: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x3a28bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_3a28c0:
    // 0x3a28c0: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x3a28c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3a28c4:
    // 0x3a28c4: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3a28c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_3a28c8:
    // 0x3a28c8: 0x2463fd30  addiu       $v1, $v1, -0x2D0
    ctx->pc = 0x3a28c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966576));
label_3a28cc:
    // 0x3a28cc: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x3a28ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
label_3a28d0:
    // 0x3a28d0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3a28d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_3a28d4:
    // 0x3a28d4: 0x0  nop
    ctx->pc = 0x3a28d4u;
    // NOP
label_3a28d8:
    // 0x3a28d8: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3a28d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3a28dc:
    // 0x3a28dc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3a28dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3a28e0:
    // 0x3a28e0: 0xaed20000  sw          $s2, 0x0($s6)
    ctx->pc = 0x3a28e0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 18));
label_3a28e4:
    // 0x3a28e4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x3a28e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3a28e8:
    // 0x3a28e8: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_3a28ec:
    if (ctx->pc == 0x3A28ECu) {
        ctx->pc = 0x3A28ECu;
            // 0x3a28ec: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x3A28F0u;
        goto label_3a28f0;
    }
    ctx->pc = 0x3A28E8u;
    {
        const bool branch_taken_0x3a28e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A28ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A28E8u;
            // 0x3a28ec: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a28e8) {
            ctx->pc = 0x3A285Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a285c;
        }
    }
    ctx->pc = 0x3A28F0u;
label_3a28f0:
    // 0x3a28f0: 0x8fb200c0  lw          $s2, 0xC0($sp)
    ctx->pc = 0x3a28f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3a28f4:
    // 0x3a28f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a28f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a28f8:
    // 0x3a28f8: 0x8fb600e0  lw          $s6, 0xE0($sp)
    ctx->pc = 0x3a28f8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3a28fc:
    // 0x3a28fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3a28fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2900:
    // 0x3a2900: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3a2900u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2904:
    // 0x3a2904: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x3a2904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_3a2908:
    // 0x3a2908: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x3a2908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a290c:
    // 0x3a290c: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x3a290cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_3a2910:
    // 0x3a2910: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a2910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a2914:
    // 0x3a2914: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x3a2914u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
label_3a2918:
    // 0x3a2918: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
label_3a291c:
    if (ctx->pc == 0x3A291Cu) {
        ctx->pc = 0x3A291Cu;
            // 0x3a291c: 0xae950010  sw          $s5, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 21));
        ctx->pc = 0x3A2920u;
        goto label_3a2920;
    }
    ctx->pc = 0x3A2918u;
    {
        const bool branch_taken_0x3a2918 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A291Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2918u;
            // 0x3a291c: 0xae950010  sw          $s5, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2918) {
            ctx->pc = 0x3A2948u;
            goto label_3a2948;
        }
    }
    ctx->pc = 0x3A2920u;
label_3a2920:
    // 0x3a2920: 0x8ea2003c  lw          $v0, 0x3C($s5)
    ctx->pc = 0x3a2920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
label_3a2924:
    // 0x3a2924: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3a2928:
    if (ctx->pc == 0x3A2928u) {
        ctx->pc = 0x3A292Cu;
        goto label_3a292c;
    }
    ctx->pc = 0x3A2924u;
    {
        const bool branch_taken_0x3a2924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2924) {
            ctx->pc = 0x3A2938u;
            goto label_3a2938;
        }
    }
    ctx->pc = 0x3A292Cu;
label_3a292c:
    // 0x3a292c: 0x10000008  b           . + 4 + (0x8 << 2)
label_3a2930:
    if (ctx->pc == 0x3A2930u) {
        ctx->pc = 0x3A2930u;
            // 0x3a2930: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x3A2934u;
        goto label_3a2934;
    }
    ctx->pc = 0x3A292Cu;
    {
        const bool branch_taken_0x3a292c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A292Cu;
            // 0x3a2930: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a292c) {
            ctx->pc = 0x3A2950u;
            goto label_3a2950;
        }
    }
    ctx->pc = 0x3A2934u;
label_3a2934:
    // 0x3a2934: 0x0  nop
    ctx->pc = 0x3a2934u;
    // NOP
label_3a2938:
    // 0x3a2938: 0x8ea20040  lw          $v0, 0x40($s5)
    ctx->pc = 0x3a2938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_3a293c:
    // 0x3a293c: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x3a293cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_3a2940:
    // 0x3a2940: 0x10000003  b           . + 4 + (0x3 << 2)
label_3a2944:
    if (ctx->pc == 0x3A2944u) {
        ctx->pc = 0x3A2944u;
            // 0x3a2944: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x3A2948u;
        goto label_3a2948;
    }
    ctx->pc = 0x3A2940u;
    {
        const bool branch_taken_0x3a2940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2940u;
            // 0x3a2944: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2940) {
            ctx->pc = 0x3A2950u;
            goto label_3a2950;
        }
    }
    ctx->pc = 0x3A2948u;
label_3a2948:
    // 0x3a2948: 0x8e42fffc  lw          $v0, -0x4($s2)
    ctx->pc = 0x3a2948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_3a294c:
    // 0x3a294c: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x3a294cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_3a2950:
    // 0x3a2950: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x3a2950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3a2954:
    // 0x3a2954: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
label_3a2958:
    if (ctx->pc == 0x3A2958u) {
        ctx->pc = 0x3A295Cu;
        goto label_3a295c;
    }
    ctx->pc = 0x3A2954u;
    {
        const bool branch_taken_0x3a2954 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a2954) {
            ctx->pc = 0x3A2980u;
            goto label_3a2980;
        }
    }
    ctx->pc = 0x3A295Cu;
label_3a295c:
    // 0x3a295c: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x3a295cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_3a2960:
    // 0x3a2960: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3a2964:
    if (ctx->pc == 0x3A2964u) {
        ctx->pc = 0x3A2968u;
        goto label_3a2968;
    }
    ctx->pc = 0x3A2960u;
    {
        const bool branch_taken_0x3a2960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2960) {
            ctx->pc = 0x3A2970u;
            goto label_3a2970;
        }
    }
    ctx->pc = 0x3A2968u;
label_3a2968:
    // 0x3a2968: 0x10000007  b           . + 4 + (0x7 << 2)
label_3a296c:
    if (ctx->pc == 0x3A296Cu) {
        ctx->pc = 0x3A296Cu;
            // 0x3a296c: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x3A2970u;
        goto label_3a2970;
    }
    ctx->pc = 0x3A2968u;
    {
        const bool branch_taken_0x3a2968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A296Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2968u;
            // 0x3a296c: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2968) {
            ctx->pc = 0x3A2988u;
            goto label_3a2988;
        }
    }
    ctx->pc = 0x3A2970u;
label_3a2970:
    // 0x3a2970: 0x8ea20048  lw          $v0, 0x48($s5)
    ctx->pc = 0x3a2970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_3a2974:
    // 0x3a2974: 0x36730002  ori         $s3, $s3, 0x2
    ctx->pc = 0x3a2974u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
label_3a2978:
    // 0x3a2978: 0x10000003  b           . + 4 + (0x3 << 2)
label_3a297c:
    if (ctx->pc == 0x3A297Cu) {
        ctx->pc = 0x3A297Cu;
            // 0x3a297c: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x3A2980u;
        goto label_3a2980;
    }
    ctx->pc = 0x3A2978u;
    {
        const bool branch_taken_0x3a2978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A297Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2978u;
            // 0x3a297c: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2978) {
            ctx->pc = 0x3A2988u;
            goto label_3a2988;
        }
    }
    ctx->pc = 0x3A2980u;
label_3a2980:
    // 0x3a2980: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3a2980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a2984:
    // 0x3a2984: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x3a2984u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_3a2988:
    // 0x3a2988: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a2988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a298c:
    // 0x3a298c: 0x12620014  beq         $s3, $v0, . + 4 + (0x14 << 2)
label_3a2990:
    if (ctx->pc == 0x3A2990u) {
        ctx->pc = 0x3A2994u;
        goto label_3a2994;
    }
    ctx->pc = 0x3A298Cu;
    {
        const bool branch_taken_0x3a298c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a298c) {
            ctx->pc = 0x3A29E0u;
            goto label_3a29e0;
        }
    }
    ctx->pc = 0x3A2994u;
label_3a2994:
    // 0x3a2994: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a2994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a2998:
    // 0x3a2998: 0x1263000d  beq         $s3, $v1, . + 4 + (0xD << 2)
label_3a299c:
    if (ctx->pc == 0x3A299Cu) {
        ctx->pc = 0x3A29A0u;
        goto label_3a29a0;
    }
    ctx->pc = 0x3A2998u;
    {
        const bool branch_taken_0x3a2998 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a2998) {
            ctx->pc = 0x3A29D0u;
            goto label_3a29d0;
        }
    }
    ctx->pc = 0x3A29A0u;
label_3a29a0:
    // 0x3a29a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a29a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a29a4:
    // 0x3a29a4: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
label_3a29a8:
    if (ctx->pc == 0x3A29A8u) {
        ctx->pc = 0x3A29ACu;
        goto label_3a29ac;
    }
    ctx->pc = 0x3A29A4u;
    {
        const bool branch_taken_0x3a29a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a29a4) {
            ctx->pc = 0x3A29C8u;
            goto label_3a29c8;
        }
    }
    ctx->pc = 0x3A29ACu;
label_3a29ac:
    // 0x3a29ac: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_3a29b0:
    if (ctx->pc == 0x3A29B0u) {
        ctx->pc = 0x3A29B4u;
        goto label_3a29b4;
    }
    ctx->pc = 0x3A29ACu;
    {
        const bool branch_taken_0x3a29ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a29ac) {
            ctx->pc = 0x3A29C0u;
            goto label_3a29c0;
        }
    }
    ctx->pc = 0x3A29B4u;
label_3a29b4:
    // 0x3a29b4: 0x1000000c  b           . + 4 + (0xC << 2)
label_3a29b8:
    if (ctx->pc == 0x3A29B8u) {
        ctx->pc = 0x3A29BCu;
        goto label_3a29bc;
    }
    ctx->pc = 0x3A29B4u;
    {
        const bool branch_taken_0x3a29b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a29b4) {
            ctx->pc = 0x3A29E8u;
            goto label_3a29e8;
        }
    }
    ctx->pc = 0x3A29BCu;
label_3a29bc:
    // 0x3a29bc: 0x0  nop
    ctx->pc = 0x3a29bcu;
    // NOP
label_3a29c0:
    // 0x3a29c0: 0x10000009  b           . + 4 + (0x9 << 2)
label_3a29c4:
    if (ctx->pc == 0x3A29C4u) {
        ctx->pc = 0x3A29C4u;
            // 0x3a29c4: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x3A29C8u;
        goto label_3a29c8;
    }
    ctx->pc = 0x3A29C0u;
    {
        const bool branch_taken_0x3a29c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A29C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A29C0u;
            // 0x3a29c4: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a29c0) {
            ctx->pc = 0x3A29E8u;
            goto label_3a29e8;
        }
    }
    ctx->pc = 0x3A29C8u;
label_3a29c8:
    // 0x3a29c8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3a29cc:
    if (ctx->pc == 0x3A29CCu) {
        ctx->pc = 0x3A29CCu;
            // 0x3a29cc: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x3A29D0u;
        goto label_3a29d0;
    }
    ctx->pc = 0x3A29C8u;
    {
        const bool branch_taken_0x3a29c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A29CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A29C8u;
            // 0x3a29cc: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a29c8) {
            ctx->pc = 0x3A29E8u;
            goto label_3a29e8;
        }
    }
    ctx->pc = 0x3A29D0u;
label_3a29d0:
    // 0x3a29d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a29d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a29d4:
    // 0x3a29d4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3a29d8:
    if (ctx->pc == 0x3A29D8u) {
        ctx->pc = 0x3A29D8u;
            // 0x3a29d8: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3A29DCu;
        goto label_3a29dc;
    }
    ctx->pc = 0x3A29D4u;
    {
        const bool branch_taken_0x3a29d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A29D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A29D4u;
            // 0x3a29d8: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a29d4) {
            ctx->pc = 0x3A29E8u;
            goto label_3a29e8;
        }
    }
    ctx->pc = 0x3A29DCu;
label_3a29dc:
    // 0x3a29dc: 0x0  nop
    ctx->pc = 0x3a29dcu;
    // NOP
label_3a29e0:
    // 0x3a29e0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x3a29e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_3a29e4:
    // 0x3a29e4: 0x0  nop
    ctx->pc = 0x3a29e4u;
    // NOP
label_3a29e8:
    // 0x3a29e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a29e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a29ec:
    // 0x3a29ec: 0x8c4267e8  lw          $v0, 0x67E8($v0)
    ctx->pc = 0x3a29ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26600)));
label_3a29f0:
    // 0x3a29f0: 0x40f809  jalr        $v0
label_3a29f4:
    if (ctx->pc == 0x3A29F4u) {
        ctx->pc = 0x3A29F8u;
        goto label_3a29f8;
    }
    ctx->pc = 0x3A29F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A29F8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A29F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A29F8u; }
            if (ctx->pc != 0x3A29F8u) { return; }
        }
        }
    }
    ctx->pc = 0x3A29F8u;
label_3a29f8:
    // 0x3a29f8: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x3a29f8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_3a29fc:
    // 0x3a29fc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3a29fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3a2a00:
    // 0x3a2a00: 0x8c6664a8  lw          $a2, 0x64A8($v1)
    ctx->pc = 0x3a2a00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25768)));
label_3a2a04:
    // 0x3a2a04: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x3a2a04u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a2a08:
    // 0x3a2a08: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x3a2a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_3a2a0c:
    // 0x3a2a0c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x3a2a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_3a2a10:
    // 0x3a2a10: 0x24632b90  addiu       $v1, $v1, 0x2B90
    ctx->pc = 0x3a2a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11152));
label_3a2a14:
    // 0x3a2a14: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x3a2a14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_3a2a18:
    // 0x3a2a18: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x3a2a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3a2a1c:
    // 0x3a2a1c: 0xac540008  sw          $s4, 0x8($v0)
    ctx->pc = 0x3a2a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
label_3a2a20:
    // 0x3a2a20: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x3a2a20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
label_3a2a24:
    // 0x3a2a24: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x3a2a24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
label_3a2a28:
    // 0x3a2a28: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x3a2a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
label_3a2a2c:
    // 0x3a2a2c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3a2a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_3a2a30:
    // 0x3a2a30: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x3a2a30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a2a34:
    // 0x3a2a34: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3a2a34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3a2a38:
    // 0x3a2a38: 0x320f809  jalr        $t9
label_3a2a3c:
    if (ctx->pc == 0x3A2A3Cu) {
        ctx->pc = 0x3A2A3Cu;
            // 0x3a2a3c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A2A40u;
        goto label_3a2a40;
    }
    ctx->pc = 0x3A2A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A2A40u);
        ctx->pc = 0x3A2A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2A38u;
            // 0x3a2a3c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A2A40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A2A40u; }
            if (ctx->pc != 0x3A2A40u) { return; }
        }
        }
    }
    ctx->pc = 0x3A2A40u;
label_3a2a40:
    // 0x3a2a40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a2a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a2a44:
    // 0x3a2a44: 0xa3c2001c  sb          $v0, 0x1C($fp)
    ctx->pc = 0x3a2a44u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 28), (uint8_t)GPR_U32(ctx, 2));
label_3a2a48:
    // 0x3a2a48: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x3a2a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3a2a4c:
    // 0x3a2a4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a2a4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a2a50:
    // 0x3a2a50: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3a2a50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3a2a54:
    // 0x3a2a54: 0x320f809  jalr        $t9
label_3a2a58:
    if (ctx->pc == 0x3A2A58u) {
        ctx->pc = 0x3A2A5Cu;
        goto label_3a2a5c;
    }
    ctx->pc = 0x3A2A54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A2A5Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A2A5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A2A5Cu; }
            if (ctx->pc != 0x3A2A5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3A2A5Cu;
label_3a2a5c:
    // 0x3a2a5c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x3a2a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3a2a60:
    // 0x3a2a60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a2a60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3a2a64:
    // 0x3a2a64: 0x26940014  addiu       $s4, $s4, 0x14
    ctx->pc = 0x3a2a64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_3a2a68:
    // 0x3a2a68: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x3a2a68u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_3a2a6c:
    // 0x3a2a6c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x3a2a6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_3a2a70:
    // 0x3a2a70: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x3a2a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
label_3a2a74:
    // 0x3a2a74: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x3a2a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_3a2a78:
    // 0x3a2a78: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x3a2a78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3a2a7c:
    // 0x3a2a7c: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
label_3a2a80:
    if (ctx->pc == 0x3A2A80u) {
        ctx->pc = 0x3A2A80u;
            // 0x3a2a80: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x3A2A84u;
        goto label_3a2a84;
    }
    ctx->pc = 0x3A2A7Cu;
    {
        const bool branch_taken_0x3a2a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2A7Cu;
            // 0x3a2a80: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2a7c) {
            ctx->pc = 0x3A2904u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a2904;
        }
    }
    ctx->pc = 0x3A2A84u;
label_3a2a84:
    // 0x3a2a84: 0x8fb300e0  lw          $s3, 0xE0($sp)
    ctx->pc = 0x3a2a84u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3a2a88:
    // 0x3a2a88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a2a88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2a8c:
    // 0x3a2a8c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3a2a8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a2a90:
    // 0x3a2a90: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3a2a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3a2a94:
    // 0x3a2a94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a2a94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a2a98:
    // 0x3a2a98: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3a2a98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3a2a9c:
    // 0x3a2a9c: 0x320f809  jalr        $t9
label_3a2aa0:
    if (ctx->pc == 0x3A2AA0u) {
        ctx->pc = 0x3A2AA0u;
            // 0x3a2aa0: 0x24052800  addiu       $a1, $zero, 0x2800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
        ctx->pc = 0x3A2AA4u;
        goto label_3a2aa4;
    }
    ctx->pc = 0x3A2A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A2AA4u);
        ctx->pc = 0x3A2AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2A9Cu;
            // 0x3a2aa0: 0x24052800  addiu       $a1, $zero, 0x2800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A2AA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A2AA4u; }
            if (ctx->pc != 0x3A2AA4u) { return; }
        }
        }
    }
    ctx->pc = 0x3A2AA4u;
label_3a2aa4:
    // 0x3a2aa4: 0x1a200002  blez        $s1, . + 4 + (0x2 << 2)
label_3a2aa8:
    if (ctx->pc == 0x3A2AA8u) {
        ctx->pc = 0x3A2AACu;
        goto label_3a2aac;
    }
    ctx->pc = 0x3A2AA4u;
    {
        const bool branch_taken_0x3a2aa4 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x3a2aa4) {
            ctx->pc = 0x3A2AB0u;
            goto label_3a2ab0;
        }
    }
    ctx->pc = 0x3A2AACu;
label_3a2aac:
    // 0x3a2aac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a2aacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a2ab0:
    // 0x3a2ab0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3a2ab0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3a2ab4:
    // 0x3a2ab4: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x3a2ab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3a2ab8:
    // 0x3a2ab8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3a2abc:
    if (ctx->pc == 0x3A2ABCu) {
        ctx->pc = 0x3A2ABCu;
            // 0x3a2abc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3A2AC0u;
        goto label_3a2ac0;
    }
    ctx->pc = 0x3A2AB8u;
    {
        const bool branch_taken_0x3a2ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2AB8u;
            // 0x3a2abc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2ab8) {
            ctx->pc = 0x3A2A90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a2a90;
        }
    }
    ctx->pc = 0x3A2AC0u;
label_3a2ac0:
    // 0x3a2ac0: 0x8fb300e0  lw          $s3, 0xE0($sp)
    ctx->pc = 0x3a2ac0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3a2ac4:
    // 0x3a2ac4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a2ac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2ac8:
    // 0x3a2ac8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3a2ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3a2acc:
    // 0x3a2acc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3a2ad0:
    if (ctx->pc == 0x3A2AD0u) {
        ctx->pc = 0x3A2AD4u;
        goto label_3a2ad4;
    }
    ctx->pc = 0x3A2ACCu;
    {
        const bool branch_taken_0x3a2acc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2acc) {
            ctx->pc = 0x3A2AE8u;
            goto label_3a2ae8;
        }
    }
    ctx->pc = 0x3A2AD4u;
label_3a2ad4:
    // 0x3a2ad4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a2ad4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a2ad8:
    // 0x3a2ad8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3a2ad8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3a2adc:
    // 0x3a2adc: 0x320f809  jalr        $t9
label_3a2ae0:
    if (ctx->pc == 0x3A2AE0u) {
        ctx->pc = 0x3A2AE0u;
            // 0x3a2ae0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A2AE4u;
        goto label_3a2ae4;
    }
    ctx->pc = 0x3A2ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A2AE4u);
        ctx->pc = 0x3A2AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2ADCu;
            // 0x3a2ae0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A2AE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A2AE4u; }
            if (ctx->pc != 0x3A2AE4u) { return; }
        }
        }
    }
    ctx->pc = 0x3A2AE4u;
label_3a2ae4:
    // 0x3a2ae4: 0x0  nop
    ctx->pc = 0x3a2ae4u;
    // NOP
label_3a2ae8:
    // 0x3a2ae8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3a2ae8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3a2aec:
    // 0x3a2aec: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x3a2aecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3a2af0:
    // 0x3a2af0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3a2af4:
    if (ctx->pc == 0x3A2AF4u) {
        ctx->pc = 0x3A2AF4u;
            // 0x3a2af4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3A2AF8u;
        goto label_3a2af8;
    }
    ctx->pc = 0x3A2AF0u;
    {
        const bool branch_taken_0x3a2af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2AF0u;
            // 0x3a2af4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2af0) {
            ctx->pc = 0x3A2AC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a2ac8;
        }
    }
    ctx->pc = 0x3A2AF8u;
label_3a2af8:
    // 0x3a2af8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3a2af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2afc:
    // 0x3a2afc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3a2afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3a2b00:
    // 0x3a2b00: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3a2b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a2b04:
    // 0x3a2b04: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3a2b08:
    if (ctx->pc == 0x3A2B08u) {
        ctx->pc = 0x3A2B0Cu;
        goto label_3a2b0c;
    }
    ctx->pc = 0x3A2B04u;
    {
        const bool branch_taken_0x3a2b04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2b04) {
            ctx->pc = 0x3A2B20u;
            goto label_3a2b20;
        }
    }
    ctx->pc = 0x3A2B0Cu;
label_3a2b0c:
    // 0x3a2b0c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a2b0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a2b10:
    // 0x3a2b10: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3a2b10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3a2b14:
    // 0x3a2b14: 0x320f809  jalr        $t9
label_3a2b18:
    if (ctx->pc == 0x3A2B18u) {
        ctx->pc = 0x3A2B18u;
            // 0x3a2b18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A2B1Cu;
        goto label_3a2b1c;
    }
    ctx->pc = 0x3A2B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A2B1Cu);
        ctx->pc = 0x3A2B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2B14u;
            // 0x3a2b18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A2B1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A2B1Cu; }
            if (ctx->pc != 0x3A2B1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3A2B1Cu;
label_3a2b1c:
    // 0x3a2b1c: 0x0  nop
    ctx->pc = 0x3a2b1cu;
    // NOP
label_3a2b20:
    // 0x3a2b20: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3a2b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3a2b24:
    // 0x3a2b24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3a2b24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3a2b28:
    // 0x3a2b28: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3a2b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3a2b2c:
    // 0x3a2b2c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3a2b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_3a2b30:
    // 0x3a2b30: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3a2b30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3a2b34:
    // 0x3a2b34: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3a2b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3a2b38:
    // 0x3a2b38: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
label_3a2b3c:
    if (ctx->pc == 0x3A2B3Cu) {
        ctx->pc = 0x3A2B3Cu;
            // 0x3a2b3c: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x3A2B40u;
        goto label_3a2b40;
    }
    ctx->pc = 0x3A2B38u;
    {
        const bool branch_taken_0x3a2b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a2b38) {
            ctx->pc = 0x3A2B3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2B38u;
            // 0x3a2b3c: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A2B00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a2b00;
        }
    }
    ctx->pc = 0x3A2B40u;
label_3a2b40:
    // 0x3a2b40: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x3a2b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3a2b44:
    // 0x3a2b44: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3a2b48:
    if (ctx->pc == 0x3A2B48u) {
        ctx->pc = 0x3A2B48u;
            // 0x3a2b48: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A2B4Cu;
        goto label_3a2b4c;
    }
    ctx->pc = 0x3A2B44u;
    {
        const bool branch_taken_0x3a2b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2b44) {
            ctx->pc = 0x3A2B48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2B44u;
            // 0x3a2b48: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A2B5Cu;
            goto label_3a2b5c;
        }
    }
    ctx->pc = 0x3A2B4Cu;
label_3a2b4c:
    // 0x3a2b4c: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x3a2b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3a2b50:
    // 0x3a2b50: 0xc0fe48c  jal         func_3F9230
label_3a2b54:
    if (ctx->pc == 0x3A2B54u) {
        ctx->pc = 0x3A2B54u;
            // 0x3a2b54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A2B58u;
        goto label_3a2b58;
    }
    ctx->pc = 0x3A2B50u;
    SET_GPR_U32(ctx, 31, 0x3A2B58u);
    ctx->pc = 0x3A2B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2B50u;
            // 0x3a2b54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A2B58u; }
        if (ctx->pc != 0x3A2B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A2B58u; }
        if (ctx->pc != 0x3A2B58u) { return; }
    }
    ctx->pc = 0x3A2B58u;
label_3a2b58:
    // 0x3a2b58: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3a2b58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a2b5c:
    // 0x3a2b5c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3a2b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3a2b60:
    // 0x3a2b60: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3a2b60u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3a2b64:
    // 0x3a2b64: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3a2b64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3a2b68:
    // 0x3a2b68: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3a2b68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3a2b6c:
    // 0x3a2b6c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3a2b6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a2b70:
    // 0x3a2b70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3a2b70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a2b74:
    // 0x3a2b74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3a2b74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a2b78:
    // 0x3a2b78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a2b78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a2b7c:
    // 0x3a2b7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a2b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a2b80:
    // 0x3a2b80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a2b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a2b84:
    // 0x3a2b84: 0x3e00008  jr          $ra
label_3a2b88:
    if (ctx->pc == 0x3A2B88u) {
        ctx->pc = 0x3A2B88u;
            // 0x3a2b88: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x3A2B8Cu;
        goto label_3a2b8c;
    }
    ctx->pc = 0x3A2B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2B84u;
            // 0x3a2b88: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A2B8Cu;
label_3a2b8c:
    // 0x3a2b8c: 0x0  nop
    ctx->pc = 0x3a2b8cu;
    // NOP
label_3a2b90:
    // 0x3a2b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a2b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3a2b94:
    // 0x3a2b94: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a2b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a2b98:
    // 0x3a2b98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a2b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a2b9c:
    // 0x3a2b9c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x3a2b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3a2ba0:
    // 0x3a2ba0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x3a2ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3a2ba4:
    // 0x3a2ba4: 0x10830029  beq         $a0, $v1, . + 4 + (0x29 << 2)
label_3a2ba8:
    if (ctx->pc == 0x3A2BA8u) {
        ctx->pc = 0x3A2BA8u;
            // 0x3a2ba8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3A2BACu;
        goto label_3a2bac;
    }
    ctx->pc = 0x3A2BA4u;
    {
        const bool branch_taken_0x3a2ba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A2BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2BA4u;
            // 0x3a2ba8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2ba4) {
            ctx->pc = 0x3A2C4Cu;
            goto label_3a2c4c;
        }
    }
    ctx->pc = 0x3A2BACu;
label_3a2bac:
    // 0x3a2bac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a2bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a2bb0:
    // 0x3a2bb0: 0x5083001c  beql        $a0, $v1, . + 4 + (0x1C << 2)
label_3a2bb4:
    if (ctx->pc == 0x3A2BB4u) {
        ctx->pc = 0x3A2BB4u;
            // 0x3a2bb4: 0x8cc4000c  lw          $a0, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->pc = 0x3A2BB8u;
        goto label_3a2bb8;
    }
    ctx->pc = 0x3A2BB0u;
    {
        const bool branch_taken_0x3a2bb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a2bb0) {
            ctx->pc = 0x3A2BB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2BB0u;
            // 0x3a2bb4: 0x8cc4000c  lw          $a0, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A2C24u;
            goto label_3a2c24;
        }
    }
    ctx->pc = 0x3A2BB8u;
label_3a2bb8:
    // 0x3a2bb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a2bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a2bbc:
    // 0x3a2bbc: 0x5083000f  beql        $a0, $v1, . + 4 + (0xF << 2)
label_3a2bc0:
    if (ctx->pc == 0x3A2BC0u) {
        ctx->pc = 0x3A2BC0u;
            // 0x3a2bc0: 0x8cc4000c  lw          $a0, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->pc = 0x3A2BC4u;
        goto label_3a2bc4;
    }
    ctx->pc = 0x3A2BBCu;
    {
        const bool branch_taken_0x3a2bbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a2bbc) {
            ctx->pc = 0x3A2BC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2BBCu;
            // 0x3a2bc0: 0x8cc4000c  lw          $a0, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A2BFCu;
            goto label_3a2bfc;
        }
    }
    ctx->pc = 0x3A2BC4u;
label_3a2bc4:
    // 0x3a2bc4: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_3a2bc8:
    if (ctx->pc == 0x3A2BC8u) {
        ctx->pc = 0x3A2BC8u;
            // 0x3a2bc8: 0x8cc4000c  lw          $a0, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->pc = 0x3A2BCCu;
        goto label_3a2bcc;
    }
    ctx->pc = 0x3A2BC4u;
    {
        const bool branch_taken_0x3a2bc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2bc4) {
            ctx->pc = 0x3A2BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2BC4u;
            // 0x3a2bc8: 0x8cc4000c  lw          $a0, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A2BD4u;
            goto label_3a2bd4;
        }
    }
    ctx->pc = 0x3A2BCCu;
label_3a2bcc:
    // 0x3a2bcc: 0x10000029  b           . + 4 + (0x29 << 2)
label_3a2bd0:
    if (ctx->pc == 0x3A2BD0u) {
        ctx->pc = 0x3A2BD0u;
            // 0x3a2bd0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3A2BD4u;
        goto label_3a2bd4;
    }
    ctx->pc = 0x3A2BCCu;
    {
        const bool branch_taken_0x3a2bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2BCCu;
            // 0x3a2bd0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2bcc) {
            ctx->pc = 0x3A2C74u;
            goto label_3a2c74;
        }
    }
    ctx->pc = 0x3A2BD4u;
label_3a2bd4:
    // 0x3a2bd4: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x3a2bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_3a2bd8:
    // 0x3a2bd8: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x3a2bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3a2bdc:
    // 0x3a2bdc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a2bdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a2be0:
    // 0x3a2be0: 0x90470038  lbu         $a3, 0x38($v0)
    ctx->pc = 0x3a2be0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 56)));
label_3a2be4:
    // 0x3a2be4: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x3a2be4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3a2be8:
    // 0x3a2be8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3a2be8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3a2bec:
    // 0x3a2bec: 0x320f809  jalr        $t9
label_3a2bf0:
    if (ctx->pc == 0x3A2BF0u) {
        ctx->pc = 0x3A2BF0u;
            // 0x3a2bf0: 0x24480024  addiu       $t0, $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
        ctx->pc = 0x3A2BF4u;
        goto label_3a2bf4;
    }
    ctx->pc = 0x3A2BECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A2BF4u);
        ctx->pc = 0x3A2BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2BECu;
            // 0x3a2bf0: 0x24480024  addiu       $t0, $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A2BF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A2BF4u; }
            if (ctx->pc != 0x3A2BF4u) { return; }
        }
        }
    }
    ctx->pc = 0x3A2BF4u;
label_3a2bf4:
    // 0x3a2bf4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_3a2bf8:
    if (ctx->pc == 0x3A2BF8u) {
        ctx->pc = 0x3A2BFCu;
        goto label_3a2bfc;
    }
    ctx->pc = 0x3A2BF4u;
    {
        const bool branch_taken_0x3a2bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2bf4) {
            ctx->pc = 0x3A2C70u;
            goto label_3a2c70;
        }
    }
    ctx->pc = 0x3A2BFCu;
label_3a2bfc:
    // 0x3a2bfc: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x3a2bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_3a2c00:
    // 0x3a2c00: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x3a2c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3a2c04:
    // 0x3a2c04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a2c04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a2c08:
    // 0x3a2c08: 0x90470038  lbu         $a3, 0x38($v0)
    ctx->pc = 0x3a2c08u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 56)));
label_3a2c0c:
    // 0x3a2c0c: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x3a2c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3a2c10:
    // 0x3a2c10: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3a2c10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3a2c14:
    // 0x3a2c14: 0x320f809  jalr        $t9
label_3a2c18:
    if (ctx->pc == 0x3A2C18u) {
        ctx->pc = 0x3A2C18u;
            // 0x3a2c18: 0x24480024  addiu       $t0, $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
        ctx->pc = 0x3A2C1Cu;
        goto label_3a2c1c;
    }
    ctx->pc = 0x3A2C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A2C1Cu);
        ctx->pc = 0x3A2C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2C14u;
            // 0x3a2c18: 0x24480024  addiu       $t0, $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A2C1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A2C1Cu; }
            if (ctx->pc != 0x3A2C1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3A2C1Cu;
label_3a2c1c:
    // 0x3a2c1c: 0x10000014  b           . + 4 + (0x14 << 2)
label_3a2c20:
    if (ctx->pc == 0x3A2C20u) {
        ctx->pc = 0x3A2C24u;
        goto label_3a2c24;
    }
    ctx->pc = 0x3A2C1Cu;
    {
        const bool branch_taken_0x3a2c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2c1c) {
            ctx->pc = 0x3A2C70u;
            goto label_3a2c70;
        }
    }
    ctx->pc = 0x3A2C24u;
label_3a2c24:
    // 0x3a2c24: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x3a2c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_3a2c28:
    // 0x3a2c28: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x3a2c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3a2c2c:
    // 0x3a2c2c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a2c2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a2c30:
    // 0x3a2c30: 0x90470038  lbu         $a3, 0x38($v0)
    ctx->pc = 0x3a2c30u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 56)));
label_3a2c34:
    // 0x3a2c34: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x3a2c34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3a2c38:
    // 0x3a2c38: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3a2c38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3a2c3c:
    // 0x3a2c3c: 0x320f809  jalr        $t9
label_3a2c40:
    if (ctx->pc == 0x3A2C40u) {
        ctx->pc = 0x3A2C40u;
            // 0x3a2c40: 0x24480024  addiu       $t0, $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
        ctx->pc = 0x3A2C44u;
        goto label_3a2c44;
    }
    ctx->pc = 0x3A2C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A2C44u);
        ctx->pc = 0x3A2C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2C3Cu;
            // 0x3a2c40: 0x24480024  addiu       $t0, $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A2C44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A2C44u; }
            if (ctx->pc != 0x3A2C44u) { return; }
        }
        }
    }
    ctx->pc = 0x3A2C44u;
label_3a2c44:
    // 0x3a2c44: 0x1000000a  b           . + 4 + (0xA << 2)
label_3a2c48:
    if (ctx->pc == 0x3A2C48u) {
        ctx->pc = 0x3A2C4Cu;
        goto label_3a2c4c;
    }
    ctx->pc = 0x3A2C44u;
    {
        const bool branch_taken_0x3a2c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2c44) {
            ctx->pc = 0x3A2C70u;
            goto label_3a2c70;
        }
    }
    ctx->pc = 0x3A2C4Cu;
label_3a2c4c:
    // 0x3a2c4c: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x3a2c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_3a2c50:
    // 0x3a2c50: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x3a2c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_3a2c54:
    // 0x3a2c54: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x3a2c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3a2c58:
    // 0x3a2c58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a2c58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a2c5c:
    // 0x3a2c5c: 0x90470038  lbu         $a3, 0x38($v0)
    ctx->pc = 0x3a2c5cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 56)));
label_3a2c60:
    // 0x3a2c60: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x3a2c60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3a2c64:
    // 0x3a2c64: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3a2c64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3a2c68:
    // 0x3a2c68: 0x320f809  jalr        $t9
label_3a2c6c:
    if (ctx->pc == 0x3A2C6Cu) {
        ctx->pc = 0x3A2C6Cu;
            // 0x3a2c6c: 0x24480024  addiu       $t0, $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
        ctx->pc = 0x3A2C70u;
        goto label_3a2c70;
    }
    ctx->pc = 0x3A2C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A2C70u);
        ctx->pc = 0x3A2C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2C68u;
            // 0x3a2c6c: 0x24480024  addiu       $t0, $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A2C70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A2C70u; }
            if (ctx->pc != 0x3A2C70u) { return; }
        }
        }
    }
    ctx->pc = 0x3A2C70u;
label_3a2c70:
    // 0x3a2c70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a2c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a2c74:
    // 0x3a2c74: 0x3e00008  jr          $ra
label_3a2c78:
    if (ctx->pc == 0x3A2C78u) {
        ctx->pc = 0x3A2C78u;
            // 0x3a2c78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3A2C7Cu;
        goto label_3a2c7c;
    }
    ctx->pc = 0x3A2C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2C74u;
            // 0x3a2c78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A2C7Cu;
label_3a2c7c:
    // 0x3a2c7c: 0x0  nop
    ctx->pc = 0x3a2c7cu;
    // NOP
}
