#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00384730
// Address: 0x384730 - 0x384740
void sub_00384730_0x384730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384730_0x384730");
#endif

    ctx->pc = 0x384730u;

    // 0x384730: 0x3e00008  jr          $ra
    ctx->pc = 0x384730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384730u;
            // 0x384734: 0xe48c0120  swc1        $f12, 0x120($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x384738u;
    // 0x384738: 0x0  nop
    ctx->pc = 0x384738u;
    // NOP
    // 0x38473c: 0x0  nop
    ctx->pc = 0x38473cu;
    // NOP
}
