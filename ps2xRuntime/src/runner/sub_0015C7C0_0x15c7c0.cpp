#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015C7C0
// Address: 0x15c7c0 - 0x15c7e0
void sub_0015C7C0_0x15c7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C7C0_0x15c7c0");
#endif

    ctx->pc = 0x15c7c0u;

    // 0x15c7c0: 0x3c021700  lui         $v0, 0x1700
    ctx->pc = 0x15c7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5888 << 16));
    // 0x15c7c4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x15c7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x15c7c8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x15c7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x15c7cc: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x15c7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x15c7d0: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x15c7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x15c7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x15C7D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C7D4u;
            // 0x15c7d8: 0xaca0000c  sw          $zero, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C7DCu;
    // 0x15c7dc: 0x0  nop
    ctx->pc = 0x15c7dcu;
    // NOP
}
