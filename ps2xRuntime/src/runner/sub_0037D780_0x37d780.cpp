#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037D780
// Address: 0x37d780 - 0x37d7f0
void sub_0037D780_0x37d780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D780_0x37d780");
#endif

    switch (ctx->pc) {
        case 0x37d7c0u: goto label_37d7c0;
        case 0x37d7d8u: goto label_37d7d8;
        default: break;
    }

    ctx->pc = 0x37d780u;

    // 0x37d780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37d780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37d784: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37d784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37d788: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37d788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37d78c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37d78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37d790: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37d790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d794: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x37D794u;
    {
        const bool branch_taken_0x37d794 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D794u;
            // 0x37d798: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d794) {
            ctx->pc = 0x37D7D8u;
            goto label_37d7d8;
        }
    }
    ctx->pc = 0x37D79Cu;
    // 0x37d79c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x37D79Cu;
    {
        const bool branch_taken_0x37d79c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d79c) {
            ctx->pc = 0x37D7A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37D79Cu;
            // 0x37d7a0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37D7C4u;
            goto label_37d7c4;
        }
    }
    ctx->pc = 0x37D7A4u;
    // 0x37d7a4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x37D7A4u;
    {
        const bool branch_taken_0x37d7a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d7a4) {
            ctx->pc = 0x37D7C0u;
            goto label_37d7c0;
        }
    }
    ctx->pc = 0x37D7ACu;
    // 0x37d7ac: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x37d7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37d7b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37D7B0u;
    {
        const bool branch_taken_0x37d7b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d7b0) {
            ctx->pc = 0x37D7C0u;
            goto label_37d7c0;
        }
    }
    ctx->pc = 0x37D7B8u;
    // 0x37d7b8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x37D7B8u;
    SET_GPR_U32(ctx, 31, 0x37D7C0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D7C0u; }
        if (ctx->pc != 0x37D7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D7C0u; }
        if (ctx->pc != 0x37D7C0u) { return; }
    }
    ctx->pc = 0x37D7C0u;
label_37d7c0:
    // 0x37d7c0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x37d7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_37d7c4:
    // 0x37d7c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x37d7c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x37d7c8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37D7C8u;
    {
        const bool branch_taken_0x37d7c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x37d7c8) {
            ctx->pc = 0x37D7CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37D7C8u;
            // 0x37d7cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37D7DCu;
            goto label_37d7dc;
        }
    }
    ctx->pc = 0x37D7D0u;
    // 0x37d7d0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x37D7D0u;
    SET_GPR_U32(ctx, 31, 0x37D7D8u);
    ctx->pc = 0x37D7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D7D0u;
            // 0x37d7d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D7D8u; }
        if (ctx->pc != 0x37D7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D7D8u; }
        if (ctx->pc != 0x37D7D8u) { return; }
    }
    ctx->pc = 0x37D7D8u;
label_37d7d8:
    // 0x37d7d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x37d7d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37d7dc:
    // 0x37d7dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37d7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37d7e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37d7e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37d7e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37d7e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37d7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x37D7E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D7E8u;
            // 0x37d7ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37D7F0u;
}
