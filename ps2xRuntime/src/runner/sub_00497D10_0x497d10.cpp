#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00497D10
// Address: 0x497d10 - 0x497d80
void sub_00497D10_0x497d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00497D10_0x497d10");
#endif

    switch (ctx->pc) {
        case 0x497d34u: goto label_497d34;
        case 0x497d48u: goto label_497d48;
        case 0x497d60u: goto label_497d60;
        default: break;
    }

    ctx->pc = 0x497d10u;

    // 0x497d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x497d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x497d14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x497d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x497d18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x497d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x497d1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x497d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x497d20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x497d20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497d24: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x497D24u;
    {
        const bool branch_taken_0x497d24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x497D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497D24u;
            // 0x497d28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497d24) {
            ctx->pc = 0x497D60u;
            goto label_497d60;
        }
    }
    ctx->pc = 0x497D2Cu;
    // 0x497d2c: 0xc125f9c  jal         func_497E70
    ctx->pc = 0x497D2Cu;
    SET_GPR_U32(ctx, 31, 0x497D34u);
    ctx->pc = 0x497E70u;
    if (runtime->hasFunction(0x497E70u)) {
        auto targetFn = runtime->lookupFunction(0x497E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497D34u; }
        if (ctx->pc != 0x497D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00497E70_0x497e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497D34u; }
        if (ctx->pc != 0x497D34u) { return; }
    }
    ctx->pc = 0x497D34u;
label_497d34:
    // 0x497d34: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x497d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x497d38: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x497D38u;
    {
        const bool branch_taken_0x497d38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x497d38) {
            ctx->pc = 0x497D3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x497D38u;
            // 0x497d3c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x497D4Cu;
            goto label_497d4c;
        }
    }
    ctx->pc = 0x497D40u;
    // 0x497d40: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x497D40u;
    SET_GPR_U32(ctx, 31, 0x497D48u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497D48u; }
        if (ctx->pc != 0x497D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497D48u; }
        if (ctx->pc != 0x497D48u) { return; }
    }
    ctx->pc = 0x497D48u;
label_497d48:
    // 0x497d48: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x497d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_497d4c:
    // 0x497d4c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x497d4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x497d50: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x497D50u;
    {
        const bool branch_taken_0x497d50 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x497d50) {
            ctx->pc = 0x497D54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x497D50u;
            // 0x497d54: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x497D64u;
            goto label_497d64;
        }
    }
    ctx->pc = 0x497D58u;
    // 0x497d58: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x497D58u;
    SET_GPR_U32(ctx, 31, 0x497D60u);
    ctx->pc = 0x497D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x497D58u;
            // 0x497d5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497D60u; }
        if (ctx->pc != 0x497D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497D60u; }
        if (ctx->pc != 0x497D60u) { return; }
    }
    ctx->pc = 0x497D60u;
label_497d60:
    // 0x497d60: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x497d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_497d64:
    // 0x497d64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x497d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x497d68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x497d68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x497d6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x497d6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x497d70: 0x3e00008  jr          $ra
    ctx->pc = 0x497D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x497D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497D70u;
            // 0x497d74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x497D78u;
    // 0x497d78: 0x0  nop
    ctx->pc = 0x497d78u;
    // NOP
    // 0x497d7c: 0x0  nop
    ctx->pc = 0x497d7cu;
    // NOP
}
