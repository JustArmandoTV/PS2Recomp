#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A2428
// Address: 0x1a2428 - 0x1a2458
void sub_001A2428_0x1a2428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2428_0x1a2428");
#endif

    switch (ctx->pc) {
        case 0x1a2428u: goto label_1a2428;
        case 0x1a242cu: goto label_1a242c;
        case 0x1a2430u: goto label_1a2430;
        case 0x1a2434u: goto label_1a2434;
        case 0x1a2438u: goto label_1a2438;
        case 0x1a243cu: goto label_1a243c;
        case 0x1a2440u: goto label_1a2440;
        case 0x1a2444u: goto label_1a2444;
        case 0x1a2448u: goto label_1a2448;
        case 0x1a244cu: goto label_1a244c;
        case 0x1a2450u: goto label_1a2450;
        case 0x1a2454u: goto label_1a2454;
        default: break;
    }

    ctx->pc = 0x1a2428u;

label_1a2428:
    // 0x1a2428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a242c:
    // 0x1a242c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a242cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a2430:
    // 0x1a2430: 0xc066c68  jal         func_19B1A0
label_1a2434:
    if (ctx->pc == 0x1A2434u) {
        ctx->pc = 0x1A2438u;
        goto label_1a2438;
    }
    ctx->pc = 0x1A2430u;
    SET_GPR_U32(ctx, 31, 0x1A2438u);
    ctx->pc = 0x19B1A0u;
    if (runtime->hasFunction(0x19B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2438u; }
        if (ctx->pc != 0x1A2438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1A0_0x19b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2438u; }
        if (ctx->pc != 0x1A2438u) { return; }
    }
    ctx->pc = 0x1A2438u;
label_1a2438:
    // 0x1a2438: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x1a2438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_1a243c:
    // 0x1a243c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1a2440:
    if (ctx->pc == 0x1A2440u) {
        ctx->pc = 0x1A2440u;
            // 0x1a2440: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->pc = 0x1A2444u;
        goto label_1a2444;
    }
    ctx->pc = 0x1A243Cu;
    {
        const bool branch_taken_0x1a243c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A243Cu;
            // 0x1a2440: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a243c) {
            ctx->pc = 0x1A244Cu;
            goto label_1a244c;
        }
    }
    ctx->pc = 0x1A2444u;
label_1a2444:
    // 0x1a2444: 0x60f809  jalr        $v1
label_1a2448:
    if (ctx->pc == 0x1A2448u) {
        ctx->pc = 0x1A244Cu;
        goto label_1a244c;
    }
    ctx->pc = 0x1A2444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A244Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A244Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A244Cu; }
            if (ctx->pc != 0x1A244Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1A244Cu;
label_1a244c:
    // 0x1a244c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a244cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2450:
    // 0x1a2450: 0x3e00008  jr          $ra
label_1a2454:
    if (ctx->pc == 0x1A2454u) {
        ctx->pc = 0x1A2454u;
            // 0x1a2454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1A2458u;
        goto label_fallthrough_0x1a2450;
    }
    ctx->pc = 0x1A2450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2450u;
            // 0x1a2454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a2450:
    ctx->pc = 0x1A2458u;
}
