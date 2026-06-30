#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BE830
// Address: 0x2be830 - 0x2be860
void sub_002BE830_0x2be830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE830_0x2be830");
#endif

    ctx->pc = 0x2be830u;

    // 0x2be830: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2be830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2be834: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2be834u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be838: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2be838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2be83c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2be83cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2be840: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2be840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2be844: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2be844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2be848: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2be848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2be84c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2be84cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2be850: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2be850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2be854: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x2be854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x2be858: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE858u;
            // 0x2be85c: 0xac800024  sw          $zero, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BE860u;
}
