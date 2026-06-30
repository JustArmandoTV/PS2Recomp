#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B5E00
// Address: 0x2b5e00 - 0x2b5e20
void sub_002B5E00_0x2b5e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5E00_0x2b5e00");
#endif

    ctx->pc = 0x2b5e00u;

    // 0x2b5e00: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b5e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b5e04: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2b5e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b5e08: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x2b5e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2b5e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5E0Cu;
            // 0x2b5e10: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B5E14u;
    // 0x2b5e14: 0x0  nop
    ctx->pc = 0x2b5e14u;
    // NOP
    // 0x2b5e18: 0x0  nop
    ctx->pc = 0x2b5e18u;
    // NOP
    // 0x2b5e1c: 0x0  nop
    ctx->pc = 0x2b5e1cu;
    // NOP
}
