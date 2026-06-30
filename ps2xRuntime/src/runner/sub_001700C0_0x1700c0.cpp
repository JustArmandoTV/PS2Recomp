#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001700C0
// Address: 0x1700c0 - 0x1700d0
void sub_001700C0_0x1700c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001700C0_0x1700c0");
#endif

    ctx->pc = 0x1700c0u;

    // 0x1700c0: 0xac86004c  sw          $a2, 0x4C($a0)
    ctx->pc = 0x1700c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 6));
    // 0x1700c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1700C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1700C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1700C4u;
            // 0x1700c8: 0xac850048  sw          $a1, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1700CCu;
    // 0x1700cc: 0x0  nop
    ctx->pc = 0x1700ccu;
    // NOP
}
