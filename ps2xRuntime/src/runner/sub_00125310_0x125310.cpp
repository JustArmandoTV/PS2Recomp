#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00125310
// Address: 0x125310 - 0x1253c8
void sub_00125310_0x125310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125310_0x125310");
#endif

    switch (ctx->pc) {
        case 0x125360u: goto label_125360;
        default: break;
    }

    ctx->pc = 0x125310u;

    // 0x125310: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x125310u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x125314: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x125314u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125318: 0x8c8d000c  lw          $t5, 0xC($a0)
    ctx->pc = 0x125318u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12531c: 0x2dcf0002  sltiu       $t7, $t6, 0x2
    ctx->pc = 0x12531cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x125320: 0x15e00025  bnez        $t7, . + 4 + (0x25 << 2)
    ctx->pc = 0x125320u;
    {
        const bool branch_taken_0x125320 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125320u;
            // 0x125324: 0x8c8a0004  lw          $t2, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125320) {
            ctx->pc = 0x1253B8u;
            goto label_1253b8;
        }
    }
    ctx->pc = 0x125328u;
    // 0x125328: 0x39cf0004  xori        $t7, $t6, 0x4
    ctx->pc = 0x125328u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)4);
    // 0x12532c: 0x51e00023  beql        $t7, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x12532Cu;
    {
        const bool branch_taken_0x12532c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12532c) {
            ctx->pc = 0x125330u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12532Cu;
            // 0x125330: 0x3c0d007f  lui         $t5, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1253BCu;
            goto label_1253bc;
        }
    }
    ctx->pc = 0x125334u;
    // 0x125334: 0x39cf0002  xori        $t7, $t6, 0x2
    ctx->pc = 0x125334u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)2);
    // 0x125338: 0x51e00009  beql        $t7, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x125338u;
    {
        const bool branch_taken_0x125338 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x125338) {
            ctx->pc = 0x12533Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125338u;
            // 0x12533c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125360u;
            goto label_125360;
        }
    }
    ctx->pc = 0x125340u;
    // 0x125340: 0x11a00008  beqz        $t5, . + 4 + (0x8 << 2)
    ctx->pc = 0x125340u;
    {
        const bool branch_taken_0x125340 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x125344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125340u;
            // 0x125344: 0x3c0e007f  lui         $t6, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125340) {
            ctx->pc = 0x125364u;
            goto label_125364;
        }
    }
    ctx->pc = 0x125348u;
    // 0x125348: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x125348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12534c: 0x288fff82  slti        $t7, $a0, -0x7E
    ctx->pc = 0x12534cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x125350: 0x51e00016  beql        $t7, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x125350u;
    {
        const bool branch_taken_0x125350 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x125350) {
            ctx->pc = 0x125354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125350u;
            // 0x125354: 0x248b007f  addiu       $t3, $a0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1253ACu;
            goto label_1253ac;
        }
    }
    ctx->pc = 0x125358u;
    // 0x125358: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x125358u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12535c: 0x0  nop
    ctx->pc = 0x12535cu;
    // NOP
label_125360:
    // 0x125360: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x125360u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
label_125364:
    // 0x125364: 0x3c0fff80  lui         $t7, 0xFF80
    ctx->pc = 0x125364u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65408 << 16));
    // 0x125368: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x125368u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x12536c: 0x18f6024  and         $t4, $t4, $t7
    ctx->pc = 0x12536cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 15));
    // 0x125370: 0x1ae7024  and         $t6, $t5, $t6
    ctx->pc = 0x125370u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & GPR_U64(ctx, 14));
    // 0x125374: 0x316f00ff  andi        $t7, $t3, 0xFF
    ctx->pc = 0x125374u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x125378: 0x3c0d807f  lui         $t5, 0x807F
    ctx->pc = 0x125378u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32895 << 16));
    // 0x12537c: 0x18e6025  or          $t4, $t4, $t6
    ctx->pc = 0x12537cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 14));
    // 0x125380: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x125380u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x125384: 0xf7dc0  sll         $t7, $t7, 23
    ctx->pc = 0x125384u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 23));
    // 0x125388: 0x18d6024  and         $t4, $t4, $t5
    ctx->pc = 0x125388u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 13));
    // 0x12538c: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x12538cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x125390: 0x18f6025  or          $t4, $t4, $t7
    ctx->pc = 0x125390u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 15));
    // 0x125394: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x125394u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x125398: 0xa6fc0  sll         $t5, $t2, 31
    ctx->pc = 0x125398u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 10), 31));
    // 0x12539c: 0x18e6024  and         $t4, $t4, $t6
    ctx->pc = 0x12539cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 14));
    // 0x1253a0: 0x18d7825  or          $t7, $t4, $t5
    ctx->pc = 0x1253a0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x1253a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1253A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1253A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1253A4u;
            // 0x1253a8: 0x448f0000  mtc1        $t7, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1253ACu;
label_1253ac:
    // 0x1253ac: 0x296f0100  slti        $t7, $t3, 0x100
    ctx->pc = 0x1253acu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1253b0: 0x15e0ffeb  bnez        $t7, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1253B0u;
    {
        const bool branch_taken_0x1253b0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1253B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1253B0u;
            // 0x1253b4: 0xd69c2  srl         $t5, $t5, 7 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1253b0) {
            ctx->pc = 0x125360u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125360;
        }
    }
    ctx->pc = 0x1253B8u;
label_1253b8:
    // 0x1253b8: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x1253b8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
label_1253bc:
    // 0x1253bc: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x1253bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1253c0: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x1253C0u;
    {
        const bool branch_taken_0x1253c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1253C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1253C0u;
            // 0x1253c4: 0x35adffff  ori         $t5, $t5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1253c0) {
            ctx->pc = 0x125360u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125360;
        }
    }
    ctx->pc = 0x1253C8u;
}
