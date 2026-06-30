#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00177DF0
// Address: 0x177df0 - 0x177e20
void sub_00177DF0_0x177df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177DF0_0x177df0");
#endif

    ctx->pc = 0x177df0u;

    // 0x177df0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x177df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x177df4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x177DF4u;
    {
        const bool branch_taken_0x177df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177DF4u;
            // 0x177df8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177df4) {
            ctx->pc = 0x177E18u;
            goto label_177e18;
        }
    }
    ctx->pc = 0x177DFCu;
    // 0x177dfc: 0xac880024  sw          $t0, 0x24($a0)
    ctx->pc = 0x177dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 8));
    // 0x177e00: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x177e00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x177e04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x177e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177e08: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x177e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x177e0c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x177e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x177e10: 0x3e00008  jr          $ra
    ctx->pc = 0x177E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177E10u;
            // 0x177e14: 0xac870020  sw          $a3, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177E18u;
label_177e18:
    // 0x177e18: 0x3e00008  jr          $ra
    ctx->pc = 0x177E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177E18u;
            // 0x177e1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177E20u;
}
