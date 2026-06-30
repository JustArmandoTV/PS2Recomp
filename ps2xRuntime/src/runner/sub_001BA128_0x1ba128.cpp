#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BA128
// Address: 0x1ba128 - 0x1ba140
void sub_001BA128_0x1ba128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA128_0x1ba128");
#endif

    ctx->pc = 0x1ba128u;

    // 0x1ba128: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ba128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba12c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1ba12cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x1ba130: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ba130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1ba134: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA134u;
            // 0x1ba138: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA13Cu;
    // 0x1ba13c: 0x0  nop
    ctx->pc = 0x1ba13cu;
    // NOP
}
