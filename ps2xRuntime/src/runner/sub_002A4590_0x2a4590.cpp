#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A4590
// Address: 0x2a4590 - 0x2a45a0
void sub_002A4590_0x2a4590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4590_0x2a4590");
#endif

    ctx->pc = 0x2a4590u;

    // 0x2a4590: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4590u;
            // 0x2a4594: 0xe48c019c  swc1        $f12, 0x19C($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 412), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A4598u;
    // 0x2a4598: 0x0  nop
    ctx->pc = 0x2a4598u;
    // NOP
    // 0x2a459c: 0x0  nop
    ctx->pc = 0x2a459cu;
    // NOP
}
