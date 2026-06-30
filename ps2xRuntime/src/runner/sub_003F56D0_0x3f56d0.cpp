#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F56D0
// Address: 0x3f56d0 - 0x3f5c80
void sub_003F56D0_0x3f56d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F56D0_0x3f56d0");
#endif

    switch (ctx->pc) {
        case 0x3f56d0u: goto label_3f56d0;
        case 0x3f56d4u: goto label_3f56d4;
        case 0x3f56d8u: goto label_3f56d8;
        case 0x3f56dcu: goto label_3f56dc;
        case 0x3f56e0u: goto label_3f56e0;
        case 0x3f56e4u: goto label_3f56e4;
        case 0x3f56e8u: goto label_3f56e8;
        case 0x3f56ecu: goto label_3f56ec;
        case 0x3f56f0u: goto label_3f56f0;
        case 0x3f56f4u: goto label_3f56f4;
        case 0x3f56f8u: goto label_3f56f8;
        case 0x3f56fcu: goto label_3f56fc;
        case 0x3f5700u: goto label_3f5700;
        case 0x3f5704u: goto label_3f5704;
        case 0x3f5708u: goto label_3f5708;
        case 0x3f570cu: goto label_3f570c;
        case 0x3f5710u: goto label_3f5710;
        case 0x3f5714u: goto label_3f5714;
        case 0x3f5718u: goto label_3f5718;
        case 0x3f571cu: goto label_3f571c;
        case 0x3f5720u: goto label_3f5720;
        case 0x3f5724u: goto label_3f5724;
        case 0x3f5728u: goto label_3f5728;
        case 0x3f572cu: goto label_3f572c;
        case 0x3f5730u: goto label_3f5730;
        case 0x3f5734u: goto label_3f5734;
        case 0x3f5738u: goto label_3f5738;
        case 0x3f573cu: goto label_3f573c;
        case 0x3f5740u: goto label_3f5740;
        case 0x3f5744u: goto label_3f5744;
        case 0x3f5748u: goto label_3f5748;
        case 0x3f574cu: goto label_3f574c;
        case 0x3f5750u: goto label_3f5750;
        case 0x3f5754u: goto label_3f5754;
        case 0x3f5758u: goto label_3f5758;
        case 0x3f575cu: goto label_3f575c;
        case 0x3f5760u: goto label_3f5760;
        case 0x3f5764u: goto label_3f5764;
        case 0x3f5768u: goto label_3f5768;
        case 0x3f576cu: goto label_3f576c;
        case 0x3f5770u: goto label_3f5770;
        case 0x3f5774u: goto label_3f5774;
        case 0x3f5778u: goto label_3f5778;
        case 0x3f577cu: goto label_3f577c;
        case 0x3f5780u: goto label_3f5780;
        case 0x3f5784u: goto label_3f5784;
        case 0x3f5788u: goto label_3f5788;
        case 0x3f578cu: goto label_3f578c;
        case 0x3f5790u: goto label_3f5790;
        case 0x3f5794u: goto label_3f5794;
        case 0x3f5798u: goto label_3f5798;
        case 0x3f579cu: goto label_3f579c;
        case 0x3f57a0u: goto label_3f57a0;
        case 0x3f57a4u: goto label_3f57a4;
        case 0x3f57a8u: goto label_3f57a8;
        case 0x3f57acu: goto label_3f57ac;
        case 0x3f57b0u: goto label_3f57b0;
        case 0x3f57b4u: goto label_3f57b4;
        case 0x3f57b8u: goto label_3f57b8;
        case 0x3f57bcu: goto label_3f57bc;
        case 0x3f57c0u: goto label_3f57c0;
        case 0x3f57c4u: goto label_3f57c4;
        case 0x3f57c8u: goto label_3f57c8;
        case 0x3f57ccu: goto label_3f57cc;
        case 0x3f57d0u: goto label_3f57d0;
        case 0x3f57d4u: goto label_3f57d4;
        case 0x3f57d8u: goto label_3f57d8;
        case 0x3f57dcu: goto label_3f57dc;
        case 0x3f57e0u: goto label_3f57e0;
        case 0x3f57e4u: goto label_3f57e4;
        case 0x3f57e8u: goto label_3f57e8;
        case 0x3f57ecu: goto label_3f57ec;
        case 0x3f57f0u: goto label_3f57f0;
        case 0x3f57f4u: goto label_3f57f4;
        case 0x3f57f8u: goto label_3f57f8;
        case 0x3f57fcu: goto label_3f57fc;
        case 0x3f5800u: goto label_3f5800;
        case 0x3f5804u: goto label_3f5804;
        case 0x3f5808u: goto label_3f5808;
        case 0x3f580cu: goto label_3f580c;
        case 0x3f5810u: goto label_3f5810;
        case 0x3f5814u: goto label_3f5814;
        case 0x3f5818u: goto label_3f5818;
        case 0x3f581cu: goto label_3f581c;
        case 0x3f5820u: goto label_3f5820;
        case 0x3f5824u: goto label_3f5824;
        case 0x3f5828u: goto label_3f5828;
        case 0x3f582cu: goto label_3f582c;
        case 0x3f5830u: goto label_3f5830;
        case 0x3f5834u: goto label_3f5834;
        case 0x3f5838u: goto label_3f5838;
        case 0x3f583cu: goto label_3f583c;
        case 0x3f5840u: goto label_3f5840;
        case 0x3f5844u: goto label_3f5844;
        case 0x3f5848u: goto label_3f5848;
        case 0x3f584cu: goto label_3f584c;
        case 0x3f5850u: goto label_3f5850;
        case 0x3f5854u: goto label_3f5854;
        case 0x3f5858u: goto label_3f5858;
        case 0x3f585cu: goto label_3f585c;
        case 0x3f5860u: goto label_3f5860;
        case 0x3f5864u: goto label_3f5864;
        case 0x3f5868u: goto label_3f5868;
        case 0x3f586cu: goto label_3f586c;
        case 0x3f5870u: goto label_3f5870;
        case 0x3f5874u: goto label_3f5874;
        case 0x3f5878u: goto label_3f5878;
        case 0x3f587cu: goto label_3f587c;
        case 0x3f5880u: goto label_3f5880;
        case 0x3f5884u: goto label_3f5884;
        case 0x3f5888u: goto label_3f5888;
        case 0x3f588cu: goto label_3f588c;
        case 0x3f5890u: goto label_3f5890;
        case 0x3f5894u: goto label_3f5894;
        case 0x3f5898u: goto label_3f5898;
        case 0x3f589cu: goto label_3f589c;
        case 0x3f58a0u: goto label_3f58a0;
        case 0x3f58a4u: goto label_3f58a4;
        case 0x3f58a8u: goto label_3f58a8;
        case 0x3f58acu: goto label_3f58ac;
        case 0x3f58b0u: goto label_3f58b0;
        case 0x3f58b4u: goto label_3f58b4;
        case 0x3f58b8u: goto label_3f58b8;
        case 0x3f58bcu: goto label_3f58bc;
        case 0x3f58c0u: goto label_3f58c0;
        case 0x3f58c4u: goto label_3f58c4;
        case 0x3f58c8u: goto label_3f58c8;
        case 0x3f58ccu: goto label_3f58cc;
        case 0x3f58d0u: goto label_3f58d0;
        case 0x3f58d4u: goto label_3f58d4;
        case 0x3f58d8u: goto label_3f58d8;
        case 0x3f58dcu: goto label_3f58dc;
        case 0x3f58e0u: goto label_3f58e0;
        case 0x3f58e4u: goto label_3f58e4;
        case 0x3f58e8u: goto label_3f58e8;
        case 0x3f58ecu: goto label_3f58ec;
        case 0x3f58f0u: goto label_3f58f0;
        case 0x3f58f4u: goto label_3f58f4;
        case 0x3f58f8u: goto label_3f58f8;
        case 0x3f58fcu: goto label_3f58fc;
        case 0x3f5900u: goto label_3f5900;
        case 0x3f5904u: goto label_3f5904;
        case 0x3f5908u: goto label_3f5908;
        case 0x3f590cu: goto label_3f590c;
        case 0x3f5910u: goto label_3f5910;
        case 0x3f5914u: goto label_3f5914;
        case 0x3f5918u: goto label_3f5918;
        case 0x3f591cu: goto label_3f591c;
        case 0x3f5920u: goto label_3f5920;
        case 0x3f5924u: goto label_3f5924;
        case 0x3f5928u: goto label_3f5928;
        case 0x3f592cu: goto label_3f592c;
        case 0x3f5930u: goto label_3f5930;
        case 0x3f5934u: goto label_3f5934;
        case 0x3f5938u: goto label_3f5938;
        case 0x3f593cu: goto label_3f593c;
        case 0x3f5940u: goto label_3f5940;
        case 0x3f5944u: goto label_3f5944;
        case 0x3f5948u: goto label_3f5948;
        case 0x3f594cu: goto label_3f594c;
        case 0x3f5950u: goto label_3f5950;
        case 0x3f5954u: goto label_3f5954;
        case 0x3f5958u: goto label_3f5958;
        case 0x3f595cu: goto label_3f595c;
        case 0x3f5960u: goto label_3f5960;
        case 0x3f5964u: goto label_3f5964;
        case 0x3f5968u: goto label_3f5968;
        case 0x3f596cu: goto label_3f596c;
        case 0x3f5970u: goto label_3f5970;
        case 0x3f5974u: goto label_3f5974;
        case 0x3f5978u: goto label_3f5978;
        case 0x3f597cu: goto label_3f597c;
        case 0x3f5980u: goto label_3f5980;
        case 0x3f5984u: goto label_3f5984;
        case 0x3f5988u: goto label_3f5988;
        case 0x3f598cu: goto label_3f598c;
        case 0x3f5990u: goto label_3f5990;
        case 0x3f5994u: goto label_3f5994;
        case 0x3f5998u: goto label_3f5998;
        case 0x3f599cu: goto label_3f599c;
        case 0x3f59a0u: goto label_3f59a0;
        case 0x3f59a4u: goto label_3f59a4;
        case 0x3f59a8u: goto label_3f59a8;
        case 0x3f59acu: goto label_3f59ac;
        case 0x3f59b0u: goto label_3f59b0;
        case 0x3f59b4u: goto label_3f59b4;
        case 0x3f59b8u: goto label_3f59b8;
        case 0x3f59bcu: goto label_3f59bc;
        case 0x3f59c0u: goto label_3f59c0;
        case 0x3f59c4u: goto label_3f59c4;
        case 0x3f59c8u: goto label_3f59c8;
        case 0x3f59ccu: goto label_3f59cc;
        case 0x3f59d0u: goto label_3f59d0;
        case 0x3f59d4u: goto label_3f59d4;
        case 0x3f59d8u: goto label_3f59d8;
        case 0x3f59dcu: goto label_3f59dc;
        case 0x3f59e0u: goto label_3f59e0;
        case 0x3f59e4u: goto label_3f59e4;
        case 0x3f59e8u: goto label_3f59e8;
        case 0x3f59ecu: goto label_3f59ec;
        case 0x3f59f0u: goto label_3f59f0;
        case 0x3f59f4u: goto label_3f59f4;
        case 0x3f59f8u: goto label_3f59f8;
        case 0x3f59fcu: goto label_3f59fc;
        case 0x3f5a00u: goto label_3f5a00;
        case 0x3f5a04u: goto label_3f5a04;
        case 0x3f5a08u: goto label_3f5a08;
        case 0x3f5a0cu: goto label_3f5a0c;
        case 0x3f5a10u: goto label_3f5a10;
        case 0x3f5a14u: goto label_3f5a14;
        case 0x3f5a18u: goto label_3f5a18;
        case 0x3f5a1cu: goto label_3f5a1c;
        case 0x3f5a20u: goto label_3f5a20;
        case 0x3f5a24u: goto label_3f5a24;
        case 0x3f5a28u: goto label_3f5a28;
        case 0x3f5a2cu: goto label_3f5a2c;
        case 0x3f5a30u: goto label_3f5a30;
        case 0x3f5a34u: goto label_3f5a34;
        case 0x3f5a38u: goto label_3f5a38;
        case 0x3f5a3cu: goto label_3f5a3c;
        case 0x3f5a40u: goto label_3f5a40;
        case 0x3f5a44u: goto label_3f5a44;
        case 0x3f5a48u: goto label_3f5a48;
        case 0x3f5a4cu: goto label_3f5a4c;
        case 0x3f5a50u: goto label_3f5a50;
        case 0x3f5a54u: goto label_3f5a54;
        case 0x3f5a58u: goto label_3f5a58;
        case 0x3f5a5cu: goto label_3f5a5c;
        case 0x3f5a60u: goto label_3f5a60;
        case 0x3f5a64u: goto label_3f5a64;
        case 0x3f5a68u: goto label_3f5a68;
        case 0x3f5a6cu: goto label_3f5a6c;
        case 0x3f5a70u: goto label_3f5a70;
        case 0x3f5a74u: goto label_3f5a74;
        case 0x3f5a78u: goto label_3f5a78;
        case 0x3f5a7cu: goto label_3f5a7c;
        case 0x3f5a80u: goto label_3f5a80;
        case 0x3f5a84u: goto label_3f5a84;
        case 0x3f5a88u: goto label_3f5a88;
        case 0x3f5a8cu: goto label_3f5a8c;
        case 0x3f5a90u: goto label_3f5a90;
        case 0x3f5a94u: goto label_3f5a94;
        case 0x3f5a98u: goto label_3f5a98;
        case 0x3f5a9cu: goto label_3f5a9c;
        case 0x3f5aa0u: goto label_3f5aa0;
        case 0x3f5aa4u: goto label_3f5aa4;
        case 0x3f5aa8u: goto label_3f5aa8;
        case 0x3f5aacu: goto label_3f5aac;
        case 0x3f5ab0u: goto label_3f5ab0;
        case 0x3f5ab4u: goto label_3f5ab4;
        case 0x3f5ab8u: goto label_3f5ab8;
        case 0x3f5abcu: goto label_3f5abc;
        case 0x3f5ac0u: goto label_3f5ac0;
        case 0x3f5ac4u: goto label_3f5ac4;
        case 0x3f5ac8u: goto label_3f5ac8;
        case 0x3f5accu: goto label_3f5acc;
        case 0x3f5ad0u: goto label_3f5ad0;
        case 0x3f5ad4u: goto label_3f5ad4;
        case 0x3f5ad8u: goto label_3f5ad8;
        case 0x3f5adcu: goto label_3f5adc;
        case 0x3f5ae0u: goto label_3f5ae0;
        case 0x3f5ae4u: goto label_3f5ae4;
        case 0x3f5ae8u: goto label_3f5ae8;
        case 0x3f5aecu: goto label_3f5aec;
        case 0x3f5af0u: goto label_3f5af0;
        case 0x3f5af4u: goto label_3f5af4;
        case 0x3f5af8u: goto label_3f5af8;
        case 0x3f5afcu: goto label_3f5afc;
        case 0x3f5b00u: goto label_3f5b00;
        case 0x3f5b04u: goto label_3f5b04;
        case 0x3f5b08u: goto label_3f5b08;
        case 0x3f5b0cu: goto label_3f5b0c;
        case 0x3f5b10u: goto label_3f5b10;
        case 0x3f5b14u: goto label_3f5b14;
        case 0x3f5b18u: goto label_3f5b18;
        case 0x3f5b1cu: goto label_3f5b1c;
        case 0x3f5b20u: goto label_3f5b20;
        case 0x3f5b24u: goto label_3f5b24;
        case 0x3f5b28u: goto label_3f5b28;
        case 0x3f5b2cu: goto label_3f5b2c;
        case 0x3f5b30u: goto label_3f5b30;
        case 0x3f5b34u: goto label_3f5b34;
        case 0x3f5b38u: goto label_3f5b38;
        case 0x3f5b3cu: goto label_3f5b3c;
        case 0x3f5b40u: goto label_3f5b40;
        case 0x3f5b44u: goto label_3f5b44;
        case 0x3f5b48u: goto label_3f5b48;
        case 0x3f5b4cu: goto label_3f5b4c;
        case 0x3f5b50u: goto label_3f5b50;
        case 0x3f5b54u: goto label_3f5b54;
        case 0x3f5b58u: goto label_3f5b58;
        case 0x3f5b5cu: goto label_3f5b5c;
        case 0x3f5b60u: goto label_3f5b60;
        case 0x3f5b64u: goto label_3f5b64;
        case 0x3f5b68u: goto label_3f5b68;
        case 0x3f5b6cu: goto label_3f5b6c;
        case 0x3f5b70u: goto label_3f5b70;
        case 0x3f5b74u: goto label_3f5b74;
        case 0x3f5b78u: goto label_3f5b78;
        case 0x3f5b7cu: goto label_3f5b7c;
        case 0x3f5b80u: goto label_3f5b80;
        case 0x3f5b84u: goto label_3f5b84;
        case 0x3f5b88u: goto label_3f5b88;
        case 0x3f5b8cu: goto label_3f5b8c;
        case 0x3f5b90u: goto label_3f5b90;
        case 0x3f5b94u: goto label_3f5b94;
        case 0x3f5b98u: goto label_3f5b98;
        case 0x3f5b9cu: goto label_3f5b9c;
        case 0x3f5ba0u: goto label_3f5ba0;
        case 0x3f5ba4u: goto label_3f5ba4;
        case 0x3f5ba8u: goto label_3f5ba8;
        case 0x3f5bacu: goto label_3f5bac;
        case 0x3f5bb0u: goto label_3f5bb0;
        case 0x3f5bb4u: goto label_3f5bb4;
        case 0x3f5bb8u: goto label_3f5bb8;
        case 0x3f5bbcu: goto label_3f5bbc;
        case 0x3f5bc0u: goto label_3f5bc0;
        case 0x3f5bc4u: goto label_3f5bc4;
        case 0x3f5bc8u: goto label_3f5bc8;
        case 0x3f5bccu: goto label_3f5bcc;
        case 0x3f5bd0u: goto label_3f5bd0;
        case 0x3f5bd4u: goto label_3f5bd4;
        case 0x3f5bd8u: goto label_3f5bd8;
        case 0x3f5bdcu: goto label_3f5bdc;
        case 0x3f5be0u: goto label_3f5be0;
        case 0x3f5be4u: goto label_3f5be4;
        case 0x3f5be8u: goto label_3f5be8;
        case 0x3f5becu: goto label_3f5bec;
        case 0x3f5bf0u: goto label_3f5bf0;
        case 0x3f5bf4u: goto label_3f5bf4;
        case 0x3f5bf8u: goto label_3f5bf8;
        case 0x3f5bfcu: goto label_3f5bfc;
        case 0x3f5c00u: goto label_3f5c00;
        case 0x3f5c04u: goto label_3f5c04;
        case 0x3f5c08u: goto label_3f5c08;
        case 0x3f5c0cu: goto label_3f5c0c;
        case 0x3f5c10u: goto label_3f5c10;
        case 0x3f5c14u: goto label_3f5c14;
        case 0x3f5c18u: goto label_3f5c18;
        case 0x3f5c1cu: goto label_3f5c1c;
        case 0x3f5c20u: goto label_3f5c20;
        case 0x3f5c24u: goto label_3f5c24;
        case 0x3f5c28u: goto label_3f5c28;
        case 0x3f5c2cu: goto label_3f5c2c;
        case 0x3f5c30u: goto label_3f5c30;
        case 0x3f5c34u: goto label_3f5c34;
        case 0x3f5c38u: goto label_3f5c38;
        case 0x3f5c3cu: goto label_3f5c3c;
        case 0x3f5c40u: goto label_3f5c40;
        case 0x3f5c44u: goto label_3f5c44;
        case 0x3f5c48u: goto label_3f5c48;
        case 0x3f5c4cu: goto label_3f5c4c;
        case 0x3f5c50u: goto label_3f5c50;
        case 0x3f5c54u: goto label_3f5c54;
        case 0x3f5c58u: goto label_3f5c58;
        case 0x3f5c5cu: goto label_3f5c5c;
        case 0x3f5c60u: goto label_3f5c60;
        case 0x3f5c64u: goto label_3f5c64;
        case 0x3f5c68u: goto label_3f5c68;
        case 0x3f5c6cu: goto label_3f5c6c;
        case 0x3f5c70u: goto label_3f5c70;
        case 0x3f5c74u: goto label_3f5c74;
        case 0x3f5c78u: goto label_3f5c78;
        case 0x3f5c7cu: goto label_3f5c7c;
        default: break;
    }

    ctx->pc = 0x3f56d0u;

label_3f56d0:
    // 0x3f56d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3f56d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3f56d4:
    // 0x3f56d4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x3f56d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_3f56d8:
    // 0x3f56d8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3f56d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3f56dc:
    // 0x3f56dc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3f56dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3f56e0:
    // 0x3f56e0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3f56e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3f56e4:
    // 0x3f56e4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3f56e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f56e8:
    // 0x3f56e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3f56e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3f56ec:
    // 0x3f56ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3f56ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f56f0:
    // 0x3f56f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3f56f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3f56f4:
    // 0x3f56f4: 0x3445a598  ori         $a1, $v0, 0xA598
    ctx->pc = 0x3f56f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42392);
label_3f56f8:
    // 0x3f56f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3f56f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3f56fc:
    // 0x3f56fc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3f56fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3f5700:
    // 0x3f5700: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3f5700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f5704:
    // 0x3f5704: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3f5704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3f5708:
    // 0x3f5708: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3f5708u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3f570c:
    // 0x3f570c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x3f570cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3f5710:
    // 0x3f5710: 0xc10ca68  jal         func_4329A0
label_3f5714:
    if (ctx->pc == 0x3F5714u) {
        ctx->pc = 0x3F5714u;
            // 0x3f5714: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x3F5718u;
        goto label_3f5718;
    }
    ctx->pc = 0x3F5710u;
    SET_GPR_U32(ctx, 31, 0x3F5718u);
    ctx->pc = 0x3F5714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5710u;
            // 0x3f5714: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5718u; }
        if (ctx->pc != 0x3F5718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5718u; }
        if (ctx->pc != 0x3F5718u) { return; }
    }
    ctx->pc = 0x3F5718u;
label_3f5718:
    // 0x3f5718: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3f5718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3f571c:
    // 0x3f571c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3f571cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3f5720:
    // 0x3f5720: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x3f5720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_3f5724:
    // 0x3f5724: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x3f5724u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3f5728:
    // 0x3f5728: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x3f5728u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_3f572c:
    // 0x3f572c: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x3f572cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
label_3f5730:
    // 0x3f5730: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3f5730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3f5734:
    // 0x3f5734: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3f5734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3f5738:
    // 0x3f5738: 0x2442a2c0  addiu       $v0, $v0, -0x5D40
    ctx->pc = 0x3f5738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943424));
label_3f573c:
    // 0x3f573c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x3f573cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_3f5740:
    // 0x3f5740: 0xa280005c  sb          $zero, 0x5C($s4)
    ctx->pc = 0x3f5740u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 92), (uint8_t)GPR_U32(ctx, 0));
label_3f5744:
    // 0x3f5744: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f5744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3f5748:
    // 0x3f5748: 0xae800060  sw          $zero, 0x60($s4)
    ctx->pc = 0x3f5748u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 0));
label_3f574c:
    // 0x3f574c: 0xae800064  sw          $zero, 0x64($s4)
    ctx->pc = 0x3f574cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 0));
label_3f5750:
    // 0x3f5750: 0xae800084  sw          $zero, 0x84($s4)
    ctx->pc = 0x3f5750u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 0));
label_3f5754:
    // 0x3f5754: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x3f5754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3f5758:
    // 0x3f5758: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3f5758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3f575c:
    // 0x3f575c: 0x8c900788  lw          $s0, 0x788($a0)
    ctx->pc = 0x3f575cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1928)));
label_3f5760:
    // 0x3f5760: 0x8c830968  lw          $v1, 0x968($a0)
    ctx->pc = 0x3f5760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2408)));
label_3f5764:
    // 0x3f5764: 0x1620002e  bnez        $s1, . + 4 + (0x2E << 2)
label_3f5768:
    if (ctx->pc == 0x3F5768u) {
        ctx->pc = 0x3F5768u;
            // 0x3f5768: 0xae820080  sw          $v0, 0x80($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
        ctx->pc = 0x3F576Cu;
        goto label_3f576c;
    }
    ctx->pc = 0x3F5764u;
    {
        const bool branch_taken_0x3f5764 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F5768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5764u;
            // 0x3f5768: 0xae820080  sw          $v0, 0x80($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5764) {
            ctx->pc = 0x3F5820u;
            goto label_3f5820;
        }
    }
    ctx->pc = 0x3F576Cu;
label_3f576c:
    // 0x3f576c: 0x3862000f  xori        $v0, $v1, 0xF
    ctx->pc = 0x3f576cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)15);
label_3f5770:
    // 0x3f5770: 0x2c520001  sltiu       $s2, $v0, 0x1
    ctx->pc = 0x3f5770u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3f5774:
    // 0x3f5774: 0x52400005  beql        $s2, $zero, . + 4 + (0x5 << 2)
label_3f5778:
    if (ctx->pc == 0x3F5778u) {
        ctx->pc = 0x3F5778u;
            // 0x3f5778: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x3F577Cu;
        goto label_3f577c;
    }
    ctx->pc = 0x3F5774u;
    {
        const bool branch_taken_0x3f5774 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5774) {
            ctx->pc = 0x3F5778u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5774u;
            // 0x3f5778: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F578Cu;
            goto label_3f578c;
        }
    }
    ctx->pc = 0x3F577Cu;
label_3f577c:
    // 0x3f577c: 0x8e820060  lw          $v0, 0x60($s4)
    ctx->pc = 0x3f577cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
label_3f5780:
    // 0x3f5780: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3f5780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3f5784:
    // 0x3f5784: 0xae820060  sw          $v0, 0x60($s4)
    ctx->pc = 0x3f5784u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 2));
label_3f5788:
    // 0x3f5788: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x3f5788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3f578c:
    // 0x3f578c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_3f5790:
    if (ctx->pc == 0x3F5790u) {
        ctx->pc = 0x3F5790u;
            // 0x3f5790: 0x8e840080  lw          $a0, 0x80($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
        ctx->pc = 0x3F5794u;
        goto label_3f5794;
    }
    ctx->pc = 0x3F578Cu;
    {
        const bool branch_taken_0x3f578c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3f578c) {
            ctx->pc = 0x3F5790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F578Cu;
            // 0x3f5790: 0x8e840080  lw          $a0, 0x80($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F57B0u;
            goto label_3f57b0;
        }
    }
    ctx->pc = 0x3F5794u;
label_3f5794:
    // 0x3f5794: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3f5794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3f5798:
    // 0x3f5798: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_3f579c:
    if (ctx->pc == 0x3F579Cu) {
        ctx->pc = 0x3F579Cu;
            // 0x3f579c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3F57A0u;
        goto label_3f57a0;
    }
    ctx->pc = 0x3F5798u;
    {
        const bool branch_taken_0x3f5798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3f5798) {
            ctx->pc = 0x3F579Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5798u;
            // 0x3f579c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F57A8u;
            goto label_3f57a8;
        }
    }
    ctx->pc = 0x3F57A0u;
label_3f57a0:
    // 0x3f57a0: 0x1000003e  b           . + 4 + (0x3E << 2)
label_3f57a4:
    if (ctx->pc == 0x3F57A4u) {
        ctx->pc = 0x3F57A4u;
            // 0x3f57a4: 0x121040  sll         $v0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x3F57A8u;
        goto label_3f57a8;
    }
    ctx->pc = 0x3F57A0u;
    {
        const bool branch_taken_0x3f57a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F57A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F57A0u;
            // 0x3f57a4: 0x121040  sll         $v0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f57a0) {
            ctx->pc = 0x3F589Cu;
            goto label_3f589c;
        }
    }
    ctx->pc = 0x3F57A8u;
label_3f57a8:
    // 0x3f57a8: 0x1000003b  b           . + 4 + (0x3B << 2)
label_3f57ac:
    if (ctx->pc == 0x3F57ACu) {
        ctx->pc = 0x3F57ACu;
            // 0x3f57ac: 0xae82006c  sw          $v0, 0x6C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 2));
        ctx->pc = 0x3F57B0u;
        goto label_3f57b0;
    }
    ctx->pc = 0x3F57A8u;
    {
        const bool branch_taken_0x3f57a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F57ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F57A8u;
            // 0x3f57ac: 0xae82006c  sw          $v0, 0x6C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f57a8) {
            ctx->pc = 0x3F5898u;
            goto label_3f5898;
        }
    }
    ctx->pc = 0x3F57B0u;
label_3f57b0:
    // 0x3f57b0: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3f57b0u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3f57b4:
    // 0x3f57b4: 0x8c820e38  lw          $v0, 0xE38($a0)
    ctx->pc = 0x3f57b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3640)));
label_3f57b8:
    // 0x3f57b8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3f57bc:
    if (ctx->pc == 0x3F57BCu) {
        ctx->pc = 0x3F57BCu;
            // 0x3f57bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F57C0u;
        goto label_3f57c0;
    }
    ctx->pc = 0x3F57B8u;
    {
        const bool branch_taken_0x3f57b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3F57BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F57B8u;
            // 0x3f57bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f57b8) {
            ctx->pc = 0x3F57D0u;
            goto label_3f57d0;
        }
    }
    ctx->pc = 0x3F57C0u;
label_3f57c0:
    // 0x3f57c0: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x3f57c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_3f57c4:
    // 0x3f57c4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3f57c8:
    if (ctx->pc == 0x3F57C8u) {
        ctx->pc = 0x3F57CCu;
        goto label_3f57cc;
    }
    ctx->pc = 0x3F57C4u;
    {
        const bool branch_taken_0x3f57c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f57c4) {
            ctx->pc = 0x3F57D0u;
            goto label_3f57d0;
        }
    }
    ctx->pc = 0x3F57CCu;
label_3f57cc:
    // 0x3f57cc: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3f57ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f57d0:
    // 0x3f57d0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_3f57d4:
    if (ctx->pc == 0x3F57D4u) {
        ctx->pc = 0x3F57D8u;
        goto label_3f57d8;
    }
    ctx->pc = 0x3F57D0u;
    {
        const bool branch_taken_0x3f57d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f57d0) {
            ctx->pc = 0x3F57ECu;
            goto label_3f57ec;
        }
    }
    ctx->pc = 0x3F57D8u;
label_3f57d8:
    // 0x3f57d8: 0xc075eb4  jal         func_1D7AD0
label_3f57dc:
    if (ctx->pc == 0x3F57DCu) {
        ctx->pc = 0x3F57E0u;
        goto label_3f57e0;
    }
    ctx->pc = 0x3F57D8u;
    SET_GPR_U32(ctx, 31, 0x3F57E0u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F57E0u; }
        if (ctx->pc != 0x3F57E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F57E0u; }
        if (ctx->pc != 0x3F57E0u) { return; }
    }
    ctx->pc = 0x3F57E0u;
label_3f57e0:
    // 0x3f57e0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3f57e4:
    if (ctx->pc == 0x3F57E4u) {
        ctx->pc = 0x3F57E8u;
        goto label_3f57e8;
    }
    ctx->pc = 0x3F57E0u;
    {
        const bool branch_taken_0x3f57e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f57e0) {
            ctx->pc = 0x3F57ECu;
            goto label_3f57ec;
        }
    }
    ctx->pc = 0x3F57E8u;
label_3f57e8:
    // 0x3f57e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3f57e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f57ec:
    // 0x3f57ec: 0x52000003  beql        $s0, $zero, . + 4 + (0x3 << 2)
label_3f57f0:
    if (ctx->pc == 0x3F57F0u) {
        ctx->pc = 0x3F57F0u;
            // 0x3f57f0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3F57F4u;
        goto label_3f57f4;
    }
    ctx->pc = 0x3F57ECu;
    {
        const bool branch_taken_0x3f57ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f57ec) {
            ctx->pc = 0x3F57F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F57ECu;
            // 0x3f57f0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F57FCu;
            goto label_3f57fc;
        }
    }
    ctx->pc = 0x3F57F4u;
label_3f57f4:
    // 0x3f57f4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3f57f8:
    if (ctx->pc == 0x3F57F8u) {
        ctx->pc = 0x3F57F8u;
            // 0x3f57f8: 0xae93006c  sw          $s3, 0x6C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 19));
        ctx->pc = 0x3F57FCu;
        goto label_3f57fc;
    }
    ctx->pc = 0x3F57F4u;
    {
        const bool branch_taken_0x3f57f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F57F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F57F4u;
            // 0x3f57f8: 0xae93006c  sw          $s3, 0x6C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f57f4) {
            ctx->pc = 0x3F5814u;
            goto label_3f5814;
        }
    }
    ctx->pc = 0x3F57FCu;
label_3f57fc:
    // 0x3f57fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f57fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f5800:
    // 0x3f5800: 0xae82006c  sw          $v0, 0x6C($s4)
    ctx->pc = 0x3f5800u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 2));
label_3f5804:
    // 0x3f5804: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x3f5804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3f5808:
    // 0x3f5808: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3f5808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3f580c:
    // 0x3f580c: 0x320f809  jalr        $t9
label_3f5810:
    if (ctx->pc == 0x3F5810u) {
        ctx->pc = 0x3F5810u;
            // 0x3f5810: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3F5814u;
        goto label_3f5814;
    }
    ctx->pc = 0x3F580Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F5814u);
        ctx->pc = 0x3F5810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F580Cu;
            // 0x3f5810: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F5814u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F5814u; }
            if (ctx->pc != 0x3F5814u) { return; }
        }
        }
    }
    ctx->pc = 0x3F5814u;
label_3f5814:
    // 0x3f5814: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f5814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f5818:
    // 0x3f5818: 0x1000001f  b           . + 4 + (0x1F << 2)
label_3f581c:
    if (ctx->pc == 0x3F581Cu) {
        ctx->pc = 0x3F581Cu;
            // 0x3f581c: 0xa282005c  sb          $v0, 0x5C($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 92), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3F5820u;
        goto label_3f5820;
    }
    ctx->pc = 0x3F5818u;
    {
        const bool branch_taken_0x3f5818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F581Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5818u;
            // 0x3f581c: 0xa282005c  sb          $v0, 0x5C($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 92), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5818) {
            ctx->pc = 0x3F5898u;
            goto label_3f5898;
        }
    }
    ctx->pc = 0x3F5820u;
label_3f5820:
    // 0x3f5820: 0x8e840080  lw          $a0, 0x80($s4)
    ctx->pc = 0x3f5820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_3f5824:
    // 0x3f5824: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x3f5824u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3f5828:
    // 0x3f5828: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x3f5828u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3f582c:
    // 0x3f582c: 0x8c820e38  lw          $v0, 0xE38($a0)
    ctx->pc = 0x3f582cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3640)));
label_3f5830:
    // 0x3f5830: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3f5834:
    if (ctx->pc == 0x3F5834u) {
        ctx->pc = 0x3F5834u;
            // 0x3f5834: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F5838u;
        goto label_3f5838;
    }
    ctx->pc = 0x3F5830u;
    {
        const bool branch_taken_0x3f5830 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3F5834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5830u;
            // 0x3f5834: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5830) {
            ctx->pc = 0x3F5848u;
            goto label_3f5848;
        }
    }
    ctx->pc = 0x3F5838u;
label_3f5838:
    // 0x3f5838: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x3f5838u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_3f583c:
    // 0x3f583c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3f5840:
    if (ctx->pc == 0x3F5840u) {
        ctx->pc = 0x3F5844u;
        goto label_3f5844;
    }
    ctx->pc = 0x3F583Cu;
    {
        const bool branch_taken_0x3f583c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f583c) {
            ctx->pc = 0x3F5848u;
            goto label_3f5848;
        }
    }
    ctx->pc = 0x3F5844u;
label_3f5844:
    // 0x3f5844: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x3f5844u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f5848:
    // 0x3f5848: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_3f584c:
    if (ctx->pc == 0x3F584Cu) {
        ctx->pc = 0x3F5850u;
        goto label_3f5850;
    }
    ctx->pc = 0x3F5848u;
    {
        const bool branch_taken_0x3f5848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f5848) {
            ctx->pc = 0x3F5864u;
            goto label_3f5864;
        }
    }
    ctx->pc = 0x3F5850u;
label_3f5850:
    // 0x3f5850: 0xc075eb4  jal         func_1D7AD0
label_3f5854:
    if (ctx->pc == 0x3F5854u) {
        ctx->pc = 0x3F5858u;
        goto label_3f5858;
    }
    ctx->pc = 0x3F5850u;
    SET_GPR_U32(ctx, 31, 0x3F5858u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5858u; }
        if (ctx->pc != 0x3F5858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5858u; }
        if (ctx->pc != 0x3F5858u) { return; }
    }
    ctx->pc = 0x3F5858u;
label_3f5858:
    // 0x3f5858: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3f585c:
    if (ctx->pc == 0x3F585Cu) {
        ctx->pc = 0x3F5860u;
        goto label_3f5860;
    }
    ctx->pc = 0x3F5858u;
    {
        const bool branch_taken_0x3f5858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f5858) {
            ctx->pc = 0x3F5864u;
            goto label_3f5864;
        }
    }
    ctx->pc = 0x3F5860u;
label_3f5860:
    // 0x3f5860: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3f5860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f5864:
    // 0x3f5864: 0x52200006  beql        $s1, $zero, . + 4 + (0x6 << 2)
label_3f5868:
    if (ctx->pc == 0x3F5868u) {
        ctx->pc = 0x3F5868u;
            // 0x3f5868: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3F586Cu;
        goto label_3f586c;
    }
    ctx->pc = 0x3F5864u;
    {
        const bool branch_taken_0x3f5864 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5864) {
            ctx->pc = 0x3F5868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5864u;
            // 0x3f5868: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F5880u;
            goto label_3f5880;
        }
    }
    ctx->pc = 0x3F586Cu;
label_3f586c:
    // 0x3f586c: 0x2a010003  slti        $at, $s0, 0x3
    ctx->pc = 0x3f586cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_3f5870:
    // 0x3f5870: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
label_3f5874:
    if (ctx->pc == 0x3F5874u) {
        ctx->pc = 0x3F5874u;
            // 0x3f5874: 0xae93006c  sw          $s3, 0x6C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 19));
        ctx->pc = 0x3F5878u;
        goto label_3f5878;
    }
    ctx->pc = 0x3F5870u;
    {
        const bool branch_taken_0x3f5870 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F5874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5870u;
            // 0x3f5874: 0xae93006c  sw          $s3, 0x6C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5870) {
            ctx->pc = 0x3F5898u;
            goto label_3f5898;
        }
    }
    ctx->pc = 0x3F5878u;
label_3f5878:
    // 0x3f5878: 0x10000007  b           . + 4 + (0x7 << 2)
label_3f587c:
    if (ctx->pc == 0x3F587Cu) {
        ctx->pc = 0x3F587Cu;
            // 0x3f587c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x3F5880u;
        goto label_3f5880;
    }
    ctx->pc = 0x3F5878u;
    {
        const bool branch_taken_0x3f5878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F587Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5878u;
            // 0x3f587c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5878) {
            ctx->pc = 0x3F5898u;
            goto label_3f5898;
        }
    }
    ctx->pc = 0x3F5880u;
label_3f5880:
    // 0x3f5880: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f5880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f5884:
    // 0x3f5884: 0xae82006c  sw          $v0, 0x6C($s4)
    ctx->pc = 0x3f5884u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 2));
label_3f5888:
    // 0x3f5888: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x3f5888u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3f588c:
    // 0x3f588c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3f588cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3f5890:
    // 0x3f5890: 0x320f809  jalr        $t9
label_3f5894:
    if (ctx->pc == 0x3F5894u) {
        ctx->pc = 0x3F5894u;
            // 0x3f5894: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3F5898u;
        goto label_3f5898;
    }
    ctx->pc = 0x3F5890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F5898u);
        ctx->pc = 0x3F5894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5890u;
            // 0x3f5894: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F5898u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F5898u; }
            if (ctx->pc != 0x3F5898u) { return; }
        }
        }
    }
    ctx->pc = 0x3F5898u;
label_3f5898:
    // 0x3f5898: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x3f5898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_3f589c:
    // 0x3f589c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3f589cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3f58a0:
    // 0x3f58a0: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x3f58a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3f58a4:
    // 0x3f58a4: 0x2463b150  addiu       $v1, $v1, -0x4EB0
    ctx->pc = 0x3f58a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947152));
label_3f58a8:
    // 0x3f58a8: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x3f58a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_3f58ac:
    // 0x3f58ac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3f58acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3f58b0:
    // 0x3f58b0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3f58b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3f58b4:
    // 0x3f58b4: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x3f58b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3f58b8:
    // 0x3f58b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3f58b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3f58bc:
    // 0x3f58bc: 0xae840054  sw          $a0, 0x54($s4)
    ctx->pc = 0x3f58bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 4));
label_3f58c0:
    // 0x3f58c0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3f58c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3f58c4:
    // 0x3f58c4: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3f58c4u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3f58c8:
    // 0x3f58c8: 0x2442b180  addiu       $v0, $v0, -0x4E80
    ctx->pc = 0x3f58c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947200));
label_3f58cc:
    // 0x3f58cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f58ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f58d0:
    // 0x3f58d0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3f58d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3f58d4:
    // 0x3f58d4: 0xae830058  sw          $v1, 0x58($s4)
    ctx->pc = 0x3f58d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 3));
label_3f58d8:
    // 0x3f58d8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3f58d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3f58dc:
    // 0x3f58dc: 0x8e830054  lw          $v1, 0x54($s4)
    ctx->pc = 0x3f58dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_3f58e0:
    // 0x3f58e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3f58e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f58e4:
    // 0x3f58e4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3f58e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_3f58e8:
    // 0x3f58e8: 0x8e840080  lw          $a0, 0x80($s4)
    ctx->pc = 0x3f58e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_3f58ec:
    // 0x3f58ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f58ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f58f0:
    // 0x3f58f0: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x3f58f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3f58f4:
    // 0x3f58f4: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x3f58f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f58f8:
    // 0x3f58f8: 0x8c820e38  lw          $v0, 0xE38($a0)
    ctx->pc = 0x3f58f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3640)));
label_3f58fc:
    // 0x3f58fc: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x3f58fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_3f5900:
    // 0x3f5900: 0x46011543  div.s       $f21, $f2, $f1
    ctx->pc = 0x3f5900u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[21] = ctx->f[2] / ctx->f[1];
label_3f5904:
    // 0x3f5904: 0x0  nop
    ctx->pc = 0x3f5904u;
    // NOP
label_3f5908:
    // 0x3f5908: 0x0  nop
    ctx->pc = 0x3f5908u;
    // NOP
label_3f590c:
    // 0x3f590c: 0x46001503  div.s       $f20, $f2, $f0
    ctx->pc = 0x3f590cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[20] = ctx->f[2] / ctx->f[0];
label_3f5910:
    // 0x3f5910: 0x0  nop
    ctx->pc = 0x3f5910u;
    // NOP
label_3f5914:
    // 0x3f5914: 0x0  nop
    ctx->pc = 0x3f5914u;
    // NOP
label_3f5918:
    // 0x3f5918: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3f591c:
    if (ctx->pc == 0x3F591Cu) {
        ctx->pc = 0x3F5920u;
        goto label_3f5920;
    }
    ctx->pc = 0x3F5918u;
    {
        const bool branch_taken_0x3f5918 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3f5918) {
            ctx->pc = 0x3F5930u;
            goto label_3f5930;
        }
    }
    ctx->pc = 0x3F5920u;
label_3f5920:
    // 0x3f5920: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x3f5920u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_3f5924:
    // 0x3f5924: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3f5928:
    if (ctx->pc == 0x3F5928u) {
        ctx->pc = 0x3F592Cu;
        goto label_3f592c;
    }
    ctx->pc = 0x3F5924u;
    {
        const bool branch_taken_0x3f5924 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5924) {
            ctx->pc = 0x3F5930u;
            goto label_3f5930;
        }
    }
    ctx->pc = 0x3F592Cu;
label_3f592c:
    // 0x3f592c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f592cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f5930:
    // 0x3f5930: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_3f5934:
    if (ctx->pc == 0x3F5934u) {
        ctx->pc = 0x3F5938u;
        goto label_3f5938;
    }
    ctx->pc = 0x3F5930u;
    {
        const bool branch_taken_0x3f5930 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f5930) {
            ctx->pc = 0x3F594Cu;
            goto label_3f594c;
        }
    }
    ctx->pc = 0x3F5938u;
label_3f5938:
    // 0x3f5938: 0xc075eb4  jal         func_1D7AD0
label_3f593c:
    if (ctx->pc == 0x3F593Cu) {
        ctx->pc = 0x3F5940u;
        goto label_3f5940;
    }
    ctx->pc = 0x3F5938u;
    SET_GPR_U32(ctx, 31, 0x3F5940u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5940u; }
        if (ctx->pc != 0x3F5940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5940u; }
        if (ctx->pc != 0x3F5940u) { return; }
    }
    ctx->pc = 0x3F5940u;
label_3f5940:
    // 0x3f5940: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3f5944:
    if (ctx->pc == 0x3F5944u) {
        ctx->pc = 0x3F5948u;
        goto label_3f5948;
    }
    ctx->pc = 0x3F5940u;
    {
        const bool branch_taken_0x3f5940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f5940) {
            ctx->pc = 0x3F594Cu;
            goto label_3f594c;
        }
    }
    ctx->pc = 0x3F5948u;
label_3f5948:
    // 0x3f5948: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3f5948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f594c:
    // 0x3f594c: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
label_3f5950:
    if (ctx->pc == 0x3F5950u) {
        ctx->pc = 0x3F5950u;
            // 0x3f5950: 0xe6940074  swc1        $f20, 0x74($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 116), bits); }
        ctx->pc = 0x3F5954u;
        goto label_3f5954;
    }
    ctx->pc = 0x3F594Cu;
    {
        const bool branch_taken_0x3f594c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f594c) {
            ctx->pc = 0x3F5950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F594Cu;
            // 0x3f5950: 0xe6940074  swc1        $f20, 0x74($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 116), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F5970u;
            goto label_3f5970;
        }
    }
    ctx->pc = 0x3F5954u;
label_3f5954:
    // 0x3f5954: 0xe6950074  swc1        $f21, 0x74($s4)
    ctx->pc = 0x3f5954u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 116), bits); }
label_3f5958:
    // 0x3f5958: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3f5958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3f595c:
    // 0x3f595c: 0xae820068  sw          $v0, 0x68($s4)
    ctx->pc = 0x3f595cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 2));
label_3f5960:
    // 0x3f5960: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x3f5960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_3f5964:
    // 0x3f5964: 0x8c420e34  lw          $v0, 0xE34($v0)
    ctx->pc = 0x3f5964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3636)));
label_3f5968:
    // 0x3f5968: 0x10000006  b           . + 4 + (0x6 << 2)
label_3f596c:
    if (ctx->pc == 0x3F596Cu) {
        ctx->pc = 0x3F596Cu;
            // 0x3f596c: 0xae820070  sw          $v0, 0x70($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x3F5970u;
        goto label_3f5970;
    }
    ctx->pc = 0x3F5968u;
    {
        const bool branch_taken_0x3f5968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F596Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5968u;
            // 0x3f596c: 0xae820070  sw          $v0, 0x70($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5968) {
            ctx->pc = 0x3F5984u;
            goto label_3f5984;
        }
    }
    ctx->pc = 0x3F5970u;
label_3f5970:
    // 0x3f5970: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3f5970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3f5974:
    // 0x3f5974: 0xae820068  sw          $v0, 0x68($s4)
    ctx->pc = 0x3f5974u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 2));
label_3f5978:
    // 0x3f5978: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x3f5978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_3f597c:
    // 0x3f597c: 0x8c420e34  lw          $v0, 0xE34($v0)
    ctx->pc = 0x3f597cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3636)));
label_3f5980:
    // 0x3f5980: 0xae820070  sw          $v0, 0x70($s4)
    ctx->pc = 0x3f5980u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 2));
label_3f5984:
    // 0x3f5984: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3f5984u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f5988:
    // 0x3f5988: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3f5988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f598c:
    // 0x3f598c: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x3f598cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_3f5990:
    // 0x3f5990: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f5990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f5994:
    // 0x3f5994: 0x24500090  addiu       $s0, $v0, 0x90
    ctx->pc = 0x3f5994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_3f5998:
    // 0x3f5998: 0x24060160  addiu       $a2, $zero, 0x160
    ctx->pc = 0x3f5998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_3f599c:
    // 0x3f599c: 0xc04a576  jal         func_1295D8
label_3f59a0:
    if (ctx->pc == 0x3F59A0u) {
        ctx->pc = 0x3F59A0u;
            // 0x3f59a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F59A4u;
        goto label_3f59a4;
    }
    ctx->pc = 0x3F599Cu;
    SET_GPR_U32(ctx, 31, 0x3F59A4u);
    ctx->pc = 0x3F59A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F599Cu;
            // 0x3f59a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F59A4u; }
        if (ctx->pc != 0x3F59A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F59A4u; }
        if (ctx->pc != 0x3F59A4u) { return; }
    }
    ctx->pc = 0x3F59A4u;
label_3f59a4:
    // 0x3f59a4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3f59a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3f59a8:
    // 0x3f59a8: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x3f59a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
label_3f59ac:
    // 0x3f59ac: 0x2a42000a  slti        $v0, $s2, 0xA
    ctx->pc = 0x3f59acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
label_3f59b0:
    // 0x3f59b0: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3f59b4:
    if (ctx->pc == 0x3F59B4u) {
        ctx->pc = 0x3F59B4u;
            // 0x3f59b4: 0x26310160  addiu       $s1, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->pc = 0x3F59B8u;
        goto label_3f59b8;
    }
    ctx->pc = 0x3F59B0u;
    {
        const bool branch_taken_0x3f59b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F59B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F59B0u;
            // 0x3f59b4: 0x26310160  addiu       $s1, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f59b0) {
            ctx->pc = 0x3F598Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f598c;
        }
    }
    ctx->pc = 0x3F59B8u;
label_3f59b8:
    // 0x3f59b8: 0x8e830060  lw          $v1, 0x60($s4)
    ctx->pc = 0x3f59b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
label_3f59bc:
    // 0x3f59bc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3f59bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f59c0:
    // 0x3f59c0: 0xae830078  sw          $v1, 0x78($s4)
    ctx->pc = 0x3f59c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 120), GPR_U32(ctx, 3));
label_3f59c4:
    // 0x3f59c4: 0x9283005c  lbu         $v1, 0x5C($s4)
    ctx->pc = 0x3f59c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 92)));
label_3f59c8:
    // 0x3f59c8: 0xa283007c  sb          $v1, 0x7C($s4)
    ctx->pc = 0x3f59c8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 124), (uint8_t)GPR_U32(ctx, 3));
label_3f59cc:
    // 0x3f59cc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3f59ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3f59d0:
    // 0x3f59d0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3f59d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3f59d4:
    // 0x3f59d4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3f59d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f59d8:
    // 0x3f59d8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3f59d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3f59dc:
    // 0x3f59dc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3f59dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f59e0:
    // 0x3f59e0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3f59e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f59e4:
    // 0x3f59e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3f59e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f59e8:
    // 0x3f59e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3f59e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f59ec:
    // 0x3f59ec: 0x3e00008  jr          $ra
label_3f59f0:
    if (ctx->pc == 0x3F59F0u) {
        ctx->pc = 0x3F59F0u;
            // 0x3f59f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3F59F4u;
        goto label_3f59f4;
    }
    ctx->pc = 0x3F59ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F59F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F59ECu;
            // 0x3f59f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F59F4u;
label_3f59f4:
    // 0x3f59f4: 0x0  nop
    ctx->pc = 0x3f59f4u;
    // NOP
label_3f59f8:
    // 0x3f59f8: 0x0  nop
    ctx->pc = 0x3f59f8u;
    // NOP
label_3f59fc:
    // 0x3f59fc: 0x0  nop
    ctx->pc = 0x3f59fcu;
    // NOP
label_3f5a00:
    // 0x3f5a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f5a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3f5a04:
    // 0x3f5a04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f5a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3f5a08:
    // 0x3f5a08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f5a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f5a0c:
    // 0x3f5a0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f5a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f5a10:
    // 0x3f5a10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f5a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f5a14:
    // 0x3f5a14: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_3f5a18:
    if (ctx->pc == 0x3F5A18u) {
        ctx->pc = 0x3F5A18u;
            // 0x3f5a18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F5A1Cu;
        goto label_3f5a1c;
    }
    ctx->pc = 0x3F5A14u;
    {
        const bool branch_taken_0x3f5a14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5A14u;
            // 0x3f5a18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5a14) {
            ctx->pc = 0x3F5A70u;
            goto label_3f5a70;
        }
    }
    ctx->pc = 0x3F5A1Cu;
label_3f5a1c:
    // 0x3f5a1c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3f5a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3f5a20:
    // 0x3f5a20: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3f5a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3f5a24:
    // 0x3f5a24: 0x2463a2f0  addiu       $v1, $v1, -0x5D10
    ctx->pc = 0x3f5a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943472));
label_3f5a28:
    // 0x3f5a28: 0x2442a328  addiu       $v0, $v0, -0x5CD8
    ctx->pc = 0x3f5a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943528));
label_3f5a2c:
    // 0x3f5a2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3f5a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3f5a30:
    // 0x3f5a30: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_3f5a34:
    if (ctx->pc == 0x3F5A34u) {
        ctx->pc = 0x3F5A34u;
            // 0x3f5a34: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x3F5A38u;
        goto label_3f5a38;
    }
    ctx->pc = 0x3F5A30u;
    {
        const bool branch_taken_0x3f5a30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5A30u;
            // 0x3f5a34: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5a30) {
            ctx->pc = 0x3F5A58u;
            goto label_3f5a58;
        }
    }
    ctx->pc = 0x3F5A38u;
label_3f5a38:
    // 0x3f5a38: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3f5a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3f5a3c:
    // 0x3f5a3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3f5a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3f5a40:
    // 0x3f5a40: 0x24631810  addiu       $v1, $v1, 0x1810
    ctx->pc = 0x3f5a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6160));
label_3f5a44:
    // 0x3f5a44: 0x24421848  addiu       $v0, $v0, 0x1848
    ctx->pc = 0x3f5a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6216));
label_3f5a48:
    // 0x3f5a48: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3f5a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3f5a4c:
    // 0x3f5a4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f5a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f5a50:
    // 0x3f5a50: 0xc0b02cc  jal         func_2C0B30
label_3f5a54:
    if (ctx->pc == 0x3F5A54u) {
        ctx->pc = 0x3F5A54u;
            // 0x3f5a54: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x3F5A58u;
        goto label_3f5a58;
    }
    ctx->pc = 0x3F5A50u;
    SET_GPR_U32(ctx, 31, 0x3F5A58u);
    ctx->pc = 0x3F5A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5A50u;
            // 0x3f5a54: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C0B30u;
    if (runtime->hasFunction(0x2C0B30u)) {
        auto targetFn = runtime->lookupFunction(0x2C0B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5A58u; }
        if (ctx->pc != 0x3F5A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C0B30_0x2c0b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5A58u; }
        if (ctx->pc != 0x3F5A58u) { return; }
    }
    ctx->pc = 0x3F5A58u;
label_3f5a58:
    // 0x3f5a58: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3f5a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3f5a5c:
    // 0x3f5a5c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3f5a5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3f5a60:
    // 0x3f5a60: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3f5a64:
    if (ctx->pc == 0x3F5A64u) {
        ctx->pc = 0x3F5A64u;
            // 0x3f5a64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F5A68u;
        goto label_3f5a68;
    }
    ctx->pc = 0x3F5A60u;
    {
        const bool branch_taken_0x3f5a60 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3f5a60) {
            ctx->pc = 0x3F5A64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5A60u;
            // 0x3f5a64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F5A74u;
            goto label_3f5a74;
        }
    }
    ctx->pc = 0x3F5A68u;
label_3f5a68:
    // 0x3f5a68: 0xc0400a8  jal         func_1002A0
label_3f5a6c:
    if (ctx->pc == 0x3F5A6Cu) {
        ctx->pc = 0x3F5A6Cu;
            // 0x3f5a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F5A70u;
        goto label_3f5a70;
    }
    ctx->pc = 0x3F5A68u;
    SET_GPR_U32(ctx, 31, 0x3F5A70u);
    ctx->pc = 0x3F5A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5A68u;
            // 0x3f5a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5A70u; }
        if (ctx->pc != 0x3F5A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5A70u; }
        if (ctx->pc != 0x3F5A70u) { return; }
    }
    ctx->pc = 0x3F5A70u;
label_3f5a70:
    // 0x3f5a70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3f5a70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f5a74:
    // 0x3f5a74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f5a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3f5a78:
    // 0x3f5a78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f5a78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f5a7c:
    // 0x3f5a7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f5a7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f5a80:
    // 0x3f5a80: 0x3e00008  jr          $ra
label_3f5a84:
    if (ctx->pc == 0x3F5A84u) {
        ctx->pc = 0x3F5A84u;
            // 0x3f5a84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3F5A88u;
        goto label_3f5a88;
    }
    ctx->pc = 0x3F5A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F5A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5A80u;
            // 0x3f5a84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F5A88u;
label_3f5a88:
    // 0x3f5a88: 0x0  nop
    ctx->pc = 0x3f5a88u;
    // NOP
label_3f5a8c:
    // 0x3f5a8c: 0x0  nop
    ctx->pc = 0x3f5a8cu;
    // NOP
label_3f5a90:
    // 0x3f5a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f5a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3f5a94:
    // 0x3f5a94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3f5a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3f5a98:
    // 0x3f5a98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f5a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3f5a9c:
    // 0x3f5a9c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3f5a9cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3f5aa0:
    // 0x3f5aa0: 0x50a30013  beql        $a1, $v1, . + 4 + (0x13 << 2)
label_3f5aa4:
    if (ctx->pc == 0x3F5AA4u) {
        ctx->pc = 0x3F5AA4u;
            // 0x3f5aa4: 0x8c830070  lw          $v1, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->pc = 0x3F5AA8u;
        goto label_3f5aa8;
    }
    ctx->pc = 0x3F5AA0u;
    {
        const bool branch_taken_0x3f5aa0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f5aa0) {
            ctx->pc = 0x3F5AA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5AA0u;
            // 0x3f5aa4: 0x8c830070  lw          $v1, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F5AF0u;
            goto label_3f5af0;
        }
    }
    ctx->pc = 0x3F5AA8u;
label_3f5aa8:
    // 0x3f5aa8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3f5aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f5aac:
    // 0x3f5aac: 0x50a30017  beql        $a1, $v1, . + 4 + (0x17 << 2)
label_3f5ab0:
    if (ctx->pc == 0x3F5AB0u) {
        ctx->pc = 0x3F5AB0u;
            // 0x3f5ab0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3F5AB4u;
        goto label_3f5ab4;
    }
    ctx->pc = 0x3F5AACu;
    {
        const bool branch_taken_0x3f5aac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f5aac) {
            ctx->pc = 0x3F5AB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5AACu;
            // 0x3f5ab0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F5B0Cu;
            goto label_3f5b0c;
        }
    }
    ctx->pc = 0x3F5AB4u;
label_3f5ab4:
    // 0x3f5ab4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f5ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f5ab8:
    // 0x3f5ab8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_3f5abc:
    if (ctx->pc == 0x3F5ABCu) {
        ctx->pc = 0x3F5AC0u;
        goto label_3f5ac0;
    }
    ctx->pc = 0x3F5AB8u;
    {
        const bool branch_taken_0x3f5ab8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f5ab8) {
            ctx->pc = 0x3F5AC8u;
            goto label_3f5ac8;
        }
    }
    ctx->pc = 0x3F5AC0u;
label_3f5ac0:
    // 0x3f5ac0: 0x10000011  b           . + 4 + (0x11 << 2)
label_3f5ac4:
    if (ctx->pc == 0x3F5AC4u) {
        ctx->pc = 0x3F5AC8u;
        goto label_3f5ac8;
    }
    ctx->pc = 0x3F5AC0u;
    {
        const bool branch_taken_0x3f5ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5ac0) {
            ctx->pc = 0x3F5B08u;
            goto label_3f5b08;
        }
    }
    ctx->pc = 0x3F5AC8u;
label_3f5ac8:
    // 0x3f5ac8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f5ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3f5acc:
    // 0x3f5acc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f5accu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f5ad0:
    // 0x3f5ad0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3f5ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3f5ad4:
    // 0x3f5ad4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3f5ad4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3f5ad8:
    // 0x3f5ad8: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3f5ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3f5adc:
    // 0x3f5adc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3f5adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3f5ae0:
    // 0x3f5ae0: 0x320f809  jalr        $t9
label_3f5ae4:
    if (ctx->pc == 0x3F5AE4u) {
        ctx->pc = 0x3F5AE4u;
            // 0x3f5ae4: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x3F5AE8u;
        goto label_3f5ae8;
    }
    ctx->pc = 0x3F5AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F5AE8u);
        ctx->pc = 0x3F5AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5AE0u;
            // 0x3f5ae4: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F5AE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F5AE8u; }
            if (ctx->pc != 0x3F5AE8u) { return; }
        }
        }
    }
    ctx->pc = 0x3F5AE8u;
label_3f5ae8:
    // 0x3f5ae8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3f5aec:
    if (ctx->pc == 0x3F5AECu) {
        ctx->pc = 0x3F5AF0u;
        goto label_3f5af0;
    }
    ctx->pc = 0x3F5AE8u;
    {
        const bool branch_taken_0x3f5ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5ae8) {
            ctx->pc = 0x3F5B08u;
            goto label_3f5b08;
        }
    }
    ctx->pc = 0x3F5AF0u;
label_3f5af0:
    // 0x3f5af0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_3f5af4:
    if (ctx->pc == 0x3F5AF4u) {
        ctx->pc = 0x3F5AF8u;
        goto label_3f5af8;
    }
    ctx->pc = 0x3F5AF0u;
    {
        const bool branch_taken_0x3f5af0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5af0) {
            ctx->pc = 0x3F5B08u;
            goto label_3f5b08;
        }
    }
    ctx->pc = 0x3F5AF8u;
label_3f5af8:
    // 0x3f5af8: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x3f5af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_3f5afc:
    // 0x3f5afc: 0x24850084  addiu       $a1, $a0, 0x84
    ctx->pc = 0x3f5afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
label_3f5b00:
    // 0x3f5b00: 0xc0fd720  jal         func_3F5C80
label_3f5b04:
    if (ctx->pc == 0x3F5B04u) {
        ctx->pc = 0x3F5B04u;
            // 0x3f5b04: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3F5B08u;
        goto label_3f5b08;
    }
    ctx->pc = 0x3F5B00u;
    SET_GPR_U32(ctx, 31, 0x3F5B08u);
    ctx->pc = 0x3F5B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5B00u;
            // 0x3f5b04: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F5C80u;
    if (runtime->hasFunction(0x3F5C80u)) {
        auto targetFn = runtime->lookupFunction(0x3F5C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5B08u; }
        if (ctx->pc != 0x3F5B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F5C80_0x3f5c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5B08u; }
        if (ctx->pc != 0x3F5B08u) { return; }
    }
    ctx->pc = 0x3F5B08u;
label_3f5b08:
    // 0x3f5b08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f5b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3f5b0c:
    // 0x3f5b0c: 0x3e00008  jr          $ra
label_3f5b10:
    if (ctx->pc == 0x3F5B10u) {
        ctx->pc = 0x3F5B10u;
            // 0x3f5b10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3F5B14u;
        goto label_3f5b14;
    }
    ctx->pc = 0x3F5B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F5B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5B0Cu;
            // 0x3f5b10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F5B14u;
label_3f5b14:
    // 0x3f5b14: 0x0  nop
    ctx->pc = 0x3f5b14u;
    // NOP
label_3f5b18:
    // 0x3f5b18: 0x0  nop
    ctx->pc = 0x3f5b18u;
    // NOP
label_3f5b1c:
    // 0x3f5b1c: 0x0  nop
    ctx->pc = 0x3f5b1cu;
    // NOP
label_3f5b20:
    // 0x3f5b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f5b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3f5b24:
    // 0x3f5b24: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3f5b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3f5b28:
    // 0x3f5b28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f5b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3f5b2c:
    // 0x3f5b2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f5b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f5b30:
    // 0x3f5b30: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3f5b30u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3f5b34:
    // 0x3f5b34: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_3f5b38:
    if (ctx->pc == 0x3F5B38u) {
        ctx->pc = 0x3F5B38u;
            // 0x3f5b38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F5B3Cu;
        goto label_3f5b3c;
    }
    ctx->pc = 0x3F5B34u;
    {
        const bool branch_taken_0x3f5b34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F5B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5B34u;
            // 0x3f5b38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5b34) {
            ctx->pc = 0x3F5B68u;
            goto label_3f5b68;
        }
    }
    ctx->pc = 0x3F5B3Cu;
label_3f5b3c:
    // 0x3f5b3c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3f5b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f5b40:
    // 0x3f5b40: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_3f5b44:
    if (ctx->pc == 0x3F5B44u) {
        ctx->pc = 0x3F5B44u;
            // 0x3f5b44: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3F5B48u;
        goto label_3f5b48;
    }
    ctx->pc = 0x3F5B40u;
    {
        const bool branch_taken_0x3f5b40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f5b40) {
            ctx->pc = 0x3F5B44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5B40u;
            // 0x3f5b44: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F5B5Cu;
            goto label_3f5b5c;
        }
    }
    ctx->pc = 0x3F5B48u;
label_3f5b48:
    // 0x3f5b48: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f5b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f5b4c:
    // 0x3f5b4c: 0x50a3000d  beql        $a1, $v1, . + 4 + (0xD << 2)
label_3f5b50:
    if (ctx->pc == 0x3F5B50u) {
        ctx->pc = 0x3F5B50u;
            // 0x3f5b50: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3F5B54u;
        goto label_3f5b54;
    }
    ctx->pc = 0x3F5B4Cu;
    {
        const bool branch_taken_0x3f5b4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f5b4c) {
            ctx->pc = 0x3F5B50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5B4Cu;
            // 0x3f5b50: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F5B84u;
            goto label_3f5b84;
        }
    }
    ctx->pc = 0x3F5B54u;
label_3f5b54:
    // 0x3f5b54: 0x1000000a  b           . + 4 + (0xA << 2)
label_3f5b58:
    if (ctx->pc == 0x3F5B58u) {
        ctx->pc = 0x3F5B5Cu;
        goto label_3f5b5c;
    }
    ctx->pc = 0x3F5B54u;
    {
        const bool branch_taken_0x3f5b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5b54) {
            ctx->pc = 0x3F5B80u;
            goto label_3f5b80;
        }
    }
    ctx->pc = 0x3F5B5Cu;
label_3f5b5c:
    // 0x3f5b5c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3f5b5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3f5b60:
    // 0x3f5b60: 0x320f809  jalr        $t9
label_3f5b64:
    if (ctx->pc == 0x3F5B64u) {
        ctx->pc = 0x3F5B68u;
        goto label_3f5b68;
    }
    ctx->pc = 0x3F5B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F5B68u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F5B68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F5B68u; }
            if (ctx->pc != 0x3F5B68u) { return; }
        }
        }
    }
    ctx->pc = 0x3F5B68u;
label_3f5b68:
    // 0x3f5b68: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x3f5b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_3f5b6c:
    // 0x3f5b6c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3f5b70:
    if (ctx->pc == 0x3F5B70u) {
        ctx->pc = 0x3F5B74u;
        goto label_3f5b74;
    }
    ctx->pc = 0x3F5B6Cu;
    {
        const bool branch_taken_0x3f5b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5b6c) {
            ctx->pc = 0x3F5B80u;
            goto label_3f5b80;
        }
    }
    ctx->pc = 0x3F5B74u;
label_3f5b74:
    // 0x3f5b74: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x3f5b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_3f5b78:
    // 0x3f5b78: 0xc0fd7c4  jal         func_3F5F10
label_3f5b7c:
    if (ctx->pc == 0x3F5B7Cu) {
        ctx->pc = 0x3F5B7Cu;
            // 0x3f5b7c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3F5B80u;
        goto label_3f5b80;
    }
    ctx->pc = 0x3F5B78u;
    SET_GPR_U32(ctx, 31, 0x3F5B80u);
    ctx->pc = 0x3F5B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5B78u;
            // 0x3f5b7c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F5F10u;
    if (runtime->hasFunction(0x3F5F10u)) {
        auto targetFn = runtime->lookupFunction(0x3F5F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5B80u; }
        if (ctx->pc != 0x3F5B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F5F10_0x3f5f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5B80u; }
        if (ctx->pc != 0x3F5B80u) { return; }
    }
    ctx->pc = 0x3F5B80u;
label_3f5b80:
    // 0x3f5b80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f5b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3f5b84:
    // 0x3f5b84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f5b84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f5b88:
    // 0x3f5b88: 0x3e00008  jr          $ra
label_3f5b8c:
    if (ctx->pc == 0x3F5B8Cu) {
        ctx->pc = 0x3F5B8Cu;
            // 0x3f5b8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3F5B90u;
        goto label_3f5b90;
    }
    ctx->pc = 0x3F5B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F5B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5B88u;
            // 0x3f5b8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F5B90u;
label_3f5b90:
    // 0x3f5b90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3f5b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3f5b94:
    // 0x3f5b94: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3f5b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3f5b98:
    // 0x3f5b98: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3f5b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3f5b9c:
    // 0x3f5b9c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3f5b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3f5ba0:
    // 0x3f5ba0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3f5ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3f5ba4:
    // 0x3f5ba4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f5ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3f5ba8:
    // 0x3f5ba8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f5ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f5bac:
    // 0x3f5bac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f5bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f5bb0:
    // 0x3f5bb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f5bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f5bb4:
    // 0x3f5bb4: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x3f5bb4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3f5bb8:
    // 0x3f5bb8: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
label_3f5bbc:
    if (ctx->pc == 0x3F5BBCu) {
        ctx->pc = 0x3F5BBCu;
            // 0x3f5bbc: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F5BC0u;
        goto label_3f5bc0;
    }
    ctx->pc = 0x3F5BB8u;
    {
        const bool branch_taken_0x3f5bb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5BB8u;
            // 0x3f5bbc: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5bb8) {
            ctx->pc = 0x3F5C58u;
            goto label_3f5c58;
        }
    }
    ctx->pc = 0x3F5BC0u;
label_3f5bc0:
    // 0x3f5bc0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3f5bc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f5bc4:
    // 0x3f5bc4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3f5bc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f5bc8:
    // 0x3f5bc8: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x3f5bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_3f5bcc:
    // 0x3f5bcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f5bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f5bd0:
    // 0x3f5bd0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3f5bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3f5bd4:
    // 0x3f5bd4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3f5bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3f5bd8:
    // 0x3f5bd8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3f5bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3f5bdc:
    // 0x3f5bdc: 0xc04a576  jal         func_1295D8
label_3f5be0:
    if (ctx->pc == 0x3F5BE0u) {
        ctx->pc = 0x3F5BE0u;
            // 0x3f5be0: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->pc = 0x3F5BE4u;
        goto label_3f5be4;
    }
    ctx->pc = 0x3F5BDCu;
    SET_GPR_U32(ctx, 31, 0x3F5BE4u);
    ctx->pc = 0x3F5BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5BDCu;
            // 0x3f5be0: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5BE4u; }
        if (ctx->pc != 0x3F5BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5BE4u; }
        if (ctx->pc != 0x3F5BE4u) { return; }
    }
    ctx->pc = 0x3F5BE4u;
label_3f5be4:
    // 0x3f5be4: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x3f5be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_3f5be8:
    // 0x3f5be8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f5be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f5bec:
    // 0x3f5bec: 0xc04a576  jal         func_1295D8
label_3f5bf0:
    if (ctx->pc == 0x3F5BF0u) {
        ctx->pc = 0x3F5BF0u;
            // 0x3f5bf0: 0x24060140  addiu       $a2, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->pc = 0x3F5BF4u;
        goto label_3f5bf4;
    }
    ctx->pc = 0x3F5BECu;
    SET_GPR_U32(ctx, 31, 0x3F5BF4u);
    ctx->pc = 0x3F5BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5BECu;
            // 0x3f5bf0: 0x24060140  addiu       $a2, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5BF4u; }
        if (ctx->pc != 0x3F5BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5BF4u; }
        if (ctx->pc != 0x3F5BF4u) { return; }
    }
    ctx->pc = 0x3F5BF4u;
label_3f5bf4:
    // 0x3f5bf4: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x3f5bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_3f5bf8:
    // 0x3f5bf8: 0x24140005  addiu       $s4, $zero, 0x5
    ctx->pc = 0x3f5bf8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3f5bfc:
    // 0x3f5bfc: 0xae000234  sw          $zero, 0x234($s0)
    ctx->pc = 0x3f5bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 0));
label_3f5c00:
    // 0x3f5c00: 0x261300d0  addiu       $s3, $s0, 0xD0
    ctx->pc = 0x3f5c00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_3f5c04:
    // 0x3f5c04: 0x0  nop
    ctx->pc = 0x3f5c04u;
    // NOP
label_3f5c08:
    // 0x3f5c08: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3f5c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3f5c0c:
    // 0x3f5c0c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3f5c10:
    if (ctx->pc == 0x3F5C10u) {
        ctx->pc = 0x3F5C14u;
        goto label_3f5c14;
    }
    ctx->pc = 0x3F5C0Cu;
    {
        const bool branch_taken_0x3f5c0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5c0c) {
            ctx->pc = 0x3F5C28u;
            goto label_3f5c28;
        }
    }
    ctx->pc = 0x3F5C14u;
label_3f5c14:
    // 0x3f5c14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f5c14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f5c18:
    // 0x3f5c18: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3f5c18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3f5c1c:
    // 0x3f5c1c: 0x320f809  jalr        $t9
label_3f5c20:
    if (ctx->pc == 0x3F5C20u) {
        ctx->pc = 0x3F5C20u;
            // 0x3f5c20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F5C24u;
        goto label_3f5c24;
    }
    ctx->pc = 0x3F5C1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F5C24u);
        ctx->pc = 0x3F5C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5C1Cu;
            // 0x3f5c20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F5C24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F5C24u; }
            if (ctx->pc != 0x3F5C24u) { return; }
        }
        }
    }
    ctx->pc = 0x3F5C24u;
label_3f5c24:
    // 0x3f5c24: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3f5c24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_3f5c28:
    // 0x3f5c28: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3f5c28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3f5c2c:
    // 0x3f5c2c: 0x1680fff6  bnez        $s4, . + 4 + (-0xA << 2)
label_3f5c30:
    if (ctx->pc == 0x3F5C30u) {
        ctx->pc = 0x3F5C30u;
            // 0x3f5c30: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3F5C34u;
        goto label_3f5c34;
    }
    ctx->pc = 0x3F5C2Cu;
    {
        const bool branch_taken_0x3f5c2c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F5C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5C2Cu;
            // 0x3f5c30: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5c2c) {
            ctx->pc = 0x3F5C08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f5c08;
        }
    }
    ctx->pc = 0x3F5C34u;
label_3f5c34:
    // 0x3f5c34: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x3f5c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_3f5c38:
    // 0x3f5c38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f5c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f5c3c:
    // 0x3f5c3c: 0xc04a576  jal         func_1295D8
label_3f5c40:
    if (ctx->pc == 0x3F5C40u) {
        ctx->pc = 0x3F5C40u;
            // 0x3f5c40: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x3F5C44u;
        goto label_3f5c44;
    }
    ctx->pc = 0x3F5C3Cu;
    SET_GPR_U32(ctx, 31, 0x3F5C44u);
    ctx->pc = 0x3F5C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5C3Cu;
            // 0x3f5c40: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5C44u; }
        if (ctx->pc != 0x3F5C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5C44u; }
        if (ctx->pc != 0x3F5C44u) { return; }
    }
    ctx->pc = 0x3F5C44u;
label_3f5c44:
    // 0x3f5c44: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3f5c44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3f5c48:
    // 0x3f5c48: 0x2b1182b  sltu        $v1, $s5, $s1
    ctx->pc = 0x3f5c48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3f5c4c:
    // 0x3f5c4c: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
label_3f5c50:
    if (ctx->pc == 0x3F5C50u) {
        ctx->pc = 0x3F5C50u;
            // 0x3f5c50: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3F5C54u;
        goto label_3f5c54;
    }
    ctx->pc = 0x3F5C4Cu;
    {
        const bool branch_taken_0x3f5c4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F5C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5C4Cu;
            // 0x3f5c50: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5c4c) {
            ctx->pc = 0x3F5BC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f5bc8;
        }
    }
    ctx->pc = 0x3F5C54u;
label_3f5c54:
    // 0x3f5c54: 0x0  nop
    ctx->pc = 0x3f5c54u;
    // NOP
label_3f5c58:
    // 0x3f5c58: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3f5c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3f5c5c:
    // 0x3f5c5c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3f5c5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f5c60:
    // 0x3f5c60: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3f5c60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f5c64:
    // 0x3f5c64: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3f5c64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f5c68:
    // 0x3f5c68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f5c68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f5c6c:
    // 0x3f5c6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f5c6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f5c70:
    // 0x3f5c70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f5c70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f5c74:
    // 0x3f5c74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f5c74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f5c78:
    // 0x3f5c78: 0x3e00008  jr          $ra
label_3f5c7c:
    if (ctx->pc == 0x3F5C7Cu) {
        ctx->pc = 0x3F5C7Cu;
            // 0x3f5c7c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3F5C80u;
        goto label_fallthrough_0x3f5c78;
    }
    ctx->pc = 0x3F5C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F5C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5C78u;
            // 0x3f5c7c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3f5c78:
    ctx->pc = 0x3F5C80u;
}
