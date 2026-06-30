#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E7400
// Address: 0x3e7400 - 0x3e7470
void sub_003E7400_0x3e7400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7400_0x3e7400");
#endif

    switch (ctx->pc) {
        case 0x3e7440u: goto label_3e7440;
        case 0x3e7458u: goto label_3e7458;
        default: break;
    }

    ctx->pc = 0x3e7400u;

    // 0x3e7400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e7400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3e7404: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e7404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3e7408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e7408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e740c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e740cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e7410: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e7410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7414: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E7414u;
    {
        const bool branch_taken_0x3e7414 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7414u;
            // 0x3e7418: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7414) {
            ctx->pc = 0x3E7458u;
            goto label_3e7458;
        }
    }
    ctx->pc = 0x3E741Cu;
    // 0x3e741c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E741Cu;
    {
        const bool branch_taken_0x3e741c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e741c) {
            ctx->pc = 0x3E7420u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E741Cu;
            // 0x3e7420: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E7444u;
            goto label_3e7444;
        }
    }
    ctx->pc = 0x3E7424u;
    // 0x3e7424: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E7424u;
    {
        const bool branch_taken_0x3e7424 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7424) {
            ctx->pc = 0x3E7440u;
            goto label_3e7440;
        }
    }
    ctx->pc = 0x3E742Cu;
    // 0x3e742c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3e742cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3e7430: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E7430u;
    {
        const bool branch_taken_0x3e7430 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7430) {
            ctx->pc = 0x3E7440u;
            goto label_3e7440;
        }
    }
    ctx->pc = 0x3E7438u;
    // 0x3e7438: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3E7438u;
    SET_GPR_U32(ctx, 31, 0x3E7440u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7440u; }
        if (ctx->pc != 0x3E7440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7440u; }
        if (ctx->pc != 0x3E7440u) { return; }
    }
    ctx->pc = 0x3E7440u;
label_3e7440:
    // 0x3e7440: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3e7440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3e7444:
    // 0x3e7444: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3e7444u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3e7448: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E7448u;
    {
        const bool branch_taken_0x3e7448 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3e7448) {
            ctx->pc = 0x3E744Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7448u;
            // 0x3e744c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E745Cu;
            goto label_3e745c;
        }
    }
    ctx->pc = 0x3E7450u;
    // 0x3e7450: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3E7450u;
    SET_GPR_U32(ctx, 31, 0x3E7458u);
    ctx->pc = 0x3E7454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7450u;
            // 0x3e7454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7458u; }
        if (ctx->pc != 0x3E7458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7458u; }
        if (ctx->pc != 0x3E7458u) { return; }
    }
    ctx->pc = 0x3E7458u;
label_3e7458:
    // 0x3e7458: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3e7458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e745c:
    // 0x3e745c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e745cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e7460: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e7460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e7464: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e7464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e7468: 0x3e00008  jr          $ra
    ctx->pc = 0x3E7468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E746Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7468u;
            // 0x3e746c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E7470u;
}
