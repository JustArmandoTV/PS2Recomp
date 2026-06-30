#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DCF00
// Address: 0x3dcf00 - 0x3dcf30
void sub_003DCF00_0x3dcf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCF00_0x3dcf00");
#endif

    ctx->pc = 0x3dcf00u;

    // 0x3dcf00: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3dcf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3dcf04: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DCF04u;
    {
        const bool branch_taken_0x3dcf04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dcf04) {
            ctx->pc = 0x3DCF08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCF04u;
            // 0x3dcf08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DCF24u;
            goto label_3dcf24;
        }
    }
    ctx->pc = 0x3DCF0Cu;
    // 0x3dcf0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3dcf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3dcf10: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3dcf10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3dcf14: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3dcf14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3dcf18: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x3dcf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3dcf1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3dcf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3dcf20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3dcf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3dcf24:
    // 0x3dcf24: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCF24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DCF2Cu;
    // 0x3dcf2c: 0x0  nop
    ctx->pc = 0x3dcf2cu;
    // NOP
}
