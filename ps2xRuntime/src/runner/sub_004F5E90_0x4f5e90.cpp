#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F5E90
// Address: 0x4f5e90 - 0x4f5eb0
void sub_004F5E90_0x4f5e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5E90_0x4f5e90");
#endif

    ctx->pc = 0x4f5e90u;

    // 0x4f5e90: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4f5e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x4f5e94: 0x24428ab0  addiu       $v0, $v0, -0x7550
    ctx->pc = 0x4f5e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937264));
    // 0x4f5e98: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4f5e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4f5e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x4F5E9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5E9Cu;
            // 0x4f5ea0: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F5EA4u;
    // 0x4f5ea4: 0x0  nop
    ctx->pc = 0x4f5ea4u;
    // NOP
    // 0x4f5ea8: 0x0  nop
    ctx->pc = 0x4f5ea8u;
    // NOP
    // 0x4f5eac: 0x0  nop
    ctx->pc = 0x4f5eacu;
    // NOP
}
