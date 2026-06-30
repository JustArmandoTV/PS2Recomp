#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0039F490
// Address: 0x39f490 - 0x39f4b0
void sub_0039F490_0x39f490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039F490_0x39f490");
#endif

    ctx->pc = 0x39f490u;

    // 0x39f490: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x39f490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x39f494: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x39f494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39f498: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x39f498u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x39f49c: 0x0  nop
    ctx->pc = 0x39f49cu;
    // NOP
    // 0x39f4a0: 0x0  nop
    ctx->pc = 0x39f4a0u;
    // NOP
    // 0x39f4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x39F4A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39F4ACu;
    // 0x39f4ac: 0x0  nop
    ctx->pc = 0x39f4acu;
    // NOP
}
