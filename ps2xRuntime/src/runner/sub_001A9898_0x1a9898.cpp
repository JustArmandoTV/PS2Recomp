#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A9898
// Address: 0x1a9898 - 0x1a99c0
void sub_001A9898_0x1a9898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9898_0x1a9898");
#endif

    switch (ctx->pc) {
        case 0x1a98bcu: goto label_1a98bc;
        case 0x1a98f4u: goto label_1a98f4;
        case 0x1a9950u: goto label_1a9950;
        case 0x1a996cu: goto label_1a996c;
        case 0x1a998cu: goto label_1a998c;
        case 0x1a99a0u: goto label_1a99a0;
        default: break;
    }

    ctx->pc = 0x1a9898u;

    // 0x1a9898: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a9898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a989c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a989cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1a98a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a98a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a98a4: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1a98a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1a98a8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a98a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a98ac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a98acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a98b0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a98b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1a98b4: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1A98B4u;
    SET_GPR_U32(ctx, 31, 0x1A98BCu);
    ctx->pc = 0x1A98B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A98B4u;
            // 0x1a98b8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A98BCu; }
        if (ctx->pc != 0x1A98BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A98BCu; }
        if (ctx->pc != 0x1A98BCu) { return; }
    }
    ctx->pc = 0x1A98BCu;
label_1a98bc:
    // 0x1a98bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a98bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a98c0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a98c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a98c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a98c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a98c8: 0x1203000e  beq         $s0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1A98C8u;
    {
        const bool branch_taken_0x1a98c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A98CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A98C8u;
            // 0x1a98cc: 0x2a040002  slti        $a0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a98c8) {
            ctx->pc = 0x1A9904u;
            goto label_1a9904;
        }
    }
    ctx->pc = 0x1A98D0u;
    // 0x1a98d0: 0x5480000d  bnel        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1A98D0u;
    {
        const bool branch_taken_0x1a98d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a98d0) {
            ctx->pc = 0x1A98D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A98D0u;
            // 0x1a98d4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9908u;
            goto label_1a9908;
        }
    }
    ctx->pc = 0x1A98D8u;
    // 0x1a98d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a98d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a98dc: 0x56020009  bnel        $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A98DCu;
    {
        const bool branch_taken_0x1a98dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a98dc) {
            ctx->pc = 0x1A98E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A98DCu;
            // 0x1a98e0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9904u;
            goto label_1a9904;
        }
    }
    ctx->pc = 0x1A98E4u;
    // 0x1a98e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a98e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a98e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a98e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a98ec: 0xc06a8f8  jal         func_1AA3E0
    ctx->pc = 0x1A98ECu;
    SET_GPR_U32(ctx, 31, 0x1A98F4u);
    ctx->pc = 0x1A98F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A98ECu;
            // 0x1a98f0: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA3E0u;
    if (runtime->hasFunction(0x1AA3E0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A98F4u; }
        if (ctx->pc != 0x1A98F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA3E0_0x1aa3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A98F4u; }
        if (ctx->pc != 0x1A98F4u) { return; }
    }
    ctx->pc = 0x1A98F4u;
label_1a98f4:
    // 0x1a98f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a98f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a98f8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1a98f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a98fc: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x1a98fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a9900: 0x223100b  movn        $v0, $s1, $v1
    ctx->pc = 0x1a9900u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
label_1a9904:
    // 0x1a9904: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a9904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a9908:
    // 0x1a9908: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a9908u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a990c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a990cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9910: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a9910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a9914: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9914u;
            // 0x1a9918: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A991Cu;
    // 0x1a991c: 0x0  nop
    ctx->pc = 0x1a991cu;
    // NOP
    // 0x1a9920: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a9920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a9924: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1a9924u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9928: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a9928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a992c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a992cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1a9930: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a9930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9934: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a9934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a9938: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a9938u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a993c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1a993cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1a9940: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1a9940u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9944: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a9944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a9948: 0xc069e7e  jal         func_1A79F8
    ctx->pc = 0x1A9948u;
    SET_GPR_U32(ctx, 31, 0x1A9950u);
    ctx->pc = 0x1A994Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9948u;
            // 0x1a994c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A79F8u;
    if (runtime->hasFunction(0x1A79F8u)) {
        auto targetFn = runtime->lookupFunction(0x1A79F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9950u; }
        if (ctx->pc != 0x1A9950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A79F8_0x1a79f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9950u; }
        if (ctx->pc != 0x1A9950u) { return; }
    }
    ctx->pc = 0x1A9950u;
label_1a9950:
    // 0x1a9950: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a9950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9954: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a9954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9958: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a9958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a995c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A995Cu;
    {
        const bool branch_taken_0x1a995c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A995Cu;
            // 0x1a9960: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a995c) {
            ctx->pc = 0x1A9998u;
            goto label_1a9998;
        }
    }
    ctx->pc = 0x1A9964u;
    // 0x1a9964: 0xc06aa7e  jal         func_1AA9F8
    ctx->pc = 0x1A9964u;
    SET_GPR_U32(ctx, 31, 0x1A996Cu);
    ctx->pc = 0x1AA9F8u;
    if (runtime->hasFunction(0x1AA9F8u)) {
        auto targetFn = runtime->lookupFunction(0x1AA9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A996Cu; }
        if (ctx->pc != 0x1A996Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA9F8_0x1aa9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A996Cu; }
        if (ctx->pc != 0x1A996Cu) { return; }
    }
    ctx->pc = 0x1A996Cu;
label_1a996c:
    // 0x1a996c: 0x2646ffee  addiu       $a2, $s2, -0x12
    ctx->pc = 0x1a996cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967278));
    // 0x1a9970: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a9970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9974: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a9978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a997c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A997Cu;
    {
        const bool branch_taken_0x1a997c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A997Cu;
            // 0x1a9980: 0x26670012  addiu       $a3, $s3, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a997c) {
            ctx->pc = 0x1A998Cu;
            goto label_1a998c;
        }
    }
    ctx->pc = 0x1A9984u;
    // 0x1a9984: 0xc06a670  jal         func_1A99C0
    ctx->pc = 0x1A9984u;
    SET_GPR_U32(ctx, 31, 0x1A998Cu);
    ctx->pc = 0x1A99C0u;
    if (runtime->hasFunction(0x1A99C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A99C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A998Cu; }
        if (ctx->pc != 0x1A998Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A99C0_0x1a99c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A998Cu; }
        if (ctx->pc != 0x1A998Cu) { return; }
    }
    ctx->pc = 0x1A998Cu;
label_1a998c:
    // 0x1a998c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A998Cu;
    {
        const bool branch_taken_0x1a998c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A998Cu;
            // 0x1a9990: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a998c) {
            ctx->pc = 0x1A99A0u;
            goto label_1a99a0;
        }
    }
    ctx->pc = 0x1A9994u;
    // 0x1a9994: 0x0  nop
    ctx->pc = 0x1a9994u;
    // NOP
label_1a9998:
    // 0x1a9998: 0xc06a670  jal         func_1A99C0
    ctx->pc = 0x1A9998u;
    SET_GPR_U32(ctx, 31, 0x1A99A0u);
    ctx->pc = 0x1A999Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9998u;
            // 0x1a999c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A99C0u;
    if (runtime->hasFunction(0x1A99C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A99C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A99A0u; }
        if (ctx->pc != 0x1A99A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A99C0_0x1a99c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A99A0u; }
        if (ctx->pc != 0x1A99A0u) { return; }
    }
    ctx->pc = 0x1A99A0u;
label_1a99a0:
    // 0x1a99a0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a99a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a99a4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a99a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a99a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a99a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a99ac: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1a99acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a99b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a99b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a99b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A99B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A99B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A99B4u;
            // 0x1a99b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A99BCu;
    // 0x1a99bc: 0x0  nop
    ctx->pc = 0x1a99bcu;
    // NOP
}
