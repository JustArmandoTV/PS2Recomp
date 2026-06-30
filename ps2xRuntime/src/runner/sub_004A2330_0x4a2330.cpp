#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A2330
// Address: 0x4a2330 - 0x4a2340
void sub_004A2330_0x4a2330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A2330_0x4a2330");
#endif

    ctx->pc = 0x4a2330u;

    // 0x4a2330: 0x3e00008  jr          $ra
    ctx->pc = 0x4A2330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A2334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A2330u;
            // 0x4a2334: 0xac8500f4  sw          $a1, 0xF4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A2338u;
    // 0x4a2338: 0x0  nop
    ctx->pc = 0x4a2338u;
    // NOP
    // 0x4a233c: 0x0  nop
    ctx->pc = 0x4a233cu;
    // NOP
}
