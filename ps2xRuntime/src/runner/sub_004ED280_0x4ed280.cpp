#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004ED280
// Address: 0x4ed280 - 0x4ed2b0
void sub_004ED280_0x4ed280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED280_0x4ed280");
#endif

    ctx->pc = 0x4ed280u;

    // 0x4ed280: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4ed280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4ed284: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4ED284u;
    {
        const bool branch_taken_0x4ed284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ed284) {
            ctx->pc = 0x4ED288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED284u;
            // 0x4ed288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4ED2A4u;
            goto label_4ed2a4;
        }
    }
    ctx->pc = 0x4ED28Cu;
    // 0x4ed28c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4ed28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4ed290: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x4ed290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x4ed294: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4ed294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4ed298: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x4ed298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4ed29c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ed29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ed2a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4ed2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4ed2a4:
    // 0x4ed2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4ED2A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ED2ACu;
    // 0x4ed2ac: 0x0  nop
    ctx->pc = 0x4ed2acu;
    // NOP
}
