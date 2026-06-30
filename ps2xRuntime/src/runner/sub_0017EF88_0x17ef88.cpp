#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017EF88
// Address: 0x17ef88 - 0x17efa0
void sub_0017EF88_0x17ef88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017EF88_0x17ef88");
#endif

    ctx->pc = 0x17ef88u;

    // 0x17ef88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17ef88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17ef8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ef8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ef90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ef90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ef94: 0x805f9be  j           func_17E6F8
    ctx->pc = 0x17EF94u;
    ctx->pc = 0x17EF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EF94u;
            // 0x17ef98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E6F8u;
    if (runtime->hasFunction(0x17E6F8u)) {
        auto targetFn = runtime->lookupFunction(0x17E6F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0017E6F8_0x17e6f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17EF9Cu;
    // 0x17ef9c: 0x0  nop
    ctx->pc = 0x17ef9cu;
    // NOP
}
