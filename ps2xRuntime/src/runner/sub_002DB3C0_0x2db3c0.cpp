#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB3C0
// Address: 0x2db3c0 - 0x2db3f0
void sub_002DB3C0_0x2db3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB3C0_0x2db3c0");
#endif

    ctx->pc = 0x2db3c0u;

    // 0x2db3c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2db3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2db3c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2db3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2db3c8: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x2db3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x2db3cc: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2db3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x2db3d0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2db3d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db3d4: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x2db3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x2db3d8: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x2db3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x2db3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB3DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB3DCu;
            // 0x2db3e0: 0xac800050  sw          $zero, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB3E4u;
    // 0x2db3e4: 0x0  nop
    ctx->pc = 0x2db3e4u;
    // NOP
    // 0x2db3e8: 0x0  nop
    ctx->pc = 0x2db3e8u;
    // NOP
    // 0x2db3ec: 0x0  nop
    ctx->pc = 0x2db3ecu;
    // NOP
}
