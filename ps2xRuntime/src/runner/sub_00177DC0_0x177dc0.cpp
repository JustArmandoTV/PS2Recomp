#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00177DC0
// Address: 0x177dc0 - 0x177df0
void sub_00177DC0_0x177dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177DC0_0x177dc0");
#endif

    ctx->pc = 0x177dc0u;

    // 0x177dc0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x177dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x177dc4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x177DC4u;
    {
        const bool branch_taken_0x177dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177DC4u;
            // 0x177dc8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177dc4) {
            ctx->pc = 0x177DE8u;
            goto label_177de8;
        }
    }
    ctx->pc = 0x177DCCu;
    // 0x177dcc: 0xac880024  sw          $t0, 0x24($a0)
    ctx->pc = 0x177dccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 8));
    // 0x177dd0: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x177dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x177dd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x177dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177dd8: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x177dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x177ddc: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x177ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x177de0: 0x3e00008  jr          $ra
    ctx->pc = 0x177DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177DE0u;
            // 0x177de4: 0xac870020  sw          $a3, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177DE8u;
label_177de8:
    // 0x177de8: 0x3e00008  jr          $ra
    ctx->pc = 0x177DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177DE8u;
            // 0x177dec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177DF0u;
}
