#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C3350
// Address: 0x3c3350 - 0x3c3360
void sub_003C3350_0x3c3350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3350_0x3c3350");
#endif

    ctx->pc = 0x3c3350u;

    // 0x3c3350: 0x3e00008  jr          $ra
    ctx->pc = 0x3C3350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3350u;
            // 0x3c3354: 0xc48000c0  lwc1        $f0, 0xC0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C3358u;
    // 0x3c3358: 0x0  nop
    ctx->pc = 0x3c3358u;
    // NOP
    // 0x3c335c: 0x0  nop
    ctx->pc = 0x3c335cu;
    // NOP
}
