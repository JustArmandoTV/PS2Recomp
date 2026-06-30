#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00535620
// Address: 0x535620 - 0x5356e0
void sub_00535620_0x535620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00535620_0x535620");
#endif

    switch (ctx->pc) {
        case 0x5356a4u: goto label_5356a4;
        default: break;
    }

    ctx->pc = 0x535620u;

    // 0x535620: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x535620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x535624: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x535624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x535628: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x535628u;
    {
        const bool branch_taken_0x535628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x535628) {
            ctx->pc = 0x53562Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x535628u;
            // 0x53562c: 0x8c83003c  lw          $v1, 0x3C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x535640u;
            goto label_535640;
        }
    }
    ctx->pc = 0x535630u;
    // 0x535630: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x535630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x535634: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x535634u;
    {
        const bool branch_taken_0x535634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x535634) {
            ctx->pc = 0x535638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x535634u;
            // 0x535638: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x535650u;
            goto label_535650;
        }
    }
    ctx->pc = 0x53563Cu;
    // 0x53563c: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x53563cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_535640:
    // 0x535640: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x535640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x535644: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x535644u;
    {
        const bool branch_taken_0x535644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x535644) {
            ctx->pc = 0x535648u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x535644u;
            // 0x535648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x535650u;
            goto label_535650;
        }
    }
    ctx->pc = 0x53564Cu;
    // 0x53564c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x53564cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_535650:
    // 0x535650: 0x3e00008  jr          $ra
    ctx->pc = 0x535650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x535658u;
    // 0x535658: 0x0  nop
    ctx->pc = 0x535658u;
    // NOP
    // 0x53565c: 0x0  nop
    ctx->pc = 0x53565cu;
    // NOP
    // 0x535660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x535660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x535664: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x535664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x535668: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x535668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x53566c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53566cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x535670: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x535670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x535674: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x535674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x535678: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x535678u;
    {
        const bool branch_taken_0x535678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x53567Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535678u;
            // 0x53567c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535678) {
            ctx->pc = 0x53568Cu;
            goto label_53568c;
        }
    }
    ctx->pc = 0x535680u;
    // 0x535680: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x535680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x535684: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x535684u;
    {
        const bool branch_taken_0x535684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x535688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535684u;
            // 0x535688: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535684) {
            ctx->pc = 0x5356C8u;
            goto label_5356c8;
        }
    }
    ctx->pc = 0x53568Cu;
label_53568c:
    // 0x53568c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x53568cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x535690: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x535690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x535694: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x535694u;
    {
        const bool branch_taken_0x535694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x535694) {
            ctx->pc = 0x535698u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x535694u;
            // 0x535698: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5356C0u;
            goto label_5356c0;
        }
    }
    ctx->pc = 0x53569Cu;
    // 0x53569c: 0xc14d5b8  jal         func_5356E0
    ctx->pc = 0x53569Cu;
    SET_GPR_U32(ctx, 31, 0x5356A4u);
    ctx->pc = 0x5356E0u;
    if (runtime->hasFunction(0x5356E0u)) {
        auto targetFn = runtime->lookupFunction(0x5356E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5356A4u; }
        if (ctx->pc != 0x5356A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005356E0_0x5356e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5356A4u; }
        if (ctx->pc != 0x5356A4u) { return; }
    }
    ctx->pc = 0x5356A4u;
label_5356a4:
    // 0x5356a4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x5356a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x5356a8: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x5356a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x5356ac: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x5356ACu;
    {
        const bool branch_taken_0x5356ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x5356ac) {
            ctx->pc = 0x5356BCu;
            goto label_5356bc;
        }
    }
    ctx->pc = 0x5356B4u;
    // 0x5356b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x5356B4u;
    {
        const bool branch_taken_0x5356b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5356B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5356B4u;
            // 0x5356b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5356b4) {
            ctx->pc = 0x5356C8u;
            goto label_5356c8;
        }
    }
    ctx->pc = 0x5356BCu;
label_5356bc:
    // 0x5356bc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x5356bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_5356c0:
    // 0x5356c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5356c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x5356c4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5356c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_5356c8:
    // 0x5356c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5356c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5356cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5356ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5356d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5356d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5356d4: 0x3e00008  jr          $ra
    ctx->pc = 0x5356D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5356D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5356D4u;
            // 0x5356d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5356DCu;
    // 0x5356dc: 0x0  nop
    ctx->pc = 0x5356dcu;
    // NOP
}
