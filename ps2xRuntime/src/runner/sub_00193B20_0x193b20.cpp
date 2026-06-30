#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00193B20
// Address: 0x193b20 - 0x193b40
void sub_00193B20_0x193b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193B20_0x193b20");
#endif

    ctx->pc = 0x193b20u;

    // 0x193b20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193b24: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x193b24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x193b28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193b2c: 0x2484feb8  addiu       $a0, $a0, -0x148
    ctx->pc = 0x193b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966968));
    // 0x193b30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193b34: 0x8064ed0  j           func_193B40
    ctx->pc = 0x193B34u;
    ctx->pc = 0x193B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193B34u;
            // 0x193b38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193B40u;
    if (runtime->hasFunction(0x193B40u)) {
        auto targetFn = runtime->lookupFunction(0x193B40u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00193B40_0x193b40(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x193B3Cu;
    // 0x193b3c: 0x0  nop
    ctx->pc = 0x193b3cu;
    // NOP
}
