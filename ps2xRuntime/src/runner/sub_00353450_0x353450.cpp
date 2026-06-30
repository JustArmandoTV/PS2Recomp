#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00353450
// Address: 0x353450 - 0x353470
void sub_00353450_0x353450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353450_0x353450");
#endif

    ctx->pc = 0x353450u;

    // 0x353450: 0xac85002c  sw          $a1, 0x2C($a0)
    ctx->pc = 0x353450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
    // 0x353454: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x353454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x353458: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x353458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x35345c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x35345cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353460: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x353460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x353464: 0x808bf20  j           func_22FC80
    ctx->pc = 0x353464u;
    ctx->pc = 0x353468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353464u;
            // 0x353468: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0022FC80_0x22fc80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x35346Cu;
    // 0x35346c: 0x0  nop
    ctx->pc = 0x35346cu;
    // NOP
}
