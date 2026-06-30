#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00221AF0
// Address: 0x221af0 - 0x221e70
void sub_00221AF0_0x221af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221AF0_0x221af0");
#endif

    switch (ctx->pc) {
        case 0x221b00u: goto label_221b00;
        case 0x221ba8u: goto label_221ba8;
        case 0x221dc4u: goto label_221dc4;
        default: break;
    }

    ctx->pc = 0x221af0u;

    // 0x221af0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x221af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x221af4: 0x27a80008  addiu       $t0, $sp, 0x8
    ctx->pc = 0x221af4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x221af8: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x221AF8u;
    {
        const bool branch_taken_0x221af8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x221AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221AF8u;
            // 0x221afc: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221af8) {
            ctx->pc = 0x221B1Cu;
            goto label_221b1c;
        }
    }
    ctx->pc = 0x221B00u;
label_221b00:
    // 0x221b00: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x221b00u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x221b04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x221b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x221b08: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x221b08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x221b0c: 0x0  nop
    ctx->pc = 0x221b0cu;
    // NOP
    // 0x221b10: 0x0  nop
    ctx->pc = 0x221b10u;
    // NOP
    // 0x221b14: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x221B14u;
    {
        const bool branch_taken_0x221b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x221b14) {
            ctx->pc = 0x221B00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_221b00;
        }
    }
    ctx->pc = 0x221B1Cu;
label_221b1c:
    // 0x221b1c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x221b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x221b20: 0x8ca90028  lw          $t1, 0x28($a1)
    ctx->pc = 0x221b20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x221b24: 0xc34021  addu        $t0, $a2, $v1
    ctx->pc = 0x221b24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x221b28: 0x8ca70038  lw          $a3, 0x38($a1)
    ctx->pc = 0x221b28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x221b2c: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x221b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x221b30: 0xc8082b  sltu        $at, $a2, $t0
    ctx->pc = 0x221b30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x221b34: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x221b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x221b38: 0x102000b5  beqz        $at, . + 4 + (0xB5 << 2)
    ctx->pc = 0x221B38u;
    {
        const bool branch_taken_0x221b38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x221B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221B38u;
            // 0x221b3c: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b38) {
            ctx->pc = 0x221E10u;
            goto label_221e10;
        }
    }
    ctx->pc = 0x221B40u;
    // 0x221b40: 0x1066023  subu        $t4, $t0, $a2
    ctx->pc = 0x221b40u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x221b44: 0x2507ffe0  addiu       $a3, $t0, -0x20
    ctx->pc = 0x221b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967264));
    // 0x221b48: 0x258b0003  addiu       $t3, $t4, 0x3
    ctx->pc = 0x221b48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 3));
    // 0x221b4c: 0x5610003  bgez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x221B4Cu;
    {
        const bool branch_taken_0x221b4c = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x221B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221B4Cu;
            // 0x221b50: 0xb4883  sra         $t1, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b4c) {
            ctx->pc = 0x221B5Cu;
            goto label_221b5c;
        }
    }
    ctx->pc = 0x221B54u;
    // 0x221b54: 0x25690003  addiu       $t1, $t3, 0x3
    ctx->pc = 0x221b54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
    // 0x221b58: 0x94883  sra         $t1, $t1, 2
    ctx->pc = 0x221b58u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 2));
label_221b5c:
    // 0x221b5c: 0x29210009  slti        $at, $t1, 0x9
    ctx->pc = 0x221b5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x221b60: 0x14200095  bnez        $at, . + 4 + (0x95 << 2)
    ctx->pc = 0x221B60u;
    {
        const bool branch_taken_0x221b60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x221b60) {
            ctx->pc = 0x221DB8u;
            goto label_221db8;
        }
    }
    ctx->pc = 0x221B68u;
    // 0x221b68: 0x106082b  sltu        $at, $t0, $a2
    ctx->pc = 0x221b68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x221b6c: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x221B6Cu;
    {
        const bool branch_taken_0x221b6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x221B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221B6Cu;
            // 0x221b70: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b6c) {
            ctx->pc = 0x221BA0u;
            goto label_221ba0;
        }
    }
    ctx->pc = 0x221B74u;
    // 0x221b74: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x221b74u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x221b78: 0x18a4824  and         $t1, $t4, $t2
    ctx->pc = 0x221b78u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
    // 0x221b7c: 0x15200005  bnez        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x221B7Cu;
    {
        const bool branch_taken_0x221b7c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x221B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221B7Cu;
            // 0x221b80: 0x640d0001  daddiu      $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b7c) {
            ctx->pc = 0x221B94u;
            goto label_221b94;
        }
    }
    ctx->pc = 0x221B84u;
    // 0x221b84: 0x16a4824  and         $t1, $t3, $t2
    ctx->pc = 0x221b84u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 10));
    // 0x221b88: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x221B88u;
    {
        const bool branch_taken_0x221b88 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x221b88) {
            ctx->pc = 0x221B94u;
            goto label_221b94;
        }
    }
    ctx->pc = 0x221B90u;
    // 0x221b90: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x221b90u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221b94:
    // 0x221b94: 0x11a00002  beqz        $t5, . + 4 + (0x2 << 2)
    ctx->pc = 0x221B94u;
    {
        const bool branch_taken_0x221b94 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x221b94) {
            ctx->pc = 0x221BA0u;
            goto label_221ba0;
        }
    }
    ctx->pc = 0x221B9Cu;
    // 0x221b9c: 0x640e0001  daddiu      $t6, $zero, 0x1
    ctx->pc = 0x221b9cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_221ba0:
    // 0x221ba0: 0x11c00085  beqz        $t6, . + 4 + (0x85 << 2)
    ctx->pc = 0x221BA0u;
    {
        const bool branch_taken_0x221ba0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x221ba0) {
            ctx->pc = 0x221DB8u;
            goto label_221db8;
        }
    }
    ctx->pc = 0x221BA8u;
label_221ba8:
    // 0x221ba8: 0x8ccb0000  lw          $t3, 0x0($a2)
    ctx->pc = 0x221ba8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x221bac: 0x8cca0004  lw          $t2, 0x4($a2)
    ctx->pc = 0x221bacu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x221bb0: 0x8cc90008  lw          $t1, 0x8($a2)
    ctx->pc = 0x221bb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x221bb4: 0x916d001c  lbu         $t5, 0x1C($t3)
    ctx->pc = 0x221bb4u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 28)));
    // 0x221bb8: 0x8d6c0028  lw          $t4, 0x28($t3)
    ctx->pc = 0x221bb8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 40)));
    // 0x221bbc: 0x29ad0004  slti        $t5, $t5, 0x4
    ctx->pc = 0x221bbcu;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x221bc0: 0x39ae0001  xori        $t6, $t5, 0x1
    ctx->pc = 0x221bc0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)1);
    // 0x221bc4: 0x914b001c  lbu         $t3, 0x1C($t2)
    ctx->pc = 0x221bc4u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x221bc8: 0x31cf00ff  andi        $t7, $t6, 0xFF
    ctx->pc = 0x221bc8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x221bcc: 0x958d0018  lhu         $t5, 0x18($t4)
    ctx->pc = 0x221bccu;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x221bd0: 0x958e0014  lhu         $t6, 0x14($t4)
    ctx->pc = 0x221bd0u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 20)));
    // 0x221bd4: 0x8d4a0028  lw          $t2, 0x28($t2)
    ctx->pc = 0x221bd4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x221bd8: 0x296b0004  slti        $t3, $t3, 0x4
    ctx->pc = 0x221bd8u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x221bdc: 0xd6880  sll         $t5, $t5, 2
    ctx->pc = 0x221bdcu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x221be0: 0xf6080  sll         $t4, $t7, 2
    ctx->pc = 0x221be0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x221be4: 0x6dc021  addu        $t8, $v1, $t5
    ctx->pc = 0x221be4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x221be8: 0x19d6021  addu        $t4, $t4, $sp
    ctx->pc = 0x221be8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
    // 0x221bec: 0x39630001  xori        $v1, $t3, 0x1
    ctx->pc = 0x221becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)1);
    // 0x221bf0: 0x258f0008  addiu       $t7, $t4, 0x8
    ctx->pc = 0x221bf0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x221bf4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x221bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x221bf8: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x221bf8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x221bfc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x221bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x221c00: 0x954b0018  lhu         $t3, 0x18($t2)
    ctx->pc = 0x221c00u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x221c04: 0x954c0014  lhu         $t4, 0x14($t2)
    ctx->pc = 0x221c04u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x221c08: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x221c08u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x221c0c: 0xaded0000  sw          $t5, 0x0($t7)
    ctx->pc = 0x221c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 13));
    // 0x221c10: 0x7d5021  addu        $t2, $v1, $sp
    ctx->pc = 0x221c10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x221c14: 0xb1880  sll         $v1, $t3, 2
    ctx->pc = 0x221c14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x221c18: 0x254d0008  addiu       $t5, $t2, 0x8
    ctx->pc = 0x221c18u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x221c1c: 0x912b001c  lbu         $t3, 0x1C($t1)
    ctx->pc = 0x221c1cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x221c20: 0x3031821  addu        $v1, $t8, $v1
    ctx->pc = 0x221c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 3)));
    // 0x221c24: 0x8daa0000  lw          $t2, 0x0($t5)
    ctx->pc = 0x221c24u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x221c28: 0x8d290028  lw          $t1, 0x28($t1)
    ctx->pc = 0x221c28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x221c2c: 0x296b0004  slti        $t3, $t3, 0x4
    ctx->pc = 0x221c2cu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x221c30: 0x14c6021  addu        $t4, $t2, $t4
    ctx->pc = 0x221c30u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x221c34: 0x396b0001  xori        $t3, $t3, 0x1
    ctx->pc = 0x221c34u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)1);
    // 0x221c38: 0xadac0000  sw          $t4, 0x0($t5)
    ctx->pc = 0x221c38u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 12));
    // 0x221c3c: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x221c3cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x221c40: 0x952c0018  lhu         $t4, 0x18($t1)
    ctx->pc = 0x221c40u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x221c44: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x221c44u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x221c48: 0x8cca000c  lw          $t2, 0xC($a2)
    ctx->pc = 0x221c48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x221c4c: 0x17d5821  addu        $t3, $t3, $sp
    ctx->pc = 0x221c4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 29)));
    // 0x221c50: 0x952e0014  lhu         $t6, 0x14($t1)
    ctx->pc = 0x221c50u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x221c54: 0x256f0008  addiu       $t7, $t3, 0x8
    ctx->pc = 0x221c54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x221c58: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x221c58u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x221c5c: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x221c5cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x221c60: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x221c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x221c64: 0x9149001c  lbu         $t1, 0x1C($t2)
    ctx->pc = 0x221c64u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x221c68: 0x8d4c0028  lw          $t4, 0x28($t2)
    ctx->pc = 0x221c68u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x221c6c: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x221c6cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x221c70: 0xaded0000  sw          $t5, 0x0($t7)
    ctx->pc = 0x221c70u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 13));
    // 0x221c74: 0x29290004  slti        $t1, $t1, 0x4
    ctx->pc = 0x221c74u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x221c78: 0x39290001  xori        $t1, $t1, 0x1
    ctx->pc = 0x221c78u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
    // 0x221c7c: 0x958b0018  lhu         $t3, 0x18($t4)
    ctx->pc = 0x221c7cu;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x221c80: 0x312a00ff  andi        $t2, $t1, 0xFF
    ctx->pc = 0x221c80u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x221c84: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x221c84u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x221c88: 0x8cc90010  lw          $t1, 0x10($a2)
    ctx->pc = 0x221c88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x221c8c: 0x15d5021  addu        $t2, $t2, $sp
    ctx->pc = 0x221c8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
    // 0x221c90: 0x958c0014  lhu         $t4, 0x14($t4)
    ctx->pc = 0x221c90u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 20)));
    // 0x221c94: 0x254d0008  addiu       $t5, $t2, 0x8
    ctx->pc = 0x221c94u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x221c98: 0xb5080  sll         $t2, $t3, 2
    ctx->pc = 0x221c98u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x221c9c: 0x912b001c  lbu         $t3, 0x1C($t1)
    ctx->pc = 0x221c9cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x221ca0: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x221ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x221ca4: 0x8daa0000  lw          $t2, 0x0($t5)
    ctx->pc = 0x221ca4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x221ca8: 0x8d290028  lw          $t1, 0x28($t1)
    ctx->pc = 0x221ca8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x221cac: 0x296b0004  slti        $t3, $t3, 0x4
    ctx->pc = 0x221cacu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x221cb0: 0x14c6021  addu        $t4, $t2, $t4
    ctx->pc = 0x221cb0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x221cb4: 0x396b0001  xori        $t3, $t3, 0x1
    ctx->pc = 0x221cb4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)1);
    // 0x221cb8: 0xadac0000  sw          $t4, 0x0($t5)
    ctx->pc = 0x221cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 12));
    // 0x221cbc: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x221cbcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x221cc0: 0x952c0018  lhu         $t4, 0x18($t1)
    ctx->pc = 0x221cc0u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x221cc4: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x221cc4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x221cc8: 0x17d5821  addu        $t3, $t3, $sp
    ctx->pc = 0x221cc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 29)));
    // 0x221ccc: 0x8cca0014  lw          $t2, 0x14($a2)
    ctx->pc = 0x221cccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x221cd0: 0x952e0014  lhu         $t6, 0x14($t1)
    ctx->pc = 0x221cd0u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x221cd4: 0x256f0008  addiu       $t7, $t3, 0x8
    ctx->pc = 0x221cd4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x221cd8: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x221cd8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x221cdc: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x221cdcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x221ce0: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x221ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x221ce4: 0x9149001c  lbu         $t1, 0x1C($t2)
    ctx->pc = 0x221ce4u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x221ce8: 0x8d4c0028  lw          $t4, 0x28($t2)
    ctx->pc = 0x221ce8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x221cec: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x221cecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x221cf0: 0xaded0000  sw          $t5, 0x0($t7)
    ctx->pc = 0x221cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 13));
    // 0x221cf4: 0x29290004  slti        $t1, $t1, 0x4
    ctx->pc = 0x221cf4u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x221cf8: 0x39290001  xori        $t1, $t1, 0x1
    ctx->pc = 0x221cf8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
    // 0x221cfc: 0x958b0018  lhu         $t3, 0x18($t4)
    ctx->pc = 0x221cfcu;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x221d00: 0x312a00ff  andi        $t2, $t1, 0xFF
    ctx->pc = 0x221d00u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x221d04: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x221d04u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x221d08: 0x8cc90018  lw          $t1, 0x18($a2)
    ctx->pc = 0x221d08u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x221d0c: 0x15d5021  addu        $t2, $t2, $sp
    ctx->pc = 0x221d0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
    // 0x221d10: 0x958c0014  lhu         $t4, 0x14($t4)
    ctx->pc = 0x221d10u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 20)));
    // 0x221d14: 0x254d0008  addiu       $t5, $t2, 0x8
    ctx->pc = 0x221d14u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x221d18: 0xb5080  sll         $t2, $t3, 2
    ctx->pc = 0x221d18u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x221d1c: 0x912b001c  lbu         $t3, 0x1C($t1)
    ctx->pc = 0x221d1cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x221d20: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x221d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x221d24: 0x8daa0000  lw          $t2, 0x0($t5)
    ctx->pc = 0x221d24u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x221d28: 0x296b0004  slti        $t3, $t3, 0x4
    ctx->pc = 0x221d28u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x221d2c: 0x8d290028  lw          $t1, 0x28($t1)
    ctx->pc = 0x221d2cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x221d30: 0x14c6021  addu        $t4, $t2, $t4
    ctx->pc = 0x221d30u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x221d34: 0x396b0001  xori        $t3, $t3, 0x1
    ctx->pc = 0x221d34u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)1);
    // 0x221d38: 0xadac0000  sw          $t4, 0x0($t5)
    ctx->pc = 0x221d38u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 12));
    // 0x221d3c: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x221d3cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x221d40: 0x8cca001c  lw          $t2, 0x1C($a2)
    ctx->pc = 0x221d40u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x221d44: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x221d44u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x221d48: 0x952c0018  lhu         $t4, 0x18($t1)
    ctx->pc = 0x221d48u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x221d4c: 0x17d5821  addu        $t3, $t3, $sp
    ctx->pc = 0x221d4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 29)));
    // 0x221d50: 0x952d0014  lhu         $t5, 0x14($t1)
    ctx->pc = 0x221d50u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x221d54: 0x256e0008  addiu       $t6, $t3, 0x8
    ctx->pc = 0x221d54u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x221d58: 0x8d4b0028  lw          $t3, 0x28($t2)
    ctx->pc = 0x221d58u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x221d5c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x221d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x221d60: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x221d60u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x221d64: 0x9149001c  lbu         $t1, 0x1C($t2)
    ctx->pc = 0x221d64u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x221d68: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x221d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x221d6c: 0x8dcc0000  lw          $t4, 0x0($t6)
    ctx->pc = 0x221d6cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x221d70: 0x29290004  slti        $t1, $t1, 0x4
    ctx->pc = 0x221d70u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x221d74: 0x956a0018  lhu         $t2, 0x18($t3)
    ctx->pc = 0x221d74u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x221d78: 0x39290001  xori        $t1, $t1, 0x1
    ctx->pc = 0x221d78u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
    // 0x221d7c: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x221d7cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x221d80: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x221d80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x221d84: 0xadcc0000  sw          $t4, 0x0($t6)
    ctx->pc = 0x221d84u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 12));
    // 0x221d88: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x221d88u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x221d8c: 0x956b0014  lhu         $t3, 0x14($t3)
    ctx->pc = 0x221d8cu;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x221d90: 0x13d4821  addu        $t1, $t1, $sp
    ctx->pc = 0x221d90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 29)));
    // 0x221d94: 0x252c0008  addiu       $t4, $t1, 0x8
    ctx->pc = 0x221d94u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x221d98: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x221d98u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x221d9c: 0x8d8a0000  lw          $t2, 0x0($t4)
    ctx->pc = 0x221d9cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x221da0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x221da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x221da4: 0xc7482b  sltu        $t1, $a2, $a3
    ctx->pc = 0x221da4u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x221da8: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x221da8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x221dac: 0x1520ff7e  bnez        $t1, . + 4 + (-0x82 << 2)
    ctx->pc = 0x221DACu;
    {
        const bool branch_taken_0x221dac = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x221DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221DACu;
            // 0x221db0: 0xad8a0000  sw          $t2, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221dac) {
            ctx->pc = 0x221BA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_221ba8;
        }
    }
    ctx->pc = 0x221DB4u;
    // 0x221db4: 0x0  nop
    ctx->pc = 0x221db4u;
    // NOP
label_221db8:
    // 0x221db8: 0xc8082b  sltu        $at, $a2, $t0
    ctx->pc = 0x221db8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x221dbc: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x221DBCu;
    {
        const bool branch_taken_0x221dbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x221dbc) {
            ctx->pc = 0x221E10u;
            goto label_221e10;
        }
    }
    ctx->pc = 0x221DC4u;
label_221dc4:
    // 0x221dc4: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x221dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x221dc8: 0x90ea001c  lbu         $t2, 0x1C($a3)
    ctx->pc = 0x221dc8u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x221dcc: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x221dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x221dd0: 0x8ce90028  lw          $t1, 0x28($a3)
    ctx->pc = 0x221dd0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x221dd4: 0x294a0004  slti        $t2, $t2, 0x4
    ctx->pc = 0x221dd4u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x221dd8: 0x394a0001  xori        $t2, $t2, 0x1
    ctx->pc = 0x221dd8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)1);
    // 0x221ddc: 0x952b0018  lhu         $t3, 0x18($t1)
    ctx->pc = 0x221ddcu;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x221de0: 0x314c00ff  andi        $t4, $t2, 0xFF
    ctx->pc = 0x221de0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x221de4: 0xc8382b  sltu        $a3, $a2, $t0
    ctx->pc = 0x221de4u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x221de8: 0x952a0014  lhu         $t2, 0x14($t1)
    ctx->pc = 0x221de8u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x221dec: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x221decu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x221df0: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x221df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x221df4: 0xc4880  sll         $t1, $t4, 2
    ctx->pc = 0x221df4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x221df8: 0x13d4821  addu        $t1, $t1, $sp
    ctx->pc = 0x221df8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 29)));
    // 0x221dfc: 0x252b0008  addiu       $t3, $t1, 0x8
    ctx->pc = 0x221dfcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x221e00: 0x8d690000  lw          $t1, 0x0($t3)
    ctx->pc = 0x221e00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x221e04: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x221e04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x221e08: 0x14e0ffee  bnez        $a3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x221E08u;
    {
        const bool branch_taken_0x221e08 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x221E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221E08u;
            // 0x221e0c: 0xad690000  sw          $t1, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e08) {
            ctx->pc = 0x221DC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_221dc4;
        }
    }
    ctx->pc = 0x221E10u;
label_221e10:
    // 0x221e10: 0x8ca60044  lw          $a2, 0x44($a1)
    ctx->pc = 0x221e10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x221e14: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x221e14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x221e18: 0x54200011  bnel        $at, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x221E18u;
    {
        const bool branch_taken_0x221e18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x221e18) {
            ctx->pc = 0x221E1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x221E18u;
            // 0x221e1c: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x221E60u;
            goto label_221e60;
        }
    }
    ctx->pc = 0x221E20u;
    // 0x221e20: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x221e20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x221e24: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x221e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x221e28: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x221e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x221e2c: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x221e2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x221e30: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x221E30u;
    {
        const bool branch_taken_0x221e30 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x221e30) {
            ctx->pc = 0x221E50u;
            goto label_221e50;
        }
    }
    ctx->pc = 0x221E38u;
    // 0x221e38: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x221e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x221e3c: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x221e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x221e40: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x221e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x221e44: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x221e44u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x221e48: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x221E48u;
    {
        const bool branch_taken_0x221e48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x221e48) {
            ctx->pc = 0x221E4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x221E48u;
            // 0x221e4c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x221E5Cu;
            goto label_221e5c;
        }
    }
    ctx->pc = 0x221E50u;
label_221e50:
    // 0x221e50: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x221e50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x221e54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x221E54u;
    {
        const bool branch_taken_0x221e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221e54) {
            ctx->pc = 0x221E60u;
            goto label_221e60;
        }
    }
    ctx->pc = 0x221E5Cu;
label_221e5c:
    // 0x221e5c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x221e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_221e60:
    // 0x221e60: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x221e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x221e64: 0x3e00008  jr          $ra
    ctx->pc = 0x221E64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x221E6Cu;
    // 0x221e6c: 0x0  nop
    ctx->pc = 0x221e6cu;
    // NOP
}
