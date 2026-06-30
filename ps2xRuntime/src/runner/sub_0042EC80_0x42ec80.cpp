#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042EC80
// Address: 0x42ec80 - 0x42ec90
void sub_0042EC80_0x42ec80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042EC80_0x42ec80");
#endif

    ctx->pc = 0x42ec80u;

    // 0x42ec80: 0x3e00008  jr          $ra
    ctx->pc = 0x42EC80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42EC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42EC80u;
            // 0x42ec84: 0xc4800100  lwc1        $f0, 0x100($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42EC88u;
    // 0x42ec88: 0x0  nop
    ctx->pc = 0x42ec88u;
    // NOP
    // 0x42ec8c: 0x0  nop
    ctx->pc = 0x42ec8cu;
    // NOP
}
