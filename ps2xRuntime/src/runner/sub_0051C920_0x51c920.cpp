#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051C920
// Address: 0x51c920 - 0x51c940
void sub_0051C920_0x51c920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051C920_0x51c920");
#endif

    ctx->pc = 0x51c920u;

    // 0x51c920: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c924: 0x24425a48  addiu       $v0, $v0, 0x5A48
    ctx->pc = 0x51c924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23112));
    // 0x51c928: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x51c928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x51c92c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x51c92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x51c930: 0xac443e40  sw          $a0, 0x3E40($v0)
    ctx->pc = 0x51c930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15936), GPR_U32(ctx, 4));
    // 0x51c934: 0x3e00008  jr          $ra
    ctx->pc = 0x51C934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C934u;
            // 0x51c938: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C93Cu;
    // 0x51c93c: 0x0  nop
    ctx->pc = 0x51c93cu;
    // NOP
}
