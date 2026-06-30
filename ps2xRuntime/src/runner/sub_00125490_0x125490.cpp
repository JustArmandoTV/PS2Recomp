#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00125490
// Address: 0x125490 - 0x125568
void sub_00125490_0x125490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125490_0x125490");
#endif

    switch (ctx->pc) {
        case 0x1254b8u: goto label_1254b8;
        case 0x1254bcu: goto label_1254bc;
        default: break;
    }

    ctx->pc = 0x125490u;

    // 0x125490: 0x8c8d0000  lw          $t5, 0x0($a0)
    ctx->pc = 0x125490u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x125494: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x125494u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125498: 0xdc8c0010  ld          $t4, 0x10($a0)
    ctx->pc = 0x125498u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12549c: 0x2daf0002  sltiu       $t7, $t5, 0x2
    ctx->pc = 0x12549cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1254a0: 0x11e0001d  beqz        $t7, . + 4 + (0x1D << 2)
    ctx->pc = 0x1254A0u;
    {
        const bool branch_taken_0x1254a0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1254A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1254A0u;
            // 0x1254a4: 0x8c8b0004  lw          $t3, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1254a0) {
            ctx->pc = 0x125518u;
            goto label_125518;
        }
    }
    ctx->pc = 0x1254A8u;
    // 0x1254a8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1254a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1254ac: 0x240e07ff  addiu       $t6, $zero, 0x7FF
    ctx->pc = 0x1254acu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x1254b0: 0xf7cfc  dsll32      $t7, $t7, 19
    ctx->pc = 0x1254b0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 19));
    // 0x1254b4: 0x18f6025  or          $t4, $t4, $t7
    ctx->pc = 0x1254b4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 15));
label_1254b8:
    // 0x1254b8: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x1254b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1254bc:
    // 0x1254bc: 0x240df000  addiu       $t5, $zero, -0x1000
    ctx->pc = 0x1254bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x1254c0: 0xf7d3c  dsll32      $t7, $t7, 20
    ctx->pc = 0x1254c0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 20));
    // 0x1254c4: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x1254c4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x1254c8: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x1254c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
    // 0x1254cc: 0xd6b3a  dsrl        $t5, $t5, 12
    ctx->pc = 0x1254ccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> 12);
    // 0x1254d0: 0x240f07ff  addiu       $t7, $zero, 0x7FF
    ctx->pc = 0x1254d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x1254d4: 0x18d6824  and         $t5, $t4, $t5
    ctx->pc = 0x1254d4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) & GPR_U64(ctx, 13));
    // 0x1254d8: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x1254d8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x1254dc: 0xf7d3c  dsll32      $t7, $t7, 20
    ctx->pc = 0x1254dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 20));
    // 0x1254e0: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x1254e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x1254e4: 0xf7827  nor         $t7, $zero, $t7
    ctx->pc = 0x1254e4u;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 15)));
    // 0x1254e8: 0x31ce07ff  andi        $t6, $t6, 0x7FF
    ctx->pc = 0x1254e8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)2047);
    // 0x1254ec: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x1254ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
    // 0x1254f0: 0xe753c  dsll32      $t6, $t6, 20
    ctx->pc = 0x1254f0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 20));
    // 0x1254f4: 0xb683c  dsll32      $t5, $t3, 0
    ctx->pc = 0x1254f4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 11) << (32 + 0));
    // 0x1254f8: 0x240ffffe  addiu       $t7, $zero, -0x2
    ctx->pc = 0x1254f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1254fc: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x1254fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x125500: 0xf787a  dsrl        $t7, $t7, 1
    ctx->pc = 0x125500u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 1);
    // 0x125504: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x125504u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x125508: 0xd6ffc  dsll32      $t5, $t5, 31
    ctx->pc = 0x125508u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 31));
    // 0x12550c: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x12550cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
    // 0x125510: 0x3e00008  jr          $ra
    ctx->pc = 0x125510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125510u;
            // 0x125514: 0x4d1025  or          $v0, $v0, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x125518u;
label_125518:
    // 0x125518: 0x39af0004  xori        $t7, $t5, 0x4
    ctx->pc = 0x125518u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)4);
    // 0x12551c: 0x51e0000e  beql        $t7, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x12551Cu;
    {
        const bool branch_taken_0x12551c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12551c) {
            ctx->pc = 0x125520u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12551Cu;
            // 0x125520: 0x240e07ff  addiu       $t6, $zero, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125558u;
            goto label_125558;
        }
    }
    ctx->pc = 0x125524u;
    // 0x125524: 0x39af0002  xori        $t7, $t5, 0x2
    ctx->pc = 0x125524u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)2);
    // 0x125528: 0x51e0ffe3  beql        $t7, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x125528u;
    {
        const bool branch_taken_0x125528 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x125528) {
            ctx->pc = 0x12552Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125528u;
            // 0x12552c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1254B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1254b8;
        }
    }
    ctx->pc = 0x125530u;
    // 0x125530: 0x1180ffe2  beqz        $t4, . + 4 + (-0x1E << 2)
    ctx->pc = 0x125530u;
    {
        const bool branch_taken_0x125530 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x125534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125530u;
            // 0x125534: 0x240fffff  addiu       $t7, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125530) {
            ctx->pc = 0x1254BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1254bc;
        }
    }
    ctx->pc = 0x125538u;
    // 0x125538: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x125538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12553c: 0x288ffc02  slti        $t7, $a0, -0x3FE
    ctx->pc = 0x12553cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x125540: 0x55e0ffdd  bnel        $t7, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x125540u;
    {
        const bool branch_taken_0x125540 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x125540) {
            ctx->pc = 0x125544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125540u;
            // 0x125544: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1254B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1254b8;
        }
    }
    ctx->pc = 0x125548u;
    // 0x125548: 0x288f0400  slti        $t7, $a0, 0x400
    ctx->pc = 0x125548u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x12554c: 0x55e00004  bnel        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12554Cu;
    {
        const bool branch_taken_0x12554c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12554c) {
            ctx->pc = 0x125550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12554Cu;
            // 0x125550: 0x248e03ff  addiu       $t6, $a0, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 1023));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125560u;
            goto label_125560;
        }
    }
    ctx->pc = 0x125554u;
    // 0x125554: 0x240e07ff  addiu       $t6, $zero, 0x7FF
    ctx->pc = 0x125554u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
label_125558:
    // 0x125558: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
    ctx->pc = 0x125558u;
    {
        const bool branch_taken_0x125558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12555Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125558u;
            // 0x12555c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125558) {
            ctx->pc = 0x1254B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1254b8;
        }
    }
    ctx->pc = 0x125560u;
label_125560:
    // 0x125560: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x125560u;
    {
        const bool branch_taken_0x125560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125560u;
            // 0x125564: 0xc623a  dsrl        $t4, $t4, 8 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> 8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125560) {
            ctx->pc = 0x1254B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1254b8;
        }
    }
    ctx->pc = 0x125568u;
}
