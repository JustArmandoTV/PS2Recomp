#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00196F98
// Address: 0x196f98 - 0x196fb8
void sub_00196F98_0x196f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196F98_0x196f98");
#endif

    ctx->pc = 0x196f98u;

    // 0x196f98: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x196f98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x196f9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x196f9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196fa0: 0x24846ae0  addiu       $a0, $a0, 0x6AE0
    ctx->pc = 0x196fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27360));
    // 0x196fa4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x196fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x196fa8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x196fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x196fac: 0x3e00008  jr          $ra
    ctx->pc = 0x196FACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196FACu;
            // 0x196fb0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196FB4u;
    // 0x196fb4: 0x0  nop
    ctx->pc = 0x196fb4u;
    // NOP
}
