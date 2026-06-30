#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004FDF40
// Address: 0x4fdf40 - 0x4fdfa0
void sub_004FDF40_0x4fdf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FDF40_0x4fdf40");
#endif

    ctx->pc = 0x4fdf40u;

    // 0x4fdf40: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x4fdf40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x4fdf44: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4fdf44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fdf48: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x4fdf48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x4fdf4c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x4fdf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x4fdf50: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x4fdf50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x4fdf54: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x4fdf54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x4fdf58: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x4fdf58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x4fdf5c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x4fdf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x4fdf60: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x4fdf60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x4fdf64: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x4fdf64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x4fdf68: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x4fdf68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x4fdf6c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x4fdf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x4fdf70: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x4fdf70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x4fdf74: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x4fdf74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x4fdf78: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x4fdf78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x4fdf7c: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x4fdf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x4fdf80: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x4fdf80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x4fdf84: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x4fdf84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x4fdf88: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x4fdf88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x4fdf8c: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x4fdf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x4fdf90: 0x3e00008  jr          $ra
    ctx->pc = 0x4FDF90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FDF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDF90u;
            // 0x4fdf94: 0xac800050  sw          $zero, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FDF98u;
    // 0x4fdf98: 0x0  nop
    ctx->pc = 0x4fdf98u;
    // NOP
    // 0x4fdf9c: 0x0  nop
    ctx->pc = 0x4fdf9cu;
    // NOP
}
