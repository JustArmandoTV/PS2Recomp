#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00160C00
// Address: 0x160c00 - 0x160c30
void sub_00160C00_0x160c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160C00_0x160c00");
#endif

    ctx->pc = 0x160c00u;

    // 0x160c00: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x160c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x160c04: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x160c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x160c08: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x160c08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160c0c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x160c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x160c10: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x160c10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x160c14: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x160c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x160c18: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x160c18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x160c1c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x160c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x160c20: 0x3e00008  jr          $ra
    ctx->pc = 0x160C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160C20u;
            // 0x160c24: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160C28u;
    // 0x160c28: 0x0  nop
    ctx->pc = 0x160c28u;
    // NOP
    // 0x160c2c: 0x0  nop
    ctx->pc = 0x160c2cu;
    // NOP
}
