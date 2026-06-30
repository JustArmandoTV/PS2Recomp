#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00174608
// Address: 0x174608 - 0x1746a0
void sub_00174608_0x174608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174608_0x174608");
#endif

    switch (ctx->pc) {
        case 0x174654u: goto label_174654;
        case 0x17467cu: goto label_17467c;
        case 0x174684u: goto label_174684;
        case 0x17468cu: goto label_17468c;
        default: break;
    }

    ctx->pc = 0x174608u;

    // 0x174608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17460c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x17460cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174610: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x174610u;
    {
        const bool branch_taken_0x174610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x174614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174610u;
            // 0x174614: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174610) {
            ctx->pc = 0x174630u;
            goto label_174630;
        }
    }
    ctx->pc = 0x174618u;
    // 0x174618: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x174618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17461c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17461cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174620: 0x248444e8  addiu       $a0, $a0, 0x44E8
    ctx->pc = 0x174620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17640));
    // 0x174624: 0x8059f4e  j           func_167D38
    ctx->pc = 0x174624u;
    ctx->pc = 0x174628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174624u;
            // 0x174628: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17462Cu;
    // 0x17462c: 0x0  nop
    ctx->pc = 0x17462cu;
    // NOP
label_174630:
    // 0x174630: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x174630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x174634: 0xa465003e  sh          $a1, 0x3E($v1)
    ctx->pc = 0x174634u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 62), (uint16_t)GPR_U32(ctx, 5));
    // 0x174638: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x174638u;
    {
        const bool branch_taken_0x174638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17463Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174638u;
            // 0x17463c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174638) {
            ctx->pc = 0x174654u;
            goto label_174654;
        }
    }
    ctx->pc = 0x174640u;
    // 0x174640: 0x8466003c  lh          $a2, 0x3C($v1)
    ctx->pc = 0x174640u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x174644: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x174644u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x174648: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x174648u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
    // 0x17464c: 0xc05c67e  jal         func_1719F8
    ctx->pc = 0x17464Cu;
    SET_GPR_U32(ctx, 31, 0x174654u);
    ctx->pc = 0x174650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17464Cu;
            // 0x174650: 0x632c0  sll         $a2, $a2, 11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1719F8u;
    if (runtime->hasFunction(0x1719F8u)) {
        auto targetFn = runtime->lookupFunction(0x1719F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174654u; }
        if (ctx->pc != 0x174654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001719F8_0x1719f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174654u; }
        if (ctx->pc != 0x174654u) { return; }
    }
    ctx->pc = 0x174654u;
label_174654:
    // 0x174654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174658: 0x3e00008  jr          $ra
    ctx->pc = 0x174658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17465Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174658u;
            // 0x17465c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174660u;
    // 0x174660: 0x3e00008  jr          $ra
    ctx->pc = 0x174660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174660u;
            // 0x174664: 0x8482003e  lh          $v0, 0x3E($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 62)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174668u;
    // 0x174668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17466c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17466cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174670: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x174670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x174674: 0xc0599de  jal         func_166778
    ctx->pc = 0x174674u;
    SET_GPR_U32(ctx, 31, 0x17467Cu);
    ctx->pc = 0x174678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174674u;
            // 0x174678: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17467Cu; }
        if (ctx->pc != 0x17467Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17467Cu; }
        if (ctx->pc != 0x17467Cu) { return; }
    }
    ctx->pc = 0x17467Cu;
label_17467c:
    // 0x17467c: 0xc05d1a8  jal         func_1746A0
    ctx->pc = 0x17467Cu;
    SET_GPR_U32(ctx, 31, 0x174684u);
    ctx->pc = 0x174680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17467Cu;
            // 0x174680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1746A0u;
    if (runtime->hasFunction(0x1746A0u)) {
        auto targetFn = runtime->lookupFunction(0x1746A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174684u; }
        if (ctx->pc != 0x174684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001746A0_0x1746a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174684u; }
        if (ctx->pc != 0x174684u) { return; }
    }
    ctx->pc = 0x174684u;
label_174684:
    // 0x174684: 0xc0599e0  jal         func_166780
    ctx->pc = 0x174684u;
    SET_GPR_U32(ctx, 31, 0x17468Cu);
    ctx->pc = 0x174688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174684u;
            // 0x174688: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17468Cu; }
        if (ctx->pc != 0x17468Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17468Cu; }
        if (ctx->pc != 0x17468Cu) { return; }
    }
    ctx->pc = 0x17468Cu;
label_17468c:
    // 0x17468c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17468cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174690: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x174690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174694: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x174694u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174698: 0x3e00008  jr          $ra
    ctx->pc = 0x174698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17469Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174698u;
            // 0x17469c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1746A0u;
}
