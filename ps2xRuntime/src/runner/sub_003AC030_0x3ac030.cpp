#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003AC030
// Address: 0x3ac030 - 0x3ac3c0
void sub_003AC030_0x3ac030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AC030_0x3ac030");
#endif

    switch (ctx->pc) {
        case 0x3ac26cu: goto label_3ac26c;
        case 0x3ac284u: goto label_3ac284;
        case 0x3ac2b0u: goto label_3ac2b0;
        default: break;
    }

    ctx->pc = 0x3ac030u;

    // 0x3ac030: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3ac030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3ac034: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x3ac034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x3ac038: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3ac038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3ac03c: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x3ac03cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ac040: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3ac040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3ac044: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3ac044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3ac048: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3ac048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3ac04c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3ac04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3ac050: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3ac050u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac054: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ac054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3ac058: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ac058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3ac05c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ac05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3ac060: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ac060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ac064: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x3ac064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x3ac068: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3ac068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x3ac06c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x3ac06cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x3ac070: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ac070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ac074: 0x8c620110  lw          $v0, 0x110($v1)
    ctx->pc = 0x3ac074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x3ac078: 0x104c004c  beq         $v0, $t4, . + 4 + (0x4C << 2)
    ctx->pc = 0x3AC078u;
    {
        const bool branch_taken_0x3ac078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 12));
        ctx->pc = 0x3AC07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC078u;
            // 0x3ac07c: 0x26b40008  addiu       $s4, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac078) {
            ctx->pc = 0x3AC1ACu;
            goto label_3ac1ac;
        }
    }
    ctx->pc = 0x3AC080u;
    // 0x3ac080: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x3ac080u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ac084: 0x504b004a  beql        $v0, $t3, . + 4 + (0x4A << 2)
    ctx->pc = 0x3AC084u;
    {
        const bool branch_taken_0x3ac084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 11));
        if (branch_taken_0x3ac084) {
            ctx->pc = 0x3AC088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC084u;
            // 0x3ac088: 0x8c620078  lw          $v0, 0x78($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AC1B0u;
            goto label_3ac1b0;
        }
    }
    ctx->pc = 0x3AC08Cu;
    // 0x3ac08c: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x3ac08cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ac090: 0x504a001f  beql        $v0, $t2, . + 4 + (0x1F << 2)
    ctx->pc = 0x3AC090u;
    {
        const bool branch_taken_0x3ac090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        if (branch_taken_0x3ac090) {
            ctx->pc = 0x3AC094u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC090u;
            // 0x3ac094: 0x8c620078  lw          $v0, 0x78($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AC110u;
            goto label_3ac110;
        }
    }
    ctx->pc = 0x3AC098u;
    // 0x3ac098: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3ac098u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ac09c: 0x50490003  beql        $v0, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AC09Cu;
    {
        const bool branch_taken_0x3ac09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x3ac09c) {
            ctx->pc = 0x3AC0A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC09Cu;
            // 0x3ac0a0: 0x8c620078  lw          $v0, 0x78($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AC0ACu;
            goto label_3ac0ac;
        }
    }
    ctx->pc = 0x3AC0A4u;
    // 0x3ac0a4: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x3AC0A4u;
    {
        const bool branch_taken_0x3ac0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC0A4u;
            // 0x3ac0a8: 0xa2a00004  sb          $zero, 0x4($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 4), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac0a4) {
            ctx->pc = 0x3AC258u;
            goto label_3ac258;
        }
    }
    ctx->pc = 0x3AC0ACu;
label_3ac0ac:
    // 0x3ac0ac: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x3ac0acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x3ac0b0: 0x3c0742f0  lui         $a3, 0x42F0
    ctx->pc = 0x3ac0b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17136 << 16));
    // 0x3ac0b4: 0x24c67d30  addiu       $a2, $a2, 0x7D30
    ctx->pc = 0x3ac0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32048));
    // 0x3ac0b8: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x3ac0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x3ac0bc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3ac0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3ac0c0: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x3ac0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x3ac0c4: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x3ac0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3ac0c8: 0x8ea80000  lw          $t0, 0x0($s5)
    ctx->pc = 0x3ac0c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3ac0cc: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x3ac0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x3ac0d0: 0x8d080084  lw          $t0, 0x84($t0)
    ctx->pc = 0x3ac0d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 132)));
    // 0x3ac0d4: 0xae880010  sw          $t0, 0x10($s4)
    ctx->pc = 0x3ac0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 8));
    // 0x3ac0d8: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x3ac0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
    // 0x3ac0dc: 0xae800018  sw          $zero, 0x18($s4)
    ctx->pc = 0x3ac0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 0));
    // 0x3ac0e0: 0xae87001c  sw          $a3, 0x1C($s4)
    ctx->pc = 0x3ac0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 7));
    // 0x3ac0e4: 0xaea60034  sw          $a2, 0x34($s5)
    ctx->pc = 0x3ac0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 6));
    // 0x3ac0e8: 0xa2800020  sb          $zero, 0x20($s4)
    ctx->pc = 0x3ac0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ac0ec: 0xa2890021  sb          $t1, 0x21($s4)
    ctx->pc = 0x3ac0ecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 33), (uint8_t)GPR_U32(ctx, 9));
    // 0x3ac0f0: 0xa28a0022  sb          $t2, 0x22($s4)
    ctx->pc = 0x3ac0f0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 34), (uint8_t)GPR_U32(ctx, 10));
    // 0x3ac0f4: 0xa28b0023  sb          $t3, 0x23($s4)
    ctx->pc = 0x3ac0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 35), (uint8_t)GPR_U32(ctx, 11));
    // 0x3ac0f8: 0xa28c0024  sb          $t4, 0x24($s4)
    ctx->pc = 0x3ac0f8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 36), (uint8_t)GPR_U32(ctx, 12));
    // 0x3ac0fc: 0xa2850025  sb          $a1, 0x25($s4)
    ctx->pc = 0x3ac0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 37), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ac100: 0xa2840026  sb          $a0, 0x26($s4)
    ctx->pc = 0x3ac100u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 38), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ac104: 0xa2830027  sb          $v1, 0x27($s4)
    ctx->pc = 0x3ac104u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 39), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ac108: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x3AC108u;
    {
        const bool branch_taken_0x3ac108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC108u;
            // 0x3ac10c: 0xa2820028  sb          $v0, 0x28($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac108) {
            ctx->pc = 0x3AC258u;
            goto label_3ac258;
        }
    }
    ctx->pc = 0x3AC110u;
label_3ac110:
    // 0x3ac110: 0x3c0b0065  lui         $t3, 0x65
    ctx->pc = 0x3ac110u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)101 << 16));
    // 0x3ac114: 0x3c0c42a0  lui         $t4, 0x42A0
    ctx->pc = 0x3ac114u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)17056 << 16));
    // 0x3ac118: 0x256b7d70  addiu       $t3, $t3, 0x7D70
    ctx->pc = 0x3ac118u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32112));
    // 0x3ac11c: 0x240a0046  addiu       $t2, $zero, 0x46
    ctx->pc = 0x3ac11cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x3ac120: 0x24090047  addiu       $t1, $zero, 0x47
    ctx->pc = 0x3ac120u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x3ac124: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x3ac124u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x3ac128: 0x24080048  addiu       $t0, $zero, 0x48
    ctx->pc = 0x3ac128u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x3ac12c: 0x8ead0000  lw          $t5, 0x0($s5)
    ctx->pc = 0x3ac12cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3ac130: 0x24070049  addiu       $a3, $zero, 0x49
    ctx->pc = 0x3ac130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x3ac134: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x3ac134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x3ac138: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x3ac138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x3ac13c: 0x2404004b  addiu       $a0, $zero, 0x4B
    ctx->pc = 0x3ac13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x3ac140: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x3ac140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x3ac144: 0x8dae008c  lw          $t6, 0x8C($t5)
    ctx->pc = 0x3ac144u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 140)));
    // 0x3ac148: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x3ac148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3ac14c: 0x91ad0090  lbu         $t5, 0x90($t5)
    ctx->pc = 0x3ac14cu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 144)));
    // 0x3ac150: 0x1cd6823  subu        $t5, $t6, $t5
    ctx->pc = 0x3ac150u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x3ac154: 0xae8d0010  sw          $t5, 0x10($s4)
    ctx->pc = 0x3ac154u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 13));
    // 0x3ac158: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x3ac158u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
    // 0x3ac15c: 0x8eae0000  lw          $t6, 0x0($s5)
    ctx->pc = 0x3ac15cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3ac160: 0x8e8d0010  lw          $t5, 0x10($s4)
    ctx->pc = 0x3ac160u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x3ac164: 0x8dce0084  lw          $t6, 0x84($t6)
    ctx->pc = 0x3ac164u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x3ac168: 0x1cd6823  subu        $t5, $t6, $t5
    ctx->pc = 0x3ac168u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x3ac16c: 0xae8d0018  sw          $t5, 0x18($s4)
    ctx->pc = 0x3ac16cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 13));
    // 0x3ac170: 0xae8c001c  sw          $t4, 0x1C($s4)
    ctx->pc = 0x3ac170u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 12));
    // 0x3ac174: 0xaeab0034  sw          $t3, 0x34($s5)
    ctx->pc = 0x3ac174u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 11));
    // 0x3ac178: 0x8e8b0008  lw          $t3, 0x8($s4)
    ctx->pc = 0x3ac178u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x3ac17c: 0x356b0001  ori         $t3, $t3, 0x1
    ctx->pc = 0x3ac17cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)1);
    // 0x3ac180: 0xae8b0008  sw          $t3, 0x8($s4)
    ctx->pc = 0x3ac180u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 11));
    // 0x3ac184: 0xa28a0020  sb          $t2, 0x20($s4)
    ctx->pc = 0x3ac184u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 32), (uint8_t)GPR_U32(ctx, 10));
    // 0x3ac188: 0xa2890021  sb          $t1, 0x21($s4)
    ctx->pc = 0x3ac188u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 33), (uint8_t)GPR_U32(ctx, 9));
    // 0x3ac18c: 0xa2880022  sb          $t0, 0x22($s4)
    ctx->pc = 0x3ac18cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 34), (uint8_t)GPR_U32(ctx, 8));
    // 0x3ac190: 0xa2870023  sb          $a3, 0x23($s4)
    ctx->pc = 0x3ac190u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 35), (uint8_t)GPR_U32(ctx, 7));
    // 0x3ac194: 0xa2860024  sb          $a2, 0x24($s4)
    ctx->pc = 0x3ac194u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 36), (uint8_t)GPR_U32(ctx, 6));
    // 0x3ac198: 0xa2850025  sb          $a1, 0x25($s4)
    ctx->pc = 0x3ac198u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 37), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ac19c: 0xa2840026  sb          $a0, 0x26($s4)
    ctx->pc = 0x3ac19cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 38), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ac1a0: 0xa2830027  sb          $v1, 0x27($s4)
    ctx->pc = 0x3ac1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 39), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ac1a4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3AC1A4u;
    {
        const bool branch_taken_0x3ac1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC1A4u;
            // 0x3ac1a8: 0xa2820028  sb          $v0, 0x28($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac1a4) {
            ctx->pc = 0x3AC258u;
            goto label_3ac258;
        }
    }
    ctx->pc = 0x3AC1ACu;
label_3ac1ac:
    // 0x3ac1ac: 0x8c620078  lw          $v0, 0x78($v1)
    ctx->pc = 0x3ac1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
label_3ac1b0:
    // 0x3ac1b0: 0x3c0b0065  lui         $t3, 0x65
    ctx->pc = 0x3ac1b0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)101 << 16));
    // 0x3ac1b4: 0x3c0c4270  lui         $t4, 0x4270
    ctx->pc = 0x3ac1b4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)17008 << 16));
    // 0x3ac1b8: 0x256b7db0  addiu       $t3, $t3, 0x7DB0
    ctx->pc = 0x3ac1b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32176));
    // 0x3ac1bc: 0x240a0046  addiu       $t2, $zero, 0x46
    ctx->pc = 0x3ac1bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x3ac1c0: 0x24090047  addiu       $t1, $zero, 0x47
    ctx->pc = 0x3ac1c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x3ac1c4: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x3ac1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x3ac1c8: 0x24080048  addiu       $t0, $zero, 0x48
    ctx->pc = 0x3ac1c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x3ac1cc: 0x8ead0000  lw          $t5, 0x0($s5)
    ctx->pc = 0x3ac1ccu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3ac1d0: 0x24070049  addiu       $a3, $zero, 0x49
    ctx->pc = 0x3ac1d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x3ac1d4: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x3ac1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x3ac1d8: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x3ac1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x3ac1dc: 0x2404004b  addiu       $a0, $zero, 0x4B
    ctx->pc = 0x3ac1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x3ac1e0: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x3ac1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x3ac1e4: 0x8dae008c  lw          $t6, 0x8C($t5)
    ctx->pc = 0x3ac1e4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 140)));
    // 0x3ac1e8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x3ac1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3ac1ec: 0x91ad0090  lbu         $t5, 0x90($t5)
    ctx->pc = 0x3ac1ecu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 144)));
    // 0x3ac1f0: 0x1cd6823  subu        $t5, $t6, $t5
    ctx->pc = 0x3ac1f0u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x3ac1f4: 0xae8d0010  sw          $t5, 0x10($s4)
    ctx->pc = 0x3ac1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 13));
    // 0x3ac1f8: 0x8eae0000  lw          $t6, 0x0($s5)
    ctx->pc = 0x3ac1f8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3ac1fc: 0x8e8d000c  lw          $t5, 0xC($s4)
    ctx->pc = 0x3ac1fcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x3ac200: 0x8dce0080  lw          $t6, 0x80($t6)
    ctx->pc = 0x3ac200u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 128)));
    // 0x3ac204: 0x1cd6823  subu        $t5, $t6, $t5
    ctx->pc = 0x3ac204u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x3ac208: 0xae8d0014  sw          $t5, 0x14($s4)
    ctx->pc = 0x3ac208u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 13));
    // 0x3ac20c: 0x8eae0000  lw          $t6, 0x0($s5)
    ctx->pc = 0x3ac20cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3ac210: 0x8e8d0010  lw          $t5, 0x10($s4)
    ctx->pc = 0x3ac210u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x3ac214: 0x8dce0084  lw          $t6, 0x84($t6)
    ctx->pc = 0x3ac214u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x3ac218: 0x1cd6823  subu        $t5, $t6, $t5
    ctx->pc = 0x3ac218u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x3ac21c: 0xae8d0018  sw          $t5, 0x18($s4)
    ctx->pc = 0x3ac21cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 13));
    // 0x3ac220: 0xae8c001c  sw          $t4, 0x1C($s4)
    ctx->pc = 0x3ac220u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 12));
    // 0x3ac224: 0xaeab0034  sw          $t3, 0x34($s5)
    ctx->pc = 0x3ac224u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 11));
    // 0x3ac228: 0x8e8b0008  lw          $t3, 0x8($s4)
    ctx->pc = 0x3ac228u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x3ac22c: 0x356b0001  ori         $t3, $t3, 0x1
    ctx->pc = 0x3ac22cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)1);
    // 0x3ac230: 0xae8b0008  sw          $t3, 0x8($s4)
    ctx->pc = 0x3ac230u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 11));
    // 0x3ac234: 0xa28a0020  sb          $t2, 0x20($s4)
    ctx->pc = 0x3ac234u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 32), (uint8_t)GPR_U32(ctx, 10));
    // 0x3ac238: 0xa2890021  sb          $t1, 0x21($s4)
    ctx->pc = 0x3ac238u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 33), (uint8_t)GPR_U32(ctx, 9));
    // 0x3ac23c: 0xa2880022  sb          $t0, 0x22($s4)
    ctx->pc = 0x3ac23cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 34), (uint8_t)GPR_U32(ctx, 8));
    // 0x3ac240: 0xa2870023  sb          $a3, 0x23($s4)
    ctx->pc = 0x3ac240u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 35), (uint8_t)GPR_U32(ctx, 7));
    // 0x3ac244: 0xa2860024  sb          $a2, 0x24($s4)
    ctx->pc = 0x3ac244u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 36), (uint8_t)GPR_U32(ctx, 6));
    // 0x3ac248: 0xa2850025  sb          $a1, 0x25($s4)
    ctx->pc = 0x3ac248u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 37), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ac24c: 0xa2840026  sb          $a0, 0x26($s4)
    ctx->pc = 0x3ac24cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 38), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ac250: 0xa2830027  sb          $v1, 0x27($s4)
    ctx->pc = 0x3ac250u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 39), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ac254: 0xa2820028  sb          $v0, 0x28($s4)
    ctx->pc = 0x3ac254u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 40), (uint8_t)GPR_U32(ctx, 2));
label_3ac258:
    // 0x3ac258: 0x8eb00034  lw          $s0, 0x34($s5)
    ctx->pc = 0x3ac258u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x3ac25c: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x3ac25cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
    // 0x3ac260: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3ac260u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac264: 0x26310e80  addiu       $s1, $s1, 0xE80
    ctx->pc = 0x3ac264u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3712));
    // 0x3ac268: 0x2a0b02d  daddu       $s6, $s5, $zero
    ctx->pc = 0x3ac268u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ac26c:
    // 0x3ac26c: 0x26d20038  addiu       $s2, $s6, 0x38
    ctx->pc = 0x3ac26cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 56));
    // 0x3ac270: 0x8e370004  lw          $s7, 0x4($s1)
    ctx->pc = 0x3ac270u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ac274: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ac274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac278: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ac278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac27c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x3AC27Cu;
    SET_GPR_U32(ctx, 31, 0x3AC284u);
    ctx->pc = 0x3AC280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC27Cu;
            // 0x3ac280: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AC284u; }
        if (ctx->pc != 0x3AC284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AC284u; }
        if (ctx->pc != 0x3AC284u) { return; }
    }
    ctx->pc = 0x3AC284u;
label_3ac284:
    // 0x3ac284: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3ac284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3ac288: 0x26e40440  addiu       $a0, $s7, 0x440
    ctx->pc = 0x3ac288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 1088));
    // 0x3ac28c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x3ac28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x3ac290: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3ac290u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x3ac294: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x3ac294u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3ac298: 0xa2420012  sb          $v0, 0x12($s2)
    ctx->pc = 0x3ac298u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ac29c: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x3ac29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ac2a0: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x3ac2a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x3ac2a4: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x3ac2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ac2a8: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x3AC2A8u;
    SET_GPR_U32(ctx, 31, 0x3AC2B0u);
    ctx->pc = 0x3AC2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC2A8u;
            // 0x3ac2ac: 0xe640001c  swc1        $f0, 0x1C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AC2B0u; }
        if (ctx->pc != 0x3AC2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AC2B0u; }
        if (ctx->pc != 0x3AC2B0u) { return; }
    }
    ctx->pc = 0x3AC2B0u;
label_3ac2b0:
    // 0x3ac2b0: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x3ac2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ac2b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3ac2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ac2b8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ac2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ac2bc: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x3ac2bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x3ac2c0: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x3ac2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x3ac2c4: 0xa6450008  sh          $a1, 0x8($s2)
    ctx->pc = 0x3ac2c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x3ac2c8: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x3ac2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x3ac2cc: 0xa645000a  sh          $a1, 0xA($s2)
    ctx->pc = 0x3ac2ccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 5));
    // 0x3ac2d0: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x3ac2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
    // 0x3ac2d4: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x3ac2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3ac2d8: 0x8c840110  lw          $a0, 0x110($a0)
    ctx->pc = 0x3ac2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x3ac2dc: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3AC2DCu;
    {
        const bool branch_taken_0x3ac2dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ac2dc) {
            ctx->pc = 0x3AC328u;
            goto label_3ac328;
        }
    }
    ctx->pc = 0x3AC2E4u;
    // 0x3ac2e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3ac2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ac2e8: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3AC2E8u;
    {
        const bool branch_taken_0x3ac2e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ac2e8) {
            ctx->pc = 0x3AC328u;
            goto label_3ac328;
        }
    }
    ctx->pc = 0x3AC2F0u;
    // 0x3ac2f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ac2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ac2f4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AC2F4u;
    {
        const bool branch_taken_0x3ac2f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ac2f4) {
            ctx->pc = 0x3AC308u;
            goto label_3ac308;
        }
    }
    ctx->pc = 0x3AC2FCu;
    // 0x3ac2fc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3AC2FCu;
    {
        const bool branch_taken_0x3ac2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac2fc) {
            ctx->pc = 0x3AC370u;
            goto label_3ac370;
        }
    }
    ctx->pc = 0x3AC304u;
    // 0x3ac304: 0x0  nop
    ctx->pc = 0x3ac304u;
    // NOP
label_3ac308:
    // 0x3ac308: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x3ac308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x3ac30c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3AC30Cu;
    {
        const bool branch_taken_0x3ac30c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac30c) {
            ctx->pc = 0x3AC370u;
            goto label_3ac370;
        }
    }
    ctx->pc = 0x3AC314u;
    // 0x3ac314: 0x86840018  lh          $a0, 0x18($s4)
    ctx->pc = 0x3ac314u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x3ac318: 0x8643000a  lh          $v1, 0xA($s2)
    ctx->pc = 0x3ac318u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x3ac31c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ac31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ac320: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3AC320u;
    {
        const bool branch_taken_0x3ac320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC320u;
            // 0x3ac324: 0xa643000a  sh          $v1, 0xA($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac320) {
            ctx->pc = 0x3AC370u;
            goto label_3ac370;
        }
    }
    ctx->pc = 0x3AC328u;
label_3ac328:
    // 0x3ac328: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x3ac328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x3ac32c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AC32Cu;
    {
        const bool branch_taken_0x3ac32c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac32c) {
            ctx->pc = 0x3AC350u;
            goto label_3ac350;
        }
    }
    ctx->pc = 0x3AC334u;
    // 0x3ac334: 0x86850014  lh          $a1, 0x14($s4)
    ctx->pc = 0x3ac334u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x3ac338: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3ac338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ac33c: 0x86440008  lh          $a0, 0x8($s2)
    ctx->pc = 0x3ac33cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3ac340: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3ac340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3ac344: 0xa6440008  sh          $a0, 0x8($s2)
    ctx->pc = 0x3ac344u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x3ac348: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x3ac348u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x3ac34c: 0x0  nop
    ctx->pc = 0x3ac34cu;
    // NOP
label_3ac350:
    // 0x3ac350: 0x32630002  andi        $v1, $s3, 0x2
    ctx->pc = 0x3ac350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
    // 0x3ac354: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AC354u;
    {
        const bool branch_taken_0x3ac354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac354) {
            ctx->pc = 0x3AC370u;
            goto label_3ac370;
        }
    }
    ctx->pc = 0x3AC35Cu;
    // 0x3ac35c: 0x86840018  lh          $a0, 0x18($s4)
    ctx->pc = 0x3ac35cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x3ac360: 0x8643000a  lh          $v1, 0xA($s2)
    ctx->pc = 0x3ac360u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x3ac364: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ac364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ac368: 0xa643000a  sh          $v1, 0xA($s2)
    ctx->pc = 0x3ac368u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ac36c: 0x0  nop
    ctx->pc = 0x3ac36cu;
    // NOP
label_3ac370:
    // 0x3ac370: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3ac370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3ac374: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3ac374u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3ac378: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3ac378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3ac37c: 0x8c630110  lw          $v1, 0x110($v1)
    ctx->pc = 0x3ac37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x3ac380: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x3ac380u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3ac384: 0x1460ffb9  bnez        $v1, . + 4 + (-0x47 << 2)
    ctx->pc = 0x3AC384u;
    {
        const bool branch_taken_0x3ac384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC384u;
            // 0x3ac388: 0x26d6003c  addiu       $s6, $s6, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac384) {
            ctx->pc = 0x3AC26Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ac26c;
        }
    }
    ctx->pc = 0x3AC38Cu;
    // 0x3ac38c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3ac38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3ac390: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3ac390u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3ac394: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3ac394u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3ac398: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3ac398u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ac39c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3ac39cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ac3a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ac3a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ac3a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ac3a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ac3a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ac3a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ac3ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ac3acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ac3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3AC3B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC3B0u;
            // 0x3ac3b4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3AC3B8u;
    // 0x3ac3b8: 0x0  nop
    ctx->pc = 0x3ac3b8u;
    // NOP
    // 0x3ac3bc: 0x0  nop
    ctx->pc = 0x3ac3bcu;
    // NOP
}
