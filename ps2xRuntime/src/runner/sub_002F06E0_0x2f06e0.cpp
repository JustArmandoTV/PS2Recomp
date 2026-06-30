#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F06E0
// Address: 0x2f06e0 - 0x2f06f0
void sub_002F06E0_0x2f06e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F06E0_0x2f06e0");
#endif

    ctx->pc = 0x2f06e0u;

    // 0x2f06e0: 0xe48c0014  swc1        $f12, 0x14($a0)
    ctx->pc = 0x2f06e0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2f06e4: 0xe48d0018  swc1        $f13, 0x18($a0)
    ctx->pc = 0x2f06e4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2f06e8: 0x80517cc  j           func_145F30
    ctx->pc = 0x2F06E8u;
    ctx->pc = 0x2F06ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F06E8u;
            // 0x2f06ec: 0xe48e001c  swc1        $f14, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x145F30u;
    if (runtime->hasFunction(0x145F30u)) {
        auto targetFn = runtime->lookupFunction(0x145F30u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00145F30_0x145f30(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2F06F0u;
}
