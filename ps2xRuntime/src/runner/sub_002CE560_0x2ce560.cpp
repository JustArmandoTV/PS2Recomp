#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CE560
// Address: 0x2ce560 - 0x2ce580
void sub_002CE560_0x2ce560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE560_0x2ce560");
#endif

    ctx->pc = 0x2ce560u;

    // 0x2ce560: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ce560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ce564: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ce564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce568: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2ce568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2ce56c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2ce56cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2ce570: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2ce570u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2ce574: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2ce574u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2ce578: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE578u;
            // 0x2ce57c: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE580u;
}
