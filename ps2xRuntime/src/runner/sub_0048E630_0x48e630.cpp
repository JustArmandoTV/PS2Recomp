#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048E630
// Address: 0x48e630 - 0x48e790
void sub_0048E630_0x48e630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E630_0x48e630");
#endif

    switch (ctx->pc) {
        case 0x48e680u: goto label_48e680;
        case 0x48e6e4u: goto label_48e6e4;
        case 0x48e744u: goto label_48e744;
        default: break;
    }

    ctx->pc = 0x48e630u;

    // 0x48e630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48e630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48e634: 0x8c880014  lw          $t0, 0x14($a0)
    ctx->pc = 0x48e634u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x48e638: 0x8c87002c  lw          $a3, 0x2C($a0)
    ctx->pc = 0x48e638u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x48e63c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x48e63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x48e640: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x48E640u;
    {
        const bool branch_taken_0x48e640 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E640u;
            // 0x48e644: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e640) {
            ctx->pc = 0x48E650u;
            goto label_48e650;
        }
    }
    ctx->pc = 0x48E648u;
    // 0x48e648: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x48E648u;
    {
        const bool branch_taken_0x48e648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E648u;
            // 0x48e64c: 0x8c8a0010  lw          $t2, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e648) {
            ctx->pc = 0x48E658u;
            goto label_48e658;
        }
    }
    ctx->pc = 0x48E650u;
label_48e650:
    // 0x48e650: 0x27a60000  addiu       $a2, $sp, 0x0
    ctx->pc = 0x48e650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x48e654: 0x8c8a0010  lw          $t2, 0x10($a0)
    ctx->pc = 0x48e654u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_48e658:
    // 0x48e658: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x48e658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x48e65c: 0x8c890014  lw          $t1, 0x14($a0)
    ctx->pc = 0x48e65cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x48e660: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48e660u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x48e664: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x48e664u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x48e668: 0x12a5021  addu        $t2, $t1, $t2
    ctx->pc = 0x48e668u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x48e66c: 0x4a1026  xor         $v0, $v0, $t2
    ctx->pc = 0x48e66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 10));
    // 0x48e670: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48e670u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x48e674: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48e674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x48e678: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x48E678u;
    {
        const bool branch_taken_0x48e678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e678) {
            ctx->pc = 0x48E6B8u;
            goto label_48e6b8;
        }
    }
    ctx->pc = 0x48E680u;
label_48e680:
    // 0x48e680: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x48e680u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
    // 0x48e684: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x48e684u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x48e688: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x48e688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x48e68c: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x48e68cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x48e690: 0x54a80003  bnel        $a1, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48E690u;
    {
        const bool branch_taken_0x48e690 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 8));
        if (branch_taken_0x48e690) {
            ctx->pc = 0x48E694u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48E690u;
            // 0x48e694: 0x25280004  addiu       $t0, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48E6A0u;
            goto label_48e6a0;
        }
    }
    ctx->pc = 0x48E698u;
    // 0x48e698: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x48E698u;
    {
        const bool branch_taken_0x48e698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E698u;
            // 0x48e69c: 0xaccb0000  sw          $t3, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e698) {
            ctx->pc = 0x48E77Cu;
            goto label_48e77c;
        }
    }
    ctx->pc = 0x48E6A0u;
label_48e6a0:
    // 0x48e6a0: 0x10a1026  xor         $v0, $t0, $t2
    ctx->pc = 0x48e6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 10));
    // 0x48e6a4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48e6a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x48e6a8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48e6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x48e6ac: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x48E6ACu;
    {
        const bool branch_taken_0x48e6ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48E6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E6ACu;
            // 0x48e6b0: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e6ac) {
            ctx->pc = 0x48E680u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48e680;
        }
    }
    ctx->pc = 0x48E6B4u;
    // 0x48e6b4: 0x0  nop
    ctx->pc = 0x48e6b4u;
    // NOP
label_48e6b8:
    // 0x48e6b8: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x48e6b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x48e6bc: 0x8c88002c  lw          $t0, 0x2C($a0)
    ctx->pc = 0x48e6bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x48e6c0: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x48e6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x48e6c4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48e6c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x48e6c8: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x48e6c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x48e6cc: 0x1094821  addu        $t1, $t0, $t1
    ctx->pc = 0x48e6ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x48e6d0: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x48e6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x48e6d4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48e6d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x48e6d8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48e6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x48e6dc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x48E6DCu;
    {
        const bool branch_taken_0x48e6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E6DCu;
            // 0x48e6e0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e6dc) {
            ctx->pc = 0x48E718u;
            goto label_48e718;
        }
    }
    ctx->pc = 0x48E6E4u;
label_48e6e4:
    // 0x48e6e4: 0x7403c  dsll32      $t0, $a3, 0
    ctx->pc = 0x48e6e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 0));
    // 0x48e6e8: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x48e6e8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x48e6ec: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x48e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x48e6f0: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x48e6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x48e6f4: 0x54a70003  bnel        $a1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x48E6F4u;
    {
        const bool branch_taken_0x48e6f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        if (branch_taken_0x48e6f4) {
            ctx->pc = 0x48E6F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48E6F4u;
            // 0x48e6f8: 0x25070004  addiu       $a3, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48E704u;
            goto label_48e704;
        }
    }
    ctx->pc = 0x48E6FCu;
    // 0x48e6fc: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x48E6FCu;
    {
        const bool branch_taken_0x48e6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E6FCu;
            // 0x48e700: 0xacca0000  sw          $t2, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e6fc) {
            ctx->pc = 0x48E77Cu;
            goto label_48e77c;
        }
    }
    ctx->pc = 0x48E704u;
label_48e704:
    // 0x48e704: 0xe91026  xor         $v0, $a3, $t1
    ctx->pc = 0x48e704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 9));
    // 0x48e708: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48e708u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x48e70c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48e70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x48e710: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x48E710u;
    {
        const bool branch_taken_0x48e710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48E714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E710u;
            // 0x48e714: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e710) {
            ctx->pc = 0x48E6E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48e6e4;
        }
    }
    ctx->pc = 0x48E718u;
label_48e718:
    // 0x48e718: 0x8c87001c  lw          $a3, 0x1C($a0)
    ctx->pc = 0x48e718u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x48e71c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x48e71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x48e720: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48e720u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x48e724: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x48e724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x48e728: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x48e728u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x48e72c: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x48e72cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x48e730: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x48e730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x48e734: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48e734u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x48e738: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48e738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x48e73c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x48E73Cu;
    {
        const bool branch_taken_0x48e73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E73Cu;
            // 0x48e740: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e73c) {
            ctx->pc = 0x48E778u;
            goto label_48e778;
        }
    }
    ctx->pc = 0x48E744u;
label_48e744:
    // 0x48e744: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x48e744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x48e748: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x48e748u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x48e74c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x48e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x48e750: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x48e750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x48e754: 0x54a30003  bnel        $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x48E754u;
    {
        const bool branch_taken_0x48e754 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x48e754) {
            ctx->pc = 0x48E758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48E754u;
            // 0x48e758: 0x24830004  addiu       $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48E764u;
            goto label_48e764;
        }
    }
    ctx->pc = 0x48E75Cu;
    // 0x48e75c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x48E75Cu;
    {
        const bool branch_taken_0x48e75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E75Cu;
            // 0x48e760: 0xacc80000  sw          $t0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e75c) {
            ctx->pc = 0x48E77Cu;
            goto label_48e77c;
        }
    }
    ctx->pc = 0x48E764u;
label_48e764:
    // 0x48e764: 0x671026  xor         $v0, $v1, $a3
    ctx->pc = 0x48e764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 7));
    // 0x48e768: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48e768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x48e76c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48e76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x48e770: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x48E770u;
    {
        const bool branch_taken_0x48e770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48E774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E770u;
            // 0x48e774: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e770) {
            ctx->pc = 0x48E744u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48e744;
        }
    }
    ctx->pc = 0x48E778u;
label_48e778:
    // 0x48e778: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x48e778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48e77c:
    // 0x48e77c: 0x3e00008  jr          $ra
    ctx->pc = 0x48E77Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48E780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E77Cu;
            // 0x48e780: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48E784u;
    // 0x48e784: 0x0  nop
    ctx->pc = 0x48e784u;
    // NOP
    // 0x48e788: 0x0  nop
    ctx->pc = 0x48e788u;
    // NOP
    // 0x48e78c: 0x0  nop
    ctx->pc = 0x48e78cu;
    // NOP
}
