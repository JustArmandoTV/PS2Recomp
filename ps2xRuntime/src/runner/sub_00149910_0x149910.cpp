#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00149910
// Address: 0x149910 - 0x149920
void sub_00149910_0x149910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149910_0x149910");
#endif

    ctx->pc = 0x149910u;

    // 0x149910: 0x3e00008  jr          $ra
    ctx->pc = 0x149910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149910u;
            // 0x149914: 0xaf848318  sw          $a0, -0x7CE8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935320), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x149918u;
    // 0x149918: 0x0  nop
    ctx->pc = 0x149918u;
    // NOP
    // 0x14991c: 0x0  nop
    ctx->pc = 0x14991cu;
    // NOP
}
