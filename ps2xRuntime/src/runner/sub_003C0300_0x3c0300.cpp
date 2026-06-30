#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C0300
// Address: 0x3c0300 - 0x3c0310
void sub_003C0300_0x3c0300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0300_0x3c0300");
#endif

    ctx->pc = 0x3c0300u;

    // 0x3c0300: 0xa4800050  sh          $zero, 0x50($a0)
    ctx->pc = 0x3c0300u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 0));
    // 0x3c0304: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c0304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c0308: 0x3e00008  jr          $ra
    ctx->pc = 0x3C0308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C030Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0308u;
            // 0x3c030c: 0xa4830054  sh          $v1, 0x54($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 84), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C0310u;
}
