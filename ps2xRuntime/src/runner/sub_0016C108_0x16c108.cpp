#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016C108
// Address: 0x16c108 - 0x16c138
void sub_0016C108_0x16c108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C108_0x16c108");
#endif

    ctx->pc = 0x16c108u;

    // 0x16c108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16c108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c10c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16C10Cu;
    {
        const bool branch_taken_0x16c10c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C10Cu;
            // 0x16c110: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c10c) {
            ctx->pc = 0x16C128u;
            goto label_16c128;
        }
    }
    ctx->pc = 0x16C114u;
    // 0x16c114: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16c114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16c118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c11c: 0x24843d70  addiu       $a0, $a0, 0x3D70
    ctx->pc = 0x16c11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15728));
    // 0x16c120: 0x8059f4e  j           func_167D38
    ctx->pc = 0x16C120u;
    ctx->pc = 0x16C124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C120u;
            // 0x16c124: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16C128u;
label_16c128:
    // 0x16c128: 0x8c840094  lw          $a0, 0x94($a0)
    ctx->pc = 0x16c128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x16c12c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c130: 0x80602fe  j           func_180BF8
    ctx->pc = 0x16C130u;
    ctx->pc = 0x16C134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C130u;
            // 0x16c134: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180BF8u;
    if (runtime->hasFunction(0x180BF8u)) {
        auto targetFn = runtime->lookupFunction(0x180BF8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00180BF8_0x180bf8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16C138u;
}
