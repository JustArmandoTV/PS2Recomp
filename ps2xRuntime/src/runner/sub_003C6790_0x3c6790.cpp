#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C6790
// Address: 0x3c6790 - 0x3c67f0
void sub_003C6790_0x3c6790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C6790_0x3c6790");
#endif

    switch (ctx->pc) {
        case 0x3c67c0u: goto label_3c67c0;
        case 0x3c67d8u: goto label_3c67d8;
        default: break;
    }

    ctx->pc = 0x3c6790u;

    // 0x3c6790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c6790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3c6794: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c6794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3c6798: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c6798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c679c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c679cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c67a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c67a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c67a4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x3C67A4u;
    {
        const bool branch_taken_0x3c67a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C67A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C67A4u;
            // 0x3c67a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c67a4) {
            ctx->pc = 0x3C67D8u;
            goto label_3c67d8;
        }
    }
    ctx->pc = 0x3C67ACu;
    // 0x3c67ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3c67acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3c67b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c67b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c67b4: 0x24428d70  addiu       $v0, $v0, -0x7290
    ctx->pc = 0x3c67b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937968));
    // 0x3c67b8: 0xc0ee744  jal         func_3B9D10
    ctx->pc = 0x3C67B8u;
    SET_GPR_U32(ctx, 31, 0x3C67C0u);
    ctx->pc = 0x3C67BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C67B8u;
            // 0x3c67bc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D10u;
    if (runtime->hasFunction(0x3B9D10u)) {
        auto targetFn = runtime->lookupFunction(0x3B9D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C67C0u; }
        if (ctx->pc != 0x3C67C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9D10_0x3b9d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C67C0u; }
        if (ctx->pc != 0x3C67C0u) { return; }
    }
    ctx->pc = 0x3C67C0u;
label_3c67c0:
    // 0x3c67c0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3c67c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x3c67c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3c67c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3c67c8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C67C8u;
    {
        const bool branch_taken_0x3c67c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3c67c8) {
            ctx->pc = 0x3C67CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C67C8u;
            // 0x3c67cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C67DCu;
            goto label_3c67dc;
        }
    }
    ctx->pc = 0x3C67D0u;
    // 0x3c67d0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3C67D0u;
    SET_GPR_U32(ctx, 31, 0x3C67D8u);
    ctx->pc = 0x3C67D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C67D0u;
            // 0x3c67d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C67D8u; }
        if (ctx->pc != 0x3C67D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C67D8u; }
        if (ctx->pc != 0x3C67D8u) { return; }
    }
    ctx->pc = 0x3C67D8u;
label_3c67d8:
    // 0x3c67d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3c67d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c67dc:
    // 0x3c67dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c67dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c67e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c67e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c67e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c67e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c67e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C67E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C67ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C67E8u;
            // 0x3c67ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C67F0u;
}
