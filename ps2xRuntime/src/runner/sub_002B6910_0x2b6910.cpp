#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B6910
// Address: 0x2b6910 - 0x2b6920
void sub_002B6910_0x2b6910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6910_0x2b6910");
#endif

    ctx->pc = 0x2b6910u;

    // 0x2b6910: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6910u;
            // 0x2b6914: 0xe48c00e0  swc1        $f12, 0xE0($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B6918u;
    // 0x2b6918: 0x0  nop
    ctx->pc = 0x2b6918u;
    // NOP
    // 0x2b691c: 0x0  nop
    ctx->pc = 0x2b691cu;
    // NOP
}
