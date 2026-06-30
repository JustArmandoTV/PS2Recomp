#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037D5C0
// Address: 0x37d5c0 - 0x37d5e0
void sub_0037D5C0_0x37d5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D5C0_0x37d5c0");
#endif

    ctx->pc = 0x37d5c0u;

    // 0x37d5c0: 0x3e00008  jr          $ra
    ctx->pc = 0x37D5C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D5C0u;
            // 0x37d5c4: 0x8c820070  lw          $v0, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37D5C8u;
    // 0x37d5c8: 0x0  nop
    ctx->pc = 0x37d5c8u;
    // NOP
    // 0x37d5cc: 0x0  nop
    ctx->pc = 0x37d5ccu;
    // NOP
    // 0x37d5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x37D5D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D5D0u;
            // 0x37d5d4: 0xac800090  sw          $zero, 0x90($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37D5D8u;
    // 0x37d5d8: 0x0  nop
    ctx->pc = 0x37d5d8u;
    // NOP
    // 0x37d5dc: 0x0  nop
    ctx->pc = 0x37d5dcu;
    // NOP
}
