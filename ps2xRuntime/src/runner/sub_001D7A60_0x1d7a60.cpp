#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D7A60
// Address: 0x1d7a60 - 0x1d7ad0
void sub_001D7A60_0x1d7a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7A60_0x1d7a60");
#endif

    ctx->pc = 0x1d7a60u;

    // 0x1d7a60: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7A60u;
            // 0x1d7a64: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7A68u;
    // 0x1d7a68: 0x0  nop
    ctx->pc = 0x1d7a68u;
    // NOP
    // 0x1d7a6c: 0x0  nop
    ctx->pc = 0x1d7a6cu;
    // NOP
    // 0x1d7a70: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7A70u;
            // 0x1d7a74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7A78u;
    // 0x1d7a78: 0x0  nop
    ctx->pc = 0x1d7a78u;
    // NOP
    // 0x1d7a7c: 0x0  nop
    ctx->pc = 0x1d7a7cu;
    // NOP
    // 0x1d7a80: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7A88u;
    // 0x1d7a88: 0x0  nop
    ctx->pc = 0x1d7a88u;
    // NOP
    // 0x1d7a8c: 0x0  nop
    ctx->pc = 0x1d7a8cu;
    // NOP
    // 0x1d7a90: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7A98u;
    // 0x1d7a98: 0x0  nop
    ctx->pc = 0x1d7a98u;
    // NOP
    // 0x1d7a9c: 0x0  nop
    ctx->pc = 0x1d7a9cu;
    // NOP
    // 0x1d7aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7AA8u;
    // 0x1d7aa8: 0x0  nop
    ctx->pc = 0x1d7aa8u;
    // NOP
    // 0x1d7aac: 0x0  nop
    ctx->pc = 0x1d7aacu;
    // NOP
    // 0x1d7ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7AB8u;
    // 0x1d7ab8: 0x0  nop
    ctx->pc = 0x1d7ab8u;
    // NOP
    // 0x1d7abc: 0x0  nop
    ctx->pc = 0x1d7abcu;
    // NOP
    // 0x1d7ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7AC8u;
    // 0x1d7ac8: 0x0  nop
    ctx->pc = 0x1d7ac8u;
    // NOP
    // 0x1d7acc: 0x0  nop
    ctx->pc = 0x1d7accu;
    // NOP
}
