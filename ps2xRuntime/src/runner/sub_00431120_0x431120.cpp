#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00431120
// Address: 0x431120 - 0x431190
void sub_00431120_0x431120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00431120_0x431120");
#endif

    switch (ctx->pc) {
        case 0x431160u: goto label_431160;
        case 0x431178u: goto label_431178;
        default: break;
    }

    ctx->pc = 0x431120u;

    // 0x431120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x431120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x431124: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x431124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x431128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x431128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x43112c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43112cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x431130: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x431130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431134: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x431134u;
    {
        const bool branch_taken_0x431134 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x431138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431134u;
            // 0x431138: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431134) {
            ctx->pc = 0x431178u;
            goto label_431178;
        }
    }
    ctx->pc = 0x43113Cu;
    // 0x43113c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x43113Cu;
    {
        const bool branch_taken_0x43113c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x43113c) {
            ctx->pc = 0x431140u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43113Cu;
            // 0x431140: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x431164u;
            goto label_431164;
        }
    }
    ctx->pc = 0x431144u;
    // 0x431144: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x431144u;
    {
        const bool branch_taken_0x431144 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x431144) {
            ctx->pc = 0x431160u;
            goto label_431160;
        }
    }
    ctx->pc = 0x43114Cu;
    // 0x43114c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x43114cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x431150: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x431150u;
    {
        const bool branch_taken_0x431150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x431150) {
            ctx->pc = 0x431160u;
            goto label_431160;
        }
    }
    ctx->pc = 0x431158u;
    // 0x431158: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x431158u;
    SET_GPR_U32(ctx, 31, 0x431160u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431160u; }
        if (ctx->pc != 0x431160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431160u; }
        if (ctx->pc != 0x431160u) { return; }
    }
    ctx->pc = 0x431160u;
label_431160:
    // 0x431160: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x431160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_431164:
    // 0x431164: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x431164u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x431168: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x431168u;
    {
        const bool branch_taken_0x431168 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x431168) {
            ctx->pc = 0x43116Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x431168u;
            // 0x43116c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43117Cu;
            goto label_43117c;
        }
    }
    ctx->pc = 0x431170u;
    // 0x431170: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x431170u;
    SET_GPR_U32(ctx, 31, 0x431178u);
    ctx->pc = 0x431174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431170u;
            // 0x431174: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431178u; }
        if (ctx->pc != 0x431178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431178u; }
        if (ctx->pc != 0x431178u) { return; }
    }
    ctx->pc = 0x431178u;
label_431178:
    // 0x431178: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x431178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43117c:
    // 0x43117c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x43117cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x431180: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x431180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x431184: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x431184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x431188: 0x3e00008  jr          $ra
    ctx->pc = 0x431188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43118Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431188u;
            // 0x43118c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x431190u;
}
