#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0428
// Address: 0x1b0428 - 0x1b0458
void sub_001B0428_0x1b0428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0428_0x1b0428");
#endif

    ctx->pc = 0x1b0428u;

    // 0x1b0428: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0428u;
    {
        const bool branch_taken_0x1b0428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B042Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0428u;
            // 0x1b042c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0428) {
            ctx->pc = 0x1B044Cu;
            goto label_1b044c;
        }
    }
    ctx->pc = 0x1B0430u;
    // 0x1b0430: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b0430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b0434: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0434u;
    {
        const bool branch_taken_0x1b0434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b0434) {
            ctx->pc = 0x1B0438u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0434u;
            // 0x1b0438: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B0444u;
            goto label_1b0444;
        }
    }
    ctx->pc = 0x1B043Cu;
    // 0x1b043c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b043cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b0440: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1b0440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1b0444:
    // 0x1b0444: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b0444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b0448: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x1b0448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
label_1b044c:
    // 0x1b044c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B044Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0454u;
    // 0x1b0454: 0x0  nop
    ctx->pc = 0x1b0454u;
    // NOP
}
