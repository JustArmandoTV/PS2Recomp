#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A5B10
// Address: 0x4a5b10 - 0x4a5b20
void sub_004A5B10_0x4a5b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5B10_0x4a5b10");
#endif

    ctx->pc = 0x4a5b10u;

    // 0x4a5b10: 0x3e00008  jr          $ra
    ctx->pc = 0x4A5B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5B10u;
            // 0x4a5b14: 0xe48c0ddc  swc1        $f12, 0xDDC($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3548), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A5B18u;
    // 0x4a5b18: 0x0  nop
    ctx->pc = 0x4a5b18u;
    // NOP
    // 0x4a5b1c: 0x0  nop
    ctx->pc = 0x4a5b1cu;
    // NOP
}
