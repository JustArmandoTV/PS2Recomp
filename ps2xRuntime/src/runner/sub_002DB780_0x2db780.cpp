#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB780
// Address: 0x2db780 - 0x2db790
void sub_002DB780_0x2db780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB780_0x2db780");
#endif

    ctx->pc = 0x2db780u;

    // 0x2db780: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB788u;
    // 0x2db788: 0x0  nop
    ctx->pc = 0x2db788u;
    // NOP
    // 0x2db78c: 0x0  nop
    ctx->pc = 0x2db78cu;
    // NOP
}
