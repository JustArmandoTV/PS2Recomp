#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCBB0
// Address: 0x1dcbb0 - 0x1dcbc0
void sub_001DCBB0_0x1dcbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCBB0_0x1dcbb0");
#endif

    ctx->pc = 0x1dcbb0u;

    // 0x1dcbb0: 0x8c8200cc  lw          $v0, 0xCC($a0)
    ctx->pc = 0x1dcbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x1dcbb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCBB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCBB4u;
            // 0x1dcbb8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DCBBCu;
    // 0x1dcbbc: 0x0  nop
    ctx->pc = 0x1dcbbcu;
    // NOP
}
