#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051B090
// Address: 0x51b090 - 0x51b0a0
void sub_0051B090_0x51b090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051B090_0x51b090");
#endif

    ctx->pc = 0x51b090u;

    // 0x51b090: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x51b090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x51b094: 0x3e00008  jr          $ra
    ctx->pc = 0x51B094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51B098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B094u;
            // 0x51b098: 0xa083008d  sb          $v1, 0x8D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 141), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51B09Cu;
    // 0x51b09c: 0x0  nop
    ctx->pc = 0x51b09cu;
    // NOP
}
