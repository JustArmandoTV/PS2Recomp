#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00160170
// Address: 0x160170 - 0x160190
void sub_00160170_0x160170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160170_0x160170");
#endif

    switch (ctx->pc) {
        case 0x160184u: goto label_160184;
        default: break;
    }

    ctx->pc = 0x160170u;

    // 0x160170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x160170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x160174: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x160174u;
    {
        const bool branch_taken_0x160174 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x160178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160174u;
            // 0x160178: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160174) {
            ctx->pc = 0x160184u;
            goto label_160184;
        }
    }
    ctx->pc = 0x16017Cu;
    // 0x16017c: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x16017Cu;
    SET_GPR_U32(ctx, 31, 0x160184u);
    ctx->pc = 0x160180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16017Cu;
            // 0x160180: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160184u; }
        if (ctx->pc != 0x160184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160184u; }
        if (ctx->pc != 0x160184u) { return; }
    }
    ctx->pc = 0x160184u;
label_160184:
    // 0x160184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x160184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160188: 0x3e00008  jr          $ra
    ctx->pc = 0x160188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16018Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160188u;
            // 0x16018c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160190u;
}
