#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00209580
// Address: 0x209580 - 0x209590
void sub_00209580_0x209580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209580_0x209580");
#endif

    ctx->pc = 0x209580u;

    // 0x209580: 0x3e00008  jr          $ra
    ctx->pc = 0x209580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209580u;
            // 0x209584: 0xc4800018  lwc1        $f0, 0x18($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x209588u;
    // 0x209588: 0x0  nop
    ctx->pc = 0x209588u;
    // NOP
    // 0x20958c: 0x0  nop
    ctx->pc = 0x20958cu;
    // NOP
}
