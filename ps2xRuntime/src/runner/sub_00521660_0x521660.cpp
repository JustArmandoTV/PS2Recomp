#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00521660
// Address: 0x521660 - 0x5216d0
void sub_00521660_0x521660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00521660_0x521660");
#endif

    switch (ctx->pc) {
        case 0x5216a0u: goto label_5216a0;
        case 0x5216b8u: goto label_5216b8;
        default: break;
    }

    ctx->pc = 0x521660u;

    // 0x521660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x521660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x521664: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x521664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x521668: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x521668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x52166c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52166cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x521670: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x521670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x521674: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x521674u;
    {
        const bool branch_taken_0x521674 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x521678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x521674u;
            // 0x521678: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x521674) {
            ctx->pc = 0x5216B8u;
            goto label_5216b8;
        }
    }
    ctx->pc = 0x52167Cu;
    // 0x52167c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x52167Cu;
    {
        const bool branch_taken_0x52167c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x52167c) {
            ctx->pc = 0x521680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52167Cu;
            // 0x521680: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5216A4u;
            goto label_5216a4;
        }
    }
    ctx->pc = 0x521684u;
    // 0x521684: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x521684u;
    {
        const bool branch_taken_0x521684 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x521684) {
            ctx->pc = 0x5216A0u;
            goto label_5216a0;
        }
    }
    ctx->pc = 0x52168Cu;
    // 0x52168c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x52168cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x521690: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x521690u;
    {
        const bool branch_taken_0x521690 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x521690) {
            ctx->pc = 0x5216A0u;
            goto label_5216a0;
        }
    }
    ctx->pc = 0x521698u;
    // 0x521698: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x521698u;
    SET_GPR_U32(ctx, 31, 0x5216A0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5216A0u; }
        if (ctx->pc != 0x5216A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5216A0u; }
        if (ctx->pc != 0x5216A0u) { return; }
    }
    ctx->pc = 0x5216A0u;
label_5216a0:
    // 0x5216a0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x5216a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_5216a4:
    // 0x5216a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5216a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x5216a8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x5216A8u;
    {
        const bool branch_taken_0x5216a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5216a8) {
            ctx->pc = 0x5216ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5216A8u;
            // 0x5216ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5216BCu;
            goto label_5216bc;
        }
    }
    ctx->pc = 0x5216B0u;
    // 0x5216b0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x5216B0u;
    SET_GPR_U32(ctx, 31, 0x5216B8u);
    ctx->pc = 0x5216B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5216B0u;
            // 0x5216b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5216B8u; }
        if (ctx->pc != 0x5216B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5216B8u; }
        if (ctx->pc != 0x5216B8u) { return; }
    }
    ctx->pc = 0x5216B8u;
label_5216b8:
    // 0x5216b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x5216b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5216bc:
    // 0x5216bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5216bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5216c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5216c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5216c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5216c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5216c8: 0x3e00008  jr          $ra
    ctx->pc = 0x5216C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5216CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5216C8u;
            // 0x5216cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5216D0u;
}
