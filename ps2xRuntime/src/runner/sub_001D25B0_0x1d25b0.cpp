#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D25B0
// Address: 0x1d25b0 - 0x1d2800
void sub_001D25B0_0x1d25b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D25B0_0x1d25b0");
#endif

    switch (ctx->pc) {
        case 0x1d2754u: goto label_1d2754;
        default: break;
    }

    ctx->pc = 0x1d25b0u;

    // 0x1d25b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d25b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d25b4: 0x65902  srl         $t3, $a2, 4
    ctx->pc = 0x1d25b4u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x1d25b8: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x1d25b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x1d25bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d25bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d25c0: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1d25c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1d25c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d25c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d25c8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d25c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d25cc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1d25ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1d25d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d25d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d25d4: 0xa2082b  sltu        $at, $a1, $v0
    ctx->pc = 0x1d25d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d25d8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D25D8u;
    {
        const bool branch_taken_0x1d25d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D25DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D25D8u;
            // 0x1d25dc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d25d8) {
            ctx->pc = 0x1D25E8u;
            goto label_1d25e8;
        }
    }
    ctx->pc = 0x1D25E0u;
    // 0x1d25e0: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x1D25E0u;
    {
        const bool branch_taken_0x1d25e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D25E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D25E0u;
            // 0x1d25e4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d25e0) {
            ctx->pc = 0x1D27E4u;
            goto label_1d27e4;
        }
    }
    ctx->pc = 0x1D25E8u;
label_1d25e8:
    // 0x1d25e8: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D25E8u;
    {
        const bool branch_taken_0x1d25e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d25e8) {
            ctx->pc = 0x1D25ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D25E8u;
            // 0x1d25ec: 0xa5202  srl         $t2, $t2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D25FCu;
            goto label_1d25fc;
        }
    }
    ctx->pc = 0x1D25F0u;
    // 0x1d25f0: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x1D25F0u;
    {
        const bool branch_taken_0x1d25f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D25F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D25F0u;
            // 0x1d25f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d25f0) {
            ctx->pc = 0x1D27E4u;
            goto label_1d27e4;
        }
    }
    ctx->pc = 0x1D25F8u;
    // 0x1d25f8: 0xa5202  srl         $t2, $t2, 8
    ctx->pc = 0x1d25f8u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
label_1d25fc:
    // 0x1d25fc: 0x1100000d  beqz        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D25FCu;
    {
        const bool branch_taken_0x1d25fc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D25FCu;
            // 0x1d2600: 0x61982  srl         $v1, $a2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d25fc) {
            ctx->pc = 0x1D2634u;
            goto label_1d2634;
        }
    }
    ctx->pc = 0x1D2604u;
    // 0x1d2604: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d2604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d2608: 0x51020004  beql        $t0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2608u;
    {
        const bool branch_taken_0x1d2608 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d2608) {
            ctx->pc = 0x1D260Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2608u;
            // 0x1d260c: 0x76940  sll         $t5, $a3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D261Cu;
            goto label_1d261c;
        }
    }
    ctx->pc = 0x1D2610u;
    // 0x1d2610: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D2610u;
    {
        const bool branch_taken_0x1d2610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2610u;
            // 0x1d2614: 0xa103c  dsll32      $v0, $t2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2610) {
            ctx->pc = 0x1D264Cu;
            goto label_1d264c;
        }
    }
    ctx->pc = 0x1D2618u;
    // 0x1d2618: 0x76940  sll         $t5, $a3, 5
    ctx->pc = 0x1d2618u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_1d261c:
    // 0x1d261c: 0x5a1000a  bgez        $t5, . + 4 + (0xA << 2)
    ctx->pc = 0x1D261Cu;
    {
        const bool branch_taken_0x1d261c = (GPR_S32(ctx, 13) >= 0);
        ctx->pc = 0x1D2620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D261Cu;
            // 0x1d2620: 0xd2903  sra         $a1, $t5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d261c) {
            ctx->pc = 0x1D2648u;
            goto label_1d2648;
        }
    }
    ctx->pc = 0x1D2624u;
    // 0x1d2624: 0x25a2000f  addiu       $v0, $t5, 0xF
    ctx->pc = 0x1d2624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 15));
    // 0x1d2628: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x1d2628u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1d262c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D262Cu;
    {
        const bool branch_taken_0x1d262c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d262c) {
            ctx->pc = 0x1D2648u;
            goto label_1d2648;
        }
    }
    ctx->pc = 0x1D2634u;
label_1d2634:
    // 0x1d2634: 0x76980  sll         $t5, $a3, 6
    ctx->pc = 0x1d2634u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x1d2638: 0x5a10003  bgez        $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2638u;
    {
        const bool branch_taken_0x1d2638 = (GPR_S32(ctx, 13) >= 0);
        ctx->pc = 0x1D263Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2638u;
            // 0x1d263c: 0xd2903  sra         $a1, $t5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2638) {
            ctx->pc = 0x1D2648u;
            goto label_1d2648;
        }
    }
    ctx->pc = 0x1D2640u;
    // 0x1d2640: 0x25a2000f  addiu       $v0, $t5, 0xF
    ctx->pc = 0x1d2640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 15));
    // 0x1d2644: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x1d2644u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
label_1d2648:
    // 0x1d2648: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x1d2648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
label_1d264c:
    // 0x1d264c: 0x8803c  dsll32      $s0, $t0, 0
    ctx->pc = 0x1d264cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1d2650: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d2650u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d2654: 0x7c800000  sq          $zero, 0x0($a0)
    ctx->pc = 0x1d2654u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
    // 0x1d2658: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1d2658u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d265c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1d265cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1d2660: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1d2660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2664: 0x2411003f  addiu       $s1, $zero, 0x3F
    ctx->pc = 0x1d2664u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1d2668: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d2668u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d266c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1d266cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1d2670: 0x2743c  dsll32      $t6, $v0, 16
    ctx->pc = 0x1d2670u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d2674: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x1d2674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1d2678: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1d2678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1d267c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1d267cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d2680: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d2680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d2684: 0x344c0010  ori         $t4, $v0, 0x10
    ctx->pc = 0x1d2684u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1d2688: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1d2688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1d268c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1d268cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1d2690: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x1d2690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1d2694: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1d2694u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1d2698: 0x7c800010  sq          $zero, 0x10($a0)
    ctx->pc = 0x1d2698u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 0));
    // 0x1d269c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1d269cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1d26a0: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x1d26a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x1d26a4: 0x344a0004  ori         $t2, $v0, 0x4
    ctx->pc = 0x1d26a4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1d26a8: 0x7c800020  sq          $zero, 0x20($a0)
    ctx->pc = 0x1d26a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 0));
    // 0x1d26ac: 0x3c035100  lui         $v1, 0x5100
    ctx->pc = 0x1d26acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20736 << 16));
    // 0x1d26b0: 0xac8a0020  sw          $t2, 0x20($a0)
    ctx->pc = 0x1d26b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 10));
    // 0x1d26b4: 0x34680004  ori         $t0, $v1, 0x4
    ctx->pc = 0x1d26b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1d26b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d26b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d26bc: 0xac88002c  sw          $t0, 0x2C($a0)
    ctx->pc = 0x1d26bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 8));
    // 0x1d26c0: 0xe27825  or          $t7, $a3, $v0
    ctx->pc = 0x1d26c0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d26c4: 0x7c800030  sq          $zero, 0x30($a0)
    ctx->pc = 0x1d26c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 0));
    // 0x1d26c8: 0xfc8f0030  sd          $t7, 0x30($a0)
    ctx->pc = 0x1d26c8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 15));
    // 0x1d26cc: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1d26ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1d26d0: 0xfc870038  sd          $a3, 0x38($a0)
    ctx->pc = 0x1d26d0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 7));
    // 0x1d26d4: 0x107e38  dsll        $t7, $s0, 24
    ctx->pc = 0x1d26d4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 16) << 24);
    // 0x1d26d8: 0x7c800040  sq          $zero, 0x40($a0)
    ctx->pc = 0x1d26d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 0));
    // 0x1d26dc: 0x1e67825  or          $t7, $t7, $a2
    ctx->pc = 0x1d26dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 6));
    // 0x1d26e0: 0xfc800040  sd          $zero, 0x40($a0)
    ctx->pc = 0x1d26e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 0));
    // 0x1d26e4: 0x10363c  dsll32      $a2, $s0, 24
    ctx->pc = 0x1d26e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 24));
    // 0x1d26e8: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x1d26e8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x1d26ec: 0xfc910048  sd          $s1, 0x48($a0)
    ctx->pc = 0x1d26ecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 17));
    // 0x1d26f0: 0xce7825  or          $t7, $a2, $t6
    ctx->pc = 0x1d26f0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 6) | GPR_U64(ctx, 14));
    // 0x1d26f4: 0x7c800050  sq          $zero, 0x50($a0)
    ctx->pc = 0x1d26f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 0));
    // 0x1d26f8: 0xfc8f0050  sd          $t7, 0x50($a0)
    ctx->pc = 0x1d26f8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 80), GPR_U64(ctx, 15));
    // 0x1d26fc: 0x240e0050  addiu       $t6, $zero, 0x50
    ctx->pc = 0x1d26fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1d2700: 0xfc8e0058  sd          $t6, 0x58($a0)
    ctx->pc = 0x1d2700u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 88), GPR_U64(ctx, 14));
    // 0x1d2704: 0x24060052  addiu       $a2, $zero, 0x52
    ctx->pc = 0x1d2704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1d2708: 0x7c800060  sq          $zero, 0x60($a0)
    ctx->pc = 0x1d2708u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 0));
    // 0x1d270c: 0x248f0070  addiu       $t7, $a0, 0x70
    ctx->pc = 0x1d270cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x1d2710: 0xfc8c0060  sd          $t4, 0x60($a0)
    ctx->pc = 0x1d2710u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 96), GPR_U64(ctx, 12));
    // 0x1d2714: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1d2714u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2718: 0x1960002d  blez        $t3, . + 4 + (0x2D << 2)
    ctx->pc = 0x1D2718u;
    {
        const bool branch_taken_0x1d2718 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x1D271Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2718u;
            // 0x1d271c: 0xfc860068  sd          $a2, 0x68($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2718) {
            ctx->pc = 0x1D27D0u;
            goto label_1d27d0;
        }
    }
    ctx->pc = 0x1D2720u;
    // 0x1d2720: 0xa32025  or          $a0, $a1, $v1
    ctx->pc = 0x1d2720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1d2724: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1d2724u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d2728: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x1d2728u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1d272c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1d272cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1d2730: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1d2730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d2734: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1d2734u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1d2738: 0x3c100800  lui         $s0, 0x800
    ctx->pc = 0x1d2738u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)2048 << 16));
    // 0x1d273c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1d273cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2740: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1d2740u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1d2744: 0x2563ffff  addiu       $v1, $t3, -0x1
    ctx->pc = 0x1d2744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x1d2748: 0x24120051  addiu       $s2, $zero, 0x51
    ctx->pc = 0x1d2748u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1d274c: 0x24110053  addiu       $s1, $zero, 0x53
    ctx->pc = 0x1d274cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1d2750: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1d2750u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
label_1d2754:
    // 0x1d2754: 0x1c3c026  xor         $t8, $t6, $v1
    ctx->pc = 0x1d2754u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 3));
    // 0x1d2758: 0x7de00000  sq          $zero, 0x0($t7)
    ctx->pc = 0x1d2758u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 0), GPR_VEC(ctx, 0));
    // 0x1d275c: 0x2f180001  sltiu       $t8, $t8, 0x1
    ctx->pc = 0x1d275cu;
    SET_GPR_U64(ctx, 24, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1d2760: 0xadea0000  sw          $t2, 0x0($t7)
    ctx->pc = 0x1d2760u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 10));
    // 0x1d2764: 0x18c3f8  dsll        $t8, $t8, 15
    ctx->pc = 0x1d2764u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << 15);
    // 0x1d2768: 0xade8000c  sw          $t0, 0xC($t7)
    ctx->pc = 0x1d2768u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 8));
    // 0x1d276c: 0xd8c025  or          $t8, $a2, $t8
    ctx->pc = 0x1d276cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 6) | GPR_U64(ctx, 24));
    // 0x1d2770: 0xfde20010  sd          $v0, 0x10($t7)
    ctx->pc = 0x1d2770u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 16), GPR_U64(ctx, 2));
    // 0x1d2774: 0x310c825  or          $t9, $t8, $s0
    ctx->pc = 0x1d2774u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 24) | GPR_U64(ctx, 16));
    // 0x1d2778: 0xfde70018  sd          $a3, 0x18($t7)
    ctx->pc = 0x1d2778u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 24), GPR_U64(ctx, 7));
    // 0x1d277c: 0xcc03c  dsll32      $t8, $t4, 0
    ctx->pc = 0x1d277cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 12) << (32 + 0));
    // 0x1d2780: 0x7de00020  sq          $zero, 0x20($t7)
    ctx->pc = 0x1d2780u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 32), GPR_VEC(ctx, 0));
    // 0x1d2784: 0x18c03f  dsra32      $t8, $t8, 0
    ctx->pc = 0x1d2784u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 24) >> (32 + 0));
    // 0x1d2788: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x1d2788u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x1d278c: 0x18c03c  dsll32      $t8, $t8, 0
    ctx->pc = 0x1d278cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
    // 0x1d2790: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x1d2790u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x1d2794: 0xfdf80020  sd          $t8, 0x20($t7)
    ctx->pc = 0x1d2794u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 32), GPR_U64(ctx, 24));
    // 0x1d2798: 0xfdf20028  sd          $s2, 0x28($t7)
    ctx->pc = 0x1d2798u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 40), GPR_U64(ctx, 18));
    // 0x1d279c: 0x1cbc02a  slt         $t8, $t6, $t3
    ctx->pc = 0x1d279cu;
    SET_GPR_U64(ctx, 24, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x1d27a0: 0x7de00030  sq          $zero, 0x30($t7)
    ctx->pc = 0x1d27a0u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 48), GPR_VEC(ctx, 0));
    // 0x1d27a4: 0xfde00030  sd          $zero, 0x30($t7)
    ctx->pc = 0x1d27a4u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 48), GPR_U64(ctx, 0));
    // 0x1d27a8: 0xfdf10038  sd          $s1, 0x38($t7)
    ctx->pc = 0x1d27a8u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 56), GPR_U64(ctx, 17));
    // 0x1d27ac: 0x7de00040  sq          $zero, 0x40($t7)
    ctx->pc = 0x1d27acu;
    WRITE128(ADD32(GPR_U32(ctx, 15), 64), GPR_VEC(ctx, 0));
    // 0x1d27b0: 0xfdf90040  sd          $t9, 0x40($t7)
    ctx->pc = 0x1d27b0u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 64), GPR_U64(ctx, 25));
    // 0x1d27b4: 0x7de00050  sq          $zero, 0x50($t7)
    ctx->pc = 0x1d27b4u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 80), GPR_VEC(ctx, 0));
    // 0x1d27b8: 0xade50050  sw          $a1, 0x50($t7)
    ctx->pc = 0x1d27b8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 80), GPR_U32(ctx, 5));
    // 0x1d27bc: 0xade90054  sw          $t1, 0x54($t7)
    ctx->pc = 0x1d27bcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 84), GPR_U32(ctx, 9));
    // 0x1d27c0: 0xade4005c  sw          $a0, 0x5C($t7)
    ctx->pc = 0x1d27c0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 92), GPR_U32(ctx, 4));
    // 0x1d27c4: 0x12d4821  addu        $t1, $t1, $t5
    ctx->pc = 0x1d27c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x1d27c8: 0x1700ffe2  bnez        $t8, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1D27C8u;
    {
        const bool branch_taken_0x1d27c8 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D27CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D27C8u;
            // 0x1d27cc: 0x25ef0060  addiu       $t7, $t7, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27c8) {
            ctx->pc = 0x1D2754u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d2754;
        }
    }
    ctx->pc = 0x1D27D0u;
label_1d27d0:
    // 0x1d27d0: 0x7de00000  sq          $zero, 0x0($t7)
    ctx->pc = 0x1d27d0u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 0), GPR_VEC(ctx, 0));
    // 0x1d27d4: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x1d27d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x1d27d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d27d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27dc: 0xade30000  sw          $v1, 0x0($t7)
    ctx->pc = 0x1d27dcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 3));
    // 0x1d27e0: 0xade00004  sw          $zero, 0x4($t7)
    ctx->pc = 0x1d27e0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 0));
label_1d27e4:
    // 0x1d27e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d27e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d27e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d27e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d27ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d27ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d27f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D27F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D27F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D27F0u;
            // 0x1d27f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D27F8u;
    // 0x1d27f8: 0x0  nop
    ctx->pc = 0x1d27f8u;
    // NOP
    // 0x1d27fc: 0x0  nop
    ctx->pc = 0x1d27fcu;
    // NOP
}
