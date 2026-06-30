#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00131C40
// Address: 0x131c40 - 0x131c60
void sub_00131C40_0x131c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131C40_0x131c40");
#endif

    ctx->pc = 0x131c40u;

    // 0x131c40: 0x0  nop
    ctx->pc = 0x131c40u;
    // NOP
    // 0x131c44: 0x0  nop
    ctx->pc = 0x131c44u;
    // NOP
    // 0x131c48: 0x460c0004  c1          0xC0004
    ctx->pc = 0x131c48u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x131c4c: 0x0  nop
    ctx->pc = 0x131c4cu;
    // NOP
    // 0x131c50: 0x0  nop
    ctx->pc = 0x131c50u;
    // NOP
    // 0x131c54: 0x3e00008  jr          $ra
    ctx->pc = 0x131C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131C5Cu;
    // 0x131c5c: 0x0  nop
    ctx->pc = 0x131c5cu;
    // NOP
}
