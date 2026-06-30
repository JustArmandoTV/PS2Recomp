#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00178888
// Address: 0x178888 - 0x178930
void sub_00178888_0x178888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178888_0x178888");
#endif

    switch (ctx->pc) {
        case 0x1788bcu: goto label_1788bc;
        case 0x1788d4u: goto label_1788d4;
        case 0x1788dcu: goto label_1788dc;
        case 0x1788f0u: goto label_1788f0;
        case 0x1788f8u: goto label_1788f8;
        case 0x178910u: goto label_178910;
        default: break;
    }

    ctx->pc = 0x178888u;

    // 0x178888: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x178888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17888c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17888cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178890: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x178890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178894: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x178894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x178898: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x178898u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17889c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17889cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1788a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1788a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1788a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1788a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1788a8: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1788a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1788ac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1788ACu;
    {
        const bool branch_taken_0x1788ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1788B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1788ACu;
            // 0x1788b0: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1788ac) {
            ctx->pc = 0x1788C8u;
            goto label_1788c8;
        }
    }
    ctx->pc = 0x1788B4u;
    // 0x1788b4: 0xc05e306  jal         func_178C18
    ctx->pc = 0x1788B4u;
    SET_GPR_U32(ctx, 31, 0x1788BCu);
    ctx->pc = 0x178C18u;
    if (runtime->hasFunction(0x178C18u)) {
        auto targetFn = runtime->lookupFunction(0x178C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1788BCu; }
        if (ctx->pc != 0x1788BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178C18_0x178c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1788BCu; }
        if (ctx->pc != 0x1788BCu) { return; }
    }
    ctx->pc = 0x1788BCu;
label_1788bc:
    // 0x1788bc: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x1788bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1788c0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1788C0u;
    {
        const bool branch_taken_0x1788c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1788C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1788C0u;
            // 0x1788c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1788c0) {
            ctx->pc = 0x178914u;
            goto label_178914;
        }
    }
    ctx->pc = 0x1788C8u;
label_1788c8:
    // 0x1788c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1788c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1788cc: 0xc05e83c  jal         func_17A0F0
    ctx->pc = 0x1788CCu;
    SET_GPR_U32(ctx, 31, 0x1788D4u);
    ctx->pc = 0x1788D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1788CCu;
            // 0x1788d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A0F0u;
    if (runtime->hasFunction(0x17A0F0u)) {
        auto targetFn = runtime->lookupFunction(0x17A0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1788D4u; }
        if (ctx->pc != 0x1788D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A0F0_0x17a0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1788D4u; }
        if (ctx->pc != 0x1788D4u) { return; }
    }
    ctx->pc = 0x1788D4u;
label_1788d4:
    // 0x1788d4: 0xc05e158  jal         func_178560
    ctx->pc = 0x1788D4u;
    SET_GPR_U32(ctx, 31, 0x1788DCu);
    ctx->pc = 0x1788D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1788D4u;
            // 0x1788d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178560u;
    if (runtime->hasFunction(0x178560u)) {
        auto targetFn = runtime->lookupFunction(0x178560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1788DCu; }
        if (ctx->pc != 0x1788DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178560_0x178560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1788DCu; }
        if (ctx->pc != 0x1788DCu) { return; }
    }
    ctx->pc = 0x1788DCu;
label_1788dc:
    // 0x1788dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1788dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1788e0: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1788E0u;
    {
        const bool branch_taken_0x1788e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1788E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1788E0u;
            // 0x1788e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1788e0) {
            ctx->pc = 0x178910u;
            goto label_178910;
        }
    }
    ctx->pc = 0x1788E8u;
    // 0x1788e8: 0xc05e306  jal         func_178C18
    ctx->pc = 0x1788E8u;
    SET_GPR_U32(ctx, 31, 0x1788F0u);
    ctx->pc = 0x178C18u;
    if (runtime->hasFunction(0x178C18u)) {
        auto targetFn = runtime->lookupFunction(0x178C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1788F0u; }
        if (ctx->pc != 0x1788F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178C18_0x178c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1788F0u; }
        if (ctx->pc != 0x1788F0u) { return; }
    }
    ctx->pc = 0x1788F0u;
label_1788f0:
    // 0x1788f0: 0xc05e158  jal         func_178560
    ctx->pc = 0x1788F0u;
    SET_GPR_U32(ctx, 31, 0x1788F8u);
    ctx->pc = 0x1788F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1788F0u;
            // 0x1788f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178560u;
    if (runtime->hasFunction(0x178560u)) {
        auto targetFn = runtime->lookupFunction(0x178560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1788F8u; }
        if (ctx->pc != 0x1788F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178560_0x178560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1788F8u; }
        if (ctx->pc != 0x1788F8u) { return; }
    }
    ctx->pc = 0x1788F8u;
label_1788f8:
    // 0x1788f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1788f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1788fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1788fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178900: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x178900u;
    {
        const bool branch_taken_0x178900 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x178904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178900u;
            // 0x178904: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178900) {
            ctx->pc = 0x178914u;
            goto label_178914;
        }
    }
    ctx->pc = 0x178908u;
    // 0x178908: 0xc04afe8  jal         func_12BFA0
    ctx->pc = 0x178908u;
    SET_GPR_U32(ctx, 31, 0x178910u);
    ctx->pc = 0x12BFA0u;
    if (runtime->hasFunction(0x12BFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12BFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178910u; }
        if (ctx->pc != 0x178910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BFA0_0x12bfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178910u; }
        if (ctx->pc != 0x178910u) { return; }
    }
    ctx->pc = 0x178910u;
label_178910:
    // 0x178910: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x178910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_178914:
    // 0x178914: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178918: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178918u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17891c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17891cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178920: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x178920u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178924: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x178924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178928: 0x3e00008  jr          $ra
    ctx->pc = 0x178928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17892Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178928u;
            // 0x17892c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178930u;
}
