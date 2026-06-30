#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00500520
// Address: 0x500520 - 0x500530
void sub_00500520_0x500520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00500520_0x500520");
#endif

    ctx->pc = 0x500520u;

    // 0x500520: 0x3e00008  jr          $ra
    ctx->pc = 0x500520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x500524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500520u;
            // 0x500524: 0xc480001c  lwc1        $f0, 0x1C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x500528u;
    // 0x500528: 0x0  nop
    ctx->pc = 0x500528u;
    // NOP
    // 0x50052c: 0x0  nop
    ctx->pc = 0x50052cu;
    // NOP
}
