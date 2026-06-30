#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00290F60
// Address: 0x290f60 - 0x290f70
void sub_00290F60_0x290f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290F60_0x290f60");
#endif

    ctx->pc = 0x290f60u;

    // 0x290f60: 0xe48c004c  swc1        $f12, 0x4C($a0)
    ctx->pc = 0x290f60u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x290f64: 0x3e00008  jr          $ra
    ctx->pc = 0x290F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290F64u;
            // 0x290f68: 0xe48d005c  swc1        $f13, 0x5C($a0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290F6Cu;
    // 0x290f6c: 0x0  nop
    ctx->pc = 0x290f6cu;
    // NOP
}
