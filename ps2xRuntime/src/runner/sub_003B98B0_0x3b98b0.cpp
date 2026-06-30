#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B98B0
// Address: 0x3b98b0 - 0x3b9ae0
void sub_003B98B0_0x3b98b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B98B0_0x3b98b0");
#endif

    switch (ctx->pc) {
        case 0x3b98f8u: goto label_3b98f8;
        case 0x3b990cu: goto label_3b990c;
        case 0x3b9918u: goto label_3b9918;
        case 0x3b9924u: goto label_3b9924;
        case 0x3b992cu: goto label_3b992c;
        case 0x3b993cu: goto label_3b993c;
        case 0x3b995cu: goto label_3b995c;
        case 0x3b9970u: goto label_3b9970;
        case 0x3b997cu: goto label_3b997c;
        case 0x3b9988u: goto label_3b9988;
        case 0x3b9990u: goto label_3b9990;
        case 0x3b99a0u: goto label_3b99a0;
        case 0x3b99acu: goto label_3b99ac;
        case 0x3b99b4u: goto label_3b99b4;
        case 0x3b99bcu: goto label_3b99bc;
        case 0x3b99e8u: goto label_3b99e8;
        case 0x3b99fcu: goto label_3b99fc;
        case 0x3b9a08u: goto label_3b9a08;
        case 0x3b9a14u: goto label_3b9a14;
        case 0x3b9a1cu: goto label_3b9a1c;
        case 0x3b9a2cu: goto label_3b9a2c;
        case 0x3b9a4cu: goto label_3b9a4c;
        case 0x3b9a60u: goto label_3b9a60;
        case 0x3b9a6cu: goto label_3b9a6c;
        case 0x3b9a78u: goto label_3b9a78;
        case 0x3b9a80u: goto label_3b9a80;
        case 0x3b9a90u: goto label_3b9a90;
        case 0x3b9a9cu: goto label_3b9a9c;
        case 0x3b9aa4u: goto label_3b9aa4;
        case 0x3b9aacu: goto label_3b9aac;
        case 0x3b9ab8u: goto label_3b9ab8;
        default: break;
    }

    ctx->pc = 0x3b98b0u;

label_3b98b0:
    // 0x3b98b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b98b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3b98b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3b98b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3b98b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b98b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3b98bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b98bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b98c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b98c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b98c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b98c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b98c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b98c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b98cc: 0x8cb30000  lw          $s3, 0x0($a1)
    ctx->pc = 0x3b98ccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b98d0: 0x1260003a  beqz        $s3, . + 4 + (0x3A << 2)
    ctx->pc = 0x3B98D0u;
    {
        const bool branch_taken_0x3b98d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B98D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B98D0u;
            // 0x3b98d4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b98d0) {
            ctx->pc = 0x3B99BCu;
            goto label_3b99bc;
        }
    }
    ctx->pc = 0x3B98D8u;
    // 0x3b98d8: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x3b98d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3b98dc: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3B98DCu;
    {
        const bool branch_taken_0x3b98dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b98dc) {
            ctx->pc = 0x3B98E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B98DCu;
            // 0x3b98e0: 0x8e720004  lw          $s2, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B9940u;
            goto label_3b9940;
        }
    }
    ctx->pc = 0x3B98E4u;
    // 0x3b98e4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3b98e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3b98e8: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B98E8u;
    {
        const bool branch_taken_0x3b98e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b98e8) {
            ctx->pc = 0x3B98ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B98E8u;
            // 0x3b98ec: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B98FCu;
            goto label_3b98fc;
        }
    }
    ctx->pc = 0x3B98F0u;
    // 0x3b98f0: 0xc0ee62c  jal         func_3B98B0
    ctx->pc = 0x3B98F0u;
    SET_GPR_U32(ctx, 31, 0x3B98F8u);
    ctx->pc = 0x3B98B0u;
    goto label_3b98b0;
    ctx->pc = 0x3B98F8u;
label_3b98f8:
    // 0x3b98f8: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x3b98f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3b98fc:
    // 0x3b98fc: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B98FCu;
    {
        const bool branch_taken_0x3b98fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b98fc) {
            ctx->pc = 0x3B9900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B98FCu;
            // 0x3b9900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B9910u;
            goto label_3b9910;
        }
    }
    ctx->pc = 0x3B9904u;
    // 0x3b9904: 0xc0ee62c  jal         func_3B98B0
    ctx->pc = 0x3B9904u;
    SET_GPR_U32(ctx, 31, 0x3B990Cu);
    ctx->pc = 0x3B9908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9904u;
            // 0x3b9908: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B98B0u;
    goto label_3b98b0;
    ctx->pc = 0x3B990Cu;
label_3b990c:
    // 0x3b990c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b990cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b9910:
    // 0x3b9910: 0xc0ee6c4  jal         func_3B9B10
    ctx->pc = 0x3B9910u;
    SET_GPR_U32(ctx, 31, 0x3B9918u);
    ctx->pc = 0x3B9B10u;
    if (runtime->hasFunction(0x3B9B10u)) {
        auto targetFn = runtime->lookupFunction(0x3B9B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9918u; }
        if (ctx->pc != 0x3B9918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9B10_0x3b9b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9918u; }
        if (ctx->pc != 0x3B9918u) { return; }
    }
    ctx->pc = 0x3B9918u;
label_3b9918:
    // 0x3b9918: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b9918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b991c: 0xc0ee6c0  jal         func_3B9B00
    ctx->pc = 0x3B991Cu;
    SET_GPR_U32(ctx, 31, 0x3B9924u);
    ctx->pc = 0x3B9920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B991Cu;
            // 0x3b9920: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9B00u;
    if (runtime->hasFunction(0x3B9B00u)) {
        auto targetFn = runtime->lookupFunction(0x3B9B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9924u; }
        if (ctx->pc != 0x3B9924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9B00_0x3b9b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9924u; }
        if (ctx->pc != 0x3B9924u) { return; }
    }
    ctx->pc = 0x3B9924u;
label_3b9924:
    // 0x3b9924: 0xc0ee6bc  jal         func_3B9AF0
    ctx->pc = 0x3B9924u;
    SET_GPR_U32(ctx, 31, 0x3B992Cu);
    ctx->pc = 0x3B9928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9924u;
            // 0x3b9928: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9AF0u;
    if (runtime->hasFunction(0x3B9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x3B9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B992Cu; }
        if (ctx->pc != 0x3B992Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9AF0_0x3b9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B992Cu; }
        if (ctx->pc != 0x3B992Cu) { return; }
    }
    ctx->pc = 0x3B992Cu;
label_3b992c:
    // 0x3b992c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b992cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9930: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b9930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9934: 0xc0ee6b8  jal         func_3B9AE0
    ctx->pc = 0x3B9934u;
    SET_GPR_U32(ctx, 31, 0x3B993Cu);
    ctx->pc = 0x3B9938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9934u;
            // 0x3b9938: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9AE0u;
    if (runtime->hasFunction(0x3B9AE0u)) {
        auto targetFn = runtime->lookupFunction(0x3B9AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B993Cu; }
        if (ctx->pc != 0x3B993Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9AE0_0x3b9ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B993Cu; }
        if (ctx->pc != 0x3B993Cu) { return; }
    }
    ctx->pc = 0x3B993Cu;
label_3b993c:
    // 0x3b993c: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x3b993cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3b9940:
    // 0x3b9940: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3B9940u;
    {
        const bool branch_taken_0x3b9940 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9940) {
            ctx->pc = 0x3B9944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9940u;
            // 0x3b9944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B99A4u;
            goto label_3b99a4;
        }
    }
    ctx->pc = 0x3B9948u;
    // 0x3b9948: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3b9948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3b994c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B994Cu;
    {
        const bool branch_taken_0x3b994c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b994c) {
            ctx->pc = 0x3B9950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B994Cu;
            // 0x3b9950: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B9960u;
            goto label_3b9960;
        }
    }
    ctx->pc = 0x3B9954u;
    // 0x3b9954: 0xc0ee62c  jal         func_3B98B0
    ctx->pc = 0x3B9954u;
    SET_GPR_U32(ctx, 31, 0x3B995Cu);
    ctx->pc = 0x3B9958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9954u;
            // 0x3b9958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B98B0u;
    goto label_3b98b0;
    ctx->pc = 0x3B995Cu;
label_3b995c:
    // 0x3b995c: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x3b995cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3b9960:
    // 0x3b9960: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B9960u;
    {
        const bool branch_taken_0x3b9960 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9960) {
            ctx->pc = 0x3B9964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9960u;
            // 0x3b9964: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B9974u;
            goto label_3b9974;
        }
    }
    ctx->pc = 0x3B9968u;
    // 0x3b9968: 0xc0ee62c  jal         func_3B98B0
    ctx->pc = 0x3B9968u;
    SET_GPR_U32(ctx, 31, 0x3B9970u);
    ctx->pc = 0x3B996Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9968u;
            // 0x3b996c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B98B0u;
    goto label_3b98b0;
    ctx->pc = 0x3B9970u;
label_3b9970:
    // 0x3b9970: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b9970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b9974:
    // 0x3b9974: 0xc0ee6c4  jal         func_3B9B10
    ctx->pc = 0x3B9974u;
    SET_GPR_U32(ctx, 31, 0x3B997Cu);
    ctx->pc = 0x3B9B10u;
    if (runtime->hasFunction(0x3B9B10u)) {
        auto targetFn = runtime->lookupFunction(0x3B9B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B997Cu; }
        if (ctx->pc != 0x3B997Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9B10_0x3b9b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B997Cu; }
        if (ctx->pc != 0x3B997Cu) { return; }
    }
    ctx->pc = 0x3B997Cu;
label_3b997c:
    // 0x3b997c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b997cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9980: 0xc0ee6c0  jal         func_3B9B00
    ctx->pc = 0x3B9980u;
    SET_GPR_U32(ctx, 31, 0x3B9988u);
    ctx->pc = 0x3B9984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9980u;
            // 0x3b9984: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9B00u;
    if (runtime->hasFunction(0x3B9B00u)) {
        auto targetFn = runtime->lookupFunction(0x3B9B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9988u; }
        if (ctx->pc != 0x3B9988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9B00_0x3b9b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9988u; }
        if (ctx->pc != 0x3B9988u) { return; }
    }
    ctx->pc = 0x3B9988u;
label_3b9988:
    // 0x3b9988: 0xc0ee6bc  jal         func_3B9AF0
    ctx->pc = 0x3B9988u;
    SET_GPR_U32(ctx, 31, 0x3B9990u);
    ctx->pc = 0x3B998Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9988u;
            // 0x3b998c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9AF0u;
    if (runtime->hasFunction(0x3B9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x3B9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9990u; }
        if (ctx->pc != 0x3B9990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9AF0_0x3b9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9990u; }
        if (ctx->pc != 0x3B9990u) { return; }
    }
    ctx->pc = 0x3B9990u;
label_3b9990:
    // 0x3b9990: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b9990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9994: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b9994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9998: 0xc0ee6b8  jal         func_3B9AE0
    ctx->pc = 0x3B9998u;
    SET_GPR_U32(ctx, 31, 0x3B99A0u);
    ctx->pc = 0x3B999Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9998u;
            // 0x3b999c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9AE0u;
    if (runtime->hasFunction(0x3B9AE0u)) {
        auto targetFn = runtime->lookupFunction(0x3B9AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B99A0u; }
        if (ctx->pc != 0x3B99A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9AE0_0x3b9ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B99A0u; }
        if (ctx->pc != 0x3B99A0u) { return; }
    }
    ctx->pc = 0x3B99A0u;
label_3b99a0:
    // 0x3b99a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b99a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b99a4:
    // 0x3b99a4: 0xc0ee6c4  jal         func_3B9B10
    ctx->pc = 0x3B99A4u;
    SET_GPR_U32(ctx, 31, 0x3B99ACu);
    ctx->pc = 0x3B9B10u;
    if (runtime->hasFunction(0x3B9B10u)) {
        auto targetFn = runtime->lookupFunction(0x3B9B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B99ACu; }
        if (ctx->pc != 0x3B99ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9B10_0x3b9b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B99ACu; }
        if (ctx->pc != 0x3B99ACu) { return; }
    }
    ctx->pc = 0x3B99ACu;
label_3b99ac:
    // 0x3b99ac: 0xc0ee6bc  jal         func_3B9AF0
    ctx->pc = 0x3B99ACu;
    SET_GPR_U32(ctx, 31, 0x3B99B4u);
    ctx->pc = 0x3B99B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B99ACu;
            // 0x3b99b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9AF0u;
    if (runtime->hasFunction(0x3B9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x3B9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B99B4u; }
        if (ctx->pc != 0x3B99B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9AF0_0x3b9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B99B4u; }
        if (ctx->pc != 0x3B99B4u) { return; }
    }
    ctx->pc = 0x3B99B4u;
label_3b99b4:
    // 0x3b99b4: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3B99B4u;
    SET_GPR_U32(ctx, 31, 0x3B99BCu);
    ctx->pc = 0x3B99B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B99B4u;
            // 0x3b99b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B99BCu; }
        if (ctx->pc != 0x3B99BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B99BCu; }
        if (ctx->pc != 0x3B99BCu) { return; }
    }
    ctx->pc = 0x3B99BCu;
label_3b99bc:
    // 0x3b99bc: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x3b99bcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3b99c0: 0x5260003b  beql        $s3, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x3B99C0u;
    {
        const bool branch_taken_0x3b99c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b99c0) {
            ctx->pc = 0x3B99C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B99C0u;
            // 0x3b99c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B9AB0u;
            goto label_3b9ab0;
        }
    }
    ctx->pc = 0x3B99C8u;
    // 0x3b99c8: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x3b99c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3b99cc: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3B99CCu;
    {
        const bool branch_taken_0x3b99cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b99cc) {
            ctx->pc = 0x3B99D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B99CCu;
            // 0x3b99d0: 0x8e720004  lw          $s2, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B9A30u;
            goto label_3b9a30;
        }
    }
    ctx->pc = 0x3B99D4u;
    // 0x3b99d4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3b99d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3b99d8: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B99D8u;
    {
        const bool branch_taken_0x3b99d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b99d8) {
            ctx->pc = 0x3B99DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B99D8u;
            // 0x3b99dc: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B99ECu;
            goto label_3b99ec;
        }
    }
    ctx->pc = 0x3B99E0u;
    // 0x3b99e0: 0xc0ee62c  jal         func_3B98B0
    ctx->pc = 0x3B99E0u;
    SET_GPR_U32(ctx, 31, 0x3B99E8u);
    ctx->pc = 0x3B99E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B99E0u;
            // 0x3b99e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B98B0u;
    goto label_3b98b0;
    ctx->pc = 0x3B99E8u;
label_3b99e8:
    // 0x3b99e8: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x3b99e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3b99ec:
    // 0x3b99ec: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B99ECu;
    {
        const bool branch_taken_0x3b99ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b99ec) {
            ctx->pc = 0x3B99F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B99ECu;
            // 0x3b99f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B9A00u;
            goto label_3b9a00;
        }
    }
    ctx->pc = 0x3B99F4u;
    // 0x3b99f4: 0xc0ee62c  jal         func_3B98B0
    ctx->pc = 0x3B99F4u;
    SET_GPR_U32(ctx, 31, 0x3B99FCu);
    ctx->pc = 0x3B99F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B99F4u;
            // 0x3b99f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B98B0u;
    goto label_3b98b0;
    ctx->pc = 0x3B99FCu;
label_3b99fc:
    // 0x3b99fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b99fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b9a00:
    // 0x3b9a00: 0xc0ee6c4  jal         func_3B9B10
    ctx->pc = 0x3B9A00u;
    SET_GPR_U32(ctx, 31, 0x3B9A08u);
    ctx->pc = 0x3B9B10u;
    if (runtime->hasFunction(0x3B9B10u)) {
        auto targetFn = runtime->lookupFunction(0x3B9B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9A08u; }
        if (ctx->pc != 0x3B9A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9B10_0x3b9b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9A08u; }
        if (ctx->pc != 0x3B9A08u) { return; }
    }
    ctx->pc = 0x3B9A08u;
label_3b9a08:
    // 0x3b9a08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b9a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9a0c: 0xc0ee6c0  jal         func_3B9B00
    ctx->pc = 0x3B9A0Cu;
    SET_GPR_U32(ctx, 31, 0x3B9A14u);
    ctx->pc = 0x3B9A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9A0Cu;
            // 0x3b9a10: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9B00u;
    if (runtime->hasFunction(0x3B9B00u)) {
        auto targetFn = runtime->lookupFunction(0x3B9B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9A14u; }
        if (ctx->pc != 0x3B9A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9B00_0x3b9b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9A14u; }
        if (ctx->pc != 0x3B9A14u) { return; }
    }
    ctx->pc = 0x3B9A14u;
label_3b9a14:
    // 0x3b9a14: 0xc0ee6bc  jal         func_3B9AF0
    ctx->pc = 0x3B9A14u;
    SET_GPR_U32(ctx, 31, 0x3B9A1Cu);
    ctx->pc = 0x3B9A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9A14u;
            // 0x3b9a18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9AF0u;
    if (runtime->hasFunction(0x3B9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x3B9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9A1Cu; }
        if (ctx->pc != 0x3B9A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9AF0_0x3b9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9A1Cu; }
        if (ctx->pc != 0x3B9A1Cu) { return; }
    }
    ctx->pc = 0x3B9A1Cu;
label_3b9a1c:
    // 0x3b9a1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b9a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9a20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b9a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9a24: 0xc0ee6b8  jal         func_3B9AE0
    ctx->pc = 0x3B9A24u;
    SET_GPR_U32(ctx, 31, 0x3B9A2Cu);
    ctx->pc = 0x3B9A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9A24u;
            // 0x3b9a28: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9AE0u;
    if (runtime->hasFunction(0x3B9AE0u)) {
        auto targetFn = runtime->lookupFunction(0x3B9AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9A2Cu; }
        if (ctx->pc != 0x3B9A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9AE0_0x3b9ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9A2Cu; }
        if (ctx->pc != 0x3B9A2Cu) { return; }
    }
    ctx->pc = 0x3B9A2Cu;
label_3b9a2c:
    // 0x3b9a2c: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x3b9a2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3b9a30:
    // 0x3b9a30: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3B9A30u;
    {
        const bool branch_taken_0x3b9a30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9a30) {
            ctx->pc = 0x3B9A34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9A30u;
            // 0x3b9a34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B9A94u;
            goto label_3b9a94;
        }
    }
    ctx->pc = 0x3B9A38u;
    // 0x3b9a38: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3b9a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3b9a3c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B9A3Cu;
    {
        const bool branch_taken_0x3b9a3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9a3c) {
            ctx->pc = 0x3B9A40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9A3Cu;
            // 0x3b9a40: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B9A50u;
            goto label_3b9a50;
        }
    }
    ctx->pc = 0x3B9A44u;
    // 0x3b9a44: 0xc0ee62c  jal         func_3B98B0
    ctx->pc = 0x3B9A44u;
    SET_GPR_U32(ctx, 31, 0x3B9A4Cu);
    ctx->pc = 0x3B9A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9A44u;
            // 0x3b9a48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B98B0u;
    goto label_3b98b0;
    ctx->pc = 0x3B9A4Cu;
label_3b9a4c:
    // 0x3b9a4c: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x3b9a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3b9a50:
    // 0x3b9a50: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B9A50u;
    {
        const bool branch_taken_0x3b9a50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9a50) {
            ctx->pc = 0x3B9A54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9A50u;
            // 0x3b9a54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B9A64u;
            goto label_3b9a64;
        }
    }
    ctx->pc = 0x3B9A58u;
    // 0x3b9a58: 0xc0ee62c  jal         func_3B98B0
    ctx->pc = 0x3B9A58u;
    SET_GPR_U32(ctx, 31, 0x3B9A60u);
    ctx->pc = 0x3B9A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9A58u;
            // 0x3b9a5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B98B0u;
    goto label_3b98b0;
    ctx->pc = 0x3B9A60u;
label_3b9a60:
    // 0x3b9a60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b9a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b9a64:
    // 0x3b9a64: 0xc0ee6c4  jal         func_3B9B10
    ctx->pc = 0x3B9A64u;
    SET_GPR_U32(ctx, 31, 0x3B9A6Cu);
    ctx->pc = 0x3B9B10u;
    if (runtime->hasFunction(0x3B9B10u)) {
        auto targetFn = runtime->lookupFunction(0x3B9B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9A6Cu; }
        if (ctx->pc != 0x3B9A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9B10_0x3b9b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9A6Cu; }
        if (ctx->pc != 0x3B9A6Cu) { return; }
    }
    ctx->pc = 0x3B9A6Cu;
label_3b9a6c:
    // 0x3b9a6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b9a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9a70: 0xc0ee6c0  jal         func_3B9B00
    ctx->pc = 0x3B9A70u;
    SET_GPR_U32(ctx, 31, 0x3B9A78u);
    ctx->pc = 0x3B9A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9A70u;
            // 0x3b9a74: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9B00u;
    if (runtime->hasFunction(0x3B9B00u)) {
        auto targetFn = runtime->lookupFunction(0x3B9B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9A78u; }
        if (ctx->pc != 0x3B9A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9B00_0x3b9b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9A78u; }
        if (ctx->pc != 0x3B9A78u) { return; }
    }
    ctx->pc = 0x3B9A78u;
label_3b9a78:
    // 0x3b9a78: 0xc0ee6bc  jal         func_3B9AF0
    ctx->pc = 0x3B9A78u;
    SET_GPR_U32(ctx, 31, 0x3B9A80u);
    ctx->pc = 0x3B9A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9A78u;
            // 0x3b9a7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9AF0u;
    if (runtime->hasFunction(0x3B9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x3B9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9A80u; }
        if (ctx->pc != 0x3B9A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9AF0_0x3b9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9A80u; }
        if (ctx->pc != 0x3B9A80u) { return; }
    }
    ctx->pc = 0x3B9A80u;
label_3b9a80:
    // 0x3b9a80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b9a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9a84: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b9a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9a88: 0xc0ee6b8  jal         func_3B9AE0
    ctx->pc = 0x3B9A88u;
    SET_GPR_U32(ctx, 31, 0x3B9A90u);
    ctx->pc = 0x3B9A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9A88u;
            // 0x3b9a8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9AE0u;
    if (runtime->hasFunction(0x3B9AE0u)) {
        auto targetFn = runtime->lookupFunction(0x3B9AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9A90u; }
        if (ctx->pc != 0x3B9A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9AE0_0x3b9ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9A90u; }
        if (ctx->pc != 0x3B9A90u) { return; }
    }
    ctx->pc = 0x3B9A90u;
label_3b9a90:
    // 0x3b9a90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b9a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b9a94:
    // 0x3b9a94: 0xc0ee6c4  jal         func_3B9B10
    ctx->pc = 0x3B9A94u;
    SET_GPR_U32(ctx, 31, 0x3B9A9Cu);
    ctx->pc = 0x3B9B10u;
    if (runtime->hasFunction(0x3B9B10u)) {
        auto targetFn = runtime->lookupFunction(0x3B9B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9A9Cu; }
        if (ctx->pc != 0x3B9A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9B10_0x3b9b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9A9Cu; }
        if (ctx->pc != 0x3B9A9Cu) { return; }
    }
    ctx->pc = 0x3B9A9Cu;
label_3b9a9c:
    // 0x3b9a9c: 0xc0ee6bc  jal         func_3B9AF0
    ctx->pc = 0x3B9A9Cu;
    SET_GPR_U32(ctx, 31, 0x3B9AA4u);
    ctx->pc = 0x3B9AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9A9Cu;
            // 0x3b9aa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9AF0u;
    if (runtime->hasFunction(0x3B9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x3B9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9AA4u; }
        if (ctx->pc != 0x3B9AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9AF0_0x3b9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9AA4u; }
        if (ctx->pc != 0x3B9AA4u) { return; }
    }
    ctx->pc = 0x3B9AA4u;
label_3b9aa4:
    // 0x3b9aa4: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3B9AA4u;
    SET_GPR_U32(ctx, 31, 0x3B9AACu);
    ctx->pc = 0x3B9AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9AA4u;
            // 0x3b9aa8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9AACu; }
        if (ctx->pc != 0x3B9AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9AACu; }
        if (ctx->pc != 0x3B9AACu) { return; }
    }
    ctx->pc = 0x3B9AACu;
label_3b9aac:
    // 0x3b9aac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b9aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b9ab0:
    // 0x3b9ab0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3B9AB0u;
    SET_GPR_U32(ctx, 31, 0x3B9AB8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9AB8u; }
        if (ctx->pc != 0x3B9AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9AB8u; }
        if (ctx->pc != 0x3B9AB8u) { return; }
    }
    ctx->pc = 0x3B9AB8u;
label_3b9ab8:
    // 0x3b9ab8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3b9ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b9abc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b9abcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b9ac0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b9ac0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b9ac4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b9ac4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b9ac8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b9ac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b9acc: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9ACCu;
            // 0x3b9ad0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B9AD4u;
    // 0x3b9ad4: 0x0  nop
    ctx->pc = 0x3b9ad4u;
    // NOP
    // 0x3b9ad8: 0x0  nop
    ctx->pc = 0x3b9ad8u;
    // NOP
    // 0x3b9adc: 0x0  nop
    ctx->pc = 0x3b9adcu;
    // NOP
}
