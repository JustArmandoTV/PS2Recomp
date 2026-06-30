#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011E028
// Address: 0x11e028 - 0x11e040
void sub_0011E028_0x11e028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E028_0x11e028");
#endif

    ctx->pc = 0x11e028u;

    // 0x11e028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11e028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11e02c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11e02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11e030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11e030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e034: 0x804684a  j           func_11A128
    ctx->pc = 0x11E034u;
    ctx->pc = 0x11E038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E034u;
            // 0x11e038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A128u;
    {
        auto targetFn = runtime->lookupFunction(0x11A128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x11E03Cu;
    // 0x11e03c: 0x0  nop
    ctx->pc = 0x11e03cu;
    // NOP
}
