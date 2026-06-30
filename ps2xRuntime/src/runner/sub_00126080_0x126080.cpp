#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00126080
// Address: 0x126080 - 0x126090
void sub_00126080_0x126080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126080_0x126080");
#endif

    ctx->pc = 0x126080u;

    // 0x126080: 0x4820001  bltzl       $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x126080u;
    {
        const bool branch_taken_0x126080 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x126080) {
            ctx->pc = 0x126084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x126080u;
            // 0x126084: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x126088u;
            goto label_126088;
        }
    }
    ctx->pc = 0x126088u;
label_126088:
    // 0x126088: 0x3e00008  jr          $ra
    ctx->pc = 0x126088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12608Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126088u;
            // 0x12608c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x126090u;
}
