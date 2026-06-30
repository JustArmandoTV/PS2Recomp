#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170160
// Address: 0x170160 - 0x170190
void sub_00170160_0x170160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170160_0x170160");
#endif

    ctx->pc = 0x170160u;

    // 0x170160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170168: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x170168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17016c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17016cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170170: 0x80593b8  j           func_164EE0
    ctx->pc = 0x170170u;
    ctx->pc = 0x170174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170170u;
            // 0x170174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164EE0u;
    {
        auto targetFn = runtime->lookupFunction(0x164EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x170178u;
    // 0x170178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17017c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17017cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170180: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x170180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x170184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170188: 0x80593ba  j           func_164EE8
    ctx->pc = 0x170188u;
    ctx->pc = 0x17018Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170188u;
            // 0x17018c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164EE8u;
    {
        auto targetFn = runtime->lookupFunction(0x164EE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x170190u;
}
