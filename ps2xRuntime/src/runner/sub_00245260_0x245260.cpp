#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00245260
// Address: 0x245260 - 0x245270
void sub_00245260_0x245260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245260_0x245260");
#endif

    ctx->pc = 0x245260u;

    // 0x245260: 0x3e00008  jr          $ra
    ctx->pc = 0x245260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245260u;
            // 0x245264: 0x24a2000c  addiu       $v0, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x245268u;
    // 0x245268: 0x0  nop
    ctx->pc = 0x245268u;
    // NOP
    // 0x24526c: 0x0  nop
    ctx->pc = 0x24526cu;
    // NOP
}
