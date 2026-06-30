#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BAE20
// Address: 0x2bae20 - 0x2bae90
void sub_002BAE20_0x2bae20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BAE20_0x2bae20");
#endif

    switch (ctx->pc) {
        case 0x2bae60u: goto label_2bae60;
        case 0x2bae78u: goto label_2bae78;
        default: break;
    }

    ctx->pc = 0x2bae20u;

    // 0x2bae20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bae20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bae24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bae24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bae28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bae28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bae2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bae2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bae30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bae30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bae34: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BAE34u;
    {
        const bool branch_taken_0x2bae34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAE34u;
            // 0x2bae38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bae34) {
            ctx->pc = 0x2BAE78u;
            goto label_2bae78;
        }
    }
    ctx->pc = 0x2BAE3Cu;
    // 0x2bae3c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BAE3Cu;
    {
        const bool branch_taken_0x2bae3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bae3c) {
            ctx->pc = 0x2BAE40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAE3Cu;
            // 0x2bae40: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BAE64u;
            goto label_2bae64;
        }
    }
    ctx->pc = 0x2BAE44u;
    // 0x2bae44: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BAE44u;
    {
        const bool branch_taken_0x2bae44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bae44) {
            ctx->pc = 0x2BAE60u;
            goto label_2bae60;
        }
    }
    ctx->pc = 0x2BAE4Cu;
    // 0x2bae4c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2bae4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2bae50: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BAE50u;
    {
        const bool branch_taken_0x2bae50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bae50) {
            ctx->pc = 0x2BAE60u;
            goto label_2bae60;
        }
    }
    ctx->pc = 0x2BAE58u;
    // 0x2bae58: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2BAE58u;
    SET_GPR_U32(ctx, 31, 0x2BAE60u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAE60u; }
        if (ctx->pc != 0x2BAE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAE60u; }
        if (ctx->pc != 0x2BAE60u) { return; }
    }
    ctx->pc = 0x2BAE60u;
label_2bae60:
    // 0x2bae60: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bae60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2bae64:
    // 0x2bae64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bae64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2bae68: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BAE68u;
    {
        const bool branch_taken_0x2bae68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bae68) {
            ctx->pc = 0x2BAE6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAE68u;
            // 0x2bae6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BAE7Cu;
            goto label_2bae7c;
        }
    }
    ctx->pc = 0x2BAE70u;
    // 0x2bae70: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2BAE70u;
    SET_GPR_U32(ctx, 31, 0x2BAE78u);
    ctx->pc = 0x2BAE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAE70u;
            // 0x2bae74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAE78u; }
        if (ctx->pc != 0x2BAE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAE78u; }
        if (ctx->pc != 0x2BAE78u) { return; }
    }
    ctx->pc = 0x2BAE78u;
label_2bae78:
    // 0x2bae78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bae78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bae7c:
    // 0x2bae7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bae7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bae80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bae80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bae84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bae84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bae88: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAE88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAE88u;
            // 0x2bae8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BAE90u;
}
