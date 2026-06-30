#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016DEF0
// Address: 0x16def0 - 0x16df18
void sub_0016DEF0_0x16def0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DEF0_0x16def0");
#endif

    ctx->pc = 0x16def0u;

    // 0x16def0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16def0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16def4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16def4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16def8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16def8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16defc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16defcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16df00: 0x2442aa8c  addiu       $v0, $v0, -0x5574
    ctx->pc = 0x16df00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945420));
    // 0x16df04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16df04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16df08: 0x0  nop
    ctx->pc = 0x16df08u;
    // NOP
    // 0x16df0c: 0x805b3ea  j           func_16CFA8
    ctx->pc = 0x16DF0Cu;
    ctx->pc = 0x16DF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DF0Cu;
            // 0x16df10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16CFA8u;
    if (runtime->hasFunction(0x16CFA8u)) {
        auto targetFn = runtime->lookupFunction(0x16CFA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016CFA8_0x16cfa8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16DF14u;
    // 0x16df14: 0x0  nop
    ctx->pc = 0x16df14u;
    // NOP
}
