#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BE430
// Address: 0x2be430 - 0x2be4a0
void sub_002BE430_0x2be430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE430_0x2be430");
#endif

    switch (ctx->pc) {
        case 0x2be470u: goto label_2be470;
        case 0x2be488u: goto label_2be488;
        default: break;
    }

    ctx->pc = 0x2be430u;

    // 0x2be430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2be430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2be434: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2be434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2be438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2be438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2be43c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2be43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2be440: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2be440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be444: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BE444u;
    {
        const bool branch_taken_0x2be444 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE444u;
            // 0x2be448: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be444) {
            ctx->pc = 0x2BE488u;
            goto label_2be488;
        }
    }
    ctx->pc = 0x2BE44Cu;
    // 0x2be44c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BE44Cu;
    {
        const bool branch_taken_0x2be44c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be44c) {
            ctx->pc = 0x2BE450u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE44Cu;
            // 0x2be450: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BE474u;
            goto label_2be474;
        }
    }
    ctx->pc = 0x2BE454u;
    // 0x2be454: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BE454u;
    {
        const bool branch_taken_0x2be454 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be454) {
            ctx->pc = 0x2BE470u;
            goto label_2be470;
        }
    }
    ctx->pc = 0x2BE45Cu;
    // 0x2be45c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2be45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2be460: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE460u;
    {
        const bool branch_taken_0x2be460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be460) {
            ctx->pc = 0x2BE470u;
            goto label_2be470;
        }
    }
    ctx->pc = 0x2BE468u;
    // 0x2be468: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2BE468u;
    SET_GPR_U32(ctx, 31, 0x2BE470u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE470u; }
        if (ctx->pc != 0x2BE470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE470u; }
        if (ctx->pc != 0x2BE470u) { return; }
    }
    ctx->pc = 0x2BE470u;
label_2be470:
    // 0x2be470: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2be470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2be474:
    // 0x2be474: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2be474u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2be478: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE478u;
    {
        const bool branch_taken_0x2be478 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2be478) {
            ctx->pc = 0x2BE47Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE478u;
            // 0x2be47c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BE48Cu;
            goto label_2be48c;
        }
    }
    ctx->pc = 0x2BE480u;
    // 0x2be480: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2BE480u;
    SET_GPR_U32(ctx, 31, 0x2BE488u);
    ctx->pc = 0x2BE484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE480u;
            // 0x2be484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE488u; }
        if (ctx->pc != 0x2BE488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE488u; }
        if (ctx->pc != 0x2BE488u) { return; }
    }
    ctx->pc = 0x2BE488u;
label_2be488:
    // 0x2be488: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2be488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2be48c:
    // 0x2be48c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2be48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2be490: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2be490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be494: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2be494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be498: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE498u;
            // 0x2be49c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BE4A0u;
}
