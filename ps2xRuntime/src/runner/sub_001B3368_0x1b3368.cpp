#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3368
// Address: 0x1b3368 - 0x1b33c0
void sub_001B3368_0x1b3368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3368_0x1b3368");
#endif

    switch (ctx->pc) {
        case 0x1b33b0u: goto label_1b33b0;
        default: break;
    }

    ctx->pc = 0x1b3368u;

    // 0x1b3368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b336c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b336cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3374: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1b3374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3378: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x1b3378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x1b337c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B337Cu;
    {
        const bool branch_taken_0x1b337c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B3380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B337Cu;
            // 0x1b3380: 0x24a60950  addiu       $a2, $a1, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b337c) {
            ctx->pc = 0x1B33A0u;
            goto label_1b33a0;
        }
    }
    ctx->pc = 0x1B3384u;
    // 0x1b3384: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x1b3384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x1b3388: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b3388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b338c: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B338Cu;
    {
        const bool branch_taken_0x1b338c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B3390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B338Cu;
            // 0x1b3390: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b338c) {
            ctx->pc = 0x1B33B4u;
            goto label_1b33b4;
        }
    }
    ctx->pc = 0x1B3394u;
    // 0x1b3394: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x1b3394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1b3398: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3398u;
    {
        const bool branch_taken_0x1b3398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b3398) {
            ctx->pc = 0x1B33A8u;
            goto label_1b33a8;
        }
    }
    ctx->pc = 0x1B33A0u;
label_1b33a0:
    // 0x1b33a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B33A0u;
    {
        const bool branch_taken_0x1b33a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B33A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B33A0u;
            // 0x1b33a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b33a0) {
            ctx->pc = 0x1B33B4u;
            goto label_1b33b4;
        }
    }
    ctx->pc = 0x1B33A8u;
label_1b33a8:
    // 0x1b33a8: 0xc06dade  jal         func_1B6B78
    ctx->pc = 0x1B33A8u;
    SET_GPR_U32(ctx, 31, 0x1B33B0u);
    ctx->pc = 0x1B6B78u;
    if (runtime->hasFunction(0x1B6B78u)) {
        auto targetFn = runtime->lookupFunction(0x1B6B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B33B0u; }
        if (ctx->pc != 0x1B33B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6B78_0x1b6b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B33B0u; }
        if (ctx->pc != 0x1B33B0u) { return; }
    }
    ctx->pc = 0x1B33B0u;
label_1b33b0:
    // 0x1b33b0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b33b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b33b4:
    // 0x1b33b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b33b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b33b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B33B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B33BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B33B8u;
            // 0x1b33bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B33C0u;
}
