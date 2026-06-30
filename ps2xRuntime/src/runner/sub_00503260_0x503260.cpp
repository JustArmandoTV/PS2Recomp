#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00503260
// Address: 0x503260 - 0x503280
void sub_00503260_0x503260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00503260_0x503260");
#endif

    ctx->pc = 0x503260u;

    // 0x503260: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x503260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x503264: 0x244247e0  addiu       $v0, $v0, 0x47E0
    ctx->pc = 0x503264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18400));
    // 0x503268: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x503268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x50326c: 0x3e00008  jr          $ra
    ctx->pc = 0x50326Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50326Cu;
            // 0x503270: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x503274u;
    // 0x503274: 0x0  nop
    ctx->pc = 0x503274u;
    // NOP
    // 0x503278: 0x0  nop
    ctx->pc = 0x503278u;
    // NOP
    // 0x50327c: 0x0  nop
    ctx->pc = 0x50327cu;
    // NOP
}
