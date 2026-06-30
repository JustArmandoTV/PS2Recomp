#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CF780
// Address: 0x1cf780 - 0x1cf9c0
void sub_001CF780_0x1cf780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF780_0x1cf780");
#endif

    switch (ctx->pc) {
        case 0x1cf7acu: goto label_1cf7ac;
        case 0x1cf7c4u: goto label_1cf7c4;
        case 0x1cf834u: goto label_1cf834;
        case 0x1cf850u: goto label_1cf850;
        case 0x1cf898u: goto label_1cf898;
        case 0x1cf8a8u: goto label_1cf8a8;
        case 0x1cf8ecu: goto label_1cf8ec;
        case 0x1cf930u: goto label_1cf930;
        case 0x1cf970u: goto label_1cf970;
        case 0x1cf9a4u: goto label_1cf9a4;
        default: break;
    }

    ctx->pc = 0x1cf780u;

label_1cf780:
    // 0x1cf780: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cf780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cf784: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1cf784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1cf788: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1cf788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1cf78c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cf78cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf790: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf794: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cf794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf798: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1cf798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf79c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1cf79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1cf7a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cf7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cf7a4: 0xc073d70  jal         func_1CF5C0
    ctx->pc = 0x1CF7A4u;
    SET_GPR_U32(ctx, 31, 0x1CF7ACu);
    ctx->pc = 0x1CF7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF7A4u;
            // 0x1cf7a8: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CF5C0u;
    if (runtime->hasFunction(0x1CF5C0u)) {
        auto targetFn = runtime->lookupFunction(0x1CF5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF7ACu; }
        if (ctx->pc != 0x1CF7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF5C0_0x1cf5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF7ACu; }
        if (ctx->pc != 0x1CF7ACu) { return; }
    }
    ctx->pc = 0x1CF7ACu;
label_1cf7ac:
    // 0x1cf7ac: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF7ACu;
    {
        const bool branch_taken_0x1cf7ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CF7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF7ACu;
            // 0x1cf7b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf7ac) {
            ctx->pc = 0x1CF7D0u;
            goto label_1cf7d0;
        }
    }
    ctx->pc = 0x1CF7B4u;
    // 0x1cf7b4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1cf7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cf7b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cf7b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf7bc: 0xc073db0  jal         func_1CF6C0
    ctx->pc = 0x1CF7BCu;
    SET_GPR_U32(ctx, 31, 0x1CF7C4u);
    ctx->pc = 0x1CF7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF7BCu;
            // 0x1cf7c0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CF6C0u;
    if (runtime->hasFunction(0x1CF6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1CF6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF7C4u; }
        if (ctx->pc != 0x1CF7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF6C0_0x1cf6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF7C4u; }
        if (ctx->pc != 0x1CF7C4u) { return; }
    }
    ctx->pc = 0x1CF7C4u;
label_1cf7c4:
    // 0x1cf7c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1cf7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf7c8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1cf7c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1cf7cc: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1cf7ccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1cf7d0:
    // 0x1cf7d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cf7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cf7d4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1cf7d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cf7d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1cf7d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf7dc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1cf7dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf7e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf7e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF7E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF7E4u;
            // 0x1cf7e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CF7ECu;
    // 0x1cf7ec: 0x0  nop
    ctx->pc = 0x1cf7ecu;
    // NOP
    // 0x1cf7f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cf7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cf7f4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1cf7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1cf7f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1cf7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1cf7fc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1cf7fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf800: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1cf800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1cf804: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cf804u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf808: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf80c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cf80cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf810: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1cf810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf814: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF814u;
    {
        const bool branch_taken_0x1cf814 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF814u;
            // 0x1cf818: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf814) {
            ctx->pc = 0x1CF824u;
            goto label_1cf824;
        }
    }
    ctx->pc = 0x1CF81Cu;
    // 0x1cf81c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1CF81Cu;
    {
        const bool branch_taken_0x1cf81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF81Cu;
            // 0x1cf820: 0x2402fde4  addiu       $v0, $zero, -0x21C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966756));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf81c) {
            ctx->pc = 0x1CF860u;
            goto label_1cf860;
        }
    }
    ctx->pc = 0x1CF824u;
label_1cf824:
    // 0x1cf824: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cf824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf828: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cf828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf82c: 0xc073d78  jal         func_1CF5E0
    ctx->pc = 0x1CF82Cu;
    SET_GPR_U32(ctx, 31, 0x1CF834u);
    ctx->pc = 0x1CF830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF82Cu;
            // 0x1cf830: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CF5E0u;
    if (runtime->hasFunction(0x1CF5E0u)) {
        auto targetFn = runtime->lookupFunction(0x1CF5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF834u; }
        if (ctx->pc != 0x1CF834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF5E0_0x1cf5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF834u; }
        if (ctx->pc != 0x1CF834u) { return; }
    }
    ctx->pc = 0x1CF834u;
label_1cf834:
    // 0x1cf834: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CF834u;
    {
        const bool branch_taken_0x1cf834 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1CF838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF834u;
            // 0x1cf838: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf834) {
            ctx->pc = 0x1CF860u;
            goto label_1cf860;
        }
    }
    ctx->pc = 0x1CF83Cu;
    // 0x1cf83c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cf83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf840: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cf840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf844: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cf844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf848: 0xc073d68  jal         func_1CF5A0
    ctx->pc = 0x1CF848u;
    SET_GPR_U32(ctx, 31, 0x1CF850u);
    ctx->pc = 0x1CF84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF848u;
            // 0x1cf84c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CF5A0u;
    if (runtime->hasFunction(0x1CF5A0u)) {
        auto targetFn = runtime->lookupFunction(0x1CF5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF850u; }
        if (ctx->pc != 0x1CF850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF5A0_0x1cf5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF850u; }
        if (ctx->pc != 0x1CF850u) { return; }
    }
    ctx->pc = 0x1CF850u;
label_1cf850:
    // 0x1cf850: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1cf850u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf854: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF854u;
    {
        const bool branch_taken_0x1cf854 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1CF858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF854u;
            // 0x1cf858: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf854) {
            ctx->pc = 0x1CF864u;
            goto label_1cf864;
        }
    }
    ctx->pc = 0x1CF85Cu;
    // 0x1cf85c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cf85cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf860:
    // 0x1cf860: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cf860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1cf864:
    // 0x1cf864: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1cf864u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cf868: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1cf868u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf86c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1cf86cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf870: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf874: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF874u;
            // 0x1cf878: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CF87Cu;
    // 0x1cf87c: 0x0  nop
    ctx->pc = 0x1cf87cu;
    // NOP
    // 0x1cf880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf884: 0x31290002  andi        $t1, $t1, 0x2
    ctx->pc = 0x1cf884u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2);
    // 0x1cf888: 0x11200005  beqz        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF888u;
    {
        const bool branch_taken_0x1cf888 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF888u;
            // 0x1cf88c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf888) {
            ctx->pc = 0x1CF8A0u;
            goto label_1cf8a0;
        }
    }
    ctx->pc = 0x1CF890u;
    // 0x1cf890: 0xc073dba  jal         func_1CF6E8
    ctx->pc = 0x1CF890u;
    SET_GPR_U32(ctx, 31, 0x1CF898u);
    ctx->pc = 0x1CF6E8u;
    if (runtime->hasFunction(0x1CF6E8u)) {
        auto targetFn = runtime->lookupFunction(0x1CF6E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF898u; }
        if (ctx->pc != 0x1CF898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF6E8_0x1cf6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF898u; }
        if (ctx->pc != 0x1CF898u) { return; }
    }
    ctx->pc = 0x1CF898u;
label_1cf898:
    // 0x1cf898: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF898u;
    {
        const bool branch_taken_0x1cf898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF898u;
            // 0x1cf89c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf898) {
            ctx->pc = 0x1CF8ACu;
            goto label_1cf8ac;
        }
    }
    ctx->pc = 0x1CF8A0u;
label_1cf8a0:
    // 0x1cf8a0: 0xc073de0  jal         func_1CF780
    ctx->pc = 0x1CF8A0u;
    SET_GPR_U32(ctx, 31, 0x1CF8A8u);
    ctx->pc = 0x1CF780u;
    goto label_1cf780;
    ctx->pc = 0x1CF8A8u;
label_1cf8a8:
    // 0x1cf8a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cf8ac:
    // 0x1cf8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF8ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF8ACu;
            // 0x1cf8b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CF8B4u;
    // 0x1cf8b4: 0x0  nop
    ctx->pc = 0x1cf8b4u;
    // NOP
    // 0x1cf8b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cf8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cf8bc: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x1cf8bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cf8c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1cf8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1cf8c4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1cf8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1cf8c8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1cf8c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf8cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf8d0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1cf8d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf8d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cf8d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf8d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cf8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1cf8dc: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x1cf8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1cf8e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cf8e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf8e4: 0xc0738fe  jal         func_1CE3F8
    ctx->pc = 0x1CF8E4u;
    SET_GPR_U32(ctx, 31, 0x1CF8ECu);
    ctx->pc = 0x1CF8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF8E4u;
            // 0x1cf8e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3F8u;
    if (runtime->hasFunction(0x1CE3F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF8ECu; }
        if (ctx->pc != 0x1CF8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE3F8_0x1ce3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF8ECu; }
        if (ctx->pc != 0x1CF8ECu) { return; }
    }
    ctx->pc = 0x1CF8ECu;
label_1cf8ec:
    // 0x1cf8ec: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CF8ECu;
    {
        const bool branch_taken_0x1cf8ec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CF8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF8ECu;
            // 0x1cf8f0: 0x2402fde2  addiu       $v0, $zero, -0x21E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966754));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf8ec) {
            ctx->pc = 0x1CF918u;
            goto label_1cf918;
        }
    }
    ctx->pc = 0x1CF8F4u;
    // 0x1cf8f4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF8F4u;
    {
        const bool branch_taken_0x1cf8f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf8f4) {
            ctx->pc = 0x1CF904u;
            goto label_1cf904;
        }
    }
    ctx->pc = 0x1CF8FCu;
    // 0x1cf8fc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cf8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cf900: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1cf900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1cf904:
    // 0x1cf904: 0x52400004  beql        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF904u;
    {
        const bool branch_taken_0x1cf904 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf904) {
            ctx->pc = 0x1CF908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF904u;
            // 0x1cf908: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CF918u;
            goto label_1cf918;
        }
    }
    ctx->pc = 0x1CF90Cu;
    // 0x1cf90c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1cf90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cf910: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1cf910u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1cf914: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cf914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cf918:
    // 0x1cf918: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cf918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cf91c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1cf91cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf920: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1cf920u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf924: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf928: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF928u;
            // 0x1cf92c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CF930u;
label_1cf930:
    // 0x1cf930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cf930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cf934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cf934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cf938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cf938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cf93c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cf93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cf940: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf944: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CF944u;
    {
        const bool branch_taken_0x1cf944 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF944u;
            // 0x1cf948: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf944) {
            ctx->pc = 0x1CF9A4u;
            goto label_1cf9a4;
        }
    }
    ctx->pc = 0x1CF94Cu;
    // 0x1cf94c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1cf94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1cf950: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1cf950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1cf954: 0x2463cd10  addiu       $v1, $v1, -0x32F0
    ctx->pc = 0x1cf954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954256));
    // 0x1cf958: 0x2442cd1c  addiu       $v0, $v0, -0x32E4
    ctx->pc = 0x1cf958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954268));
    // 0x1cf95c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1cf95cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1cf960: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x1cf960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1cf964: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1cf964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1cf968: 0xc15ab90  jal         func_56AE40
    ctx->pc = 0x1CF968u;
    SET_GPR_U32(ctx, 31, 0x1CF970u);
    ctx->pc = 0x1CF96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF968u;
            // 0x1cf96c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x56AE40u;
    if (runtime->hasFunction(0x56AE40u)) {
        auto targetFn = runtime->lookupFunction(0x56AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF970u; }
        if (ctx->pc != 0x1CF970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0056AE40_0x56ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF970u; }
        if (ctx->pc != 0x1CF970u) { return; }
    }
    ctx->pc = 0x1CF970u;
label_1cf970:
    // 0x1cf970: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF970u;
    {
        const bool branch_taken_0x1cf970 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf970) {
            ctx->pc = 0x1CF974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF970u;
            // 0x1cf974: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CF990u;
            goto label_1cf990;
        }
    }
    ctx->pc = 0x1CF978u;
    // 0x1cf978: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1cf978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1cf97c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1cf97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1cf980: 0x2463cd38  addiu       $v1, $v1, -0x32C8
    ctx->pc = 0x1cf980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954296));
    // 0x1cf984: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1cf984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1cf988: 0xac40a140  sw          $zero, -0x5EC0($v0)
    ctx->pc = 0x1cf988u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943040), GPR_U32(ctx, 0));
    // 0x1cf98c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x1cf98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_1cf990:
    // 0x1cf990: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1cf990u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1cf994: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF994u;
    {
        const bool branch_taken_0x1cf994 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1cf994) {
            ctx->pc = 0x1CF998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF994u;
            // 0x1cf998: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CF9A8u;
            goto label_1cf9a8;
        }
    }
    ctx->pc = 0x1CF99Cu;
    // 0x1cf99c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x1CF99Cu;
    SET_GPR_U32(ctx, 31, 0x1CF9A4u);
    ctx->pc = 0x1CF9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF99Cu;
            // 0x1cf9a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF9A4u; }
        if (ctx->pc != 0x1CF9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF9A4u; }
        if (ctx->pc != 0x1CF9A4u) { return; }
    }
    ctx->pc = 0x1CF9A4u;
label_1cf9a4:
    // 0x1cf9a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cf9a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cf9a8:
    // 0x1cf9a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cf9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf9ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cf9acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf9b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cf9b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF9B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF9B4u;
            // 0x1cf9b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CF9BCu;
    // 0x1cf9bc: 0x0  nop
    ctx->pc = 0x1cf9bcu;
    // NOP
}
