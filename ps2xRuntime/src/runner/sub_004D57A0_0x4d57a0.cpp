#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D57A0
// Address: 0x4d57a0 - 0x4d5c10
void sub_004D57A0_0x4d57a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D57A0_0x4d57a0");
#endif

    switch (ctx->pc) {
        case 0x4d57a0u: goto label_4d57a0;
        case 0x4d57a4u: goto label_4d57a4;
        case 0x4d57a8u: goto label_4d57a8;
        case 0x4d57acu: goto label_4d57ac;
        case 0x4d57b0u: goto label_4d57b0;
        case 0x4d57b4u: goto label_4d57b4;
        case 0x4d57b8u: goto label_4d57b8;
        case 0x4d57bcu: goto label_4d57bc;
        case 0x4d57c0u: goto label_4d57c0;
        case 0x4d57c4u: goto label_4d57c4;
        case 0x4d57c8u: goto label_4d57c8;
        case 0x4d57ccu: goto label_4d57cc;
        case 0x4d57d0u: goto label_4d57d0;
        case 0x4d57d4u: goto label_4d57d4;
        case 0x4d57d8u: goto label_4d57d8;
        case 0x4d57dcu: goto label_4d57dc;
        case 0x4d57e0u: goto label_4d57e0;
        case 0x4d57e4u: goto label_4d57e4;
        case 0x4d57e8u: goto label_4d57e8;
        case 0x4d57ecu: goto label_4d57ec;
        case 0x4d57f0u: goto label_4d57f0;
        case 0x4d57f4u: goto label_4d57f4;
        case 0x4d57f8u: goto label_4d57f8;
        case 0x4d57fcu: goto label_4d57fc;
        case 0x4d5800u: goto label_4d5800;
        case 0x4d5804u: goto label_4d5804;
        case 0x4d5808u: goto label_4d5808;
        case 0x4d580cu: goto label_4d580c;
        case 0x4d5810u: goto label_4d5810;
        case 0x4d5814u: goto label_4d5814;
        case 0x4d5818u: goto label_4d5818;
        case 0x4d581cu: goto label_4d581c;
        case 0x4d5820u: goto label_4d5820;
        case 0x4d5824u: goto label_4d5824;
        case 0x4d5828u: goto label_4d5828;
        case 0x4d582cu: goto label_4d582c;
        case 0x4d5830u: goto label_4d5830;
        case 0x4d5834u: goto label_4d5834;
        case 0x4d5838u: goto label_4d5838;
        case 0x4d583cu: goto label_4d583c;
        case 0x4d5840u: goto label_4d5840;
        case 0x4d5844u: goto label_4d5844;
        case 0x4d5848u: goto label_4d5848;
        case 0x4d584cu: goto label_4d584c;
        case 0x4d5850u: goto label_4d5850;
        case 0x4d5854u: goto label_4d5854;
        case 0x4d5858u: goto label_4d5858;
        case 0x4d585cu: goto label_4d585c;
        case 0x4d5860u: goto label_4d5860;
        case 0x4d5864u: goto label_4d5864;
        case 0x4d5868u: goto label_4d5868;
        case 0x4d586cu: goto label_4d586c;
        case 0x4d5870u: goto label_4d5870;
        case 0x4d5874u: goto label_4d5874;
        case 0x4d5878u: goto label_4d5878;
        case 0x4d587cu: goto label_4d587c;
        case 0x4d5880u: goto label_4d5880;
        case 0x4d5884u: goto label_4d5884;
        case 0x4d5888u: goto label_4d5888;
        case 0x4d588cu: goto label_4d588c;
        case 0x4d5890u: goto label_4d5890;
        case 0x4d5894u: goto label_4d5894;
        case 0x4d5898u: goto label_4d5898;
        case 0x4d589cu: goto label_4d589c;
        case 0x4d58a0u: goto label_4d58a0;
        case 0x4d58a4u: goto label_4d58a4;
        case 0x4d58a8u: goto label_4d58a8;
        case 0x4d58acu: goto label_4d58ac;
        case 0x4d58b0u: goto label_4d58b0;
        case 0x4d58b4u: goto label_4d58b4;
        case 0x4d58b8u: goto label_4d58b8;
        case 0x4d58bcu: goto label_4d58bc;
        case 0x4d58c0u: goto label_4d58c0;
        case 0x4d58c4u: goto label_4d58c4;
        case 0x4d58c8u: goto label_4d58c8;
        case 0x4d58ccu: goto label_4d58cc;
        case 0x4d58d0u: goto label_4d58d0;
        case 0x4d58d4u: goto label_4d58d4;
        case 0x4d58d8u: goto label_4d58d8;
        case 0x4d58dcu: goto label_4d58dc;
        case 0x4d58e0u: goto label_4d58e0;
        case 0x4d58e4u: goto label_4d58e4;
        case 0x4d58e8u: goto label_4d58e8;
        case 0x4d58ecu: goto label_4d58ec;
        case 0x4d58f0u: goto label_4d58f0;
        case 0x4d58f4u: goto label_4d58f4;
        case 0x4d58f8u: goto label_4d58f8;
        case 0x4d58fcu: goto label_4d58fc;
        case 0x4d5900u: goto label_4d5900;
        case 0x4d5904u: goto label_4d5904;
        case 0x4d5908u: goto label_4d5908;
        case 0x4d590cu: goto label_4d590c;
        case 0x4d5910u: goto label_4d5910;
        case 0x4d5914u: goto label_4d5914;
        case 0x4d5918u: goto label_4d5918;
        case 0x4d591cu: goto label_4d591c;
        case 0x4d5920u: goto label_4d5920;
        case 0x4d5924u: goto label_4d5924;
        case 0x4d5928u: goto label_4d5928;
        case 0x4d592cu: goto label_4d592c;
        case 0x4d5930u: goto label_4d5930;
        case 0x4d5934u: goto label_4d5934;
        case 0x4d5938u: goto label_4d5938;
        case 0x4d593cu: goto label_4d593c;
        case 0x4d5940u: goto label_4d5940;
        case 0x4d5944u: goto label_4d5944;
        case 0x4d5948u: goto label_4d5948;
        case 0x4d594cu: goto label_4d594c;
        case 0x4d5950u: goto label_4d5950;
        case 0x4d5954u: goto label_4d5954;
        case 0x4d5958u: goto label_4d5958;
        case 0x4d595cu: goto label_4d595c;
        case 0x4d5960u: goto label_4d5960;
        case 0x4d5964u: goto label_4d5964;
        case 0x4d5968u: goto label_4d5968;
        case 0x4d596cu: goto label_4d596c;
        case 0x4d5970u: goto label_4d5970;
        case 0x4d5974u: goto label_4d5974;
        case 0x4d5978u: goto label_4d5978;
        case 0x4d597cu: goto label_4d597c;
        case 0x4d5980u: goto label_4d5980;
        case 0x4d5984u: goto label_4d5984;
        case 0x4d5988u: goto label_4d5988;
        case 0x4d598cu: goto label_4d598c;
        case 0x4d5990u: goto label_4d5990;
        case 0x4d5994u: goto label_4d5994;
        case 0x4d5998u: goto label_4d5998;
        case 0x4d599cu: goto label_4d599c;
        case 0x4d59a0u: goto label_4d59a0;
        case 0x4d59a4u: goto label_4d59a4;
        case 0x4d59a8u: goto label_4d59a8;
        case 0x4d59acu: goto label_4d59ac;
        case 0x4d59b0u: goto label_4d59b0;
        case 0x4d59b4u: goto label_4d59b4;
        case 0x4d59b8u: goto label_4d59b8;
        case 0x4d59bcu: goto label_4d59bc;
        case 0x4d59c0u: goto label_4d59c0;
        case 0x4d59c4u: goto label_4d59c4;
        case 0x4d59c8u: goto label_4d59c8;
        case 0x4d59ccu: goto label_4d59cc;
        case 0x4d59d0u: goto label_4d59d0;
        case 0x4d59d4u: goto label_4d59d4;
        case 0x4d59d8u: goto label_4d59d8;
        case 0x4d59dcu: goto label_4d59dc;
        case 0x4d59e0u: goto label_4d59e0;
        case 0x4d59e4u: goto label_4d59e4;
        case 0x4d59e8u: goto label_4d59e8;
        case 0x4d59ecu: goto label_4d59ec;
        case 0x4d59f0u: goto label_4d59f0;
        case 0x4d59f4u: goto label_4d59f4;
        case 0x4d59f8u: goto label_4d59f8;
        case 0x4d59fcu: goto label_4d59fc;
        case 0x4d5a00u: goto label_4d5a00;
        case 0x4d5a04u: goto label_4d5a04;
        case 0x4d5a08u: goto label_4d5a08;
        case 0x4d5a0cu: goto label_4d5a0c;
        case 0x4d5a10u: goto label_4d5a10;
        case 0x4d5a14u: goto label_4d5a14;
        case 0x4d5a18u: goto label_4d5a18;
        case 0x4d5a1cu: goto label_4d5a1c;
        case 0x4d5a20u: goto label_4d5a20;
        case 0x4d5a24u: goto label_4d5a24;
        case 0x4d5a28u: goto label_4d5a28;
        case 0x4d5a2cu: goto label_4d5a2c;
        case 0x4d5a30u: goto label_4d5a30;
        case 0x4d5a34u: goto label_4d5a34;
        case 0x4d5a38u: goto label_4d5a38;
        case 0x4d5a3cu: goto label_4d5a3c;
        case 0x4d5a40u: goto label_4d5a40;
        case 0x4d5a44u: goto label_4d5a44;
        case 0x4d5a48u: goto label_4d5a48;
        case 0x4d5a4cu: goto label_4d5a4c;
        case 0x4d5a50u: goto label_4d5a50;
        case 0x4d5a54u: goto label_4d5a54;
        case 0x4d5a58u: goto label_4d5a58;
        case 0x4d5a5cu: goto label_4d5a5c;
        case 0x4d5a60u: goto label_4d5a60;
        case 0x4d5a64u: goto label_4d5a64;
        case 0x4d5a68u: goto label_4d5a68;
        case 0x4d5a6cu: goto label_4d5a6c;
        case 0x4d5a70u: goto label_4d5a70;
        case 0x4d5a74u: goto label_4d5a74;
        case 0x4d5a78u: goto label_4d5a78;
        case 0x4d5a7cu: goto label_4d5a7c;
        case 0x4d5a80u: goto label_4d5a80;
        case 0x4d5a84u: goto label_4d5a84;
        case 0x4d5a88u: goto label_4d5a88;
        case 0x4d5a8cu: goto label_4d5a8c;
        case 0x4d5a90u: goto label_4d5a90;
        case 0x4d5a94u: goto label_4d5a94;
        case 0x4d5a98u: goto label_4d5a98;
        case 0x4d5a9cu: goto label_4d5a9c;
        case 0x4d5aa0u: goto label_4d5aa0;
        case 0x4d5aa4u: goto label_4d5aa4;
        case 0x4d5aa8u: goto label_4d5aa8;
        case 0x4d5aacu: goto label_4d5aac;
        case 0x4d5ab0u: goto label_4d5ab0;
        case 0x4d5ab4u: goto label_4d5ab4;
        case 0x4d5ab8u: goto label_4d5ab8;
        case 0x4d5abcu: goto label_4d5abc;
        case 0x4d5ac0u: goto label_4d5ac0;
        case 0x4d5ac4u: goto label_4d5ac4;
        case 0x4d5ac8u: goto label_4d5ac8;
        case 0x4d5accu: goto label_4d5acc;
        case 0x4d5ad0u: goto label_4d5ad0;
        case 0x4d5ad4u: goto label_4d5ad4;
        case 0x4d5ad8u: goto label_4d5ad8;
        case 0x4d5adcu: goto label_4d5adc;
        case 0x4d5ae0u: goto label_4d5ae0;
        case 0x4d5ae4u: goto label_4d5ae4;
        case 0x4d5ae8u: goto label_4d5ae8;
        case 0x4d5aecu: goto label_4d5aec;
        case 0x4d5af0u: goto label_4d5af0;
        case 0x4d5af4u: goto label_4d5af4;
        case 0x4d5af8u: goto label_4d5af8;
        case 0x4d5afcu: goto label_4d5afc;
        case 0x4d5b00u: goto label_4d5b00;
        case 0x4d5b04u: goto label_4d5b04;
        case 0x4d5b08u: goto label_4d5b08;
        case 0x4d5b0cu: goto label_4d5b0c;
        case 0x4d5b10u: goto label_4d5b10;
        case 0x4d5b14u: goto label_4d5b14;
        case 0x4d5b18u: goto label_4d5b18;
        case 0x4d5b1cu: goto label_4d5b1c;
        case 0x4d5b20u: goto label_4d5b20;
        case 0x4d5b24u: goto label_4d5b24;
        case 0x4d5b28u: goto label_4d5b28;
        case 0x4d5b2cu: goto label_4d5b2c;
        case 0x4d5b30u: goto label_4d5b30;
        case 0x4d5b34u: goto label_4d5b34;
        case 0x4d5b38u: goto label_4d5b38;
        case 0x4d5b3cu: goto label_4d5b3c;
        case 0x4d5b40u: goto label_4d5b40;
        case 0x4d5b44u: goto label_4d5b44;
        case 0x4d5b48u: goto label_4d5b48;
        case 0x4d5b4cu: goto label_4d5b4c;
        case 0x4d5b50u: goto label_4d5b50;
        case 0x4d5b54u: goto label_4d5b54;
        case 0x4d5b58u: goto label_4d5b58;
        case 0x4d5b5cu: goto label_4d5b5c;
        case 0x4d5b60u: goto label_4d5b60;
        case 0x4d5b64u: goto label_4d5b64;
        case 0x4d5b68u: goto label_4d5b68;
        case 0x4d5b6cu: goto label_4d5b6c;
        case 0x4d5b70u: goto label_4d5b70;
        case 0x4d5b74u: goto label_4d5b74;
        case 0x4d5b78u: goto label_4d5b78;
        case 0x4d5b7cu: goto label_4d5b7c;
        case 0x4d5b80u: goto label_4d5b80;
        case 0x4d5b84u: goto label_4d5b84;
        case 0x4d5b88u: goto label_4d5b88;
        case 0x4d5b8cu: goto label_4d5b8c;
        case 0x4d5b90u: goto label_4d5b90;
        case 0x4d5b94u: goto label_4d5b94;
        case 0x4d5b98u: goto label_4d5b98;
        case 0x4d5b9cu: goto label_4d5b9c;
        case 0x4d5ba0u: goto label_4d5ba0;
        case 0x4d5ba4u: goto label_4d5ba4;
        case 0x4d5ba8u: goto label_4d5ba8;
        case 0x4d5bacu: goto label_4d5bac;
        case 0x4d5bb0u: goto label_4d5bb0;
        case 0x4d5bb4u: goto label_4d5bb4;
        case 0x4d5bb8u: goto label_4d5bb8;
        case 0x4d5bbcu: goto label_4d5bbc;
        case 0x4d5bc0u: goto label_4d5bc0;
        case 0x4d5bc4u: goto label_4d5bc4;
        case 0x4d5bc8u: goto label_4d5bc8;
        case 0x4d5bccu: goto label_4d5bcc;
        case 0x4d5bd0u: goto label_4d5bd0;
        case 0x4d5bd4u: goto label_4d5bd4;
        case 0x4d5bd8u: goto label_4d5bd8;
        case 0x4d5bdcu: goto label_4d5bdc;
        case 0x4d5be0u: goto label_4d5be0;
        case 0x4d5be4u: goto label_4d5be4;
        case 0x4d5be8u: goto label_4d5be8;
        case 0x4d5becu: goto label_4d5bec;
        case 0x4d5bf0u: goto label_4d5bf0;
        case 0x4d5bf4u: goto label_4d5bf4;
        case 0x4d5bf8u: goto label_4d5bf8;
        case 0x4d5bfcu: goto label_4d5bfc;
        case 0x4d5c00u: goto label_4d5c00;
        case 0x4d5c04u: goto label_4d5c04;
        case 0x4d5c08u: goto label_4d5c08;
        case 0x4d5c0cu: goto label_4d5c0c;
        default: break;
    }

    ctx->pc = 0x4d57a0u;

label_4d57a0:
    // 0x4d57a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d57a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4d57a4:
    // 0x4d57a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d57a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4d57a8:
    // 0x4d57a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d57a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d57ac:
    // 0x4d57ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d57acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d57b0:
    // 0x4d57b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d57b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d57b4:
    // 0x4d57b4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4d57b8:
    if (ctx->pc == 0x4D57B8u) {
        ctx->pc = 0x4D57B8u;
            // 0x4d57b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D57BCu;
        goto label_4d57bc;
    }
    ctx->pc = 0x4D57B4u;
    {
        const bool branch_taken_0x4d57b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D57B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D57B4u;
            // 0x4d57b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d57b4) {
            ctx->pc = 0x4D58E8u;
            goto label_4d58e8;
        }
    }
    ctx->pc = 0x4D57BCu;
label_4d57bc:
    // 0x4d57bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d57bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d57c0:
    // 0x4d57c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d57c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d57c4:
    // 0x4d57c4: 0x24632610  addiu       $v1, $v1, 0x2610
    ctx->pc = 0x4d57c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9744));
label_4d57c8:
    // 0x4d57c8: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4d57c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
label_4d57cc:
    // 0x4d57cc: 0x24422648  addiu       $v0, $v0, 0x2648
    ctx->pc = 0x4d57ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9800));
label_4d57d0:
    // 0x4d57d0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d57d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4d57d4:
    // 0x4d57d4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4d57d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4d57d8:
    // 0x4d57d8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4d57d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4d57dc:
    // 0x4d57dc: 0xc0407c0  jal         func_101F00
label_4d57e0:
    if (ctx->pc == 0x4D57E0u) {
        ctx->pc = 0x4D57E0u;
            // 0x4d57e0: 0x24a55900  addiu       $a1, $a1, 0x5900 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22784));
        ctx->pc = 0x4D57E4u;
        goto label_4d57e4;
    }
    ctx->pc = 0x4D57DCu;
    SET_GPR_U32(ctx, 31, 0x4D57E4u);
    ctx->pc = 0x4D57E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D57DCu;
            // 0x4d57e0: 0x24a55900  addiu       $a1, $a1, 0x5900 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D57E4u; }
        if (ctx->pc != 0x4D57E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D57E4u; }
        if (ctx->pc != 0x4D57E4u) { return; }
    }
    ctx->pc = 0x4D57E4u;
label_4d57e4:
    // 0x4d57e4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4d57e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4d57e8:
    // 0x4d57e8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4d57ec:
    if (ctx->pc == 0x4D57ECu) {
        ctx->pc = 0x4D57ECu;
            // 0x4d57ec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4D57F0u;
        goto label_4d57f0;
    }
    ctx->pc = 0x4D57E8u;
    {
        const bool branch_taken_0x4d57e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d57e8) {
            ctx->pc = 0x4D57ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D57E8u;
            // 0x4d57ec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D57FCu;
            goto label_4d57fc;
        }
    }
    ctx->pc = 0x4D57F0u;
label_4d57f0:
    // 0x4d57f0: 0xc07507c  jal         func_1D41F0
label_4d57f4:
    if (ctx->pc == 0x4D57F4u) {
        ctx->pc = 0x4D57F4u;
            // 0x4d57f4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4D57F8u;
        goto label_4d57f8;
    }
    ctx->pc = 0x4D57F0u;
    SET_GPR_U32(ctx, 31, 0x4D57F8u);
    ctx->pc = 0x4D57F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D57F0u;
            // 0x4d57f4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D57F8u; }
        if (ctx->pc != 0x4D57F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D57F8u; }
        if (ctx->pc != 0x4D57F8u) { return; }
    }
    ctx->pc = 0x4D57F8u;
label_4d57f8:
    // 0x4d57f8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4d57f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4d57fc:
    // 0x4d57fc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4d5800:
    if (ctx->pc == 0x4D5800u) {
        ctx->pc = 0x4D5800u;
            // 0x4d5800: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4D5804u;
        goto label_4d5804;
    }
    ctx->pc = 0x4D57FCu;
    {
        const bool branch_taken_0x4d57fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d57fc) {
            ctx->pc = 0x4D5800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D57FCu;
            // 0x4d5800: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D582Cu;
            goto label_4d582c;
        }
    }
    ctx->pc = 0x4D5804u;
label_4d5804:
    // 0x4d5804: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4d5808:
    if (ctx->pc == 0x4D5808u) {
        ctx->pc = 0x4D580Cu;
        goto label_4d580c;
    }
    ctx->pc = 0x4D5804u;
    {
        const bool branch_taken_0x4d5804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d5804) {
            ctx->pc = 0x4D5828u;
            goto label_4d5828;
        }
    }
    ctx->pc = 0x4D580Cu;
label_4d580c:
    // 0x4d580c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4d5810:
    if (ctx->pc == 0x4D5810u) {
        ctx->pc = 0x4D5814u;
        goto label_4d5814;
    }
    ctx->pc = 0x4D580Cu;
    {
        const bool branch_taken_0x4d580c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d580c) {
            ctx->pc = 0x4D5828u;
            goto label_4d5828;
        }
    }
    ctx->pc = 0x4D5814u;
label_4d5814:
    // 0x4d5814: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4d5814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4d5818:
    // 0x4d5818: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4d581c:
    if (ctx->pc == 0x4D581Cu) {
        ctx->pc = 0x4D5820u;
        goto label_4d5820;
    }
    ctx->pc = 0x4D5818u;
    {
        const bool branch_taken_0x4d5818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d5818) {
            ctx->pc = 0x4D5828u;
            goto label_4d5828;
        }
    }
    ctx->pc = 0x4D5820u;
label_4d5820:
    // 0x4d5820: 0xc0400a8  jal         func_1002A0
label_4d5824:
    if (ctx->pc == 0x4D5824u) {
        ctx->pc = 0x4D5828u;
        goto label_4d5828;
    }
    ctx->pc = 0x4D5820u;
    SET_GPR_U32(ctx, 31, 0x4D5828u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5828u; }
        if (ctx->pc != 0x4D5828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5828u; }
        if (ctx->pc != 0x4D5828u) { return; }
    }
    ctx->pc = 0x4D5828u;
label_4d5828:
    // 0x4d5828: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4d5828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4d582c:
    // 0x4d582c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4d5830:
    if (ctx->pc == 0x4D5830u) {
        ctx->pc = 0x4D5830u;
            // 0x4d5830: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4D5834u;
        goto label_4d5834;
    }
    ctx->pc = 0x4D582Cu;
    {
        const bool branch_taken_0x4d582c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d582c) {
            ctx->pc = 0x4D5830u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D582Cu;
            // 0x4d5830: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D585Cu;
            goto label_4d585c;
        }
    }
    ctx->pc = 0x4D5834u;
label_4d5834:
    // 0x4d5834: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4d5838:
    if (ctx->pc == 0x4D5838u) {
        ctx->pc = 0x4D583Cu;
        goto label_4d583c;
    }
    ctx->pc = 0x4D5834u;
    {
        const bool branch_taken_0x4d5834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d5834) {
            ctx->pc = 0x4D5858u;
            goto label_4d5858;
        }
    }
    ctx->pc = 0x4D583Cu;
label_4d583c:
    // 0x4d583c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4d5840:
    if (ctx->pc == 0x4D5840u) {
        ctx->pc = 0x4D5844u;
        goto label_4d5844;
    }
    ctx->pc = 0x4D583Cu;
    {
        const bool branch_taken_0x4d583c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d583c) {
            ctx->pc = 0x4D5858u;
            goto label_4d5858;
        }
    }
    ctx->pc = 0x4D5844u;
label_4d5844:
    // 0x4d5844: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4d5844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4d5848:
    // 0x4d5848: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4d584c:
    if (ctx->pc == 0x4D584Cu) {
        ctx->pc = 0x4D5850u;
        goto label_4d5850;
    }
    ctx->pc = 0x4D5848u;
    {
        const bool branch_taken_0x4d5848 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d5848) {
            ctx->pc = 0x4D5858u;
            goto label_4d5858;
        }
    }
    ctx->pc = 0x4D5850u;
label_4d5850:
    // 0x4d5850: 0xc0400a8  jal         func_1002A0
label_4d5854:
    if (ctx->pc == 0x4D5854u) {
        ctx->pc = 0x4D5858u;
        goto label_4d5858;
    }
    ctx->pc = 0x4D5850u;
    SET_GPR_U32(ctx, 31, 0x4D5858u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5858u; }
        if (ctx->pc != 0x4D5858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5858u; }
        if (ctx->pc != 0x4D5858u) { return; }
    }
    ctx->pc = 0x4D5858u;
label_4d5858:
    // 0x4d5858: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4d5858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4d585c:
    // 0x4d585c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4d5860:
    if (ctx->pc == 0x4D5860u) {
        ctx->pc = 0x4D5864u;
        goto label_4d5864;
    }
    ctx->pc = 0x4D585Cu;
    {
        const bool branch_taken_0x4d585c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d585c) {
            ctx->pc = 0x4D5878u;
            goto label_4d5878;
        }
    }
    ctx->pc = 0x4D5864u;
label_4d5864:
    // 0x4d5864: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d5864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d5868:
    // 0x4d5868: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d5868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4d586c:
    // 0x4d586c: 0x246325f8  addiu       $v1, $v1, 0x25F8
    ctx->pc = 0x4d586cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9720));
label_4d5870:
    // 0x4d5870: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4d5870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4d5874:
    // 0x4d5874: 0xac40aa48  sw          $zero, -0x55B8($v0)
    ctx->pc = 0x4d5874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945352), GPR_U32(ctx, 0));
label_4d5878:
    // 0x4d5878: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4d587c:
    if (ctx->pc == 0x4D587Cu) {
        ctx->pc = 0x4D587Cu;
            // 0x4d587c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4D5880u;
        goto label_4d5880;
    }
    ctx->pc = 0x4D5878u;
    {
        const bool branch_taken_0x4d5878 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d5878) {
            ctx->pc = 0x4D587Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5878u;
            // 0x4d587c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D58D4u;
            goto label_4d58d4;
        }
    }
    ctx->pc = 0x4D5880u;
label_4d5880:
    // 0x4d5880: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4d5880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4d5884:
    // 0x4d5884: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4d5884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4d5888:
    // 0x4d5888: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4d5888u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4d588c:
    // 0x4d588c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4d588cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4d5890:
    // 0x4d5890: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4d5894:
    if (ctx->pc == 0x4D5894u) {
        ctx->pc = 0x4D5894u;
            // 0x4d5894: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4D5898u;
        goto label_4d5898;
    }
    ctx->pc = 0x4D5890u;
    {
        const bool branch_taken_0x4d5890 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d5890) {
            ctx->pc = 0x4D5894u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5890u;
            // 0x4d5894: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D58ACu;
            goto label_4d58ac;
        }
    }
    ctx->pc = 0x4D5898u;
label_4d5898:
    // 0x4d5898: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d5898u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d589c:
    // 0x4d589c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4d589cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4d58a0:
    // 0x4d58a0: 0x320f809  jalr        $t9
label_4d58a4:
    if (ctx->pc == 0x4D58A4u) {
        ctx->pc = 0x4D58A4u;
            // 0x4d58a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4D58A8u;
        goto label_4d58a8;
    }
    ctx->pc = 0x4D58A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D58A8u);
        ctx->pc = 0x4D58A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D58A0u;
            // 0x4d58a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D58A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D58A8u; }
            if (ctx->pc != 0x4D58A8u) { return; }
        }
        }
    }
    ctx->pc = 0x4D58A8u;
label_4d58a8:
    // 0x4d58a8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4d58a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4d58ac:
    // 0x4d58ac: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4d58b0:
    if (ctx->pc == 0x4D58B0u) {
        ctx->pc = 0x4D58B0u;
            // 0x4d58b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D58B4u;
        goto label_4d58b4;
    }
    ctx->pc = 0x4D58ACu;
    {
        const bool branch_taken_0x4d58ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d58ac) {
            ctx->pc = 0x4D58B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D58ACu;
            // 0x4d58b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D58C8u;
            goto label_4d58c8;
        }
    }
    ctx->pc = 0x4D58B4u;
label_4d58b4:
    // 0x4d58b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d58b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d58b8:
    // 0x4d58b8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4d58b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4d58bc:
    // 0x4d58bc: 0x320f809  jalr        $t9
label_4d58c0:
    if (ctx->pc == 0x4D58C0u) {
        ctx->pc = 0x4D58C0u;
            // 0x4d58c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4D58C4u;
        goto label_4d58c4;
    }
    ctx->pc = 0x4D58BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D58C4u);
        ctx->pc = 0x4D58C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D58BCu;
            // 0x4d58c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D58C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D58C4u; }
            if (ctx->pc != 0x4D58C4u) { return; }
        }
        }
    }
    ctx->pc = 0x4D58C4u;
label_4d58c4:
    // 0x4d58c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d58c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d58c8:
    // 0x4d58c8: 0xc075bf8  jal         func_1D6FE0
label_4d58cc:
    if (ctx->pc == 0x4D58CCu) {
        ctx->pc = 0x4D58CCu;
            // 0x4d58cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D58D0u;
        goto label_4d58d0;
    }
    ctx->pc = 0x4D58C8u;
    SET_GPR_U32(ctx, 31, 0x4D58D0u);
    ctx->pc = 0x4D58CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D58C8u;
            // 0x4d58cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D58D0u; }
        if (ctx->pc != 0x4D58D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D58D0u; }
        if (ctx->pc != 0x4D58D0u) { return; }
    }
    ctx->pc = 0x4D58D0u;
label_4d58d0:
    // 0x4d58d0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4d58d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4d58d4:
    // 0x4d58d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4d58d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4d58d8:
    // 0x4d58d8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4d58dc:
    if (ctx->pc == 0x4D58DCu) {
        ctx->pc = 0x4D58DCu;
            // 0x4d58dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D58E0u;
        goto label_4d58e0;
    }
    ctx->pc = 0x4D58D8u;
    {
        const bool branch_taken_0x4d58d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4d58d8) {
            ctx->pc = 0x4D58DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D58D8u;
            // 0x4d58dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D58ECu;
            goto label_4d58ec;
        }
    }
    ctx->pc = 0x4D58E0u;
label_4d58e0:
    // 0x4d58e0: 0xc0400a8  jal         func_1002A0
label_4d58e4:
    if (ctx->pc == 0x4D58E4u) {
        ctx->pc = 0x4D58E4u;
            // 0x4d58e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D58E8u;
        goto label_4d58e8;
    }
    ctx->pc = 0x4D58E0u;
    SET_GPR_U32(ctx, 31, 0x4D58E8u);
    ctx->pc = 0x4D58E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D58E0u;
            // 0x4d58e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D58E8u; }
        if (ctx->pc != 0x4D58E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D58E8u; }
        if (ctx->pc != 0x4D58E8u) { return; }
    }
    ctx->pc = 0x4D58E8u;
label_4d58e8:
    // 0x4d58e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4d58e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d58ec:
    // 0x4d58ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d58ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d58f0:
    // 0x4d58f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d58f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d58f4:
    // 0x4d58f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d58f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d58f8:
    // 0x4d58f8: 0x3e00008  jr          $ra
label_4d58fc:
    if (ctx->pc == 0x4D58FCu) {
        ctx->pc = 0x4D58FCu;
            // 0x4d58fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4D5900u;
        goto label_4d5900;
    }
    ctx->pc = 0x4D58F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D58FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D58F8u;
            // 0x4d58fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D5900u;
label_4d5900:
    // 0x4d5900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d5900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4d5904:
    // 0x4d5904: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d5904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4d5908:
    // 0x4d5908: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d5908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d590c:
    // 0x4d590c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d590cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d5910:
    // 0x4d5910: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d5910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d5914:
    // 0x4d5914: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_4d5918:
    if (ctx->pc == 0x4D5918u) {
        ctx->pc = 0x4D5918u;
            // 0x4d5918: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D591Cu;
        goto label_4d591c;
    }
    ctx->pc = 0x4D5914u;
    {
        const bool branch_taken_0x4d5914 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5914u;
            // 0x4d5918: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5914) {
            ctx->pc = 0x4D5968u;
            goto label_4d5968;
        }
    }
    ctx->pc = 0x4D591Cu;
label_4d591c:
    // 0x4d591c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d591cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d5920:
    // 0x4d5920: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d5920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d5924:
    // 0x4d5924: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x4d5924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_4d5928:
    // 0x4d5928: 0x244226f0  addiu       $v0, $v0, 0x26F0
    ctx->pc = 0x4d5928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9968));
label_4d592c:
    // 0x4d592c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d592cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4d5930:
    // 0x4d5930: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x4d5930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_4d5934:
    // 0x4d5934: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d5934u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d5938:
    // 0x4d5938: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4d5938u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4d593c:
    // 0x4d593c: 0x320f809  jalr        $t9
label_4d5940:
    if (ctx->pc == 0x4D5940u) {
        ctx->pc = 0x4D5944u;
        goto label_4d5944;
    }
    ctx->pc = 0x4D593Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D5944u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D5944u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D5944u; }
            if (ctx->pc != 0x4D5944u) { return; }
        }
        }
    }
    ctx->pc = 0x4D5944u;
label_4d5944:
    // 0x4d5944: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d5944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d5948:
    // 0x4d5948: 0xc12e684  jal         func_4B9A10
label_4d594c:
    if (ctx->pc == 0x4D594Cu) {
        ctx->pc = 0x4D594Cu;
            // 0x4d594c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D5950u;
        goto label_4d5950;
    }
    ctx->pc = 0x4D5948u;
    SET_GPR_U32(ctx, 31, 0x4D5950u);
    ctx->pc = 0x4D594Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5948u;
            // 0x4d594c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9A10u;
    if (runtime->hasFunction(0x4B9A10u)) {
        auto targetFn = runtime->lookupFunction(0x4B9A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5950u; }
        if (ctx->pc != 0x4D5950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9A10_0x4b9a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5950u; }
        if (ctx->pc != 0x4D5950u) { return; }
    }
    ctx->pc = 0x4D5950u;
label_4d5950:
    // 0x4d5950: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4d5950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4d5954:
    // 0x4d5954: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4d5954u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4d5958:
    // 0x4d5958: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4d595c:
    if (ctx->pc == 0x4D595Cu) {
        ctx->pc = 0x4D595Cu;
            // 0x4d595c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D5960u;
        goto label_4d5960;
    }
    ctx->pc = 0x4D5958u;
    {
        const bool branch_taken_0x4d5958 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4d5958) {
            ctx->pc = 0x4D595Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5958u;
            // 0x4d595c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D596Cu;
            goto label_4d596c;
        }
    }
    ctx->pc = 0x4D5960u;
label_4d5960:
    // 0x4d5960: 0xc0400a8  jal         func_1002A0
label_4d5964:
    if (ctx->pc == 0x4D5964u) {
        ctx->pc = 0x4D5964u;
            // 0x4d5964: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D5968u;
        goto label_4d5968;
    }
    ctx->pc = 0x4D5960u;
    SET_GPR_U32(ctx, 31, 0x4D5968u);
    ctx->pc = 0x4D5964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5960u;
            // 0x4d5964: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5968u; }
        if (ctx->pc != 0x4D5968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5968u; }
        if (ctx->pc != 0x4D5968u) { return; }
    }
    ctx->pc = 0x4D5968u;
label_4d5968:
    // 0x4d5968: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4d5968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d596c:
    // 0x4d596c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d596cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d5970:
    // 0x4d5970: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d5970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d5974:
    // 0x4d5974: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d5974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d5978:
    // 0x4d5978: 0x3e00008  jr          $ra
label_4d597c:
    if (ctx->pc == 0x4D597Cu) {
        ctx->pc = 0x4D597Cu;
            // 0x4d597c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4D5980u;
        goto label_4d5980;
    }
    ctx->pc = 0x4D5978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D597Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5978u;
            // 0x4d597c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D5980u;
label_4d5980:
    // 0x4d5980: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x4d5980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_4d5984:
    // 0x4d5984: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4d5984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4d5988:
    // 0x4d5988: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4d5988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4d598c:
    // 0x4d598c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4d598cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_4d5990:
    // 0x4d5990: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4d5990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4d5994:
    // 0x4d5994: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4d5994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4d5998:
    // 0x4d5998: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4d5998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4d599c:
    // 0x4d599c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4d599cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4d59a0:
    // 0x4d59a0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4d59a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4d59a4:
    // 0x4d59a4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4d59a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4d59a8:
    // 0x4d59a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4d59a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4d59ac:
    // 0x4d59ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4d59acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4d59b0:
    // 0x4d59b0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4d59b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4d59b4:
    // 0x4d59b4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4d59b4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4d59b8:
    // 0x4d59b8: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
label_4d59bc:
    if (ctx->pc == 0x4D59BCu) {
        ctx->pc = 0x4D59BCu;
            // 0x4d59bc: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D59C0u;
        goto label_4d59c0;
    }
    ctx->pc = 0x4D59B8u;
    {
        const bool branch_taken_0x4d59b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4D59BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D59B8u;
            // 0x4d59bc: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d59b8) {
            ctx->pc = 0x4D5A1Cu;
            goto label_4d5a1c;
        }
    }
    ctx->pc = 0x4D59C0u;
label_4d59c0:
    // 0x4d59c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4d59c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4d59c4:
    // 0x4d59c4: 0x50a30010  beql        $a1, $v1, . + 4 + (0x10 << 2)
label_4d59c8:
    if (ctx->pc == 0x4D59C8u) {
        ctx->pc = 0x4D59C8u;
            // 0x4d59c8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4D59CCu;
        goto label_4d59cc;
    }
    ctx->pc = 0x4D59C4u;
    {
        const bool branch_taken_0x4d59c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4d59c4) {
            ctx->pc = 0x4D59C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D59C4u;
            // 0x4d59c8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D5A08u;
            goto label_4d5a08;
        }
    }
    ctx->pc = 0x4D59CCu;
label_4d59cc:
    // 0x4d59cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4d59ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4d59d0:
    // 0x4d59d0: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4d59d4:
    if (ctx->pc == 0x4D59D4u) {
        ctx->pc = 0x4D59D8u;
        goto label_4d59d8;
    }
    ctx->pc = 0x4D59D0u;
    {
        const bool branch_taken_0x4d59d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4d59d0) {
            ctx->pc = 0x4D59E0u;
            goto label_4d59e0;
        }
    }
    ctx->pc = 0x4D59D8u;
label_4d59d8:
    // 0x4d59d8: 0x1000007f  b           . + 4 + (0x7F << 2)
label_4d59dc:
    if (ctx->pc == 0x4D59DCu) {
        ctx->pc = 0x4D59DCu;
            // 0x4d59dc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x4D59E0u;
        goto label_4d59e0;
    }
    ctx->pc = 0x4D59D8u;
    {
        const bool branch_taken_0x4d59d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D59DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D59D8u;
            // 0x4d59dc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d59d8) {
            ctx->pc = 0x4D5BD8u;
            goto label_4d5bd8;
        }
    }
    ctx->pc = 0x4D59E0u;
label_4d59e0:
    // 0x4d59e0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d59e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4d59e4:
    // 0x4d59e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d59e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d59e8:
    // 0x4d59e8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4d59e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4d59ec:
    // 0x4d59ec: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4d59ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4d59f0:
    // 0x4d59f0: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4d59f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4d59f4:
    // 0x4d59f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4d59f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4d59f8:
    // 0x4d59f8: 0x320f809  jalr        $t9
label_4d59fc:
    if (ctx->pc == 0x4D59FCu) {
        ctx->pc = 0x4D59FCu;
            // 0x4d59fc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4D5A00u;
        goto label_4d5a00;
    }
    ctx->pc = 0x4D59F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D5A00u);
        ctx->pc = 0x4D59FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D59F8u;
            // 0x4d59fc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D5A00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D5A00u; }
            if (ctx->pc != 0x4D5A00u) { return; }
        }
        }
    }
    ctx->pc = 0x4D5A00u;
label_4d5a00:
    // 0x4d5a00: 0x10000074  b           . + 4 + (0x74 << 2)
label_4d5a04:
    if (ctx->pc == 0x4D5A04u) {
        ctx->pc = 0x4D5A08u;
        goto label_4d5a08;
    }
    ctx->pc = 0x4D5A00u;
    {
        const bool branch_taken_0x4d5a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d5a00) {
            ctx->pc = 0x4D5BD4u;
            goto label_4d5bd4;
        }
    }
    ctx->pc = 0x4D5A08u;
label_4d5a08:
    // 0x4d5a08: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4d5a08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4d5a0c:
    // 0x4d5a0c: 0x320f809  jalr        $t9
label_4d5a10:
    if (ctx->pc == 0x4D5A10u) {
        ctx->pc = 0x4D5A14u;
        goto label_4d5a14;
    }
    ctx->pc = 0x4D5A0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D5A14u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D5A14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D5A14u; }
            if (ctx->pc != 0x4D5A14u) { return; }
        }
        }
    }
    ctx->pc = 0x4D5A14u;
label_4d5a14:
    // 0x4d5a14: 0x1000006f  b           . + 4 + (0x6F << 2)
label_4d5a18:
    if (ctx->pc == 0x4D5A18u) {
        ctx->pc = 0x4D5A1Cu;
        goto label_4d5a1c;
    }
    ctx->pc = 0x4D5A14u;
    {
        const bool branch_taken_0x4d5a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d5a14) {
            ctx->pc = 0x4D5BD4u;
            goto label_4d5bd4;
        }
    }
    ctx->pc = 0x4D5A1Cu;
label_4d5a1c:
    // 0x4d5a1c: 0x8ed70070  lw          $s7, 0x70($s6)
    ctx->pc = 0x4d5a1cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_4d5a20:
    // 0x4d5a20: 0x12e0006c  beqz        $s7, . + 4 + (0x6C << 2)
label_4d5a24:
    if (ctx->pc == 0x4D5A24u) {
        ctx->pc = 0x4D5A28u;
        goto label_4d5a28;
    }
    ctx->pc = 0x4D5A20u;
    {
        const bool branch_taken_0x4d5a20 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d5a20) {
            ctx->pc = 0x4D5BD4u;
            goto label_4d5bd4;
        }
    }
    ctx->pc = 0x4D5A28u;
label_4d5a28:
    // 0x4d5a28: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4d5a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4d5a2c:
    // 0x4d5a2c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4d5a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4d5a30:
    // 0x4d5a30: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x4d5a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_4d5a34:
    // 0x4d5a34: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4d5a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4d5a38:
    // 0x4d5a38: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x4d5a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_4d5a3c:
    // 0x4d5a3c: 0x26d20084  addiu       $s2, $s6, 0x84
    ctx->pc = 0x4d5a3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
label_4d5a40:
    // 0x4d5a40: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4d5a40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d5a44:
    // 0x4d5a44: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4d5a44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d5a48:
    // 0x4d5a48: 0x8ca60130  lw          $a2, 0x130($a1)
    ctx->pc = 0x4d5a48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_4d5a4c:
    // 0x4d5a4c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d5a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d5a50:
    // 0x4d5a50: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x4d5a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4d5a54:
    // 0x4d5a54: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4d5a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4d5a58:
    // 0x4d5a58: 0xc4547de8  lwc1        $f20, 0x7DE8($v0)
    ctx->pc = 0x4d5a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4d5a5c:
    // 0x4d5a5c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4d5a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4d5a60:
    // 0x4d5a60: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4d5a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4d5a64:
    // 0x4d5a64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4d5a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4d5a68:
    // 0x4d5a68: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x4d5a68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
label_4d5a6c:
    // 0x4d5a6c: 0x245e0010  addiu       $fp, $v0, 0x10
    ctx->pc = 0x4d5a6cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4d5a70:
    // 0x4d5a70: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x4d5a70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_4d5a74:
    // 0x4d5a74: 0x27a3018c  addiu       $v1, $sp, 0x18C
    ctx->pc = 0x4d5a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_4d5a78:
    // 0x4d5a78: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x4d5a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4d5a7c:
    // 0x4d5a7c: 0xafa30188  sw          $v1, 0x188($sp)
    ctx->pc = 0x4d5a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 3));
label_4d5a80:
    // 0x4d5a80: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x4d5a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_4d5a84:
    // 0x4d5a84: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x4d5a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_4d5a88:
    // 0x4d5a88: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x4d5a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_4d5a8c:
    // 0x4d5a8c: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x4d5a8cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4d5a90:
    // 0x4d5a90: 0xc0d639c  jal         func_358E70
label_4d5a94:
    if (ctx->pc == 0x4D5A94u) {
        ctx->pc = 0x4D5A94u;
            // 0x4d5a94: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->pc = 0x4D5A98u;
        goto label_4d5a98;
    }
    ctx->pc = 0x4D5A90u;
    SET_GPR_U32(ctx, 31, 0x4D5A98u);
    ctx->pc = 0x4D5A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5A90u;
            // 0x4d5a94: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5A98u; }
        if (ctx->pc != 0x4D5A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5A98u; }
        if (ctx->pc != 0x4D5A98u) { return; }
    }
    ctx->pc = 0x4D5A98u;
label_4d5a98:
    // 0x4d5a98: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_4d5a9c:
    if (ctx->pc == 0x4D5A9Cu) {
        ctx->pc = 0x4D5AA0u;
        goto label_4d5aa0;
    }
    ctx->pc = 0x4D5A98u;
    {
        const bool branch_taken_0x4d5a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d5a98) {
            ctx->pc = 0x4D5B80u;
            goto label_4d5b80;
        }
    }
    ctx->pc = 0x4D5AA0u;
label_4d5aa0:
    // 0x4d5aa0: 0xc0d1c14  jal         func_347050
label_4d5aa4:
    if (ctx->pc == 0x4D5AA4u) {
        ctx->pc = 0x4D5AA4u;
            // 0x4d5aa4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D5AA8u;
        goto label_4d5aa8;
    }
    ctx->pc = 0x4D5AA0u;
    SET_GPR_U32(ctx, 31, 0x4D5AA8u);
    ctx->pc = 0x4D5AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5AA0u;
            // 0x4d5aa4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5AA8u; }
        if (ctx->pc != 0x4D5AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5AA8u; }
        if (ctx->pc != 0x4D5AA8u) { return; }
    }
    ctx->pc = 0x4D5AA8u;
label_4d5aa8:
    // 0x4d5aa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4d5aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d5aac:
    // 0x4d5aac: 0xc04f278  jal         func_13C9E0
label_4d5ab0:
    if (ctx->pc == 0x4D5AB0u) {
        ctx->pc = 0x4D5AB0u;
            // 0x4d5ab0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4D5AB4u;
        goto label_4d5ab4;
    }
    ctx->pc = 0x4D5AACu;
    SET_GPR_U32(ctx, 31, 0x4D5AB4u);
    ctx->pc = 0x4D5AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5AACu;
            // 0x4d5ab0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5AB4u; }
        if (ctx->pc != 0x4D5AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5AB4u; }
        if (ctx->pc != 0x4D5AB4u) { return; }
    }
    ctx->pc = 0x4D5AB4u;
label_4d5ab4:
    // 0x4d5ab4: 0xc0d1c10  jal         func_347040
label_4d5ab8:
    if (ctx->pc == 0x4D5AB8u) {
        ctx->pc = 0x4D5AB8u;
            // 0x4d5ab8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D5ABCu;
        goto label_4d5abc;
    }
    ctx->pc = 0x4D5AB4u;
    SET_GPR_U32(ctx, 31, 0x4D5ABCu);
    ctx->pc = 0x4D5AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5AB4u;
            // 0x4d5ab8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5ABCu; }
        if (ctx->pc != 0x4D5ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5ABCu; }
        if (ctx->pc != 0x4D5ABCu) { return; }
    }
    ctx->pc = 0x4D5ABCu;
label_4d5abc:
    // 0x4d5abc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4d5abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d5ac0:
    // 0x4d5ac0: 0xc04ce80  jal         func_133A00
label_4d5ac4:
    if (ctx->pc == 0x4D5AC4u) {
        ctx->pc = 0x4D5AC4u;
            // 0x4d5ac4: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4D5AC8u;
        goto label_4d5ac8;
    }
    ctx->pc = 0x4D5AC0u;
    SET_GPR_U32(ctx, 31, 0x4D5AC8u);
    ctx->pc = 0x4D5AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5AC0u;
            // 0x4d5ac4: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5AC8u; }
        if (ctx->pc != 0x4D5AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5AC8u; }
        if (ctx->pc != 0x4D5AC8u) { return; }
    }
    ctx->pc = 0x4D5AC8u;
label_4d5ac8:
    // 0x4d5ac8: 0xc0d4108  jal         func_350420
label_4d5acc:
    if (ctx->pc == 0x4D5ACCu) {
        ctx->pc = 0x4D5AD0u;
        goto label_4d5ad0;
    }
    ctx->pc = 0x4D5AC8u;
    SET_GPR_U32(ctx, 31, 0x4D5AD0u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5AD0u; }
        if (ctx->pc != 0x4D5AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5AD0u; }
        if (ctx->pc != 0x4D5AD0u) { return; }
    }
    ctx->pc = 0x4D5AD0u;
label_4d5ad0:
    // 0x4d5ad0: 0xc0b36b4  jal         func_2CDAD0
label_4d5ad4:
    if (ctx->pc == 0x4D5AD4u) {
        ctx->pc = 0x4D5AD4u;
            // 0x4d5ad4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D5AD8u;
        goto label_4d5ad8;
    }
    ctx->pc = 0x4D5AD0u;
    SET_GPR_U32(ctx, 31, 0x4D5AD8u);
    ctx->pc = 0x4D5AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5AD0u;
            // 0x4d5ad4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5AD8u; }
        if (ctx->pc != 0x4D5AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5AD8u; }
        if (ctx->pc != 0x4D5AD8u) { return; }
    }
    ctx->pc = 0x4D5AD8u;
label_4d5ad8:
    // 0x4d5ad8: 0xc0b9c64  jal         func_2E7190
label_4d5adc:
    if (ctx->pc == 0x4D5ADCu) {
        ctx->pc = 0x4D5ADCu;
            // 0x4d5adc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D5AE0u;
        goto label_4d5ae0;
    }
    ctx->pc = 0x4D5AD8u;
    SET_GPR_U32(ctx, 31, 0x4D5AE0u);
    ctx->pc = 0x4D5ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5AD8u;
            // 0x4d5adc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5AE0u; }
        if (ctx->pc != 0x4D5AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5AE0u; }
        if (ctx->pc != 0x4D5AE0u) { return; }
    }
    ctx->pc = 0x4D5AE0u;
label_4d5ae0:
    // 0x4d5ae0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4d5ae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d5ae4:
    // 0x4d5ae4: 0xc0d4104  jal         func_350410
label_4d5ae8:
    if (ctx->pc == 0x4D5AE8u) {
        ctx->pc = 0x4D5AE8u;
            // 0x4d5ae8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D5AECu;
        goto label_4d5aec;
    }
    ctx->pc = 0x4D5AE4u;
    SET_GPR_U32(ctx, 31, 0x4D5AECu);
    ctx->pc = 0x4D5AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5AE4u;
            // 0x4d5ae8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5AECu; }
        if (ctx->pc != 0x4D5AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5AECu; }
        if (ctx->pc != 0x4D5AECu) { return; }
    }
    ctx->pc = 0x4D5AECu;
label_4d5aec:
    // 0x4d5aec: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4d5aecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d5af0:
    // 0x4d5af0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d5af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d5af4:
    // 0x4d5af4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4d5af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d5af8:
    // 0x4d5af8: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x4d5af8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4d5afc:
    // 0x4d5afc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4d5afcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d5b00:
    // 0x4d5b00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4d5b00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d5b04:
    // 0x4d5b04: 0xc0d40ac  jal         func_3502B0
label_4d5b08:
    if (ctx->pc == 0x4D5B08u) {
        ctx->pc = 0x4D5B08u;
            // 0x4d5b08: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4D5B0Cu;
        goto label_4d5b0c;
    }
    ctx->pc = 0x4D5B04u;
    SET_GPR_U32(ctx, 31, 0x4D5B0Cu);
    ctx->pc = 0x4D5B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5B04u;
            // 0x4d5b08: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5B0Cu; }
        if (ctx->pc != 0x4D5B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5B0Cu; }
        if (ctx->pc != 0x4D5B0Cu) { return; }
    }
    ctx->pc = 0x4D5B0Cu;
label_4d5b0c:
    // 0x4d5b0c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4d5b0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4d5b10:
    // 0x4d5b10: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_4d5b14:
    if (ctx->pc == 0x4D5B14u) {
        ctx->pc = 0x4D5B14u;
            // 0x4d5b14: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4D5B18u;
        goto label_4d5b18;
    }
    ctx->pc = 0x4D5B10u;
    {
        const bool branch_taken_0x4d5b10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5B10u;
            // 0x4d5b14: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5b10) {
            ctx->pc = 0x4D5B80u;
            goto label_4d5b80;
        }
    }
    ctx->pc = 0x4D5B18u;
label_4d5b18:
    // 0x4d5b18: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4d5b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d5b1c:
    // 0x4d5b1c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x4d5b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4d5b20:
    // 0x4d5b20: 0xc135704  jal         func_4D5C10
label_4d5b24:
    if (ctx->pc == 0x4D5B24u) {
        ctx->pc = 0x4D5B24u;
            // 0x4d5b24: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->pc = 0x4D5B28u;
        goto label_4d5b28;
    }
    ctx->pc = 0x4D5B20u;
    SET_GPR_U32(ctx, 31, 0x4D5B28u);
    ctx->pc = 0x4D5B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5B20u;
            // 0x4d5b24: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D5C10u;
    if (runtime->hasFunction(0x4D5C10u)) {
        auto targetFn = runtime->lookupFunction(0x4D5C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5B28u; }
        if (ctx->pc != 0x4D5B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D5C10_0x4d5c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5B28u; }
        if (ctx->pc != 0x4D5B28u) { return; }
    }
    ctx->pc = 0x4D5B28u;
label_4d5b28:
    // 0x4d5b28: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4d5b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4d5b2c:
    // 0x4d5b2c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4d5b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4d5b30:
    // 0x4d5b30: 0xc04cd60  jal         func_133580
label_4d5b34:
    if (ctx->pc == 0x4D5B34u) {
        ctx->pc = 0x4D5B34u;
            // 0x4d5b34: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4D5B38u;
        goto label_4d5b38;
    }
    ctx->pc = 0x4D5B30u;
    SET_GPR_U32(ctx, 31, 0x4D5B38u);
    ctx->pc = 0x4D5B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5B30u;
            // 0x4d5b34: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5B38u; }
        if (ctx->pc != 0x4D5B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5B38u; }
        if (ctx->pc != 0x4D5B38u) { return; }
    }
    ctx->pc = 0x4D5B38u;
label_4d5b38:
    // 0x4d5b38: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4d5b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d5b3c:
    // 0x4d5b3c: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x4d5b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_4d5b40:
    // 0x4d5b40: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4d5b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4d5b44:
    // 0x4d5b44: 0xc04e4a4  jal         func_139290
label_4d5b48:
    if (ctx->pc == 0x4D5B48u) {
        ctx->pc = 0x4D5B48u;
            // 0x4d5b48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D5B4Cu;
        goto label_4d5b4c;
    }
    ctx->pc = 0x4D5B44u;
    SET_GPR_U32(ctx, 31, 0x4D5B4Cu);
    ctx->pc = 0x4D5B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5B44u;
            // 0x4d5b48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5B4Cu; }
        if (ctx->pc != 0x4D5B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5B4Cu; }
        if (ctx->pc != 0x4D5B4Cu) { return; }
    }
    ctx->pc = 0x4D5B4Cu;
label_4d5b4c:
    // 0x4d5b4c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x4d5b4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4d5b50:
    // 0x4d5b50: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4d5b50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4d5b54:
    // 0x4d5b54: 0x320f809  jalr        $t9
label_4d5b58:
    if (ctx->pc == 0x4D5B58u) {
        ctx->pc = 0x4D5B58u;
            // 0x4d5b58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D5B5Cu;
        goto label_4d5b5c;
    }
    ctx->pc = 0x4D5B54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D5B5Cu);
        ctx->pc = 0x4D5B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5B54u;
            // 0x4d5b58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D5B5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D5B5Cu; }
            if (ctx->pc != 0x4D5B5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4D5B5Cu;
label_4d5b5c:
    // 0x4d5b5c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x4d5b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_4d5b60:
    // 0x4d5b60: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4d5b60u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4d5b64:
    // 0x4d5b64: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x4d5b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_4d5b68:
    // 0x4d5b68: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x4d5b68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4d5b6c:
    // 0x4d5b6c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4d5b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d5b70:
    // 0x4d5b70: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x4d5b70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_4d5b74:
    // 0x4d5b74: 0xc04cfcc  jal         func_133F30
label_4d5b78:
    if (ctx->pc == 0x4D5B78u) {
        ctx->pc = 0x4D5B78u;
            // 0x4d5b78: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D5B7Cu;
        goto label_4d5b7c;
    }
    ctx->pc = 0x4D5B74u;
    SET_GPR_U32(ctx, 31, 0x4D5B7Cu);
    ctx->pc = 0x4D5B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5B74u;
            // 0x4d5b78: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5B7Cu; }
        if (ctx->pc != 0x4D5B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5B7Cu; }
        if (ctx->pc != 0x4D5B7Cu) { return; }
    }
    ctx->pc = 0x4D5B7Cu;
label_4d5b7c:
    // 0x4d5b7c: 0x0  nop
    ctx->pc = 0x4d5b7cu;
    // NOP
label_4d5b80:
    // 0x4d5b80: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x4d5b80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_4d5b84:
    // 0x4d5b84: 0x2b7182b  sltu        $v1, $s5, $s7
    ctx->pc = 0x4d5b84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_4d5b88:
    // 0x4d5b88: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
label_4d5b8c:
    if (ctx->pc == 0x4D5B8Cu) {
        ctx->pc = 0x4D5B8Cu;
            // 0x4d5b8c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x4D5B90u;
        goto label_4d5b90;
    }
    ctx->pc = 0x4D5B88u;
    {
        const bool branch_taken_0x4d5b88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D5B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5B88u;
            // 0x4d5b8c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5b88) {
            ctx->pc = 0x4D5A74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d5a74;
        }
    }
    ctx->pc = 0x4D5B90u;
label_4d5b90:
    // 0x4d5b90: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d5b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d5b94:
    // 0x4d5b94: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x4d5b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4d5b98:
    // 0x4d5b98: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_4d5b9c:
    if (ctx->pc == 0x4D5B9Cu) {
        ctx->pc = 0x4D5BA0u;
        goto label_4d5ba0;
    }
    ctx->pc = 0x4D5B98u;
    {
        const bool branch_taken_0x4d5b98 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x4d5b98) {
            ctx->pc = 0x4D5BD4u;
            goto label_4d5bd4;
        }
    }
    ctx->pc = 0x4D5BA0u;
label_4d5ba0:
    // 0x4d5ba0: 0xc04e738  jal         func_139CE0
label_4d5ba4:
    if (ctx->pc == 0x4D5BA4u) {
        ctx->pc = 0x4D5BA4u;
            // 0x4d5ba4: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x4D5BA8u;
        goto label_4d5ba8;
    }
    ctx->pc = 0x4D5BA0u;
    SET_GPR_U32(ctx, 31, 0x4D5BA8u);
    ctx->pc = 0x4D5BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5BA0u;
            // 0x4d5ba4: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5BA8u; }
        if (ctx->pc != 0x4D5BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5BA8u; }
        if (ctx->pc != 0x4D5BA8u) { return; }
    }
    ctx->pc = 0x4D5BA8u;
label_4d5ba8:
    // 0x4d5ba8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d5bac:
    // 0x4d5bac: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4d5bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d5bb0:
    // 0x4d5bb0: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x4d5bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_4d5bb4:
    // 0x4d5bb4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4d5bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4d5bb8:
    // 0x4d5bb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4d5bb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d5bbc:
    // 0x4d5bbc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d5bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d5bc0:
    // 0x4d5bc0: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4d5bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4d5bc4:
    // 0x4d5bc4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d5bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d5bc8:
    // 0x4d5bc8: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x4d5bc8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_4d5bcc:
    // 0x4d5bcc: 0xc055d28  jal         func_1574A0
label_4d5bd0:
    if (ctx->pc == 0x4D5BD0u) {
        ctx->pc = 0x4D5BD0u;
            // 0x4d5bd0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D5BD4u;
        goto label_4d5bd4;
    }
    ctx->pc = 0x4D5BCCu;
    SET_GPR_U32(ctx, 31, 0x4D5BD4u);
    ctx->pc = 0x4D5BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5BCCu;
            // 0x4d5bd0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5BD4u; }
        if (ctx->pc != 0x4D5BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5BD4u; }
        if (ctx->pc != 0x4D5BD4u) { return; }
    }
    ctx->pc = 0x4D5BD4u;
label_4d5bd4:
    // 0x4d5bd4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4d5bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4d5bd8:
    // 0x4d5bd8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4d5bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4d5bdc:
    // 0x4d5bdc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4d5bdcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4d5be0:
    // 0x4d5be0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4d5be0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4d5be4:
    // 0x4d5be4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4d5be4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4d5be8:
    // 0x4d5be8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4d5be8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4d5bec:
    // 0x4d5bec: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4d5becu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4d5bf0:
    // 0x4d5bf0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4d5bf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4d5bf4:
    // 0x4d5bf4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4d5bf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d5bf8:
    // 0x4d5bf8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4d5bf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d5bfc:
    // 0x4d5bfc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4d5bfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d5c00:
    // 0x4d5c00: 0x3e00008  jr          $ra
label_4d5c04:
    if (ctx->pc == 0x4D5C04u) {
        ctx->pc = 0x4D5C04u;
            // 0x4d5c04: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x4D5C08u;
        goto label_4d5c08;
    }
    ctx->pc = 0x4D5C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D5C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5C00u;
            // 0x4d5c04: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D5C08u;
label_4d5c08:
    // 0x4d5c08: 0x0  nop
    ctx->pc = 0x4d5c08u;
    // NOP
label_4d5c0c:
    // 0x4d5c0c: 0x0  nop
    ctx->pc = 0x4d5c0cu;
    // NOP
}
