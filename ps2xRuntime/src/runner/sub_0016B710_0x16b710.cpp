#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016B710
// Address: 0x16b710 - 0x16b728
void sub_0016B710_0x16b710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B710_0x16b710");
#endif

    ctx->pc = 0x16b710u;

    // 0x16b710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b71c: 0x80599de  j           func_166778
    ctx->pc = 0x16B71Cu;
    ctx->pc = 0x16B720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B71Cu;
            // 0x16b720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166778_0x166778(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16B724u;
    // 0x16b724: 0x0  nop
    ctx->pc = 0x16b724u;
    // NOP
}
