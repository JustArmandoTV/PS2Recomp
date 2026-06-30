#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C56E0
// Address: 0x3c56e0 - 0x3c62a0
void sub_003C56E0_0x3c56e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C56E0_0x3c56e0");
#endif

    switch (ctx->pc) {
        case 0x3c56e0u: goto label_3c56e0;
        case 0x3c56e4u: goto label_3c56e4;
        case 0x3c56e8u: goto label_3c56e8;
        case 0x3c56ecu: goto label_3c56ec;
        case 0x3c56f0u: goto label_3c56f0;
        case 0x3c56f4u: goto label_3c56f4;
        case 0x3c56f8u: goto label_3c56f8;
        case 0x3c56fcu: goto label_3c56fc;
        case 0x3c5700u: goto label_3c5700;
        case 0x3c5704u: goto label_3c5704;
        case 0x3c5708u: goto label_3c5708;
        case 0x3c570cu: goto label_3c570c;
        case 0x3c5710u: goto label_3c5710;
        case 0x3c5714u: goto label_3c5714;
        case 0x3c5718u: goto label_3c5718;
        case 0x3c571cu: goto label_3c571c;
        case 0x3c5720u: goto label_3c5720;
        case 0x3c5724u: goto label_3c5724;
        case 0x3c5728u: goto label_3c5728;
        case 0x3c572cu: goto label_3c572c;
        case 0x3c5730u: goto label_3c5730;
        case 0x3c5734u: goto label_3c5734;
        case 0x3c5738u: goto label_3c5738;
        case 0x3c573cu: goto label_3c573c;
        case 0x3c5740u: goto label_3c5740;
        case 0x3c5744u: goto label_3c5744;
        case 0x3c5748u: goto label_3c5748;
        case 0x3c574cu: goto label_3c574c;
        case 0x3c5750u: goto label_3c5750;
        case 0x3c5754u: goto label_3c5754;
        case 0x3c5758u: goto label_3c5758;
        case 0x3c575cu: goto label_3c575c;
        case 0x3c5760u: goto label_3c5760;
        case 0x3c5764u: goto label_3c5764;
        case 0x3c5768u: goto label_3c5768;
        case 0x3c576cu: goto label_3c576c;
        case 0x3c5770u: goto label_3c5770;
        case 0x3c5774u: goto label_3c5774;
        case 0x3c5778u: goto label_3c5778;
        case 0x3c577cu: goto label_3c577c;
        case 0x3c5780u: goto label_3c5780;
        case 0x3c5784u: goto label_3c5784;
        case 0x3c5788u: goto label_3c5788;
        case 0x3c578cu: goto label_3c578c;
        case 0x3c5790u: goto label_3c5790;
        case 0x3c5794u: goto label_3c5794;
        case 0x3c5798u: goto label_3c5798;
        case 0x3c579cu: goto label_3c579c;
        case 0x3c57a0u: goto label_3c57a0;
        case 0x3c57a4u: goto label_3c57a4;
        case 0x3c57a8u: goto label_3c57a8;
        case 0x3c57acu: goto label_3c57ac;
        case 0x3c57b0u: goto label_3c57b0;
        case 0x3c57b4u: goto label_3c57b4;
        case 0x3c57b8u: goto label_3c57b8;
        case 0x3c57bcu: goto label_3c57bc;
        case 0x3c57c0u: goto label_3c57c0;
        case 0x3c57c4u: goto label_3c57c4;
        case 0x3c57c8u: goto label_3c57c8;
        case 0x3c57ccu: goto label_3c57cc;
        case 0x3c57d0u: goto label_3c57d0;
        case 0x3c57d4u: goto label_3c57d4;
        case 0x3c57d8u: goto label_3c57d8;
        case 0x3c57dcu: goto label_3c57dc;
        case 0x3c57e0u: goto label_3c57e0;
        case 0x3c57e4u: goto label_3c57e4;
        case 0x3c57e8u: goto label_3c57e8;
        case 0x3c57ecu: goto label_3c57ec;
        case 0x3c57f0u: goto label_3c57f0;
        case 0x3c57f4u: goto label_3c57f4;
        case 0x3c57f8u: goto label_3c57f8;
        case 0x3c57fcu: goto label_3c57fc;
        case 0x3c5800u: goto label_3c5800;
        case 0x3c5804u: goto label_3c5804;
        case 0x3c5808u: goto label_3c5808;
        case 0x3c580cu: goto label_3c580c;
        case 0x3c5810u: goto label_3c5810;
        case 0x3c5814u: goto label_3c5814;
        case 0x3c5818u: goto label_3c5818;
        case 0x3c581cu: goto label_3c581c;
        case 0x3c5820u: goto label_3c5820;
        case 0x3c5824u: goto label_3c5824;
        case 0x3c5828u: goto label_3c5828;
        case 0x3c582cu: goto label_3c582c;
        case 0x3c5830u: goto label_3c5830;
        case 0x3c5834u: goto label_3c5834;
        case 0x3c5838u: goto label_3c5838;
        case 0x3c583cu: goto label_3c583c;
        case 0x3c5840u: goto label_3c5840;
        case 0x3c5844u: goto label_3c5844;
        case 0x3c5848u: goto label_3c5848;
        case 0x3c584cu: goto label_3c584c;
        case 0x3c5850u: goto label_3c5850;
        case 0x3c5854u: goto label_3c5854;
        case 0x3c5858u: goto label_3c5858;
        case 0x3c585cu: goto label_3c585c;
        case 0x3c5860u: goto label_3c5860;
        case 0x3c5864u: goto label_3c5864;
        case 0x3c5868u: goto label_3c5868;
        case 0x3c586cu: goto label_3c586c;
        case 0x3c5870u: goto label_3c5870;
        case 0x3c5874u: goto label_3c5874;
        case 0x3c5878u: goto label_3c5878;
        case 0x3c587cu: goto label_3c587c;
        case 0x3c5880u: goto label_3c5880;
        case 0x3c5884u: goto label_3c5884;
        case 0x3c5888u: goto label_3c5888;
        case 0x3c588cu: goto label_3c588c;
        case 0x3c5890u: goto label_3c5890;
        case 0x3c5894u: goto label_3c5894;
        case 0x3c5898u: goto label_3c5898;
        case 0x3c589cu: goto label_3c589c;
        case 0x3c58a0u: goto label_3c58a0;
        case 0x3c58a4u: goto label_3c58a4;
        case 0x3c58a8u: goto label_3c58a8;
        case 0x3c58acu: goto label_3c58ac;
        case 0x3c58b0u: goto label_3c58b0;
        case 0x3c58b4u: goto label_3c58b4;
        case 0x3c58b8u: goto label_3c58b8;
        case 0x3c58bcu: goto label_3c58bc;
        case 0x3c58c0u: goto label_3c58c0;
        case 0x3c58c4u: goto label_3c58c4;
        case 0x3c58c8u: goto label_3c58c8;
        case 0x3c58ccu: goto label_3c58cc;
        case 0x3c58d0u: goto label_3c58d0;
        case 0x3c58d4u: goto label_3c58d4;
        case 0x3c58d8u: goto label_3c58d8;
        case 0x3c58dcu: goto label_3c58dc;
        case 0x3c58e0u: goto label_3c58e0;
        case 0x3c58e4u: goto label_3c58e4;
        case 0x3c58e8u: goto label_3c58e8;
        case 0x3c58ecu: goto label_3c58ec;
        case 0x3c58f0u: goto label_3c58f0;
        case 0x3c58f4u: goto label_3c58f4;
        case 0x3c58f8u: goto label_3c58f8;
        case 0x3c58fcu: goto label_3c58fc;
        case 0x3c5900u: goto label_3c5900;
        case 0x3c5904u: goto label_3c5904;
        case 0x3c5908u: goto label_3c5908;
        case 0x3c590cu: goto label_3c590c;
        case 0x3c5910u: goto label_3c5910;
        case 0x3c5914u: goto label_3c5914;
        case 0x3c5918u: goto label_3c5918;
        case 0x3c591cu: goto label_3c591c;
        case 0x3c5920u: goto label_3c5920;
        case 0x3c5924u: goto label_3c5924;
        case 0x3c5928u: goto label_3c5928;
        case 0x3c592cu: goto label_3c592c;
        case 0x3c5930u: goto label_3c5930;
        case 0x3c5934u: goto label_3c5934;
        case 0x3c5938u: goto label_3c5938;
        case 0x3c593cu: goto label_3c593c;
        case 0x3c5940u: goto label_3c5940;
        case 0x3c5944u: goto label_3c5944;
        case 0x3c5948u: goto label_3c5948;
        case 0x3c594cu: goto label_3c594c;
        case 0x3c5950u: goto label_3c5950;
        case 0x3c5954u: goto label_3c5954;
        case 0x3c5958u: goto label_3c5958;
        case 0x3c595cu: goto label_3c595c;
        case 0x3c5960u: goto label_3c5960;
        case 0x3c5964u: goto label_3c5964;
        case 0x3c5968u: goto label_3c5968;
        case 0x3c596cu: goto label_3c596c;
        case 0x3c5970u: goto label_3c5970;
        case 0x3c5974u: goto label_3c5974;
        case 0x3c5978u: goto label_3c5978;
        case 0x3c597cu: goto label_3c597c;
        case 0x3c5980u: goto label_3c5980;
        case 0x3c5984u: goto label_3c5984;
        case 0x3c5988u: goto label_3c5988;
        case 0x3c598cu: goto label_3c598c;
        case 0x3c5990u: goto label_3c5990;
        case 0x3c5994u: goto label_3c5994;
        case 0x3c5998u: goto label_3c5998;
        case 0x3c599cu: goto label_3c599c;
        case 0x3c59a0u: goto label_3c59a0;
        case 0x3c59a4u: goto label_3c59a4;
        case 0x3c59a8u: goto label_3c59a8;
        case 0x3c59acu: goto label_3c59ac;
        case 0x3c59b0u: goto label_3c59b0;
        case 0x3c59b4u: goto label_3c59b4;
        case 0x3c59b8u: goto label_3c59b8;
        case 0x3c59bcu: goto label_3c59bc;
        case 0x3c59c0u: goto label_3c59c0;
        case 0x3c59c4u: goto label_3c59c4;
        case 0x3c59c8u: goto label_3c59c8;
        case 0x3c59ccu: goto label_3c59cc;
        case 0x3c59d0u: goto label_3c59d0;
        case 0x3c59d4u: goto label_3c59d4;
        case 0x3c59d8u: goto label_3c59d8;
        case 0x3c59dcu: goto label_3c59dc;
        case 0x3c59e0u: goto label_3c59e0;
        case 0x3c59e4u: goto label_3c59e4;
        case 0x3c59e8u: goto label_3c59e8;
        case 0x3c59ecu: goto label_3c59ec;
        case 0x3c59f0u: goto label_3c59f0;
        case 0x3c59f4u: goto label_3c59f4;
        case 0x3c59f8u: goto label_3c59f8;
        case 0x3c59fcu: goto label_3c59fc;
        case 0x3c5a00u: goto label_3c5a00;
        case 0x3c5a04u: goto label_3c5a04;
        case 0x3c5a08u: goto label_3c5a08;
        case 0x3c5a0cu: goto label_3c5a0c;
        case 0x3c5a10u: goto label_3c5a10;
        case 0x3c5a14u: goto label_3c5a14;
        case 0x3c5a18u: goto label_3c5a18;
        case 0x3c5a1cu: goto label_3c5a1c;
        case 0x3c5a20u: goto label_3c5a20;
        case 0x3c5a24u: goto label_3c5a24;
        case 0x3c5a28u: goto label_3c5a28;
        case 0x3c5a2cu: goto label_3c5a2c;
        case 0x3c5a30u: goto label_3c5a30;
        case 0x3c5a34u: goto label_3c5a34;
        case 0x3c5a38u: goto label_3c5a38;
        case 0x3c5a3cu: goto label_3c5a3c;
        case 0x3c5a40u: goto label_3c5a40;
        case 0x3c5a44u: goto label_3c5a44;
        case 0x3c5a48u: goto label_3c5a48;
        case 0x3c5a4cu: goto label_3c5a4c;
        case 0x3c5a50u: goto label_3c5a50;
        case 0x3c5a54u: goto label_3c5a54;
        case 0x3c5a58u: goto label_3c5a58;
        case 0x3c5a5cu: goto label_3c5a5c;
        case 0x3c5a60u: goto label_3c5a60;
        case 0x3c5a64u: goto label_3c5a64;
        case 0x3c5a68u: goto label_3c5a68;
        case 0x3c5a6cu: goto label_3c5a6c;
        case 0x3c5a70u: goto label_3c5a70;
        case 0x3c5a74u: goto label_3c5a74;
        case 0x3c5a78u: goto label_3c5a78;
        case 0x3c5a7cu: goto label_3c5a7c;
        case 0x3c5a80u: goto label_3c5a80;
        case 0x3c5a84u: goto label_3c5a84;
        case 0x3c5a88u: goto label_3c5a88;
        case 0x3c5a8cu: goto label_3c5a8c;
        case 0x3c5a90u: goto label_3c5a90;
        case 0x3c5a94u: goto label_3c5a94;
        case 0x3c5a98u: goto label_3c5a98;
        case 0x3c5a9cu: goto label_3c5a9c;
        case 0x3c5aa0u: goto label_3c5aa0;
        case 0x3c5aa4u: goto label_3c5aa4;
        case 0x3c5aa8u: goto label_3c5aa8;
        case 0x3c5aacu: goto label_3c5aac;
        case 0x3c5ab0u: goto label_3c5ab0;
        case 0x3c5ab4u: goto label_3c5ab4;
        case 0x3c5ab8u: goto label_3c5ab8;
        case 0x3c5abcu: goto label_3c5abc;
        case 0x3c5ac0u: goto label_3c5ac0;
        case 0x3c5ac4u: goto label_3c5ac4;
        case 0x3c5ac8u: goto label_3c5ac8;
        case 0x3c5accu: goto label_3c5acc;
        case 0x3c5ad0u: goto label_3c5ad0;
        case 0x3c5ad4u: goto label_3c5ad4;
        case 0x3c5ad8u: goto label_3c5ad8;
        case 0x3c5adcu: goto label_3c5adc;
        case 0x3c5ae0u: goto label_3c5ae0;
        case 0x3c5ae4u: goto label_3c5ae4;
        case 0x3c5ae8u: goto label_3c5ae8;
        case 0x3c5aecu: goto label_3c5aec;
        case 0x3c5af0u: goto label_3c5af0;
        case 0x3c5af4u: goto label_3c5af4;
        case 0x3c5af8u: goto label_3c5af8;
        case 0x3c5afcu: goto label_3c5afc;
        case 0x3c5b00u: goto label_3c5b00;
        case 0x3c5b04u: goto label_3c5b04;
        case 0x3c5b08u: goto label_3c5b08;
        case 0x3c5b0cu: goto label_3c5b0c;
        case 0x3c5b10u: goto label_3c5b10;
        case 0x3c5b14u: goto label_3c5b14;
        case 0x3c5b18u: goto label_3c5b18;
        case 0x3c5b1cu: goto label_3c5b1c;
        case 0x3c5b20u: goto label_3c5b20;
        case 0x3c5b24u: goto label_3c5b24;
        case 0x3c5b28u: goto label_3c5b28;
        case 0x3c5b2cu: goto label_3c5b2c;
        case 0x3c5b30u: goto label_3c5b30;
        case 0x3c5b34u: goto label_3c5b34;
        case 0x3c5b38u: goto label_3c5b38;
        case 0x3c5b3cu: goto label_3c5b3c;
        case 0x3c5b40u: goto label_3c5b40;
        case 0x3c5b44u: goto label_3c5b44;
        case 0x3c5b48u: goto label_3c5b48;
        case 0x3c5b4cu: goto label_3c5b4c;
        case 0x3c5b50u: goto label_3c5b50;
        case 0x3c5b54u: goto label_3c5b54;
        case 0x3c5b58u: goto label_3c5b58;
        case 0x3c5b5cu: goto label_3c5b5c;
        case 0x3c5b60u: goto label_3c5b60;
        case 0x3c5b64u: goto label_3c5b64;
        case 0x3c5b68u: goto label_3c5b68;
        case 0x3c5b6cu: goto label_3c5b6c;
        case 0x3c5b70u: goto label_3c5b70;
        case 0x3c5b74u: goto label_3c5b74;
        case 0x3c5b78u: goto label_3c5b78;
        case 0x3c5b7cu: goto label_3c5b7c;
        case 0x3c5b80u: goto label_3c5b80;
        case 0x3c5b84u: goto label_3c5b84;
        case 0x3c5b88u: goto label_3c5b88;
        case 0x3c5b8cu: goto label_3c5b8c;
        case 0x3c5b90u: goto label_3c5b90;
        case 0x3c5b94u: goto label_3c5b94;
        case 0x3c5b98u: goto label_3c5b98;
        case 0x3c5b9cu: goto label_3c5b9c;
        case 0x3c5ba0u: goto label_3c5ba0;
        case 0x3c5ba4u: goto label_3c5ba4;
        case 0x3c5ba8u: goto label_3c5ba8;
        case 0x3c5bacu: goto label_3c5bac;
        case 0x3c5bb0u: goto label_3c5bb0;
        case 0x3c5bb4u: goto label_3c5bb4;
        case 0x3c5bb8u: goto label_3c5bb8;
        case 0x3c5bbcu: goto label_3c5bbc;
        case 0x3c5bc0u: goto label_3c5bc0;
        case 0x3c5bc4u: goto label_3c5bc4;
        case 0x3c5bc8u: goto label_3c5bc8;
        case 0x3c5bccu: goto label_3c5bcc;
        case 0x3c5bd0u: goto label_3c5bd0;
        case 0x3c5bd4u: goto label_3c5bd4;
        case 0x3c5bd8u: goto label_3c5bd8;
        case 0x3c5bdcu: goto label_3c5bdc;
        case 0x3c5be0u: goto label_3c5be0;
        case 0x3c5be4u: goto label_3c5be4;
        case 0x3c5be8u: goto label_3c5be8;
        case 0x3c5becu: goto label_3c5bec;
        case 0x3c5bf0u: goto label_3c5bf0;
        case 0x3c5bf4u: goto label_3c5bf4;
        case 0x3c5bf8u: goto label_3c5bf8;
        case 0x3c5bfcu: goto label_3c5bfc;
        case 0x3c5c00u: goto label_3c5c00;
        case 0x3c5c04u: goto label_3c5c04;
        case 0x3c5c08u: goto label_3c5c08;
        case 0x3c5c0cu: goto label_3c5c0c;
        case 0x3c5c10u: goto label_3c5c10;
        case 0x3c5c14u: goto label_3c5c14;
        case 0x3c5c18u: goto label_3c5c18;
        case 0x3c5c1cu: goto label_3c5c1c;
        case 0x3c5c20u: goto label_3c5c20;
        case 0x3c5c24u: goto label_3c5c24;
        case 0x3c5c28u: goto label_3c5c28;
        case 0x3c5c2cu: goto label_3c5c2c;
        case 0x3c5c30u: goto label_3c5c30;
        case 0x3c5c34u: goto label_3c5c34;
        case 0x3c5c38u: goto label_3c5c38;
        case 0x3c5c3cu: goto label_3c5c3c;
        case 0x3c5c40u: goto label_3c5c40;
        case 0x3c5c44u: goto label_3c5c44;
        case 0x3c5c48u: goto label_3c5c48;
        case 0x3c5c4cu: goto label_3c5c4c;
        case 0x3c5c50u: goto label_3c5c50;
        case 0x3c5c54u: goto label_3c5c54;
        case 0x3c5c58u: goto label_3c5c58;
        case 0x3c5c5cu: goto label_3c5c5c;
        case 0x3c5c60u: goto label_3c5c60;
        case 0x3c5c64u: goto label_3c5c64;
        case 0x3c5c68u: goto label_3c5c68;
        case 0x3c5c6cu: goto label_3c5c6c;
        case 0x3c5c70u: goto label_3c5c70;
        case 0x3c5c74u: goto label_3c5c74;
        case 0x3c5c78u: goto label_3c5c78;
        case 0x3c5c7cu: goto label_3c5c7c;
        case 0x3c5c80u: goto label_3c5c80;
        case 0x3c5c84u: goto label_3c5c84;
        case 0x3c5c88u: goto label_3c5c88;
        case 0x3c5c8cu: goto label_3c5c8c;
        case 0x3c5c90u: goto label_3c5c90;
        case 0x3c5c94u: goto label_3c5c94;
        case 0x3c5c98u: goto label_3c5c98;
        case 0x3c5c9cu: goto label_3c5c9c;
        case 0x3c5ca0u: goto label_3c5ca0;
        case 0x3c5ca4u: goto label_3c5ca4;
        case 0x3c5ca8u: goto label_3c5ca8;
        case 0x3c5cacu: goto label_3c5cac;
        case 0x3c5cb0u: goto label_3c5cb0;
        case 0x3c5cb4u: goto label_3c5cb4;
        case 0x3c5cb8u: goto label_3c5cb8;
        case 0x3c5cbcu: goto label_3c5cbc;
        case 0x3c5cc0u: goto label_3c5cc0;
        case 0x3c5cc4u: goto label_3c5cc4;
        case 0x3c5cc8u: goto label_3c5cc8;
        case 0x3c5cccu: goto label_3c5ccc;
        case 0x3c5cd0u: goto label_3c5cd0;
        case 0x3c5cd4u: goto label_3c5cd4;
        case 0x3c5cd8u: goto label_3c5cd8;
        case 0x3c5cdcu: goto label_3c5cdc;
        case 0x3c5ce0u: goto label_3c5ce0;
        case 0x3c5ce4u: goto label_3c5ce4;
        case 0x3c5ce8u: goto label_3c5ce8;
        case 0x3c5cecu: goto label_3c5cec;
        case 0x3c5cf0u: goto label_3c5cf0;
        case 0x3c5cf4u: goto label_3c5cf4;
        case 0x3c5cf8u: goto label_3c5cf8;
        case 0x3c5cfcu: goto label_3c5cfc;
        case 0x3c5d00u: goto label_3c5d00;
        case 0x3c5d04u: goto label_3c5d04;
        case 0x3c5d08u: goto label_3c5d08;
        case 0x3c5d0cu: goto label_3c5d0c;
        case 0x3c5d10u: goto label_3c5d10;
        case 0x3c5d14u: goto label_3c5d14;
        case 0x3c5d18u: goto label_3c5d18;
        case 0x3c5d1cu: goto label_3c5d1c;
        case 0x3c5d20u: goto label_3c5d20;
        case 0x3c5d24u: goto label_3c5d24;
        case 0x3c5d28u: goto label_3c5d28;
        case 0x3c5d2cu: goto label_3c5d2c;
        case 0x3c5d30u: goto label_3c5d30;
        case 0x3c5d34u: goto label_3c5d34;
        case 0x3c5d38u: goto label_3c5d38;
        case 0x3c5d3cu: goto label_3c5d3c;
        case 0x3c5d40u: goto label_3c5d40;
        case 0x3c5d44u: goto label_3c5d44;
        case 0x3c5d48u: goto label_3c5d48;
        case 0x3c5d4cu: goto label_3c5d4c;
        case 0x3c5d50u: goto label_3c5d50;
        case 0x3c5d54u: goto label_3c5d54;
        case 0x3c5d58u: goto label_3c5d58;
        case 0x3c5d5cu: goto label_3c5d5c;
        case 0x3c5d60u: goto label_3c5d60;
        case 0x3c5d64u: goto label_3c5d64;
        case 0x3c5d68u: goto label_3c5d68;
        case 0x3c5d6cu: goto label_3c5d6c;
        case 0x3c5d70u: goto label_3c5d70;
        case 0x3c5d74u: goto label_3c5d74;
        case 0x3c5d78u: goto label_3c5d78;
        case 0x3c5d7cu: goto label_3c5d7c;
        case 0x3c5d80u: goto label_3c5d80;
        case 0x3c5d84u: goto label_3c5d84;
        case 0x3c5d88u: goto label_3c5d88;
        case 0x3c5d8cu: goto label_3c5d8c;
        case 0x3c5d90u: goto label_3c5d90;
        case 0x3c5d94u: goto label_3c5d94;
        case 0x3c5d98u: goto label_3c5d98;
        case 0x3c5d9cu: goto label_3c5d9c;
        case 0x3c5da0u: goto label_3c5da0;
        case 0x3c5da4u: goto label_3c5da4;
        case 0x3c5da8u: goto label_3c5da8;
        case 0x3c5dacu: goto label_3c5dac;
        case 0x3c5db0u: goto label_3c5db0;
        case 0x3c5db4u: goto label_3c5db4;
        case 0x3c5db8u: goto label_3c5db8;
        case 0x3c5dbcu: goto label_3c5dbc;
        case 0x3c5dc0u: goto label_3c5dc0;
        case 0x3c5dc4u: goto label_3c5dc4;
        case 0x3c5dc8u: goto label_3c5dc8;
        case 0x3c5dccu: goto label_3c5dcc;
        case 0x3c5dd0u: goto label_3c5dd0;
        case 0x3c5dd4u: goto label_3c5dd4;
        case 0x3c5dd8u: goto label_3c5dd8;
        case 0x3c5ddcu: goto label_3c5ddc;
        case 0x3c5de0u: goto label_3c5de0;
        case 0x3c5de4u: goto label_3c5de4;
        case 0x3c5de8u: goto label_3c5de8;
        case 0x3c5decu: goto label_3c5dec;
        case 0x3c5df0u: goto label_3c5df0;
        case 0x3c5df4u: goto label_3c5df4;
        case 0x3c5df8u: goto label_3c5df8;
        case 0x3c5dfcu: goto label_3c5dfc;
        case 0x3c5e00u: goto label_3c5e00;
        case 0x3c5e04u: goto label_3c5e04;
        case 0x3c5e08u: goto label_3c5e08;
        case 0x3c5e0cu: goto label_3c5e0c;
        case 0x3c5e10u: goto label_3c5e10;
        case 0x3c5e14u: goto label_3c5e14;
        case 0x3c5e18u: goto label_3c5e18;
        case 0x3c5e1cu: goto label_3c5e1c;
        case 0x3c5e20u: goto label_3c5e20;
        case 0x3c5e24u: goto label_3c5e24;
        case 0x3c5e28u: goto label_3c5e28;
        case 0x3c5e2cu: goto label_3c5e2c;
        case 0x3c5e30u: goto label_3c5e30;
        case 0x3c5e34u: goto label_3c5e34;
        case 0x3c5e38u: goto label_3c5e38;
        case 0x3c5e3cu: goto label_3c5e3c;
        case 0x3c5e40u: goto label_3c5e40;
        case 0x3c5e44u: goto label_3c5e44;
        case 0x3c5e48u: goto label_3c5e48;
        case 0x3c5e4cu: goto label_3c5e4c;
        case 0x3c5e50u: goto label_3c5e50;
        case 0x3c5e54u: goto label_3c5e54;
        case 0x3c5e58u: goto label_3c5e58;
        case 0x3c5e5cu: goto label_3c5e5c;
        case 0x3c5e60u: goto label_3c5e60;
        case 0x3c5e64u: goto label_3c5e64;
        case 0x3c5e68u: goto label_3c5e68;
        case 0x3c5e6cu: goto label_3c5e6c;
        case 0x3c5e70u: goto label_3c5e70;
        case 0x3c5e74u: goto label_3c5e74;
        case 0x3c5e78u: goto label_3c5e78;
        case 0x3c5e7cu: goto label_3c5e7c;
        case 0x3c5e80u: goto label_3c5e80;
        case 0x3c5e84u: goto label_3c5e84;
        case 0x3c5e88u: goto label_3c5e88;
        case 0x3c5e8cu: goto label_3c5e8c;
        case 0x3c5e90u: goto label_3c5e90;
        case 0x3c5e94u: goto label_3c5e94;
        case 0x3c5e98u: goto label_3c5e98;
        case 0x3c5e9cu: goto label_3c5e9c;
        case 0x3c5ea0u: goto label_3c5ea0;
        case 0x3c5ea4u: goto label_3c5ea4;
        case 0x3c5ea8u: goto label_3c5ea8;
        case 0x3c5eacu: goto label_3c5eac;
        case 0x3c5eb0u: goto label_3c5eb0;
        case 0x3c5eb4u: goto label_3c5eb4;
        case 0x3c5eb8u: goto label_3c5eb8;
        case 0x3c5ebcu: goto label_3c5ebc;
        case 0x3c5ec0u: goto label_3c5ec0;
        case 0x3c5ec4u: goto label_3c5ec4;
        case 0x3c5ec8u: goto label_3c5ec8;
        case 0x3c5eccu: goto label_3c5ecc;
        case 0x3c5ed0u: goto label_3c5ed0;
        case 0x3c5ed4u: goto label_3c5ed4;
        case 0x3c5ed8u: goto label_3c5ed8;
        case 0x3c5edcu: goto label_3c5edc;
        case 0x3c5ee0u: goto label_3c5ee0;
        case 0x3c5ee4u: goto label_3c5ee4;
        case 0x3c5ee8u: goto label_3c5ee8;
        case 0x3c5eecu: goto label_3c5eec;
        case 0x3c5ef0u: goto label_3c5ef0;
        case 0x3c5ef4u: goto label_3c5ef4;
        case 0x3c5ef8u: goto label_3c5ef8;
        case 0x3c5efcu: goto label_3c5efc;
        case 0x3c5f00u: goto label_3c5f00;
        case 0x3c5f04u: goto label_3c5f04;
        case 0x3c5f08u: goto label_3c5f08;
        case 0x3c5f0cu: goto label_3c5f0c;
        case 0x3c5f10u: goto label_3c5f10;
        case 0x3c5f14u: goto label_3c5f14;
        case 0x3c5f18u: goto label_3c5f18;
        case 0x3c5f1cu: goto label_3c5f1c;
        case 0x3c5f20u: goto label_3c5f20;
        case 0x3c5f24u: goto label_3c5f24;
        case 0x3c5f28u: goto label_3c5f28;
        case 0x3c5f2cu: goto label_3c5f2c;
        case 0x3c5f30u: goto label_3c5f30;
        case 0x3c5f34u: goto label_3c5f34;
        case 0x3c5f38u: goto label_3c5f38;
        case 0x3c5f3cu: goto label_3c5f3c;
        case 0x3c5f40u: goto label_3c5f40;
        case 0x3c5f44u: goto label_3c5f44;
        case 0x3c5f48u: goto label_3c5f48;
        case 0x3c5f4cu: goto label_3c5f4c;
        case 0x3c5f50u: goto label_3c5f50;
        case 0x3c5f54u: goto label_3c5f54;
        case 0x3c5f58u: goto label_3c5f58;
        case 0x3c5f5cu: goto label_3c5f5c;
        case 0x3c5f60u: goto label_3c5f60;
        case 0x3c5f64u: goto label_3c5f64;
        case 0x3c5f68u: goto label_3c5f68;
        case 0x3c5f6cu: goto label_3c5f6c;
        case 0x3c5f70u: goto label_3c5f70;
        case 0x3c5f74u: goto label_3c5f74;
        case 0x3c5f78u: goto label_3c5f78;
        case 0x3c5f7cu: goto label_3c5f7c;
        case 0x3c5f80u: goto label_3c5f80;
        case 0x3c5f84u: goto label_3c5f84;
        case 0x3c5f88u: goto label_3c5f88;
        case 0x3c5f8cu: goto label_3c5f8c;
        case 0x3c5f90u: goto label_3c5f90;
        case 0x3c5f94u: goto label_3c5f94;
        case 0x3c5f98u: goto label_3c5f98;
        case 0x3c5f9cu: goto label_3c5f9c;
        case 0x3c5fa0u: goto label_3c5fa0;
        case 0x3c5fa4u: goto label_3c5fa4;
        case 0x3c5fa8u: goto label_3c5fa8;
        case 0x3c5facu: goto label_3c5fac;
        case 0x3c5fb0u: goto label_3c5fb0;
        case 0x3c5fb4u: goto label_3c5fb4;
        case 0x3c5fb8u: goto label_3c5fb8;
        case 0x3c5fbcu: goto label_3c5fbc;
        case 0x3c5fc0u: goto label_3c5fc0;
        case 0x3c5fc4u: goto label_3c5fc4;
        case 0x3c5fc8u: goto label_3c5fc8;
        case 0x3c5fccu: goto label_3c5fcc;
        case 0x3c5fd0u: goto label_3c5fd0;
        case 0x3c5fd4u: goto label_3c5fd4;
        case 0x3c5fd8u: goto label_3c5fd8;
        case 0x3c5fdcu: goto label_3c5fdc;
        case 0x3c5fe0u: goto label_3c5fe0;
        case 0x3c5fe4u: goto label_3c5fe4;
        case 0x3c5fe8u: goto label_3c5fe8;
        case 0x3c5fecu: goto label_3c5fec;
        case 0x3c5ff0u: goto label_3c5ff0;
        case 0x3c5ff4u: goto label_3c5ff4;
        case 0x3c5ff8u: goto label_3c5ff8;
        case 0x3c5ffcu: goto label_3c5ffc;
        case 0x3c6000u: goto label_3c6000;
        case 0x3c6004u: goto label_3c6004;
        case 0x3c6008u: goto label_3c6008;
        case 0x3c600cu: goto label_3c600c;
        case 0x3c6010u: goto label_3c6010;
        case 0x3c6014u: goto label_3c6014;
        case 0x3c6018u: goto label_3c6018;
        case 0x3c601cu: goto label_3c601c;
        case 0x3c6020u: goto label_3c6020;
        case 0x3c6024u: goto label_3c6024;
        case 0x3c6028u: goto label_3c6028;
        case 0x3c602cu: goto label_3c602c;
        case 0x3c6030u: goto label_3c6030;
        case 0x3c6034u: goto label_3c6034;
        case 0x3c6038u: goto label_3c6038;
        case 0x3c603cu: goto label_3c603c;
        case 0x3c6040u: goto label_3c6040;
        case 0x3c6044u: goto label_3c6044;
        case 0x3c6048u: goto label_3c6048;
        case 0x3c604cu: goto label_3c604c;
        case 0x3c6050u: goto label_3c6050;
        case 0x3c6054u: goto label_3c6054;
        case 0x3c6058u: goto label_3c6058;
        case 0x3c605cu: goto label_3c605c;
        case 0x3c6060u: goto label_3c6060;
        case 0x3c6064u: goto label_3c6064;
        case 0x3c6068u: goto label_3c6068;
        case 0x3c606cu: goto label_3c606c;
        case 0x3c6070u: goto label_3c6070;
        case 0x3c6074u: goto label_3c6074;
        case 0x3c6078u: goto label_3c6078;
        case 0x3c607cu: goto label_3c607c;
        case 0x3c6080u: goto label_3c6080;
        case 0x3c6084u: goto label_3c6084;
        case 0x3c6088u: goto label_3c6088;
        case 0x3c608cu: goto label_3c608c;
        case 0x3c6090u: goto label_3c6090;
        case 0x3c6094u: goto label_3c6094;
        case 0x3c6098u: goto label_3c6098;
        case 0x3c609cu: goto label_3c609c;
        case 0x3c60a0u: goto label_3c60a0;
        case 0x3c60a4u: goto label_3c60a4;
        case 0x3c60a8u: goto label_3c60a8;
        case 0x3c60acu: goto label_3c60ac;
        case 0x3c60b0u: goto label_3c60b0;
        case 0x3c60b4u: goto label_3c60b4;
        case 0x3c60b8u: goto label_3c60b8;
        case 0x3c60bcu: goto label_3c60bc;
        case 0x3c60c0u: goto label_3c60c0;
        case 0x3c60c4u: goto label_3c60c4;
        case 0x3c60c8u: goto label_3c60c8;
        case 0x3c60ccu: goto label_3c60cc;
        case 0x3c60d0u: goto label_3c60d0;
        case 0x3c60d4u: goto label_3c60d4;
        case 0x3c60d8u: goto label_3c60d8;
        case 0x3c60dcu: goto label_3c60dc;
        case 0x3c60e0u: goto label_3c60e0;
        case 0x3c60e4u: goto label_3c60e4;
        case 0x3c60e8u: goto label_3c60e8;
        case 0x3c60ecu: goto label_3c60ec;
        case 0x3c60f0u: goto label_3c60f0;
        case 0x3c60f4u: goto label_3c60f4;
        case 0x3c60f8u: goto label_3c60f8;
        case 0x3c60fcu: goto label_3c60fc;
        case 0x3c6100u: goto label_3c6100;
        case 0x3c6104u: goto label_3c6104;
        case 0x3c6108u: goto label_3c6108;
        case 0x3c610cu: goto label_3c610c;
        case 0x3c6110u: goto label_3c6110;
        case 0x3c6114u: goto label_3c6114;
        case 0x3c6118u: goto label_3c6118;
        case 0x3c611cu: goto label_3c611c;
        case 0x3c6120u: goto label_3c6120;
        case 0x3c6124u: goto label_3c6124;
        case 0x3c6128u: goto label_3c6128;
        case 0x3c612cu: goto label_3c612c;
        case 0x3c6130u: goto label_3c6130;
        case 0x3c6134u: goto label_3c6134;
        case 0x3c6138u: goto label_3c6138;
        case 0x3c613cu: goto label_3c613c;
        case 0x3c6140u: goto label_3c6140;
        case 0x3c6144u: goto label_3c6144;
        case 0x3c6148u: goto label_3c6148;
        case 0x3c614cu: goto label_3c614c;
        case 0x3c6150u: goto label_3c6150;
        case 0x3c6154u: goto label_3c6154;
        case 0x3c6158u: goto label_3c6158;
        case 0x3c615cu: goto label_3c615c;
        case 0x3c6160u: goto label_3c6160;
        case 0x3c6164u: goto label_3c6164;
        case 0x3c6168u: goto label_3c6168;
        case 0x3c616cu: goto label_3c616c;
        case 0x3c6170u: goto label_3c6170;
        case 0x3c6174u: goto label_3c6174;
        case 0x3c6178u: goto label_3c6178;
        case 0x3c617cu: goto label_3c617c;
        case 0x3c6180u: goto label_3c6180;
        case 0x3c6184u: goto label_3c6184;
        case 0x3c6188u: goto label_3c6188;
        case 0x3c618cu: goto label_3c618c;
        case 0x3c6190u: goto label_3c6190;
        case 0x3c6194u: goto label_3c6194;
        case 0x3c6198u: goto label_3c6198;
        case 0x3c619cu: goto label_3c619c;
        case 0x3c61a0u: goto label_3c61a0;
        case 0x3c61a4u: goto label_3c61a4;
        case 0x3c61a8u: goto label_3c61a8;
        case 0x3c61acu: goto label_3c61ac;
        case 0x3c61b0u: goto label_3c61b0;
        case 0x3c61b4u: goto label_3c61b4;
        case 0x3c61b8u: goto label_3c61b8;
        case 0x3c61bcu: goto label_3c61bc;
        case 0x3c61c0u: goto label_3c61c0;
        case 0x3c61c4u: goto label_3c61c4;
        case 0x3c61c8u: goto label_3c61c8;
        case 0x3c61ccu: goto label_3c61cc;
        case 0x3c61d0u: goto label_3c61d0;
        case 0x3c61d4u: goto label_3c61d4;
        case 0x3c61d8u: goto label_3c61d8;
        case 0x3c61dcu: goto label_3c61dc;
        case 0x3c61e0u: goto label_3c61e0;
        case 0x3c61e4u: goto label_3c61e4;
        case 0x3c61e8u: goto label_3c61e8;
        case 0x3c61ecu: goto label_3c61ec;
        case 0x3c61f0u: goto label_3c61f0;
        case 0x3c61f4u: goto label_3c61f4;
        case 0x3c61f8u: goto label_3c61f8;
        case 0x3c61fcu: goto label_3c61fc;
        case 0x3c6200u: goto label_3c6200;
        case 0x3c6204u: goto label_3c6204;
        case 0x3c6208u: goto label_3c6208;
        case 0x3c620cu: goto label_3c620c;
        case 0x3c6210u: goto label_3c6210;
        case 0x3c6214u: goto label_3c6214;
        case 0x3c6218u: goto label_3c6218;
        case 0x3c621cu: goto label_3c621c;
        case 0x3c6220u: goto label_3c6220;
        case 0x3c6224u: goto label_3c6224;
        case 0x3c6228u: goto label_3c6228;
        case 0x3c622cu: goto label_3c622c;
        case 0x3c6230u: goto label_3c6230;
        case 0x3c6234u: goto label_3c6234;
        case 0x3c6238u: goto label_3c6238;
        case 0x3c623cu: goto label_3c623c;
        case 0x3c6240u: goto label_3c6240;
        case 0x3c6244u: goto label_3c6244;
        case 0x3c6248u: goto label_3c6248;
        case 0x3c624cu: goto label_3c624c;
        case 0x3c6250u: goto label_3c6250;
        case 0x3c6254u: goto label_3c6254;
        case 0x3c6258u: goto label_3c6258;
        case 0x3c625cu: goto label_3c625c;
        case 0x3c6260u: goto label_3c6260;
        case 0x3c6264u: goto label_3c6264;
        case 0x3c6268u: goto label_3c6268;
        case 0x3c626cu: goto label_3c626c;
        case 0x3c6270u: goto label_3c6270;
        case 0x3c6274u: goto label_3c6274;
        case 0x3c6278u: goto label_3c6278;
        case 0x3c627cu: goto label_3c627c;
        case 0x3c6280u: goto label_3c6280;
        case 0x3c6284u: goto label_3c6284;
        case 0x3c6288u: goto label_3c6288;
        case 0x3c628cu: goto label_3c628c;
        case 0x3c6290u: goto label_3c6290;
        case 0x3c6294u: goto label_3c6294;
        case 0x3c6298u: goto label_3c6298;
        case 0x3c629cu: goto label_3c629c;
        default: break;
    }

    ctx->pc = 0x3c56e0u;

label_3c56e0:
    // 0x3c56e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c56e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3c56e4:
    // 0x3c56e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3c56e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3c56e8:
    // 0x3c56e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3c56e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3c56ec:
    // 0x3c56ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c56ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c56f0:
    // 0x3c56f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3c56f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c56f4:
    // 0x3c56f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c56f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c56f8:
    // 0x3c56f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3c56f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c56fc:
    // 0x3c56fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c56fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c5700:
    // 0x3c5700: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3c5700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c5704:
    // 0x3c5704: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3c5704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3c5708:
    // 0x3c5708: 0x24054074  addiu       $a1, $zero, 0x4074
    ctx->pc = 0x3c5708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16500));
label_3c570c:
    // 0x3c570c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3c570cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c5710:
    // 0x3c5710: 0xc10ca68  jal         func_4329A0
label_3c5714:
    if (ctx->pc == 0x3C5714u) {
        ctx->pc = 0x3C5714u;
            // 0x3c5714: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C5718u;
        goto label_3c5718;
    }
    ctx->pc = 0x3C5710u;
    SET_GPR_U32(ctx, 31, 0x3C5718u);
    ctx->pc = 0x3C5714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5710u;
            // 0x3c5714: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5718u; }
        if (ctx->pc != 0x3C5718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5718u; }
        if (ctx->pc != 0x3C5718u) { return; }
    }
    ctx->pc = 0x3C5718u;
label_3c5718:
    // 0x3c5718: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3c5718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3c571c:
    // 0x3c571c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3c571cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3c5720:
    // 0x3c5720: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x3c5720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_3c5724:
    // 0x3c5724: 0x24638d40  addiu       $v1, $v1, -0x72C0
    ctx->pc = 0x3c5724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937920));
label_3c5728:
    // 0x3c5728: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3c5728u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_3c572c:
    // 0x3c572c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3c572cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_3c5730:
    // 0x3c5730: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3c5730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c5734:
    // 0x3c5734: 0xa2720054  sb          $s2, 0x54($s3)
    ctx->pc = 0x3c5734u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 84), (uint8_t)GPR_U32(ctx, 18));
label_3c5738:
    // 0x3c5738: 0xa2600055  sb          $zero, 0x55($s3)
    ctx->pc = 0x3c5738u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 85), (uint8_t)GPR_U32(ctx, 0));
label_3c573c:
    // 0x3c573c: 0xae600058  sw          $zero, 0x58($s3)
    ctx->pc = 0x3c573cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 0));
label_3c5740:
    // 0x3c5740: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x3c5740u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_3c5744:
    // 0x3c5744: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x3c5744u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_3c5748:
    // 0x3c5748: 0xae600064  sw          $zero, 0x64($s3)
    ctx->pc = 0x3c5748u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 0));
label_3c574c:
    // 0x3c574c: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x3c574cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_3c5750:
    // 0x3c5750: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x3c5750u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_3c5754:
    // 0x3c5754: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x3c5754u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_3c5758:
    // 0x3c5758: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x3c5758u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_3c575c:
    // 0x3c575c: 0xae710078  sw          $s1, 0x78($s3)
    ctx->pc = 0x3c575cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 17));
label_3c5760:
    // 0x3c5760: 0xae70007c  sw          $s0, 0x7C($s3)
    ctx->pc = 0x3c5760u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 16));
label_3c5764:
    // 0x3c5764: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3c5764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3c5768:
    // 0x3c5768: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3c5768u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c576c:
    // 0x3c576c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c576cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c5770:
    // 0x3c5770: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c5770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c5774:
    // 0x3c5774: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c5774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c5778:
    // 0x3c5778: 0x3e00008  jr          $ra
label_3c577c:
    if (ctx->pc == 0x3C577Cu) {
        ctx->pc = 0x3C577Cu;
            // 0x3c577c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3C5780u;
        goto label_3c5780;
    }
    ctx->pc = 0x3C5778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C577Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5778u;
            // 0x3c577c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C5780u;
label_3c5780:
    // 0x3c5780: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3c5780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3c5784:
    // 0x3c5784: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c5784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3c5788:
    // 0x3c5788: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3c5788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3c578c:
    // 0x3c578c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c578cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c5790:
    // 0x3c5790: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3c5790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3c5794:
    // 0x3c5794: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x3c5794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3c5798:
    // 0x3c5798: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3c5798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3c579c:
    // 0x3c579c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x3c579cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3c57a0:
    // 0x3c57a0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3c57a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3c57a4:
    // 0x3c57a4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3c57a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c57a8:
    // 0x3c57a8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3c57a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3c57ac:
    // 0x3c57ac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3c57acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3c57b0:
    // 0x3c57b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c57b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3c57b4:
    // 0x3c57b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c57b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3c57b8:
    // 0x3c57b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c57b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3c57bc:
    // 0x3c57bc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3c57bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3c57c0:
    // 0x3c57c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c57c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c57c4:
    // 0x3c57c4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3c57c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3c57c8:
    // 0x3c57c8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3c57c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3c57cc:
    // 0x3c57cc: 0x8c630eac  lw          $v1, 0xEAC($v1)
    ctx->pc = 0x3c57ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3756)));
label_3c57d0:
    // 0x3c57d0: 0x90630116  lbu         $v1, 0x116($v1)
    ctx->pc = 0x3c57d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 278)));
label_3c57d4:
    // 0x3c57d4: 0xc614006c  lwc1        $f20, 0x6C($s0)
    ctx->pc = 0x3c57d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c57d8:
    // 0x3c57d8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3c57d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3c57dc:
    // 0x3c57dc: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3c57dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_3c57e0:
    // 0x3c57e0: 0xe4d40000  swc1        $f20, 0x0($a2)
    ctx->pc = 0x3c57e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_3c57e4:
    // 0x3c57e4: 0x28e40009  slti        $a0, $a3, 0x9
    ctx->pc = 0x3c57e4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
label_3c57e8:
    // 0x3c57e8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3c57e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_3c57ec:
    // 0x3c57ec: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_3c57f0:
    if (ctx->pc == 0x3C57F0u) {
        ctx->pc = 0x3C57F0u;
            // 0x3c57f0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x3C57F4u;
        goto label_3c57f4;
    }
    ctx->pc = 0x3C57ECu;
    {
        const bool branch_taken_0x3c57ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C57F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C57ECu;
            // 0x3c57f0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c57ec) {
            ctx->pc = 0x3C57D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3c57d8;
        }
    }
    ctx->pc = 0x3C57F4u;
label_3c57f4:
    // 0x3c57f4: 0x86060060  lh          $a2, 0x60($s0)
    ctx->pc = 0x3c57f4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
label_3c57f8:
    // 0x3c57f8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3c57f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_3c57fc:
    // 0x3c57fc: 0x86050062  lh          $a1, 0x62($s0)
    ctx->pc = 0x3c57fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 98)));
label_3c5800:
    // 0x3c5800: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c5800u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c5804:
    // 0x3c5804: 0x8c9789e0  lw          $s7, -0x7620($a0)
    ctx->pc = 0x3c5804u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937056)));
label_3c5808:
    // 0x3c5808: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3c5808u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c580c:
    // 0x3c580c: 0x0  nop
    ctx->pc = 0x3c580cu;
    // NOP
label_3c5810:
    // 0x3c5810: 0x468005a0  cvt.s.w     $f22, $f0
    ctx->pc = 0x3c5810u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_3c5814:
    // 0x3c5814: 0x92060010  lbu         $a2, 0x10($s0)
    ctx->pc = 0x3c5814u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_3c5818:
    // 0x3c5818: 0x24c4fffd  addiu       $a0, $a2, -0x3
    ctx->pc = 0x3c5818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
label_3c581c:
    // 0x3c581c: 0x2c81000d  sltiu       $at, $a0, 0xD
    ctx->pc = 0x3c581cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_3c5820:
    // 0x3c5820: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3c5820u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c5824:
    // 0x3c5824: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
label_3c5828:
    if (ctx->pc == 0x3C5828u) {
        ctx->pc = 0x3C5828u;
            // 0x3c5828: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3C582Cu;
        goto label_3c582c;
    }
    ctx->pc = 0x3C5824u;
    {
        const bool branch_taken_0x3c5824 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5824u;
            // 0x3c5828: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5824) {
            ctx->pc = 0x3C58F8u;
            goto label_3c58f8;
        }
    }
    ctx->pc = 0x3C582Cu;
label_3c582c:
    // 0x3c582c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3c582cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_3c5830:
    // 0x3c5830: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3c5830u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3c5834:
    // 0x3c5834: 0x24a58db0  addiu       $a1, $a1, -0x7250
    ctx->pc = 0x3c5834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938032));
label_3c5838:
    // 0x3c5838: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3c5838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3c583c:
    // 0x3c583c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3c583cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c5840:
    // 0x3c5840: 0x800008  jr          $a0
label_3c5844:
    if (ctx->pc == 0x3C5844u) {
        ctx->pc = 0x3C5848u;
        goto label_3c5848;
    }
    ctx->pc = 0x3C5840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3C5848u: goto label_3c5848;
            case 0x3C5888u: goto label_3c5888;
            case 0x3C58B8u: goto label_3c58b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3C5848u;
label_3c5848:
    // 0x3c5848: 0x24d6fffd  addiu       $s6, $a2, -0x3
    ctx->pc = 0x3c5848u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
label_3c584c:
    // 0x3c584c: 0x9205005e  lbu         $a1, 0x5E($s0)
    ctx->pc = 0x3c584cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 94)));
label_3c5850:
    // 0x3c5850: 0x162080  sll         $a0, $s6, 2
    ctx->pc = 0x3c5850u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_3c5854:
    // 0x3c5854: 0x9d3821  addu        $a3, $a0, $sp
    ctx->pc = 0x3c5854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_3c5858:
    // 0x3c5858: 0x2dd2021  addu        $a0, $s6, $sp
    ctx->pc = 0x3c5858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
label_3c585c:
    // 0x3c585c: 0x248600d0  addiu       $a2, $a0, 0xD0
    ctx->pc = 0x3c585cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_3c5860:
    // 0x3c5860: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x3c5860u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
label_3c5864:
    // 0x3c5864: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x3c5864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c5868:
    // 0x3c5868: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x3c5868u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3c586c:
    // 0x3c586c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3c586cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3c5870:
    // 0x3c5870: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x3c5870u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3c5874:
    // 0x3c5874: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3c5878:
    if (ctx->pc == 0x3C5878u) {
        ctx->pc = 0x3C5878u;
            // 0x3c5878: 0xe4e000a0  swc1        $f0, 0xA0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 160), bits); }
        ctx->pc = 0x3C587Cu;
        goto label_3c587c;
    }
    ctx->pc = 0x3C5874u;
    {
        const bool branch_taken_0x3c5874 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5874u;
            // 0x3c5878: 0xe4e000a0  swc1        $f0, 0xA0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5874) {
            ctx->pc = 0x3C5880u;
            goto label_3c5880;
        }
    }
    ctx->pc = 0x3C587Cu;
label_3c587c:
    // 0x3c587c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3c587cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_3c5880:
    // 0x3c5880: 0x1000001d  b           . + 4 + (0x1D << 2)
label_3c5884:
    if (ctx->pc == 0x3C5884u) {
        ctx->pc = 0x3C5884u;
            // 0x3c5884: 0x64080001  daddiu      $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3C5888u;
        goto label_3c5888;
    }
    ctx->pc = 0x3C5880u;
    {
        const bool branch_taken_0x3c5880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5880u;
            // 0x3c5884: 0x64080001  daddiu      $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5880) {
            ctx->pc = 0x3C58F8u;
            goto label_3c58f8;
        }
    }
    ctx->pc = 0x3C5888u;
label_3c5888:
    // 0x3c5888: 0xc6140094  lwc1        $f20, 0x94($s0)
    ctx->pc = 0x3c5888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c588c:
    // 0x3c588c: 0x920500c0  lbu         $a1, 0xC0($s0)
    ctx->pc = 0x3c588cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 192)));
label_3c5890:
    // 0x3c5890: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c5890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c5894:
    // 0x3c5894: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x3c5894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3c5898:
    // 0x3c5898: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3c5898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3c589c:
    // 0x3c589c: 0xe4f40000  swc1        $f20, 0x0($a3)
    ctx->pc = 0x3c589cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_3c58a0:
    // 0x3c58a0: 0xc5202a  slt         $a0, $a2, $a1
    ctx->pc = 0x3c58a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3c58a4:
    // 0x3c58a4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3c58a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3c58a8:
    // 0x3c58a8: 0x0  nop
    ctx->pc = 0x3c58a8u;
    // NOP
label_3c58ac:
    // 0x3c58ac: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_3c58b0:
    if (ctx->pc == 0x3C58B0u) {
        ctx->pc = 0x3C58B4u;
        goto label_3c58b4;
    }
    ctx->pc = 0x3C58ACu;
    {
        const bool branch_taken_0x3c58ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c58ac) {
            ctx->pc = 0x3C5898u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3c5898;
        }
    }
    ctx->pc = 0x3C58B4u;
label_3c58b4:
    // 0x3c58b4: 0x0  nop
    ctx->pc = 0x3c58b4u;
    // NOP
label_3c58b8:
    // 0x3c58b8: 0x9204005e  lbu         $a0, 0x5E($s0)
    ctx->pc = 0x3c58b8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 94)));
label_3c58bc:
    // 0x3c58bc: 0x920500c0  lbu         $a1, 0xC0($s0)
    ctx->pc = 0x3c58bcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 192)));
label_3c58c0:
    // 0x3c58c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3c58c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3c58c4:
    // 0x3c58c4: 0x64080001  daddiu      $t0, $zero, 0x1
    ctx->pc = 0x3c58c4u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3c58c8:
    // 0x3c58c8: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x3c58c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3c58cc:
    // 0x3c58cc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_3c58d0:
    if (ctx->pc == 0x3C58D0u) {
        ctx->pc = 0x3C58D0u;
            // 0x3c58d0: 0x24b6ffff  addiu       $s6, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->pc = 0x3C58D4u;
        goto label_3c58d4;
    }
    ctx->pc = 0x3C58CCu;
    {
        const bool branch_taken_0x3c58cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C58D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C58CCu;
            // 0x3c58d0: 0x24b6ffff  addiu       $s6, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c58cc) {
            ctx->pc = 0x3C58F8u;
            goto label_3c58f8;
        }
    }
    ctx->pc = 0x3C58D4u;
label_3c58d4:
    // 0x3c58d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c58d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c58d8:
    // 0x3c58d8: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x3c58d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3c58dc:
    // 0x3c58dc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3c58dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3c58e0:
    // 0x3c58e0: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x3c58e0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
label_3c58e4:
    // 0x3c58e4: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x3c58e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3c58e8:
    // 0x3c58e8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3c58e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3c58ec:
    // 0x3c58ec: 0x0  nop
    ctx->pc = 0x3c58ecu;
    // NOP
label_3c58f0:
    // 0x3c58f0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_3c58f4:
    if (ctx->pc == 0x3C58F4u) {
        ctx->pc = 0x3C58F8u;
        goto label_3c58f8;
    }
    ctx->pc = 0x3C58F0u;
    {
        const bool branch_taken_0x3c58f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c58f0) {
            ctx->pc = 0x3C58DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3c58dc;
        }
    }
    ctx->pc = 0x3C58F8u;
label_3c58f8:
    // 0x3c58f8: 0x51000050  beql        $t0, $zero, . + 4 + (0x50 << 2)
label_3c58fc:
    if (ctx->pc == 0x3C58FCu) {
        ctx->pc = 0x3C58FCu;
            // 0x3c58fc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x3C5900u;
        goto label_3c5900;
    }
    ctx->pc = 0x3C58F8u;
    {
        const bool branch_taken_0x3c58f8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c58f8) {
            ctx->pc = 0x3C58FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C58F8u;
            // 0x3c58fc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C5A3Cu;
            goto label_3c5a3c;
        }
    }
    ctx->pc = 0x3C5900u;
label_3c5900:
    // 0x3c5900: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c5900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c5904:
    // 0x3c5904: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3c5904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3c5908:
    // 0x3c5908: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3c5908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3c590c:
    // 0x3c590c: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x3c590cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_3c5910:
    // 0x3c5910: 0x50200008  beql        $at, $zero, . + 4 + (0x8 << 2)
label_3c5914:
    if (ctx->pc == 0x3C5914u) {
        ctx->pc = 0x3C5914u;
            // 0x3c5914: 0x8e0500bc  lw          $a1, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->pc = 0x3C5918u;
        goto label_3c5918;
    }
    ctx->pc = 0x3C5910u;
    {
        const bool branch_taken_0x3c5910 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5910) {
            ctx->pc = 0x3C5914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5910u;
            // 0x3c5914: 0x8e0500bc  lw          $a1, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C5934u;
            goto label_3c5934;
        }
    }
    ctx->pc = 0x3C5918u;
label_3c5918:
    // 0x3c5918: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3c5918u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c591c:
    // 0x3c591c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c591cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c5920:
    // 0x3c5920: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c5920u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c5924:
    // 0x3c5924: 0x320f809  jalr        $t9
label_3c5928:
    if (ctx->pc == 0x3C5928u) {
        ctx->pc = 0x3C5928u;
            // 0x3c5928: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C592Cu;
        goto label_3c592c;
    }
    ctx->pc = 0x3C5924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C592Cu);
        ctx->pc = 0x3C5928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5924u;
            // 0x3c5928: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C592Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C592Cu; }
            if (ctx->pc != 0x3C592Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3C592Cu;
label_3c592c:
    // 0x3c592c: 0x10000042  b           . + 4 + (0x42 << 2)
label_3c5930:
    if (ctx->pc == 0x3C5930u) {
        ctx->pc = 0x3C5934u;
        goto label_3c5934;
    }
    ctx->pc = 0x3C592Cu;
    {
        const bool branch_taken_0x3c592c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c592c) {
            ctx->pc = 0x3C5A38u;
            goto label_3c5a38;
        }
    }
    ctx->pc = 0x3C5934u;
label_3c5934:
    // 0x3c5934: 0xc0506ac  jal         func_141AB0
label_3c5938:
    if (ctx->pc == 0x3C5938u) {
        ctx->pc = 0x3C5938u;
            // 0x3c5938: 0x8e0400b8  lw          $a0, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->pc = 0x3C593Cu;
        goto label_3c593c;
    }
    ctx->pc = 0x3C5934u;
    SET_GPR_U32(ctx, 31, 0x3C593Cu);
    ctx->pc = 0x3C5938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5934u;
            // 0x3c5938: 0x8e0400b8  lw          $a0, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C593Cu; }
        if (ctx->pc != 0x3C593Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C593Cu; }
        if (ctx->pc != 0x3C593Cu) { return; }
    }
    ctx->pc = 0x3C593Cu;
label_3c593c:
    // 0x3c593c: 0x8ef90000  lw          $t9, 0x0($s7)
    ctx->pc = 0x3c593cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3c5940:
    // 0x3c5940: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3c5940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c5944:
    // 0x3c5944: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3c5944u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3c5948:
    // 0x3c5948: 0x320f809  jalr        $t9
label_3c594c:
    if (ctx->pc == 0x3C594Cu) {
        ctx->pc = 0x3C594Cu;
            // 0x3c594c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3C5950u;
        goto label_3c5950;
    }
    ctx->pc = 0x3C5948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C5950u);
        ctx->pc = 0x3C594Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5948u;
            // 0x3c594c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C5950u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C5950u; }
            if (ctx->pc != 0x3C5950u) { return; }
        }
        }
    }
    ctx->pc = 0x3C5950u;
label_3c5950:
    // 0x3c5950: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c5950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c5954:
    // 0x3c5954: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x3c5954u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c5958:
    // 0x3c5958: 0x27b400d0  addiu       $s4, $sp, 0xD0
    ctx->pc = 0x3c5958u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3c595c:
    // 0x3c595c: 0x27b300a0  addiu       $s3, $sp, 0xA0
    ctx->pc = 0x3c595cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3c5960:
    // 0x3c5960: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3c5960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3c5964:
    // 0x3c5964: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x3c5964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_3c5968:
    // 0x3c5968: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3c5968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3c596c:
    // 0x3c596c: 0x920300c1  lbu         $v1, 0xC1($s0)
    ctx->pc = 0x3c596cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 193)));
label_3c5970:
    // 0x3c5970: 0x86a20070  lh          $v0, 0x70($s5)
    ctx->pc = 0x3c5970u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 112)));
label_3c5974:
    // 0x3c5974: 0xc6640000  lwc1        $f4, 0x0($s3)
    ctx->pc = 0x3c5974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3c5978:
    // 0x3c5978: 0x84890000  lh          $t1, 0x0($a0)
    ctx->pc = 0x3c5978u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_3c597c:
    // 0x3c597c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c597cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c5980:
    // 0x3c5980: 0x84880002  lh          $t0, 0x2($a0)
    ctx->pc = 0x3c5980u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_3c5984:
    // 0x3c5984: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3c5984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_3c5988:
    // 0x3c5988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c5988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c598c:
    // 0x3c598c: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x3c598cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3c5990:
    // 0x3c5990: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c5990u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3c5994:
    // 0x3c5994: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x3c5994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_3c5998:
    // 0x3c5998: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x3c5998u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_3c599c:
    // 0x3c599c: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3c599cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3c59a0:
    // 0x3c59a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3c59a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c59a4:
    // 0x3c59a4: 0xa68821  addu        $s1, $a1, $a2
    ctx->pc = 0x3c59a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3c59a8:
    // 0x3c59a8: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x3c59a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3c59ac:
    // 0x3c59ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c59acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c59b0:
    // 0x3c59b0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3c59b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3c59b4:
    // 0x3c59b4: 0x4600b040  add.s       $f1, $f22, $f0
    ctx->pc = 0x3c59b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_3c59b8:
    // 0x3c59b8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3c59b8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c59bc:
    // 0x3c59bc: 0x0  nop
    ctx->pc = 0x3c59bcu;
    // NOP
label_3c59c0:
    // 0x3c59c0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3c59c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3c59c4:
    // 0x3c59c4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3c59c4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c59c8:
    // 0x3c59c8: 0x0  nop
    ctx->pc = 0x3c59c8u;
    // NOP
label_3c59cc:
    // 0x3c59cc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3c59ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3c59d0:
    // 0x3c59d0: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x3c59d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c59d4:
    // 0x3c59d4: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x3c59d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c59d8:
    // 0x3c59d8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3c59d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3c59dc:
    // 0x3c59dc: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3c59dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_3c59e0:
    // 0x3c59e0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3c59e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3c59e4:
    // 0x3c59e4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3c59e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_3c59e8:
    // 0x3c59e8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x3c59e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_3c59ec:
    // 0x3c59ec: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x3c59ecu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3c59f0:
    // 0x3c59f0: 0x46000b80  add.s       $f14, $f1, $f0
    ctx->pc = 0x3c59f0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3c59f4:
    // 0x3c59f4: 0x4602ab41  sub.s       $f13, $f21, $f2
    ctx->pc = 0x3c59f4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
label_3c59f8:
    // 0x3c59f8: 0xc0bc284  jal         func_2F0A10
label_3c59fc:
    if (ctx->pc == 0x3C59FCu) {
        ctx->pc = 0x3C59FCu;
            // 0x3c59fc: 0x4602abc0  add.s       $f15, $f21, $f2 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
        ctx->pc = 0x3C5A00u;
        goto label_3c5a00;
    }
    ctx->pc = 0x3C59F8u;
    SET_GPR_U32(ctx, 31, 0x3C5A00u);
    ctx->pc = 0x3C59FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C59F8u;
            // 0x3c59fc: 0x4602abc0  add.s       $f15, $f21, $f2 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5A00u; }
        if (ctx->pc != 0x3C5A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5A00u; }
        if (ctx->pc != 0x3C5A00u) { return; }
    }
    ctx->pc = 0x3C5A00u;
label_3c5a00:
    // 0x3c5a00: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x3c5a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c5a04:
    // 0x3c5a04: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3c5a04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3c5a08:
    // 0x3c5a08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c5a08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c5a0c:
    // 0x3c5a0c: 0x2d2082a  slt         $at, $s6, $s2
    ctx->pc = 0x3c5a0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_3c5a10:
    // 0x3c5a10: 0x46160018  adda.s      $f0, $f22
    ctx->pc = 0x3c5a10u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_3c5a14:
    // 0x3c5a14: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x3c5a14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
label_3c5a18:
    // 0x3c5a18: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3c5a18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3c5a1c:
    // 0x3c5a1c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x3c5a1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_3c5a20:
    // 0x3c5a20: 0x1020ffcf  beqz        $at, . + 4 + (-0x31 << 2)
label_3c5a24:
    if (ctx->pc == 0x3C5A24u) {
        ctx->pc = 0x3C5A24u;
            // 0x3c5a24: 0x46140d9c  madd.s      $f22, $f1, $f20 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
        ctx->pc = 0x3C5A28u;
        goto label_3c5a28;
    }
    ctx->pc = 0x3C5A20u;
    {
        const bool branch_taken_0x3c5a20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5A20u;
            // 0x3c5a24: 0x46140d9c  madd.s      $f22, $f1, $f20 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5a20) {
            ctx->pc = 0x3C5960u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3c5960;
        }
    }
    ctx->pc = 0x3C5A28u;
label_3c5a28:
    // 0x3c5a28: 0x8ef90000  lw          $t9, 0x0($s7)
    ctx->pc = 0x3c5a28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3c5a2c:
    // 0x3c5a2c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3c5a2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3c5a30:
    // 0x3c5a30: 0x320f809  jalr        $t9
label_3c5a34:
    if (ctx->pc == 0x3C5A34u) {
        ctx->pc = 0x3C5A34u;
            // 0x3c5a34: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C5A38u;
        goto label_3c5a38;
    }
    ctx->pc = 0x3C5A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C5A38u);
        ctx->pc = 0x3C5A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5A30u;
            // 0x3c5a34: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C5A38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C5A38u; }
            if (ctx->pc != 0x3C5A38u) { return; }
        }
        }
    }
    ctx->pc = 0x3C5A38u;
label_3c5a38:
    // 0x3c5a38: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3c5a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3c5a3c:
    // 0x3c5a3c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3c5a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3c5a40:
    // 0x3c5a40: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3c5a40u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c5a44:
    // 0x3c5a44: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3c5a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3c5a48:
    // 0x3c5a48: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3c5a48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c5a4c:
    // 0x3c5a4c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3c5a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c5a50:
    // 0x3c5a50: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3c5a50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c5a54:
    // 0x3c5a54: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3c5a54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c5a58:
    // 0x3c5a58: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3c5a58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c5a5c:
    // 0x3c5a5c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c5a5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c5a60:
    // 0x3c5a60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c5a60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c5a64:
    // 0x3c5a64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c5a64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c5a68:
    // 0x3c5a68: 0x3e00008  jr          $ra
label_3c5a6c:
    if (ctx->pc == 0x3C5A6Cu) {
        ctx->pc = 0x3C5A6Cu;
            // 0x3c5a6c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3C5A70u;
        goto label_3c5a70;
    }
    ctx->pc = 0x3C5A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5A68u;
            // 0x3c5a6c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C5A70u;
label_3c5a70:
    // 0x3c5a70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c5a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3c5a74:
    // 0x3c5a74: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x3c5a74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_3c5a78:
    // 0x3c5a78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3c5a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3c5a7c:
    // 0x3c5a7c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3c5a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3c5a80:
    // 0x3c5a80: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3c5a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3c5a84:
    // 0x3c5a84: 0x24a50e84  addiu       $a1, $a1, 0xE84
    ctx->pc = 0x3c5a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3716));
label_3c5a88:
    // 0x3c5a88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c5a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c5a8c:
    // 0x3c5a8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c5a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c5a90:
    // 0x3c5a90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c5a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c5a94:
    // 0x3c5a94: 0x8c860058  lw          $a2, 0x58($a0)
    ctx->pc = 0x3c5a94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_3c5a98:
    // 0x3c5a98: 0x8c718a08  lw          $s1, -0x75F8($v1)
    ctx->pc = 0x3c5a98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3c5a9c:
    // 0x3c5a9c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3c5a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3c5aa0:
    // 0x3c5aa0: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x3c5aa0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3c5aa4:
    // 0x3c5aa4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3c5aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3c5aa8:
    // 0x3c5aa8: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x3c5aa8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3c5aac:
    // 0x3c5aac: 0x2c610010  sltiu       $at, $v1, 0x10
    ctx->pc = 0x3c5aacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_3c5ab0:
    // 0x3c5ab0: 0x102001c4  beqz        $at, . + 4 + (0x1C4 << 2)
label_3c5ab4:
    if (ctx->pc == 0x3C5AB4u) {
        ctx->pc = 0x3C5AB4u;
            // 0x3c5ab4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C5AB8u;
        goto label_3c5ab8;
    }
    ctx->pc = 0x3C5AB0u;
    {
        const bool branch_taken_0x3c5ab0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5AB0u;
            // 0x3c5ab4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5ab0) {
            ctx->pc = 0x3C61C4u;
            goto label_3c61c4;
        }
    }
    ctx->pc = 0x3C5AB8u;
label_3c5ab8:
    // 0x3c5ab8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3c5ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_3c5abc:
    // 0x3c5abc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3c5abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3c5ac0:
    // 0x3c5ac0: 0x24a58df0  addiu       $a1, $a1, -0x7210
    ctx->pc = 0x3c5ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938096));
label_3c5ac4:
    // 0x3c5ac4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3c5ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3c5ac8:
    // 0x3c5ac8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3c5ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3c5acc:
    // 0x3c5acc: 0x600008  jr          $v1
label_3c5ad0:
    if (ctx->pc == 0x3C5AD0u) {
        ctx->pc = 0x3C5AD4u;
        goto label_3c5ad4;
    }
    ctx->pc = 0x3C5ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3C5AD4u: goto label_3c5ad4;
            case 0x3C5B94u: goto label_3c5b94;
            case 0x3C5D2Cu: goto label_3c5d2c;
            case 0x3C5E0Cu: goto label_3c5e0c;
            case 0x3C5F18u: goto label_3c5f18;
            case 0x3C5F84u: goto label_3c5f84;
            case 0x3C6048u: goto label_3c6048;
            case 0x3C6060u: goto label_3c6060;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3C5AD4u;
label_3c5ad4:
    // 0x3c5ad4: 0xc0f18a8  jal         func_3C62A0
label_3c5ad8:
    if (ctx->pc == 0x3C5AD8u) {
        ctx->pc = 0x3C5ADCu;
        goto label_3c5adc;
    }
    ctx->pc = 0x3C5AD4u;
    SET_GPR_U32(ctx, 31, 0x3C5ADCu);
    ctx->pc = 0x3C62A0u;
    if (runtime->hasFunction(0x3C62A0u)) {
        auto targetFn = runtime->lookupFunction(0x3C62A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5ADCu; }
        if (ctx->pc != 0x3C5ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C62A0_0x3c62a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5ADCu; }
        if (ctx->pc != 0x3C5ADCu) { return; }
    }
    ctx->pc = 0x3C5ADCu;
label_3c5adc:
    // 0x3c5adc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c5adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3c5ae0:
    // 0x3c5ae0: 0x8c640e80  lw          $a0, 0xE80($v1)
    ctx->pc = 0x3c5ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3c5ae4:
    // 0x3c5ae4: 0x8c840968  lw          $a0, 0x968($a0)
    ctx->pc = 0x3c5ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2408)));
label_3c5ae8:
    // 0x3c5ae8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3c5ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3c5aec:
    // 0x3c5aec: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_3c5af0:
    if (ctx->pc == 0x3C5AF0u) {
        ctx->pc = 0x3C5AF0u;
            // 0x3c5af0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C5AF4u;
        goto label_3c5af4;
    }
    ctx->pc = 0x3C5AECu;
    {
        const bool branch_taken_0x3c5aec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C5AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5AECu;
            // 0x3c5af0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5aec) {
            ctx->pc = 0x3C5AFCu;
            goto label_3c5afc;
        }
    }
    ctx->pc = 0x3C5AF4u;
label_3c5af4:
    // 0x3c5af4: 0x10000009  b           . + 4 + (0x9 << 2)
label_3c5af8:
    if (ctx->pc == 0x3C5AF8u) {
        ctx->pc = 0x3C5AFCu;
        goto label_3c5afc;
    }
    ctx->pc = 0x3C5AF4u;
    {
        const bool branch_taken_0x3c5af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5af4) {
            ctx->pc = 0x3C5B1Cu;
            goto label_3c5b1c;
        }
    }
    ctx->pc = 0x3C5AFCu;
label_3c5afc:
    // 0x3c5afc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c5afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3c5b00:
    // 0x3c5b00: 0x8c633da0  lw          $v1, 0x3DA0($v1)
    ctx->pc = 0x3c5b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15776)));
label_3c5b04:
    // 0x3c5b04: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_3c5b08:
    if (ctx->pc == 0x3C5B08u) {
        ctx->pc = 0x3C5B0Cu;
        goto label_3c5b0c;
    }
    ctx->pc = 0x3C5B04u;
    {
        const bool branch_taken_0x3c5b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5b04) {
            ctx->pc = 0x3C5B1Cu;
            goto label_3c5b1c;
        }
    }
    ctx->pc = 0x3C5B0Cu;
label_3c5b0c:
    // 0x3c5b0c: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x3c5b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_3c5b10:
    // 0x3c5b10: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3c5b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3c5b14:
    // 0x3c5b14: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x3c5b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_3c5b18:
    // 0x3c5b18: 0x2865000e  slti        $a1, $v1, 0xE
    ctx->pc = 0x3c5b18u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)14) ? 1 : 0);
label_3c5b1c:
    // 0x3c5b1c: 0x54a001aa  bnel        $a1, $zero, . + 4 + (0x1AA << 2)
label_3c5b20:
    if (ctx->pc == 0x3C5B20u) {
        ctx->pc = 0x3C5B20u;
            // 0x3c5b20: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3C5B24u;
        goto label_3c5b24;
    }
    ctx->pc = 0x3C5B1Cu;
    {
        const bool branch_taken_0x3c5b1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c5b1c) {
            ctx->pc = 0x3C5B20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5B1Cu;
            // 0x3c5b20: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C61C8u;
            goto label_3c61c8;
        }
    }
    ctx->pc = 0x3C5B24u;
label_3c5b24:
    // 0x3c5b24: 0x8e420e34  lw          $v0, 0xE34($s2)
    ctx->pc = 0x3c5b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_3c5b28:
    // 0x3c5b28: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3c5b28u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3c5b2c:
    // 0x3c5b2c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3c5b30:
    if (ctx->pc == 0x3C5B30u) {
        ctx->pc = 0x3C5B30u;
            // 0x3c5b30: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C5B34u;
        goto label_3c5b34;
    }
    ctx->pc = 0x3C5B2Cu;
    {
        const bool branch_taken_0x3c5b2c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3C5B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5B2Cu;
            // 0x3c5b30: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5b2c) {
            ctx->pc = 0x3C5B44u;
            goto label_3c5b44;
        }
    }
    ctx->pc = 0x3C5B34u;
label_3c5b34:
    // 0x3c5b34: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x3c5b34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_3c5b38:
    // 0x3c5b38: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3c5b3c:
    if (ctx->pc == 0x3C5B3Cu) {
        ctx->pc = 0x3C5B40u;
        goto label_3c5b40;
    }
    ctx->pc = 0x3C5B38u;
    {
        const bool branch_taken_0x3c5b38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5b38) {
            ctx->pc = 0x3C5B44u;
            goto label_3c5b44;
        }
    }
    ctx->pc = 0x3C5B40u;
label_3c5b40:
    // 0x3c5b40: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3c5b40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c5b44:
    // 0x3c5b44: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_3c5b48:
    if (ctx->pc == 0x3C5B48u) {
        ctx->pc = 0x3C5B4Cu;
        goto label_3c5b4c;
    }
    ctx->pc = 0x3C5B44u;
    {
        const bool branch_taken_0x3c5b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c5b44) {
            ctx->pc = 0x3C5B60u;
            goto label_3c5b60;
        }
    }
    ctx->pc = 0x3C5B4Cu;
label_3c5b4c:
    // 0x3c5b4c: 0xc075eb4  jal         func_1D7AD0
label_3c5b50:
    if (ctx->pc == 0x3C5B50u) {
        ctx->pc = 0x3C5B50u;
            // 0x3c5b50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C5B54u;
        goto label_3c5b54;
    }
    ctx->pc = 0x3C5B4Cu;
    SET_GPR_U32(ctx, 31, 0x3C5B54u);
    ctx->pc = 0x3C5B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5B4Cu;
            // 0x3c5b50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5B54u; }
        if (ctx->pc != 0x3C5B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5B54u; }
        if (ctx->pc != 0x3C5B54u) { return; }
    }
    ctx->pc = 0x3C5B54u;
label_3c5b54:
    // 0x3c5b54: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3c5b58:
    if (ctx->pc == 0x3C5B58u) {
        ctx->pc = 0x3C5B5Cu;
        goto label_3c5b5c;
    }
    ctx->pc = 0x3C5B54u;
    {
        const bool branch_taken_0x3c5b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c5b54) {
            ctx->pc = 0x3C5B60u;
            goto label_3c5b60;
        }
    }
    ctx->pc = 0x3C5B5Cu;
label_3c5b5c:
    // 0x3c5b5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3c5b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c5b60:
    // 0x3c5b60: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
label_3c5b64:
    if (ctx->pc == 0x3C5B64u) {
        ctx->pc = 0x3C5B64u;
            // 0x3c5b64: 0x92440068  lbu         $a0, 0x68($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->pc = 0x3C5B68u;
        goto label_3c5b68;
    }
    ctx->pc = 0x3C5B60u;
    {
        const bool branch_taken_0x3c5b60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c5b60) {
            ctx->pc = 0x3C5B64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5B60u;
            // 0x3c5b64: 0x92440068  lbu         $a0, 0x68($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C5B7Cu;
            goto label_3c5b7c;
        }
    }
    ctx->pc = 0x3C5B68u;
label_3c5b68:
    // 0x3c5b68: 0x8e430e34  lw          $v1, 0xE34($s2)
    ctx->pc = 0x3c5b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_3c5b6c:
    // 0x3c5b6c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3c5b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3c5b70:
    // 0x3c5b70: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_3c5b74:
    if (ctx->pc == 0x3C5B74u) {
        ctx->pc = 0x3C5B74u;
            // 0x3c5b74: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x3C5B78u;
        goto label_3c5b78;
    }
    ctx->pc = 0x3C5B70u;
    {
        const bool branch_taken_0x3c5b70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c5b70) {
            ctx->pc = 0x3C5B74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5B70u;
            // 0x3c5b74: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C5B88u;
            goto label_3c5b88;
        }
    }
    ctx->pc = 0x3C5B78u;
label_3c5b78:
    // 0x3c5b78: 0x92440068  lbu         $a0, 0x68($s2)
    ctx->pc = 0x3c5b78u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
label_3c5b7c:
    // 0x3c5b7c: 0xc072a56  jal         func_1CA958
label_3c5b80:
    if (ctx->pc == 0x3C5B80u) {
        ctx->pc = 0x3C5B84u;
        goto label_3c5b84;
    }
    ctx->pc = 0x3C5B7Cu;
    SET_GPR_U32(ctx, 31, 0x3C5B84u);
    ctx->pc = 0x1CA958u;
    if (runtime->hasFunction(0x1CA958u)) {
        auto targetFn = runtime->lookupFunction(0x1CA958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5B84u; }
        if (ctx->pc != 0x3C5B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA958_0x1ca958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5B84u; }
        if (ctx->pc != 0x3C5B84u) { return; }
    }
    ctx->pc = 0x3C5B84u;
label_3c5b84:
    // 0x3c5b84: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3c5b84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c5b88:
    // 0x3c5b88: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3c5b88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3c5b8c:
    // 0x3c5b8c: 0x320f809  jalr        $t9
label_3c5b90:
    if (ctx->pc == 0x3C5B90u) {
        ctx->pc = 0x3C5B90u;
            // 0x3c5b90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C5B94u;
        goto label_3c5b94;
    }
    ctx->pc = 0x3C5B8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C5B94u);
        ctx->pc = 0x3C5B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5B8Cu;
            // 0x3c5b90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C5B94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C5B94u; }
            if (ctx->pc != 0x3C5B94u) { return; }
        }
        }
    }
    ctx->pc = 0x3C5B94u;
label_3c5b94:
    // 0x3c5b94: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c5b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3c5b98:
    // 0x3c5b98: 0x92640010  lbu         $a0, 0x10($s3)
    ctx->pc = 0x3c5b98u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
label_3c5b9c:
    // 0x3c5b9c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3c5b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3c5ba0:
    // 0x3c5ba0: 0x2486fffd  addiu       $a2, $a0, -0x3
    ctx->pc = 0x3c5ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967293));
label_3c5ba4:
    // 0x3c5ba4: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3c5ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_3c5ba8:
    // 0x3c5ba8: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x3c5ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_3c5bac:
    // 0x3c5bac: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x3c5bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_3c5bb0:
    // 0x3c5bb0: 0x24900070  addiu       $s0, $a0, 0x70
    ctx->pc = 0x3c5bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_3c5bb4:
    // 0x3c5bb4: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x3c5bb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_3c5bb8:
    // 0x3c5bb8: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_3c5bbc:
    if (ctx->pc == 0x3C5BBCu) {
        ctx->pc = 0x3C5BBCu;
            // 0x3c5bbc: 0x24850082  addiu       $a1, $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 130));
        ctx->pc = 0x3C5BC0u;
        goto label_3c5bc0;
    }
    ctx->pc = 0x3C5BB8u;
    {
        const bool branch_taken_0x3c5bb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5BB8u;
            // 0x3c5bbc: 0x24850082  addiu       $a1, $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5bb8) {
            ctx->pc = 0x3C5BDCu;
            goto label_3c5bdc;
        }
    }
    ctx->pc = 0x3C5BC0u;
label_3c5bc0:
    // 0x3c5bc0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3c5bc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c5bc4:
    // 0x3c5bc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c5bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c5bc8:
    // 0x3c5bc8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c5bc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c5bcc:
    // 0x3c5bcc: 0x320f809  jalr        $t9
label_3c5bd0:
    if (ctx->pc == 0x3C5BD0u) {
        ctx->pc = 0x3C5BD0u;
            // 0x3c5bd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C5BD4u;
        goto label_3c5bd4;
    }
    ctx->pc = 0x3C5BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C5BD4u);
        ctx->pc = 0x3C5BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5BCCu;
            // 0x3c5bd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C5BD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C5BD4u; }
            if (ctx->pc != 0x3C5BD4u) { return; }
        }
        }
    }
    ctx->pc = 0x3C5BD4u;
label_3c5bd4:
    // 0x3c5bd4: 0x1000017b  b           . + 4 + (0x17B << 2)
label_3c5bd8:
    if (ctx->pc == 0x3C5BD8u) {
        ctx->pc = 0x3C5BDCu;
        goto label_3c5bdc;
    }
    ctx->pc = 0x3C5BD4u;
    {
        const bool branch_taken_0x3c5bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5bd4) {
            ctx->pc = 0x3C61C4u;
            goto label_3c61c4;
        }
    }
    ctx->pc = 0x3C5BDCu;
label_3c5bdc:
    // 0x3c5bdc: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x3c5bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c5be0:
    // 0x3c5be0: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x3c5be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3c5be4:
    // 0x3c5be4: 0xc6600054  lwc1        $f0, 0x54($s3)
    ctx->pc = 0x3c5be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c5be8:
    // 0x3c5be8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c5be8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3c5bec:
    // 0x3c5bec: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x3c5becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
label_3c5bf0:
    // 0x3c5bf0: 0x926300c0  lbu         $v1, 0xC0($s3)
    ctx->pc = 0x3c5bf0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 192)));
label_3c5bf4:
    // 0x3c5bf4: 0x50830010  beql        $a0, $v1, . + 4 + (0x10 << 2)
label_3c5bf8:
    if (ctx->pc == 0x3C5BF8u) {
        ctx->pc = 0x3C5BF8u;
            // 0x3c5bf8: 0xc66500a0  lwc1        $f5, 0xA0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->pc = 0x3C5BFCu;
        goto label_3c5bfc;
    }
    ctx->pc = 0x3C5BF4u;
    {
        const bool branch_taken_0x3c5bf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c5bf4) {
            ctx->pc = 0x3C5BF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5BF4u;
            // 0x3c5bf8: 0xc66500a0  lwc1        $f5, 0xA0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C5C38u;
            goto label_3c5c38;
        }
    }
    ctx->pc = 0x3C5BFCu;
label_3c5bfc:
    // 0x3c5bfc: 0xc66500a0  lwc1        $f5, 0xA0($s3)
    ctx->pc = 0x3c5bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3c5c00:
    // 0x3c5c00: 0xc6600054  lwc1        $f0, 0x54($s3)
    ctx->pc = 0x3c5c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c5c04:
    // 0x3c5c04: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x3c5c04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c5c08:
    // 0x3c5c08: 0x4503001c  bc1tl       . + 4 + (0x1C << 2)
label_3c5c0c:
    if (ctx->pc == 0x3C5C0Cu) {
        ctx->pc = 0x3C5C0Cu;
            // 0x3c5c0c: 0xc664006c  lwc1        $f4, 0x6C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->pc = 0x3C5C10u;
        goto label_3c5c10;
    }
    ctx->pc = 0x3C5C08u;
    {
        const bool branch_taken_0x3c5c08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c5c08) {
            ctx->pc = 0x3C5C0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5C08u;
            // 0x3c5c0c: 0xc664006c  lwc1        $f4, 0x6C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C5C7Cu;
            goto label_3c5c7c;
        }
    }
    ctx->pc = 0x3C5C10u;
label_3c5c10:
    // 0x3c5c10: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3c5c10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c5c14:
    // 0x3c5c14: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3c5c14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3c5c18:
    // 0x3c5c18: 0x320f809  jalr        $t9
label_3c5c1c:
    if (ctx->pc == 0x3C5C1Cu) {
        ctx->pc = 0x3C5C1Cu;
            // 0x3c5c1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C5C20u;
        goto label_3c5c20;
    }
    ctx->pc = 0x3C5C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C5C20u);
        ctx->pc = 0x3C5C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5C18u;
            // 0x3c5c1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C5C20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C5C20u; }
            if (ctx->pc != 0x3C5C20u) { return; }
        }
        }
    }
    ctx->pc = 0x3C5C20u;
label_3c5c20:
    // 0x3c5c20: 0xae600054  sw          $zero, 0x54($s3)
    ctx->pc = 0x3c5c20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 0));
label_3c5c24:
    // 0x3c5c24: 0xc660006c  lwc1        $f0, 0x6C($s3)
    ctx->pc = 0x3c5c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c5c28:
    // 0x3c5c28: 0xe6600094  swc1        $f0, 0x94($s3)
    ctx->pc = 0x3c5c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 148), bits); }
label_3c5c2c:
    // 0x3c5c2c: 0xa260005e  sb          $zero, 0x5E($s3)
    ctx->pc = 0x3c5c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 94), (uint8_t)GPR_U32(ctx, 0));
label_3c5c30:
    // 0x3c5c30: 0x10000164  b           . + 4 + (0x164 << 2)
label_3c5c34:
    if (ctx->pc == 0x3C5C34u) {
        ctx->pc = 0x3C5C34u;
            // 0x3c5c34: 0xa6000000  sh          $zero, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3C5C38u;
        goto label_3c5c38;
    }
    ctx->pc = 0x3C5C30u;
    {
        const bool branch_taken_0x3c5c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5C30u;
            // 0x3c5c34: 0xa6000000  sh          $zero, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5c30) {
            ctx->pc = 0x3C61C4u;
            goto label_3c61c4;
        }
    }
    ctx->pc = 0x3C5C38u;
label_3c5c38:
    // 0x3c5c38: 0xc6600054  lwc1        $f0, 0x54($s3)
    ctx->pc = 0x3c5c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c5c3c:
    // 0x3c5c3c: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x3c5c3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c5c40:
    // 0x3c5c40: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_3c5c44:
    if (ctx->pc == 0x3C5C44u) {
        ctx->pc = 0x3C5C48u;
        goto label_3c5c48;
    }
    ctx->pc = 0x3C5C40u;
    {
        const bool branch_taken_0x3c5c40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c5c40) {
            ctx->pc = 0x3C5C78u;
            goto label_3c5c78;
        }
    }
    ctx->pc = 0x3C5C48u;
label_3c5c48:
    // 0x3c5c48: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3c5c48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c5c4c:
    // 0x3c5c4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c5c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c5c50:
    // 0x3c5c50: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c5c50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c5c54:
    // 0x3c5c54: 0x320f809  jalr        $t9
label_3c5c58:
    if (ctx->pc == 0x3C5C58u) {
        ctx->pc = 0x3C5C58u;
            // 0x3c5c58: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x3C5C5Cu;
        goto label_3c5c5c;
    }
    ctx->pc = 0x3C5C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C5C5Cu);
        ctx->pc = 0x3C5C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5C54u;
            // 0x3c5c58: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C5C5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C5C5Cu; }
            if (ctx->pc != 0x3C5C5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3C5C5Cu;
label_3c5c5c:
    // 0x3c5c5c: 0xae600054  sw          $zero, 0x54($s3)
    ctx->pc = 0x3c5c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 0));
label_3c5c60:
    // 0x3c5c60: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3c5c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3c5c64:
    // 0x3c5c64: 0xc660006c  lwc1        $f0, 0x6C($s3)
    ctx->pc = 0x3c5c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c5c68:
    // 0x3c5c68: 0xe6600094  swc1        $f0, 0x94($s3)
    ctx->pc = 0x3c5c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 148), bits); }
label_3c5c6c:
    // 0x3c5c6c: 0xa263005e  sb          $v1, 0x5E($s3)
    ctx->pc = 0x3c5c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 94), (uint8_t)GPR_U32(ctx, 3));
label_3c5c70:
    // 0x3c5c70: 0x10000154  b           . + 4 + (0x154 << 2)
label_3c5c74:
    if (ctx->pc == 0x3C5C74u) {
        ctx->pc = 0x3C5C74u;
            // 0x3c5c74: 0xa6000000  sh          $zero, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3C5C78u;
        goto label_3c5c78;
    }
    ctx->pc = 0x3C5C70u;
    {
        const bool branch_taken_0x3c5c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5C70u;
            // 0x3c5c74: 0xa6000000  sh          $zero, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5c70) {
            ctx->pc = 0x3C61C4u;
            goto label_3c61c4;
        }
    }
    ctx->pc = 0x3C5C78u;
label_3c5c78:
    // 0x3c5c78: 0xc664006c  lwc1        $f4, 0x6C($s3)
    ctx->pc = 0x3c5c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3c5c7c:
    // 0x3c5c7c: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x3c5c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_3c5c80:
    // 0x3c5c80: 0xc6620098  lwc1        $f2, 0x98($s3)
    ctx->pc = 0x3c5c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c5c84:
    // 0x3c5c84: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3c5c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3c5c88:
    // 0x3c5c88: 0x46002841  sub.s       $f1, $f5, $f0
    ctx->pc = 0x3c5c88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_3c5c8c:
    // 0x3c5c8c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x3c5c8cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_3c5c90:
    // 0x3c5c90: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3c5c90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3c5c94:
    // 0x3c5c94: 0x46050843  div.s       $f1, $f1, $f5
    ctx->pc = 0x3c5c94u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[5];
label_3c5c98:
    // 0x3c5c98: 0x46012040  add.s       $f1, $f4, $f1
    ctx->pc = 0x3c5c98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_3c5c9c:
    // 0x3c5c9c: 0xe6610094  swc1        $f1, 0x94($s3)
    ctx->pc = 0x3c5c9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 148), bits); }
label_3c5ca0:
    // 0x3c5ca0: 0xc6620054  lwc1        $f2, 0x54($s3)
    ctx->pc = 0x3c5ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c5ca4:
    // 0x3c5ca4: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x3c5ca4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3c5ca8:
    // 0x3c5ca8: 0xc66100a0  lwc1        $f1, 0xA0($s3)
    ctx->pc = 0x3c5ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c5cac:
    // 0x3c5cac: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3c5cacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3c5cb0:
    // 0x3c5cb0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3c5cb0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_3c5cb4:
    // 0x3c5cb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c5cb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c5cb8:
    // 0x3c5cb8: 0x0  nop
    ctx->pc = 0x3c5cb8u;
    // NOP
label_3c5cbc:
    // 0x3c5cbc: 0x0  nop
    ctx->pc = 0x3c5cbcu;
    // NOP
label_3c5cc0:
    // 0x3c5cc0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c5cc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c5cc4:
    // 0x3c5cc4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3c5cc8:
    if (ctx->pc == 0x3C5CC8u) {
        ctx->pc = 0x3C5CC8u;
            // 0x3c5cc8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3C5CCCu;
        goto label_3c5ccc;
    }
    ctx->pc = 0x3C5CC4u;
    {
        const bool branch_taken_0x3c5cc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c5cc4) {
            ctx->pc = 0x3C5CC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5CC4u;
            // 0x3c5cc8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C5CDCu;
            goto label_3c5cdc;
        }
    }
    ctx->pc = 0x3C5CCCu;
label_3c5ccc:
    // 0x3c5ccc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c5cccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c5cd0:
    // 0x3c5cd0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3c5cd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3c5cd4:
    // 0x3c5cd4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3c5cd8:
    if (ctx->pc == 0x3C5CD8u) {
        ctx->pc = 0x3C5CD8u;
            // 0x3c5cd8: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3C5CDCu;
        goto label_3c5cdc;
    }
    ctx->pc = 0x3C5CD4u;
    {
        const bool branch_taken_0x3c5cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5CD4u;
            // 0x3c5cd8: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5cd4) {
            ctx->pc = 0x3C5CF4u;
            goto label_3c5cf4;
        }
    }
    ctx->pc = 0x3C5CDCu;
label_3c5cdc:
    // 0x3c5cdc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3c5cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3c5ce0:
    // 0x3c5ce0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c5ce0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c5ce4:
    // 0x3c5ce4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3c5ce4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3c5ce8:
    // 0x3c5ce8: 0x0  nop
    ctx->pc = 0x3c5ce8u;
    // NOP
label_3c5cec:
    // 0x3c5cec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3c5cecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3c5cf0:
    // 0x3c5cf0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3c5cf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3c5cf4:
    // 0x3c5cf4: 0xa264005e  sb          $a0, 0x5E($s3)
    ctx->pc = 0x3c5cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 94), (uint8_t)GPR_U32(ctx, 4));
label_3c5cf8:
    // 0x3c5cf8: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x3c5cf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_3c5cfc:
    // 0x3c5cfc: 0xc6610054  lwc1        $f1, 0x54($s3)
    ctx->pc = 0x3c5cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c5d00:
    // 0x3c5d00: 0xc66000a0  lwc1        $f0, 0xA0($s3)
    ctx->pc = 0x3c5d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c5d04:
    // 0x3c5d04: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3c5d04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3c5d08:
    // 0x3c5d08: 0x0  nop
    ctx->pc = 0x3c5d08u;
    // NOP
label_3c5d0c:
    // 0x3c5d0c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3c5d0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3c5d10:
    // 0x3c5d10: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3c5d10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3c5d14:
    // 0x3c5d14: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3c5d14u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_3c5d18:
    // 0x3c5d18: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3c5d18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3c5d1c:
    // 0x3c5d1c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c5d1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c5d20:
    // 0x3c5d20: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3c5d20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3c5d24:
    // 0x3c5d24: 0x10000127  b           . + 4 + (0x127 << 2)
label_3c5d28:
    if (ctx->pc == 0x3C5D28u) {
        ctx->pc = 0x3C5D28u;
            // 0x3c5d28: 0xa6030000  sh          $v1, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3C5D2Cu;
        goto label_3c5d2c;
    }
    ctx->pc = 0x3C5D24u;
    {
        const bool branch_taken_0x3c5d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5D24u;
            // 0x3c5d28: 0xa6030000  sh          $v1, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5d24) {
            ctx->pc = 0x3C61C4u;
            goto label_3c61c4;
        }
    }
    ctx->pc = 0x3C5D2Cu;
label_3c5d2c:
    // 0x3c5d2c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c5d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3c5d30:
    // 0x3c5d30: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3c5d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3c5d34:
    // 0x3c5d34: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3c5d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_3c5d38:
    // 0x3c5d38: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x3c5d38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_3c5d3c:
    // 0x3c5d3c: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_3c5d40:
    if (ctx->pc == 0x3C5D40u) {
        ctx->pc = 0x3C5D40u;
            // 0x3c5d40: 0xc6210018  lwc1        $f1, 0x18($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3C5D44u;
        goto label_3c5d44;
    }
    ctx->pc = 0x3C5D3Cu;
    {
        const bool branch_taken_0x3c5d3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5d3c) {
            ctx->pc = 0x3C5D40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5D3Cu;
            // 0x3c5d40: 0xc6210018  lwc1        $f1, 0x18($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C5D5Cu;
            goto label_3c5d5c;
        }
    }
    ctx->pc = 0x3C5D44u;
label_3c5d44:
    // 0x3c5d44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c5d44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c5d48:
    // 0x3c5d48: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c5d48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c5d4c:
    // 0x3c5d4c: 0x320f809  jalr        $t9
label_3c5d50:
    if (ctx->pc == 0x3C5D50u) {
        ctx->pc = 0x3C5D50u;
            // 0x3c5d50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C5D54u;
        goto label_3c5d54;
    }
    ctx->pc = 0x3C5D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C5D54u);
        ctx->pc = 0x3C5D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5D4Cu;
            // 0x3c5d50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C5D54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C5D54u; }
            if (ctx->pc != 0x3C5D54u) { return; }
        }
        }
    }
    ctx->pc = 0x3C5D54u;
label_3c5d54:
    // 0x3c5d54: 0x1000011b  b           . + 4 + (0x11B << 2)
label_3c5d58:
    if (ctx->pc == 0x3C5D58u) {
        ctx->pc = 0x3C5D5Cu;
        goto label_3c5d5c;
    }
    ctx->pc = 0x3C5D54u;
    {
        const bool branch_taken_0x3c5d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5d54) {
            ctx->pc = 0x3C61C4u;
            goto label_3c61c4;
        }
    }
    ctx->pc = 0x3C5D5Cu;
label_3c5d5c:
    // 0x3c5d5c: 0xc6600054  lwc1        $f0, 0x54($s3)
    ctx->pc = 0x3c5d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c5d60:
    // 0x3c5d60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c5d60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3c5d64:
    // 0x3c5d64: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x3c5d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
label_3c5d68:
    // 0x3c5d68: 0xc66400a4  lwc1        $f4, 0xA4($s3)
    ctx->pc = 0x3c5d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3c5d6c:
    // 0x3c5d6c: 0xc6630054  lwc1        $f3, 0x54($s3)
    ctx->pc = 0x3c5d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3c5d70:
    // 0x3c5d70: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x3c5d70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c5d74:
    // 0x3c5d74: 0x45030013  bc1tl       . + 4 + (0x13 << 2)
label_3c5d78:
    if (ctx->pc == 0x3C5D78u) {
        ctx->pc = 0x3C5D78u;
            // 0x3c5d78: 0xc662006c  lwc1        $f2, 0x6C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x3C5D7Cu;
        goto label_3c5d7c;
    }
    ctx->pc = 0x3C5D74u;
    {
        const bool branch_taken_0x3c5d74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c5d74) {
            ctx->pc = 0x3C5D78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5D74u;
            // 0x3c5d78: 0xc662006c  lwc1        $f2, 0x6C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C5DC4u;
            goto label_3c5dc4;
        }
    }
    ctx->pc = 0x3C5D7Cu;
label_3c5d7c:
    // 0x3c5d7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c5d7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c5d80:
    // 0x3c5d80: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3c5d80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3c5d84:
    // 0x3c5d84: 0x320f809  jalr        $t9
label_3c5d88:
    if (ctx->pc == 0x3C5D88u) {
        ctx->pc = 0x3C5D8Cu;
        goto label_3c5d8c;
    }
    ctx->pc = 0x3C5D84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C5D8Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C5D8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C5D8Cu; }
            if (ctx->pc != 0x3C5D8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3C5D8Cu;
label_3c5d8c:
    // 0x3c5d8c: 0xae600054  sw          $zero, 0x54($s3)
    ctx->pc = 0x3c5d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 0));
label_3c5d90:
    // 0x3c5d90: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3c5d90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3c5d94:
    // 0x3c5d94: 0xc660009c  lwc1        $f0, 0x9C($s3)
    ctx->pc = 0x3c5d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c5d98:
    // 0x3c5d98: 0xe6600094  swc1        $f0, 0x94($s3)
    ctx->pc = 0x3c5d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 148), bits); }
label_3c5d9c:
    // 0x3c5d9c: 0xc6600064  lwc1        $f0, 0x64($s3)
    ctx->pc = 0x3c5d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c5da0:
    // 0x3c5da0: 0xc6620068  lwc1        $f2, 0x68($s3)
    ctx->pc = 0x3c5da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c5da4:
    // 0x3c5da4: 0xc6610094  lwc1        $f1, 0x94($s3)
    ctx->pc = 0x3c5da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c5da8:
    // 0x3c5da8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c5da8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3c5dac:
    // 0x3c5dac: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x3c5dacu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3c5db0:
    // 0x3c5db0: 0x4601101d  msub.s      $f0, $f2, $f1
    ctx->pc = 0x3c5db0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_3c5db4:
    // 0x3c5db4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c5db4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c5db8:
    // 0x3c5db8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3c5db8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3c5dbc:
    // 0x3c5dbc: 0x10000101  b           . + 4 + (0x101 << 2)
label_3c5dc0:
    if (ctx->pc == 0x3C5DC0u) {
        ctx->pc = 0x3C5DC0u;
            // 0x3c5dc0: 0xa6630060  sh          $v1, 0x60($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 96), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3C5DC4u;
        goto label_3c5dc4;
    }
    ctx->pc = 0x3C5DBCu;
    {
        const bool branch_taken_0x3c5dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5DBCu;
            // 0x3c5dc0: 0xa6630060  sh          $v1, 0x60($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 96), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5dbc) {
            ctx->pc = 0x3C61C4u;
            goto label_3c61c4;
        }
    }
    ctx->pc = 0x3C5DC4u;
label_3c5dc4:
    // 0x3c5dc4: 0xc661009c  lwc1        $f1, 0x9C($s3)
    ctx->pc = 0x3c5dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c5dc8:
    // 0x3c5dc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c5dc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c5dcc:
    // 0x3c5dcc: 0x0  nop
    ctx->pc = 0x3c5dccu;
    // NOP
label_3c5dd0:
    // 0x3c5dd0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3c5dd0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3c5dd4:
    // 0x3c5dd4: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c5dd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_3c5dd8:
    // 0x3c5dd8: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x3c5dd8u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
label_3c5ddc:
    // 0x3c5ddc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x3c5ddcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3c5de0:
    // 0x3c5de0: 0xe6610094  swc1        $f1, 0x94($s3)
    ctx->pc = 0x3c5de0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 148), bits); }
label_3c5de4:
    // 0x3c5de4: 0xc6610064  lwc1        $f1, 0x64($s3)
    ctx->pc = 0x3c5de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c5de8:
    // 0x3c5de8: 0xc6630068  lwc1        $f3, 0x68($s3)
    ctx->pc = 0x3c5de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3c5dec:
    // 0x3c5dec: 0xc6620094  lwc1        $f2, 0x94($s3)
    ctx->pc = 0x3c5decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c5df0:
    // 0x3c5df0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3c5df0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3c5df4:
    // 0x3c5df4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3c5df4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3c5df8:
    // 0x3c5df8: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x3c5df8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_3c5dfc:
    // 0x3c5dfc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c5dfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c5e00:
    // 0x3c5e00: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3c5e00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3c5e04:
    // 0x3c5e04: 0x100000ef  b           . + 4 + (0xEF << 2)
label_3c5e08:
    if (ctx->pc == 0x3C5E08u) {
        ctx->pc = 0x3C5E08u;
            // 0x3c5e08: 0xa6630060  sh          $v1, 0x60($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 96), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3C5E0Cu;
        goto label_3c5e0c;
    }
    ctx->pc = 0x3C5E04u;
    {
        const bool branch_taken_0x3c5e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5E04u;
            // 0x3c5e08: 0xa6630060  sh          $v1, 0x60($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 96), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5e04) {
            ctx->pc = 0x3C61C4u;
            goto label_3c61c4;
        }
    }
    ctx->pc = 0x3C5E0Cu;
label_3c5e0c:
    // 0x3c5e0c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c5e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3c5e10:
    // 0x3c5e10: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3c5e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3c5e14:
    // 0x3c5e14: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3c5e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_3c5e18:
    // 0x3c5e18: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x3c5e18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_3c5e1c:
    // 0x3c5e1c: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_3c5e20:
    if (ctx->pc == 0x3C5E20u) {
        ctx->pc = 0x3C5E20u;
            // 0x3c5e20: 0xc6210018  lwc1        $f1, 0x18($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3C5E24u;
        goto label_3c5e24;
    }
    ctx->pc = 0x3C5E1Cu;
    {
        const bool branch_taken_0x3c5e1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5e1c) {
            ctx->pc = 0x3C5E20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5E1Cu;
            // 0x3c5e20: 0xc6210018  lwc1        $f1, 0x18($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C5E3Cu;
            goto label_3c5e3c;
        }
    }
    ctx->pc = 0x3C5E24u;
label_3c5e24:
    // 0x3c5e24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c5e24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c5e28:
    // 0x3c5e28: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c5e28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c5e2c:
    // 0x3c5e2c: 0x320f809  jalr        $t9
label_3c5e30:
    if (ctx->pc == 0x3C5E30u) {
        ctx->pc = 0x3C5E30u;
            // 0x3c5e30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C5E34u;
        goto label_3c5e34;
    }
    ctx->pc = 0x3C5E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C5E34u);
        ctx->pc = 0x3C5E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5E2Cu;
            // 0x3c5e30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C5E34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C5E34u; }
            if (ctx->pc != 0x3C5E34u) { return; }
        }
        }
    }
    ctx->pc = 0x3C5E34u;
label_3c5e34:
    // 0x3c5e34: 0x100000e3  b           . + 4 + (0xE3 << 2)
label_3c5e38:
    if (ctx->pc == 0x3C5E38u) {
        ctx->pc = 0x3C5E3Cu;
        goto label_3c5e3c;
    }
    ctx->pc = 0x3C5E34u;
    {
        const bool branch_taken_0x3c5e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5e34) {
            ctx->pc = 0x3C61C4u;
            goto label_3c61c4;
        }
    }
    ctx->pc = 0x3C5E3Cu;
label_3c5e3c:
    // 0x3c5e3c: 0xc6600054  lwc1        $f0, 0x54($s3)
    ctx->pc = 0x3c5e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c5e40:
    // 0x3c5e40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c5e40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3c5e44:
    // 0x3c5e44: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x3c5e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
label_3c5e48:
    // 0x3c5e48: 0xc66400a4  lwc1        $f4, 0xA4($s3)
    ctx->pc = 0x3c5e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3c5e4c:
    // 0x3c5e4c: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x3c5e4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c5e50:
    // 0x3c5e50: 0x4503001e  bc1tl       . + 4 + (0x1E << 2)
label_3c5e54:
    if (ctx->pc == 0x3C5E54u) {
        ctx->pc = 0x3C5E54u;
            // 0x3c5e54: 0xc663006c  lwc1        $f3, 0x6C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x3C5E58u;
        goto label_3c5e58;
    }
    ctx->pc = 0x3C5E50u;
    {
        const bool branch_taken_0x3c5e50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c5e50) {
            ctx->pc = 0x3C5E54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5E50u;
            // 0x3c5e54: 0xc663006c  lwc1        $f3, 0x6C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C5ECCu;
            goto label_3c5ecc;
        }
    }
    ctx->pc = 0x3C5E58u;
label_3c5e58:
    // 0x3c5e58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c5e58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c5e5c:
    // 0x3c5e5c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3c5e5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3c5e60:
    // 0x3c5e60: 0x320f809  jalr        $t9
label_3c5e64:
    if (ctx->pc == 0x3C5E64u) {
        ctx->pc = 0x3C5E68u;
        goto label_3c5e68;
    }
    ctx->pc = 0x3C5E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C5E68u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C5E68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C5E68u; }
            if (ctx->pc != 0x3C5E68u) { return; }
        }
        }
    }
    ctx->pc = 0x3C5E68u;
label_3c5e68:
    // 0x3c5e68: 0xae600054  sw          $zero, 0x54($s3)
    ctx->pc = 0x3c5e68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 0));
label_3c5e6c:
    // 0x3c5e6c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3c5e6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3c5e70:
    // 0x3c5e70: 0xc660006c  lwc1        $f0, 0x6C($s3)
    ctx->pc = 0x3c5e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c5e74:
    // 0x3c5e74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c5e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c5e78:
    // 0x3c5e78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c5e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c5e7c:
    // 0x3c5e7c: 0xe6600094  swc1        $f0, 0x94($s3)
    ctx->pc = 0x3c5e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 148), bits); }
label_3c5e80:
    // 0x3c5e80: 0xc6600064  lwc1        $f0, 0x64($s3)
    ctx->pc = 0x3c5e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c5e84:
    // 0x3c5e84: 0xc6620068  lwc1        $f2, 0x68($s3)
    ctx->pc = 0x3c5e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c5e88:
    // 0x3c5e88: 0xc6610094  lwc1        $f1, 0x94($s3)
    ctx->pc = 0x3c5e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c5e8c:
    // 0x3c5e8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c5e8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3c5e90:
    // 0x3c5e90: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x3c5e90u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3c5e94:
    // 0x3c5e94: 0x4601101d  msub.s      $f0, $f2, $f1
    ctx->pc = 0x3c5e94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_3c5e98:
    // 0x3c5e98: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c5e98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c5e9c:
    // 0x3c5e9c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3c5e9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3c5ea0:
    // 0x3c5ea0: 0x0  nop
    ctx->pc = 0x3c5ea0u;
    // NOP
label_3c5ea4:
    // 0x3c5ea4: 0xa6630060  sh          $v1, 0x60($s3)
    ctx->pc = 0x3c5ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 96), (uint16_t)GPR_U32(ctx, 3));
label_3c5ea8:
    // 0x3c5ea8: 0xa4800070  sh          $zero, 0x70($a0)
    ctx->pc = 0x3c5ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 112), (uint16_t)GPR_U32(ctx, 0));
label_3c5eac:
    // 0x3c5eac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3c5eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3c5eb0:
    // 0x3c5eb0: 0x926300c0  lbu         $v1, 0xC0($s3)
    ctx->pc = 0x3c5eb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 192)));
label_3c5eb4:
    // 0x3c5eb4: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3c5eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_3c5eb8:
    // 0x3c5eb8: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x3c5eb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3c5ebc:
    // 0x3c5ebc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_3c5ec0:
    if (ctx->pc == 0x3C5EC0u) {
        ctx->pc = 0x3C5EC4u;
        goto label_3c5ec4;
    }
    ctx->pc = 0x3C5EBCu;
    {
        const bool branch_taken_0x3c5ebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c5ebc) {
            ctx->pc = 0x3C5EA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3c5ea8;
        }
    }
    ctx->pc = 0x3C5EC4u;
label_3c5ec4:
    // 0x3c5ec4: 0x100000bf  b           . + 4 + (0xBF << 2)
label_3c5ec8:
    if (ctx->pc == 0x3C5EC8u) {
        ctx->pc = 0x3C5ECCu;
        goto label_3c5ecc;
    }
    ctx->pc = 0x3C5EC4u;
    {
        const bool branch_taken_0x3c5ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5ec4) {
            ctx->pc = 0x3C61C4u;
            goto label_3c61c4;
        }
    }
    ctx->pc = 0x3C5ECCu;
label_3c5ecc:
    // 0x3c5ecc: 0xc662009c  lwc1        $f2, 0x9C($s3)
    ctx->pc = 0x3c5eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c5ed0:
    // 0x3c5ed0: 0x46002041  sub.s       $f1, $f4, $f0
    ctx->pc = 0x3c5ed0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_3c5ed4:
    // 0x3c5ed4: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x3c5ed4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_3c5ed8:
    // 0x3c5ed8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3c5ed8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3c5edc:
    // 0x3c5edc: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x3c5edcu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
label_3c5ee0:
    // 0x3c5ee0: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x3c5ee0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_3c5ee4:
    // 0x3c5ee4: 0xe6610094  swc1        $f1, 0x94($s3)
    ctx->pc = 0x3c5ee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 148), bits); }
label_3c5ee8:
    // 0x3c5ee8: 0xc6610064  lwc1        $f1, 0x64($s3)
    ctx->pc = 0x3c5ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c5eec:
    // 0x3c5eec: 0xc6630068  lwc1        $f3, 0x68($s3)
    ctx->pc = 0x3c5eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3c5ef0:
    // 0x3c5ef0: 0xc6620094  lwc1        $f2, 0x94($s3)
    ctx->pc = 0x3c5ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c5ef4:
    // 0x3c5ef4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3c5ef4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3c5ef8:
    // 0x3c5ef8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c5ef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c5efc:
    // 0x3c5efc: 0x0  nop
    ctx->pc = 0x3c5efcu;
    // NOP
label_3c5f00:
    // 0x3c5f00: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3c5f00u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3c5f04:
    // 0x3c5f04: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x3c5f04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_3c5f08:
    // 0x3c5f08: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c5f08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c5f0c:
    // 0x3c5f0c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3c5f0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3c5f10:
    // 0x3c5f10: 0x100000ac  b           . + 4 + (0xAC << 2)
label_3c5f14:
    if (ctx->pc == 0x3C5F14u) {
        ctx->pc = 0x3C5F14u;
            // 0x3c5f14: 0xa6630060  sh          $v1, 0x60($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 96), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3C5F18u;
        goto label_3c5f18;
    }
    ctx->pc = 0x3C5F10u;
    {
        const bool branch_taken_0x3c5f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5F10u;
            // 0x3c5f14: 0xa6630060  sh          $v1, 0x60($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 96), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5f10) {
            ctx->pc = 0x3C61C4u;
            goto label_3c61c4;
        }
    }
    ctx->pc = 0x3C5F18u;
label_3c5f18:
    // 0x3c5f18: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c5f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3c5f1c:
    // 0x3c5f1c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3c5f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3c5f20:
    // 0x3c5f20: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3c5f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_3c5f24:
    // 0x3c5f24: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x3c5f24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_3c5f28:
    // 0x3c5f28: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_3c5f2c:
    if (ctx->pc == 0x3C5F2Cu) {
        ctx->pc = 0x3C5F2Cu;
            // 0x3c5f2c: 0xc6210018  lwc1        $f1, 0x18($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3C5F30u;
        goto label_3c5f30;
    }
    ctx->pc = 0x3C5F28u;
    {
        const bool branch_taken_0x3c5f28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5f28) {
            ctx->pc = 0x3C5F2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5F28u;
            // 0x3c5f2c: 0xc6210018  lwc1        $f1, 0x18($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C5F48u;
            goto label_3c5f48;
        }
    }
    ctx->pc = 0x3C5F30u;
label_3c5f30:
    // 0x3c5f30: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c5f30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c5f34:
    // 0x3c5f34: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c5f34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c5f38:
    // 0x3c5f38: 0x320f809  jalr        $t9
label_3c5f3c:
    if (ctx->pc == 0x3C5F3Cu) {
        ctx->pc = 0x3C5F3Cu;
            // 0x3c5f3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C5F40u;
        goto label_3c5f40;
    }
    ctx->pc = 0x3C5F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C5F40u);
        ctx->pc = 0x3C5F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5F38u;
            // 0x3c5f3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C5F40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C5F40u; }
            if (ctx->pc != 0x3C5F40u) { return; }
        }
        }
    }
    ctx->pc = 0x3C5F40u;
label_3c5f40:
    // 0x3c5f40: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_3c5f44:
    if (ctx->pc == 0x3C5F44u) {
        ctx->pc = 0x3C5F48u;
        goto label_3c5f48;
    }
    ctx->pc = 0x3C5F40u;
    {
        const bool branch_taken_0x3c5f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5f40) {
            ctx->pc = 0x3C61C4u;
            goto label_3c61c4;
        }
    }
    ctx->pc = 0x3C5F48u;
label_3c5f48:
    // 0x3c5f48: 0xc6600054  lwc1        $f0, 0x54($s3)
    ctx->pc = 0x3c5f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c5f4c:
    // 0x3c5f4c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x3c5f4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3c5f50:
    // 0x3c5f50: 0xe6610054  swc1        $f1, 0x54($s3)
    ctx->pc = 0x3c5f50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
label_3c5f54:
    // 0x3c5f54: 0xc66000a8  lwc1        $f0, 0xA8($s3)
    ctx->pc = 0x3c5f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c5f58:
    // 0x3c5f58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c5f58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c5f5c:
    // 0x3c5f5c: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_3c5f60:
    if (ctx->pc == 0x3C5F60u) {
        ctx->pc = 0x3C5F60u;
            // 0x3c5f60: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x3C5F64u;
        goto label_3c5f64;
    }
    ctx->pc = 0x3C5F5Cu;
    {
        const bool branch_taken_0x3c5f5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c5f5c) {
            ctx->pc = 0x3C5F60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5F5Cu;
            // 0x3c5f60: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C5F7Cu;
            goto label_3c5f7c;
        }
    }
    ctx->pc = 0x3C5F64u;
label_3c5f64:
    // 0x3c5f64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c5f64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c5f68:
    // 0x3c5f68: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3c5f68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3c5f6c:
    // 0x3c5f6c: 0x320f809  jalr        $t9
label_3c5f70:
    if (ctx->pc == 0x3C5F70u) {
        ctx->pc = 0x3C5F74u;
        goto label_3c5f74;
    }
    ctx->pc = 0x3C5F6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C5F74u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C5F74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C5F74u; }
            if (ctx->pc != 0x3C5F74u) { return; }
        }
        }
    }
    ctx->pc = 0x3C5F74u;
label_3c5f74:
    // 0x3c5f74: 0x10000093  b           . + 4 + (0x93 << 2)
label_3c5f78:
    if (ctx->pc == 0x3C5F78u) {
        ctx->pc = 0x3C5F78u;
            // 0x3c5f78: 0xae600054  sw          $zero, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 0));
        ctx->pc = 0x3C5F7Cu;
        goto label_3c5f7c;
    }
    ctx->pc = 0x3C5F74u;
    {
        const bool branch_taken_0x3c5f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5F74u;
            // 0x3c5f78: 0xae600054  sw          $zero, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5f74) {
            ctx->pc = 0x3C61C4u;
            goto label_3c61c4;
        }
    }
    ctx->pc = 0x3C5F7Cu;
label_3c5f7c:
    // 0x3c5f7c: 0x10000091  b           . + 4 + (0x91 << 2)
label_3c5f80:
    if (ctx->pc == 0x3C5F80u) {
        ctx->pc = 0x3C5F80u;
            // 0x3c5f80: 0xa263005e  sb          $v1, 0x5E($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 94), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3C5F84u;
        goto label_3c5f84;
    }
    ctx->pc = 0x3C5F7Cu;
    {
        const bool branch_taken_0x3c5f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5F7Cu;
            // 0x3c5f80: 0xa263005e  sb          $v1, 0x5E($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 94), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5f7c) {
            ctx->pc = 0x3C61C4u;
            goto label_3c61c4;
        }
    }
    ctx->pc = 0x3C5F84u;
label_3c5f84:
    // 0x3c5f84: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c5f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3c5f88:
    // 0x3c5f88: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3c5f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3c5f8c:
    // 0x3c5f8c: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3c5f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_3c5f90:
    // 0x3c5f90: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x3c5f90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_3c5f94:
    // 0x3c5f94: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_3c5f98:
    if (ctx->pc == 0x3C5F98u) {
        ctx->pc = 0x3C5F98u;
            // 0x3c5f98: 0xc6210018  lwc1        $f1, 0x18($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3C5F9Cu;
        goto label_3c5f9c;
    }
    ctx->pc = 0x3C5F94u;
    {
        const bool branch_taken_0x3c5f94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5f94) {
            ctx->pc = 0x3C5F98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5F94u;
            // 0x3c5f98: 0xc6210018  lwc1        $f1, 0x18($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C5FB4u;
            goto label_3c5fb4;
        }
    }
    ctx->pc = 0x3C5F9Cu;
label_3c5f9c:
    // 0x3c5f9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c5f9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c5fa0:
    // 0x3c5fa0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c5fa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c5fa4:
    // 0x3c5fa4: 0x320f809  jalr        $t9
label_3c5fa8:
    if (ctx->pc == 0x3C5FA8u) {
        ctx->pc = 0x3C5FA8u;
            // 0x3c5fa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C5FACu;
        goto label_3c5fac;
    }
    ctx->pc = 0x3C5FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C5FACu);
        ctx->pc = 0x3C5FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5FA4u;
            // 0x3c5fa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C5FACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C5FACu; }
            if (ctx->pc != 0x3C5FACu) { return; }
        }
        }
    }
    ctx->pc = 0x3C5FACu;
label_3c5fac:
    // 0x3c5fac: 0x10000085  b           . + 4 + (0x85 << 2)
label_3c5fb0:
    if (ctx->pc == 0x3C5FB0u) {
        ctx->pc = 0x3C5FB4u;
        goto label_3c5fb4;
    }
    ctx->pc = 0x3C5FACu;
    {
        const bool branch_taken_0x3c5fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5fac) {
            ctx->pc = 0x3C61C4u;
            goto label_3c61c4;
        }
    }
    ctx->pc = 0x3C5FB4u;
label_3c5fb4:
    // 0x3c5fb4: 0xc6600054  lwc1        $f0, 0x54($s3)
    ctx->pc = 0x3c5fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c5fb8:
    // 0x3c5fb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c5fb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3c5fbc:
    // 0x3c5fbc: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x3c5fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
label_3c5fc0:
    // 0x3c5fc0: 0xc66200ac  lwc1        $f2, 0xAC($s3)
    ctx->pc = 0x3c5fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c5fc4:
    // 0x3c5fc4: 0xc6600054  lwc1        $f0, 0x54($s3)
    ctx->pc = 0x3c5fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c5fc8:
    // 0x3c5fc8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3c5fc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c5fcc:
    // 0x3c5fcc: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_3c5fd0:
    if (ctx->pc == 0x3C5FD0u) {
        ctx->pc = 0x3C5FD0u;
            // 0x3c5fd0: 0x3c04437f  lui         $a0, 0x437F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
        ctx->pc = 0x3C5FD4u;
        goto label_3c5fd4;
    }
    ctx->pc = 0x3C5FCCu;
    {
        const bool branch_taken_0x3c5fcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c5fcc) {
            ctx->pc = 0x3C5FD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5FCCu;
            // 0x3c5fd0: 0x3c04437f  lui         $a0, 0x437F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C5FECu;
            goto label_3c5fec;
        }
    }
    ctx->pc = 0x3C5FD4u;
label_3c5fd4:
    // 0x3c5fd4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c5fd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c5fd8:
    // 0x3c5fd8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c5fd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c5fdc:
    // 0x3c5fdc: 0x320f809  jalr        $t9
label_3c5fe0:
    if (ctx->pc == 0x3C5FE0u) {
        ctx->pc = 0x3C5FE0u;
            // 0x3c5fe0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C5FE4u;
        goto label_3c5fe4;
    }
    ctx->pc = 0x3C5FDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C5FE4u);
        ctx->pc = 0x3C5FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5FDCu;
            // 0x3c5fe0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C5FE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C5FE4u; }
            if (ctx->pc != 0x3C5FE4u) { return; }
        }
        }
    }
    ctx->pc = 0x3C5FE4u;
label_3c5fe4:
    // 0x3c5fe4: 0x10000077  b           . + 4 + (0x77 << 2)
label_3c5fe8:
    if (ctx->pc == 0x3C5FE8u) {
        ctx->pc = 0x3C5FE8u;
            // 0x3c5fe8: 0xae600054  sw          $zero, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 0));
        ctx->pc = 0x3C5FECu;
        goto label_3c5fec;
    }
    ctx->pc = 0x3C5FE4u;
    {
        const bool branch_taken_0x3c5fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5FE4u;
            // 0x3c5fe8: 0xae600054  sw          $zero, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5fe4) {
            ctx->pc = 0x3C61C4u;
            goto label_3c61c4;
        }
    }
    ctx->pc = 0x3C5FECu;
label_3c5fec:
    // 0x3c5fec: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3c5fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3c5ff0:
    // 0x3c5ff0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3c5ff0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c5ff4:
    // 0x3c5ff4: 0x0  nop
    ctx->pc = 0x3c5ff4u;
    // NOP
label_3c5ff8:
    // 0x3c5ff8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3c5ff8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3c5ffc:
    // 0x3c5ffc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x3c5ffcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_3c6000:
    // 0x3c6000: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3c6000u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3c6004:
    // 0x3c6004: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c6004u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c6008:
    // 0x3c6008: 0x0  nop
    ctx->pc = 0x3c6008u;
    // NOP
label_3c600c:
    // 0x3c600c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c600cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c6010:
    // 0x3c6010: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3c6014:
    if (ctx->pc == 0x3C6014u) {
        ctx->pc = 0x3C6014u;
            // 0x3c6014: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3C6018u;
        goto label_3c6018;
    }
    ctx->pc = 0x3C6010u;
    {
        const bool branch_taken_0x3c6010 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c6010) {
            ctx->pc = 0x3C6014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6010u;
            // 0x3c6014: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C6028u;
            goto label_3c6028;
        }
    }
    ctx->pc = 0x3C6018u;
label_3c6018:
    // 0x3c6018: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c6018u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c601c:
    // 0x3c601c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3c601cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3c6020:
    // 0x3c6020: 0x10000007  b           . + 4 + (0x7 << 2)
label_3c6024:
    if (ctx->pc == 0x3C6024u) {
        ctx->pc = 0x3C6024u;
            // 0x3c6024: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3C6028u;
        goto label_3c6028;
    }
    ctx->pc = 0x3C6020u;
    {
        const bool branch_taken_0x3c6020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6020u;
            // 0x3c6024: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6020) {
            ctx->pc = 0x3C6040u;
            goto label_3c6040;
        }
    }
    ctx->pc = 0x3C6028u;
label_3c6028:
    // 0x3c6028: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3c6028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3c602c:
    // 0x3c602c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c602cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c6030:
    // 0x3c6030: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3c6030u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3c6034:
    // 0x3c6034: 0x0  nop
    ctx->pc = 0x3c6034u;
    // NOP
label_3c6038:
    // 0x3c6038: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3c6038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3c603c:
    // 0x3c603c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3c603cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3c6040:
    // 0x3c6040: 0x10000060  b           . + 4 + (0x60 << 2)
label_3c6044:
    if (ctx->pc == 0x3C6044u) {
        ctx->pc = 0x3C6044u;
            // 0x3c6044: 0xa264005e  sb          $a0, 0x5E($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 94), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x3C6048u;
        goto label_3c6048;
    }
    ctx->pc = 0x3C6040u;
    {
        const bool branch_taken_0x3c6040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6040u;
            // 0x3c6044: 0xa264005e  sb          $a0, 0x5E($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 94), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6040) {
            ctx->pc = 0x3C61C4u;
            goto label_3c61c4;
        }
    }
    ctx->pc = 0x3C6048u;
label_3c6048:
    // 0x3c6048: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c6048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c604c:
    // 0x3c604c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3c604cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3c6050:
    // 0x3c6050: 0x320f809  jalr        $t9
label_3c6054:
    if (ctx->pc == 0x3C6054u) {
        ctx->pc = 0x3C6058u;
        goto label_3c6058;
    }
    ctx->pc = 0x3C6050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C6058u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C6058u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C6058u; }
            if (ctx->pc != 0x3C6058u) { return; }
        }
        }
    }
    ctx->pc = 0x3C6058u;
label_3c6058:
    // 0x3c6058: 0x1000005a  b           . + 4 + (0x5A << 2)
label_3c605c:
    if (ctx->pc == 0x3C605Cu) {
        ctx->pc = 0x3C6060u;
        goto label_3c6060;
    }
    ctx->pc = 0x3C6058u;
    {
        const bool branch_taken_0x3c6058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6058) {
            ctx->pc = 0x3C61C4u;
            goto label_3c61c4;
        }
    }
    ctx->pc = 0x3C6060u;
label_3c6060:
    // 0x3c6060: 0x8e420e34  lw          $v0, 0xE34($s2)
    ctx->pc = 0x3c6060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_3c6064:
    // 0x3c6064: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3c6064u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3c6068:
    // 0x3c6068: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3c606c:
    if (ctx->pc == 0x3C606Cu) {
        ctx->pc = 0x3C606Cu;
            // 0x3c606c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C6070u;
        goto label_3c6070;
    }
    ctx->pc = 0x3C6068u;
    {
        const bool branch_taken_0x3c6068 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3C606Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6068u;
            // 0x3c606c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6068) {
            ctx->pc = 0x3C6080u;
            goto label_3c6080;
        }
    }
    ctx->pc = 0x3C6070u;
label_3c6070:
    // 0x3c6070: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x3c6070u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_3c6074:
    // 0x3c6074: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3c6078:
    if (ctx->pc == 0x3C6078u) {
        ctx->pc = 0x3C607Cu;
        goto label_3c607c;
    }
    ctx->pc = 0x3C6074u;
    {
        const bool branch_taken_0x3c6074 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6074) {
            ctx->pc = 0x3C6080u;
            goto label_3c6080;
        }
    }
    ctx->pc = 0x3C607Cu;
label_3c607c:
    // 0x3c607c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3c607cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c6080:
    // 0x3c6080: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_3c6084:
    if (ctx->pc == 0x3C6084u) {
        ctx->pc = 0x3C6088u;
        goto label_3c6088;
    }
    ctx->pc = 0x3C6080u;
    {
        const bool branch_taken_0x3c6080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c6080) {
            ctx->pc = 0x3C609Cu;
            goto label_3c609c;
        }
    }
    ctx->pc = 0x3C6088u;
label_3c6088:
    // 0x3c6088: 0xc075eb4  jal         func_1D7AD0
label_3c608c:
    if (ctx->pc == 0x3C608Cu) {
        ctx->pc = 0x3C608Cu;
            // 0x3c608c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C6090u;
        goto label_3c6090;
    }
    ctx->pc = 0x3C6088u;
    SET_GPR_U32(ctx, 31, 0x3C6090u);
    ctx->pc = 0x3C608Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6088u;
            // 0x3c608c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C6090u; }
        if (ctx->pc != 0x3C6090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C6090u; }
        if (ctx->pc != 0x3C6090u) { return; }
    }
    ctx->pc = 0x3C6090u;
label_3c6090:
    // 0x3c6090: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3c6094:
    if (ctx->pc == 0x3C6094u) {
        ctx->pc = 0x3C6098u;
        goto label_3c6098;
    }
    ctx->pc = 0x3C6090u;
    {
        const bool branch_taken_0x3c6090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c6090) {
            ctx->pc = 0x3C609Cu;
            goto label_3c609c;
        }
    }
    ctx->pc = 0x3C6098u;
label_3c6098:
    // 0x3c6098: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3c6098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c609c:
    // 0x3c609c: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
label_3c60a0:
    if (ctx->pc == 0x3C60A0u) {
        ctx->pc = 0x3C60A0u;
            // 0x3c60a0: 0x92440068  lbu         $a0, 0x68($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->pc = 0x3C60A4u;
        goto label_3c60a4;
    }
    ctx->pc = 0x3C609Cu;
    {
        const bool branch_taken_0x3c609c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c609c) {
            ctx->pc = 0x3C60A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C609Cu;
            // 0x3c60a0: 0x92440068  lbu         $a0, 0x68($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C60B8u;
            goto label_3c60b8;
        }
    }
    ctx->pc = 0x3C60A4u;
label_3c60a4:
    // 0x3c60a4: 0x8e430e34  lw          $v1, 0xE34($s2)
    ctx->pc = 0x3c60a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_3c60a8:
    // 0x3c60a8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3c60a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3c60ac:
    // 0x3c60ac: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_3c60b0:
    if (ctx->pc == 0x3C60B0u) {
        ctx->pc = 0x3C60B4u;
        goto label_3c60b4;
    }
    ctx->pc = 0x3C60ACu;
    {
        const bool branch_taken_0x3c60ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c60ac) {
            ctx->pc = 0x3C60C0u;
            goto label_3c60c0;
        }
    }
    ctx->pc = 0x3C60B4u;
label_3c60b4:
    // 0x3c60b4: 0x92440068  lbu         $a0, 0x68($s2)
    ctx->pc = 0x3c60b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
label_3c60b8:
    // 0x3c60b8: 0xc072aaa  jal         func_1CAAA8
label_3c60bc:
    if (ctx->pc == 0x3C60BCu) {
        ctx->pc = 0x3C60C0u;
        goto label_3c60c0;
    }
    ctx->pc = 0x3C60B8u;
    SET_GPR_U32(ctx, 31, 0x3C60C0u);
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C60C0u; }
        if (ctx->pc != 0x3C60C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C60C0u; }
        if (ctx->pc != 0x3C60C0u) { return; }
    }
    ctx->pc = 0x3C60C0u;
label_3c60c0:
    // 0x3c60c0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3c60c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3c60c4:
    // 0x3c60c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3c60c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c60c8:
    // 0x3c60c8: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3c60c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3c60cc:
    // 0x3c60cc: 0xc057b7c  jal         func_15EDF0
label_3c60d0:
    if (ctx->pc == 0x3C60D0u) {
        ctx->pc = 0x3C60D0u;
            // 0x3c60d0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3C60D4u;
        goto label_3c60d4;
    }
    ctx->pc = 0x3C60CCu;
    SET_GPR_U32(ctx, 31, 0x3C60D4u);
    ctx->pc = 0x3C60D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C60CCu;
            // 0x3c60d0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C60D4u; }
        if (ctx->pc != 0x3C60D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C60D4u; }
        if (ctx->pc != 0x3C60D4u) { return; }
    }
    ctx->pc = 0x3C60D4u;
label_3c60d4:
    // 0x3c60d4: 0x9263005d  lbu         $v1, 0x5D($s3)
    ctx->pc = 0x3c60d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 93)));
label_3c60d8:
    // 0x3c60d8: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
label_3c60dc:
    if (ctx->pc == 0x3C60DCu) {
        ctx->pc = 0x3C60E0u;
        goto label_3c60e0;
    }
    ctx->pc = 0x3C60D8u;
    {
        const bool branch_taken_0x3c60d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c60d8) {
            ctx->pc = 0x3C61C4u;
            goto label_3c61c4;
        }
    }
    ctx->pc = 0x3C60E0u;
label_3c60e0:
    // 0x3c60e0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c60e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c60e4:
    // 0x3c60e4: 0x8c500e80  lw          $s0, 0xE80($v0)
    ctx->pc = 0x3c60e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3c60e8:
    // 0x3c60e8: 0xc040180  jal         func_100600
label_3c60ec:
    if (ctx->pc == 0x3C60ECu) {
        ctx->pc = 0x3C60ECu;
            // 0x3c60ec: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->pc = 0x3C60F0u;
        goto label_3c60f0;
    }
    ctx->pc = 0x3C60E8u;
    SET_GPR_U32(ctx, 31, 0x3C60F0u);
    ctx->pc = 0x3C60ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C60E8u;
            // 0x3c60ec: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C60F0u; }
        if (ctx->pc != 0x3C60F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C60F0u; }
        if (ctx->pc != 0x3C60F0u) { return; }
    }
    ctx->pc = 0x3C60F0u;
label_3c60f0:
    // 0x3c60f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c60f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c60f4:
    // 0x3c60f4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3c60f8:
    if (ctx->pc == 0x3C60F8u) {
        ctx->pc = 0x3C60F8u;
            // 0x3c60f8: 0x8e040780  lw          $a0, 0x780($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1920)));
        ctx->pc = 0x3C60FCu;
        goto label_3c60fc;
    }
    ctx->pc = 0x3C60F4u;
    {
        const bool branch_taken_0x3c60f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c60f4) {
            ctx->pc = 0x3C60F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C60F4u;
            // 0x3c60f8: 0x8e040780  lw          $a0, 0x780($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1920)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C610Cu;
            goto label_3c610c;
        }
    }
    ctx->pc = 0x3C60FCu;
label_3c60fc:
    // 0x3c60fc: 0x8e650058  lw          $a1, 0x58($s3)
    ctx->pc = 0x3c60fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_3c6100:
    // 0x3c6100: 0xc0f235c  jal         func_3C8D70
label_3c6104:
    if (ctx->pc == 0x3C6104u) {
        ctx->pc = 0x3C6104u;
            // 0x3c6104: 0x82460e3f  lb          $a2, 0xE3F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3647)));
        ctx->pc = 0x3C6108u;
        goto label_3c6108;
    }
    ctx->pc = 0x3C6100u;
    SET_GPR_U32(ctx, 31, 0x3C6108u);
    ctx->pc = 0x3C6104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6100u;
            // 0x3c6104: 0x82460e3f  lb          $a2, 0xE3F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3647)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C8D70u;
    if (runtime->hasFunction(0x3C8D70u)) {
        auto targetFn = runtime->lookupFunction(0x3C8D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C6108u; }
        if (ctx->pc != 0x3C6108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C8D70_0x3c8d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C6108u; }
        if (ctx->pc != 0x3C6108u) { return; }
    }
    ctx->pc = 0x3C6108u;
label_3c6108:
    // 0x3c6108: 0x8e040780  lw          $a0, 0x780($s0)
    ctx->pc = 0x3c6108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1920)));
label_3c610c:
    // 0x3c610c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c610cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c6110:
    // 0x3c6110: 0x1483002c  bne         $a0, $v1, . + 4 + (0x2C << 2)
label_3c6114:
    if (ctx->pc == 0x3C6114u) {
        ctx->pc = 0x3C6118u;
        goto label_3c6118;
    }
    ctx->pc = 0x3C6110u;
    {
        const bool branch_taken_0x3c6110 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c6110) {
            ctx->pc = 0x3C61C4u;
            goto label_3c61c4;
        }
    }
    ctx->pc = 0x3C6118u;
label_3c6118:
    // 0x3c6118: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3c6118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3c611c:
    // 0x3c611c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3c611cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3c6120:
    // 0x3c6120: 0x8c6489d0  lw          $a0, -0x7630($v1)
    ctx->pc = 0x3c6120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_3c6124:
    // 0x3c6124: 0x8c860084  lw          $a2, 0x84($a0)
    ctx->pc = 0x3c6124u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_3c6128:
    // 0x3c6128: 0x10c50019  beq         $a2, $a1, . + 4 + (0x19 << 2)
label_3c612c:
    if (ctx->pc == 0x3C612Cu) {
        ctx->pc = 0x3C6130u;
        goto label_3c6130;
    }
    ctx->pc = 0x3C6128u;
    {
        const bool branch_taken_0x3c6128 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x3c6128) {
            ctx->pc = 0x3C6190u;
            goto label_3c6190;
        }
    }
    ctx->pc = 0x3C6130u;
label_3c6130:
    // 0x3c6130: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3c6130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c6134:
    // 0x3c6134: 0x10c50012  beq         $a2, $a1, . + 4 + (0x12 << 2)
label_3c6138:
    if (ctx->pc == 0x3C6138u) {
        ctx->pc = 0x3C613Cu;
        goto label_3c613c;
    }
    ctx->pc = 0x3C6134u;
    {
        const bool branch_taken_0x3c6134 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x3c6134) {
            ctx->pc = 0x3C6180u;
            goto label_3c6180;
        }
    }
    ctx->pc = 0x3C613Cu;
label_3c613c:
    // 0x3c613c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3c613cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3c6140:
    // 0x3c6140: 0x10c30009  beq         $a2, $v1, . + 4 + (0x9 << 2)
label_3c6144:
    if (ctx->pc == 0x3C6144u) {
        ctx->pc = 0x3C6148u;
        goto label_3c6148;
    }
    ctx->pc = 0x3C6140u;
    {
        const bool branch_taken_0x3c6140 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c6140) {
            ctx->pc = 0x3C6168u;
            goto label_3c6168;
        }
    }
    ctx->pc = 0x3C6148u;
label_3c6148:
    // 0x3c6148: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3c6148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c614c:
    // 0x3c614c: 0x10c30006  beq         $a2, $v1, . + 4 + (0x6 << 2)
label_3c6150:
    if (ctx->pc == 0x3C6150u) {
        ctx->pc = 0x3C6154u;
        goto label_3c6154;
    }
    ctx->pc = 0x3C614Cu;
    {
        const bool branch_taken_0x3c614c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c614c) {
            ctx->pc = 0x3C6168u;
            goto label_3c6168;
        }
    }
    ctx->pc = 0x3C6154u;
label_3c6154:
    // 0x3c6154: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3c6154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3c6158:
    // 0x3c6158: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
label_3c615c:
    if (ctx->pc == 0x3C615Cu) {
        ctx->pc = 0x3C6160u;
        goto label_3c6160;
    }
    ctx->pc = 0x3C6158u;
    {
        const bool branch_taken_0x3c6158 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c6158) {
            ctx->pc = 0x3C6168u;
            goto label_3c6168;
        }
    }
    ctx->pc = 0x3C6160u;
label_3c6160:
    // 0x3c6160: 0x1000000e  b           . + 4 + (0xE << 2)
label_3c6164:
    if (ctx->pc == 0x3C6164u) {
        ctx->pc = 0x3C6168u;
        goto label_3c6168;
    }
    ctx->pc = 0x3C6160u;
    {
        const bool branch_taken_0x3c6160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6160) {
            ctx->pc = 0x3C619Cu;
            goto label_3c619c;
        }
    }
    ctx->pc = 0x3C6168u;
label_3c6168:
    // 0x3c6168: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3c6168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3c616c:
    // 0x3c616c: 0x8c4489d0  lw          $a0, -0x7630($v0)
    ctx->pc = 0x3c616cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_3c6170:
    // 0x3c6170: 0xc0b909c  jal         func_2E4270
label_3c6174:
    if (ctx->pc == 0x3C6174u) {
        ctx->pc = 0x3C6174u;
            // 0x3c6174: 0x8e050968  lw          $a1, 0x968($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
        ctx->pc = 0x3C6178u;
        goto label_3c6178;
    }
    ctx->pc = 0x3C6170u;
    SET_GPR_U32(ctx, 31, 0x3C6178u);
    ctx->pc = 0x3C6174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6170u;
            // 0x3c6174: 0x8e050968  lw          $a1, 0x968($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4270u;
    if (runtime->hasFunction(0x2E4270u)) {
        auto targetFn = runtime->lookupFunction(0x2E4270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C6178u; }
        if (ctx->pc != 0x3C6178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4270_0x2e4270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C6178u; }
        if (ctx->pc != 0x3C6178u) { return; }
    }
    ctx->pc = 0x3C6178u;
label_3c6178:
    // 0x3c6178: 0x10000008  b           . + 4 + (0x8 << 2)
label_3c617c:
    if (ctx->pc == 0x3C617Cu) {
        ctx->pc = 0x3C617Cu;
            // 0x3c617c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C6180u;
        goto label_3c6180;
    }
    ctx->pc = 0x3C6178u;
    {
        const bool branch_taken_0x3c6178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C617Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6178u;
            // 0x3c617c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6178) {
            ctx->pc = 0x3C619Cu;
            goto label_3c619c;
        }
    }
    ctx->pc = 0x3C6180u;
label_3c6180:
    // 0x3c6180: 0xc0b8c3c  jal         func_2E30F0
label_3c6184:
    if (ctx->pc == 0x3C6184u) {
        ctx->pc = 0x3C6188u;
        goto label_3c6188;
    }
    ctx->pc = 0x3C6180u;
    SET_GPR_U32(ctx, 31, 0x3C6188u);
    ctx->pc = 0x2E30F0u;
    if (runtime->hasFunction(0x2E30F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E30F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C6188u; }
        if (ctx->pc != 0x3C6188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E30F0_0x2e30f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C6188u; }
        if (ctx->pc != 0x3C6188u) { return; }
    }
    ctx->pc = 0x3C6188u;
label_3c6188:
    // 0x3c6188: 0x10000004  b           . + 4 + (0x4 << 2)
label_3c618c:
    if (ctx->pc == 0x3C618Cu) {
        ctx->pc = 0x3C618Cu;
            // 0x3c618c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C6190u;
        goto label_3c6190;
    }
    ctx->pc = 0x3C6188u;
    {
        const bool branch_taken_0x3c6188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C618Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6188u;
            // 0x3c618c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6188) {
            ctx->pc = 0x3C619Cu;
            goto label_3c619c;
        }
    }
    ctx->pc = 0x3C6190u;
label_3c6190:
    // 0x3c6190: 0xc0b8c14  jal         func_2E3050
label_3c6194:
    if (ctx->pc == 0x3C6194u) {
        ctx->pc = 0x3C6198u;
        goto label_3c6198;
    }
    ctx->pc = 0x3C6190u;
    SET_GPR_U32(ctx, 31, 0x3C6198u);
    ctx->pc = 0x2E3050u;
    if (runtime->hasFunction(0x2E3050u)) {
        auto targetFn = runtime->lookupFunction(0x2E3050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C6198u; }
        if (ctx->pc != 0x3C6198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E3050_0x2e3050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C6198u; }
        if (ctx->pc != 0x3C6198u) { return; }
    }
    ctx->pc = 0x3C6198u;
label_3c6198:
    // 0x3c6198: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c6198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c619c:
    // 0x3c619c: 0x8e03078c  lw          $v1, 0x78C($s0)
    ctx->pc = 0x3c619cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1932)));
label_3c61a0:
    // 0x3c61a0: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
label_3c61a4:
    if (ctx->pc == 0x3C61A4u) {
        ctx->pc = 0x3C61A8u;
        goto label_3c61a8;
    }
    ctx->pc = 0x3C61A0u;
    {
        const bool branch_taken_0x3c61a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c61a0) {
            ctx->pc = 0x3C61C4u;
            goto label_3c61c4;
        }
    }
    ctx->pc = 0x3C61A8u;
label_3c61a8:
    // 0x3c61a8: 0xc040180  jal         func_100600
label_3c61ac:
    if (ctx->pc == 0x3C61ACu) {
        ctx->pc = 0x3C61ACu;
            // 0x3c61ac: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x3C61B0u;
        goto label_3c61b0;
    }
    ctx->pc = 0x3C61A8u;
    SET_GPR_U32(ctx, 31, 0x3C61B0u);
    ctx->pc = 0x3C61ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C61A8u;
            // 0x3c61ac: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C61B0u; }
        if (ctx->pc != 0x3C61B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C61B0u; }
        if (ctx->pc != 0x3C61B0u) { return; }
    }
    ctx->pc = 0x3C61B0u;
label_3c61b0:
    // 0x3c61b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c61b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c61b4:
    // 0x3c61b4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3c61b8:
    if (ctx->pc == 0x3C61B8u) {
        ctx->pc = 0x3C61BCu;
        goto label_3c61bc;
    }
    ctx->pc = 0x3C61B4u;
    {
        const bool branch_taken_0x3c61b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c61b4) {
            ctx->pc = 0x3C61C4u;
            goto label_3c61c4;
        }
    }
    ctx->pc = 0x3C61BCu;
label_3c61bc:
    // 0x3c61bc: 0xc0f3a30  jal         func_3CE8C0
label_3c61c0:
    if (ctx->pc == 0x3C61C0u) {
        ctx->pc = 0x3C61C0u;
            // 0x3c61c0: 0x8e650058  lw          $a1, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->pc = 0x3C61C4u;
        goto label_3c61c4;
    }
    ctx->pc = 0x3C61BCu;
    SET_GPR_U32(ctx, 31, 0x3C61C4u);
    ctx->pc = 0x3C61C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C61BCu;
            // 0x3c61c0: 0x8e650058  lw          $a1, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3CE8C0u;
    if (runtime->hasFunction(0x3CE8C0u)) {
        auto targetFn = runtime->lookupFunction(0x3CE8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C61C4u; }
        if (ctx->pc != 0x3C61C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CE8C0_0x3ce8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C61C4u; }
        if (ctx->pc != 0x3C61C4u) { return; }
    }
    ctx->pc = 0x3C61C4u;
label_3c61c4:
    // 0x3c61c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3c61c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3c61c8:
    // 0x3c61c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3c61c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c61cc:
    // 0x3c61cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c61ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c61d0:
    // 0x3c61d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c61d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c61d4:
    // 0x3c61d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c61d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c61d8:
    // 0x3c61d8: 0x3e00008  jr          $ra
label_3c61dc:
    if (ctx->pc == 0x3C61DCu) {
        ctx->pc = 0x3C61DCu;
            // 0x3c61dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3C61E0u;
        goto label_3c61e0;
    }
    ctx->pc = 0x3C61D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C61DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C61D8u;
            // 0x3c61dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C61E0u;
label_3c61e0:
    // 0x3c61e0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3c61e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c61e4:
    // 0x3c61e4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3c61e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3c61e8:
    // 0x3c61e8: 0xa08600c0  sb          $a2, 0xC0($a0)
    ctx->pc = 0x3c61e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 192), (uint8_t)GPR_U32(ctx, 6));
label_3c61ec:
    // 0x3c61ec: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3c61ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3c61f0:
    // 0x3c61f0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x3c61f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3c61f4:
    // 0x3c61f4: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x3c61f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3c61f8:
    // 0x3c61f8: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
label_3c61fc:
    if (ctx->pc == 0x3C61FCu) {
        ctx->pc = 0x3C6200u;
        goto label_3c6200;
    }
    ctx->pc = 0x3C61F8u;
    {
        const bool branch_taken_0x3c61f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c61f8) {
            ctx->pc = 0x3C6270u;
            goto label_3c6270;
        }
    }
    ctx->pc = 0x3C6200u;
label_3c6200:
    // 0x3c6200: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3c6200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_3c6204:
    // 0x3c6204: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3c6204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3c6208:
    // 0x3c6208: 0x24a58e30  addiu       $a1, $a1, -0x71D0
    ctx->pc = 0x3c6208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938160));
label_3c620c:
    // 0x3c620c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3c620cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3c6210:
    // 0x3c6210: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3c6210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3c6214:
    // 0x3c6214: 0x600008  jr          $v1
label_3c6218:
    if (ctx->pc == 0x3C6218u) {
        ctx->pc = 0x3C621Cu;
        goto label_3c621c;
    }
    ctx->pc = 0x3C6214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3C621Cu: goto label_3c621c;
            case 0x3C622Cu: goto label_3c622c;
            case 0x3C623Cu: goto label_3c623c;
            case 0x3C6250u: goto label_3c6250;
            case 0x3C6260u: goto label_3c6260;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3C621Cu;
label_3c621c:
    // 0x3c621c: 0xa08600c0  sb          $a2, 0xC0($a0)
    ctx->pc = 0x3c621cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 192), (uint8_t)GPR_U32(ctx, 6));
label_3c6220:
    // 0x3c6220: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c6220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c6224:
    // 0x3c6224: 0x10000012  b           . + 4 + (0x12 << 2)
label_3c6228:
    if (ctx->pc == 0x3C6228u) {
        ctx->pc = 0x3C6228u;
            // 0x3c6228: 0xa08300c1  sb          $v1, 0xC1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 193), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3C622Cu;
        goto label_3c622c;
    }
    ctx->pc = 0x3C6224u;
    {
        const bool branch_taken_0x3c6224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6224u;
            // 0x3c6228: 0xa08300c1  sb          $v1, 0xC1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 193), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6224) {
            ctx->pc = 0x3C6270u;
            goto label_3c6270;
        }
    }
    ctx->pc = 0x3C622Cu;
label_3c622c:
    // 0x3c622c: 0xa08600c0  sb          $a2, 0xC0($a0)
    ctx->pc = 0x3c622cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 192), (uint8_t)GPR_U32(ctx, 6));
label_3c6230:
    // 0x3c6230: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x3c6230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_3c6234:
    // 0x3c6234: 0x1000000e  b           . + 4 + (0xE << 2)
label_3c6238:
    if (ctx->pc == 0x3C6238u) {
        ctx->pc = 0x3C6238u;
            // 0x3c6238: 0xa08300c1  sb          $v1, 0xC1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 193), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3C623Cu;
        goto label_3c623c;
    }
    ctx->pc = 0x3C6234u;
    {
        const bool branch_taken_0x3c6234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6234u;
            // 0x3c6238: 0xa08300c1  sb          $v1, 0xC1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 193), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6234) {
            ctx->pc = 0x3C6270u;
            goto label_3c6270;
        }
    }
    ctx->pc = 0x3C623Cu;
label_3c623c:
    // 0x3c623c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3c623cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3c6240:
    // 0x3c6240: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x3c6240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3c6244:
    // 0x3c6244: 0xa08500c0  sb          $a1, 0xC0($a0)
    ctx->pc = 0x3c6244u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 192), (uint8_t)GPR_U32(ctx, 5));
label_3c6248:
    // 0x3c6248: 0x10000009  b           . + 4 + (0x9 << 2)
label_3c624c:
    if (ctx->pc == 0x3C624Cu) {
        ctx->pc = 0x3C624Cu;
            // 0x3c624c: 0xa08300c1  sb          $v1, 0xC1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 193), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3C6250u;
        goto label_3c6250;
    }
    ctx->pc = 0x3C6248u;
    {
        const bool branch_taken_0x3c6248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C624Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6248u;
            // 0x3c624c: 0xa08300c1  sb          $v1, 0xC1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 193), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6248) {
            ctx->pc = 0x3C6270u;
            goto label_3c6270;
        }
    }
    ctx->pc = 0x3C6250u;
label_3c6250:
    // 0x3c6250: 0xa08600c0  sb          $a2, 0xC0($a0)
    ctx->pc = 0x3c6250u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 192), (uint8_t)GPR_U32(ctx, 6));
label_3c6254:
    // 0x3c6254: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x3c6254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_3c6258:
    // 0x3c6258: 0x10000005  b           . + 4 + (0x5 << 2)
label_3c625c:
    if (ctx->pc == 0x3C625Cu) {
        ctx->pc = 0x3C625Cu;
            // 0x3c625c: 0xa08300c1  sb          $v1, 0xC1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 193), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3C6260u;
        goto label_3c6260;
    }
    ctx->pc = 0x3C6258u;
    {
        const bool branch_taken_0x3c6258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C625Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6258u;
            // 0x3c625c: 0xa08300c1  sb          $v1, 0xC1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 193), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6258) {
            ctx->pc = 0x3C6270u;
            goto label_3c6270;
        }
    }
    ctx->pc = 0x3C6260u;
label_3c6260:
    // 0x3c6260: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3c6260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3c6264:
    // 0x3c6264: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x3c6264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_3c6268:
    // 0x3c6268: 0xa08500c0  sb          $a1, 0xC0($a0)
    ctx->pc = 0x3c6268u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 192), (uint8_t)GPR_U32(ctx, 5));
label_3c626c:
    // 0x3c626c: 0xa08300c1  sb          $v1, 0xC1($a0)
    ctx->pc = 0x3c626cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 193), (uint8_t)GPR_U32(ctx, 3));
label_3c6270:
    // 0x3c6270: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x3c6270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_3c6274:
    // 0x3c6274: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x3c6274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_3c6278:
    // 0x3c6278: 0x2463a890  addiu       $v1, $v1, -0x5770
    ctx->pc = 0x3c6278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944912));
label_3c627c:
    // 0x3c627c: 0x24a52108  addiu       $a1, $a1, 0x2108
    ctx->pc = 0x3c627cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8456));
label_3c6280:
    // 0x3c6280: 0xac8300b0  sw          $v1, 0xB0($a0)
    ctx->pc = 0x3c6280u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 3));
label_3c6284:
    // 0x3c6284: 0xac8500b4  sw          $a1, 0xB4($a0)
    ctx->pc = 0x3c6284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 5));
label_3c6288:
    // 0x3c6288: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c6288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3c628c:
    // 0x3c628c: 0x8c631d08  lw          $v1, 0x1D08($v1)
    ctx->pc = 0x3c628cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7432)));
label_3c6290:
    // 0x3c6290: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3c6290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c6294:
    // 0x3c6294: 0xac8300b8  sw          $v1, 0xB8($a0)
    ctx->pc = 0x3c6294u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 3));
label_3c6298:
    // 0x3c6298: 0x3e00008  jr          $ra
label_3c629c:
    if (ctx->pc == 0x3C629Cu) {
        ctx->pc = 0x3C629Cu;
            // 0x3c629c: 0xac8500bc  sw          $a1, 0xBC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 5));
        ctx->pc = 0x3C62A0u;
        goto label_fallthrough_0x3c6298;
    }
    ctx->pc = 0x3C6298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C629Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6298u;
            // 0x3c629c: 0xac8500bc  sw          $a1, 0xBC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3c6298:
    ctx->pc = 0x3C62A0u;
}
