#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003497B0
// Address: 0x3497b0 - 0x349920
void sub_003497B0_0x3497b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003497B0_0x3497b0");
#endif

    switch (ctx->pc) {
        case 0x3497b0u: goto label_3497b0;
        case 0x3497b4u: goto label_3497b4;
        case 0x3497b8u: goto label_3497b8;
        case 0x3497bcu: goto label_3497bc;
        case 0x3497c0u: goto label_3497c0;
        case 0x3497c4u: goto label_3497c4;
        case 0x3497c8u: goto label_3497c8;
        case 0x3497ccu: goto label_3497cc;
        case 0x3497d0u: goto label_3497d0;
        case 0x3497d4u: goto label_3497d4;
        case 0x3497d8u: goto label_3497d8;
        case 0x3497dcu: goto label_3497dc;
        case 0x3497e0u: goto label_3497e0;
        case 0x3497e4u: goto label_3497e4;
        case 0x3497e8u: goto label_3497e8;
        case 0x3497ecu: goto label_3497ec;
        case 0x3497f0u: goto label_3497f0;
        case 0x3497f4u: goto label_3497f4;
        case 0x3497f8u: goto label_3497f8;
        case 0x3497fcu: goto label_3497fc;
        case 0x349800u: goto label_349800;
        case 0x349804u: goto label_349804;
        case 0x349808u: goto label_349808;
        case 0x34980cu: goto label_34980c;
        case 0x349810u: goto label_349810;
        case 0x349814u: goto label_349814;
        case 0x349818u: goto label_349818;
        case 0x34981cu: goto label_34981c;
        case 0x349820u: goto label_349820;
        case 0x349824u: goto label_349824;
        case 0x349828u: goto label_349828;
        case 0x34982cu: goto label_34982c;
        case 0x349830u: goto label_349830;
        case 0x349834u: goto label_349834;
        case 0x349838u: goto label_349838;
        case 0x34983cu: goto label_34983c;
        case 0x349840u: goto label_349840;
        case 0x349844u: goto label_349844;
        case 0x349848u: goto label_349848;
        case 0x34984cu: goto label_34984c;
        case 0x349850u: goto label_349850;
        case 0x349854u: goto label_349854;
        case 0x349858u: goto label_349858;
        case 0x34985cu: goto label_34985c;
        case 0x349860u: goto label_349860;
        case 0x349864u: goto label_349864;
        case 0x349868u: goto label_349868;
        case 0x34986cu: goto label_34986c;
        case 0x349870u: goto label_349870;
        case 0x349874u: goto label_349874;
        case 0x349878u: goto label_349878;
        case 0x34987cu: goto label_34987c;
        case 0x349880u: goto label_349880;
        case 0x349884u: goto label_349884;
        case 0x349888u: goto label_349888;
        case 0x34988cu: goto label_34988c;
        case 0x349890u: goto label_349890;
        case 0x349894u: goto label_349894;
        case 0x349898u: goto label_349898;
        case 0x34989cu: goto label_34989c;
        case 0x3498a0u: goto label_3498a0;
        case 0x3498a4u: goto label_3498a4;
        case 0x3498a8u: goto label_3498a8;
        case 0x3498acu: goto label_3498ac;
        case 0x3498b0u: goto label_3498b0;
        case 0x3498b4u: goto label_3498b4;
        case 0x3498b8u: goto label_3498b8;
        case 0x3498bcu: goto label_3498bc;
        case 0x3498c0u: goto label_3498c0;
        case 0x3498c4u: goto label_3498c4;
        case 0x3498c8u: goto label_3498c8;
        case 0x3498ccu: goto label_3498cc;
        case 0x3498d0u: goto label_3498d0;
        case 0x3498d4u: goto label_3498d4;
        case 0x3498d8u: goto label_3498d8;
        case 0x3498dcu: goto label_3498dc;
        case 0x3498e0u: goto label_3498e0;
        case 0x3498e4u: goto label_3498e4;
        case 0x3498e8u: goto label_3498e8;
        case 0x3498ecu: goto label_3498ec;
        case 0x3498f0u: goto label_3498f0;
        case 0x3498f4u: goto label_3498f4;
        case 0x3498f8u: goto label_3498f8;
        case 0x3498fcu: goto label_3498fc;
        case 0x349900u: goto label_349900;
        case 0x349904u: goto label_349904;
        case 0x349908u: goto label_349908;
        case 0x34990cu: goto label_34990c;
        case 0x349910u: goto label_349910;
        case 0x349914u: goto label_349914;
        case 0x349918u: goto label_349918;
        case 0x34991cu: goto label_34991c;
        default: break;
    }

    ctx->pc = 0x3497b0u;

label_3497b0:
    // 0x3497b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3497b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3497b4:
    // 0x3497b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3497b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3497b8:
    // 0x3497b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3497b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3497bc:
    // 0x3497bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3497bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3497c0:
    // 0x3497c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3497c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3497c4:
    // 0x3497c4: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x3497c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3497c8:
    // 0x3497c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3497c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3497cc:
    // 0x3497cc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3497ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3497d0:
    // 0x3497d0: 0x320f809  jalr        $t9
label_3497d4:
    if (ctx->pc == 0x3497D4u) {
        ctx->pc = 0x3497D4u;
            // 0x3497d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3497D8u;
        goto label_3497d8;
    }
    ctx->pc = 0x3497D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3497D8u);
        ctx->pc = 0x3497D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3497D0u;
            // 0x3497d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3497D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3497D8u; }
            if (ctx->pc != 0x3497D8u) { return; }
        }
        }
    }
    ctx->pc = 0x3497D8u;
label_3497d8:
    // 0x3497d8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3497d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3497dc:
    // 0x3497dc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3497dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3497e0:
    // 0x3497e0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x3497e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_3497e4:
    // 0x3497e4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3497e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3497e8:
    // 0x3497e8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x3497e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3497ec:
    // 0x3497ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3497ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3497f0:
    // 0x3497f0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x3497f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_3497f4:
    // 0x3497f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3497f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3497f8:
    // 0x3497f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3497f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3497fc:
    // 0x3497fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3497fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_349800:
    // 0x349800: 0x3e00008  jr          $ra
label_349804:
    if (ctx->pc == 0x349804u) {
        ctx->pc = 0x349804u;
            // 0x349804: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x349808u;
        goto label_349808;
    }
    ctx->pc = 0x349800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349800u;
            // 0x349804: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x349808u;
label_349808:
    // 0x349808: 0x0  nop
    ctx->pc = 0x349808u;
    // NOP
label_34980c:
    // 0x34980c: 0x0  nop
    ctx->pc = 0x34980cu;
    // NOP
label_349810:
    // 0x349810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x349810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_349814:
    // 0x349814: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x349814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_349818:
    // 0x349818: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x349818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_34981c:
    // 0x34981c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34981cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_349820:
    // 0x349820: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x349820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_349824:
    // 0x349824: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x349824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_349828:
    // 0x349828: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x349828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_34982c:
    // 0x34982c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_349830:
    if (ctx->pc == 0x349830u) {
        ctx->pc = 0x349830u;
            // 0x349830: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x349834u;
        goto label_349834;
    }
    ctx->pc = 0x34982Cu;
    {
        const bool branch_taken_0x34982c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x349830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34982Cu;
            // 0x349830: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34982c) {
            ctx->pc = 0x349898u;
            goto label_349898;
        }
    }
    ctx->pc = 0x349834u;
label_349834:
    // 0x349834: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x349834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_349838:
    // 0x349838: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x349838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34983c:
    // 0x34983c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x34983cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_349840:
    // 0x349840: 0x54500012  bnel        $v0, $s0, . + 4 + (0x12 << 2)
label_349844:
    if (ctx->pc == 0x349844u) {
        ctx->pc = 0x349844u;
            // 0x349844: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x349848u;
        goto label_349848;
    }
    ctx->pc = 0x349840u;
    {
        const bool branch_taken_0x349840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x349840) {
            ctx->pc = 0x349844u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x349840u;
            // 0x349844: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34988Cu;
            goto label_34988c;
        }
    }
    ctx->pc = 0x349848u;
label_349848:
    // 0x349848: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x349848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_34984c:
    // 0x34984c: 0xc2082b  sltu        $at, $a2, $v0
    ctx->pc = 0x34984cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_349850:
    // 0x349850: 0x5020000b  beql        $at, $zero, . + 4 + (0xB << 2)
label_349854:
    if (ctx->pc == 0x349854u) {
        ctx->pc = 0x349854u;
            // 0x349854: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x349858u;
        goto label_349858;
    }
    ctx->pc = 0x349850u;
    {
        const bool branch_taken_0x349850 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x349850) {
            ctx->pc = 0x349854u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x349850u;
            // 0x349854: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x349880u;
            goto label_349880;
        }
    }
    ctx->pc = 0x349858u;
label_349858:
    // 0x349858: 0x661023  subu        $v0, $v1, $a2
    ctx->pc = 0x349858u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_34985c:
    // 0x34985c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x34985cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_349860:
    // 0x349860: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x349860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_349864:
    // 0x349864: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x349864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_349868:
    // 0x349868: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x349868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_34986c:
    // 0x34986c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34986cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_349870:
    // 0x349870: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x349870u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_349874:
    // 0x349874: 0xc04a508  jal         func_129420
label_349878:
    if (ctx->pc == 0x349878u) {
        ctx->pc = 0x349878u;
            // 0x349878: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->pc = 0x34987Cu;
        goto label_34987c;
    }
    ctx->pc = 0x349874u;
    SET_GPR_U32(ctx, 31, 0x34987Cu);
    ctx->pc = 0x349878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349874u;
            // 0x349878: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34987Cu; }
        if (ctx->pc != 0x34987Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34987Cu; }
        if (ctx->pc != 0x34987Cu) { return; }
    }
    ctx->pc = 0x34987Cu;
label_34987c:
    // 0x34987c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x34987cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_349880:
    // 0x349880: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x349880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_349884:
    // 0x349884: 0x10000004  b           . + 4 + (0x4 << 2)
label_349888:
    if (ctx->pc == 0x349888u) {
        ctx->pc = 0x349888u;
            // 0x349888: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x34988Cu;
        goto label_34988c;
    }
    ctx->pc = 0x349884u;
    {
        const bool branch_taken_0x349884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349884u;
            // 0x349888: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349884) {
            ctx->pc = 0x349898u;
            goto label_349898;
        }
    }
    ctx->pc = 0x34988Cu;
label_34988c:
    // 0x34988c: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x34988cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_349890:
    // 0x349890: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_349894:
    if (ctx->pc == 0x349894u) {
        ctx->pc = 0x349894u;
            // 0x349894: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x349898u;
        goto label_349898;
    }
    ctx->pc = 0x349890u;
    {
        const bool branch_taken_0x349890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x349894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x349890u;
            // 0x349894: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349890) {
            ctx->pc = 0x34983Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34983c;
        }
    }
    ctx->pc = 0x349898u;
label_349898:
    // 0x349898: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x349898u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34989c:
    // 0x34989c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x34989cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3498a0:
    // 0x3498a0: 0x320f809  jalr        $t9
label_3498a4:
    if (ctx->pc == 0x3498A4u) {
        ctx->pc = 0x3498A4u;
            // 0x3498a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3498A8u;
        goto label_3498a8;
    }
    ctx->pc = 0x3498A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3498A8u);
        ctx->pc = 0x3498A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3498A0u;
            // 0x3498a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3498A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3498A8u; }
            if (ctx->pc != 0x3498A8u) { return; }
        }
        }
    }
    ctx->pc = 0x3498A8u;
label_3498a8:
    // 0x3498a8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3498a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3498ac:
    // 0x3498ac: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3498acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3498b0:
    // 0x3498b0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x3498b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_3498b4:
    // 0x3498b4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3498b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3498b8:
    // 0x3498b8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x3498b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3498bc:
    // 0x3498bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3498bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3498c0:
    // 0x3498c0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x3498c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_3498c4:
    // 0x3498c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3498c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3498c8:
    // 0x3498c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3498c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3498cc:
    // 0x3498cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3498ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3498d0:
    // 0x3498d0: 0x3e00008  jr          $ra
label_3498d4:
    if (ctx->pc == 0x3498D4u) {
        ctx->pc = 0x3498D4u;
            // 0x3498d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3498D8u;
        goto label_3498d8;
    }
    ctx->pc = 0x3498D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3498D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3498D0u;
            // 0x3498d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3498D8u;
label_3498d8:
    // 0x3498d8: 0x0  nop
    ctx->pc = 0x3498d8u;
    // NOP
label_3498dc:
    // 0x3498dc: 0x0  nop
    ctx->pc = 0x3498dcu;
    // NOP
label_3498e0:
    // 0x3498e0: 0x80d1a84  j           func_346A10
label_3498e4:
    if (ctx->pc == 0x3498E4u) {
        ctx->pc = 0x3498E4u;
            // 0x3498e4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x3498E8u;
        goto label_3498e8;
    }
    ctx->pc = 0x3498E0u;
    ctx->pc = 0x3498E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3498E0u;
            // 0x3498e4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x346A10u;
    {
        auto targetFn = runtime->lookupFunction(0x346A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3498E8u;
label_3498e8:
    // 0x3498e8: 0x0  nop
    ctx->pc = 0x3498e8u;
    // NOP
label_3498ec:
    // 0x3498ec: 0x0  nop
    ctx->pc = 0x3498ecu;
    // NOP
label_3498f0:
    // 0x3498f0: 0x80d1e64  j           func_347990
label_3498f4:
    if (ctx->pc == 0x3498F4u) {
        ctx->pc = 0x3498F4u;
            // 0x3498f4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3498F8u;
        goto label_3498f8;
    }
    ctx->pc = 0x3498F0u;
    ctx->pc = 0x3498F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3498F0u;
            // 0x3498f4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347990u;
    {
        auto targetFn = runtime->lookupFunction(0x347990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3498F8u;
label_3498f8:
    // 0x3498f8: 0x0  nop
    ctx->pc = 0x3498f8u;
    // NOP
label_3498fc:
    // 0x3498fc: 0x0  nop
    ctx->pc = 0x3498fcu;
    // NOP
label_349900:
    // 0x349900: 0x80d1a2c  j           func_3468B0
label_349904:
    if (ctx->pc == 0x349904u) {
        ctx->pc = 0x349904u;
            // 0x349904: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x349908u;
        goto label_349908;
    }
    ctx->pc = 0x349900u;
    ctx->pc = 0x349904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349900u;
            // 0x349904: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3468B0u;
    if (runtime->hasFunction(0x3468B0u)) {
        auto targetFn = runtime->lookupFunction(0x3468B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_003468B0_0x3468b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x349908u;
label_349908:
    // 0x349908: 0x0  nop
    ctx->pc = 0x349908u;
    // NOP
label_34990c:
    // 0x34990c: 0x0  nop
    ctx->pc = 0x34990cu;
    // NOP
label_349910:
    // 0x349910: 0x80d1a08  j           func_346820
label_349914:
    if (ctx->pc == 0x349914u) {
        ctx->pc = 0x349914u;
            // 0x349914: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x349918u;
        goto label_349918;
    }
    ctx->pc = 0x349910u;
    ctx->pc = 0x349914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x349910u;
            // 0x349914: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x346820u;
    {
        auto targetFn = runtime->lookupFunction(0x346820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x349918u;
label_349918:
    // 0x349918: 0x0  nop
    ctx->pc = 0x349918u;
    // NOP
label_34991c:
    // 0x34991c: 0x0  nop
    ctx->pc = 0x34991cu;
    // NOP
}
