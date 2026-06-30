#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00164DF0
// Address: 0x164df0 - 0x164e18
void sub_00164DF0_0x164df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164DF0_0x164df0");
#endif

    switch (ctx->pc) {
        case 0x164e10u: goto label_164e10;
        default: break;
    }

    ctx->pc = 0x164df0u;

    // 0x164df0: 0xac86007c  sw          $a2, 0x7C($a0)
    ctx->pc = 0x164df0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 6));
    // 0x164df4: 0x3e00008  jr          $ra
    ctx->pc = 0x164DF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164DF4u;
            // 0x164df8: 0xac850078  sw          $a1, 0x78($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164DFCu;
    // 0x164dfc: 0x0  nop
    ctx->pc = 0x164dfcu;
    // NOP
    // 0x164e00: 0xac860084  sw          $a2, 0x84($a0)
    ctx->pc = 0x164e00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 6));
    // 0x164e04: 0x3e00008  jr          $ra
    ctx->pc = 0x164E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164E04u;
            // 0x164e08: 0xac850080  sw          $a1, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164E0Cu;
    // 0x164e0c: 0x0  nop
    ctx->pc = 0x164e0cu;
    // NOP
label_164e10:
    // 0x164e10: 0x3e00008  jr          $ra
    ctx->pc = 0x164E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164E10u;
            // 0x164e14: 0x8c82003c  lw          $v0, 0x3C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164E18u;
}
