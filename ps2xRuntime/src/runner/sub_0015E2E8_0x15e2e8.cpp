#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015E2E8
// Address: 0x15e2e8 - 0x15e350
void sub_0015E2E8_0x15e2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E2E8_0x15e2e8");
#endif

    switch (ctx->pc) {
        case 0x15e300u: goto label_15e300;
        case 0x15e308u: goto label_15e308;
        default: break;
    }

    ctx->pc = 0x15e2e8u;

    // 0x15e2e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15e2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15e2ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15e2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15e2f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x15e2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x15e2f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15e2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15e2f8: 0xc05777c  jal         func_15DDF0
    ctx->pc = 0x15E2F8u;
    SET_GPR_U32(ctx, 31, 0x15E300u);
    ctx->pc = 0x15E2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E2F8u;
            // 0x15e2fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DDF0u;
    if (runtime->hasFunction(0x15DDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15DDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E300u; }
        if (ctx->pc != 0x15E300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DDF0_0x15ddf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E300u; }
        if (ctx->pc != 0x15E300u) { return; }
    }
    ctx->pc = 0x15E300u;
label_15e300:
    // 0x15e300: 0xc0577aa  jal         func_15DEA8
    ctx->pc = 0x15E300u;
    SET_GPR_U32(ctx, 31, 0x15E308u);
    ctx->pc = 0x15E304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E300u;
            // 0x15e304: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DEA8u;
    if (runtime->hasFunction(0x15DEA8u)) {
        auto targetFn = runtime->lookupFunction(0x15DEA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E308u; }
        if (ctx->pc != 0x15E308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DEA8_0x15dea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E308u; }
        if (ctx->pc != 0x15E308u) { return; }
    }
    ctx->pc = 0x15E308u;
label_15e308:
    // 0x15e308: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x15e308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15e30c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15e30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e310: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x15e310u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15e314: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15e314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e318: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15e318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e31c: 0x2442fde4  addiu       $v0, $v0, -0x21C
    ctx->pc = 0x15e31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966756));
    // 0x15e320: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x15e320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15e324: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x15e324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e328: 0x8057894  j           func_15E250
    ctx->pc = 0x15E328u;
    ctx->pc = 0x15E32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E328u;
            // 0x15e32c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E250u;
    {
        auto targetFn = runtime->lookupFunction(0x15E250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x15E330u;
    // 0x15e330: 0x3e00008  jr          $ra
    ctx->pc = 0x15E330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15E338u;
    // 0x15e338: 0x0  nop
    ctx->pc = 0x15e338u;
    // NOP
    // 0x15e33c: 0x0  nop
    ctx->pc = 0x15e33cu;
    // NOP
    // 0x15e340: 0x3e00008  jr          $ra
    ctx->pc = 0x15E340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E340u;
            // 0x15e344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15E348u;
    // 0x15e348: 0x0  nop
    ctx->pc = 0x15e348u;
    // NOP
    // 0x15e34c: 0x0  nop
    ctx->pc = 0x15e34cu;
    // NOP
}
