#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CE5F0
// Address: 0x1ce5f0 - 0x1cee48
void sub_001CE5F0_0x1ce5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE5F0_0x1ce5f0");
#endif

    switch (ctx->pc) {
        case 0x1ce60cu: goto label_1ce60c;
        case 0x1ce660u: goto label_1ce660;
        case 0x1ce67cu: goto label_1ce67c;
        case 0x1ce6a0u: goto label_1ce6a0;
        case 0x1ce720u: goto label_1ce720;
        case 0x1ce740u: goto label_1ce740;
        case 0x1ce764u: goto label_1ce764;
        case 0x1ce7c4u: goto label_1ce7c4;
        case 0x1ce7e0u: goto label_1ce7e0;
        case 0x1ce7fcu: goto label_1ce7fc;
        case 0x1ce870u: goto label_1ce870;
        case 0x1ce8a4u: goto label_1ce8a4;
        case 0x1ce8c0u: goto label_1ce8c0;
        case 0x1ce910u: goto label_1ce910;
        case 0x1ce92cu: goto label_1ce92c;
        case 0x1ce984u: goto label_1ce984;
        case 0x1ce9ccu: goto label_1ce9cc;
        case 0x1cea4cu: goto label_1cea4c;
        case 0x1cea8cu: goto label_1cea8c;
        case 0x1ceb28u: goto label_1ceb28;
        case 0x1ceb64u: goto label_1ceb64;
        case 0x1ceb94u: goto label_1ceb94;
        case 0x1cec1cu: goto label_1cec1c;
        case 0x1cec38u: goto label_1cec38;
        case 0x1cece0u: goto label_1cece0;
        case 0x1cecfcu: goto label_1cecfc;
        case 0x1ced18u: goto label_1ced18;
        case 0x1ced84u: goto label_1ced84;
        case 0x1cede4u: goto label_1cede4;
        case 0x1cee00u: goto label_1cee00;
        case 0x1cee24u: goto label_1cee24;
        default: break;
    }

    ctx->pc = 0x1ce5f0u;

label_1ce5f0:
    // 0x1ce5f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ce5f4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1ce5f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce5f8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE5F8u;
    {
        const bool branch_taken_0x1ce5f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE5F8u;
            // 0x1ce5fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce5f8) {
            ctx->pc = 0x1CE60Cu;
            goto label_1ce60c;
        }
    }
    ctx->pc = 0x1CE600u;
    // 0x1ce600: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1ce600u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ce604: 0xc04afe8  jal         func_12BFA0
    ctx->pc = 0x1CE604u;
    SET_GPR_U32(ctx, 31, 0x1CE60Cu);
    ctx->pc = 0x1CE608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE604u;
            // 0x1ce608: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BFA0u;
    if (runtime->hasFunction(0x12BFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12BFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE60Cu; }
        if (ctx->pc != 0x1CE60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BFA0_0x12bfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE60Cu; }
        if (ctx->pc != 0x1CE60Cu) { return; }
    }
    ctx->pc = 0x1CE60Cu;
label_1ce60c:
    // 0x1ce60c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ce60cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce614: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE614u;
            // 0x1ce618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CE61Cu;
    // 0x1ce61c: 0x0  nop
    ctx->pc = 0x1ce61cu;
    // NOP
    // 0x1ce620: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ce620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ce624: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ce624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ce628: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ce628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce62c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1ce62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1ce630: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ce630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ce634: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1ce634u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce638: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ce638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ce63c: 0x790c0  sll         $s2, $a3, 3
    ctx->pc = 0x1ce63cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1ce640: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ce640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ce644: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ce644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce648: 0xae080004  sw          $t0, 0x4($s0)
    ctx->pc = 0x1ce648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 8));
    // 0x1ce64c: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x1ce64cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x1ce650: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1ce650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce654: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1ce654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce658: 0xc07392c  jal         func_1CE4B0
    ctx->pc = 0x1CE658u;
    SET_GPR_U32(ctx, 31, 0x1CE660u);
    ctx->pc = 0x1CE65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE658u;
            // 0x1ce65c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE4B0u;
    if (runtime->hasFunction(0x1CE4B0u)) {
        auto targetFn = runtime->lookupFunction(0x1CE4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE660u; }
        if (ctx->pc != 0x1CE660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE4B0_0x1ce4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE660u; }
        if (ctx->pc != 0x1CE660u) { return; }
    }
    ctx->pc = 0x1CE660u;
label_1ce660:
    // 0x1ce660: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CE660u;
    {
        const bool branch_taken_0x1ce660 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CE664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE660u;
            // 0x1ce664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce660) {
            ctx->pc = 0x1CE6A8u;
            goto label_1ce6a8;
        }
    }
    ctx->pc = 0x1CE668u;
    // 0x1ce668: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1ce668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ce66c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ce66cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce670: 0x26470008  addiu       $a3, $s2, 0x8
    ctx->pc = 0x1ce670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1ce674: 0xc0738fe  jal         func_1CE3F8
    ctx->pc = 0x1CE674u;
    SET_GPR_U32(ctx, 31, 0x1CE67Cu);
    ctx->pc = 0x1CE678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE674u;
            // 0x1ce678: 0x36480004  ori         $t0, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3F8u;
    if (runtime->hasFunction(0x1CE3F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE67Cu; }
        if (ctx->pc != 0x1CE67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE3F8_0x1ce3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE67Cu; }
        if (ctx->pc != 0x1CE67Cu) { return; }
    }
    ctx->pc = 0x1CE67Cu;
label_1ce67c:
    // 0x1ce67c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE67Cu;
    {
        const bool branch_taken_0x1ce67c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1CE680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE67Cu;
            // 0x1ce680: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce67c) {
            ctx->pc = 0x1CE68Cu;
            goto label_1ce68c;
        }
    }
    ctx->pc = 0x1CE684u;
    // 0x1ce684: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CE684u;
    {
        const bool branch_taken_0x1ce684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE684u;
            // 0x1ce688: 0x2402fde2  addiu       $v0, $zero, -0x21E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966754));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce684) {
            ctx->pc = 0x1CE6A8u;
            goto label_1ce6a8;
        }
    }
    ctx->pc = 0x1CE68Cu;
label_1ce68c:
    // 0x1ce68c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ce68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce690: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1ce690u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce694: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ce694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce698: 0xc073942  jal         func_1CE508
    ctx->pc = 0x1CE698u;
    SET_GPR_U32(ctx, 31, 0x1CE6A0u);
    ctx->pc = 0x1CE69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE698u;
            // 0x1ce69c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE508u;
    if (runtime->hasFunction(0x1CE508u)) {
        auto targetFn = runtime->lookupFunction(0x1CE508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE6A0u; }
        if (ctx->pc != 0x1CE6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE508_0x1ce508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE6A0u; }
        if (ctx->pc != 0x1CE6A0u) { return; }
    }
    ctx->pc = 0x1CE6A0u;
label_1ce6a0:
    // 0x1ce6a0: 0x4430001  bgezl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CE6A0u;
    {
        const bool branch_taken_0x1ce6a0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ce6a0) {
            ctx->pc = 0x1CE6A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE6A0u;
            // 0x1ce6a4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CE6A8u;
            goto label_1ce6a8;
        }
    }
    ctx->pc = 0x1CE6A8u;
label_1ce6a8:
    // 0x1ce6a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ce6a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ce6ac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1ce6acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce6b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ce6b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce6b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ce6b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce6b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ce6b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE6BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE6BCu;
            // 0x1ce6c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CE6C4u;
    // 0x1ce6c4: 0x0  nop
    ctx->pc = 0x1ce6c4u;
    // NOP
    // 0x1ce6c8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1ce6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1ce6cc: 0x30c20080  andi        $v0, $a2, 0x80
    ctx->pc = 0x1ce6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
    // 0x1ce6d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ce6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ce6d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ce6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ce6d8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1ce6d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce6dc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ce6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ce6e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ce6e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce6e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ce6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ce6e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ce6e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce6ec: 0xffab0088  sd          $t3, 0x88($sp)
    ctx->pc = 0x1ce6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
    // 0x1ce6f0: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1ce6f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce6f4: 0xae090004  sw          $t1, 0x4($s0)
    ctx->pc = 0x1ce6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 9));
    // 0x1ce6f8: 0xae0a0008  sw          $t2, 0x8($s0)
    ctx->pc = 0x1ce6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 10));
    // 0x1ce6fc: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x1ce6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x1ce700: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE700u;
    {
        const bool branch_taken_0x1ce700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE700u;
            // 0x1ce704: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce700) {
            ctx->pc = 0x1CE710u;
            goto label_1ce710;
        }
    }
    ctx->pc = 0x1CE708u;
    // 0x1ce708: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1ce708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1ce70c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1ce70cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1ce710:
    // 0x1ce710: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ce710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce714: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ce714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce718: 0xc073958  jal         func_1CE560
    ctx->pc = 0x1CE718u;
    SET_GPR_U32(ctx, 31, 0x1CE720u);
    ctx->pc = 0x1CE71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE718u;
            // 0x1ce71c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE560u;
    if (runtime->hasFunction(0x1CE560u)) {
        auto targetFn = runtime->lookupFunction(0x1CE560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE720u; }
        if (ctx->pc != 0x1CE720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE560_0x1ce560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE720u; }
        if (ctx->pc != 0x1CE720u) { return; }
    }
    ctx->pc = 0x1CE720u;
label_1ce720:
    // 0x1ce720: 0x4400012  bltz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CE720u;
    {
        const bool branch_taken_0x1ce720 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CE724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE720u;
            // 0x1ce724: 0x24470014  addiu       $a3, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce720) {
            ctx->pc = 0x1CE76Cu;
            goto label_1ce76c;
        }
    }
    ctx->pc = 0x1CE728u;
    // 0x1ce728: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1ce728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1ce72c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ce72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce730: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1ce730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ce734: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ce734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce738: 0xc0738fe  jal         func_1CE3F8
    ctx->pc = 0x1CE738u;
    SET_GPR_U32(ctx, 31, 0x1CE740u);
    ctx->pc = 0x1CE73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE738u;
            // 0x1ce73c: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3F8u;
    if (runtime->hasFunction(0x1CE3F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE740u; }
        if (ctx->pc != 0x1CE740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE3F8_0x1ce3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE740u; }
        if (ctx->pc != 0x1CE740u) { return; }
    }
    ctx->pc = 0x1CE740u;
label_1ce740:
    // 0x1ce740: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE740u;
    {
        const bool branch_taken_0x1ce740 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1CE744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE740u;
            // 0x1ce744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce740) {
            ctx->pc = 0x1CE750u;
            goto label_1ce750;
        }
    }
    ctx->pc = 0x1CE748u;
    // 0x1ce748: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CE748u;
    {
        const bool branch_taken_0x1ce748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE748u;
            // 0x1ce74c: 0x2402fde2  addiu       $v0, $zero, -0x21E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966754));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce748) {
            ctx->pc = 0x1CE76Cu;
            goto label_1ce76c;
        }
    }
    ctx->pc = 0x1CE750u;
label_1ce750:
    // 0x1ce750: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ce750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce754: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ce754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce758: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ce758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce75c: 0xc073942  jal         func_1CE508
    ctx->pc = 0x1CE75Cu;
    SET_GPR_U32(ctx, 31, 0x1CE764u);
    ctx->pc = 0x1CE760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE75Cu;
            // 0x1ce760: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE508u;
    if (runtime->hasFunction(0x1CE508u)) {
        auto targetFn = runtime->lookupFunction(0x1CE508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE764u; }
        if (ctx->pc != 0x1CE764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE508_0x1ce508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE764u; }
        if (ctx->pc != 0x1CE764u) { return; }
    }
    ctx->pc = 0x1CE764u;
label_1ce764:
    // 0x1ce764: 0x4430001  bgezl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CE764u;
    {
        const bool branch_taken_0x1ce764 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ce764) {
            ctx->pc = 0x1CE768u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE764u;
            // 0x1ce768: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CE76Cu;
            goto label_1ce76c;
        }
    }
    ctx->pc = 0x1CE76Cu;
label_1ce76c:
    // 0x1ce76c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ce76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce770: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ce770u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce774: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ce774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce778: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ce778u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce77c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE77Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE77Cu;
            // 0x1ce780: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CE784u;
    // 0x1ce784: 0x0  nop
    ctx->pc = 0x1ce784u;
    // NOP
    // 0x1ce788: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ce788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ce78c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ce78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ce790: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ce790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ce794: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1ce794u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce798: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ce798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce79c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1ce79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1ce7a0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ce7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ce7a4: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1ce7a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce7a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ce7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ce7ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ce7acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce7b0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1ce7b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce7b4: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x1ce7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x1ce7b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ce7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce7bc: 0xc07392c  jal         func_1CE4B0
    ctx->pc = 0x1CE7BCu;
    SET_GPR_U32(ctx, 31, 0x1CE7C4u);
    ctx->pc = 0x1CE7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE7BCu;
            // 0x1ce7c0: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE4B0u;
    if (runtime->hasFunction(0x1CE4B0u)) {
        auto targetFn = runtime->lookupFunction(0x1CE4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE7C4u; }
        if (ctx->pc != 0x1CE7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE4B0_0x1ce4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE7C4u; }
        if (ctx->pc != 0x1CE7C4u) { return; }
    }
    ctx->pc = 0x1CE7C4u;
label_1ce7c4:
    // 0x1ce7c4: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CE7C4u;
    {
        const bool branch_taken_0x1ce7c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CE7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE7C4u;
            // 0x1ce7c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce7c4) {
            ctx->pc = 0x1CE804u;
            goto label_1ce804;
        }
    }
    ctx->pc = 0x1CE7CCu;
    // 0x1ce7cc: 0x26480014  addiu       $t0, $s2, 0x14
    ctx->pc = 0x1ce7ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x1ce7d0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ce7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ce7d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ce7d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce7d8: 0xc0738fe  jal         func_1CE3F8
    ctx->pc = 0x1CE7D8u;
    SET_GPR_U32(ctx, 31, 0x1CE7E0u);
    ctx->pc = 0x1CE7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE7D8u;
            // 0x1ce7dc: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3F8u;
    if (runtime->hasFunction(0x1CE3F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE7E0u; }
        if (ctx->pc != 0x1CE7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE3F8_0x1ce3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE7E0u; }
        if (ctx->pc != 0x1CE7E0u) { return; }
    }
    ctx->pc = 0x1CE7E0u;
label_1ce7e0:
    // 0x1ce7e0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE7E0u;
    {
        const bool branch_taken_0x1ce7e0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1CE7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE7E0u;
            // 0x1ce7e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce7e0) {
            ctx->pc = 0x1CE7F0u;
            goto label_1ce7f0;
        }
    }
    ctx->pc = 0x1CE7E8u;
    // 0x1ce7e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1CE7E8u;
    {
        const bool branch_taken_0x1ce7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE7E8u;
            // 0x1ce7ec: 0x2402fde2  addiu       $v0, $zero, -0x21E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966754));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce7e8) {
            ctx->pc = 0x1CE804u;
            goto label_1ce804;
        }
    }
    ctx->pc = 0x1CE7F0u;
label_1ce7f0:
    // 0x1ce7f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ce7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce7f4: 0xc07397c  jal         func_1CE5F0
    ctx->pc = 0x1CE7F4u;
    SET_GPR_U32(ctx, 31, 0x1CE7FCu);
    ctx->pc = 0x1CE7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE7F4u;
            // 0x1ce7f8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE5F0u;
    goto label_1ce5f0;
    ctx->pc = 0x1CE7FCu;
label_1ce7fc:
    // 0x1ce7fc: 0x4430001  bgezl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CE7FCu;
    {
        const bool branch_taken_0x1ce7fc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ce7fc) {
            ctx->pc = 0x1CE800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE7FCu;
            // 0x1ce800: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CE804u;
            goto label_1ce804;
        }
    }
    ctx->pc = 0x1CE804u;
label_1ce804:
    // 0x1ce804: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ce804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ce808: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1ce808u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce80c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ce80cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce810: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ce810u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce814: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ce814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce818: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE818u;
            // 0x1ce81c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CE820u;
    // 0x1ce820: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1ce820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1ce824: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1ce824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1ce828: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ce828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ce82c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1ce82cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce830: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ce830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ce834: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ce834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce838: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ce838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce83c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1ce83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1ce840: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ce840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ce844: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1ce844u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce848: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ce848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1ce84c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ce84cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce850: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1ce850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1ce854: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x1ce854u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce858: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x1ce858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x1ce85c: 0xae0a0008  sw          $t2, 0x8($s0)
    ctx->pc = 0x1ce85cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 10));
    // 0x1ce860: 0xae0b000c  sw          $t3, 0xC($s0)
    ctx->pc = 0x1ce860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 11));
    // 0x1ce864: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1ce864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ce868: 0xc07392c  jal         func_1CE4B0
    ctx->pc = 0x1CE868u;
    SET_GPR_U32(ctx, 31, 0x1CE870u);
    ctx->pc = 0x1CE86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE868u;
            // 0x1ce86c: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE4B0u;
    if (runtime->hasFunction(0x1CE4B0u)) {
        auto targetFn = runtime->lookupFunction(0x1CE4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE870u; }
        if (ctx->pc != 0x1CE870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE4B0_0x1ce4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE870u; }
        if (ctx->pc != 0x1CE870u) { return; }
    }
    ctx->pc = 0x1CE870u;
label_1ce870:
    // 0x1ce870: 0x4400016  bltz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CE870u;
    {
        const bool branch_taken_0x1ce870 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CE874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE870u;
            // 0x1ce874: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce870) {
            ctx->pc = 0x1CE8CCu;
            goto label_1ce8cc;
        }
    }
    ctx->pc = 0x1CE878u;
    // 0x1ce878: 0x32220080  andi        $v0, $s1, 0x80
    ctx->pc = 0x1ce878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
    // 0x1ce87c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE87Cu;
    {
        const bool branch_taken_0x1ce87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE87Cu;
            // 0x1ce880: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce87c) {
            ctx->pc = 0x1CE88Cu;
            goto label_1ce88c;
        }
    }
    ctx->pc = 0x1CE884u;
    // 0x1ce884: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1ce884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ce888: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1ce888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1ce88c:
    // 0x1ce88c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ce88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce890: 0x26680020  addiu       $t0, $s3, 0x20
    ctx->pc = 0x1ce890u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1ce894: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1ce894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1ce898: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ce898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce89c: 0xc0738fe  jal         func_1CE3F8
    ctx->pc = 0x1CE89Cu;
    SET_GPR_U32(ctx, 31, 0x1CE8A4u);
    ctx->pc = 0x1CE8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE89Cu;
            // 0x1ce8a0: 0x24070024  addiu       $a3, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3F8u;
    if (runtime->hasFunction(0x1CE3F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE8A4u; }
        if (ctx->pc != 0x1CE8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE3F8_0x1ce3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE8A4u; }
        if (ctx->pc != 0x1CE8A4u) { return; }
    }
    ctx->pc = 0x1CE8A4u;
label_1ce8a4:
    // 0x1ce8a4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE8A4u;
    {
        const bool branch_taken_0x1ce8a4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1CE8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE8A4u;
            // 0x1ce8a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce8a4) {
            ctx->pc = 0x1CE8B4u;
            goto label_1ce8b4;
        }
    }
    ctx->pc = 0x1CE8ACu;
    // 0x1ce8ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1CE8ACu;
    {
        const bool branch_taken_0x1ce8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE8ACu;
            // 0x1ce8b0: 0x2402fde2  addiu       $v0, $zero, -0x21E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966754));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce8ac) {
            ctx->pc = 0x1CE8C8u;
            goto label_1ce8c8;
        }
    }
    ctx->pc = 0x1CE8B4u;
label_1ce8b4:
    // 0x1ce8b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ce8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce8b8: 0xc07397c  jal         func_1CE5F0
    ctx->pc = 0x1CE8B8u;
    SET_GPR_U32(ctx, 31, 0x1CE8C0u);
    ctx->pc = 0x1CE8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE8B8u;
            // 0x1ce8bc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE5F0u;
    goto label_1ce5f0;
    ctx->pc = 0x1CE8C0u;
label_1ce8c0:
    // 0x1ce8c0: 0x4430001  bgezl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CE8C0u;
    {
        const bool branch_taken_0x1ce8c0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ce8c0) {
            ctx->pc = 0x1CE8C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE8C0u;
            // 0x1ce8c4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CE8C8u;
            goto label_1ce8c8;
        }
    }
    ctx->pc = 0x1CE8C8u;
label_1ce8c8:
    // 0x1ce8c8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ce8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ce8cc:
    // 0x1ce8cc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1ce8ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ce8d0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1ce8d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce8d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ce8d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce8d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ce8d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce8dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ce8dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE8E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE8E0u;
            // 0x1ce8e4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CE8E8u;
    // 0x1ce8e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ce8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ce8ec: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1ce8ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce8f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ce8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ce8f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ce8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce8f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ce8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ce8fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ce8fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce900: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ce900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce904: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ce904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ce908: 0xc07392c  jal         func_1CE4B0
    ctx->pc = 0x1CE908u;
    SET_GPR_U32(ctx, 31, 0x1CE910u);
    ctx->pc = 0x1CE90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE908u;
            // 0x1ce90c: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE4B0u;
    if (runtime->hasFunction(0x1CE4B0u)) {
        auto targetFn = runtime->lookupFunction(0x1CE4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE910u; }
        if (ctx->pc != 0x1CE910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE4B0_0x1ce4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE910u; }
        if (ctx->pc != 0x1CE910u) { return; }
    }
    ctx->pc = 0x1CE910u;
label_1ce910:
    // 0x1ce910: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CE910u;
    {
        const bool branch_taken_0x1ce910 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CE914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE910u;
            // 0x1ce914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce910) {
            ctx->pc = 0x1CE944u;
            goto label_1ce944;
        }
    }
    ctx->pc = 0x1CE918u;
    // 0x1ce918: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ce918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce91c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ce91cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce920: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x1ce920u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1ce924: 0xc0738fe  jal         func_1CE3F8
    ctx->pc = 0x1CE924u;
    SET_GPR_U32(ctx, 31, 0x1CE92Cu);
    ctx->pc = 0x1CE928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE924u;
            // 0x1ce928: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3F8u;
    if (runtime->hasFunction(0x1CE3F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE92Cu; }
        if (ctx->pc != 0x1CE92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE3F8_0x1ce3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE92Cu; }
        if (ctx->pc != 0x1CE92Cu) { return; }
    }
    ctx->pc = 0x1CE92Cu;
label_1ce92c:
    // 0x1ce92c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE92Cu;
    {
        const bool branch_taken_0x1ce92c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ce92c) {
            ctx->pc = 0x1CE930u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE92Cu;
            // 0x1ce930: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CE93Cu;
            goto label_1ce93c;
        }
    }
    ctx->pc = 0x1CE934u;
    // 0x1ce934: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE934u;
    {
        const bool branch_taken_0x1ce934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE934u;
            // 0x1ce938: 0x2402fde2  addiu       $v0, $zero, -0x21E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966754));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce934) {
            ctx->pc = 0x1CE944u;
            goto label_1ce944;
        }
    }
    ctx->pc = 0x1CE93Cu;
label_1ce93c:
    // 0x1ce93c: 0x2402fde4  addiu       $v0, $zero, -0x21C
    ctx->pc = 0x1ce93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966756));
    // 0x1ce940: 0x63100b  movn        $v0, $v1, $v1
    ctx->pc = 0x1ce940u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_1ce944:
    // 0x1ce944: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ce944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce948: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ce948u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce94c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ce94cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce950: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE950u;
            // 0x1ce954: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CE958u;
    // 0x1ce958: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ce958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ce95c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1ce95cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ce960: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ce960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ce964: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ce964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce968: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ce968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ce96c: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x1ce96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x1ce970: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ce970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce974: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x1ce974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
    // 0x1ce978: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ce978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce97c: 0xc0738fe  jal         func_1CE3F8
    ctx->pc = 0x1CE97Cu;
    SET_GPR_U32(ctx, 31, 0x1CE984u);
    ctx->pc = 0x1CE980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE97Cu;
            // 0x1ce980: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3F8u;
    if (runtime->hasFunction(0x1CE3F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE984u; }
        if (ctx->pc != 0x1CE984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE3F8_0x1ce3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE984u; }
        if (ctx->pc != 0x1CE984u) { return; }
    }
    ctx->pc = 0x1CE984u;
label_1ce984:
    // 0x1ce984: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CE984u;
    {
        const bool branch_taken_0x1ce984 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ce984) {
            ctx->pc = 0x1CE988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE984u;
            // 0x1ce988: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CE990u;
            goto label_1ce990;
        }
    }
    ctx->pc = 0x1CE98Cu;
    // 0x1ce98c: 0x2402fde2  addiu       $v0, $zero, -0x21E
    ctx->pc = 0x1ce98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966754));
label_1ce990:
    // 0x1ce990: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ce990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce994: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ce994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce998: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE998u;
            // 0x1ce99c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CE9A0u;
    // 0x1ce9a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ce9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ce9a4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1ce9a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ce9a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ce9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ce9ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ce9acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce9b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ce9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ce9b4: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x1ce9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x1ce9b8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ce9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ce9bc: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x1ce9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
    // 0x1ce9c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ce9c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce9c4: 0xc0738fe  jal         func_1CE3F8
    ctx->pc = 0x1CE9C4u;
    SET_GPR_U32(ctx, 31, 0x1CE9CCu);
    ctx->pc = 0x1CE9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE9C4u;
            // 0x1ce9c8: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3F8u;
    if (runtime->hasFunction(0x1CE3F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE9CCu; }
        if (ctx->pc != 0x1CE9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE3F8_0x1ce3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE9CCu; }
        if (ctx->pc != 0x1CE9CCu) { return; }
    }
    ctx->pc = 0x1CE9CCu;
label_1ce9cc:
    // 0x1ce9cc: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CE9CCu;
    {
        const bool branch_taken_0x1ce9cc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ce9cc) {
            ctx->pc = 0x1CE9D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE9CCu;
            // 0x1ce9d0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CE9D8u;
            goto label_1ce9d8;
        }
    }
    ctx->pc = 0x1CE9D4u;
    // 0x1ce9d4: 0x2402fde2  addiu       $v0, $zero, -0x21E
    ctx->pc = 0x1ce9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966754));
label_1ce9d8:
    // 0x1ce9d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ce9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce9dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ce9dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE9E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE9E0u;
            // 0x1ce9e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CE9E8u;
    // 0x1ce9e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ce9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ce9ec: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x1ce9ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce9f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ce9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ce9f4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1ce9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1ce9f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ce9f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce9fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ce9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1cea00: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1cea00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea04: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1cea04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1cea08: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1cea08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea0c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cea0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cea10: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x1cea10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea14: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CEA14u;
    {
        const bool branch_taken_0x1cea14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEA14u;
            // 0x1cea18: 0xae060000  sw          $a2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea14) {
            ctx->pc = 0x1CEA28u;
            goto label_1cea28;
        }
    }
    ctx->pc = 0x1CEA1Cu;
    // 0x1cea1c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1cea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cea20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CEA20u;
    {
        const bool branch_taken_0x1cea20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEA20u;
            // 0x1cea24: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea20) {
            ctx->pc = 0x1CEA2Cu;
            goto label_1cea2c;
        }
    }
    ctx->pc = 0x1CEA28u;
label_1cea28:
    // 0x1cea28: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cea28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1cea2c:
    // 0x1cea2c: 0xae0a000c  sw          $t2, 0xC($s0)
    ctx->pc = 0x1cea2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 10));
    // 0x1cea30: 0x24680008  addiu       $t0, $v1, 0x8
    ctx->pc = 0x1cea30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1cea34: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1cea34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1cea38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cea38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea3c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cea3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cea40: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cea40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea44: 0xc0738fe  jal         func_1CE3F8
    ctx->pc = 0x1CEA44u;
    SET_GPR_U32(ctx, 31, 0x1CEA4Cu);
    ctx->pc = 0x1CEA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEA44u;
            // 0x1cea48: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3F8u;
    if (runtime->hasFunction(0x1CE3F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA4Cu; }
        if (ctx->pc != 0x1CEA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE3F8_0x1ce3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA4Cu; }
        if (ctx->pc != 0x1CEA4Cu) { return; }
    }
    ctx->pc = 0x1CEA4Cu;
label_1cea4c:
    // 0x1cea4c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CEA4Cu;
    {
        const bool branch_taken_0x1cea4c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1cea4c) {
            ctx->pc = 0x1CEA50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEA4Cu;
            // 0x1cea50: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CEA5Cu;
            goto label_1cea5c;
        }
    }
    ctx->pc = 0x1CEA54u;
    // 0x1cea54: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1CEA54u;
    {
        const bool branch_taken_0x1cea54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEA54u;
            // 0x1cea58: 0x2402fde2  addiu       $v0, $zero, -0x21E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966754));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea54) {
            ctx->pc = 0x1CEA94u;
            goto label_1cea94;
        }
    }
    ctx->pc = 0x1CEA5Cu;
label_1cea5c:
    // 0x1cea5c: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CEA5Cu;
    {
        const bool branch_taken_0x1cea5c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CEA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEA5Cu;
            // 0x1cea60: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea5c) {
            ctx->pc = 0x1CEA98u;
            goto label_1cea98;
        }
    }
    ctx->pc = 0x1CEA64u;
    // 0x1cea64: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CEA64u;
    {
        const bool branch_taken_0x1cea64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cea64) {
            ctx->pc = 0x1CEA68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEA64u;
            // 0x1cea68: 0x8e080000  lw          $t0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CEA78u;
            goto label_1cea78;
        }
    }
    ctx->pc = 0x1CEA6Cu;
    // 0x1cea6c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cea70: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1cea70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1cea74: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x1cea74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cea78:
    // 0x1cea78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cea78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea7c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1cea7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cea80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea84: 0xc073942  jal         func_1CE508
    ctx->pc = 0x1CEA84u;
    SET_GPR_U32(ctx, 31, 0x1CEA8Cu);
    ctx->pc = 0x1CEA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEA84u;
            // 0x1cea88: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE508u;
    if (runtime->hasFunction(0x1CE508u)) {
        auto targetFn = runtime->lookupFunction(0x1CE508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA8Cu; }
        if (ctx->pc != 0x1CEA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE508_0x1ce508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA8Cu; }
        if (ctx->pc != 0x1CEA8Cu) { return; }
    }
    ctx->pc = 0x1CEA8Cu;
label_1cea8c:
    // 0x1cea8c: 0x4430001  bgezl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CEA8Cu;
    {
        const bool branch_taken_0x1cea8c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1cea8c) {
            ctx->pc = 0x1CEA90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEA8Cu;
            // 0x1cea90: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CEA94u;
            goto label_1cea94;
        }
    }
    ctx->pc = 0x1CEA94u;
label_1cea94:
    // 0x1cea94: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cea94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1cea98:
    // 0x1cea98: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1cea98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cea9c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1cea9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ceaa0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ceaa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ceaa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ceaa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ceaa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEAA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEAA8u;
            // 0x1ceaac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CEAB0u;
    // 0x1ceab0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ceab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ceab4: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x1ceab4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceab8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ceab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ceabc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1ceabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1ceac0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ceac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceac4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1ceac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1ceac8: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1ceac8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceacc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1ceaccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1cead0: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x1cead0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cead4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1cead4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1cead8: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x1cead8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceadc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ceadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ceae0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ceae0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceae4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1ceae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1ceae8: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x1ceae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceaec: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CEAECu;
    {
        const bool branch_taken_0x1ceaec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEAECu;
            // 0x1ceaf0: 0xae060000  sw          $a2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceaec) {
            ctx->pc = 0x1CEB00u;
            goto label_1ceb00;
        }
    }
    ctx->pc = 0x1CEAF4u;
    // 0x1ceaf4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ceaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ceaf8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CEAF8u;
    {
        const bool branch_taken_0x1ceaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEAF8u;
            // 0x1ceafc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceaf8) {
            ctx->pc = 0x1CEB04u;
            goto label_1ceb04;
        }
    }
    ctx->pc = 0x1CEB00u;
label_1ceb00:
    // 0x1ceb00: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1ceb00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1ceb04:
    // 0x1ceb04: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1ceb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ceb08: 0x2468001c  addiu       $t0, $v1, 0x1C
    ctx->pc = 0x1ceb08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x1ceb0c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1ceb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1ceb10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ceb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceb14: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1ceb14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1ceb18: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ceb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ceb1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ceb1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceb20: 0xc0738fe  jal         func_1CE3F8
    ctx->pc = 0x1CEB20u;
    SET_GPR_U32(ctx, 31, 0x1CEB28u);
    ctx->pc = 0x1CEB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEB20u;
            // 0x1ceb24: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3F8u;
    if (runtime->hasFunction(0x1CE3F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEB28u; }
        if (ctx->pc != 0x1CEB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE3F8_0x1ce3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEB28u; }
        if (ctx->pc != 0x1CEB28u) { return; }
    }
    ctx->pc = 0x1CEB28u;
label_1ceb28:
    // 0x1ceb28: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CEB28u;
    {
        const bool branch_taken_0x1ceb28 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ceb28) {
            ctx->pc = 0x1CEB2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEB28u;
            // 0x1ceb2c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CEB38u;
            goto label_1ceb38;
        }
    }
    ctx->pc = 0x1CEB30u;
    // 0x1ceb30: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1CEB30u;
    {
        const bool branch_taken_0x1ceb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEB30u;
            // 0x1ceb34: 0x2402fde2  addiu       $v0, $zero, -0x21E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966754));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb30) {
            ctx->pc = 0x1CEB9Cu;
            goto label_1ceb9c;
        }
    }
    ctx->pc = 0x1CEB38u;
label_1ceb38:
    // 0x1ceb38: 0x4400019  bltz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CEB38u;
    {
        const bool branch_taken_0x1ceb38 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CEB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEB38u;
            // 0x1ceb3c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb38) {
            ctx->pc = 0x1CEBA0u;
            goto label_1ceba0;
        }
    }
    ctx->pc = 0x1CEB40u;
    // 0x1ceb40: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CEB40u;
    {
        const bool branch_taken_0x1ceb40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEB40u;
            // 0x1ceb44: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb40) {
            ctx->pc = 0x1CEB50u;
            goto label_1ceb50;
        }
    }
    ctx->pc = 0x1CEB48u;
    // 0x1ceb48: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ceb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ceb4c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ceb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1ceb50:
    // 0x1ceb50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ceb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceb54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ceb54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceb58: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1ceb58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ceb5c: 0xc073942  jal         func_1CE508
    ctx->pc = 0x1CEB5Cu;
    SET_GPR_U32(ctx, 31, 0x1CEB64u);
    ctx->pc = 0x1CEB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEB5Cu;
            // 0x1ceb60: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE508u;
    if (runtime->hasFunction(0x1CE508u)) {
        auto targetFn = runtime->lookupFunction(0x1CE508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEB64u; }
        if (ctx->pc != 0x1CEB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE508_0x1ce508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEB64u; }
        if (ctx->pc != 0x1CEB64u) { return; }
    }
    ctx->pc = 0x1CEB64u;
label_1ceb64:
    // 0x1ceb64: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CEB64u;
    {
        const bool branch_taken_0x1ceb64 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CEB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEB64u;
            // 0x1ceb68: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb64) {
            ctx->pc = 0x1CEBA0u;
            goto label_1ceba0;
        }
    }
    ctx->pc = 0x1CEB6Cu;
    // 0x1ceb6c: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CEB6Cu;
    {
        const bool branch_taken_0x1ceb6c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ceb6c) {
            ctx->pc = 0x1CEB70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEB6Cu;
            // 0x1ceb70: 0x8e080000  lw          $t0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CEB80u;
            goto label_1ceb80;
        }
    }
    ctx->pc = 0x1CEB74u;
    // 0x1ceb74: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1ceb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1ceb78: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1ceb78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1ceb7c: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x1ceb7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ceb80:
    // 0x1ceb80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ceb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceb84: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1ceb84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceb88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ceb88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceb8c: 0xc073942  jal         func_1CE508
    ctx->pc = 0x1CEB8Cu;
    SET_GPR_U32(ctx, 31, 0x1CEB94u);
    ctx->pc = 0x1CEB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEB8Cu;
            // 0x1ceb90: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE508u;
    if (runtime->hasFunction(0x1CE508u)) {
        auto targetFn = runtime->lookupFunction(0x1CE508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEB94u; }
        if (ctx->pc != 0x1CEB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE508_0x1ce508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEB94u; }
        if (ctx->pc != 0x1CEB94u) { return; }
    }
    ctx->pc = 0x1CEB94u;
label_1ceb94:
    // 0x1ceb94: 0x4430001  bgezl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CEB94u;
    {
        const bool branch_taken_0x1ceb94 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ceb94) {
            ctx->pc = 0x1CEB98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEB94u;
            // 0x1ceb98: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CEB9Cu;
            goto label_1ceb9c;
        }
    }
    ctx->pc = 0x1CEB9Cu;
label_1ceb9c:
    // 0x1ceb9c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1ceb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1ceba0:
    // 0x1ceba0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1ceba0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ceba4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1ceba4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ceba8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1ceba8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cebac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1cebacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cebb0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1cebb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cebb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cebb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cebb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEBB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEBB8u;
            // 0x1cebbc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CEBC0u;
    // 0x1cebc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cebc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cebc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cebc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cebc8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1cebc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1cebcc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cebccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cebd0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1cebd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1cebd4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1cebd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cebd8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1cebd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1cebdc: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x1cebdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cebe0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cebe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cebe4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1cebe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cebe8: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CEBE8u;
    {
        const bool branch_taken_0x1cebe8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEBE8u;
            // 0x1cebec: 0xae060000  sw          $a2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cebe8) {
            ctx->pc = 0x1CEBFCu;
            goto label_1cebfc;
        }
    }
    ctx->pc = 0x1CEBF0u;
    // 0x1cebf0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1cebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cebf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CEBF4u;
    {
        const bool branch_taken_0x1cebf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEBF4u;
            // 0x1cebf8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cebf4) {
            ctx->pc = 0x1CEC00u;
            goto label_1cec00;
        }
    }
    ctx->pc = 0x1CEBFCu;
label_1cebfc:
    // 0x1cebfc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cebfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1cec00:
    // 0x1cec00: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x1cec00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x1cec04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cec04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cec08: 0xae0a000c  sw          $t2, 0xC($s0)
    ctx->pc = 0x1cec08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 10));
    // 0x1cec0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cec0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cec10: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1cec10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cec14: 0xc07392c  jal         func_1CE4B0
    ctx->pc = 0x1CEC14u;
    SET_GPR_U32(ctx, 31, 0x1CEC1Cu);
    ctx->pc = 0x1CEC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEC14u;
            // 0x1cec18: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE4B0u;
    if (runtime->hasFunction(0x1CE4B0u)) {
        auto targetFn = runtime->lookupFunction(0x1CE4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC1Cu; }
        if (ctx->pc != 0x1CEC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE4B0_0x1ce4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC1Cu; }
        if (ctx->pc != 0x1CEC1Cu) { return; }
    }
    ctx->pc = 0x1CEC1Cu;
label_1cec1c:
    // 0x1cec1c: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CEC1Cu;
    {
        const bool branch_taken_0x1cec1c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CEC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEC1Cu;
            // 0x1cec20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec1c) {
            ctx->pc = 0x1CEC54u;
            goto label_1cec54;
        }
    }
    ctx->pc = 0x1CEC24u;
    // 0x1cec24: 0x26270010  addiu       $a3, $s1, 0x10
    ctx->pc = 0x1cec24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1cec28: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1cec28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cec2c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cec2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cec30: 0xc0738fe  jal         func_1CE3F8
    ctx->pc = 0x1CEC30u;
    SET_GPR_U32(ctx, 31, 0x1CEC38u);
    ctx->pc = 0x1CEC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEC30u;
            // 0x1cec34: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3F8u;
    if (runtime->hasFunction(0x1CE3F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC38u; }
        if (ctx->pc != 0x1CEC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE3F8_0x1ce3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC38u; }
        if (ctx->pc != 0x1CEC38u) { return; }
    }
    ctx->pc = 0x1CEC38u;
label_1cec38:
    // 0x1cec38: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CEC38u;
    {
        const bool branch_taken_0x1cec38 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CEC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEC38u;
            // 0x1cec3c: 0x2402fde2  addiu       $v0, $zero, -0x21E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966754));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec38) {
            ctx->pc = 0x1CEC54u;
            goto label_1cec54;
        }
    }
    ctx->pc = 0x1CEC40u;
    // 0x1cec40: 0x52400004  beql        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CEC40u;
    {
        const bool branch_taken_0x1cec40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cec40) {
            ctx->pc = 0x1CEC44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEC40u;
            // 0x1cec44: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CEC54u;
            goto label_1cec54;
        }
    }
    ctx->pc = 0x1CEC48u;
    // 0x1cec48: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cec48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cec4c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1cec4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1cec50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cec50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cec54:
    // 0x1cec54: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cec54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cec58: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1cec58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cec5c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1cec5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cec60: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1cec60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cec64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cec64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cec68: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEC68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEC68u;
            // 0x1cec6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CEC70u;
    // 0x1cec70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1cec70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1cec74: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1cec74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1cec78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cec78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cec7c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1cec7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cec80: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1cec80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1cec84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cec84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cec88: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1cec88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1cec8c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1cec8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cec90: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1cec90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1cec94: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1cec94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cec98: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1cec98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1cec9c: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x1cec9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceca0: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x1ceca0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceca4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CECA4u;
    {
        const bool branch_taken_0x1ceca4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CECA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CECA4u;
            // 0x1ceca8: 0xae060000  sw          $a2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceca4) {
            ctx->pc = 0x1CECB8u;
            goto label_1cecb8;
        }
    }
    ctx->pc = 0x1CECACu;
    // 0x1cecac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1cecacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cecb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CECB0u;
    {
        const bool branch_taken_0x1cecb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CECB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CECB0u;
            // 0x1cecb4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cecb0) {
            ctx->pc = 0x1CECBCu;
            goto label_1cecbc;
        }
    }
    ctx->pc = 0x1CECB8u;
label_1cecb8:
    // 0x1cecb8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cecb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1cecbc:
    // 0x1cecbc: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x1cecbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x1cecc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cecc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cecc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cecc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cecc8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1cecc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ceccc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1cecccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cecd0: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x1cecd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1cecd4: 0xae0b0010  sw          $t3, 0x10($s0)
    ctx->pc = 0x1cecd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 11));
    // 0x1cecd8: 0xc07392c  jal         func_1CE4B0
    ctx->pc = 0x1CECD8u;
    SET_GPR_U32(ctx, 31, 0x1CECE0u);
    ctx->pc = 0x1CECDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CECD8u;
            // 0x1cecdc: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE4B0u;
    if (runtime->hasFunction(0x1CE4B0u)) {
        auto targetFn = runtime->lookupFunction(0x1CE4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CECE0u; }
        if (ctx->pc != 0x1CECE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE4B0_0x1ce4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CECE0u; }
        if (ctx->pc != 0x1CECE0u) { return; }
    }
    ctx->pc = 0x1CECE0u;
label_1cece0:
    // 0x1cece0: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CECE0u;
    {
        const bool branch_taken_0x1cece0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CECE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CECE0u;
            // 0x1cece4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cece0) {
            ctx->pc = 0x1CED34u;
            goto label_1ced34;
        }
    }
    ctx->pc = 0x1CECE8u;
    // 0x1cece8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cece8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cecec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cececu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cecf0: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1cecf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cecf4: 0xc07392c  jal         func_1CE4B0
    ctx->pc = 0x1CECF4u;
    SET_GPR_U32(ctx, 31, 0x1CECFCu);
    ctx->pc = 0x1CECF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CECF4u;
            // 0x1cecf8: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE4B0u;
    if (runtime->hasFunction(0x1CE4B0u)) {
        auto targetFn = runtime->lookupFunction(0x1CE4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CECFCu; }
        if (ctx->pc != 0x1CECFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE4B0_0x1ce4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CECFCu; }
        if (ctx->pc != 0x1CECFCu) { return; }
    }
    ctx->pc = 0x1CECFCu;
label_1cecfc:
    // 0x1cecfc: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CECFCu;
    {
        const bool branch_taken_0x1cecfc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CED00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CECFCu;
            // 0x1ced00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cecfc) {
            ctx->pc = 0x1CED34u;
            goto label_1ced34;
        }
    }
    ctx->pc = 0x1CED04u;
    // 0x1ced04: 0x26470024  addiu       $a3, $s2, 0x24
    ctx->pc = 0x1ced04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x1ced08: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1ced08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ced0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ced0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ced10: 0xc0738fe  jal         func_1CE3F8
    ctx->pc = 0x1CED10u;
    SET_GPR_U32(ctx, 31, 0x1CED18u);
    ctx->pc = 0x1CED14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CED10u;
            // 0x1ced14: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3F8u;
    if (runtime->hasFunction(0x1CE3F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CED18u; }
        if (ctx->pc != 0x1CED18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE3F8_0x1ce3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CED18u; }
        if (ctx->pc != 0x1CED18u) { return; }
    }
    ctx->pc = 0x1CED18u;
label_1ced18:
    // 0x1ced18: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CED18u;
    {
        const bool branch_taken_0x1ced18 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CED1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CED18u;
            // 0x1ced1c: 0x2402fde2  addiu       $v0, $zero, -0x21E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966754));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ced18) {
            ctx->pc = 0x1CED34u;
            goto label_1ced34;
        }
    }
    ctx->pc = 0x1CED20u;
    // 0x1ced20: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CED20u;
    {
        const bool branch_taken_0x1ced20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ced20) {
            ctx->pc = 0x1CED24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CED20u;
            // 0x1ced24: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CED34u;
            goto label_1ced34;
        }
    }
    ctx->pc = 0x1CED28u;
    // 0x1ced28: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ced28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ced2c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ced2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1ced30: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ced30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ced34:
    // 0x1ced34: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ced34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ced38: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1ced38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ced3c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1ced3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ced40: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ced40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ced44: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ced44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ced48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ced48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ced4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CED4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CED50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CED4Cu;
            // 0x1ced50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CED54u;
    // 0x1ced54: 0x0  nop
    ctx->pc = 0x1ced54u;
    // NOP
    // 0x1ced58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ced58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ced5c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1ced5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ced60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ced60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ced64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ced64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ced68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ced68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ced6c: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x1ced6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x1ced70: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1ced70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ced74: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x1ced74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
    // 0x1ced78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ced78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ced7c: 0xc0738fe  jal         func_1CE3F8
    ctx->pc = 0x1CED7Cu;
    SET_GPR_U32(ctx, 31, 0x1CED84u);
    ctx->pc = 0x1CED80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CED7Cu;
            // 0x1ced80: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3F8u;
    if (runtime->hasFunction(0x1CE3F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CED84u; }
        if (ctx->pc != 0x1CED84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE3F8_0x1ce3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CED84u; }
        if (ctx->pc != 0x1CED84u) { return; }
    }
    ctx->pc = 0x1CED84u;
label_1ced84:
    // 0x1ced84: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CED84u;
    {
        const bool branch_taken_0x1ced84 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ced84) {
            ctx->pc = 0x1CED88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CED84u;
            // 0x1ced88: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CED90u;
            goto label_1ced90;
        }
    }
    ctx->pc = 0x1CED8Cu;
    // 0x1ced8c: 0x2402fde2  addiu       $v0, $zero, -0x21E
    ctx->pc = 0x1ced8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966754));
label_1ced90:
    // 0x1ced90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ced90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ced94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ced94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ced98: 0x3e00008  jr          $ra
    ctx->pc = 0x1CED98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CED9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CED98u;
            // 0x1ced9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CEDA0u;
    // 0x1ceda0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ceda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ceda4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ceda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ceda8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ceda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cedac: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x1cedacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cedb0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cedb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cedb4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1cedb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1cedb8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1cedb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1cedbc: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1cedbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cedc0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cedc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cedc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cedc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cedc8: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x1cedc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x1cedcc: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x1cedccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
    // 0x1cedd0: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x1cedd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x1cedd4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1cedd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cedd8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1cedd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceddc: 0xc07392c  jal         func_1CE4B0
    ctx->pc = 0x1CEDDCu;
    SET_GPR_U32(ctx, 31, 0x1CEDE4u);
    ctx->pc = 0x1CEDE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEDDCu;
            // 0x1cede0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE4B0u;
    if (runtime->hasFunction(0x1CE4B0u)) {
        auto targetFn = runtime->lookupFunction(0x1CE4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEDE4u; }
        if (ctx->pc != 0x1CEDE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE4B0_0x1ce4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEDE4u; }
        if (ctx->pc != 0x1CEDE4u) { return; }
    }
    ctx->pc = 0x1CEDE4u;
label_1cede4:
    // 0x1cede4: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CEDE4u;
    {
        const bool branch_taken_0x1cede4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CEDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEDE4u;
            // 0x1cede8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cede4) {
            ctx->pc = 0x1CEE2Cu;
            goto label_1cee2c;
        }
    }
    ctx->pc = 0x1CEDECu;
    // 0x1cedec: 0x2647000c  addiu       $a3, $s2, 0xC
    ctx->pc = 0x1cedecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x1cedf0: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1cedf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1cedf4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cedf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cedf8: 0xc0738fe  jal         func_1CE3F8
    ctx->pc = 0x1CEDF8u;
    SET_GPR_U32(ctx, 31, 0x1CEE00u);
    ctx->pc = 0x1CEDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEDF8u;
            // 0x1cedfc: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3F8u;
    if (runtime->hasFunction(0x1CE3F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEE00u; }
        if (ctx->pc != 0x1CEE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE3F8_0x1ce3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEE00u; }
        if (ctx->pc != 0x1CEE00u) { return; }
    }
    ctx->pc = 0x1CEE00u;
label_1cee00:
    // 0x1cee00: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CEE00u;
    {
        const bool branch_taken_0x1cee00 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1CEE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEE00u;
            // 0x1cee04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee00) {
            ctx->pc = 0x1CEE10u;
            goto label_1cee10;
        }
    }
    ctx->pc = 0x1CEE08u;
    // 0x1cee08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CEE08u;
    {
        const bool branch_taken_0x1cee08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEE08u;
            // 0x1cee0c: 0x2402fde2  addiu       $v0, $zero, -0x21E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966754));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee08) {
            ctx->pc = 0x1CEE2Cu;
            goto label_1cee2c;
        }
    }
    ctx->pc = 0x1CEE10u;
label_1cee10:
    // 0x1cee10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1cee10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cee14: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1cee14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cee18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cee18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cee1c: 0xc073942  jal         func_1CE508
    ctx->pc = 0x1CEE1Cu;
    SET_GPR_U32(ctx, 31, 0x1CEE24u);
    ctx->pc = 0x1CEE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEE1Cu;
            // 0x1cee20: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE508u;
    if (runtime->hasFunction(0x1CE508u)) {
        auto targetFn = runtime->lookupFunction(0x1CE508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEE24u; }
        if (ctx->pc != 0x1CEE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE508_0x1ce508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEE24u; }
        if (ctx->pc != 0x1CEE24u) { return; }
    }
    ctx->pc = 0x1CEE24u;
label_1cee24:
    // 0x1cee24: 0x4430001  bgezl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CEE24u;
    {
        const bool branch_taken_0x1cee24 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1cee24) {
            ctx->pc = 0x1CEE28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEE24u;
            // 0x1cee28: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CEE2Cu;
            goto label_1cee2c;
        }
    }
    ctx->pc = 0x1CEE2Cu;
label_1cee2c:
    // 0x1cee2c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cee2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cee30: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1cee30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cee34: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1cee34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cee38: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1cee38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cee3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cee3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cee40: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEE40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEE40u;
            // 0x1cee44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CEE48u;
}
