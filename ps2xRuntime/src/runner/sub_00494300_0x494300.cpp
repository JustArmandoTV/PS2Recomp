#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00494300
// Address: 0x494300 - 0x494310
void sub_00494300_0x494300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00494300_0x494300");
#endif

    ctx->pc = 0x494300u;

    // 0x494300: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x494300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x494304: 0x3e00008  jr          $ra
    ctx->pc = 0x494304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x494308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494304u;
            // 0x494308: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49430Cu;
    // 0x49430c: 0x0  nop
    ctx->pc = 0x49430cu;
    // NOP
}
