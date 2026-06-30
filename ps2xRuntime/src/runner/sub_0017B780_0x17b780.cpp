#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017B780
// Address: 0x17b780 - 0x17b7f8
void sub_0017B780_0x17b780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B780_0x17b780");
#endif

    switch (ctx->pc) {
        case 0x17b7a4u: goto label_17b7a4;
        case 0x17b7b4u: goto label_17b7b4;
        case 0x17b7d0u: goto label_17b7d0;
        case 0x17b7d8u: goto label_17b7d8;
        default: break;
    }

    ctx->pc = 0x17b780u;

    // 0x17b780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b784: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b788: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17b788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b78c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17b78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17b790: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17b790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b794: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17b794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17b798: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17b798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17b79c: 0xc05ed74  jal         func_17B5D0
    ctx->pc = 0x17B79Cu;
    SET_GPR_U32(ctx, 31, 0x17B7A4u);
    ctx->pc = 0x17B7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B79Cu;
            // 0x17b7a0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B5D0u;
    if (runtime->hasFunction(0x17B5D0u)) {
        auto targetFn = runtime->lookupFunction(0x17B5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B7A4u; }
        if (ctx->pc != 0x17B7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B5D0_0x17b5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B7A4u; }
        if (ctx->pc != 0x17B7A4u) { return; }
    }
    ctx->pc = 0x17B7A4u;
label_17b7a4:
    // 0x17b7a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b7a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17b7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b7ac: 0xc0448fa  jal         func_1123E8
    ctx->pc = 0x17B7ACu;
    SET_GPR_U32(ctx, 31, 0x17B7B4u);
    ctx->pc = 0x17B7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B7ACu;
            // 0x17b7b0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1123E8u;
    if (runtime->hasFunction(0x1123E8u)) {
        auto targetFn = runtime->lookupFunction(0x1123E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B7B4u; }
        if (ctx->pc != 0x17B7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001123E8_0x1123e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B7B4u; }
        if (ctx->pc != 0x17B7B4u) { return; }
    }
    ctx->pc = 0x17B7B4u;
label_17b7b4:
    // 0x17b7b4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17b7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17b7b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17b7b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b7bc: 0x24845b10  addiu       $a0, $a0, 0x5B10
    ctx->pc = 0x17b7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23312));
    // 0x17b7c0: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B7C0u;
    {
        const bool branch_taken_0x17b7c0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x17B7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B7C0u;
            // 0x17b7c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b7c0) {
            ctx->pc = 0x17B7D0u;
            goto label_17b7d0;
        }
    }
    ctx->pc = 0x17B7C8u;
    // 0x17b7c8: 0xc043c12  jal         func_10F048
    ctx->pc = 0x17B7C8u;
    SET_GPR_U32(ctx, 31, 0x17B7D0u);
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B7D0u; }
        if (ctx->pc != 0x17B7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B7D0u; }
        if (ctx->pc != 0x17B7D0u) { return; }
    }
    ctx->pc = 0x17B7D0u;
label_17b7d0:
    // 0x17b7d0: 0xc05ed82  jal         func_17B608
    ctx->pc = 0x17B7D0u;
    SET_GPR_U32(ctx, 31, 0x17B7D8u);
    ctx->pc = 0x17B608u;
    if (runtime->hasFunction(0x17B608u)) {
        auto targetFn = runtime->lookupFunction(0x17B608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B7D8u; }
        if (ctx->pc != 0x17B7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B608_0x17b608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B7D8u; }
        if (ctx->pc != 0x17B7D8u) { return; }
    }
    ctx->pc = 0x17B7D8u;
label_17b7d8:
    // 0x17b7d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17b7d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b7dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17b7dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b7e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b7e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b7e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17b7e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b7e8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17b7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x17B7ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B7ECu;
            // 0x17b7f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B7F4u;
    // 0x17b7f4: 0x0  nop
    ctx->pc = 0x17b7f4u;
    // NOP
}
