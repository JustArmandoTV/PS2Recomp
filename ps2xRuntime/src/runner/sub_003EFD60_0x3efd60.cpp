#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003EFD60
// Address: 0x3efd60 - 0x3efd70
void sub_003EFD60_0x3efd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EFD60_0x3efd60");
#endif

    ctx->pc = 0x3efd60u;

    // 0x3efd60: 0x3e00008  jr          $ra
    ctx->pc = 0x3EFD60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EFD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFD60u;
            // 0x3efd64: 0xac8500d4  sw          $a1, 0xD4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3EFD68u;
    // 0x3efd68: 0x0  nop
    ctx->pc = 0x3efd68u;
    // NOP
    // 0x3efd6c: 0x0  nop
    ctx->pc = 0x3efd6cu;
    // NOP
}
