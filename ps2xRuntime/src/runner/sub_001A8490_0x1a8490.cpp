#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A8490
// Address: 0x1a8490 - 0x1a84a0
void sub_001A8490_0x1a8490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8490_0x1a8490");
#endif

    ctx->pc = 0x1a8490u;

    // 0x1a8490: 0x38a23820  xori        $v0, $a1, 0x3820
    ctx->pc = 0x1a8490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)14368);
    // 0x1a8494: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8494u;
            // 0x1a8498: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A849Cu;
    // 0x1a849c: 0x0  nop
    ctx->pc = 0x1a849cu;
    // NOP
}
