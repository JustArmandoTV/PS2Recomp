#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F9B90
// Address: 0x1f9b90 - 0x1f9bd0
void sub_001F9B90_0x1f9b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9B90_0x1f9b90");
#endif

    ctx->pc = 0x1f9b90u;

    // 0x1f9b90: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1f9b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1f9b94: 0x24639c20  addiu       $v1, $v1, -0x63E0
    ctx->pc = 0x1f9b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941728));
    // 0x1f9b98: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f9b98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1f9b9c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1f9b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1f9ba0: 0x2463a4d0  addiu       $v1, $v1, -0x5B30
    ctx->pc = 0x1f9ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943952));
    // 0x1f9ba4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1f9ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1f9ba8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1f9ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1f9bac: 0x2463a280  addiu       $v1, $v1, -0x5D80
    ctx->pc = 0x1f9bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943360));
    // 0x1f9bb0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1f9bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1f9bb4: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1f9bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1f9bb8: 0x24630d90  addiu       $v1, $v1, 0xD90
    ctx->pc = 0x1f9bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3472));
    // 0x1f9bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9BBCu;
            // 0x1f9bc0: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F9BC4u;
    // 0x1f9bc4: 0x0  nop
    ctx->pc = 0x1f9bc4u;
    // NOP
    // 0x1f9bc8: 0x0  nop
    ctx->pc = 0x1f9bc8u;
    // NOP
    // 0x1f9bcc: 0x0  nop
    ctx->pc = 0x1f9bccu;
    // NOP
}
