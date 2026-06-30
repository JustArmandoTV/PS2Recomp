#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00443570
// Address: 0x443570 - 0x443580
void sub_00443570_0x443570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443570_0x443570");
#endif

    ctx->pc = 0x443570u;

    // 0x443570: 0x3e00008  jr          $ra
    ctx->pc = 0x443570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x443570u;
            // 0x443574: 0xac8500d0  sw          $a1, 0xD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x443578u;
    // 0x443578: 0x0  nop
    ctx->pc = 0x443578u;
    // NOP
    // 0x44357c: 0x0  nop
    ctx->pc = 0x44357cu;
    // NOP
}
