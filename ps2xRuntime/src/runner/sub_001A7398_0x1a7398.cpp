#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A7398
// Address: 0x1a7398 - 0x1a7430
void sub_001A7398_0x1a7398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7398_0x1a7398");
#endif

    switch (ctx->pc) {
        case 0x1a73bcu: goto label_1a73bc;
        case 0x1a73d4u: goto label_1a73d4;
        case 0x1a73ecu: goto label_1a73ec;
        case 0x1a7410u: goto label_1a7410;
        default: break;
    }

    ctx->pc = 0x1a7398u;

    // 0x1a7398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a739c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a739cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a73a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a73a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a73a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a73a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a73a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a73a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a73ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a73acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a73b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a73b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a73b4: 0xc069d0c  jal         func_1A7430
    ctx->pc = 0x1A73B4u;
    SET_GPR_U32(ctx, 31, 0x1A73BCu);
    ctx->pc = 0x1A73B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A73B4u;
            // 0x1a73b8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7430u;
    if (runtime->hasFunction(0x1A7430u)) {
        auto targetFn = runtime->lookupFunction(0x1A7430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A73BCu; }
        if (ctx->pc != 0x1A73BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7430_0x1a7430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A73BCu; }
        if (ctx->pc != 0x1A73BCu) { return; }
    }
    ctx->pc = 0x1A73BCu;
label_1a73bc:
    // 0x1a73bc: 0x26040002  addiu       $a0, $s0, 0x2
    ctx->pc = 0x1a73bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1a73c0: 0x2625fffe  addiu       $a1, $s1, -0x2
    ctx->pc = 0x1a73c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x1a73c4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A73C4u;
    {
        const bool branch_taken_0x1a73c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A73C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A73C4u;
            // 0x1a73c8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a73c4) {
            ctx->pc = 0x1A73FCu;
            goto label_1a73fc;
        }
    }
    ctx->pc = 0x1A73CCu;
    // 0x1a73cc: 0xc069d0c  jal         func_1A7430
    ctx->pc = 0x1A73CCu;
    SET_GPR_U32(ctx, 31, 0x1A73D4u);
    ctx->pc = 0x1A7430u;
    if (runtime->hasFunction(0x1A7430u)) {
        auto targetFn = runtime->lookupFunction(0x1A7430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A73D4u; }
        if (ctx->pc != 0x1A73D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7430_0x1a7430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A73D4u; }
        if (ctx->pc != 0x1A73D4u) { return; }
    }
    ctx->pc = 0x1A73D4u;
label_1a73d4:
    // 0x1a73d4: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1A73D4u;
    {
        const bool branch_taken_0x1a73d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a73d4) {
            ctx->pc = 0x1A73D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A73D4u;
            // 0x1a73d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7414u;
            goto label_1a7414;
        }
    }
    ctx->pc = 0x1A73DCu;
    // 0x1a73dc: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1a73dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a73e0: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x1a73e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1a73e4: 0xc069d0c  jal         func_1A7430
    ctx->pc = 0x1A73E4u;
    SET_GPR_U32(ctx, 31, 0x1A73ECu);
    ctx->pc = 0x1A73E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A73E4u;
            // 0x1a73e8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7430u;
    if (runtime->hasFunction(0x1A7430u)) {
        auto targetFn = runtime->lookupFunction(0x1A7430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A73ECu; }
        if (ctx->pc != 0x1A73ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7430_0x1a7430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A73ECu; }
        if (ctx->pc != 0x1A73ECu) { return; }
    }
    ctx->pc = 0x1A73ECu;
label_1a73ec:
    // 0x1a73ec: 0x26040003  addiu       $a0, $s0, 0x3
    ctx->pc = 0x1a73ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x1a73f0: 0x2625fffd  addiu       $a1, $s1, -0x3
    ctx->pc = 0x1a73f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967293));
    // 0x1a73f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A73F4u;
    {
        const bool branch_taken_0x1a73f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A73F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A73F4u;
            // 0x1a73f8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a73f4) {
            ctx->pc = 0x1A7408u;
            goto label_1a7408;
        }
    }
    ctx->pc = 0x1A73FCu;
label_1a73fc:
    // 0x1a73fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A73FCu;
    {
        const bool branch_taken_0x1a73fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A73FCu;
            // 0x1a7400: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a73fc) {
            ctx->pc = 0x1A7414u;
            goto label_1a7414;
        }
    }
    ctx->pc = 0x1A7404u;
    // 0x1a7404: 0x0  nop
    ctx->pc = 0x1a7404u;
    // NOP
label_1a7408:
    // 0x1a7408: 0xc069d0c  jal         func_1A7430
    ctx->pc = 0x1A7408u;
    SET_GPR_U32(ctx, 31, 0x1A7410u);
    ctx->pc = 0x1A7430u;
    if (runtime->hasFunction(0x1A7430u)) {
        auto targetFn = runtime->lookupFunction(0x1A7430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7410u; }
        if (ctx->pc != 0x1A7410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7430_0x1a7430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7410u; }
        if (ctx->pc != 0x1A7410u) { return; }
    }
    ctx->pc = 0x1A7410u;
label_1a7410:
    // 0x1a7410: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a7410u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a7414:
    // 0x1a7414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7418: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a7418u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a741c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a741cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7420: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a7420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a7424: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7424u;
            // 0x1a7428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A742Cu;
    // 0x1a742c: 0x0  nop
    ctx->pc = 0x1a742cu;
    // NOP
}
