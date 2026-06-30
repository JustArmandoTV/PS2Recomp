#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002817A0
// Address: 0x2817a0 - 0x2817d0
void sub_002817A0_0x2817a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002817A0_0x2817a0");
#endif

    ctx->pc = 0x2817a0u;

    // 0x2817a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2817a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2817a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2817A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2817A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2817A4u;
            // 0x2817a8: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2817ACu;
    // 0x2817ac: 0x0  nop
    ctx->pc = 0x2817acu;
    // NOP
    // 0x2817b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2817B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2817B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2817B0u;
            // 0x2817b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2817B8u;
    // 0x2817b8: 0x0  nop
    ctx->pc = 0x2817b8u;
    // NOP
    // 0x2817bc: 0x0  nop
    ctx->pc = 0x2817bcu;
    // NOP
    // 0x2817c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2817C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2817C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2817C0u;
            // 0x2817c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2817C8u;
    // 0x2817c8: 0x0  nop
    ctx->pc = 0x2817c8u;
    // NOP
    // 0x2817cc: 0x0  nop
    ctx->pc = 0x2817ccu;
    // NOP
}
