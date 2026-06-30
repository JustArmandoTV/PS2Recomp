#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0035EE40
// Address: 0x35ee40 - 0x35ee50
void sub_0035EE40_0x35ee40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035EE40_0x35ee40");
#endif

    ctx->pc = 0x35ee40u;

    // 0x35ee40: 0x3e00008  jr          $ra
    ctx->pc = 0x35EE40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35EE40u;
            // 0x35ee44: 0xc480000c  lwc1        $f0, 0xC($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35EE48u;
    // 0x35ee48: 0x0  nop
    ctx->pc = 0x35ee48u;
    // NOP
    // 0x35ee4c: 0x0  nop
    ctx->pc = 0x35ee4cu;
    // NOP
}
