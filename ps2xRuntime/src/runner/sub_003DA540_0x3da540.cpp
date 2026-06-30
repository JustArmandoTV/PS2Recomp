#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DA540
// Address: 0x3da540 - 0x3da5b0
void sub_003DA540_0x3da540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA540_0x3da540");
#endif

    switch (ctx->pc) {
        case 0x3da580u: goto label_3da580;
        case 0x3da598u: goto label_3da598;
        default: break;
    }

    ctx->pc = 0x3da540u;

    // 0x3da540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3da540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3da544: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3da544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3da548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3da548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3da54c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3da54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3da550: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3da550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da554: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3DA554u;
    {
        const bool branch_taken_0x3da554 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA554u;
            // 0x3da558: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da554) {
            ctx->pc = 0x3DA598u;
            goto label_3da598;
        }
    }
    ctx->pc = 0x3DA55Cu;
    // 0x3da55c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DA55Cu;
    {
        const bool branch_taken_0x3da55c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da55c) {
            ctx->pc = 0x3DA560u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA55Cu;
            // 0x3da560: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DA584u;
            goto label_3da584;
        }
    }
    ctx->pc = 0x3DA564u;
    // 0x3da564: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DA564u;
    {
        const bool branch_taken_0x3da564 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da564) {
            ctx->pc = 0x3DA580u;
            goto label_3da580;
        }
    }
    ctx->pc = 0x3DA56Cu;
    // 0x3da56c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3da56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3da570: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DA570u;
    {
        const bool branch_taken_0x3da570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da570) {
            ctx->pc = 0x3DA580u;
            goto label_3da580;
        }
    }
    ctx->pc = 0x3DA578u;
    // 0x3da578: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3DA578u;
    SET_GPR_U32(ctx, 31, 0x3DA580u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA580u; }
        if (ctx->pc != 0x3DA580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA580u; }
        if (ctx->pc != 0x3DA580u) { return; }
    }
    ctx->pc = 0x3DA580u;
label_3da580:
    // 0x3da580: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3da580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3da584:
    // 0x3da584: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3da584u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3da588: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DA588u;
    {
        const bool branch_taken_0x3da588 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3da588) {
            ctx->pc = 0x3DA58Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA588u;
            // 0x3da58c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DA59Cu;
            goto label_3da59c;
        }
    }
    ctx->pc = 0x3DA590u;
    // 0x3da590: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3DA590u;
    SET_GPR_U32(ctx, 31, 0x3DA598u);
    ctx->pc = 0x3DA594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA590u;
            // 0x3da594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA598u; }
        if (ctx->pc != 0x3DA598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA598u; }
        if (ctx->pc != 0x3DA598u) { return; }
    }
    ctx->pc = 0x3DA598u;
label_3da598:
    // 0x3da598: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3da598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3da59c:
    // 0x3da59c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3da59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3da5a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3da5a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3da5a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3da5a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3da5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA5A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA5A8u;
            // 0x3da5ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DA5B0u;
}
