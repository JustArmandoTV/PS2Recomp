#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00139770
// Address: 0x139770 - 0x139780
void sub_00139770_0x139770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139770_0x139770");
#endif

    ctx->pc = 0x139770u;

    // 0x139770: 0x3e00008  jr          $ra
    ctx->pc = 0x139770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139770u;
            // 0x139774: 0xe78c8360  swc1        $f12, -0x7CA0($gp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294935392), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139778u;
    // 0x139778: 0x0  nop
    ctx->pc = 0x139778u;
    // NOP
    // 0x13977c: 0x0  nop
    ctx->pc = 0x13977cu;
    // NOP
}
