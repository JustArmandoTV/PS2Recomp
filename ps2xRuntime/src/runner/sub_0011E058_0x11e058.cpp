#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011E058
// Address: 0x11e058 - 0x11e070
void sub_0011E058_0x11e058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E058_0x11e058");
#endif

    ctx->pc = 0x11e058u;

    // 0x11e058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11e058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11e05c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11e05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11e060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11e060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e064: 0x804696a  j           func_11A5A8
    ctx->pc = 0x11E064u;
    ctx->pc = 0x11E068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E064u;
            // 0x11e068: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A5A8u;
    {
        auto targetFn = runtime->lookupFunction(0x11A5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x11E06Cu;
    // 0x11e06c: 0x0  nop
    ctx->pc = 0x11e06cu;
    // NOP
}
