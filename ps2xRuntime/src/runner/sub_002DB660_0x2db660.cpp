#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB660
// Address: 0x2db660 - 0x2db6b0
void sub_002DB660_0x2db660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB660_0x2db660");
#endif

    ctx->pc = 0x2db660u;

    // 0x2db660: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2db660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2db664: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2db664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2db668: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2db668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2db66c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2db66cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2db670: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2db670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2db674: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2db674u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2db678: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2db678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2db67c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2db67cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2db680: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2db680u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2db684: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x2db684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x2db688: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2db688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2db68c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x2db68cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x2db690: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x2db690u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x2db694: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2db694u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2db698: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2db698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x2db69c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB69Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB69Cu;
            // 0x2db6a0: 0xac830028  sw          $v1, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB6A4u;
    // 0x2db6a4: 0x0  nop
    ctx->pc = 0x2db6a4u;
    // NOP
    // 0x2db6a8: 0x0  nop
    ctx->pc = 0x2db6a8u;
    // NOP
    // 0x2db6ac: 0x0  nop
    ctx->pc = 0x2db6acu;
    // NOP
}
