#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B28A0
// Address: 0x1b28a0 - 0x1b2950
void sub_001B28A0_0x1b28a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B28A0_0x1b28a0");
#endif

    switch (ctx->pc) {
        case 0x1b28c4u: goto label_1b28c4;
        case 0x1b28d8u: goto label_1b28d8;
        case 0x1b28e8u: goto label_1b28e8;
        case 0x1b28f8u: goto label_1b28f8;
        case 0x1b2910u: goto label_1b2910;
        case 0x1b2920u: goto label_1b2920;
        default: break;
    }

    ctx->pc = 0x1b28a0u;

    // 0x1b28a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b28a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b28a4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b28a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b28a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b28a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b28ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b28acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b28b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b28b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b28b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b28b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b28b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b28b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b28bc: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B28BCu;
    SET_GPR_U32(ctx, 31, 0x1B28C4u);
    ctx->pc = 0x1B28C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B28BCu;
            // 0x1b28c0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B28C4u; }
        if (ctx->pc != 0x1B28C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B28C4u; }
        if (ctx->pc != 0x1B28C4u) { return; }
    }
    ctx->pc = 0x1B28C4u;
label_1b28c4:
    // 0x1b28c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b28c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b28c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B28C8u;
    {
        const bool branch_taken_0x1b28c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B28CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B28C8u;
            // 0x1b28cc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b28c8) {
            ctx->pc = 0x1B28F0u;
            goto label_1b28f0;
        }
    }
    ctx->pc = 0x1B28D0u;
    // 0x1b28d0: 0xc06e376  jal         func_1B8DD8
    ctx->pc = 0x1B28D0u;
    SET_GPR_U32(ctx, 31, 0x1B28D8u);
    ctx->pc = 0x1B8DD8u;
    if (runtime->hasFunction(0x1B8DD8u)) {
        auto targetFn = runtime->lookupFunction(0x1B8DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B28D8u; }
        if (ctx->pc != 0x1B28D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8DD8_0x1b8dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B28D8u; }
        if (ctx->pc != 0x1B28D8u) { return; }
    }
    ctx->pc = 0x1B28D8u;
label_1b28d8:
    // 0x1b28d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b28d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b28dc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b28dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b28e0: 0xc06e382  jal         func_1B8E08
    ctx->pc = 0x1B28E0u;
    SET_GPR_U32(ctx, 31, 0x1B28E8u);
    ctx->pc = 0x1B28E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B28E0u;
            // 0x1b28e4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8E08u;
    if (runtime->hasFunction(0x1B8E08u)) {
        auto targetFn = runtime->lookupFunction(0x1B8E08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B28E8u; }
        if (ctx->pc != 0x1B28E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8E08_0x1b8e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B28E8u; }
        if (ctx->pc != 0x1B28E8u) { return; }
    }
    ctx->pc = 0x1B28E8u;
label_1b28e8:
    // 0x1b28e8: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1b28e8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1b28ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b28ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b28f0:
    // 0x1b28f0: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B28F0u;
    SET_GPR_U32(ctx, 31, 0x1B28F8u);
    ctx->pc = 0x1B28F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B28F0u;
            // 0x1b28f4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B28F8u; }
        if (ctx->pc != 0x1B28F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B28F8u; }
        if (ctx->pc != 0x1B28F8u) { return; }
    }
    ctx->pc = 0x1B28F8u;
label_1b28f8:
    // 0x1b28f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b28f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b28fc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b28fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b2900: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B2900u;
    {
        const bool branch_taken_0x1b2900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2900u;
            // 0x1b2904: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2900) {
            ctx->pc = 0x1B2924u;
            goto label_1b2924;
        }
    }
    ctx->pc = 0x1B2908u;
    // 0x1b2908: 0xc06e376  jal         func_1B8DD8
    ctx->pc = 0x1B2908u;
    SET_GPR_U32(ctx, 31, 0x1B2910u);
    ctx->pc = 0x1B8DD8u;
    if (runtime->hasFunction(0x1B8DD8u)) {
        auto targetFn = runtime->lookupFunction(0x1B8DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2910u; }
        if (ctx->pc != 0x1B2910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8DD8_0x1b8dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2910u; }
        if (ctx->pc != 0x1B2910u) { return; }
    }
    ctx->pc = 0x1B2910u;
label_1b2910:
    // 0x1b2910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2914: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b2914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b2918: 0xc06e382  jal         func_1B8E08
    ctx->pc = 0x1B2918u;
    SET_GPR_U32(ctx, 31, 0x1B2920u);
    ctx->pc = 0x1B291Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2918u;
            // 0x1b291c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8E08u;
    if (runtime->hasFunction(0x1B8E08u)) {
        auto targetFn = runtime->lookupFunction(0x1B8E08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2920u; }
        if (ctx->pc != 0x1B2920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8E08_0x1b8e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2920u; }
        if (ctx->pc != 0x1B2920u) { return; }
    }
    ctx->pc = 0x1B2920u;
label_1b2920:
    // 0x1b2920: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x1b2920u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_1b2924:
    // 0x1b2924: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2924u;
    {
        const bool branch_taken_0x1b2924 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2924u;
            // 0x1b2928: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2924) {
            ctx->pc = 0x1B2938u;
            goto label_1b2938;
        }
    }
    ctx->pc = 0x1B292Cu;
    // 0x1b292c: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B292Cu;
    {
        const bool branch_taken_0x1b292c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B292Cu;
            // 0x1b2930: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b292c) {
            ctx->pc = 0x1B2938u;
            goto label_1b2938;
        }
    }
    ctx->pc = 0x1B2934u;
    // 0x1b2934: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b2934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b2938:
    // 0x1b2938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b293c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b293cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2940: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b2940u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2944: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b2944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b2948: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B294Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2948u;
            // 0x1b294c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B2950u;
}
