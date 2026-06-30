#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00376230
// Address: 0x376230 - 0x376240
void sub_00376230_0x376230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376230_0x376230");
#endif

    ctx->pc = 0x376230u;

    // 0x376230: 0x3e00008  jr          $ra
    ctx->pc = 0x376230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x376230u;
            // 0x376234: 0x8c820130  lw          $v0, 0x130($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x376238u;
    // 0x376238: 0x0  nop
    ctx->pc = 0x376238u;
    // NOP
    // 0x37623c: 0x0  nop
    ctx->pc = 0x37623cu;
    // NOP
}
