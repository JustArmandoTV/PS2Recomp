#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00386C10
// Address: 0x386c10 - 0x386c20
void sub_00386C10_0x386c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386C10_0x386c10");
#endif

    ctx->pc = 0x386c10u;

    // 0x386c10: 0x3e00008  jr          $ra
    ctx->pc = 0x386C10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386C10u;
            // 0x386c14: 0xe48c0158  swc1        $f12, 0x158($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 344), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x386C18u;
    // 0x386c18: 0x0  nop
    ctx->pc = 0x386c18u;
    // NOP
    // 0x386c1c: 0x0  nop
    ctx->pc = 0x386c1cu;
    // NOP
}
