#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00376220
// Address: 0x376220 - 0x376230
void sub_00376220_0x376220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376220_0x376220");
#endif

    ctx->pc = 0x376220u;

    // 0x376220: 0x3e00008  jr          $ra
    ctx->pc = 0x376220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x376220u;
            // 0x376224: 0xac8500dc  sw          $a1, 0xDC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x376228u;
    // 0x376228: 0x0  nop
    ctx->pc = 0x376228u;
    // NOP
    // 0x37622c: 0x0  nop
    ctx->pc = 0x37622cu;
    // NOP
}
