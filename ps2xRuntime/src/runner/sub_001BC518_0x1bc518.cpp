#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC518
// Address: 0x1bc518 - 0x1bc5b8
void sub_001BC518_0x1bc518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC518_0x1bc518");
#endif

    switch (ctx->pc) {
        case 0x1bc528u: goto label_1bc528;
        case 0x1bc558u: goto label_1bc558;
        default: break;
    }

    ctx->pc = 0x1bc518u;

    // 0x1bc518: 0x248401c0  addiu       $a0, $a0, 0x1C0
    ctx->pc = 0x1bc518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 448));
    // 0x1bc51c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bc51cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bc520: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bc520u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc524: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1bc524u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bc528:
    // 0x1bc528: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1bc528u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bc52c: 0x1045001c  beq         $v0, $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1BC52Cu;
    {
        const bool branch_taken_0x1bc52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1BC530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC52Cu;
            // 0x1bc530: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc52c) {
            ctx->pc = 0x1BC5A0u;
            goto label_1bc5a0;
        }
    }
    ctx->pc = 0x1BC534u;
    // 0x1bc534: 0x28e20020  slti        $v0, $a3, 0x20
    ctx->pc = 0x1bc534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1bc538: 0x0  nop
    ctx->pc = 0x1bc538u;
    // NOP
    // 0x1bc53c: 0x0  nop
    ctx->pc = 0x1bc53cu;
    // NOP
    // 0x1bc540: 0x0  nop
    ctx->pc = 0x1bc540u;
    // NOP
    // 0x1bc544: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1BC544u;
    {
        const bool branch_taken_0x1bc544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC544u;
            // 0x1bc548: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc544) {
            ctx->pc = 0x1BC528u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bc528;
        }
    }
    ctx->pc = 0x1BC54Cu;
    // 0x1bc54c: 0x24860200  addiu       $a2, $a0, 0x200
    ctx->pc = 0x1bc54cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x1bc550: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bc550u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc554: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1bc554u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1bc558:
    // 0x1bc558: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1bc558u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bc55c: 0x10450012  beq         $v0, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BC55Cu;
    {
        const bool branch_taken_0x1bc55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1BC560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC55Cu;
            // 0x1bc560: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc55c) {
            ctx->pc = 0x1BC5A8u;
            goto label_1bc5a8;
        }
    }
    ctx->pc = 0x1BC564u;
    // 0x1bc564: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1bc564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1bc568: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x1bc568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1bc56c: 0x0  nop
    ctx->pc = 0x1bc56cu;
    // NOP
    // 0x1bc570: 0x0  nop
    ctx->pc = 0x1bc570u;
    // NOP
    // 0x1bc574: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1BC574u;
    {
        const bool branch_taken_0x1bc574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC574u;
            // 0x1bc578: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc574) {
            ctx->pc = 0x1BC558u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bc558;
        }
    }
    ctx->pc = 0x1BC57Cu;
    // 0x1bc57c: 0x24820600  addiu       $v0, $a0, 0x600
    ctx->pc = 0x1bc57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1536));
    // 0x1bc580: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1bc580u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc584: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BC584u;
    {
        const bool branch_taken_0x1bc584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1BC588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC584u;
            // 0x1bc588: 0x24840620  addiu       $a0, $a0, 0x620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc584) {
            ctx->pc = 0x1BC5ACu;
            goto label_1bc5ac;
        }
    }
    ctx->pc = 0x1BC58Cu;
    // 0x1bc58c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1bc58cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bc590: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BC590u;
    {
        const bool branch_taken_0x1bc590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1BC594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC590u;
            // 0x1bc594: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc590) {
            ctx->pc = 0x1BC5ACu;
            goto label_1bc5ac;
        }
    }
    ctx->pc = 0x1BC598u;
    // 0x1bc598: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC598u;
            // 0x1bc59c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BC5A0u;
label_1bc5a0:
    // 0x1bc5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC5A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC5A0u;
            // 0x1bc5a4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BC5A8u;
label_1bc5a8:
    // 0x1bc5a8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1bc5a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1bc5ac:
    // 0x1bc5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC5ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BC5B4u;
    // 0x1bc5b4: 0x0  nop
    ctx->pc = 0x1bc5b4u;
    // NOP
}
