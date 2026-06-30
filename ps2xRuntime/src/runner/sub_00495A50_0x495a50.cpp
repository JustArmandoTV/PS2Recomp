#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00495A50
// Address: 0x495a50 - 0x495d70
void sub_00495A50_0x495a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00495A50_0x495a50");
#endif

    switch (ctx->pc) {
        case 0x495b38u: goto label_495b38;
        case 0x495bd4u: goto label_495bd4;
        case 0x495c28u: goto label_495c28;
        case 0x495c84u: goto label_495c84;
        case 0x495c8cu: goto label_495c8c;
        case 0x495c98u: goto label_495c98;
        case 0x495cacu: goto label_495cac;
        case 0x495cc8u: goto label_495cc8;
        case 0x495cecu: goto label_495cec;
        case 0x495cf4u: goto label_495cf4;
        case 0x495d0cu: goto label_495d0c;
        default: break;
    }

    ctx->pc = 0x495a50u;

    // 0x495a50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x495a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x495a54: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x495a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x495a58: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x495a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x495a5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x495a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x495a60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x495a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x495a64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x495a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x495a68: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x495a68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495a6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x495a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x495a70: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x495a70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495a74: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x495a74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495a78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x495a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x495a7c: 0x2321823  subu        $v1, $s1, $s2
    ctx->pc = 0x495a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x495a80: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x495A80u;
    {
        const bool branch_taken_0x495a80 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x495A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495A80u;
            // 0x495a84: 0x380c3  sra         $s0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495a80) {
            ctx->pc = 0x495A90u;
            goto label_495a90;
        }
    }
    ctx->pc = 0x495A88u;
    // 0x495a88: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x495a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x495a8c: 0x380c3  sra         $s0, $v1, 3
    ctx->pc = 0x495a8cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 3));
label_495a90:
    // 0x495a90: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x495a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x495a94: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x495a94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x495a98: 0x54200071  bnel        $at, $zero, . + 4 + (0x71 << 2)
    ctx->pc = 0x495A98u;
    {
        const bool branch_taken_0x495a98 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x495a98) {
            ctx->pc = 0x495A9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x495A98u;
            // 0x495a9c: 0x3c012000  lui         $at, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x495C60u;
            goto label_495c60;
        }
    }
    ctx->pc = 0x495AA0u;
    // 0x495aa0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x495aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x495aa4: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x495aa4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x495aa8: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x495AA8u;
    {
        const bool branch_taken_0x495aa8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x495aa8) {
            ctx->pc = 0x495AACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x495AA8u;
            // 0x495aac: 0x27a3007c  addiu       $v1, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
            ctx->pc = 0x495AB4u;
            goto label_495ab4;
        }
    }
    ctx->pc = 0x495AB0u;
    // 0x495ab0: 0x26630004  addiu       $v1, $s3, 0x4
    ctx->pc = 0x495ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_495ab4:
    // 0x495ab4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x495ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x495ab8: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x495ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x495abc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x495abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x495ac0: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x495ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x495ac4: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x495ac4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x495ac8: 0x1020004b  beqz        $at, . + 4 + (0x4B << 2)
    ctx->pc = 0x495AC8u;
    {
        const bool branch_taken_0x495ac8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x495ac8) {
            ctx->pc = 0x495BF8u;
            goto label_495bf8;
        }
    }
    ctx->pc = 0x495AD0u;
    // 0x495ad0: 0x854823  subu        $t1, $a0, $a1
    ctx->pc = 0x495ad0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x495ad4: 0x2483ffc0  addiu       $v1, $a0, -0x40
    ctx->pc = 0x495ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
    // 0x495ad8: 0x25280007  addiu       $t0, $t1, 0x7
    ctx->pc = 0x495ad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
    // 0x495adc: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x495ADCu;
    {
        const bool branch_taken_0x495adc = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x495AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495ADCu;
            // 0x495ae0: 0x830c3  sra         $a2, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495adc) {
            ctx->pc = 0x495AECu;
            goto label_495aec;
        }
    }
    ctx->pc = 0x495AE4u;
    // 0x495ae4: 0x25060007  addiu       $a2, $t0, 0x7
    ctx->pc = 0x495ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
    // 0x495ae8: 0x630c3  sra         $a2, $a2, 3
    ctx->pc = 0x495ae8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 3));
label_495aec:
    // 0x495aec: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x495aecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x495af0: 0x14200035  bnez        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x495AF0u;
    {
        const bool branch_taken_0x495af0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x495af0) {
            ctx->pc = 0x495BC8u;
            goto label_495bc8;
        }
    }
    ctx->pc = 0x495AF8u;
    // 0x495af8: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x495af8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x495afc: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x495AFCu;
    {
        const bool branch_taken_0x495afc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x495B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495AFCu;
            // 0x495b00: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495afc) {
            ctx->pc = 0x495B30u;
            goto label_495b30;
        }
    }
    ctx->pc = 0x495B04u;
    // 0x495b04: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x495b04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x495b08: 0x1273024  and         $a2, $t1, $a3
    ctx->pc = 0x495b08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x495b0c: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x495B0Cu;
    {
        const bool branch_taken_0x495b0c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x495B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495B0Cu;
            // 0x495b10: 0x640a0001  daddiu      $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x495b0c) {
            ctx->pc = 0x495B24u;
            goto label_495b24;
        }
    }
    ctx->pc = 0x495B14u;
    // 0x495b14: 0x1073024  and         $a2, $t0, $a3
    ctx->pc = 0x495b14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x495b18: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x495B18u;
    {
        const bool branch_taken_0x495b18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x495b18) {
            ctx->pc = 0x495B24u;
            goto label_495b24;
        }
    }
    ctx->pc = 0x495B20u;
    // 0x495b20: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x495b20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_495b24:
    // 0x495b24: 0x11400002  beqz        $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x495B24u;
    {
        const bool branch_taken_0x495b24 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x495b24) {
            ctx->pc = 0x495B30u;
            goto label_495b30;
        }
    }
    ctx->pc = 0x495B2Cu;
    // 0x495b2c: 0x640b0001  daddiu      $t3, $zero, 0x1
    ctx->pc = 0x495b2cu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_495b30:
    // 0x495b30: 0x11600025  beqz        $t3, . + 4 + (0x25 << 2)
    ctx->pc = 0x495B30u;
    {
        const bool branch_taken_0x495b30 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x495b30) {
            ctx->pc = 0x495BC8u;
            goto label_495bc8;
        }
    }
    ctx->pc = 0x495B38u;
label_495b38:
    // 0x495b38: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x495b38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x495b3c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x495b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x495b40: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x495b40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x495b44: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x495b44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x495b48: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x495b48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x495b4c: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x495b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
    // 0x495b50: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x495b50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x495b54: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x495b54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
    // 0x495b58: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x495b58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x495b5c: 0xaca60010  sw          $a2, 0x10($a1)
    ctx->pc = 0x495b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 6));
    // 0x495b60: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x495b60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x495b64: 0xaca60014  sw          $a2, 0x14($a1)
    ctx->pc = 0x495b64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 6));
    // 0x495b68: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x495b68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x495b6c: 0xaca60018  sw          $a2, 0x18($a1)
    ctx->pc = 0x495b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 6));
    // 0x495b70: 0x8e46001c  lw          $a2, 0x1C($s2)
    ctx->pc = 0x495b70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x495b74: 0xaca6001c  sw          $a2, 0x1C($a1)
    ctx->pc = 0x495b74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 6));
    // 0x495b78: 0x8e460020  lw          $a2, 0x20($s2)
    ctx->pc = 0x495b78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x495b7c: 0xaca60020  sw          $a2, 0x20($a1)
    ctx->pc = 0x495b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 6));
    // 0x495b80: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x495b80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x495b84: 0xaca60024  sw          $a2, 0x24($a1)
    ctx->pc = 0x495b84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 6));
    // 0x495b88: 0x8e460028  lw          $a2, 0x28($s2)
    ctx->pc = 0x495b88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x495b8c: 0xaca60028  sw          $a2, 0x28($a1)
    ctx->pc = 0x495b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 6));
    // 0x495b90: 0x8e46002c  lw          $a2, 0x2C($s2)
    ctx->pc = 0x495b90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x495b94: 0xaca6002c  sw          $a2, 0x2C($a1)
    ctx->pc = 0x495b94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 6));
    // 0x495b98: 0x8e460030  lw          $a2, 0x30($s2)
    ctx->pc = 0x495b98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x495b9c: 0xaca60030  sw          $a2, 0x30($a1)
    ctx->pc = 0x495b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 6));
    // 0x495ba0: 0x8e460034  lw          $a2, 0x34($s2)
    ctx->pc = 0x495ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x495ba4: 0xaca60034  sw          $a2, 0x34($a1)
    ctx->pc = 0x495ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 6));
    // 0x495ba8: 0x8e460038  lw          $a2, 0x38($s2)
    ctx->pc = 0x495ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x495bac: 0xaca60038  sw          $a2, 0x38($a1)
    ctx->pc = 0x495bacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 6));
    // 0x495bb0: 0x8e46003c  lw          $a2, 0x3C($s2)
    ctx->pc = 0x495bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x495bb4: 0xaca6003c  sw          $a2, 0x3C($a1)
    ctx->pc = 0x495bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 6));
    // 0x495bb8: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x495bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x495bbc: 0xa3302b  sltu        $a2, $a1, $v1
    ctx->pc = 0x495bbcu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x495bc0: 0x14c0ffdd  bnez        $a2, . + 4 + (-0x23 << 2)
    ctx->pc = 0x495BC0u;
    {
        const bool branch_taken_0x495bc0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x495BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495BC0u;
            // 0x495bc4: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495bc0) {
            ctx->pc = 0x495B38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_495b38;
        }
    }
    ctx->pc = 0x495BC8u;
label_495bc8:
    // 0x495bc8: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x495bc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x495bcc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x495BCCu;
    {
        const bool branch_taken_0x495bcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x495bcc) {
            ctx->pc = 0x495BF8u;
            goto label_495bf8;
        }
    }
    ctx->pc = 0x495BD4u;
label_495bd4:
    // 0x495bd4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x495bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x495bd8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x495bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x495bdc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x495bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x495be0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x495be0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x495be4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x495be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x495be8: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x495be8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x495bec: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x495BECu;
    {
        const bool branch_taken_0x495bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x495BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495BECu;
            // 0x495bf0: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495bec) {
            ctx->pc = 0x495BD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_495bd4;
        }
    }
    ctx->pc = 0x495BF4u;
    // 0x495bf4: 0x0  nop
    ctx->pc = 0x495bf4u;
    // NOP
label_495bf8:
    // 0x495bf8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x495bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x495bfc: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x495bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x495c00: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x495c00u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x495c04: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x495c04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x495c08: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x495C08u;
    {
        const bool branch_taken_0x495c08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x495c08) {
            ctx->pc = 0x495C0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x495C08u;
            // 0x495c0c: 0x83082b  sltu        $at, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x495C18u;
            goto label_495c18;
        }
    }
    ctx->pc = 0x495C10u;
    // 0x495c10: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x495C10u;
    {
        const bool branch_taken_0x495c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x495C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495C10u;
            // 0x495c14: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495c10) {
            ctx->pc = 0x495D40u;
            goto label_495d40;
        }
    }
    ctx->pc = 0x495C18u;
label_495c18:
    // 0x495c18: 0x10200049  beqz        $at, . + 4 + (0x49 << 2)
    ctx->pc = 0x495C18u;
    {
        const bool branch_taken_0x495c18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x495c18) {
            ctx->pc = 0x495D40u;
            goto label_495d40;
        }
    }
    ctx->pc = 0x495C20u;
    // 0x495c20: 0x12510047  beq         $s2, $s1, . + 4 + (0x47 << 2)
    ctx->pc = 0x495C20u;
    {
        const bool branch_taken_0x495c20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        if (branch_taken_0x495c20) {
            ctx->pc = 0x495D40u;
            goto label_495d40;
        }
    }
    ctx->pc = 0x495C28u;
label_495c28:
    // 0x495c28: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x495C28u;
    {
        const bool branch_taken_0x495c28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x495c28) {
            ctx->pc = 0x495C40u;
            goto label_495c40;
        }
    }
    ctx->pc = 0x495C30u;
    // 0x495c30: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x495c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x495c34: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x495c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x495c38: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x495c38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x495c3c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x495c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_495c40:
    // 0x495c40: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x495c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x495c44: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x495c44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x495c48: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x495c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x495c4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x495c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x495c50: 0x1651fff5  bne         $s2, $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x495C50u;
    {
        const bool branch_taken_0x495c50 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x495C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495C50u;
            // 0x495c54: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495c50) {
            ctx->pc = 0x495C28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_495c28;
        }
    }
    ctx->pc = 0x495C58u;
    // 0x495c58: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x495C58u;
    {
        const bool branch_taken_0x495c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x495c58) {
            ctx->pc = 0x495D40u;
            goto label_495d40;
        }
    }
    ctx->pc = 0x495C60u;
label_495c60:
    // 0x495c60: 0x201082b  sltu        $at, $s0, $at
    ctx->pc = 0x495c60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x495c64: 0x5420000a  bnel        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x495C64u;
    {
        const bool branch_taken_0x495c64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x495c64) {
            ctx->pc = 0x495C68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x495C64u;
            // 0x495c68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x495C90u;
            goto label_495c90;
        }
    }
    ctx->pc = 0x495C6Cu;
    // 0x495c6c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x495c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x495c70: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x495c70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x495c74: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x495c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x495c78: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x495c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x495c7c: 0xc049e92  jal         func_127A48
    ctx->pc = 0x495C7Cu;
    SET_GPR_U32(ctx, 31, 0x495C84u);
    ctx->pc = 0x495C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x495C7Cu;
            // 0x495c80: 0x24a508f0  addiu       $a1, $a1, 0x8F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x495C84u; }
        if (ctx->pc != 0x495C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x495C84u; }
        if (ctx->pc != 0x495C84u) { return; }
    }
    ctx->pc = 0x495C84u;
label_495c84:
    // 0x495c84: 0xc04981a  jal         func_126068
    ctx->pc = 0x495C84u;
    SET_GPR_U32(ctx, 31, 0x495C8Cu);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x495C8Cu; }
        if (ctx->pc != 0x495C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x495C8Cu; }
        if (ctx->pc != 0x495C8Cu) { return; }
    }
    ctx->pc = 0x495C8Cu;
label_495c8c:
    // 0x495c8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x495c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_495c90:
    // 0x495c90: 0xc125fa0  jal         func_497E80
    ctx->pc = 0x495C90u;
    SET_GPR_U32(ctx, 31, 0x495C98u);
    ctx->pc = 0x497E80u;
    if (runtime->hasFunction(0x497E80u)) {
        auto targetFn = runtime->lookupFunction(0x497E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x495C98u; }
        if (ctx->pc != 0x495C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00497E80_0x497e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x495C98u; }
        if (ctx->pc != 0x495C98u) { return; }
    }
    ctx->pc = 0x495C98u;
label_495c98:
    // 0x495c98: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x495c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x495c9c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x495C9Cu;
    {
        const bool branch_taken_0x495c9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x495c9c) {
            ctx->pc = 0x495CA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x495C9Cu;
            // 0x495ca0: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x495CB8u;
            goto label_495cb8;
        }
    }
    ctx->pc = 0x495CA4u;
    // 0x495ca4: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x495CA4u;
    SET_GPR_U32(ctx, 31, 0x495CACu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x495CACu; }
        if (ctx->pc != 0x495CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x495CACu; }
        if (ctx->pc != 0x495CACu) { return; }
    }
    ctx->pc = 0x495CACu;
label_495cac:
    // 0x495cac: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x495cacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x495cb0: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x495cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x495cb4: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x495cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_495cb8:
    // 0x495cb8: 0x26750008  addiu       $s5, $s3, 0x8
    ctx->pc = 0x495cb8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x495cbc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x495cbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x495cc0: 0xc040180  jal         func_100600
    ctx->pc = 0x495CC0u;
    SET_GPR_U32(ctx, 31, 0x495CC8u);
    ctx->pc = 0x495CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x495CC0u;
            // 0x495cc4: 0x220c0  sll         $a0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x495CC8u; }
        if (ctx->pc != 0x495CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x495CC8u; }
        if (ctx->pc != 0x495CC8u) { return; }
    }
    ctx->pc = 0x495CC8u;
label_495cc8:
    // 0x495cc8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x495cc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495ccc: 0x5680000a  bnel        $s4, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x495CCCu;
    {
        const bool branch_taken_0x495ccc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x495ccc) {
            ctx->pc = 0x495CD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x495CCCu;
            // 0x495cd0: 0x10183c  dsll32      $v1, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x495CF8u;
            goto label_495cf8;
        }
    }
    ctx->pc = 0x495CD4u;
    // 0x495cd4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x495cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x495cd8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x495cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x495cdc: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x495cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x495ce0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x495ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x495ce4: 0xc049e92  jal         func_127A48
    ctx->pc = 0x495CE4u;
    SET_GPR_U32(ctx, 31, 0x495CECu);
    ctx->pc = 0x495CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x495CE4u;
            // 0x495ce8: 0x24a509b0  addiu       $a1, $a1, 0x9B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x495CECu; }
        if (ctx->pc != 0x495CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x495CECu; }
        if (ctx->pc != 0x495CECu) { return; }
    }
    ctx->pc = 0x495CECu;
label_495cec:
    // 0x495cec: 0xc04981a  jal         func_126068
    ctx->pc = 0x495CECu;
    SET_GPR_U32(ctx, 31, 0x495CF4u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x495CF4u; }
        if (ctx->pc != 0x495CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x495CF4u; }
        if (ctx->pc != 0x495CF4u) { return; }
    }
    ctx->pc = 0x495CF4u;
label_495cf4:
    // 0x495cf4: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x495cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_495cf8:
    // 0x495cf8: 0xaeb40000  sw          $s4, 0x0($s5)
    ctx->pc = 0x495cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
    // 0x495cfc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x495cfcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x495d00: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x495d00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x495d04: 0x1251000e  beq         $s2, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x495D04u;
    {
        const bool branch_taken_0x495d04 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x495D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495D04u;
            // 0x495d08: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495d04) {
            ctx->pc = 0x495D40u;
            goto label_495d40;
        }
    }
    ctx->pc = 0x495D0Cu;
label_495d0c:
    // 0x495d0c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x495D0Cu;
    {
        const bool branch_taken_0x495d0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x495d0c) {
            ctx->pc = 0x495D28u;
            goto label_495d28;
        }
    }
    ctx->pc = 0x495D14u;
    // 0x495d14: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x495d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x495d18: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x495d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x495d1c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x495d1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x495d20: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x495d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x495d24: 0x0  nop
    ctx->pc = 0x495d24u;
    // NOP
label_495d28:
    // 0x495d28: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x495d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x495d2c: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x495d2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x495d30: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x495d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x495d34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x495d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x495d38: 0x1651fff4  bne         $s2, $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x495D38u;
    {
        const bool branch_taken_0x495d38 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x495D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495D38u;
            // 0x495d3c: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495d38) {
            ctx->pc = 0x495D0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_495d0c;
        }
    }
    ctx->pc = 0x495D40u;
label_495d40:
    // 0x495d40: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x495d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x495d44: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x495d44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x495d48: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x495d48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x495d4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x495d4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x495d50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x495d50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x495d54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x495d54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x495d58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x495d58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x495d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x495D5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x495D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495D5Cu;
            // 0x495d60: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x495D64u;
    // 0x495d64: 0x0  nop
    ctx->pc = 0x495d64u;
    // NOP
    // 0x495d68: 0x0  nop
    ctx->pc = 0x495d68u;
    // NOP
    // 0x495d6c: 0x0  nop
    ctx->pc = 0x495d6cu;
    // NOP
}
