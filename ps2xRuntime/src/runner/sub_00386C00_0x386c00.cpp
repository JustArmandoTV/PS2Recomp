#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00386C00
// Address: 0x386c00 - 0x386c10
void sub_00386C00_0x386c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386C00_0x386c00");
#endif

    ctx->pc = 0x386c00u;

    // 0x386c00: 0x3e00008  jr          $ra
    ctx->pc = 0x386C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386C00u;
            // 0x386c04: 0xe48c015c  swc1        $f12, 0x15C($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 348), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x386C08u;
    // 0x386c08: 0x0  nop
    ctx->pc = 0x386c08u;
    // NOP
    // 0x386c0c: 0x0  nop
    ctx->pc = 0x386c0cu;
    // NOP
}
