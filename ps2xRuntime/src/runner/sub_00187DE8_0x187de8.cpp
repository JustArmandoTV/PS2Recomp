#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187DE8
// Address: 0x187de8 - 0x187e00
void sub_00187DE8_0x187de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187DE8_0x187de8");
#endif

    ctx->pc = 0x187de8u;

    // 0x187de8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x187dec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x187decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187df0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187df4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187df8: 0x8061f50  j           func_187D40
    ctx->pc = 0x187DF8u;
    ctx->pc = 0x187DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187DF8u;
            // 0x187dfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187D40u;
    {
        auto targetFn = runtime->lookupFunction(0x187D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x187E00u;
}
