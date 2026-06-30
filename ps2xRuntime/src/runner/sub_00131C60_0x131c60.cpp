#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00131C60
// Address: 0x131c60 - 0x131c80
void sub_00131C60_0x131c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131C60_0x131c60");
#endif

    ctx->pc = 0x131c60u;

    // 0x131c60: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x131c60u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x131c64: 0x44886800  mtc1        $t0, $f13
    ctx->pc = 0x131c64u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x131c68: 0x0  nop
    ctx->pc = 0x131c68u;
    // NOP
    // 0x131c6c: 0x460c6816  rsqrt.s     $f0, $f13, $f12
    ctx->pc = 0x131c6cu;
    ctx->f[0] = 1.0f / sqrtf(ctx->f[13]);
    // 0x131c70: 0x0  nop
    ctx->pc = 0x131c70u;
    // NOP
    // 0x131c74: 0x0  nop
    ctx->pc = 0x131c74u;
    // NOP
    // 0x131c78: 0x3e00008  jr          $ra
    ctx->pc = 0x131C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131C80u;
}
