#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C35A0
// Address: 0x3c35a0 - 0x3c35b0
void sub_003C35A0_0x3c35a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C35A0_0x3c35a0");
#endif

    ctx->pc = 0x3c35a0u;

    // 0x3c35a0: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x3c35a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3c35a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3C35A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C35A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C35A4u;
            // 0x3c35a8: 0xa06000b0  sb          $zero, 0xB0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 176), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C35ACu;
    // 0x3c35ac: 0x0  nop
    ctx->pc = 0x3c35acu;
    // NOP
}
