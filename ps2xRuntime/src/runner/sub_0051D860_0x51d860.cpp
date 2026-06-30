#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051D860
// Address: 0x51d860 - 0x51d8a0
void sub_0051D860_0x51d860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051D860_0x51d860");
#endif

    switch (ctx->pc) {
        case 0x51d870u: goto label_51d870;
        default: break;
    }

    ctx->pc = 0x51d860u;

    // 0x51d860: 0x8c860068  lw          $a2, 0x68($a0)
    ctx->pc = 0x51d860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x51d864: 0x50c0000b  beql        $a2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x51D864u;
    {
        const bool branch_taken_0x51d864 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x51d864) {
            ctx->pc = 0x51D868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51D864u;
            // 0x51d868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51D894u;
            goto label_51d894;
        }
    }
    ctx->pc = 0x51D86Cu;
    // 0x51d86c: 0x8c840078  lw          $a0, 0x78($a0)
    ctx->pc = 0x51d86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
label_51d870:
    // 0x51d870: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x51d870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x51d874: 0x8c4301c4  lw          $v1, 0x1C4($v0)
    ctx->pc = 0x51d874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
    // 0x51d878: 0x54a30003  bnel        $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x51D878u;
    {
        const bool branch_taken_0x51d878 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x51d878) {
            ctx->pc = 0x51D87Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51D878u;
            // 0x51d87c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51D888u;
            goto label_51d888;
        }
    }
    ctx->pc = 0x51D880u;
    // 0x51d880: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x51D880u;
    {
        const bool branch_taken_0x51d880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x51d880) {
            ctx->pc = 0x51D894u;
            goto label_51d894;
        }
    }
    ctx->pc = 0x51D888u;
label_51d888:
    // 0x51d888: 0x14c0fff9  bnez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x51D888u;
    {
        const bool branch_taken_0x51d888 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x51D88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51D888u;
            // 0x51d88c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51d888) {
            ctx->pc = 0x51D870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_51d870;
        }
    }
    ctx->pc = 0x51D890u;
    // 0x51d890: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x51d890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51d894:
    // 0x51d894: 0x3e00008  jr          $ra
    ctx->pc = 0x51D894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51D89Cu;
    // 0x51d89c: 0x0  nop
    ctx->pc = 0x51d89cu;
    // NOP
}
