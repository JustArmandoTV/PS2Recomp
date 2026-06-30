#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048C8C0
// Address: 0x48c8c0 - 0x48c900
void sub_0048C8C0_0x48c8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048C8C0_0x48c8c0");
#endif

    ctx->pc = 0x48c8c0u;

    // 0x48c8c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x48c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x48c8c4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48c8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48c8c8: 0x2442f950  addiu       $v0, $v0, -0x6B0
    ctx->pc = 0x48c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965584));
    // 0x48c8cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48c8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48c8d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x48c8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x48c8d4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x48c8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x48c8d8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x48c8d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c8dc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x48c8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x48c8e0: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x48c8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x48c8e4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x48c8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x48c8e8: 0xa0800014  sb          $zero, 0x14($a0)
    ctx->pc = 0x48c8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x48c8ec: 0xa0800015  sb          $zero, 0x15($a0)
    ctx->pc = 0x48c8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 21), (uint8_t)GPR_U32(ctx, 0));
    // 0x48c8f0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x48c8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x48c8f4: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x48c8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x48c8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x48C8F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48C8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48C8F8u;
            // 0x48c8fc: 0xa0830020  sb          $v1, 0x20($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48C900u;
}
