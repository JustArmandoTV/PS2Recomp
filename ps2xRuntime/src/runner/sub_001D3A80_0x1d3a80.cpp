#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D3A80
// Address: 0x1d3a80 - 0x1d3cc0
void sub_001D3A80_0x1d3a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3A80_0x1d3a80");
#endif

    switch (ctx->pc) {
        case 0x1d3b24u: goto label_1d3b24;
        case 0x1d3c08u: goto label_1d3c08;
        case 0x1d3c5cu: goto label_1d3c5c;
        default: break;
    }

    ctx->pc = 0x1d3a80u;

    // 0x1d3a80: 0x1080008d  beqz        $a0, . + 4 + (0x8D << 2)
    ctx->pc = 0x1D3A80u;
    {
        const bool branch_taken_0x1d3a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3a80) {
            ctx->pc = 0x1D3CB8u;
            goto label_1d3cb8;
        }
    }
    ctx->pc = 0x1D3A88u;
    // 0x1d3a88: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1d3a88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d3a8c: 0x3c034649  lui         $v1, 0x4649
    ctx->pc = 0x1d3a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17993 << 16));
    // 0x1d3a90: 0x3463534e  ori         $v1, $v1, 0x534E
    ctx->pc = 0x1d3a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21326);
    // 0x1d3a94: 0x50c30004  beql        $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3A94u;
    {
        const bool branch_taken_0x1d3a94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d3a94) {
            ctx->pc = 0x1D3A98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3A94u;
            // 0x1d3a98: 0x8ca7000c  lw          $a3, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D3AA8u;
            goto label_1d3aa8;
        }
    }
    ctx->pc = 0x1D3A9Cu;
    // 0x1d3a9c: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x1D3A9Cu;
    {
        const bool branch_taken_0x1d3a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3A9Cu;
            // 0x1d3aa0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a9c) {
            ctx->pc = 0x1D3CB8u;
            goto label_1d3cb8;
        }
    }
    ctx->pc = 0x1D3AA4u;
    // 0x1d3aa4: 0x8ca7000c  lw          $a3, 0xC($a1)
    ctx->pc = 0x1d3aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1d3aa8:
    // 0x1d3aa8: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x1d3aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1d3aac: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x1d3aacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1d3ab0: 0x8ca80008  lw          $t0, 0x8($a1)
    ctx->pc = 0x1d3ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1d3ab4: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x1d3ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1d3ab8: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x1d3ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1d3abc: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x1d3abcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ac0: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x1d3ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1d3ac4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1d3ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1d3ac8: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1d3ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1d3acc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d3accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d3ad0: 0x67182b  sltu        $v1, $v1, $a3
    ctx->pc = 0x1d3ad0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1d3ad4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1d3ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1d3ad8: 0x14600055  bnez        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x1D3AD8u;
    {
        const bool branch_taken_0x1d3ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3AD8u;
            // 0x1d3adc: 0x24c90010  addiu       $t1, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ad8) {
            ctx->pc = 0x1D3C30u;
            goto label_1d3c30;
        }
    }
    ctx->pc = 0x1D3AE0u;
    // 0x1d3ae0: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x1d3ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1d3ae4: 0x18c00052  blez        $a2, . + 4 + (0x52 << 2)
    ctx->pc = 0x1D3AE4u;
    {
        const bool branch_taken_0x1d3ae4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1D3AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3AE4u;
            // 0x1d3ae8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ae4) {
            ctx->pc = 0x1D3C30u;
            goto label_1d3c30;
        }
    }
    ctx->pc = 0x1D3AECu;
    // 0x1d3aec: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x1d3aecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1d3af0: 0x14200041  bnez        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x1D3AF0u;
    {
        const bool branch_taken_0x1d3af0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3AF0u;
            // 0x1d3af4: 0x24c5fff8  addiu       $a1, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3af0) {
            ctx->pc = 0x1D3BF8u;
            goto label_1d3bf8;
        }
    }
    ctx->pc = 0x1D3AF8u;
    // 0x1d3af8: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3AF8u;
    {
        const bool branch_taken_0x1d3af8 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1D3AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3AF8u;
            // 0x1d3afc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3af8) {
            ctx->pc = 0x1D3B18u;
            goto label_1d3b18;
        }
    }
    ctx->pc = 0x1D3B00u;
    // 0x1d3b00: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x1d3b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x1d3b04: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1d3b04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x1d3b08: 0xc1082a  slt         $at, $a2, $at
    ctx->pc = 0x1d3b08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1d3b0c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D3B0Cu;
    {
        const bool branch_taken_0x1d3b0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3b0c) {
            ctx->pc = 0x1D3B18u;
            goto label_1d3b18;
        }
    }
    ctx->pc = 0x1D3B14u;
    // 0x1d3b14: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x1d3b14u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1d3b18:
    // 0x1d3b18: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x1D3B18u;
    {
        const bool branch_taken_0x1d3b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3b18) {
            ctx->pc = 0x1D3BF8u;
            goto label_1d3bf8;
        }
    }
    ctx->pc = 0x1D3B20u;
    // 0x1d3b20: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x1d3b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1d3b24:
    // 0x1d3b24: 0x8d2d0000  lw          $t5, 0x0($t1)
    ctx->pc = 0x1d3b24u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d3b28: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x1d3b28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x1d3b2c: 0x145602a  slt         $t4, $t2, $a1
    ctx->pc = 0x1d3b2cu;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d3b30: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x1d3b30u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x1d3b34: 0xed7021  addu        $t6, $a3, $t5
    ctx->pc = 0x1d3b34u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x1d3b38: 0x8dcd0000  lw          $t5, 0x0($t6)
    ctx->pc = 0x1d3b38u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1d3b3c: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x1d3b3cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x1d3b40: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x1d3b40u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
    // 0x1d3b44: 0x8d2d0004  lw          $t5, 0x4($t1)
    ctx->pc = 0x1d3b44u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1d3b48: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x1d3b48u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x1d3b4c: 0xed7021  addu        $t6, $a3, $t5
    ctx->pc = 0x1d3b4cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x1d3b50: 0x8dcd0000  lw          $t5, 0x0($t6)
    ctx->pc = 0x1d3b50u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1d3b54: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x1d3b54u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x1d3b58: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x1d3b58u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
    // 0x1d3b5c: 0x8d2d0008  lw          $t5, 0x8($t1)
    ctx->pc = 0x1d3b5cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1d3b60: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x1d3b60u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x1d3b64: 0xed7021  addu        $t6, $a3, $t5
    ctx->pc = 0x1d3b64u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x1d3b68: 0x8dcd0000  lw          $t5, 0x0($t6)
    ctx->pc = 0x1d3b68u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1d3b6c: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x1d3b6cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x1d3b70: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x1d3b70u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
    // 0x1d3b74: 0x8d2d000c  lw          $t5, 0xC($t1)
    ctx->pc = 0x1d3b74u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1d3b78: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x1d3b78u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x1d3b7c: 0xed7021  addu        $t6, $a3, $t5
    ctx->pc = 0x1d3b7cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x1d3b80: 0x8dcd0000  lw          $t5, 0x0($t6)
    ctx->pc = 0x1d3b80u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1d3b84: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x1d3b84u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x1d3b88: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x1d3b88u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
    // 0x1d3b8c: 0x8d2d0010  lw          $t5, 0x10($t1)
    ctx->pc = 0x1d3b8cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1d3b90: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x1d3b90u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x1d3b94: 0xed7021  addu        $t6, $a3, $t5
    ctx->pc = 0x1d3b94u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x1d3b98: 0x8dcd0000  lw          $t5, 0x0($t6)
    ctx->pc = 0x1d3b98u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1d3b9c: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x1d3b9cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x1d3ba0: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x1d3ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
    // 0x1d3ba4: 0x8d2d0014  lw          $t5, 0x14($t1)
    ctx->pc = 0x1d3ba4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x1d3ba8: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x1d3ba8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x1d3bac: 0xed7021  addu        $t6, $a3, $t5
    ctx->pc = 0x1d3bacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x1d3bb0: 0x8dcd0000  lw          $t5, 0x0($t6)
    ctx->pc = 0x1d3bb0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1d3bb4: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x1d3bb4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x1d3bb8: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x1d3bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
    // 0x1d3bbc: 0x8d2d0018  lw          $t5, 0x18($t1)
    ctx->pc = 0x1d3bbcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x1d3bc0: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x1d3bc0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x1d3bc4: 0xed7021  addu        $t6, $a3, $t5
    ctx->pc = 0x1d3bc4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x1d3bc8: 0x8dcd0000  lw          $t5, 0x0($t6)
    ctx->pc = 0x1d3bc8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1d3bcc: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x1d3bccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x1d3bd0: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x1d3bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
    // 0x1d3bd4: 0x8d2d001c  lw          $t5, 0x1C($t1)
    ctx->pc = 0x1d3bd4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x1d3bd8: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x1d3bd8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x1d3bdc: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x1d3bdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x1d3be0: 0xed7021  addu        $t6, $a3, $t5
    ctx->pc = 0x1d3be0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x1d3be4: 0x8dcd0000  lw          $t5, 0x0($t6)
    ctx->pc = 0x1d3be4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1d3be8: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x1d3be8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x1d3bec: 0x1580ffcd  bnez        $t4, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1D3BECu;
    {
        const bool branch_taken_0x1d3bec = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3BECu;
            // 0x1d3bf0: 0xadcd0000  sw          $t5, 0x0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3bec) {
            ctx->pc = 0x1D3B24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d3b24;
        }
    }
    ctx->pc = 0x1D3BF4u;
    // 0x1d3bf4: 0x0  nop
    ctx->pc = 0x1d3bf4u;
    // NOP
label_1d3bf8:
    // 0x1d3bf8: 0x146082a  slt         $at, $t2, $a2
    ctx->pc = 0x1d3bf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1d3bfc: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1D3BFCu;
    {
        const bool branch_taken_0x1d3bfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3bfc) {
            ctx->pc = 0x1D3C30u;
            goto label_1d3c30;
        }
    }
    ctx->pc = 0x1D3C04u;
    // 0x1d3c04: 0x240dfffc  addiu       $t5, $zero, -0x4
    ctx->pc = 0x1d3c04u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1d3c08:
    // 0x1d3c08: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x1d3c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d3c0c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1d3c0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1d3c10: 0x146182a  slt         $v1, $t2, $a2
    ctx->pc = 0x1d3c10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1d3c14: 0xad2824  and         $a1, $a1, $t5
    ctx->pc = 0x1d3c14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 13));
    // 0x1d3c18: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1d3c18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1d3c1c: 0xe56021  addu        $t4, $a3, $a1
    ctx->pc = 0x1d3c1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1d3c20: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x1d3c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1d3c24: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1d3c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1d3c28: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D3C28u;
    {
        const bool branch_taken_0x1d3c28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3C28u;
            // 0x1d3c2c: 0xad850000  sw          $a1, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c28) {
            ctx->pc = 0x1D3C08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d3c08;
        }
    }
    ctx->pc = 0x1D3C30u;
label_1d3c30:
    // 0x1d3c30: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d3c30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1d3c34: 0x19000020  blez        $t0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1D3C34u;
    {
        const bool branch_taken_0x1d3c34 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1D3C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3C34u;
            // 0x1d3c38: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c34) {
            ctx->pc = 0x1D3CB8u;
            goto label_1d3cb8;
        }
    }
    ctx->pc = 0x1D3C3Cu;
    // 0x1d3c3c: 0x3c05434d  lui         $a1, 0x434D
    ctx->pc = 0x1d3c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17229 << 16));
    // 0x1d3c40: 0x3c03414d  lui         $v1, 0x414D
    ctx->pc = 0x1d3c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16717 << 16));
    // 0x1d3c44: 0x34aa534e  ori         $t2, $a1, 0x534E
    ctx->pc = 0x1d3c44u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21326);
    // 0x1d3c48: 0x3469534e  ori         $t1, $v1, 0x534E
    ctx->pc = 0x1d3c48u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21326);
    // 0x1d3c4c: 0x3c03444e  lui         $v1, 0x444E
    ctx->pc = 0x1d3c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17486 << 16));
    // 0x1d3c50: 0x3c054f4d  lui         $a1, 0x4F4D
    ctx->pc = 0x1d3c50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20301 << 16));
    // 0x1d3c54: 0x3466454e  ori         $a2, $v1, 0x454E
    ctx->pc = 0x1d3c54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17742);
    // 0x1d3c58: 0x34ac534e  ori         $t4, $a1, 0x534E
    ctx->pc = 0x1d3c58u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21326);
label_1d3c5c:
    // 0x1d3c5c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1d3c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d3c60: 0x106c0005  beq         $v1, $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3C60u;
    {
        const bool branch_taken_0x1d3c60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 12));
        if (branch_taken_0x1d3c60) {
            ctx->pc = 0x1D3C78u;
            goto label_1d3c78;
        }
    }
    ctx->pc = 0x1D3C68u;
    // 0x1d3c68: 0x106a0003  beq         $v1, $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D3C68u;
    {
        const bool branch_taken_0x1d3c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 10));
        if (branch_taken_0x1d3c68) {
            ctx->pc = 0x1D3C78u;
            goto label_1d3c78;
        }
    }
    ctx->pc = 0x1D3C70u;
    // 0x1d3c70: 0x14690008  bne         $v1, $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3C70u;
    {
        const bool branch_taken_0x1d3c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x1d3c70) {
            ctx->pc = 0x1D3C94u;
            goto label_1d3c94;
        }
    }
    ctx->pc = 0x1D3C78u;
label_1d3c78:
    // 0x1d3c78: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D3C78u;
    {
        const bool branch_taken_0x1d3c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3c78) {
            ctx->pc = 0x1D3CB8u;
            goto label_1d3cb8;
        }
    }
    ctx->pc = 0x1D3C80u;
    // 0x1d3c80: 0x8d630008  lw          $v1, 0x8($t3)
    ctx->pc = 0x1d3c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x1d3c84: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1d3c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1d3c88: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1d3c88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1d3c8c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D3C8Cu;
    {
        const bool branch_taken_0x1d3c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3c8c) {
            ctx->pc = 0x1D3CB8u;
            goto label_1d3cb8;
        }
    }
    ctx->pc = 0x1D3C94u;
label_1d3c94:
    // 0x1d3c94: 0x10660008  beq         $v1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3C94u;
    {
        const bool branch_taken_0x1d3c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x1d3c94) {
            ctx->pc = 0x1D3CB8u;
            goto label_1d3cb8;
        }
    }
    ctx->pc = 0x1D3C9Cu;
    // 0x1d3c9c: 0x8d650004  lw          $a1, 0x4($t3)
    ctx->pc = 0x1d3c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1d3ca0: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1d3ca0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x1d3ca4: 0x1a8182a  slt         $v1, $t5, $t0
    ctx->pc = 0x1d3ca4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1d3ca8: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x1d3ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x1d3cac: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1D3CACu;
    {
        const bool branch_taken_0x1d3cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3CACu;
            // 0x1d3cb0: 0x24ab0008  addiu       $t3, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3cac) {
            ctx->pc = 0x1D3C5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d3c5c;
        }
    }
    ctx->pc = 0x1D3CB4u;
    // 0x1d3cb4: 0x0  nop
    ctx->pc = 0x1d3cb4u;
    // NOP
label_1d3cb8:
    // 0x1d3cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D3CC0u;
}
