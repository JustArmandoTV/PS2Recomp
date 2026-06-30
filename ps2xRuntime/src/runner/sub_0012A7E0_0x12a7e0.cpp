#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012A7E0
// Address: 0x12a7e0 - 0x12a8a0
void sub_0012A7E0_0x12a7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A7E0_0x12a7e0");
#endif

    switch (ctx->pc) {
        case 0x12a878u: goto label_12a878;
        default: break;
    }

    ctx->pc = 0x12a7e0u;

    // 0x12a7e0: 0x3c0e7ff0  lui         $t6, 0x7FF0
    ctx->pc = 0x12a7e0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32752 << 16));
    // 0x12a7e4: 0x4783f  dsra32      $t7, $a0, 0
    ctx->pc = 0x12a7e4u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x12a7e8: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x12a7e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x12a7ec: 0x3c0dfcc0  lui         $t5, 0xFCC0
    ctx->pc = 0x12a7ecu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)64704 << 16));
    // 0x12a7f0: 0x1ed6821  addu        $t5, $t7, $t5
    ctx->pc = 0x12a7f0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x12a7f4: 0xd703c  dsll32      $t6, $t5, 0
    ctx->pc = 0x12a7f4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) << (32 + 0));
    // 0x12a7f8: 0xd7823  negu        $t7, $t5
    ctx->pc = 0x12a7f8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 13)));
    // 0x12a7fc: 0x19a00009  blez        $t5, . + 4 + (0x9 << 2)
    ctx->pc = 0x12A7FCu;
    {
        const bool branch_taken_0x12a7fc = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x12A800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A7FCu;
            // 0x12a800: 0xe703e  dsrl32      $t6, $t6, 0 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a7fc) {
            ctx->pc = 0x12A824u;
            goto label_12a824;
        }
    }
    ctx->pc = 0x12A804u;
    // 0x12a804: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12a804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12a808: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12a808u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12a80c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12a80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12a810: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x12a810u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12a814: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x12a814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x12a818: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12a818u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12a81c: 0x3e00008  jr          $ra
    ctx->pc = 0x12A81Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A81Cu;
            // 0x12a820: 0x4f1024  and         $v0, $v0, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12A824u;
label_12a824:
    // 0x12a824: 0xf6d03  sra         $t5, $t7, 20
    ctx->pc = 0x12a824u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 15), 20));
    // 0x12a828: 0x29af0014  slti        $t7, $t5, 0x14
    ctx->pc = 0x12a828u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x12a82c: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x12A82Cu;
    {
        const bool branch_taken_0x12a82c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a82c) {
            ctx->pc = 0x12A830u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A82Cu;
            // 0x12a830: 0x25adffec  addiu       $t5, $t5, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967276));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A85Cu;
            goto label_12a85c;
        }
    }
    ctx->pc = 0x12A834u;
    // 0x12a834: 0x3c0f0008  lui         $t7, 0x8
    ctx->pc = 0x12a834u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)8 << 16));
    // 0x12a838: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12a838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12a83c: 0x1af7807  srav        $t7, $t7, $t5
    ctx->pc = 0x12a83cu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 13) & 0x1F));
    // 0x12a840: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12a840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12a844: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12a844u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12a848: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12a848u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12a84c: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x12a84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x12a850: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12a850u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12a854: 0x3e00008  jr          $ra
    ctx->pc = 0x12A854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A854u;
            // 0x12a858: 0x4e1024  and         $v0, $v0, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12A85Cu;
label_12a85c:
    // 0x12a85c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12a85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12a860: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12a860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12a864: 0x29af001f  slti        $t7, $t5, 0x1F
    ctx->pc = 0x12a864u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x12a868: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x12A868u;
    {
        const bool branch_taken_0x12a868 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A868u;
            // 0x12a86c: 0xd7027  nor         $t6, $zero, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 14, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a868) {
            ctx->pc = 0x12A894u;
            goto label_12a894;
        }
    }
    ctx->pc = 0x12A870u;
    // 0x12a870: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12a870u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a874: 0x1cf7004  sllv        $t6, $t7, $t6
    ctx->pc = 0x12a874u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 14) & 0x1F));
label_12a878:
    // 0x12a878: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x12a878u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12a87c: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12a87cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12a880: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12a880u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12a884: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x12a884u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x12a888: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x12a888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
    // 0x12a88c: 0x3e00008  jr          $ra
    ctx->pc = 0x12A88Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A88Cu;
            // 0x12a890: 0x4e1025  or          $v0, $v0, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12A894u;
label_12a894:
    // 0x12a894: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x12A894u;
    {
        const bool branch_taken_0x12a894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A894u;
            // 0x12a898: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a894) {
            ctx->pc = 0x12A878u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a878;
        }
    }
    ctx->pc = 0x12A89Cu;
    // 0x12a89c: 0x0  nop
    ctx->pc = 0x12a89cu;
    // NOP
}
