#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A9B90
// Address: 0x4a9b90 - 0x4a9bb0
void sub_004A9B90_0x4a9b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9B90_0x4a9b90");
#endif

    ctx->pc = 0x4a9b90u;

    // 0x4a9b90: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x4a9b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4a9b94: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x4a9b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x4a9b98: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x4a9b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x4a9b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9B9Cu;
            // 0x4a9ba0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A9BA4u;
    // 0x4a9ba4: 0x0  nop
    ctx->pc = 0x4a9ba4u;
    // NOP
    // 0x4a9ba8: 0x0  nop
    ctx->pc = 0x4a9ba8u;
    // NOP
    // 0x4a9bac: 0x0  nop
    ctx->pc = 0x4a9bacu;
    // NOP
}
