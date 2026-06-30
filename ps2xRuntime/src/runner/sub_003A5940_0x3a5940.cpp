#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A5940
// Address: 0x3a5940 - 0x3a5c30
void sub_003A5940_0x3a5940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5940_0x3a5940");
#endif

    switch (ctx->pc) {
        case 0x3a5940u: goto label_3a5940;
        case 0x3a5944u: goto label_3a5944;
        case 0x3a5948u: goto label_3a5948;
        case 0x3a594cu: goto label_3a594c;
        case 0x3a5950u: goto label_3a5950;
        case 0x3a5954u: goto label_3a5954;
        case 0x3a5958u: goto label_3a5958;
        case 0x3a595cu: goto label_3a595c;
        case 0x3a5960u: goto label_3a5960;
        case 0x3a5964u: goto label_3a5964;
        case 0x3a5968u: goto label_3a5968;
        case 0x3a596cu: goto label_3a596c;
        case 0x3a5970u: goto label_3a5970;
        case 0x3a5974u: goto label_3a5974;
        case 0x3a5978u: goto label_3a5978;
        case 0x3a597cu: goto label_3a597c;
        case 0x3a5980u: goto label_3a5980;
        case 0x3a5984u: goto label_3a5984;
        case 0x3a5988u: goto label_3a5988;
        case 0x3a598cu: goto label_3a598c;
        case 0x3a5990u: goto label_3a5990;
        case 0x3a5994u: goto label_3a5994;
        case 0x3a5998u: goto label_3a5998;
        case 0x3a599cu: goto label_3a599c;
        case 0x3a59a0u: goto label_3a59a0;
        case 0x3a59a4u: goto label_3a59a4;
        case 0x3a59a8u: goto label_3a59a8;
        case 0x3a59acu: goto label_3a59ac;
        case 0x3a59b0u: goto label_3a59b0;
        case 0x3a59b4u: goto label_3a59b4;
        case 0x3a59b8u: goto label_3a59b8;
        case 0x3a59bcu: goto label_3a59bc;
        case 0x3a59c0u: goto label_3a59c0;
        case 0x3a59c4u: goto label_3a59c4;
        case 0x3a59c8u: goto label_3a59c8;
        case 0x3a59ccu: goto label_3a59cc;
        case 0x3a59d0u: goto label_3a59d0;
        case 0x3a59d4u: goto label_3a59d4;
        case 0x3a59d8u: goto label_3a59d8;
        case 0x3a59dcu: goto label_3a59dc;
        case 0x3a59e0u: goto label_3a59e0;
        case 0x3a59e4u: goto label_3a59e4;
        case 0x3a59e8u: goto label_3a59e8;
        case 0x3a59ecu: goto label_3a59ec;
        case 0x3a59f0u: goto label_3a59f0;
        case 0x3a59f4u: goto label_3a59f4;
        case 0x3a59f8u: goto label_3a59f8;
        case 0x3a59fcu: goto label_3a59fc;
        case 0x3a5a00u: goto label_3a5a00;
        case 0x3a5a04u: goto label_3a5a04;
        case 0x3a5a08u: goto label_3a5a08;
        case 0x3a5a0cu: goto label_3a5a0c;
        case 0x3a5a10u: goto label_3a5a10;
        case 0x3a5a14u: goto label_3a5a14;
        case 0x3a5a18u: goto label_3a5a18;
        case 0x3a5a1cu: goto label_3a5a1c;
        case 0x3a5a20u: goto label_3a5a20;
        case 0x3a5a24u: goto label_3a5a24;
        case 0x3a5a28u: goto label_3a5a28;
        case 0x3a5a2cu: goto label_3a5a2c;
        case 0x3a5a30u: goto label_3a5a30;
        case 0x3a5a34u: goto label_3a5a34;
        case 0x3a5a38u: goto label_3a5a38;
        case 0x3a5a3cu: goto label_3a5a3c;
        case 0x3a5a40u: goto label_3a5a40;
        case 0x3a5a44u: goto label_3a5a44;
        case 0x3a5a48u: goto label_3a5a48;
        case 0x3a5a4cu: goto label_3a5a4c;
        case 0x3a5a50u: goto label_3a5a50;
        case 0x3a5a54u: goto label_3a5a54;
        case 0x3a5a58u: goto label_3a5a58;
        case 0x3a5a5cu: goto label_3a5a5c;
        case 0x3a5a60u: goto label_3a5a60;
        case 0x3a5a64u: goto label_3a5a64;
        case 0x3a5a68u: goto label_3a5a68;
        case 0x3a5a6cu: goto label_3a5a6c;
        case 0x3a5a70u: goto label_3a5a70;
        case 0x3a5a74u: goto label_3a5a74;
        case 0x3a5a78u: goto label_3a5a78;
        case 0x3a5a7cu: goto label_3a5a7c;
        case 0x3a5a80u: goto label_3a5a80;
        case 0x3a5a84u: goto label_3a5a84;
        case 0x3a5a88u: goto label_3a5a88;
        case 0x3a5a8cu: goto label_3a5a8c;
        case 0x3a5a90u: goto label_3a5a90;
        case 0x3a5a94u: goto label_3a5a94;
        case 0x3a5a98u: goto label_3a5a98;
        case 0x3a5a9cu: goto label_3a5a9c;
        case 0x3a5aa0u: goto label_3a5aa0;
        case 0x3a5aa4u: goto label_3a5aa4;
        case 0x3a5aa8u: goto label_3a5aa8;
        case 0x3a5aacu: goto label_3a5aac;
        case 0x3a5ab0u: goto label_3a5ab0;
        case 0x3a5ab4u: goto label_3a5ab4;
        case 0x3a5ab8u: goto label_3a5ab8;
        case 0x3a5abcu: goto label_3a5abc;
        case 0x3a5ac0u: goto label_3a5ac0;
        case 0x3a5ac4u: goto label_3a5ac4;
        case 0x3a5ac8u: goto label_3a5ac8;
        case 0x3a5accu: goto label_3a5acc;
        case 0x3a5ad0u: goto label_3a5ad0;
        case 0x3a5ad4u: goto label_3a5ad4;
        case 0x3a5ad8u: goto label_3a5ad8;
        case 0x3a5adcu: goto label_3a5adc;
        case 0x3a5ae0u: goto label_3a5ae0;
        case 0x3a5ae4u: goto label_3a5ae4;
        case 0x3a5ae8u: goto label_3a5ae8;
        case 0x3a5aecu: goto label_3a5aec;
        case 0x3a5af0u: goto label_3a5af0;
        case 0x3a5af4u: goto label_3a5af4;
        case 0x3a5af8u: goto label_3a5af8;
        case 0x3a5afcu: goto label_3a5afc;
        case 0x3a5b00u: goto label_3a5b00;
        case 0x3a5b04u: goto label_3a5b04;
        case 0x3a5b08u: goto label_3a5b08;
        case 0x3a5b0cu: goto label_3a5b0c;
        case 0x3a5b10u: goto label_3a5b10;
        case 0x3a5b14u: goto label_3a5b14;
        case 0x3a5b18u: goto label_3a5b18;
        case 0x3a5b1cu: goto label_3a5b1c;
        case 0x3a5b20u: goto label_3a5b20;
        case 0x3a5b24u: goto label_3a5b24;
        case 0x3a5b28u: goto label_3a5b28;
        case 0x3a5b2cu: goto label_3a5b2c;
        case 0x3a5b30u: goto label_3a5b30;
        case 0x3a5b34u: goto label_3a5b34;
        case 0x3a5b38u: goto label_3a5b38;
        case 0x3a5b3cu: goto label_3a5b3c;
        case 0x3a5b40u: goto label_3a5b40;
        case 0x3a5b44u: goto label_3a5b44;
        case 0x3a5b48u: goto label_3a5b48;
        case 0x3a5b4cu: goto label_3a5b4c;
        case 0x3a5b50u: goto label_3a5b50;
        case 0x3a5b54u: goto label_3a5b54;
        case 0x3a5b58u: goto label_3a5b58;
        case 0x3a5b5cu: goto label_3a5b5c;
        case 0x3a5b60u: goto label_3a5b60;
        case 0x3a5b64u: goto label_3a5b64;
        case 0x3a5b68u: goto label_3a5b68;
        case 0x3a5b6cu: goto label_3a5b6c;
        case 0x3a5b70u: goto label_3a5b70;
        case 0x3a5b74u: goto label_3a5b74;
        case 0x3a5b78u: goto label_3a5b78;
        case 0x3a5b7cu: goto label_3a5b7c;
        case 0x3a5b80u: goto label_3a5b80;
        case 0x3a5b84u: goto label_3a5b84;
        case 0x3a5b88u: goto label_3a5b88;
        case 0x3a5b8cu: goto label_3a5b8c;
        case 0x3a5b90u: goto label_3a5b90;
        case 0x3a5b94u: goto label_3a5b94;
        case 0x3a5b98u: goto label_3a5b98;
        case 0x3a5b9cu: goto label_3a5b9c;
        case 0x3a5ba0u: goto label_3a5ba0;
        case 0x3a5ba4u: goto label_3a5ba4;
        case 0x3a5ba8u: goto label_3a5ba8;
        case 0x3a5bacu: goto label_3a5bac;
        case 0x3a5bb0u: goto label_3a5bb0;
        case 0x3a5bb4u: goto label_3a5bb4;
        case 0x3a5bb8u: goto label_3a5bb8;
        case 0x3a5bbcu: goto label_3a5bbc;
        case 0x3a5bc0u: goto label_3a5bc0;
        case 0x3a5bc4u: goto label_3a5bc4;
        case 0x3a5bc8u: goto label_3a5bc8;
        case 0x3a5bccu: goto label_3a5bcc;
        case 0x3a5bd0u: goto label_3a5bd0;
        case 0x3a5bd4u: goto label_3a5bd4;
        case 0x3a5bd8u: goto label_3a5bd8;
        case 0x3a5bdcu: goto label_3a5bdc;
        case 0x3a5be0u: goto label_3a5be0;
        case 0x3a5be4u: goto label_3a5be4;
        case 0x3a5be8u: goto label_3a5be8;
        case 0x3a5becu: goto label_3a5bec;
        case 0x3a5bf0u: goto label_3a5bf0;
        case 0x3a5bf4u: goto label_3a5bf4;
        case 0x3a5bf8u: goto label_3a5bf8;
        case 0x3a5bfcu: goto label_3a5bfc;
        case 0x3a5c00u: goto label_3a5c00;
        case 0x3a5c04u: goto label_3a5c04;
        case 0x3a5c08u: goto label_3a5c08;
        case 0x3a5c0cu: goto label_3a5c0c;
        case 0x3a5c10u: goto label_3a5c10;
        case 0x3a5c14u: goto label_3a5c14;
        case 0x3a5c18u: goto label_3a5c18;
        case 0x3a5c1cu: goto label_3a5c1c;
        case 0x3a5c20u: goto label_3a5c20;
        case 0x3a5c24u: goto label_3a5c24;
        case 0x3a5c28u: goto label_3a5c28;
        case 0x3a5c2cu: goto label_3a5c2c;
        default: break;
    }

    ctx->pc = 0x3a5940u;

label_3a5940:
    // 0x3a5940: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3a5940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3a5944:
    // 0x3a5944: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3a5944u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3a5948:
    // 0x3a5948: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3a5948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3a594c:
    // 0x3a594c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3a594cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3a5950:
    // 0x3a5950: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3a5950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3a5954:
    // 0x3a5954: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3a5954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3a5958:
    // 0x3a5958: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3a5958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3a595c:
    // 0x3a595c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3a595cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3a5960:
    // 0x3a5960: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3a5960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3a5964:
    // 0x3a5964: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3a5964u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a5968:
    // 0x3a5968: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3a5968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3a596c:
    // 0x3a596c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3a596cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_3a5970:
    // 0x3a5970: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a5970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3a5974:
    // 0x3a5974: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x3a5974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
label_3a5978:
    // 0x3a5978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a5978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a597c:
    // 0x3a597c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3a597cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3a5980:
    // 0x3a5980: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a5980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a5984:
    // 0x3a5984: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x3a5984u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a5988:
    // 0x3a5988: 0x26b0000c  addiu       $s0, $s5, 0xC
    ctx->pc = 0x3a5988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_3a598c:
    // 0x3a598c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3a598cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3a5990:
    // 0x3a5990: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x3a5990u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_3a5994:
    // 0x3a5994: 0x90e611a1  lbu         $a2, 0x11A1($a3)
    ctx->pc = 0x3a5994u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4513)));
label_3a5998:
    // 0x3a5998: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3a5998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3a599c:
    // 0x3a599c: 0x8c680cb4  lw          $t0, 0xCB4($v1)
    ctx->pc = 0x3a599cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_3a59a0:
    // 0x3a59a0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3a59a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3a59a4:
    // 0x3a59a4: 0x8c71078c  lw          $s1, 0x78C($v1)
    ctx->pc = 0x3a59a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1932)));
label_3a59a8:
    // 0x3a59a8: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x3a59a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_3a59ac:
    // 0x3a59ac: 0x2496003c  addiu       $s6, $a0, 0x3C
    ctx->pc = 0x3a59acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
label_3a59b0:
    // 0x3a59b0: 0x29040008  slti        $a0, $t0, 0x8
    ctx->pc = 0x3a59b0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
label_3a59b4:
    // 0x3a59b4: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x3a59b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_3a59b8:
    // 0x3a59b8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3a59b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3a59bc:
    // 0x3a59bc: 0x10c00078  beqz        $a2, . + 4 + (0x78 << 2)
label_3a59c0:
    if (ctx->pc == 0x3A59C0u) {
        ctx->pc = 0x3A59C0u;
            // 0x3a59c0: 0x7fa400a0  sq          $a0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
        ctx->pc = 0x3A59C4u;
        goto label_3a59c4;
    }
    ctx->pc = 0x3A59BCu;
    {
        const bool branch_taken_0x3a59bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A59C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A59BCu;
            // 0x3a59c0: 0x7fa400a0  sq          $a0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a59bc) {
            ctx->pc = 0x3A5BA0u;
            goto label_3a5ba0;
        }
    }
    ctx->pc = 0x3A59C4u;
label_3a59c4:
    // 0x3a59c4: 0x8ce40da0  lw          $a0, 0xDA0($a3)
    ctx->pc = 0x3a59c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3488)));
label_3a59c8:
    // 0x3a59c8: 0x30840010  andi        $a0, $a0, 0x10
    ctx->pc = 0x3a59c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_3a59cc:
    // 0x3a59cc: 0x54800075  bnel        $a0, $zero, . + 4 + (0x75 << 2)
label_3a59d0:
    if (ctx->pc == 0x3A59D0u) {
        ctx->pc = 0x3A59D0u;
            // 0x3a59d0: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x3A59D4u;
        goto label_3a59d4;
    }
    ctx->pc = 0x3A59CCu;
    {
        const bool branch_taken_0x3a59cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a59cc) {
            ctx->pc = 0x3A59D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A59CCu;
            // 0x3a59d0: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A5BA4u;
            goto label_3a5ba4;
        }
    }
    ctx->pc = 0x3A59D4u;
label_3a59d4:
    // 0x3a59d4: 0x8ea60008  lw          $a2, 0x8($s5)
    ctx->pc = 0x3a59d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_3a59d8:
    // 0x3a59d8: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x3a59d8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a59dc:
    // 0x3a59dc: 0x3c62021  addu        $a0, $fp, $a2
    ctx->pc = 0x3a59dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
label_3a59e0:
    // 0x3a59e0: 0x908400e4  lbu         $a0, 0xE4($a0)
    ctx->pc = 0x3a59e0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 228)));
label_3a59e4:
    // 0x3a59e4: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x3a59e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_3a59e8:
    // 0x3a59e8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3a59e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3a59ec:
    // 0x3a59ec: 0x1480006c  bnez        $a0, . + 4 + (0x6C << 2)
label_3a59f0:
    if (ctx->pc == 0x3A59F0u) {
        ctx->pc = 0x3A59F4u;
        goto label_3a59f4;
    }
    ctx->pc = 0x3A59ECu;
    {
        const bool branch_taken_0x3a59ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a59ec) {
            ctx->pc = 0x3A5BA0u;
            goto label_3a5ba0;
        }
    }
    ctx->pc = 0x3A59F4u;
label_3a59f4:
    // 0x3a59f4: 0x8ce40d78  lw          $a0, 0xD78($a3)
    ctx->pc = 0x3a59f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3448)));
label_3a59f8:
    // 0x3a59f8: 0x8c97003c  lw          $s7, 0x3C($a0)
    ctx->pc = 0x3a59f8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_3a59fc:
    // 0x3a59fc: 0x237082a  slt         $at, $s1, $s7
    ctx->pc = 0x3a59fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_3a5a00:
    // 0x3a5a00: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
label_3a5a04:
    if (ctx->pc == 0x3A5A04u) {
        ctx->pc = 0x3A5A04u;
            // 0x3a5a04: 0x8cc60110  lw          $a2, 0x110($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 272)));
        ctx->pc = 0x3A5A08u;
        goto label_3a5a08;
    }
    ctx->pc = 0x3A5A00u;
    {
        const bool branch_taken_0x3a5a00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5a00) {
            ctx->pc = 0x3A5A04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5A00u;
            // 0x3a5a04: 0x8cc60110  lw          $a2, 0x110($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A5A10u;
            goto label_3a5a10;
        }
    }
    ctx->pc = 0x3A5A08u;
label_3a5a08:
    // 0x3a5a08: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x3a5a08u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a5a0c:
    // 0x3a5a0c: 0x8cc60110  lw          $a2, 0x110($a2)
    ctx->pc = 0x3a5a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 272)));
label_3a5a10:
    // 0x3a5a10: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3a5a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a5a14:
    // 0x3a5a14: 0x8614000c  lh          $s4, 0xC($s0)
    ctx->pc = 0x3a5a14u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3a5a18:
    // 0x3a5a18: 0x8613000e  lh          $s3, 0xE($s0)
    ctx->pc = 0x3a5a18u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_3a5a1c:
    // 0x3a5a1c: 0x10c4000e  beq         $a2, $a0, . + 4 + (0xE << 2)
label_3a5a20:
    if (ctx->pc == 0x3A5A20u) {
        ctx->pc = 0x3A5A20u;
            // 0x3a5a20: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A5A24u;
        goto label_3a5a24;
    }
    ctx->pc = 0x3A5A1Cu;
    {
        const bool branch_taken_0x3a5a1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x3A5A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5A1Cu;
            // 0x3a5a20: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5a1c) {
            ctx->pc = 0x3A5A58u;
            goto label_3a5a58;
        }
    }
    ctx->pc = 0x3A5A24u;
label_3a5a24:
    // 0x3a5a24: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a5a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a5a28:
    // 0x3a5a28: 0x50c4000c  beql        $a2, $a0, . + 4 + (0xC << 2)
label_3a5a2c:
    if (ctx->pc == 0x3A5A2Cu) {
        ctx->pc = 0x3A5A2Cu;
            // 0x3a5a2c: 0x30a40001  andi        $a0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x3A5A30u;
        goto label_3a5a30;
    }
    ctx->pc = 0x3A5A28u;
    {
        const bool branch_taken_0x3a5a28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x3a5a28) {
            ctx->pc = 0x3A5A2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5A28u;
            // 0x3a5a2c: 0x30a40001  andi        $a0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A5A5Cu;
            goto label_3a5a5c;
        }
    }
    ctx->pc = 0x3A5A30u;
label_3a5a30:
    // 0x3a5a30: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3a5a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a5a34:
    // 0x3a5a34: 0x50c40003  beql        $a2, $a0, . + 4 + (0x3 << 2)
label_3a5a38:
    if (ctx->pc == 0x3A5A38u) {
        ctx->pc = 0x3A5A38u;
            // 0x3a5a38: 0x30a40001  andi        $a0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x3A5A3Cu;
        goto label_3a5a3c;
    }
    ctx->pc = 0x3A5A34u;
    {
        const bool branch_taken_0x3a5a34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x3a5a34) {
            ctx->pc = 0x3A5A38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5A34u;
            // 0x3a5a38: 0x30a40001  andi        $a0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A5A44u;
            goto label_3a5a44;
        }
    }
    ctx->pc = 0x3A5A3Cu;
label_3a5a3c:
    // 0x3a5a3c: 0x10000012  b           . + 4 + (0x12 << 2)
label_3a5a40:
    if (ctx->pc == 0x3A5A40u) {
        ctx->pc = 0x3A5A40u;
            // 0x3a5a40: 0x8c630960  lw          $v1, 0x960($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2400)));
        ctx->pc = 0x3A5A44u;
        goto label_3a5a44;
    }
    ctx->pc = 0x3A5A3Cu;
    {
        const bool branch_taken_0x3a5a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5A3Cu;
            // 0x3a5a40: 0x8c630960  lw          $v1, 0x960($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5a3c) {
            ctx->pc = 0x3A5A88u;
            goto label_3a5a88;
        }
    }
    ctx->pc = 0x3A5A44u;
label_3a5a44:
    // 0x3a5a44: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_3a5a48:
    if (ctx->pc == 0x3A5A48u) {
        ctx->pc = 0x3A5A4Cu;
        goto label_3a5a4c;
    }
    ctx->pc = 0x3A5A44u;
    {
        const bool branch_taken_0x3a5a44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5a44) {
            ctx->pc = 0x3A5A84u;
            goto label_3a5a84;
        }
    }
    ctx->pc = 0x3A5A4Cu;
label_3a5a4c:
    // 0x3a5a4c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x3a5a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3a5a50:
    // 0x3a5a50: 0x1000000c  b           . + 4 + (0xC << 2)
label_3a5a54:
    if (ctx->pc == 0x3A5A54u) {
        ctx->pc = 0x3A5A54u;
            // 0x3a5a54: 0x2649821  addu        $s3, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->pc = 0x3A5A58u;
        goto label_3a5a58;
    }
    ctx->pc = 0x3A5A50u;
    {
        const bool branch_taken_0x3a5a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5A50u;
            // 0x3a5a54: 0x2649821  addu        $s3, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5a50) {
            ctx->pc = 0x3A5A84u;
            goto label_3a5a84;
        }
    }
    ctx->pc = 0x3A5A58u;
label_3a5a58:
    // 0x3a5a58: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x3a5a58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_3a5a5c:
    // 0x3a5a5c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3a5a60:
    if (ctx->pc == 0x3A5A60u) {
        ctx->pc = 0x3A5A60u;
            // 0x3a5a60: 0x30a40002  andi        $a0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x3A5A64u;
        goto label_3a5a64;
    }
    ctx->pc = 0x3A5A5Cu;
    {
        const bool branch_taken_0x3a5a5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5a5c) {
            ctx->pc = 0x3A5A60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5A5Cu;
            // 0x3a5a60: 0x30a40002  andi        $a0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A5A74u;
            goto label_3a5a74;
        }
    }
    ctx->pc = 0x3A5A64u;
label_3a5a64:
    // 0x3a5a64: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3a5a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3a5a68:
    // 0x3a5a68: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x3a5a68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a5a6c:
    // 0x3a5a6c: 0x284a021  addu        $s4, $s4, $a0
    ctx->pc = 0x3a5a6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_3a5a70:
    // 0x3a5a70: 0x30a40002  andi        $a0, $a1, 0x2
    ctx->pc = 0x3a5a70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_3a5a74:
    // 0x3a5a74: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3a5a78:
    if (ctx->pc == 0x3A5A78u) {
        ctx->pc = 0x3A5A7Cu;
        goto label_3a5a7c;
    }
    ctx->pc = 0x3A5A74u;
    {
        const bool branch_taken_0x3a5a74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5a74) {
            ctx->pc = 0x3A5A84u;
            goto label_3a5a84;
        }
    }
    ctx->pc = 0x3A5A7Cu;
label_3a5a7c:
    // 0x3a5a7c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x3a5a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3a5a80:
    // 0x3a5a80: 0x2649821  addu        $s3, $s3, $a0
    ctx->pc = 0x3a5a80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_3a5a84:
    // 0x3a5a84: 0x8c630960  lw          $v1, 0x960($v1)
    ctx->pc = 0x3a5a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2400)));
label_3a5a88:
    // 0x3a5a88: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x3a5a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_3a5a8c:
    // 0x3a5a8c: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_3a5a90:
    if (ctx->pc == 0x3A5A90u) {
        ctx->pc = 0x3A5A94u;
        goto label_3a5a94;
    }
    ctx->pc = 0x3A5A8Cu;
    {
        const bool branch_taken_0x3a5a8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5a8c) {
            ctx->pc = 0x3A5B1Cu;
            goto label_3a5b1c;
        }
    }
    ctx->pc = 0x3A5A94u;
label_3a5a94:
    // 0x3a5a94: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a5a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a5a98:
    // 0x3a5a98: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3a5a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3a5a9c:
    // 0x3a5a9c: 0xc0506ac  jal         func_141AB0
label_3a5aa0:
    if (ctx->pc == 0x3A5AA0u) {
        ctx->pc = 0x3A5AA0u;
            // 0x3a5aa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A5AA4u;
        goto label_3a5aa4;
    }
    ctx->pc = 0x3A5A9Cu;
    SET_GPR_U32(ctx, 31, 0x3A5AA4u);
    ctx->pc = 0x3A5AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5A9Cu;
            // 0x3a5aa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5AA4u; }
        if (ctx->pc != 0x3A5AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5AA4u; }
        if (ctx->pc != 0x3A5AA4u) { return; }
    }
    ctx->pc = 0x3A5AA4u;
label_3a5aa4:
    // 0x3a5aa4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a5aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3a5aa8:
    // 0x3a5aa8: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3a5aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3a5aac:
    // 0x3a5aac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a5aacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a5ab0:
    // 0x3a5ab0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3a5ab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3a5ab4:
    // 0x3a5ab4: 0x320f809  jalr        $t9
label_3a5ab8:
    if (ctx->pc == 0x3A5AB8u) {
        ctx->pc = 0x3A5AB8u;
            // 0x3a5ab8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3A5ABCu;
        goto label_3a5abc;
    }
    ctx->pc = 0x3A5AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A5ABCu);
        ctx->pc = 0x3A5AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5AB4u;
            // 0x3a5ab8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A5ABCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A5ABCu; }
            if (ctx->pc != 0x3A5ABCu) { return; }
        }
        }
    }
    ctx->pc = 0x3A5ABCu;
label_3a5abc:
    // 0x3a5abc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3a5abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3a5ac0:
    // 0x3a5ac0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3a5ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3a5ac4:
    // 0x3a5ac4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_3a5ac8:
    if (ctx->pc == 0x3A5AC8u) {
        ctx->pc = 0x3A5AC8u;
            // 0x3a5ac8: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A5ACCu;
        goto label_3a5acc;
    }
    ctx->pc = 0x3A5AC4u;
    {
        const bool branch_taken_0x3a5ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5ac4) {
            ctx->pc = 0x3A5AC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5AC4u;
            // 0x3a5ac8: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A5AECu;
            goto label_3a5aec;
        }
    }
    ctx->pc = 0x3A5ACCu;
label_3a5acc:
    // 0x3a5acc: 0x8e080018  lw          $t0, 0x18($s0)
    ctx->pc = 0x3a5accu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3a5ad0:
    // 0x3a5ad0: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x3a5ad0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3a5ad4:
    // 0x3a5ad4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a5ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a5ad8:
    // 0x3a5ad8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3a5ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a5adc:
    // 0x3a5adc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3a5adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a5ae0:
    // 0x3a5ae0: 0xc0e98e8  jal         func_3A63A0
label_3a5ae4:
    if (ctx->pc == 0x3A5AE4u) {
        ctx->pc = 0x3A5AE4u;
            // 0x3a5ae4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A5AE8u;
        goto label_3a5ae8;
    }
    ctx->pc = 0x3A5AE0u;
    SET_GPR_U32(ctx, 31, 0x3A5AE8u);
    ctx->pc = 0x3A5AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5AE0u;
            // 0x3a5ae4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A63A0u;
    if (runtime->hasFunction(0x3A63A0u)) {
        auto targetFn = runtime->lookupFunction(0x3A63A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5AE8u; }
        if (ctx->pc != 0x3A5AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A63A0_0x3a63a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5AE8u; }
        if (ctx->pc != 0x3A5AE8u) { return; }
    }
    ctx->pc = 0x3A5AE8u;
label_3a5ae8:
    // 0x3a5ae8: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x3a5ae8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3a5aec:
    // 0x3a5aec: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x3a5aecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a5af0:
    // 0x3a5af0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a5af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a5af4:
    // 0x3a5af4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3a5af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a5af8:
    // 0x3a5af8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3a5af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a5afc:
    // 0x3a5afc: 0xc0e970c  jal         func_3A5C30
label_3a5b00:
    if (ctx->pc == 0x3A5B00u) {
        ctx->pc = 0x3A5B00u;
            // 0x3a5b00: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A5B04u;
        goto label_3a5b04;
    }
    ctx->pc = 0x3A5AFCu;
    SET_GPR_U32(ctx, 31, 0x3A5B04u);
    ctx->pc = 0x3A5B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5AFCu;
            // 0x3a5b00: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A5C30u;
    if (runtime->hasFunction(0x3A5C30u)) {
        auto targetFn = runtime->lookupFunction(0x3A5C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5B04u; }
        if (ctx->pc != 0x3A5B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A5C30_0x3a5c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5B04u; }
        if (ctx->pc != 0x3A5B04u) { return; }
    }
    ctx->pc = 0x3A5B04u;
label_3a5b04:
    // 0x3a5b04: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a5b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3a5b08:
    // 0x3a5b08: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3a5b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3a5b0c:
    // 0x3a5b0c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a5b0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a5b10:
    // 0x3a5b10: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3a5b10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3a5b14:
    // 0x3a5b14: 0x320f809  jalr        $t9
label_3a5b18:
    if (ctx->pc == 0x3A5B18u) {
        ctx->pc = 0x3A5B1Cu;
        goto label_3a5b1c;
    }
    ctx->pc = 0x3A5B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A5B1Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A5B1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A5B1Cu; }
            if (ctx->pc != 0x3A5B1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3A5B1Cu;
label_3a5b1c:
    // 0x3a5b1c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3a5b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3a5b20:
    // 0x3a5b20: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3a5b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3a5b24:
    // 0x3a5b24: 0x8c630960  lw          $v1, 0x960($v1)
    ctx->pc = 0x3a5b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2400)));
label_3a5b28:
    // 0x3a5b28: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3a5b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3a5b2c:
    // 0x3a5b2c: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_3a5b30:
    if (ctx->pc == 0x3A5B30u) {
        ctx->pc = 0x3A5B34u;
        goto label_3a5b34;
    }
    ctx->pc = 0x3A5B2Cu;
    {
        const bool branch_taken_0x3a5b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5b2c) {
            ctx->pc = 0x3A5BA0u;
            goto label_3a5ba0;
        }
    }
    ctx->pc = 0x3A5B34u;
label_3a5b34:
    // 0x3a5b34: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x3a5b34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3a5b38:
    // 0x3a5b38: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_3a5b3c:
    if (ctx->pc == 0x3A5B3Cu) {
        ctx->pc = 0x3A5B40u;
        goto label_3a5b40;
    }
    ctx->pc = 0x3A5B38u;
    {
        const bool branch_taken_0x3a5b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5b38) {
            ctx->pc = 0x3A5BA0u;
            goto label_3a5ba0;
        }
    }
    ctx->pc = 0x3A5B40u;
label_3a5b40:
    // 0x3a5b40: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a5b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a5b44:
    // 0x3a5b44: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3a5b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3a5b48:
    // 0x3a5b48: 0xc0506ac  jal         func_141AB0
label_3a5b4c:
    if (ctx->pc == 0x3A5B4Cu) {
        ctx->pc = 0x3A5B4Cu;
            // 0x3a5b4c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3A5B50u;
        goto label_3a5b50;
    }
    ctx->pc = 0x3A5B48u;
    SET_GPR_U32(ctx, 31, 0x3A5B50u);
    ctx->pc = 0x3A5B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5B48u;
            // 0x3a5b4c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5B50u; }
        if (ctx->pc != 0x3A5B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5B50u; }
        if (ctx->pc != 0x3A5B50u) { return; }
    }
    ctx->pc = 0x3A5B50u;
label_3a5b50:
    // 0x3a5b50: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a5b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3a5b54:
    // 0x3a5b54: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3a5b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3a5b58:
    // 0x3a5b58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a5b58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a5b5c:
    // 0x3a5b5c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3a5b5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3a5b60:
    // 0x3a5b60: 0x320f809  jalr        $t9
label_3a5b64:
    if (ctx->pc == 0x3A5B64u) {
        ctx->pc = 0x3A5B64u;
            // 0x3a5b64: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3A5B68u;
        goto label_3a5b68;
    }
    ctx->pc = 0x3A5B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A5B68u);
        ctx->pc = 0x3A5B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5B60u;
            // 0x3a5b64: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A5B68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A5B68u; }
            if (ctx->pc != 0x3A5B68u) { return; }
        }
        }
    }
    ctx->pc = 0x3A5B68u;
label_3a5b68:
    // 0x3a5b68: 0x8ec80004  lw          $t0, 0x4($s6)
    ctx->pc = 0x3a5b68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_3a5b6c:
    // 0x3a5b6c: 0xc6cc0008  lwc1        $f12, 0x8($s6)
    ctx->pc = 0x3a5b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3a5b70:
    // 0x3a5b70: 0x8ec90000  lw          $t1, 0x0($s6)
    ctx->pc = 0x3a5b70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3a5b74:
    // 0x3a5b74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a5b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a5b78:
    // 0x3a5b78: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3a5b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a5b7c:
    // 0x3a5b7c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3a5b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a5b80:
    // 0x3a5b80: 0xc0e9980  jal         func_3A6600
label_3a5b84:
    if (ctx->pc == 0x3A5B84u) {
        ctx->pc = 0x3A5B84u;
            // 0x3a5b84: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A5B88u;
        goto label_3a5b88;
    }
    ctx->pc = 0x3A5B80u;
    SET_GPR_U32(ctx, 31, 0x3A5B88u);
    ctx->pc = 0x3A5B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5B80u;
            // 0x3a5b84: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A6600u;
    if (runtime->hasFunction(0x3A6600u)) {
        auto targetFn = runtime->lookupFunction(0x3A6600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5B88u; }
        if (ctx->pc != 0x3A5B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A6600_0x3a6600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5B88u; }
        if (ctx->pc != 0x3A5B88u) { return; }
    }
    ctx->pc = 0x3A5B88u;
label_3a5b88:
    // 0x3a5b88: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a5b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3a5b8c:
    // 0x3a5b8c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3a5b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3a5b90:
    // 0x3a5b90: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a5b90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a5b94:
    // 0x3a5b94: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3a5b94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3a5b98:
    // 0x3a5b98: 0x320f809  jalr        $t9
label_3a5b9c:
    if (ctx->pc == 0x3A5B9Cu) {
        ctx->pc = 0x3A5BA0u;
        goto label_3a5ba0;
    }
    ctx->pc = 0x3A5B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A5BA0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A5BA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A5BA0u; }
            if (ctx->pc != 0x3A5BA0u) { return; }
        }
        }
    }
    ctx->pc = 0x3A5BA0u;
label_3a5ba0:
    // 0x3a5ba0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3a5ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3a5ba4:
    // 0x3a5ba4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3a5ba4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3a5ba8:
    // 0x3a5ba8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3a5ba8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3a5bac:
    // 0x3a5bac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3a5bacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3a5bb0:
    // 0x3a5bb0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3a5bb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a5bb4:
    // 0x3a5bb4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3a5bb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a5bb8:
    // 0x3a5bb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3a5bb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a5bbc:
    // 0x3a5bbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a5bbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a5bc0:
    // 0x3a5bc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a5bc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a5bc4:
    // 0x3a5bc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a5bc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a5bc8:
    // 0x3a5bc8: 0x3e00008  jr          $ra
label_3a5bcc:
    if (ctx->pc == 0x3A5BCCu) {
        ctx->pc = 0x3A5BCCu;
            // 0x3a5bcc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3A5BD0u;
        goto label_3a5bd0;
    }
    ctx->pc = 0x3A5BC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5BC8u;
            // 0x3a5bcc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A5BD0u;
label_3a5bd0:
    // 0x3a5bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a5bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3a5bd4:
    // 0x3a5bd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a5bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3a5bd8:
    // 0x3a5bd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a5bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a5bdc:
    // 0x3a5bdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a5bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a5be0:
    // 0x3a5be0: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x3a5be0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_3a5be4:
    // 0x3a5be4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_3a5be8:
    if (ctx->pc == 0x3A5BE8u) {
        ctx->pc = 0x3A5BE8u;
            // 0x3a5be8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A5BECu;
        goto label_3a5bec;
    }
    ctx->pc = 0x3A5BE4u;
    {
        const bool branch_taken_0x3a5be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5BE4u;
            // 0x3a5be8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5be4) {
            ctx->pc = 0x3A5C18u;
            goto label_3a5c18;
        }
    }
    ctx->pc = 0x3A5BECu;
label_3a5bec:
    // 0x3a5bec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3a5becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a5bf0:
    // 0x3a5bf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a5bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a5bf4:
    // 0x3a5bf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a5bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a5bf8:
    // 0x3a5bf8: 0xc0e9650  jal         func_3A5940
label_3a5bfc:
    if (ctx->pc == 0x3A5BFCu) {
        ctx->pc = 0x3A5BFCu;
            // 0x3a5bfc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A5C00u;
        goto label_3a5c00;
    }
    ctx->pc = 0x3A5BF8u;
    SET_GPR_U32(ctx, 31, 0x3A5C00u);
    ctx->pc = 0x3A5BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5BF8u;
            // 0x3a5bfc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A5940u;
    goto label_3a5940;
    ctx->pc = 0x3A5C00u;
label_3a5c00:
    // 0x3a5c00: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3a5c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3a5c04:
    // 0x3a5c04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3a5c04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3a5c08:
    // 0x3a5c08: 0x8c630110  lw          $v1, 0x110($v1)
    ctx->pc = 0x3a5c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_3a5c0c:
    // 0x3a5c0c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x3a5c0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3a5c10:
    // 0x3a5c10: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_3a5c14:
    if (ctx->pc == 0x3A5C14u) {
        ctx->pc = 0x3A5C14u;
            // 0x3a5c14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A5C18u;
        goto label_3a5c18;
    }
    ctx->pc = 0x3A5C10u;
    {
        const bool branch_taken_0x3a5c10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5c10) {
            ctx->pc = 0x3A5C14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5C10u;
            // 0x3a5c14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A5BF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a5bf4;
        }
    }
    ctx->pc = 0x3A5C18u;
label_3a5c18:
    // 0x3a5c18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a5c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3a5c1c:
    // 0x3a5c1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a5c1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a5c20:
    // 0x3a5c20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a5c20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a5c24:
    // 0x3a5c24: 0x3e00008  jr          $ra
label_3a5c28:
    if (ctx->pc == 0x3A5C28u) {
        ctx->pc = 0x3A5C28u;
            // 0x3a5c28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3A5C2Cu;
        goto label_3a5c2c;
    }
    ctx->pc = 0x3A5C24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5C24u;
            // 0x3a5c28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A5C2Cu;
label_3a5c2c:
    // 0x3a5c2c: 0x0  nop
    ctx->pc = 0x3a5c2cu;
    // NOP
}
