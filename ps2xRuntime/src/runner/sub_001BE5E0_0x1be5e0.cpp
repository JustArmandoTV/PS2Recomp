#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE5E0
// Address: 0x1be5e0 - 0x1be630
void sub_001BE5E0_0x1be5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE5E0_0x1be5e0");
#endif

    switch (ctx->pc) {
        case 0x1be600u: goto label_1be600;
        default: break;
    }

    ctx->pc = 0x1be5e0u;

    // 0x1be5e0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1be5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1be5e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1be5e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be5e8: 0x24429d38  addiu       $v0, $v0, -0x62C8
    ctx->pc = 0x1be5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942008));
    // 0x1be5ec: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1be5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1be5f0: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1BE5F0u;
    {
        const bool branch_taken_0x1be5f0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1BE5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE5F0u;
            // 0x1be5f4: 0x24420018  addiu       $v0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be5f0) {
            ctx->pc = 0x1BE624u;
            goto label_1be624;
        }
    }
    ctx->pc = 0x1BE5F8u;
    // 0x1be5f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1be5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be5fc: 0x0  nop
    ctx->pc = 0x1be5fcu;
    // NOP
label_1be600:
    // 0x1be600: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1be600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1be604: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1be604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be608: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE608u;
    {
        const bool branch_taken_0x1be608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE608u;
            // 0x1be60c: 0x2484009c  addiu       $a0, $a0, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be608) {
            ctx->pc = 0x1BE628u;
            goto label_1be628;
        }
    }
    ctx->pc = 0x1BE610u;
    // 0x1be610: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1be610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1be614: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x1be614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1be618: 0x0  nop
    ctx->pc = 0x1be618u;
    // NOP
    // 0x1be61c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1BE61Cu;
    {
        const bool branch_taken_0x1be61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be61c) {
            ctx->pc = 0x1BE600u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1be600;
        }
    }
    ctx->pc = 0x1BE624u;
label_1be624:
    // 0x1be624: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1be624u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1be628:
    // 0x1be628: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE630u;
}
