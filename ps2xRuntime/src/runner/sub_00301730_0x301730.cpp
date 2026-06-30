#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00301730
// Address: 0x301730 - 0x301740
void sub_00301730_0x301730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301730_0x301730");
#endif

    ctx->pc = 0x301730u;

    // 0x301730: 0x3e00008  jr          $ra
    ctx->pc = 0x301730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301730u;
            // 0x301734: 0xac850db8  sw          $a1, 0xDB8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3512), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x301738u;
    // 0x301738: 0x0  nop
    ctx->pc = 0x301738u;
    // NOP
    // 0x30173c: 0x0  nop
    ctx->pc = 0x30173cu;
    // NOP
}
