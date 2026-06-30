#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00510470
// Address: 0x510470 - 0x510480
void sub_00510470_0x510470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00510470_0x510470");
#endif

    ctx->pc = 0x510470u;

    // 0x510470: 0x3e00008  jr          $ra
    ctx->pc = 0x510470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x510474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x510470u;
            // 0x510474: 0xc4800dec  lwc1        $f0, 0xDEC($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x510478u;
    // 0x510478: 0x0  nop
    ctx->pc = 0x510478u;
    // NOP
    // 0x51047c: 0x0  nop
    ctx->pc = 0x51047cu;
    // NOP
}
