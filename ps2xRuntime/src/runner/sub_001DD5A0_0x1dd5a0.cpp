#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD5A0
// Address: 0x1dd5a0 - 0x1dd5b0
void sub_001DD5A0_0x1dd5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD5A0_0x1dd5a0");
#endif

    ctx->pc = 0x1dd5a0u;

    // 0x1dd5a0: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x1dd5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd5a4: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1dd5a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1dd5a8: 0x80eea24  j           func_3BA890
    ctx->pc = 0x1DD5A8u;
    ctx->pc = 0x1DD5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD5A8u;
            // 0x1dd5ac: 0xe480002c  swc1        $f0, 0x2C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA890u;
    if (runtime->hasFunction(0x3BA890u)) {
        auto targetFn = runtime->lookupFunction(0x3BA890u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_003BA890_0x3ba890(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1DD5B0u;
}
