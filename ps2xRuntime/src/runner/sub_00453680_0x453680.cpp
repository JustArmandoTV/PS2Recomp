#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00453680
// Address: 0x453680 - 0x4536b0
void sub_00453680_0x453680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00453680_0x453680");
#endif

    ctx->pc = 0x453680u;

    // 0x453680: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x453680u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x453684: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x453684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453688: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x453688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x45368c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x45368cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x453690: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x453690u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x453694: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x453694u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x453698: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x453698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x45369c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x45369cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x4536a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4536A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4536A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4536A0u;
            // 0x4536a4: 0xac80001c  sw          $zero, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4536A8u;
    // 0x4536a8: 0x0  nop
    ctx->pc = 0x4536a8u;
    // NOP
    // 0x4536ac: 0x0  nop
    ctx->pc = 0x4536acu;
    // NOP
}
