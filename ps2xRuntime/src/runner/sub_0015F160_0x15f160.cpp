#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015F160
// Address: 0x15f160 - 0x15f180
void sub_0015F160_0x15f160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F160_0x15f160");
#endif

    ctx->pc = 0x15f160u;

    // 0x15f160: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x15f160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15f164: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x15f164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f168: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x15f168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x15f16c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x15f16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15f170: 0x3e00008  jr          $ra
    ctx->pc = 0x15F170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F170u;
            // 0x15f174: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15F178u;
    // 0x15f178: 0x0  nop
    ctx->pc = 0x15f178u;
    // NOP
    // 0x15f17c: 0x0  nop
    ctx->pc = 0x15f17cu;
    // NOP
}
