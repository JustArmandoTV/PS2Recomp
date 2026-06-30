#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00194290
// Address: 0x194290 - 0x1942a8
void sub_00194290_0x194290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194290_0x194290");
#endif

    ctx->pc = 0x194290u;

    // 0x194290: 0x2484040c  addiu       $a0, $a0, 0x40C
    ctx->pc = 0x194290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1036));
    // 0x194294: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x194294u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x194298: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x194298u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x19429c: 0x3e00008  jr          $ra
    ctx->pc = 0x19429Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1942A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19429Cu;
            // 0x1942a0: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1942A4u;
    // 0x1942a4: 0x0  nop
    ctx->pc = 0x1942a4u;
    // NOP
}
