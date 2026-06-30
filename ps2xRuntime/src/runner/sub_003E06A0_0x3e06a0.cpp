#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E06A0
// Address: 0x3e06a0 - 0x3e14f0
void sub_003E06A0_0x3e06a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E06A0_0x3e06a0");
#endif

    switch (ctx->pc) {
        case 0x3e06a0u: goto label_3e06a0;
        case 0x3e06a4u: goto label_3e06a4;
        case 0x3e06a8u: goto label_3e06a8;
        case 0x3e06acu: goto label_3e06ac;
        case 0x3e06b0u: goto label_3e06b0;
        case 0x3e06b4u: goto label_3e06b4;
        case 0x3e06b8u: goto label_3e06b8;
        case 0x3e06bcu: goto label_3e06bc;
        case 0x3e06c0u: goto label_3e06c0;
        case 0x3e06c4u: goto label_3e06c4;
        case 0x3e06c8u: goto label_3e06c8;
        case 0x3e06ccu: goto label_3e06cc;
        case 0x3e06d0u: goto label_3e06d0;
        case 0x3e06d4u: goto label_3e06d4;
        case 0x3e06d8u: goto label_3e06d8;
        case 0x3e06dcu: goto label_3e06dc;
        case 0x3e06e0u: goto label_3e06e0;
        case 0x3e06e4u: goto label_3e06e4;
        case 0x3e06e8u: goto label_3e06e8;
        case 0x3e06ecu: goto label_3e06ec;
        case 0x3e06f0u: goto label_3e06f0;
        case 0x3e06f4u: goto label_3e06f4;
        case 0x3e06f8u: goto label_3e06f8;
        case 0x3e06fcu: goto label_3e06fc;
        case 0x3e0700u: goto label_3e0700;
        case 0x3e0704u: goto label_3e0704;
        case 0x3e0708u: goto label_3e0708;
        case 0x3e070cu: goto label_3e070c;
        case 0x3e0710u: goto label_3e0710;
        case 0x3e0714u: goto label_3e0714;
        case 0x3e0718u: goto label_3e0718;
        case 0x3e071cu: goto label_3e071c;
        case 0x3e0720u: goto label_3e0720;
        case 0x3e0724u: goto label_3e0724;
        case 0x3e0728u: goto label_3e0728;
        case 0x3e072cu: goto label_3e072c;
        case 0x3e0730u: goto label_3e0730;
        case 0x3e0734u: goto label_3e0734;
        case 0x3e0738u: goto label_3e0738;
        case 0x3e073cu: goto label_3e073c;
        case 0x3e0740u: goto label_3e0740;
        case 0x3e0744u: goto label_3e0744;
        case 0x3e0748u: goto label_3e0748;
        case 0x3e074cu: goto label_3e074c;
        case 0x3e0750u: goto label_3e0750;
        case 0x3e0754u: goto label_3e0754;
        case 0x3e0758u: goto label_3e0758;
        case 0x3e075cu: goto label_3e075c;
        case 0x3e0760u: goto label_3e0760;
        case 0x3e0764u: goto label_3e0764;
        case 0x3e0768u: goto label_3e0768;
        case 0x3e076cu: goto label_3e076c;
        case 0x3e0770u: goto label_3e0770;
        case 0x3e0774u: goto label_3e0774;
        case 0x3e0778u: goto label_3e0778;
        case 0x3e077cu: goto label_3e077c;
        case 0x3e0780u: goto label_3e0780;
        case 0x3e0784u: goto label_3e0784;
        case 0x3e0788u: goto label_3e0788;
        case 0x3e078cu: goto label_3e078c;
        case 0x3e0790u: goto label_3e0790;
        case 0x3e0794u: goto label_3e0794;
        case 0x3e0798u: goto label_3e0798;
        case 0x3e079cu: goto label_3e079c;
        case 0x3e07a0u: goto label_3e07a0;
        case 0x3e07a4u: goto label_3e07a4;
        case 0x3e07a8u: goto label_3e07a8;
        case 0x3e07acu: goto label_3e07ac;
        case 0x3e07b0u: goto label_3e07b0;
        case 0x3e07b4u: goto label_3e07b4;
        case 0x3e07b8u: goto label_3e07b8;
        case 0x3e07bcu: goto label_3e07bc;
        case 0x3e07c0u: goto label_3e07c0;
        case 0x3e07c4u: goto label_3e07c4;
        case 0x3e07c8u: goto label_3e07c8;
        case 0x3e07ccu: goto label_3e07cc;
        case 0x3e07d0u: goto label_3e07d0;
        case 0x3e07d4u: goto label_3e07d4;
        case 0x3e07d8u: goto label_3e07d8;
        case 0x3e07dcu: goto label_3e07dc;
        case 0x3e07e0u: goto label_3e07e0;
        case 0x3e07e4u: goto label_3e07e4;
        case 0x3e07e8u: goto label_3e07e8;
        case 0x3e07ecu: goto label_3e07ec;
        case 0x3e07f0u: goto label_3e07f0;
        case 0x3e07f4u: goto label_3e07f4;
        case 0x3e07f8u: goto label_3e07f8;
        case 0x3e07fcu: goto label_3e07fc;
        case 0x3e0800u: goto label_3e0800;
        case 0x3e0804u: goto label_3e0804;
        case 0x3e0808u: goto label_3e0808;
        case 0x3e080cu: goto label_3e080c;
        case 0x3e0810u: goto label_3e0810;
        case 0x3e0814u: goto label_3e0814;
        case 0x3e0818u: goto label_3e0818;
        case 0x3e081cu: goto label_3e081c;
        case 0x3e0820u: goto label_3e0820;
        case 0x3e0824u: goto label_3e0824;
        case 0x3e0828u: goto label_3e0828;
        case 0x3e082cu: goto label_3e082c;
        case 0x3e0830u: goto label_3e0830;
        case 0x3e0834u: goto label_3e0834;
        case 0x3e0838u: goto label_3e0838;
        case 0x3e083cu: goto label_3e083c;
        case 0x3e0840u: goto label_3e0840;
        case 0x3e0844u: goto label_3e0844;
        case 0x3e0848u: goto label_3e0848;
        case 0x3e084cu: goto label_3e084c;
        case 0x3e0850u: goto label_3e0850;
        case 0x3e0854u: goto label_3e0854;
        case 0x3e0858u: goto label_3e0858;
        case 0x3e085cu: goto label_3e085c;
        case 0x3e0860u: goto label_3e0860;
        case 0x3e0864u: goto label_3e0864;
        case 0x3e0868u: goto label_3e0868;
        case 0x3e086cu: goto label_3e086c;
        case 0x3e0870u: goto label_3e0870;
        case 0x3e0874u: goto label_3e0874;
        case 0x3e0878u: goto label_3e0878;
        case 0x3e087cu: goto label_3e087c;
        case 0x3e0880u: goto label_3e0880;
        case 0x3e0884u: goto label_3e0884;
        case 0x3e0888u: goto label_3e0888;
        case 0x3e088cu: goto label_3e088c;
        case 0x3e0890u: goto label_3e0890;
        case 0x3e0894u: goto label_3e0894;
        case 0x3e0898u: goto label_3e0898;
        case 0x3e089cu: goto label_3e089c;
        case 0x3e08a0u: goto label_3e08a0;
        case 0x3e08a4u: goto label_3e08a4;
        case 0x3e08a8u: goto label_3e08a8;
        case 0x3e08acu: goto label_3e08ac;
        case 0x3e08b0u: goto label_3e08b0;
        case 0x3e08b4u: goto label_3e08b4;
        case 0x3e08b8u: goto label_3e08b8;
        case 0x3e08bcu: goto label_3e08bc;
        case 0x3e08c0u: goto label_3e08c0;
        case 0x3e08c4u: goto label_3e08c4;
        case 0x3e08c8u: goto label_3e08c8;
        case 0x3e08ccu: goto label_3e08cc;
        case 0x3e08d0u: goto label_3e08d0;
        case 0x3e08d4u: goto label_3e08d4;
        case 0x3e08d8u: goto label_3e08d8;
        case 0x3e08dcu: goto label_3e08dc;
        case 0x3e08e0u: goto label_3e08e0;
        case 0x3e08e4u: goto label_3e08e4;
        case 0x3e08e8u: goto label_3e08e8;
        case 0x3e08ecu: goto label_3e08ec;
        case 0x3e08f0u: goto label_3e08f0;
        case 0x3e08f4u: goto label_3e08f4;
        case 0x3e08f8u: goto label_3e08f8;
        case 0x3e08fcu: goto label_3e08fc;
        case 0x3e0900u: goto label_3e0900;
        case 0x3e0904u: goto label_3e0904;
        case 0x3e0908u: goto label_3e0908;
        case 0x3e090cu: goto label_3e090c;
        case 0x3e0910u: goto label_3e0910;
        case 0x3e0914u: goto label_3e0914;
        case 0x3e0918u: goto label_3e0918;
        case 0x3e091cu: goto label_3e091c;
        case 0x3e0920u: goto label_3e0920;
        case 0x3e0924u: goto label_3e0924;
        case 0x3e0928u: goto label_3e0928;
        case 0x3e092cu: goto label_3e092c;
        case 0x3e0930u: goto label_3e0930;
        case 0x3e0934u: goto label_3e0934;
        case 0x3e0938u: goto label_3e0938;
        case 0x3e093cu: goto label_3e093c;
        case 0x3e0940u: goto label_3e0940;
        case 0x3e0944u: goto label_3e0944;
        case 0x3e0948u: goto label_3e0948;
        case 0x3e094cu: goto label_3e094c;
        case 0x3e0950u: goto label_3e0950;
        case 0x3e0954u: goto label_3e0954;
        case 0x3e0958u: goto label_3e0958;
        case 0x3e095cu: goto label_3e095c;
        case 0x3e0960u: goto label_3e0960;
        case 0x3e0964u: goto label_3e0964;
        case 0x3e0968u: goto label_3e0968;
        case 0x3e096cu: goto label_3e096c;
        case 0x3e0970u: goto label_3e0970;
        case 0x3e0974u: goto label_3e0974;
        case 0x3e0978u: goto label_3e0978;
        case 0x3e097cu: goto label_3e097c;
        case 0x3e0980u: goto label_3e0980;
        case 0x3e0984u: goto label_3e0984;
        case 0x3e0988u: goto label_3e0988;
        case 0x3e098cu: goto label_3e098c;
        case 0x3e0990u: goto label_3e0990;
        case 0x3e0994u: goto label_3e0994;
        case 0x3e0998u: goto label_3e0998;
        case 0x3e099cu: goto label_3e099c;
        case 0x3e09a0u: goto label_3e09a0;
        case 0x3e09a4u: goto label_3e09a4;
        case 0x3e09a8u: goto label_3e09a8;
        case 0x3e09acu: goto label_3e09ac;
        case 0x3e09b0u: goto label_3e09b0;
        case 0x3e09b4u: goto label_3e09b4;
        case 0x3e09b8u: goto label_3e09b8;
        case 0x3e09bcu: goto label_3e09bc;
        case 0x3e09c0u: goto label_3e09c0;
        case 0x3e09c4u: goto label_3e09c4;
        case 0x3e09c8u: goto label_3e09c8;
        case 0x3e09ccu: goto label_3e09cc;
        case 0x3e09d0u: goto label_3e09d0;
        case 0x3e09d4u: goto label_3e09d4;
        case 0x3e09d8u: goto label_3e09d8;
        case 0x3e09dcu: goto label_3e09dc;
        case 0x3e09e0u: goto label_3e09e0;
        case 0x3e09e4u: goto label_3e09e4;
        case 0x3e09e8u: goto label_3e09e8;
        case 0x3e09ecu: goto label_3e09ec;
        case 0x3e09f0u: goto label_3e09f0;
        case 0x3e09f4u: goto label_3e09f4;
        case 0x3e09f8u: goto label_3e09f8;
        case 0x3e09fcu: goto label_3e09fc;
        case 0x3e0a00u: goto label_3e0a00;
        case 0x3e0a04u: goto label_3e0a04;
        case 0x3e0a08u: goto label_3e0a08;
        case 0x3e0a0cu: goto label_3e0a0c;
        case 0x3e0a10u: goto label_3e0a10;
        case 0x3e0a14u: goto label_3e0a14;
        case 0x3e0a18u: goto label_3e0a18;
        case 0x3e0a1cu: goto label_3e0a1c;
        case 0x3e0a20u: goto label_3e0a20;
        case 0x3e0a24u: goto label_3e0a24;
        case 0x3e0a28u: goto label_3e0a28;
        case 0x3e0a2cu: goto label_3e0a2c;
        case 0x3e0a30u: goto label_3e0a30;
        case 0x3e0a34u: goto label_3e0a34;
        case 0x3e0a38u: goto label_3e0a38;
        case 0x3e0a3cu: goto label_3e0a3c;
        case 0x3e0a40u: goto label_3e0a40;
        case 0x3e0a44u: goto label_3e0a44;
        case 0x3e0a48u: goto label_3e0a48;
        case 0x3e0a4cu: goto label_3e0a4c;
        case 0x3e0a50u: goto label_3e0a50;
        case 0x3e0a54u: goto label_3e0a54;
        case 0x3e0a58u: goto label_3e0a58;
        case 0x3e0a5cu: goto label_3e0a5c;
        case 0x3e0a60u: goto label_3e0a60;
        case 0x3e0a64u: goto label_3e0a64;
        case 0x3e0a68u: goto label_3e0a68;
        case 0x3e0a6cu: goto label_3e0a6c;
        case 0x3e0a70u: goto label_3e0a70;
        case 0x3e0a74u: goto label_3e0a74;
        case 0x3e0a78u: goto label_3e0a78;
        case 0x3e0a7cu: goto label_3e0a7c;
        case 0x3e0a80u: goto label_3e0a80;
        case 0x3e0a84u: goto label_3e0a84;
        case 0x3e0a88u: goto label_3e0a88;
        case 0x3e0a8cu: goto label_3e0a8c;
        case 0x3e0a90u: goto label_3e0a90;
        case 0x3e0a94u: goto label_3e0a94;
        case 0x3e0a98u: goto label_3e0a98;
        case 0x3e0a9cu: goto label_3e0a9c;
        case 0x3e0aa0u: goto label_3e0aa0;
        case 0x3e0aa4u: goto label_3e0aa4;
        case 0x3e0aa8u: goto label_3e0aa8;
        case 0x3e0aacu: goto label_3e0aac;
        case 0x3e0ab0u: goto label_3e0ab0;
        case 0x3e0ab4u: goto label_3e0ab4;
        case 0x3e0ab8u: goto label_3e0ab8;
        case 0x3e0abcu: goto label_3e0abc;
        case 0x3e0ac0u: goto label_3e0ac0;
        case 0x3e0ac4u: goto label_3e0ac4;
        case 0x3e0ac8u: goto label_3e0ac8;
        case 0x3e0accu: goto label_3e0acc;
        case 0x3e0ad0u: goto label_3e0ad0;
        case 0x3e0ad4u: goto label_3e0ad4;
        case 0x3e0ad8u: goto label_3e0ad8;
        case 0x3e0adcu: goto label_3e0adc;
        case 0x3e0ae0u: goto label_3e0ae0;
        case 0x3e0ae4u: goto label_3e0ae4;
        case 0x3e0ae8u: goto label_3e0ae8;
        case 0x3e0aecu: goto label_3e0aec;
        case 0x3e0af0u: goto label_3e0af0;
        case 0x3e0af4u: goto label_3e0af4;
        case 0x3e0af8u: goto label_3e0af8;
        case 0x3e0afcu: goto label_3e0afc;
        case 0x3e0b00u: goto label_3e0b00;
        case 0x3e0b04u: goto label_3e0b04;
        case 0x3e0b08u: goto label_3e0b08;
        case 0x3e0b0cu: goto label_3e0b0c;
        case 0x3e0b10u: goto label_3e0b10;
        case 0x3e0b14u: goto label_3e0b14;
        case 0x3e0b18u: goto label_3e0b18;
        case 0x3e0b1cu: goto label_3e0b1c;
        case 0x3e0b20u: goto label_3e0b20;
        case 0x3e0b24u: goto label_3e0b24;
        case 0x3e0b28u: goto label_3e0b28;
        case 0x3e0b2cu: goto label_3e0b2c;
        case 0x3e0b30u: goto label_3e0b30;
        case 0x3e0b34u: goto label_3e0b34;
        case 0x3e0b38u: goto label_3e0b38;
        case 0x3e0b3cu: goto label_3e0b3c;
        case 0x3e0b40u: goto label_3e0b40;
        case 0x3e0b44u: goto label_3e0b44;
        case 0x3e0b48u: goto label_3e0b48;
        case 0x3e0b4cu: goto label_3e0b4c;
        case 0x3e0b50u: goto label_3e0b50;
        case 0x3e0b54u: goto label_3e0b54;
        case 0x3e0b58u: goto label_3e0b58;
        case 0x3e0b5cu: goto label_3e0b5c;
        case 0x3e0b60u: goto label_3e0b60;
        case 0x3e0b64u: goto label_3e0b64;
        case 0x3e0b68u: goto label_3e0b68;
        case 0x3e0b6cu: goto label_3e0b6c;
        case 0x3e0b70u: goto label_3e0b70;
        case 0x3e0b74u: goto label_3e0b74;
        case 0x3e0b78u: goto label_3e0b78;
        case 0x3e0b7cu: goto label_3e0b7c;
        case 0x3e0b80u: goto label_3e0b80;
        case 0x3e0b84u: goto label_3e0b84;
        case 0x3e0b88u: goto label_3e0b88;
        case 0x3e0b8cu: goto label_3e0b8c;
        case 0x3e0b90u: goto label_3e0b90;
        case 0x3e0b94u: goto label_3e0b94;
        case 0x3e0b98u: goto label_3e0b98;
        case 0x3e0b9cu: goto label_3e0b9c;
        case 0x3e0ba0u: goto label_3e0ba0;
        case 0x3e0ba4u: goto label_3e0ba4;
        case 0x3e0ba8u: goto label_3e0ba8;
        case 0x3e0bacu: goto label_3e0bac;
        case 0x3e0bb0u: goto label_3e0bb0;
        case 0x3e0bb4u: goto label_3e0bb4;
        case 0x3e0bb8u: goto label_3e0bb8;
        case 0x3e0bbcu: goto label_3e0bbc;
        case 0x3e0bc0u: goto label_3e0bc0;
        case 0x3e0bc4u: goto label_3e0bc4;
        case 0x3e0bc8u: goto label_3e0bc8;
        case 0x3e0bccu: goto label_3e0bcc;
        case 0x3e0bd0u: goto label_3e0bd0;
        case 0x3e0bd4u: goto label_3e0bd4;
        case 0x3e0bd8u: goto label_3e0bd8;
        case 0x3e0bdcu: goto label_3e0bdc;
        case 0x3e0be0u: goto label_3e0be0;
        case 0x3e0be4u: goto label_3e0be4;
        case 0x3e0be8u: goto label_3e0be8;
        case 0x3e0becu: goto label_3e0bec;
        case 0x3e0bf0u: goto label_3e0bf0;
        case 0x3e0bf4u: goto label_3e0bf4;
        case 0x3e0bf8u: goto label_3e0bf8;
        case 0x3e0bfcu: goto label_3e0bfc;
        case 0x3e0c00u: goto label_3e0c00;
        case 0x3e0c04u: goto label_3e0c04;
        case 0x3e0c08u: goto label_3e0c08;
        case 0x3e0c0cu: goto label_3e0c0c;
        case 0x3e0c10u: goto label_3e0c10;
        case 0x3e0c14u: goto label_3e0c14;
        case 0x3e0c18u: goto label_3e0c18;
        case 0x3e0c1cu: goto label_3e0c1c;
        case 0x3e0c20u: goto label_3e0c20;
        case 0x3e0c24u: goto label_3e0c24;
        case 0x3e0c28u: goto label_3e0c28;
        case 0x3e0c2cu: goto label_3e0c2c;
        case 0x3e0c30u: goto label_3e0c30;
        case 0x3e0c34u: goto label_3e0c34;
        case 0x3e0c38u: goto label_3e0c38;
        case 0x3e0c3cu: goto label_3e0c3c;
        case 0x3e0c40u: goto label_3e0c40;
        case 0x3e0c44u: goto label_3e0c44;
        case 0x3e0c48u: goto label_3e0c48;
        case 0x3e0c4cu: goto label_3e0c4c;
        case 0x3e0c50u: goto label_3e0c50;
        case 0x3e0c54u: goto label_3e0c54;
        case 0x3e0c58u: goto label_3e0c58;
        case 0x3e0c5cu: goto label_3e0c5c;
        case 0x3e0c60u: goto label_3e0c60;
        case 0x3e0c64u: goto label_3e0c64;
        case 0x3e0c68u: goto label_3e0c68;
        case 0x3e0c6cu: goto label_3e0c6c;
        case 0x3e0c70u: goto label_3e0c70;
        case 0x3e0c74u: goto label_3e0c74;
        case 0x3e0c78u: goto label_3e0c78;
        case 0x3e0c7cu: goto label_3e0c7c;
        case 0x3e0c80u: goto label_3e0c80;
        case 0x3e0c84u: goto label_3e0c84;
        case 0x3e0c88u: goto label_3e0c88;
        case 0x3e0c8cu: goto label_3e0c8c;
        case 0x3e0c90u: goto label_3e0c90;
        case 0x3e0c94u: goto label_3e0c94;
        case 0x3e0c98u: goto label_3e0c98;
        case 0x3e0c9cu: goto label_3e0c9c;
        case 0x3e0ca0u: goto label_3e0ca0;
        case 0x3e0ca4u: goto label_3e0ca4;
        case 0x3e0ca8u: goto label_3e0ca8;
        case 0x3e0cacu: goto label_3e0cac;
        case 0x3e0cb0u: goto label_3e0cb0;
        case 0x3e0cb4u: goto label_3e0cb4;
        case 0x3e0cb8u: goto label_3e0cb8;
        case 0x3e0cbcu: goto label_3e0cbc;
        case 0x3e0cc0u: goto label_3e0cc0;
        case 0x3e0cc4u: goto label_3e0cc4;
        case 0x3e0cc8u: goto label_3e0cc8;
        case 0x3e0cccu: goto label_3e0ccc;
        case 0x3e0cd0u: goto label_3e0cd0;
        case 0x3e0cd4u: goto label_3e0cd4;
        case 0x3e0cd8u: goto label_3e0cd8;
        case 0x3e0cdcu: goto label_3e0cdc;
        case 0x3e0ce0u: goto label_3e0ce0;
        case 0x3e0ce4u: goto label_3e0ce4;
        case 0x3e0ce8u: goto label_3e0ce8;
        case 0x3e0cecu: goto label_3e0cec;
        case 0x3e0cf0u: goto label_3e0cf0;
        case 0x3e0cf4u: goto label_3e0cf4;
        case 0x3e0cf8u: goto label_3e0cf8;
        case 0x3e0cfcu: goto label_3e0cfc;
        case 0x3e0d00u: goto label_3e0d00;
        case 0x3e0d04u: goto label_3e0d04;
        case 0x3e0d08u: goto label_3e0d08;
        case 0x3e0d0cu: goto label_3e0d0c;
        case 0x3e0d10u: goto label_3e0d10;
        case 0x3e0d14u: goto label_3e0d14;
        case 0x3e0d18u: goto label_3e0d18;
        case 0x3e0d1cu: goto label_3e0d1c;
        case 0x3e0d20u: goto label_3e0d20;
        case 0x3e0d24u: goto label_3e0d24;
        case 0x3e0d28u: goto label_3e0d28;
        case 0x3e0d2cu: goto label_3e0d2c;
        case 0x3e0d30u: goto label_3e0d30;
        case 0x3e0d34u: goto label_3e0d34;
        case 0x3e0d38u: goto label_3e0d38;
        case 0x3e0d3cu: goto label_3e0d3c;
        case 0x3e0d40u: goto label_3e0d40;
        case 0x3e0d44u: goto label_3e0d44;
        case 0x3e0d48u: goto label_3e0d48;
        case 0x3e0d4cu: goto label_3e0d4c;
        case 0x3e0d50u: goto label_3e0d50;
        case 0x3e0d54u: goto label_3e0d54;
        case 0x3e0d58u: goto label_3e0d58;
        case 0x3e0d5cu: goto label_3e0d5c;
        case 0x3e0d60u: goto label_3e0d60;
        case 0x3e0d64u: goto label_3e0d64;
        case 0x3e0d68u: goto label_3e0d68;
        case 0x3e0d6cu: goto label_3e0d6c;
        case 0x3e0d70u: goto label_3e0d70;
        case 0x3e0d74u: goto label_3e0d74;
        case 0x3e0d78u: goto label_3e0d78;
        case 0x3e0d7cu: goto label_3e0d7c;
        case 0x3e0d80u: goto label_3e0d80;
        case 0x3e0d84u: goto label_3e0d84;
        case 0x3e0d88u: goto label_3e0d88;
        case 0x3e0d8cu: goto label_3e0d8c;
        case 0x3e0d90u: goto label_3e0d90;
        case 0x3e0d94u: goto label_3e0d94;
        case 0x3e0d98u: goto label_3e0d98;
        case 0x3e0d9cu: goto label_3e0d9c;
        case 0x3e0da0u: goto label_3e0da0;
        case 0x3e0da4u: goto label_3e0da4;
        case 0x3e0da8u: goto label_3e0da8;
        case 0x3e0dacu: goto label_3e0dac;
        case 0x3e0db0u: goto label_3e0db0;
        case 0x3e0db4u: goto label_3e0db4;
        case 0x3e0db8u: goto label_3e0db8;
        case 0x3e0dbcu: goto label_3e0dbc;
        case 0x3e0dc0u: goto label_3e0dc0;
        case 0x3e0dc4u: goto label_3e0dc4;
        case 0x3e0dc8u: goto label_3e0dc8;
        case 0x3e0dccu: goto label_3e0dcc;
        case 0x3e0dd0u: goto label_3e0dd0;
        case 0x3e0dd4u: goto label_3e0dd4;
        case 0x3e0dd8u: goto label_3e0dd8;
        case 0x3e0ddcu: goto label_3e0ddc;
        case 0x3e0de0u: goto label_3e0de0;
        case 0x3e0de4u: goto label_3e0de4;
        case 0x3e0de8u: goto label_3e0de8;
        case 0x3e0decu: goto label_3e0dec;
        case 0x3e0df0u: goto label_3e0df0;
        case 0x3e0df4u: goto label_3e0df4;
        case 0x3e0df8u: goto label_3e0df8;
        case 0x3e0dfcu: goto label_3e0dfc;
        case 0x3e0e00u: goto label_3e0e00;
        case 0x3e0e04u: goto label_3e0e04;
        case 0x3e0e08u: goto label_3e0e08;
        case 0x3e0e0cu: goto label_3e0e0c;
        case 0x3e0e10u: goto label_3e0e10;
        case 0x3e0e14u: goto label_3e0e14;
        case 0x3e0e18u: goto label_3e0e18;
        case 0x3e0e1cu: goto label_3e0e1c;
        case 0x3e0e20u: goto label_3e0e20;
        case 0x3e0e24u: goto label_3e0e24;
        case 0x3e0e28u: goto label_3e0e28;
        case 0x3e0e2cu: goto label_3e0e2c;
        case 0x3e0e30u: goto label_3e0e30;
        case 0x3e0e34u: goto label_3e0e34;
        case 0x3e0e38u: goto label_3e0e38;
        case 0x3e0e3cu: goto label_3e0e3c;
        case 0x3e0e40u: goto label_3e0e40;
        case 0x3e0e44u: goto label_3e0e44;
        case 0x3e0e48u: goto label_3e0e48;
        case 0x3e0e4cu: goto label_3e0e4c;
        case 0x3e0e50u: goto label_3e0e50;
        case 0x3e0e54u: goto label_3e0e54;
        case 0x3e0e58u: goto label_3e0e58;
        case 0x3e0e5cu: goto label_3e0e5c;
        case 0x3e0e60u: goto label_3e0e60;
        case 0x3e0e64u: goto label_3e0e64;
        case 0x3e0e68u: goto label_3e0e68;
        case 0x3e0e6cu: goto label_3e0e6c;
        case 0x3e0e70u: goto label_3e0e70;
        case 0x3e0e74u: goto label_3e0e74;
        case 0x3e0e78u: goto label_3e0e78;
        case 0x3e0e7cu: goto label_3e0e7c;
        case 0x3e0e80u: goto label_3e0e80;
        case 0x3e0e84u: goto label_3e0e84;
        case 0x3e0e88u: goto label_3e0e88;
        case 0x3e0e8cu: goto label_3e0e8c;
        case 0x3e0e90u: goto label_3e0e90;
        case 0x3e0e94u: goto label_3e0e94;
        case 0x3e0e98u: goto label_3e0e98;
        case 0x3e0e9cu: goto label_3e0e9c;
        case 0x3e0ea0u: goto label_3e0ea0;
        case 0x3e0ea4u: goto label_3e0ea4;
        case 0x3e0ea8u: goto label_3e0ea8;
        case 0x3e0eacu: goto label_3e0eac;
        case 0x3e0eb0u: goto label_3e0eb0;
        case 0x3e0eb4u: goto label_3e0eb4;
        case 0x3e0eb8u: goto label_3e0eb8;
        case 0x3e0ebcu: goto label_3e0ebc;
        case 0x3e0ec0u: goto label_3e0ec0;
        case 0x3e0ec4u: goto label_3e0ec4;
        case 0x3e0ec8u: goto label_3e0ec8;
        case 0x3e0eccu: goto label_3e0ecc;
        case 0x3e0ed0u: goto label_3e0ed0;
        case 0x3e0ed4u: goto label_3e0ed4;
        case 0x3e0ed8u: goto label_3e0ed8;
        case 0x3e0edcu: goto label_3e0edc;
        case 0x3e0ee0u: goto label_3e0ee0;
        case 0x3e0ee4u: goto label_3e0ee4;
        case 0x3e0ee8u: goto label_3e0ee8;
        case 0x3e0eecu: goto label_3e0eec;
        case 0x3e0ef0u: goto label_3e0ef0;
        case 0x3e0ef4u: goto label_3e0ef4;
        case 0x3e0ef8u: goto label_3e0ef8;
        case 0x3e0efcu: goto label_3e0efc;
        case 0x3e0f00u: goto label_3e0f00;
        case 0x3e0f04u: goto label_3e0f04;
        case 0x3e0f08u: goto label_3e0f08;
        case 0x3e0f0cu: goto label_3e0f0c;
        case 0x3e0f10u: goto label_3e0f10;
        case 0x3e0f14u: goto label_3e0f14;
        case 0x3e0f18u: goto label_3e0f18;
        case 0x3e0f1cu: goto label_3e0f1c;
        case 0x3e0f20u: goto label_3e0f20;
        case 0x3e0f24u: goto label_3e0f24;
        case 0x3e0f28u: goto label_3e0f28;
        case 0x3e0f2cu: goto label_3e0f2c;
        case 0x3e0f30u: goto label_3e0f30;
        case 0x3e0f34u: goto label_3e0f34;
        case 0x3e0f38u: goto label_3e0f38;
        case 0x3e0f3cu: goto label_3e0f3c;
        case 0x3e0f40u: goto label_3e0f40;
        case 0x3e0f44u: goto label_3e0f44;
        case 0x3e0f48u: goto label_3e0f48;
        case 0x3e0f4cu: goto label_3e0f4c;
        case 0x3e0f50u: goto label_3e0f50;
        case 0x3e0f54u: goto label_3e0f54;
        case 0x3e0f58u: goto label_3e0f58;
        case 0x3e0f5cu: goto label_3e0f5c;
        case 0x3e0f60u: goto label_3e0f60;
        case 0x3e0f64u: goto label_3e0f64;
        case 0x3e0f68u: goto label_3e0f68;
        case 0x3e0f6cu: goto label_3e0f6c;
        case 0x3e0f70u: goto label_3e0f70;
        case 0x3e0f74u: goto label_3e0f74;
        case 0x3e0f78u: goto label_3e0f78;
        case 0x3e0f7cu: goto label_3e0f7c;
        case 0x3e0f80u: goto label_3e0f80;
        case 0x3e0f84u: goto label_3e0f84;
        case 0x3e0f88u: goto label_3e0f88;
        case 0x3e0f8cu: goto label_3e0f8c;
        case 0x3e0f90u: goto label_3e0f90;
        case 0x3e0f94u: goto label_3e0f94;
        case 0x3e0f98u: goto label_3e0f98;
        case 0x3e0f9cu: goto label_3e0f9c;
        case 0x3e0fa0u: goto label_3e0fa0;
        case 0x3e0fa4u: goto label_3e0fa4;
        case 0x3e0fa8u: goto label_3e0fa8;
        case 0x3e0facu: goto label_3e0fac;
        case 0x3e0fb0u: goto label_3e0fb0;
        case 0x3e0fb4u: goto label_3e0fb4;
        case 0x3e0fb8u: goto label_3e0fb8;
        case 0x3e0fbcu: goto label_3e0fbc;
        case 0x3e0fc0u: goto label_3e0fc0;
        case 0x3e0fc4u: goto label_3e0fc4;
        case 0x3e0fc8u: goto label_3e0fc8;
        case 0x3e0fccu: goto label_3e0fcc;
        case 0x3e0fd0u: goto label_3e0fd0;
        case 0x3e0fd4u: goto label_3e0fd4;
        case 0x3e0fd8u: goto label_3e0fd8;
        case 0x3e0fdcu: goto label_3e0fdc;
        case 0x3e0fe0u: goto label_3e0fe0;
        case 0x3e0fe4u: goto label_3e0fe4;
        case 0x3e0fe8u: goto label_3e0fe8;
        case 0x3e0fecu: goto label_3e0fec;
        case 0x3e0ff0u: goto label_3e0ff0;
        case 0x3e0ff4u: goto label_3e0ff4;
        case 0x3e0ff8u: goto label_3e0ff8;
        case 0x3e0ffcu: goto label_3e0ffc;
        case 0x3e1000u: goto label_3e1000;
        case 0x3e1004u: goto label_3e1004;
        case 0x3e1008u: goto label_3e1008;
        case 0x3e100cu: goto label_3e100c;
        case 0x3e1010u: goto label_3e1010;
        case 0x3e1014u: goto label_3e1014;
        case 0x3e1018u: goto label_3e1018;
        case 0x3e101cu: goto label_3e101c;
        case 0x3e1020u: goto label_3e1020;
        case 0x3e1024u: goto label_3e1024;
        case 0x3e1028u: goto label_3e1028;
        case 0x3e102cu: goto label_3e102c;
        case 0x3e1030u: goto label_3e1030;
        case 0x3e1034u: goto label_3e1034;
        case 0x3e1038u: goto label_3e1038;
        case 0x3e103cu: goto label_3e103c;
        case 0x3e1040u: goto label_3e1040;
        case 0x3e1044u: goto label_3e1044;
        case 0x3e1048u: goto label_3e1048;
        case 0x3e104cu: goto label_3e104c;
        case 0x3e1050u: goto label_3e1050;
        case 0x3e1054u: goto label_3e1054;
        case 0x3e1058u: goto label_3e1058;
        case 0x3e105cu: goto label_3e105c;
        case 0x3e1060u: goto label_3e1060;
        case 0x3e1064u: goto label_3e1064;
        case 0x3e1068u: goto label_3e1068;
        case 0x3e106cu: goto label_3e106c;
        case 0x3e1070u: goto label_3e1070;
        case 0x3e1074u: goto label_3e1074;
        case 0x3e1078u: goto label_3e1078;
        case 0x3e107cu: goto label_3e107c;
        case 0x3e1080u: goto label_3e1080;
        case 0x3e1084u: goto label_3e1084;
        case 0x3e1088u: goto label_3e1088;
        case 0x3e108cu: goto label_3e108c;
        case 0x3e1090u: goto label_3e1090;
        case 0x3e1094u: goto label_3e1094;
        case 0x3e1098u: goto label_3e1098;
        case 0x3e109cu: goto label_3e109c;
        case 0x3e10a0u: goto label_3e10a0;
        case 0x3e10a4u: goto label_3e10a4;
        case 0x3e10a8u: goto label_3e10a8;
        case 0x3e10acu: goto label_3e10ac;
        case 0x3e10b0u: goto label_3e10b0;
        case 0x3e10b4u: goto label_3e10b4;
        case 0x3e10b8u: goto label_3e10b8;
        case 0x3e10bcu: goto label_3e10bc;
        case 0x3e10c0u: goto label_3e10c0;
        case 0x3e10c4u: goto label_3e10c4;
        case 0x3e10c8u: goto label_3e10c8;
        case 0x3e10ccu: goto label_3e10cc;
        case 0x3e10d0u: goto label_3e10d0;
        case 0x3e10d4u: goto label_3e10d4;
        case 0x3e10d8u: goto label_3e10d8;
        case 0x3e10dcu: goto label_3e10dc;
        case 0x3e10e0u: goto label_3e10e0;
        case 0x3e10e4u: goto label_3e10e4;
        case 0x3e10e8u: goto label_3e10e8;
        case 0x3e10ecu: goto label_3e10ec;
        case 0x3e10f0u: goto label_3e10f0;
        case 0x3e10f4u: goto label_3e10f4;
        case 0x3e10f8u: goto label_3e10f8;
        case 0x3e10fcu: goto label_3e10fc;
        case 0x3e1100u: goto label_3e1100;
        case 0x3e1104u: goto label_3e1104;
        case 0x3e1108u: goto label_3e1108;
        case 0x3e110cu: goto label_3e110c;
        case 0x3e1110u: goto label_3e1110;
        case 0x3e1114u: goto label_3e1114;
        case 0x3e1118u: goto label_3e1118;
        case 0x3e111cu: goto label_3e111c;
        case 0x3e1120u: goto label_3e1120;
        case 0x3e1124u: goto label_3e1124;
        case 0x3e1128u: goto label_3e1128;
        case 0x3e112cu: goto label_3e112c;
        case 0x3e1130u: goto label_3e1130;
        case 0x3e1134u: goto label_3e1134;
        case 0x3e1138u: goto label_3e1138;
        case 0x3e113cu: goto label_3e113c;
        case 0x3e1140u: goto label_3e1140;
        case 0x3e1144u: goto label_3e1144;
        case 0x3e1148u: goto label_3e1148;
        case 0x3e114cu: goto label_3e114c;
        case 0x3e1150u: goto label_3e1150;
        case 0x3e1154u: goto label_3e1154;
        case 0x3e1158u: goto label_3e1158;
        case 0x3e115cu: goto label_3e115c;
        case 0x3e1160u: goto label_3e1160;
        case 0x3e1164u: goto label_3e1164;
        case 0x3e1168u: goto label_3e1168;
        case 0x3e116cu: goto label_3e116c;
        case 0x3e1170u: goto label_3e1170;
        case 0x3e1174u: goto label_3e1174;
        case 0x3e1178u: goto label_3e1178;
        case 0x3e117cu: goto label_3e117c;
        case 0x3e1180u: goto label_3e1180;
        case 0x3e1184u: goto label_3e1184;
        case 0x3e1188u: goto label_3e1188;
        case 0x3e118cu: goto label_3e118c;
        case 0x3e1190u: goto label_3e1190;
        case 0x3e1194u: goto label_3e1194;
        case 0x3e1198u: goto label_3e1198;
        case 0x3e119cu: goto label_3e119c;
        case 0x3e11a0u: goto label_3e11a0;
        case 0x3e11a4u: goto label_3e11a4;
        case 0x3e11a8u: goto label_3e11a8;
        case 0x3e11acu: goto label_3e11ac;
        case 0x3e11b0u: goto label_3e11b0;
        case 0x3e11b4u: goto label_3e11b4;
        case 0x3e11b8u: goto label_3e11b8;
        case 0x3e11bcu: goto label_3e11bc;
        case 0x3e11c0u: goto label_3e11c0;
        case 0x3e11c4u: goto label_3e11c4;
        case 0x3e11c8u: goto label_3e11c8;
        case 0x3e11ccu: goto label_3e11cc;
        case 0x3e11d0u: goto label_3e11d0;
        case 0x3e11d4u: goto label_3e11d4;
        case 0x3e11d8u: goto label_3e11d8;
        case 0x3e11dcu: goto label_3e11dc;
        case 0x3e11e0u: goto label_3e11e0;
        case 0x3e11e4u: goto label_3e11e4;
        case 0x3e11e8u: goto label_3e11e8;
        case 0x3e11ecu: goto label_3e11ec;
        case 0x3e11f0u: goto label_3e11f0;
        case 0x3e11f4u: goto label_3e11f4;
        case 0x3e11f8u: goto label_3e11f8;
        case 0x3e11fcu: goto label_3e11fc;
        case 0x3e1200u: goto label_3e1200;
        case 0x3e1204u: goto label_3e1204;
        case 0x3e1208u: goto label_3e1208;
        case 0x3e120cu: goto label_3e120c;
        case 0x3e1210u: goto label_3e1210;
        case 0x3e1214u: goto label_3e1214;
        case 0x3e1218u: goto label_3e1218;
        case 0x3e121cu: goto label_3e121c;
        case 0x3e1220u: goto label_3e1220;
        case 0x3e1224u: goto label_3e1224;
        case 0x3e1228u: goto label_3e1228;
        case 0x3e122cu: goto label_3e122c;
        case 0x3e1230u: goto label_3e1230;
        case 0x3e1234u: goto label_3e1234;
        case 0x3e1238u: goto label_3e1238;
        case 0x3e123cu: goto label_3e123c;
        case 0x3e1240u: goto label_3e1240;
        case 0x3e1244u: goto label_3e1244;
        case 0x3e1248u: goto label_3e1248;
        case 0x3e124cu: goto label_3e124c;
        case 0x3e1250u: goto label_3e1250;
        case 0x3e1254u: goto label_3e1254;
        case 0x3e1258u: goto label_3e1258;
        case 0x3e125cu: goto label_3e125c;
        case 0x3e1260u: goto label_3e1260;
        case 0x3e1264u: goto label_3e1264;
        case 0x3e1268u: goto label_3e1268;
        case 0x3e126cu: goto label_3e126c;
        case 0x3e1270u: goto label_3e1270;
        case 0x3e1274u: goto label_3e1274;
        case 0x3e1278u: goto label_3e1278;
        case 0x3e127cu: goto label_3e127c;
        case 0x3e1280u: goto label_3e1280;
        case 0x3e1284u: goto label_3e1284;
        case 0x3e1288u: goto label_3e1288;
        case 0x3e128cu: goto label_3e128c;
        case 0x3e1290u: goto label_3e1290;
        case 0x3e1294u: goto label_3e1294;
        case 0x3e1298u: goto label_3e1298;
        case 0x3e129cu: goto label_3e129c;
        case 0x3e12a0u: goto label_3e12a0;
        case 0x3e12a4u: goto label_3e12a4;
        case 0x3e12a8u: goto label_3e12a8;
        case 0x3e12acu: goto label_3e12ac;
        case 0x3e12b0u: goto label_3e12b0;
        case 0x3e12b4u: goto label_3e12b4;
        case 0x3e12b8u: goto label_3e12b8;
        case 0x3e12bcu: goto label_3e12bc;
        case 0x3e12c0u: goto label_3e12c0;
        case 0x3e12c4u: goto label_3e12c4;
        case 0x3e12c8u: goto label_3e12c8;
        case 0x3e12ccu: goto label_3e12cc;
        case 0x3e12d0u: goto label_3e12d0;
        case 0x3e12d4u: goto label_3e12d4;
        case 0x3e12d8u: goto label_3e12d8;
        case 0x3e12dcu: goto label_3e12dc;
        case 0x3e12e0u: goto label_3e12e0;
        case 0x3e12e4u: goto label_3e12e4;
        case 0x3e12e8u: goto label_3e12e8;
        case 0x3e12ecu: goto label_3e12ec;
        case 0x3e12f0u: goto label_3e12f0;
        case 0x3e12f4u: goto label_3e12f4;
        case 0x3e12f8u: goto label_3e12f8;
        case 0x3e12fcu: goto label_3e12fc;
        case 0x3e1300u: goto label_3e1300;
        case 0x3e1304u: goto label_3e1304;
        case 0x3e1308u: goto label_3e1308;
        case 0x3e130cu: goto label_3e130c;
        case 0x3e1310u: goto label_3e1310;
        case 0x3e1314u: goto label_3e1314;
        case 0x3e1318u: goto label_3e1318;
        case 0x3e131cu: goto label_3e131c;
        case 0x3e1320u: goto label_3e1320;
        case 0x3e1324u: goto label_3e1324;
        case 0x3e1328u: goto label_3e1328;
        case 0x3e132cu: goto label_3e132c;
        case 0x3e1330u: goto label_3e1330;
        case 0x3e1334u: goto label_3e1334;
        case 0x3e1338u: goto label_3e1338;
        case 0x3e133cu: goto label_3e133c;
        case 0x3e1340u: goto label_3e1340;
        case 0x3e1344u: goto label_3e1344;
        case 0x3e1348u: goto label_3e1348;
        case 0x3e134cu: goto label_3e134c;
        case 0x3e1350u: goto label_3e1350;
        case 0x3e1354u: goto label_3e1354;
        case 0x3e1358u: goto label_3e1358;
        case 0x3e135cu: goto label_3e135c;
        case 0x3e1360u: goto label_3e1360;
        case 0x3e1364u: goto label_3e1364;
        case 0x3e1368u: goto label_3e1368;
        case 0x3e136cu: goto label_3e136c;
        case 0x3e1370u: goto label_3e1370;
        case 0x3e1374u: goto label_3e1374;
        case 0x3e1378u: goto label_3e1378;
        case 0x3e137cu: goto label_3e137c;
        case 0x3e1380u: goto label_3e1380;
        case 0x3e1384u: goto label_3e1384;
        case 0x3e1388u: goto label_3e1388;
        case 0x3e138cu: goto label_3e138c;
        case 0x3e1390u: goto label_3e1390;
        case 0x3e1394u: goto label_3e1394;
        case 0x3e1398u: goto label_3e1398;
        case 0x3e139cu: goto label_3e139c;
        case 0x3e13a0u: goto label_3e13a0;
        case 0x3e13a4u: goto label_3e13a4;
        case 0x3e13a8u: goto label_3e13a8;
        case 0x3e13acu: goto label_3e13ac;
        case 0x3e13b0u: goto label_3e13b0;
        case 0x3e13b4u: goto label_3e13b4;
        case 0x3e13b8u: goto label_3e13b8;
        case 0x3e13bcu: goto label_3e13bc;
        case 0x3e13c0u: goto label_3e13c0;
        case 0x3e13c4u: goto label_3e13c4;
        case 0x3e13c8u: goto label_3e13c8;
        case 0x3e13ccu: goto label_3e13cc;
        case 0x3e13d0u: goto label_3e13d0;
        case 0x3e13d4u: goto label_3e13d4;
        case 0x3e13d8u: goto label_3e13d8;
        case 0x3e13dcu: goto label_3e13dc;
        case 0x3e13e0u: goto label_3e13e0;
        case 0x3e13e4u: goto label_3e13e4;
        case 0x3e13e8u: goto label_3e13e8;
        case 0x3e13ecu: goto label_3e13ec;
        case 0x3e13f0u: goto label_3e13f0;
        case 0x3e13f4u: goto label_3e13f4;
        case 0x3e13f8u: goto label_3e13f8;
        case 0x3e13fcu: goto label_3e13fc;
        case 0x3e1400u: goto label_3e1400;
        case 0x3e1404u: goto label_3e1404;
        case 0x3e1408u: goto label_3e1408;
        case 0x3e140cu: goto label_3e140c;
        case 0x3e1410u: goto label_3e1410;
        case 0x3e1414u: goto label_3e1414;
        case 0x3e1418u: goto label_3e1418;
        case 0x3e141cu: goto label_3e141c;
        case 0x3e1420u: goto label_3e1420;
        case 0x3e1424u: goto label_3e1424;
        case 0x3e1428u: goto label_3e1428;
        case 0x3e142cu: goto label_3e142c;
        case 0x3e1430u: goto label_3e1430;
        case 0x3e1434u: goto label_3e1434;
        case 0x3e1438u: goto label_3e1438;
        case 0x3e143cu: goto label_3e143c;
        case 0x3e1440u: goto label_3e1440;
        case 0x3e1444u: goto label_3e1444;
        case 0x3e1448u: goto label_3e1448;
        case 0x3e144cu: goto label_3e144c;
        case 0x3e1450u: goto label_3e1450;
        case 0x3e1454u: goto label_3e1454;
        case 0x3e1458u: goto label_3e1458;
        case 0x3e145cu: goto label_3e145c;
        case 0x3e1460u: goto label_3e1460;
        case 0x3e1464u: goto label_3e1464;
        case 0x3e1468u: goto label_3e1468;
        case 0x3e146cu: goto label_3e146c;
        case 0x3e1470u: goto label_3e1470;
        case 0x3e1474u: goto label_3e1474;
        case 0x3e1478u: goto label_3e1478;
        case 0x3e147cu: goto label_3e147c;
        case 0x3e1480u: goto label_3e1480;
        case 0x3e1484u: goto label_3e1484;
        case 0x3e1488u: goto label_3e1488;
        case 0x3e148cu: goto label_3e148c;
        case 0x3e1490u: goto label_3e1490;
        case 0x3e1494u: goto label_3e1494;
        case 0x3e1498u: goto label_3e1498;
        case 0x3e149cu: goto label_3e149c;
        case 0x3e14a0u: goto label_3e14a0;
        case 0x3e14a4u: goto label_3e14a4;
        case 0x3e14a8u: goto label_3e14a8;
        case 0x3e14acu: goto label_3e14ac;
        case 0x3e14b0u: goto label_3e14b0;
        case 0x3e14b4u: goto label_3e14b4;
        case 0x3e14b8u: goto label_3e14b8;
        case 0x3e14bcu: goto label_3e14bc;
        case 0x3e14c0u: goto label_3e14c0;
        case 0x3e14c4u: goto label_3e14c4;
        case 0x3e14c8u: goto label_3e14c8;
        case 0x3e14ccu: goto label_3e14cc;
        case 0x3e14d0u: goto label_3e14d0;
        case 0x3e14d4u: goto label_3e14d4;
        case 0x3e14d8u: goto label_3e14d8;
        case 0x3e14dcu: goto label_3e14dc;
        case 0x3e14e0u: goto label_3e14e0;
        case 0x3e14e4u: goto label_3e14e4;
        case 0x3e14e8u: goto label_3e14e8;
        case 0x3e14ecu: goto label_3e14ec;
        default: break;
    }

    ctx->pc = 0x3e06a0u;

label_3e06a0:
    // 0x3e06a0: 0x3e00008  jr          $ra
label_3e06a4:
    if (ctx->pc == 0x3E06A4u) {
        ctx->pc = 0x3E06A4u;
            // 0x3e06a4: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->pc = 0x3E06A8u;
        goto label_3e06a8;
    }
    ctx->pc = 0x3E06A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E06A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E06A0u;
            // 0x3e06a4: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E06A8u;
label_3e06a8:
    // 0x3e06a8: 0x0  nop
    ctx->pc = 0x3e06a8u;
    // NOP
label_3e06ac:
    // 0x3e06ac: 0x0  nop
    ctx->pc = 0x3e06acu;
    // NOP
label_3e06b0:
    // 0x3e06b0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x3e06b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_3e06b4:
    // 0x3e06b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3e06b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e06b8:
    // 0x3e06b8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3e06b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3e06bc:
    // 0x3e06bc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3e06bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3e06c0:
    // 0x3e06c0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3e06c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3e06c4:
    // 0x3e06c4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3e06c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3e06c8:
    // 0x3e06c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3e06c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3e06cc:
    // 0x3e06cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3e06ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3e06d0:
    // 0x3e06d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e06d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3e06d4:
    // 0x3e06d4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3e06d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3e06d8:
    // 0x3e06d8: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3e06d8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3e06dc:
    // 0x3e06dc: 0x10a3002a  beq         $a1, $v1, . + 4 + (0x2A << 2)
label_3e06e0:
    if (ctx->pc == 0x3E06E0u) {
        ctx->pc = 0x3E06E0u;
            // 0x3e06e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E06E4u;
        goto label_3e06e4;
    }
    ctx->pc = 0x3E06DCu;
    {
        const bool branch_taken_0x3e06dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E06E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E06DCu;
            // 0x3e06e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e06dc) {
            ctx->pc = 0x3E0788u;
            goto label_3e0788;
        }
    }
    ctx->pc = 0x3E06E4u;
label_3e06e4:
    // 0x3e06e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e06e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e06e8:
    // 0x3e06e8: 0x50a30024  beql        $a1, $v1, . + 4 + (0x24 << 2)
label_3e06ec:
    if (ctx->pc == 0x3E06ECu) {
        ctx->pc = 0x3E06ECu;
            // 0x3e06ec: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3E06F0u;
        goto label_3e06f0;
    }
    ctx->pc = 0x3E06E8u;
    {
        const bool branch_taken_0x3e06e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e06e8) {
            ctx->pc = 0x3E06ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E06E8u;
            // 0x3e06ec: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E077Cu;
            goto label_3e077c;
        }
    }
    ctx->pc = 0x3E06F0u;
label_3e06f0:
    // 0x3e06f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e06f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e06f4:
    // 0x3e06f4: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_3e06f8:
    if (ctx->pc == 0x3E06F8u) {
        ctx->pc = 0x3E06FCu;
        goto label_3e06fc;
    }
    ctx->pc = 0x3E06F4u;
    {
        const bool branch_taken_0x3e06f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e06f4) {
            ctx->pc = 0x3E0704u;
            goto label_3e0704;
        }
    }
    ctx->pc = 0x3E06FCu;
label_3e06fc:
    // 0x3e06fc: 0x10000370  b           . + 4 + (0x370 << 2)
label_3e0700:
    if (ctx->pc == 0x3E0700u) {
        ctx->pc = 0x3E0700u;
            // 0x3e0700: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x3E0704u;
        goto label_3e0704;
    }
    ctx->pc = 0x3E06FCu;
    {
        const bool branch_taken_0x3e06fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E06FCu;
            // 0x3e0700: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e06fc) {
            ctx->pc = 0x3E14C0u;
            goto label_3e14c0;
        }
    }
    ctx->pc = 0x3E0704u;
label_3e0704:
    // 0x3e0704: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e0704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e0708:
    // 0x3e0708: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x3e0708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_3e070c:
    // 0x3e070c: 0x8c51e418  lw          $s1, -0x1BE8($v0)
    ctx->pc = 0x3e070cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960152)));
label_3e0710:
    // 0x3e0710: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3e0710u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3e0714:
    // 0x3e0714: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3e0714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3e0718:
    // 0x3e0718: 0x26040210  addiu       $a0, $s0, 0x210
    ctx->pc = 0x3e0718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
label_3e071c:
    // 0x3e071c: 0xc04cb1c  jal         func_132C70
label_3e0720:
    if (ctx->pc == 0x3E0720u) {
        ctx->pc = 0x3E0720u;
            // 0x3e0720: 0x24450234  addiu       $a1, $v0, 0x234 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 564));
        ctx->pc = 0x3E0724u;
        goto label_3e0724;
    }
    ctx->pc = 0x3E071Cu;
    SET_GPR_U32(ctx, 31, 0x3E0724u);
    ctx->pc = 0x3E0720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E071Cu;
            // 0x3e0720: 0x24450234  addiu       $a1, $v0, 0x234 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 564));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0724u; }
        if (ctx->pc != 0x3E0724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0724u; }
        if (ctx->pc != 0x3E0724u) { return; }
    }
    ctx->pc = 0x3E0724u;
label_3e0724:
    // 0x3e0724: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3e0724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3e0728:
    // 0x3e0728: 0x26040230  addiu       $a0, $s0, 0x230
    ctx->pc = 0x3e0728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
label_3e072c:
    // 0x3e072c: 0xc04cb1c  jal         func_132C70
label_3e0730:
    if (ctx->pc == 0x3E0730u) {
        ctx->pc = 0x3E0730u;
            // 0x3e0730: 0x24450240  addiu       $a1, $v0, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
        ctx->pc = 0x3E0734u;
        goto label_3e0734;
    }
    ctx->pc = 0x3E072Cu;
    SET_GPR_U32(ctx, 31, 0x3E0734u);
    ctx->pc = 0x3E0730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E072Cu;
            // 0x3e0730: 0x24450240  addiu       $a1, $v0, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0734u; }
        if (ctx->pc != 0x3E0734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0734u; }
        if (ctx->pc != 0x3E0734u) { return; }
    }
    ctx->pc = 0x3E0734u;
label_3e0734:
    // 0x3e0734: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3e0734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3e0738:
    // 0x3e0738: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x3e0738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
label_3e073c:
    // 0x3e073c: 0xc04cb1c  jal         func_132C70
label_3e0740:
    if (ctx->pc == 0x3E0740u) {
        ctx->pc = 0x3E0740u;
            // 0x3e0740: 0x2445025c  addiu       $a1, $v0, 0x25C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 604));
        ctx->pc = 0x3E0744u;
        goto label_3e0744;
    }
    ctx->pc = 0x3E073Cu;
    SET_GPR_U32(ctx, 31, 0x3E0744u);
    ctx->pc = 0x3E0740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E073Cu;
            // 0x3e0740: 0x2445025c  addiu       $a1, $v0, 0x25C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 604));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0744u; }
        if (ctx->pc != 0x3E0744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0744u; }
        if (ctx->pc != 0x3E0744u) { return; }
    }
    ctx->pc = 0x3E0744u;
label_3e0744:
    // 0x3e0744: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3e0744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3e0748:
    // 0x3e0748: 0x26040220  addiu       $a0, $s0, 0x220
    ctx->pc = 0x3e0748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
label_3e074c:
    // 0x3e074c: 0xc04cb1c  jal         func_132C70
label_3e0750:
    if (ctx->pc == 0x3E0750u) {
        ctx->pc = 0x3E0750u;
            // 0x3e0750: 0x244501b0  addiu       $a1, $v0, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
        ctx->pc = 0x3E0754u;
        goto label_3e0754;
    }
    ctx->pc = 0x3E074Cu;
    SET_GPR_U32(ctx, 31, 0x3E0754u);
    ctx->pc = 0x3E0750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E074Cu;
            // 0x3e0750: 0x244501b0  addiu       $a1, $v0, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0754u; }
        if (ctx->pc != 0x3E0754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0754u; }
        if (ctx->pc != 0x3E0754u) { return; }
    }
    ctx->pc = 0x3E0754u;
label_3e0754:
    // 0x3e0754: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3e0754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3e0758:
    // 0x3e0758: 0x26040240  addiu       $a0, $s0, 0x240
    ctx->pc = 0x3e0758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
label_3e075c:
    // 0x3e075c: 0xc04cb1c  jal         func_132C70
label_3e0760:
    if (ctx->pc == 0x3E0760u) {
        ctx->pc = 0x3E0760u;
            // 0x3e0760: 0x244501bc  addiu       $a1, $v0, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
        ctx->pc = 0x3E0764u;
        goto label_3e0764;
    }
    ctx->pc = 0x3E075Cu;
    SET_GPR_U32(ctx, 31, 0x3E0764u);
    ctx->pc = 0x3E0760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E075Cu;
            // 0x3e0760: 0x244501bc  addiu       $a1, $v0, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0764u; }
        if (ctx->pc != 0x3E0764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0764u; }
        if (ctx->pc != 0x3E0764u) { return; }
    }
    ctx->pc = 0x3E0764u;
label_3e0764:
    // 0x3e0764: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3e0764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3e0768:
    // 0x3e0768: 0x26040260  addiu       $a0, $s0, 0x260
    ctx->pc = 0x3e0768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
label_3e076c:
    // 0x3e076c: 0xc04cb1c  jal         func_132C70
label_3e0770:
    if (ctx->pc == 0x3E0770u) {
        ctx->pc = 0x3E0770u;
            // 0x3e0770: 0x244501d8  addiu       $a1, $v0, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 472));
        ctx->pc = 0x3E0774u;
        goto label_3e0774;
    }
    ctx->pc = 0x3E076Cu;
    SET_GPR_U32(ctx, 31, 0x3E0774u);
    ctx->pc = 0x3E0770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E076Cu;
            // 0x3e0770: 0x244501d8  addiu       $a1, $v0, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0774u; }
        if (ctx->pc != 0x3E0774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0774u; }
        if (ctx->pc != 0x3E0774u) { return; }
    }
    ctx->pc = 0x3E0774u;
label_3e0774:
    // 0x3e0774: 0x10000351  b           . + 4 + (0x351 << 2)
label_3e0778:
    if (ctx->pc == 0x3E0778u) {
        ctx->pc = 0x3E077Cu;
        goto label_3e077c;
    }
    ctx->pc = 0x3E0774u;
    {
        const bool branch_taken_0x3e0774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0774) {
            ctx->pc = 0x3E14BCu;
            goto label_3e14bc;
        }
    }
    ctx->pc = 0x3E077Cu;
label_3e077c:
    // 0x3e077c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3e077cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3e0780:
    // 0x3e0780: 0x320f809  jalr        $t9
label_3e0784:
    if (ctx->pc == 0x3E0784u) {
        ctx->pc = 0x3E0788u;
        goto label_3e0788;
    }
    ctx->pc = 0x3E0780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E0788u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E0788u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E0788u; }
            if (ctx->pc != 0x3E0788u) { return; }
        }
        }
    }
    ctx->pc = 0x3E0788u;
label_3e0788:
    // 0x3e0788: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e0788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e078c:
    // 0x3e078c: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x3e078cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_3e0790:
    // 0x3e0790: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x3e0790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3e0794:
    // 0x3e0794: 0xc60000b8  lwc1        $f0, 0xB8($s0)
    ctx->pc = 0x3e0794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e0798:
    // 0x3e0798: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x3e0798u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3e079c:
    // 0x3e079c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3e079cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3e07a0:
    // 0x3e07a0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3e07a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3e07a4:
    // 0x3e07a4: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x3e07a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e07a8:
    // 0x3e07a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3e07a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3e07ac:
    // 0x3e07ac: 0xe60000b8  swc1        $f0, 0xB8($s0)
    ctx->pc = 0x3e07acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
label_3e07b0:
    // 0x3e07b0: 0x8c830cb4  lw          $v1, 0xCB4($a0)
    ctx->pc = 0x3e07b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3252)));
label_3e07b4:
    // 0x3e07b4: 0x8c820cb8  lw          $v0, 0xCB8($a0)
    ctx->pc = 0x3e07b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3256)));
label_3e07b8:
    // 0x3e07b8: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_3e07bc:
    if (ctx->pc == 0x3E07BCu) {
        ctx->pc = 0x3E07BCu;
            // 0x3e07bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E07C0u;
        goto label_3e07c0;
    }
    ctx->pc = 0x3E07B8u;
    {
        const bool branch_taken_0x3e07b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e07b8) {
            ctx->pc = 0x3E07BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E07B8u;
            // 0x3e07bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E07C0u;
            goto label_3e07c0;
        }
    }
    ctx->pc = 0x3E07C0u;
label_3e07c0:
    // 0x3e07c0: 0x38620005  xori        $v0, $v1, 0x5
    ctx->pc = 0x3e07c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
label_3e07c4:
    // 0x3e07c4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3e07c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3e07c8:
    // 0x3e07c8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3e07cc:
    if (ctx->pc == 0x3E07CCu) {
        ctx->pc = 0x3E07CCu;
            // 0x3e07cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3E07D0u;
        goto label_3e07d0;
    }
    ctx->pc = 0x3E07C8u;
    {
        const bool branch_taken_0x3e07c8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3e07c8) {
            ctx->pc = 0x3E07CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E07C8u;
            // 0x3e07cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E07DCu;
            goto label_3e07dc;
        }
    }
    ctx->pc = 0x3E07D0u;
label_3e07d0:
    // 0x3e07d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e07d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e07d4:
    // 0x3e07d4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3e07d8:
    if (ctx->pc == 0x3E07D8u) {
        ctx->pc = 0x3E07D8u;
            // 0x3e07d8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3E07DCu;
        goto label_3e07dc;
    }
    ctx->pc = 0x3E07D4u;
    {
        const bool branch_taken_0x3e07d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E07D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E07D4u;
            // 0x3e07d8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e07d4) {
            ctx->pc = 0x3E07F4u;
            goto label_3e07f4;
        }
    }
    ctx->pc = 0x3E07DCu;
label_3e07dc:
    // 0x3e07dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3e07dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3e07e0:
    // 0x3e07e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3e07e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3e07e4:
    // 0x3e07e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e07e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e07e8:
    // 0x3e07e8: 0x0  nop
    ctx->pc = 0x3e07e8u;
    // NOP
label_3e07ec:
    // 0x3e07ec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3e07ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3e07f0:
    // 0x3e07f0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3e07f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3e07f4:
    // 0x3e07f4: 0xc60000b8  lwc1        $f0, 0xB8($s0)
    ctx->pc = 0x3e07f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e07f8:
    // 0x3e07f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3e07f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3e07fc:
    // 0x3e07fc: 0xe60000b8  swc1        $f0, 0xB8($s0)
    ctx->pc = 0x3e07fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
label_3e0800:
    // 0x3e0800: 0x928202da  lbu         $v0, 0x2DA($s4)
    ctx->pc = 0x3e0800u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 730)));
label_3e0804:
    // 0x3e0804: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3e0808:
    if (ctx->pc == 0x3E0808u) {
        ctx->pc = 0x3E080Cu;
        goto label_3e080c;
    }
    ctx->pc = 0x3E0804u;
    {
        const bool branch_taken_0x3e0804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0804) {
            ctx->pc = 0x3E0824u;
            goto label_3e0824;
        }
    }
    ctx->pc = 0x3E080Cu;
label_3e080c:
    // 0x3e080c: 0x8e8202d4  lw          $v0, 0x2D4($s4)
    ctx->pc = 0x3e080cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 724)));
label_3e0810:
    // 0x3e0810: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e0810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e0814:
    // 0x3e0814: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3e0814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3e0818:
    // 0x3e0818: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x3e0818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_3e081c:
    // 0x3e081c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3e081cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e0820:
    // 0x3e0820: 0xe6800288  swc1        $f0, 0x288($s4)
    ctx->pc = 0x3e0820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 648), bits); }
label_3e0824:
    // 0x3e0824: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3e0824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_3e0828:
    // 0x3e0828: 0xa28002da  sb          $zero, 0x2DA($s4)
    ctx->pc = 0x3e0828u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 730), (uint8_t)GPR_U32(ctx, 0));
label_3e082c:
    // 0x3e082c: 0xc0b6e44  jal         func_2DB910
label_3e0830:
    if (ctx->pc == 0x3E0830u) {
        ctx->pc = 0x3E0830u;
            // 0x3e0830: 0x24849fe0  addiu       $a0, $a0, -0x6020 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942688));
        ctx->pc = 0x3E0834u;
        goto label_3e0834;
    }
    ctx->pc = 0x3E082Cu;
    SET_GPR_U32(ctx, 31, 0x3E0834u);
    ctx->pc = 0x3E0830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E082Cu;
            // 0x3e0830: 0x24849fe0  addiu       $a0, $a0, -0x6020 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB910u;
    if (runtime->hasFunction(0x2DB910u)) {
        auto targetFn = runtime->lookupFunction(0x2DB910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0834u; }
        if (ctx->pc != 0x3E0834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB910_0x2db910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0834u; }
        if (ctx->pc != 0x3E0834u) { return; }
    }
    ctx->pc = 0x3E0834u;
label_3e0834:
    // 0x3e0834: 0xc0775b8  jal         func_1DD6E0
label_3e0838:
    if (ctx->pc == 0x3E0838u) {
        ctx->pc = 0x3E083Cu;
        goto label_3e083c;
    }
    ctx->pc = 0x3E0834u;
    SET_GPR_U32(ctx, 31, 0x3E083Cu);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E083Cu; }
        if (ctx->pc != 0x3E083Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E083Cu; }
        if (ctx->pc != 0x3E083Cu) { return; }
    }
    ctx->pc = 0x3E083Cu;
label_3e083c:
    // 0x3e083c: 0xc0775b4  jal         func_1DD6D0
label_3e0840:
    if (ctx->pc == 0x3E0840u) {
        ctx->pc = 0x3E0840u;
            // 0x3e0840: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3E0844u;
        goto label_3e0844;
    }
    ctx->pc = 0x3E083Cu;
    SET_GPR_U32(ctx, 31, 0x3E0844u);
    ctx->pc = 0x3E0840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E083Cu;
            // 0x3e0840: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0844u; }
        if (ctx->pc != 0x3E0844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0844u; }
        if (ctx->pc != 0x3E0844u) { return; }
    }
    ctx->pc = 0x3E0844u;
label_3e0844:
    // 0x3e0844: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3e0844u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3e0848:
    // 0x3e0848: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e0848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e084c:
    // 0x3e084c: 0xc6800278  lwc1        $f0, 0x278($s4)
    ctx->pc = 0x3e084cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e0850:
    // 0x3e0850: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3e0850u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_3e0854:
    // 0x3e0854: 0xc0f81a8  jal         func_3E06A0
label_3e0858:
    if (ctx->pc == 0x3E0858u) {
        ctx->pc = 0x3E0858u;
            // 0x3e0858: 0xe6800278  swc1        $f0, 0x278($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 632), bits); }
        ctx->pc = 0x3E085Cu;
        goto label_3e085c;
    }
    ctx->pc = 0x3E0854u;
    SET_GPR_U32(ctx, 31, 0x3E085Cu);
    ctx->pc = 0x3E0858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0854u;
            // 0x3e0858: 0xe6800278  swc1        $f0, 0x278($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 632), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E06A0u;
    goto label_3e06a0;
    ctx->pc = 0x3E085Cu;
label_3e085c:
    // 0x3e085c: 0x2c410012  sltiu       $at, $v0, 0x12
    ctx->pc = 0x3e085cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_3e0860:
    // 0x3e0860: 0x50200311  beql        $at, $zero, . + 4 + (0x311 << 2)
label_3e0864:
    if (ctx->pc == 0x3E0864u) {
        ctx->pc = 0x3E0864u;
            // 0x3e0864: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0868u;
        goto label_3e0868;
    }
    ctx->pc = 0x3E0860u;
    {
        const bool branch_taken_0x3e0860 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0860) {
            ctx->pc = 0x3E0864u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0860u;
            // 0x3e0864: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E14A8u;
            goto label_3e14a8;
        }
    }
    ctx->pc = 0x3E0868u;
label_3e0868:
    // 0x3e0868: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e0868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3e086c:
    // 0x3e086c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e086cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e0870:
    // 0x3e0870: 0x24639f10  addiu       $v1, $v1, -0x60F0
    ctx->pc = 0x3e0870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942480));
label_3e0874:
    // 0x3e0874: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e0874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e0878:
    // 0x3e0878: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3e0878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e087c:
    // 0x3e087c: 0x400008  jr          $v0
label_3e0880:
    if (ctx->pc == 0x3E0880u) {
        ctx->pc = 0x3E0884u;
        goto label_3e0884;
    }
    ctx->pc = 0x3E087Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3E0884u: goto label_3e0884;
            case 0x3E0894u: goto label_3e0894;
            case 0x3E094Cu: goto label_3e094c;
            case 0x3E0B1Cu: goto label_3e0b1c;
            case 0x3E0C00u: goto label_3e0c00;
            case 0x3E0C28u: goto label_3e0c28;
            case 0x3E0C30u: goto label_3e0c30;
            case 0x3E0C50u: goto label_3e0c50;
            case 0x3E0CCCu: goto label_3e0ccc;
            case 0x3E1084u: goto label_3e1084;
            case 0x3E110Cu: goto label_3e110c;
            case 0x3E11C0u: goto label_3e11c0;
            case 0x3E12ACu: goto label_3e12ac;
            case 0x3E12D4u: goto label_3e12d4;
            case 0x3E1320u: goto label_3e1320;
            case 0x3E13B8u: goto label_3e13b8;
            case 0x3E14A4u: goto label_3e14a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3E0884u;
label_3e0884:
    // 0x3e0884: 0xc0f91f8  jal         func_3E47E0
label_3e0888:
    if (ctx->pc == 0x3E0888u) {
        ctx->pc = 0x3E0888u;
            // 0x3e0888: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E088Cu;
        goto label_3e088c;
    }
    ctx->pc = 0x3E0884u;
    SET_GPR_U32(ctx, 31, 0x3E088Cu);
    ctx->pc = 0x3E0888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0884u;
            // 0x3e0888: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E47E0u;
    if (runtime->hasFunction(0x3E47E0u)) {
        auto targetFn = runtime->lookupFunction(0x3E47E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E088Cu; }
        if (ctx->pc != 0x3E088Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E47E0_0x3e47e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E088Cu; }
        if (ctx->pc != 0x3E088Cu) { return; }
    }
    ctx->pc = 0x3E088Cu;
label_3e088c:
    // 0x3e088c: 0x10000305  b           . + 4 + (0x305 << 2)
label_3e0890:
    if (ctx->pc == 0x3E0890u) {
        ctx->pc = 0x3E0894u;
        goto label_3e0894;
    }
    ctx->pc = 0x3E088Cu;
    {
        const bool branch_taken_0x3e088c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e088c) {
            ctx->pc = 0x3E14A4u;
            goto label_3e14a4;
        }
    }
    ctx->pc = 0x3E0894u;
label_3e0894:
    // 0x3e0894: 0xc0f9008  jal         func_3E4020
label_3e0898:
    if (ctx->pc == 0x3E0898u) {
        ctx->pc = 0x3E0898u;
            // 0x3e0898: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E089Cu;
        goto label_3e089c;
    }
    ctx->pc = 0x3E0894u;
    SET_GPR_U32(ctx, 31, 0x3E089Cu);
    ctx->pc = 0x3E0898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0894u;
            // 0x3e0898: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E4020u;
    if (runtime->hasFunction(0x3E4020u)) {
        auto targetFn = runtime->lookupFunction(0x3E4020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E089Cu; }
        if (ctx->pc != 0x3E089Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E4020_0x3e4020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E089Cu; }
        if (ctx->pc != 0x3E089Cu) { return; }
    }
    ctx->pc = 0x3E089Cu;
label_3e089c:
    // 0x3e089c: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
label_3e08a0:
    if (ctx->pc == 0x3E08A0u) {
        ctx->pc = 0x3E08A0u;
            // 0x3e08a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E08A4u;
        goto label_3e08a4;
    }
    ctx->pc = 0x3E089Cu;
    {
        const bool branch_taken_0x3e089c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e089c) {
            ctx->pc = 0x3E08A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E089Cu;
            // 0x3e08a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E0950u;
            goto label_3e0950;
        }
    }
    ctx->pc = 0x3E08A4u;
label_3e08a4:
    // 0x3e08a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e08a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e08a8:
    // 0x3e08a8: 0xc0f9004  jal         func_3E4010
label_3e08ac:
    if (ctx->pc == 0x3E08ACu) {
        ctx->pc = 0x3E08ACu;
            // 0x3e08ac: 0xae80027c  sw          $zero, 0x27C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 636), GPR_U32(ctx, 0));
        ctx->pc = 0x3E08B0u;
        goto label_3e08b0;
    }
    ctx->pc = 0x3E08A8u;
    SET_GPR_U32(ctx, 31, 0x3E08B0u);
    ctx->pc = 0x3E08ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E08A8u;
            // 0x3e08ac: 0xae80027c  sw          $zero, 0x27C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 636), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E4010u;
    if (runtime->hasFunction(0x3E4010u)) {
        auto targetFn = runtime->lookupFunction(0x3E4010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E08B0u; }
        if (ctx->pc != 0x3E08B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E4010_0x3e4010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E08B0u; }
        if (ctx->pc != 0x3E08B0u) { return; }
    }
    ctx->pc = 0x3E08B0u;
label_3e08b0:
    // 0x3e08b0: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x3e08b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_3e08b4:
    // 0x3e08b4: 0x54200019  bnel        $at, $zero, . + 4 + (0x19 << 2)
label_3e08b8:
    if (ctx->pc == 0x3E08B8u) {
        ctx->pc = 0x3E08B8u;
            // 0x3e08b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E08BCu;
        goto label_3e08bc;
    }
    ctx->pc = 0x3E08B4u;
    {
        const bool branch_taken_0x3e08b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e08b4) {
            ctx->pc = 0x3E08B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E08B4u;
            // 0x3e08b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E091Cu;
            goto label_3e091c;
        }
    }
    ctx->pc = 0x3E08BCu;
label_3e08bc:
    // 0x3e08bc: 0x928302d9  lbu         $v1, 0x2D9($s4)
    ctx->pc = 0x3e08bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 729)));
label_3e08c0:
    // 0x3e08c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e08c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e08c4:
    // 0x3e08c4: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_3e08c8:
    if (ctx->pc == 0x3E08C8u) {
        ctx->pc = 0x3E08CCu;
        goto label_3e08cc;
    }
    ctx->pc = 0x3E08C4u;
    {
        const bool branch_taken_0x3e08c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e08c4) {
            ctx->pc = 0x3E0918u;
            goto label_3e0918;
        }
    }
    ctx->pc = 0x3E08CCu;
label_3e08cc:
    // 0x3e08cc: 0xc0c05c4  jal         func_301710
label_3e08d0:
    if (ctx->pc == 0x3E08D0u) {
        ctx->pc = 0x3E08D4u;
        goto label_3e08d4;
    }
    ctx->pc = 0x3E08CCu;
    SET_GPR_U32(ctx, 31, 0x3E08D4u);
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E08D4u; }
        if (ctx->pc != 0x3E08D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E08D4u; }
        if (ctx->pc != 0x3E08D4u) { return; }
    }
    ctx->pc = 0x3E08D4u;
label_3e08d4:
    // 0x3e08d4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x3e08d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3e08d8:
    // 0x3e08d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e08d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e08dc:
    // 0x3e08dc: 0xc0f9000  jal         func_3E4000
label_3e08e0:
    if (ctx->pc == 0x3E08E0u) {
        ctx->pc = 0x3E08E0u;
            // 0x3e08e0: 0x24060069  addiu       $a2, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->pc = 0x3E08E4u;
        goto label_3e08e4;
    }
    ctx->pc = 0x3E08DCu;
    SET_GPR_U32(ctx, 31, 0x3E08E4u);
    ctx->pc = 0x3E08E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E08DCu;
            // 0x3e08e0: 0x24060069  addiu       $a2, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E4000u;
    if (runtime->hasFunction(0x3E4000u)) {
        auto targetFn = runtime->lookupFunction(0x3E4000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E08E4u; }
        if (ctx->pc != 0x3E08E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E4000_0x3e4000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E08E4u; }
        if (ctx->pc != 0x3E08E4u) { return; }
    }
    ctx->pc = 0x3E08E4u;
label_3e08e4:
    // 0x3e08e4: 0xc0c05c4  jal         func_301710
label_3e08e8:
    if (ctx->pc == 0x3E08E8u) {
        ctx->pc = 0x3E08ECu;
        goto label_3e08ec;
    }
    ctx->pc = 0x3E08E4u;
    SET_GPR_U32(ctx, 31, 0x3E08ECu);
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E08ECu; }
        if (ctx->pc != 0x3E08ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E08ECu; }
        if (ctx->pc != 0x3E08ECu) { return; }
    }
    ctx->pc = 0x3E08ECu;
label_3e08ec:
    // 0x3e08ec: 0x8e8502c0  lw          $a1, 0x2C0($s4)
    ctx->pc = 0x3e08ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 704)));
label_3e08f0:
    // 0x3e08f0: 0xc0de630  jal         func_3798C0
label_3e08f4:
    if (ctx->pc == 0x3E08F4u) {
        ctx->pc = 0x3E08F4u;
            // 0x3e08f4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3E08F8u;
        goto label_3e08f8;
    }
    ctx->pc = 0x3E08F0u;
    SET_GPR_U32(ctx, 31, 0x3E08F8u);
    ctx->pc = 0x3E08F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E08F0u;
            // 0x3e08f4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3798C0u;
    if (runtime->hasFunction(0x3798C0u)) {
        auto targetFn = runtime->lookupFunction(0x3798C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E08F8u; }
        if (ctx->pc != 0x3E08F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003798C0_0x3798c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E08F8u; }
        if (ctx->pc != 0x3E08F8u) { return; }
    }
    ctx->pc = 0x3E08F8u;
label_3e08f8:
    // 0x3e08f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e08f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e08fc:
    // 0x3e08fc: 0xc0f8ffc  jal         func_3E3FF0
label_3e0900:
    if (ctx->pc == 0x3E0900u) {
        ctx->pc = 0x3E0900u;
            // 0x3e0900: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3E0904u;
        goto label_3e0904;
    }
    ctx->pc = 0x3E08FCu;
    SET_GPR_U32(ctx, 31, 0x3E0904u);
    ctx->pc = 0x3E0900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E08FCu;
            // 0x3e0900: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3FF0u;
    if (runtime->hasFunction(0x3E3FF0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0904u; }
        if (ctx->pc != 0x3E0904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3FF0_0x3e3ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0904u; }
        if (ctx->pc != 0x3E0904u) { return; }
    }
    ctx->pc = 0x3E0904u;
label_3e0904:
    // 0x3e0904: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e0904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e0908:
    // 0x3e0908: 0xc0f8ff4  jal         func_3E3FD0
label_3e090c:
    if (ctx->pc == 0x3E090Cu) {
        ctx->pc = 0x3E090Cu;
            // 0x3e090c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x3E0910u;
        goto label_3e0910;
    }
    ctx->pc = 0x3E0908u;
    SET_GPR_U32(ctx, 31, 0x3E0910u);
    ctx->pc = 0x3E090Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0908u;
            // 0x3e090c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3FD0u;
    if (runtime->hasFunction(0x3E3FD0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0910u; }
        if (ctx->pc != 0x3E0910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3FD0_0x3e3fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0910u; }
        if (ctx->pc != 0x3E0910u) { return; }
    }
    ctx->pc = 0x3E0910u;
label_3e0910:
    // 0x3e0910: 0x10000008  b           . + 4 + (0x8 << 2)
label_3e0914:
    if (ctx->pc == 0x3E0914u) {
        ctx->pc = 0x3E0914u;
            // 0x3e0914: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0918u;
        goto label_3e0918;
    }
    ctx->pc = 0x3E0910u;
    {
        const bool branch_taken_0x3e0910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0910u;
            // 0x3e0914: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0910) {
            ctx->pc = 0x3E0934u;
            goto label_3e0934;
        }
    }
    ctx->pc = 0x3E0918u;
label_3e0918:
    // 0x3e0918: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e0918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e091c:
    // 0x3e091c: 0xc0f8ffc  jal         func_3E3FF0
label_3e0920:
    if (ctx->pc == 0x3E0920u) {
        ctx->pc = 0x3E0920u;
            // 0x3e0920: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3E0924u;
        goto label_3e0924;
    }
    ctx->pc = 0x3E091Cu;
    SET_GPR_U32(ctx, 31, 0x3E0924u);
    ctx->pc = 0x3E0920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E091Cu;
            // 0x3e0920: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3FF0u;
    if (runtime->hasFunction(0x3E3FF0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0924u; }
        if (ctx->pc != 0x3E0924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3FF0_0x3e3ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0924u; }
        if (ctx->pc != 0x3E0924u) { return; }
    }
    ctx->pc = 0x3E0924u;
label_3e0924:
    // 0x3e0924: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e0924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e0928:
    // 0x3e0928: 0xc0f8ff4  jal         func_3E3FD0
label_3e092c:
    if (ctx->pc == 0x3E092Cu) {
        ctx->pc = 0x3E092Cu;
            // 0x3e092c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0930u;
        goto label_3e0930;
    }
    ctx->pc = 0x3E0928u;
    SET_GPR_U32(ctx, 31, 0x3E0930u);
    ctx->pc = 0x3E092Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0928u;
            // 0x3e092c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3FD0u;
    if (runtime->hasFunction(0x3E3FD0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0930u; }
        if (ctx->pc != 0x3E0930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3FD0_0x3e3fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0930u; }
        if (ctx->pc != 0x3E0930u) { return; }
    }
    ctx->pc = 0x3E0930u;
label_3e0930:
    // 0x3e0930: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e0930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e0934:
    // 0x3e0934: 0xc0f9618  jal         func_3E5860
label_3e0938:
    if (ctx->pc == 0x3E0938u) {
        ctx->pc = 0x3E093Cu;
        goto label_3e093c;
    }
    ctx->pc = 0x3E0934u;
    SET_GPR_U32(ctx, 31, 0x3E093Cu);
    ctx->pc = 0x3E5860u;
    if (runtime->hasFunction(0x3E5860u)) {
        auto targetFn = runtime->lookupFunction(0x3E5860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E093Cu; }
        if (ctx->pc != 0x3E093Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E5860_0x3e5860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E093Cu; }
        if (ctx->pc != 0x3E093Cu) { return; }
    }
    ctx->pc = 0x3E093Cu;
label_3e093c:
    // 0x3e093c: 0xc0f8fb8  jal         func_3E3EE0
label_3e0940:
    if (ctx->pc == 0x3E0940u) {
        ctx->pc = 0x3E0940u;
            // 0x3e0940: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0944u;
        goto label_3e0944;
    }
    ctx->pc = 0x3E093Cu;
    SET_GPR_U32(ctx, 31, 0x3E0944u);
    ctx->pc = 0x3E0940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E093Cu;
            // 0x3e0940: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3EE0u;
    if (runtime->hasFunction(0x3E3EE0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0944u; }
        if (ctx->pc != 0x3E0944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3EE0_0x3e3ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0944u; }
        if (ctx->pc != 0x3E0944u) { return; }
    }
    ctx->pc = 0x3E0944u;
label_3e0944:
    // 0x3e0944: 0xc0f8f68  jal         func_3E3DA0
label_3e0948:
    if (ctx->pc == 0x3E0948u) {
        ctx->pc = 0x3E0948u;
            // 0x3e0948: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E094Cu;
        goto label_3e094c;
    }
    ctx->pc = 0x3E0944u;
    SET_GPR_U32(ctx, 31, 0x3E094Cu);
    ctx->pc = 0x3E0948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0944u;
            // 0x3e0948: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3DA0u;
    if (runtime->hasFunction(0x3E3DA0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E094Cu; }
        if (ctx->pc != 0x3E094Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3DA0_0x3e3da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E094Cu; }
        if (ctx->pc != 0x3E094Cu) { return; }
    }
    ctx->pc = 0x3E094Cu;
label_3e094c:
    // 0x3e094c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e094cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e0950:
    // 0x3e0950: 0xc0f8eb8  jal         func_3E3AE0
label_3e0954:
    if (ctx->pc == 0x3E0954u) {
        ctx->pc = 0x3E0958u;
        goto label_3e0958;
    }
    ctx->pc = 0x3E0950u;
    SET_GPR_U32(ctx, 31, 0x3E0958u);
    ctx->pc = 0x3E3AE0u;
    if (runtime->hasFunction(0x3E3AE0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0958u; }
        if (ctx->pc != 0x3E0958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3AE0_0x3e3ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0958u; }
        if (ctx->pc != 0x3E0958u) { return; }
    }
    ctx->pc = 0x3E0958u;
label_3e0958:
    // 0x3e0958: 0xc0f81a8  jal         func_3E06A0
label_3e095c:
    if (ctx->pc == 0x3E095Cu) {
        ctx->pc = 0x3E095Cu;
            // 0x3e095c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0960u;
        goto label_3e0960;
    }
    ctx->pc = 0x3E0958u;
    SET_GPR_U32(ctx, 31, 0x3E0960u);
    ctx->pc = 0x3E095Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0958u;
            // 0x3e095c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E06A0u;
    goto label_3e06a0;
    ctx->pc = 0x3E0960u;
label_3e0960:
    // 0x3e0960: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e0960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e0964:
    // 0x3e0964: 0x54430034  bnel        $v0, $v1, . + 4 + (0x34 << 2)
label_3e0968:
    if (ctx->pc == 0x3E0968u) {
        ctx->pc = 0x3E0968u;
            // 0x3e0968: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E096Cu;
        goto label_3e096c;
    }
    ctx->pc = 0x3E0964u;
    {
        const bool branch_taken_0x3e0964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e0964) {
            ctx->pc = 0x3E0968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0964u;
            // 0x3e0968: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E0A38u;
            goto label_3e0a38;
        }
    }
    ctx->pc = 0x3E096Cu;
label_3e096c:
    // 0x3e096c: 0xc0f8e38  jal         func_3E38E0
label_3e0970:
    if (ctx->pc == 0x3E0970u) {
        ctx->pc = 0x3E0970u;
            // 0x3e0970: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0974u;
        goto label_3e0974;
    }
    ctx->pc = 0x3E096Cu;
    SET_GPR_U32(ctx, 31, 0x3E0974u);
    ctx->pc = 0x3E0970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E096Cu;
            // 0x3e0970: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E38E0u;
    if (runtime->hasFunction(0x3E38E0u)) {
        auto targetFn = runtime->lookupFunction(0x3E38E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0974u; }
        if (ctx->pc != 0x3E0974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E38E0_0x3e38e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0974u; }
        if (ctx->pc != 0x3E0974u) { return; }
    }
    ctx->pc = 0x3E0974u;
label_3e0974:
    // 0x3e0974: 0xc6800294  lwc1        $f0, 0x294($s4)
    ctx->pc = 0x3e0974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e0978:
    // 0x3e0978: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3e0978u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3e097c:
    // 0x3e097c: 0x0  nop
    ctx->pc = 0x3e097cu;
    // NOP
label_3e0980:
    // 0x3e0980: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x3e0980u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e0984:
    // 0x3e0984: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_3e0988:
    if (ctx->pc == 0x3E0988u) {
        ctx->pc = 0x3E0988u;
            // 0x3e0988: 0xe6820290  swc1        $f2, 0x290($s4) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 656), bits); }
        ctx->pc = 0x3E098Cu;
        goto label_3e098c;
    }
    ctx->pc = 0x3E0984u;
    {
        const bool branch_taken_0x3e0984 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e0984) {
            ctx->pc = 0x3E0988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0984u;
            // 0x3e0988: 0xe6820290  swc1        $f2, 0x290($s4) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 656), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E09ACu;
            goto label_3e09ac;
        }
    }
    ctx->pc = 0x3E098Cu;
label_3e098c:
    // 0x3e098c: 0xc680028c  lwc1        $f0, 0x28C($s4)
    ctx->pc = 0x3e098cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e0990:
    // 0x3e0990: 0xc6810290  lwc1        $f1, 0x290($s4)
    ctx->pc = 0x3e0990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e0994:
    // 0x3e0994: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x3e0994u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3e0998:
    // 0x3e0998: 0x4601a01c  madd.s      $f0, $f20, $f1
    ctx->pc = 0x3e0998u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[1]));
label_3e099c:
    // 0x3e099c: 0xe680028c  swc1        $f0, 0x28C($s4)
    ctx->pc = 0x3e099cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 652), bits); }
label_3e09a0:
    // 0x3e09a0: 0xc6800294  lwc1        $f0, 0x294($s4)
    ctx->pc = 0x3e09a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e09a4:
    // 0x3e09a4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x3e09a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_3e09a8:
    // 0x3e09a8: 0xe6800294  swc1        $f0, 0x294($s4)
    ctx->pc = 0x3e09a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 660), bits); }
label_3e09ac:
    // 0x3e09ac: 0xc680028c  lwc1        $f0, 0x28C($s4)
    ctx->pc = 0x3e09acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e09b0:
    // 0x3e09b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3e09b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e09b4:
    // 0x3e09b4: 0x0  nop
    ctx->pc = 0x3e09b4u;
    // NOP
label_3e09b8:
    // 0x3e09b8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3e09b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e09bc:
    // 0x3e09bc: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_3e09c0:
    if (ctx->pc == 0x3E09C0u) {
        ctx->pc = 0x3E09C0u;
            // 0x3e09c0: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->pc = 0x3E09C4u;
        goto label_3e09c4;
    }
    ctx->pc = 0x3E09BCu;
    {
        const bool branch_taken_0x3e09bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e09bc) {
            ctx->pc = 0x3E09C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E09BCu;
            // 0x3e09c0: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E09D8u;
            goto label_3e09d8;
        }
    }
    ctx->pc = 0x3E09C4u;
label_3e09c4:
    // 0x3e09c4: 0xc6800290  lwc1        $f0, 0x290($s4)
    ctx->pc = 0x3e09c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e09c8:
    // 0x3e09c8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3e09c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e09cc:
    // 0x3e09cc: 0x45010019  bc1t        . + 4 + (0x19 << 2)
label_3e09d0:
    if (ctx->pc == 0x3E09D0u) {
        ctx->pc = 0x3E09D4u;
        goto label_3e09d4;
    }
    ctx->pc = 0x3E09CCu;
    {
        const bool branch_taken_0x3e09cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e09cc) {
            ctx->pc = 0x3E0A34u;
            goto label_3e0a34;
        }
    }
    ctx->pc = 0x3E09D4u;
label_3e09d4:
    // 0x3e09d4: 0x26840140  addiu       $a0, $s4, 0x140
    ctx->pc = 0x3e09d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
label_3e09d8:
    // 0x3e09d8: 0xc0cefec  jal         func_33BFB0
label_3e09dc:
    if (ctx->pc == 0x3E09DCu) {
        ctx->pc = 0x3E09E0u;
        goto label_3e09e0;
    }
    ctx->pc = 0x3E09D8u;
    SET_GPR_U32(ctx, 31, 0x3E09E0u);
    ctx->pc = 0x33BFB0u;
    if (runtime->hasFunction(0x33BFB0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E09E0u; }
        if (ctx->pc != 0x3E09E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFB0_0x33bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E09E0u; }
        if (ctx->pc != 0x3E09E0u) { return; }
    }
    ctx->pc = 0x3E09E0u;
label_3e09e0:
    // 0x3e09e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e09e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e09e4:
    // 0x3e09e4: 0xc0efc48  jal         func_3BF120
label_3e09e8:
    if (ctx->pc == 0x3E09E8u) {
        ctx->pc = 0x3E09E8u;
            // 0x3e09e8: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->pc = 0x3E09ECu;
        goto label_3e09ec;
    }
    ctx->pc = 0x3E09E4u;
    SET_GPR_U32(ctx, 31, 0x3E09ECu);
    ctx->pc = 0x3E09E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E09E4u;
            // 0x3e09e8: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF120u;
    if (runtime->hasFunction(0x3BF120u)) {
        auto targetFn = runtime->lookupFunction(0x3BF120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E09ECu; }
        if (ctx->pc != 0x3E09ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF120_0x3bf120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E09ECu; }
        if (ctx->pc != 0x3E09ECu) { return; }
    }
    ctx->pc = 0x3E09ECu;
label_3e09ec:
    // 0x3e09ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e09ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e09f0:
    // 0x3e09f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3e09f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e09f4:
    // 0x3e09f4: 0xc04cbf0  jal         func_132FC0
label_3e09f8:
    if (ctx->pc == 0x3E09F8u) {
        ctx->pc = 0x3E09F8u;
            // 0x3e09f8: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x3E09FCu;
        goto label_3e09fc;
    }
    ctx->pc = 0x3E09F4u;
    SET_GPR_U32(ctx, 31, 0x3E09FCu);
    ctx->pc = 0x3E09F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E09F4u;
            // 0x3e09f8: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E09FCu; }
        if (ctx->pc != 0x3E09FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E09FCu; }
        if (ctx->pc != 0x3E09FCu) { return; }
    }
    ctx->pc = 0x3E09FCu;
label_3e09fc:
    // 0x3e09fc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x3e09fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_3e0a00:
    // 0x3e0a00: 0xc04cc44  jal         func_133110
label_3e0a04:
    if (ctx->pc == 0x3E0A04u) {
        ctx->pc = 0x3E0A04u;
            // 0x3e0a04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0A08u;
        goto label_3e0a08;
    }
    ctx->pc = 0x3E0A00u;
    SET_GPR_U32(ctx, 31, 0x3E0A08u);
    ctx->pc = 0x3E0A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0A00u;
            // 0x3e0a04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0A08u; }
        if (ctx->pc != 0x3E0A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0A08u; }
        if (ctx->pc != 0x3E0A08u) { return; }
    }
    ctx->pc = 0x3E0A08u;
label_3e0a08:
    // 0x3e0a08: 0xc0d1c10  jal         func_347040
label_3e0a0c:
    if (ctx->pc == 0x3E0A0Cu) {
        ctx->pc = 0x3E0A0Cu;
            // 0x3e0a0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0A10u;
        goto label_3e0a10;
    }
    ctx->pc = 0x3E0A08u;
    SET_GPR_U32(ctx, 31, 0x3E0A10u);
    ctx->pc = 0x3E0A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0A08u;
            // 0x3e0a0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0A10u; }
        if (ctx->pc != 0x3E0A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0A10u; }
        if (ctx->pc != 0x3E0A10u) { return; }
    }
    ctx->pc = 0x3E0A10u;
label_3e0a10:
    // 0x3e0a10: 0xc680028c  lwc1        $f0, 0x28C($s4)
    ctx->pc = 0x3e0a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e0a14:
    // 0x3e0a14: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x3e0a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_3e0a18:
    // 0x3e0a18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e0a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0a1c:
    // 0x3e0a1c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3e0a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e0a20:
    // 0x3e0a20: 0xc04cc7c  jal         func_1331F0
label_3e0a24:
    if (ctx->pc == 0x3E0A24u) {
        ctx->pc = 0x3E0A24u;
            // 0x3e0a24: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x3E0A28u;
        goto label_3e0a28;
    }
    ctx->pc = 0x3E0A20u;
    SET_GPR_U32(ctx, 31, 0x3E0A28u);
    ctx->pc = 0x3E0A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0A20u;
            // 0x3e0a24: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0A28u; }
        if (ctx->pc != 0x3E0A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0A28u; }
        if (ctx->pc != 0x3E0A28u) { return; }
    }
    ctx->pc = 0x3E0A28u;
label_3e0a28:
    // 0x3e0a28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e0a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e0a2c:
    // 0x3e0a2c: 0xc0f8e34  jal         func_3E38D0
label_3e0a30:
    if (ctx->pc == 0x3E0A30u) {
        ctx->pc = 0x3E0A30u;
            // 0x3e0a30: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x3E0A34u;
        goto label_3e0a34;
    }
    ctx->pc = 0x3E0A2Cu;
    SET_GPR_U32(ctx, 31, 0x3E0A34u);
    ctx->pc = 0x3E0A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0A2Cu;
            // 0x3e0a30: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E38D0u;
    if (runtime->hasFunction(0x3E38D0u)) {
        auto targetFn = runtime->lookupFunction(0x3E38D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0A34u; }
        if (ctx->pc != 0x3E0A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E38D0_0x3e38d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0A34u; }
        if (ctx->pc != 0x3E0A34u) { return; }
    }
    ctx->pc = 0x3E0A34u;
label_3e0a34:
    // 0x3e0a34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e0a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e0a38:
    // 0x3e0a38: 0xc0f8c90  jal         func_3E3240
label_3e0a3c:
    if (ctx->pc == 0x3E0A3Cu) {
        ctx->pc = 0x3E0A40u;
        goto label_3e0a40;
    }
    ctx->pc = 0x3E0A38u;
    SET_GPR_U32(ctx, 31, 0x3E0A40u);
    ctx->pc = 0x3E3240u;
    if (runtime->hasFunction(0x3E3240u)) {
        auto targetFn = runtime->lookupFunction(0x3E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0A40u; }
        if (ctx->pc != 0x3E0A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3240_0x3e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0A40u; }
        if (ctx->pc != 0x3E0A40u) { return; }
    }
    ctx->pc = 0x3E0A40u;
label_3e0a40:
    // 0x3e0a40: 0xc0f8c8c  jal         func_3E3230
label_3e0a44:
    if (ctx->pc == 0x3E0A44u) {
        ctx->pc = 0x3E0A44u;
            // 0x3e0a44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0A48u;
        goto label_3e0a48;
    }
    ctx->pc = 0x3E0A40u;
    SET_GPR_U32(ctx, 31, 0x3E0A48u);
    ctx->pc = 0x3E0A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0A40u;
            // 0x3e0a44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3230u;
    if (runtime->hasFunction(0x3E3230u)) {
        auto targetFn = runtime->lookupFunction(0x3E3230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0A48u; }
        if (ctx->pc != 0x3E0A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3230_0x3e3230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0A48u; }
        if (ctx->pc != 0x3E0A48u) { return; }
    }
    ctx->pc = 0x3E0A48u;
label_3e0a48:
    // 0x3e0a48: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e0a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e0a4c:
    // 0x3e0a4c: 0x5043002c  beql        $v0, $v1, . + 4 + (0x2C << 2)
label_3e0a50:
    if (ctx->pc == 0x3E0A50u) {
        ctx->pc = 0x3E0A50u;
            // 0x3e0a50: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0A54u;
        goto label_3e0a54;
    }
    ctx->pc = 0x3E0A4Cu;
    {
        const bool branch_taken_0x3e0a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e0a4c) {
            ctx->pc = 0x3E0A50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0A4Cu;
            // 0x3e0a50: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E0B00u;
            goto label_3e0b00;
        }
    }
    ctx->pc = 0x3E0A54u;
label_3e0a54:
    // 0x3e0a54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e0a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e0a58:
    // 0x3e0a58: 0x50430025  beql        $v0, $v1, . + 4 + (0x25 << 2)
label_3e0a5c:
    if (ctx->pc == 0x3E0A5Cu) {
        ctx->pc = 0x3E0A5Cu;
            // 0x3e0a5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0A60u;
        goto label_3e0a60;
    }
    ctx->pc = 0x3E0A58u;
    {
        const bool branch_taken_0x3e0a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e0a58) {
            ctx->pc = 0x3E0A5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0A58u;
            // 0x3e0a5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E0AF0u;
            goto label_3e0af0;
        }
    }
    ctx->pc = 0x3E0A60u;
label_3e0a60:
    // 0x3e0a60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e0a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e0a64:
    // 0x3e0a64: 0x5043001e  beql        $v0, $v1, . + 4 + (0x1E << 2)
label_3e0a68:
    if (ctx->pc == 0x3E0A68u) {
        ctx->pc = 0x3E0A68u;
            // 0x3e0a68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0A6Cu;
        goto label_3e0a6c;
    }
    ctx->pc = 0x3E0A64u;
    {
        const bool branch_taken_0x3e0a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e0a64) {
            ctx->pc = 0x3E0A68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0A64u;
            // 0x3e0a68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E0AE0u;
            goto label_3e0ae0;
        }
    }
    ctx->pc = 0x3E0A6Cu;
label_3e0a6c:
    // 0x3e0a6c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3e0a70:
    if (ctx->pc == 0x3E0A70u) {
        ctx->pc = 0x3E0A70u;
            // 0x3e0a70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0A74u;
        goto label_3e0a74;
    }
    ctx->pc = 0x3E0A6Cu;
    {
        const bool branch_taken_0x3e0a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0a6c) {
            ctx->pc = 0x3E0A70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0A6Cu;
            // 0x3e0a70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E0A7Cu;
            goto label_3e0a7c;
        }
    }
    ctx->pc = 0x3E0A74u;
label_3e0a74:
    // 0x3e0a74: 0x10000025  b           . + 4 + (0x25 << 2)
label_3e0a78:
    if (ctx->pc == 0x3E0A78u) {
        ctx->pc = 0x3E0A78u;
            // 0x3e0a78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0A7Cu;
        goto label_3e0a7c;
    }
    ctx->pc = 0x3E0A74u;
    {
        const bool branch_taken_0x3e0a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0A74u;
            // 0x3e0a78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0a74) {
            ctx->pc = 0x3E0B0Cu;
            goto label_3e0b0c;
        }
    }
    ctx->pc = 0x3E0A7Cu;
label_3e0a7c:
    // 0x3e0a7c: 0xc0f8c5c  jal         func_3E3170
label_3e0a80:
    if (ctx->pc == 0x3E0A80u) {
        ctx->pc = 0x3E0A84u;
        goto label_3e0a84;
    }
    ctx->pc = 0x3E0A7Cu;
    SET_GPR_U32(ctx, 31, 0x3E0A84u);
    ctx->pc = 0x3E3170u;
    if (runtime->hasFunction(0x3E3170u)) {
        auto targetFn = runtime->lookupFunction(0x3E3170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0A84u; }
        if (ctx->pc != 0x3E0A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3170_0x3e3170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0A84u; }
        if (ctx->pc != 0x3E0A84u) { return; }
    }
    ctx->pc = 0x3E0A84u;
label_3e0a84:
    // 0x3e0a84: 0xc0f8c3c  jal         func_3E30F0
label_3e0a88:
    if (ctx->pc == 0x3E0A88u) {
        ctx->pc = 0x3E0A88u;
            // 0x3e0a88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0A8Cu;
        goto label_3e0a8c;
    }
    ctx->pc = 0x3E0A84u;
    SET_GPR_U32(ctx, 31, 0x3E0A8Cu);
    ctx->pc = 0x3E0A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0A84u;
            // 0x3e0a88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E30F0u;
    if (runtime->hasFunction(0x3E30F0u)) {
        auto targetFn = runtime->lookupFunction(0x3E30F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0A8Cu; }
        if (ctx->pc != 0x3E0A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E30F0_0x3e30f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0A8Cu; }
        if (ctx->pc != 0x3E0A8Cu) { return; }
    }
    ctx->pc = 0x3E0A8Cu;
label_3e0a8c:
    // 0x3e0a8c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3e0a90:
    if (ctx->pc == 0x3E0A90u) {
        ctx->pc = 0x3E0A94u;
        goto label_3e0a94;
    }
    ctx->pc = 0x3E0A8Cu;
    {
        const bool branch_taken_0x3e0a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0a8c) {
            ctx->pc = 0x3E0B08u;
            goto label_3e0b08;
        }
    }
    ctx->pc = 0x3E0A94u;
label_3e0a94:
    // 0x3e0a94: 0xc0f81a8  jal         func_3E06A0
label_3e0a98:
    if (ctx->pc == 0x3E0A98u) {
        ctx->pc = 0x3E0A98u;
            // 0x3e0a98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0A9Cu;
        goto label_3e0a9c;
    }
    ctx->pc = 0x3E0A94u;
    SET_GPR_U32(ctx, 31, 0x3E0A9Cu);
    ctx->pc = 0x3E0A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0A94u;
            // 0x3e0a98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E06A0u;
    goto label_3e06a0;
    ctx->pc = 0x3E0A9Cu;
label_3e0a9c:
    // 0x3e0a9c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e0a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e0aa0:
    // 0x3e0aa0: 0x14430019  bne         $v0, $v1, . + 4 + (0x19 << 2)
label_3e0aa4:
    if (ctx->pc == 0x3E0AA4u) {
        ctx->pc = 0x3E0AA8u;
        goto label_3e0aa8;
    }
    ctx->pc = 0x3E0AA0u;
    {
        const bool branch_taken_0x3e0aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e0aa0) {
            ctx->pc = 0x3E0B08u;
            goto label_3e0b08;
        }
    }
    ctx->pc = 0x3E0AA8u;
label_3e0aa8:
    // 0x3e0aa8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e0aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e0aac:
    // 0x3e0aac: 0xc0f8ffc  jal         func_3E3FF0
label_3e0ab0:
    if (ctx->pc == 0x3E0AB0u) {
        ctx->pc = 0x3E0AB0u;
            // 0x3e0ab0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3E0AB4u;
        goto label_3e0ab4;
    }
    ctx->pc = 0x3E0AACu;
    SET_GPR_U32(ctx, 31, 0x3E0AB4u);
    ctx->pc = 0x3E0AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0AACu;
            // 0x3e0ab0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3FF0u;
    if (runtime->hasFunction(0x3E3FF0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0AB4u; }
        if (ctx->pc != 0x3E0AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3FF0_0x3e3ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0AB4u; }
        if (ctx->pc != 0x3E0AB4u) { return; }
    }
    ctx->pc = 0x3E0AB4u;
label_3e0ab4:
    // 0x3e0ab4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e0ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e0ab8:
    // 0x3e0ab8: 0xc0f8ff4  jal         func_3E3FD0
label_3e0abc:
    if (ctx->pc == 0x3E0ABCu) {
        ctx->pc = 0x3E0ABCu;
            // 0x3e0abc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0AC0u;
        goto label_3e0ac0;
    }
    ctx->pc = 0x3E0AB8u;
    SET_GPR_U32(ctx, 31, 0x3E0AC0u);
    ctx->pc = 0x3E0ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0AB8u;
            // 0x3e0abc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3FD0u;
    if (runtime->hasFunction(0x3E3FD0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0AC0u; }
        if (ctx->pc != 0x3E0AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3FD0_0x3e3fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0AC0u; }
        if (ctx->pc != 0x3E0AC0u) { return; }
    }
    ctx->pc = 0x3E0AC0u;
label_3e0ac0:
    // 0x3e0ac0: 0xc0f9618  jal         func_3E5860
label_3e0ac4:
    if (ctx->pc == 0x3E0AC4u) {
        ctx->pc = 0x3E0AC4u;
            // 0x3e0ac4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0AC8u;
        goto label_3e0ac8;
    }
    ctx->pc = 0x3E0AC0u;
    SET_GPR_U32(ctx, 31, 0x3E0AC8u);
    ctx->pc = 0x3E0AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0AC0u;
            // 0x3e0ac4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E5860u;
    if (runtime->hasFunction(0x3E5860u)) {
        auto targetFn = runtime->lookupFunction(0x3E5860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0AC8u; }
        if (ctx->pc != 0x3E0AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E5860_0x3e5860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0AC8u; }
        if (ctx->pc != 0x3E0AC8u) { return; }
    }
    ctx->pc = 0x3E0AC8u;
label_3e0ac8:
    // 0x3e0ac8: 0xc0f8fb8  jal         func_3E3EE0
label_3e0acc:
    if (ctx->pc == 0x3E0ACCu) {
        ctx->pc = 0x3E0ACCu;
            // 0x3e0acc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0AD0u;
        goto label_3e0ad0;
    }
    ctx->pc = 0x3E0AC8u;
    SET_GPR_U32(ctx, 31, 0x3E0AD0u);
    ctx->pc = 0x3E0ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0AC8u;
            // 0x3e0acc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3EE0u;
    if (runtime->hasFunction(0x3E3EE0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0AD0u; }
        if (ctx->pc != 0x3E0AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3EE0_0x3e3ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0AD0u; }
        if (ctx->pc != 0x3E0AD0u) { return; }
    }
    ctx->pc = 0x3E0AD0u;
label_3e0ad0:
    // 0x3e0ad0: 0xc0f8c20  jal         func_3E3080
label_3e0ad4:
    if (ctx->pc == 0x3E0AD4u) {
        ctx->pc = 0x3E0AD4u;
            // 0x3e0ad4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0AD8u;
        goto label_3e0ad8;
    }
    ctx->pc = 0x3E0AD0u;
    SET_GPR_U32(ctx, 31, 0x3E0AD8u);
    ctx->pc = 0x3E0AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0AD0u;
            // 0x3e0ad4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3080u;
    if (runtime->hasFunction(0x3E3080u)) {
        auto targetFn = runtime->lookupFunction(0x3E3080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0AD8u; }
        if (ctx->pc != 0x3E0AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3080_0x3e3080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0AD8u; }
        if (ctx->pc != 0x3E0AD8u) { return; }
    }
    ctx->pc = 0x3E0AD8u;
label_3e0ad8:
    // 0x3e0ad8: 0x1000000b  b           . + 4 + (0xB << 2)
label_3e0adc:
    if (ctx->pc == 0x3E0ADCu) {
        ctx->pc = 0x3E0AE0u;
        goto label_3e0ae0;
    }
    ctx->pc = 0x3E0AD8u;
    {
        const bool branch_taken_0x3e0ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0ad8) {
            ctx->pc = 0x3E0B08u;
            goto label_3e0b08;
        }
    }
    ctx->pc = 0x3E0AE0u;
label_3e0ae0:
    // 0x3e0ae0: 0xc0f89bc  jal         func_3E26F0
label_3e0ae4:
    if (ctx->pc == 0x3E0AE4u) {
        ctx->pc = 0x3E0AE8u;
        goto label_3e0ae8;
    }
    ctx->pc = 0x3E0AE0u;
    SET_GPR_U32(ctx, 31, 0x3E0AE8u);
    ctx->pc = 0x3E26F0u;
    if (runtime->hasFunction(0x3E26F0u)) {
        auto targetFn = runtime->lookupFunction(0x3E26F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0AE8u; }
        if (ctx->pc != 0x3E0AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E26F0_0x3e26f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0AE8u; }
        if (ctx->pc != 0x3E0AE8u) { return; }
    }
    ctx->pc = 0x3E0AE8u;
label_3e0ae8:
    // 0x3e0ae8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3e0aec:
    if (ctx->pc == 0x3E0AECu) {
        ctx->pc = 0x3E0AF0u;
        goto label_3e0af0;
    }
    ctx->pc = 0x3E0AE8u;
    {
        const bool branch_taken_0x3e0ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0ae8) {
            ctx->pc = 0x3E0B08u;
            goto label_3e0b08;
        }
    }
    ctx->pc = 0x3E0AF0u;
label_3e0af0:
    // 0x3e0af0: 0xc0f8870  jal         func_3E21C0
label_3e0af4:
    if (ctx->pc == 0x3E0AF4u) {
        ctx->pc = 0x3E0AF8u;
        goto label_3e0af8;
    }
    ctx->pc = 0x3E0AF0u;
    SET_GPR_U32(ctx, 31, 0x3E0AF8u);
    ctx->pc = 0x3E21C0u;
    if (runtime->hasFunction(0x3E21C0u)) {
        auto targetFn = runtime->lookupFunction(0x3E21C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0AF8u; }
        if (ctx->pc != 0x3E0AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E21C0_0x3e21c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0AF8u; }
        if (ctx->pc != 0x3E0AF8u) { return; }
    }
    ctx->pc = 0x3E0AF8u;
label_3e0af8:
    // 0x3e0af8: 0x10000003  b           . + 4 + (0x3 << 2)
label_3e0afc:
    if (ctx->pc == 0x3E0AFCu) {
        ctx->pc = 0x3E0B00u;
        goto label_3e0b00;
    }
    ctx->pc = 0x3E0AF8u;
    {
        const bool branch_taken_0x3e0af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0af8) {
            ctx->pc = 0x3E0B08u;
            goto label_3e0b08;
        }
    }
    ctx->pc = 0x3E0B00u;
label_3e0b00:
    // 0x3e0b00: 0xc0f8c3c  jal         func_3E30F0
label_3e0b04:
    if (ctx->pc == 0x3E0B04u) {
        ctx->pc = 0x3E0B08u;
        goto label_3e0b08;
    }
    ctx->pc = 0x3E0B00u;
    SET_GPR_U32(ctx, 31, 0x3E0B08u);
    ctx->pc = 0x3E30F0u;
    if (runtime->hasFunction(0x3E30F0u)) {
        auto targetFn = runtime->lookupFunction(0x3E30F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0B08u; }
        if (ctx->pc != 0x3E0B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E30F0_0x3e30f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0B08u; }
        if (ctx->pc != 0x3E0B08u) { return; }
    }
    ctx->pc = 0x3E0B08u;
label_3e0b08:
    // 0x3e0b08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e0b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e0b0c:
    // 0x3e0b0c: 0xc0f8840  jal         func_3E2100
label_3e0b10:
    if (ctx->pc == 0x3E0B10u) {
        ctx->pc = 0x3E0B14u;
        goto label_3e0b14;
    }
    ctx->pc = 0x3E0B0Cu;
    SET_GPR_U32(ctx, 31, 0x3E0B14u);
    ctx->pc = 0x3E2100u;
    if (runtime->hasFunction(0x3E2100u)) {
        auto targetFn = runtime->lookupFunction(0x3E2100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0B14u; }
        if (ctx->pc != 0x3E0B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E2100_0x3e2100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0B14u; }
        if (ctx->pc != 0x3E0B14u) { return; }
    }
    ctx->pc = 0x3E0B14u;
label_3e0b14:
    // 0x3e0b14: 0x10000263  b           . + 4 + (0x263 << 2)
label_3e0b18:
    if (ctx->pc == 0x3E0B18u) {
        ctx->pc = 0x3E0B1Cu;
        goto label_3e0b1c;
    }
    ctx->pc = 0x3E0B14u;
    {
        const bool branch_taken_0x3e0b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0b14) {
            ctx->pc = 0x3E14A4u;
            goto label_3e14a4;
        }
    }
    ctx->pc = 0x3E0B1Cu;
label_3e0b1c:
    // 0x3e0b1c: 0xc0f8e38  jal         func_3E38E0
label_3e0b20:
    if (ctx->pc == 0x3E0B20u) {
        ctx->pc = 0x3E0B20u;
            // 0x3e0b20: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0B24u;
        goto label_3e0b24;
    }
    ctx->pc = 0x3E0B1Cu;
    SET_GPR_U32(ctx, 31, 0x3E0B24u);
    ctx->pc = 0x3E0B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0B1Cu;
            // 0x3e0b20: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E38E0u;
    if (runtime->hasFunction(0x3E38E0u)) {
        auto targetFn = runtime->lookupFunction(0x3E38E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0B24u; }
        if (ctx->pc != 0x3E0B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E38E0_0x3e38e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0B24u; }
        if (ctx->pc != 0x3E0B24u) { return; }
    }
    ctx->pc = 0x3E0B24u;
label_3e0b24:
    // 0x3e0b24: 0xc0f8840  jal         func_3E2100
label_3e0b28:
    if (ctx->pc == 0x3E0B28u) {
        ctx->pc = 0x3E0B28u;
            // 0x3e0b28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0B2Cu;
        goto label_3e0b2c;
    }
    ctx->pc = 0x3E0B24u;
    SET_GPR_U32(ctx, 31, 0x3E0B2Cu);
    ctx->pc = 0x3E0B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0B24u;
            // 0x3e0b28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E2100u;
    if (runtime->hasFunction(0x3E2100u)) {
        auto targetFn = runtime->lookupFunction(0x3E2100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0B2Cu; }
        if (ctx->pc != 0x3E0B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E2100_0x3e2100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0B2Cu; }
        if (ctx->pc != 0x3E0B2Cu) { return; }
    }
    ctx->pc = 0x3E0B2Cu;
label_3e0b2c:
    // 0x3e0b2c: 0xc6800294  lwc1        $f0, 0x294($s4)
    ctx->pc = 0x3e0b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e0b30:
    // 0x3e0b30: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3e0b30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3e0b34:
    // 0x3e0b34: 0x0  nop
    ctx->pc = 0x3e0b34u;
    // NOP
label_3e0b38:
    // 0x3e0b38: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x3e0b38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e0b3c:
    // 0x3e0b3c: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_3e0b40:
    if (ctx->pc == 0x3E0B40u) {
        ctx->pc = 0x3E0B40u;
            // 0x3e0b40: 0xe6820290  swc1        $f2, 0x290($s4) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 656), bits); }
        ctx->pc = 0x3E0B44u;
        goto label_3e0b44;
    }
    ctx->pc = 0x3E0B3Cu;
    {
        const bool branch_taken_0x3e0b3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e0b3c) {
            ctx->pc = 0x3E0B40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0B3Cu;
            // 0x3e0b40: 0xe6820290  swc1        $f2, 0x290($s4) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 656), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E0B64u;
            goto label_3e0b64;
        }
    }
    ctx->pc = 0x3E0B44u;
label_3e0b44:
    // 0x3e0b44: 0xc680028c  lwc1        $f0, 0x28C($s4)
    ctx->pc = 0x3e0b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e0b48:
    // 0x3e0b48: 0xc6810290  lwc1        $f1, 0x290($s4)
    ctx->pc = 0x3e0b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e0b4c:
    // 0x3e0b4c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x3e0b4cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3e0b50:
    // 0x3e0b50: 0x4601a01c  madd.s      $f0, $f20, $f1
    ctx->pc = 0x3e0b50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[1]));
label_3e0b54:
    // 0x3e0b54: 0xe680028c  swc1        $f0, 0x28C($s4)
    ctx->pc = 0x3e0b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 652), bits); }
label_3e0b58:
    // 0x3e0b58: 0xc6800294  lwc1        $f0, 0x294($s4)
    ctx->pc = 0x3e0b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e0b5c:
    // 0x3e0b5c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x3e0b5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_3e0b60:
    // 0x3e0b60: 0xe6800294  swc1        $f0, 0x294($s4)
    ctx->pc = 0x3e0b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 660), bits); }
label_3e0b64:
    // 0x3e0b64: 0xc680028c  lwc1        $f0, 0x28C($s4)
    ctx->pc = 0x3e0b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e0b68:
    // 0x3e0b68: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3e0b68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e0b6c:
    // 0x3e0b6c: 0x0  nop
    ctx->pc = 0x3e0b6cu;
    // NOP
label_3e0b70:
    // 0x3e0b70: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3e0b70u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e0b74:
    // 0x3e0b74: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_3e0b78:
    if (ctx->pc == 0x3E0B78u) {
        ctx->pc = 0x3E0B78u;
            // 0x3e0b78: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->pc = 0x3E0B7Cu;
        goto label_3e0b7c;
    }
    ctx->pc = 0x3E0B74u;
    {
        const bool branch_taken_0x3e0b74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e0b74) {
            ctx->pc = 0x3E0B78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0B74u;
            // 0x3e0b78: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E0B90u;
            goto label_3e0b90;
        }
    }
    ctx->pc = 0x3E0B7Cu;
label_3e0b7c:
    // 0x3e0b7c: 0xc6800290  lwc1        $f0, 0x290($s4)
    ctx->pc = 0x3e0b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e0b80:
    // 0x3e0b80: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3e0b80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e0b84:
    // 0x3e0b84: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
label_3e0b88:
    if (ctx->pc == 0x3E0B88u) {
        ctx->pc = 0x3E0B88u;
            // 0x3e0b88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0B8Cu;
        goto label_3e0b8c;
    }
    ctx->pc = 0x3E0B84u;
    {
        const bool branch_taken_0x3e0b84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e0b84) {
            ctx->pc = 0x3E0B88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0B84u;
            // 0x3e0b88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E0BF0u;
            goto label_3e0bf0;
        }
    }
    ctx->pc = 0x3E0B8Cu;
label_3e0b8c:
    // 0x3e0b8c: 0x26840140  addiu       $a0, $s4, 0x140
    ctx->pc = 0x3e0b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
label_3e0b90:
    // 0x3e0b90: 0xc0cefec  jal         func_33BFB0
label_3e0b94:
    if (ctx->pc == 0x3E0B94u) {
        ctx->pc = 0x3E0B98u;
        goto label_3e0b98;
    }
    ctx->pc = 0x3E0B90u;
    SET_GPR_U32(ctx, 31, 0x3E0B98u);
    ctx->pc = 0x33BFB0u;
    if (runtime->hasFunction(0x33BFB0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0B98u; }
        if (ctx->pc != 0x3E0B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFB0_0x33bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0B98u; }
        if (ctx->pc != 0x3E0B98u) { return; }
    }
    ctx->pc = 0x3E0B98u;
label_3e0b98:
    // 0x3e0b98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e0b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0b9c:
    // 0x3e0b9c: 0xc0efc48  jal         func_3BF120
label_3e0ba0:
    if (ctx->pc == 0x3E0BA0u) {
        ctx->pc = 0x3E0BA0u;
            // 0x3e0ba0: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->pc = 0x3E0BA4u;
        goto label_3e0ba4;
    }
    ctx->pc = 0x3E0B9Cu;
    SET_GPR_U32(ctx, 31, 0x3E0BA4u);
    ctx->pc = 0x3E0BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0B9Cu;
            // 0x3e0ba0: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF120u;
    if (runtime->hasFunction(0x3BF120u)) {
        auto targetFn = runtime->lookupFunction(0x3BF120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0BA4u; }
        if (ctx->pc != 0x3E0BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF120_0x3bf120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0BA4u; }
        if (ctx->pc != 0x3E0BA4u) { return; }
    }
    ctx->pc = 0x3E0BA4u;
label_3e0ba4:
    // 0x3e0ba4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e0ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e0ba8:
    // 0x3e0ba8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3e0ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0bac:
    // 0x3e0bac: 0xc04cbf0  jal         func_132FC0
label_3e0bb0:
    if (ctx->pc == 0x3E0BB0u) {
        ctx->pc = 0x3E0BB0u;
            // 0x3e0bb0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x3E0BB4u;
        goto label_3e0bb4;
    }
    ctx->pc = 0x3E0BACu;
    SET_GPR_U32(ctx, 31, 0x3E0BB4u);
    ctx->pc = 0x3E0BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0BACu;
            // 0x3e0bb0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0BB4u; }
        if (ctx->pc != 0x3E0BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0BB4u; }
        if (ctx->pc != 0x3E0BB4u) { return; }
    }
    ctx->pc = 0x3E0BB4u;
label_3e0bb4:
    // 0x3e0bb4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x3e0bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_3e0bb8:
    // 0x3e0bb8: 0xc04cc44  jal         func_133110
label_3e0bbc:
    if (ctx->pc == 0x3E0BBCu) {
        ctx->pc = 0x3E0BBCu;
            // 0x3e0bbc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0BC0u;
        goto label_3e0bc0;
    }
    ctx->pc = 0x3E0BB8u;
    SET_GPR_U32(ctx, 31, 0x3E0BC0u);
    ctx->pc = 0x3E0BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0BB8u;
            // 0x3e0bbc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0BC0u; }
        if (ctx->pc != 0x3E0BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0BC0u; }
        if (ctx->pc != 0x3E0BC0u) { return; }
    }
    ctx->pc = 0x3E0BC0u;
label_3e0bc0:
    // 0x3e0bc0: 0xc0d1c10  jal         func_347040
label_3e0bc4:
    if (ctx->pc == 0x3E0BC4u) {
        ctx->pc = 0x3E0BC4u;
            // 0x3e0bc4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0BC8u;
        goto label_3e0bc8;
    }
    ctx->pc = 0x3E0BC0u;
    SET_GPR_U32(ctx, 31, 0x3E0BC8u);
    ctx->pc = 0x3E0BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0BC0u;
            // 0x3e0bc4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0BC8u; }
        if (ctx->pc != 0x3E0BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0BC8u; }
        if (ctx->pc != 0x3E0BC8u) { return; }
    }
    ctx->pc = 0x3E0BC8u;
label_3e0bc8:
    // 0x3e0bc8: 0xc680028c  lwc1        $f0, 0x28C($s4)
    ctx->pc = 0x3e0bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e0bcc:
    // 0x3e0bcc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x3e0bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_3e0bd0:
    // 0x3e0bd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e0bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0bd4:
    // 0x3e0bd4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3e0bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e0bd8:
    // 0x3e0bd8: 0xc04cc7c  jal         func_1331F0
label_3e0bdc:
    if (ctx->pc == 0x3E0BDCu) {
        ctx->pc = 0x3E0BDCu;
            // 0x3e0bdc: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x3E0BE0u;
        goto label_3e0be0;
    }
    ctx->pc = 0x3E0BD8u;
    SET_GPR_U32(ctx, 31, 0x3E0BE0u);
    ctx->pc = 0x3E0BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0BD8u;
            // 0x3e0bdc: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0BE0u; }
        if (ctx->pc != 0x3E0BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0BE0u; }
        if (ctx->pc != 0x3E0BE0u) { return; }
    }
    ctx->pc = 0x3E0BE0u;
label_3e0be0:
    // 0x3e0be0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e0be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e0be4:
    // 0x3e0be4: 0xc0f8e34  jal         func_3E38D0
label_3e0be8:
    if (ctx->pc == 0x3E0BE8u) {
        ctx->pc = 0x3E0BE8u;
            // 0x3e0be8: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x3E0BECu;
        goto label_3e0bec;
    }
    ctx->pc = 0x3E0BE4u;
    SET_GPR_U32(ctx, 31, 0x3E0BECu);
    ctx->pc = 0x3E0BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0BE4u;
            // 0x3e0be8: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E38D0u;
    if (runtime->hasFunction(0x3E38D0u)) {
        auto targetFn = runtime->lookupFunction(0x3E38D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0BECu; }
        if (ctx->pc != 0x3E0BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E38D0_0x3e38d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0BECu; }
        if (ctx->pc != 0x3E0BECu) { return; }
    }
    ctx->pc = 0x3E0BECu;
label_3e0bec:
    // 0x3e0bec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e0becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e0bf0:
    // 0x3e0bf0: 0xc0f86dc  jal         func_3E1B70
label_3e0bf4:
    if (ctx->pc == 0x3E0BF4u) {
        ctx->pc = 0x3E0BF8u;
        goto label_3e0bf8;
    }
    ctx->pc = 0x3E0BF0u;
    SET_GPR_U32(ctx, 31, 0x3E0BF8u);
    ctx->pc = 0x3E1B70u;
    if (runtime->hasFunction(0x3E1B70u)) {
        auto targetFn = runtime->lookupFunction(0x3E1B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0BF8u; }
        if (ctx->pc != 0x3E0BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E1B70_0x3e1b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0BF8u; }
        if (ctx->pc != 0x3E0BF8u) { return; }
    }
    ctx->pc = 0x3E0BF8u;
label_3e0bf8:
    // 0x3e0bf8: 0x1000022a  b           . + 4 + (0x22A << 2)
label_3e0bfc:
    if (ctx->pc == 0x3E0BFCu) {
        ctx->pc = 0x3E0C00u;
        goto label_3e0c00;
    }
    ctx->pc = 0x3E0BF8u;
    {
        const bool branch_taken_0x3e0bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0bf8) {
            ctx->pc = 0x3E14A4u;
            goto label_3e14a4;
        }
    }
    ctx->pc = 0x3E0C00u;
label_3e0c00:
    // 0x3e0c00: 0xc0f8644  jal         func_3E1910
label_3e0c04:
    if (ctx->pc == 0x3E0C04u) {
        ctx->pc = 0x3E0C04u;
            // 0x3e0c04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0C08u;
        goto label_3e0c08;
    }
    ctx->pc = 0x3E0C00u;
    SET_GPR_U32(ctx, 31, 0x3E0C08u);
    ctx->pc = 0x3E0C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0C00u;
            // 0x3e0c04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E1910u;
    if (runtime->hasFunction(0x3E1910u)) {
        auto targetFn = runtime->lookupFunction(0x3E1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0C08u; }
        if (ctx->pc != 0x3E0C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E1910_0x3e1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0C08u; }
        if (ctx->pc != 0x3E0C08u) { return; }
    }
    ctx->pc = 0x3E0C08u;
label_3e0c08:
    // 0x3e0c08: 0xc0f9008  jal         func_3E4020
label_3e0c0c:
    if (ctx->pc == 0x3E0C0Cu) {
        ctx->pc = 0x3E0C0Cu;
            // 0x3e0c0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0C10u;
        goto label_3e0c10;
    }
    ctx->pc = 0x3E0C08u;
    SET_GPR_U32(ctx, 31, 0x3E0C10u);
    ctx->pc = 0x3E0C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0C08u;
            // 0x3e0c0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E4020u;
    if (runtime->hasFunction(0x3E4020u)) {
        auto targetFn = runtime->lookupFunction(0x3E4020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0C10u; }
        if (ctx->pc != 0x3E0C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E4020_0x3e4020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0C10u; }
        if (ctx->pc != 0x3E0C10u) { return; }
    }
    ctx->pc = 0x3E0C10u;
label_3e0c10:
    // 0x3e0c10: 0x10400224  beqz        $v0, . + 4 + (0x224 << 2)
label_3e0c14:
    if (ctx->pc == 0x3E0C14u) {
        ctx->pc = 0x3E0C18u;
        goto label_3e0c18;
    }
    ctx->pc = 0x3E0C10u;
    {
        const bool branch_taken_0x3e0c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0c10) {
            ctx->pc = 0x3E14A4u;
            goto label_3e14a4;
        }
    }
    ctx->pc = 0x3E0C18u;
label_3e0c18:
    // 0x3e0c18: 0xc0f85ec  jal         func_3E17B0
label_3e0c1c:
    if (ctx->pc == 0x3E0C1Cu) {
        ctx->pc = 0x3E0C1Cu;
            // 0x3e0c1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0C20u;
        goto label_3e0c20;
    }
    ctx->pc = 0x3E0C18u;
    SET_GPR_U32(ctx, 31, 0x3E0C20u);
    ctx->pc = 0x3E0C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0C18u;
            // 0x3e0c1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (runtime->hasFunction(0x3E17B0u)) {
        auto targetFn = runtime->lookupFunction(0x3E17B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0C20u; }
        if (ctx->pc != 0x3E0C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E17B0_0x3e17b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0C20u; }
        if (ctx->pc != 0x3E0C20u) { return; }
    }
    ctx->pc = 0x3E0C20u;
label_3e0c20:
    // 0x3e0c20: 0x10000220  b           . + 4 + (0x220 << 2)
label_3e0c24:
    if (ctx->pc == 0x3E0C24u) {
        ctx->pc = 0x3E0C28u;
        goto label_3e0c28;
    }
    ctx->pc = 0x3E0C20u;
    {
        const bool branch_taken_0x3e0c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0c20) {
            ctx->pc = 0x3E14A4u;
            goto label_3e14a4;
        }
    }
    ctx->pc = 0x3E0C28u;
label_3e0c28:
    // 0x3e0c28: 0xc0f85cc  jal         func_3E1730
label_3e0c2c:
    if (ctx->pc == 0x3E0C2Cu) {
        ctx->pc = 0x3E0C2Cu;
            // 0x3e0c2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0C30u;
        goto label_3e0c30;
    }
    ctx->pc = 0x3E0C28u;
    SET_GPR_U32(ctx, 31, 0x3E0C30u);
    ctx->pc = 0x3E0C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0C28u;
            // 0x3e0c2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E1730u;
    if (runtime->hasFunction(0x3E1730u)) {
        auto targetFn = runtime->lookupFunction(0x3E1730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0C30u; }
        if (ctx->pc != 0x3E0C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E1730_0x3e1730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0C30u; }
        if (ctx->pc != 0x3E0C30u) { return; }
    }
    ctx->pc = 0x3E0C30u;
label_3e0c30:
    // 0x3e0c30: 0xc0f9008  jal         func_3E4020
label_3e0c34:
    if (ctx->pc == 0x3E0C34u) {
        ctx->pc = 0x3E0C34u;
            // 0x3e0c34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0C38u;
        goto label_3e0c38;
    }
    ctx->pc = 0x3E0C30u;
    SET_GPR_U32(ctx, 31, 0x3E0C38u);
    ctx->pc = 0x3E0C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0C30u;
            // 0x3e0c34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E4020u;
    if (runtime->hasFunction(0x3E4020u)) {
        auto targetFn = runtime->lookupFunction(0x3E4020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0C38u; }
        if (ctx->pc != 0x3E0C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E4020_0x3e4020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0C38u; }
        if (ctx->pc != 0x3E0C38u) { return; }
    }
    ctx->pc = 0x3E0C38u;
label_3e0c38:
    // 0x3e0c38: 0x1040021a  beqz        $v0, . + 4 + (0x21A << 2)
label_3e0c3c:
    if (ctx->pc == 0x3E0C3Cu) {
        ctx->pc = 0x3E0C40u;
        goto label_3e0c40;
    }
    ctx->pc = 0x3E0C38u;
    {
        const bool branch_taken_0x3e0c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0c38) {
            ctx->pc = 0x3E14A4u;
            goto label_3e14a4;
        }
    }
    ctx->pc = 0x3E0C40u;
label_3e0c40:
    // 0x3e0c40: 0xc0f85ec  jal         func_3E17B0
label_3e0c44:
    if (ctx->pc == 0x3E0C44u) {
        ctx->pc = 0x3E0C44u;
            // 0x3e0c44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0C48u;
        goto label_3e0c48;
    }
    ctx->pc = 0x3E0C40u;
    SET_GPR_U32(ctx, 31, 0x3E0C48u);
    ctx->pc = 0x3E0C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0C40u;
            // 0x3e0c44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (runtime->hasFunction(0x3E17B0u)) {
        auto targetFn = runtime->lookupFunction(0x3E17B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0C48u; }
        if (ctx->pc != 0x3E0C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E17B0_0x3e17b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0C48u; }
        if (ctx->pc != 0x3E0C48u) { return; }
    }
    ctx->pc = 0x3E0C48u;
label_3e0c48:
    // 0x3e0c48: 0x10000216  b           . + 4 + (0x216 << 2)
label_3e0c4c:
    if (ctx->pc == 0x3E0C4Cu) {
        ctx->pc = 0x3E0C50u;
        goto label_3e0c50;
    }
    ctx->pc = 0x3E0C48u;
    {
        const bool branch_taken_0x3e0c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0c48) {
            ctx->pc = 0x3E14A4u;
            goto label_3e14a4;
        }
    }
    ctx->pc = 0x3E0C50u;
label_3e0c50:
    // 0x3e0c50: 0x8e8403a0  lw          $a0, 0x3A0($s4)
    ctx->pc = 0x3e0c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 928)));
label_3e0c54:
    // 0x3e0c54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e0c54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e0c58:
    // 0x3e0c58: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3e0c58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3e0c5c:
    // 0x3e0c5c: 0x320f809  jalr        $t9
label_3e0c60:
    if (ctx->pc == 0x3E0C60u) {
        ctx->pc = 0x3E0C64u;
        goto label_3e0c64;
    }
    ctx->pc = 0x3E0C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E0C64u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E0C64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E0C64u; }
            if (ctx->pc != 0x3E0C64u) { return; }
        }
        }
    }
    ctx->pc = 0x3E0C64u;
label_3e0c64:
    // 0x3e0c64: 0x8e8403a4  lw          $a0, 0x3A4($s4)
    ctx->pc = 0x3e0c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 932)));
label_3e0c68:
    // 0x3e0c68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e0c68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e0c6c:
    // 0x3e0c6c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3e0c6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3e0c70:
    // 0x3e0c70: 0x320f809  jalr        $t9
label_3e0c74:
    if (ctx->pc == 0x3E0C74u) {
        ctx->pc = 0x3E0C78u;
        goto label_3e0c78;
    }
    ctx->pc = 0x3E0C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E0C78u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E0C78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E0C78u; }
            if (ctx->pc != 0x3E0C78u) { return; }
        }
        }
    }
    ctx->pc = 0x3E0C78u;
label_3e0c78:
    // 0x3e0c78: 0xc0f9008  jal         func_3E4020
label_3e0c7c:
    if (ctx->pc == 0x3E0C7Cu) {
        ctx->pc = 0x3E0C7Cu;
            // 0x3e0c7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0C80u;
        goto label_3e0c80;
    }
    ctx->pc = 0x3E0C78u;
    SET_GPR_U32(ctx, 31, 0x3E0C80u);
    ctx->pc = 0x3E0C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0C78u;
            // 0x3e0c7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E4020u;
    if (runtime->hasFunction(0x3E4020u)) {
        auto targetFn = runtime->lookupFunction(0x3E4020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0C80u; }
        if (ctx->pc != 0x3E0C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E4020_0x3e4020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0C80u; }
        if (ctx->pc != 0x3E0C80u) { return; }
    }
    ctx->pc = 0x3E0C80u;
label_3e0c80:
    // 0x3e0c80: 0x10400208  beqz        $v0, . + 4 + (0x208 << 2)
label_3e0c84:
    if (ctx->pc == 0x3E0C84u) {
        ctx->pc = 0x3E0C88u;
        goto label_3e0c88;
    }
    ctx->pc = 0x3E0C80u;
    {
        const bool branch_taken_0x3e0c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0c80) {
            ctx->pc = 0x3E14A4u;
            goto label_3e14a4;
        }
    }
    ctx->pc = 0x3E0C88u;
label_3e0c88:
    // 0x3e0c88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e0c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e0c8c:
    // 0x3e0c8c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3e0c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3e0c90:
    // 0x3e0c90: 0xc0f8ffc  jal         func_3E3FF0
label_3e0c94:
    if (ctx->pc == 0x3E0C94u) {
        ctx->pc = 0x3E0C94u;
            // 0x3e0c94: 0xae80027c  sw          $zero, 0x27C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 636), GPR_U32(ctx, 0));
        ctx->pc = 0x3E0C98u;
        goto label_3e0c98;
    }
    ctx->pc = 0x3E0C90u;
    SET_GPR_U32(ctx, 31, 0x3E0C98u);
    ctx->pc = 0x3E0C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0C90u;
            // 0x3e0c94: 0xae80027c  sw          $zero, 0x27C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 636), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3FF0u;
    if (runtime->hasFunction(0x3E3FF0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0C98u; }
        if (ctx->pc != 0x3E0C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3FF0_0x3e3ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0C98u; }
        if (ctx->pc != 0x3E0C98u) { return; }
    }
    ctx->pc = 0x3E0C98u;
label_3e0c98:
    // 0x3e0c98: 0xc0c05c4  jal         func_301710
label_3e0c9c:
    if (ctx->pc == 0x3E0C9Cu) {
        ctx->pc = 0x3E0CA0u;
        goto label_3e0ca0;
    }
    ctx->pc = 0x3E0C98u;
    SET_GPR_U32(ctx, 31, 0x3E0CA0u);
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0CA0u; }
        if (ctx->pc != 0x3E0CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0CA0u; }
        if (ctx->pc != 0x3E0CA0u) { return; }
    }
    ctx->pc = 0x3E0CA0u;
label_3e0ca0:
    // 0x3e0ca0: 0x8e8502c0  lw          $a1, 0x2C0($s4)
    ctx->pc = 0x3e0ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 704)));
label_3e0ca4:
    // 0x3e0ca4: 0xc0c05c0  jal         func_301700
label_3e0ca8:
    if (ctx->pc == 0x3E0CA8u) {
        ctx->pc = 0x3E0CA8u;
            // 0x3e0ca8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3E0CACu;
        goto label_3e0cac;
    }
    ctx->pc = 0x3E0CA4u;
    SET_GPR_U32(ctx, 31, 0x3E0CACu);
    ctx->pc = 0x3E0CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0CA4u;
            // 0x3e0ca8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301700u;
    if (runtime->hasFunction(0x301700u)) {
        auto targetFn = runtime->lookupFunction(0x301700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0CACu; }
        if (ctx->pc != 0x3E0CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301700_0x301700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0CACu; }
        if (ctx->pc != 0x3E0CACu) { return; }
    }
    ctx->pc = 0x3E0CACu;
label_3e0cac:
    // 0x3e0cac: 0xc0c05c4  jal         func_301710
label_3e0cb0:
    if (ctx->pc == 0x3E0CB0u) {
        ctx->pc = 0x3E0CB4u;
        goto label_3e0cb4;
    }
    ctx->pc = 0x3E0CACu;
    SET_GPR_U32(ctx, 31, 0x3E0CB4u);
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0CB4u; }
        if (ctx->pc != 0x3E0CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0CB4u; }
        if (ctx->pc != 0x3E0CB4u) { return; }
    }
    ctx->pc = 0x3E0CB4u;
label_3e0cb4:
    // 0x3e0cb4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x3e0cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3e0cb8:
    // 0x3e0cb8: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x3e0cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_3e0cbc:
    // 0x3e0cbc: 0xc0ec314  jal         func_3B0C50
label_3e0cc0:
    if (ctx->pc == 0x3E0CC0u) {
        ctx->pc = 0x3E0CC0u;
            // 0x3e0cc0: 0x344518a9  ori         $a1, $v0, 0x18A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6313);
        ctx->pc = 0x3E0CC4u;
        goto label_3e0cc4;
    }
    ctx->pc = 0x3E0CBCu;
    SET_GPR_U32(ctx, 31, 0x3E0CC4u);
    ctx->pc = 0x3E0CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0CBCu;
            // 0x3e0cc0: 0x344518a9  ori         $a1, $v0, 0x18A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6313);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B0C50u;
    if (runtime->hasFunction(0x3B0C50u)) {
        auto targetFn = runtime->lookupFunction(0x3B0C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0CC4u; }
        if (ctx->pc != 0x3E0CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B0C50_0x3b0c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0CC4u; }
        if (ctx->pc != 0x3E0CC4u) { return; }
    }
    ctx->pc = 0x3E0CC4u;
label_3e0cc4:
    // 0x3e0cc4: 0x100001f7  b           . + 4 + (0x1F7 << 2)
label_3e0cc8:
    if (ctx->pc == 0x3E0CC8u) {
        ctx->pc = 0x3E0CC8u;
            // 0x3e0cc8: 0xa28002d9  sb          $zero, 0x2D9($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 729), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3E0CCCu;
        goto label_3e0ccc;
    }
    ctx->pc = 0x3E0CC4u;
    {
        const bool branch_taken_0x3e0cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0CC4u;
            // 0x3e0cc8: 0xa28002d9  sb          $zero, 0x2D9($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 729), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0cc4) {
            ctx->pc = 0x3E14A4u;
            goto label_3e14a4;
        }
    }
    ctx->pc = 0x3E0CCCu;
label_3e0ccc:
    // 0x3e0ccc: 0x8e8403a0  lw          $a0, 0x3A0($s4)
    ctx->pc = 0x3e0cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 928)));
label_3e0cd0:
    // 0x3e0cd0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e0cd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e0cd4:
    // 0x3e0cd4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3e0cd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3e0cd8:
    // 0x3e0cd8: 0x320f809  jalr        $t9
label_3e0cdc:
    if (ctx->pc == 0x3E0CDCu) {
        ctx->pc = 0x3E0CE0u;
        goto label_3e0ce0;
    }
    ctx->pc = 0x3E0CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E0CE0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E0CE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E0CE0u; }
            if (ctx->pc != 0x3E0CE0u) { return; }
        }
        }
    }
    ctx->pc = 0x3E0CE0u;
label_3e0ce0:
    // 0x3e0ce0: 0x8e8403a4  lw          $a0, 0x3A4($s4)
    ctx->pc = 0x3e0ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 932)));
label_3e0ce4:
    // 0x3e0ce4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e0ce4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e0ce8:
    // 0x3e0ce8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3e0ce8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3e0cec:
    // 0x3e0cec: 0x320f809  jalr        $t9
label_3e0cf0:
    if (ctx->pc == 0x3E0CF0u) {
        ctx->pc = 0x3E0CF4u;
        goto label_3e0cf4;
    }
    ctx->pc = 0x3E0CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E0CF4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E0CF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E0CF4u; }
            if (ctx->pc != 0x3E0CF4u) { return; }
        }
        }
    }
    ctx->pc = 0x3E0CF4u;
label_3e0cf4:
    // 0x3e0cf4: 0x928202db  lbu         $v0, 0x2DB($s4)
    ctx->pc = 0x3e0cf4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 731)));
label_3e0cf8:
    // 0x3e0cf8: 0x104001ea  beqz        $v0, . + 4 + (0x1EA << 2)
label_3e0cfc:
    if (ctx->pc == 0x3E0CFCu) {
        ctx->pc = 0x3E0D00u;
        goto label_3e0d00;
    }
    ctx->pc = 0x3E0CF8u;
    {
        const bool branch_taken_0x3e0cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0cf8) {
            ctx->pc = 0x3E14A4u;
            goto label_3e14a4;
        }
    }
    ctx->pc = 0x3E0D00u;
label_3e0d00:
    // 0x3e0d00: 0xc0775b0  jal         func_1DD6C0
label_3e0d04:
    if (ctx->pc == 0x3E0D04u) {
        ctx->pc = 0x3E0D04u;
            // 0x3e0d04: 0xa28002db  sb          $zero, 0x2DB($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 731), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3E0D08u;
        goto label_3e0d08;
    }
    ctx->pc = 0x3E0D00u;
    SET_GPR_U32(ctx, 31, 0x3E0D08u);
    ctx->pc = 0x3E0D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0D00u;
            // 0x3e0d04: 0xa28002db  sb          $zero, 0x2DB($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 731), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6C0u;
    if (runtime->hasFunction(0x1DD6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0D08u; }
        if (ctx->pc != 0x3E0D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6C0_0x1dd6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0D08u; }
        if (ctx->pc != 0x3E0D08u) { return; }
    }
    ctx->pc = 0x3E0D08u;
label_3e0d08:
    // 0x3e0d08: 0xc0775ac  jal         func_1DD6B0
label_3e0d0c:
    if (ctx->pc == 0x3E0D0Cu) {
        ctx->pc = 0x3E0D0Cu;
            // 0x3e0d0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0D10u;
        goto label_3e0d10;
    }
    ctx->pc = 0x3E0D08u;
    SET_GPR_U32(ctx, 31, 0x3E0D10u);
    ctx->pc = 0x3E0D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0D08u;
            // 0x3e0d0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6B0u;
    if (runtime->hasFunction(0x1DD6B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0D10u; }
        if (ctx->pc != 0x3E0D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6B0_0x1dd6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0D10u; }
        if (ctx->pc != 0x3E0D10u) { return; }
    }
    ctx->pc = 0x3E0D10u;
label_3e0d10:
    // 0x3e0d10: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3e0d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3e0d14:
    // 0x3e0d14: 0x5443000d  bnel        $v0, $v1, . + 4 + (0xD << 2)
label_3e0d18:
    if (ctx->pc == 0x3E0D18u) {
        ctx->pc = 0x3E0D18u;
            // 0x3e0d18: 0x8e820064  lw          $v0, 0x64($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
        ctx->pc = 0x3E0D1Cu;
        goto label_3e0d1c;
    }
    ctx->pc = 0x3E0D14u;
    {
        const bool branch_taken_0x3e0d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e0d14) {
            ctx->pc = 0x3E0D18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0D14u;
            // 0x3e0d18: 0x8e820064  lw          $v0, 0x64($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E0D4Cu;
            goto label_3e0d4c;
        }
    }
    ctx->pc = 0x3E0D1Cu;
label_3e0d1c:
    // 0x3e0d1c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e0d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e0d20:
    // 0x3e0d20: 0xc077250  jal         func_1DC940
label_3e0d24:
    if (ctx->pc == 0x3E0D24u) {
        ctx->pc = 0x3E0D24u;
            // 0x3e0d24: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x3E0D28u;
        goto label_3e0d28;
    }
    ctx->pc = 0x3E0D20u;
    SET_GPR_U32(ctx, 31, 0x3E0D28u);
    ctx->pc = 0x3E0D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0D20u;
            // 0x3e0d24: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC940u;
    if (runtime->hasFunction(0x1DC940u)) {
        auto targetFn = runtime->lookupFunction(0x1DC940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0D28u; }
        if (ctx->pc != 0x3E0D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC940_0x1dc940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0D28u; }
        if (ctx->pc != 0x3E0D28u) { return; }
    }
    ctx->pc = 0x3E0D28u;
label_3e0d28:
    // 0x3e0d28: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x3e0d28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_3e0d2c:
    // 0x3e0d2c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3e0d30:
    if (ctx->pc == 0x3E0D30u) {
        ctx->pc = 0x3E0D34u;
        goto label_3e0d34;
    }
    ctx->pc = 0x3E0D2Cu;
    {
        const bool branch_taken_0x3e0d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0d2c) {
            ctx->pc = 0x3E0D48u;
            goto label_3e0d48;
        }
    }
    ctx->pc = 0x3E0D34u;
label_3e0d34:
    // 0x3e0d34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e0d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e0d38:
    // 0x3e0d38: 0xc0f8ffc  jal         func_3E3FF0
label_3e0d3c:
    if (ctx->pc == 0x3E0D3Cu) {
        ctx->pc = 0x3E0D3Cu;
            // 0x3e0d3c: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x3E0D40u;
        goto label_3e0d40;
    }
    ctx->pc = 0x3E0D38u;
    SET_GPR_U32(ctx, 31, 0x3E0D40u);
    ctx->pc = 0x3E0D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0D38u;
            // 0x3e0d3c: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3FF0u;
    if (runtime->hasFunction(0x3E3FF0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0D40u; }
        if (ctx->pc != 0x3E0D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3FF0_0x3e3ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0D40u; }
        if (ctx->pc != 0x3E0D40u) { return; }
    }
    ctx->pc = 0x3E0D40u;
label_3e0d40:
    // 0x3e0d40: 0x100001de  b           . + 4 + (0x1DE << 2)
label_3e0d44:
    if (ctx->pc == 0x3E0D44u) {
        ctx->pc = 0x3E0D48u;
        goto label_3e0d48;
    }
    ctx->pc = 0x3E0D40u;
    {
        const bool branch_taken_0x3e0d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0d40) {
            ctx->pc = 0x3E14BCu;
            goto label_3e14bc;
        }
    }
    ctx->pc = 0x3E0D48u;
label_3e0d48:
    // 0x3e0d48: 0x8e820064  lw          $v0, 0x64($s4)
    ctx->pc = 0x3e0d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
label_3e0d4c:
    // 0x3e0d4c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_3e0d50:
    if (ctx->pc == 0x3E0D50u) {
        ctx->pc = 0x3E0D50u;
            // 0x3e0d50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E0D54u;
        goto label_3e0d54;
    }
    ctx->pc = 0x3E0D4Cu;
    {
        const bool branch_taken_0x3e0d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0d4c) {
            ctx->pc = 0x3E0D50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0D4Cu;
            // 0x3e0d50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E0D70u;
            goto label_3e0d70;
        }
    }
    ctx->pc = 0x3E0D54u;
label_3e0d54:
    // 0x3e0d54: 0x828202e8  lb          $v0, 0x2E8($s4)
    ctx->pc = 0x3e0d54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 744)));
label_3e0d58:
    // 0x3e0d58: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3e0d5c:
    if (ctx->pc == 0x3E0D5Cu) {
        ctx->pc = 0x3E0D60u;
        goto label_3e0d60;
    }
    ctx->pc = 0x3E0D58u;
    {
        const bool branch_taken_0x3e0d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0d58) {
            ctx->pc = 0x3E0D6Cu;
            goto label_3e0d6c;
        }
    }
    ctx->pc = 0x3E0D60u;
label_3e0d60:
    // 0x3e0d60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e0d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e0d64:
    // 0x3e0d64: 0xc0f85c8  jal         func_3E1720
label_3e0d68:
    if (ctx->pc == 0x3E0D68u) {
        ctx->pc = 0x3E0D68u;
            // 0x3e0d68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0D6Cu;
        goto label_3e0d6c;
    }
    ctx->pc = 0x3E0D64u;
    SET_GPR_U32(ctx, 31, 0x3E0D6Cu);
    ctx->pc = 0x3E0D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0D64u;
            // 0x3e0d68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E1720u;
    if (runtime->hasFunction(0x3E1720u)) {
        auto targetFn = runtime->lookupFunction(0x3E1720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0D6Cu; }
        if (ctx->pc != 0x3E0D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E1720_0x3e1720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0D6Cu; }
        if (ctx->pc != 0x3E0D6Cu) { return; }
    }
    ctx->pc = 0x3E0D6Cu;
label_3e0d6c:
    // 0x3e0d6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e0d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e0d70:
    // 0x3e0d70: 0xc0cf0e4  jal         func_33C390
label_3e0d74:
    if (ctx->pc == 0x3E0D74u) {
        ctx->pc = 0x3E0D74u;
            // 0x3e0d74: 0xa28202d9  sb          $v0, 0x2D9($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 729), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3E0D78u;
        goto label_3e0d78;
    }
    ctx->pc = 0x3E0D70u;
    SET_GPR_U32(ctx, 31, 0x3E0D78u);
    ctx->pc = 0x3E0D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0D70u;
            // 0x3e0d74: 0xa28202d9  sb          $v0, 0x2D9($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 729), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33C390u;
    if (runtime->hasFunction(0x33C390u)) {
        auto targetFn = runtime->lookupFunction(0x33C390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0D78u; }
        if (ctx->pc != 0x3E0D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033C390_0x33c390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0D78u; }
        if (ctx->pc != 0x3E0D78u) { return; }
    }
    ctx->pc = 0x3E0D78u;
label_3e0d78:
    // 0x3e0d78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e0d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0d7c:
    // 0x3e0d7c: 0xc0ceff0  jal         func_33BFC0
label_3e0d80:
    if (ctx->pc == 0x3E0D80u) {
        ctx->pc = 0x3E0D80u;
            // 0x3e0d80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E0D84u;
        goto label_3e0d84;
    }
    ctx->pc = 0x3E0D7Cu;
    SET_GPR_U32(ctx, 31, 0x3E0D84u);
    ctx->pc = 0x3E0D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0D7Cu;
            // 0x3e0d80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFC0u;
    if (runtime->hasFunction(0x33BFC0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0D84u; }
        if (ctx->pc != 0x3E0D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFC0_0x33bfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0D84u; }
        if (ctx->pc != 0x3E0D84u) { return; }
    }
    ctx->pc = 0x3E0D84u;
label_3e0d84:
    // 0x3e0d84: 0x928602eb  lbu         $a2, 0x2EB($s4)
    ctx->pc = 0x3e0d84u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 747)));
label_3e0d88:
    // 0x3e0d88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e0d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0d8c:
    // 0x3e0d8c: 0x26840140  addiu       $a0, $s4, 0x140
    ctx->pc = 0x3e0d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
label_3e0d90:
    // 0x3e0d90: 0xc0b89e4  jal         func_2E2790
label_3e0d94:
    if (ctx->pc == 0x3E0D94u) {
        ctx->pc = 0x3E0D94u;
            // 0x3e0d94: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E0D98u;
        goto label_3e0d98;
    }
    ctx->pc = 0x3E0D90u;
    SET_GPR_U32(ctx, 31, 0x3E0D98u);
    ctx->pc = 0x3E0D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0D90u;
            // 0x3e0d94: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2790u;
    if (runtime->hasFunction(0x2E2790u)) {
        auto targetFn = runtime->lookupFunction(0x2E2790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0D98u; }
        if (ctx->pc != 0x3E0D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2790_0x2e2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0D98u; }
        if (ctx->pc != 0x3E0D98u) { return; }
    }
    ctx->pc = 0x3E0D98u;
label_3e0d98:
    // 0x3e0d98: 0xc0775b0  jal         func_1DD6C0
label_3e0d9c:
    if (ctx->pc == 0x3E0D9Cu) {
        ctx->pc = 0x3E0DA0u;
        goto label_3e0da0;
    }
    ctx->pc = 0x3E0D98u;
    SET_GPR_U32(ctx, 31, 0x3E0DA0u);
    ctx->pc = 0x1DD6C0u;
    if (runtime->hasFunction(0x1DD6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0DA0u; }
        if (ctx->pc != 0x3E0DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6C0_0x1dd6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0DA0u; }
        if (ctx->pc != 0x3E0DA0u) { return; }
    }
    ctx->pc = 0x3E0DA0u;
label_3e0da0:
    // 0x3e0da0: 0xc0775ac  jal         func_1DD6B0
label_3e0da4:
    if (ctx->pc == 0x3E0DA4u) {
        ctx->pc = 0x3E0DA4u;
            // 0x3e0da4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0DA8u;
        goto label_3e0da8;
    }
    ctx->pc = 0x3E0DA0u;
    SET_GPR_U32(ctx, 31, 0x3E0DA8u);
    ctx->pc = 0x3E0DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0DA0u;
            // 0x3e0da4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6B0u;
    if (runtime->hasFunction(0x1DD6B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0DA8u; }
        if (ctx->pc != 0x3E0DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6B0_0x1dd6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0DA8u; }
        if (ctx->pc != 0x3E0DA8u) { return; }
    }
    ctx->pc = 0x3E0DA8u;
label_3e0da8:
    // 0x3e0da8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3e0da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3e0dac:
    // 0x3e0dac: 0x5043000d  beql        $v0, $v1, . + 4 + (0xD << 2)
label_3e0db0:
    if (ctx->pc == 0x3E0DB0u) {
        ctx->pc = 0x3E0DB0u;
            // 0x3e0db0: 0x8e830064  lw          $v1, 0x64($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
        ctx->pc = 0x3E0DB4u;
        goto label_3e0db4;
    }
    ctx->pc = 0x3E0DACu;
    {
        const bool branch_taken_0x3e0dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e0dac) {
            ctx->pc = 0x3E0DB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0DACu;
            // 0x3e0db0: 0x8e830064  lw          $v1, 0x64($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E0DE4u;
            goto label_3e0de4;
        }
    }
    ctx->pc = 0x3E0DB4u;
label_3e0db4:
    // 0x3e0db4: 0x8e830064  lw          $v1, 0x64($s4)
    ctx->pc = 0x3e0db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
label_3e0db8:
    // 0x3e0db8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e0db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3e0dbc:
    // 0x3e0dbc: 0x24429e40  addiu       $v0, $v0, -0x61C0
    ctx->pc = 0x3e0dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942272));
label_3e0dc0:
    // 0x3e0dc0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3e0dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_3e0dc4:
    // 0x3e0dc4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3e0dc4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3e0dc8:
    // 0x3e0dc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e0dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3e0dcc:
    // 0x3e0dcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e0dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e0dd0:
    // 0x3e0dd0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3e0dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3e0dd4:
    // 0x3e0dd4: 0xc0b8160  jal         func_2E0580
label_3e0dd8:
    if (ctx->pc == 0x3E0DD8u) {
        ctx->pc = 0x3E0DD8u;
            // 0x3e0dd8: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->pc = 0x3E0DDCu;
        goto label_3e0ddc;
    }
    ctx->pc = 0x3E0DD4u;
    SET_GPR_U32(ctx, 31, 0x3E0DDCu);
    ctx->pc = 0x3E0DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0DD4u;
            // 0x3e0dd8: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0DDCu; }
        if (ctx->pc != 0x3E0DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0DDCu; }
        if (ctx->pc != 0x3E0DDCu) { return; }
    }
    ctx->pc = 0x3E0DDCu;
label_3e0ddc:
    // 0x3e0ddc: 0x1000000b  b           . + 4 + (0xB << 2)
label_3e0de0:
    if (ctx->pc == 0x3E0DE0u) {
        ctx->pc = 0x3E0DE0u;
            // 0x3e0de0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0DE4u;
        goto label_3e0de4;
    }
    ctx->pc = 0x3E0DDCu;
    {
        const bool branch_taken_0x3e0ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0DDCu;
            // 0x3e0de0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0ddc) {
            ctx->pc = 0x3E0E0Cu;
            goto label_3e0e0c;
        }
    }
    ctx->pc = 0x3E0DE4u;
label_3e0de4:
    // 0x3e0de4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e0de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3e0de8:
    // 0x3e0de8: 0x24429e48  addiu       $v0, $v0, -0x61B8
    ctx->pc = 0x3e0de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942280));
label_3e0dec:
    // 0x3e0dec: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3e0decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_3e0df0:
    // 0x3e0df0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3e0df0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3e0df4:
    // 0x3e0df4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e0df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3e0df8:
    // 0x3e0df8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e0df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e0dfc:
    // 0x3e0dfc: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3e0dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3e0e00:
    // 0x3e0e00: 0xc0b8160  jal         func_2E0580
label_3e0e04:
    if (ctx->pc == 0x3E0E04u) {
        ctx->pc = 0x3E0E04u;
            // 0x3e0e04: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->pc = 0x3E0E08u;
        goto label_3e0e08;
    }
    ctx->pc = 0x3E0E00u;
    SET_GPR_U32(ctx, 31, 0x3E0E08u);
    ctx->pc = 0x3E0E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0E00u;
            // 0x3e0e04: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0E08u; }
        if (ctx->pc != 0x3E0E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0E08u; }
        if (ctx->pc != 0x3E0E08u) { return; }
    }
    ctx->pc = 0x3E0E08u;
label_3e0e08:
    // 0x3e0e08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e0e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e0e0c:
    // 0x3e0e0c: 0xc0f9004  jal         func_3E4010
label_3e0e10:
    if (ctx->pc == 0x3E0E10u) {
        ctx->pc = 0x3E0E14u;
        goto label_3e0e14;
    }
    ctx->pc = 0x3E0E0Cu;
    SET_GPR_U32(ctx, 31, 0x3E0E14u);
    ctx->pc = 0x3E4010u;
    if (runtime->hasFunction(0x3E4010u)) {
        auto targetFn = runtime->lookupFunction(0x3E4010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0E14u; }
        if (ctx->pc != 0x3E0E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E4010_0x3e4010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0E14u; }
        if (ctx->pc != 0x3E0E14u) { return; }
    }
    ctx->pc = 0x3E0E14u;
label_3e0e14:
    // 0x3e0e14: 0x28430003  slti        $v1, $v0, 0x3
    ctx->pc = 0x3e0e14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_3e0e18:
    // 0x3e0e18: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e0e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3e0e1c:
    // 0x3e0e1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e0e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3e0e20:
    // 0x3e0e20: 0x24429d50  addiu       $v0, $v0, -0x62B0
    ctx->pc = 0x3e0e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942032));
label_3e0e24:
    // 0x3e0e24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e0e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e0e28:
    // 0x3e0e28: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3e0e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3e0e2c:
    // 0x3e0e2c: 0xc0b8160  jal         func_2E0580
label_3e0e30:
    if (ctx->pc == 0x3E0E30u) {
        ctx->pc = 0x3E0E30u;
            // 0x3e0e30: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->pc = 0x3E0E34u;
        goto label_3e0e34;
    }
    ctx->pc = 0x3E0E2Cu;
    SET_GPR_U32(ctx, 31, 0x3E0E34u);
    ctx->pc = 0x3E0E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0E2Cu;
            // 0x3e0e30: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0E34u; }
        if (ctx->pc != 0x3E0E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0E34u; }
        if (ctx->pc != 0x3E0E34u) { return; }
    }
    ctx->pc = 0x3E0E34u;
label_3e0e34:
    // 0x3e0e34: 0xc0cefec  jal         func_33BFB0
label_3e0e38:
    if (ctx->pc == 0x3E0E38u) {
        ctx->pc = 0x3E0E38u;
            // 0x3e0e38: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->pc = 0x3E0E3Cu;
        goto label_3e0e3c;
    }
    ctx->pc = 0x3E0E34u;
    SET_GPR_U32(ctx, 31, 0x3E0E3Cu);
    ctx->pc = 0x3E0E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0E34u;
            // 0x3e0e38: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFB0u;
    if (runtime->hasFunction(0x33BFB0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0E3Cu; }
        if (ctx->pc != 0x3E0E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFB0_0x33bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0E3Cu; }
        if (ctx->pc != 0x3E0E3Cu) { return; }
    }
    ctx->pc = 0x3E0E3Cu;
label_3e0e3c:
    // 0x3e0e3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e0e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0e40:
    // 0x3e0e40: 0xc0efc48  jal         func_3BF120
label_3e0e44:
    if (ctx->pc == 0x3E0E44u) {
        ctx->pc = 0x3E0E44u;
            // 0x3e0e44: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->pc = 0x3E0E48u;
        goto label_3e0e48;
    }
    ctx->pc = 0x3E0E40u;
    SET_GPR_U32(ctx, 31, 0x3E0E48u);
    ctx->pc = 0x3E0E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0E40u;
            // 0x3e0e44: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF120u;
    if (runtime->hasFunction(0x3BF120u)) {
        auto targetFn = runtime->lookupFunction(0x3BF120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0E48u; }
        if (ctx->pc != 0x3E0E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF120_0x3bf120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0E48u; }
        if (ctx->pc != 0x3E0E48u) { return; }
    }
    ctx->pc = 0x3E0E48u;
label_3e0e48:
    // 0x3e0e48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e0e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e0e4c:
    // 0x3e0e4c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3e0e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0e50:
    // 0x3e0e50: 0xc04cbf0  jal         func_132FC0
label_3e0e54:
    if (ctx->pc == 0x3E0E54u) {
        ctx->pc = 0x3E0E54u;
            // 0x3e0e54: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3E0E58u;
        goto label_3e0e58;
    }
    ctx->pc = 0x3E0E50u;
    SET_GPR_U32(ctx, 31, 0x3E0E58u);
    ctx->pc = 0x3E0E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0E50u;
            // 0x3e0e54: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0E58u; }
        if (ctx->pc != 0x3E0E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0E58u; }
        if (ctx->pc != 0x3E0E58u) { return; }
    }
    ctx->pc = 0x3E0E58u;
label_3e0e58:
    // 0x3e0e58: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3e0e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3e0e5c:
    // 0x3e0e5c: 0xc04cc44  jal         func_133110
label_3e0e60:
    if (ctx->pc == 0x3E0E60u) {
        ctx->pc = 0x3E0E60u;
            // 0x3e0e60: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0E64u;
        goto label_3e0e64;
    }
    ctx->pc = 0x3E0E5Cu;
    SET_GPR_U32(ctx, 31, 0x3E0E64u);
    ctx->pc = 0x3E0E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0E5Cu;
            // 0x3e0e60: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0E64u; }
        if (ctx->pc != 0x3E0E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0E64u; }
        if (ctx->pc != 0x3E0E64u) { return; }
    }
    ctx->pc = 0x3E0E64u;
label_3e0e64:
    // 0x3e0e64: 0xc0cefec  jal         func_33BFB0
label_3e0e68:
    if (ctx->pc == 0x3E0E68u) {
        ctx->pc = 0x3E0E68u;
            // 0x3e0e68: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->pc = 0x3E0E6Cu;
        goto label_3e0e6c;
    }
    ctx->pc = 0x3E0E64u;
    SET_GPR_U32(ctx, 31, 0x3E0E6Cu);
    ctx->pc = 0x3E0E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0E64u;
            // 0x3e0e68: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFB0u;
    if (runtime->hasFunction(0x33BFB0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0E6Cu; }
        if (ctx->pc != 0x3E0E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFB0_0x33bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0E6Cu; }
        if (ctx->pc != 0x3E0E6Cu) { return; }
    }
    ctx->pc = 0x3E0E6Cu;
label_3e0e6c:
    // 0x3e0e6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e0e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0e70:
    // 0x3e0e70: 0xc0efc48  jal         func_3BF120
label_3e0e74:
    if (ctx->pc == 0x3E0E74u) {
        ctx->pc = 0x3E0E74u;
            // 0x3e0e74: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->pc = 0x3E0E78u;
        goto label_3e0e78;
    }
    ctx->pc = 0x3E0E70u;
    SET_GPR_U32(ctx, 31, 0x3E0E78u);
    ctx->pc = 0x3E0E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0E70u;
            // 0x3e0e74: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF120u;
    if (runtime->hasFunction(0x3BF120u)) {
        auto targetFn = runtime->lookupFunction(0x3BF120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0E78u; }
        if (ctx->pc != 0x3E0E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF120_0x3bf120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0E78u; }
        if (ctx->pc != 0x3E0E78u) { return; }
    }
    ctx->pc = 0x3E0E78u;
label_3e0e78:
    // 0x3e0e78: 0x3c080066  lui         $t0, 0x66
    ctx->pc = 0x3e0e78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)102 << 16));
label_3e0e7c:
    // 0x3e0e7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3e0e7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e0e80:
    // 0x3e0e80: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3e0e80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0e84:
    // 0x3e0e84: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3e0e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3e0e88:
    // 0x3e0e88: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3e0e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3e0e8c:
    // 0x3e0e8c: 0xc0f85a4  jal         func_3E1690
label_3e0e90:
    if (ctx->pc == 0x3E0E90u) {
        ctx->pc = 0x3E0E90u;
            // 0x3e0e90: 0x2508a080  addiu       $t0, $t0, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294942848));
        ctx->pc = 0x3E0E94u;
        goto label_3e0e94;
    }
    ctx->pc = 0x3E0E8Cu;
    SET_GPR_U32(ctx, 31, 0x3E0E94u);
    ctx->pc = 0x3E0E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0E8Cu;
            // 0x3e0e90: 0x2508a080  addiu       $t0, $t0, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294942848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E1690u;
    if (runtime->hasFunction(0x3E1690u)) {
        auto targetFn = runtime->lookupFunction(0x3E1690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0E94u; }
        if (ctx->pc != 0x3E0E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E1690_0x3e1690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0E94u; }
        if (ctx->pc != 0x3E0E94u) { return; }
    }
    ctx->pc = 0x3E0E94u;
label_3e0e94:
    // 0x3e0e94: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3e0e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3e0e98:
    // 0x3e0e98: 0xc04c994  jal         func_132650
label_3e0e9c:
    if (ctx->pc == 0x3E0E9Cu) {
        ctx->pc = 0x3E0E9Cu;
            // 0x3e0e9c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3E0EA0u;
        goto label_3e0ea0;
    }
    ctx->pc = 0x3E0E98u;
    SET_GPR_U32(ctx, 31, 0x3E0EA0u);
    ctx->pc = 0x3E0E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0E98u;
            // 0x3e0e9c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0EA0u; }
        if (ctx->pc != 0x3E0EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0EA0u; }
        if (ctx->pc != 0x3E0EA0u) { return; }
    }
    ctx->pc = 0x3E0EA0u;
label_3e0ea0:
    // 0x3e0ea0: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x3e0ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_3e0ea4:
    // 0x3e0ea4: 0xc0c05e0  jal         func_301780
label_3e0ea8:
    if (ctx->pc == 0x3E0EA8u) {
        ctx->pc = 0x3E0EA8u;
            // 0x3e0ea8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3E0EACu;
        goto label_3e0eac;
    }
    ctx->pc = 0x3E0EA4u;
    SET_GPR_U32(ctx, 31, 0x3E0EACu);
    ctx->pc = 0x3E0EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0EA4u;
            // 0x3e0ea8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301780u;
    if (runtime->hasFunction(0x301780u)) {
        auto targetFn = runtime->lookupFunction(0x301780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0EACu; }
        if (ctx->pc != 0x3E0EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301780_0x301780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0EACu; }
        if (ctx->pc != 0x3E0EACu) { return; }
    }
    ctx->pc = 0x3E0EACu;
label_3e0eac:
    // 0x3e0eac: 0xc0cef9c  jal         func_33BE70
label_3e0eb0:
    if (ctx->pc == 0x3E0EB0u) {
        ctx->pc = 0x3E0EB0u;
            // 0x3e0eb0: 0x26840090  addiu       $a0, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->pc = 0x3E0EB4u;
        goto label_3e0eb4;
    }
    ctx->pc = 0x3E0EACu;
    SET_GPR_U32(ctx, 31, 0x3E0EB4u);
    ctx->pc = 0x3E0EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0EACu;
            // 0x3e0eb0: 0x26840090  addiu       $a0, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BE70u;
    if (runtime->hasFunction(0x33BE70u)) {
        auto targetFn = runtime->lookupFunction(0x33BE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0EB4u; }
        if (ctx->pc != 0x3E0EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BE70_0x33be70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0EB4u; }
        if (ctx->pc != 0x3E0EB4u) { return; }
    }
    ctx->pc = 0x3E0EB4u;
label_3e0eb4:
    // 0x3e0eb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e0eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0eb8:
    // 0x3e0eb8: 0xc0e1b28  jal         func_386CA0
label_3e0ebc:
    if (ctx->pc == 0x3E0EBCu) {
        ctx->pc = 0x3E0EBCu;
            // 0x3e0ebc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0EC0u;
        goto label_3e0ec0;
    }
    ctx->pc = 0x3E0EB8u;
    SET_GPR_U32(ctx, 31, 0x3E0EC0u);
    ctx->pc = 0x3E0EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0EB8u;
            // 0x3e0ebc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386CA0u;
    if (runtime->hasFunction(0x386CA0u)) {
        auto targetFn = runtime->lookupFunction(0x386CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0EC0u; }
        if (ctx->pc != 0x3E0EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386CA0_0x386ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0EC0u; }
        if (ctx->pc != 0x3E0EC0u) { return; }
    }
    ctx->pc = 0x3E0EC0u;
label_3e0ec0:
    // 0x3e0ec0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3e0ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3e0ec4:
    // 0x3e0ec4: 0x26840140  addiu       $a0, $s4, 0x140
    ctx->pc = 0x3e0ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
label_3e0ec8:
    // 0x3e0ec8: 0xc0e5f64  jal         func_397D90
label_3e0ecc:
    if (ctx->pc == 0x3E0ECCu) {
        ctx->pc = 0x3E0ECCu;
            // 0x3e0ecc: 0xae82027c  sw          $v0, 0x27C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 636), GPR_U32(ctx, 2));
        ctx->pc = 0x3E0ED0u;
        goto label_3e0ed0;
    }
    ctx->pc = 0x3E0EC8u;
    SET_GPR_U32(ctx, 31, 0x3E0ED0u);
    ctx->pc = 0x3E0ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0EC8u;
            // 0x3e0ecc: 0xae82027c  sw          $v0, 0x27C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 636), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397D90u;
    if (runtime->hasFunction(0x397D90u)) {
        auto targetFn = runtime->lookupFunction(0x397D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0ED0u; }
        if (ctx->pc != 0x3E0ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397D90_0x397d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0ED0u; }
        if (ctx->pc != 0x3E0ED0u) { return; }
    }
    ctx->pc = 0x3E0ED0u;
label_3e0ed0:
    // 0x3e0ed0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e0ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0ed4:
    // 0x3e0ed4: 0xc04cc04  jal         func_133010
label_3e0ed8:
    if (ctx->pc == 0x3E0ED8u) {
        ctx->pc = 0x3E0ED8u;
            // 0x3e0ed8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3E0EDCu;
        goto label_3e0edc;
    }
    ctx->pc = 0x3E0ED4u;
    SET_GPR_U32(ctx, 31, 0x3E0EDCu);
    ctx->pc = 0x3E0ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0ED4u;
            // 0x3e0ed8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0EDCu; }
        if (ctx->pc != 0x3E0EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0EDCu; }
        if (ctx->pc != 0x3E0EDCu) { return; }
    }
    ctx->pc = 0x3E0EDCu;
label_3e0edc:
    // 0x3e0edc: 0xc0cefec  jal         func_33BFB0
label_3e0ee0:
    if (ctx->pc == 0x3E0EE0u) {
        ctx->pc = 0x3E0EE0u;
            // 0x3e0ee0: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->pc = 0x3E0EE4u;
        goto label_3e0ee4;
    }
    ctx->pc = 0x3E0EDCu;
    SET_GPR_U32(ctx, 31, 0x3E0EE4u);
    ctx->pc = 0x3E0EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0EDCu;
            // 0x3e0ee0: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFB0u;
    if (runtime->hasFunction(0x33BFB0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0EE4u; }
        if (ctx->pc != 0x3E0EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFB0_0x33bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0EE4u; }
        if (ctx->pc != 0x3E0EE4u) { return; }
    }
    ctx->pc = 0x3E0EE4u;
label_3e0ee4:
    // 0x3e0ee4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3e0ee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0ee8:
    // 0x3e0ee8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3e0ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3e0eec:
    // 0x3e0eec: 0x3c024188  lui         $v0, 0x4188
    ctx->pc = 0x3e0eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16776 << 16));
label_3e0ef0:
    // 0x3e0ef0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3e0ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e0ef4:
    // 0x3e0ef4: 0xc04cc7c  jal         func_1331F0
label_3e0ef8:
    if (ctx->pc == 0x3E0EF8u) {
        ctx->pc = 0x3E0EF8u;
            // 0x3e0ef8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0EFCu;
        goto label_3e0efc;
    }
    ctx->pc = 0x3E0EF4u;
    SET_GPR_U32(ctx, 31, 0x3E0EFCu);
    ctx->pc = 0x3E0EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0EF4u;
            // 0x3e0ef8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0EFCu; }
        if (ctx->pc != 0x3E0EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0EFCu; }
        if (ctx->pc != 0x3E0EFCu) { return; }
    }
    ctx->pc = 0x3E0EFCu;
label_3e0efc:
    // 0x3e0efc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e0efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e0f00:
    // 0x3e0f00: 0xc0f8e34  jal         func_3E38D0
label_3e0f04:
    if (ctx->pc == 0x3E0F04u) {
        ctx->pc = 0x3E0F04u;
            // 0x3e0f04: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3E0F08u;
        goto label_3e0f08;
    }
    ctx->pc = 0x3E0F00u;
    SET_GPR_U32(ctx, 31, 0x3E0F08u);
    ctx->pc = 0x3E0F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0F00u;
            // 0x3e0f04: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E38D0u;
    if (runtime->hasFunction(0x3E38D0u)) {
        auto targetFn = runtime->lookupFunction(0x3E38D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0F08u; }
        if (ctx->pc != 0x3E0F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E38D0_0x3e38d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0F08u; }
        if (ctx->pc != 0x3E0F08u) { return; }
    }
    ctx->pc = 0x3E0F08u;
label_3e0f08:
    // 0x3e0f08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e0f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e0f0c:
    // 0x3e0f0c: 0xc0f8ffc  jal         func_3E3FF0
label_3e0f10:
    if (ctx->pc == 0x3E0F10u) {
        ctx->pc = 0x3E0F10u;
            // 0x3e0f10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E0F14u;
        goto label_3e0f14;
    }
    ctx->pc = 0x3E0F0Cu;
    SET_GPR_U32(ctx, 31, 0x3E0F14u);
    ctx->pc = 0x3E0F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0F0Cu;
            // 0x3e0f10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3FF0u;
    if (runtime->hasFunction(0x3E3FF0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0F14u; }
        if (ctx->pc != 0x3E0F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3FF0_0x3e3ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0F14u; }
        if (ctx->pc != 0x3E0F14u) { return; }
    }
    ctx->pc = 0x3E0F14u;
label_3e0f14:
    // 0x3e0f14: 0xc040180  jal         func_100600
label_3e0f18:
    if (ctx->pc == 0x3E0F18u) {
        ctx->pc = 0x3E0F18u;
            // 0x3e0f18: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->pc = 0x3E0F1Cu;
        goto label_3e0f1c;
    }
    ctx->pc = 0x3E0F14u;
    SET_GPR_U32(ctx, 31, 0x3E0F1Cu);
    ctx->pc = 0x3E0F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0F14u;
            // 0x3e0f18: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0F1Cu; }
        if (ctx->pc != 0x3E0F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0F1Cu; }
        if (ctx->pc != 0x3E0F1Cu) { return; }
    }
    ctx->pc = 0x3E0F1Cu;
label_3e0f1c:
    // 0x3e0f1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3e0f1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0f20:
    // 0x3e0f20: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_3e0f24:
    if (ctx->pc == 0x3E0F24u) {
        ctx->pc = 0x3E0F28u;
        goto label_3e0f28;
    }
    ctx->pc = 0x3E0F20u;
    {
        const bool branch_taken_0x3e0f20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0f20) {
            ctx->pc = 0x3E0F74u;
            goto label_3e0f74;
        }
    }
    ctx->pc = 0x3E0F28u;
label_3e0f28:
    // 0x3e0f28: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e0f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e0f2c:
    // 0x3e0f2c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3e0f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3e0f30:
    // 0x3e0f30: 0xc0f85a0  jal         func_3E1680
label_3e0f34:
    if (ctx->pc == 0x3E0F34u) {
        ctx->pc = 0x3E0F34u;
            // 0x3e0f34: 0x24440054  addiu       $a0, $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
        ctx->pc = 0x3E0F38u;
        goto label_3e0f38;
    }
    ctx->pc = 0x3E0F30u;
    SET_GPR_U32(ctx, 31, 0x3E0F38u);
    ctx->pc = 0x3E0F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0F30u;
            // 0x3e0f34: 0x24440054  addiu       $a0, $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E1680u;
    if (runtime->hasFunction(0x3E1680u)) {
        auto targetFn = runtime->lookupFunction(0x3E1680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0F38u; }
        if (ctx->pc != 0x3E0F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E1680_0x3e1680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0F38u; }
        if (ctx->pc != 0x3E0F38u) { return; }
    }
    ctx->pc = 0x3E0F38u;
label_3e0f38:
    // 0x3e0f38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e0f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0f3c:
    // 0x3e0f3c: 0xc0d1c10  jal         func_347040
label_3e0f40:
    if (ctx->pc == 0x3E0F40u) {
        ctx->pc = 0x3E0F40u;
            // 0x3e0f40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0F44u;
        goto label_3e0f44;
    }
    ctx->pc = 0x3E0F3Cu;
    SET_GPR_U32(ctx, 31, 0x3E0F44u);
    ctx->pc = 0x3E0F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0F3Cu;
            // 0x3e0f40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0F44u; }
        if (ctx->pc != 0x3E0F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0F44u; }
        if (ctx->pc != 0x3E0F44u) { return; }
    }
    ctx->pc = 0x3E0F44u;
label_3e0f44:
    // 0x3e0f44: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3e0f44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0f48:
    // 0x3e0f48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e0f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e0f4c:
    // 0x3e0f4c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x3e0f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_3e0f50:
    // 0x3e0f50: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3e0f50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e0f54:
    // 0x3e0f54: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3e0f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e0f58:
    // 0x3e0f58: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x3e0f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3e0f5c:
    // 0x3e0f5c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x3e0f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_3e0f60:
    // 0x3e0f60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e0f60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e0f64:
    // 0x3e0f64: 0x3445abd8  ori         $a1, $v0, 0xABD8
    ctx->pc = 0x3e0f64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43992);
label_3e0f68:
    // 0x3e0f68: 0x268a0360  addiu       $t2, $s4, 0x360
    ctx->pc = 0x3e0f68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 20), 864));
label_3e0f6c:
    // 0x3e0f6c: 0xc13d944  jal         func_4F6510
label_3e0f70:
    if (ctx->pc == 0x3E0F70u) {
        ctx->pc = 0x3E0F70u;
            // 0x3e0f70: 0x240b0004  addiu       $t3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3E0F74u;
        goto label_3e0f74;
    }
    ctx->pc = 0x3E0F6Cu;
    SET_GPR_U32(ctx, 31, 0x3E0F74u);
    ctx->pc = 0x3E0F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0F6Cu;
            // 0x3e0f70: 0x240b0004  addiu       $t3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F6510u;
    if (runtime->hasFunction(0x4F6510u)) {
        auto targetFn = runtime->lookupFunction(0x4F6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0F74u; }
        if (ctx->pc != 0x3E0F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F6510_0x4f6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0F74u; }
        if (ctx->pc != 0x3E0F74u) { return; }
    }
    ctx->pc = 0x3E0F74u;
label_3e0f74:
    // 0x3e0f74: 0xc0c05c4  jal         func_301710
label_3e0f78:
    if (ctx->pc == 0x3E0F78u) {
        ctx->pc = 0x3E0F7Cu;
        goto label_3e0f7c;
    }
    ctx->pc = 0x3E0F74u;
    SET_GPR_U32(ctx, 31, 0x3E0F7Cu);
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0F7Cu; }
        if (ctx->pc != 0x3E0F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0F7Cu; }
        if (ctx->pc != 0x3E0F7Cu) { return; }
    }
    ctx->pc = 0x3E0F7Cu;
label_3e0f7c:
    // 0x3e0f7c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x3e0f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3e0f80:
    // 0x3e0f80: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x3e0f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_3e0f84:
    // 0x3e0f84: 0xc0ec314  jal         func_3B0C50
label_3e0f88:
    if (ctx->pc == 0x3E0F88u) {
        ctx->pc = 0x3E0F88u;
            // 0x3e0f88: 0x344518a9  ori         $a1, $v0, 0x18A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6313);
        ctx->pc = 0x3E0F8Cu;
        goto label_3e0f8c;
    }
    ctx->pc = 0x3E0F84u;
    SET_GPR_U32(ctx, 31, 0x3E0F8Cu);
    ctx->pc = 0x3E0F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0F84u;
            // 0x3e0f88: 0x344518a9  ori         $a1, $v0, 0x18A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6313);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B0C50u;
    if (runtime->hasFunction(0x3B0C50u)) {
        auto targetFn = runtime->lookupFunction(0x3B0C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0F8Cu; }
        if (ctx->pc != 0x3E0F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B0C50_0x3b0c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0F8Cu; }
        if (ctx->pc != 0x3E0F8Cu) { return; }
    }
    ctx->pc = 0x3E0F8Cu;
label_3e0f8c:
    // 0x3e0f8c: 0xc0c05c4  jal         func_301710
label_3e0f90:
    if (ctx->pc == 0x3E0F90u) {
        ctx->pc = 0x3E0F94u;
        goto label_3e0f94;
    }
    ctx->pc = 0x3E0F8Cu;
    SET_GPR_U32(ctx, 31, 0x3E0F94u);
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0F94u; }
        if (ctx->pc != 0x3E0F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0F94u; }
        if (ctx->pc != 0x3E0F94u) { return; }
    }
    ctx->pc = 0x3E0F94u;
label_3e0f94:
    // 0x3e0f94: 0x8e8502c0  lw          $a1, 0x2C0($s4)
    ctx->pc = 0x3e0f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 704)));
label_3e0f98:
    // 0x3e0f98: 0xc0de630  jal         func_3798C0
label_3e0f9c:
    if (ctx->pc == 0x3E0F9Cu) {
        ctx->pc = 0x3E0F9Cu;
            // 0x3e0f9c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3E0FA0u;
        goto label_3e0fa0;
    }
    ctx->pc = 0x3E0F98u;
    SET_GPR_U32(ctx, 31, 0x3E0FA0u);
    ctx->pc = 0x3E0F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0F98u;
            // 0x3e0f9c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3798C0u;
    if (runtime->hasFunction(0x3798C0u)) {
        auto targetFn = runtime->lookupFunction(0x3798C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0FA0u; }
        if (ctx->pc != 0x3E0FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003798C0_0x3798c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0FA0u; }
        if (ctx->pc != 0x3E0FA0u) { return; }
    }
    ctx->pc = 0x3E0FA0u;
label_3e0fa0:
    // 0x3e0fa0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e0fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e0fa4:
    // 0x3e0fa4: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x3e0fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3e0fa8:
    // 0x3e0fa8: 0xc0f0d18  jal         func_3C3460
label_3e0fac:
    if (ctx->pc == 0x3E0FACu) {
        ctx->pc = 0x3E0FACu;
            // 0x3e0fac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0FB0u;
        goto label_3e0fb0;
    }
    ctx->pc = 0x3E0FA8u;
    SET_GPR_U32(ctx, 31, 0x3E0FB0u);
    ctx->pc = 0x3E0FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0FA8u;
            // 0x3e0fac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3460u;
    if (runtime->hasFunction(0x3C3460u)) {
        auto targetFn = runtime->lookupFunction(0x3C3460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0FB0u; }
        if (ctx->pc != 0x3E0FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3460_0x3c3460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0FB0u; }
        if (ctx->pc != 0x3E0FB0u) { return; }
    }
    ctx->pc = 0x3E0FB0u;
label_3e0fb0:
    // 0x3e0fb0: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x3e0fb0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
label_3e0fb4:
    // 0x3e0fb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e0fb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0fb8:
    // 0x3e0fb8: 0x26310e80  addiu       $s1, $s1, 0xE80
    ctx->pc = 0x3e0fb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3712));
label_3e0fbc:
    // 0x3e0fbc: 0xc0775b0  jal         func_1DD6C0
label_3e0fc0:
    if (ctx->pc == 0x3E0FC0u) {
        ctx->pc = 0x3E0FC0u;
            // 0x3e0fc0: 0x8e330004  lw          $s3, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x3E0FC4u;
        goto label_3e0fc4;
    }
    ctx->pc = 0x3E0FBCu;
    SET_GPR_U32(ctx, 31, 0x3E0FC4u);
    ctx->pc = 0x3E0FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0FBCu;
            // 0x3e0fc0: 0x8e330004  lw          $s3, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6C0u;
    if (runtime->hasFunction(0x1DD6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0FC4u; }
        if (ctx->pc != 0x3E0FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6C0_0x1dd6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0FC4u; }
        if (ctx->pc != 0x3E0FC4u) { return; }
    }
    ctx->pc = 0x3E0FC4u;
label_3e0fc4:
    // 0x3e0fc4: 0xc0775ac  jal         func_1DD6B0
label_3e0fc8:
    if (ctx->pc == 0x3E0FC8u) {
        ctx->pc = 0x3E0FC8u;
            // 0x3e0fc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0FCCu;
        goto label_3e0fcc;
    }
    ctx->pc = 0x3E0FC4u;
    SET_GPR_U32(ctx, 31, 0x3E0FCCu);
    ctx->pc = 0x3E0FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0FC4u;
            // 0x3e0fc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6B0u;
    if (runtime->hasFunction(0x1DD6B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0FCCu; }
        if (ctx->pc != 0x3E0FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6B0_0x1dd6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0FCCu; }
        if (ctx->pc != 0x3E0FCCu) { return; }
    }
    ctx->pc = 0x3E0FCCu;
label_3e0fcc:
    // 0x3e0fcc: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3e0fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3e0fd0:
    // 0x3e0fd0: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_3e0fd4:
    if (ctx->pc == 0x3E0FD4u) {
        ctx->pc = 0x3E0FD8u;
        goto label_3e0fd8;
    }
    ctx->pc = 0x3E0FD0u;
    {
        const bool branch_taken_0x3e0fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e0fd0) {
            ctx->pc = 0x3E1008u;
            goto label_3e1008;
        }
    }
    ctx->pc = 0x3E0FD8u;
label_3e0fd8:
    // 0x3e0fd8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e0fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e0fdc:
    // 0x3e0fdc: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x3e0fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3e0fe0:
    // 0x3e0fe0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e0fe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e0fe4:
    // 0x3e0fe4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3e0fe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3e0fe8:
    // 0x3e0fe8: 0x320f809  jalr        $t9
label_3e0fec:
    if (ctx->pc == 0x3E0FECu) {
        ctx->pc = 0x3E0FECu;
            // 0x3e0fec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0FF0u;
        goto label_3e0ff0;
    }
    ctx->pc = 0x3E0FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E0FF0u);
        ctx->pc = 0x3E0FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0FE8u;
            // 0x3e0fec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E0FF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E0FF0u; }
            if (ctx->pc != 0x3E0FF0u) { return; }
        }
        }
    }
    ctx->pc = 0x3E0FF0u;
label_3e0ff0:
    // 0x3e0ff0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3e0ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e0ff4:
    // 0x3e0ff4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e0ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e0ff8:
    // 0x3e0ff8: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x3e0ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
label_3e0ffc:
    // 0x3e0ffc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e0ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e1000:
    // 0x3e1000: 0x10000005  b           . + 4 + (0x5 << 2)
label_3e1004:
    if (ctx->pc == 0x3E1004u) {
        ctx->pc = 0x3E1004u;
            // 0x3e1004: 0x8c530004  lw          $s3, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x3E1008u;
        goto label_3e1008;
    }
    ctx->pc = 0x3E1000u;
    {
        const bool branch_taken_0x3e1000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1000u;
            // 0x3e1004: 0x8c530004  lw          $s3, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1000) {
            ctx->pc = 0x3E1018u;
            goto label_3e1018;
        }
    }
    ctx->pc = 0x3E1008u;
label_3e1008:
    // 0x3e1008: 0x2e010003  sltiu       $at, $s0, 0x3
    ctx->pc = 0x3e1008u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_3e100c:
    // 0x3e100c: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
label_3e1010:
    if (ctx->pc == 0x3E1010u) {
        ctx->pc = 0x3E1014u;
        goto label_3e1014;
    }
    ctx->pc = 0x3E100Cu;
    {
        const bool branch_taken_0x3e100c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e100c) {
            ctx->pc = 0x3E1078u;
            goto label_3e1078;
        }
    }
    ctx->pc = 0x3E1014u;
label_3e1014:
    // 0x3e1014: 0x0  nop
    ctx->pc = 0x3e1014u;
    // NOP
label_3e1018:
    // 0x3e1018: 0xc077264  jal         func_1DC990
label_3e101c:
    if (ctx->pc == 0x3E101Cu) {
        ctx->pc = 0x3E101Cu;
            // 0x3e101c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E1020u;
        goto label_3e1020;
    }
    ctx->pc = 0x3E1018u;
    SET_GPR_U32(ctx, 31, 0x3E1020u);
    ctx->pc = 0x3E101Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1018u;
            // 0x3e101c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1020u; }
        if (ctx->pc != 0x3E1020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1020u; }
        if (ctx->pc != 0x3E1020u) { return; }
    }
    ctx->pc = 0x3E1020u;
label_3e1020:
    // 0x3e1020: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3e1020u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e1024:
    // 0x3e1024: 0xc0d1c10  jal         func_347040
label_3e1028:
    if (ctx->pc == 0x3E1028u) {
        ctx->pc = 0x3E1028u;
            // 0x3e1028: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E102Cu;
        goto label_3e102c;
    }
    ctx->pc = 0x3E1024u;
    SET_GPR_U32(ctx, 31, 0x3E102Cu);
    ctx->pc = 0x3E1028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1024u;
            // 0x3e1028: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E102Cu; }
        if (ctx->pc != 0x3E102Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E102Cu; }
        if (ctx->pc != 0x3E102Cu) { return; }
    }
    ctx->pc = 0x3E102Cu;
label_3e102c:
    // 0x3e102c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3e102cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3e1030:
    // 0x3e1030: 0xc04cc1c  jal         func_133070
label_3e1034:
    if (ctx->pc == 0x3E1034u) {
        ctx->pc = 0x3E1034u;
            // 0x3e1034: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E1038u;
        goto label_3e1038;
    }
    ctx->pc = 0x3E1030u;
    SET_GPR_U32(ctx, 31, 0x3E1038u);
    ctx->pc = 0x3E1034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1030u;
            // 0x3e1034: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1038u; }
        if (ctx->pc != 0x3E1038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1038u; }
        if (ctx->pc != 0x3E1038u) { return; }
    }
    ctx->pc = 0x3E1038u;
label_3e1038:
    // 0x3e1038: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x3e1038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
label_3e103c:
    // 0x3e103c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3e103cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e1040:
    // 0x3e1040: 0x0  nop
    ctx->pc = 0x3e1040u;
    // NOP
label_3e1044:
    // 0x3e1044: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e1044u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e1048:
    // 0x3e1048: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_3e104c:
    if (ctx->pc == 0x3E104Cu) {
        ctx->pc = 0x3E1050u;
        goto label_3e1050;
    }
    ctx->pc = 0x3E1048u;
    {
        const bool branch_taken_0x3e1048 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e1048) {
            ctx->pc = 0x3E1068u;
            goto label_3e1068;
        }
    }
    ctx->pc = 0x3E1050u;
label_3e1050:
    // 0x3e1050: 0xc077320  jal         func_1DCC80
label_3e1054:
    if (ctx->pc == 0x3E1054u) {
        ctx->pc = 0x3E1054u;
            // 0x3e1054: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E1058u;
        goto label_3e1058;
    }
    ctx->pc = 0x3E1050u;
    SET_GPR_U32(ctx, 31, 0x3E1058u);
    ctx->pc = 0x3E1054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1050u;
            // 0x3e1054: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1058u; }
        if (ctx->pc != 0x3E1058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1058u; }
        if (ctx->pc != 0x3E1058u) { return; }
    }
    ctx->pc = 0x3E1058u;
label_3e1058:
    // 0x3e1058: 0x8e8401e0  lw          $a0, 0x1E0($s4)
    ctx->pc = 0x3e1058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 480)));
label_3e105c:
    // 0x3e105c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e105cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e1060:
    // 0x3e1060: 0xc0f0e84  jal         func_3C3A10
label_3e1064:
    if (ctx->pc == 0x3E1064u) {
        ctx->pc = 0x3E1064u;
            // 0x3e1064: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3E1068u;
        goto label_3e1068;
    }
    ctx->pc = 0x3E1060u;
    SET_GPR_U32(ctx, 31, 0x3E1068u);
    ctx->pc = 0x3E1064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1060u;
            // 0x3e1064: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3A10u;
    if (runtime->hasFunction(0x3C3A10u)) {
        auto targetFn = runtime->lookupFunction(0x3C3A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1068u; }
        if (ctx->pc != 0x3E1068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3A10_0x3c3a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1068u; }
        if (ctx->pc != 0x3E1068u) { return; }
    }
    ctx->pc = 0x3E1068u;
label_3e1068:
    // 0x3e1068: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3e1068u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3e106c:
    // 0x3e106c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x3e106cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3e1070:
    // 0x3e1070: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
label_3e1074:
    if (ctx->pc == 0x3E1074u) {
        ctx->pc = 0x3E1074u;
            // 0x3e1074: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3E1078u;
        goto label_3e1078;
    }
    ctx->pc = 0x3E1070u;
    {
        const bool branch_taken_0x3e1070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E1074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1070u;
            // 0x3e1074: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1070) {
            ctx->pc = 0x3E0FBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e0fbc;
        }
    }
    ctx->pc = 0x3E1078u;
label_3e1078:
    // 0x3e1078: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3e1078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e107c:
    // 0x3e107c: 0x10000109  b           . + 4 + (0x109 << 2)
label_3e1080:
    if (ctx->pc == 0x3E1080u) {
        ctx->pc = 0x3E1080u;
            // 0x3e1080: 0xae8202e4  sw          $v0, 0x2E4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 740), GPR_U32(ctx, 2));
        ctx->pc = 0x3E1084u;
        goto label_3e1084;
    }
    ctx->pc = 0x3E107Cu;
    {
        const bool branch_taken_0x3e107c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E107Cu;
            // 0x3e1080: 0xae8202e4  sw          $v0, 0x2E4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 740), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e107c) {
            ctx->pc = 0x3E14A4u;
            goto label_3e14a4;
        }
    }
    ctx->pc = 0x3E1084u;
label_3e1084:
    // 0x3e1084: 0xc0f8590  jal         func_3E1640
label_3e1088:
    if (ctx->pc == 0x3E1088u) {
        ctx->pc = 0x3E1088u;
            // 0x3e1088: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E108Cu;
        goto label_3e108c;
    }
    ctx->pc = 0x3E1084u;
    SET_GPR_U32(ctx, 31, 0x3E108Cu);
    ctx->pc = 0x3E1088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1084u;
            // 0x3e1088: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E1640u;
    if (runtime->hasFunction(0x3E1640u)) {
        auto targetFn = runtime->lookupFunction(0x3E1640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E108Cu; }
        if (ctx->pc != 0x3E108Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E1640_0x3e1640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E108Cu; }
        if (ctx->pc != 0x3E108Cu) { return; }
    }
    ctx->pc = 0x3E108Cu;
label_3e108c:
    // 0x3e108c: 0xc0f8c3c  jal         func_3E30F0
label_3e1090:
    if (ctx->pc == 0x3E1090u) {
        ctx->pc = 0x3E1090u;
            // 0x3e1090: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E1094u;
        goto label_3e1094;
    }
    ctx->pc = 0x3E108Cu;
    SET_GPR_U32(ctx, 31, 0x3E1094u);
    ctx->pc = 0x3E1090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E108Cu;
            // 0x3e1090: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E30F0u;
    if (runtime->hasFunction(0x3E30F0u)) {
        auto targetFn = runtime->lookupFunction(0x3E30F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1094u; }
        if (ctx->pc != 0x3E1094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E30F0_0x3e30f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1094u; }
        if (ctx->pc != 0x3E1094u) { return; }
    }
    ctx->pc = 0x3E1094u;
label_3e1094:
    // 0x3e1094: 0xc0f9008  jal         func_3E4020
label_3e1098:
    if (ctx->pc == 0x3E1098u) {
        ctx->pc = 0x3E1098u;
            // 0x3e1098: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E109Cu;
        goto label_3e109c;
    }
    ctx->pc = 0x3E1094u;
    SET_GPR_U32(ctx, 31, 0x3E109Cu);
    ctx->pc = 0x3E1098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1094u;
            // 0x3e1098: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E4020u;
    if (runtime->hasFunction(0x3E4020u)) {
        auto targetFn = runtime->lookupFunction(0x3E4020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E109Cu; }
        if (ctx->pc != 0x3E109Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E4020_0x3e4020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E109Cu; }
        if (ctx->pc != 0x3E109Cu) { return; }
    }
    ctx->pc = 0x3E109Cu;
label_3e109c:
    // 0x3e109c: 0x10400101  beqz        $v0, . + 4 + (0x101 << 2)
label_3e10a0:
    if (ctx->pc == 0x3E10A0u) {
        ctx->pc = 0x3E10A4u;
        goto label_3e10a4;
    }
    ctx->pc = 0x3E109Cu;
    {
        const bool branch_taken_0x3e109c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e109c) {
            ctx->pc = 0x3E14A4u;
            goto label_3e14a4;
        }
    }
    ctx->pc = 0x3E10A4u;
label_3e10a4:
    // 0x3e10a4: 0xc0f85ec  jal         func_3E17B0
label_3e10a8:
    if (ctx->pc == 0x3E10A8u) {
        ctx->pc = 0x3E10A8u;
            // 0x3e10a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E10ACu;
        goto label_3e10ac;
    }
    ctx->pc = 0x3E10A4u;
    SET_GPR_U32(ctx, 31, 0x3E10ACu);
    ctx->pc = 0x3E10A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E10A4u;
            // 0x3e10a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (runtime->hasFunction(0x3E17B0u)) {
        auto targetFn = runtime->lookupFunction(0x3E17B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E10ACu; }
        if (ctx->pc != 0x3E10ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E17B0_0x3e17b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E10ACu; }
        if (ctx->pc != 0x3E10ACu) { return; }
    }
    ctx->pc = 0x3E10ACu;
label_3e10ac:
    // 0x3e10ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e10acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e10b0:
    // 0x3e10b0: 0xc0f8ffc  jal         func_3E3FF0
label_3e10b4:
    if (ctx->pc == 0x3E10B4u) {
        ctx->pc = 0x3E10B4u;
            // 0x3e10b4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x3E10B8u;
        goto label_3e10b8;
    }
    ctx->pc = 0x3E10B0u;
    SET_GPR_U32(ctx, 31, 0x3E10B8u);
    ctx->pc = 0x3E10B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E10B0u;
            // 0x3e10b4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3FF0u;
    if (runtime->hasFunction(0x3E3FF0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E10B8u; }
        if (ctx->pc != 0x3E10B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3FF0_0x3e3ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E10B8u; }
        if (ctx->pc != 0x3E10B8u) { return; }
    }
    ctx->pc = 0x3E10B8u;
label_3e10b8:
    // 0x3e10b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e10b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e10bc:
    // 0x3e10bc: 0xc0f8ff4  jal         func_3E3FD0
label_3e10c0:
    if (ctx->pc == 0x3E10C0u) {
        ctx->pc = 0x3E10C0u;
            // 0x3e10c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E10C4u;
        goto label_3e10c4;
    }
    ctx->pc = 0x3E10BCu;
    SET_GPR_U32(ctx, 31, 0x3E10C4u);
    ctx->pc = 0x3E10C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E10BCu;
            // 0x3e10c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3FD0u;
    if (runtime->hasFunction(0x3E3FD0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E10C4u; }
        if (ctx->pc != 0x3E10C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3FD0_0x3e3fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E10C4u; }
        if (ctx->pc != 0x3E10C4u) { return; }
    }
    ctx->pc = 0x3E10C4u;
label_3e10c4:
    // 0x3e10c4: 0xc0f9618  jal         func_3E5860
label_3e10c8:
    if (ctx->pc == 0x3E10C8u) {
        ctx->pc = 0x3E10C8u;
            // 0x3e10c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E10CCu;
        goto label_3e10cc;
    }
    ctx->pc = 0x3E10C4u;
    SET_GPR_U32(ctx, 31, 0x3E10CCu);
    ctx->pc = 0x3E10C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E10C4u;
            // 0x3e10c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E5860u;
    if (runtime->hasFunction(0x3E5860u)) {
        auto targetFn = runtime->lookupFunction(0x3E5860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E10CCu; }
        if (ctx->pc != 0x3E10CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E5860_0x3e5860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E10CCu; }
        if (ctx->pc != 0x3E10CCu) { return; }
    }
    ctx->pc = 0x3E10CCu;
label_3e10cc:
    // 0x3e10cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e10ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e10d0:
    // 0x3e10d0: 0xc0f857c  jal         func_3E15F0
label_3e10d4:
    if (ctx->pc == 0x3E10D4u) {
        ctx->pc = 0x3E10D4u;
            // 0x3e10d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E10D8u;
        goto label_3e10d8;
    }
    ctx->pc = 0x3E10D0u;
    SET_GPR_U32(ctx, 31, 0x3E10D8u);
    ctx->pc = 0x3E10D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E10D0u;
            // 0x3e10d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E15F0u;
    if (runtime->hasFunction(0x3E15F0u)) {
        auto targetFn = runtime->lookupFunction(0x3E15F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E10D8u; }
        if (ctx->pc != 0x3E10D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E15F0_0x3e15f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E10D8u; }
        if (ctx->pc != 0x3E10D8u) { return; }
    }
    ctx->pc = 0x3E10D8u;
label_3e10d8:
    // 0x3e10d8: 0xc0c05c4  jal         func_301710
label_3e10dc:
    if (ctx->pc == 0x3E10DCu) {
        ctx->pc = 0x3E10E0u;
        goto label_3e10e0;
    }
    ctx->pc = 0x3E10D8u;
    SET_GPR_U32(ctx, 31, 0x3E10E0u);
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E10E0u; }
        if (ctx->pc != 0x3E10E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E10E0u; }
        if (ctx->pc != 0x3E10E0u) { return; }
    }
    ctx->pc = 0x3E10E0u;
label_3e10e0:
    // 0x3e10e0: 0x8e8502c0  lw          $a1, 0x2C0($s4)
    ctx->pc = 0x3e10e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 704)));
label_3e10e4:
    // 0x3e10e4: 0xc0c05c0  jal         func_301700
label_3e10e8:
    if (ctx->pc == 0x3E10E8u) {
        ctx->pc = 0x3E10E8u;
            // 0x3e10e8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3E10ECu;
        goto label_3e10ec;
    }
    ctx->pc = 0x3E10E4u;
    SET_GPR_U32(ctx, 31, 0x3E10ECu);
    ctx->pc = 0x3E10E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E10E4u;
            // 0x3e10e8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301700u;
    if (runtime->hasFunction(0x301700u)) {
        auto targetFn = runtime->lookupFunction(0x301700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E10ECu; }
        if (ctx->pc != 0x3E10ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301700_0x301700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E10ECu; }
        if (ctx->pc != 0x3E10ECu) { return; }
    }
    ctx->pc = 0x3E10ECu;
label_3e10ec:
    // 0x3e10ec: 0xc0c05c4  jal         func_301710
label_3e10f0:
    if (ctx->pc == 0x3E10F0u) {
        ctx->pc = 0x3E10F4u;
        goto label_3e10f4;
    }
    ctx->pc = 0x3E10ECu;
    SET_GPR_U32(ctx, 31, 0x3E10F4u);
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E10F4u; }
        if (ctx->pc != 0x3E10F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E10F4u; }
        if (ctx->pc != 0x3E10F4u) { return; }
    }
    ctx->pc = 0x3E10F4u;
label_3e10f4:
    // 0x3e10f4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x3e10f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3e10f8:
    // 0x3e10f8: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x3e10f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_3e10fc:
    // 0x3e10fc: 0xc0ec314  jal         func_3B0C50
label_3e1100:
    if (ctx->pc == 0x3E1100u) {
        ctx->pc = 0x3E1100u;
            // 0x3e1100: 0x344518a9  ori         $a1, $v0, 0x18A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6313);
        ctx->pc = 0x3E1104u;
        goto label_3e1104;
    }
    ctx->pc = 0x3E10FCu;
    SET_GPR_U32(ctx, 31, 0x3E1104u);
    ctx->pc = 0x3E1100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E10FCu;
            // 0x3e1100: 0x344518a9  ori         $a1, $v0, 0x18A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6313);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B0C50u;
    if (runtime->hasFunction(0x3B0C50u)) {
        auto targetFn = runtime->lookupFunction(0x3B0C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1104u; }
        if (ctx->pc != 0x3E1104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B0C50_0x3b0c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1104u; }
        if (ctx->pc != 0x3E1104u) { return; }
    }
    ctx->pc = 0x3E1104u;
label_3e1104:
    // 0x3e1104: 0x100000e7  b           . + 4 + (0xE7 << 2)
label_3e1108:
    if (ctx->pc == 0x3E1108u) {
        ctx->pc = 0x3E1108u;
            // 0x3e1108: 0xa28002d9  sb          $zero, 0x2D9($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 729), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3E110Cu;
        goto label_3e110c;
    }
    ctx->pc = 0x3E1104u;
    {
        const bool branch_taken_0x3e1104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1104u;
            // 0x3e1108: 0xa28002d9  sb          $zero, 0x2D9($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 729), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1104) {
            ctx->pc = 0x3E14A4u;
            goto label_3e14a4;
        }
    }
    ctx->pc = 0x3E110Cu;
label_3e110c:
    // 0x3e110c: 0xc0f8590  jal         func_3E1640
label_3e1110:
    if (ctx->pc == 0x3E1110u) {
        ctx->pc = 0x3E1110u;
            // 0x3e1110: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E1114u;
        goto label_3e1114;
    }
    ctx->pc = 0x3E110Cu;
    SET_GPR_U32(ctx, 31, 0x3E1114u);
    ctx->pc = 0x3E1110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E110Cu;
            // 0x3e1110: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E1640u;
    if (runtime->hasFunction(0x3E1640u)) {
        auto targetFn = runtime->lookupFunction(0x3E1640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1114u; }
        if (ctx->pc != 0x3E1114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E1640_0x3e1640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1114u; }
        if (ctx->pc != 0x3E1114u) { return; }
    }
    ctx->pc = 0x3E1114u;
label_3e1114:
    // 0x3e1114: 0xc0f8c3c  jal         func_3E30F0
label_3e1118:
    if (ctx->pc == 0x3E1118u) {
        ctx->pc = 0x3E1118u;
            // 0x3e1118: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E111Cu;
        goto label_3e111c;
    }
    ctx->pc = 0x3E1114u;
    SET_GPR_U32(ctx, 31, 0x3E111Cu);
    ctx->pc = 0x3E1118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1114u;
            // 0x3e1118: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E30F0u;
    if (runtime->hasFunction(0x3E30F0u)) {
        auto targetFn = runtime->lookupFunction(0x3E30F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E111Cu; }
        if (ctx->pc != 0x3E111Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E30F0_0x3e30f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E111Cu; }
        if (ctx->pc != 0x3E111Cu) { return; }
    }
    ctx->pc = 0x3E111Cu;
label_3e111c:
    // 0x3e111c: 0xc0d1c14  jal         func_347050
label_3e1120:
    if (ctx->pc == 0x3E1120u) {
        ctx->pc = 0x3E1120u;
            // 0x3e1120: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E1124u;
        goto label_3e1124;
    }
    ctx->pc = 0x3E111Cu;
    SET_GPR_U32(ctx, 31, 0x3E1124u);
    ctx->pc = 0x3E1120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E111Cu;
            // 0x3e1120: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1124u; }
        if (ctx->pc != 0x3E1124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1124u; }
        if (ctx->pc != 0x3E1124u) { return; }
    }
    ctx->pc = 0x3E1124u;
label_3e1124:
    // 0x3e1124: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e1124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e1128:
    // 0x3e1128: 0xc04f278  jal         func_13C9E0
label_3e112c:
    if (ctx->pc == 0x3E112Cu) {
        ctx->pc = 0x3E112Cu;
            // 0x3e112c: 0x26840310  addiu       $a0, $s4, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 784));
        ctx->pc = 0x3E1130u;
        goto label_3e1130;
    }
    ctx->pc = 0x3E1128u;
    SET_GPR_U32(ctx, 31, 0x3E1130u);
    ctx->pc = 0x3E112Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1128u;
            // 0x3e112c: 0x26840310  addiu       $a0, $s4, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1130u; }
        if (ctx->pc != 0x3E1130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1130u; }
        if (ctx->pc != 0x3E1130u) { return; }
    }
    ctx->pc = 0x3E1130u;
label_3e1130:
    // 0x3e1130: 0xc0d1c10  jal         func_347040
label_3e1134:
    if (ctx->pc == 0x3E1134u) {
        ctx->pc = 0x3E1134u;
            // 0x3e1134: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E1138u;
        goto label_3e1138;
    }
    ctx->pc = 0x3E1130u;
    SET_GPR_U32(ctx, 31, 0x3E1138u);
    ctx->pc = 0x3E1134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1130u;
            // 0x3e1134: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1138u; }
        if (ctx->pc != 0x3E1138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1138u; }
        if (ctx->pc != 0x3E1138u) { return; }
    }
    ctx->pc = 0x3E1138u;
label_3e1138:
    // 0x3e1138: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e1138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e113c:
    // 0x3e113c: 0xc04ce80  jal         func_133A00
label_3e1140:
    if (ctx->pc == 0x3E1140u) {
        ctx->pc = 0x3E1140u;
            // 0x3e1140: 0x26840310  addiu       $a0, $s4, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 784));
        ctx->pc = 0x3E1144u;
        goto label_3e1144;
    }
    ctx->pc = 0x3E113Cu;
    SET_GPR_U32(ctx, 31, 0x3E1144u);
    ctx->pc = 0x3E1140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E113Cu;
            // 0x3e1140: 0x26840310  addiu       $a0, $s4, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1144u; }
        if (ctx->pc != 0x3E1144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1144u; }
        if (ctx->pc != 0x3E1144u) { return; }
    }
    ctx->pc = 0x3E1144u;
label_3e1144:
    // 0x3e1144: 0xc0f9008  jal         func_3E4020
label_3e1148:
    if (ctx->pc == 0x3E1148u) {
        ctx->pc = 0x3E1148u;
            // 0x3e1148: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E114Cu;
        goto label_3e114c;
    }
    ctx->pc = 0x3E1144u;
    SET_GPR_U32(ctx, 31, 0x3E114Cu);
    ctx->pc = 0x3E1148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1144u;
            // 0x3e1148: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E4020u;
    if (runtime->hasFunction(0x3E4020u)) {
        auto targetFn = runtime->lookupFunction(0x3E4020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E114Cu; }
        if (ctx->pc != 0x3E114Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E4020_0x3e4020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E114Cu; }
        if (ctx->pc != 0x3E114Cu) { return; }
    }
    ctx->pc = 0x3E114Cu;
label_3e114c:
    // 0x3e114c: 0x104000d5  beqz        $v0, . + 4 + (0xD5 << 2)
label_3e1150:
    if (ctx->pc == 0x3E1150u) {
        ctx->pc = 0x3E1154u;
        goto label_3e1154;
    }
    ctx->pc = 0x3E114Cu;
    {
        const bool branch_taken_0x3e114c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e114c) {
            ctx->pc = 0x3E14A4u;
            goto label_3e14a4;
        }
    }
    ctx->pc = 0x3E1154u;
label_3e1154:
    // 0x3e1154: 0xc0f85ec  jal         func_3E17B0
label_3e1158:
    if (ctx->pc == 0x3E1158u) {
        ctx->pc = 0x3E1158u;
            // 0x3e1158: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E115Cu;
        goto label_3e115c;
    }
    ctx->pc = 0x3E1154u;
    SET_GPR_U32(ctx, 31, 0x3E115Cu);
    ctx->pc = 0x3E1158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1154u;
            // 0x3e1158: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (runtime->hasFunction(0x3E17B0u)) {
        auto targetFn = runtime->lookupFunction(0x3E17B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E115Cu; }
        if (ctx->pc != 0x3E115Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E17B0_0x3e17b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E115Cu; }
        if (ctx->pc != 0x3E115Cu) { return; }
    }
    ctx->pc = 0x3E115Cu;
label_3e115c:
    // 0x3e115c: 0x3c023fda  lui         $v0, 0x3FDA
    ctx->pc = 0x3e115cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16346 << 16));
label_3e1160:
    // 0x3e1160: 0x26840140  addiu       $a0, $s4, 0x140
    ctx->pc = 0x3e1160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
label_3e1164:
    // 0x3e1164: 0x3442aaaa  ori         $v0, $v0, 0xAAAA
    ctx->pc = 0x3e1164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43690);
label_3e1168:
    // 0x3e1168: 0xc0cefec  jal         func_33BFB0
label_3e116c:
    if (ctx->pc == 0x3E116Cu) {
        ctx->pc = 0x3E116Cu;
            // 0x3e116c: 0xae820280  sw          $v0, 0x280($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 640), GPR_U32(ctx, 2));
        ctx->pc = 0x3E1170u;
        goto label_3e1170;
    }
    ctx->pc = 0x3E1168u;
    SET_GPR_U32(ctx, 31, 0x3E1170u);
    ctx->pc = 0x3E116Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1168u;
            // 0x3e116c: 0xae820280  sw          $v0, 0x280($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFB0u;
    if (runtime->hasFunction(0x33BFB0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1170u; }
        if (ctx->pc != 0x3E1170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFB0_0x33bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1170u; }
        if (ctx->pc != 0x3E1170u) { return; }
    }
    ctx->pc = 0x3E1170u;
label_3e1170:
    // 0x3e1170: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3e1170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e1174:
    // 0x3e1174: 0x268401f0  addiu       $a0, $s4, 0x1F0
    ctx->pc = 0x3e1174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 496));
label_3e1178:
    // 0x3e1178: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x3e1178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_3e117c:
    // 0x3e117c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3e117cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3e1180:
    // 0x3e1180: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3e1180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e1184:
    // 0x3e1184: 0xc04cc7c  jal         func_1331F0
label_3e1188:
    if (ctx->pc == 0x3E1188u) {
        ctx->pc = 0x3E1188u;
            // 0x3e1188: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E118Cu;
        goto label_3e118c;
    }
    ctx->pc = 0x3E1184u;
    SET_GPR_U32(ctx, 31, 0x3E118Cu);
    ctx->pc = 0x3E1188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1184u;
            // 0x3e1188: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E118Cu; }
        if (ctx->pc != 0x3E118Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E118Cu; }
        if (ctx->pc != 0x3E118Cu) { return; }
    }
    ctx->pc = 0x3E118Cu;
label_3e118c:
    // 0x3e118c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e118cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e1190:
    // 0x3e1190: 0xc0f8ff4  jal         func_3E3FD0
label_3e1194:
    if (ctx->pc == 0x3E1194u) {
        ctx->pc = 0x3E1194u;
            // 0x3e1194: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3E1198u;
        goto label_3e1198;
    }
    ctx->pc = 0x3E1190u;
    SET_GPR_U32(ctx, 31, 0x3E1198u);
    ctx->pc = 0x3E1194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1190u;
            // 0x3e1194: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3FD0u;
    if (runtime->hasFunction(0x3E3FD0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1198u; }
        if (ctx->pc != 0x3E1198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3FD0_0x3e3fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1198u; }
        if (ctx->pc != 0x3E1198u) { return; }
    }
    ctx->pc = 0x3E1198u;
label_3e1198:
    // 0x3e1198: 0xc0f9618  jal         func_3E5860
label_3e119c:
    if (ctx->pc == 0x3E119Cu) {
        ctx->pc = 0x3E119Cu;
            // 0x3e119c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E11A0u;
        goto label_3e11a0;
    }
    ctx->pc = 0x3E1198u;
    SET_GPR_U32(ctx, 31, 0x3E11A0u);
    ctx->pc = 0x3E119Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1198u;
            // 0x3e119c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E5860u;
    if (runtime->hasFunction(0x3E5860u)) {
        auto targetFn = runtime->lookupFunction(0x3E5860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E11A0u; }
        if (ctx->pc != 0x3E11A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E5860_0x3e5860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E11A0u; }
        if (ctx->pc != 0x3E11A0u) { return; }
    }
    ctx->pc = 0x3E11A0u;
label_3e11a0:
    // 0x3e11a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e11a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e11a4:
    // 0x3e11a4: 0xc0f8ffc  jal         func_3E3FF0
label_3e11a8:
    if (ctx->pc == 0x3E11A8u) {
        ctx->pc = 0x3E11A8u;
            // 0x3e11a8: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x3E11ACu;
        goto label_3e11ac;
    }
    ctx->pc = 0x3E11A4u;
    SET_GPR_U32(ctx, 31, 0x3E11ACu);
    ctx->pc = 0x3E11A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E11A4u;
            // 0x3e11a8: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3FF0u;
    if (runtime->hasFunction(0x3E3FF0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E11ACu; }
        if (ctx->pc != 0x3E11ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3FF0_0x3e3ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E11ACu; }
        if (ctx->pc != 0x3E11ACu) { return; }
    }
    ctx->pc = 0x3E11ACu;
label_3e11ac:
    // 0x3e11ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e11acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e11b0:
    // 0x3e11b0: 0xc0f857c  jal         func_3E15F0
label_3e11b4:
    if (ctx->pc == 0x3E11B4u) {
        ctx->pc = 0x3E11B4u;
            // 0x3e11b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E11B8u;
        goto label_3e11b8;
    }
    ctx->pc = 0x3E11B0u;
    SET_GPR_U32(ctx, 31, 0x3E11B8u);
    ctx->pc = 0x3E11B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E11B0u;
            // 0x3e11b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E15F0u;
    if (runtime->hasFunction(0x3E15F0u)) {
        auto targetFn = runtime->lookupFunction(0x3E15F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E11B8u; }
        if (ctx->pc != 0x3E11B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E15F0_0x3e15f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E11B8u; }
        if (ctx->pc != 0x3E11B8u) { return; }
    }
    ctx->pc = 0x3E11B8u;
label_3e11b8:
    // 0x3e11b8: 0x100000ba  b           . + 4 + (0xBA << 2)
label_3e11bc:
    if (ctx->pc == 0x3E11BCu) {
        ctx->pc = 0x3E11C0u;
        goto label_3e11c0;
    }
    ctx->pc = 0x3E11B8u;
    {
        const bool branch_taken_0x3e11b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e11b8) {
            ctx->pc = 0x3E14A4u;
            goto label_3e14a4;
        }
    }
    ctx->pc = 0x3E11C0u;
label_3e11c0:
    // 0x3e11c0: 0xc0f8590  jal         func_3E1640
label_3e11c4:
    if (ctx->pc == 0x3E11C4u) {
        ctx->pc = 0x3E11C4u;
            // 0x3e11c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E11C8u;
        goto label_3e11c8;
    }
    ctx->pc = 0x3E11C0u;
    SET_GPR_U32(ctx, 31, 0x3E11C8u);
    ctx->pc = 0x3E11C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E11C0u;
            // 0x3e11c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E1640u;
    if (runtime->hasFunction(0x3E1640u)) {
        auto targetFn = runtime->lookupFunction(0x3E1640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E11C8u; }
        if (ctx->pc != 0x3E11C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E1640_0x3e1640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E11C8u; }
        if (ctx->pc != 0x3E11C8u) { return; }
    }
    ctx->pc = 0x3E11C8u;
label_3e11c8:
    // 0x3e11c8: 0xc0f8c3c  jal         func_3E30F0
label_3e11cc:
    if (ctx->pc == 0x3E11CCu) {
        ctx->pc = 0x3E11CCu;
            // 0x3e11cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E11D0u;
        goto label_3e11d0;
    }
    ctx->pc = 0x3E11C8u;
    SET_GPR_U32(ctx, 31, 0x3E11D0u);
    ctx->pc = 0x3E11CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E11C8u;
            // 0x3e11cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E30F0u;
    if (runtime->hasFunction(0x3E30F0u)) {
        auto targetFn = runtime->lookupFunction(0x3E30F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E11D0u; }
        if (ctx->pc != 0x3E11D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E30F0_0x3e30f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E11D0u; }
        if (ctx->pc != 0x3E11D0u) { return; }
    }
    ctx->pc = 0x3E11D0u;
label_3e11d0:
    // 0x3e11d0: 0xc0d1c14  jal         func_347050
label_3e11d4:
    if (ctx->pc == 0x3E11D4u) {
        ctx->pc = 0x3E11D4u;
            // 0x3e11d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E11D8u;
        goto label_3e11d8;
    }
    ctx->pc = 0x3E11D0u;
    SET_GPR_U32(ctx, 31, 0x3E11D8u);
    ctx->pc = 0x3E11D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E11D0u;
            // 0x3e11d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E11D8u; }
        if (ctx->pc != 0x3E11D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E11D8u; }
        if (ctx->pc != 0x3E11D8u) { return; }
    }
    ctx->pc = 0x3E11D8u;
label_3e11d8:
    // 0x3e11d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e11d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e11dc:
    // 0x3e11dc: 0xc04f278  jal         func_13C9E0
label_3e11e0:
    if (ctx->pc == 0x3E11E0u) {
        ctx->pc = 0x3E11E0u;
            // 0x3e11e0: 0x26840310  addiu       $a0, $s4, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 784));
        ctx->pc = 0x3E11E4u;
        goto label_3e11e4;
    }
    ctx->pc = 0x3E11DCu;
    SET_GPR_U32(ctx, 31, 0x3E11E4u);
    ctx->pc = 0x3E11E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E11DCu;
            // 0x3e11e0: 0x26840310  addiu       $a0, $s4, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E11E4u; }
        if (ctx->pc != 0x3E11E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E11E4u; }
        if (ctx->pc != 0x3E11E4u) { return; }
    }
    ctx->pc = 0x3E11E4u;
label_3e11e4:
    // 0x3e11e4: 0xc0d1c10  jal         func_347040
label_3e11e8:
    if (ctx->pc == 0x3E11E8u) {
        ctx->pc = 0x3E11E8u;
            // 0x3e11e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E11ECu;
        goto label_3e11ec;
    }
    ctx->pc = 0x3E11E4u;
    SET_GPR_U32(ctx, 31, 0x3E11ECu);
    ctx->pc = 0x3E11E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E11E4u;
            // 0x3e11e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E11ECu; }
        if (ctx->pc != 0x3E11ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E11ECu; }
        if (ctx->pc != 0x3E11ECu) { return; }
    }
    ctx->pc = 0x3E11ECu;
label_3e11ec:
    // 0x3e11ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e11ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e11f0:
    // 0x3e11f0: 0xc04ce80  jal         func_133A00
label_3e11f4:
    if (ctx->pc == 0x3E11F4u) {
        ctx->pc = 0x3E11F4u;
            // 0x3e11f4: 0x26840310  addiu       $a0, $s4, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 784));
        ctx->pc = 0x3E11F8u;
        goto label_3e11f8;
    }
    ctx->pc = 0x3E11F0u;
    SET_GPR_U32(ctx, 31, 0x3E11F8u);
    ctx->pc = 0x3E11F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E11F0u;
            // 0x3e11f4: 0x26840310  addiu       $a0, $s4, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E11F8u; }
        if (ctx->pc != 0x3E11F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E11F8u; }
        if (ctx->pc != 0x3E11F8u) { return; }
    }
    ctx->pc = 0x3E11F8u;
label_3e11f8:
    // 0x3e11f8: 0xc0f8578  jal         func_3E15E0
label_3e11fc:
    if (ctx->pc == 0x3E11FCu) {
        ctx->pc = 0x3E11FCu;
            // 0x3e11fc: 0x8e840358  lw          $a0, 0x358($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 856)));
        ctx->pc = 0x3E1200u;
        goto label_3e1200;
    }
    ctx->pc = 0x3E11F8u;
    SET_GPR_U32(ctx, 31, 0x3E1200u);
    ctx->pc = 0x3E11FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E11F8u;
            // 0x3e11fc: 0x8e840358  lw          $a0, 0x358($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E15E0u;
    if (runtime->hasFunction(0x3E15E0u)) {
        auto targetFn = runtime->lookupFunction(0x3E15E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1200u; }
        if (ctx->pc != 0x3E1200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E15E0_0x3e15e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1200u; }
        if (ctx->pc != 0x3E1200u) { return; }
    }
    ctx->pc = 0x3E1200u;
label_3e1200:
    // 0x3e1200: 0x144000a8  bnez        $v0, . + 4 + (0xA8 << 2)
label_3e1204:
    if (ctx->pc == 0x3E1204u) {
        ctx->pc = 0x3E1208u;
        goto label_3e1208;
    }
    ctx->pc = 0x3E1200u;
    {
        const bool branch_taken_0x3e1200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e1200) {
            ctx->pc = 0x3E14A4u;
            goto label_3e14a4;
        }
    }
    ctx->pc = 0x3E1208u;
label_3e1208:
    // 0x3e1208: 0xc0c05c4  jal         func_301710
label_3e120c:
    if (ctx->pc == 0x3E120Cu) {
        ctx->pc = 0x3E1210u;
        goto label_3e1210;
    }
    ctx->pc = 0x3E1208u;
    SET_GPR_U32(ctx, 31, 0x3E1210u);
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1210u; }
        if (ctx->pc != 0x3E1210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1210u; }
        if (ctx->pc != 0x3E1210u) { return; }
    }
    ctx->pc = 0x3E1210u;
label_3e1210:
    // 0x3e1210: 0x8e8502c0  lw          $a1, 0x2C0($s4)
    ctx->pc = 0x3e1210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 704)));
label_3e1214:
    // 0x3e1214: 0xc0c05c0  jal         func_301700
label_3e1218:
    if (ctx->pc == 0x3E1218u) {
        ctx->pc = 0x3E1218u;
            // 0x3e1218: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3E121Cu;
        goto label_3e121c;
    }
    ctx->pc = 0x3E1214u;
    SET_GPR_U32(ctx, 31, 0x3E121Cu);
    ctx->pc = 0x3E1218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1214u;
            // 0x3e1218: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301700u;
    if (runtime->hasFunction(0x301700u)) {
        auto targetFn = runtime->lookupFunction(0x301700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E121Cu; }
        if (ctx->pc != 0x3E121Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301700_0x301700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E121Cu; }
        if (ctx->pc != 0x3E121Cu) { return; }
    }
    ctx->pc = 0x3E121Cu;
label_3e121c:
    // 0x3e121c: 0xc0c05c4  jal         func_301710
label_3e1220:
    if (ctx->pc == 0x3E1220u) {
        ctx->pc = 0x3E1224u;
        goto label_3e1224;
    }
    ctx->pc = 0x3E121Cu;
    SET_GPR_U32(ctx, 31, 0x3E1224u);
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1224u; }
        if (ctx->pc != 0x3E1224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1224u; }
        if (ctx->pc != 0x3E1224u) { return; }
    }
    ctx->pc = 0x3E1224u;
label_3e1224:
    // 0x3e1224: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x3e1224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3e1228:
    // 0x3e1228: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x3e1228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_3e122c:
    // 0x3e122c: 0xc0ec314  jal         func_3B0C50
label_3e1230:
    if (ctx->pc == 0x3E1230u) {
        ctx->pc = 0x3E1230u;
            // 0x3e1230: 0x344518a9  ori         $a1, $v0, 0x18A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6313);
        ctx->pc = 0x3E1234u;
        goto label_3e1234;
    }
    ctx->pc = 0x3E122Cu;
    SET_GPR_U32(ctx, 31, 0x3E1234u);
    ctx->pc = 0x3E1230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E122Cu;
            // 0x3e1230: 0x344518a9  ori         $a1, $v0, 0x18A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6313);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B0C50u;
    if (runtime->hasFunction(0x3B0C50u)) {
        auto targetFn = runtime->lookupFunction(0x3B0C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1234u; }
        if (ctx->pc != 0x3E1234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B0C50_0x3b0c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1234u; }
        if (ctx->pc != 0x3E1234u) { return; }
    }
    ctx->pc = 0x3E1234u;
label_3e1234:
    // 0x3e1234: 0xc0c05c4  jal         func_301710
label_3e1238:
    if (ctx->pc == 0x3E1238u) {
        ctx->pc = 0x3E123Cu;
        goto label_3e123c;
    }
    ctx->pc = 0x3E1234u;
    SET_GPR_U32(ctx, 31, 0x3E123Cu);
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E123Cu; }
        if (ctx->pc != 0x3E123Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E123Cu; }
        if (ctx->pc != 0x3E123Cu) { return; }
    }
    ctx->pc = 0x3E123Cu;
label_3e123c:
    // 0x3e123c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x3e123cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3e1240:
    // 0x3e1240: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e1240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e1244:
    // 0x3e1244: 0xc0f9000  jal         func_3E4000
label_3e1248:
    if (ctx->pc == 0x3E1248u) {
        ctx->pc = 0x3E1248u;
            // 0x3e1248: 0x2406005c  addiu       $a2, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->pc = 0x3E124Cu;
        goto label_3e124c;
    }
    ctx->pc = 0x3E1244u;
    SET_GPR_U32(ctx, 31, 0x3E124Cu);
    ctx->pc = 0x3E1248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1244u;
            // 0x3e1248: 0x2406005c  addiu       $a2, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E4000u;
    if (runtime->hasFunction(0x3E4000u)) {
        auto targetFn = runtime->lookupFunction(0x3E4000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E124Cu; }
        if (ctx->pc != 0x3E124Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E4000_0x3e4000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E124Cu; }
        if (ctx->pc != 0x3E124Cu) { return; }
    }
    ctx->pc = 0x3E124Cu;
label_3e124c:
    // 0x3e124c: 0xc040180  jal         func_100600
label_3e1250:
    if (ctx->pc == 0x3E1250u) {
        ctx->pc = 0x3E1250u;
            // 0x3e1250: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x3E1254u;
        goto label_3e1254;
    }
    ctx->pc = 0x3E124Cu;
    SET_GPR_U32(ctx, 31, 0x3E1254u);
    ctx->pc = 0x3E1250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E124Cu;
            // 0x3e1250: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1254u; }
        if (ctx->pc != 0x3E1254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1254u; }
        if (ctx->pc != 0x3E1254u) { return; }
    }
    ctx->pc = 0x3E1254u;
label_3e1254:
    // 0x3e1254: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3e1258:
    if (ctx->pc == 0x3E1258u) {
        ctx->pc = 0x3E1258u;
            // 0x3e1258: 0xae820358  sw          $v0, 0x358($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 856), GPR_U32(ctx, 2));
        ctx->pc = 0x3E125Cu;
        goto label_3e125c;
    }
    ctx->pc = 0x3E1254u;
    {
        const bool branch_taken_0x3e1254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1254) {
            ctx->pc = 0x3E1258u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1254u;
            // 0x3e1258: 0xae820358  sw          $v0, 0x358($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 856), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E126Cu;
            goto label_3e126c;
        }
    }
    ctx->pc = 0x3E125Cu;
label_3e125c:
    // 0x3e125c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e125cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e1260:
    // 0x3e1260: 0xc138de4  jal         func_4E3790
label_3e1264:
    if (ctx->pc == 0x3E1264u) {
        ctx->pc = 0x3E1264u;
            // 0x3e1264: 0x26850310  addiu       $a1, $s4, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 784));
        ctx->pc = 0x3E1268u;
        goto label_3e1268;
    }
    ctx->pc = 0x3E1260u;
    SET_GPR_U32(ctx, 31, 0x3E1268u);
    ctx->pc = 0x3E1264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1260u;
            // 0x3e1264: 0x26850310  addiu       $a1, $s4, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E3790u;
    if (runtime->hasFunction(0x4E3790u)) {
        auto targetFn = runtime->lookupFunction(0x4E3790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1268u; }
        if (ctx->pc != 0x3E1268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E3790_0x4e3790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1268u; }
        if (ctx->pc != 0x3E1268u) { return; }
    }
    ctx->pc = 0x3E1268u;
label_3e1268:
    // 0x3e1268: 0xae820358  sw          $v0, 0x358($s4)
    ctx->pc = 0x3e1268u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 856), GPR_U32(ctx, 2));
label_3e126c:
    // 0x3e126c: 0xc0d1c10  jal         func_347040
label_3e1270:
    if (ctx->pc == 0x3E1270u) {
        ctx->pc = 0x3E1270u;
            // 0x3e1270: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E1274u;
        goto label_3e1274;
    }
    ctx->pc = 0x3E126Cu;
    SET_GPR_U32(ctx, 31, 0x3E1274u);
    ctx->pc = 0x3E1270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E126Cu;
            // 0x3e1270: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1274u; }
        if (ctx->pc != 0x3E1274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1274u; }
        if (ctx->pc != 0x3E1274u) { return; }
    }
    ctx->pc = 0x3E1274u;
label_3e1274:
    // 0x3e1274: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3e1274u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e1278:
    // 0x3e1278: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3e1278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e127c:
    // 0x3e127c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e127cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e1280:
    // 0x3e1280: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x3e1280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_3e1284:
    // 0x3e1284: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x3e1284u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_3e1288:
    // 0x3e1288: 0x26860310  addiu       $a2, $s4, 0x310
    ctx->pc = 0x3e1288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 784));
label_3e128c:
    // 0x3e128c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e128cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e1290:
    // 0x3e1290: 0xc0bb404  jal         func_2ED010
label_3e1294:
    if (ctx->pc == 0x3E1294u) {
        ctx->pc = 0x3E1294u;
            // 0x3e1294: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3E1298u;
        goto label_3e1298;
    }
    ctx->pc = 0x3E1290u;
    SET_GPR_U32(ctx, 31, 0x3E1298u);
    ctx->pc = 0x3E1294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1290u;
            // 0x3e1294: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1298u; }
        if (ctx->pc != 0x3E1298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1298u; }
        if (ctx->pc != 0x3E1298u) { return; }
    }
    ctx->pc = 0x3E1298u;
label_3e1298:
    // 0x3e1298: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e1298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e129c:
    // 0x3e129c: 0xc0f8ffc  jal         func_3E3FF0
label_3e12a0:
    if (ctx->pc == 0x3E12A0u) {
        ctx->pc = 0x3E12A0u;
            // 0x3e12a0: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x3E12A4u;
        goto label_3e12a4;
    }
    ctx->pc = 0x3E129Cu;
    SET_GPR_U32(ctx, 31, 0x3E12A4u);
    ctx->pc = 0x3E12A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E129Cu;
            // 0x3e12a0: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3FF0u;
    if (runtime->hasFunction(0x3E3FF0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E12A4u; }
        if (ctx->pc != 0x3E12A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3FF0_0x3e3ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E12A4u; }
        if (ctx->pc != 0x3E12A4u) { return; }
    }
    ctx->pc = 0x3E12A4u;
label_3e12a4:
    // 0x3e12a4: 0x1000007f  b           . + 4 + (0x7F << 2)
label_3e12a8:
    if (ctx->pc == 0x3E12A8u) {
        ctx->pc = 0x3E12A8u;
            // 0x3e12a8: 0xa28002d9  sb          $zero, 0x2D9($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 729), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3E12ACu;
        goto label_3e12ac;
    }
    ctx->pc = 0x3E12A4u;
    {
        const bool branch_taken_0x3e12a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E12A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E12A4u;
            // 0x3e12a8: 0xa28002d9  sb          $zero, 0x2D9($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 729), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e12a4) {
            ctx->pc = 0x3E14A4u;
            goto label_3e14a4;
        }
    }
    ctx->pc = 0x3E12ACu;
label_3e12ac:
    // 0x3e12ac: 0xc0f8578  jal         func_3E15E0
label_3e12b0:
    if (ctx->pc == 0x3E12B0u) {
        ctx->pc = 0x3E12B0u;
            // 0x3e12b0: 0x8e840358  lw          $a0, 0x358($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 856)));
        ctx->pc = 0x3E12B4u;
        goto label_3e12b4;
    }
    ctx->pc = 0x3E12ACu;
    SET_GPR_U32(ctx, 31, 0x3E12B4u);
    ctx->pc = 0x3E12B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E12ACu;
            // 0x3e12b0: 0x8e840358  lw          $a0, 0x358($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E15E0u;
    if (runtime->hasFunction(0x3E15E0u)) {
        auto targetFn = runtime->lookupFunction(0x3E15E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E12B4u; }
        if (ctx->pc != 0x3E12B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E15E0_0x3e15e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E12B4u; }
        if (ctx->pc != 0x3E12B4u) { return; }
    }
    ctx->pc = 0x3E12B4u;
label_3e12b4:
    // 0x3e12b4: 0x1440007b  bnez        $v0, . + 4 + (0x7B << 2)
label_3e12b8:
    if (ctx->pc == 0x3E12B8u) {
        ctx->pc = 0x3E12BCu;
        goto label_3e12bc;
    }
    ctx->pc = 0x3E12B4u;
    {
        const bool branch_taken_0x3e12b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e12b4) {
            ctx->pc = 0x3E14A4u;
            goto label_3e14a4;
        }
    }
    ctx->pc = 0x3E12BCu;
label_3e12bc:
    // 0x3e12bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e12bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e12c0:
    // 0x3e12c0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3e12c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3e12c4:
    // 0x3e12c4: 0xc0f8ffc  jal         func_3E3FF0
label_3e12c8:
    if (ctx->pc == 0x3E12C8u) {
        ctx->pc = 0x3E12C8u;
            // 0x3e12c8: 0xae800358  sw          $zero, 0x358($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 856), GPR_U32(ctx, 0));
        ctx->pc = 0x3E12CCu;
        goto label_3e12cc;
    }
    ctx->pc = 0x3E12C4u;
    SET_GPR_U32(ctx, 31, 0x3E12CCu);
    ctx->pc = 0x3E12C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E12C4u;
            // 0x3e12c8: 0xae800358  sw          $zero, 0x358($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 856), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3FF0u;
    if (runtime->hasFunction(0x3E3FF0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E12CCu; }
        if (ctx->pc != 0x3E12CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3FF0_0x3e3ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E12CCu; }
        if (ctx->pc != 0x3E12CCu) { return; }
    }
    ctx->pc = 0x3E12CCu;
label_3e12cc:
    // 0x3e12cc: 0x10000075  b           . + 4 + (0x75 << 2)
label_3e12d0:
    if (ctx->pc == 0x3E12D0u) {
        ctx->pc = 0x3E12D0u;
            // 0x3e12d0: 0xa28002d9  sb          $zero, 0x2D9($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 729), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3E12D4u;
        goto label_3e12d4;
    }
    ctx->pc = 0x3E12CCu;
    {
        const bool branch_taken_0x3e12cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E12D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E12CCu;
            // 0x3e12d0: 0xa28002d9  sb          $zero, 0x2D9($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 729), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e12cc) {
            ctx->pc = 0x3E14A4u;
            goto label_3e14a4;
        }
    }
    ctx->pc = 0x3E12D4u;
label_3e12d4:
    // 0x3e12d4: 0xc681027c  lwc1        $f1, 0x27C($s4)
    ctx->pc = 0x3e12d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e12d8:
    // 0x3e12d8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3e12d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_3e12dc:
    // 0x3e12dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e12dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e12e0:
    // 0x3e12e0: 0x0  nop
    ctx->pc = 0x3e12e0u;
    // NOP
label_3e12e4:
    // 0x3e12e4: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x3e12e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_3e12e8:
    // 0x3e12e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3e12e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e12ec:
    // 0x3e12ec: 0x4501006d  bc1t        . + 4 + (0x6D << 2)
label_3e12f0:
    if (ctx->pc == 0x3E12F0u) {
        ctx->pc = 0x3E12F0u;
            // 0x3e12f0: 0xe681027c  swc1        $f1, 0x27C($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 636), bits); }
        ctx->pc = 0x3E12F4u;
        goto label_3e12f4;
    }
    ctx->pc = 0x3E12ECu;
    {
        const bool branch_taken_0x3e12ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E12F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E12ECu;
            // 0x3e12f0: 0xe681027c  swc1        $f1, 0x27C($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 636), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e12ec) {
            ctx->pc = 0x3E14A4u;
            goto label_3e14a4;
        }
    }
    ctx->pc = 0x3E12F4u;
label_3e12f4:
    // 0x3e12f4: 0xc0c05c4  jal         func_301710
label_3e12f8:
    if (ctx->pc == 0x3E12F8u) {
        ctx->pc = 0x3E12F8u;
            // 0x3e12f8: 0xa28002d9  sb          $zero, 0x2D9($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 729), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3E12FCu;
        goto label_3e12fc;
    }
    ctx->pc = 0x3E12F4u;
    SET_GPR_U32(ctx, 31, 0x3E12FCu);
    ctx->pc = 0x3E12F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E12F4u;
            // 0x3e12f8: 0xa28002d9  sb          $zero, 0x2D9($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 729), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E12FCu; }
        if (ctx->pc != 0x3E12FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E12FCu; }
        if (ctx->pc != 0x3E12FCu) { return; }
    }
    ctx->pc = 0x3E12FCu;
label_3e12fc:
    // 0x3e12fc: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x3e12fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3e1300:
    // 0x3e1300: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x3e1300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_3e1304:
    // 0x3e1304: 0xc0ec314  jal         func_3B0C50
label_3e1308:
    if (ctx->pc == 0x3E1308u) {
        ctx->pc = 0x3E1308u;
            // 0x3e1308: 0x344518a9  ori         $a1, $v0, 0x18A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6313);
        ctx->pc = 0x3E130Cu;
        goto label_3e130c;
    }
    ctx->pc = 0x3E1304u;
    SET_GPR_U32(ctx, 31, 0x3E130Cu);
    ctx->pc = 0x3E1308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1304u;
            // 0x3e1308: 0x344518a9  ori         $a1, $v0, 0x18A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6313);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B0C50u;
    if (runtime->hasFunction(0x3B0C50u)) {
        auto targetFn = runtime->lookupFunction(0x3B0C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E130Cu; }
        if (ctx->pc != 0x3E130Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B0C50_0x3b0c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E130Cu; }
        if (ctx->pc != 0x3E130Cu) { return; }
    }
    ctx->pc = 0x3E130Cu;
label_3e130c:
    // 0x3e130c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e130cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e1310:
    // 0x3e1310: 0xc0f8ffc  jal         func_3E3FF0
label_3e1314:
    if (ctx->pc == 0x3E1314u) {
        ctx->pc = 0x3E1314u;
            // 0x3e1314: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3E1318u;
        goto label_3e1318;
    }
    ctx->pc = 0x3E1310u;
    SET_GPR_U32(ctx, 31, 0x3E1318u);
    ctx->pc = 0x3E1314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1310u;
            // 0x3e1314: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3FF0u;
    if (runtime->hasFunction(0x3E3FF0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1318u; }
        if (ctx->pc != 0x3E1318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3FF0_0x3e3ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1318u; }
        if (ctx->pc != 0x3E1318u) { return; }
    }
    ctx->pc = 0x3E1318u;
label_3e1318:
    // 0x3e1318: 0x10000062  b           . + 4 + (0x62 << 2)
label_3e131c:
    if (ctx->pc == 0x3E131Cu) {
        ctx->pc = 0x3E1320u;
        goto label_3e1320;
    }
    ctx->pc = 0x3E1318u;
    {
        const bool branch_taken_0x3e1318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1318) {
            ctx->pc = 0x3E14A4u;
            goto label_3e14a4;
        }
    }
    ctx->pc = 0x3E1320u;
label_3e1320:
    // 0x3e1320: 0xc681027c  lwc1        $f1, 0x27C($s4)
    ctx->pc = 0x3e1320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e1324:
    // 0x3e1324: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3e1324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_3e1328:
    // 0x3e1328: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e1328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e132c:
    // 0x3e132c: 0x0  nop
    ctx->pc = 0x3e132cu;
    // NOP
label_3e1330:
    // 0x3e1330: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3e1330u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e1334:
    // 0x3e1334: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3e1338:
    if (ctx->pc == 0x3E1338u) {
        ctx->pc = 0x3E1338u;
            // 0x3e1338: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E133Cu;
        goto label_3e133c;
    }
    ctx->pc = 0x3E1334u;
    {
        const bool branch_taken_0x3e1334 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E1338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1334u;
            // 0x3e1338: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1334) {
            ctx->pc = 0x3E1340u;
            goto label_3e1340;
        }
    }
    ctx->pc = 0x3E133Cu;
label_3e133c:
    // 0x3e133c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e133cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e1340:
    // 0x3e1340: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3e1344:
    if (ctx->pc == 0x3E1344u) {
        ctx->pc = 0x3E1344u;
            // 0x3e1344: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3E1348u;
        goto label_3e1348;
    }
    ctx->pc = 0x3E1340u;
    {
        const bool branch_taken_0x3e1340 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3e1340) {
            ctx->pc = 0x3E1344u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1340u;
            // 0x3e1344: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E1354u;
            goto label_3e1354;
        }
    }
    ctx->pc = 0x3E1348u;
label_3e1348:
    // 0x3e1348: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e1348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e134c:
    // 0x3e134c: 0x10000007  b           . + 4 + (0x7 << 2)
label_3e1350:
    if (ctx->pc == 0x3E1350u) {
        ctx->pc = 0x3E1350u;
            // 0x3e1350: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3E1354u;
        goto label_3e1354;
    }
    ctx->pc = 0x3E134Cu;
    {
        const bool branch_taken_0x3e134c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E134Cu;
            // 0x3e1350: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e134c) {
            ctx->pc = 0x3E136Cu;
            goto label_3e136c;
        }
    }
    ctx->pc = 0x3E1354u;
label_3e1354:
    // 0x3e1354: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3e1354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3e1358:
    // 0x3e1358: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3e1358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3e135c:
    // 0x3e135c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e135cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e1360:
    // 0x3e1360: 0x0  nop
    ctx->pc = 0x3e1360u;
    // NOP
label_3e1364:
    // 0x3e1364: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3e1364u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3e1368:
    // 0x3e1368: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3e1368u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3e136c:
    // 0x3e136c: 0xc682027c  lwc1        $f2, 0x27C($s4)
    ctx->pc = 0x3e136cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e1370:
    // 0x3e1370: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3e1370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_3e1374:
    // 0x3e1374: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3e1374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e1378:
    // 0x3e1378: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e1378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e137c:
    // 0x3e137c: 0x0  nop
    ctx->pc = 0x3e137cu;
    // NOP
label_3e1380:
    // 0x3e1380: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x3e1380u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3e1384:
    // 0x3e1384: 0x4603a05c  madd.s      $f1, $f20, $f3
    ctx->pc = 0x3e1384u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[3]));
label_3e1388:
    // 0x3e1388: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3e1388u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e138c:
    // 0x3e138c: 0x45010045  bc1t        . + 4 + (0x45 << 2)
label_3e1390:
    if (ctx->pc == 0x3E1390u) {
        ctx->pc = 0x3E1390u;
            // 0x3e1390: 0xe681027c  swc1        $f1, 0x27C($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 636), bits); }
        ctx->pc = 0x3E1394u;
        goto label_3e1394;
    }
    ctx->pc = 0x3E138Cu;
    {
        const bool branch_taken_0x3e138c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E1390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E138Cu;
            // 0x3e1390: 0xe681027c  swc1        $f1, 0x27C($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 636), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e138c) {
            ctx->pc = 0x3E14A4u;
            goto label_3e14a4;
        }
    }
    ctx->pc = 0x3E1394u;
label_3e1394:
    // 0x3e1394: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3e1394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e1398:
    // 0x3e1398: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e1398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e139c:
    // 0x3e139c: 0xae82006c  sw          $v0, 0x6C($s4)
    ctx->pc = 0x3e139cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 2));
label_3e13a0:
    // 0x3e13a0: 0xc0f8ffc  jal         func_3E3FF0
label_3e13a4:
    if (ctx->pc == 0x3E13A4u) {
        ctx->pc = 0x3E13A4u;
            // 0x3e13a4: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x3E13A8u;
        goto label_3e13a8;
    }
    ctx->pc = 0x3E13A0u;
    SET_GPR_U32(ctx, 31, 0x3E13A8u);
    ctx->pc = 0x3E13A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E13A0u;
            // 0x3e13a4: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3FF0u;
    if (runtime->hasFunction(0x3E3FF0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E13A8u; }
        if (ctx->pc != 0x3E13A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3FF0_0x3e3ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E13A8u; }
        if (ctx->pc != 0x3E13A8u) { return; }
    }
    ctx->pc = 0x3E13A8u;
label_3e13a8:
    // 0x3e13a8: 0xc0f8c20  jal         func_3E3080
label_3e13ac:
    if (ctx->pc == 0x3E13ACu) {
        ctx->pc = 0x3E13ACu;
            // 0x3e13ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E13B0u;
        goto label_3e13b0;
    }
    ctx->pc = 0x3E13A8u;
    SET_GPR_U32(ctx, 31, 0x3E13B0u);
    ctx->pc = 0x3E13ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E13A8u;
            // 0x3e13ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3080u;
    if (runtime->hasFunction(0x3E3080u)) {
        auto targetFn = runtime->lookupFunction(0x3E3080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E13B0u; }
        if (ctx->pc != 0x3E13B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3080_0x3e3080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E13B0u; }
        if (ctx->pc != 0x3E13B0u) { return; }
    }
    ctx->pc = 0x3E13B0u;
label_3e13b0:
    // 0x3e13b0: 0x1000003c  b           . + 4 + (0x3C << 2)
label_3e13b4:
    if (ctx->pc == 0x3E13B4u) {
        ctx->pc = 0x3E13B8u;
        goto label_3e13b8;
    }
    ctx->pc = 0x3E13B0u;
    {
        const bool branch_taken_0x3e13b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e13b0) {
            ctx->pc = 0x3E14A4u;
            goto label_3e14a4;
        }
    }
    ctx->pc = 0x3E13B8u;
label_3e13b8:
    // 0x3e13b8: 0x928202db  lbu         $v0, 0x2DB($s4)
    ctx->pc = 0x3e13b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 731)));
label_3e13bc:
    // 0x3e13bc: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_3e13c0:
    if (ctx->pc == 0x3E13C0u) {
        ctx->pc = 0x3E13C4u;
        goto label_3e13c4;
    }
    ctx->pc = 0x3E13BCu;
    {
        const bool branch_taken_0x3e13bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e13bc) {
            ctx->pc = 0x3E14A4u;
            goto label_3e14a4;
        }
    }
    ctx->pc = 0x3E13C4u;
label_3e13c4:
    // 0x3e13c4: 0xa28002db  sb          $zero, 0x2DB($s4)
    ctx->pc = 0x3e13c4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 731), (uint8_t)GPR_U32(ctx, 0));
label_3e13c8:
    // 0x3e13c8: 0x8e820064  lw          $v0, 0x64($s4)
    ctx->pc = 0x3e13c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
label_3e13cc:
    // 0x3e13cc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3e13d0:
    if (ctx->pc == 0x3E13D0u) {
        ctx->pc = 0x3E13D4u;
        goto label_3e13d4;
    }
    ctx->pc = 0x3E13CCu;
    {
        const bool branch_taken_0x3e13cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e13cc) {
            ctx->pc = 0x3E13ECu;
            goto label_3e13ec;
        }
    }
    ctx->pc = 0x3E13D4u;
label_3e13d4:
    // 0x3e13d4: 0x828202e8  lb          $v0, 0x2E8($s4)
    ctx->pc = 0x3e13d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 744)));
label_3e13d8:
    // 0x3e13d8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3e13dc:
    if (ctx->pc == 0x3E13DCu) {
        ctx->pc = 0x3E13E0u;
        goto label_3e13e0;
    }
    ctx->pc = 0x3E13D8u;
    {
        const bool branch_taken_0x3e13d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e13d8) {
            ctx->pc = 0x3E13ECu;
            goto label_3e13ec;
        }
    }
    ctx->pc = 0x3E13E0u;
label_3e13e0:
    // 0x3e13e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e13e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e13e4:
    // 0x3e13e4: 0xc0f85c8  jal         func_3E1720
label_3e13e8:
    if (ctx->pc == 0x3E13E8u) {
        ctx->pc = 0x3E13E8u;
            // 0x3e13e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E13ECu;
        goto label_3e13ec;
    }
    ctx->pc = 0x3E13E4u;
    SET_GPR_U32(ctx, 31, 0x3E13ECu);
    ctx->pc = 0x3E13E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E13E4u;
            // 0x3e13e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E1720u;
    if (runtime->hasFunction(0x3E1720u)) {
        auto targetFn = runtime->lookupFunction(0x3E1720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E13ECu; }
        if (ctx->pc != 0x3E13ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E1720_0x3e1720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E13ECu; }
        if (ctx->pc != 0x3E13ECu) { return; }
    }
    ctx->pc = 0x3E13ECu;
label_3e13ec:
    // 0x3e13ec: 0xc0cf0e4  jal         func_33C390
label_3e13f0:
    if (ctx->pc == 0x3E13F0u) {
        ctx->pc = 0x3E13F4u;
        goto label_3e13f4;
    }
    ctx->pc = 0x3E13ECu;
    SET_GPR_U32(ctx, 31, 0x3E13F4u);
    ctx->pc = 0x33C390u;
    if (runtime->hasFunction(0x33C390u)) {
        auto targetFn = runtime->lookupFunction(0x33C390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E13F4u; }
        if (ctx->pc != 0x3E13F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033C390_0x33c390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E13F4u; }
        if (ctx->pc != 0x3E13F4u) { return; }
    }
    ctx->pc = 0x3E13F4u;
label_3e13f4:
    // 0x3e13f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e13f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e13f8:
    // 0x3e13f8: 0xc0ceff0  jal         func_33BFC0
label_3e13fc:
    if (ctx->pc == 0x3E13FCu) {
        ctx->pc = 0x3E13FCu;
            // 0x3e13fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E1400u;
        goto label_3e1400;
    }
    ctx->pc = 0x3E13F8u;
    SET_GPR_U32(ctx, 31, 0x3E1400u);
    ctx->pc = 0x3E13FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E13F8u;
            // 0x3e13fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFC0u;
    if (runtime->hasFunction(0x33BFC0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1400u; }
        if (ctx->pc != 0x3E1400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFC0_0x33bfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1400u; }
        if (ctx->pc != 0x3E1400u) { return; }
    }
    ctx->pc = 0x3E1400u;
label_3e1400:
    // 0x3e1400: 0x928602eb  lbu         $a2, 0x2EB($s4)
    ctx->pc = 0x3e1400u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 747)));
label_3e1404:
    // 0x3e1404: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e1404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e1408:
    // 0x3e1408: 0x26840140  addiu       $a0, $s4, 0x140
    ctx->pc = 0x3e1408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
label_3e140c:
    // 0x3e140c: 0xc0b89e4  jal         func_2E2790
label_3e1410:
    if (ctx->pc == 0x3E1410u) {
        ctx->pc = 0x3E1410u;
            // 0x3e1410: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E1414u;
        goto label_3e1414;
    }
    ctx->pc = 0x3E140Cu;
    SET_GPR_U32(ctx, 31, 0x3E1414u);
    ctx->pc = 0x3E1410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E140Cu;
            // 0x3e1410: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2790u;
    if (runtime->hasFunction(0x2E2790u)) {
        auto targetFn = runtime->lookupFunction(0x2E2790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1414u; }
        if (ctx->pc != 0x3E1414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2790_0x2e2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1414u; }
        if (ctx->pc != 0x3E1414u) { return; }
    }
    ctx->pc = 0x3E1414u;
label_3e1414:
    // 0x3e1414: 0x8e830064  lw          $v1, 0x64($s4)
    ctx->pc = 0x3e1414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
label_3e1418:
    // 0x3e1418: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e1418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3e141c:
    // 0x3e141c: 0x24429e40  addiu       $v0, $v0, -0x61C0
    ctx->pc = 0x3e141cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942272));
label_3e1420:
    // 0x3e1420: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3e1420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_3e1424:
    // 0x3e1424: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3e1424u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3e1428:
    // 0x3e1428: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e1428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3e142c:
    // 0x3e142c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e142cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e1430:
    // 0x3e1430: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3e1430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3e1434:
    // 0x3e1434: 0xc0b8160  jal         func_2E0580
label_3e1438:
    if (ctx->pc == 0x3E1438u) {
        ctx->pc = 0x3E1438u;
            // 0x3e1438: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->pc = 0x3E143Cu;
        goto label_3e143c;
    }
    ctx->pc = 0x3E1434u;
    SET_GPR_U32(ctx, 31, 0x3E143Cu);
    ctx->pc = 0x3E1438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1434u;
            // 0x3e1438: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E143Cu; }
        if (ctx->pc != 0x3E143Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E143Cu; }
        if (ctx->pc != 0x3E143Cu) { return; }
    }
    ctx->pc = 0x3E143Cu;
label_3e143c:
    // 0x3e143c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x3e143cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_3e1440:
    // 0x3e1440: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3e1440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e1444:
    // 0x3e1444: 0xc0b8160  jal         func_2E0580
label_3e1448:
    if (ctx->pc == 0x3E1448u) {
        ctx->pc = 0x3E1448u;
            // 0x3e1448: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->pc = 0x3E144Cu;
        goto label_3e144c;
    }
    ctx->pc = 0x3E1444u;
    SET_GPR_U32(ctx, 31, 0x3E144Cu);
    ctx->pc = 0x3E1448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1444u;
            // 0x3e1448: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E144Cu; }
        if (ctx->pc != 0x3E144Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E144Cu; }
        if (ctx->pc != 0x3E144Cu) { return; }
    }
    ctx->pc = 0x3E144Cu;
label_3e144c:
    // 0x3e144c: 0xc0e5f64  jal         func_397D90
label_3e1450:
    if (ctx->pc == 0x3E1450u) {
        ctx->pc = 0x3E1450u;
            // 0x3e1450: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->pc = 0x3E1454u;
        goto label_3e1454;
    }
    ctx->pc = 0x3E144Cu;
    SET_GPR_U32(ctx, 31, 0x3E1454u);
    ctx->pc = 0x3E1450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E144Cu;
            // 0x3e1450: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397D90u;
    if (runtime->hasFunction(0x397D90u)) {
        auto targetFn = runtime->lookupFunction(0x397D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1454u; }
        if (ctx->pc != 0x3E1454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397D90_0x397d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1454u; }
        if (ctx->pc != 0x3E1454u) { return; }
    }
    ctx->pc = 0x3E1454u;
label_3e1454:
    // 0x3e1454: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e1454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e1458:
    // 0x3e1458: 0xc04cc04  jal         func_133010
label_3e145c:
    if (ctx->pc == 0x3E145Cu) {
        ctx->pc = 0x3E145Cu;
            // 0x3e145c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3E1460u;
        goto label_3e1460;
    }
    ctx->pc = 0x3E1458u;
    SET_GPR_U32(ctx, 31, 0x3E1460u);
    ctx->pc = 0x3E145Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1458u;
            // 0x3e145c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1460u; }
        if (ctx->pc != 0x3E1460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1460u; }
        if (ctx->pc != 0x3E1460u) { return; }
    }
    ctx->pc = 0x3E1460u;
label_3e1460:
    // 0x3e1460: 0xc0cefec  jal         func_33BFB0
label_3e1464:
    if (ctx->pc == 0x3E1464u) {
        ctx->pc = 0x3E1464u;
            // 0x3e1464: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->pc = 0x3E1468u;
        goto label_3e1468;
    }
    ctx->pc = 0x3E1460u;
    SET_GPR_U32(ctx, 31, 0x3E1468u);
    ctx->pc = 0x3E1464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1460u;
            // 0x3e1464: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFB0u;
    if (runtime->hasFunction(0x33BFB0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1468u; }
        if (ctx->pc != 0x3E1468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFB0_0x33bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1468u; }
        if (ctx->pc != 0x3E1468u) { return; }
    }
    ctx->pc = 0x3E1468u;
label_3e1468:
    // 0x3e1468: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3e1468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e146c:
    // 0x3e146c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3e146cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3e1470:
    // 0x3e1470: 0x3c024188  lui         $v0, 0x4188
    ctx->pc = 0x3e1470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16776 << 16));
label_3e1474:
    // 0x3e1474: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3e1474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e1478:
    // 0x3e1478: 0xc04cc7c  jal         func_1331F0
label_3e147c:
    if (ctx->pc == 0x3E147Cu) {
        ctx->pc = 0x3E147Cu;
            // 0x3e147c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E1480u;
        goto label_3e1480;
    }
    ctx->pc = 0x3E1478u;
    SET_GPR_U32(ctx, 31, 0x3E1480u);
    ctx->pc = 0x3E147Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1478u;
            // 0x3e147c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1480u; }
        if (ctx->pc != 0x3E1480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1480u; }
        if (ctx->pc != 0x3E1480u) { return; }
    }
    ctx->pc = 0x3E1480u;
label_3e1480:
    // 0x3e1480: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e1480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e1484:
    // 0x3e1484: 0xc0f8e34  jal         func_3E38D0
label_3e1488:
    if (ctx->pc == 0x3E1488u) {
        ctx->pc = 0x3E1488u;
            // 0x3e1488: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3E148Cu;
        goto label_3e148c;
    }
    ctx->pc = 0x3E1484u;
    SET_GPR_U32(ctx, 31, 0x3E148Cu);
    ctx->pc = 0x3E1488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1484u;
            // 0x3e1488: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E38D0u;
    if (runtime->hasFunction(0x3E38D0u)) {
        auto targetFn = runtime->lookupFunction(0x3E38D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E148Cu; }
        if (ctx->pc != 0x3E148Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E38D0_0x3e38d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E148Cu; }
        if (ctx->pc != 0x3E148Cu) { return; }
    }
    ctx->pc = 0x3E148Cu;
label_3e148c:
    // 0x3e148c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e148cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e1490:
    // 0x3e1490: 0xc0f8ffc  jal         func_3E3FF0
label_3e1494:
    if (ctx->pc == 0x3E1494u) {
        ctx->pc = 0x3E1494u;
            // 0x3e1494: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3E1498u;
        goto label_3e1498;
    }
    ctx->pc = 0x3E1490u;
    SET_GPR_U32(ctx, 31, 0x3E1498u);
    ctx->pc = 0x3E1494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1490u;
            // 0x3e1494: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3FF0u;
    if (runtime->hasFunction(0x3E3FF0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1498u; }
        if (ctx->pc != 0x3E1498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3FF0_0x3e3ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1498u; }
        if (ctx->pc != 0x3E1498u) { return; }
    }
    ctx->pc = 0x3E1498u;
label_3e1498:
    // 0x3e1498: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e1498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e149c:
    // 0x3e149c: 0xc0f8ff4  jal         func_3E3FD0
label_3e14a0:
    if (ctx->pc == 0x3E14A0u) {
        ctx->pc = 0x3E14A0u;
            // 0x3e14a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E14A4u;
        goto label_3e14a4;
    }
    ctx->pc = 0x3E149Cu;
    SET_GPR_U32(ctx, 31, 0x3E14A4u);
    ctx->pc = 0x3E14A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E149Cu;
            // 0x3e14a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3FD0u;
    if (runtime->hasFunction(0x3E3FD0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E14A4u; }
        if (ctx->pc != 0x3E14A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3FD0_0x3e3fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E14A4u; }
        if (ctx->pc != 0x3E14A4u) { return; }
    }
    ctx->pc = 0x3E14A4u;
label_3e14a4:
    // 0x3e14a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e14a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e14a8:
    // 0x3e14a8: 0xc0f853c  jal         func_3E14F0
label_3e14ac:
    if (ctx->pc == 0x3E14ACu) {
        ctx->pc = 0x3E14B0u;
        goto label_3e14b0;
    }
    ctx->pc = 0x3E14A8u;
    SET_GPR_U32(ctx, 31, 0x3E14B0u);
    ctx->pc = 0x3E14F0u;
    if (runtime->hasFunction(0x3E14F0u)) {
        auto targetFn = runtime->lookupFunction(0x3E14F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E14B0u; }
        if (ctx->pc != 0x3E14B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E14F0_0x3e14f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E14B0u; }
        if (ctx->pc != 0x3E14B0u) { return; }
    }
    ctx->pc = 0x3E14B0u;
label_3e14b0:
    // 0x3e14b0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3e14b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_3e14b4:
    // 0x3e14b4: 0xc0b6de0  jal         func_2DB780
label_3e14b8:
    if (ctx->pc == 0x3E14B8u) {
        ctx->pc = 0x3E14B8u;
            // 0x3e14b8: 0x24849fc0  addiu       $a0, $a0, -0x6040 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942656));
        ctx->pc = 0x3E14BCu;
        goto label_3e14bc;
    }
    ctx->pc = 0x3E14B4u;
    SET_GPR_U32(ctx, 31, 0x3E14BCu);
    ctx->pc = 0x3E14B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E14B4u;
            // 0x3e14b8: 0x24849fc0  addiu       $a0, $a0, -0x6040 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB780u;
    if (runtime->hasFunction(0x2DB780u)) {
        auto targetFn = runtime->lookupFunction(0x2DB780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E14BCu; }
        if (ctx->pc != 0x3E14BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB780_0x2db780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E14BCu; }
        if (ctx->pc != 0x3E14BCu) { return; }
    }
    ctx->pc = 0x3E14BCu;
label_3e14bc:
    // 0x3e14bc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3e14bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3e14c0:
    // 0x3e14c0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3e14c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3e14c4:
    // 0x3e14c4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3e14c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e14c8:
    // 0x3e14c8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3e14c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e14cc:
    // 0x3e14cc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3e14ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e14d0:
    // 0x3e14d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3e14d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e14d4:
    // 0x3e14d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3e14d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e14d8:
    // 0x3e14d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3e14d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e14dc:
    // 0x3e14dc: 0x3e00008  jr          $ra
label_3e14e0:
    if (ctx->pc == 0x3E14E0u) {
        ctx->pc = 0x3E14E0u;
            // 0x3e14e0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x3E14E4u;
        goto label_3e14e4;
    }
    ctx->pc = 0x3E14DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E14E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E14DCu;
            // 0x3e14e0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E14E4u;
label_3e14e4:
    // 0x3e14e4: 0x0  nop
    ctx->pc = 0x3e14e4u;
    // NOP
label_3e14e8:
    // 0x3e14e8: 0x0  nop
    ctx->pc = 0x3e14e8u;
    // NOP
label_3e14ec:
    // 0x3e14ec: 0x0  nop
    ctx->pc = 0x3e14ecu;
    // NOP
}
