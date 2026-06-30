#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AD370
// Address: 0x2ad370 - 0x2ad380
void sub_002AD370_0x2ad370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD370_0x2ad370");
#endif

    ctx->pc = 0x2ad370u;

    // 0x2ad370: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x2ad370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x2ad374: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD374u;
            // 0x2ad378: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD37Cu;
    // 0x2ad37c: 0x0  nop
    ctx->pc = 0x2ad37cu;
    // NOP
}
