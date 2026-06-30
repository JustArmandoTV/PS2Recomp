#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012C718
// Address: 0x12c718 - 0x12c770
void sub_0012C718_0x12c718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C718_0x12c718");
#endif

    switch (ctx->pc) {
        case 0x12c734u: goto label_12c734;
        default: break;
    }

    ctx->pc = 0x12c718u;

    // 0x12c718: 0x808f0000  lb          $t7, 0x0($a0)
    ctx->pc = 0x12c718u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12c71c: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C71Cu;
    {
        const bool branch_taken_0x12c71c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C71Cu;
            // 0x12c720: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c71c) {
            ctx->pc = 0x12C730u;
            goto label_12c730;
        }
    }
    ctx->pc = 0x12C724u;
    // 0x12c724: 0x80af0000  lb          $t7, 0x0($a1)
    ctx->pc = 0x12c724u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12c728: 0x3e00008  jr          $ra
    ctx->pc = 0x12C728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C728u;
            // 0x12c72c: 0xf100b  movn        $v0, $zero, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C730u;
label_12c730:
    // 0x12c730: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x12c730u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12c734:
    // 0x12c734: 0xac7821  addu        $t7, $a1, $t4
    ctx->pc = 0x12c734u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x12c738: 0x81ed0000  lb          $t5, 0x0($t7)
    ctx->pc = 0x12c738u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12c73c: 0x11a00009  beqz        $t5, . + 4 + (0x9 << 2)
    ctx->pc = 0x12C73Cu;
    {
        const bool branch_taken_0x12c73c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C73Cu;
            // 0x12c740: 0x4c7021  addu        $t6, $v0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c73c) {
            ctx->pc = 0x12C764u;
            goto label_12c764;
        }
    }
    ctx->pc = 0x12C744u;
    // 0x12c744: 0x81cf0000  lb          $t7, 0x0($t6)
    ctx->pc = 0x12c744u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x12c748: 0x11affffa  beq         $t5, $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12C748u;
    {
        const bool branch_taken_0x12c748 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        ctx->pc = 0x12C74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C748u;
            // 0x12c74c: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c748) {
            ctx->pc = 0x12C734u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c734;
        }
    }
    ctx->pc = 0x12C750u;
    // 0x12c750: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12c750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12c754: 0x804f0000  lb          $t7, 0x0($v0)
    ctx->pc = 0x12c754u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c758: 0x55e0fff6  bnel        $t7, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x12C758u;
    {
        const bool branch_taken_0x12c758 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c758) {
            ctx->pc = 0x12C75Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12C758u;
            // 0x12c75c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12C734u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c734;
        }
    }
    ctx->pc = 0x12C760u;
    // 0x12c760: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12c760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12c764:
    // 0x12c764: 0x3e00008  jr          $ra
    ctx->pc = 0x12C764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C76Cu;
    // 0x12c76c: 0x0  nop
    ctx->pc = 0x12c76cu;
    // NOP
}
