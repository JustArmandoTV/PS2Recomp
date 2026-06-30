#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004AA4F0
// Address: 0x4aa4f0 - 0x4aa500
void sub_004AA4F0_0x4aa4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AA4F0_0x4aa4f0");
#endif

    ctx->pc = 0x4aa4f0u;

    // 0x4aa4f0: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x4aa4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x4aa4f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4AA4F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AA4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA4F4u;
            // 0x4aa4f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AA4FCu;
    // 0x4aa4fc: 0x0  nop
    ctx->pc = 0x4aa4fcu;
    // NOP
}
