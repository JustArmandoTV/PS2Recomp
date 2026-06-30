#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C8430
// Address: 0x4c8430 - 0x4c84a0
void sub_004C8430_0x4c8430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C8430_0x4c8430");
#endif

    switch (ctx->pc) {
        case 0x4c8470u: goto label_4c8470;
        case 0x4c8488u: goto label_4c8488;
        default: break;
    }

    ctx->pc = 0x4c8430u;

    // 0x4c8430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c8430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c8434: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c8434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4c8438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c8438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4c843c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c843cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c8440: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c8440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8444: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4C8444u;
    {
        const bool branch_taken_0x4c8444 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8444u;
            // 0x4c8448: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8444) {
            ctx->pc = 0x4C8488u;
            goto label_4c8488;
        }
    }
    ctx->pc = 0x4C844Cu;
    // 0x4c844c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4C844Cu;
    {
        const bool branch_taken_0x4c844c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c844c) {
            ctx->pc = 0x4C8450u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C844Cu;
            // 0x4c8450: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C8474u;
            goto label_4c8474;
        }
    }
    ctx->pc = 0x4C8454u;
    // 0x4c8454: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4C8454u;
    {
        const bool branch_taken_0x4c8454 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c8454) {
            ctx->pc = 0x4C8470u;
            goto label_4c8470;
        }
    }
    ctx->pc = 0x4C845Cu;
    // 0x4c845c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4c845cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4c8460: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C8460u;
    {
        const bool branch_taken_0x4c8460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c8460) {
            ctx->pc = 0x4C8470u;
            goto label_4c8470;
        }
    }
    ctx->pc = 0x4C8468u;
    // 0x4c8468: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4C8468u;
    SET_GPR_U32(ctx, 31, 0x4C8470u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8470u; }
        if (ctx->pc != 0x4C8470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8470u; }
        if (ctx->pc != 0x4C8470u) { return; }
    }
    ctx->pc = 0x4C8470u;
label_4c8470:
    // 0x4c8470: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4c8470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4c8474:
    // 0x4c8474: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4c8474u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4c8478: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C8478u;
    {
        const bool branch_taken_0x4c8478 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4c8478) {
            ctx->pc = 0x4C847Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8478u;
            // 0x4c847c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C848Cu;
            goto label_4c848c;
        }
    }
    ctx->pc = 0x4C8480u;
    // 0x4c8480: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4C8480u;
    SET_GPR_U32(ctx, 31, 0x4C8488u);
    ctx->pc = 0x4C8484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8480u;
            // 0x4c8484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8488u; }
        if (ctx->pc != 0x4C8488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8488u; }
        if (ctx->pc != 0x4C8488u) { return; }
    }
    ctx->pc = 0x4C8488u;
label_4c8488:
    // 0x4c8488: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4c8488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c848c:
    // 0x4c848c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c848cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c8490: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c8490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c8494: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c8494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c8498: 0x3e00008  jr          $ra
    ctx->pc = 0x4C8498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C849Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8498u;
            // 0x4c849c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C84A0u;
}
