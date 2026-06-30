#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C0970
// Address: 0x1c0970 - 0x1c0980
void sub_001C0970_0x1c0970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0970_0x1c0970");
#endif

    ctx->pc = 0x1c0970u;

    // 0x1c0970: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1c0970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1c0974: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0974u;
            // 0x1c0978: 0x2442b830  addiu       $v0, $v0, -0x47D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C097Cu;
    // 0x1c097c: 0x0  nop
    ctx->pc = 0x1c097cu;
    // NOP
}
