#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015A670
// Address: 0x15a670 - 0x15a7d0
void sub_0015A670_0x15a670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A670_0x15a670");
#endif

    ctx->pc = 0x15a670u;

    // 0x15a670: 0x94870008  lhu         $a3, 0x8($a0)
    ctx->pc = 0x15a670u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15a674: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x15a674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x15a678: 0x24046d00  addiu       $a0, $zero, 0x6D00
    ctx->pc = 0x15a678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27904));
    // 0x15a67c: 0x30e7ff00  andi        $a3, $a3, 0xFF00
    ctx->pc = 0x15a67cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x15a680: 0x50e40022  beql        $a3, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x15A680u;
    {
        const bool branch_taken_0x15a680 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x15a680) {
            ctx->pc = 0x15A684u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A680u;
            // 0x15a684: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A70Cu;
            goto label_15a70c;
        }
    }
    ctx->pc = 0x15A688u;
    // 0x15a688: 0x24046c00  addiu       $a0, $zero, 0x6C00
    ctx->pc = 0x15a688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27648));
    // 0x15a68c: 0x10e4001e  beq         $a3, $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x15A68Cu;
    {
        const bool branch_taken_0x15a68c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x15a68c) {
            ctx->pc = 0x15A708u;
            goto label_15a708;
        }
    }
    ctx->pc = 0x15A694u;
    // 0x15a694: 0x24046b00  addiu       $a0, $zero, 0x6B00
    ctx->pc = 0x15a694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27392));
    // 0x15a698: 0x50e4001c  beql        $a3, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x15A698u;
    {
        const bool branch_taken_0x15a698 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x15a698) {
            ctx->pc = 0x15A69Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A698u;
            // 0x15a69c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A70Cu;
            goto label_15a70c;
        }
    }
    ctx->pc = 0x15A6A0u;
    // 0x15a6a0: 0x24046a00  addiu       $a0, $zero, 0x6A00
    ctx->pc = 0x15a6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27136));
    // 0x15a6a4: 0x10e40015  beq         $a3, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x15A6A4u;
    {
        const bool branch_taken_0x15a6a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x15a6a4) {
            ctx->pc = 0x15A6FCu;
            goto label_15a6fc;
        }
    }
    ctx->pc = 0x15A6ACu;
    // 0x15a6ac: 0x24046900  addiu       $a0, $zero, 0x6900
    ctx->pc = 0x15a6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26880));
    // 0x15a6b0: 0x50e40016  beql        $a3, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x15A6B0u;
    {
        const bool branch_taken_0x15a6b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x15a6b0) {
            ctx->pc = 0x15A6B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A6B0u;
            // 0x15a6b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A70Cu;
            goto label_15a70c;
        }
    }
    ctx->pc = 0x15A6B8u;
    // 0x15a6b8: 0x24046800  addiu       $a0, $zero, 0x6800
    ctx->pc = 0x15a6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26624));
    // 0x15a6bc: 0x10e4000c  beq         $a3, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x15A6BCu;
    {
        const bool branch_taken_0x15a6bc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x15a6bc) {
            ctx->pc = 0x15A6F0u;
            goto label_15a6f0;
        }
    }
    ctx->pc = 0x15A6C4u;
    // 0x15a6c4: 0x24046700  addiu       $a0, $zero, 0x6700
    ctx->pc = 0x15a6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26368));
    // 0x15a6c8: 0x50e40010  beql        $a3, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x15A6C8u;
    {
        const bool branch_taken_0x15a6c8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x15a6c8) {
            ctx->pc = 0x15A6CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A6C8u;
            // 0x15a6cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A70Cu;
            goto label_15a70c;
        }
    }
    ctx->pc = 0x15A6D0u;
    // 0x15a6d0: 0x24046600  addiu       $a0, $zero, 0x6600
    ctx->pc = 0x15a6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26112));
    // 0x15a6d4: 0x10e40003  beq         $a3, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A6D4u;
    {
        const bool branch_taken_0x15a6d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x15a6d4) {
            ctx->pc = 0x15A6E4u;
            goto label_15a6e4;
        }
    }
    ctx->pc = 0x15A6DCu;
    // 0x15a6dc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15A6DCu;
    {
        const bool branch_taken_0x15a6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A6DCu;
            // 0x15a6e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a6dc) {
            ctx->pc = 0x15A70Cu;
            goto label_15a70c;
        }
    }
    ctx->pc = 0x15A6E4u;
label_15a6e4:
    // 0x15a6e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15a6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a6e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15A6E8u;
    {
        const bool branch_taken_0x15a6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a6e8) {
            ctx->pc = 0x15A70Cu;
            goto label_15a70c;
        }
    }
    ctx->pc = 0x15A6F0u;
label_15a6f0:
    // 0x15a6f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15a6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a6f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15A6F4u;
    {
        const bool branch_taken_0x15a6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a6f4) {
            ctx->pc = 0x15A70Cu;
            goto label_15a70c;
        }
    }
    ctx->pc = 0x15A6FCu;
label_15a6fc:
    // 0x15a6fc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x15a6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15a700: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15A700u;
    {
        const bool branch_taken_0x15a700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a700) {
            ctx->pc = 0x15A70Cu;
            goto label_15a70c;
        }
    }
    ctx->pc = 0x15A708u;
label_15a708:
    // 0x15a708: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x15a708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15a70c:
    // 0x15a70c: 0x50800017  beql        $a0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x15A70Cu;
    {
        const bool branch_taken_0x15a70c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a70c) {
            ctx->pc = 0x15A710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A70Cu;
            // 0x15a710: 0x52202  srl         $a0, $a1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A76Cu;
            goto label_15a76c;
        }
    }
    ctx->pc = 0x15A714u;
    // 0x15a714: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x15a714u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x15a718: 0x3c06fff8  lui         $a2, 0xFFF8
    ctx->pc = 0x15a718u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65528 << 16));
    // 0x15a71c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15a71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15a720: 0x34c6001f  ori         $a2, $a2, 0x1F
    ctx->pc = 0x15a720u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)31);
    // 0x15a724: 0x30a53fff  andi        $a1, $a1, 0x3FFF
    ctx->pc = 0x15a724u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    // 0x15a728: 0xdc680008  ld          $t0, 0x8($v1)
    ctx->pc = 0x15a728u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x15a72c: 0x5397c  dsll32      $a3, $a1, 5
    ctx->pc = 0x15a72cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 5));
    // 0x15a730: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x15a730u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x15a734: 0x30853fff  andi        $a1, $a0, 0x3FFF
    ctx->pc = 0x15a734u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x15a738: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x15a738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15a73c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15a73cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15a740: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x15a740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x15a744: 0x863025  or          $a2, $a0, $a2
    ctx->pc = 0x15a744u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x15a748: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x15a748u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x15a74c: 0x2404c000  addiu       $a0, $zero, -0x4000
    ctx->pc = 0x15a74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x15a750: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x15a750u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x15a754: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x15a754u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x15a758: 0x94660008  lhu         $a2, 0x8($v1)
    ctx->pc = 0x15a758u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x15a75c: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x15a75cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x15a760: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x15a760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x15a764: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x15A764u;
    {
        const bool branch_taken_0x15a764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A764u;
            // 0x15a768: 0xa4640008  sh          $a0, 0x8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a764) {
            ctx->pc = 0x15A7C0u;
            goto label_15a7c0;
        }
    }
    ctx->pc = 0x15A76Cu;
label_15a76c:
    // 0x15a76c: 0x94670008  lhu         $a3, 0x8($v1)
    ctx->pc = 0x15a76cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x15a770: 0x30853fff  andi        $a1, $a0, 0x3FFF
    ctx->pc = 0x15a770u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x15a774: 0x2404c000  addiu       $a0, $zero, -0x4000
    ctx->pc = 0x15a774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x15a778: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x15a778u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x15a77c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x15a77cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x15a780: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x15A780u;
    {
        const bool branch_taken_0x15a780 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A780u;
            // 0x15a784: 0xa4640008  sh          $a0, 0x8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a780) {
            ctx->pc = 0x15A7C0u;
            goto label_15a7c0;
        }
    }
    ctx->pc = 0x15A788u;
    // 0x15a788: 0x62202  srl         $a0, $a2, 8
    ctx->pc = 0x15a788u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x15a78c: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x15a78cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x15a790: 0x30853fff  andi        $a1, $a0, 0x3FFF
    ctx->pc = 0x15a790u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x15a794: 0x3c04fff8  lui         $a0, 0xFFF8
    ctx->pc = 0x15a794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65528 << 16));
    // 0x15a798: 0x5317c  dsll32      $a2, $a1, 5
    ctx->pc = 0x15a798u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 5));
    // 0x15a79c: 0x3484001f  ori         $a0, $a0, 0x1F
    ctx->pc = 0x15a79cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31);
    // 0x15a7a0: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x15a7a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x15a7a4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x15a7a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15a7a8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15a7a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15a7ac: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x15a7acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x15a7b0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x15a7b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x15a7b4: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x15a7b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x15a7b8: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x15a7b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x15a7bc: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x15a7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
label_15a7c0:
    // 0x15a7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x15A7C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15A7C8u;
    // 0x15a7c8: 0x0  nop
    ctx->pc = 0x15a7c8u;
    // NOP
    // 0x15a7cc: 0x0  nop
    ctx->pc = 0x15a7ccu;
    // NOP
}
