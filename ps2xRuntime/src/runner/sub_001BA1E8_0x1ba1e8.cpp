#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BA1E8
// Address: 0x1ba1e8 - 0x1ba210
void sub_001BA1E8_0x1ba1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA1E8_0x1ba1e8");
#endif

    ctx->pc = 0x1ba1e8u;

    // 0x1ba1e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ba1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ba1ec: 0x2843ffff  slti        $v1, $v0, -0x1
    ctx->pc = 0x1ba1ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x1ba1f0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1ba1f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ba1f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA1F4u;
    {
        const bool branch_taken_0x1ba1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA1F4u;
            // 0x1ba1f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba1f4) {
            ctx->pc = 0x1BA208u;
            goto label_1ba208;
        }
    }
    ctx->pc = 0x1BA1FCu;
    // 0x1ba1fc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BA1FCu;
    {
        const bool branch_taken_0x1ba1fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA1FCu;
            // 0x1ba200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba1fc) {
            ctx->pc = 0x1BA208u;
            goto label_1ba208;
        }
    }
    ctx->pc = 0x1BA204u;
    // 0x1ba204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ba204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ba208:
    // 0x1ba208: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA210u;
}
