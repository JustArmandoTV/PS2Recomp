#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037B040
// Address: 0x37b040 - 0x37b050
void sub_0037B040_0x37b040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B040_0x37b040");
#endif

    ctx->pc = 0x37b040u;

    // 0x37b040: 0x3e00008  jr          $ra
    ctx->pc = 0x37B040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37B040u;
            // 0x37b044: 0xac850200  sw          $a1, 0x200($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 512), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37B048u;
    // 0x37b048: 0x0  nop
    ctx->pc = 0x37b048u;
    // NOP
    // 0x37b04c: 0x0  nop
    ctx->pc = 0x37b04cu;
    // NOP
}
