#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00348730
// Address: 0x348730 - 0x348760
void sub_00348730_0x348730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348730_0x348730");
#endif

    ctx->pc = 0x348730u;

    // 0x348730: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x348730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x348734: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x348734u;
    {
        const bool branch_taken_0x348734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x348734) {
            ctx->pc = 0x348738u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x348734u;
            // 0x348738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x348754u;
            goto label_348754;
        }
    }
    ctx->pc = 0x34873Cu;
    // 0x34873c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x34873cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x348740: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x348740u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x348744: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x348744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x348748: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x348748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x34874c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34874cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x348750: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x348750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_348754:
    // 0x348754: 0x3e00008  jr          $ra
    ctx->pc = 0x348754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34875Cu;
    // 0x34875c: 0x0  nop
    ctx->pc = 0x34875cu;
    // NOP
}
