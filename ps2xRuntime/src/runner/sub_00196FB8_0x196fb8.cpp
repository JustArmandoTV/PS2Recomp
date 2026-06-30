#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00196FB8
// Address: 0x196fb8 - 0x196fd8
void sub_00196FB8_0x196fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196FB8_0x196fb8");
#endif

    ctx->pc = 0x196fb8u;

    // 0x196fb8: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x196fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x196fbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x196fbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196fc0: 0x24846ae0  addiu       $a0, $a0, 0x6AE0
    ctx->pc = 0x196fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27360));
    // 0x196fc4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x196fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x196fc8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x196fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x196fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x196FCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196FCCu;
            // 0x196fd0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196FD4u;
    // 0x196fd4: 0x0  nop
    ctx->pc = 0x196fd4u;
    // NOP
}
