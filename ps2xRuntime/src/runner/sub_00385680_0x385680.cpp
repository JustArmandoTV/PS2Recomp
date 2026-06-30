#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00385680
// Address: 0x385680 - 0x3856a0
void sub_00385680_0x385680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385680_0x385680");
#endif

    ctx->pc = 0x385680u;

    // 0x385680: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x385680u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x385684: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x385684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x385688: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x385688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x38568c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x38568cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x385690: 0x3e00008  jr          $ra
    ctx->pc = 0x385690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x385690u;
            // 0x385694: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x385698u;
    // 0x385698: 0x0  nop
    ctx->pc = 0x385698u;
    // NOP
    // 0x38569c: 0x0  nop
    ctx->pc = 0x38569cu;
    // NOP
}
