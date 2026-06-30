#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A2900
// Address: 0x2a2900 - 0x2a29c0
void sub_002A2900_0x2a2900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2900_0x2a2900");
#endif

    switch (ctx->pc) {
        case 0x2a2930u: goto label_2a2930;
        case 0x2a293cu: goto label_2a293c;
        case 0x2a294cu: goto label_2a294c;
        case 0x2a2958u: goto label_2a2958;
        case 0x2a2988u: goto label_2a2988;
        case 0x2a299cu: goto label_2a299c;
        default: break;
    }

    ctx->pc = 0x2a2900u;

    // 0x2a2900: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a2900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a2904: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a2904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a2908: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a2908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a290c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a290cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a2910: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a2910u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2914: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a2914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a2918: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a2918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a291c: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x2a291cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2a2920: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2920u;
    {
        const bool branch_taken_0x2a2920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2920u;
            // 0x2a2924: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2920) {
            ctx->pc = 0x2A2934u;
            goto label_2a2934;
        }
    }
    ctx->pc = 0x2A2928u;
    // 0x2a2928: 0xc04e804  jal         func_13A010
    ctx->pc = 0x2A2928u;
    SET_GPR_U32(ctx, 31, 0x2A2930u);
    ctx->pc = 0x13A010u;
    if (runtime->hasFunction(0x13A010u)) {
        auto targetFn = runtime->lookupFunction(0x13A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2930u; }
        if (ctx->pc != 0x2A2930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A010_0x13a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2930u; }
        if (ctx->pc != 0x2A2930u) { return; }
    }
    ctx->pc = 0x2A2930u;
label_2a2930:
    // 0x2a2930: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x2a2930u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_2a2934:
    // 0x2a2934: 0xc04e804  jal         func_13A010
    ctx->pc = 0x2A2934u;
    SET_GPR_U32(ctx, 31, 0x2A293Cu);
    ctx->pc = 0x2A2938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2934u;
            // 0x2a2938: 0x8e44002c  lw          $a0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A010u;
    if (runtime->hasFunction(0x13A010u)) {
        auto targetFn = runtime->lookupFunction(0x13A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A293Cu; }
        if (ctx->pc != 0x2A293Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A010_0x13a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A293Cu; }
        if (ctx->pc != 0x2A293Cu) { return; }
    }
    ctx->pc = 0x2A293Cu;
label_2a293c:
    // 0x2a293c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A293Cu;
    {
        const bool branch_taken_0x2a293c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a293c) {
            ctx->pc = 0x2A2950u;
            goto label_2a2950;
        }
    }
    ctx->pc = 0x2A2944u;
    // 0x2a2944: 0xc04e800  jal         func_13A000
    ctx->pc = 0x2A2944u;
    SET_GPR_U32(ctx, 31, 0x2A294Cu);
    ctx->pc = 0x2A2948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2944u;
            // 0x2a2948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A000u;
    if (runtime->hasFunction(0x13A000u)) {
        auto targetFn = runtime->lookupFunction(0x13A000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A294Cu; }
        if (ctx->pc != 0x2A294Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A000_0x13a000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A294Cu; }
        if (ctx->pc != 0x2A294Cu) { return; }
    }
    ctx->pc = 0x2A294Cu;
label_2a294c:
    // 0x2a294c: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x2a294cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_2a2950:
    // 0x2a2950: 0xc04e808  jal         func_13A020
    ctx->pc = 0x2A2950u;
    SET_GPR_U32(ctx, 31, 0x2A2958u);
    ctx->pc = 0x13A020u;
    if (runtime->hasFunction(0x13A020u)) {
        auto targetFn = runtime->lookupFunction(0x13A020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2958u; }
        if (ctx->pc != 0x2A2958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A020_0x13a020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2958u; }
        if (ctx->pc != 0x2A2958u) { return; }
    }
    ctx->pc = 0x2A2958u;
label_2a2958:
    // 0x2a2958: 0x518023  subu        $s0, $v0, $s1
    ctx->pc = 0x2a2958u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2a295c: 0x6030008  bgezl       $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A295Cu;
    {
        const bool branch_taken_0x2a295c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2a295c) {
            ctx->pc = 0x2A2960u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A295Cu;
            // 0x2a2960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A2980u;
            goto label_2a2980;
        }
    }
    ctx->pc = 0x2A2964u;
    // 0x2a2964: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x2a2964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2a2968: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x2a2968u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x2a296c: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x2a296cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a2970: 0x6010002  bgez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A2970u;
    {
        const bool branch_taken_0x2a2970 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2a2970) {
            ctx->pc = 0x2A297Cu;
            goto label_2a297c;
        }
    }
    ctx->pc = 0x2A2978u;
    // 0x2a2978: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2a2978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2a297c:
    // 0x2a297c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a297cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a2980:
    // 0x2a2980: 0xc04e800  jal         func_13A000
    ctx->pc = 0x2A2980u;
    SET_GPR_U32(ctx, 31, 0x2A2988u);
    ctx->pc = 0x13A000u;
    if (runtime->hasFunction(0x13A000u)) {
        auto targetFn = runtime->lookupFunction(0x13A000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2988u; }
        if (ctx->pc != 0x2A2988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A000_0x13a000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2988u; }
        if (ctx->pc != 0x2A2988u) { return; }
    }
    ctx->pc = 0x2A2988u;
label_2a2988:
    // 0x2a2988: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x2a2988u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x2a298c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a298cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2990: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a2990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2994: 0xc04fd08  jal         func_13F420
    ctx->pc = 0x2A2994u;
    SET_GPR_U32(ctx, 31, 0x2A299Cu);
    ctx->pc = 0x2A2998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2994u;
            // 0x2a2998: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F420u;
    if (runtime->hasFunction(0x13F420u)) {
        auto targetFn = runtime->lookupFunction(0x13F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A299Cu; }
        if (ctx->pc != 0x2A299Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F420_0x13f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A299Cu; }
        if (ctx->pc != 0x2A299Cu) { return; }
    }
    ctx->pc = 0x2A299Cu;
label_2a299c:
    // 0x2a299c: 0xae500040  sw          $s0, 0x40($s2)
    ctx->pc = 0x2a299cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 16));
    // 0x2a29a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a29a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a29a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a29a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a29a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a29a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a29ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a29acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a29b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A29B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A29B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A29B0u;
            // 0x2a29b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A29B8u;
    // 0x2a29b8: 0x0  nop
    ctx->pc = 0x2a29b8u;
    // NOP
    // 0x2a29bc: 0x0  nop
    ctx->pc = 0x2a29bcu;
    // NOP
}
