#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00178AC0
// Address: 0x178ac0 - 0x178ad0
void sub_00178AC0_0x178ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178AC0_0x178ac0");
#endif

    ctx->pc = 0x178ac0u;

    // 0x178ac0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x178ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x178ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x178AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178AC4u;
            // 0x178ac8: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178ACCu;
    // 0x178acc: 0x0  nop
    ctx->pc = 0x178accu;
    // NOP
}
