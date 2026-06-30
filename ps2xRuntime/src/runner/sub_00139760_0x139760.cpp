#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00139760
// Address: 0x139760 - 0x139770
void sub_00139760_0x139760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139760_0x139760");
#endif

    ctx->pc = 0x139760u;

    // 0x139760: 0x3e00008  jr          $ra
    ctx->pc = 0x139760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139760u;
            // 0x139764: 0xe78c8364  swc1        $f12, -0x7C9C($gp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294935396), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139768u;
    // 0x139768: 0x0  nop
    ctx->pc = 0x139768u;
    // NOP
    // 0x13976c: 0x0  nop
    ctx->pc = 0x13976cu;
    // NOP
}
