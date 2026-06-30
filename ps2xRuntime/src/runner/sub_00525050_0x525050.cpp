#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00525050
// Address: 0x525050 - 0x525070
void sub_00525050_0x525050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00525050_0x525050");
#endif

    ctx->pc = 0x525050u;

    // 0x525050: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x525050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x525054: 0xac8300d0  sw          $v1, 0xD0($a0)
    ctx->pc = 0x525054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
    // 0x525058: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x525058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x52505c: 0x3e00008  jr          $ra
    ctx->pc = 0x52505Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x525060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52505Cu;
            // 0x525060: 0xac8300dc  sw          $v1, 0xDC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x525064u;
    // 0x525064: 0x0  nop
    ctx->pc = 0x525064u;
    // NOP
    // 0x525068: 0x0  nop
    ctx->pc = 0x525068u;
    // NOP
    // 0x52506c: 0x0  nop
    ctx->pc = 0x52506cu;
    // NOP
}
