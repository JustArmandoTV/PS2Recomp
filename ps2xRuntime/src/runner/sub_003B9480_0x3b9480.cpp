#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B9480
// Address: 0x3b9480 - 0x3b94f0
void sub_003B9480_0x3b9480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B9480_0x3b9480");
#endif

    switch (ctx->pc) {
        case 0x3b94c0u: goto label_3b94c0;
        case 0x3b94d8u: goto label_3b94d8;
        default: break;
    }

    ctx->pc = 0x3b9480u;

    // 0x3b9480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b9480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b9484: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b9484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b9488: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b9488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b948c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b948cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b9490: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b9490u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9494: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3B9494u;
    {
        const bool branch_taken_0x3b9494 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9494u;
            // 0x3b9498: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9494) {
            ctx->pc = 0x3B94D8u;
            goto label_3b94d8;
        }
    }
    ctx->pc = 0x3B949Cu;
    // 0x3b949c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B949Cu;
    {
        const bool branch_taken_0x3b949c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b949c) {
            ctx->pc = 0x3B94A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B949Cu;
            // 0x3b94a0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B94C4u;
            goto label_3b94c4;
        }
    }
    ctx->pc = 0x3B94A4u;
    // 0x3b94a4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B94A4u;
    {
        const bool branch_taken_0x3b94a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b94a4) {
            ctx->pc = 0x3B94C0u;
            goto label_3b94c0;
        }
    }
    ctx->pc = 0x3B94ACu;
    // 0x3b94ac: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3b94acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3b94b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B94B0u;
    {
        const bool branch_taken_0x3b94b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b94b0) {
            ctx->pc = 0x3B94C0u;
            goto label_3b94c0;
        }
    }
    ctx->pc = 0x3B94B8u;
    // 0x3b94b8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3B94B8u;
    SET_GPR_U32(ctx, 31, 0x3B94C0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B94C0u; }
        if (ctx->pc != 0x3B94C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B94C0u; }
        if (ctx->pc != 0x3B94C0u) { return; }
    }
    ctx->pc = 0x3B94C0u;
label_3b94c0:
    // 0x3b94c0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3b94c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3b94c4:
    // 0x3b94c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3b94c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3b94c8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B94C8u;
    {
        const bool branch_taken_0x3b94c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3b94c8) {
            ctx->pc = 0x3B94CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B94C8u;
            // 0x3b94cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B94DCu;
            goto label_3b94dc;
        }
    }
    ctx->pc = 0x3B94D0u;
    // 0x3b94d0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3B94D0u;
    SET_GPR_U32(ctx, 31, 0x3B94D8u);
    ctx->pc = 0x3B94D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B94D0u;
            // 0x3b94d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B94D8u; }
        if (ctx->pc != 0x3B94D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B94D8u; }
        if (ctx->pc != 0x3B94D8u) { return; }
    }
    ctx->pc = 0x3B94D8u;
label_3b94d8:
    // 0x3b94d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b94d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b94dc:
    // 0x3b94dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b94dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b94e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b94e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b94e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b94e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b94e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B94E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B94ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B94E8u;
            // 0x3b94ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B94F0u;
}
