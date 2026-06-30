#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C3590
// Address: 0x3c3590 - 0x3c35a0
void sub_003C3590_0x3c3590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3590_0x3c3590");
#endif

    ctx->pc = 0x3c3590u;

    // 0x3c3590: 0x3e00008  jr          $ra
    ctx->pc = 0x3C3590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3590u;
            // 0x3c3594: 0xe48c0de0  swc1        $f12, 0xDE0($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3552), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C3598u;
    // 0x3c3598: 0x0  nop
    ctx->pc = 0x3c3598u;
    // NOP
    // 0x3c359c: 0x0  nop
    ctx->pc = 0x3c359cu;
    // NOP
}
