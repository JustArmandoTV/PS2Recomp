#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BF9F0
// Address: 0x3bf9f0 - 0x3bfa00
void sub_003BF9F0_0x3bf9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF9F0_0x3bf9f0");
#endif

    ctx->pc = 0x3bf9f0u;

    // 0x3bf9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF9F0u;
            // 0x3bf9f4: 0xe48c0de8  swc1        $f12, 0xDE8($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3560), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BF9F8u;
    // 0x3bf9f8: 0x0  nop
    ctx->pc = 0x3bf9f8u;
    // NOP
    // 0x3bf9fc: 0x0  nop
    ctx->pc = 0x3bf9fcu;
    // NOP
}
