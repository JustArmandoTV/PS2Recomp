#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00323EE0
// Address: 0x323ee0 - 0x323ef0
void sub_00323EE0_0x323ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323EE0_0x323ee0");
#endif

    ctx->pc = 0x323ee0u;

    // 0x323ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x323EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323EE0u;
            // 0x323ee4: 0xe48c0060  swc1        $f12, 0x60($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x323EE8u;
    // 0x323ee8: 0x0  nop
    ctx->pc = 0x323ee8u;
    // NOP
    // 0x323eec: 0x0  nop
    ctx->pc = 0x323eecu;
    // NOP
}
