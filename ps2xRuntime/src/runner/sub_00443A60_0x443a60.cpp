#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00443A60
// Address: 0x443a60 - 0x443a70
void sub_00443A60_0x443a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443A60_0x443a60");
#endif

    ctx->pc = 0x443a60u;

    // 0x443a60: 0x3e00008  jr          $ra
    ctx->pc = 0x443A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x443A60u;
            // 0x443a64: 0xc4800048  lwc1        $f0, 0x48($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x443A68u;
    // 0x443a68: 0x0  nop
    ctx->pc = 0x443a68u;
    // NOP
    // 0x443a6c: 0x0  nop
    ctx->pc = 0x443a6cu;
    // NOP
}
