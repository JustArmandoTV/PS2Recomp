#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DC430
// Address: 0x3dc430 - 0x3dc440
void sub_003DC430_0x3dc430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC430_0x3dc430");
#endif

    ctx->pc = 0x3dc430u;

    // 0x3dc430: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC430u;
            // 0x3dc434: 0xac850060  sw          $a1, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DC438u;
    // 0x3dc438: 0x0  nop
    ctx->pc = 0x3dc438u;
    // NOP
    // 0x3dc43c: 0x0  nop
    ctx->pc = 0x3dc43cu;
    // NOP
}
