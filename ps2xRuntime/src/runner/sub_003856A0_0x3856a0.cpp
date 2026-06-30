#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003856A0
// Address: 0x3856a0 - 0x3856c0
void sub_003856A0_0x3856a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003856A0_0x3856a0");
#endif

    ctx->pc = 0x3856a0u;

    // 0x3856a0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3856a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3856a4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3856a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3856a8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3856a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3856ac: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3856acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3856b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3856B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3856B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3856B0u;
            // 0x3856b4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3856B8u;
    // 0x3856b8: 0x0  nop
    ctx->pc = 0x3856b8u;
    // NOP
    // 0x3856bc: 0x0  nop
    ctx->pc = 0x3856bcu;
    // NOP
}
