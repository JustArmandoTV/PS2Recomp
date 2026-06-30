#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004BD670
// Address: 0x4bd670 - 0x4bd6e0
void sub_004BD670_0x4bd670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BD670_0x4bd670");
#endif

    switch (ctx->pc) {
        case 0x4bd6b0u: goto label_4bd6b0;
        case 0x4bd6c8u: goto label_4bd6c8;
        default: break;
    }

    ctx->pc = 0x4bd670u;

    // 0x4bd670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4bd670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4bd674: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4bd674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4bd678: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bd678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4bd67c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bd67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4bd680: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4bd680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd684: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4BD684u;
    {
        const bool branch_taken_0x4bd684 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD684u;
            // 0x4bd688: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd684) {
            ctx->pc = 0x4BD6C8u;
            goto label_4bd6c8;
        }
    }
    ctx->pc = 0x4BD68Cu;
    // 0x4bd68c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4BD68Cu;
    {
        const bool branch_taken_0x4bd68c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bd68c) {
            ctx->pc = 0x4BD690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD68Cu;
            // 0x4bd690: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BD6B4u;
            goto label_4bd6b4;
        }
    }
    ctx->pc = 0x4BD694u;
    // 0x4bd694: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BD694u;
    {
        const bool branch_taken_0x4bd694 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bd694) {
            ctx->pc = 0x4BD6B0u;
            goto label_4bd6b0;
        }
    }
    ctx->pc = 0x4BD69Cu;
    // 0x4bd69c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4bd69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4bd6a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BD6A0u;
    {
        const bool branch_taken_0x4bd6a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bd6a0) {
            ctx->pc = 0x4BD6B0u;
            goto label_4bd6b0;
        }
    }
    ctx->pc = 0x4BD6A8u;
    // 0x4bd6a8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4BD6A8u;
    SET_GPR_U32(ctx, 31, 0x4BD6B0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD6B0u; }
        if (ctx->pc != 0x4BD6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD6B0u; }
        if (ctx->pc != 0x4BD6B0u) { return; }
    }
    ctx->pc = 0x4BD6B0u;
label_4bd6b0:
    // 0x4bd6b0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4bd6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4bd6b4:
    // 0x4bd6b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4bd6b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4bd6b8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BD6B8u;
    {
        const bool branch_taken_0x4bd6b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4bd6b8) {
            ctx->pc = 0x4BD6BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD6B8u;
            // 0x4bd6bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BD6CCu;
            goto label_4bd6cc;
        }
    }
    ctx->pc = 0x4BD6C0u;
    // 0x4bd6c0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4BD6C0u;
    SET_GPR_U32(ctx, 31, 0x4BD6C8u);
    ctx->pc = 0x4BD6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD6C0u;
            // 0x4bd6c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD6C8u; }
        if (ctx->pc != 0x4BD6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD6C8u; }
        if (ctx->pc != 0x4BD6C8u) { return; }
    }
    ctx->pc = 0x4BD6C8u;
label_4bd6c8:
    // 0x4bd6c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4bd6c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bd6cc:
    // 0x4bd6cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4bd6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bd6d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bd6d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bd6d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bd6d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bd6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4BD6D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BD6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD6D8u;
            // 0x4bd6dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BD6E0u;
}
