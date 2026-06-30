#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00347700
// Address: 0x347700 - 0x347710
void sub_00347700_0x347700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347700_0x347700");
#endif

    ctx->pc = 0x347700u;

    // 0x347700: 0x3e00008  jr          $ra
    ctx->pc = 0x347700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347700u;
            // 0x347704: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x347708u;
    // 0x347708: 0x0  nop
    ctx->pc = 0x347708u;
    // NOP
    // 0x34770c: 0x0  nop
    ctx->pc = 0x34770cu;
    // NOP
}
