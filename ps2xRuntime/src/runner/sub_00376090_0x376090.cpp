#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00376090
// Address: 0x376090 - 0x3760a0
void sub_00376090_0x376090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376090_0x376090");
#endif

    ctx->pc = 0x376090u;

    // 0x376090: 0x3e00008  jr          $ra
    ctx->pc = 0x376090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x376090u;
            // 0x376094: 0x808211a3  lb          $v0, 0x11A3($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4515)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x376098u;
    // 0x376098: 0x0  nop
    ctx->pc = 0x376098u;
    // NOP
    // 0x37609c: 0x0  nop
    ctx->pc = 0x37609cu;
    // NOP
}
