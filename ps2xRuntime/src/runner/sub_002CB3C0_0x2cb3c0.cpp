#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CB3C0
// Address: 0x2cb3c0 - 0x2cb410
void sub_002CB3C0_0x2cb3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB3C0_0x2cb3c0");
#endif

    ctx->pc = 0x2cb3c0u;

    // 0x2cb3c0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2cb3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2cb3c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2cb3c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb3c8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2cb3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2cb3cc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2cb3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2cb3d0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2cb3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2cb3d4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2cb3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2cb3d8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2cb3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2cb3dc: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2cb3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2cb3e0: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2cb3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2cb3e4: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x2cb3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x2cb3e8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2cb3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2cb3ec: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x2cb3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x2cb3f0: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x2cb3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x2cb3f4: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x2cb3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x2cb3f8: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x2cb3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x2cb3fc: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x2cb3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x2cb400: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2cb400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x2cb404: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x2cb404u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x2cb408: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB408u;
            // 0x2cb40c: 0xac800044  sw          $zero, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CB410u;
}
