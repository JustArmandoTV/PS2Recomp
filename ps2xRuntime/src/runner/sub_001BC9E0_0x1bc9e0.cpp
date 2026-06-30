#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC9E0
// Address: 0x1bc9e0 - 0x1bc9f8
void sub_001BC9E0_0x1bc9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC9E0_0x1bc9e0");
#endif

    ctx->pc = 0x1bc9e0u;

    // 0x1bc9e0: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1bc9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bc9e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc9e8: 0x90c300c2  lbu         $v1, 0xC2($a2)
    ctx->pc = 0x1bc9e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 194)));
    // 0x1bc9ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC9ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC9ECu;
            // 0x1bc9f0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BC9F4u;
    // 0x1bc9f4: 0x0  nop
    ctx->pc = 0x1bc9f4u;
    // NOP
}
