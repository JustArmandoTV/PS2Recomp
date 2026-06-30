#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B0690
// Address: 0x3b0690 - 0x3b0c50
void sub_003B0690_0x3b0690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0690_0x3b0690");
#endif

    switch (ctx->pc) {
        case 0x3b0690u: goto label_3b0690;
        case 0x3b0694u: goto label_3b0694;
        case 0x3b0698u: goto label_3b0698;
        case 0x3b069cu: goto label_3b069c;
        case 0x3b06a0u: goto label_3b06a0;
        case 0x3b06a4u: goto label_3b06a4;
        case 0x3b06a8u: goto label_3b06a8;
        case 0x3b06acu: goto label_3b06ac;
        case 0x3b06b0u: goto label_3b06b0;
        case 0x3b06b4u: goto label_3b06b4;
        case 0x3b06b8u: goto label_3b06b8;
        case 0x3b06bcu: goto label_3b06bc;
        case 0x3b06c0u: goto label_3b06c0;
        case 0x3b06c4u: goto label_3b06c4;
        case 0x3b06c8u: goto label_3b06c8;
        case 0x3b06ccu: goto label_3b06cc;
        case 0x3b06d0u: goto label_3b06d0;
        case 0x3b06d4u: goto label_3b06d4;
        case 0x3b06d8u: goto label_3b06d8;
        case 0x3b06dcu: goto label_3b06dc;
        case 0x3b06e0u: goto label_3b06e0;
        case 0x3b06e4u: goto label_3b06e4;
        case 0x3b06e8u: goto label_3b06e8;
        case 0x3b06ecu: goto label_3b06ec;
        case 0x3b06f0u: goto label_3b06f0;
        case 0x3b06f4u: goto label_3b06f4;
        case 0x3b06f8u: goto label_3b06f8;
        case 0x3b06fcu: goto label_3b06fc;
        case 0x3b0700u: goto label_3b0700;
        case 0x3b0704u: goto label_3b0704;
        case 0x3b0708u: goto label_3b0708;
        case 0x3b070cu: goto label_3b070c;
        case 0x3b0710u: goto label_3b0710;
        case 0x3b0714u: goto label_3b0714;
        case 0x3b0718u: goto label_3b0718;
        case 0x3b071cu: goto label_3b071c;
        case 0x3b0720u: goto label_3b0720;
        case 0x3b0724u: goto label_3b0724;
        case 0x3b0728u: goto label_3b0728;
        case 0x3b072cu: goto label_3b072c;
        case 0x3b0730u: goto label_3b0730;
        case 0x3b0734u: goto label_3b0734;
        case 0x3b0738u: goto label_3b0738;
        case 0x3b073cu: goto label_3b073c;
        case 0x3b0740u: goto label_3b0740;
        case 0x3b0744u: goto label_3b0744;
        case 0x3b0748u: goto label_3b0748;
        case 0x3b074cu: goto label_3b074c;
        case 0x3b0750u: goto label_3b0750;
        case 0x3b0754u: goto label_3b0754;
        case 0x3b0758u: goto label_3b0758;
        case 0x3b075cu: goto label_3b075c;
        case 0x3b0760u: goto label_3b0760;
        case 0x3b0764u: goto label_3b0764;
        case 0x3b0768u: goto label_3b0768;
        case 0x3b076cu: goto label_3b076c;
        case 0x3b0770u: goto label_3b0770;
        case 0x3b0774u: goto label_3b0774;
        case 0x3b0778u: goto label_3b0778;
        case 0x3b077cu: goto label_3b077c;
        case 0x3b0780u: goto label_3b0780;
        case 0x3b0784u: goto label_3b0784;
        case 0x3b0788u: goto label_3b0788;
        case 0x3b078cu: goto label_3b078c;
        case 0x3b0790u: goto label_3b0790;
        case 0x3b0794u: goto label_3b0794;
        case 0x3b0798u: goto label_3b0798;
        case 0x3b079cu: goto label_3b079c;
        case 0x3b07a0u: goto label_3b07a0;
        case 0x3b07a4u: goto label_3b07a4;
        case 0x3b07a8u: goto label_3b07a8;
        case 0x3b07acu: goto label_3b07ac;
        case 0x3b07b0u: goto label_3b07b0;
        case 0x3b07b4u: goto label_3b07b4;
        case 0x3b07b8u: goto label_3b07b8;
        case 0x3b07bcu: goto label_3b07bc;
        case 0x3b07c0u: goto label_3b07c0;
        case 0x3b07c4u: goto label_3b07c4;
        case 0x3b07c8u: goto label_3b07c8;
        case 0x3b07ccu: goto label_3b07cc;
        case 0x3b07d0u: goto label_3b07d0;
        case 0x3b07d4u: goto label_3b07d4;
        case 0x3b07d8u: goto label_3b07d8;
        case 0x3b07dcu: goto label_3b07dc;
        case 0x3b07e0u: goto label_3b07e0;
        case 0x3b07e4u: goto label_3b07e4;
        case 0x3b07e8u: goto label_3b07e8;
        case 0x3b07ecu: goto label_3b07ec;
        case 0x3b07f0u: goto label_3b07f0;
        case 0x3b07f4u: goto label_3b07f4;
        case 0x3b07f8u: goto label_3b07f8;
        case 0x3b07fcu: goto label_3b07fc;
        case 0x3b0800u: goto label_3b0800;
        case 0x3b0804u: goto label_3b0804;
        case 0x3b0808u: goto label_3b0808;
        case 0x3b080cu: goto label_3b080c;
        case 0x3b0810u: goto label_3b0810;
        case 0x3b0814u: goto label_3b0814;
        case 0x3b0818u: goto label_3b0818;
        case 0x3b081cu: goto label_3b081c;
        case 0x3b0820u: goto label_3b0820;
        case 0x3b0824u: goto label_3b0824;
        case 0x3b0828u: goto label_3b0828;
        case 0x3b082cu: goto label_3b082c;
        case 0x3b0830u: goto label_3b0830;
        case 0x3b0834u: goto label_3b0834;
        case 0x3b0838u: goto label_3b0838;
        case 0x3b083cu: goto label_3b083c;
        case 0x3b0840u: goto label_3b0840;
        case 0x3b0844u: goto label_3b0844;
        case 0x3b0848u: goto label_3b0848;
        case 0x3b084cu: goto label_3b084c;
        case 0x3b0850u: goto label_3b0850;
        case 0x3b0854u: goto label_3b0854;
        case 0x3b0858u: goto label_3b0858;
        case 0x3b085cu: goto label_3b085c;
        case 0x3b0860u: goto label_3b0860;
        case 0x3b0864u: goto label_3b0864;
        case 0x3b0868u: goto label_3b0868;
        case 0x3b086cu: goto label_3b086c;
        case 0x3b0870u: goto label_3b0870;
        case 0x3b0874u: goto label_3b0874;
        case 0x3b0878u: goto label_3b0878;
        case 0x3b087cu: goto label_3b087c;
        case 0x3b0880u: goto label_3b0880;
        case 0x3b0884u: goto label_3b0884;
        case 0x3b0888u: goto label_3b0888;
        case 0x3b088cu: goto label_3b088c;
        case 0x3b0890u: goto label_3b0890;
        case 0x3b0894u: goto label_3b0894;
        case 0x3b0898u: goto label_3b0898;
        case 0x3b089cu: goto label_3b089c;
        case 0x3b08a0u: goto label_3b08a0;
        case 0x3b08a4u: goto label_3b08a4;
        case 0x3b08a8u: goto label_3b08a8;
        case 0x3b08acu: goto label_3b08ac;
        case 0x3b08b0u: goto label_3b08b0;
        case 0x3b08b4u: goto label_3b08b4;
        case 0x3b08b8u: goto label_3b08b8;
        case 0x3b08bcu: goto label_3b08bc;
        case 0x3b08c0u: goto label_3b08c0;
        case 0x3b08c4u: goto label_3b08c4;
        case 0x3b08c8u: goto label_3b08c8;
        case 0x3b08ccu: goto label_3b08cc;
        case 0x3b08d0u: goto label_3b08d0;
        case 0x3b08d4u: goto label_3b08d4;
        case 0x3b08d8u: goto label_3b08d8;
        case 0x3b08dcu: goto label_3b08dc;
        case 0x3b08e0u: goto label_3b08e0;
        case 0x3b08e4u: goto label_3b08e4;
        case 0x3b08e8u: goto label_3b08e8;
        case 0x3b08ecu: goto label_3b08ec;
        case 0x3b08f0u: goto label_3b08f0;
        case 0x3b08f4u: goto label_3b08f4;
        case 0x3b08f8u: goto label_3b08f8;
        case 0x3b08fcu: goto label_3b08fc;
        case 0x3b0900u: goto label_3b0900;
        case 0x3b0904u: goto label_3b0904;
        case 0x3b0908u: goto label_3b0908;
        case 0x3b090cu: goto label_3b090c;
        case 0x3b0910u: goto label_3b0910;
        case 0x3b0914u: goto label_3b0914;
        case 0x3b0918u: goto label_3b0918;
        case 0x3b091cu: goto label_3b091c;
        case 0x3b0920u: goto label_3b0920;
        case 0x3b0924u: goto label_3b0924;
        case 0x3b0928u: goto label_3b0928;
        case 0x3b092cu: goto label_3b092c;
        case 0x3b0930u: goto label_3b0930;
        case 0x3b0934u: goto label_3b0934;
        case 0x3b0938u: goto label_3b0938;
        case 0x3b093cu: goto label_3b093c;
        case 0x3b0940u: goto label_3b0940;
        case 0x3b0944u: goto label_3b0944;
        case 0x3b0948u: goto label_3b0948;
        case 0x3b094cu: goto label_3b094c;
        case 0x3b0950u: goto label_3b0950;
        case 0x3b0954u: goto label_3b0954;
        case 0x3b0958u: goto label_3b0958;
        case 0x3b095cu: goto label_3b095c;
        case 0x3b0960u: goto label_3b0960;
        case 0x3b0964u: goto label_3b0964;
        case 0x3b0968u: goto label_3b0968;
        case 0x3b096cu: goto label_3b096c;
        case 0x3b0970u: goto label_3b0970;
        case 0x3b0974u: goto label_3b0974;
        case 0x3b0978u: goto label_3b0978;
        case 0x3b097cu: goto label_3b097c;
        case 0x3b0980u: goto label_3b0980;
        case 0x3b0984u: goto label_3b0984;
        case 0x3b0988u: goto label_3b0988;
        case 0x3b098cu: goto label_3b098c;
        case 0x3b0990u: goto label_3b0990;
        case 0x3b0994u: goto label_3b0994;
        case 0x3b0998u: goto label_3b0998;
        case 0x3b099cu: goto label_3b099c;
        case 0x3b09a0u: goto label_3b09a0;
        case 0x3b09a4u: goto label_3b09a4;
        case 0x3b09a8u: goto label_3b09a8;
        case 0x3b09acu: goto label_3b09ac;
        case 0x3b09b0u: goto label_3b09b0;
        case 0x3b09b4u: goto label_3b09b4;
        case 0x3b09b8u: goto label_3b09b8;
        case 0x3b09bcu: goto label_3b09bc;
        case 0x3b09c0u: goto label_3b09c0;
        case 0x3b09c4u: goto label_3b09c4;
        case 0x3b09c8u: goto label_3b09c8;
        case 0x3b09ccu: goto label_3b09cc;
        case 0x3b09d0u: goto label_3b09d0;
        case 0x3b09d4u: goto label_3b09d4;
        case 0x3b09d8u: goto label_3b09d8;
        case 0x3b09dcu: goto label_3b09dc;
        case 0x3b09e0u: goto label_3b09e0;
        case 0x3b09e4u: goto label_3b09e4;
        case 0x3b09e8u: goto label_3b09e8;
        case 0x3b09ecu: goto label_3b09ec;
        case 0x3b09f0u: goto label_3b09f0;
        case 0x3b09f4u: goto label_3b09f4;
        case 0x3b09f8u: goto label_3b09f8;
        case 0x3b09fcu: goto label_3b09fc;
        case 0x3b0a00u: goto label_3b0a00;
        case 0x3b0a04u: goto label_3b0a04;
        case 0x3b0a08u: goto label_3b0a08;
        case 0x3b0a0cu: goto label_3b0a0c;
        case 0x3b0a10u: goto label_3b0a10;
        case 0x3b0a14u: goto label_3b0a14;
        case 0x3b0a18u: goto label_3b0a18;
        case 0x3b0a1cu: goto label_3b0a1c;
        case 0x3b0a20u: goto label_3b0a20;
        case 0x3b0a24u: goto label_3b0a24;
        case 0x3b0a28u: goto label_3b0a28;
        case 0x3b0a2cu: goto label_3b0a2c;
        case 0x3b0a30u: goto label_3b0a30;
        case 0x3b0a34u: goto label_3b0a34;
        case 0x3b0a38u: goto label_3b0a38;
        case 0x3b0a3cu: goto label_3b0a3c;
        case 0x3b0a40u: goto label_3b0a40;
        case 0x3b0a44u: goto label_3b0a44;
        case 0x3b0a48u: goto label_3b0a48;
        case 0x3b0a4cu: goto label_3b0a4c;
        case 0x3b0a50u: goto label_3b0a50;
        case 0x3b0a54u: goto label_3b0a54;
        case 0x3b0a58u: goto label_3b0a58;
        case 0x3b0a5cu: goto label_3b0a5c;
        case 0x3b0a60u: goto label_3b0a60;
        case 0x3b0a64u: goto label_3b0a64;
        case 0x3b0a68u: goto label_3b0a68;
        case 0x3b0a6cu: goto label_3b0a6c;
        case 0x3b0a70u: goto label_3b0a70;
        case 0x3b0a74u: goto label_3b0a74;
        case 0x3b0a78u: goto label_3b0a78;
        case 0x3b0a7cu: goto label_3b0a7c;
        case 0x3b0a80u: goto label_3b0a80;
        case 0x3b0a84u: goto label_3b0a84;
        case 0x3b0a88u: goto label_3b0a88;
        case 0x3b0a8cu: goto label_3b0a8c;
        case 0x3b0a90u: goto label_3b0a90;
        case 0x3b0a94u: goto label_3b0a94;
        case 0x3b0a98u: goto label_3b0a98;
        case 0x3b0a9cu: goto label_3b0a9c;
        case 0x3b0aa0u: goto label_3b0aa0;
        case 0x3b0aa4u: goto label_3b0aa4;
        case 0x3b0aa8u: goto label_3b0aa8;
        case 0x3b0aacu: goto label_3b0aac;
        case 0x3b0ab0u: goto label_3b0ab0;
        case 0x3b0ab4u: goto label_3b0ab4;
        case 0x3b0ab8u: goto label_3b0ab8;
        case 0x3b0abcu: goto label_3b0abc;
        case 0x3b0ac0u: goto label_3b0ac0;
        case 0x3b0ac4u: goto label_3b0ac4;
        case 0x3b0ac8u: goto label_3b0ac8;
        case 0x3b0accu: goto label_3b0acc;
        case 0x3b0ad0u: goto label_3b0ad0;
        case 0x3b0ad4u: goto label_3b0ad4;
        case 0x3b0ad8u: goto label_3b0ad8;
        case 0x3b0adcu: goto label_3b0adc;
        case 0x3b0ae0u: goto label_3b0ae0;
        case 0x3b0ae4u: goto label_3b0ae4;
        case 0x3b0ae8u: goto label_3b0ae8;
        case 0x3b0aecu: goto label_3b0aec;
        case 0x3b0af0u: goto label_3b0af0;
        case 0x3b0af4u: goto label_3b0af4;
        case 0x3b0af8u: goto label_3b0af8;
        case 0x3b0afcu: goto label_3b0afc;
        case 0x3b0b00u: goto label_3b0b00;
        case 0x3b0b04u: goto label_3b0b04;
        case 0x3b0b08u: goto label_3b0b08;
        case 0x3b0b0cu: goto label_3b0b0c;
        case 0x3b0b10u: goto label_3b0b10;
        case 0x3b0b14u: goto label_3b0b14;
        case 0x3b0b18u: goto label_3b0b18;
        case 0x3b0b1cu: goto label_3b0b1c;
        case 0x3b0b20u: goto label_3b0b20;
        case 0x3b0b24u: goto label_3b0b24;
        case 0x3b0b28u: goto label_3b0b28;
        case 0x3b0b2cu: goto label_3b0b2c;
        case 0x3b0b30u: goto label_3b0b30;
        case 0x3b0b34u: goto label_3b0b34;
        case 0x3b0b38u: goto label_3b0b38;
        case 0x3b0b3cu: goto label_3b0b3c;
        case 0x3b0b40u: goto label_3b0b40;
        case 0x3b0b44u: goto label_3b0b44;
        case 0x3b0b48u: goto label_3b0b48;
        case 0x3b0b4cu: goto label_3b0b4c;
        case 0x3b0b50u: goto label_3b0b50;
        case 0x3b0b54u: goto label_3b0b54;
        case 0x3b0b58u: goto label_3b0b58;
        case 0x3b0b5cu: goto label_3b0b5c;
        case 0x3b0b60u: goto label_3b0b60;
        case 0x3b0b64u: goto label_3b0b64;
        case 0x3b0b68u: goto label_3b0b68;
        case 0x3b0b6cu: goto label_3b0b6c;
        case 0x3b0b70u: goto label_3b0b70;
        case 0x3b0b74u: goto label_3b0b74;
        case 0x3b0b78u: goto label_3b0b78;
        case 0x3b0b7cu: goto label_3b0b7c;
        case 0x3b0b80u: goto label_3b0b80;
        case 0x3b0b84u: goto label_3b0b84;
        case 0x3b0b88u: goto label_3b0b88;
        case 0x3b0b8cu: goto label_3b0b8c;
        case 0x3b0b90u: goto label_3b0b90;
        case 0x3b0b94u: goto label_3b0b94;
        case 0x3b0b98u: goto label_3b0b98;
        case 0x3b0b9cu: goto label_3b0b9c;
        case 0x3b0ba0u: goto label_3b0ba0;
        case 0x3b0ba4u: goto label_3b0ba4;
        case 0x3b0ba8u: goto label_3b0ba8;
        case 0x3b0bacu: goto label_3b0bac;
        case 0x3b0bb0u: goto label_3b0bb0;
        case 0x3b0bb4u: goto label_3b0bb4;
        case 0x3b0bb8u: goto label_3b0bb8;
        case 0x3b0bbcu: goto label_3b0bbc;
        case 0x3b0bc0u: goto label_3b0bc0;
        case 0x3b0bc4u: goto label_3b0bc4;
        case 0x3b0bc8u: goto label_3b0bc8;
        case 0x3b0bccu: goto label_3b0bcc;
        case 0x3b0bd0u: goto label_3b0bd0;
        case 0x3b0bd4u: goto label_3b0bd4;
        case 0x3b0bd8u: goto label_3b0bd8;
        case 0x3b0bdcu: goto label_3b0bdc;
        case 0x3b0be0u: goto label_3b0be0;
        case 0x3b0be4u: goto label_3b0be4;
        case 0x3b0be8u: goto label_3b0be8;
        case 0x3b0becu: goto label_3b0bec;
        case 0x3b0bf0u: goto label_3b0bf0;
        case 0x3b0bf4u: goto label_3b0bf4;
        case 0x3b0bf8u: goto label_3b0bf8;
        case 0x3b0bfcu: goto label_3b0bfc;
        case 0x3b0c00u: goto label_3b0c00;
        case 0x3b0c04u: goto label_3b0c04;
        case 0x3b0c08u: goto label_3b0c08;
        case 0x3b0c0cu: goto label_3b0c0c;
        case 0x3b0c10u: goto label_3b0c10;
        case 0x3b0c14u: goto label_3b0c14;
        case 0x3b0c18u: goto label_3b0c18;
        case 0x3b0c1cu: goto label_3b0c1c;
        case 0x3b0c20u: goto label_3b0c20;
        case 0x3b0c24u: goto label_3b0c24;
        case 0x3b0c28u: goto label_3b0c28;
        case 0x3b0c2cu: goto label_3b0c2c;
        case 0x3b0c30u: goto label_3b0c30;
        case 0x3b0c34u: goto label_3b0c34;
        case 0x3b0c38u: goto label_3b0c38;
        case 0x3b0c3cu: goto label_3b0c3c;
        case 0x3b0c40u: goto label_3b0c40;
        case 0x3b0c44u: goto label_3b0c44;
        case 0x3b0c48u: goto label_3b0c48;
        case 0x3b0c4cu: goto label_3b0c4c;
        default: break;
    }

    ctx->pc = 0x3b0690u;

label_3b0690:
    // 0x3b0690: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3b0690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3b0694:
    // 0x3b0694: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3b0694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3b0698:
    // 0x3b0698: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3b0698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3b069c:
    // 0x3b069c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3b069cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_3b06a0:
    // 0x3b06a0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3b06a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3b06a4:
    // 0x3b06a4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3b06a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3b06a8:
    // 0x3b06a8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3b06a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3b06ac:
    // 0x3b06ac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3b06acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3b06b0:
    // 0x3b06b0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3b06b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b06b4:
    // 0x3b06b4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3b06b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3b06b8:
    // 0x3b06b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3b06b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3b06bc:
    // 0x3b06bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b06bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3b06c0:
    // 0x3b06c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b06c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3b06c4:
    // 0x3b06c4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3b06c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3b06c8:
    // 0x3b06c8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3b06c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3b06cc:
    // 0x3b06cc: 0x8c768a08  lw          $s6, -0x75F8($v1)
    ctx->pc = 0x3b06ccu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3b06d0:
    // 0x3b06d0: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x3b06d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3b06d4:
    // 0x3b06d4: 0x26a30010  addiu       $v1, $s5, 0x10
    ctx->pc = 0x3b06d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_3b06d8:
    // 0x3b06d8: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x3b06d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_3b06dc:
    // 0x3b06dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3b06dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b06e0:
    // 0x3b06e0: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
label_3b06e4:
    if (ctx->pc == 0x3B06E4u) {
        ctx->pc = 0x3B06E4u;
            // 0x3b06e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B06E8u;
        goto label_3b06e8;
    }
    ctx->pc = 0x3B06E0u;
    {
        const bool branch_taken_0x3b06e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B06E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B06E0u;
            // 0x3b06e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b06e0) {
            ctx->pc = 0x3B0748u;
            goto label_3b0748;
        }
    }
    ctx->pc = 0x3B06E8u;
label_3b06e8:
    // 0x3b06e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b06e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b06ec:
    // 0x3b06ec: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
label_3b06f0:
    if (ctx->pc == 0x3B06F0u) {
        ctx->pc = 0x3B06F0u;
            // 0x3b06f0: 0x8fa300c0  lw          $v1, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x3B06F4u;
        goto label_3b06f4;
    }
    ctx->pc = 0x3B06ECu;
    {
        const bool branch_taken_0x3b06ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b06ec) {
            ctx->pc = 0x3B06F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B06ECu;
            // 0x3b06f0: 0x8fa300c0  lw          $v1, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B0710u;
            goto label_3b0710;
        }
    }
    ctx->pc = 0x3B06F4u;
label_3b06f4:
    // 0x3b06f4: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_3b06f8:
    if (ctx->pc == 0x3B06F8u) {
        ctx->pc = 0x3B06F8u;
            // 0x3b06f8: 0x8fa300c0  lw          $v1, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x3B06FCu;
        goto label_3b06fc;
    }
    ctx->pc = 0x3B06F4u;
    {
        const bool branch_taken_0x3b06f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b06f4) {
            ctx->pc = 0x3B06F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B06F4u;
            // 0x3b06f8: 0x8fa300c0  lw          $v1, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B0704u;
            goto label_3b0704;
        }
    }
    ctx->pc = 0x3B06FCu;
label_3b06fc:
    // 0x3b06fc: 0x1000002a  b           . + 4 + (0x2A << 2)
label_3b0700:
    if (ctx->pc == 0x3B0700u) {
        ctx->pc = 0x3B0704u;
        goto label_3b0704;
    }
    ctx->pc = 0x3B06FCu;
    {
        const bool branch_taken_0x3b06fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b06fc) {
            ctx->pc = 0x3B07A8u;
            goto label_3b07a8;
        }
    }
    ctx->pc = 0x3B0704u;
label_3b0704:
    // 0x3b0704: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3b0704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3b0708:
    // 0x3b0708: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3b0708u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_3b070c:
    // 0x3b070c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x3b070cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3b0710:
    // 0x3b0710: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b0710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b0714:
    // 0x3b0714: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3b0714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b0718:
    // 0x3b0718: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3b0718u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b071c:
    // 0x3b071c: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_3b0720:
    if (ctx->pc == 0x3B0720u) {
        ctx->pc = 0x3B0720u;
            // 0x3b0720: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B0724u;
        goto label_3b0724;
    }
    ctx->pc = 0x3B071Cu;
    {
        const bool branch_taken_0x3b071c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b071c) {
            ctx->pc = 0x3B0720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B071Cu;
            // 0x3b0720: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B0738u;
            goto label_3b0738;
        }
    }
    ctx->pc = 0x3B0724u;
label_3b0724:
    // 0x3b0724: 0xc6c00018  lwc1        $f0, 0x18($s6)
    ctx->pc = 0x3b0724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b0728:
    // 0x3b0728: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3b0728u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3b072c:
    // 0x3b072c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3b072cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3b0730:
    // 0x3b0730: 0x1000001d  b           . + 4 + (0x1D << 2)
label_3b0734:
    if (ctx->pc == 0x3B0734u) {
        ctx->pc = 0x3B0734u;
            // 0x3b0734: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->pc = 0x3B0738u;
        goto label_3b0738;
    }
    ctx->pc = 0x3B0730u;
    {
        const bool branch_taken_0x3b0730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0730u;
            // 0x3b0734: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0730) {
            ctx->pc = 0x3B07A8u;
            goto label_3b07a8;
        }
    }
    ctx->pc = 0x3B0738u;
label_3b0738:
    // 0x3b0738: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3b0738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b073c:
    // 0x3b073c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x3b073cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3b0740:
    // 0x3b0740: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3b0740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3b0744:
    // 0x3b0744: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3b0744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3b0748:
    // 0x3b0748: 0x3c024436  lui         $v0, 0x4436
    ctx->pc = 0x3b0748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17462 << 16));
label_3b074c:
    // 0x3b074c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3b074cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_3b0750:
    // 0x3b0750: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3b0750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3b0754:
    // 0x3b0754: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3b0754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3b0758:
    // 0x3b0758: 0xc6c30018  lwc1        $f3, 0x18($s6)
    ctx->pc = 0x3b0758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b075c:
    // 0x3b075c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b075cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b0760:
    // 0x3b0760: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x3b0760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b0764:
    // 0x3b0764: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3b0764u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3b0768:
    // 0x3b0768: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3b0768u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3b076c:
    // 0x3b076c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x3b076cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_3b0770:
    // 0x3b0770: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b0770u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b0774:
    // 0x3b0774: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3b0774u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3b0778:
    // 0x3b0778: 0x0  nop
    ctx->pc = 0x3b0778u;
    // NOP
label_3b077c:
    // 0x3b077c: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x3b077cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_3b0780:
    // 0x3b0780: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_3b0784:
    if (ctx->pc == 0x3B0784u) {
        ctx->pc = 0x3B0784u;
            // 0x3b0784: 0xac430024  sw          $v1, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
        ctx->pc = 0x3B0788u;
        goto label_3b0788;
    }
    ctx->pc = 0x3B0780u;
    {
        const bool branch_taken_0x3b0780 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0780u;
            // 0x3b0784: 0xac430024  sw          $v1, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0780) {
            ctx->pc = 0x3B0798u;
            goto label_3b0798;
        }
    }
    ctx->pc = 0x3B0788u;
label_3b0788:
    // 0x3b0788: 0x24628000  addiu       $v0, $v1, -0x8000
    ctx->pc = 0x3b0788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
label_3b078c:
    // 0x3b078c: 0x24438001  addiu       $v1, $v0, -0x7FFF
    ctx->pc = 0x3b078cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934529));
label_3b0790:
    // 0x3b0790: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3b0790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3b0794:
    // 0x3b0794: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x3b0794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
label_3b0798:
    // 0x3b0798: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3b0798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3b079c:
    // 0x3b079c: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x3b079cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_3b07a0:
    // 0x3b07a0: 0xc04f2b8  jal         func_13CAE0
label_3b07a4:
    if (ctx->pc == 0x3B07A4u) {
        ctx->pc = 0x3B07A4u;
            // 0x3b07a4: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->pc = 0x3B07A8u;
        goto label_3b07a8;
    }
    ctx->pc = 0x3B07A0u;
    SET_GPR_U32(ctx, 31, 0x3B07A8u);
    ctx->pc = 0x3B07A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B07A0u;
            // 0x3b07a4: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAE0u;
    if (runtime->hasFunction(0x13CAE0u)) {
        auto targetFn = runtime->lookupFunction(0x13CAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B07A8u; }
        if (ctx->pc != 0x3B07A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CAE0_0x13cae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B07A8u; }
        if (ctx->pc != 0x3B07A8u) { return; }
    }
    ctx->pc = 0x3B07A8u;
label_3b07a8:
    // 0x3b07a8: 0x5600011b  bnel        $s0, $zero, . + 4 + (0x11B << 2)
label_3b07ac:
    if (ctx->pc == 0x3B07ACu) {
        ctx->pc = 0x3B07ACu;
            // 0x3b07ac: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x3B07B0u;
        goto label_3b07b0;
    }
    ctx->pc = 0x3B07A8u;
    {
        const bool branch_taken_0x3b07a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b07a8) {
            ctx->pc = 0x3B07ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B07A8u;
            // 0x3b07ac: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B0C18u;
            goto label_3b0c18;
        }
    }
    ctx->pc = 0x3B07B0u;
label_3b07b0:
    // 0x3b07b0: 0x3c1e00af  lui         $fp, 0xAF
    ctx->pc = 0x3b07b0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)175 << 16));
label_3b07b4:
    // 0x3b07b4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3b07b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b07b8:
    // 0x3b07b8: 0x27de0e80  addiu       $fp, $fp, 0xE80
    ctx->pc = 0x3b07b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 3712));
label_3b07bc:
    // 0x3b07bc: 0xafb500b0  sw          $s5, 0xB0($sp)
    ctx->pc = 0x3b07bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 21));
label_3b07c0:
    // 0x3b07c0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x3b07c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3b07c4:
    // 0x3b07c4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3b07c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3b07c8:
    // 0x3b07c8: 0x24540090  addiu       $s4, $v0, 0x90
    ctx->pc = 0x3b07c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_3b07cc:
    // 0x3b07cc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3b07ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3b07d0:
    // 0x3b07d0: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x3b07d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_3b07d4:
    // 0x3b07d4: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x3b07d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_3b07d8:
    // 0x3b07d8: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_3b07dc:
    if (ctx->pc == 0x3B07DCu) {
        ctx->pc = 0x3B07DCu;
            // 0x3b07dc: 0x8fc40004  lw          $a0, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->pc = 0x3B07E0u;
        goto label_3b07e0;
    }
    ctx->pc = 0x3B07D8u;
    {
        const bool branch_taken_0x3b07d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B07DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B07D8u;
            // 0x3b07dc: 0x8fc40004  lw          $a0, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b07d8) {
            ctx->pc = 0x3B0810u;
            goto label_3b0810;
        }
    }
    ctx->pc = 0x3B07E0u;
label_3b07e0:
    // 0x3b07e0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3b07e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3b07e4:
    // 0x3b07e4: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x3b07e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3b07e8:
    // 0x3b07e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3b07e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b07ec:
    // 0x3b07ec: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3b07ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3b07f0:
    // 0x3b07f0: 0x320f809  jalr        $t9
label_3b07f4:
    if (ctx->pc == 0x3B07F4u) {
        ctx->pc = 0x3B07F4u;
            // 0x3b07f4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B07F8u;
        goto label_3b07f8;
    }
    ctx->pc = 0x3B07F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B07F8u);
        ctx->pc = 0x3B07F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B07F0u;
            // 0x3b07f4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B07F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B07F8u; }
            if (ctx->pc != 0x3B07F8u) { return; }
        }
        }
    }
    ctx->pc = 0x3B07F8u;
label_3b07f8:
    // 0x3b07f8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3b07f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3b07fc:
    // 0x3b07fc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3b07fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3b0800:
    // 0x3b0800: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x3b0800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
label_3b0804:
    // 0x3b0804: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b0804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3b0808:
    // 0x3b0808: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3b0808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3b080c:
    // 0x3b080c: 0x0  nop
    ctx->pc = 0x3b080cu;
    // NOP
label_3b0810:
    // 0x3b0810: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x3b0810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_3b0814:
    // 0x3b0814: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3b0814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3b0818:
    // 0x3b0818: 0x9282000c  lbu         $v0, 0xC($s4)
    ctx->pc = 0x3b0818u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
label_3b081c:
    // 0x3b081c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3b0820:
    if (ctx->pc == 0x3B0820u) {
        ctx->pc = 0x3B0820u;
            // 0x3b0820: 0xc6c30018  lwc1        $f3, 0x18($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x3B0824u;
        goto label_3b0824;
    }
    ctx->pc = 0x3B081Cu;
    {
        const bool branch_taken_0x3b081c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B0820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B081Cu;
            // 0x3b0820: 0xc6c30018  lwc1        $f3, 0x18($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b081c) {
            ctx->pc = 0x3B0830u;
            goto label_3b0830;
        }
    }
    ctx->pc = 0x3B0824u;
label_3b0824:
    // 0x3b0824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b0824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b0828:
    // 0x3b0828: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b082c:
    if (ctx->pc == 0x3B082Cu) {
        ctx->pc = 0x3B082Cu;
            // 0x3b082c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B0830u;
        goto label_3b0830;
    }
    ctx->pc = 0x3B0828u;
    {
        const bool branch_taken_0x3b0828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B082Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0828u;
            // 0x3b082c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0828) {
            ctx->pc = 0x3B084Cu;
            goto label_3b084c;
        }
    }
    ctx->pc = 0x3B0830u;
label_3b0830:
    // 0x3b0830: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b0830u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3b0834:
    // 0x3b0834: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b0834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b0838:
    // 0x3b0838: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b0838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b083c:
    // 0x3b083c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b083cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b0840:
    // 0x3b0840: 0x0  nop
    ctx->pc = 0x3b0840u;
    // NOP
label_3b0844:
    // 0x3b0844: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3b0844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3b0848:
    // 0x3b0848: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3b0848u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3b084c:
    // 0x3b084c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b084cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b0850:
    // 0x3b0850: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3b0850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3b0854:
    // 0x3b0854: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3b0854u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3b0858:
    // 0x3b0858: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x3b0858u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_3b085c:
    // 0x3b085c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b085cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b0860:
    // 0x3b0860: 0x0  nop
    ctx->pc = 0x3b0860u;
    // NOP
label_3b0864:
    // 0x3b0864: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b0864u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b0868:
    // 0x3b0868: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3b086c:
    if (ctx->pc == 0x3B086Cu) {
        ctx->pc = 0x3B086Cu;
            // 0x3b086c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3B0870u;
        goto label_3b0870;
    }
    ctx->pc = 0x3B0868u;
    {
        const bool branch_taken_0x3b0868 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0868) {
            ctx->pc = 0x3B086Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0868u;
            // 0x3b086c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B0880u;
            goto label_3b0880;
        }
    }
    ctx->pc = 0x3B0870u;
label_3b0870:
    // 0x3b0870: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b0870u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b0874:
    // 0x3b0874: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3b0874u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3b0878:
    // 0x3b0878: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b087c:
    if (ctx->pc == 0x3B087Cu) {
        ctx->pc = 0x3B087Cu;
            // 0x3b087c: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3B0880u;
        goto label_3b0880;
    }
    ctx->pc = 0x3B0878u;
    {
        const bool branch_taken_0x3b0878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B087Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0878u;
            // 0x3b087c: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0878) {
            ctx->pc = 0x3B0898u;
            goto label_3b0898;
        }
    }
    ctx->pc = 0x3B0880u;
label_3b0880:
    // 0x3b0880: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b0880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3b0884:
    // 0x3b0884: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b0884u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b0888:
    // 0x3b0888: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3b0888u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3b088c:
    // 0x3b088c: 0x0  nop
    ctx->pc = 0x3b088cu;
    // NOP
label_3b0890:
    // 0x3b0890: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b0890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b0894:
    // 0x3b0894: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3b0894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3b0898:
    // 0x3b0898: 0xa283000c  sb          $v1, 0xC($s4)
    ctx->pc = 0x3b0898u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 12), (uint8_t)GPR_U32(ctx, 3));
label_3b089c:
    // 0x3b089c: 0xc0754b4  jal         func_1D52D0
label_3b08a0:
    if (ctx->pc == 0x3B08A0u) {
        ctx->pc = 0x3B08A0u;
            // 0x3b08a0: 0x24840440  addiu       $a0, $a0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1088));
        ctx->pc = 0x3B08A4u;
        goto label_3b08a4;
    }
    ctx->pc = 0x3B089Cu;
    SET_GPR_U32(ctx, 31, 0x3B08A4u);
    ctx->pc = 0x3B08A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B089Cu;
            // 0x3b08a0: 0x24840440  addiu       $a0, $a0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B08A4u; }
        if (ctx->pc != 0x3B08A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B08A4u; }
        if (ctx->pc != 0x3B08A4u) { return; }
    }
    ctx->pc = 0x3B08A4u;
label_3b08a4:
    // 0x3b08a4: 0x84420050  lh          $v0, 0x50($v0)
    ctx->pc = 0x3b08a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_3b08a8:
    // 0x3b08a8: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x3b08a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b08ac:
    // 0x3b08ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b08acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b08b0:
    // 0x3b08b0: 0x0  nop
    ctx->pc = 0x3b08b0u;
    // NOP
label_3b08b4:
    // 0x3b08b4: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x3b08b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3b08b8:
    // 0x3b08b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b08b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b08bc:
    // 0x3b08bc: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x3b08bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b08c0:
    // 0x3b08c0: 0x45010015  bc1t        . + 4 + (0x15 << 2)
label_3b08c4:
    if (ctx->pc == 0x3B08C4u) {
        ctx->pc = 0x3B08C8u;
        goto label_3b08c8;
    }
    ctx->pc = 0x3B08C0u;
    {
        const bool branch_taken_0x3b08c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b08c0) {
            ctx->pc = 0x3B0918u;
            goto label_3b0918;
        }
    }
    ctx->pc = 0x3B08C8u;
label_3b08c8:
    // 0x3b08c8: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x3b08c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b08cc:
    // 0x3b08cc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3b08ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3b08d0:
    // 0x3b08d0: 0xc6c20018  lwc1        $f2, 0x18($s6)
    ctx->pc = 0x3b08d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b08d4:
    // 0x3b08d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b08d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b08d8:
    // 0x3b08d8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x3b08d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3b08dc:
    // 0x3b08dc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3b08dcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3b08e0:
    // 0x3b08e0: 0x4602a05d  msub.s      $f1, $f20, $f2
    ctx->pc = 0x3b08e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[2]));
label_3b08e4:
    // 0x3b08e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b08e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b08e8:
    // 0x3b08e8: 0x45000027  bc1f        . + 4 + (0x27 << 2)
label_3b08ec:
    if (ctx->pc == 0x3B08ECu) {
        ctx->pc = 0x3B08ECu;
            // 0x3b08ec: 0xe6810014  swc1        $f1, 0x14($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
        ctx->pc = 0x3B08F0u;
        goto label_3b08f0;
    }
    ctx->pc = 0x3B08E8u;
    {
        const bool branch_taken_0x3b08e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B08ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B08E8u;
            // 0x3b08ec: 0xe6810014  swc1        $f1, 0x14($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b08e8) {
            ctx->pc = 0x3B0988u;
            goto label_3b0988;
        }
    }
    ctx->pc = 0x3B08F0u;
label_3b08f0:
    // 0x3b08f0: 0xe6800014  swc1        $f0, 0x14($s4)
    ctx->pc = 0x3b08f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
label_3b08f4:
    // 0x3b08f4: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x3b08f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b08f8:
    // 0x3b08f8: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b08f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b08fc:
    // 0x3b08fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3b08fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3b0900:
    // 0x3b0900: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x3b0900u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_3b0904:
    // 0x3b0904: 0xe6810018  swc1        $f1, 0x18($s4)
    ctx->pc = 0x3b0904u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
label_3b0908:
    // 0x3b0908: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3b0908u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3b090c:
    // 0x3b090c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_3b0910:
    if (ctx->pc == 0x3B0910u) {
        ctx->pc = 0x3B0910u;
            // 0x3b0910: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x3B0914u;
        goto label_3b0914;
    }
    ctx->pc = 0x3B090Cu;
    {
        const bool branch_taken_0x3b090c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B090Cu;
            // 0x3b0910: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b090c) {
            ctx->pc = 0x3B0988u;
            goto label_3b0988;
        }
    }
    ctx->pc = 0x3B0914u;
label_3b0914:
    // 0x3b0914: 0x0  nop
    ctx->pc = 0x3b0914u;
    // NOP
label_3b0918:
    // 0x3b0918: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3b0918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3b091c:
    // 0x3b091c: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x3b091cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b0920:
    // 0x3b0920: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x3b0920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3b0924:
    // 0x3b0924: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3b0924u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3b0928:
    // 0x3b0928: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3b0928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3b092c:
    // 0x3b092c: 0xc6c10018  lwc1        $f1, 0x18($s6)
    ctx->pc = 0x3b092cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b0930:
    // 0x3b0930: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x3b0930u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3b0934:
    // 0x3b0934: 0x4601a01c  madd.s      $f0, $f20, $f1
    ctx->pc = 0x3b0934u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[1]));
label_3b0938:
    // 0x3b0938: 0xe6800014  swc1        $f0, 0x14($s4)
    ctx->pc = 0x3b0938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
label_3b093c:
    // 0x3b093c: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x3b093cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b0940:
    // 0x3b0940: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x3b0940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b0944:
    // 0x3b0944: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b0944u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b0948:
    // 0x3b0948: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_3b094c:
    if (ctx->pc == 0x3B094Cu) {
        ctx->pc = 0x3B0950u;
        goto label_3b0950;
    }
    ctx->pc = 0x3B0948u;
    {
        const bool branch_taken_0x3b0948 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0948) {
            ctx->pc = 0x3B0988u;
            goto label_3b0988;
        }
    }
    ctx->pc = 0x3B0950u;
label_3b0950:
    // 0x3b0950: 0xe6810014  swc1        $f1, 0x14($s4)
    ctx->pc = 0x3b0950u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
label_3b0954:
    // 0x3b0954: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x3b0954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b0958:
    // 0x3b0958: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x3b0958u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b095c:
    // 0x3b095c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_3b0960:
    if (ctx->pc == 0x3B0960u) {
        ctx->pc = 0x3B0964u;
        goto label_3b0964;
    }
    ctx->pc = 0x3B095Cu;
    {
        const bool branch_taken_0x3b095c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b095c) {
            ctx->pc = 0x3B0988u;
            goto label_3b0988;
        }
    }
    ctx->pc = 0x3B0964u;
label_3b0964:
    // 0x3b0964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b0964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b0968:
    // 0x3b0968: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x3b0968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
label_3b096c:
    // 0x3b096c: 0xae82001c  sw          $v0, 0x1C($s4)
    ctx->pc = 0x3b096cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 2));
label_3b0970:
    // 0x3b0970: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x3b0970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
label_3b0974:
    // 0x3b0974: 0xae830020  sw          $v1, 0x20($s4)
    ctx->pc = 0x3b0974u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 3));
label_3b0978:
    // 0x3b0978: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x3b0978u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
label_3b097c:
    // 0x3b097c: 0xe6800028  swc1        $f0, 0x28($s4)
    ctx->pc = 0x3b097cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
label_3b0980:
    // 0x3b0980: 0xe6820018  swc1        $f2, 0x18($s4)
    ctx->pc = 0x3b0980u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
label_3b0984:
    // 0x3b0984: 0x0  nop
    ctx->pc = 0x3b0984u;
    // NOP
label_3b0988:
    // 0x3b0988: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3b0988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3b098c:
    // 0x3b098c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b098cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b0990:
    // 0x3b0990: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3b0994:
    if (ctx->pc == 0x3B0994u) {
        ctx->pc = 0x3B0998u;
        goto label_3b0998;
    }
    ctx->pc = 0x3B0990u;
    {
        const bool branch_taken_0x3b0990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0990) {
            ctx->pc = 0x3B09A8u;
            goto label_3b09a8;
        }
    }
    ctx->pc = 0x3B0998u;
label_3b0998:
    // 0x3b0998: 0xc6c10018  lwc1        $f1, 0x18($s6)
    ctx->pc = 0x3b0998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b099c:
    // 0x3b099c: 0xc680007c  lwc1        $f0, 0x7C($s4)
    ctx->pc = 0x3b099cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b09a0:
    // 0x3b09a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3b09a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3b09a4:
    // 0x3b09a4: 0xe680007c  swc1        $f0, 0x7C($s4)
    ctx->pc = 0x3b09a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 124), bits); }
label_3b09a8:
    // 0x3b09a8: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x3b09a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_3b09ac:
    // 0x3b09ac: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_3b09b0:
    if (ctx->pc == 0x3B09B0u) {
        ctx->pc = 0x3B09B4u;
        goto label_3b09b4;
    }
    ctx->pc = 0x3B09ACu;
    {
        const bool branch_taken_0x3b09ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b09ac) {
            ctx->pc = 0x3B0A10u;
            goto label_3b0a10;
        }
    }
    ctx->pc = 0x3B09B4u;
label_3b09b4:
    // 0x3b09b4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3b09b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3b09b8:
    // 0x3b09b8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3b09b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3b09bc:
    // 0x3b09bc: 0xc6810020  lwc1        $f1, 0x20($s4)
    ctx->pc = 0x3b09bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b09c0:
    // 0x3b09c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b09c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b09c4:
    // 0x3b09c4: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x3b09c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b09c8:
    // 0x3b09c8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3b09c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3b09cc:
    // 0x3b09cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3b09ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b09d0:
    // 0x3b09d0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_3b09d4:
    if (ctx->pc == 0x3B09D4u) {
        ctx->pc = 0x3B09D4u;
            // 0x3b09d4: 0xe6810020  swc1        $f1, 0x20($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
        ctx->pc = 0x3B09D8u;
        goto label_3b09d8;
    }
    ctx->pc = 0x3B09D0u;
    {
        const bool branch_taken_0x3b09d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B09D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B09D0u;
            // 0x3b09d4: 0xe6810020  swc1        $f1, 0x20($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b09d0) {
            ctx->pc = 0x3B09F0u;
            goto label_3b09f0;
        }
    }
    ctx->pc = 0x3B09D8u;
label_3b09d8:
    // 0x3b09d8: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x3b09d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
label_3b09dc:
    // 0x3b09dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b09dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b09e0:
    // 0x3b09e0: 0x0  nop
    ctx->pc = 0x3b09e0u;
    // NOP
label_3b09e4:
    // 0x3b09e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3b09e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3b09e8:
    // 0x3b09e8: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x3b09e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_3b09ec:
    // 0x3b09ec: 0x0  nop
    ctx->pc = 0x3b09ecu;
    // NOP
label_3b09f0:
    // 0x3b09f0: 0xc6810024  lwc1        $f1, 0x24($s4)
    ctx->pc = 0x3b09f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b09f4:
    // 0x3b09f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b09f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b09f8:
    // 0x3b09f8: 0x0  nop
    ctx->pc = 0x3b09f8u;
    // NOP
label_3b09fc:
    // 0x3b09fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3b09fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b0a00:
    // 0x3b0a00: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_3b0a04:
    if (ctx->pc == 0x3B0A04u) {
        ctx->pc = 0x3B0A08u;
        goto label_3b0a08;
    }
    ctx->pc = 0x3B0A00u;
    {
        const bool branch_taken_0x3b0a00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0a00) {
            ctx->pc = 0x3B0A10u;
            goto label_3b0a10;
        }
    }
    ctx->pc = 0x3B0A08u;
label_3b0a08:
    // 0x3b0a08: 0xae80001c  sw          $zero, 0x1C($s4)
    ctx->pc = 0x3b0a08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 0));
label_3b0a0c:
    // 0x3b0a0c: 0x0  nop
    ctx->pc = 0x3b0a0cu;
    // NOP
label_3b0a10:
    // 0x3b0a10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b0a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b0a14:
    // 0x3b0a14: 0xc0ec318  jal         func_3B0C60
label_3b0a18:
    if (ctx->pc == 0x3B0A18u) {
        ctx->pc = 0x3B0A18u;
            // 0x3b0a18: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B0A1Cu;
        goto label_3b0a1c;
    }
    ctx->pc = 0x3B0A14u;
    SET_GPR_U32(ctx, 31, 0x3B0A1Cu);
    ctx->pc = 0x3B0A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0A14u;
            // 0x3b0a18: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B0C60u;
    if (runtime->hasFunction(0x3B0C60u)) {
        auto targetFn = runtime->lookupFunction(0x3B0C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B0A1Cu; }
        if (ctx->pc != 0x3B0A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B0C60_0x3b0c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B0A1Cu; }
        if (ctx->pc != 0x3B0A1Cu) { return; }
    }
    ctx->pc = 0x3B0A1Cu;
label_3b0a1c:
    // 0x3b0a1c: 0xc0775b8  jal         func_1DD6E0
label_3b0a20:
    if (ctx->pc == 0x3B0A20u) {
        ctx->pc = 0x3B0A24u;
        goto label_3b0a24;
    }
    ctx->pc = 0x3B0A1Cu;
    SET_GPR_U32(ctx, 31, 0x3B0A24u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B0A24u; }
        if (ctx->pc != 0x3B0A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B0A24u; }
        if (ctx->pc != 0x3B0A24u) { return; }
    }
    ctx->pc = 0x3B0A24u;
label_3b0a24:
    // 0x3b0a24: 0x8eb00004  lw          $s0, 0x4($s5)
    ctx->pc = 0x3b0a24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3b0a28:
    // 0x3b0a28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b0a28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b0a2c:
    // 0x3b0a2c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3b0a2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b0a30:
    // 0x3b0a30: 0x8e84002c  lw          $a0, 0x2C($s4)
    ctx->pc = 0x3b0a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_3b0a34:
    // 0x3b0a34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3b0a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b0a38:
    // 0x3b0a38: 0x1083004d  beq         $a0, $v1, . + 4 + (0x4D << 2)
label_3b0a3c:
    if (ctx->pc == 0x3B0A3Cu) {
        ctx->pc = 0x3B0A3Cu;
            // 0x3b0a3c: 0x2692002c  addiu       $s2, $s4, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
        ctx->pc = 0x3B0A40u;
        goto label_3b0a40;
    }
    ctx->pc = 0x3B0A38u;
    {
        const bool branch_taken_0x3b0a38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B0A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0A38u;
            // 0x3b0a3c: 0x2692002c  addiu       $s2, $s4, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0a38) {
            ctx->pc = 0x3B0B70u;
            goto label_3b0b70;
        }
    }
    ctx->pc = 0x3B0A40u;
label_3b0a40:
    // 0x3b0a40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3b0a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b0a44:
    // 0x3b0a44: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
label_3b0a48:
    if (ctx->pc == 0x3B0A48u) {
        ctx->pc = 0x3B0A4Cu;
        goto label_3b0a4c;
    }
    ctx->pc = 0x3B0A44u;
    {
        const bool branch_taken_0x3b0a44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b0a44) {
            ctx->pc = 0x3B0B00u;
            goto label_3b0b00;
        }
    }
    ctx->pc = 0x3B0A4Cu;
label_3b0a4c:
    // 0x3b0a4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b0a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b0a50:
    // 0x3b0a50: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_3b0a54:
    if (ctx->pc == 0x3B0A54u) {
        ctx->pc = 0x3B0A58u;
        goto label_3b0a58;
    }
    ctx->pc = 0x3B0A50u;
    {
        const bool branch_taken_0x3b0a50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b0a50) {
            ctx->pc = 0x3B0A60u;
            goto label_3b0a60;
        }
    }
    ctx->pc = 0x3B0A58u;
label_3b0a58:
    // 0x3b0a58: 0x10000061  b           . + 4 + (0x61 << 2)
label_3b0a5c:
    if (ctx->pc == 0x3B0A5Cu) {
        ctx->pc = 0x3B0A60u;
        goto label_3b0a60;
    }
    ctx->pc = 0x3B0A58u;
    {
        const bool branch_taken_0x3b0a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0a58) {
            ctx->pc = 0x3B0BE0u;
            goto label_3b0be0;
        }
    }
    ctx->pc = 0x3B0A60u;
label_3b0a60:
    // 0x3b0a60: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3b0a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3b0a64:
    // 0x3b0a64: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x3b0a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b0a68:
    // 0x3b0a68: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x3b0a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3b0a6c:
    // 0x3b0a6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b0a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b0a70:
    // 0x3b0a70: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x3b0a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3b0a74:
    // 0x3b0a74: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x3b0a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_3b0a78:
    // 0x3b0a78: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x3b0a78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_3b0a7c:
    // 0x3b0a7c: 0xc4630044  lwc1        $f3, 0x44($v1)
    ctx->pc = 0x3b0a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b0a80:
    // 0x3b0a80: 0xc462003c  lwc1        $f2, 0x3C($v1)
    ctx->pc = 0x3b0a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b0a84:
    // 0x3b0a84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b0a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b0a88:
    // 0x3b0a88: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x3b0a88u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_3b0a8c:
    // 0x3b0a8c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3b0a8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3b0a90:
    // 0x3b0a90: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3b0a90u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_3b0a94:
    // 0x3b0a94: 0x0  nop
    ctx->pc = 0x3b0a94u;
    // NOP
label_3b0a98:
    // 0x3b0a98: 0x0  nop
    ctx->pc = 0x3b0a98u;
    // NOP
label_3b0a9c:
    // 0x3b0a9c: 0xc0775b4  jal         func_1DD6D0
label_3b0aa0:
    if (ctx->pc == 0x3B0AA0u) {
        ctx->pc = 0x3B0AA0u;
            // 0x3b0aa0: 0x46001d40  add.s       $f21, $f3, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->pc = 0x3B0AA4u;
        goto label_3b0aa4;
    }
    ctx->pc = 0x3B0A9Cu;
    SET_GPR_U32(ctx, 31, 0x3B0AA4u);
    ctx->pc = 0x3B0AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0A9Cu;
            // 0x3b0aa0: 0x46001d40  add.s       $f21, $f3, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B0AA4u; }
        if (ctx->pc != 0x3B0AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B0AA4u; }
        if (ctx->pc != 0x3B0AA4u) { return; }
    }
    ctx->pc = 0x3B0AA4u;
label_3b0aa4:
    // 0x3b0aa4: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x3b0aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b0aa8:
    // 0x3b0aa8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x3b0aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_3b0aac:
    // 0x3b0aac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b0aacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b0ab0:
    // 0x3b0ab0: 0x0  nop
    ctx->pc = 0x3b0ab0u;
    // NOP
label_3b0ab4:
    // 0x3b0ab4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3b0ab4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3b0ab8:
    // 0x3b0ab8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b0ab8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b0abc:
    // 0x3b0abc: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_3b0ac0:
    if (ctx->pc == 0x3B0AC0u) {
        ctx->pc = 0x3B0AC0u;
            // 0x3b0ac0: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->pc = 0x3B0AC4u;
        goto label_3b0ac4;
    }
    ctx->pc = 0x3B0ABCu;
    {
        const bool branch_taken_0x3b0abc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B0AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0ABCu;
            // 0x3b0ac0: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0abc) {
            ctx->pc = 0x3B0AF0u;
            goto label_3b0af0;
        }
    }
    ctx->pc = 0x3B0AC4u;
label_3b0ac4:
    // 0x3b0ac4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3b0ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3b0ac8:
    // 0x3b0ac8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b0ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3b0acc:
    // 0x3b0acc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3b0accu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3b0ad0:
    // 0x3b0ad0: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x3b0ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3b0ad4:
    // 0x3b0ad4: 0xc0c05c4  jal         func_301710
label_3b0ad8:
    if (ctx->pc == 0x3B0AD8u) {
        ctx->pc = 0x3B0AD8u;
            // 0x3b0ad8: 0xc4550044  lwc1        $f21, 0x44($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->pc = 0x3B0ADCu;
        goto label_3b0adc;
    }
    ctx->pc = 0x3B0AD4u;
    SET_GPR_U32(ctx, 31, 0x3B0ADCu);
    ctx->pc = 0x3B0AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0AD4u;
            // 0x3b0ad8: 0xc4550044  lwc1        $f21, 0x44($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B0ADCu; }
        if (ctx->pc != 0x3B0ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B0ADCu; }
        if (ctx->pc != 0x3B0ADCu) { return; }
    }
    ctx->pc = 0x3B0ADCu;
label_3b0adc:
    // 0x3b0adc: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x3b0adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3b0ae0:
    // 0x3b0ae0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x3b0ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_3b0ae4:
    // 0x3b0ae4: 0xc0ec314  jal         func_3B0C50
label_3b0ae8:
    if (ctx->pc == 0x3B0AE8u) {
        ctx->pc = 0x3B0AE8u;
            // 0x3b0ae8: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x3B0AECu;
        goto label_3b0aec;
    }
    ctx->pc = 0x3B0AE4u;
    SET_GPR_U32(ctx, 31, 0x3B0AECu);
    ctx->pc = 0x3B0AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0AE4u;
            // 0x3b0ae8: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B0C50u;
    if (runtime->hasFunction(0x3B0C50u)) {
        auto targetFn = runtime->lookupFunction(0x3B0C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B0AECu; }
        if (ctx->pc != 0x3B0AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B0C50_0x3b0c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B0AECu; }
        if (ctx->pc != 0x3B0AECu) { return; }
    }
    ctx->pc = 0x3B0AECu;
label_3b0aec:
    // 0x3b0aec: 0x0  nop
    ctx->pc = 0x3b0aecu;
    // NOP
label_3b0af0:
    // 0x3b0af0: 0xe655000c  swc1        $f21, 0xC($s2)
    ctx->pc = 0x3b0af0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3b0af4:
    // 0x3b0af4: 0x1000003a  b           . + 4 + (0x3A << 2)
label_3b0af8:
    if (ctx->pc == 0x3B0AF8u) {
        ctx->pc = 0x3B0AF8u;
            // 0x3b0af8: 0xe6550008  swc1        $f21, 0x8($s2) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->pc = 0x3B0AFCu;
        goto label_3b0afc;
    }
    ctx->pc = 0x3B0AF4u;
    {
        const bool branch_taken_0x3b0af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0AF4u;
            // 0x3b0af8: 0xe6550008  swc1        $f21, 0x8($s2) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0af4) {
            ctx->pc = 0x3B0BE0u;
            goto label_3b0be0;
        }
    }
    ctx->pc = 0x3B0AFCu;
label_3b0afc:
    // 0x3b0afc: 0x0  nop
    ctx->pc = 0x3b0afcu;
    // NOP
label_3b0b00:
    // 0x3b0b00: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x3b0b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3b0b04:
    // 0x3b0b04: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x3b0b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b0b08:
    // 0x3b0b08: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x3b0b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3b0b0c:
    // 0x3b0b0c: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x3b0b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b0b10:
    // 0x3b0b10: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3b0b10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3b0b14:
    // 0x3b0b14: 0x46140543  div.s       $f21, $f0, $f20
    ctx->pc = 0x3b0b14u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[21] = ctx->f[0] / ctx->f[20];
label_3b0b18:
    // 0x3b0b18: 0x0  nop
    ctx->pc = 0x3b0b18u;
    // NOP
label_3b0b1c:
    // 0x3b0b1c: 0x0  nop
    ctx->pc = 0x3b0b1cu;
    // NOP
label_3b0b20:
    // 0x3b0b20: 0xc0775b4  jal         func_1DD6D0
label_3b0b24:
    if (ctx->pc == 0x3B0B24u) {
        ctx->pc = 0x3B0B28u;
        goto label_3b0b28;
    }
    ctx->pc = 0x3B0B20u;
    SET_GPR_U32(ctx, 31, 0x3B0B28u);
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B0B28u; }
        if (ctx->pc != 0x3B0B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B0B28u; }
        if (ctx->pc != 0x3B0B28u) { return; }
    }
    ctx->pc = 0x3B0B28u;
label_3b0b28:
    // 0x3b0b28: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x3b0b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b0b2c:
    // 0x3b0b2c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3b0b2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b0b30:
    // 0x3b0b30: 0x0  nop
    ctx->pc = 0x3b0b30u;
    // NOP
label_3b0b34:
    // 0x3b0b34: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3b0b34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3b0b38:
    // 0x3b0b38: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b0b38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b0b3c:
    // 0x3b0b3c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_3b0b40:
    if (ctx->pc == 0x3B0B40u) {
        ctx->pc = 0x3B0B40u;
            // 0x3b0b40: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->pc = 0x3B0B44u;
        goto label_3b0b44;
    }
    ctx->pc = 0x3B0B3Cu;
    {
        const bool branch_taken_0x3b0b3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B0B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0B3Cu;
            // 0x3b0b40: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0b3c) {
            ctx->pc = 0x3B0B58u;
            goto label_3b0b58;
        }
    }
    ctx->pc = 0x3B0B44u;
label_3b0b44:
    // 0x3b0b44: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3b0b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3b0b48:
    // 0x3b0b48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b0b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3b0b4c:
    // 0x3b0b4c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3b0b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_3b0b50:
    // 0x3b0b50: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x3b0b50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_3b0b54:
    // 0x3b0b54: 0x0  nop
    ctx->pc = 0x3b0b54u;
    // NOP
label_3b0b58:
    // 0x3b0b58: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x3b0b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b0b5c:
    // 0x3b0b5c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x3b0b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b0b60:
    // 0x3b0b60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3b0b60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3b0b64:
    // 0x3b0b64: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x3b0b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_3b0b68:
    // 0x3b0b68: 0x1000001d  b           . + 4 + (0x1D << 2)
label_3b0b6c:
    if (ctx->pc == 0x3B0B6Cu) {
        ctx->pc = 0x3B0B6Cu;
            // 0x3b0b6c: 0xe655000c  swc1        $f21, 0xC($s2) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->pc = 0x3B0B70u;
        goto label_3b0b70;
    }
    ctx->pc = 0x3B0B68u;
    {
        const bool branch_taken_0x3b0b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0B68u;
            // 0x3b0b6c: 0xe655000c  swc1        $f21, 0xC($s2) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0b68) {
            ctx->pc = 0x3B0BE0u;
            goto label_3b0be0;
        }
    }
    ctx->pc = 0x3B0B70u;
label_3b0b70:
    // 0x3b0b70: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x3b0b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3b0b74:
    // 0x3b0b74: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x3b0b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_3b0b78:
    // 0x3b0b78: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x3b0b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3b0b7c:
    // 0x3b0b7c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x3b0b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b0b80:
    // 0x3b0b80: 0xc4630044  lwc1        $f3, 0x44($v1)
    ctx->pc = 0x3b0b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b0b84:
    // 0x3b0b84: 0xc4620048  lwc1        $f2, 0x48($v1)
    ctx->pc = 0x3b0b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b0b88:
    // 0x3b0b88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b0b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b0b8c:
    // 0x3b0b8c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x3b0b8cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_3b0b90:
    // 0x3b0b90: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3b0b90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3b0b94:
    // 0x3b0b94: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3b0b94u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_3b0b98:
    // 0x3b0b98: 0x0  nop
    ctx->pc = 0x3b0b98u;
    // NOP
label_3b0b9c:
    // 0x3b0b9c: 0x0  nop
    ctx->pc = 0x3b0b9cu;
    // NOP
label_3b0ba0:
    // 0x3b0ba0: 0xc0775b4  jal         func_1DD6D0
label_3b0ba4:
    if (ctx->pc == 0x3B0BA4u) {
        ctx->pc = 0x3B0BA4u;
            // 0x3b0ba4: 0x46001d40  add.s       $f21, $f3, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->pc = 0x3B0BA8u;
        goto label_3b0ba8;
    }
    ctx->pc = 0x3B0BA0u;
    SET_GPR_U32(ctx, 31, 0x3B0BA8u);
    ctx->pc = 0x3B0BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0BA0u;
            // 0x3b0ba4: 0x46001d40  add.s       $f21, $f3, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B0BA8u; }
        if (ctx->pc != 0x3B0BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B0BA8u; }
        if (ctx->pc != 0x3B0BA8u) { return; }
    }
    ctx->pc = 0x3B0BA8u;
label_3b0ba8:
    // 0x3b0ba8: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x3b0ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b0bac:
    // 0x3b0bac: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x3b0bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_3b0bb0:
    // 0x3b0bb0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b0bb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b0bb4:
    // 0x3b0bb4: 0x0  nop
    ctx->pc = 0x3b0bb4u;
    // NOP
label_3b0bb8:
    // 0x3b0bb8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3b0bb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3b0bbc:
    // 0x3b0bbc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b0bbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b0bc0:
    // 0x3b0bc0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_3b0bc4:
    if (ctx->pc == 0x3B0BC4u) {
        ctx->pc = 0x3B0BC4u;
            // 0x3b0bc4: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->pc = 0x3B0BC8u;
        goto label_3b0bc8;
    }
    ctx->pc = 0x3B0BC0u;
    {
        const bool branch_taken_0x3b0bc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B0BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0BC0u;
            // 0x3b0bc4: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0bc0) {
            ctx->pc = 0x3B0BD8u;
            goto label_3b0bd8;
        }
    }
    ctx->pc = 0x3B0BC8u;
label_3b0bc8:
    // 0x3b0bc8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3b0bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3b0bcc:
    // 0x3b0bcc: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x3b0bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3b0bd0:
    // 0x3b0bd0: 0xc4750044  lwc1        $f21, 0x44($v1)
    ctx->pc = 0x3b0bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3b0bd4:
    // 0x3b0bd4: 0x0  nop
    ctx->pc = 0x3b0bd4u;
    // NOP
label_3b0bd8:
    // 0x3b0bd8: 0xe655000c  swc1        $f21, 0xC($s2)
    ctx->pc = 0x3b0bd8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3b0bdc:
    // 0x3b0bdc: 0xe6550008  swc1        $f21, 0x8($s2)
    ctx->pc = 0x3b0bdcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_3b0be0:
    // 0x3b0be0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3b0be0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3b0be4:
    // 0x3b0be4: 0x2a630003  slti        $v1, $s3, 0x3
    ctx->pc = 0x3b0be4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
label_3b0be8:
    // 0x3b0be8: 0x1460ff91  bnez        $v1, . + 4 + (-0x6F << 2)
label_3b0bec:
    if (ctx->pc == 0x3B0BECu) {
        ctx->pc = 0x3B0BECu;
            // 0x3b0bec: 0x26940018  addiu       $s4, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->pc = 0x3B0BF0u;
        goto label_3b0bf0;
    }
    ctx->pc = 0x3B0BE8u;
    {
        const bool branch_taken_0x3b0be8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0BE8u;
            // 0x3b0bec: 0x26940018  addiu       $s4, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0be8) {
            ctx->pc = 0x3B0A30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3b0a30;
        }
    }
    ctx->pc = 0x3B0BF0u;
label_3b0bf0:
    // 0x3b0bf0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x3b0bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3b0bf4:
    // 0x3b0bf4: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x3b0bf4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_3b0bf8:
    // 0x3b0bf8: 0x246300b8  addiu       $v1, $v1, 0xB8
    ctx->pc = 0x3b0bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
label_3b0bfc:
    // 0x3b0bfc: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x3b0bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_3b0c00:
    // 0x3b0c00: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3b0c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3b0c04:
    // 0x3b0c04: 0x8c630110  lw          $v1, 0x110($v1)
    ctx->pc = 0x3b0c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_3b0c08:
    // 0x3b0c08: 0x2e3182a  slt         $v1, $s7, $v1
    ctx->pc = 0x3b0c08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3b0c0c:
    // 0x3b0c0c: 0x1460feec  bnez        $v1, . + 4 + (-0x114 << 2)
label_3b0c10:
    if (ctx->pc == 0x3B0C10u) {
        ctx->pc = 0x3B0C10u;
            // 0x3b0c10: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->pc = 0x3B0C14u;
        goto label_3b0c14;
    }
    ctx->pc = 0x3B0C0Cu;
    {
        const bool branch_taken_0x3b0c0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0C0Cu;
            // 0x3b0c10: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0c0c) {
            ctx->pc = 0x3B07C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3b07c0;
        }
    }
    ctx->pc = 0x3B0C14u;
label_3b0c14:
    // 0x3b0c14: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3b0c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3b0c18:
    // 0x3b0c18: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3b0c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3b0c1c:
    // 0x3b0c1c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3b0c1cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b0c20:
    // 0x3b0c20: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3b0c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3b0c24:
    // 0x3b0c24: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3b0c24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b0c28:
    // 0x3b0c28: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3b0c28u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b0c2c:
    // 0x3b0c2c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3b0c2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b0c30:
    // 0x3b0c30: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3b0c30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b0c34:
    // 0x3b0c34: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3b0c34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b0c38:
    // 0x3b0c38: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3b0c38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b0c3c:
    // 0x3b0c3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b0c3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b0c40:
    // 0x3b0c40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b0c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b0c44:
    // 0x3b0c44: 0x3e00008  jr          $ra
label_3b0c48:
    if (ctx->pc == 0x3B0C48u) {
        ctx->pc = 0x3B0C48u;
            // 0x3b0c48: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3B0C4Cu;
        goto label_3b0c4c;
    }
    ctx->pc = 0x3B0C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0C44u;
            // 0x3b0c48: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B0C4Cu;
label_3b0c4c:
    // 0x3b0c4c: 0x0  nop
    ctx->pc = 0x3b0c4cu;
    // NOP
}
