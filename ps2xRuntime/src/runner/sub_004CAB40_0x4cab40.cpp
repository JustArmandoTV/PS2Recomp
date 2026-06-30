#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CAB40
// Address: 0x4cab40 - 0x4cab60
void sub_004CAB40_0x4cab40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CAB40_0x4cab40");
#endif

    ctx->pc = 0x4cab40u;

    // 0x4cab40: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x4cab40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x4cab44: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4cab44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cab48: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x4cab48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x4cab4c: 0x3e00008  jr          $ra
    ctx->pc = 0x4CAB4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CAB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAB4Cu;
            // 0x4cab50: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CAB54u;
    // 0x4cab54: 0x0  nop
    ctx->pc = 0x4cab54u;
    // NOP
    // 0x4cab58: 0x0  nop
    ctx->pc = 0x4cab58u;
    // NOP
    // 0x4cab5c: 0x0  nop
    ctx->pc = 0x4cab5cu;
    // NOP
}
