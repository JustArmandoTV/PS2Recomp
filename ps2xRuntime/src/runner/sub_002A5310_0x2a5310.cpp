#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A5310
// Address: 0x2a5310 - 0x2a5380
void sub_002A5310_0x2a5310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5310_0x2a5310");
#endif

    switch (ctx->pc) {
        case 0x2a5334u: goto label_2a5334;
        case 0x2a5348u: goto label_2a5348;
        case 0x2a5360u: goto label_2a5360;
        default: break;
    }

    ctx->pc = 0x2a5310u;

    // 0x2a5310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a5310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a5314: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a5314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a5318: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a5318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a531c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a531cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a5320: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a5320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5324: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x2A5324u;
    {
        const bool branch_taken_0x2a5324 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5324u;
            // 0x2a5328: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5324) {
            ctx->pc = 0x2A5360u;
            goto label_2a5360;
        }
    }
    ctx->pc = 0x2A532Cu;
    // 0x2a532c: 0xc0a94e0  jal         func_2A5380
    ctx->pc = 0x2A532Cu;
    SET_GPR_U32(ctx, 31, 0x2A5334u);
    ctx->pc = 0x2A5380u;
    if (runtime->hasFunction(0x2A5380u)) {
        auto targetFn = runtime->lookupFunction(0x2A5380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5334u; }
        if (ctx->pc != 0x2A5334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A5380_0x2a5380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5334u; }
        if (ctx->pc != 0x2A5334u) { return; }
    }
    ctx->pc = 0x2A5334u;
label_2a5334:
    // 0x2a5334: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2a5334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2a5338: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5338u;
    {
        const bool branch_taken_0x2a5338 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5338) {
            ctx->pc = 0x2A533Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5338u;
            // 0x2a533c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A534Cu;
            goto label_2a534c;
        }
    }
    ctx->pc = 0x2A5340u;
    // 0x2a5340: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2A5340u;
    SET_GPR_U32(ctx, 31, 0x2A5348u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5348u; }
        if (ctx->pc != 0x2A5348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5348u; }
        if (ctx->pc != 0x2A5348u) { return; }
    }
    ctx->pc = 0x2A5348u;
label_2a5348:
    // 0x2a5348: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2a5348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2a534c:
    // 0x2a534c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a534cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a5350: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5350u;
    {
        const bool branch_taken_0x2a5350 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a5350) {
            ctx->pc = 0x2A5354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5350u;
            // 0x2a5354: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A5364u;
            goto label_2a5364;
        }
    }
    ctx->pc = 0x2A5358u;
    // 0x2a5358: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2A5358u;
    SET_GPR_U32(ctx, 31, 0x2A5360u);
    ctx->pc = 0x2A535Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5358u;
            // 0x2a535c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5360u; }
        if (ctx->pc != 0x2A5360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5360u; }
        if (ctx->pc != 0x2A5360u) { return; }
    }
    ctx->pc = 0x2A5360u;
label_2a5360:
    // 0x2a5360: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a5360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a5364:
    // 0x2a5364: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a5364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a5368: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a5368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a536c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a536cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5370: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5370u;
            // 0x2a5374: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5378u;
    // 0x2a5378: 0x0  nop
    ctx->pc = 0x2a5378u;
    // NOP
    // 0x2a537c: 0x0  nop
    ctx->pc = 0x2a537cu;
    // NOP
}
