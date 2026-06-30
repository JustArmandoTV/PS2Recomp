#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E4270
// Address: 0x2e4270 - 0x2e4290
void sub_002E4270_0x2e4270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4270_0x2e4270");
#endif

    ctx->pc = 0x2e4270u;

    // 0x2e4270: 0x38a20007  xori        $v0, $a1, 0x7
    ctx->pc = 0x2e4270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)7);
    // 0x2e4274: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2e4274u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e4278: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2e4278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2e427c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e427cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e4280: 0x24421b18  addiu       $v0, $v0, 0x1B18
    ctx->pc = 0x2e4280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6936));
    // 0x2e4284: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e4284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e4288: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E428Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4288u;
            // 0x2e428c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E4290u;
}
