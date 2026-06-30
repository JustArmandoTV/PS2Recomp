#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00371AF0
// Address: 0x371af0 - 0x371b00
void sub_00371AF0_0x371af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371AF0_0x371af0");
#endif

    ctx->pc = 0x371af0u;

    // 0x371af0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x371af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x371af4: 0x3e00008  jr          $ra
    ctx->pc = 0x371AF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371AF4u;
            // 0x371af8: 0x8c426050  lw          $v0, 0x6050($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24656)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x371AFCu;
    // 0x371afc: 0x0  nop
    ctx->pc = 0x371afcu;
    // NOP
}
