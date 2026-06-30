#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00162030
// Address: 0x162030 - 0x162078
void sub_00162030_0x162030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162030_0x162030");
#endif

    ctx->pc = 0x162030u;

    // 0x162030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x162030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x162034: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x162034u;
    {
        const bool branch_taken_0x162034 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x162038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162034u;
            // 0x162038: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162034) {
            ctx->pc = 0x162050u;
            goto label_162050;
        }
    }
    ctx->pc = 0x16203Cu;
    // 0x16203c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16203cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x162040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162044: 0x248428d8  addiu       $a0, $a0, 0x28D8
    ctx->pc = 0x162044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10456));
    // 0x162048: 0x805856c  j           func_1615B0
    ctx->pc = 0x162048u;
    ctx->pc = 0x16204Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162048u;
            // 0x16204c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1615B0u;
    if (runtime->hasFunction(0x1615B0u)) {
        auto targetFn = runtime->lookupFunction(0x1615B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001615B0_0x1615b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x162050u;
label_162050:
    // 0x162050: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x162050u;
    {
        const bool branch_taken_0x162050 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x162050) {
            ctx->pc = 0x162060u;
            goto label_162060;
        }
    }
    ctx->pc = 0x162058u;
    // 0x162058: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x162058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x16205c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x16205cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_162060:
    // 0x162060: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x162060u;
    {
        const bool branch_taken_0x162060 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x162064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162060u;
            // 0x162064: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162060) {
            ctx->pc = 0x162070u;
            goto label_162070;
        }
    }
    ctx->pc = 0x162068u;
    // 0x162068: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x162068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x16206c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x16206cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_162070:
    // 0x162070: 0x3e00008  jr          $ra
    ctx->pc = 0x162070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162070u;
            // 0x162074: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162078u;
}
