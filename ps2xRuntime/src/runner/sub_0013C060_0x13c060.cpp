#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013C060
// Address: 0x13c060 - 0x13c070
void sub_0013C060_0x13c060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C060_0x13c060");
#endif

    ctx->pc = 0x13c060u;

    // 0x13c060: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13c060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c064: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x13c064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x13c068: 0x804cd44  j           func_133510
    ctx->pc = 0x13C068u;
    ctx->pc = 0x13C06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C068u;
            // 0x13c06c: 0x24841fa0  addiu       $a0, $a0, 0x1FA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133510u;
    if (runtime->hasFunction(0x133510u)) {
        auto targetFn = runtime->lookupFunction(0x133510u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00133510_0x133510(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x13C070u;
}
