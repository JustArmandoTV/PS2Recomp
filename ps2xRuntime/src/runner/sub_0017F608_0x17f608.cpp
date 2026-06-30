#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017F608
// Address: 0x17f608 - 0x17f768
void sub_0017F608_0x17f608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F608_0x17f608");
#endif

    switch (ctx->pc) {
        case 0x17f638u: goto label_17f638;
        case 0x17f644u: goto label_17f644;
        case 0x17f64cu: goto label_17f64c;
        case 0x17f658u: goto label_17f658;
        case 0x17f664u: goto label_17f664;
        case 0x17f678u: goto label_17f678;
        case 0x17f688u: goto label_17f688;
        case 0x17f694u: goto label_17f694;
        case 0x17f6a8u: goto label_17f6a8;
        case 0x17f6b8u: goto label_17f6b8;
        case 0x17f6c8u: goto label_17f6c8;
        case 0x17f6e8u: goto label_17f6e8;
        case 0x17f6fcu: goto label_17f6fc;
        case 0x17f708u: goto label_17f708;
        case 0x17f718u: goto label_17f718;
        case 0x17f720u: goto label_17f720;
        case 0x17f728u: goto label_17f728;
        case 0x17f738u: goto label_17f738;
        case 0x17f740u: goto label_17f740;
        case 0x17f748u: goto label_17f748;
        default: break;
    }

    ctx->pc = 0x17f608u;

    // 0x17f608: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x17f608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x17f60c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x17f60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x17f610: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x17f610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x17f614: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17f614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f618: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x17f618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x17f61c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17f61cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f620: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17f620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f624: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x17f624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x17f628: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x17f628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x17f62c: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x17f62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x17f630: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x17F630u;
    SET_GPR_U32(ctx, 31, 0x17F638u);
    ctx->pc = 0x17F634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F630u;
            // 0x17f634: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F638u; }
        if (ctx->pc != 0x17F638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F638u; }
        if (ctx->pc != 0x17F638u) { return; }
    }
    ctx->pc = 0x17F638u;
label_17f638:
    // 0x17f638: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17f638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f63c: 0xc05fc92  jal         func_17F248
    ctx->pc = 0x17F63Cu;
    SET_GPR_U32(ctx, 31, 0x17F644u);
    ctx->pc = 0x17F640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F63Cu;
            // 0x17f640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F248u;
    if (runtime->hasFunction(0x17F248u)) {
        auto targetFn = runtime->lookupFunction(0x17F248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F644u; }
        if (ctx->pc != 0x17F644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F248_0x17f248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F644u; }
        if (ctx->pc != 0x17F644u) { return; }
    }
    ctx->pc = 0x17F644u;
label_17f644:
    // 0x17f644: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17F644u;
    SET_GPR_U32(ctx, 31, 0x17F64Cu);
    ctx->pc = 0x17F648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F644u;
            // 0x17f648: 0x24046000  addiu       $a0, $zero, 0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F64Cu; }
        if (ctx->pc != 0x17F64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F64Cu; }
        if (ctx->pc != 0x17F64Cu) { return; }
    }
    ctx->pc = 0x17F64Cu;
label_17f64c:
    // 0x17f64c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17f64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f650: 0xc05edfe  jal         func_17B7F8
    ctx->pc = 0x17F650u;
    SET_GPR_U32(ctx, 31, 0x17F658u);
    ctx->pc = 0x17F654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F650u;
            // 0x17f654: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B7F8u;
    if (runtime->hasFunction(0x17B7F8u)) {
        auto targetFn = runtime->lookupFunction(0x17B7F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F658u; }
        if (ctx->pc != 0x17F658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B7F8_0x17b7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F658u; }
        if (ctx->pc != 0x17F658u) { return; }
    }
    ctx->pc = 0x17F658u;
label_17f658:
    // 0x17f658: 0x24046001  addiu       $a0, $zero, 0x6001
    ctx->pc = 0x17f658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24577));
    // 0x17f65c: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17F65Cu;
    SET_GPR_U32(ctx, 31, 0x17F664u);
    ctx->pc = 0x17F660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F65Cu;
            // 0x17f660: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F664u; }
        if (ctx->pc != 0x17F664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F664u; }
        if (ctx->pc != 0x17F664u) { return; }
    }
    ctx->pc = 0x17F664u;
label_17f664:
    // 0x17f664: 0x24046100  addiu       $a0, $zero, 0x6100
    ctx->pc = 0x17f664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24832));
    // 0x17f668: 0x6400038  bltz        $s2, . + 4 + (0x38 << 2)
    ctx->pc = 0x17F668u;
    {
        const bool branch_taken_0x17f668 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x17F66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F668u;
            // 0x17f66c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f668) {
            ctx->pc = 0x17F74Cu;
            goto label_17f74c;
        }
    }
    ctx->pc = 0x17F670u;
    // 0x17f670: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17F670u;
    SET_GPR_U32(ctx, 31, 0x17F678u);
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F678u; }
        if (ctx->pc != 0x17F678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F678u; }
        if (ctx->pc != 0x17F678u) { return; }
    }
    ctx->pc = 0x17F678u;
label_17f678:
    // 0x17f678: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17f678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f67c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17f67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f680: 0xc05edb2  jal         func_17B6C8
    ctx->pc = 0x17F680u;
    SET_GPR_U32(ctx, 31, 0x17F688u);
    ctx->pc = 0x17F684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F680u;
            // 0x17f684: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B6C8u;
    if (runtime->hasFunction(0x17B6C8u)) {
        auto targetFn = runtime->lookupFunction(0x17B6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F688u; }
        if (ctx->pc != 0x17F688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B6C8_0x17b6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F688u; }
        if (ctx->pc != 0x17F688u) { return; }
    }
    ctx->pc = 0x17F688u;
label_17f688:
    // 0x17f688: 0x24046101  addiu       $a0, $zero, 0x6101
    ctx->pc = 0x17f688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24833));
    // 0x17f68c: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17F68Cu;
    SET_GPR_U32(ctx, 31, 0x17F694u);
    ctx->pc = 0x17F690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F68Cu;
            // 0x17f690: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F694u; }
        if (ctx->pc != 0x17F694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F694u; }
        if (ctx->pc != 0x17F694u) { return; }
    }
    ctx->pc = 0x17F694u;
label_17f694:
    // 0x17f694: 0x24046200  addiu       $a0, $zero, 0x6200
    ctx->pc = 0x17f694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25088));
    // 0x17f698: 0x620002c  bltz        $s1, . + 4 + (0x2C << 2)
    ctx->pc = 0x17F698u;
    {
        const bool branch_taken_0x17f698 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x17F69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F698u;
            // 0x17f69c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f698) {
            ctx->pc = 0x17F74Cu;
            goto label_17f74c;
        }
    }
    ctx->pc = 0x17F6A0u;
    // 0x17f6a0: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17F6A0u;
    SET_GPR_U32(ctx, 31, 0x17F6A8u);
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F6A8u; }
        if (ctx->pc != 0x17F6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F6A8u; }
        if (ctx->pc != 0x17F6A8u) { return; }
    }
    ctx->pc = 0x17F6A8u;
label_17f6a8:
    // 0x17f6a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17f6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f6ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17f6acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f6b0: 0xc05edb2  jal         func_17B6C8
    ctx->pc = 0x17F6B0u;
    SET_GPR_U32(ctx, 31, 0x17F6B8u);
    ctx->pc = 0x17F6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F6B0u;
            // 0x17f6b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B6C8u;
    if (runtime->hasFunction(0x17B6C8u)) {
        auto targetFn = runtime->lookupFunction(0x17B6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F6B8u; }
        if (ctx->pc != 0x17F6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B6C8_0x17b6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F6B8u; }
        if (ctx->pc != 0x17F6B8u) { return; }
    }
    ctx->pc = 0x17F6B8u;
label_17f6b8:
    // 0x17f6b8: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x17f6b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17f6bc: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x17f6bcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x17f6c0: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17F6C0u;
    SET_GPR_U32(ctx, 31, 0x17F6C8u);
    ctx->pc = 0x17F6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F6C0u;
            // 0x17f6c4: 0x24046201  addiu       $a0, $zero, 0x6201 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25089));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F6C8u; }
        if (ctx->pc != 0x17F6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F6C8u; }
        if (ctx->pc != 0x17F6C8u) { return; }
    }
    ctx->pc = 0x17F6C8u;
label_17f6c8:
    // 0x17f6c8: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x17f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x17f6cc: 0x2a231001  slti        $v1, $s1, 0x1001
    ctx->pc = 0x17f6ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4097) ? 1 : 0);
    // 0x17f6d0: 0x43880a  movz        $s1, $v0, $v1
    ctx->pc = 0x17f6d0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x17f6d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17f6d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f6d8: 0x600001c  bltz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x17F6D8u;
    {
        const bool branch_taken_0x17f6d8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x17F6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F6D8u;
            // 0x17f6dc: 0x24046300  addiu       $a0, $zero, 0x6300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f6d8) {
            ctx->pc = 0x17F74Cu;
            goto label_17f74c;
        }
    }
    ctx->pc = 0x17F6E0u;
    // 0x17f6e0: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17F6E0u;
    SET_GPR_U32(ctx, 31, 0x17F6E8u);
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F6E8u; }
        if (ctx->pc != 0x17F6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F6E8u; }
        if (ctx->pc != 0x17F6E8u) { return; }
    }
    ctx->pc = 0x17F6E8u;
label_17f6e8:
    // 0x17f6e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17f6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f6ec: 0x11303c  dsll32      $a2, $s1, 0
    ctx->pc = 0x17f6ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
    // 0x17f6f0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x17f6f0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x17f6f4: 0xc05ee2e  jal         func_17B8B8
    ctx->pc = 0x17F6F4u;
    SET_GPR_U32(ctx, 31, 0x17F6FCu);
    ctx->pc = 0x17F6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F6F4u;
            // 0x17f6f8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B8B8u;
    if (runtime->hasFunction(0x17B8B8u)) {
        auto targetFn = runtime->lookupFunction(0x17B8B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F6FCu; }
        if (ctx->pc != 0x17F6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B8B8_0x17b8b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F6FCu; }
        if (ctx->pc != 0x17F6FCu) { return; }
    }
    ctx->pc = 0x17F6FCu;
label_17f6fc:
    // 0x17f6fc: 0x24046301  addiu       $a0, $zero, 0x6301
    ctx->pc = 0x17f6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25345));
    // 0x17f700: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17F700u;
    SET_GPR_U32(ctx, 31, 0x17F708u);
    ctx->pc = 0x17F704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F700u;
            // 0x17f704: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F708u; }
        if (ctx->pc != 0x17F708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F708u; }
        if (ctx->pc != 0x17F708u) { return; }
    }
    ctx->pc = 0x17F708u;
label_17f708:
    // 0x17f708: 0x6010009  bgez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17F708u;
    {
        const bool branch_taken_0x17f708 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x17F70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F708u;
            // 0x17f70c: 0x24046500  addiu       $a0, $zero, 0x6500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f708) {
            ctx->pc = 0x17F730u;
            goto label_17f730;
        }
    }
    ctx->pc = 0x17F710u;
    // 0x17f710: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17F710u;
    SET_GPR_U32(ctx, 31, 0x17F718u);
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F718u; }
        if (ctx->pc != 0x17F718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F718u; }
        if (ctx->pc != 0x17F718u) { return; }
    }
    ctx->pc = 0x17F718u;
label_17f718:
    // 0x17f718: 0xc05ee18  jal         func_17B860
    ctx->pc = 0x17F718u;
    SET_GPR_U32(ctx, 31, 0x17F720u);
    ctx->pc = 0x17F71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F718u;
            // 0x17f71c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B860u;
    if (runtime->hasFunction(0x17B860u)) {
        auto targetFn = runtime->lookupFunction(0x17B860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F720u; }
        if (ctx->pc != 0x17F720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B860_0x17b860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F720u; }
        if (ctx->pc != 0x17F720u) { return; }
    }
    ctx->pc = 0x17F720u;
label_17f720:
    // 0x17f720: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17F720u;
    SET_GPR_U32(ctx, 31, 0x17F728u);
    ctx->pc = 0x17F724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F720u;
            // 0x17f724: 0x24046501  addiu       $a0, $zero, 0x6501 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25857));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F728u; }
        if (ctx->pc != 0x17F728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F728u; }
        if (ctx->pc != 0x17F728u) { return; }
    }
    ctx->pc = 0x17F728u;
label_17f728:
    // 0x17f728: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17F728u;
    {
        const bool branch_taken_0x17f728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F728u;
            // 0x17f72c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f728) {
            ctx->pc = 0x17F74Cu;
            goto label_17f74c;
        }
    }
    ctx->pc = 0x17F730u;
label_17f730:
    // 0x17f730: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17F730u;
    SET_GPR_U32(ctx, 31, 0x17F738u);
    ctx->pc = 0x17F734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F730u;
            // 0x17f734: 0x24046400  addiu       $a0, $zero, 0x6400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F738u; }
        if (ctx->pc != 0x17F738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F738u; }
        if (ctx->pc != 0x17F738u) { return; }
    }
    ctx->pc = 0x17F738u;
label_17f738:
    // 0x17f738: 0xc05ee18  jal         func_17B860
    ctx->pc = 0x17F738u;
    SET_GPR_U32(ctx, 31, 0x17F740u);
    ctx->pc = 0x17F73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F738u;
            // 0x17f73c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B860u;
    if (runtime->hasFunction(0x17B860u)) {
        auto targetFn = runtime->lookupFunction(0x17B860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F740u; }
        if (ctx->pc != 0x17F740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B860_0x17b860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F740u; }
        if (ctx->pc != 0x17F740u) { return; }
    }
    ctx->pc = 0x17F740u;
label_17f740:
    // 0x17f740: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17F740u;
    SET_GPR_U32(ctx, 31, 0x17F748u);
    ctx->pc = 0x17F744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F740u;
            // 0x17f744: 0x24046401  addiu       $a0, $zero, 0x6401 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25601));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F748u; }
        if (ctx->pc != 0x17F748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F748u; }
        if (ctx->pc != 0x17F748u) { return; }
    }
    ctx->pc = 0x17F748u;
label_17f748:
    // 0x17f748: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17f748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17f74c:
    // 0x17f74c: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x17f74cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x17f750: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x17f750u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x17f754: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x17f754u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x17f758: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x17f758u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x17f75c: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x17f75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17f760: 0x3e00008  jr          $ra
    ctx->pc = 0x17F760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F760u;
            // 0x17f764: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17F768u;
}
