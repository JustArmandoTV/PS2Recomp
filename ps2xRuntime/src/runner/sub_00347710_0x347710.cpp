#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00347710
// Address: 0x347710 - 0x347720
void sub_00347710_0x347710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347710_0x347710");
#endif

    ctx->pc = 0x347710u;

    // 0x347710: 0x3e00008  jr          $ra
    ctx->pc = 0x347710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347710u;
            // 0x347714: 0xc480006c  lwc1        $f0, 0x6C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x347718u;
    // 0x347718: 0x0  nop
    ctx->pc = 0x347718u;
    // NOP
    // 0x34771c: 0x0  nop
    ctx->pc = 0x34771cu;
    // NOP
}
